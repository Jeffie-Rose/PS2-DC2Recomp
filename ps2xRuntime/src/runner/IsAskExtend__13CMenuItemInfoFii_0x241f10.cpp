#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsAskExtend__13CMenuItemInfoFii
// Address: 0x241f10 - 0x24299c
void IsAskExtend__13CMenuItemInfoFii_0x241f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsAskExtend__13CMenuItemInfoFii_0x241f10");
#endif

    switch (ctx->pc) {
        case 0x241f10u: goto label_241f10;
        case 0x241f14u: goto label_241f14;
        case 0x241f18u: goto label_241f18;
        case 0x241f1cu: goto label_241f1c;
        case 0x241f20u: goto label_241f20;
        case 0x241f24u: goto label_241f24;
        case 0x241f28u: goto label_241f28;
        case 0x241f2cu: goto label_241f2c;
        case 0x241f30u: goto label_241f30;
        case 0x241f34u: goto label_241f34;
        case 0x241f38u: goto label_241f38;
        case 0x241f3cu: goto label_241f3c;
        case 0x241f40u: goto label_241f40;
        case 0x241f44u: goto label_241f44;
        case 0x241f48u: goto label_241f48;
        case 0x241f4cu: goto label_241f4c;
        case 0x241f50u: goto label_241f50;
        case 0x241f54u: goto label_241f54;
        case 0x241f58u: goto label_241f58;
        case 0x241f5cu: goto label_241f5c;
        case 0x241f60u: goto label_241f60;
        case 0x241f64u: goto label_241f64;
        case 0x241f68u: goto label_241f68;
        case 0x241f6cu: goto label_241f6c;
        case 0x241f70u: goto label_241f70;
        case 0x241f74u: goto label_241f74;
        case 0x241f78u: goto label_241f78;
        case 0x241f7cu: goto label_241f7c;
        case 0x241f80u: goto label_241f80;
        case 0x241f84u: goto label_241f84;
        case 0x241f88u: goto label_241f88;
        case 0x241f8cu: goto label_241f8c;
        case 0x241f90u: goto label_241f90;
        case 0x241f94u: goto label_241f94;
        case 0x241f98u: goto label_241f98;
        case 0x241f9cu: goto label_241f9c;
        case 0x241fa0u: goto label_241fa0;
        case 0x241fa4u: goto label_241fa4;
        case 0x241fa8u: goto label_241fa8;
        case 0x241facu: goto label_241fac;
        case 0x241fb0u: goto label_241fb0;
        case 0x241fb4u: goto label_241fb4;
        case 0x241fb8u: goto label_241fb8;
        case 0x241fbcu: goto label_241fbc;
        case 0x241fc0u: goto label_241fc0;
        case 0x241fc4u: goto label_241fc4;
        case 0x241fc8u: goto label_241fc8;
        case 0x241fccu: goto label_241fcc;
        case 0x241fd0u: goto label_241fd0;
        case 0x241fd4u: goto label_241fd4;
        case 0x241fd8u: goto label_241fd8;
        case 0x241fdcu: goto label_241fdc;
        case 0x241fe0u: goto label_241fe0;
        case 0x241fe4u: goto label_241fe4;
        case 0x241fe8u: goto label_241fe8;
        case 0x241fecu: goto label_241fec;
        case 0x241ff0u: goto label_241ff0;
        case 0x241ff4u: goto label_241ff4;
        case 0x241ff8u: goto label_241ff8;
        case 0x241ffcu: goto label_241ffc;
        case 0x242000u: goto label_242000;
        case 0x242004u: goto label_242004;
        case 0x242008u: goto label_242008;
        case 0x24200cu: goto label_24200c;
        case 0x242010u: goto label_242010;
        case 0x242014u: goto label_242014;
        case 0x242018u: goto label_242018;
        case 0x24201cu: goto label_24201c;
        case 0x242020u: goto label_242020;
        case 0x242024u: goto label_242024;
        case 0x242028u: goto label_242028;
        case 0x24202cu: goto label_24202c;
        case 0x242030u: goto label_242030;
        case 0x242034u: goto label_242034;
        case 0x242038u: goto label_242038;
        case 0x24203cu: goto label_24203c;
        case 0x242040u: goto label_242040;
        case 0x242044u: goto label_242044;
        case 0x242048u: goto label_242048;
        case 0x24204cu: goto label_24204c;
        case 0x242050u: goto label_242050;
        case 0x242054u: goto label_242054;
        case 0x242058u: goto label_242058;
        case 0x24205cu: goto label_24205c;
        case 0x242060u: goto label_242060;
        case 0x242064u: goto label_242064;
        case 0x242068u: goto label_242068;
        case 0x24206cu: goto label_24206c;
        case 0x242070u: goto label_242070;
        case 0x242074u: goto label_242074;
        case 0x242078u: goto label_242078;
        case 0x24207cu: goto label_24207c;
        case 0x242080u: goto label_242080;
        case 0x242084u: goto label_242084;
        case 0x242088u: goto label_242088;
        case 0x24208cu: goto label_24208c;
        case 0x242090u: goto label_242090;
        case 0x242094u: goto label_242094;
        case 0x242098u: goto label_242098;
        case 0x24209cu: goto label_24209c;
        case 0x2420a0u: goto label_2420a0;
        case 0x2420a4u: goto label_2420a4;
        case 0x2420a8u: goto label_2420a8;
        case 0x2420acu: goto label_2420ac;
        case 0x2420b0u: goto label_2420b0;
        case 0x2420b4u: goto label_2420b4;
        case 0x2420b8u: goto label_2420b8;
        case 0x2420bcu: goto label_2420bc;
        case 0x2420c0u: goto label_2420c0;
        case 0x2420c4u: goto label_2420c4;
        case 0x2420c8u: goto label_2420c8;
        case 0x2420ccu: goto label_2420cc;
        case 0x2420d0u: goto label_2420d0;
        case 0x2420d4u: goto label_2420d4;
        case 0x2420d8u: goto label_2420d8;
        case 0x2420dcu: goto label_2420dc;
        case 0x2420e0u: goto label_2420e0;
        case 0x2420e4u: goto label_2420e4;
        case 0x2420e8u: goto label_2420e8;
        case 0x2420ecu: goto label_2420ec;
        case 0x2420f0u: goto label_2420f0;
        case 0x2420f4u: goto label_2420f4;
        case 0x2420f8u: goto label_2420f8;
        case 0x2420fcu: goto label_2420fc;
        case 0x242100u: goto label_242100;
        case 0x242104u: goto label_242104;
        case 0x242108u: goto label_242108;
        case 0x24210cu: goto label_24210c;
        case 0x242110u: goto label_242110;
        case 0x242114u: goto label_242114;
        case 0x242118u: goto label_242118;
        case 0x24211cu: goto label_24211c;
        case 0x242120u: goto label_242120;
        case 0x242124u: goto label_242124;
        case 0x242128u: goto label_242128;
        case 0x24212cu: goto label_24212c;
        case 0x242130u: goto label_242130;
        case 0x242134u: goto label_242134;
        case 0x242138u: goto label_242138;
        case 0x24213cu: goto label_24213c;
        case 0x242140u: goto label_242140;
        case 0x242144u: goto label_242144;
        case 0x242148u: goto label_242148;
        case 0x24214cu: goto label_24214c;
        case 0x242150u: goto label_242150;
        case 0x242154u: goto label_242154;
        case 0x242158u: goto label_242158;
        case 0x24215cu: goto label_24215c;
        case 0x242160u: goto label_242160;
        case 0x242164u: goto label_242164;
        case 0x242168u: goto label_242168;
        case 0x24216cu: goto label_24216c;
        case 0x242170u: goto label_242170;
        case 0x242174u: goto label_242174;
        case 0x242178u: goto label_242178;
        case 0x24217cu: goto label_24217c;
        case 0x242180u: goto label_242180;
        case 0x242184u: goto label_242184;
        case 0x242188u: goto label_242188;
        case 0x24218cu: goto label_24218c;
        case 0x242190u: goto label_242190;
        case 0x242194u: goto label_242194;
        case 0x242198u: goto label_242198;
        case 0x24219cu: goto label_24219c;
        case 0x2421a0u: goto label_2421a0;
        case 0x2421a4u: goto label_2421a4;
        case 0x2421a8u: goto label_2421a8;
        case 0x2421acu: goto label_2421ac;
        case 0x2421b0u: goto label_2421b0;
        case 0x2421b4u: goto label_2421b4;
        case 0x2421b8u: goto label_2421b8;
        case 0x2421bcu: goto label_2421bc;
        case 0x2421c0u: goto label_2421c0;
        case 0x2421c4u: goto label_2421c4;
        case 0x2421c8u: goto label_2421c8;
        case 0x2421ccu: goto label_2421cc;
        case 0x2421d0u: goto label_2421d0;
        case 0x2421d4u: goto label_2421d4;
        case 0x2421d8u: goto label_2421d8;
        case 0x2421dcu: goto label_2421dc;
        case 0x2421e0u: goto label_2421e0;
        case 0x2421e4u: goto label_2421e4;
        case 0x2421e8u: goto label_2421e8;
        case 0x2421ecu: goto label_2421ec;
        case 0x2421f0u: goto label_2421f0;
        case 0x2421f4u: goto label_2421f4;
        case 0x2421f8u: goto label_2421f8;
        case 0x2421fcu: goto label_2421fc;
        case 0x242200u: goto label_242200;
        case 0x242204u: goto label_242204;
        case 0x242208u: goto label_242208;
        case 0x24220cu: goto label_24220c;
        case 0x242210u: goto label_242210;
        case 0x242214u: goto label_242214;
        case 0x242218u: goto label_242218;
        case 0x24221cu: goto label_24221c;
        case 0x242220u: goto label_242220;
        case 0x242224u: goto label_242224;
        case 0x242228u: goto label_242228;
        case 0x24222cu: goto label_24222c;
        case 0x242230u: goto label_242230;
        case 0x242234u: goto label_242234;
        case 0x242238u: goto label_242238;
        case 0x24223cu: goto label_24223c;
        case 0x242240u: goto label_242240;
        case 0x242244u: goto label_242244;
        case 0x242248u: goto label_242248;
        case 0x24224cu: goto label_24224c;
        case 0x242250u: goto label_242250;
        case 0x242254u: goto label_242254;
        case 0x242258u: goto label_242258;
        case 0x24225cu: goto label_24225c;
        case 0x242260u: goto label_242260;
        case 0x242264u: goto label_242264;
        case 0x242268u: goto label_242268;
        case 0x24226cu: goto label_24226c;
        case 0x242270u: goto label_242270;
        case 0x242274u: goto label_242274;
        case 0x242278u: goto label_242278;
        case 0x24227cu: goto label_24227c;
        case 0x242280u: goto label_242280;
        case 0x242284u: goto label_242284;
        case 0x242288u: goto label_242288;
        case 0x24228cu: goto label_24228c;
        case 0x242290u: goto label_242290;
        case 0x242294u: goto label_242294;
        case 0x242298u: goto label_242298;
        case 0x24229cu: goto label_24229c;
        case 0x2422a0u: goto label_2422a0;
        case 0x2422a4u: goto label_2422a4;
        case 0x2422a8u: goto label_2422a8;
        case 0x2422acu: goto label_2422ac;
        case 0x2422b0u: goto label_2422b0;
        case 0x2422b4u: goto label_2422b4;
        case 0x2422b8u: goto label_2422b8;
        case 0x2422bcu: goto label_2422bc;
        case 0x2422c0u: goto label_2422c0;
        case 0x2422c4u: goto label_2422c4;
        case 0x2422c8u: goto label_2422c8;
        case 0x2422ccu: goto label_2422cc;
        case 0x2422d0u: goto label_2422d0;
        case 0x2422d4u: goto label_2422d4;
        case 0x2422d8u: goto label_2422d8;
        case 0x2422dcu: goto label_2422dc;
        case 0x2422e0u: goto label_2422e0;
        case 0x2422e4u: goto label_2422e4;
        case 0x2422e8u: goto label_2422e8;
        case 0x2422ecu: goto label_2422ec;
        case 0x2422f0u: goto label_2422f0;
        case 0x2422f4u: goto label_2422f4;
        case 0x2422f8u: goto label_2422f8;
        case 0x2422fcu: goto label_2422fc;
        case 0x242300u: goto label_242300;
        case 0x242304u: goto label_242304;
        case 0x242308u: goto label_242308;
        case 0x24230cu: goto label_24230c;
        case 0x242310u: goto label_242310;
        case 0x242314u: goto label_242314;
        case 0x242318u: goto label_242318;
        case 0x24231cu: goto label_24231c;
        case 0x242320u: goto label_242320;
        case 0x242324u: goto label_242324;
        case 0x242328u: goto label_242328;
        case 0x24232cu: goto label_24232c;
        case 0x242330u: goto label_242330;
        case 0x242334u: goto label_242334;
        case 0x242338u: goto label_242338;
        case 0x24233cu: goto label_24233c;
        case 0x242340u: goto label_242340;
        case 0x242344u: goto label_242344;
        case 0x242348u: goto label_242348;
        case 0x24234cu: goto label_24234c;
        case 0x242350u: goto label_242350;
        case 0x242354u: goto label_242354;
        case 0x242358u: goto label_242358;
        case 0x24235cu: goto label_24235c;
        case 0x242360u: goto label_242360;
        case 0x242364u: goto label_242364;
        case 0x242368u: goto label_242368;
        case 0x24236cu: goto label_24236c;
        case 0x242370u: goto label_242370;
        case 0x242374u: goto label_242374;
        case 0x242378u: goto label_242378;
        case 0x24237cu: goto label_24237c;
        case 0x242380u: goto label_242380;
        case 0x242384u: goto label_242384;
        case 0x242388u: goto label_242388;
        case 0x24238cu: goto label_24238c;
        case 0x242390u: goto label_242390;
        case 0x242394u: goto label_242394;
        case 0x242398u: goto label_242398;
        case 0x24239cu: goto label_24239c;
        case 0x2423a0u: goto label_2423a0;
        case 0x2423a4u: goto label_2423a4;
        case 0x2423a8u: goto label_2423a8;
        case 0x2423acu: goto label_2423ac;
        case 0x2423b0u: goto label_2423b0;
        case 0x2423b4u: goto label_2423b4;
        case 0x2423b8u: goto label_2423b8;
        case 0x2423bcu: goto label_2423bc;
        case 0x2423c0u: goto label_2423c0;
        case 0x2423c4u: goto label_2423c4;
        case 0x2423c8u: goto label_2423c8;
        case 0x2423ccu: goto label_2423cc;
        case 0x2423d0u: goto label_2423d0;
        case 0x2423d4u: goto label_2423d4;
        case 0x2423d8u: goto label_2423d8;
        case 0x2423dcu: goto label_2423dc;
        case 0x2423e0u: goto label_2423e0;
        case 0x2423e4u: goto label_2423e4;
        case 0x2423e8u: goto label_2423e8;
        case 0x2423ecu: goto label_2423ec;
        case 0x2423f0u: goto label_2423f0;
        case 0x2423f4u: goto label_2423f4;
        case 0x2423f8u: goto label_2423f8;
        case 0x2423fcu: goto label_2423fc;
        case 0x242400u: goto label_242400;
        case 0x242404u: goto label_242404;
        case 0x242408u: goto label_242408;
        case 0x24240cu: goto label_24240c;
        case 0x242410u: goto label_242410;
        case 0x242414u: goto label_242414;
        case 0x242418u: goto label_242418;
        case 0x24241cu: goto label_24241c;
        case 0x242420u: goto label_242420;
        case 0x242424u: goto label_242424;
        case 0x242428u: goto label_242428;
        case 0x24242cu: goto label_24242c;
        case 0x242430u: goto label_242430;
        case 0x242434u: goto label_242434;
        case 0x242438u: goto label_242438;
        case 0x24243cu: goto label_24243c;
        case 0x242440u: goto label_242440;
        case 0x242444u: goto label_242444;
        case 0x242448u: goto label_242448;
        case 0x24244cu: goto label_24244c;
        case 0x242450u: goto label_242450;
        case 0x242454u: goto label_242454;
        case 0x242458u: goto label_242458;
        case 0x24245cu: goto label_24245c;
        case 0x242460u: goto label_242460;
        case 0x242464u: goto label_242464;
        case 0x242468u: goto label_242468;
        case 0x24246cu: goto label_24246c;
        case 0x242470u: goto label_242470;
        case 0x242474u: goto label_242474;
        case 0x242478u: goto label_242478;
        case 0x24247cu: goto label_24247c;
        case 0x242480u: goto label_242480;
        case 0x242484u: goto label_242484;
        case 0x242488u: goto label_242488;
        case 0x24248cu: goto label_24248c;
        case 0x242490u: goto label_242490;
        case 0x242494u: goto label_242494;
        case 0x242498u: goto label_242498;
        case 0x24249cu: goto label_24249c;
        case 0x2424a0u: goto label_2424a0;
        case 0x2424a4u: goto label_2424a4;
        case 0x2424a8u: goto label_2424a8;
        case 0x2424acu: goto label_2424ac;
        case 0x2424b0u: goto label_2424b0;
        case 0x2424b4u: goto label_2424b4;
        case 0x2424b8u: goto label_2424b8;
        case 0x2424bcu: goto label_2424bc;
        case 0x2424c0u: goto label_2424c0;
        case 0x2424c4u: goto label_2424c4;
        case 0x2424c8u: goto label_2424c8;
        case 0x2424ccu: goto label_2424cc;
        case 0x2424d0u: goto label_2424d0;
        case 0x2424d4u: goto label_2424d4;
        case 0x2424d8u: goto label_2424d8;
        case 0x2424dcu: goto label_2424dc;
        case 0x2424e0u: goto label_2424e0;
        case 0x2424e4u: goto label_2424e4;
        case 0x2424e8u: goto label_2424e8;
        case 0x2424ecu: goto label_2424ec;
        case 0x2424f0u: goto label_2424f0;
        case 0x2424f4u: goto label_2424f4;
        case 0x2424f8u: goto label_2424f8;
        case 0x2424fcu: goto label_2424fc;
        case 0x242500u: goto label_242500;
        case 0x242504u: goto label_242504;
        case 0x242508u: goto label_242508;
        case 0x24250cu: goto label_24250c;
        case 0x242510u: goto label_242510;
        case 0x242514u: goto label_242514;
        case 0x242518u: goto label_242518;
        case 0x24251cu: goto label_24251c;
        case 0x242520u: goto label_242520;
        case 0x242524u: goto label_242524;
        case 0x242528u: goto label_242528;
        case 0x24252cu: goto label_24252c;
        case 0x242530u: goto label_242530;
        case 0x242534u: goto label_242534;
        case 0x242538u: goto label_242538;
        case 0x24253cu: goto label_24253c;
        case 0x242540u: goto label_242540;
        case 0x242544u: goto label_242544;
        case 0x242548u: goto label_242548;
        case 0x24254cu: goto label_24254c;
        case 0x242550u: goto label_242550;
        case 0x242554u: goto label_242554;
        case 0x242558u: goto label_242558;
        case 0x24255cu: goto label_24255c;
        case 0x242560u: goto label_242560;
        case 0x242564u: goto label_242564;
        case 0x242568u: goto label_242568;
        case 0x24256cu: goto label_24256c;
        case 0x242570u: goto label_242570;
        case 0x242574u: goto label_242574;
        case 0x242578u: goto label_242578;
        case 0x24257cu: goto label_24257c;
        case 0x242580u: goto label_242580;
        case 0x242584u: goto label_242584;
        case 0x242588u: goto label_242588;
        case 0x24258cu: goto label_24258c;
        case 0x242590u: goto label_242590;
        case 0x242594u: goto label_242594;
        case 0x242598u: goto label_242598;
        case 0x24259cu: goto label_24259c;
        case 0x2425a0u: goto label_2425a0;
        case 0x2425a4u: goto label_2425a4;
        case 0x2425a8u: goto label_2425a8;
        case 0x2425acu: goto label_2425ac;
        case 0x2425b0u: goto label_2425b0;
        case 0x2425b4u: goto label_2425b4;
        case 0x2425b8u: goto label_2425b8;
        case 0x2425bcu: goto label_2425bc;
        case 0x2425c0u: goto label_2425c0;
        case 0x2425c4u: goto label_2425c4;
        case 0x2425c8u: goto label_2425c8;
        case 0x2425ccu: goto label_2425cc;
        case 0x2425d0u: goto label_2425d0;
        case 0x2425d4u: goto label_2425d4;
        case 0x2425d8u: goto label_2425d8;
        case 0x2425dcu: goto label_2425dc;
        case 0x2425e0u: goto label_2425e0;
        case 0x2425e4u: goto label_2425e4;
        case 0x2425e8u: goto label_2425e8;
        case 0x2425ecu: goto label_2425ec;
        case 0x2425f0u: goto label_2425f0;
        case 0x2425f4u: goto label_2425f4;
        case 0x2425f8u: goto label_2425f8;
        case 0x2425fcu: goto label_2425fc;
        case 0x242600u: goto label_242600;
        case 0x242604u: goto label_242604;
        case 0x242608u: goto label_242608;
        case 0x24260cu: goto label_24260c;
        case 0x242610u: goto label_242610;
        case 0x242614u: goto label_242614;
        case 0x242618u: goto label_242618;
        case 0x24261cu: goto label_24261c;
        case 0x242620u: goto label_242620;
        case 0x242624u: goto label_242624;
        case 0x242628u: goto label_242628;
        case 0x24262cu: goto label_24262c;
        case 0x242630u: goto label_242630;
        case 0x242634u: goto label_242634;
        case 0x242638u: goto label_242638;
        case 0x24263cu: goto label_24263c;
        case 0x242640u: goto label_242640;
        case 0x242644u: goto label_242644;
        case 0x242648u: goto label_242648;
        case 0x24264cu: goto label_24264c;
        case 0x242650u: goto label_242650;
        case 0x242654u: goto label_242654;
        case 0x242658u: goto label_242658;
        case 0x24265cu: goto label_24265c;
        case 0x242660u: goto label_242660;
        case 0x242664u: goto label_242664;
        case 0x242668u: goto label_242668;
        case 0x24266cu: goto label_24266c;
        case 0x242670u: goto label_242670;
        case 0x242674u: goto label_242674;
        case 0x242678u: goto label_242678;
        case 0x24267cu: goto label_24267c;
        case 0x242680u: goto label_242680;
        case 0x242684u: goto label_242684;
        case 0x242688u: goto label_242688;
        case 0x24268cu: goto label_24268c;
        case 0x242690u: goto label_242690;
        case 0x242694u: goto label_242694;
        case 0x242698u: goto label_242698;
        case 0x24269cu: goto label_24269c;
        case 0x2426a0u: goto label_2426a0;
        case 0x2426a4u: goto label_2426a4;
        case 0x2426a8u: goto label_2426a8;
        case 0x2426acu: goto label_2426ac;
        case 0x2426b0u: goto label_2426b0;
        case 0x2426b4u: goto label_2426b4;
        case 0x2426b8u: goto label_2426b8;
        case 0x2426bcu: goto label_2426bc;
        case 0x2426c0u: goto label_2426c0;
        case 0x2426c4u: goto label_2426c4;
        case 0x2426c8u: goto label_2426c8;
        case 0x2426ccu: goto label_2426cc;
        case 0x2426d0u: goto label_2426d0;
        case 0x2426d4u: goto label_2426d4;
        case 0x2426d8u: goto label_2426d8;
        case 0x2426dcu: goto label_2426dc;
        case 0x2426e0u: goto label_2426e0;
        case 0x2426e4u: goto label_2426e4;
        case 0x2426e8u: goto label_2426e8;
        case 0x2426ecu: goto label_2426ec;
        case 0x2426f0u: goto label_2426f0;
        case 0x2426f4u: goto label_2426f4;
        case 0x2426f8u: goto label_2426f8;
        case 0x2426fcu: goto label_2426fc;
        case 0x242700u: goto label_242700;
        case 0x242704u: goto label_242704;
        case 0x242708u: goto label_242708;
        case 0x24270cu: goto label_24270c;
        case 0x242710u: goto label_242710;
        case 0x242714u: goto label_242714;
        case 0x242718u: goto label_242718;
        case 0x24271cu: goto label_24271c;
        case 0x242720u: goto label_242720;
        case 0x242724u: goto label_242724;
        case 0x242728u: goto label_242728;
        case 0x24272cu: goto label_24272c;
        case 0x242730u: goto label_242730;
        case 0x242734u: goto label_242734;
        case 0x242738u: goto label_242738;
        case 0x24273cu: goto label_24273c;
        case 0x242740u: goto label_242740;
        case 0x242744u: goto label_242744;
        case 0x242748u: goto label_242748;
        case 0x24274cu: goto label_24274c;
        case 0x242750u: goto label_242750;
        case 0x242754u: goto label_242754;
        case 0x242758u: goto label_242758;
        case 0x24275cu: goto label_24275c;
        case 0x242760u: goto label_242760;
        case 0x242764u: goto label_242764;
        case 0x242768u: goto label_242768;
        case 0x24276cu: goto label_24276c;
        case 0x242770u: goto label_242770;
        case 0x242774u: goto label_242774;
        case 0x242778u: goto label_242778;
        case 0x24277cu: goto label_24277c;
        case 0x242780u: goto label_242780;
        case 0x242784u: goto label_242784;
        case 0x242788u: goto label_242788;
        case 0x24278cu: goto label_24278c;
        case 0x242790u: goto label_242790;
        case 0x242794u: goto label_242794;
        case 0x242798u: goto label_242798;
        case 0x24279cu: goto label_24279c;
        case 0x2427a0u: goto label_2427a0;
        case 0x2427a4u: goto label_2427a4;
        case 0x2427a8u: goto label_2427a8;
        case 0x2427acu: goto label_2427ac;
        case 0x2427b0u: goto label_2427b0;
        case 0x2427b4u: goto label_2427b4;
        case 0x2427b8u: goto label_2427b8;
        case 0x2427bcu: goto label_2427bc;
        case 0x2427c0u: goto label_2427c0;
        case 0x2427c4u: goto label_2427c4;
        case 0x2427c8u: goto label_2427c8;
        case 0x2427ccu: goto label_2427cc;
        case 0x2427d0u: goto label_2427d0;
        case 0x2427d4u: goto label_2427d4;
        case 0x2427d8u: goto label_2427d8;
        case 0x2427dcu: goto label_2427dc;
        case 0x2427e0u: goto label_2427e0;
        case 0x2427e4u: goto label_2427e4;
        case 0x2427e8u: goto label_2427e8;
        case 0x2427ecu: goto label_2427ec;
        case 0x2427f0u: goto label_2427f0;
        case 0x2427f4u: goto label_2427f4;
        case 0x2427f8u: goto label_2427f8;
        case 0x2427fcu: goto label_2427fc;
        case 0x242800u: goto label_242800;
        case 0x242804u: goto label_242804;
        case 0x242808u: goto label_242808;
        case 0x24280cu: goto label_24280c;
        case 0x242810u: goto label_242810;
        case 0x242814u: goto label_242814;
        case 0x242818u: goto label_242818;
        case 0x24281cu: goto label_24281c;
        case 0x242820u: goto label_242820;
        case 0x242824u: goto label_242824;
        case 0x242828u: goto label_242828;
        case 0x24282cu: goto label_24282c;
        case 0x242830u: goto label_242830;
        case 0x242834u: goto label_242834;
        case 0x242838u: goto label_242838;
        case 0x24283cu: goto label_24283c;
        case 0x242840u: goto label_242840;
        case 0x242844u: goto label_242844;
        case 0x242848u: goto label_242848;
        case 0x24284cu: goto label_24284c;
        case 0x242850u: goto label_242850;
        case 0x242854u: goto label_242854;
        case 0x242858u: goto label_242858;
        case 0x24285cu: goto label_24285c;
        case 0x242860u: goto label_242860;
        case 0x242864u: goto label_242864;
        case 0x242868u: goto label_242868;
        case 0x24286cu: goto label_24286c;
        case 0x242870u: goto label_242870;
        case 0x242874u: goto label_242874;
        case 0x242878u: goto label_242878;
        case 0x24287cu: goto label_24287c;
        case 0x242880u: goto label_242880;
        case 0x242884u: goto label_242884;
        case 0x242888u: goto label_242888;
        case 0x24288cu: goto label_24288c;
        case 0x242890u: goto label_242890;
        case 0x242894u: goto label_242894;
        case 0x242898u: goto label_242898;
        case 0x24289cu: goto label_24289c;
        case 0x2428a0u: goto label_2428a0;
        case 0x2428a4u: goto label_2428a4;
        case 0x2428a8u: goto label_2428a8;
        case 0x2428acu: goto label_2428ac;
        case 0x2428b0u: goto label_2428b0;
        case 0x2428b4u: goto label_2428b4;
        case 0x2428b8u: goto label_2428b8;
        case 0x2428bcu: goto label_2428bc;
        case 0x2428c0u: goto label_2428c0;
        case 0x2428c4u: goto label_2428c4;
        case 0x2428c8u: goto label_2428c8;
        case 0x2428ccu: goto label_2428cc;
        case 0x2428d0u: goto label_2428d0;
        case 0x2428d4u: goto label_2428d4;
        case 0x2428d8u: goto label_2428d8;
        case 0x2428dcu: goto label_2428dc;
        case 0x2428e0u: goto label_2428e0;
        case 0x2428e4u: goto label_2428e4;
        case 0x2428e8u: goto label_2428e8;
        case 0x2428ecu: goto label_2428ec;
        case 0x2428f0u: goto label_2428f0;
        case 0x2428f4u: goto label_2428f4;
        case 0x2428f8u: goto label_2428f8;
        case 0x2428fcu: goto label_2428fc;
        case 0x242900u: goto label_242900;
        case 0x242904u: goto label_242904;
        case 0x242908u: goto label_242908;
        case 0x24290cu: goto label_24290c;
        case 0x242910u: goto label_242910;
        case 0x242914u: goto label_242914;
        case 0x242918u: goto label_242918;
        case 0x24291cu: goto label_24291c;
        case 0x242920u: goto label_242920;
        case 0x242924u: goto label_242924;
        case 0x242928u: goto label_242928;
        case 0x24292cu: goto label_24292c;
        case 0x242930u: goto label_242930;
        case 0x242934u: goto label_242934;
        case 0x242938u: goto label_242938;
        case 0x24293cu: goto label_24293c;
        case 0x242940u: goto label_242940;
        case 0x242944u: goto label_242944;
        case 0x242948u: goto label_242948;
        case 0x24294cu: goto label_24294c;
        case 0x242950u: goto label_242950;
        case 0x242954u: goto label_242954;
        case 0x242958u: goto label_242958;
        case 0x24295cu: goto label_24295c;
        case 0x242960u: goto label_242960;
        case 0x242964u: goto label_242964;
        case 0x242968u: goto label_242968;
        case 0x24296cu: goto label_24296c;
        case 0x242970u: goto label_242970;
        case 0x242974u: goto label_242974;
        case 0x242978u: goto label_242978;
        case 0x24297cu: goto label_24297c;
        case 0x242980u: goto label_242980;
        case 0x242984u: goto label_242984;
        case 0x242988u: goto label_242988;
        case 0x24298cu: goto label_24298c;
        case 0x242990u: goto label_242990;
        case 0x242994u: goto label_242994;
        case 0x242998u: goto label_242998;
        default: break;
    }

    ctx->pc = 0x241f10u;

label_241f10:
    // 0x241f10: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x241f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_241f14:
    // 0x241f14: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x241f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_241f18:
    // 0x241f18: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x241f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_241f1c:
    // 0x241f1c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x241f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_241f20:
    // 0x241f20: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x241f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_241f24:
    // 0x241f24: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x241f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_241f28:
    // 0x241f28: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x241f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_241f2c:
    // 0x241f2c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x241f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_241f30:
    // 0x241f30: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x241f30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_241f34:
    // 0x241f34: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x241f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_241f38:
    // 0x241f38: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x241f38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_241f3c:
    // 0x241f3c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x241f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_241f40:
    // 0x241f40: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x241f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_241f44:
    // 0x241f44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x241f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_241f48:
    // 0x241f48: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x241f48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_241f4c:
    // 0x241f4c: 0x3c1001ed  lui         $s0, 0x1ED
    ctx->pc = 0x241f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)493 << 16));
label_241f50:
    // 0x241f50: 0xafa500ec  sw          $a1, 0xEC($sp)
    ctx->pc = 0x241f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 5));
label_241f54:
    // 0x241f54: 0xc04e640  jal         func_139900
label_241f58:
    if (ctx->pc == 0x241F58u) {
        ctx->pc = 0x241F58u;
            // 0x241f58: 0x2610dbf0  addiu       $s0, $s0, -0x2410 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958064));
        ctx->pc = 0x241F5Cu;
        goto label_241f5c;
    }
    ctx->pc = 0x241F54u;
    SET_GPR_U32(ctx, 31, 0x241F5Cu);
    ctx->pc = 0x241F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241F54u;
            // 0x241f58: 0x2610dbf0  addiu       $s0, $s0, -0x2410 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241F5Cu; }
        if (ctx->pc != 0x241F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241F5Cu; }
        if (ctx->pc != 0x241F5Cu) { return; }
    }
    ctx->pc = 0x241F5Cu;
label_241f5c:
    // 0x241f5c: 0x26820058  addiu       $v0, $s4, 0x58
    ctx->pc = 0x241f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 88));
label_241f60:
    // 0x241f60: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x241f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_241f64:
    // 0x241f64: 0x838296a4  lb          $v0, -0x695C($gp)
    ctx->pc = 0x241f64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940324)));
label_241f68:
    // 0x241f68: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_241f6c:
    if (ctx->pc == 0x241F6Cu) {
        ctx->pc = 0x241F70u;
        goto label_241f70;
    }
    ctx->pc = 0x241F68u;
    {
        const bool branch_taken_0x241f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241f68) {
            ctx->pc = 0x241F7Cu;
            goto label_241f7c;
        }
    }
    ctx->pc = 0x241F70u;
label_241f70:
    // 0x241f70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241f74:
    // 0x241f74: 0xaf8096a0  sw          $zero, -0x6960($gp)
    ctx->pc = 0x241f74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940320), GPR_U32(ctx, 0));
label_241f78:
    // 0x241f78: 0xa38296a4  sb          $v0, -0x695C($gp)
    ctx->pc = 0x241f78u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940324), (uint8_t)GPR_U32(ctx, 2));
label_241f7c:
    // 0x241f7c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x241f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_241f80:
    // 0x241f80: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x241f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_241f84:
    // 0x241f84: 0x24421ef0  addiu       $v0, $v0, 0x1EF0
    ctx->pc = 0x241f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7920));
label_241f88:
    // 0x241f88: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x241f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_241f8c:
    // 0x241f8c: 0x8c22cb4c  lw          $v0, -0x34B4($at)
    ctx->pc = 0x241f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953804)));
label_241f90:
    // 0x241f90: 0xc05239c  jal         func_148E70
label_241f94:
    if (ctx->pc == 0x241F94u) {
        ctx->pc = 0x241F94u;
            // 0x241f94: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->pc = 0x241F98u;
        goto label_241f98;
    }
    ctx->pc = 0x241F90u;
    SET_GPR_U32(ctx, 31, 0x241F98u);
    ctx->pc = 0x241F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241F90u;
            // 0x241f94: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241F98u; }
        if (ctx->pc != 0x241F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241F98u; }
        if (ctx->pc != 0x241F98u) { return; }
    }
    ctx->pc = 0x241F98u;
label_241f98:
    // 0x241f98: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x241f98u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241f9c:
    // 0x241f9c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x241f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_241fa0:
    // 0x241fa0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x241fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_241fa4:
    // 0x241fa4: 0x84420070  lh          $v0, 0x70($v0)
    ctx->pc = 0x241fa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_241fa8:
    // 0x241fa8: 0x10440062  beq         $v0, $a0, . + 4 + (0x62 << 2)
label_241fac:
    if (ctx->pc == 0x241FACu) {
        ctx->pc = 0x241FACu;
            // 0x241fac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x241FB0u;
        goto label_241fb0;
    }
    ctx->pc = 0x241FA8u;
    {
        const bool branch_taken_0x241fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x241FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241FA8u;
            // 0x241fac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241fa8) {
            ctx->pc = 0x242134u;
            goto label_242134;
        }
    }
    ctx->pc = 0x241FB0u;
label_241fb0:
    // 0x241fb0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_241fb4:
    if (ctx->pc == 0x241FB4u) {
        ctx->pc = 0x241FB8u;
        goto label_241fb8;
    }
    ctx->pc = 0x241FB0u;
    {
        const bool branch_taken_0x241fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x241fb0) {
            ctx->pc = 0x241FC8u;
            goto label_241fc8;
        }
    }
    ctx->pc = 0x241FB8u;
label_241fb8:
    // 0x241fb8: 0x1040026a  beqz        $v0, . + 4 + (0x26A << 2)
label_241fbc:
    if (ctx->pc == 0x241FBCu) {
        ctx->pc = 0x241FC0u;
        goto label_241fc0;
    }
    ctx->pc = 0x241FB8u;
    {
        const bool branch_taken_0x241fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241fb8) {
            ctx->pc = 0x242964u;
            goto label_242964;
        }
    }
    ctx->pc = 0x241FC0u;
label_241fc0:
    // 0x241fc0: 0x10000269  b           . + 4 + (0x269 << 2)
label_241fc4:
    if (ctx->pc == 0x241FC4u) {
        ctx->pc = 0x241FC4u;
            // 0x241fc4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x241FC8u;
        goto label_241fc8;
    }
    ctx->pc = 0x241FC0u;
    {
        const bool branch_taken_0x241fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241FC0u;
            // 0x241fc4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241fc0) {
            ctx->pc = 0x242968u;
            goto label_242968;
        }
    }
    ctx->pc = 0x241FC8u;
label_241fc8:
    // 0x241fc8: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x241fc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_241fcc:
    // 0x241fcc: 0x10440034  beq         $v0, $a0, . + 4 + (0x34 << 2)
label_241fd0:
    if (ctx->pc == 0x241FD0u) {
        ctx->pc = 0x241FD4u;
        goto label_241fd4;
    }
    ctx->pc = 0x241FCCu;
    {
        const bool branch_taken_0x241fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x241fcc) {
            ctx->pc = 0x2420A0u;
            goto label_2420a0;
        }
    }
    ctx->pc = 0x241FD4u;
label_241fd4:
    // 0x241fd4: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_241fd8:
    if (ctx->pc == 0x241FD8u) {
        ctx->pc = 0x241FDCu;
        goto label_241fdc;
    }
    ctx->pc = 0x241FD4u;
    {
        const bool branch_taken_0x241fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x241fd4) {
            ctx->pc = 0x242008u;
            goto label_242008;
        }
    }
    ctx->pc = 0x241FDCu;
label_241fdc:
    // 0x241fdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_241fe0:
    if (ctx->pc == 0x241FE0u) {
        ctx->pc = 0x241FE4u;
        goto label_241fe4;
    }
    ctx->pc = 0x241FDCu;
    {
        const bool branch_taken_0x241fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241fdc) {
            ctx->pc = 0x241FECu;
            goto label_241fec;
        }
    }
    ctx->pc = 0x241FE4u;
label_241fe4:
    // 0x241fe4: 0x1000025f  b           . + 4 + (0x25F << 2)
label_241fe8:
    if (ctx->pc == 0x241FE8u) {
        ctx->pc = 0x241FECu;
        goto label_241fec;
    }
    ctx->pc = 0x241FE4u;
    {
        const bool branch_taken_0x241fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241fe4) {
            ctx->pc = 0x242964u;
            goto label_242964;
        }
    }
    ctx->pc = 0x241FECu;
label_241fec:
    // 0x241fec: 0x8f849584  lw          $a0, -0x6A7C($gp)
    ctx->pc = 0x241fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940036)));
label_241ff0:
    // 0x241ff0: 0xc08b680  jal         func_22DA00
label_241ff4:
    if (ctx->pc == 0x241FF4u) {
        ctx->pc = 0x241FF4u;
            // 0x241ff4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241FF8u;
        goto label_241ff8;
    }
    ctx->pc = 0x241FF0u;
    SET_GPR_U32(ctx, 31, 0x241FF8u);
    ctx->pc = 0x241FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241FF0u;
            // 0x241ff4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22DA00u;
    if (runtime->hasFunction(0x22DA00u)) {
        auto targetFn = runtime->lookupFunction(0x22DA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241FF8u; }
        if (ctx->pc != 0x241FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadDataBG__14CRepairManagerFP9mgCMemory_0x22da00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241FF8u; }
        if (ctx->pc != 0x241FF8u) { return; }
    }
    ctx->pc = 0x241FF8u;
label_241ff8:
    // 0x241ff8: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x241ff8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_241ffc:
    // 0x241ffc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x241ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_242000:
    // 0x242000: 0x10000258  b           . + 4 + (0x258 << 2)
label_242004:
    if (ctx->pc == 0x242004u) {
        ctx->pc = 0x242004u;
            // 0x242004: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x242008u;
        goto label_242008;
    }
    ctx->pc = 0x242000u;
    {
        const bool branch_taken_0x242000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242000u;
            // 0x242004: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242000) {
            ctx->pc = 0x242964u;
            goto label_242964;
        }
    }
    ctx->pc = 0x242008u;
label_242008:
    // 0x242008: 0x17c00256  bnez        $fp, . + 4 + (0x256 << 2)
label_24200c:
    if (ctx->pc == 0x24200Cu) {
        ctx->pc = 0x242010u;
        goto label_242010;
    }
    ctx->pc = 0x242008u;
    {
        const bool branch_taken_0x242008 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x242008) {
            ctx->pc = 0x242964u;
            goto label_242964;
        }
    }
    ctx->pc = 0x242010u;
label_242010:
    // 0x242010: 0x8e900020  lw          $s0, 0x20($s4)
    ctx->pc = 0x242010u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_242014:
    // 0x242014: 0x8f849584  lw          $a0, -0x6A7C($gp)
    ctx->pc = 0x242014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940036)));
label_242018:
    // 0x242018: 0xc08b6b0  jal         func_22DAC0
label_24201c:
    if (ctx->pc == 0x24201Cu) {
        ctx->pc = 0x24201Cu;
            // 0x24201c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242020u;
        goto label_242020;
    }
    ctx->pc = 0x242018u;
    SET_GPR_U32(ctx, 31, 0x242020u);
    ctx->pc = 0x24201Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242018u;
            // 0x24201c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22DAC0u;
    if (runtime->hasFunction(0x22DAC0u)) {
        auto targetFn = runtime->lookupFunction(0x22DAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242020u; }
        if (ctx->pc != 0x242020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDataBG__14CRepairManagerFi_0x22dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242020u; }
        if (ctx->pc != 0x242020u) { return; }
    }
    ctx->pc = 0x242020u;
label_242020:
    // 0x242020: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x242020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_242024:
    // 0x242024: 0x8c24caa0  lw          $a0, -0x3560($at)
    ctx->pc = 0x242024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953632)));
label_242028:
    // 0x242028: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x242028u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24202c:
    // 0x24202c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x24202cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_242030:
    // 0x242030: 0x320f809  jalr        $t9
label_242034:
    if (ctx->pc == 0x242034u) {
        ctx->pc = 0x242034u;
            // 0x242034: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x242038u;
        goto label_242038;
    }
    ctx->pc = 0x242030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x242038u);
        ctx->pc = 0x242034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242030u;
            // 0x242034: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x242038u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x242038u; }
            if (ctx->pc != 0x242038u) { return; }
        }
        }
    }
    ctx->pc = 0x242038u;
label_242038:
    // 0x242038: 0x9282016c  lbu         $v0, 0x16C($s4)
    ctx->pc = 0x242038u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 364)));
label_24203c:
    // 0x24203c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_242040:
    if (ctx->pc == 0x242040u) {
        ctx->pc = 0x242044u;
        goto label_242044;
    }
    ctx->pc = 0x24203Cu;
    {
        const bool branch_taken_0x24203c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24203c) {
            ctx->pc = 0x242080u;
            goto label_242080;
        }
    }
    ctx->pc = 0x242044u;
label_242044:
    // 0x242044: 0x8f849584  lw          $a0, -0x6A7C($gp)
    ctx->pc = 0x242044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940036)));
label_242048:
    // 0x242048: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x242048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24204c:
    // 0x24204c: 0xc08b704  jal         func_22DC10
label_242050:
    if (ctx->pc == 0x242050u) {
        ctx->pc = 0x242050u;
            // 0x242050: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x242054u;
        goto label_242054;
    }
    ctx->pc = 0x24204Cu;
    SET_GPR_U32(ctx, 31, 0x242054u);
    ctx->pc = 0x242050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24204Cu;
            // 0x242050: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22DC10u;
    if (runtime->hasFunction(0x22DC10u)) {
        auto targetFn = runtime->lookupFunction(0x22DC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242054u; }
        if (ctx->pc != 0x242054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GeneratePoly__14CRepairManagerFPfi_0x22dc10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242054u; }
        if (ctx->pc != 0x242054u) { return; }
    }
    ctx->pc = 0x242054u;
label_242054:
    // 0x242054: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x242054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_242058:
    // 0x242058: 0x8c22caa0  lw          $v0, -0x3560($at)
    ctx->pc = 0x242058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953632)));
label_24205c:
    // 0x24205c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_242060:
    if (ctx->pc == 0x242060u) {
        ctx->pc = 0x242060u;
            // 0x242060: 0x240500eb  addiu       $a1, $zero, 0xEB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 235));
        ctx->pc = 0x242064u;
        goto label_242064;
    }
    ctx->pc = 0x24205Cu;
    {
        const bool branch_taken_0x24205c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24205Cu;
            // 0x242060: 0x240500eb  addiu       $a1, $zero, 0xEB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 235));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24205c) {
            ctx->pc = 0x242080u;
            goto label_242080;
        }
    }
    ctx->pc = 0x242064u;
label_242064:
    // 0x242064: 0x24440734  addiu       $a0, $v0, 0x734
    ctx->pc = 0x242064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1844));
label_242068:
    // 0x242068: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x242068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24206c:
    // 0x24206c: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x24206cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_242070:
    // 0x242070: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x242070u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_242074:
    // 0x242074: 0x24090029  addiu       $t1, $zero, 0x29
    ctx->pc = 0x242074u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_242078:
    // 0x242078: 0xc070488  jal         func_1C1220
label_24207c:
    if (ctx->pc == 0x24207Cu) {
        ctx->pc = 0x24207Cu;
            // 0x24207c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242080u;
        goto label_242080;
    }
    ctx->pc = 0x242078u;
    SET_GPR_U32(ctx, 31, 0x242080u);
    ctx->pc = 0x24207Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242078u;
            // 0x24207c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1220u;
    if (runtime->hasFunction(0x1C1220u)) {
        auto targetFn = runtime->lookupFunction(0x1C1220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242080u; }
        if (ctx->pc != 0x242080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAnim__12CPalletAnimeFssssss_0x1c1220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242080u; }
        if (ctx->pc != 0x242080u) { return; }
    }
    ctx->pc = 0x242080u;
label_242080:
    // 0x242080: 0x8f859690  lw          $a1, -0x6970($gp)
    ctx->pc = 0x242080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940304)));
label_242084:
    // 0x242084: 0x8f869694  lw          $a2, -0x696C($gp)
    ctx->pc = 0x242084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940308)));
label_242088:
    // 0x242088: 0xc08b794  jal         func_22DE50
label_24208c:
    if (ctx->pc == 0x24208Cu) {
        ctx->pc = 0x24208Cu;
            // 0x24208c: 0x8f849584  lw          $a0, -0x6A7C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940036)));
        ctx->pc = 0x242090u;
        goto label_242090;
    }
    ctx->pc = 0x242088u;
    SET_GPR_U32(ctx, 31, 0x242090u);
    ctx->pc = 0x24208Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242088u;
            // 0x24208c: 0x8f849584  lw          $a0, -0x6A7C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940036)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22DE50u;
    if (runtime->hasFunction(0x22DE50u)) {
        auto targetFn = runtime->lookupFunction(0x22DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242090u; }
        if (ctx->pc != 0x242090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Generate__14CRepairManagerFii_0x22de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242090u; }
        if (ctx->pc != 0x242090u) { return; }
    }
    ctx->pc = 0x242090u;
label_242090:
    // 0x242090: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x242090u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_242094:
    // 0x242094: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x242094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_242098:
    // 0x242098: 0x10000232  b           . + 4 + (0x232 << 2)
label_24209c:
    if (ctx->pc == 0x24209Cu) {
        ctx->pc = 0x24209Cu;
            // 0x24209c: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2420A0u;
        goto label_2420a0;
    }
    ctx->pc = 0x242098u;
    {
        const bool branch_taken_0x242098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24209Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242098u;
            // 0x24209c: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242098) {
            ctx->pc = 0x242964u;
            goto label_242964;
        }
    }
    ctx->pc = 0x2420A0u;
label_2420a0:
    // 0x2420a0: 0x9282016c  lbu         $v0, 0x16C($s4)
    ctx->pc = 0x2420a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 364)));
label_2420a4:
    // 0x2420a4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2420a8:
    if (ctx->pc == 0x2420A8u) {
        ctx->pc = 0x2420ACu;
        goto label_2420ac;
    }
    ctx->pc = 0x2420A4u;
    {
        const bool branch_taken_0x2420a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2420a4) {
            ctx->pc = 0x242108u;
            goto label_242108;
        }
    }
    ctx->pc = 0x2420ACu;
label_2420ac:
    // 0x2420ac: 0x1443022d  bne         $v0, $v1, . + 4 + (0x22D << 2)
label_2420b0:
    if (ctx->pc == 0x2420B0u) {
        ctx->pc = 0x2420B4u;
        goto label_2420b4;
    }
    ctx->pc = 0x2420ACu;
    {
        const bool branch_taken_0x2420ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2420ac) {
            ctx->pc = 0x242964u;
            goto label_242964;
        }
    }
    ctx->pc = 0x2420B4u;
label_2420b4:
    // 0x2420b4: 0x8f859584  lw          $a1, -0x6A7C($gp)
    ctx->pc = 0x2420b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940036)));
label_2420b8:
    // 0x2420b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2420b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2420bc:
    // 0x2420bc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2420bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2420c0:
    // 0x2420c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2420c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2420c4:
    // 0x2420c4: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x2420c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2420c8:
    // 0x2420c8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2420c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2420cc:
    // 0x2420cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2420d0:
    if (ctx->pc == 0x2420D0u) {
        ctx->pc = 0x2420D4u;
        goto label_2420d4;
    }
    ctx->pc = 0x2420CCu;
    {
        const bool branch_taken_0x2420cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2420cc) {
            ctx->pc = 0x2420D8u;
            goto label_2420d8;
        }
    }
    ctx->pc = 0x2420D4u;
label_2420d4:
    // 0x2420d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2420d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2420d8:
    // 0x2420d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2420d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2420dc:
    // 0x2420dc: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x2420dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_2420e0:
    // 0x2420e0: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_2420e4:
    if (ctx->pc == 0x2420E4u) {
        ctx->pc = 0x2420E4u;
            // 0x2420e4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x2420E8u;
        goto label_2420e8;
    }
    ctx->pc = 0x2420E0u;
    {
        const bool branch_taken_0x2420e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2420E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2420E0u;
            // 0x2420e4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2420e0) {
            ctx->pc = 0x2420C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2420c4;
        }
    }
    ctx->pc = 0x2420E8u;
label_2420e8:
    // 0x2420e8: 0x8ca301b0  lw          $v1, 0x1B0($a1)
    ctx->pc = 0x2420e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 432)));
label_2420ec:
    // 0x2420ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2420ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2420f0:
    // 0x2420f0: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x2420f0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
label_2420f4:
    // 0x2420f4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2420f8:
    if (ctx->pc == 0x2420F8u) {
        ctx->pc = 0x2420FCu;
        goto label_2420fc;
    }
    ctx->pc = 0x2420F4u;
    {
        const bool branch_taken_0x2420f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2420f4) {
            ctx->pc = 0x242100u;
            goto label_242100;
        }
    }
    ctx->pc = 0x2420FCu;
label_2420fc:
    // 0x2420fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2420fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_242100:
    // 0x242100: 0x14800218  bnez        $a0, . + 4 + (0x218 << 2)
label_242104:
    if (ctx->pc == 0x242104u) {
        ctx->pc = 0x242108u;
        goto label_242108;
    }
    ctx->pc = 0x242100u;
    {
        const bool branch_taken_0x242100 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x242100) {
            ctx->pc = 0x242964u;
            goto label_242964;
        }
    }
    ctx->pc = 0x242108u;
label_242108:
    // 0x242108: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x242108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_24210c:
    // 0x24210c: 0x8c430138  lw          $v1, 0x138($v0)
    ctx->pc = 0x24210cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_242110:
    // 0x242110: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_242114:
    if (ctx->pc == 0x242114u) {
        ctx->pc = 0x242114u;
            // 0x242114: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x242118u;
        goto label_242118;
    }
    ctx->pc = 0x242110u;
    {
        const bool branch_taken_0x242110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x242114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242110u;
            // 0x242114: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242110) {
            ctx->pc = 0x24211Cu;
            goto label_24211c;
        }
    }
    ctx->pc = 0x242118u;
label_242118:
    // 0x242118: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x242118u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_24211c:
    // 0x24211c: 0xa280016c  sb          $zero, 0x16C($s4)
    ctx->pc = 0x24211cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 364), (uint8_t)GPR_U32(ctx, 0));
label_242120:
    // 0x242120: 0xa6800002  sh          $zero, 0x2($s4)
    ctx->pc = 0x242120u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
label_242124:
    // 0x242124: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x242124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_242128:
    // 0x242128: 0xa4400070  sh          $zero, 0x70($v0)
    ctx->pc = 0x242128u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 112), (uint16_t)GPR_U32(ctx, 0));
label_24212c:
    // 0x24212c: 0x1000020d  b           . + 4 + (0x20D << 2)
label_242130:
    if (ctx->pc == 0x242130u) {
        ctx->pc = 0x242130u;
            // 0x242130: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x242134u;
        goto label_242134;
    }
    ctx->pc = 0x24212Cu;
    {
        const bool branch_taken_0x24212c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24212Cu;
            // 0x242130: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24212c) {
            ctx->pc = 0x242964u;
            goto label_242964;
        }
    }
    ctx->pc = 0x242134u;
label_242134:
    // 0x242134: 0x838296ac  lb          $v0, -0x6954($gp)
    ctx->pc = 0x242134u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940332)));
label_242138:
    // 0x242138: 0x3c1101ed  lui         $s1, 0x1ED
    ctx->pc = 0x242138u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)493 << 16));
label_24213c:
    // 0x24213c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_242140:
    if (ctx->pc == 0x242140u) {
        ctx->pc = 0x242140u;
            // 0x242140: 0x2631dc20  addiu       $s1, $s1, -0x23E0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958112));
        ctx->pc = 0x242144u;
        goto label_242144;
    }
    ctx->pc = 0x24213Cu;
    {
        const bool branch_taken_0x24213c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24213Cu;
            // 0x242140: 0x2631dc20  addiu       $s1, $s1, -0x23E0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24213c) {
            ctx->pc = 0x242150u;
            goto label_242150;
        }
    }
    ctx->pc = 0x242144u;
label_242144:
    // 0x242144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_242148:
    // 0x242148: 0xa38096a8  sb          $zero, -0x6958($gp)
    ctx->pc = 0x242148u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940328), (uint8_t)GPR_U32(ctx, 0));
label_24214c:
    // 0x24214c: 0xa38296ac  sb          $v0, -0x6954($gp)
    ctx->pc = 0x24214cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940332), (uint8_t)GPR_U32(ctx, 2));
label_242150:
    // 0x242150: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x242150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_242154:
    // 0x242154: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x242154u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_242158:
    // 0x242158: 0x8c32caa0  lw          $s2, -0x3560($at)
    ctx->pc = 0x242158u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953632)));
label_24215c:
    // 0x24215c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24215cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_242160:
    // 0x242160: 0x8c36ca58  lw          $s6, -0x35A8($at)
    ctx->pc = 0x242160u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
label_242164:
    // 0x242164: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x242164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_242168:
    // 0x242168: 0x8c35ca5c  lw          $s5, -0x35A4($at)
    ctx->pc = 0x242168u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
label_24216c:
    // 0x24216c: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x24216cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_242170:
    // 0x242170: 0x102001f3  beqz        $at, . + 4 + (0x1F3 << 2)
label_242174:
    if (ctx->pc == 0x242174u) {
        ctx->pc = 0x242174u;
            // 0x242174: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242178u;
        goto label_242178;
    }
    ctx->pc = 0x242170u;
    {
        const bool branch_taken_0x242170 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x242174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242170u;
            // 0x242174: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242170) {
            ctx->pc = 0x242940u;
            goto label_242940;
        }
    }
    ctx->pc = 0x242178u;
label_242178:
    // 0x242178: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x242178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_24217c:
    // 0x24217c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24217cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_242180:
    // 0x242180: 0x2463afc0  addiu       $v1, $v1, -0x5040
    ctx->pc = 0x242180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946752));
label_242184:
    // 0x242184: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x242184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_242188:
    // 0x242188: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x242188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24218c:
    // 0x24218c: 0x400008  jr          $v0
label_242190:
    if (ctx->pc == 0x242190u) {
        ctx->pc = 0x242194u;
        goto label_242194;
    }
    ctx->pc = 0x24218Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242194u: goto label_242194;
            case 0x2422F8u: goto label_2422f8;
            case 0x242434u: goto label_242434;
            case 0x2426F4u: goto label_2426f4;
            case 0x2428E8u: goto label_2428e8;
            case 0x242910u: goto label_242910;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242194u;
label_242194:
    // 0x242194: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x242194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_242198:
    // 0x242198: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x242198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_24219c:
    // 0x24219c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2421a0:
    if (ctx->pc == 0x2421A0u) {
        ctx->pc = 0x2421A0u;
            // 0x2421a0: 0x82230003  lb          $v1, 0x3($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->pc = 0x2421A4u;
        goto label_2421a4;
    }
    ctx->pc = 0x24219Cu;
    {
        const bool branch_taken_0x24219c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2421A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24219Cu;
            // 0x2421a0: 0x82230003  lb          $v1, 0x3($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24219c) {
            ctx->pc = 0x2421ACu;
            goto label_2421ac;
        }
    }
    ctx->pc = 0x2421A4u;
label_2421a4:
    // 0x2421a4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2421a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2421a8:
    // 0x2421a8: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x2421a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
label_2421ac:
    // 0x2421ac: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x2421acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_2421b0:
    // 0x2421b0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2421b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2421b4:
    // 0x2421b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2421b8:
    if (ctx->pc == 0x2421B8u) {
        ctx->pc = 0x2421BCu;
        goto label_2421bc;
    }
    ctx->pc = 0x2421B4u;
    {
        const bool branch_taken_0x2421b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2421b4) {
            ctx->pc = 0x2421C8u;
            goto label_2421c8;
        }
    }
    ctx->pc = 0x2421BCu;
label_2421bc:
    // 0x2421bc: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x2421bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_2421c0:
    // 0x2421c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2421c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2421c4:
    // 0x2421c4: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x2421c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
label_2421c8:
    // 0x2421c8: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x2421c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_2421cc:
    // 0x2421cc: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_2421d0:
    if (ctx->pc == 0x2421D0u) {
        ctx->pc = 0x2421D4u;
        goto label_2421d4;
    }
    ctx->pc = 0x2421CCu;
    {
        const bool branch_taken_0x2421cc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2421cc) {
            ctx->pc = 0x2421D8u;
            goto label_2421d8;
        }
    }
    ctx->pc = 0x2421D4u;
label_2421d4:
    // 0x2421d4: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x2421d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
label_2421d8:
    // 0x2421d8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2421d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2421dc:
    // 0x2421dc: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x2421dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_2421e0:
    // 0x2421e0: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x2421e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2421e4:
    // 0x2421e4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2421e8:
    if (ctx->pc == 0x2421E8u) {
        ctx->pc = 0x2421E8u;
            // 0x2421e8: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->pc = 0x2421ECu;
        goto label_2421ec;
    }
    ctx->pc = 0x2421E4u;
    {
        const bool branch_taken_0x2421e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2421E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2421E4u;
            // 0x2421e8: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2421e4) {
            ctx->pc = 0x2421F0u;
            goto label_2421f0;
        }
    }
    ctx->pc = 0x2421ECu;
label_2421ec:
    // 0x2421ec: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x2421ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
label_2421f0:
    // 0x2421f0: 0x82300003  lb          $s0, 0x3($s1)
    ctx->pc = 0x2421f0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_2421f4:
    // 0x2421f4: 0x109080  sll         $s2, $s0, 2
    ctx->pc = 0x2421f4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2421f8:
    // 0x2421f8: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x2421f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_2421fc:
    // 0x2421fc: 0x10700003  beq         $v1, $s0, . + 4 + (0x3 << 2)
label_242200:
    if (ctx->pc == 0x242200u) {
        ctx->pc = 0x242200u;
            // 0x242200: 0x8c5e002c  lw          $fp, 0x2C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
        ctx->pc = 0x242204u;
        goto label_242204;
    }
    ctx->pc = 0x2421FCu;
    {
        const bool branch_taken_0x2421fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x242200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2421FCu;
            // 0x242200: 0x8c5e002c  lw          $fp, 0x2C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2421fc) {
            ctx->pc = 0x24220Cu;
            goto label_24220c;
        }
    }
    ctx->pc = 0x242204u;
label_242204:
    // 0x242204: 0xc094274  jal         func_2509D0
label_242208:
    if (ctx->pc == 0x242208u) {
        ctx->pc = 0x242208u;
            // 0x242208: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24220Cu;
        goto label_24220c;
    }
    ctx->pc = 0x242204u;
    SET_GPR_U32(ctx, 31, 0x24220Cu);
    ctx->pc = 0x242208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242204u;
            // 0x242208: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24220Cu; }
        if (ctx->pc != 0x24220Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24220Cu; }
        if (ctx->pc != 0x24220Cu) { return; }
    }
    ctx->pc = 0x24220Cu;
label_24220c:
    // 0x24220c: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x24220cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_242210:
    // 0x242210: 0xc092fb4  jal         func_24BED0
label_242214:
    if (ctx->pc == 0x242214u) {
        ctx->pc = 0x242214u;
            // 0x242214: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242218u;
        goto label_242218;
    }
    ctx->pc = 0x242210u;
    SET_GPR_U32(ctx, 31, 0x242218u);
    ctx->pc = 0x242214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242210u;
            // 0x242214: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24BED0u;
    if (runtime->hasFunction(0x24BED0u)) {
        auto targetFn = runtime->lookupFunction(0x24BED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242218u; }
        if (ctx->pc != 0x242218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuWeaponStatusInfoFormSet__FP13CGameDataUsedP11CDataWeapon_0x24bed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242218u; }
        if (ctx->pc != 0x242218u) { return; }
    }
    ctx->pc = 0x242218u;
label_242218:
    // 0x242218: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x242218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24221c:
    // 0x24221c: 0x12620031  beq         $s3, $v0, . + 4 + (0x31 << 2)
label_242220:
    if (ctx->pc == 0x242220u) {
        ctx->pc = 0x242220u;
            // 0x242220: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x242224u;
        goto label_242224;
    }
    ctx->pc = 0x24221Cu;
    {
        const bool branch_taken_0x24221c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x242220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24221Cu;
            // 0x242220: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24221c) {
            ctx->pc = 0x2422E4u;
            goto label_2422e4;
        }
    }
    ctx->pc = 0x242224u;
label_242224:
    // 0x242224: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x242224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_242228:
    // 0x242228: 0x12620009  beq         $s3, $v0, . + 4 + (0x9 << 2)
label_24222c:
    if (ctx->pc == 0x24222Cu) {
        ctx->pc = 0x24222Cu;
            // 0x24222c: 0x2511821  addu        $v1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->pc = 0x242230u;
        goto label_242230;
    }
    ctx->pc = 0x242228u;
    {
        const bool branch_taken_0x242228 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x24222Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242228u;
            // 0x24222c: 0x2511821  addu        $v1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242228) {
            ctx->pc = 0x242250u;
            goto label_242250;
        }
    }
    ctx->pc = 0x242230u;
label_242230:
    // 0x242230: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x242230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_242234:
    // 0x242234: 0x12620005  beq         $s3, $v0, . + 4 + (0x5 << 2)
label_242238:
    if (ctx->pc == 0x242238u) {
        ctx->pc = 0x242238u;
            // 0x242238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x24223Cu;
        goto label_24223c;
    }
    ctx->pc = 0x242234u;
    {
        const bool branch_taken_0x242234 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x242238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242234u;
            // 0x242238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242234) {
            ctx->pc = 0x24224Cu;
            goto label_24224c;
        }
    }
    ctx->pc = 0x24223Cu;
label_24223c:
    // 0x24223c: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_242240:
    if (ctx->pc == 0x242240u) {
        ctx->pc = 0x242244u;
        goto label_242244;
    }
    ctx->pc = 0x24223Cu;
    {
        const bool branch_taken_0x24223c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x24223c) {
            ctx->pc = 0x24224Cu;
            goto label_24224c;
        }
    }
    ctx->pc = 0x242244u;
label_242244:
    // 0x242244: 0x100001bf  b           . + 4 + (0x1BF << 2)
label_242248:
    if (ctx->pc == 0x242248u) {
        ctx->pc = 0x242248u;
            // 0x242248: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x24224Cu;
        goto label_24224c;
    }
    ctx->pc = 0x242244u;
    {
        const bool branch_taken_0x242244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242244u;
            // 0x242248: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242244) {
            ctx->pc = 0x242944u;
            goto label_242944;
        }
    }
    ctx->pc = 0x24224Cu;
label_24224c:
    // 0x24224c: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x24224cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_242250:
    // 0x242250: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_242254:
    // 0x242254: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x242254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_242258:
    // 0x242258: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
label_24225c:
    if (ctx->pc == 0x24225Cu) {
        ctx->pc = 0x24225Cu;
            // 0x24225c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x242260u;
        goto label_242260;
    }
    ctx->pc = 0x242258u;
    {
        const bool branch_taken_0x242258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24225Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242258u;
            // 0x24225c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242258) {
            ctx->pc = 0x2422D4u;
            goto label_2422d4;
        }
    }
    ctx->pc = 0x242260u;
label_242260:
    // 0x242260: 0xc06841c  jal         func_1A1070
label_242264:
    if (ctx->pc == 0x242264u) {
        ctx->pc = 0x242264u;
            // 0x242264: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242268u;
        goto label_242268;
    }
    ctx->pc = 0x242260u;
    SET_GPR_U32(ctx, 31, 0x242268u);
    ctx->pc = 0x242264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242260u;
            // 0x242264: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1070u;
    if (runtime->hasFunction(0x1A1070u)) {
        auto targetFn = runtime->lookupFunction(0x1A1070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242268u; }
        if (ctx->pc != 0x242268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBuildUpMonsterCondition__FP11CDataWeapon_0x1a1070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242268u; }
        if (ctx->pc != 0x242268u) { return; }
    }
    ctx->pc = 0x242268u;
label_242268:
    // 0x242268: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_24226c:
    if (ctx->pc == 0x24226Cu) {
        ctx->pc = 0x24226Cu;
            // 0x24226c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x242270u;
        goto label_242270;
    }
    ctx->pc = 0x242268u;
    {
        const bool branch_taken_0x242268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24226Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242268u;
            // 0x24226c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242268) {
            ctx->pc = 0x2422BCu;
            goto label_2422bc;
        }
    }
    ctx->pc = 0x242270u;
label_242270:
    // 0x242270: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x242270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_242274:
    // 0x242274: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x242274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_242278:
    // 0x242278: 0xc08e7cc  jal         func_239F30
label_24227c:
    if (ctx->pc == 0x24227Cu) {
        ctx->pc = 0x24227Cu;
            // 0x24227c: 0x24a5af20  addiu       $a1, $a1, -0x50E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946592));
        ctx->pc = 0x242280u;
        goto label_242280;
    }
    ctx->pc = 0x242278u;
    SET_GPR_U32(ctx, 31, 0x242280u);
    ctx->pc = 0x24227Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242278u;
            // 0x24227c: 0x24a5af20  addiu       $a1, $a1, -0x50E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242280u; }
        if (ctx->pc != 0x242280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242280u; }
        if (ctx->pc != 0x242280u) { return; }
    }
    ctx->pc = 0x242280u;
label_242280:
    // 0x242280: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x242280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_242284:
    // 0x242284: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x242284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_242288:
    // 0x242288: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x242288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_24228c:
    // 0x24228c: 0x24451801  addiu       $a1, $v0, 0x1801
    ctx->pc = 0x24228cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
label_242290:
    // 0x242290: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_242294:
    if (ctx->pc == 0x242294u) {
        ctx->pc = 0x242294u;
            // 0x242294: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242298u;
        goto label_242298;
    }
    ctx->pc = 0x242290u;
    {
        const bool branch_taken_0x242290 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x242294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242290u;
            // 0x242294: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242290) {
            ctx->pc = 0x2422A4u;
            goto label_2422a4;
        }
    }
    ctx->pc = 0x242298u;
label_242298:
    // 0x242298: 0xc04a3dc  jal         func_128F70
label_24229c:
    if (ctx->pc == 0x24229Cu) {
        ctx->pc = 0x24229Cu;
            // 0x24229c: 0x26a41801  addiu       $a0, $s5, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 6145));
        ctx->pc = 0x2422A0u;
        goto label_2422a0;
    }
    ctx->pc = 0x242298u;
    SET_GPR_U32(ctx, 31, 0x2422A0u);
    ctx->pc = 0x24229Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242298u;
            // 0x24229c: 0x26a41801  addiu       $a0, $s5, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2422A0u; }
        if (ctx->pc != 0x2422A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2422A0u; }
        if (ctx->pc != 0x2422A0u) { return; }
    }
    ctx->pc = 0x2422A0u;
label_2422a0:
    // 0x2422a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2422a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2422a4:
    // 0x2422a4: 0xc087898  jal         func_21E260
label_2422a8:
    if (ctx->pc == 0x2422A8u) {
        ctx->pc = 0x2422ACu;
        goto label_2422ac;
    }
    ctx->pc = 0x2422A4u;
    SET_GPR_U32(ctx, 31, 0x2422ACu);
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2422ACu; }
        if (ctx->pc != 0x2422ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2422ACu; }
        if (ctx->pc != 0x2422ACu) { return; }
    }
    ctx->pc = 0x2422ACu;
label_2422ac:
    // 0x2422ac: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x2422acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_2422b0:
    // 0x2422b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2422b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2422b4:
    // 0x2422b4: 0x100001a2  b           . + 4 + (0x1A2 << 2)
label_2422b8:
    if (ctx->pc == 0x2422B8u) {
        ctx->pc = 0x2422B8u;
            // 0x2422b8: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2422BCu;
        goto label_2422bc;
    }
    ctx->pc = 0x2422B4u;
    {
        const bool branch_taken_0x2422b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2422B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2422B4u;
            // 0x2422b8: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2422b4) {
            ctx->pc = 0x242940u;
            goto label_242940;
        }
    }
    ctx->pc = 0x2422BCu;
label_2422bc:
    // 0x2422bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2422bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2422c0:
    // 0x2422c0: 0xc08e7cc  jal         func_239F30
label_2422c4:
    if (ctx->pc == 0x2422C4u) {
        ctx->pc = 0x2422C4u;
            // 0x2422c4: 0x24a5af30  addiu       $a1, $a1, -0x50D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946608));
        ctx->pc = 0x2422C8u;
        goto label_2422c8;
    }
    ctx->pc = 0x2422C0u;
    SET_GPR_U32(ctx, 31, 0x2422C8u);
    ctx->pc = 0x2422C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2422C0u;
            // 0x2422c4: 0x24a5af30  addiu       $a1, $a1, -0x50D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2422C8u; }
        if (ctx->pc != 0x2422C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2422C8u; }
        if (ctx->pc != 0x2422C8u) { return; }
    }
    ctx->pc = 0x2422C8u;
label_2422c8:
    // 0x2422c8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2422c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2422cc:
    // 0x2422cc: 0x1000019c  b           . + 4 + (0x19C << 2)
label_2422d0:
    if (ctx->pc == 0x2422D0u) {
        ctx->pc = 0x2422D0u;
            // 0x2422d0: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2422D4u;
        goto label_2422d4;
    }
    ctx->pc = 0x2422CCu;
    {
        const bool branch_taken_0x2422cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2422D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2422CCu;
            // 0x2422d0: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2422cc) {
            ctx->pc = 0x242940u;
            goto label_242940;
        }
    }
    ctx->pc = 0x2422D4u;
label_2422d4:
    // 0x2422d4: 0xc094274  jal         func_2509D0
label_2422d8:
    if (ctx->pc == 0x2422D8u) {
        ctx->pc = 0x2422DCu;
        goto label_2422dc;
    }
    ctx->pc = 0x2422D4u;
    SET_GPR_U32(ctx, 31, 0x2422DCu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2422DCu; }
        if (ctx->pc != 0x2422DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2422DCu; }
        if (ctx->pc != 0x2422DCu) { return; }
    }
    ctx->pc = 0x2422DCu;
label_2422dc:
    // 0x2422dc: 0x10000198  b           . + 4 + (0x198 << 2)
label_2422e0:
    if (ctx->pc == 0x2422E0u) {
        ctx->pc = 0x2422E4u;
        goto label_2422e4;
    }
    ctx->pc = 0x2422DCu;
    {
        const bool branch_taken_0x2422dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2422dc) {
            ctx->pc = 0x242940u;
            goto label_242940;
        }
    }
    ctx->pc = 0x2422E4u;
label_2422e4:
    // 0x2422e4: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x2422e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
label_2422e8:
    // 0x2422e8: 0xc094274  jal         func_2509D0
label_2422ec:
    if (ctx->pc == 0x2422ECu) {
        ctx->pc = 0x2422ECu;
            // 0x2422ec: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2422F0u;
        goto label_2422f0;
    }
    ctx->pc = 0x2422E8u;
    SET_GPR_U32(ctx, 31, 0x2422F0u);
    ctx->pc = 0x2422ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2422E8u;
            // 0x2422ec: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2422F0u; }
        if (ctx->pc != 0x2422F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2422F0u; }
        if (ctx->pc != 0x2422F0u) { return; }
    }
    ctx->pc = 0x2422F0u;
label_2422f0:
    // 0x2422f0: 0x10000193  b           . + 4 + (0x193 << 2)
label_2422f4:
    if (ctx->pc == 0x2422F4u) {
        ctx->pc = 0x2422F8u;
        goto label_2422f8;
    }
    ctx->pc = 0x2422F0u;
    {
        const bool branch_taken_0x2422f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2422f0) {
            ctx->pc = 0x242940u;
            goto label_242940;
        }
    }
    ctx->pc = 0x2422F8u;
label_2422f8:
    // 0x2422f8: 0xc087630  jal         func_21D8C0
label_2422fc:
    if (ctx->pc == 0x2422FCu) {
        ctx->pc = 0x2422FCu;
            // 0x2422fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242300u;
        goto label_242300;
    }
    ctx->pc = 0x2422F8u;
    SET_GPR_U32(ctx, 31, 0x242300u);
    ctx->pc = 0x2422FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2422F8u;
            // 0x2422fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D8C0u;
    if (runtime->hasFunction(0x21D8C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242300u; }
        if (ctx->pc != 0x242300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor__7CDC2MesFv_0x21d8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242300u; }
        if (ctx->pc != 0x242300u) { return; }
    }
    ctx->pc = 0x242300u;
label_242300:
    // 0x242300: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x242300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_242304:
    // 0x242304: 0x1263003e  beq         $s3, $v1, . + 4 + (0x3E << 2)
label_242308:
    if (ctx->pc == 0x242308u) {
        ctx->pc = 0x242308u;
            // 0x242308: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x24230Cu;
        goto label_24230c;
    }
    ctx->pc = 0x242304u;
    {
        const bool branch_taken_0x242304 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x242308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242304u;
            // 0x242308: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242304) {
            ctx->pc = 0x242400u;
            goto label_242400;
        }
    }
    ctx->pc = 0x24230Cu;
label_24230c:
    // 0x24230c: 0x12630007  beq         $s3, $v1, . + 4 + (0x7 << 2)
label_242310:
    if (ctx->pc == 0x242310u) {
        ctx->pc = 0x242310u;
            // 0x242310: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x242314u;
        goto label_242314;
    }
    ctx->pc = 0x24230Cu;
    {
        const bool branch_taken_0x24230c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x242310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24230Cu;
            // 0x242310: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24230c) {
            ctx->pc = 0x24232Cu;
            goto label_24232c;
        }
    }
    ctx->pc = 0x242314u;
label_242314:
    // 0x242314: 0x12630005  beq         $s3, $v1, . + 4 + (0x5 << 2)
label_242318:
    if (ctx->pc == 0x242318u) {
        ctx->pc = 0x242318u;
            // 0x242318: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x24231Cu;
        goto label_24231c;
    }
    ctx->pc = 0x242314u;
    {
        const bool branch_taken_0x242314 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x242318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242314u;
            // 0x242318: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242314) {
            ctx->pc = 0x24232Cu;
            goto label_24232c;
        }
    }
    ctx->pc = 0x24231Cu;
label_24231c:
    // 0x24231c: 0x12630003  beq         $s3, $v1, . + 4 + (0x3 << 2)
label_242320:
    if (ctx->pc == 0x242320u) {
        ctx->pc = 0x242324u;
        goto label_242324;
    }
    ctx->pc = 0x24231Cu;
    {
        const bool branch_taken_0x24231c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x24231c) {
            ctx->pc = 0x24232Cu;
            goto label_24232c;
        }
    }
    ctx->pc = 0x242324u;
label_242324:
    // 0x242324: 0x1000003e  b           . + 4 + (0x3E << 2)
label_242328:
    if (ctx->pc == 0x242328u) {
        ctx->pc = 0x24232Cu;
        goto label_24232c;
    }
    ctx->pc = 0x242324u;
    {
        const bool branch_taken_0x242324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242324) {
            ctx->pc = 0x242420u;
            goto label_242420;
        }
    }
    ctx->pc = 0x24232Cu;
label_24232c:
    // 0x24232c: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
label_242330:
    if (ctx->pc == 0x242330u) {
        ctx->pc = 0x242330u;
            // 0x242330: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x242334u;
        goto label_242334;
    }
    ctx->pc = 0x24232Cu;
    {
        const bool branch_taken_0x24232c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24232Cu;
            // 0x242330: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24232c) {
            ctx->pc = 0x242400u;
            goto label_242400;
        }
    }
    ctx->pc = 0x242334u;
label_242334:
    // 0x242334: 0xc094274  jal         func_2509D0
label_242338:
    if (ctx->pc == 0x242338u) {
        ctx->pc = 0x24233Cu;
        goto label_24233c;
    }
    ctx->pc = 0x242334u;
    SET_GPR_U32(ctx, 31, 0x24233Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24233Cu; }
        if (ctx->pc != 0x24233Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24233Cu; }
        if (ctx->pc != 0x24233Cu) { return; }
    }
    ctx->pc = 0x24233Cu;
label_24233c:
    // 0x24233c: 0xa38096a8  sb          $zero, -0x6958($gp)
    ctx->pc = 0x24233cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940328), (uint8_t)GPR_U32(ctx, 0));
label_242340:
    // 0x242340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_242344:
    // 0x242344: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x242344u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
label_242348:
    // 0x242348: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x242348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_24234c:
    // 0x24234c: 0xc04e780  jal         func_139E00
label_242350:
    if (ctx->pc == 0x242350u) {
        ctx->pc = 0x242350u;
            // 0x242350: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x242354u;
        goto label_242354;
    }
    ctx->pc = 0x24234Cu;
    SET_GPR_U32(ctx, 31, 0x242354u);
    ctx->pc = 0x242350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24234Cu;
            // 0x242350: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242354u; }
        if (ctx->pc != 0x242354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242354u; }
        if (ctx->pc != 0x242354u) { return; }
    }
    ctx->pc = 0x242354u;
label_242354:
    // 0x242354: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x242354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_242358:
    // 0x242358: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x242358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_24235c:
    // 0x24235c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x24235cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_242360:
    // 0x242360: 0xc052330  jal         func_148CC0
label_242364:
    if (ctx->pc == 0x242364u) {
        ctx->pc = 0x242364u;
            // 0x242364: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x242368u;
        goto label_242368;
    }
    ctx->pc = 0x242360u;
    SET_GPR_U32(ctx, 31, 0x242368u);
    ctx->pc = 0x242364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242360u;
            // 0x242364: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242368u; }
        if (ctx->pc != 0x242368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242368u; }
        if (ctx->pc != 0x242368u) { return; }
    }
    ctx->pc = 0x242368u;
label_242368:
    // 0x242368: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x242368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_24236c:
    // 0x24236c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24236cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_242370:
    // 0x242370: 0x2484af40  addiu       $a0, $a0, -0x50C0
    ctx->pc = 0x242370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946624));
label_242374:
    // 0x242374: 0xc05224c  jal         func_148930
label_242378:
    if (ctx->pc == 0x242378u) {
        ctx->pc = 0x242378u;
            // 0x242378: 0x27a6016c  addiu       $a2, $sp, 0x16C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
        ctx->pc = 0x24237Cu;
        goto label_24237c;
    }
    ctx->pc = 0x242374u;
    SET_GPR_U32(ctx, 31, 0x24237Cu);
    ctx->pc = 0x242378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242374u;
            // 0x242378: 0x27a6016c  addiu       $a2, $sp, 0x16C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24237Cu; }
        if (ctx->pc != 0x24237Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24237Cu; }
        if (ctx->pc != 0x24237Cu) { return; }
    }
    ctx->pc = 0x24237Cu;
label_24237c:
    // 0x24237c: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x24237cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_242380:
    // 0x242380: 0x24430800  addiu       $v1, $v0, 0x800
    ctx->pc = 0x242380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
label_242384:
    // 0x242384: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x242384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_242388:
    // 0x242388: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_24238c:
    if (ctx->pc == 0x24238Cu) {
        ctx->pc = 0x24238Cu;
            // 0x24238c: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x242390u;
        goto label_242390;
    }
    ctx->pc = 0x242388u;
    {
        const bool branch_taken_0x242388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24238Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242388u;
            // 0x24238c: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242388) {
            ctx->pc = 0x242398u;
            goto label_242398;
        }
    }
    ctx->pc = 0x242390u;
label_242390:
    // 0x242390: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x242390u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_242394:
    // 0x242394: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x242394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_242398:
    // 0x242398: 0xc04e748  jal         func_139D20
label_24239c:
    if (ctx->pc == 0x24239Cu) {
        ctx->pc = 0x24239Cu;
            // 0x24239c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2423A0u;
        goto label_2423a0;
    }
    ctx->pc = 0x242398u;
    SET_GPR_U32(ctx, 31, 0x2423A0u);
    ctx->pc = 0x24239Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242398u;
            // 0x24239c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2423A0u; }
        if (ctx->pc != 0x2423A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2423A0u; }
        if (ctx->pc != 0x2423A0u) { return; }
    }
    ctx->pc = 0x2423A0u;
label_2423a0:
    // 0x2423a0: 0xc04e780  jal         func_139E00
label_2423a4:
    if (ctx->pc == 0x2423A4u) {
        ctx->pc = 0x2423A4u;
            // 0x2423a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2423A8u;
        goto label_2423a8;
    }
    ctx->pc = 0x2423A0u;
    SET_GPR_U32(ctx, 31, 0x2423A8u);
    ctx->pc = 0x2423A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2423A0u;
            // 0x2423a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2423A8u; }
        if (ctx->pc != 0x2423A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2423A8u; }
        if (ctx->pc != 0x2423A8u) { return; }
    }
    ctx->pc = 0x2423A8u;
label_2423a8:
    // 0x2423a8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2423a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2423ac:
    // 0x2423ac: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2423acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2423b0:
    // 0x2423b0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2423b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2423b4:
    // 0x2423b4: 0x2484af60  addiu       $a0, $a0, -0x50A0
    ctx->pc = 0x2423b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946656));
label_2423b8:
    // 0x2423b8: 0x27a6016c  addiu       $a2, $sp, 0x16C
    ctx->pc = 0x2423b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
label_2423bc:
    // 0x2423bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2423bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2423c0:
    // 0x2423c0: 0xc05224c  jal         func_148930
label_2423c4:
    if (ctx->pc == 0x2423C4u) {
        ctx->pc = 0x2423C4u;
            // 0x2423c4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2423C8u;
        goto label_2423c8;
    }
    ctx->pc = 0x2423C0u;
    SET_GPR_U32(ctx, 31, 0x2423C8u);
    ctx->pc = 0x2423C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2423C0u;
            // 0x2423c4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2423C8u; }
        if (ctx->pc != 0x2423C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2423C8u; }
        if (ctx->pc != 0x2423C8u) { return; }
    }
    ctx->pc = 0x2423C8u;
label_2423c8:
    // 0x2423c8: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x2423c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2423cc:
    // 0x2423cc: 0x24430800  addiu       $v1, $v0, 0x800
    ctx->pc = 0x2423ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
label_2423d0:
    // 0x2423d0: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2423d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_2423d4:
    // 0x2423d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2423d8:
    if (ctx->pc == 0x2423D8u) {
        ctx->pc = 0x2423D8u;
            // 0x2423d8: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x2423DCu;
        goto label_2423dc;
    }
    ctx->pc = 0x2423D4u;
    {
        const bool branch_taken_0x2423d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2423D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2423D4u;
            // 0x2423d8: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2423d4) {
            ctx->pc = 0x2423E4u;
            goto label_2423e4;
        }
    }
    ctx->pc = 0x2423DCu;
label_2423dc:
    // 0x2423dc: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2423dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_2423e0:
    // 0x2423e0: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2423e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2423e4:
    // 0x2423e4: 0xc04e748  jal         func_139D20
label_2423e8:
    if (ctx->pc == 0x2423E8u) {
        ctx->pc = 0x2423E8u;
            // 0x2423e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2423ECu;
        goto label_2423ec;
    }
    ctx->pc = 0x2423E4u;
    SET_GPR_U32(ctx, 31, 0x2423ECu);
    ctx->pc = 0x2423E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2423E4u;
            // 0x2423e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2423ECu; }
        if (ctx->pc != 0x2423ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2423ECu; }
        if (ctx->pc != 0x2423ECu) { return; }
    }
    ctx->pc = 0x2423ECu;
label_2423ec:
    // 0x2423ec: 0xa380962c  sb          $zero, -0x69D4($gp)
    ctx->pc = 0x2423ecu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940204), (uint8_t)GPR_U32(ctx, 0));
label_2423f0:
    // 0x2423f0: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x2423f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_2423f4:
    // 0x2423f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2423f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2423f8:
    // 0x2423f8: 0x10000009  b           . + 4 + (0x9 << 2)
label_2423fc:
    if (ctx->pc == 0x2423FCu) {
        ctx->pc = 0x2423FCu;
            // 0x2423fc: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x242400u;
        goto label_242400;
    }
    ctx->pc = 0x2423F8u;
    {
        const bool branch_taken_0x2423f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2423FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2423F8u;
            // 0x2423fc: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2423f8) {
            ctx->pc = 0x242420u;
            goto label_242420;
        }
    }
    ctx->pc = 0x242400u;
label_242400:
    // 0x242400: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x242400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_242404:
    // 0x242404: 0x8c430138  lw          $v1, 0x138($v0)
    ctx->pc = 0x242404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_242408:
    // 0x242408: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_24240c:
    if (ctx->pc == 0x24240Cu) {
        ctx->pc = 0x24240Cu;
            // 0x24240c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x242410u;
        goto label_242410;
    }
    ctx->pc = 0x242408u;
    {
        const bool branch_taken_0x242408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24240Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242408u;
            // 0x24240c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242408) {
            ctx->pc = 0x242418u;
            goto label_242418;
        }
    }
    ctx->pc = 0x242410u;
label_242410:
    // 0x242410: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_242414:
    // 0x242414: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x242414u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_242418:
    // 0x242418: 0xc094274  jal         func_2509D0
label_24241c:
    if (ctx->pc == 0x24241Cu) {
        ctx->pc = 0x24241Cu;
            // 0x24241c: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x242420u;
        goto label_242420;
    }
    ctx->pc = 0x242418u;
    SET_GPR_U32(ctx, 31, 0x242420u);
    ctx->pc = 0x24241Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242418u;
            // 0x24241c: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242420u; }
        if (ctx->pc != 0x242420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242420u; }
        if (ctx->pc != 0x242420u) { return; }
    }
    ctx->pc = 0x242420u;
label_242420:
    // 0x242420: 0x12600147  beqz        $s3, . + 4 + (0x147 << 2)
label_242424:
    if (ctx->pc == 0x242424u) {
        ctx->pc = 0x242428u;
        goto label_242428;
    }
    ctx->pc = 0x242420u;
    {
        const bool branch_taken_0x242420 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x242420) {
            ctx->pc = 0x242940u;
            goto label_242940;
        }
    }
    ctx->pc = 0x242428u;
label_242428:
    // 0x242428: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x242428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_24242c:
    // 0x24242c: 0x10000144  b           . + 4 + (0x144 << 2)
label_242430:
    if (ctx->pc == 0x242430u) {
        ctx->pc = 0x242430u;
            // 0x242430: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x242434u;
        goto label_242434;
    }
    ctx->pc = 0x24242Cu;
    {
        const bool branch_taken_0x24242c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24242Cu;
            // 0x242430: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24242c) {
            ctx->pc = 0x242940u;
            goto label_242940;
        }
    }
    ctx->pc = 0x242434u;
label_242434:
    // 0x242434: 0x17c00142  bnez        $fp, . + 4 + (0x142 << 2)
label_242438:
    if (ctx->pc == 0x242438u) {
        ctx->pc = 0x242438u;
            // 0x242438: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24243Cu;
        goto label_24243c;
    }
    ctx->pc = 0x242434u;
    {
        const bool branch_taken_0x242434 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x242438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242434u;
            // 0x242438: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242434) {
            ctx->pc = 0x242940u;
            goto label_242940;
        }
    }
    ctx->pc = 0x24243Cu;
label_24243c:
    // 0x24243c: 0xc05231c  jal         func_148C70
label_242440:
    if (ctx->pc == 0x242440u) {
        ctx->pc = 0x242444u;
        goto label_242444;
    }
    ctx->pc = 0x24243Cu;
    SET_GPR_U32(ctx, 31, 0x242444u);
    ctx->pc = 0x148C70u;
    if (runtime->hasFunction(0x148C70u)) {
        auto targetFn = runtime->lookupFunction(0x148C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242444u; }
        if (ctx->pc != 0x242444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGFile__Fi_0x148c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242444u; }
        if (ctx->pc != 0x242444u) { return; }
    }
    ctx->pc = 0x242444u;
label_242444:
    // 0x242444: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x242444u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_242448:
    // 0x242448: 0xc05231c  jal         func_148C70
label_24244c:
    if (ctx->pc == 0x24244Cu) {
        ctx->pc = 0x24244Cu;
            // 0x24244c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x242450u;
        goto label_242450;
    }
    ctx->pc = 0x242448u;
    SET_GPR_U32(ctx, 31, 0x242450u);
    ctx->pc = 0x24244Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242448u;
            // 0x24244c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148C70u;
    if (runtime->hasFunction(0x148C70u)) {
        auto targetFn = runtime->lookupFunction(0x148C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242450u; }
        if (ctx->pc != 0x242450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGFile__Fi_0x148c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242450u; }
        if (ctx->pc != 0x242450u) { return; }
    }
    ctx->pc = 0x242450u;
label_242450:
    // 0x242450: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x242450u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_242454:
    // 0x242454: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
label_242458:
    if (ctx->pc == 0x242458u) {
        ctx->pc = 0x242458u;
            // 0x242458: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x24245Cu;
        goto label_24245c;
    }
    ctx->pc = 0x242454u;
    {
        const bool branch_taken_0x242454 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x242458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242454u;
            // 0x242458: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242454) {
            ctx->pc = 0x24249Cu;
            goto label_24249c;
        }
    }
    ctx->pc = 0x24245Cu;
label_24245c:
    // 0x24245c: 0xc04e640  jal         func_139900
label_242460:
    if (ctx->pc == 0x242460u) {
        ctx->pc = 0x242464u;
        goto label_242464;
    }
    ctx->pc = 0x24245Cu;
    SET_GPR_U32(ctx, 31, 0x242464u);
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242464u; }
        if (ctx->pc != 0x242464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242464u; }
        if (ctx->pc != 0x242464u) { return; }
    }
    ctx->pc = 0x242464u;
label_242464:
    // 0x242464: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x242464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_242468:
    // 0x242468: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x242468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_24246c:
    // 0x24246c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x24246cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_242470:
    // 0x242470: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x242470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_242474:
    // 0x242474: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x242474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_242478:
    // 0x242478: 0xc04e79c  jal         func_139E70
label_24247c:
    if (ctx->pc == 0x24247Cu) {
        ctx->pc = 0x24247Cu;
            // 0x24247c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x242480u;
        goto label_242480;
    }
    ctx->pc = 0x242478u;
    SET_GPR_U32(ctx, 31, 0x242480u);
    ctx->pc = 0x24247Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242478u;
            // 0x24247c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242480u; }
        if (ctx->pc != 0x242480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242480u; }
        if (ctx->pc != 0x242480u) { return; }
    }
    ctx->pc = 0x242480u;
label_242480:
    // 0x242480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_242484:
    // 0x242484: 0xc04e748  jal         func_139D20
label_242488:
    if (ctx->pc == 0x242488u) {
        ctx->pc = 0x242488u;
            // 0x242488: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->pc = 0x24248Cu;
        goto label_24248c;
    }
    ctx->pc = 0x242484u;
    SET_GPR_U32(ctx, 31, 0x24248Cu);
    ctx->pc = 0x242488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242484u;
            // 0x242488: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24248Cu; }
        if (ctx->pc != 0x24248Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24248Cu; }
        if (ctx->pc != 0x24248Cu) { return; }
    }
    ctx->pc = 0x24248Cu;
label_24248c:
    // 0x24248c: 0x8e650110  lw          $a1, 0x110($s3)
    ctx->pc = 0x24248cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_242490:
    // 0x242490: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x242490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242494:
    // 0x242494: 0xc094288  jal         func_250A20
label_242498:
    if (ctx->pc == 0x242498u) {
        ctx->pc = 0x242498u;
            // 0x242498: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x24249Cu;
        goto label_24249c;
    }
    ctx->pc = 0x242494u;
    SET_GPR_U32(ctx, 31, 0x24249Cu);
    ctx->pc = 0x242498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242494u;
            // 0x242498: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250A20u;
    if (runtime->hasFunction(0x250A20u)) {
        auto targetFn = runtime->lookupFunction(0x250A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24249Cu; }
        if (ctx->pc != 0x24249Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__FiPUiP9mgCMemory_0x250a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24249Cu; }
        if (ctx->pc != 0x24249Cu) { return; }
    }
    ctx->pc = 0x24249Cu;
label_24249c:
    // 0x24249c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x24249cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2424a0:
    // 0x2424a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2424a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2424a4:
    // 0x2424a4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2424a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2424a8:
    // 0x2424a8: 0x320f809  jalr        $t9
label_2424ac:
    if (ctx->pc == 0x2424ACu) {
        ctx->pc = 0x2424ACu;
            // 0x2424ac: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x2424B0u;
        goto label_2424b0;
    }
    ctx->pc = 0x2424A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2424B0u);
        ctx->pc = 0x2424ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2424A8u;
            // 0x2424ac: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2424B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2424B0u; }
            if (ctx->pc != 0x2424B0u) { return; }
        }
        }
    }
    ctx->pc = 0x2424B0u;
label_2424b0:
    // 0x2424b0: 0x8e850020  lw          $a1, 0x20($s4)
    ctx->pc = 0x2424b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_2424b4:
    // 0x2424b4: 0xc04b950  jal         func_12E540
label_2424b8:
    if (ctx->pc == 0x2424B8u) {
        ctx->pc = 0x2424B8u;
            // 0x2424b8: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x2424BCu;
        goto label_2424bc;
    }
    ctx->pc = 0x2424B4u;
    SET_GPR_U32(ctx, 31, 0x2424BCu);
    ctx->pc = 0x2424B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2424B4u;
            // 0x2424b8: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2424BCu; }
        if (ctx->pc != 0x2424BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2424BCu; }
        if (ctx->pc != 0x2424BCu) { return; }
    }
    ctx->pc = 0x2424BCu;
label_2424bc:
    // 0x2424bc: 0xc04e780  jal         func_139E00
label_2424c0:
    if (ctx->pc == 0x2424C0u) {
        ctx->pc = 0x2424C0u;
            // 0x2424c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2424C4u;
        goto label_2424c4;
    }
    ctx->pc = 0x2424BCu;
    SET_GPR_U32(ctx, 31, 0x2424C4u);
    ctx->pc = 0x2424C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2424BCu;
            // 0x2424c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2424C4u; }
        if (ctx->pc != 0x2424C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2424C4u; }
        if (ctx->pc != 0x2424C4u) { return; }
    }
    ctx->pc = 0x2424C4u;
label_2424c4:
    // 0x2424c4: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2424c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2424c8:
    // 0x2424c8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2424c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2424cc:
    // 0x2424cc: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x2424ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2424d0:
    // 0x2424d0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2424d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2424d4:
    // 0x2424d4: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2424d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2424d8:
    // 0x2424d8: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2424d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2424dc:
    // 0x2424dc: 0xc04e79c  jal         func_139E70
label_2424e0:
    if (ctx->pc == 0x2424E0u) {
        ctx->pc = 0x2424E0u;
            // 0x2424e0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2424E4u;
        goto label_2424e4;
    }
    ctx->pc = 0x2424DCu;
    SET_GPR_U32(ctx, 31, 0x2424E4u);
    ctx->pc = 0x2424E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2424DCu;
            // 0x2424e0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2424E4u; }
        if (ctx->pc != 0x2424E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2424E4u; }
        if (ctx->pc != 0x2424E4u) { return; }
    }
    ctx->pc = 0x2424E4u;
label_2424e4:
    // 0x2424e4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2424e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2424e8:
    // 0x2424e8: 0xc04e748  jal         func_139D20
label_2424ec:
    if (ctx->pc == 0x2424ECu) {
        ctx->pc = 0x2424ECu;
            // 0x2424ec: 0x24050105  addiu       $a1, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->pc = 0x2424F0u;
        goto label_2424f0;
    }
    ctx->pc = 0x2424E8u;
    SET_GPR_U32(ctx, 31, 0x2424F0u);
    ctx->pc = 0x2424ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2424E8u;
            // 0x2424ec: 0x24050105  addiu       $a1, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2424F0u; }
        if (ctx->pc != 0x2424F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2424F0u; }
        if (ctx->pc != 0x2424F0u) { return; }
    }
    ctx->pc = 0x2424F0u;
label_2424f0:
    // 0x2424f0: 0x24041030  addiu       $a0, $zero, 0x1030
    ctx->pc = 0x2424f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4144));
label_2424f4:
    // 0x2424f4: 0xc04e638  jal         func_1398E0
label_2424f8:
    if (ctx->pc == 0x2424F8u) {
        ctx->pc = 0x2424F8u;
            // 0x2424f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2424FCu;
        goto label_2424fc;
    }
    ctx->pc = 0x2424F4u;
    SET_GPR_U32(ctx, 31, 0x2424FCu);
    ctx->pc = 0x2424F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2424F4u;
            // 0x2424f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2424FCu; }
        if (ctx->pc != 0x2424FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2424FCu; }
        if (ctx->pc != 0x2424FCu) { return; }
    }
    ctx->pc = 0x2424FCu;
label_2424fc:
    // 0x2424fc: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_242500:
    if (ctx->pc == 0x242500u) {
        ctx->pc = 0x242500u;
            // 0x242500: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242504u;
        goto label_242504;
    }
    ctx->pc = 0x2424FCu;
    {
        const bool branch_taken_0x2424fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2424FCu;
            // 0x242500: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2424fc) {
            ctx->pc = 0x2425A4u;
            goto label_2425a4;
        }
    }
    ctx->pc = 0x242504u;
label_242504:
    // 0x242504: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x242504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_242508:
    // 0x242508: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x242508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_24250c:
    // 0x24250c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x24250cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_242510:
    // 0x242510: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x242510u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_242514:
    // 0x242514: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x242514u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_242518:
    // 0x242518: 0x320f809  jalr        $t9
label_24251c:
    if (ctx->pc == 0x24251Cu) {
        ctx->pc = 0x24251Cu;
            // 0x24251c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242520u;
        goto label_242520;
    }
    ctx->pc = 0x242518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x242520u);
        ctx->pc = 0x24251Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242518u;
            // 0x24251c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x242520u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x242520u; }
            if (ctx->pc != 0x242520u) { return; }
        }
        }
    }
    ctx->pc = 0x242520u;
label_242520:
    // 0x242520: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x242520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_242524:
    // 0x242524: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x242524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_242528:
    // 0x242528: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x242528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_24252c:
    // 0x24252c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x24252cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_242530:
    // 0x242530: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x242530u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_242534:
    // 0x242534: 0x320f809  jalr        $t9
label_242538:
    if (ctx->pc == 0x242538u) {
        ctx->pc = 0x242538u;
            // 0x242538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24253Cu;
        goto label_24253c;
    }
    ctx->pc = 0x242534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24253Cu);
        ctx->pc = 0x242538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242534u;
            // 0x242538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24253Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24253Cu; }
            if (ctx->pc != 0x24253Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24253Cu;
label_24253c:
    // 0x24253c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x24253cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_242540:
    // 0x242540: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x242540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_242544:
    // 0x242544: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x242544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_242548:
    // 0x242548: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x242548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24254c:
    // 0x24254c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x24254cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_242550:
    // 0x242550: 0x320f809  jalr        $t9
label_242554:
    if (ctx->pc == 0x242554u) {
        ctx->pc = 0x242554u;
            // 0x242554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242558u;
        goto label_242558;
    }
    ctx->pc = 0x242550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x242558u);
        ctx->pc = 0x242554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242550u;
            // 0x242554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x242558u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x242558u; }
            if (ctx->pc != 0x242558u) { return; }
        }
        }
    }
    ctx->pc = 0x242558u;
label_242558:
    // 0x242558: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x242558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_24255c:
    // 0x24255c: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x24255cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_242560:
    // 0x242560: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x242560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_242564:
    // 0x242564: 0xae00035c  sw          $zero, 0x35C($s0)
    ctx->pc = 0x242564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 0));
label_242568:
    // 0x242568: 0xae000364  sw          $zero, 0x364($s0)
    ctx->pc = 0x242568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 0));
label_24256c:
    // 0x24256c: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x24256cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
label_242570:
    // 0x242570: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x242570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_242574:
    // 0x242574: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x242574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_242578:
    // 0x242578: 0x320f809  jalr        $t9
label_24257c:
    if (ctx->pc == 0x24257Cu) {
        ctx->pc = 0x24257Cu;
            // 0x24257c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242580u;
        goto label_242580;
    }
    ctx->pc = 0x242578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x242580u);
        ctx->pc = 0x24257Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242578u;
            // 0x24257c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x242580u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x242580u; }
            if (ctx->pc != 0x242580u) { return; }
        }
        }
    }
    ctx->pc = 0x242580u;
label_242580:
    // 0x242580: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x242580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_242584:
    // 0x242584: 0x260406bc  addiu       $a0, $s0, 0x6BC
    ctx->pc = 0x242584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1724));
label_242588:
    // 0x242588: 0x244256f0  addiu       $v0, $v0, 0x56F0
    ctx->pc = 0x242588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22256));
label_24258c:
    // 0x24258c: 0xc061b34  jal         func_186CD0
label_242590:
    if (ctx->pc == 0x242590u) {
        ctx->pc = 0x242590u;
            // 0x242590: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x242594u;
        goto label_242594;
    }
    ctx->pc = 0x24258Cu;
    SET_GPR_U32(ctx, 31, 0x242594u);
    ctx->pc = 0x242590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24258Cu;
            // 0x242590: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186CD0u;
    if (runtime->hasFunction(0x186CD0u)) {
        auto targetFn = runtime->lookupFunction(0x186CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242594u; }
        if (ctx->pc != 0x242594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CRunScriptFv_0x186cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242594u; }
        if (ctx->pc != 0x242594u) { return; }
    }
    ctx->pc = 0x242594u;
label_242594:
    // 0x242594: 0x26040910  addiu       $a0, $s0, 0x910
    ctx->pc = 0x242594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2320));
label_242598:
    // 0x242598: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x242598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24259c:
    // 0x24259c: 0xc049c86  jal         func_127218
label_2425a0:
    if (ctx->pc == 0x2425A0u) {
        ctx->pc = 0x2425A0u;
            // 0x2425a0: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x2425A4u;
        goto label_2425a4;
    }
    ctx->pc = 0x24259Cu;
    SET_GPR_U32(ctx, 31, 0x2425A4u);
    ctx->pc = 0x2425A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24259Cu;
            // 0x2425a0: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2425A4u; }
        if (ctx->pc != 0x2425A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2425A4u; }
        if (ctx->pc != 0x2425A4u) { return; }
    }
    ctx->pc = 0x2425A4u;
label_2425a4:
    // 0x2425a4: 0xae9002f4  sw          $s0, 0x2F4($s4)
    ctx->pc = 0x2425a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 756), GPR_U32(ctx, 16));
label_2425a8:
    // 0x2425a8: 0x8e8402f4  lw          $a0, 0x2F4($s4)
    ctx->pc = 0x2425a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 756)));
label_2425ac:
    // 0x2425ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2425acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2425b0:
    // 0x2425b0: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x2425b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_2425b4:
    // 0x2425b4: 0x320f809  jalr        $t9
label_2425b8:
    if (ctx->pc == 0x2425B8u) {
        ctx->pc = 0x2425B8u;
            // 0x2425b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2425BCu;
        goto label_2425bc;
    }
    ctx->pc = 0x2425B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2425BCu);
        ctx->pc = 0x2425B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2425B4u;
            // 0x2425b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2425BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2425BCu; }
            if (ctx->pc != 0x2425BCu) { return; }
        }
        }
    }
    ctx->pc = 0x2425BCu;
label_2425bc:
    // 0x2425bc: 0x8e8402f4  lw          $a0, 0x2F4($s4)
    ctx->pc = 0x2425bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 756)));
label_2425c0:
    // 0x2425c0: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x2425c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2425c4:
    // 0x2425c4: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2425c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_2425c8:
    // 0x2425c8: 0x8ea50110  lw          $a1, 0x110($s5)
    ctx->pc = 0x2425c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 272)));
label_2425cc:
    // 0x2425cc: 0x8e8a0020  lw          $t2, 0x20($s4)
    ctx->pc = 0x2425ccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_2425d0:
    // 0x2425d0: 0x24c6af78  addiu       $a2, $a2, -0x5088
    ctx->pc = 0x2425d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946680));
label_2425d4:
    // 0x2425d4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2425d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2425d8:
    // 0x2425d8: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2425d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2425dc:
    // 0x2425dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2425dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2425e0:
    // 0x2425e0: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x2425e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_2425e4:
    // 0x2425e4: 0x320f809  jalr        $t9
label_2425e8:
    if (ctx->pc == 0x2425E8u) {
        ctx->pc = 0x2425E8u;
            // 0x2425e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2425ECu;
        goto label_2425ec;
    }
    ctx->pc = 0x2425E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2425ECu);
        ctx->pc = 0x2425E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2425E4u;
            // 0x2425e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2425ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2425ECu; }
            if (ctx->pc != 0x2425ECu) { return; }
        }
        }
    }
    ctx->pc = 0x2425ECu;
label_2425ec:
    // 0x2425ec: 0x8e8402f4  lw          $a0, 0x2F4($s4)
    ctx->pc = 0x2425ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 756)));
label_2425f0:
    // 0x2425f0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x2425f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_2425f4:
    // 0x2425f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2425f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2425f8:
    // 0x2425f8: 0x0  nop
    ctx->pc = 0x2425f8u;
    // NOP
label_2425fc:
    // 0x2425fc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2425fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_242600:
    // 0x242600: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x242600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_242604:
    // 0x242604: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x242604u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_242608:
    // 0x242608: 0x320f809  jalr        $t9
label_24260c:
    if (ctx->pc == 0x24260Cu) {
        ctx->pc = 0x24260Cu;
            // 0x24260c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x242610u;
        goto label_242610;
    }
    ctx->pc = 0x242608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x242610u);
        ctx->pc = 0x24260Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242608u;
            // 0x24260c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x242610u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x242610u; }
            if (ctx->pc != 0x242610u) { return; }
        }
        }
    }
    ctx->pc = 0x242610u;
label_242610:
    // 0x242610: 0x8e8402f4  lw          $a0, 0x2F4($s4)
    ctx->pc = 0x242610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 756)));
label_242614:
    // 0x242614: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x242614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_242618:
    // 0x242618: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x242618u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_24261c:
    // 0x24261c: 0x320f809  jalr        $t9
label_242620:
    if (ctx->pc == 0x242620u) {
        ctx->pc = 0x242620u;
            // 0x242620: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x242624u;
        goto label_242624;
    }
    ctx->pc = 0x24261Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x242624u);
        ctx->pc = 0x242620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24261Cu;
            // 0x242620: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x242624u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x242624u; }
            if (ctx->pc != 0x242624u) { return; }
        }
        }
    }
    ctx->pc = 0x242624u;
label_242624:
    // 0x242624: 0x8e8402f4  lw          $a0, 0x2F4($s4)
    ctx->pc = 0x242624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 756)));
label_242628:
    // 0x242628: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x242628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_24262c:
    // 0x24262c: 0x24a5af88  addiu       $a1, $a1, -0x5078
    ctx->pc = 0x24262cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946696));
label_242630:
    // 0x242630: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x242630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242634:
    // 0x242634: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x242634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_242638:
    // 0x242638: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x242638u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_24263c:
    // 0x24263c: 0x320f809  jalr        $t9
label_242640:
    if (ctx->pc == 0x242640u) {
        ctx->pc = 0x242640u;
            // 0x242640: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x242644u;
        goto label_242644;
    }
    ctx->pc = 0x24263Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x242644u);
        ctx->pc = 0x242640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24263Cu;
            // 0x242640: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x242644u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x242644u; }
            if (ctx->pc != 0x242644u) { return; }
        }
        }
    }
    ctx->pc = 0x242644u;
label_242644:
    // 0x242644: 0x8e8402f4  lw          $a0, 0x2F4($s4)
    ctx->pc = 0x242644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 756)));
label_242648:
    // 0x242648: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x242648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24264c:
    // 0x24264c: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x24264cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_242650:
    // 0x242650: 0x320f809  jalr        $t9
label_242654:
    if (ctx->pc == 0x242654u) {
        ctx->pc = 0x242658u;
        goto label_242658;
    }
    ctx->pc = 0x242650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x242658u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x242658u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x242658u; }
            if (ctx->pc != 0x242658u) { return; }
        }
        }
    }
    ctx->pc = 0x242658u;
label_242658:
    // 0x242658: 0x8e8202f4  lw          $v0, 0x2F4($s4)
    ctx->pc = 0x242658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 756)));
label_24265c:
    // 0x24265c: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x24265cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_242660:
    // 0x242660: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_242664:
    if (ctx->pc == 0x242664u) {
        ctx->pc = 0x242668u;
        goto label_242668;
    }
    ctx->pc = 0x242660u;
    {
        const bool branch_taken_0x242660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x242660) {
            ctx->pc = 0x242684u;
            goto label_242684;
        }
    }
    ctx->pc = 0x242668u;
label_242668:
    // 0x242668: 0x8c8500f4  lw          $a1, 0xF4($a0)
    ctx->pc = 0x242668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
label_24266c:
    // 0x24266c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_242670:
    if (ctx->pc == 0x242670u) {
        ctx->pc = 0x242670u;
            // 0x242670: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x242674u;
        goto label_242674;
    }
    ctx->pc = 0x24266Cu;
    {
        const bool branch_taken_0x24266c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x242670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24266Cu;
            // 0x242670: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24266c) {
            ctx->pc = 0x242684u;
            goto label_242684;
        }
    }
    ctx->pc = 0x242674u;
label_242674:
    // 0x242674: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x242674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_242678:
    // 0x242678: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x242678u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_24267c:
    // 0x24267c: 0xc04de54  jal         func_137950
label_242680:
    if (ctx->pc == 0x242680u) {
        ctx->pc = 0x242680u;
            // 0x242680: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x242684u;
        goto label_242684;
    }
    ctx->pc = 0x24267Cu;
    SET_GPR_U32(ctx, 31, 0x242684u);
    ctx->pc = 0x242680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24267Cu;
            // 0x242680: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242684u; }
        if (ctx->pc != 0x242684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242684u; }
        if (ctx->pc != 0x242684u) { return; }
    }
    ctx->pc = 0x242684u;
label_242684:
    // 0x242684: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x242684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_242688:
    // 0x242688: 0xc04e748  jal         func_139D20
label_24268c:
    if (ctx->pc == 0x24268Cu) {
        ctx->pc = 0x24268Cu;
            // 0x24268c: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x242690u;
        goto label_242690;
    }
    ctx->pc = 0x242688u;
    SET_GPR_U32(ctx, 31, 0x242690u);
    ctx->pc = 0x24268Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242688u;
            // 0x24268c: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242690u; }
        if (ctx->pc != 0x242690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242690u; }
        if (ctx->pc != 0x242690u) { return; }
    }
    ctx->pc = 0x242690u;
label_242690:
    // 0x242690: 0xa38096a8  sb          $zero, -0x6958($gp)
    ctx->pc = 0x242690u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940328), (uint8_t)GPR_U32(ctx, 0));
label_242694:
    // 0x242694: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x242694u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_242698:
    // 0x242698: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x242698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24269c:
    // 0x24269c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x24269cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_2426a0:
    // 0x2426a0: 0x8c441a08  lw          $a0, 0x1A08($v0)
    ctx->pc = 0x2426a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6664)));
label_2426a4:
    // 0x2426a4: 0xc065750  jal         func_195D40
label_2426a8:
    if (ctx->pc == 0x2426A8u) {
        ctx->pc = 0x2426A8u;
            // 0x2426a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2426ACu;
        goto label_2426ac;
    }
    ctx->pc = 0x2426A4u;
    SET_GPR_U32(ctx, 31, 0x2426ACu);
    ctx->pc = 0x2426A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2426A4u;
            // 0x2426a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195D40u;
    if (runtime->hasFunction(0x195D40u)) {
        auto targetFn = runtime->lookupFunction(0x195D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2426ACu; }
        if (ctx->pc != 0x2426ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFilePath__Fii_0x195d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2426ACu; }
        if (ctx->pc != 0x2426ACu) { return; }
    }
    ctx->pc = 0x2426ACu;
label_2426ac:
    // 0x2426ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2426acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2426b0:
    // 0x2426b0: 0xc04e780  jal         func_139E00
label_2426b4:
    if (ctx->pc == 0x2426B4u) {
        ctx->pc = 0x2426B4u;
            // 0x2426b4: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x2426B8u;
        goto label_2426b8;
    }
    ctx->pc = 0x2426B0u;
    SET_GPR_U32(ctx, 31, 0x2426B8u);
    ctx->pc = 0x2426B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2426B0u;
            // 0x2426b4: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2426B8u; }
        if (ctx->pc != 0x2426B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2426B8u; }
        if (ctx->pc != 0x2426B8u) { return; }
    }
    ctx->pc = 0x2426B8u;
label_2426b8:
    // 0x2426b8: 0x8fa30114  lw          $v1, 0x114($sp)
    ctx->pc = 0x2426b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_2426bc:
    // 0x2426bc: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2426bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_2426c0:
    // 0x2426c0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2426c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2426c4:
    // 0x2426c4: 0xc052330  jal         func_148CC0
label_2426c8:
    if (ctx->pc == 0x2426C8u) {
        ctx->pc = 0x2426C8u;
            // 0x2426c8: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2426CCu;
        goto label_2426cc;
    }
    ctx->pc = 0x2426C4u;
    SET_GPR_U32(ctx, 31, 0x2426CCu);
    ctx->pc = 0x2426C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2426C4u;
            // 0x2426c8: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2426CCu; }
        if (ctx->pc != 0x2426CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2426CCu; }
        if (ctx->pc != 0x2426CCu) { return; }
    }
    ctx->pc = 0x2426CCu;
label_2426cc:
    // 0x2426cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2426ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2426d0:
    // 0x2426d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2426d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2426d4:
    // 0x2426d4: 0xc05224c  jal         func_148930
label_2426d8:
    if (ctx->pc == 0x2426D8u) {
        ctx->pc = 0x2426D8u;
            // 0x2426d8: 0x27a6016c  addiu       $a2, $sp, 0x16C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
        ctx->pc = 0x2426DCu;
        goto label_2426dc;
    }
    ctx->pc = 0x2426D4u;
    SET_GPR_U32(ctx, 31, 0x2426DCu);
    ctx->pc = 0x2426D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2426D4u;
            // 0x2426d8: 0x27a6016c  addiu       $a2, $sp, 0x16C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2426DCu; }
        if (ctx->pc != 0x2426DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2426DCu; }
        if (ctx->pc != 0x2426DCu) { return; }
    }
    ctx->pc = 0x2426DCu;
label_2426dc:
    // 0x2426dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2426dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2426e0:
    // 0x2426e0: 0xae8202f8  sw          $v0, 0x2F8($s4)
    ctx->pc = 0x2426e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 760), GPR_U32(ctx, 2));
label_2426e4:
    // 0x2426e4: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x2426e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_2426e8:
    // 0x2426e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2426e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2426ec:
    // 0x2426ec: 0x10000094  b           . + 4 + (0x94 << 2)
label_2426f0:
    if (ctx->pc == 0x2426F0u) {
        ctx->pc = 0x2426F0u;
            // 0x2426f0: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2426F4u;
        goto label_2426f4;
    }
    ctx->pc = 0x2426ECu;
    {
        const bool branch_taken_0x2426ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2426F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2426ECu;
            // 0x2426f0: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2426ec) {
            ctx->pc = 0x242940u;
            goto label_242940;
        }
    }
    ctx->pc = 0x2426F4u;
label_2426f4:
    // 0x2426f4: 0x8e8402f4  lw          $a0, 0x2F4($s4)
    ctx->pc = 0x2426f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 756)));
label_2426f8:
    // 0x2426f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2426f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2426fc:
    // 0x2426fc: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x2426fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_242700:
    // 0x242700: 0x320f809  jalr        $t9
label_242704:
    if (ctx->pc == 0x242704u) {
        ctx->pc = 0x242708u;
        goto label_242708;
    }
    ctx->pc = 0x242700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x242708u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x242708u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x242708u; }
            if (ctx->pc != 0x242708u) { return; }
        }
        }
    }
    ctx->pc = 0x242708u;
label_242708:
    // 0x242708: 0x938296a8  lbu         $v0, -0x6958($gp)
    ctx->pc = 0x242708u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940328)));
label_24270c:
    // 0x24270c: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
label_242710:
    if (ctx->pc == 0x242710u) {
        ctx->pc = 0x242714u;
        goto label_242714;
    }
    ctx->pc = 0x24270Cu;
    {
        const bool branch_taken_0x24270c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24270c) {
            ctx->pc = 0x242874u;
            goto label_242874;
        }
    }
    ctx->pc = 0x242714u;
label_242714:
    // 0x242714: 0x8e8402f4  lw          $a0, 0x2F4($s4)
    ctx->pc = 0x242714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 756)));
label_242718:
    // 0x242718: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x242718u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24271c:
    // 0x24271c: 0x8f390108  lw          $t9, 0x108($t9)
    ctx->pc = 0x24271cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 264)));
label_242720:
    // 0x242720: 0x320f809  jalr        $t9
label_242724:
    if (ctx->pc == 0x242724u) {
        ctx->pc = 0x242724u;
            // 0x242724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242728u;
        goto label_242728;
    }
    ctx->pc = 0x242720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x242728u);
        ctx->pc = 0x242724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242720u;
            // 0x242724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x242728u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x242728u; }
            if (ctx->pc != 0x242728u) { return; }
        }
        }
    }
    ctx->pc = 0x242728u;
label_242728:
    // 0x242728: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x242728u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_24272c:
    // 0x24272c: 0x3c0241e0  lui         $v0, 0x41E0
    ctx->pc = 0x24272cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16864 << 16));
label_242730:
    // 0x242730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x242730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_242734:
    // 0x242734: 0x0  nop
    ctx->pc = 0x242734u;
    // NOP
label_242738:
    // 0x242738: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x242738u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24273c:
    // 0x24273c: 0x0  nop
    ctx->pc = 0x24273cu;
    // NOP
label_242740:
    // 0x242740: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_242744:
    if (ctx->pc == 0x242744u) {
        ctx->pc = 0x242744u;
            // 0x242744: 0x3c024208  lui         $v0, 0x4208 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16904 << 16));
        ctx->pc = 0x242748u;
        goto label_242748;
    }
    ctx->pc = 0x242740u;
    {
        const bool branch_taken_0x242740 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x242744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242740u;
            // 0x242744: 0x3c024208  lui         $v0, 0x4208 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16904 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242740) {
            ctx->pc = 0x242764u;
            goto label_242764;
        }
    }
    ctx->pc = 0x242748u;
label_242748:
    // 0x242748: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x242748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_24274c:
    // 0x24274c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24274cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_242750:
    // 0x242750: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x242750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242754:
    // 0x242754: 0x8f3900f8  lw          $t9, 0xF8($t9)
    ctx->pc = 0x242754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 248)));
label_242758:
    // 0x242758: 0x320f809  jalr        $t9
label_24275c:
    if (ctx->pc == 0x24275Cu) {
        ctx->pc = 0x24275Cu;
            // 0x24275c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x242760u;
        goto label_242760;
    }
    ctx->pc = 0x242758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x242760u);
        ctx->pc = 0x24275Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242758u;
            // 0x24275c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x242760u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x242760u; }
            if (ctx->pc != 0x242760u) { return; }
        }
        }
    }
    ctx->pc = 0x242760u;
label_242760:
    // 0x242760: 0x3c024208  lui         $v0, 0x4208
    ctx->pc = 0x242760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16904 << 16));
label_242764:
    // 0x242764: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x242764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_242768:
    // 0x242768: 0x0  nop
    ctx->pc = 0x242768u;
    // NOP
label_24276c:
    // 0x24276c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x24276cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_242770:
    // 0x242770: 0x0  nop
    ctx->pc = 0x242770u;
    // NOP
label_242774:
    // 0x242774: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_242778:
    if (ctx->pc == 0x242778u) {
        ctx->pc = 0x24277Cu;
        goto label_24277c;
    }
    ctx->pc = 0x242774u;
    {
        const bool branch_taken_0x242774 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x242774) {
            ctx->pc = 0x242788u;
            goto label_242788;
        }
    }
    ctx->pc = 0x24277Cu;
label_24277c:
    // 0x24277c: 0x8e8201a8  lw          $v0, 0x1A8($s4)
    ctx->pc = 0x24277cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 424)));
label_242780:
    // 0x242780: 0x2403fffa  addiu       $v1, $zero, -0x6
    ctx->pc = 0x242780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
label_242784:
    // 0x242784: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x242784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_242788:
    // 0x242788: 0x17c0003a  bnez        $fp, . + 4 + (0x3A << 2)
label_24278c:
    if (ctx->pc == 0x24278Cu) {
        ctx->pc = 0x24278Cu;
            // 0x24278c: 0x3c024220  lui         $v0, 0x4220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
        ctx->pc = 0x242790u;
        goto label_242790;
    }
    ctx->pc = 0x242788u;
    {
        const bool branch_taken_0x242788 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x24278Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242788u;
            // 0x24278c: 0x3c024220  lui         $v0, 0x4220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242788) {
            ctx->pc = 0x242874u;
            goto label_242874;
        }
    }
    ctx->pc = 0x242790u;
label_242790:
    // 0x242790: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x242790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_242794:
    // 0x242794: 0x0  nop
    ctx->pc = 0x242794u;
    // NOP
label_242798:
    // 0x242798: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x242798u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24279c:
    // 0x24279c: 0x0  nop
    ctx->pc = 0x24279cu;
    // NOP
label_2427a0:
    // 0x2427a0: 0x45000034  bc1f        . + 4 + (0x34 << 2)
label_2427a4:
    if (ctx->pc == 0x2427A4u) {
        ctx->pc = 0x2427A4u;
            // 0x2427a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2427A8u;
        goto label_2427a8;
    }
    ctx->pc = 0x2427A0u;
    {
        const bool branch_taken_0x2427a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2427A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2427A0u;
            // 0x2427a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2427a0) {
            ctx->pc = 0x242874u;
            goto label_242874;
        }
    }
    ctx->pc = 0x2427A8u;
label_2427a8:
    // 0x2427a8: 0xc05231c  jal         func_148C70
label_2427ac:
    if (ctx->pc == 0x2427ACu) {
        ctx->pc = 0x2427B0u;
        goto label_2427b0;
    }
    ctx->pc = 0x2427A8u;
    SET_GPR_U32(ctx, 31, 0x2427B0u);
    ctx->pc = 0x148C70u;
    if (runtime->hasFunction(0x148C70u)) {
        auto targetFn = runtime->lookupFunction(0x148C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2427B0u; }
        if (ctx->pc != 0x2427B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGFile__Fi_0x148c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2427B0u; }
        if (ctx->pc != 0x2427B0u) { return; }
    }
    ctx->pc = 0x2427B0u;
label_2427b0:
    // 0x2427b0: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x2427b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_2427b4:
    // 0x2427b4: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x2427b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_2427b8:
    // 0x2427b8: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x2427b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2427bc:
    // 0x2427bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2427bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2427c0:
    // 0x2427c0: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2427c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_2427c4:
    // 0x2427c4: 0x8c5e1a08  lw          $fp, 0x1A08($v0)
    ctx->pc = 0x2427c4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6664)));
label_2427c8:
    // 0x2427c8: 0xc092b08  jal         func_24AC20
label_2427cc:
    if (ctx->pc == 0x2427CCu) {
        ctx->pc = 0x2427CCu;
            // 0x2427cc: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2427D0u;
        goto label_2427d0;
    }
    ctx->pc = 0x2427C8u;
    SET_GPR_U32(ctx, 31, 0x2427D0u);
    ctx->pc = 0x2427CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2427C8u;
            // 0x2427cc: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24AC20u;
    if (runtime->hasFunction(0x24AC20u)) {
        auto targetFn = runtime->lookupFunction(0x24AC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2427D0u; }
        if (ctx->pc != 0x2427D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildUpWeaponTrans__FP13CGameDataUsedi_0x24ac20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2427D0u; }
        if (ctx->pc != 0x2427D0u) { return; }
    }
    ctx->pc = 0x2427D0u;
label_2427d0:
    // 0x2427d0: 0x8e93001c  lw          $s3, 0x1C($s4)
    ctx->pc = 0x2427d0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_2427d4:
    // 0x2427d4: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2427d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_2427d8:
    // 0x2427d8: 0x26101ef0  addiu       $s0, $s0, 0x1EF0
    ctx->pc = 0x2427d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
label_2427dc:
    // 0x2427dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2427dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2427e0:
    // 0x2427e0: 0xc04b950  jal         func_12E540
label_2427e4:
    if (ctx->pc == 0x2427E4u) {
        ctx->pc = 0x2427E4u;
            // 0x2427e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2427E8u;
        goto label_2427e8;
    }
    ctx->pc = 0x2427E0u;
    SET_GPR_U32(ctx, 31, 0x2427E8u);
    ctx->pc = 0x2427E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2427E0u;
            // 0x2427e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2427E8u; }
        if (ctx->pc != 0x2427E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2427E8u; }
        if (ctx->pc != 0x2427E8u) { return; }
    }
    ctx->pc = 0x2427E8u;
label_2427e8:
    // 0x2427e8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2427e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2427ec:
    // 0x2427ec: 0x260401d8  addiu       $a0, $s0, 0x1D8
    ctx->pc = 0x2427ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 472));
label_2427f0:
    // 0x2427f0: 0xc04a3dc  jal         func_128F70
label_2427f4:
    if (ctx->pc == 0x2427F4u) {
        ctx->pc = 0x2427F4u;
            // 0x2427f4: 0x24a5af90  addiu       $a1, $a1, -0x5070 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946704));
        ctx->pc = 0x2427F8u;
        goto label_2427f8;
    }
    ctx->pc = 0x2427F0u;
    SET_GPR_U32(ctx, 31, 0x2427F8u);
    ctx->pc = 0x2427F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2427F0u;
            // 0x2427f4: 0x24a5af90  addiu       $a1, $a1, -0x5070 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2427F8u; }
        if (ctx->pc != 0x2427F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2427F8u; }
        if (ctx->pc != 0x2427F8u) { return; }
    }
    ctx->pc = 0x2427F8u;
label_2427f8:
    // 0x2427f8: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2427f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2427fc:
    // 0x2427fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2427fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_242800:
    // 0x242800: 0xac20cae4  sw          $zero, -0x351C($at)
    ctx->pc = 0x242800u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953700), GPR_U32(ctx, 0));
label_242804:
    // 0x242804: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x242804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_242808:
    // 0x242808: 0xac20cadc  sw          $zero, -0x3524($at)
    ctx->pc = 0x242808u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953692), GPR_U32(ctx, 0));
label_24280c:
    // 0x24280c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x24280cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_242810:
    // 0x242810: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x242810u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_242814:
    // 0x242814: 0x320f809  jalr        $t9
label_242818:
    if (ctx->pc == 0x242818u) {
        ctx->pc = 0x242818u;
            // 0x242818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24281Cu;
        goto label_24281c;
    }
    ctx->pc = 0x242814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24281Cu);
        ctx->pc = 0x242818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242814u;
            // 0x242818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24281Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24281Cu; }
            if (ctx->pc != 0x24281Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24281Cu;
label_24281c:
    // 0x24281c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x24281cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_242820:
    // 0x242820: 0x3c0701f1  lui         $a3, 0x1F1
    ctx->pc = 0x242820u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)497 << 16));
label_242824:
    // 0x242824: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x242824u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_242828:
    // 0x242828: 0x24e7cac0  addiu       $a3, $a3, -0x3540
    ctx->pc = 0x242828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953664));
label_24282c:
    // 0x24282c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x24282cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_242830:
    // 0x242830: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x242830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_242834:
    // 0x242834: 0x24c6af78  addiu       $a2, $a2, -0x5088
    ctx->pc = 0x242834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946680));
label_242838:
    // 0x242838: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x242838u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_24283c:
    // 0x24283c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x24283cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_242840:
    // 0x242840: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x242840u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_242844:
    // 0x242844: 0x8c450110  lw          $a1, 0x110($v0)
    ctx->pc = 0x242844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_242848:
    // 0x242848: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x242848u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_24284c:
    // 0x24284c: 0x320f809  jalr        $t9
label_242850:
    if (ctx->pc == 0x242850u) {
        ctx->pc = 0x242850u;
            // 0x242850: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242854u;
        goto label_242854;
    }
    ctx->pc = 0x24284Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x242854u);
        ctx->pc = 0x242850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24284Cu;
            // 0x242850: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x242854u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x242854u; }
            if (ctx->pc != 0x242854u) { return; }
        }
        }
    }
    ctx->pc = 0x242854u;
label_242854:
    // 0x242854: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x242854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_242858:
    // 0x242858: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x242858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_24285c:
    // 0x24285c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x24285cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_242860:
    // 0x242860: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x242860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_242864:
    // 0x242864: 0xc093224  jal         func_24C890
label_242868:
    if (ctx->pc == 0x242868u) {
        ctx->pc = 0x242868u;
            // 0x242868: 0xa20001d8  sb          $zero, 0x1D8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 472), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x24286Cu;
        goto label_24286c;
    }
    ctx->pc = 0x242864u;
    SET_GPR_U32(ctx, 31, 0x24286Cu);
    ctx->pc = 0x242868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242864u;
            // 0x242868: 0xa20001d8  sb          $zero, 0x1D8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 472), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C890u;
    if (runtime->hasFunction(0x24C890u)) {
        auto targetFn = runtime->lookupFunction(0x24C890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24286Cu; }
        if (ctx->pc != 0x24286Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WeaponBuildCheck__13CMenuItemInfoFP12CActionCharaii_0x24c890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24286Cu; }
        if (ctx->pc != 0x24286Cu) { return; }
    }
    ctx->pc = 0x24286Cu;
label_24286c:
    // 0x24286c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24286cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_242870:
    // 0x242870: 0xa38296a8  sb          $v0, -0x6958($gp)
    ctx->pc = 0x242870u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940328), (uint8_t)GPR_U32(ctx, 2));
label_242874:
    // 0x242874: 0x938396a8  lbu         $v1, -0x6958($gp)
    ctx->pc = 0x242874u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940328)));
label_242878:
    // 0x242878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24287c:
    // 0x24287c: 0x14620030  bne         $v1, $v0, . + 4 + (0x30 << 2)
label_242880:
    if (ctx->pc == 0x242880u) {
        ctx->pc = 0x242884u;
        goto label_242884;
    }
    ctx->pc = 0x24287Cu;
    {
        const bool branch_taken_0x24287c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24287c) {
            ctx->pc = 0x242940u;
            goto label_242940;
        }
    }
    ctx->pc = 0x242884u;
label_242884:
    // 0x242884: 0x8e8402f4  lw          $a0, 0x2F4($s4)
    ctx->pc = 0x242884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 756)));
label_242888:
    // 0x242888: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x242888u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24288c:
    // 0x24288c: 0x8f39010c  lw          $t9, 0x10C($t9)
    ctx->pc = 0x24288cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 268)));
label_242890:
    // 0x242890: 0x320f809  jalr        $t9
label_242894:
    if (ctx->pc == 0x242894u) {
        ctx->pc = 0x242894u;
            // 0x242894: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242898u;
        goto label_242898;
    }
    ctx->pc = 0x242890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x242898u);
        ctx->pc = 0x242894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242890u;
            // 0x242894: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x242898u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x242898u; }
            if (ctx->pc != 0x242898u) { return; }
        }
        }
    }
    ctx->pc = 0x242898u;
label_242898:
    // 0x242898: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_24289c:
    if (ctx->pc == 0x24289Cu) {
        ctx->pc = 0x24289Cu;
            // 0x24289c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2428A0u;
        goto label_2428a0;
    }
    ctx->pc = 0x242898u;
    {
        const bool branch_taken_0x242898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24289Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242898u;
            // 0x24289c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242898) {
            ctx->pc = 0x242940u;
            goto label_242940;
        }
    }
    ctx->pc = 0x2428A0u;
label_2428a0:
    // 0x2428a0: 0xae8002f8  sw          $zero, 0x2F8($s4)
    ctx->pc = 0x2428a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 760), GPR_U32(ctx, 0));
label_2428a4:
    // 0x2428a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2428a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2428a8:
    // 0x2428a8: 0x24a5afa0  addiu       $a1, $a1, -0x5060
    ctx->pc = 0x2428a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946720));
label_2428ac:
    // 0x2428ac: 0xc08e7cc  jal         func_239F30
label_2428b0:
    if (ctx->pc == 0x2428B0u) {
        ctx->pc = 0x2428B0u;
            // 0x2428b0: 0xae8002f4  sw          $zero, 0x2F4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 756), GPR_U32(ctx, 0));
        ctx->pc = 0x2428B4u;
        goto label_2428b4;
    }
    ctx->pc = 0x2428ACu;
    SET_GPR_U32(ctx, 31, 0x2428B4u);
    ctx->pc = 0x2428B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2428ACu;
            // 0x2428b0: 0xae8002f4  sw          $zero, 0x2F4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 756), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2428B4u; }
        if (ctx->pc != 0x2428B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2428B4u; }
        if (ctx->pc != 0x2428B4u) { return; }
    }
    ctx->pc = 0x2428B4u;
label_2428b4:
    // 0x2428b4: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x2428b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_2428b8:
    // 0x2428b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2428b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2428bc:
    // 0x2428bc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2428bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2428c0:
    // 0x2428c0: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2428c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_2428c4:
    // 0x2428c4: 0x24451801  addiu       $a1, $v0, 0x1801
    ctx->pc = 0x2428c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
label_2428c8:
    // 0x2428c8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_2428cc:
    if (ctx->pc == 0x2428CCu) {
        ctx->pc = 0x2428CCu;
            // 0x2428cc: 0x26a41801  addiu       $a0, $s5, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 6145));
        ctx->pc = 0x2428D0u;
        goto label_2428d0;
    }
    ctx->pc = 0x2428C8u;
    {
        const bool branch_taken_0x2428c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2428CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2428C8u;
            // 0x2428cc: 0x26a41801  addiu       $a0, $s5, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 6145));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2428c8) {
            ctx->pc = 0x2428D8u;
            goto label_2428d8;
        }
    }
    ctx->pc = 0x2428D0u;
label_2428d0:
    // 0x2428d0: 0xc04a3dc  jal         func_128F70
label_2428d4:
    if (ctx->pc == 0x2428D4u) {
        ctx->pc = 0x2428D8u;
        goto label_2428d8;
    }
    ctx->pc = 0x2428D0u;
    SET_GPR_U32(ctx, 31, 0x2428D8u);
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2428D8u; }
        if (ctx->pc != 0x2428D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2428D8u; }
        if (ctx->pc != 0x2428D8u) { return; }
    }
    ctx->pc = 0x2428D8u;
label_2428d8:
    // 0x2428d8: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x2428d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_2428dc:
    // 0x2428dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2428dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2428e0:
    // 0x2428e0: 0x10000017  b           . + 4 + (0x17 << 2)
label_2428e4:
    if (ctx->pc == 0x2428E4u) {
        ctx->pc = 0x2428E4u;
            // 0x2428e4: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2428E8u;
        goto label_2428e8;
    }
    ctx->pc = 0x2428E0u;
    {
        const bool branch_taken_0x2428e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2428E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2428E0u;
            // 0x2428e4: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2428e0) {
            ctx->pc = 0x242940u;
            goto label_242940;
        }
    }
    ctx->pc = 0x2428E8u;
label_2428e8:
    // 0x2428e8: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
label_2428ec:
    if (ctx->pc == 0x2428ECu) {
        ctx->pc = 0x2428F0u;
        goto label_2428f0;
    }
    ctx->pc = 0x2428E8u;
    {
        const bool branch_taken_0x2428e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2428e8) {
            ctx->pc = 0x242940u;
            goto label_242940;
        }
    }
    ctx->pc = 0x2428F0u;
label_2428f0:
    // 0x2428f0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2428f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2428f4:
    // 0x2428f4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2428f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2428f8:
    // 0x2428f8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2428f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2428fc:
    // 0x2428fc: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2428fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_242900:
    // 0x242900: 0xc094274  jal         func_2509D0
label_242904:
    if (ctx->pc == 0x242904u) {
        ctx->pc = 0x242904u;
            // 0x242904: 0xa397962c  sb          $s7, -0x69D4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294940204), (uint8_t)GPR_U32(ctx, 23));
        ctx->pc = 0x242908u;
        goto label_242908;
    }
    ctx->pc = 0x242900u;
    SET_GPR_U32(ctx, 31, 0x242908u);
    ctx->pc = 0x242904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242900u;
            // 0x242904: 0xa397962c  sb          $s7, -0x69D4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294940204), (uint8_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242908u; }
        if (ctx->pc != 0x242908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242908u; }
        if (ctx->pc != 0x242908u) { return; }
    }
    ctx->pc = 0x242908u;
label_242908:
    // 0x242908: 0x1000000d  b           . + 4 + (0xD << 2)
label_24290c:
    if (ctx->pc == 0x24290Cu) {
        ctx->pc = 0x242910u;
        goto label_242910;
    }
    ctx->pc = 0x242908u;
    {
        const bool branch_taken_0x242908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242908) {
            ctx->pc = 0x242940u;
            goto label_242940;
        }
    }
    ctx->pc = 0x242910u;
label_242910:
    // 0x242910: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
label_242914:
    if (ctx->pc == 0x242914u) {
        ctx->pc = 0x242918u;
        goto label_242918;
    }
    ctx->pc = 0x242910u;
    {
        const bool branch_taken_0x242910 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x242910) {
            ctx->pc = 0x242940u;
            goto label_242940;
        }
    }
    ctx->pc = 0x242918u;
label_242918:
    // 0x242918: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x242918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_24291c:
    // 0x24291c: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x24291cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_242920:
    // 0x242920: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x242920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_242924:
    // 0x242924: 0x8c430138  lw          $v1, 0x138($v0)
    ctx->pc = 0x242924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_242928:
    // 0x242928: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_24292c:
    if (ctx->pc == 0x24292Cu) {
        ctx->pc = 0x24292Cu;
            // 0x24292c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x242930u;
        goto label_242930;
    }
    ctx->pc = 0x242928u;
    {
        const bool branch_taken_0x242928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24292Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242928u;
            // 0x24292c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242928) {
            ctx->pc = 0x242938u;
            goto label_242938;
        }
    }
    ctx->pc = 0x242930u;
label_242930:
    // 0x242930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_242934:
    // 0x242934: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x242934u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_242938:
    // 0x242938: 0xc094274  jal         func_2509D0
label_24293c:
    if (ctx->pc == 0x24293Cu) {
        ctx->pc = 0x24293Cu;
            // 0x24293c: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x242940u;
        goto label_242940;
    }
    ctx->pc = 0x242938u;
    SET_GPR_U32(ctx, 31, 0x242940u);
    ctx->pc = 0x24293Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242938u;
            // 0x24293c: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242940u; }
        if (ctx->pc != 0x242940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242940u; }
        if (ctx->pc != 0x242940u) { return; }
    }
    ctx->pc = 0x242940u;
label_242940:
    // 0x242940: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_242944:
    // 0x242944: 0x16e20007  bne         $s7, $v0, . + 4 + (0x7 << 2)
label_242948:
    if (ctx->pc == 0x242948u) {
        ctx->pc = 0x242948u;
            // 0x242948: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24294Cu;
        goto label_24294c;
    }
    ctx->pc = 0x242944u;
    {
        const bool branch_taken_0x242944 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x242948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242944u;
            // 0x242948: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242944) {
            ctx->pc = 0x242964u;
            goto label_242964;
        }
    }
    ctx->pc = 0x24294Cu;
label_24294c:
    // 0x24294c: 0xc092fb4  jal         func_24BED0
label_242950:
    if (ctx->pc == 0x242950u) {
        ctx->pc = 0x242950u;
            // 0x242950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242954u;
        goto label_242954;
    }
    ctx->pc = 0x24294Cu;
    SET_GPR_U32(ctx, 31, 0x242954u);
    ctx->pc = 0x242950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24294Cu;
            // 0x242950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24BED0u;
    if (runtime->hasFunction(0x24BED0u)) {
        auto targetFn = runtime->lookupFunction(0x24BED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242954u; }
        if (ctx->pc != 0x242954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuWeaponStatusInfoFormSet__FP13CGameDataUsedP11CDataWeapon_0x24bed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242954u; }
        if (ctx->pc != 0x242954u) { return; }
    }
    ctx->pc = 0x242954u;
label_242954:
    // 0x242954: 0xa6800002  sh          $zero, 0x2($s4)
    ctx->pc = 0x242954u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
label_242958:
    // 0x242958: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x242958u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
label_24295c:
    // 0x24295c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x24295cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_242960:
    // 0x242960: 0xa4400070  sh          $zero, 0x70($v0)
    ctx->pc = 0x242960u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 112), (uint16_t)GPR_U32(ctx, 0));
label_242964:
    // 0x242964: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x242964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_242968:
    // 0x242968: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x242968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_24296c:
    // 0x24296c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x24296cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_242970:
    // 0x242970: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x242970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242974:
    // 0x242974: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x242974u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_242978:
    // 0x242978: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x242978u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_24297c:
    // 0x24297c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x24297cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_242980:
    // 0x242980: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x242980u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_242984:
    // 0x242984: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x242984u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_242988:
    // 0x242988: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x242988u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24298c:
    // 0x24298c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24298cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_242990:
    // 0x242990: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x242990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_242994:
    // 0x242994: 0x3e00008  jr          $ra
label_242998:
    if (ctx->pc == 0x242998u) {
        ctx->pc = 0x242998u;
            // 0x242998: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x24299Cu;
        goto label_fallthrough_0x242994;
    }
    ctx->pc = 0x242994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242994u;
            // 0x242998: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x242994:
    ctx->pc = 0x24299Cu;
}
