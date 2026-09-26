#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcTex__11CMenuInventFv
// Address: 0x204e70 - 0x2061dc
void CalcTex__11CMenuInventFv_0x204e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcTex__11CMenuInventFv_0x204e70");
#endif

    switch (ctx->pc) {
        case 0x204e70u: goto label_204e70;
        case 0x204e74u: goto label_204e74;
        case 0x204e78u: goto label_204e78;
        case 0x204e7cu: goto label_204e7c;
        case 0x204e80u: goto label_204e80;
        case 0x204e84u: goto label_204e84;
        case 0x204e88u: goto label_204e88;
        case 0x204e8cu: goto label_204e8c;
        case 0x204e90u: goto label_204e90;
        case 0x204e94u: goto label_204e94;
        case 0x204e98u: goto label_204e98;
        case 0x204e9cu: goto label_204e9c;
        case 0x204ea0u: goto label_204ea0;
        case 0x204ea4u: goto label_204ea4;
        case 0x204ea8u: goto label_204ea8;
        case 0x204eacu: goto label_204eac;
        case 0x204eb0u: goto label_204eb0;
        case 0x204eb4u: goto label_204eb4;
        case 0x204eb8u: goto label_204eb8;
        case 0x204ebcu: goto label_204ebc;
        case 0x204ec0u: goto label_204ec0;
        case 0x204ec4u: goto label_204ec4;
        case 0x204ec8u: goto label_204ec8;
        case 0x204eccu: goto label_204ecc;
        case 0x204ed0u: goto label_204ed0;
        case 0x204ed4u: goto label_204ed4;
        case 0x204ed8u: goto label_204ed8;
        case 0x204edcu: goto label_204edc;
        case 0x204ee0u: goto label_204ee0;
        case 0x204ee4u: goto label_204ee4;
        case 0x204ee8u: goto label_204ee8;
        case 0x204eecu: goto label_204eec;
        case 0x204ef0u: goto label_204ef0;
        case 0x204ef4u: goto label_204ef4;
        case 0x204ef8u: goto label_204ef8;
        case 0x204efcu: goto label_204efc;
        case 0x204f00u: goto label_204f00;
        case 0x204f04u: goto label_204f04;
        case 0x204f08u: goto label_204f08;
        case 0x204f0cu: goto label_204f0c;
        case 0x204f10u: goto label_204f10;
        case 0x204f14u: goto label_204f14;
        case 0x204f18u: goto label_204f18;
        case 0x204f1cu: goto label_204f1c;
        case 0x204f20u: goto label_204f20;
        case 0x204f24u: goto label_204f24;
        case 0x204f28u: goto label_204f28;
        case 0x204f2cu: goto label_204f2c;
        case 0x204f30u: goto label_204f30;
        case 0x204f34u: goto label_204f34;
        case 0x204f38u: goto label_204f38;
        case 0x204f3cu: goto label_204f3c;
        case 0x204f40u: goto label_204f40;
        case 0x204f44u: goto label_204f44;
        case 0x204f48u: goto label_204f48;
        case 0x204f4cu: goto label_204f4c;
        case 0x204f50u: goto label_204f50;
        case 0x204f54u: goto label_204f54;
        case 0x204f58u: goto label_204f58;
        case 0x204f5cu: goto label_204f5c;
        case 0x204f60u: goto label_204f60;
        case 0x204f64u: goto label_204f64;
        case 0x204f68u: goto label_204f68;
        case 0x204f6cu: goto label_204f6c;
        case 0x204f70u: goto label_204f70;
        case 0x204f74u: goto label_204f74;
        case 0x204f78u: goto label_204f78;
        case 0x204f7cu: goto label_204f7c;
        case 0x204f80u: goto label_204f80;
        case 0x204f84u: goto label_204f84;
        case 0x204f88u: goto label_204f88;
        case 0x204f8cu: goto label_204f8c;
        case 0x204f90u: goto label_204f90;
        case 0x204f94u: goto label_204f94;
        case 0x204f98u: goto label_204f98;
        case 0x204f9cu: goto label_204f9c;
        case 0x204fa0u: goto label_204fa0;
        case 0x204fa4u: goto label_204fa4;
        case 0x204fa8u: goto label_204fa8;
        case 0x204facu: goto label_204fac;
        case 0x204fb0u: goto label_204fb0;
        case 0x204fb4u: goto label_204fb4;
        case 0x204fb8u: goto label_204fb8;
        case 0x204fbcu: goto label_204fbc;
        case 0x204fc0u: goto label_204fc0;
        case 0x204fc4u: goto label_204fc4;
        case 0x204fc8u: goto label_204fc8;
        case 0x204fccu: goto label_204fcc;
        case 0x204fd0u: goto label_204fd0;
        case 0x204fd4u: goto label_204fd4;
        case 0x204fd8u: goto label_204fd8;
        case 0x204fdcu: goto label_204fdc;
        case 0x204fe0u: goto label_204fe0;
        case 0x204fe4u: goto label_204fe4;
        case 0x204fe8u: goto label_204fe8;
        case 0x204fecu: goto label_204fec;
        case 0x204ff0u: goto label_204ff0;
        case 0x204ff4u: goto label_204ff4;
        case 0x204ff8u: goto label_204ff8;
        case 0x204ffcu: goto label_204ffc;
        case 0x205000u: goto label_205000;
        case 0x205004u: goto label_205004;
        case 0x205008u: goto label_205008;
        case 0x20500cu: goto label_20500c;
        case 0x205010u: goto label_205010;
        case 0x205014u: goto label_205014;
        case 0x205018u: goto label_205018;
        case 0x20501cu: goto label_20501c;
        case 0x205020u: goto label_205020;
        case 0x205024u: goto label_205024;
        case 0x205028u: goto label_205028;
        case 0x20502cu: goto label_20502c;
        case 0x205030u: goto label_205030;
        case 0x205034u: goto label_205034;
        case 0x205038u: goto label_205038;
        case 0x20503cu: goto label_20503c;
        case 0x205040u: goto label_205040;
        case 0x205044u: goto label_205044;
        case 0x205048u: goto label_205048;
        case 0x20504cu: goto label_20504c;
        case 0x205050u: goto label_205050;
        case 0x205054u: goto label_205054;
        case 0x205058u: goto label_205058;
        case 0x20505cu: goto label_20505c;
        case 0x205060u: goto label_205060;
        case 0x205064u: goto label_205064;
        case 0x205068u: goto label_205068;
        case 0x20506cu: goto label_20506c;
        case 0x205070u: goto label_205070;
        case 0x205074u: goto label_205074;
        case 0x205078u: goto label_205078;
        case 0x20507cu: goto label_20507c;
        case 0x205080u: goto label_205080;
        case 0x205084u: goto label_205084;
        case 0x205088u: goto label_205088;
        case 0x20508cu: goto label_20508c;
        case 0x205090u: goto label_205090;
        case 0x205094u: goto label_205094;
        case 0x205098u: goto label_205098;
        case 0x20509cu: goto label_20509c;
        case 0x2050a0u: goto label_2050a0;
        case 0x2050a4u: goto label_2050a4;
        case 0x2050a8u: goto label_2050a8;
        case 0x2050acu: goto label_2050ac;
        case 0x2050b0u: goto label_2050b0;
        case 0x2050b4u: goto label_2050b4;
        case 0x2050b8u: goto label_2050b8;
        case 0x2050bcu: goto label_2050bc;
        case 0x2050c0u: goto label_2050c0;
        case 0x2050c4u: goto label_2050c4;
        case 0x2050c8u: goto label_2050c8;
        case 0x2050ccu: goto label_2050cc;
        case 0x2050d0u: goto label_2050d0;
        case 0x2050d4u: goto label_2050d4;
        case 0x2050d8u: goto label_2050d8;
        case 0x2050dcu: goto label_2050dc;
        case 0x2050e0u: goto label_2050e0;
        case 0x2050e4u: goto label_2050e4;
        case 0x2050e8u: goto label_2050e8;
        case 0x2050ecu: goto label_2050ec;
        case 0x2050f0u: goto label_2050f0;
        case 0x2050f4u: goto label_2050f4;
        case 0x2050f8u: goto label_2050f8;
        case 0x2050fcu: goto label_2050fc;
        case 0x205100u: goto label_205100;
        case 0x205104u: goto label_205104;
        case 0x205108u: goto label_205108;
        case 0x20510cu: goto label_20510c;
        case 0x205110u: goto label_205110;
        case 0x205114u: goto label_205114;
        case 0x205118u: goto label_205118;
        case 0x20511cu: goto label_20511c;
        case 0x205120u: goto label_205120;
        case 0x205124u: goto label_205124;
        case 0x205128u: goto label_205128;
        case 0x20512cu: goto label_20512c;
        case 0x205130u: goto label_205130;
        case 0x205134u: goto label_205134;
        case 0x205138u: goto label_205138;
        case 0x20513cu: goto label_20513c;
        case 0x205140u: goto label_205140;
        case 0x205144u: goto label_205144;
        case 0x205148u: goto label_205148;
        case 0x20514cu: goto label_20514c;
        case 0x205150u: goto label_205150;
        case 0x205154u: goto label_205154;
        case 0x205158u: goto label_205158;
        case 0x20515cu: goto label_20515c;
        case 0x205160u: goto label_205160;
        case 0x205164u: goto label_205164;
        case 0x205168u: goto label_205168;
        case 0x20516cu: goto label_20516c;
        case 0x205170u: goto label_205170;
        case 0x205174u: goto label_205174;
        case 0x205178u: goto label_205178;
        case 0x20517cu: goto label_20517c;
        case 0x205180u: goto label_205180;
        case 0x205184u: goto label_205184;
        case 0x205188u: goto label_205188;
        case 0x20518cu: goto label_20518c;
        case 0x205190u: goto label_205190;
        case 0x205194u: goto label_205194;
        case 0x205198u: goto label_205198;
        case 0x20519cu: goto label_20519c;
        case 0x2051a0u: goto label_2051a0;
        case 0x2051a4u: goto label_2051a4;
        case 0x2051a8u: goto label_2051a8;
        case 0x2051acu: goto label_2051ac;
        case 0x2051b0u: goto label_2051b0;
        case 0x2051b4u: goto label_2051b4;
        case 0x2051b8u: goto label_2051b8;
        case 0x2051bcu: goto label_2051bc;
        case 0x2051c0u: goto label_2051c0;
        case 0x2051c4u: goto label_2051c4;
        case 0x2051c8u: goto label_2051c8;
        case 0x2051ccu: goto label_2051cc;
        case 0x2051d0u: goto label_2051d0;
        case 0x2051d4u: goto label_2051d4;
        case 0x2051d8u: goto label_2051d8;
        case 0x2051dcu: goto label_2051dc;
        case 0x2051e0u: goto label_2051e0;
        case 0x2051e4u: goto label_2051e4;
        case 0x2051e8u: goto label_2051e8;
        case 0x2051ecu: goto label_2051ec;
        case 0x2051f0u: goto label_2051f0;
        case 0x2051f4u: goto label_2051f4;
        case 0x2051f8u: goto label_2051f8;
        case 0x2051fcu: goto label_2051fc;
        case 0x205200u: goto label_205200;
        case 0x205204u: goto label_205204;
        case 0x205208u: goto label_205208;
        case 0x20520cu: goto label_20520c;
        case 0x205210u: goto label_205210;
        case 0x205214u: goto label_205214;
        case 0x205218u: goto label_205218;
        case 0x20521cu: goto label_20521c;
        case 0x205220u: goto label_205220;
        case 0x205224u: goto label_205224;
        case 0x205228u: goto label_205228;
        case 0x20522cu: goto label_20522c;
        case 0x205230u: goto label_205230;
        case 0x205234u: goto label_205234;
        case 0x205238u: goto label_205238;
        case 0x20523cu: goto label_20523c;
        case 0x205240u: goto label_205240;
        case 0x205244u: goto label_205244;
        case 0x205248u: goto label_205248;
        case 0x20524cu: goto label_20524c;
        case 0x205250u: goto label_205250;
        case 0x205254u: goto label_205254;
        case 0x205258u: goto label_205258;
        case 0x20525cu: goto label_20525c;
        case 0x205260u: goto label_205260;
        case 0x205264u: goto label_205264;
        case 0x205268u: goto label_205268;
        case 0x20526cu: goto label_20526c;
        case 0x205270u: goto label_205270;
        case 0x205274u: goto label_205274;
        case 0x205278u: goto label_205278;
        case 0x20527cu: goto label_20527c;
        case 0x205280u: goto label_205280;
        case 0x205284u: goto label_205284;
        case 0x205288u: goto label_205288;
        case 0x20528cu: goto label_20528c;
        case 0x205290u: goto label_205290;
        case 0x205294u: goto label_205294;
        case 0x205298u: goto label_205298;
        case 0x20529cu: goto label_20529c;
        case 0x2052a0u: goto label_2052a0;
        case 0x2052a4u: goto label_2052a4;
        case 0x2052a8u: goto label_2052a8;
        case 0x2052acu: goto label_2052ac;
        case 0x2052b0u: goto label_2052b0;
        case 0x2052b4u: goto label_2052b4;
        case 0x2052b8u: goto label_2052b8;
        case 0x2052bcu: goto label_2052bc;
        case 0x2052c0u: goto label_2052c0;
        case 0x2052c4u: goto label_2052c4;
        case 0x2052c8u: goto label_2052c8;
        case 0x2052ccu: goto label_2052cc;
        case 0x2052d0u: goto label_2052d0;
        case 0x2052d4u: goto label_2052d4;
        case 0x2052d8u: goto label_2052d8;
        case 0x2052dcu: goto label_2052dc;
        case 0x2052e0u: goto label_2052e0;
        case 0x2052e4u: goto label_2052e4;
        case 0x2052e8u: goto label_2052e8;
        case 0x2052ecu: goto label_2052ec;
        case 0x2052f0u: goto label_2052f0;
        case 0x2052f4u: goto label_2052f4;
        case 0x2052f8u: goto label_2052f8;
        case 0x2052fcu: goto label_2052fc;
        case 0x205300u: goto label_205300;
        case 0x205304u: goto label_205304;
        case 0x205308u: goto label_205308;
        case 0x20530cu: goto label_20530c;
        case 0x205310u: goto label_205310;
        case 0x205314u: goto label_205314;
        case 0x205318u: goto label_205318;
        case 0x20531cu: goto label_20531c;
        case 0x205320u: goto label_205320;
        case 0x205324u: goto label_205324;
        case 0x205328u: goto label_205328;
        case 0x20532cu: goto label_20532c;
        case 0x205330u: goto label_205330;
        case 0x205334u: goto label_205334;
        case 0x205338u: goto label_205338;
        case 0x20533cu: goto label_20533c;
        case 0x205340u: goto label_205340;
        case 0x205344u: goto label_205344;
        case 0x205348u: goto label_205348;
        case 0x20534cu: goto label_20534c;
        case 0x205350u: goto label_205350;
        case 0x205354u: goto label_205354;
        case 0x205358u: goto label_205358;
        case 0x20535cu: goto label_20535c;
        case 0x205360u: goto label_205360;
        case 0x205364u: goto label_205364;
        case 0x205368u: goto label_205368;
        case 0x20536cu: goto label_20536c;
        case 0x205370u: goto label_205370;
        case 0x205374u: goto label_205374;
        case 0x205378u: goto label_205378;
        case 0x20537cu: goto label_20537c;
        case 0x205380u: goto label_205380;
        case 0x205384u: goto label_205384;
        case 0x205388u: goto label_205388;
        case 0x20538cu: goto label_20538c;
        case 0x205390u: goto label_205390;
        case 0x205394u: goto label_205394;
        case 0x205398u: goto label_205398;
        case 0x20539cu: goto label_20539c;
        case 0x2053a0u: goto label_2053a0;
        case 0x2053a4u: goto label_2053a4;
        case 0x2053a8u: goto label_2053a8;
        case 0x2053acu: goto label_2053ac;
        case 0x2053b0u: goto label_2053b0;
        case 0x2053b4u: goto label_2053b4;
        case 0x2053b8u: goto label_2053b8;
        case 0x2053bcu: goto label_2053bc;
        case 0x2053c0u: goto label_2053c0;
        case 0x2053c4u: goto label_2053c4;
        case 0x2053c8u: goto label_2053c8;
        case 0x2053ccu: goto label_2053cc;
        case 0x2053d0u: goto label_2053d0;
        case 0x2053d4u: goto label_2053d4;
        case 0x2053d8u: goto label_2053d8;
        case 0x2053dcu: goto label_2053dc;
        case 0x2053e0u: goto label_2053e0;
        case 0x2053e4u: goto label_2053e4;
        case 0x2053e8u: goto label_2053e8;
        case 0x2053ecu: goto label_2053ec;
        case 0x2053f0u: goto label_2053f0;
        case 0x2053f4u: goto label_2053f4;
        case 0x2053f8u: goto label_2053f8;
        case 0x2053fcu: goto label_2053fc;
        case 0x205400u: goto label_205400;
        case 0x205404u: goto label_205404;
        case 0x205408u: goto label_205408;
        case 0x20540cu: goto label_20540c;
        case 0x205410u: goto label_205410;
        case 0x205414u: goto label_205414;
        case 0x205418u: goto label_205418;
        case 0x20541cu: goto label_20541c;
        case 0x205420u: goto label_205420;
        case 0x205424u: goto label_205424;
        case 0x205428u: goto label_205428;
        case 0x20542cu: goto label_20542c;
        case 0x205430u: goto label_205430;
        case 0x205434u: goto label_205434;
        case 0x205438u: goto label_205438;
        case 0x20543cu: goto label_20543c;
        case 0x205440u: goto label_205440;
        case 0x205444u: goto label_205444;
        case 0x205448u: goto label_205448;
        case 0x20544cu: goto label_20544c;
        case 0x205450u: goto label_205450;
        case 0x205454u: goto label_205454;
        case 0x205458u: goto label_205458;
        case 0x20545cu: goto label_20545c;
        case 0x205460u: goto label_205460;
        case 0x205464u: goto label_205464;
        case 0x205468u: goto label_205468;
        case 0x20546cu: goto label_20546c;
        case 0x205470u: goto label_205470;
        case 0x205474u: goto label_205474;
        case 0x205478u: goto label_205478;
        case 0x20547cu: goto label_20547c;
        case 0x205480u: goto label_205480;
        case 0x205484u: goto label_205484;
        case 0x205488u: goto label_205488;
        case 0x20548cu: goto label_20548c;
        case 0x205490u: goto label_205490;
        case 0x205494u: goto label_205494;
        case 0x205498u: goto label_205498;
        case 0x20549cu: goto label_20549c;
        case 0x2054a0u: goto label_2054a0;
        case 0x2054a4u: goto label_2054a4;
        case 0x2054a8u: goto label_2054a8;
        case 0x2054acu: goto label_2054ac;
        case 0x2054b0u: goto label_2054b0;
        case 0x2054b4u: goto label_2054b4;
        case 0x2054b8u: goto label_2054b8;
        case 0x2054bcu: goto label_2054bc;
        case 0x2054c0u: goto label_2054c0;
        case 0x2054c4u: goto label_2054c4;
        case 0x2054c8u: goto label_2054c8;
        case 0x2054ccu: goto label_2054cc;
        case 0x2054d0u: goto label_2054d0;
        case 0x2054d4u: goto label_2054d4;
        case 0x2054d8u: goto label_2054d8;
        case 0x2054dcu: goto label_2054dc;
        case 0x2054e0u: goto label_2054e0;
        case 0x2054e4u: goto label_2054e4;
        case 0x2054e8u: goto label_2054e8;
        case 0x2054ecu: goto label_2054ec;
        case 0x2054f0u: goto label_2054f0;
        case 0x2054f4u: goto label_2054f4;
        case 0x2054f8u: goto label_2054f8;
        case 0x2054fcu: goto label_2054fc;
        case 0x205500u: goto label_205500;
        case 0x205504u: goto label_205504;
        case 0x205508u: goto label_205508;
        case 0x20550cu: goto label_20550c;
        case 0x205510u: goto label_205510;
        case 0x205514u: goto label_205514;
        case 0x205518u: goto label_205518;
        case 0x20551cu: goto label_20551c;
        case 0x205520u: goto label_205520;
        case 0x205524u: goto label_205524;
        case 0x205528u: goto label_205528;
        case 0x20552cu: goto label_20552c;
        case 0x205530u: goto label_205530;
        case 0x205534u: goto label_205534;
        case 0x205538u: goto label_205538;
        case 0x20553cu: goto label_20553c;
        case 0x205540u: goto label_205540;
        case 0x205544u: goto label_205544;
        case 0x205548u: goto label_205548;
        case 0x20554cu: goto label_20554c;
        case 0x205550u: goto label_205550;
        case 0x205554u: goto label_205554;
        case 0x205558u: goto label_205558;
        case 0x20555cu: goto label_20555c;
        case 0x205560u: goto label_205560;
        case 0x205564u: goto label_205564;
        case 0x205568u: goto label_205568;
        case 0x20556cu: goto label_20556c;
        case 0x205570u: goto label_205570;
        case 0x205574u: goto label_205574;
        case 0x205578u: goto label_205578;
        case 0x20557cu: goto label_20557c;
        case 0x205580u: goto label_205580;
        case 0x205584u: goto label_205584;
        case 0x205588u: goto label_205588;
        case 0x20558cu: goto label_20558c;
        case 0x205590u: goto label_205590;
        case 0x205594u: goto label_205594;
        case 0x205598u: goto label_205598;
        case 0x20559cu: goto label_20559c;
        case 0x2055a0u: goto label_2055a0;
        case 0x2055a4u: goto label_2055a4;
        case 0x2055a8u: goto label_2055a8;
        case 0x2055acu: goto label_2055ac;
        case 0x2055b0u: goto label_2055b0;
        case 0x2055b4u: goto label_2055b4;
        case 0x2055b8u: goto label_2055b8;
        case 0x2055bcu: goto label_2055bc;
        case 0x2055c0u: goto label_2055c0;
        case 0x2055c4u: goto label_2055c4;
        case 0x2055c8u: goto label_2055c8;
        case 0x2055ccu: goto label_2055cc;
        case 0x2055d0u: goto label_2055d0;
        case 0x2055d4u: goto label_2055d4;
        case 0x2055d8u: goto label_2055d8;
        case 0x2055dcu: goto label_2055dc;
        case 0x2055e0u: goto label_2055e0;
        case 0x2055e4u: goto label_2055e4;
        case 0x2055e8u: goto label_2055e8;
        case 0x2055ecu: goto label_2055ec;
        case 0x2055f0u: goto label_2055f0;
        case 0x2055f4u: goto label_2055f4;
        case 0x2055f8u: goto label_2055f8;
        case 0x2055fcu: goto label_2055fc;
        case 0x205600u: goto label_205600;
        case 0x205604u: goto label_205604;
        case 0x205608u: goto label_205608;
        case 0x20560cu: goto label_20560c;
        case 0x205610u: goto label_205610;
        case 0x205614u: goto label_205614;
        case 0x205618u: goto label_205618;
        case 0x20561cu: goto label_20561c;
        case 0x205620u: goto label_205620;
        case 0x205624u: goto label_205624;
        case 0x205628u: goto label_205628;
        case 0x20562cu: goto label_20562c;
        case 0x205630u: goto label_205630;
        case 0x205634u: goto label_205634;
        case 0x205638u: goto label_205638;
        case 0x20563cu: goto label_20563c;
        case 0x205640u: goto label_205640;
        case 0x205644u: goto label_205644;
        case 0x205648u: goto label_205648;
        case 0x20564cu: goto label_20564c;
        case 0x205650u: goto label_205650;
        case 0x205654u: goto label_205654;
        case 0x205658u: goto label_205658;
        case 0x20565cu: goto label_20565c;
        case 0x205660u: goto label_205660;
        case 0x205664u: goto label_205664;
        case 0x205668u: goto label_205668;
        case 0x20566cu: goto label_20566c;
        case 0x205670u: goto label_205670;
        case 0x205674u: goto label_205674;
        case 0x205678u: goto label_205678;
        case 0x20567cu: goto label_20567c;
        case 0x205680u: goto label_205680;
        case 0x205684u: goto label_205684;
        case 0x205688u: goto label_205688;
        case 0x20568cu: goto label_20568c;
        case 0x205690u: goto label_205690;
        case 0x205694u: goto label_205694;
        case 0x205698u: goto label_205698;
        case 0x20569cu: goto label_20569c;
        case 0x2056a0u: goto label_2056a0;
        case 0x2056a4u: goto label_2056a4;
        case 0x2056a8u: goto label_2056a8;
        case 0x2056acu: goto label_2056ac;
        case 0x2056b0u: goto label_2056b0;
        case 0x2056b4u: goto label_2056b4;
        case 0x2056b8u: goto label_2056b8;
        case 0x2056bcu: goto label_2056bc;
        case 0x2056c0u: goto label_2056c0;
        case 0x2056c4u: goto label_2056c4;
        case 0x2056c8u: goto label_2056c8;
        case 0x2056ccu: goto label_2056cc;
        case 0x2056d0u: goto label_2056d0;
        case 0x2056d4u: goto label_2056d4;
        case 0x2056d8u: goto label_2056d8;
        case 0x2056dcu: goto label_2056dc;
        case 0x2056e0u: goto label_2056e0;
        case 0x2056e4u: goto label_2056e4;
        case 0x2056e8u: goto label_2056e8;
        case 0x2056ecu: goto label_2056ec;
        case 0x2056f0u: goto label_2056f0;
        case 0x2056f4u: goto label_2056f4;
        case 0x2056f8u: goto label_2056f8;
        case 0x2056fcu: goto label_2056fc;
        case 0x205700u: goto label_205700;
        case 0x205704u: goto label_205704;
        case 0x205708u: goto label_205708;
        case 0x20570cu: goto label_20570c;
        case 0x205710u: goto label_205710;
        case 0x205714u: goto label_205714;
        case 0x205718u: goto label_205718;
        case 0x20571cu: goto label_20571c;
        case 0x205720u: goto label_205720;
        case 0x205724u: goto label_205724;
        case 0x205728u: goto label_205728;
        case 0x20572cu: goto label_20572c;
        case 0x205730u: goto label_205730;
        case 0x205734u: goto label_205734;
        case 0x205738u: goto label_205738;
        case 0x20573cu: goto label_20573c;
        case 0x205740u: goto label_205740;
        case 0x205744u: goto label_205744;
        case 0x205748u: goto label_205748;
        case 0x20574cu: goto label_20574c;
        case 0x205750u: goto label_205750;
        case 0x205754u: goto label_205754;
        case 0x205758u: goto label_205758;
        case 0x20575cu: goto label_20575c;
        case 0x205760u: goto label_205760;
        case 0x205764u: goto label_205764;
        case 0x205768u: goto label_205768;
        case 0x20576cu: goto label_20576c;
        case 0x205770u: goto label_205770;
        case 0x205774u: goto label_205774;
        case 0x205778u: goto label_205778;
        case 0x20577cu: goto label_20577c;
        case 0x205780u: goto label_205780;
        case 0x205784u: goto label_205784;
        case 0x205788u: goto label_205788;
        case 0x20578cu: goto label_20578c;
        case 0x205790u: goto label_205790;
        case 0x205794u: goto label_205794;
        case 0x205798u: goto label_205798;
        case 0x20579cu: goto label_20579c;
        case 0x2057a0u: goto label_2057a0;
        case 0x2057a4u: goto label_2057a4;
        case 0x2057a8u: goto label_2057a8;
        case 0x2057acu: goto label_2057ac;
        case 0x2057b0u: goto label_2057b0;
        case 0x2057b4u: goto label_2057b4;
        case 0x2057b8u: goto label_2057b8;
        case 0x2057bcu: goto label_2057bc;
        case 0x2057c0u: goto label_2057c0;
        case 0x2057c4u: goto label_2057c4;
        case 0x2057c8u: goto label_2057c8;
        case 0x2057ccu: goto label_2057cc;
        case 0x2057d0u: goto label_2057d0;
        case 0x2057d4u: goto label_2057d4;
        case 0x2057d8u: goto label_2057d8;
        case 0x2057dcu: goto label_2057dc;
        case 0x2057e0u: goto label_2057e0;
        case 0x2057e4u: goto label_2057e4;
        case 0x2057e8u: goto label_2057e8;
        case 0x2057ecu: goto label_2057ec;
        case 0x2057f0u: goto label_2057f0;
        case 0x2057f4u: goto label_2057f4;
        case 0x2057f8u: goto label_2057f8;
        case 0x2057fcu: goto label_2057fc;
        case 0x205800u: goto label_205800;
        case 0x205804u: goto label_205804;
        case 0x205808u: goto label_205808;
        case 0x20580cu: goto label_20580c;
        case 0x205810u: goto label_205810;
        case 0x205814u: goto label_205814;
        case 0x205818u: goto label_205818;
        case 0x20581cu: goto label_20581c;
        case 0x205820u: goto label_205820;
        case 0x205824u: goto label_205824;
        case 0x205828u: goto label_205828;
        case 0x20582cu: goto label_20582c;
        case 0x205830u: goto label_205830;
        case 0x205834u: goto label_205834;
        case 0x205838u: goto label_205838;
        case 0x20583cu: goto label_20583c;
        case 0x205840u: goto label_205840;
        case 0x205844u: goto label_205844;
        case 0x205848u: goto label_205848;
        case 0x20584cu: goto label_20584c;
        case 0x205850u: goto label_205850;
        case 0x205854u: goto label_205854;
        case 0x205858u: goto label_205858;
        case 0x20585cu: goto label_20585c;
        case 0x205860u: goto label_205860;
        case 0x205864u: goto label_205864;
        case 0x205868u: goto label_205868;
        case 0x20586cu: goto label_20586c;
        case 0x205870u: goto label_205870;
        case 0x205874u: goto label_205874;
        case 0x205878u: goto label_205878;
        case 0x20587cu: goto label_20587c;
        case 0x205880u: goto label_205880;
        case 0x205884u: goto label_205884;
        case 0x205888u: goto label_205888;
        case 0x20588cu: goto label_20588c;
        case 0x205890u: goto label_205890;
        case 0x205894u: goto label_205894;
        case 0x205898u: goto label_205898;
        case 0x20589cu: goto label_20589c;
        case 0x2058a0u: goto label_2058a0;
        case 0x2058a4u: goto label_2058a4;
        case 0x2058a8u: goto label_2058a8;
        case 0x2058acu: goto label_2058ac;
        case 0x2058b0u: goto label_2058b0;
        case 0x2058b4u: goto label_2058b4;
        case 0x2058b8u: goto label_2058b8;
        case 0x2058bcu: goto label_2058bc;
        case 0x2058c0u: goto label_2058c0;
        case 0x2058c4u: goto label_2058c4;
        case 0x2058c8u: goto label_2058c8;
        case 0x2058ccu: goto label_2058cc;
        case 0x2058d0u: goto label_2058d0;
        case 0x2058d4u: goto label_2058d4;
        case 0x2058d8u: goto label_2058d8;
        case 0x2058dcu: goto label_2058dc;
        case 0x2058e0u: goto label_2058e0;
        case 0x2058e4u: goto label_2058e4;
        case 0x2058e8u: goto label_2058e8;
        case 0x2058ecu: goto label_2058ec;
        case 0x2058f0u: goto label_2058f0;
        case 0x2058f4u: goto label_2058f4;
        case 0x2058f8u: goto label_2058f8;
        case 0x2058fcu: goto label_2058fc;
        case 0x205900u: goto label_205900;
        case 0x205904u: goto label_205904;
        case 0x205908u: goto label_205908;
        case 0x20590cu: goto label_20590c;
        case 0x205910u: goto label_205910;
        case 0x205914u: goto label_205914;
        case 0x205918u: goto label_205918;
        case 0x20591cu: goto label_20591c;
        case 0x205920u: goto label_205920;
        case 0x205924u: goto label_205924;
        case 0x205928u: goto label_205928;
        case 0x20592cu: goto label_20592c;
        case 0x205930u: goto label_205930;
        case 0x205934u: goto label_205934;
        case 0x205938u: goto label_205938;
        case 0x20593cu: goto label_20593c;
        case 0x205940u: goto label_205940;
        case 0x205944u: goto label_205944;
        case 0x205948u: goto label_205948;
        case 0x20594cu: goto label_20594c;
        case 0x205950u: goto label_205950;
        case 0x205954u: goto label_205954;
        case 0x205958u: goto label_205958;
        case 0x20595cu: goto label_20595c;
        case 0x205960u: goto label_205960;
        case 0x205964u: goto label_205964;
        case 0x205968u: goto label_205968;
        case 0x20596cu: goto label_20596c;
        case 0x205970u: goto label_205970;
        case 0x205974u: goto label_205974;
        case 0x205978u: goto label_205978;
        case 0x20597cu: goto label_20597c;
        case 0x205980u: goto label_205980;
        case 0x205984u: goto label_205984;
        case 0x205988u: goto label_205988;
        case 0x20598cu: goto label_20598c;
        case 0x205990u: goto label_205990;
        case 0x205994u: goto label_205994;
        case 0x205998u: goto label_205998;
        case 0x20599cu: goto label_20599c;
        case 0x2059a0u: goto label_2059a0;
        case 0x2059a4u: goto label_2059a4;
        case 0x2059a8u: goto label_2059a8;
        case 0x2059acu: goto label_2059ac;
        case 0x2059b0u: goto label_2059b0;
        case 0x2059b4u: goto label_2059b4;
        case 0x2059b8u: goto label_2059b8;
        case 0x2059bcu: goto label_2059bc;
        case 0x2059c0u: goto label_2059c0;
        case 0x2059c4u: goto label_2059c4;
        case 0x2059c8u: goto label_2059c8;
        case 0x2059ccu: goto label_2059cc;
        case 0x2059d0u: goto label_2059d0;
        case 0x2059d4u: goto label_2059d4;
        case 0x2059d8u: goto label_2059d8;
        case 0x2059dcu: goto label_2059dc;
        case 0x2059e0u: goto label_2059e0;
        case 0x2059e4u: goto label_2059e4;
        case 0x2059e8u: goto label_2059e8;
        case 0x2059ecu: goto label_2059ec;
        case 0x2059f0u: goto label_2059f0;
        case 0x2059f4u: goto label_2059f4;
        case 0x2059f8u: goto label_2059f8;
        case 0x2059fcu: goto label_2059fc;
        case 0x205a00u: goto label_205a00;
        case 0x205a04u: goto label_205a04;
        case 0x205a08u: goto label_205a08;
        case 0x205a0cu: goto label_205a0c;
        case 0x205a10u: goto label_205a10;
        case 0x205a14u: goto label_205a14;
        case 0x205a18u: goto label_205a18;
        case 0x205a1cu: goto label_205a1c;
        case 0x205a20u: goto label_205a20;
        case 0x205a24u: goto label_205a24;
        case 0x205a28u: goto label_205a28;
        case 0x205a2cu: goto label_205a2c;
        case 0x205a30u: goto label_205a30;
        case 0x205a34u: goto label_205a34;
        case 0x205a38u: goto label_205a38;
        case 0x205a3cu: goto label_205a3c;
        case 0x205a40u: goto label_205a40;
        case 0x205a44u: goto label_205a44;
        case 0x205a48u: goto label_205a48;
        case 0x205a4cu: goto label_205a4c;
        case 0x205a50u: goto label_205a50;
        case 0x205a54u: goto label_205a54;
        case 0x205a58u: goto label_205a58;
        case 0x205a5cu: goto label_205a5c;
        case 0x205a60u: goto label_205a60;
        case 0x205a64u: goto label_205a64;
        case 0x205a68u: goto label_205a68;
        case 0x205a6cu: goto label_205a6c;
        case 0x205a70u: goto label_205a70;
        case 0x205a74u: goto label_205a74;
        case 0x205a78u: goto label_205a78;
        case 0x205a7cu: goto label_205a7c;
        case 0x205a80u: goto label_205a80;
        case 0x205a84u: goto label_205a84;
        case 0x205a88u: goto label_205a88;
        case 0x205a8cu: goto label_205a8c;
        case 0x205a90u: goto label_205a90;
        case 0x205a94u: goto label_205a94;
        case 0x205a98u: goto label_205a98;
        case 0x205a9cu: goto label_205a9c;
        case 0x205aa0u: goto label_205aa0;
        case 0x205aa4u: goto label_205aa4;
        case 0x205aa8u: goto label_205aa8;
        case 0x205aacu: goto label_205aac;
        case 0x205ab0u: goto label_205ab0;
        case 0x205ab4u: goto label_205ab4;
        case 0x205ab8u: goto label_205ab8;
        case 0x205abcu: goto label_205abc;
        case 0x205ac0u: goto label_205ac0;
        case 0x205ac4u: goto label_205ac4;
        case 0x205ac8u: goto label_205ac8;
        case 0x205accu: goto label_205acc;
        case 0x205ad0u: goto label_205ad0;
        case 0x205ad4u: goto label_205ad4;
        case 0x205ad8u: goto label_205ad8;
        case 0x205adcu: goto label_205adc;
        case 0x205ae0u: goto label_205ae0;
        case 0x205ae4u: goto label_205ae4;
        case 0x205ae8u: goto label_205ae8;
        case 0x205aecu: goto label_205aec;
        case 0x205af0u: goto label_205af0;
        case 0x205af4u: goto label_205af4;
        case 0x205af8u: goto label_205af8;
        case 0x205afcu: goto label_205afc;
        case 0x205b00u: goto label_205b00;
        case 0x205b04u: goto label_205b04;
        case 0x205b08u: goto label_205b08;
        case 0x205b0cu: goto label_205b0c;
        case 0x205b10u: goto label_205b10;
        case 0x205b14u: goto label_205b14;
        case 0x205b18u: goto label_205b18;
        case 0x205b1cu: goto label_205b1c;
        case 0x205b20u: goto label_205b20;
        case 0x205b24u: goto label_205b24;
        case 0x205b28u: goto label_205b28;
        case 0x205b2cu: goto label_205b2c;
        case 0x205b30u: goto label_205b30;
        case 0x205b34u: goto label_205b34;
        case 0x205b38u: goto label_205b38;
        case 0x205b3cu: goto label_205b3c;
        case 0x205b40u: goto label_205b40;
        case 0x205b44u: goto label_205b44;
        case 0x205b48u: goto label_205b48;
        case 0x205b4cu: goto label_205b4c;
        case 0x205b50u: goto label_205b50;
        case 0x205b54u: goto label_205b54;
        case 0x205b58u: goto label_205b58;
        case 0x205b5cu: goto label_205b5c;
        case 0x205b60u: goto label_205b60;
        case 0x205b64u: goto label_205b64;
        case 0x205b68u: goto label_205b68;
        case 0x205b6cu: goto label_205b6c;
        case 0x205b70u: goto label_205b70;
        case 0x205b74u: goto label_205b74;
        case 0x205b78u: goto label_205b78;
        case 0x205b7cu: goto label_205b7c;
        case 0x205b80u: goto label_205b80;
        case 0x205b84u: goto label_205b84;
        case 0x205b88u: goto label_205b88;
        case 0x205b8cu: goto label_205b8c;
        case 0x205b90u: goto label_205b90;
        case 0x205b94u: goto label_205b94;
        case 0x205b98u: goto label_205b98;
        case 0x205b9cu: goto label_205b9c;
        case 0x205ba0u: goto label_205ba0;
        case 0x205ba4u: goto label_205ba4;
        case 0x205ba8u: goto label_205ba8;
        case 0x205bacu: goto label_205bac;
        case 0x205bb0u: goto label_205bb0;
        case 0x205bb4u: goto label_205bb4;
        case 0x205bb8u: goto label_205bb8;
        case 0x205bbcu: goto label_205bbc;
        case 0x205bc0u: goto label_205bc0;
        case 0x205bc4u: goto label_205bc4;
        case 0x205bc8u: goto label_205bc8;
        case 0x205bccu: goto label_205bcc;
        case 0x205bd0u: goto label_205bd0;
        case 0x205bd4u: goto label_205bd4;
        case 0x205bd8u: goto label_205bd8;
        case 0x205bdcu: goto label_205bdc;
        case 0x205be0u: goto label_205be0;
        case 0x205be4u: goto label_205be4;
        case 0x205be8u: goto label_205be8;
        case 0x205becu: goto label_205bec;
        case 0x205bf0u: goto label_205bf0;
        case 0x205bf4u: goto label_205bf4;
        case 0x205bf8u: goto label_205bf8;
        case 0x205bfcu: goto label_205bfc;
        case 0x205c00u: goto label_205c00;
        case 0x205c04u: goto label_205c04;
        case 0x205c08u: goto label_205c08;
        case 0x205c0cu: goto label_205c0c;
        case 0x205c10u: goto label_205c10;
        case 0x205c14u: goto label_205c14;
        case 0x205c18u: goto label_205c18;
        case 0x205c1cu: goto label_205c1c;
        case 0x205c20u: goto label_205c20;
        case 0x205c24u: goto label_205c24;
        case 0x205c28u: goto label_205c28;
        case 0x205c2cu: goto label_205c2c;
        case 0x205c30u: goto label_205c30;
        case 0x205c34u: goto label_205c34;
        case 0x205c38u: goto label_205c38;
        case 0x205c3cu: goto label_205c3c;
        case 0x205c40u: goto label_205c40;
        case 0x205c44u: goto label_205c44;
        case 0x205c48u: goto label_205c48;
        case 0x205c4cu: goto label_205c4c;
        case 0x205c50u: goto label_205c50;
        case 0x205c54u: goto label_205c54;
        case 0x205c58u: goto label_205c58;
        case 0x205c5cu: goto label_205c5c;
        case 0x205c60u: goto label_205c60;
        case 0x205c64u: goto label_205c64;
        case 0x205c68u: goto label_205c68;
        case 0x205c6cu: goto label_205c6c;
        case 0x205c70u: goto label_205c70;
        case 0x205c74u: goto label_205c74;
        case 0x205c78u: goto label_205c78;
        case 0x205c7cu: goto label_205c7c;
        case 0x205c80u: goto label_205c80;
        case 0x205c84u: goto label_205c84;
        case 0x205c88u: goto label_205c88;
        case 0x205c8cu: goto label_205c8c;
        case 0x205c90u: goto label_205c90;
        case 0x205c94u: goto label_205c94;
        case 0x205c98u: goto label_205c98;
        case 0x205c9cu: goto label_205c9c;
        case 0x205ca0u: goto label_205ca0;
        case 0x205ca4u: goto label_205ca4;
        case 0x205ca8u: goto label_205ca8;
        case 0x205cacu: goto label_205cac;
        case 0x205cb0u: goto label_205cb0;
        case 0x205cb4u: goto label_205cb4;
        case 0x205cb8u: goto label_205cb8;
        case 0x205cbcu: goto label_205cbc;
        case 0x205cc0u: goto label_205cc0;
        case 0x205cc4u: goto label_205cc4;
        case 0x205cc8u: goto label_205cc8;
        case 0x205cccu: goto label_205ccc;
        case 0x205cd0u: goto label_205cd0;
        case 0x205cd4u: goto label_205cd4;
        case 0x205cd8u: goto label_205cd8;
        case 0x205cdcu: goto label_205cdc;
        case 0x205ce0u: goto label_205ce0;
        case 0x205ce4u: goto label_205ce4;
        case 0x205ce8u: goto label_205ce8;
        case 0x205cecu: goto label_205cec;
        case 0x205cf0u: goto label_205cf0;
        case 0x205cf4u: goto label_205cf4;
        case 0x205cf8u: goto label_205cf8;
        case 0x205cfcu: goto label_205cfc;
        case 0x205d00u: goto label_205d00;
        case 0x205d04u: goto label_205d04;
        case 0x205d08u: goto label_205d08;
        case 0x205d0cu: goto label_205d0c;
        case 0x205d10u: goto label_205d10;
        case 0x205d14u: goto label_205d14;
        case 0x205d18u: goto label_205d18;
        case 0x205d1cu: goto label_205d1c;
        case 0x205d20u: goto label_205d20;
        case 0x205d24u: goto label_205d24;
        case 0x205d28u: goto label_205d28;
        case 0x205d2cu: goto label_205d2c;
        case 0x205d30u: goto label_205d30;
        case 0x205d34u: goto label_205d34;
        case 0x205d38u: goto label_205d38;
        case 0x205d3cu: goto label_205d3c;
        case 0x205d40u: goto label_205d40;
        case 0x205d44u: goto label_205d44;
        case 0x205d48u: goto label_205d48;
        case 0x205d4cu: goto label_205d4c;
        case 0x205d50u: goto label_205d50;
        case 0x205d54u: goto label_205d54;
        case 0x205d58u: goto label_205d58;
        case 0x205d5cu: goto label_205d5c;
        case 0x205d60u: goto label_205d60;
        case 0x205d64u: goto label_205d64;
        case 0x205d68u: goto label_205d68;
        case 0x205d6cu: goto label_205d6c;
        case 0x205d70u: goto label_205d70;
        case 0x205d74u: goto label_205d74;
        case 0x205d78u: goto label_205d78;
        case 0x205d7cu: goto label_205d7c;
        case 0x205d80u: goto label_205d80;
        case 0x205d84u: goto label_205d84;
        case 0x205d88u: goto label_205d88;
        case 0x205d8cu: goto label_205d8c;
        case 0x205d90u: goto label_205d90;
        case 0x205d94u: goto label_205d94;
        case 0x205d98u: goto label_205d98;
        case 0x205d9cu: goto label_205d9c;
        case 0x205da0u: goto label_205da0;
        case 0x205da4u: goto label_205da4;
        case 0x205da8u: goto label_205da8;
        case 0x205dacu: goto label_205dac;
        case 0x205db0u: goto label_205db0;
        case 0x205db4u: goto label_205db4;
        case 0x205db8u: goto label_205db8;
        case 0x205dbcu: goto label_205dbc;
        case 0x205dc0u: goto label_205dc0;
        case 0x205dc4u: goto label_205dc4;
        case 0x205dc8u: goto label_205dc8;
        case 0x205dccu: goto label_205dcc;
        case 0x205dd0u: goto label_205dd0;
        case 0x205dd4u: goto label_205dd4;
        case 0x205dd8u: goto label_205dd8;
        case 0x205ddcu: goto label_205ddc;
        case 0x205de0u: goto label_205de0;
        case 0x205de4u: goto label_205de4;
        case 0x205de8u: goto label_205de8;
        case 0x205decu: goto label_205dec;
        case 0x205df0u: goto label_205df0;
        case 0x205df4u: goto label_205df4;
        case 0x205df8u: goto label_205df8;
        case 0x205dfcu: goto label_205dfc;
        case 0x205e00u: goto label_205e00;
        case 0x205e04u: goto label_205e04;
        case 0x205e08u: goto label_205e08;
        case 0x205e0cu: goto label_205e0c;
        case 0x205e10u: goto label_205e10;
        case 0x205e14u: goto label_205e14;
        case 0x205e18u: goto label_205e18;
        case 0x205e1cu: goto label_205e1c;
        case 0x205e20u: goto label_205e20;
        case 0x205e24u: goto label_205e24;
        case 0x205e28u: goto label_205e28;
        case 0x205e2cu: goto label_205e2c;
        case 0x205e30u: goto label_205e30;
        case 0x205e34u: goto label_205e34;
        case 0x205e38u: goto label_205e38;
        case 0x205e3cu: goto label_205e3c;
        case 0x205e40u: goto label_205e40;
        case 0x205e44u: goto label_205e44;
        case 0x205e48u: goto label_205e48;
        case 0x205e4cu: goto label_205e4c;
        case 0x205e50u: goto label_205e50;
        case 0x205e54u: goto label_205e54;
        case 0x205e58u: goto label_205e58;
        case 0x205e5cu: goto label_205e5c;
        case 0x205e60u: goto label_205e60;
        case 0x205e64u: goto label_205e64;
        case 0x205e68u: goto label_205e68;
        case 0x205e6cu: goto label_205e6c;
        case 0x205e70u: goto label_205e70;
        case 0x205e74u: goto label_205e74;
        case 0x205e78u: goto label_205e78;
        case 0x205e7cu: goto label_205e7c;
        case 0x205e80u: goto label_205e80;
        case 0x205e84u: goto label_205e84;
        case 0x205e88u: goto label_205e88;
        case 0x205e8cu: goto label_205e8c;
        case 0x205e90u: goto label_205e90;
        case 0x205e94u: goto label_205e94;
        case 0x205e98u: goto label_205e98;
        case 0x205e9cu: goto label_205e9c;
        case 0x205ea0u: goto label_205ea0;
        case 0x205ea4u: goto label_205ea4;
        case 0x205ea8u: goto label_205ea8;
        case 0x205eacu: goto label_205eac;
        case 0x205eb0u: goto label_205eb0;
        case 0x205eb4u: goto label_205eb4;
        case 0x205eb8u: goto label_205eb8;
        case 0x205ebcu: goto label_205ebc;
        case 0x205ec0u: goto label_205ec0;
        case 0x205ec4u: goto label_205ec4;
        case 0x205ec8u: goto label_205ec8;
        case 0x205eccu: goto label_205ecc;
        case 0x205ed0u: goto label_205ed0;
        case 0x205ed4u: goto label_205ed4;
        case 0x205ed8u: goto label_205ed8;
        case 0x205edcu: goto label_205edc;
        case 0x205ee0u: goto label_205ee0;
        case 0x205ee4u: goto label_205ee4;
        case 0x205ee8u: goto label_205ee8;
        case 0x205eecu: goto label_205eec;
        case 0x205ef0u: goto label_205ef0;
        case 0x205ef4u: goto label_205ef4;
        case 0x205ef8u: goto label_205ef8;
        case 0x205efcu: goto label_205efc;
        case 0x205f00u: goto label_205f00;
        case 0x205f04u: goto label_205f04;
        case 0x205f08u: goto label_205f08;
        case 0x205f0cu: goto label_205f0c;
        case 0x205f10u: goto label_205f10;
        case 0x205f14u: goto label_205f14;
        case 0x205f18u: goto label_205f18;
        case 0x205f1cu: goto label_205f1c;
        case 0x205f20u: goto label_205f20;
        case 0x205f24u: goto label_205f24;
        case 0x205f28u: goto label_205f28;
        case 0x205f2cu: goto label_205f2c;
        case 0x205f30u: goto label_205f30;
        case 0x205f34u: goto label_205f34;
        case 0x205f38u: goto label_205f38;
        case 0x205f3cu: goto label_205f3c;
        case 0x205f40u: goto label_205f40;
        case 0x205f44u: goto label_205f44;
        case 0x205f48u: goto label_205f48;
        case 0x205f4cu: goto label_205f4c;
        case 0x205f50u: goto label_205f50;
        case 0x205f54u: goto label_205f54;
        case 0x205f58u: goto label_205f58;
        case 0x205f5cu: goto label_205f5c;
        case 0x205f60u: goto label_205f60;
        case 0x205f64u: goto label_205f64;
        case 0x205f68u: goto label_205f68;
        case 0x205f6cu: goto label_205f6c;
        case 0x205f70u: goto label_205f70;
        case 0x205f74u: goto label_205f74;
        case 0x205f78u: goto label_205f78;
        case 0x205f7cu: goto label_205f7c;
        case 0x205f80u: goto label_205f80;
        case 0x205f84u: goto label_205f84;
        case 0x205f88u: goto label_205f88;
        case 0x205f8cu: goto label_205f8c;
        case 0x205f90u: goto label_205f90;
        case 0x205f94u: goto label_205f94;
        case 0x205f98u: goto label_205f98;
        case 0x205f9cu: goto label_205f9c;
        case 0x205fa0u: goto label_205fa0;
        case 0x205fa4u: goto label_205fa4;
        case 0x205fa8u: goto label_205fa8;
        case 0x205facu: goto label_205fac;
        case 0x205fb0u: goto label_205fb0;
        case 0x205fb4u: goto label_205fb4;
        case 0x205fb8u: goto label_205fb8;
        case 0x205fbcu: goto label_205fbc;
        case 0x205fc0u: goto label_205fc0;
        case 0x205fc4u: goto label_205fc4;
        case 0x205fc8u: goto label_205fc8;
        case 0x205fccu: goto label_205fcc;
        case 0x205fd0u: goto label_205fd0;
        case 0x205fd4u: goto label_205fd4;
        case 0x205fd8u: goto label_205fd8;
        case 0x205fdcu: goto label_205fdc;
        case 0x205fe0u: goto label_205fe0;
        case 0x205fe4u: goto label_205fe4;
        case 0x205fe8u: goto label_205fe8;
        case 0x205fecu: goto label_205fec;
        case 0x205ff0u: goto label_205ff0;
        case 0x205ff4u: goto label_205ff4;
        case 0x205ff8u: goto label_205ff8;
        case 0x205ffcu: goto label_205ffc;
        case 0x206000u: goto label_206000;
        case 0x206004u: goto label_206004;
        case 0x206008u: goto label_206008;
        case 0x20600cu: goto label_20600c;
        case 0x206010u: goto label_206010;
        case 0x206014u: goto label_206014;
        case 0x206018u: goto label_206018;
        case 0x20601cu: goto label_20601c;
        case 0x206020u: goto label_206020;
        case 0x206024u: goto label_206024;
        case 0x206028u: goto label_206028;
        case 0x20602cu: goto label_20602c;
        case 0x206030u: goto label_206030;
        case 0x206034u: goto label_206034;
        case 0x206038u: goto label_206038;
        case 0x20603cu: goto label_20603c;
        case 0x206040u: goto label_206040;
        case 0x206044u: goto label_206044;
        case 0x206048u: goto label_206048;
        case 0x20604cu: goto label_20604c;
        case 0x206050u: goto label_206050;
        case 0x206054u: goto label_206054;
        case 0x206058u: goto label_206058;
        case 0x20605cu: goto label_20605c;
        case 0x206060u: goto label_206060;
        case 0x206064u: goto label_206064;
        case 0x206068u: goto label_206068;
        case 0x20606cu: goto label_20606c;
        case 0x206070u: goto label_206070;
        case 0x206074u: goto label_206074;
        case 0x206078u: goto label_206078;
        case 0x20607cu: goto label_20607c;
        case 0x206080u: goto label_206080;
        case 0x206084u: goto label_206084;
        case 0x206088u: goto label_206088;
        case 0x20608cu: goto label_20608c;
        case 0x206090u: goto label_206090;
        case 0x206094u: goto label_206094;
        case 0x206098u: goto label_206098;
        case 0x20609cu: goto label_20609c;
        case 0x2060a0u: goto label_2060a0;
        case 0x2060a4u: goto label_2060a4;
        case 0x2060a8u: goto label_2060a8;
        case 0x2060acu: goto label_2060ac;
        case 0x2060b0u: goto label_2060b0;
        case 0x2060b4u: goto label_2060b4;
        case 0x2060b8u: goto label_2060b8;
        case 0x2060bcu: goto label_2060bc;
        case 0x2060c0u: goto label_2060c0;
        case 0x2060c4u: goto label_2060c4;
        case 0x2060c8u: goto label_2060c8;
        case 0x2060ccu: goto label_2060cc;
        case 0x2060d0u: goto label_2060d0;
        case 0x2060d4u: goto label_2060d4;
        case 0x2060d8u: goto label_2060d8;
        case 0x2060dcu: goto label_2060dc;
        case 0x2060e0u: goto label_2060e0;
        case 0x2060e4u: goto label_2060e4;
        case 0x2060e8u: goto label_2060e8;
        case 0x2060ecu: goto label_2060ec;
        case 0x2060f0u: goto label_2060f0;
        case 0x2060f4u: goto label_2060f4;
        case 0x2060f8u: goto label_2060f8;
        case 0x2060fcu: goto label_2060fc;
        case 0x206100u: goto label_206100;
        case 0x206104u: goto label_206104;
        case 0x206108u: goto label_206108;
        case 0x20610cu: goto label_20610c;
        case 0x206110u: goto label_206110;
        case 0x206114u: goto label_206114;
        case 0x206118u: goto label_206118;
        case 0x20611cu: goto label_20611c;
        case 0x206120u: goto label_206120;
        case 0x206124u: goto label_206124;
        case 0x206128u: goto label_206128;
        case 0x20612cu: goto label_20612c;
        case 0x206130u: goto label_206130;
        case 0x206134u: goto label_206134;
        case 0x206138u: goto label_206138;
        case 0x20613cu: goto label_20613c;
        case 0x206140u: goto label_206140;
        case 0x206144u: goto label_206144;
        case 0x206148u: goto label_206148;
        case 0x20614cu: goto label_20614c;
        case 0x206150u: goto label_206150;
        case 0x206154u: goto label_206154;
        case 0x206158u: goto label_206158;
        case 0x20615cu: goto label_20615c;
        case 0x206160u: goto label_206160;
        case 0x206164u: goto label_206164;
        case 0x206168u: goto label_206168;
        case 0x20616cu: goto label_20616c;
        case 0x206170u: goto label_206170;
        case 0x206174u: goto label_206174;
        case 0x206178u: goto label_206178;
        case 0x20617cu: goto label_20617c;
        case 0x206180u: goto label_206180;
        case 0x206184u: goto label_206184;
        case 0x206188u: goto label_206188;
        case 0x20618cu: goto label_20618c;
        case 0x206190u: goto label_206190;
        case 0x206194u: goto label_206194;
        case 0x206198u: goto label_206198;
        case 0x20619cu: goto label_20619c;
        case 0x2061a0u: goto label_2061a0;
        case 0x2061a4u: goto label_2061a4;
        case 0x2061a8u: goto label_2061a8;
        case 0x2061acu: goto label_2061ac;
        case 0x2061b0u: goto label_2061b0;
        case 0x2061b4u: goto label_2061b4;
        case 0x2061b8u: goto label_2061b8;
        case 0x2061bcu: goto label_2061bc;
        case 0x2061c0u: goto label_2061c0;
        case 0x2061c4u: goto label_2061c4;
        case 0x2061c8u: goto label_2061c8;
        case 0x2061ccu: goto label_2061cc;
        case 0x2061d0u: goto label_2061d0;
        case 0x2061d4u: goto label_2061d4;
        case 0x2061d8u: goto label_2061d8;
        default: break;
    }

    ctx->pc = 0x204e70u;

label_204e70:
    // 0x204e70: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x204e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_204e74:
    // 0x204e74: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x204e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_204e78:
    // 0x204e78: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x204e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_204e7c:
    // 0x204e7c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x204e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_204e80:
    // 0x204e80: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x204e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_204e84:
    // 0x204e84: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x204e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_204e88:
    // 0x204e88: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x204e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_204e8c:
    // 0x204e8c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x204e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_204e90:
    // 0x204e90: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x204e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_204e94:
    // 0x204e94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x204e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_204e98:
    // 0x204e98: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x204e98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_204e9c:
    // 0x204e9c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x204e9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_204ea0:
    // 0x204ea0: 0x8c820eb8  lw          $v0, 0xEB8($a0)
    ctx->pc = 0x204ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3768)));
label_204ea4:
    // 0x204ea4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_204ea8:
    if (ctx->pc == 0x204EA8u) {
        ctx->pc = 0x204EA8u;
            // 0x204ea8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x204EACu;
        goto label_204eac;
    }
    ctx->pc = 0x204EA4u;
    {
        const bool branch_taken_0x204ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204EA4u;
            // 0x204ea8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ea4) {
            ctx->pc = 0x204F04u;
            goto label_204f04;
        }
    }
    ctx->pc = 0x204EACu;
label_204eac:
    // 0x204eac: 0xc088ffc  jal         func_223FF0
label_204eb0:
    if (ctx->pc == 0x204EB0u) {
        ctx->pc = 0x204EB0u;
            // 0x204eb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x204EB4u;
        goto label_204eb4;
    }
    ctx->pc = 0x204EACu;
    SET_GPR_U32(ctx, 31, 0x204EB4u);
    ctx->pc = 0x204EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204EACu;
            // 0x204eb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223FF0u;
    if (runtime->hasFunction(0x223FF0u)) {
        auto targetFn = runtime->lookupFunction(0x223FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204EB4u; }
        if (ctx->pc != 0x204EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainFrameLeftTopPos__Fi_0x223ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204EB4u; }
        if (ctx->pc != 0x204EB4u) { return; }
    }
    ctx->pc = 0x204EB4u;
label_204eb4:
    // 0x204eb4: 0xdf839128  ld          $v1, -0x6ED8($gp)
    ctx->pc = 0x204eb4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294938920)));
label_204eb8:
    // 0x204eb8: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x204eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_204ebc:
    // 0x204ebc: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x204ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_204ec0:
    // 0x204ec0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x204ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_204ec4:
    // 0x204ec4: 0xc0a248c  jal         func_289230
label_204ec8:
    if (ctx->pc == 0x204EC8u) {
        ctx->pc = 0x204EC8u;
            // 0x204ec8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x204ECCu;
        goto label_204ecc;
    }
    ctx->pc = 0x204EC4u;
    SET_GPR_U32(ctx, 31, 0x204ECCu);
    ctx->pc = 0x204EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204EC4u;
            // 0x204ec8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204ECCu; }
        if (ctx->pc != 0x204ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204ECCu; }
        if (ctx->pc != 0x204ECCu) { return; }
    }
    ctx->pc = 0x204ECCu;
label_204ecc:
    // 0x204ecc: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x204eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_204ed0:
    // 0x204ed0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x204ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_204ed4:
    // 0x204ed4: 0x3c0243d0  lui         $v0, 0x43D0
    ctx->pc = 0x204ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17360 << 16));
label_204ed8:
    // 0x204ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x204ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_204edc:
    // 0x204edc: 0xc0a248c  jal         func_289230
label_204ee0:
    if (ctx->pc == 0x204EE0u) {
        ctx->pc = 0x204EE0u;
            // 0x204ee0: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x204EE4u;
        goto label_204ee4;
    }
    ctx->pc = 0x204EDCu;
    SET_GPR_U32(ctx, 31, 0x204EE4u);
    ctx->pc = 0x204EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204EDCu;
            // 0x204ee0: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204EE4u; }
        if (ctx->pc != 0x204EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204EE4u; }
        if (ctx->pc != 0x204EE4u) { return; }
    }
    ctx->pc = 0x204EE4u;
label_204ee4:
    // 0x204ee4: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x204ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204ee8:
    // 0x204ee8: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x204ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
label_204eec:
    // 0x204eec: 0x8e820eb8  lw          $v0, 0xEB8($s4)
    ctx->pc = 0x204eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3768)));
label_204ef0:
    // 0x204ef0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x204ef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_204ef4:
    // 0x204ef4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x204ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_204ef8:
    // 0x204ef8: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x204ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204efc:
    // 0x204efc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x204efcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_204f00:
    // 0x204f00: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x204f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_204f04:
    // 0x204f04: 0x8e840360  lw          $a0, 0x360($s4)
    ctx->pc = 0x204f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 864)));
label_204f08:
    // 0x204f08: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x204f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_204f0c:
    // 0x204f0c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x204f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_204f10:
    // 0x204f10: 0x34424bc0  ori         $v0, $v0, 0x4BC0
    ctx->pc = 0x204f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19392);
label_204f14:
    // 0x204f14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x204f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_204f18:
    // 0x204f18: 0xae840360  sw          $a0, 0x360($s4)
    ctx->pc = 0x204f18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 864), GPR_U32(ctx, 4));
label_204f1c:
    // 0x204f1c: 0x8e840360  lw          $a0, 0x360($s4)
    ctx->pc = 0x204f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 864)));
label_204f20:
    // 0x204f20: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x204f20u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_204f24:
    // 0x204f24: 0x0  nop
    ctx->pc = 0x204f24u;
    // NOP
label_204f28:
    // 0x204f28: 0x0  nop
    ctx->pc = 0x204f28u;
    // NOP
label_204f2c:
    // 0x204f2c: 0x1810  mfhi        $v1
    ctx->pc = 0x204f2cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_204f30:
    // 0x204f30: 0xae830360  sw          $v1, 0x360($s4)
    ctx->pc = 0x204f30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 864), GPR_U32(ctx, 3));
label_204f34:
    // 0x204f34: 0x8e830360  lw          $v1, 0x360($s4)
    ctx->pc = 0x204f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 864)));
label_204f38:
    // 0x204f38: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x204f38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_204f3c:
    // 0x204f3c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_204f40:
    if (ctx->pc == 0x204F40u) {
        ctx->pc = 0x204F44u;
        goto label_204f44;
    }
    ctx->pc = 0x204F3Cu;
    {
        const bool branch_taken_0x204f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204f3c) {
            ctx->pc = 0x204F48u;
            goto label_204f48;
        }
    }
    ctx->pc = 0x204F44u;
label_204f44:
    // 0x204f44: 0xae800360  sw          $zero, 0x360($s4)
    ctx->pc = 0x204f44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 864), GPR_U32(ctx, 0));
label_204f48:
    // 0x204f48: 0xc6810360  lwc1        $f1, 0x360($s4)
    ctx->pc = 0x204f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_204f4c:
    // 0x204f4c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x204f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_204f50:
    // 0x204f50: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x204f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_204f54:
    // 0x204f54: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x204f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_204f58:
    // 0x204f58: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x204f58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_204f5c:
    // 0x204f5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x204f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_204f60:
    // 0x204f60: 0x0  nop
    ctx->pc = 0x204f60u;
    // NOP
label_204f64:
    // 0x204f64: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x204f64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_204f68:
    // 0x204f68: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x204f68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_204f6c:
    // 0x204f6c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x204f6cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_204f70:
    // 0x204f70: 0x0  nop
    ctx->pc = 0x204f70u;
    // NOP
label_204f74:
    // 0x204f74: 0x0  nop
    ctx->pc = 0x204f74u;
    // NOP
label_204f78:
    // 0x204f78: 0xc047a42  jal         func_11E908
label_204f7c:
    if (ctx->pc == 0x204F7Cu) {
        ctx->pc = 0x204F80u;
        goto label_204f80;
    }
    ctx->pc = 0x204F78u;
    SET_GPR_U32(ctx, 31, 0x204F80u);
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204F80u; }
        if (ctx->pc != 0x204F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204F80u; }
        if (ctx->pc != 0x204F80u) { return; }
    }
    ctx->pc = 0x204F80u;
label_204f80:
    // 0x204f80: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x204f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_204f84:
    // 0x204f84: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x204f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
label_204f88:
    // 0x204f88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x204f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_204f8c:
    // 0x204f8c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x204f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_204f90:
    // 0x204f90: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x204f90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_204f94:
    // 0x204f94: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x204f94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_204f98:
    // 0x204f98: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x204f98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_204f9c:
    // 0x204f9c: 0xe6800370  swc1        $f0, 0x370($s4)
    ctx->pc = 0x204f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 880), bits); }
label_204fa0:
    // 0x204fa0: 0xe6800374  swc1        $f0, 0x374($s4)
    ctx->pc = 0x204fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 884), bits); }
label_204fa4:
    // 0x204fa4: 0xae830378  sw          $v1, 0x378($s4)
    ctx->pc = 0x204fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 888), GPR_U32(ctx, 3));
label_204fa8:
    // 0x204fa8: 0xe6800384  swc1        $f0, 0x384($s4)
    ctx->pc = 0x204fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 900), bits); }
label_204fac:
    // 0x204fac: 0xe6800380  swc1        $f0, 0x380($s4)
    ctx->pc = 0x204facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 896), bits); }
label_204fb0:
    // 0x204fb0: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x204fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_204fb4:
    // 0x204fb4: 0xc08ab90  jal         func_22AE40
label_204fb8:
    if (ctx->pc == 0x204FB8u) {
        ctx->pc = 0x204FB8u;
            // 0x204fb8: 0x24a597a8  addiu       $a1, $a1, -0x6858 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940584));
        ctx->pc = 0x204FBCu;
        goto label_204fbc;
    }
    ctx->pc = 0x204FB4u;
    SET_GPR_U32(ctx, 31, 0x204FBCu);
    ctx->pc = 0x204FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204FB4u;
            // 0x204fb8: 0x24a597a8  addiu       $a1, $a1, -0x6858 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204FBCu; }
        if (ctx->pc != 0x204FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204FBCu; }
        if (ctx->pc != 0x204FBCu) { return; }
    }
    ctx->pc = 0x204FBCu;
label_204fbc:
    // 0x204fbc: 0x10400138  beqz        $v0, . + 4 + (0x138 << 2)
label_204fc0:
    if (ctx->pc == 0x204FC0u) {
        ctx->pc = 0x204FC0u;
            // 0x204fc0: 0x27b700fc  addiu       $s7, $sp, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
        ctx->pc = 0x204FC4u;
        goto label_204fc4;
    }
    ctx->pc = 0x204FBCu;
    {
        const bool branch_taken_0x204fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204FBCu;
            // 0x204fc0: 0x27b700fc  addiu       $s7, $sp, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204fbc) {
            ctx->pc = 0x2054A0u;
            goto label_2054a0;
        }
    }
    ctx->pc = 0x204FC4u;
label_204fc4:
    // 0x204fc4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x204fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_204fc8:
    // 0x204fc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x204fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204fcc:
    // 0x204fcc: 0x24a597b0  addiu       $a1, $a1, -0x6850
    ctx->pc = 0x204fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940592));
label_204fd0:
    // 0x204fd0: 0x27a600f8  addiu       $a2, $sp, 0xF8
    ctx->pc = 0x204fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_204fd4:
    // 0x204fd4: 0xc08976c  jal         func_225DB0
label_204fd8:
    if (ctx->pc == 0x204FD8u) {
        ctx->pc = 0x204FD8u;
            // 0x204fd8: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x204FDCu;
        goto label_204fdc;
    }
    ctx->pc = 0x204FD4u;
    SET_GPR_U32(ctx, 31, 0x204FDCu);
    ctx->pc = 0x204FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204FD4u;
            // 0x204fd8: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225DB0u;
    if (runtime->hasFunction(0x225DB0u)) {
        auto targetFn = runtime->lookupFunction(0x225DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204FDCu; }
        if (ctx->pc != 0x204FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRfRf_0x225db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204FDCu; }
        if (ctx->pc != 0x204FDCu) { return; }
    }
    ctx->pc = 0x204FDCu;
label_204fdc:
    // 0x204fdc: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x204fdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_204fe0:
    // 0x204fe0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x204fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_204fe4:
    // 0x204fe4: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_204fe8:
    if (ctx->pc == 0x204FE8u) {
        ctx->pc = 0x204FE8u;
            // 0x204fe8: 0x3c024220  lui         $v0, 0x4220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
        ctx->pc = 0x204FECu;
        goto label_204fec;
    }
    ctx->pc = 0x204FE4u;
    {
        const bool branch_taken_0x204fe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x204FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204FE4u;
            // 0x204fe8: 0x3c024220  lui         $v0, 0x4220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204fe4) {
            ctx->pc = 0x205034u;
            goto label_205034;
        }
    }
    ctx->pc = 0x204FECu;
label_204fec:
    // 0x204fec: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x204fecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_204ff0:
    // 0x204ff0: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_204ff4:
    if (ctx->pc == 0x204FF4u) {
        ctx->pc = 0x204FF4u;
            // 0x204ff4: 0x28410003  slti        $at, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->pc = 0x204FF8u;
        goto label_204ff8;
    }
    ctx->pc = 0x204FF0u;
    {
        const bool branch_taken_0x204ff0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x204FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204FF0u;
            // 0x204ff4: 0x28410003  slti        $at, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ff0) {
            ctx->pc = 0x205030u;
            goto label_205030;
        }
    }
    ctx->pc = 0x204FF8u;
label_204ff8:
    // 0x204ff8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_204ffc:
    if (ctx->pc == 0x204FFCu) {
        ctx->pc = 0x205000u;
        goto label_205000;
    }
    ctx->pc = 0x204FF8u;
    {
        const bool branch_taken_0x204ff8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x204ff8) {
            ctx->pc = 0x205030u;
            goto label_205030;
        }
    }
    ctx->pc = 0x205000u;
label_205000:
    // 0x205000: 0xc6810628  lwc1        $f1, 0x628($s4)
    ctx->pc = 0x205000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205004:
    // 0x205004: 0x3c023ee3  lui         $v0, 0x3EE3
    ctx->pc = 0x205004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16099 << 16));
label_205008:
    // 0x205008: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x205008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
label_20500c:
    // 0x20500c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20500cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205010:
    // 0x205010: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x205010u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_205014:
    // 0x205014: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x205014u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_205018:
    // 0x205018: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x205018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20501c:
    // 0x20501c: 0x0  nop
    ctx->pc = 0x20501cu;
    // NOP
label_205020:
    // 0x205020: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_205024:
    if (ctx->pc == 0x205024u) {
        ctx->pc = 0x205024u;
            // 0x205024: 0xe6800628  swc1        $f0, 0x628($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1576), bits); }
        ctx->pc = 0x205028u;
        goto label_205028;
    }
    ctx->pc = 0x205020u;
    {
        const bool branch_taken_0x205020 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x205024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205020u;
            // 0x205024: 0xe6800628  swc1        $f0, 0x628($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1576), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x205020) {
            ctx->pc = 0x205038u;
            goto label_205038;
        }
    }
    ctx->pc = 0x205028u;
label_205028:
    // 0x205028: 0x10000003  b           . + 4 + (0x3 << 2)
label_20502c:
    if (ctx->pc == 0x20502Cu) {
        ctx->pc = 0x20502Cu;
            // 0x20502c: 0xe6820628  swc1        $f2, 0x628($s4) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1576), bits); }
        ctx->pc = 0x205030u;
        goto label_205030;
    }
    ctx->pc = 0x205028u;
    {
        const bool branch_taken_0x205028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20502Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205028u;
            // 0x20502c: 0xe6820628  swc1        $f2, 0x628($s4) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1576), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x205028) {
            ctx->pc = 0x205038u;
            goto label_205038;
        }
    }
    ctx->pc = 0x205030u;
label_205030:
    // 0x205030: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x205030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_205034:
    // 0x205034: 0xae820628  sw          $v0, 0x628($s4)
    ctx->pc = 0x205034u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1576), GPR_U32(ctx, 2));
label_205038:
    // 0x205038: 0x8682060c  lh          $v0, 0x60C($s4)
    ctx->pc = 0x205038u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1548)));
label_20503c:
    // 0x20503c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x20503cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_205040:
    // 0x205040: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_205044:
    if (ctx->pc == 0x205044u) {
        ctx->pc = 0x205048u;
        goto label_205048;
    }
    ctx->pc = 0x205040u;
    {
        const bool branch_taken_0x205040 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x205040) {
            ctx->pc = 0x205068u;
            goto label_205068;
        }
    }
    ctx->pc = 0x205048u;
label_205048:
    // 0x205048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20504c:
    // 0x20504c: 0x0  nop
    ctx->pc = 0x20504cu;
    // NOP
label_205050:
    // 0x205050: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x205050u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_205054:
    // 0x205054: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x205054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_205058:
    // 0x205058: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x205058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_20505c:
    // 0x20505c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20505cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205060:
    // 0x205060: 0x0  nop
    ctx->pc = 0x205060u;
    // NOP
label_205064:
    // 0x205064: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x205064u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_205068:
    // 0x205068: 0xc682062c  lwc1        $f2, 0x62C($s4)
    ctx->pc = 0x205068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20506c:
    // 0x20506c: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x20506cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
label_205070:
    // 0x205070: 0x34437750  ori         $v1, $v0, 0x7750
    ctx->pc = 0x205070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_205074:
    // 0x205074: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x205074u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205078:
    // 0x205078: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x205078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_20507c:
    // 0x20507c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20507cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_205080:
    // 0x205080: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205084:
    // 0x205084: 0x0  nop
    ctx->pc = 0x205084u;
    // NOP
label_205088:
    // 0x205088: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x205088u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_20508c:
    // 0x20508c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20508cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205090:
    // 0x205090: 0x0  nop
    ctx->pc = 0x205090u;
    // NOP
label_205094:
    // 0x205094: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_205098:
    if (ctx->pc == 0x205098u) {
        ctx->pc = 0x205098u;
            // 0x205098: 0xe681062c  swc1        $f1, 0x62C($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1580), bits); }
        ctx->pc = 0x20509Cu;
        goto label_20509c;
    }
    ctx->pc = 0x205094u;
    {
        const bool branch_taken_0x205094 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x205098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205094u;
            // 0x205098: 0xe681062c  swc1        $f1, 0x62C($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1580), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x205094) {
            ctx->pc = 0x2050B4u;
            goto label_2050b4;
        }
    }
    ctx->pc = 0x20509Cu;
label_20509c:
    // 0x20509c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x20509cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_2050a0:
    // 0x2050a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2050a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2050a4:
    // 0x2050a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2050a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2050a8:
    // 0x2050a8: 0x0  nop
    ctx->pc = 0x2050a8u;
    // NOP
label_2050ac:
    // 0x2050ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2050acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2050b0:
    // 0x2050b0: 0xe680062c  swc1        $f0, 0x62C($s4)
    ctx->pc = 0x2050b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1580), bits); }
label_2050b4:
    // 0x2050b4: 0xdf849130  ld          $a0, -0x6ED0($gp)
    ctx->pc = 0x2050b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294938928)));
label_2050b8:
    // 0x2050b8: 0x3c024387  lui         $v0, 0x4387
    ctx->pc = 0x2050b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17287 << 16));
label_2050bc:
    // 0x2050bc: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2050bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2050c0:
    // 0x2050c0: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x2050c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
label_2050c4:
    // 0x2050c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2050c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2050c8:
    // 0x2050c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2050c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2050cc:
    // 0x2050cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2050ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2050d0:
    // 0x2050d0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2050d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2050d4:
    // 0x2050d4: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x2050d4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
label_2050d8:
    // 0x2050d8: 0x8e820ec0  lw          $v0, 0xEC0($s4)
    ctx->pc = 0x2050d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3776)));
label_2050dc:
    // 0x2050dc: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x2050dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2050e0:
    // 0x2050e0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2050e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2050e4:
    // 0x2050e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2050e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2050e8:
    // 0x2050e8: 0xe7a20100  swc1        $f2, 0x100($sp)
    ctx->pc = 0x2050e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_2050ec:
    // 0x2050ec: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2050ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_2050f0:
    // 0x2050f0: 0x2959821  addu        $s3, $s4, $s5
    ctx->pc = 0x2050f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_2050f4:
    // 0x2050f4: 0x8e710ef0  lw          $s1, 0xEF0($s3)
    ctx->pc = 0x2050f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3824)));
label_2050f8:
    // 0x2050f8: 0x122000e0  beqz        $s1, . + 4 + (0xE0 << 2)
label_2050fc:
    if (ctx->pc == 0x2050FCu) {
        ctx->pc = 0x205100u;
        goto label_205100;
    }
    ctx->pc = 0x2050F8u;
    {
        const bool branch_taken_0x2050f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2050f8) {
            ctx->pc = 0x20547Cu;
            goto label_20547c;
        }
    }
    ctx->pc = 0x205100u;
label_205100:
    // 0x205100: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x205100u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_205104:
    // 0x205104: 0x104000dd  beqz        $v0, . + 4 + (0xDD << 2)
label_205108:
    if (ctx->pc == 0x205108u) {
        ctx->pc = 0x205108u;
            // 0x205108: 0x3c0340c0  lui         $v1, 0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
        ctx->pc = 0x20510Cu;
        goto label_20510c;
    }
    ctx->pc = 0x205104u;
    {
        const bool branch_taken_0x205104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205104u;
            // 0x205108: 0x3c0340c0  lui         $v1, 0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205104) {
            ctx->pc = 0x20547Cu;
            goto label_20547c;
        }
    }
    ctx->pc = 0x20510Cu;
label_20510c:
    // 0x20510c: 0x2909021  addu        $s2, $s4, $s0
    ctx->pc = 0x20510cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_205110:
    // 0x205110: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x205110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_205114:
    // 0x205114: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x205114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_205118:
    // 0x205118: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x205118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
label_20511c:
    // 0x20511c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x20511cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_205120:
    // 0x205120: 0xa2220050  sb          $v0, 0x50($s1)
    ctx->pc = 0x205120u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 2));
label_205124:
    // 0x205124: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x205124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205128:
    // 0x205128: 0x8242061f  lb          $v0, 0x61F($s2)
    ctx->pc = 0x205128u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1567)));
label_20512c:
    // 0x20512c: 0x14440059  bne         $v0, $a0, . + 4 + (0x59 << 2)
label_205130:
    if (ctx->pc == 0x205130u) {
        ctx->pc = 0x205130u;
            // 0x205130: 0x2656061f  addiu       $s6, $s2, 0x61F (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 1567));
        ctx->pc = 0x205134u;
        goto label_205134;
    }
    ctx->pc = 0x20512Cu;
    {
        const bool branch_taken_0x20512c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x205130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20512Cu;
            // 0x205130: 0x2656061f  addiu       $s6, $s2, 0x61F (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 1567));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20512c) {
            ctx->pc = 0x205294u;
            goto label_205294;
        }
    }
    ctx->pc = 0x205134u;
label_205134:
    // 0x205134: 0x8e820ec0  lw          $v0, 0xEC0($s4)
    ctx->pc = 0x205134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3776)));
label_205138:
    // 0x205138: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x205138u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20513c:
    // 0x20513c: 0x0  nop
    ctx->pc = 0x20513cu;
    // NOP
label_205140:
    // 0x205140: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x205140u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_205144:
    // 0x205144: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x205144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205148:
    // 0x205148: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x205148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_20514c:
    // 0x20514c: 0xe7a10100  swc1        $f1, 0x100($sp)
    ctx->pc = 0x20514cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_205150:
    // 0x205150: 0xc681062c  lwc1        $f1, 0x62C($s4)
    ctx->pc = 0x205150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205154:
    // 0x205154: 0x46000d40  add.s       $f21, $f1, $f0
    ctx->pc = 0x205154u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_205158:
    // 0x205158: 0xc047964  jal         func_11E590
label_20515c:
    if (ctx->pc == 0x20515Cu) {
        ctx->pc = 0x20515Cu;
            // 0x20515c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x205160u;
        goto label_205160;
    }
    ctx->pc = 0x205158u;
    SET_GPR_U32(ctx, 31, 0x205160u);
    ctx->pc = 0x20515Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205158u;
            // 0x20515c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205160u; }
        if (ctx->pc != 0x205160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205160u; }
        if (ctx->pc != 0x205160u) { return; }
    }
    ctx->pc = 0x205160u;
label_205160:
    // 0x205160: 0xc6820628  lwc1        $f2, 0x628($s4)
    ctx->pc = 0x205160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_205164:
    // 0x205164: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x205164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205168:
    // 0x205168: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x205168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_20516c:
    // 0x20516c: 0xc0a248c  jal         func_289230
label_205170:
    if (ctx->pc == 0x205170u) {
        ctx->pc = 0x205170u;
            // 0x205170: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x205174u;
        goto label_205174;
    }
    ctx->pc = 0x20516Cu;
    SET_GPR_U32(ctx, 31, 0x205174u);
    ctx->pc = 0x205170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20516Cu;
            // 0x205170: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205174u; }
        if (ctx->pc != 0x205174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205174u; }
        if (ctx->pc != 0x205174u) { return; }
    }
    ctx->pc = 0x205174u;
label_205174:
    // 0x205174: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x205174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
label_205178:
    // 0x205178: 0xc047a42  jal         func_11E908
label_20517c:
    if (ctx->pc == 0x20517Cu) {
        ctx->pc = 0x20517Cu;
            // 0x20517c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x205180u;
        goto label_205180;
    }
    ctx->pc = 0x205178u;
    SET_GPR_U32(ctx, 31, 0x205180u);
    ctx->pc = 0x20517Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205178u;
            // 0x20517c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205180u; }
        if (ctx->pc != 0x205180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205180u; }
        if (ctx->pc != 0x205180u) { return; }
    }
    ctx->pc = 0x205180u;
label_205180:
    // 0x205180: 0xc6820628  lwc1        $f2, 0x628($s4)
    ctx->pc = 0x205180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_205184:
    // 0x205184: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x205184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205188:
    // 0x205188: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x205188u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_20518c:
    // 0x20518c: 0xc0a248c  jal         func_289230
label_205190:
    if (ctx->pc == 0x205190u) {
        ctx->pc = 0x205190u;
            // 0x205190: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x205194u;
        goto label_205194;
    }
    ctx->pc = 0x20518Cu;
    SET_GPR_U32(ctx, 31, 0x205194u);
    ctx->pc = 0x205190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20518Cu;
            // 0x205190: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205194u; }
        if (ctx->pc != 0x205194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205194u; }
        if (ctx->pc != 0x205194u) { return; }
    }
    ctx->pc = 0x205194u;
label_205194:
    // 0x205194: 0x27b3010c  addiu       $s3, $sp, 0x10C
    ctx->pc = 0x205194u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_205198:
    // 0x205198: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x205198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20519c:
    // 0x20519c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x20519cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2051a0:
    // 0x2051a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2051a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2051a4:
    // 0x2051a4: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x2051a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2051a8:
    // 0x2051a8: 0xc08974c  jal         func_225D30
label_2051ac:
    if (ctx->pc == 0x2051ACu) {
        ctx->pc = 0x2051ACu;
            // 0x2051ac: 0x27a70114  addiu       $a3, $sp, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
        ctx->pc = 0x2051B0u;
        goto label_2051b0;
    }
    ctx->pc = 0x2051A8u;
    SET_GPR_U32(ctx, 31, 0x2051B0u);
    ctx->pc = 0x2051ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2051A8u;
            // 0x2051ac: 0x27a70114  addiu       $a3, $sp, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2051B0u; }
        if (ctx->pc != 0x2051B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2051B0u; }
        if (ctx->pc != 0x2051B0u) { return; }
    }
    ctx->pc = 0x2051B0u;
label_2051b0:
    // 0x2051b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2051b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2051b4:
    // 0x2051b4: 0x27a50108  addiu       $a1, $sp, 0x108
    ctx->pc = 0x2051b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_2051b8:
    // 0x2051b8: 0xc08a264  jal         func_228990
label_2051bc:
    if (ctx->pc == 0x2051BCu) {
        ctx->pc = 0x2051BCu;
            // 0x2051bc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2051C0u;
        goto label_2051c0;
    }
    ctx->pc = 0x2051B8u;
    SET_GPR_U32(ctx, 31, 0x2051C0u);
    ctx->pc = 0x2051BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2051B8u;
            // 0x2051bc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228990u;
    if (runtime->hasFunction(0x228990u)) {
        auto targetFn = runtime->lookupFunction(0x228990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2051C0u; }
        if (ctx->pc != 0x2051C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextMovePos__16CMenuPosDataFormFPii_0x228990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2051C0u; }
        if (ctx->pc != 0x2051C0u) { return; }
    }
    ctx->pc = 0x2051C0u;
label_2051c0:
    // 0x2051c0: 0x8e8205bc  lw          $v0, 0x5BC($s4)
    ctx->pc = 0x2051c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1468)));
label_2051c4:
    // 0x2051c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2051c8:
    if (ctx->pc == 0x2051C8u) {
        ctx->pc = 0x2051CCu;
        goto label_2051cc;
    }
    ctx->pc = 0x2051C4u;
    {
        const bool branch_taken_0x2051c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2051c4) {
            ctx->pc = 0x2051E4u;
            goto label_2051e4;
        }
    }
    ctx->pc = 0x2051CCu;
label_2051cc:
    // 0x2051cc: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x2051ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2051d0:
    // 0x2051d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2051d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2051d4:
    // 0x2051d4: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x2051d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_2051d8:
    // 0x2051d8: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2051d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2051dc:
    // 0x2051dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2051dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2051e0:
    // 0x2051e0: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2051e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_2051e4:
    // 0x2051e4: 0x0  nop
    ctx->pc = 0x2051e4u;
    // NOP
label_2051e8:
    // 0x2051e8: 0x82420622  lb          $v0, 0x622($s2)
    ctx->pc = 0x2051e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1570)));
label_2051ec:
    // 0x2051ec: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
label_2051f0:
    if (ctx->pc == 0x2051F0u) {
        ctx->pc = 0x2051F4u;
        goto label_2051f4;
    }
    ctx->pc = 0x2051ECu;
    {
        const bool branch_taken_0x2051ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2051ec) {
            ctx->pc = 0x20547Cu;
            goto label_20547c;
        }
    }
    ctx->pc = 0x2051F4u;
label_2051f4:
    // 0x2051f4: 0xc68205c0  lwc1        $f2, 0x5C0($s4)
    ctx->pc = 0x2051f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2051f8:
    // 0x2051f8: 0x3c023da0  lui         $v0, 0x3DA0
    ctx->pc = 0x2051f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15776 << 16));
label_2051fc:
    // 0x2051fc: 0x3443d97c  ori         $v1, $v0, 0xD97C
    ctx->pc = 0x2051fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
label_205200:
    // 0x205200: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x205200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205204:
    // 0x205204: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x205204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_205208:
    // 0x205208: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x205208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_20520c:
    // 0x20520c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20520cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205210:
    // 0x205210: 0x0  nop
    ctx->pc = 0x205210u;
    // NOP
label_205214:
    // 0x205214: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x205214u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_205218:
    // 0x205218: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x205218u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20521c:
    // 0x20521c: 0x0  nop
    ctx->pc = 0x20521cu;
    // NOP
label_205220:
    // 0x205220: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_205224:
    if (ctx->pc == 0x205224u) {
        ctx->pc = 0x205224u;
            // 0x205224: 0xe68105c0  swc1        $f1, 0x5C0($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1472), bits); }
        ctx->pc = 0x205228u;
        goto label_205228;
    }
    ctx->pc = 0x205220u;
    {
        const bool branch_taken_0x205220 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x205224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205220u;
            // 0x205224: 0xe68105c0  swc1        $f1, 0x5C0($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1472), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x205220) {
            ctx->pc = 0x205240u;
            goto label_205240;
        }
    }
    ctx->pc = 0x205228u;
label_205228:
    // 0x205228: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x205228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_20522c:
    // 0x20522c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20522cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_205230:
    // 0x205230: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205234:
    // 0x205234: 0x0  nop
    ctx->pc = 0x205234u;
    // NOP
label_205238:
    // 0x205238: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x205238u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20523c:
    // 0x20523c: 0xe68005c0  swc1        $f0, 0x5C0($s4)
    ctx->pc = 0x20523cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1472), bits); }
label_205240:
    // 0x205240: 0xc047a42  jal         func_11E908
label_205244:
    if (ctx->pc == 0x205244u) {
        ctx->pc = 0x205244u;
            // 0x205244: 0xc68c05c0  lwc1        $f12, 0x5C0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x205248u;
        goto label_205248;
    }
    ctx->pc = 0x205240u;
    SET_GPR_U32(ctx, 31, 0x205248u);
    ctx->pc = 0x205244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205240u;
            // 0x205244: 0xc68c05c0  lwc1        $f12, 0x5C0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205248u; }
        if (ctx->pc != 0x205248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205248u; }
        if (ctx->pc != 0x205248u) { return; }
    }
    ctx->pc = 0x205248u;
label_205248:
    // 0x205248: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x205248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_20524c:
    // 0x20524c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x20524cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_205250:
    // 0x205250: 0xa2230055  sb          $v1, 0x55($s1)
    ctx->pc = 0x205250u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 85), (uint8_t)GPR_U32(ctx, 3));
label_205254:
    // 0x205254: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x205254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205258:
    // 0x205258: 0xa2230056  sb          $v1, 0x56($s1)
    ctx->pc = 0x205258u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 86), (uint8_t)GPR_U32(ctx, 3));
label_20525c:
    // 0x20525c: 0xa2230057  sb          $v1, 0x57($s1)
    ctx->pc = 0x20525cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 87), (uint8_t)GPR_U32(ctx, 3));
label_205260:
    // 0x205260: 0xa2220058  sb          $v0, 0x58($s1)
    ctx->pc = 0x205260u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 88), (uint8_t)GPR_U32(ctx, 2));
label_205264:
    // 0x205264: 0x0  nop
    ctx->pc = 0x205264u;
    // NOP
label_205268:
    // 0x205268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x205268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20526c:
    // 0x20526c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20526cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_205270:
    // 0x205270: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x205270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205274:
    // 0x205274: 0xc0896cc  jal         func_225B30
label_205278:
    if (ctx->pc == 0x205278u) {
        ctx->pc = 0x205278u;
            // 0x205278: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x20527Cu;
        goto label_20527c;
    }
    ctx->pc = 0x205274u;
    SET_GPR_U32(ctx, 31, 0x20527Cu);
    ctx->pc = 0x205278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205274u;
            // 0x205278: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20527Cu; }
        if (ctx->pc != 0x20527Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20527Cu; }
        if (ctx->pc != 0x20527Cu) { return; }
    }
    ctx->pc = 0x20527Cu;
label_20527c:
    // 0x20527c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x20527cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_205280:
    // 0x205280: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x205280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_205284:
    // 0x205284: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_205288:
    if (ctx->pc == 0x205288u) {
        ctx->pc = 0x20528Cu;
        goto label_20528c;
    }
    ctx->pc = 0x205284u;
    {
        const bool branch_taken_0x205284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205284) {
            ctx->pc = 0x205264u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_205264;
        }
    }
    ctx->pc = 0x20528Cu;
label_20528c:
    // 0x20528c: 0x1000007b  b           . + 4 + (0x7B << 2)
label_205290:
    if (ctx->pc == 0x205290u) {
        ctx->pc = 0x205294u;
        goto label_205294;
    }
    ctx->pc = 0x20528Cu;
    {
        const bool branch_taken_0x20528c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20528c) {
            ctx->pc = 0x20547Cu;
            goto label_20547c;
        }
    }
    ctx->pc = 0x205294u;
label_205294:
    // 0x205294: 0x0  nop
    ctx->pc = 0x205294u;
    // NOP
label_205298:
    // 0x205298: 0x14400078  bnez        $v0, . + 4 + (0x78 << 2)
label_20529c:
    if (ctx->pc == 0x20529Cu) {
        ctx->pc = 0x2052A0u;
        goto label_2052a0;
    }
    ctx->pc = 0x205298u;
    {
        const bool branch_taken_0x205298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205298) {
            ctx->pc = 0x20547Cu;
            goto label_20547c;
        }
    }
    ctx->pc = 0x2052A0u;
label_2052a0:
    // 0x2052a0: 0x8e830ec0  lw          $v1, 0xEC0($s4)
    ctx->pc = 0x2052a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3776)));
label_2052a4:
    // 0x2052a4: 0x3c024258  lui         $v0, 0x4258
    ctx->pc = 0x2052a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16984 << 16));
label_2052a8:
    // 0x2052a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2052a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2052ac:
    // 0x2052ac: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x2052acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2052b0:
    // 0x2052b0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2052b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2052b4:
    // 0x2052b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2052b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2052b8:
    // 0x2052b8: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x2052b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_2052bc:
    // 0x2052bc: 0x8242061c  lb          $v0, 0x61C($s2)
    ctx->pc = 0x2052bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1564)));
label_2052c0:
    // 0x2052c0: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_2052c4:
    if (ctx->pc == 0x2052C4u) {
        ctx->pc = 0x2052C8u;
        goto label_2052c8;
    }
    ctx->pc = 0x2052C0u;
    {
        const bool branch_taken_0x2052c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2052c0) {
            ctx->pc = 0x205384u;
            goto label_205384;
        }
    }
    ctx->pc = 0x2052C8u;
label_2052c8:
    // 0x2052c8: 0x8e650610  lw          $a1, 0x610($s3)
    ctx->pc = 0x2052c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1552)));
label_2052cc:
    // 0x2052cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2052ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2052d0:
    // 0x2052d0: 0xc082128  jal         func_2084A0
label_2052d4:
    if (ctx->pc == 0x2052D4u) {
        ctx->pc = 0x2052D4u;
            // 0x2052d4: 0x27a60108  addiu       $a2, $sp, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
        ctx->pc = 0x2052D8u;
        goto label_2052d8;
    }
    ctx->pc = 0x2052D0u;
    SET_GPR_U32(ctx, 31, 0x2052D8u);
    ctx->pc = 0x2052D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2052D0u;
            // 0x2052d4: 0x27a60108  addiu       $a2, $sp, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2084A0u;
    if (runtime->hasFunction(0x2084A0u)) {
        auto targetFn = runtime->lookupFunction(0x2084A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2052D8u; }
        if (ctx->pc != 0x2052D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNetaBoardCursorPosition__11CMenuInventFiPi_0x2084a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2052D8u; }
        if (ctx->pc != 0x2052D8u) { return; }
    }
    ctx->pc = 0x2052D8u;
label_2052d8:
    // 0x2052d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2052d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2052dc:
    // 0x2052dc: 0x27a50108  addiu       $a1, $sp, 0x108
    ctx->pc = 0x2052dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_2052e0:
    // 0x2052e0: 0xc08a264  jal         func_228990
label_2052e4:
    if (ctx->pc == 0x2052E4u) {
        ctx->pc = 0x2052E4u;
            // 0x2052e4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2052E8u;
        goto label_2052e8;
    }
    ctx->pc = 0x2052E0u;
    SET_GPR_U32(ctx, 31, 0x2052E8u);
    ctx->pc = 0x2052E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2052E0u;
            // 0x2052e4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228990u;
    if (runtime->hasFunction(0x228990u)) {
        auto targetFn = runtime->lookupFunction(0x228990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2052E8u; }
        if (ctx->pc != 0x2052E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextMovePos__16CMenuPosDataFormFPii_0x228990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2052E8u; }
        if (ctx->pc != 0x2052E8u) { return; }
    }
    ctx->pc = 0x2052E8u;
label_2052e8:
    // 0x2052e8: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x2052e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_2052ec:
    // 0x2052ec: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x2052ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2052f0:
    // 0x2052f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2052f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2052f4:
    // 0x2052f4: 0x0  nop
    ctx->pc = 0x2052f4u;
    // NOP
label_2052f8:
    // 0x2052f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2052f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2052fc:
    // 0x2052fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2052fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205300:
    // 0x205300: 0x0  nop
    ctx->pc = 0x205300u;
    // NOP
label_205304:
    // 0x205304: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_205308:
    if (ctx->pc == 0x205308u) {
        ctx->pc = 0x20530Cu;
        goto label_20530c;
    }
    ctx->pc = 0x205304u;
    {
        const bool branch_taken_0x205304 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x205304) {
            ctx->pc = 0x205320u;
            goto label_205320;
        }
    }
    ctx->pc = 0x20530Cu;
label_20530c:
    // 0x20530c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x20530cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205310:
    // 0x205310: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x205310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205314:
    // 0x205314: 0x0  nop
    ctx->pc = 0x205314u;
    // NOP
label_205318:
    // 0x205318: 0x45010012  bc1t        . + 4 + (0x12 << 2)
label_20531c:
    if (ctx->pc == 0x20531Cu) {
        ctx->pc = 0x205320u;
        goto label_205320;
    }
    ctx->pc = 0x205318u;
    {
        const bool branch_taken_0x205318 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x205318) {
            ctx->pc = 0x205364u;
            goto label_205364;
        }
    }
    ctx->pc = 0x205320u;
label_205320:
    // 0x205320: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x205320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205324:
    // 0x205324: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x205324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205328:
    // 0x205328: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x205328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_20532c:
    // 0x20532c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20532cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205330:
    // 0x205330: 0x0  nop
    ctx->pc = 0x205330u;
    // NOP
label_205334:
    // 0x205334: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_205338:
    if (ctx->pc == 0x205338u) {
        ctx->pc = 0x20533Cu;
        goto label_20533c;
    }
    ctx->pc = 0x205334u;
    {
        const bool branch_taken_0x205334 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x205334) {
            ctx->pc = 0x205354u;
            goto label_205354;
        }
    }
    ctx->pc = 0x20533Cu;
label_20533c:
    // 0x20533c: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x20533cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205340:
    // 0x205340: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x205340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205344:
    // 0x205344: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x205344u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205348:
    // 0x205348: 0x0  nop
    ctx->pc = 0x205348u;
    // NOP
label_20534c:
    // 0x20534c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_205350:
    if (ctx->pc == 0x205350u) {
        ctx->pc = 0x205354u;
        goto label_205354;
    }
    ctx->pc = 0x20534Cu;
    {
        const bool branch_taken_0x20534c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20534c) {
            ctx->pc = 0x205364u;
            goto label_205364;
        }
    }
    ctx->pc = 0x205354u;
label_205354:
    // 0x205354: 0x0  nop
    ctx->pc = 0x205354u;
    // NOP
label_205358:
    // 0x205358: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x205358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20535c:
    // 0x20535c: 0x441003d  bgez        $v0, . + 4 + (0x3D << 2)
label_205360:
    if (ctx->pc == 0x205360u) {
        ctx->pc = 0x205364u;
        goto label_205364;
    }
    ctx->pc = 0x20535Cu;
    {
        const bool branch_taken_0x20535c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x20535c) {
            ctx->pc = 0x205454u;
            goto label_205454;
        }
    }
    ctx->pc = 0x205364u;
label_205364:
    // 0x205364: 0x0  nop
    ctx->pc = 0x205364u;
    // NOP
label_205368:
    // 0x205368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x205368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20536c:
    // 0x20536c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x20536cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_205370:
    // 0x205370: 0x2406ffe4  addiu       $a2, $zero, -0x1C
    ctx->pc = 0x205370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
label_205374:
    // 0x205374: 0xc0896cc  jal         func_225B30
label_205378:
    if (ctx->pc == 0x205378u) {
        ctx->pc = 0x205378u;
            // 0x205378: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20537Cu;
        goto label_20537c;
    }
    ctx->pc = 0x205374u;
    SET_GPR_U32(ctx, 31, 0x20537Cu);
    ctx->pc = 0x205378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205374u;
            // 0x205378: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20537Cu; }
        if (ctx->pc != 0x20537Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20537Cu; }
        if (ctx->pc != 0x20537Cu) { return; }
    }
    ctx->pc = 0x20537Cu;
label_20537c:
    // 0x20537c: 0x10000035  b           . + 4 + (0x35 << 2)
label_205380:
    if (ctx->pc == 0x205380u) {
        ctx->pc = 0x205384u;
        goto label_205384;
    }
    ctx->pc = 0x20537Cu;
    {
        const bool branch_taken_0x20537c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20537c) {
            ctx->pc = 0x205454u;
            goto label_205454;
        }
    }
    ctx->pc = 0x205384u;
label_205384:
    // 0x205384: 0x0  nop
    ctx->pc = 0x205384u;
    // NOP
label_205388:
    // 0x205388: 0x14440032  bne         $v0, $a0, . + 4 + (0x32 << 2)
label_20538c:
    if (ctx->pc == 0x20538Cu) {
        ctx->pc = 0x205390u;
        goto label_205390;
    }
    ctx->pc = 0x205388u;
    {
        const bool branch_taken_0x205388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x205388) {
            ctx->pc = 0x205454u;
            goto label_205454;
        }
    }
    ctx->pc = 0x205390u;
label_205390:
    // 0x205390: 0x8e650610  lw          $a1, 0x610($s3)
    ctx->pc = 0x205390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1552)));
label_205394:
    // 0x205394: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x205394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_205398:
    // 0x205398: 0xc082150  jal         func_208540
label_20539c:
    if (ctx->pc == 0x20539Cu) {
        ctx->pc = 0x20539Cu;
            // 0x20539c: 0x27a60108  addiu       $a2, $sp, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
        ctx->pc = 0x2053A0u;
        goto label_2053a0;
    }
    ctx->pc = 0x205398u;
    SET_GPR_U32(ctx, 31, 0x2053A0u);
    ctx->pc = 0x20539Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205398u;
            // 0x20539c: 0x27a60108  addiu       $a2, $sp, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208540u;
    if (runtime->hasFunction(0x208540u)) {
        auto targetFn = runtime->lookupFunction(0x208540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2053A0u; }
        if (ctx->pc != 0x2053A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNetaMemoCursorPosition__11CMenuInventFiPi_0x208540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2053A0u; }
        if (ctx->pc != 0x2053A0u) { return; }
    }
    ctx->pc = 0x2053A0u;
label_2053a0:
    // 0x2053a0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2053a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_2053a4:
    // 0x2053a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2053a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2053a8:
    // 0x2053a8: 0x27a50108  addiu       $a1, $sp, 0x108
    ctx->pc = 0x2053a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_2053ac:
    // 0x2053ac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2053acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2053b0:
    // 0x2053b0: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x2053b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
label_2053b4:
    // 0x2053b4: 0xc08a264  jal         func_228990
label_2053b8:
    if (ctx->pc == 0x2053B8u) {
        ctx->pc = 0x2053B8u;
            // 0x2053b8: 0xafa20108  sw          $v0, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
        ctx->pc = 0x2053BCu;
        goto label_2053bc;
    }
    ctx->pc = 0x2053B4u;
    SET_GPR_U32(ctx, 31, 0x2053BCu);
    ctx->pc = 0x2053B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2053B4u;
            // 0x2053b8: 0xafa20108  sw          $v0, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228990u;
    if (runtime->hasFunction(0x228990u)) {
        auto targetFn = runtime->lookupFunction(0x228990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2053BCu; }
        if (ctx->pc != 0x2053BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextMovePos__16CMenuPosDataFormFPii_0x228990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2053BCu; }
        if (ctx->pc != 0x2053BCu) { return; }
    }
    ctx->pc = 0x2053BCu;
label_2053bc:
    // 0x2053bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2053bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2053c0:
    // 0x2053c0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2053c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2053c4:
    // 0x2053c4: 0x2406fff0  addiu       $a2, $zero, -0x10
    ctx->pc = 0x2053c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_2053c8:
    // 0x2053c8: 0xc0896cc  jal         func_225B30
label_2053cc:
    if (ctx->pc == 0x2053CCu) {
        ctx->pc = 0x2053CCu;
            // 0x2053cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2053D0u;
        goto label_2053d0;
    }
    ctx->pc = 0x2053C8u;
    SET_GPR_U32(ctx, 31, 0x2053D0u);
    ctx->pc = 0x2053CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2053C8u;
            // 0x2053cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2053D0u; }
        if (ctx->pc != 0x2053D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2053D0u; }
        if (ctx->pc != 0x2053D0u) { return; }
    }
    ctx->pc = 0x2053D0u;
label_2053d0:
    // 0x2053d0: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x2053d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_2053d4:
    // 0x2053d4: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x2053d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2053d8:
    // 0x2053d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2053d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2053dc:
    // 0x2053dc: 0x0  nop
    ctx->pc = 0x2053dcu;
    // NOP
label_2053e0:
    // 0x2053e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2053e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2053e4:
    // 0x2053e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2053e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2053e8:
    // 0x2053e8: 0x0  nop
    ctx->pc = 0x2053e8u;
    // NOP
label_2053ec:
    // 0x2053ec: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2053f0:
    if (ctx->pc == 0x2053F0u) {
        ctx->pc = 0x2053F4u;
        goto label_2053f4;
    }
    ctx->pc = 0x2053ECu;
    {
        const bool branch_taken_0x2053ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2053ec) {
            ctx->pc = 0x205408u;
            goto label_205408;
        }
    }
    ctx->pc = 0x2053F4u;
label_2053f4:
    // 0x2053f4: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2053f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2053f8:
    // 0x2053f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2053f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2053fc:
    // 0x2053fc: 0x0  nop
    ctx->pc = 0x2053fcu;
    // NOP
label_205400:
    // 0x205400: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_205404:
    if (ctx->pc == 0x205404u) {
        ctx->pc = 0x205408u;
        goto label_205408;
    }
    ctx->pc = 0x205400u;
    {
        const bool branch_taken_0x205400 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x205400) {
            ctx->pc = 0x20543Cu;
            goto label_20543c;
        }
    }
    ctx->pc = 0x205408u;
label_205408:
    // 0x205408: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x205408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20540c:
    // 0x20540c: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x20540cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205410:
    // 0x205410: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x205410u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_205414:
    // 0x205414: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x205414u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205418:
    // 0x205418: 0x0  nop
    ctx->pc = 0x205418u;
    // NOP
label_20541c:
    // 0x20541c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_205420:
    if (ctx->pc == 0x205420u) {
        ctx->pc = 0x205424u;
        goto label_205424;
    }
    ctx->pc = 0x20541Cu;
    {
        const bool branch_taken_0x20541c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20541c) {
            ctx->pc = 0x205454u;
            goto label_205454;
        }
    }
    ctx->pc = 0x205424u;
label_205424:
    // 0x205424: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x205424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205428:
    // 0x205428: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x205428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20542c:
    // 0x20542c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20542cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205430:
    // 0x205430: 0x0  nop
    ctx->pc = 0x205430u;
    // NOP
label_205434:
    // 0x205434: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_205438:
    if (ctx->pc == 0x205438u) {
        ctx->pc = 0x20543Cu;
        goto label_20543c;
    }
    ctx->pc = 0x205434u;
    {
        const bool branch_taken_0x205434 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x205434) {
            ctx->pc = 0x205454u;
            goto label_205454;
        }
    }
    ctx->pc = 0x20543Cu;
label_20543c:
    // 0x20543c: 0x0  nop
    ctx->pc = 0x20543cu;
    // NOP
label_205440:
    // 0x205440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x205440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_205444:
    // 0x205444: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x205444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_205448:
    // 0x205448: 0x2406ffe4  addiu       $a2, $zero, -0x1C
    ctx->pc = 0x205448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
label_20544c:
    // 0x20544c: 0xc0896cc  jal         func_225B30
label_205450:
    if (ctx->pc == 0x205450u) {
        ctx->pc = 0x205450u;
            // 0x205450: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x205454u;
        goto label_205454;
    }
    ctx->pc = 0x20544Cu;
    SET_GPR_U32(ctx, 31, 0x205454u);
    ctx->pc = 0x205450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20544Cu;
            // 0x205450: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205454u; }
        if (ctx->pc != 0x205454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205454u; }
        if (ctx->pc != 0x205454u) { return; }
    }
    ctx->pc = 0x205454u;
label_205454:
    // 0x205454: 0x0  nop
    ctx->pc = 0x205454u;
    // NOP
label_205458:
    // 0x205458: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x205458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_20545c:
    // 0x20545c: 0x8fa6010c  lw          $a2, 0x10C($sp)
    ctx->pc = 0x20545cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_205460:
    // 0x205460: 0xc08a210  jal         func_228840
label_205464:
    if (ctx->pc == 0x205464u) {
        ctx->pc = 0x205464u;
            // 0x205464: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x205468u;
        goto label_205468;
    }
    ctx->pc = 0x205460u;
    SET_GPR_U32(ctx, 31, 0x205468u);
    ctx->pc = 0x205464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205460u;
            // 0x205464: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228840u;
    if (runtime->hasFunction(0x228840u)) {
        auto targetFn = runtime->lookupFunction(0x228840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205468u; }
        if (ctx->pc != 0x205468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckMoveEnd__16CMenuPosDataFormFii_0x228840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205468u; }
        if (ctx->pc != 0x205468u) { return; }
    }
    ctx->pc = 0x205468u;
label_205468:
    // 0x205468: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_20546c:
    if (ctx->pc == 0x20546Cu) {
        ctx->pc = 0x20546Cu;
            // 0x20546c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x205470u;
        goto label_205470;
    }
    ctx->pc = 0x205468u;
    {
        const bool branch_taken_0x205468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20546Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205468u;
            // 0x20546c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205468) {
            ctx->pc = 0x20547Cu;
            goto label_20547c;
        }
    }
    ctx->pc = 0x205470u;
label_205470:
    // 0x205470: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x205470u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
label_205474:
    // 0x205474: 0xae620610  sw          $v0, 0x610($s3)
    ctx->pc = 0x205474u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1552), GPR_U32(ctx, 2));
label_205478:
    // 0x205478: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x205478u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
label_20547c:
    // 0x20547c: 0x0  nop
    ctx->pc = 0x20547cu;
    // NOP
label_205480:
    // 0x205480: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x205480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_205484:
    // 0x205484: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x205484u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_205488:
    // 0x205488: 0x1440ff19  bnez        $v0, . + 4 + (-0xE7 << 2)
label_20548c:
    if (ctx->pc == 0x20548Cu) {
        ctx->pc = 0x20548Cu;
            // 0x20548c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x205490u;
        goto label_205490;
    }
    ctx->pc = 0x205488u;
    {
        const bool branch_taken_0x205488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20548Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205488u;
            // 0x20548c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205488) {
            ctx->pc = 0x2050F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2050f0;
        }
    }
    ctx->pc = 0x205490u;
label_205490:
    // 0x205490: 0x8e8205bc  lw          $v0, 0x5BC($s4)
    ctx->pc = 0x205490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1468)));
label_205494:
    // 0x205494: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_205498:
    if (ctx->pc == 0x205498u) {
        ctx->pc = 0x20549Cu;
        goto label_20549c;
    }
    ctx->pc = 0x205494u;
    {
        const bool branch_taken_0x205494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205494) {
            ctx->pc = 0x2054A0u;
            goto label_2054a0;
        }
    }
    ctx->pc = 0x20549Cu;
label_20549c:
    // 0x20549c: 0xae8005bc  sw          $zero, 0x5BC($s4)
    ctx->pc = 0x20549cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1468), GPR_U32(ctx, 0));
label_2054a0:
    // 0x2054a0: 0x8e820eec  lw          $v0, 0xEEC($s4)
    ctx->pc = 0x2054a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3820)));
label_2054a4:
    // 0x2054a4: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_2054a8:
    if (ctx->pc == 0x2054A8u) {
        ctx->pc = 0x2054ACu;
        goto label_2054ac;
    }
    ctx->pc = 0x2054A4u;
    {
        const bool branch_taken_0x2054a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2054a4) {
            ctx->pc = 0x205594u;
            goto label_205594;
        }
    }
    ctx->pc = 0x2054ACu;
label_2054ac:
    // 0x2054ac: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2054acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2054b0:
    // 0x2054b0: 0x8e830138  lw          $v1, 0x138($s4)
    ctx->pc = 0x2054b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
label_2054b4:
    // 0x2054b4: 0x92850354  lbu         $a1, 0x354($s4)
    ctx->pc = 0x2054b4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 852)));
label_2054b8:
    // 0x2054b8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2054b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2054bc:
    // 0x2054bc: 0x26840358  addiu       $a0, $s4, 0x358
    ctx->pc = 0x2054bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 856));
label_2054c0:
    // 0x2054c0: 0x3c024298  lui         $v0, 0x4298
    ctx->pc = 0x2054c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17048 << 16));
label_2054c4:
    // 0x2054c4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2054c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2054c8:
    // 0x2054c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2054c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2054cc:
    // 0x2054cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2054ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2054d0:
    // 0x2054d0: 0x0  nop
    ctx->pc = 0x2054d0u;
    // NOP
label_2054d4:
    // 0x2054d4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2054d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2054d8:
    // 0x2054d8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2054d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_2054dc:
    // 0x2054dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2054dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2054e0:
    // 0x2054e0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2054e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2054e4:
    // 0x2054e4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2054e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2054e8:
    // 0x2054e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2054e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2054ec:
    // 0x2054ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2054ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2054f0:
    // 0x2054f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2054f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2054f4:
    // 0x2054f4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2054f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2054f8:
    // 0x2054f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2054f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2054fc:
    // 0x2054fc: 0x0  nop
    ctx->pc = 0x2054fcu;
    // NOP
label_205500:
    // 0x205500: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x205500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_205504:
    // 0x205504: 0xc094514  jal         func_251450
label_205508:
    if (ctx->pc == 0x205508u) {
        ctx->pc = 0x205508u;
            // 0x205508: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x20550Cu;
        goto label_20550c;
    }
    ctx->pc = 0x205504u;
    SET_GPR_U32(ctx, 31, 0x20550Cu);
    ctx->pc = 0x205508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205504u;
            // 0x205508: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20550Cu; }
        if (ctx->pc != 0x20550Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20550Cu; }
        if (ctx->pc != 0x20550Cu) { return; }
    }
    ctx->pc = 0x20550Cu;
label_20550c:
    // 0x20550c: 0x878290f4  lh          $v0, -0x6F0C($gp)
    ctx->pc = 0x20550cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938868)));
label_205510:
    // 0x205510: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x205510u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_205514:
    // 0x205514: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x205514u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_205518:
    // 0x205518: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_20551c:
    if (ctx->pc == 0x20551Cu) {
        ctx->pc = 0x205520u;
        goto label_205520;
    }
    ctx->pc = 0x205518u;
    {
        const bool branch_taken_0x205518 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x205518) {
            ctx->pc = 0x20554Cu;
            goto label_20554c;
        }
    }
    ctx->pc = 0x205520u;
label_205520:
    // 0x205520: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x205520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205524:
    // 0x205524: 0x0  nop
    ctx->pc = 0x205524u;
    // NOP
label_205528:
    // 0x205528: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x205528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_20552c:
    // 0x20552c: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x20552cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
label_205530:
    // 0x205530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205534:
    // 0x205534: 0x0  nop
    ctx->pc = 0x205534u;
    // NOP
label_205538:
    // 0x205538: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x205538u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20553c:
    // 0x20553c: 0x3c024358  lui         $v0, 0x4358
    ctx->pc = 0x20553cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17240 << 16));
label_205540:
    // 0x205540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205544:
    // 0x205544: 0x0  nop
    ctx->pc = 0x205544u;
    // NOP
label_205548:
    // 0x205548: 0x46010103  div.s       $f4, $f0, $f1
    ctx->pc = 0x205548u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_20554c:
    // 0x20554c: 0x8e830eec  lw          $v1, 0xEEC($s4)
    ctx->pc = 0x20554cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3820)));
label_205550:
    // 0x205550: 0xc6800138  lwc1        $f0, 0x138($s4)
    ctx->pc = 0x205550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205554:
    // 0x205554: 0x3c024298  lui         $v0, 0x4298
    ctx->pc = 0x205554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17048 << 16));
label_205558:
    // 0x205558: 0x92850354  lbu         $a1, 0x354($s4)
    ctx->pc = 0x205558u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 852)));
label_20555c:
    // 0x20555c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x20555cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_205560:
    // 0x205560: 0x2684035c  addiu       $a0, $s4, 0x35C
    ctx->pc = 0x205560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 860));
label_205564:
    // 0x205564: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x205564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_205568:
    // 0x205568: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x205568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20556c:
    // 0x20556c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20556cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205570:
    // 0x205570: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x205570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_205574:
    // 0x205574: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x205574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_205578:
    // 0x205578: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x205578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_20557c:
    // 0x20557c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x20557cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_205580:
    // 0x205580: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x205580u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_205584:
    // 0x205584: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x205584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_205588:
    // 0x205588: 0xc094514  jal         func_251450
label_20558c:
    if (ctx->pc == 0x20558Cu) {
        ctx->pc = 0x20558Cu;
            // 0x20558c: 0x4600231c  madd.s      $f12, $f4, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
        ctx->pc = 0x205590u;
        goto label_205590;
    }
    ctx->pc = 0x205588u;
    SET_GPR_U32(ctx, 31, 0x205590u);
    ctx->pc = 0x20558Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205588u;
            // 0x20558c: 0x4600231c  madd.s      $f12, $f4, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205590u; }
        if (ctx->pc != 0x205590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205590u; }
        if (ctx->pc != 0x205590u) { return; }
    }
    ctx->pc = 0x205590u;
label_205590:
    // 0x205590: 0xa2800354  sb          $zero, 0x354($s4)
    ctx->pc = 0x205590u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 852), (uint8_t)GPR_U32(ctx, 0));
label_205594:
    // 0x205594: 0x8e820ec0  lw          $v0, 0xEC0($s4)
    ctx->pc = 0x205594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3776)));
label_205598:
    // 0x205598: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
label_20559c:
    if (ctx->pc == 0x20559Cu) {
        ctx->pc = 0x2055A0u;
        goto label_2055a0;
    }
    ctx->pc = 0x205598u;
    {
        const bool branch_taken_0x205598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205598) {
            ctx->pc = 0x205750u;
            goto label_205750;
        }
    }
    ctx->pc = 0x2055A0u;
label_2055a0:
    // 0x2055a0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2055a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2055a4:
    // 0x2055a4: 0x8e830128  lw          $v1, 0x128($s4)
    ctx->pc = 0x2055a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 296)));
label_2055a8:
    // 0x2055a8: 0x92850eb5  lbu         $a1, 0xEB5($s4)
    ctx->pc = 0x2055a8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3765)));
label_2055ac:
    // 0x2055ac: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2055acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2055b0:
    // 0x2055b0: 0x2684025c  addiu       $a0, $s4, 0x25C
    ctx->pc = 0x2055b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 604));
label_2055b4:
    // 0x2055b4: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x2055b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_2055b8:
    // 0x2055b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2055b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2055bc:
    // 0x2055bc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2055bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_2055c0:
    // 0x2055c0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2055c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2055c4:
    // 0x2055c4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2055c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2055c8:
    // 0x2055c8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2055c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2055cc:
    // 0x2055cc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2055ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2055d0:
    // 0x2055d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2055d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2055d4:
    // 0x2055d4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2055d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2055d8:
    // 0x2055d8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2055d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2055dc:
    // 0x2055dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2055dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2055e0:
    // 0x2055e0: 0x0  nop
    ctx->pc = 0x2055e0u;
    // NOP
label_2055e4:
    // 0x2055e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2055e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2055e8:
    // 0x2055e8: 0xc094514  jal         func_251450
label_2055ec:
    if (ctx->pc == 0x2055ECu) {
        ctx->pc = 0x2055ECu;
            // 0x2055ec: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2055F0u;
        goto label_2055f0;
    }
    ctx->pc = 0x2055E8u;
    SET_GPR_U32(ctx, 31, 0x2055F0u);
    ctx->pc = 0x2055ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2055E8u;
            // 0x2055ec: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2055F0u; }
        if (ctx->pc != 0x2055F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2055F0u; }
        if (ctx->pc != 0x2055F0u) { return; }
    }
    ctx->pc = 0x2055F0u;
label_2055f0:
    // 0x2055f0: 0xc6820128  lwc1        $f2, 0x128($s4)
    ctx->pc = 0x2055f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2055f4:
    // 0x2055f4: 0x3c02413b  lui         $v0, 0x413B
    ctx->pc = 0x2055f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16699 << 16));
label_2055f8:
    // 0x2055f8: 0x3443bbbc  ori         $v1, $v0, 0xBBBC
    ctx->pc = 0x2055f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48060);
label_2055fc:
    // 0x2055fc: 0x92850eb5  lbu         $a1, 0xEB5($s4)
    ctx->pc = 0x2055fcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3765)));
label_205600:
    // 0x205600: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x205600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205604:
    // 0x205604: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x205604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
label_205608:
    // 0x205608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20560c:
    // 0x20560c: 0x26840260  addiu       $a0, $s4, 0x260
    ctx->pc = 0x20560cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 608));
label_205610:
    // 0x205610: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x205610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_205614:
    // 0x205614: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x205614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_205618:
    // 0x205618: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x205618u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_20561c:
    // 0x20561c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x20561cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_205620:
    // 0x205620: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x205620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_205624:
    // 0x205624: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x205624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_205628:
    // 0x205628: 0xc094514  jal         func_251450
label_20562c:
    if (ctx->pc == 0x20562Cu) {
        ctx->pc = 0x20562Cu;
            // 0x20562c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x205630u;
        goto label_205630;
    }
    ctx->pc = 0x205628u;
    SET_GPR_U32(ctx, 31, 0x205630u);
    ctx->pc = 0x20562Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205628u;
            // 0x20562c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205630u; }
        if (ctx->pc != 0x205630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205630u; }
        if (ctx->pc != 0x205630u) { return; }
    }
    ctx->pc = 0x205630u;
label_205630:
    // 0x205630: 0xa2800eb5  sb          $zero, 0xEB5($s4)
    ctx->pc = 0x205630u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3765), (uint8_t)GPR_U32(ctx, 0));
label_205634:
    // 0x205634: 0x8e840ec4  lw          $a0, 0xEC4($s4)
    ctx->pc = 0x205634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3780)));
label_205638:
    // 0x205638: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
label_20563c:
    if (ctx->pc == 0x20563Cu) {
        ctx->pc = 0x205640u;
        goto label_205640;
    }
    ctx->pc = 0x205638u;
    {
        const bool branch_taken_0x205638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x205638) {
            ctx->pc = 0x2056A4u;
            goto label_2056a4;
        }
    }
    ctx->pc = 0x205640u;
label_205640:
    // 0x205640: 0x8e820ec8  lw          $v0, 0xEC8($s4)
    ctx->pc = 0x205640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3784)));
label_205644:
    // 0x205644: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_205648:
    if (ctx->pc == 0x205648u) {
        ctx->pc = 0x20564Cu;
        goto label_20564c;
    }
    ctx->pc = 0x205644u;
    {
        const bool branch_taken_0x205644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205644) {
            ctx->pc = 0x2056A4u;
            goto label_2056a4;
        }
    }
    ctx->pc = 0x20564Cu;
label_20564c:
    // 0x20564c: 0x8e820ecc  lw          $v0, 0xECC($s4)
    ctx->pc = 0x20564cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3788)));
label_205650:
    // 0x205650: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_205654:
    if (ctx->pc == 0x205654u) {
        ctx->pc = 0x205658u;
        goto label_205658;
    }
    ctx->pc = 0x205650u;
    {
        const bool branch_taken_0x205650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205650) {
            ctx->pc = 0x2056A4u;
            goto label_2056a4;
        }
    }
    ctx->pc = 0x205658u;
label_205658:
    // 0x205658: 0xc6810260  lwc1        $f1, 0x260($s4)
    ctx->pc = 0x205658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20565c:
    // 0x20565c: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x20565cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_205660:
    // 0x205660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205664:
    // 0x205664: 0x3c0241b9  lui         $v0, 0x41B9
    ctx->pc = 0x205664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16825 << 16));
label_205668:
    // 0x205668: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x205668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_20566c:
    // 0x20566c: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x20566cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_205670:
    // 0x205670: 0x8e840ec4  lw          $a0, 0xEC4($s4)
    ctx->pc = 0x205670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3780)));
label_205674:
    // 0x205674: 0x8e820ec8  lw          $v0, 0xEC8($s4)
    ctx->pc = 0x205674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3784)));
label_205678:
    // 0x205678: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x205678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20567c:
    // 0x20567c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20567cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_205680:
    // 0x205680: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x205680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_205684:
    // 0x205684: 0x8e820ec8  lw          $v0, 0xEC8($s4)
    ctx->pc = 0x205684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3784)));
label_205688:
    // 0x205688: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x205688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_20568c:
    // 0x20568c: 0x8e830ec8  lw          $v1, 0xEC8($s4)
    ctx->pc = 0x20568cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3784)));
label_205690:
    // 0x205690: 0x8e820ecc  lw          $v0, 0xECC($s4)
    ctx->pc = 0x205690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3788)));
label_205694:
    // 0x205694: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x205694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205698:
    // 0x205698: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x205698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20569c:
    // 0x20569c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20569cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2056a0:
    // 0x2056a0: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2056a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_2056a4:
    // 0x2056a4: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x2056a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_2056a8:
    // 0x2056a8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2056a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2056ac:
    // 0x2056ac: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2056b0:
    if (ctx->pc == 0x2056B0u) {
        ctx->pc = 0x2056B4u;
        goto label_2056b4;
    }
    ctx->pc = 0x2056ACu;
    {
        const bool branch_taken_0x2056ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2056ac) {
            ctx->pc = 0x2056C0u;
            goto label_2056c0;
        }
    }
    ctx->pc = 0x2056B4u;
label_2056b4:
    // 0x2056b4: 0x8282064c  lb          $v0, 0x64C($s4)
    ctx->pc = 0x2056b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1612)));
label_2056b8:
    // 0x2056b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2056b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2056bc:
    // 0x2056bc: 0xa282064c  sb          $v0, 0x64C($s4)
    ctx->pc = 0x2056bcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1612), (uint8_t)GPR_U32(ctx, 2));
label_2056c0:
    // 0x2056c0: 0x8282064c  lb          $v0, 0x64C($s4)
    ctx->pc = 0x2056c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1612)));
label_2056c4:
    // 0x2056c4: 0x2842003c  slti        $v0, $v0, 0x3C
    ctx->pc = 0x2056c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)60) ? 1 : 0);
label_2056c8:
    // 0x2056c8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2056cc:
    if (ctx->pc == 0x2056CCu) {
        ctx->pc = 0x2056D0u;
        goto label_2056d0;
    }
    ctx->pc = 0x2056C8u;
    {
        const bool branch_taken_0x2056c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2056c8) {
            ctx->pc = 0x2056D4u;
            goto label_2056d4;
        }
    }
    ctx->pc = 0x2056D0u;
label_2056d0:
    // 0x2056d0: 0xa280064c  sb          $zero, 0x64C($s4)
    ctx->pc = 0x2056d0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1612), (uint8_t)GPR_U32(ctx, 0));
label_2056d4:
    // 0x2056d4: 0x8e820ed4  lw          $v0, 0xED4($s4)
    ctx->pc = 0x2056d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3796)));
label_2056d8:
    // 0x2056d8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2056dc:
    if (ctx->pc == 0x2056DCu) {
        ctx->pc = 0x2056E0u;
        goto label_2056e0;
    }
    ctx->pc = 0x2056D8u;
    {
        const bool branch_taken_0x2056d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2056d8) {
            ctx->pc = 0x205734u;
            goto label_205734;
        }
    }
    ctx->pc = 0x2056E0u;
label_2056e0:
    // 0x2056e0: 0x8e820ed0  lw          $v0, 0xED0($s4)
    ctx->pc = 0x2056e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3792)));
label_2056e4:
    // 0x2056e4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2056e8:
    if (ctx->pc == 0x2056E8u) {
        ctx->pc = 0x2056ECu;
        goto label_2056ec;
    }
    ctx->pc = 0x2056E4u;
    {
        const bool branch_taken_0x2056e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2056e4) {
            ctx->pc = 0x205734u;
            goto label_205734;
        }
    }
    ctx->pc = 0x2056ECu;
label_2056ec:
    // 0x2056ec: 0x8283064c  lb          $v1, 0x64C($s4)
    ctx->pc = 0x2056ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1612)));
label_2056f0:
    // 0x2056f0: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x2056f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
label_2056f4:
    // 0x2056f4: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2056f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_2056f8:
    // 0x2056f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2056f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2056fc:
    // 0x2056fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2056fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205700:
    // 0x205700: 0x0  nop
    ctx->pc = 0x205700u;
    // NOP
label_205704:
    // 0x205704: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x205704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_205708:
    // 0x205708: 0xc047a42  jal         func_11E908
label_20570c:
    if (ctx->pc == 0x20570Cu) {
        ctx->pc = 0x20570Cu;
            // 0x20570c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x205710u;
        goto label_205710;
    }
    ctx->pc = 0x205708u;
    SET_GPR_U32(ctx, 31, 0x205710u);
    ctx->pc = 0x20570Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205708u;
            // 0x20570c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205710u; }
        if (ctx->pc != 0x205710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205710u; }
        if (ctx->pc != 0x205710u) { return; }
    }
    ctx->pc = 0x205710u;
label_205710:
    // 0x205710: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x205710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_205714:
    // 0x205714: 0x8e830ed4  lw          $v1, 0xED4($s4)
    ctx->pc = 0x205714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3796)));
label_205718:
    // 0x205718: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x205718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20571c:
    // 0x20571c: 0x0  nop
    ctx->pc = 0x20571cu;
    // NOP
label_205720:
    // 0x205720: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x205720u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_205724:
    // 0x205724: 0x8e820ed0  lw          $v0, 0xED0($s4)
    ctx->pc = 0x205724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3792)));
label_205728:
    // 0x205728: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x205728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20572c:
    // 0x20572c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20572cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_205730:
    // 0x205730: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x205730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_205734:
    // 0x205734: 0xc07fb90  jal         func_1FEE40
label_205738:
    if (ctx->pc == 0x205738u) {
        ctx->pc = 0x205738u;
            // 0x205738: 0x8f8490d4  lw          $a0, -0x6F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
        ctx->pc = 0x20573Cu;
        goto label_20573c;
    }
    ctx->pc = 0x205734u;
    SET_GPR_U32(ctx, 31, 0x20573Cu);
    ctx->pc = 0x205738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205734u;
            // 0x205738: 0x8f8490d4  lw          $a0, -0x6F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEE40u;
    if (runtime->hasFunction(0x1FEE40u)) {
        auto targetFn = runtime->lookupFunction(0x1FEE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20573Cu; }
        if (ctx->pc != 0x20573Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowHavePictureNum__15CInventUserDataFv_0x1fee40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20573Cu; }
        if (ctx->pc != 0x20573Cu) { return; }
    }
    ctx->pc = 0x20573Cu;
label_20573c:
    // 0x20573c: 0x8e840ec0  lw          $a0, 0xEC0($s4)
    ctx->pc = 0x20573cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3776)));
label_205740:
    // 0x205740: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x205740u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_205744:
    // 0x205744: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x205744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205748:
    // 0x205748: 0xc089728  jal         func_225CA0
label_20574c:
    if (ctx->pc == 0x20574Cu) {
        ctx->pc = 0x20574Cu;
            // 0x20574c: 0x24a597b8  addiu       $a1, $a1, -0x6848 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940600));
        ctx->pc = 0x205750u;
        goto label_205750;
    }
    ctx->pc = 0x205748u;
    SET_GPR_U32(ctx, 31, 0x205750u);
    ctx->pc = 0x20574Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205748u;
            // 0x20574c: 0x24a597b8  addiu       $a1, $a1, -0x6848 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205750u; }
        if (ctx->pc != 0x205750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205750u; }
        if (ctx->pc != 0x205750u) { return; }
    }
    ctx->pc = 0x205750u;
label_205750:
    // 0x205750: 0x8e840ee8  lw          $a0, 0xEE8($s4)
    ctx->pc = 0x205750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3816)));
label_205754:
    // 0x205754: 0x10800067  beqz        $a0, . + 4 + (0x67 << 2)
label_205758:
    if (ctx->pc == 0x205758u) {
        ctx->pc = 0x20575Cu;
        goto label_20575c;
    }
    ctx->pc = 0x205754u;
    {
        const bool branch_taken_0x205754 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x205754) {
            ctx->pc = 0x2058F4u;
            goto label_2058f4;
        }
    }
    ctx->pc = 0x20575Cu;
label_20575c:
    // 0x20575c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x20575cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_205760:
    // 0x205760: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
label_205764:
    if (ctx->pc == 0x205764u) {
        ctx->pc = 0x205764u;
            // 0x205764: 0x27b0011c  addiu       $s0, $sp, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
        ctx->pc = 0x205768u;
        goto label_205768;
    }
    ctx->pc = 0x205760u;
    {
        const bool branch_taken_0x205760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205760u;
            // 0x205764: 0x27b0011c  addiu       $s0, $sp, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205760) {
            ctx->pc = 0x2058F4u;
            goto label_2058f4;
        }
    }
    ctx->pc = 0x205768u;
label_205768:
    // 0x205768: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x205768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_20576c:
    // 0x20576c: 0x24a597c0  addiu       $a1, $a1, -0x6840
    ctx->pc = 0x20576cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940608));
label_205770:
    // 0x205770: 0x27a60118  addiu       $a2, $sp, 0x118
    ctx->pc = 0x205770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_205774:
    // 0x205774: 0xc08974c  jal         func_225D30
label_205778:
    if (ctx->pc == 0x205778u) {
        ctx->pc = 0x205778u;
            // 0x205778: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20577Cu;
        goto label_20577c;
    }
    ctx->pc = 0x205774u;
    SET_GPR_U32(ctx, 31, 0x20577Cu);
    ctx->pc = 0x205778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205774u;
            // 0x205778: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20577Cu; }
        if (ctx->pc != 0x20577Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20577Cu; }
        if (ctx->pc != 0x20577Cu) { return; }
    }
    ctx->pc = 0x20577Cu;
label_20577c:
    // 0x20577c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x20577cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_205780:
    // 0x205780: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x205780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_205784:
    // 0x205784: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x205784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_205788:
    // 0x205788: 0x26840254  addiu       $a0, $s4, 0x254
    ctx->pc = 0x205788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 596));
label_20578c:
    // 0x20578c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20578cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_205790:
    // 0x205790: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x205790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_205794:
    // 0x205794: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x205794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_205798:
    // 0x205798: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20579c:
    // 0x20579c: 0x0  nop
    ctx->pc = 0x20579cu;
    // NOP
label_2057a0:
    // 0x2057a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2057a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2057a4:
    // 0x2057a4: 0xe6800250  swc1        $f0, 0x250($s4)
    ctx->pc = 0x2057a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 592), bits); }
label_2057a8:
    // 0x2057a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2057a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2057ac:
    // 0x2057ac: 0x8e830130  lw          $v1, 0x130($s4)
    ctx->pc = 0x2057acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
label_2057b0:
    // 0x2057b0: 0x9285024d  lbu         $a1, 0x24D($s4)
    ctx->pc = 0x2057b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 589)));
label_2057b4:
    // 0x2057b4: 0x2446fffe  addiu       $a2, $v0, -0x2
    ctx->pc = 0x2057b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_2057b8:
    // 0x2057b8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2057b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2057bc:
    // 0x2057bc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2057bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2057c0:
    // 0x2057c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2057c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2057c4:
    // 0x2057c4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2057c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2057c8:
    // 0x2057c8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2057c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2057cc:
    // 0x2057cc: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x2057ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2057d0:
    // 0x2057d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2057d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2057d4:
    // 0x2057d4: 0xc094514  jal         func_251450
label_2057d8:
    if (ctx->pc == 0x2057D8u) {
        ctx->pc = 0x2057D8u;
            // 0x2057d8: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2057DCu;
        goto label_2057dc;
    }
    ctx->pc = 0x2057D4u;
    SET_GPR_U32(ctx, 31, 0x2057DCu);
    ctx->pc = 0x2057D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2057D4u;
            // 0x2057d8: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2057DCu; }
        if (ctx->pc != 0x2057DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2057DCu; }
        if (ctx->pc != 0x2057DCu) { return; }
    }
    ctx->pc = 0x2057DCu;
label_2057dc:
    // 0x2057dc: 0x8e840ee8  lw          $a0, 0xEE8($s4)
    ctx->pc = 0x2057dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3816)));
label_2057e0:
    // 0x2057e0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2057e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2057e4:
    // 0x2057e4: 0xc089664  jal         func_225990
label_2057e8:
    if (ctx->pc == 0x2057E8u) {
        ctx->pc = 0x2057E8u;
            // 0x2057e8: 0x24a597c8  addiu       $a1, $a1, -0x6838 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940616));
        ctx->pc = 0x2057ECu;
        goto label_2057ec;
    }
    ctx->pc = 0x2057E4u;
    SET_GPR_U32(ctx, 31, 0x2057ECu);
    ctx->pc = 0x2057E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2057E4u;
            // 0x2057e8: 0x24a597c8  addiu       $a1, $a1, -0x6838 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2057ECu; }
        if (ctx->pc != 0x2057ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2057ECu; }
        if (ctx->pc != 0x2057ECu) { return; }
    }
    ctx->pc = 0x2057ECu;
label_2057ec:
    // 0x2057ec: 0x8e840ee8  lw          $a0, 0xEE8($s4)
    ctx->pc = 0x2057ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3816)));
label_2057f0:
    // 0x2057f0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2057f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2057f4:
    // 0x2057f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2057f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2057f8:
    // 0x2057f8: 0xc089664  jal         func_225990
label_2057fc:
    if (ctx->pc == 0x2057FCu) {
        ctx->pc = 0x2057FCu;
            // 0x2057fc: 0x24a597d0  addiu       $a1, $a1, -0x6830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940624));
        ctx->pc = 0x205800u;
        goto label_205800;
    }
    ctx->pc = 0x2057F8u;
    SET_GPR_U32(ctx, 31, 0x205800u);
    ctx->pc = 0x2057FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2057F8u;
            // 0x2057fc: 0x24a597d0  addiu       $a1, $a1, -0x6830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205800u; }
        if (ctx->pc != 0x205800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205800u; }
        if (ctx->pc != 0x205800u) { return; }
    }
    ctx->pc = 0x205800u;
label_205800:
    // 0x205800: 0x1200003b  beqz        $s0, . + 4 + (0x3B << 2)
label_205804:
    if (ctx->pc == 0x205804u) {
        ctx->pc = 0x205804u;
            // 0x205804: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x205808u;
        goto label_205808;
    }
    ctx->pc = 0x205800u;
    {
        const bool branch_taken_0x205800 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x205804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205800u;
            // 0x205804: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205800) {
            ctx->pc = 0x2058F0u;
            goto label_2058f0;
        }
    }
    ctx->pc = 0x205808u;
label_205808:
    // 0x205808: 0x12200039  beqz        $s1, . + 4 + (0x39 << 2)
label_20580c:
    if (ctx->pc == 0x20580Cu) {
        ctx->pc = 0x205810u;
        goto label_205810;
    }
    ctx->pc = 0x205808u;
    {
        const bool branch_taken_0x205808 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x205808) {
            ctx->pc = 0x2058F0u;
            goto label_2058f0;
        }
    }
    ctx->pc = 0x205810u;
label_205810:
    // 0x205810: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x205810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205814:
    // 0x205814: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x205814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_205818:
    // 0x205818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20581c:
    // 0x20581c: 0x27a4014c  addiu       $a0, $sp, 0x14C
    ctx->pc = 0x20581cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_205820:
    // 0x205820: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x205820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_205824:
    // 0x205824: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x205824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_205828:
    // 0x205828: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x205828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20582c:
    // 0x20582c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20582cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_205830:
    // 0x205830: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x205830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_205834:
    // 0x205834: 0xe62000ac  swc1        $f0, 0xAC($s1)
    ctx->pc = 0x205834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 172), bits); }
label_205838:
    // 0x205838: 0xe6200064  swc1        $f0, 0x64($s1)
    ctx->pc = 0x205838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
label_20583c:
    // 0x20583c: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x20583cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_205840:
    // 0x205840: 0xc6270028  lwc1        $f7, 0x28($s1)
    ctx->pc = 0x205840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_205844:
    // 0x205844: 0xc6260070  lwc1        $f6, 0x70($s1)
    ctx->pc = 0x205844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_205848:
    // 0x205848: 0xc62500b8  lwc1        $f5, 0xB8($s1)
    ctx->pc = 0x205848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_20584c:
    // 0x20584c: 0xc6040070  lwc1        $f4, 0x70($s0)
    ctx->pc = 0x20584cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_205850:
    // 0x205850: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x205850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205854:
    // 0x205854: 0xc6820130  lwc1        $f2, 0x130($s4)
    ctx->pc = 0x205854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_205858:
    // 0x205858: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x205858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20585c:
    // 0x20585c: 0x46063980  add.s       $f6, $f7, $f6
    ctx->pc = 0x20585cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
label_205860:
    // 0x205860: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x205860u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
label_205864:
    // 0x205864: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x205864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_205868:
    // 0x205868: 0x46046800  add.s       $f0, $f13, $f4
    ctx->pc = 0x205868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[4]);
label_20586c:
    // 0x20586c: 0x9285024d  lbu         $a1, 0x24D($s4)
    ctx->pc = 0x20586cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 589)));
label_205870:
    // 0x205870: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x205870u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_205874:
    // 0x205874: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x205874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_205878:
    // 0x205878: 0x0  nop
    ctx->pc = 0x205878u;
    // NOP
label_20587c:
    // 0x20587c: 0x460300c3  div.s       $f3, $f0, $f3
    ctx->pc = 0x20587cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
label_205880:
    // 0x205880: 0x46801020  cvt.s.w     $f0, $f2
    ctx->pc = 0x205880u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_205884:
    // 0x205884: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x205884u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_205888:
    // 0x205888: 0x46016800  add.s       $f0, $f13, $f1
    ctx->pc = 0x205888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
label_20588c:
    // 0x20588c: 0xc094514  jal         func_251450
label_205890:
    if (ctx->pc == 0x205890u) {
        ctx->pc = 0x205890u;
            // 0x205890: 0x46020300  add.s       $f12, $f0, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x205894u;
        goto label_205894;
    }
    ctx->pc = 0x20588Cu;
    SET_GPR_U32(ctx, 31, 0x205894u);
    ctx->pc = 0x205890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20588Cu;
            // 0x205890: 0x46020300  add.s       $f12, $f0, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205894u; }
        if (ctx->pc != 0x205894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205894u; }
        if (ctx->pc != 0x205894u) { return; }
    }
    ctx->pc = 0x205894u;
label_205894:
    // 0x205894: 0xc6250028  lwc1        $f5, 0x28($s1)
    ctx->pc = 0x205894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_205898:
    // 0x205898: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x205898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_20589c:
    // 0x20589c: 0xc6200070  lwc1        $f0, 0x70($s1)
    ctx->pc = 0x20589cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2058a0:
    // 0x2058a0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2058a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2058a4:
    // 0x2058a4: 0xc62600b8  lwc1        $f6, 0xB8($s1)
    ctx->pc = 0x2058a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2058a8:
    // 0x2058a8: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2058a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_2058ac:
    // 0x2058ac: 0xc7a1014c  lwc1        $f1, 0x14C($sp)
    ctx->pc = 0x2058acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2058b0:
    // 0x2058b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2058b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2058b4:
    // 0x2058b4: 0x46002900  add.s       $f4, $f5, $f0
    ctx->pc = 0x2058b4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_2058b8:
    // 0x2058b8: 0x46043100  add.s       $f4, $f6, $f4
    ctx->pc = 0x2058b8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
label_2058bc:
    // 0x2058bc: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x2058bcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
label_2058c0:
    // 0x2058c0: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x2058c0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
label_2058c4:
    // 0x2058c4: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2058c4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_2058c8:
    // 0x2058c8: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x2058c8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
label_2058cc:
    // 0x2058cc: 0xe6210020  swc1        $f1, 0x20($s1)
    ctx->pc = 0x2058ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_2058d0:
    // 0x2058d0: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x2058d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2058d4:
    // 0x2058d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2058d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2058d8:
    // 0x2058d8: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x2058d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
label_2058dc:
    // 0x2058dc: 0xe6220070  swc1        $f2, 0x70($s1)
    ctx->pc = 0x2058dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
label_2058e0:
    // 0x2058e0: 0xc6210068  lwc1        $f1, 0x68($s1)
    ctx->pc = 0x2058e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2058e4:
    // 0x2058e4: 0xc6200070  lwc1        $f0, 0x70($s1)
    ctx->pc = 0x2058e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2058e8:
    // 0x2058e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2058e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2058ec:
    // 0x2058ec: 0xe62000b0  swc1        $f0, 0xB0($s1)
    ctx->pc = 0x2058ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
label_2058f0:
    // 0x2058f0: 0xa280024d  sb          $zero, 0x24D($s4)
    ctx->pc = 0x2058f0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 589), (uint8_t)GPR_U32(ctx, 0));
label_2058f4:
    // 0x2058f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2058f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2058f8:
    // 0x2058f8: 0xc08109c  jal         func_204270
label_2058fc:
    if (ctx->pc == 0x2058FCu) {
        ctx->pc = 0x2058FCu;
            // 0x2058fc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x205900u;
        goto label_205900;
    }
    ctx->pc = 0x2058F8u;
    SET_GPR_U32(ctx, 31, 0x205900u);
    ctx->pc = 0x2058FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2058F8u;
            // 0x2058fc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204270u;
    if (runtime->hasFunction(0x204270u)) {
        auto targetFn = runtime->lookupFunction(0x204270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205900u; }
        if (ctx->pc != 0x205900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMakeBrd__11CMenuInventFi_0x204270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205900u; }
        if (ctx->pc != 0x205900u) { return; }
    }
    ctx->pc = 0x205900u;
label_205900:
    // 0x205900: 0x8e920edc  lw          $s2, 0xEDC($s4)
    ctx->pc = 0x205900u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3804)));
label_205904:
    // 0x205904: 0x1240007d  beqz        $s2, . + 4 + (0x7D << 2)
label_205908:
    if (ctx->pc == 0x205908u) {
        ctx->pc = 0x20590Cu;
        goto label_20590c;
    }
    ctx->pc = 0x205904u;
    {
        const bool branch_taken_0x205904 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x205904) {
            ctx->pc = 0x205AFCu;
            goto label_205afc;
        }
    }
    ctx->pc = 0x20590Cu;
label_20590c:
    // 0x20590c: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x20590cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_205910:
    // 0x205910: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
label_205914:
    if (ctx->pc == 0x205914u) {
        ctx->pc = 0x205918u;
        goto label_205918;
    }
    ctx->pc = 0x205910u;
    {
        const bool branch_taken_0x205910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205910) {
            ctx->pc = 0x205AFCu;
            goto label_205afc;
        }
    }
    ctx->pc = 0x205918u;
label_205918:
    // 0x205918: 0x92820eb4  lbu         $v0, 0xEB4($s4)
    ctx->pc = 0x205918u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3764)));
label_20591c:
    // 0x20591c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_205920:
    if (ctx->pc == 0x205920u) {
        ctx->pc = 0x205920u;
            // 0x205920: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x205924u;
        goto label_205924;
    }
    ctx->pc = 0x20591Cu;
    {
        const bool branch_taken_0x20591c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20591Cu;
            // 0x205920: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20591c) {
            ctx->pc = 0x20592Cu;
            goto label_20592c;
        }
    }
    ctx->pc = 0x205924u;
label_205924:
    // 0x205924: 0xa2800eb4  sb          $zero, 0xEB4($s4)
    ctx->pc = 0x205924u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3764), (uint8_t)GPR_U32(ctx, 0));
label_205928:
    // 0x205928: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x205928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20592c:
    // 0x20592c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x20592cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_205930:
    // 0x205930: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x205930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_205934:
    // 0x205934: 0xc08ab90  jal         func_22AE40
label_205938:
    if (ctx->pc == 0x205938u) {
        ctx->pc = 0x205938u;
            // 0x205938: 0x24a597e0  addiu       $a1, $a1, -0x6820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940640));
        ctx->pc = 0x20593Cu;
        goto label_20593c;
    }
    ctx->pc = 0x205934u;
    SET_GPR_U32(ctx, 31, 0x20593Cu);
    ctx->pc = 0x205938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205934u;
            // 0x205938: 0x24a597e0  addiu       $a1, $a1, -0x6820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20593Cu; }
        if (ctx->pc != 0x20593Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20593Cu; }
        if (ctx->pc != 0x20593Cu) { return; }
    }
    ctx->pc = 0x20593Cu;
label_20593c:
    // 0x20593c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x20593cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205940:
    // 0x205940: 0x27b10124  addiu       $s1, $sp, 0x124
    ctx->pc = 0x205940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_205944:
    // 0x205944: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x205944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_205948:
    // 0x205948: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x205948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20594c:
    // 0x20594c: 0x24a597f8  addiu       $a1, $a1, -0x6808
    ctx->pc = 0x20594cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940664));
label_205950:
    // 0x205950: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x205950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_205954:
    // 0x205954: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x205954u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_205958:
    // 0x205958: 0xc08974c  jal         func_225D30
label_20595c:
    if (ctx->pc == 0x20595Cu) {
        ctx->pc = 0x20595Cu;
            // 0x20595c: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->pc = 0x205960u;
        goto label_205960;
    }
    ctx->pc = 0x205958u;
    SET_GPR_U32(ctx, 31, 0x205960u);
    ctx->pc = 0x20595Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205958u;
            // 0x20595c: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205960u; }
        if (ctx->pc != 0x205960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205960u; }
        if (ctx->pc != 0x205960u) { return; }
    }
    ctx->pc = 0x205960u;
label_205960:
    // 0x205960: 0x27b6012c  addiu       $s6, $sp, 0x12C
    ctx->pc = 0x205960u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
label_205964:
    // 0x205964: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x205964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_205968:
    // 0x205968: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x205968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20596c:
    // 0x20596c: 0x24a59808  addiu       $a1, $a1, -0x67F8
    ctx->pc = 0x20596cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940680));
label_205970:
    // 0x205970: 0x27a60128  addiu       $a2, $sp, 0x128
    ctx->pc = 0x205970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_205974:
    // 0x205974: 0xc08974c  jal         func_225D30
label_205978:
    if (ctx->pc == 0x205978u) {
        ctx->pc = 0x205978u;
            // 0x205978: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20597Cu;
        goto label_20597c;
    }
    ctx->pc = 0x205974u;
    SET_GPR_U32(ctx, 31, 0x20597Cu);
    ctx->pc = 0x205978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205974u;
            // 0x205978: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20597Cu; }
        if (ctx->pc != 0x20597Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20597Cu; }
        if (ctx->pc != 0x20597Cu) { return; }
    }
    ctx->pc = 0x20597Cu;
label_20597c:
    // 0x20597c: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x20597cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205980:
    // 0x205980: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x205980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_205984:
    // 0x205984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205988:
    // 0x205988: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x205988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_20598c:
    // 0x20598c: 0x8e840ee0  lw          $a0, 0xEE0($s4)
    ctx->pc = 0x20598cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3808)));
label_205990:
    // 0x205990: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x205990u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_205994:
    // 0x205994: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x205994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_205998:
    // 0x205998: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x205998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20599c:
    // 0x20599c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x20599cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2059a0:
    // 0x2059a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2059a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2059a4:
    // 0x2059a4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2059a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_2059a8:
    // 0x2059a8: 0x8e870118  lw          $a3, 0x118($s4)
    ctx->pc = 0x2059a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
label_2059ac:
    // 0x2059ac: 0x8e820ee0  lw          $v0, 0xEE0($s4)
    ctx->pc = 0x2059acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3808)));
label_2059b0:
    // 0x2059b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2059b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2059b4:
    // 0x2059b4: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x2059b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2059b8:
    // 0x2059b8: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x2059b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_2059bc:
    // 0x2059bc: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2059bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2059c0:
    // 0x2059c0: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x2059c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2059c4:
    // 0x2059c4: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2059c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2059c8:
    // 0x2059c8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2059c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2059cc:
    // 0x2059cc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2059ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2059d0:
    // 0x2059d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2059d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2059d4:
    // 0x2059d4: 0xc094514  jal         func_251450
label_2059d8:
    if (ctx->pc == 0x2059D8u) {
        ctx->pc = 0x2059D8u;
            // 0x2059d8: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2059DCu;
        goto label_2059dc;
    }
    ctx->pc = 0x2059D4u;
    SET_GPR_U32(ctx, 31, 0x2059DCu);
    ctx->pc = 0x2059D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2059D4u;
            // 0x2059d8: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2059DCu; }
        if (ctx->pc != 0x2059DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2059DCu; }
        if (ctx->pc != 0x2059DCu) { return; }
    }
    ctx->pc = 0x2059DCu;
label_2059dc:
    // 0x2059dc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2059dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2059e0:
    // 0x2059e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2059e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2059e4:
    // 0x2059e4: 0xc089664  jal         func_225990
label_2059e8:
    if (ctx->pc == 0x2059E8u) {
        ctx->pc = 0x2059E8u;
            // 0x2059e8: 0x24a59810  addiu       $a1, $a1, -0x67F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940688));
        ctx->pc = 0x2059ECu;
        goto label_2059ec;
    }
    ctx->pc = 0x2059E4u;
    SET_GPR_U32(ctx, 31, 0x2059ECu);
    ctx->pc = 0x2059E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2059E4u;
            // 0x2059e8: 0x24a59810  addiu       $a1, $a1, -0x67F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2059ECu; }
        if (ctx->pc != 0x2059ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2059ECu; }
        if (ctx->pc != 0x2059ECu) { return; }
    }
    ctx->pc = 0x2059ECu;
label_2059ec:
    // 0x2059ec: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2059ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2059f0:
    // 0x2059f0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2059f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2059f4:
    // 0x2059f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2059f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2059f8:
    // 0x2059f8: 0xc089664  jal         func_225990
label_2059fc:
    if (ctx->pc == 0x2059FCu) {
        ctx->pc = 0x2059FCu;
            // 0x2059fc: 0x24a590e8  addiu       $a1, $a1, -0x6F18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938856));
        ctx->pc = 0x205A00u;
        goto label_205a00;
    }
    ctx->pc = 0x2059F8u;
    SET_GPR_U32(ctx, 31, 0x205A00u);
    ctx->pc = 0x2059FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2059F8u;
            // 0x2059fc: 0x24a590e8  addiu       $a1, $a1, -0x6F18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205A00u; }
        if (ctx->pc != 0x205A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205A00u; }
        if (ctx->pc != 0x205A00u) { return; }
    }
    ctx->pc = 0x205A00u;
label_205a00:
    // 0x205a00: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x205a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_205a04:
    // 0x205a04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x205a04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205a08:
    // 0x205a08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x205a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_205a0c:
    // 0x205a0c: 0xc089664  jal         func_225990
label_205a10:
    if (ctx->pc == 0x205A10u) {
        ctx->pc = 0x205A10u;
            // 0x205a10: 0x24a590f0  addiu       $a1, $a1, -0x6F10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938864));
        ctx->pc = 0x205A14u;
        goto label_205a14;
    }
    ctx->pc = 0x205A0Cu;
    SET_GPR_U32(ctx, 31, 0x205A14u);
    ctx->pc = 0x205A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205A0Cu;
            // 0x205a10: 0x24a590f0  addiu       $a1, $a1, -0x6F10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205A14u; }
        if (ctx->pc != 0x205A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205A14u; }
        if (ctx->pc != 0x205A14u) { return; }
    }
    ctx->pc = 0x205A14u;
label_205a14:
    // 0x205a14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x205a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_205a18:
    // 0x205a18: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x205a18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_205a1c:
    // 0x205a1c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x205a1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205a20:
    // 0x205a20: 0xc089664  jal         func_225990
label_205a24:
    if (ctx->pc == 0x205A24u) {
        ctx->pc = 0x205A24u;
            // 0x205a24: 0x24a590f8  addiu       $a1, $a1, -0x6F08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938872));
        ctx->pc = 0x205A28u;
        goto label_205a28;
    }
    ctx->pc = 0x205A20u;
    SET_GPR_U32(ctx, 31, 0x205A28u);
    ctx->pc = 0x205A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205A20u;
            // 0x205a24: 0x24a590f8  addiu       $a1, $a1, -0x6F08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205A28u; }
        if (ctx->pc != 0x205A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205A28u; }
        if (ctx->pc != 0x205A28u) { return; }
    }
    ctx->pc = 0x205A28u;
label_205a28:
    // 0x205a28: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x205a28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205a2c:
    // 0x205a2c: 0xc081108  jal         func_204420
label_205a30:
    if (ctx->pc == 0x205A30u) {
        ctx->pc = 0x205A30u;
            // 0x205a30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x205A34u;
        goto label_205a34;
    }
    ctx->pc = 0x205A2Cu;
    SET_GPR_U32(ctx, 31, 0x205A34u);
    ctx->pc = 0x205A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205A2Cu;
            // 0x205a30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204420u;
    if (runtime->hasFunction(0x204420u)) {
        auto targetFn = runtime->lookupFunction(0x204420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205A34u; }
        if (ctx->pc != 0x205A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableSelectMaxCardList__11CMenuInventFv_0x204420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205A34u; }
        if (ctx->pc != 0x205A34u) { return; }
    }
    ctx->pc = 0x205A34u;
label_205a34:
    // 0x205a34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x205a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205a38:
    // 0x205a38: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x205a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_205a3c:
    // 0x205a3c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x205a3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_205a40:
    // 0x205a40: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x205a40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_205a44:
    // 0x205a44: 0x2443fffb  addiu       $v1, $v0, -0x5
    ctx->pc = 0x205a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
label_205a48:
    // 0x205a48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x205a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_205a4c:
    // 0x205a4c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x205a4cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_205a50:
    // 0x205a50: 0xc6c30000  lwc1        $f3, 0x0($s6)
    ctx->pc = 0x205a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_205a54:
    // 0x205a54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x205a54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205a58:
    // 0x205a58: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x205a58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_205a5c:
    // 0x205a5c: 0x468018a0  cvt.s.w     $f2, $f3
    ctx->pc = 0x205a5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_205a60:
    // 0x205a60: 0x460110c2  mul.s       $f3, $f2, $f1
    ctx->pc = 0x205a60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_205a64:
    // 0x205a64: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x205a64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_205a68:
    // 0x205a68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205a6c:
    // 0x205a6c: 0x0  nop
    ctx->pc = 0x205a6cu;
    // NOP
label_205a70:
    // 0x205a70: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x205a70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205a74:
    // 0x205a74: 0x0  nop
    ctx->pc = 0x205a74u;
    // NOP
label_205a78:
    // 0x205a78: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_205a7c:
    if (ctx->pc == 0x205A7Cu) {
        ctx->pc = 0x205A7Cu;
            // 0x205a7c: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
        ctx->pc = 0x205A80u;
        goto label_205a80;
    }
    ctx->pc = 0x205A78u;
    {
        const bool branch_taken_0x205a78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x205A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205A78u;
            // 0x205a7c: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205a78) {
            ctx->pc = 0x205A88u;
            goto label_205a88;
        }
    }
    ctx->pc = 0x205A80u;
label_205a80:
    // 0x205a80: 0x0  nop
    ctx->pc = 0x205a80u;
    // NOP
label_205a84:
    // 0x205a84: 0x46010103  div.s       $f4, $f0, $f1
    ctx->pc = 0x205a84u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_205a88:
    // 0x205a88: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x205a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_205a8c:
    // 0x205a8c: 0xc6610028  lwc1        $f1, 0x28($s3)
    ctx->pc = 0x205a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205a90:
    // 0x205a90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x205a90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205a94:
    // 0x205a94: 0x0  nop
    ctx->pc = 0x205a94u;
    // NOP
label_205a98:
    // 0x205a98: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x205a98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_205a9c:
    // 0x205a9c: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x205a9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_205aa0:
    // 0x205aa0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x205aa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205aa4:
    // 0x205aa4: 0x0  nop
    ctx->pc = 0x205aa4u;
    // NOP
label_205aa8:
    // 0x205aa8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_205aac:
    if (ctx->pc == 0x205AACu) {
        ctx->pc = 0x205AACu;
            // 0x205aac: 0xe6410028  swc1        $f1, 0x28($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
        ctx->pc = 0x205AB0u;
        goto label_205ab0;
    }
    ctx->pc = 0x205AA8u;
    {
        const bool branch_taken_0x205aa8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x205AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205AA8u;
            // 0x205aac: 0xe6410028  swc1        $f1, 0x28($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x205aa8) {
            ctx->pc = 0x205AB4u;
            goto label_205ab4;
        }
    }
    ctx->pc = 0x205AB0u;
label_205ab0:
    // 0x205ab0: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x205ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
label_205ab4:
    // 0x205ab4: 0xc6810118  lwc1        $f1, 0x118($s4)
    ctx->pc = 0x205ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205ab8:
    // 0x205ab8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x205ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_205abc:
    // 0x205abc: 0xc6a00020  lwc1        $f0, 0x20($s5)
    ctx->pc = 0x205abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205ac0:
    // 0x205ac0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x205ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205ac4:
    // 0x205ac4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x205ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_205ac8:
    // 0x205ac8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x205ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_205acc:
    // 0x205acc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x205accu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_205ad0:
    // 0x205ad0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x205ad0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_205ad4:
    // 0x205ad4: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x205ad4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_205ad8:
    // 0x205ad8: 0xc094514  jal         func_251450
label_205adc:
    if (ctx->pc == 0x205ADCu) {
        ctx->pc = 0x205ADCu;
            // 0x205adc: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x205AE0u;
        goto label_205ae0;
    }
    ctx->pc = 0x205AD8u;
    SET_GPR_U32(ctx, 31, 0x205AE0u);
    ctx->pc = 0x205ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205AD8u;
            // 0x205adc: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205AE0u; }
        if (ctx->pc != 0x205AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205AE0u; }
        if (ctx->pc != 0x205AE0u) { return; }
    }
    ctx->pc = 0x205AE0u;
label_205ae0:
    // 0x205ae0: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x205ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205ae4:
    // 0x205ae4: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x205ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205ae8:
    // 0x205ae8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x205ae8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_205aec:
    // 0x205aec: 0xe6410020  swc1        $f1, 0x20($s2)
    ctx->pc = 0x205aecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_205af0:
    // 0x205af0: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x205af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205af4:
    // 0x205af4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x205af4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_205af8:
    // 0x205af8: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x205af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
label_205afc:
    // 0x205afc: 0x8e830f20  lw          $v1, 0xF20($s4)
    ctx->pc = 0x205afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3872)));
label_205b00:
    // 0x205b00: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
label_205b04:
    if (ctx->pc == 0x205B04u) {
        ctx->pc = 0x205B08u;
        goto label_205b08;
    }
    ctx->pc = 0x205B00u;
    {
        const bool branch_taken_0x205b00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x205b00) {
            ctx->pc = 0x205BACu;
            goto label_205bac;
        }
    }
    ctx->pc = 0x205B08u;
label_205b08:
    // 0x205b08: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x205b08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_205b0c:
    // 0x205b0c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_205b10:
    if (ctx->pc == 0x205B10u) {
        ctx->pc = 0x205B14u;
        goto label_205b14;
    }
    ctx->pc = 0x205B0Cu;
    {
        const bool branch_taken_0x205b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205b0c) {
            ctx->pc = 0x205BACu;
            goto label_205bac;
        }
    }
    ctx->pc = 0x205B14u;
label_205b14:
    // 0x205b14: 0x90620058  lbu         $v0, 0x58($v1)
    ctx->pc = 0x205b14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 88)));
label_205b18:
    // 0x205b18: 0x18400024  blez        $v0, . + 4 + (0x24 << 2)
label_205b1c:
    if (ctx->pc == 0x205B1Cu) {
        ctx->pc = 0x205B1Cu;
            // 0x205b1c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x205B20u;
        goto label_205b20;
    }
    ctx->pc = 0x205B18u;
    {
        const bool branch_taken_0x205b18 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x205B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205B18u;
            // 0x205b1c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b18) {
            ctx->pc = 0x205BACu;
            goto label_205bac;
        }
    }
    ctx->pc = 0x205B20u;
label_205b20:
    // 0x205b20: 0x8c22ca5c  lw          $v0, -0x35A4($at)
    ctx->pc = 0x205b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
label_205b24:
    // 0x205b24: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_205b28:
    if (ctx->pc == 0x205B28u) {
        ctx->pc = 0x205B28u;
            // 0x205b28: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x205B2Cu;
        goto label_205b2c;
    }
    ctx->pc = 0x205B24u;
    {
        const bool branch_taken_0x205b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205B24u;
            // 0x205b28: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b24) {
            ctx->pc = 0x205BACu;
            goto label_205bac;
        }
    }
    ctx->pc = 0x205B2Cu;
label_205b2c:
    // 0x205b2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x205b2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205b30:
    // 0x205b30: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x205b30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205b34:
    // 0x205b34: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x205b34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_205b38:
    // 0x205b38: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x205b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_205b3c:
    // 0x205b3c: 0x24a59818  addiu       $a1, $a1, -0x67E8
    ctx->pc = 0x205b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940696));
label_205b40:
    // 0x205b40: 0xc04a234  jal         func_1288D0
label_205b44:
    if (ctx->pc == 0x205B44u) {
        ctx->pc = 0x205B44u;
            // 0x205b44: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x205B48u;
        goto label_205b48;
    }
    ctx->pc = 0x205B40u;
    SET_GPR_U32(ctx, 31, 0x205B48u);
    ctx->pc = 0x205B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205B40u;
            // 0x205b44: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205B48u; }
        if (ctx->pc != 0x205B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205B48u; }
        if (ctx->pc != 0x205B48u) { return; }
    }
    ctx->pc = 0x205B48u;
label_205b48:
    // 0x205b48: 0x8e840f20  lw          $a0, 0xF20($s4)
    ctx->pc = 0x205b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3872)));
label_205b4c:
    // 0x205b4c: 0x27b30134  addiu       $s3, $sp, 0x134
    ctx->pc = 0x205b4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_205b50:
    // 0x205b50: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x205b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_205b54:
    // 0x205b54: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x205b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_205b58:
    // 0x205b58: 0xc08974c  jal         func_225D30
label_205b5c:
    if (ctx->pc == 0x205B5Cu) {
        ctx->pc = 0x205B5Cu;
            // 0x205b5c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x205B60u;
        goto label_205b60;
    }
    ctx->pc = 0x205B58u;
    SET_GPR_U32(ctx, 31, 0x205B60u);
    ctx->pc = 0x205B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205B58u;
            // 0x205b5c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205B60u; }
        if (ctx->pc != 0x205B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205B60u; }
        if (ctx->pc != 0x205B60u) { return; }
    }
    ctx->pc = 0x205B60u;
label_205b60:
    // 0x205b60: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x205b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_205b64:
    // 0x205b64: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x205b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_205b68:
    // 0x205b68: 0x8c22ca5c  lw          $v0, -0x35A4($at)
    ctx->pc = 0x205b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
label_205b6c:
    // 0x205b6c: 0x6000009  bltz        $s0, . + 4 + (0x9 << 2)
label_205b70:
    if (ctx->pc == 0x205B70u) {
        ctx->pc = 0x205B70u;
            // 0x205b70: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x205B74u;
        goto label_205b74;
    }
    ctx->pc = 0x205B6Cu;
    {
        const bool branch_taken_0x205b6c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x205B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205B6Cu;
            // 0x205b70: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b6c) {
            ctx->pc = 0x205B94u;
            goto label_205b94;
        }
    }
    ctx->pc = 0x205B74u;
label_205b74:
    // 0x205b74: 0x2a010014  slti        $at, $s0, 0x14
    ctx->pc = 0x205b74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
label_205b78:
    // 0x205b78: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_205b7c:
    if (ctx->pc == 0x205B7Cu) {
        ctx->pc = 0x205B7Cu;
            // 0x205b7c: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->pc = 0x205B80u;
        goto label_205b80;
    }
    ctx->pc = 0x205B78u;
    {
        const bool branch_taken_0x205b78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x205B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205B78u;
            // 0x205b7c: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b78) {
            ctx->pc = 0x205B94u;
            goto label_205b94;
        }
    }
    ctx->pc = 0x205B80u;
label_205b80:
    // 0x205b80: 0xaca31b94  sw          $v1, 0x1B94($a1)
    ctx->pc = 0x205b80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7060), GPR_U32(ctx, 3));
label_205b84:
    // 0x205b84: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x205b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_205b88:
    // 0x205b88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x205b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205b8c:
    // 0x205b8c: 0xaca41b98  sw          $a0, 0x1B98($a1)
    ctx->pc = 0x205b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7064), GPR_U32(ctx, 4));
label_205b90:
    // 0x205b90: 0xac431c34  sw          $v1, 0x1C34($v0)
    ctx->pc = 0x205b90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7220), GPR_U32(ctx, 3));
label_205b94:
    // 0x205b94: 0x0  nop
    ctx->pc = 0x205b94u;
    // NOP
label_205b98:
    // 0x205b98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x205b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_205b9c:
    // 0x205b9c: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x205b9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
label_205ba0:
    // 0x205ba0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x205ba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_205ba4:
    // 0x205ba4: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_205ba8:
    if (ctx->pc == 0x205BA8u) {
        ctx->pc = 0x205BA8u;
            // 0x205ba8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x205BACu;
        goto label_205bac;
    }
    ctx->pc = 0x205BA4u;
    {
        const bool branch_taken_0x205ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205BA4u;
            // 0x205ba8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ba4) {
            ctx->pc = 0x205B34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_205b34;
        }
    }
    ctx->pc = 0x205BACu;
label_205bac:
    // 0x205bac: 0x0  nop
    ctx->pc = 0x205bacu;
    // NOP
label_205bb0:
    // 0x205bb0: 0x8e830f10  lw          $v1, 0xF10($s4)
    ctx->pc = 0x205bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3856)));
label_205bb4:
    // 0x205bb4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_205bb8:
    if (ctx->pc == 0x205BB8u) {
        ctx->pc = 0x205BB8u;
            // 0x205bb8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x205BBCu;
        goto label_205bbc;
    }
    ctx->pc = 0x205BB4u;
    {
        const bool branch_taken_0x205bb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x205BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205BB4u;
            // 0x205bb8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205bb4) {
            ctx->pc = 0x205BD8u;
            goto label_205bd8;
        }
    }
    ctx->pc = 0x205BBCu;
label_205bbc:
    // 0x205bbc: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x205bbcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_205bc0:
    // 0x205bc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_205bc4:
    if (ctx->pc == 0x205BC4u) {
        ctx->pc = 0x205BC8u;
        goto label_205bc8;
    }
    ctx->pc = 0x205BC0u;
    {
        const bool branch_taken_0x205bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205bc0) {
            ctx->pc = 0x205BD8u;
            goto label_205bd8;
        }
    }
    ctx->pc = 0x205BC8u;
label_205bc8:
    // 0x205bc8: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x205bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_205bcc:
    // 0x205bcc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_205bd0:
    if (ctx->pc == 0x205BD0u) {
        ctx->pc = 0x205BD4u;
        goto label_205bd4;
    }
    ctx->pc = 0x205BCCu;
    {
        const bool branch_taken_0x205bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205bcc) {
            ctx->pc = 0x205BD8u;
            goto label_205bd8;
        }
    }
    ctx->pc = 0x205BD4u;
label_205bd4:
    // 0x205bd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x205bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205bd8:
    // 0x205bd8: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x205bd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
label_205bdc:
    // 0x205bdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205be0:
    // 0x205be0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_205be4:
    if (ctx->pc == 0x205BE4u) {
        ctx->pc = 0x205BE8u;
        goto label_205be8;
    }
    ctx->pc = 0x205BE0u;
    {
        const bool branch_taken_0x205be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x205be0) {
            ctx->pc = 0x205BF8u;
            goto label_205bf8;
        }
    }
    ctx->pc = 0x205BE8u;
label_205be8:
    // 0x205be8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_205bec:
    if (ctx->pc == 0x205BECu) {
        ctx->pc = 0x205BF0u;
        goto label_205bf0;
    }
    ctx->pc = 0x205BE8u;
    {
        const bool branch_taken_0x205be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x205be8) {
            ctx->pc = 0x205BF8u;
            goto label_205bf8;
        }
    }
    ctx->pc = 0x205BF0u;
label_205bf0:
    // 0x205bf0: 0x100000ef  b           . + 4 + (0xEF << 2)
label_205bf4:
    if (ctx->pc == 0x205BF4u) {
        ctx->pc = 0x205BF4u;
            // 0x205bf4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x205BF8u;
        goto label_205bf8;
    }
    ctx->pc = 0x205BF0u;
    {
        const bool branch_taken_0x205bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205BF0u;
            // 0x205bf4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205bf0) {
            ctx->pc = 0x205FB0u;
            goto label_205fb0;
        }
    }
    ctx->pc = 0x205BF8u;
label_205bf8:
    // 0x205bf8: 0x120000ec  beqz        $s0, . + 4 + (0xEC << 2)
label_205bfc:
    if (ctx->pc == 0x205BFCu) {
        ctx->pc = 0x205C00u;
        goto label_205c00;
    }
    ctx->pc = 0x205BF8u;
    {
        const bool branch_taken_0x205bf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x205bf8) {
            ctx->pc = 0x205FACu;
            goto label_205fac;
        }
    }
    ctx->pc = 0x205C00u;
label_205c00:
    // 0x205c00: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x205c00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_205c04:
    // 0x205c04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205c08:
    // 0x205c08: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x205c08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_205c0c:
    // 0x205c0c: 0x320f809  jalr        $t9
label_205c10:
    if (ctx->pc == 0x205C10u) {
        ctx->pc = 0x205C10u;
            // 0x205c10: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x205C14u;
        goto label_205c14;
    }
    ctx->pc = 0x205C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x205C14u);
        ctx->pc = 0x205C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205C0Cu;
            // 0x205c10: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x205C14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x205C14u; }
            if (ctx->pc != 0x205C14u) { return; }
        }
        }
    }
    ctx->pc = 0x205C14u;
label_205c14:
    // 0x205c14: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x205c14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_205c18:
    // 0x205c18: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x205c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_205c1c:
    // 0x205c1c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_205c20:
    if (ctx->pc == 0x205C20u) {
        ctx->pc = 0x205C20u;
            // 0x205c20: 0x26850670  addiu       $a1, $s4, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1648));
        ctx->pc = 0x205C24u;
        goto label_205c24;
    }
    ctx->pc = 0x205C1Cu;
    {
        const bool branch_taken_0x205c1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x205C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205C1Cu;
            // 0x205c20: 0x26850670  addiu       $a1, $s4, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c1c) {
            ctx->pc = 0x205C2Cu;
            goto label_205c2c;
        }
    }
    ctx->pc = 0x205C24u;
label_205c24:
    // 0x205c24: 0x10000008  b           . + 4 + (0x8 << 2)
label_205c28:
    if (ctx->pc == 0x205C28u) {
        ctx->pc = 0x205C28u;
            // 0x205c28: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x205C2Cu;
        goto label_205c2c;
    }
    ctx->pc = 0x205C24u;
    {
        const bool branch_taken_0x205c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205C24u;
            // 0x205c28: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c24) {
            ctx->pc = 0x205C48u;
            goto label_205c48;
        }
    }
    ctx->pc = 0x205C2Cu;
label_205c2c:
    // 0x205c2c: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x205c2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_205c30:
    // 0x205c30: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_205c34:
    if (ctx->pc == 0x205C34u) {
        ctx->pc = 0x205C34u;
            // 0x205c34: 0x28410004  slti        $at, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->pc = 0x205C38u;
        goto label_205c38;
    }
    ctx->pc = 0x205C30u;
    {
        const bool branch_taken_0x205c30 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x205C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205C30u;
            // 0x205c34: 0x28410004  slti        $at, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c30) {
            ctx->pc = 0x205C44u;
            goto label_205c44;
        }
    }
    ctx->pc = 0x205C38u;
label_205c38:
    // 0x205c38: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_205c3c:
    if (ctx->pc == 0x205C3Cu) {
        ctx->pc = 0x205C40u;
        goto label_205c40;
    }
    ctx->pc = 0x205C38u;
    {
        const bool branch_taken_0x205c38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x205c38) {
            ctx->pc = 0x205C44u;
            goto label_205c44;
        }
    }
    ctx->pc = 0x205C40u;
label_205c40:
    // 0x205c40: 0x26850680  addiu       $a1, $s4, 0x680
    ctx->pc = 0x205c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1664));
label_205c44:
    // 0x205c44: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x205c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_205c48:
    // 0x205c48: 0xc041c3e  jal         func_1070F8
label_205c4c:
    if (ctx->pc == 0x205C4Cu) {
        ctx->pc = 0x205C4Cu;
            // 0x205c4c: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x205C50u;
        goto label_205c50;
    }
    ctx->pc = 0x205C48u;
    SET_GPR_U32(ctx, 31, 0x205C50u);
    ctx->pc = 0x205C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205C48u;
            // 0x205c4c: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205C50u; }
        if (ctx->pc != 0x205C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205C50u; }
        if (ctx->pc != 0x205C50u) { return; }
    }
    ctx->pc = 0x205C50u;
label_205c50:
    // 0x205c50: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x205c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_205c54:
    // 0x205c54: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x205c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_205c58:
    // 0x205c58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x205c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_205c5c:
    // 0x205c5c: 0xc041e96  jal         func_107A58
label_205c60:
    if (ctx->pc == 0x205C60u) {
        ctx->pc = 0x205C60u;
            // 0x205c60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x205C64u;
        goto label_205c64;
    }
    ctx->pc = 0x205C5Cu;
    SET_GPR_U32(ctx, 31, 0x205C64u);
    ctx->pc = 0x205C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205C5Cu;
            // 0x205c60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205C64u; }
        if (ctx->pc != 0x205C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205C64u; }
        if (ctx->pc != 0x205C64u) { return; }
    }
    ctx->pc = 0x205C64u;
label_205c64:
    // 0x205c64: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x205c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_205c68:
    // 0x205c68: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x205c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_205c6c:
    // 0x205c6c: 0xc041c38  jal         func_1070E0
label_205c70:
    if (ctx->pc == 0x205C70u) {
        ctx->pc = 0x205C70u;
            // 0x205c70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x205C74u;
        goto label_205c74;
    }
    ctx->pc = 0x205C6Cu;
    SET_GPR_U32(ctx, 31, 0x205C74u);
    ctx->pc = 0x205C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205C6Cu;
            // 0x205c70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205C74u; }
        if (ctx->pc != 0x205C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205C74u; }
        if (ctx->pc != 0x205C74u) { return; }
    }
    ctx->pc = 0x205C74u;
label_205c74:
    // 0x205c74: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x205c74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_205c78:
    // 0x205c78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205c7c:
    // 0x205c7c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x205c7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_205c80:
    // 0x205c80: 0x320f809  jalr        $t9
label_205c84:
    if (ctx->pc == 0x205C84u) {
        ctx->pc = 0x205C84u;
            // 0x205c84: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x205C88u;
        goto label_205c88;
    }
    ctx->pc = 0x205C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x205C88u);
        ctx->pc = 0x205C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205C80u;
            // 0x205c84: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x205C88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x205C88u; }
            if (ctx->pc != 0x205C88u) { return; }
        }
        }
    }
    ctx->pc = 0x205C88u;
label_205c88:
    // 0x205c88: 0x27b100c4  addiu       $s1, $sp, 0xC4
    ctx->pc = 0x205c88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_205c8c:
    // 0x205c8c: 0x3c024208  lui         $v0, 0x4208
    ctx->pc = 0x205c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16904 << 16));
label_205c90:
    // 0x205c90: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x205c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205c94:
    // 0x205c94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205c98:
    // 0x205c98: 0x0  nop
    ctx->pc = 0x205c98u;
    // NOP
label_205c9c:
    // 0x205c9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x205c9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_205ca0:
    // 0x205ca0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x205ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_205ca4:
    // 0x205ca4: 0x8e82063c  lw          $v0, 0x63C($s4)
    ctx->pc = 0x205ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1596)));
label_205ca8:
    // 0x205ca8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_205cac:
    if (ctx->pc == 0x205CACu) {
        ctx->pc = 0x205CACu;
            // 0x205cac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x205CB0u;
        goto label_205cb0;
    }
    ctx->pc = 0x205CA8u;
    {
        const bool branch_taken_0x205ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205CA8u;
            // 0x205cac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ca8) {
            ctx->pc = 0x205CB8u;
            goto label_205cb8;
        }
    }
    ctx->pc = 0x205CB0u;
label_205cb0:
    // 0x205cb0: 0x8c500070  lw          $s0, 0x70($v0)
    ctx->pc = 0x205cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_205cb4:
    // 0x205cb4: 0x0  nop
    ctx->pc = 0x205cb4u;
    // NOP
label_205cb8:
    // 0x205cb8: 0x120000bc  beqz        $s0, . + 4 + (0xBC << 2)
label_205cbc:
    if (ctx->pc == 0x205CBCu) {
        ctx->pc = 0x205CC0u;
        goto label_205cc0;
    }
    ctx->pc = 0x205CB8u;
    {
        const bool branch_taken_0x205cb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x205cb8) {
            ctx->pc = 0x205FACu;
            goto label_205fac;
        }
    }
    ctx->pc = 0x205CC0u;
label_205cc0:
    // 0x205cc0: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x205cc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_205cc4:
    // 0x205cc4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x205cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_205cc8:
    // 0x205cc8: 0x146200af  bne         $v1, $v0, . + 4 + (0xAF << 2)
label_205ccc:
    if (ctx->pc == 0x205CCCu) {
        ctx->pc = 0x205CD0u;
        goto label_205cd0;
    }
    ctx->pc = 0x205CC8u;
    {
        const bool branch_taken_0x205cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x205cc8) {
            ctx->pc = 0x205F88u;
            goto label_205f88;
        }
    }
    ctx->pc = 0x205CD0u;
label_205cd0:
    // 0x205cd0: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x205cd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_205cd4:
    // 0x205cd4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x205cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_205cd8:
    // 0x205cd8: 0x146200ab  bne         $v1, $v0, . + 4 + (0xAB << 2)
label_205cdc:
    if (ctx->pc == 0x205CDCu) {
        ctx->pc = 0x205CE0u;
        goto label_205ce0;
    }
    ctx->pc = 0x205CD8u;
    {
        const bool branch_taken_0x205cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x205cd8) {
            ctx->pc = 0x205F88u;
            goto label_205f88;
        }
    }
    ctx->pc = 0x205CE0u;
label_205ce0:
    // 0x205ce0: 0x86820580  lh          $v0, 0x580($s4)
    ctx->pc = 0x205ce0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1408)));
label_205ce4:
    // 0x205ce4: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
label_205ce8:
    if (ctx->pc == 0x205CE8u) {
        ctx->pc = 0x205CECu;
        goto label_205cec;
    }
    ctx->pc = 0x205CE4u;
    {
        const bool branch_taken_0x205ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205ce4) {
            ctx->pc = 0x205EA4u;
            goto label_205ea4;
        }
    }
    ctx->pc = 0x205CECu;
label_205cec:
    // 0x205cec: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x205cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205cf0:
    // 0x205cf0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x205cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_205cf4:
    // 0x205cf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205cf8:
    // 0x205cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205cfc:
    // 0x205cfc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x205cfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_205d00:
    // 0x205d00: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x205d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_205d04:
    // 0x205d04: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x205d04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_205d08:
    // 0x205d08: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x205d08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_205d0c:
    // 0x205d0c: 0x320f809  jalr        $t9
label_205d10:
    if (ctx->pc == 0x205D10u) {
        ctx->pc = 0x205D10u;
            // 0x205d10: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x205D14u;
        goto label_205d14;
    }
    ctx->pc = 0x205D0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x205D14u);
        ctx->pc = 0x205D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205D0Cu;
            // 0x205d10: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x205D14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x205D14u; }
            if (ctx->pc != 0x205D14u) { return; }
        }
        }
    }
    ctx->pc = 0x205D14u;
label_205d14:
    // 0x205d14: 0xc047a42  jal         func_11E908
label_205d18:
    if (ctx->pc == 0x205D18u) {
        ctx->pc = 0x205D18u;
            // 0x205d18: 0xc68c0660  lwc1        $f12, 0x660($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x205D1Cu;
        goto label_205d1c;
    }
    ctx->pc = 0x205D14u;
    SET_GPR_U32(ctx, 31, 0x205D1Cu);
    ctx->pc = 0x205D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205D14u;
            // 0x205d18: 0xc68c0660  lwc1        $f12, 0x660($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205D1Cu; }
        if (ctx->pc != 0x205D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205D1Cu; }
        if (ctx->pc != 0x205D1Cu) { return; }
    }
    ctx->pc = 0x205D1Cu;
label_205d1c:
    // 0x205d1c: 0xc6820650  lwc1        $f2, 0x650($s4)
    ctx->pc = 0x205d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_205d20:
    // 0x205d20: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x205d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205d24:
    // 0x205d24: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x205d24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_205d28:
    // 0x205d28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x205d28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_205d2c:
    // 0x205d2c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x205d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_205d30:
    // 0x205d30: 0xc047a42  jal         func_11E908
label_205d34:
    if (ctx->pc == 0x205D34u) {
        ctx->pc = 0x205D34u;
            // 0x205d34: 0xc68c0658  lwc1        $f12, 0x658($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x205D38u;
        goto label_205d38;
    }
    ctx->pc = 0x205D30u;
    SET_GPR_U32(ctx, 31, 0x205D38u);
    ctx->pc = 0x205D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205D30u;
            // 0x205d34: 0xc68c0658  lwc1        $f12, 0x658($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205D38u; }
        if (ctx->pc != 0x205D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205D38u; }
        if (ctx->pc != 0x205D38u) { return; }
    }
    ctx->pc = 0x205D38u;
label_205d38:
    // 0x205d38: 0xc6830654  lwc1        $f3, 0x654($s4)
    ctx->pc = 0x205d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_205d3c:
    // 0x205d3c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x205d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_205d40:
    // 0x205d40: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x205d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_205d44:
    // 0x205d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205d48:
    // 0x205d48: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x205d48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_205d4c:
    // 0x205d4c: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x205d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_205d50:
    // 0x205d50: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x205d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_205d54:
    // 0x205d54: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x205d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_205d58:
    // 0x205d58: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x205d58u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_205d5c:
    // 0x205d5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x205d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205d60:
    // 0x205d60: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x205d60u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_205d64:
    // 0x205d64: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x205d64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_205d68:
    // 0x205d68: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x205d68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_205d6c:
    // 0x205d6c: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x205d6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_205d70:
    // 0x205d70: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x205d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_205d74:
    // 0x205d74: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x205d74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_205d78:
    // 0x205d78: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x205d78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_205d7c:
    // 0x205d7c: 0x320f809  jalr        $t9
label_205d80:
    if (ctx->pc == 0x205D80u) {
        ctx->pc = 0x205D80u;
            // 0x205d80: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x205D84u;
        goto label_205d84;
    }
    ctx->pc = 0x205D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x205D84u);
        ctx->pc = 0x205D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205D7Cu;
            // 0x205d80: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x205D84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x205D84u; }
            if (ctx->pc != 0x205D84u) { return; }
        }
        }
    }
    ctx->pc = 0x205D84u;
label_205d84:
    // 0x205d84: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x205d84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_205d88:
    // 0x205d88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205d8c:
    // 0x205d8c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x205d8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_205d90:
    // 0x205d90: 0x320f809  jalr        $t9
label_205d94:
    if (ctx->pc == 0x205D94u) {
        ctx->pc = 0x205D94u;
            // 0x205d94: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x205D98u;
        goto label_205d98;
    }
    ctx->pc = 0x205D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x205D98u);
        ctx->pc = 0x205D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205D90u;
            // 0x205d94: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x205D98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x205D98u; }
            if (ctx->pc != 0x205D98u) { return; }
        }
        }
    }
    ctx->pc = 0x205D98u;
label_205d98:
    // 0x205d98: 0xc6820660  lwc1        $f2, 0x660($s4)
    ctx->pc = 0x205d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_205d9c:
    // 0x205d9c: 0x3c023d8b  lui         $v0, 0x3D8B
    ctx->pc = 0x205d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15755 << 16));
label_205da0:
    // 0x205da0: 0x3443de82  ori         $v1, $v0, 0xDE82
    ctx->pc = 0x205da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56962);
label_205da4:
    // 0x205da4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x205da4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205da8:
    // 0x205da8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x205da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_205dac:
    // 0x205dac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x205dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_205db0:
    // 0x205db0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205db4:
    // 0x205db4: 0x0  nop
    ctx->pc = 0x205db4u;
    // NOP
label_205db8:
    // 0x205db8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x205db8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_205dbc:
    // 0x205dbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x205dbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205dc0:
    // 0x205dc0: 0x0  nop
    ctx->pc = 0x205dc0u;
    // NOP
label_205dc4:
    // 0x205dc4: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_205dc8:
    if (ctx->pc == 0x205DC8u) {
        ctx->pc = 0x205DC8u;
            // 0x205dc8: 0xe6810660  swc1        $f1, 0x660($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1632), bits); }
        ctx->pc = 0x205DCCu;
        goto label_205dcc;
    }
    ctx->pc = 0x205DC4u;
    {
        const bool branch_taken_0x205dc4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x205DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205DC4u;
            // 0x205dc8: 0xe6810660  swc1        $f1, 0x660($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1632), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x205dc4) {
            ctx->pc = 0x205E08u;
            goto label_205e08;
        }
    }
    ctx->pc = 0x205DCCu;
label_205dcc:
    // 0x205dcc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x205dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_205dd0:
    // 0x205dd0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x205dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_205dd4:
    // 0x205dd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205dd8:
    // 0x205dd8: 0x0  nop
    ctx->pc = 0x205dd8u;
    // NOP
label_205ddc:
    // 0x205ddc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x205ddcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_205de0:
    // 0x205de0: 0xc04c3b8  jal         func_130EE0
label_205de4:
    if (ctx->pc == 0x205DE4u) {
        ctx->pc = 0x205DE4u;
            // 0x205de4: 0xe6800660  swc1        $f0, 0x660($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1632), bits); }
        ctx->pc = 0x205DE8u;
        goto label_205de8;
    }
    ctx->pc = 0x205DE0u;
    SET_GPR_U32(ctx, 31, 0x205DE8u);
    ctx->pc = 0x205DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205DE0u;
            // 0x205de4: 0xe6800660  swc1        $f0, 0x660($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1632), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205DE8u; }
        if (ctx->pc != 0x205DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205DE8u; }
        if (ctx->pc != 0x205DE8u) { return; }
    }
    ctx->pc = 0x205DE8u;
label_205de8:
    // 0x205de8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x205de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_205dec:
    // 0x205dec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x205decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_205df0:
    // 0x205df0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x205df0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_205df4:
    // 0x205df4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x205df4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205df8:
    // 0x205df8: 0x0  nop
    ctx->pc = 0x205df8u;
    // NOP
label_205dfc:
    // 0x205dfc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x205dfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_205e00:
    // 0x205e00: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x205e00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_205e04:
    // 0x205e04: 0xe6800650  swc1        $f0, 0x650($s4)
    ctx->pc = 0x205e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1616), bits); }
label_205e08:
    // 0x205e08: 0x3c033e12  lui         $v1, 0x3E12
    ctx->pc = 0x205e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15890 << 16));
label_205e0c:
    // 0x205e0c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x205e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_205e10:
    // 0x205e10: 0x34633a14  ori         $v1, $v1, 0x3A14
    ctx->pc = 0x205e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14868);
label_205e14:
    // 0x205e14: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x205e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_205e18:
    // 0x205e18: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x205e18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_205e1c:
    // 0x205e1c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x205e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_205e20:
    // 0x205e20: 0xc094570  jal         func_2515C0
label_205e24:
    if (ctx->pc == 0x205E24u) {
        ctx->pc = 0x205E24u;
            // 0x205e24: 0x26840658  addiu       $a0, $s4, 0x658 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1624));
        ctx->pc = 0x205E28u;
        goto label_205e28;
    }
    ctx->pc = 0x205E20u;
    SET_GPR_U32(ctx, 31, 0x205E28u);
    ctx->pc = 0x205E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205E20u;
            // 0x205e24: 0x26840658  addiu       $a0, $s4, 0x658 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205E28u; }
        if (ctx->pc != 0x205E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205E28u; }
        if (ctx->pc != 0x205E28u) { return; }
    }
    ctx->pc = 0x205E28u;
label_205e28:
    // 0x205e28: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
label_205e2c:
    if (ctx->pc == 0x205E2Cu) {
        ctx->pc = 0x205E30u;
        goto label_205e30;
    }
    ctx->pc = 0x205E28u;
    {
        const bool branch_taken_0x205e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205e28) {
            ctx->pc = 0x205FACu;
            goto label_205fac;
        }
    }
    ctx->pc = 0x205E30u;
label_205e30:
    // 0x205e30: 0xae800658  sw          $zero, 0x658($s4)
    ctx->pc = 0x205e30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1624), GPR_U32(ctx, 0));
label_205e34:
    // 0x205e34: 0x8e82065c  lw          $v0, 0x65C($s4)
    ctx->pc = 0x205e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1628)));
label_205e38:
    // 0x205e38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x205e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_205e3c:
    // 0x205e3c: 0xc04c3b8  jal         func_130EE0
label_205e40:
    if (ctx->pc == 0x205E40u) {
        ctx->pc = 0x205E40u;
            // 0x205e40: 0xae82065c  sw          $v0, 0x65C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1628), GPR_U32(ctx, 2));
        ctx->pc = 0x205E44u;
        goto label_205e44;
    }
    ctx->pc = 0x205E3Cu;
    SET_GPR_U32(ctx, 31, 0x205E44u);
    ctx->pc = 0x205E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205E3Cu;
            // 0x205e40: 0xae82065c  sw          $v0, 0x65C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205E44u; }
        if (ctx->pc != 0x205E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205E44u; }
        if (ctx->pc != 0x205E44u) { return; }
    }
    ctx->pc = 0x205E44u;
label_205e44:
    // 0x205e44: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x205e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_205e48:
    // 0x205e48: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x205e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_205e4c:
    // 0x205e4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x205e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205e50:
    // 0x205e50: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x205e50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_205e54:
    // 0x205e54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x205e54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_205e58:
    // 0x205e58: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x205e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_205e5c:
    // 0x205e5c: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x205e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_205e60:
    // 0x205e60: 0x3c024053  lui         $v0, 0x4053
    ctx->pc = 0x205e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16467 << 16));
label_205e64:
    // 0x205e64: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x205e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_205e68:
    // 0x205e68: 0x460200c3  div.s       $f3, $f0, $f2
    ctx->pc = 0x205e68u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_205e6c:
    // 0x205e6c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x205e6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_205e70:
    // 0x205e70: 0xc6810654  lwc1        $f1, 0x654($s4)
    ctx->pc = 0x205e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205e74:
    // 0x205e74: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x205e74u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_205e78:
    // 0x205e78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205e7c:
    // 0x205e7c: 0x0  nop
    ctx->pc = 0x205e7cu;
    // NOP
label_205e80:
    // 0x205e80: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x205e80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_205e84:
    // 0x205e84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x205e84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205e88:
    // 0x205e88: 0x0  nop
    ctx->pc = 0x205e88u;
    // NOP
label_205e8c:
    // 0x205e8c: 0x45000047  bc1f        . + 4 + (0x47 << 2)
label_205e90:
    if (ctx->pc == 0x205E90u) {
        ctx->pc = 0x205E90u;
            // 0x205e90: 0xe6810654  swc1        $f1, 0x654($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1620), bits); }
        ctx->pc = 0x205E94u;
        goto label_205e94;
    }
    ctx->pc = 0x205E8Cu;
    {
        const bool branch_taken_0x205e8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x205E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205E8Cu;
            // 0x205e90: 0xe6810654  swc1        $f1, 0x654($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1620), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x205e8c) {
            ctx->pc = 0x205FACu;
            goto label_205fac;
        }
    }
    ctx->pc = 0x205E94u;
label_205e94:
    // 0x205e94: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x205e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_205e98:
    // 0x205e98: 0xae820654  sw          $v0, 0x654($s4)
    ctx->pc = 0x205e98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1620), GPR_U32(ctx, 2));
label_205e9c:
    // 0x205e9c: 0x10000043  b           . + 4 + (0x43 << 2)
label_205ea0:
    if (ctx->pc == 0x205EA0u) {
        ctx->pc = 0x205EA0u;
            // 0x205ea0: 0xae80065c  sw          $zero, 0x65C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1628), GPR_U32(ctx, 0));
        ctx->pc = 0x205EA4u;
        goto label_205ea4;
    }
    ctx->pc = 0x205E9Cu;
    {
        const bool branch_taken_0x205e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205E9Cu;
            // 0x205ea0: 0xae80065c  sw          $zero, 0x65C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205e9c) {
            ctx->pc = 0x205FACu;
            goto label_205fac;
        }
    }
    ctx->pc = 0x205EA4u;
label_205ea4:
    // 0x205ea4: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x205ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_205ea8:
    // 0x205ea8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x205ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_205eac:
    // 0x205eac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x205eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_205eb0:
    // 0x205eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205eb4:
    // 0x205eb4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x205eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_205eb8:
    // 0x205eb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x205eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205ebc:
    // 0x205ebc: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x205ebcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_205ec0:
    // 0x205ec0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x205ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_205ec4:
    // 0x205ec4: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x205ec4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_205ec8:
    // 0x205ec8: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x205ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_205ecc:
    // 0x205ecc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205eccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205ed0:
    // 0x205ed0: 0x0  nop
    ctx->pc = 0x205ed0u;
    // NOP
label_205ed4:
    // 0x205ed4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x205ed4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_205ed8:
    // 0x205ed8: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x205ed8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_205edc:
    // 0x205edc: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x205edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205ee0:
    // 0x205ee0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x205ee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_205ee4:
    // 0x205ee4: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x205ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_205ee8:
    // 0x205ee8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x205ee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_205eec:
    // 0x205eec: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x205eecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_205ef0:
    // 0x205ef0: 0x320f809  jalr        $t9
label_205ef4:
    if (ctx->pc == 0x205EF4u) {
        ctx->pc = 0x205EF4u;
            // 0x205ef4: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x205EF8u;
        goto label_205ef8;
    }
    ctx->pc = 0x205EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x205EF8u);
        ctx->pc = 0x205EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205EF0u;
            // 0x205ef4: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x205EF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x205EF8u; }
            if (ctx->pc != 0x205EF8u) { return; }
        }
        }
    }
    ctx->pc = 0x205EF8u;
label_205ef8:
    // 0x205ef8: 0xc047a42  jal         func_11E908
label_205efc:
    if (ctx->pc == 0x205EFCu) {
        ctx->pc = 0x205EFCu;
            // 0x205efc: 0xc68c0658  lwc1        $f12, 0x658($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x205F00u;
        goto label_205f00;
    }
    ctx->pc = 0x205EF8u;
    SET_GPR_U32(ctx, 31, 0x205F00u);
    ctx->pc = 0x205EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205EF8u;
            // 0x205efc: 0xc68c0658  lwc1        $f12, 0x658($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205F00u; }
        if (ctx->pc != 0x205F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205F00u; }
        if (ctx->pc != 0x205F00u) { return; }
    }
    ctx->pc = 0x205F00u;
label_205f00:
    // 0x205f00: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x205f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
label_205f04:
    // 0x205f04: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x205f04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_205f08:
    // 0x205f08: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x205f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_205f0c:
    // 0x205f0c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x205f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_205f10:
    // 0x205f10: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x205f10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_205f14:
    // 0x205f14: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x205f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_205f18:
    // 0x205f18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x205f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205f1c:
    // 0x205f1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205f20:
    // 0x205f20: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x205f20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_205f24:
    // 0x205f24: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x205f24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_205f28:
    // 0x205f28: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x205f28u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_205f2c:
    // 0x205f2c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x205f2cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_205f30:
    // 0x205f30: 0x320f809  jalr        $t9
label_205f34:
    if (ctx->pc == 0x205F34u) {
        ctx->pc = 0x205F34u;
            // 0x205f34: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x205F38u;
        goto label_205f38;
    }
    ctx->pc = 0x205F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x205F38u);
        ctx->pc = 0x205F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205F30u;
            // 0x205f34: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x205F38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x205F38u; }
            if (ctx->pc != 0x205F38u) { return; }
        }
        }
    }
    ctx->pc = 0x205F38u;
label_205f38:
    // 0x205f38: 0xc6820658  lwc1        $f2, 0x658($s4)
    ctx->pc = 0x205f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_205f3c:
    // 0x205f3c: 0x3c023db2  lui         $v0, 0x3DB2
    ctx->pc = 0x205f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15794 << 16));
label_205f40:
    // 0x205f40: 0x3443b8c3  ori         $v1, $v0, 0xB8C3
    ctx->pc = 0x205f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47299);
label_205f44:
    // 0x205f44: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x205f44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205f48:
    // 0x205f48: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x205f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_205f4c:
    // 0x205f4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x205f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_205f50:
    // 0x205f50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205f54:
    // 0x205f54: 0x0  nop
    ctx->pc = 0x205f54u;
    // NOP
label_205f58:
    // 0x205f58: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x205f58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_205f5c:
    // 0x205f5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x205f5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205f60:
    // 0x205f60: 0x0  nop
    ctx->pc = 0x205f60u;
    // NOP
label_205f64:
    // 0x205f64: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_205f68:
    if (ctx->pc == 0x205F68u) {
        ctx->pc = 0x205F68u;
            // 0x205f68: 0xe6810658  swc1        $f1, 0x658($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1624), bits); }
        ctx->pc = 0x205F6Cu;
        goto label_205f6c;
    }
    ctx->pc = 0x205F64u;
    {
        const bool branch_taken_0x205f64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x205F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205F64u;
            // 0x205f68: 0xe6810658  swc1        $f1, 0x658($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1624), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x205f64) {
            ctx->pc = 0x205FACu;
            goto label_205fac;
        }
    }
    ctx->pc = 0x205F6Cu;
label_205f6c:
    // 0x205f6c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x205f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_205f70:
    // 0x205f70: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x205f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_205f74:
    // 0x205f74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205f78:
    // 0x205f78: 0x0  nop
    ctx->pc = 0x205f78u;
    // NOP
label_205f7c:
    // 0x205f7c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x205f7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_205f80:
    // 0x205f80: 0x1000000a  b           . + 4 + (0xA << 2)
label_205f84:
    if (ctx->pc == 0x205F84u) {
        ctx->pc = 0x205F84u;
            // 0x205f84: 0xe6800658  swc1        $f0, 0x658($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1624), bits); }
        ctx->pc = 0x205F88u;
        goto label_205f88;
    }
    ctx->pc = 0x205F80u;
    {
        const bool branch_taken_0x205f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205F80u;
            // 0x205f84: 0xe6800658  swc1        $f0, 0x658($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1624), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x205f80) {
            ctx->pc = 0x205FACu;
            goto label_205fac;
        }
    }
    ctx->pc = 0x205F88u;
label_205f88:
    // 0x205f88: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x205f88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_205f8c:
    // 0x205f8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205f90:
    // 0x205f90: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x205f90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_205f94:
    // 0x205f94: 0x320f809  jalr        $t9
label_205f98:
    if (ctx->pc == 0x205F98u) {
        ctx->pc = 0x205F98u;
            // 0x205f98: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x205F9Cu;
        goto label_205f9c;
    }
    ctx->pc = 0x205F94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x205F9Cu);
        ctx->pc = 0x205F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205F94u;
            // 0x205f98: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x205F9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x205F9Cu; }
            if (ctx->pc != 0x205F9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x205F9Cu;
label_205f9c:
    // 0x205f9c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x205f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_205fa0:
    // 0x205fa0: 0xae820654  sw          $v0, 0x654($s4)
    ctx->pc = 0x205fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1620), GPR_U32(ctx, 2));
label_205fa4:
    // 0x205fa4: 0xae800658  sw          $zero, 0x658($s4)
    ctx->pc = 0x205fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1624), GPR_U32(ctx, 0));
label_205fa8:
    // 0x205fa8: 0xae80065c  sw          $zero, 0x65C($s4)
    ctx->pc = 0x205fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1628), GPR_U32(ctx, 0));
label_205fac:
    // 0x205fac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x205facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_205fb0:
    // 0x205fb0: 0xc080984  jal         func_202610
label_205fb4:
    if (ctx->pc == 0x205FB4u) {
        ctx->pc = 0x205FB8u;
        goto label_205fb8;
    }
    ctx->pc = 0x205FB0u;
    SET_GPR_U32(ctx, 31, 0x205FB8u);
    ctx->pc = 0x202610u;
    if (runtime->hasFunction(0x202610u)) {
        auto targetFn = runtime->lookupFunction(0x202610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205FB8u; }
        if (ctx->pc != 0x205FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GradationStep__11CMenuInventFv_0x202610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205FB8u; }
        if (ctx->pc != 0x205FB8u) { return; }
    }
    ctx->pc = 0x205FB8u;
label_205fb8:
    // 0x205fb8: 0x8e820f24  lw          $v0, 0xF24($s4)
    ctx->pc = 0x205fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3876)));
label_205fbc:
    // 0x205fbc: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_205fc0:
    if (ctx->pc == 0x205FC0u) {
        ctx->pc = 0x205FC0u;
            // 0x205fc0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x205FC4u;
        goto label_205fc4;
    }
    ctx->pc = 0x205FBCu;
    {
        const bool branch_taken_0x205fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205FBCu;
            // 0x205fc0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205fbc) {
            ctx->pc = 0x206054u;
            goto label_206054;
        }
    }
    ctx->pc = 0x205FC4u;
label_205fc4:
    // 0x205fc4: 0x8e840f28  lw          $a0, 0xF28($s4)
    ctx->pc = 0x205fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3880)));
label_205fc8:
    // 0x205fc8: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
label_205fcc:
    if (ctx->pc == 0x205FCCu) {
        ctx->pc = 0x205FD0u;
        goto label_205fd0;
    }
    ctx->pc = 0x205FC8u;
    {
        const bool branch_taken_0x205fc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x205fc8) {
            ctx->pc = 0x206050u;
            goto label_206050;
        }
    }
    ctx->pc = 0x205FD0u;
label_205fd0:
    // 0x205fd0: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x205fd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_205fd4:
    // 0x205fd4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x205fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_205fd8:
    // 0x205fd8: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
label_205fdc:
    if (ctx->pc == 0x205FDCu) {
        ctx->pc = 0x205FDCu;
            // 0x205fdc: 0x3c023f33  lui         $v0, 0x3F33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
        ctx->pc = 0x205FE0u;
        goto label_205fe0;
    }
    ctx->pc = 0x205FD8u;
    {
        const bool branch_taken_0x205fd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x205FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205FD8u;
            // 0x205fdc: 0x3c023f33  lui         $v0, 0x3F33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205fd8) {
            ctx->pc = 0x206048u;
            goto label_206048;
        }
    }
    ctx->pc = 0x205FE0u;
label_205fe0:
    // 0x205fe0: 0x868300c8  lh          $v1, 0xC8($s4)
    ctx->pc = 0x205fe0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 200)));
label_205fe4:
    // 0x205fe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205fe8:
    // 0x205fe8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_205fec:
    if (ctx->pc == 0x205FECu) {
        ctx->pc = 0x205FECu;
            // 0x205fec: 0x3c02bccc  lui         $v0, 0xBCCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48332 << 16));
        ctx->pc = 0x205FF0u;
        goto label_205ff0;
    }
    ctx->pc = 0x205FE8u;
    {
        const bool branch_taken_0x205fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x205FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205FE8u;
            // 0x205fec: 0x3c02bccc  lui         $v0, 0xBCCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48332 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205fe8) {
            ctx->pc = 0x206018u;
            goto label_206018;
        }
    }
    ctx->pc = 0x205FF0u;
label_205ff0:
    // 0x205ff0: 0x3c023ccc  lui         $v0, 0x3CCC
    ctx->pc = 0x205ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15564 << 16));
label_205ff4:
    // 0x205ff4: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x205ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_205ff8:
    // 0x205ff8: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x205ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
label_205ffc:
    // 0x205ffc: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x205ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_206000:
    // 0x206000: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x206000u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_206004:
    // 0x206004: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x206004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_206008:
    // 0x206008: 0xc094570  jal         func_2515C0
label_20600c:
    if (ctx->pc == 0x20600Cu) {
        ctx->pc = 0x20600Cu;
            // 0x20600c: 0x2484002c  addiu       $a0, $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
        ctx->pc = 0x206010u;
        goto label_206010;
    }
    ctx->pc = 0x206008u;
    SET_GPR_U32(ctx, 31, 0x206010u);
    ctx->pc = 0x20600Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206008u;
            // 0x20600c: 0x2484002c  addiu       $a0, $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206010u; }
        if (ctx->pc != 0x206010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206010u; }
        if (ctx->pc != 0x206010u) { return; }
    }
    ctx->pc = 0x206010u;
label_206010:
    // 0x206010: 0x1000000f  b           . + 4 + (0xF << 2)
label_206014:
    if (ctx->pc == 0x206014u) {
        ctx->pc = 0x206018u;
        goto label_206018;
    }
    ctx->pc = 0x206010u;
    {
        const bool branch_taken_0x206010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206010) {
            ctx->pc = 0x206050u;
            goto label_206050;
        }
    }
    ctx->pc = 0x206018u;
label_206018:
    // 0x206018: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x206018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_20601c:
    // 0x20601c: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x20601cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_206020:
    // 0x206020: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x206020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_206024:
    // 0x206024: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x206024u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_206028:
    // 0x206028: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x206028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20602c:
    // 0x20602c: 0xc094570  jal         func_2515C0
label_206030:
    if (ctx->pc == 0x206030u) {
        ctx->pc = 0x206030u;
            // 0x206030: 0x2484002c  addiu       $a0, $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
        ctx->pc = 0x206034u;
        goto label_206034;
    }
    ctx->pc = 0x20602Cu;
    SET_GPR_U32(ctx, 31, 0x206034u);
    ctx->pc = 0x206030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20602Cu;
            // 0x206030: 0x2484002c  addiu       $a0, $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206034u; }
        if (ctx->pc != 0x206034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206034u; }
        if (ctx->pc != 0x206034u) { return; }
    }
    ctx->pc = 0x206034u;
label_206034:
    // 0x206034: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_206038:
    if (ctx->pc == 0x206038u) {
        ctx->pc = 0x20603Cu;
        goto label_20603c;
    }
    ctx->pc = 0x206034u;
    {
        const bool branch_taken_0x206034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206034) {
            ctx->pc = 0x206050u;
            goto label_206050;
        }
    }
    ctx->pc = 0x20603Cu;
label_20603c:
    // 0x20603c: 0x8e820f24  lw          $v0, 0xF24($s4)
    ctx->pc = 0x20603cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3876)));
label_206040:
    // 0x206040: 0x10000003  b           . + 4 + (0x3 << 2)
label_206044:
    if (ctx->pc == 0x206044u) {
        ctx->pc = 0x206044u;
            // 0x206044: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x206048u;
        goto label_206048;
    }
    ctx->pc = 0x206040u;
    {
        const bool branch_taken_0x206040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206040u;
            // 0x206044: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206040) {
            ctx->pc = 0x206050u;
            goto label_206050;
        }
    }
    ctx->pc = 0x206048u;
label_206048:
    // 0x206048: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x206048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_20604c:
    // 0x20604c: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x20604cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
label_206050:
    // 0x206050: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x206050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_206054:
    // 0x206054: 0xc08085c  jal         func_202170
label_206058:
    if (ctx->pc == 0x206058u) {
        ctx->pc = 0x20605Cu;
        goto label_20605c;
    }
    ctx->pc = 0x206054u;
    SET_GPR_U32(ctx, 31, 0x20605Cu);
    ctx->pc = 0x202170u;
    if (runtime->hasFunction(0x202170u)) {
        auto targetFn = runtime->lookupFunction(0x202170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20605Cu; }
        if (ctx->pc != 0x20605Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNowPosItemExist__11CMenuInventFv_0x202170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20605Cu; }
        if (ctx->pc != 0x20605Cu) { return; }
    }
    ctx->pc = 0x20605Cu;
label_20605c:
    // 0x20605c: 0xaf829360  sw          $v0, -0x6CA0($gp)
    ctx->pc = 0x20605cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939488), GPR_U32(ctx, 2));
label_206060:
    // 0x206060: 0x8f829364  lw          $v0, -0x6C9C($gp)
    ctx->pc = 0x206060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939492)));
label_206064:
    // 0x206064: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_206068:
    if (ctx->pc == 0x206068u) {
        ctx->pc = 0x20606Cu;
        goto label_20606c;
    }
    ctx->pc = 0x206064u;
    {
        const bool branch_taken_0x206064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206064) {
            ctx->pc = 0x2060C8u;
            goto label_2060c8;
        }
    }
    ctx->pc = 0x20606Cu;
label_20606c:
    // 0x20606c: 0xdf839138  ld          $v1, -0x6EC8($gp)
    ctx->pc = 0x20606cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294938936)));
label_206070:
    // 0x206070: 0x27a50138  addiu       $a1, $sp, 0x138
    ctx->pc = 0x206070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_206074:
    // 0x206074: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x206074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_206078:
    // 0x206078: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x206078u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
label_20607c:
    // 0x20607c: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x20607cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
label_206080:
    // 0x206080: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_206084:
    if (ctx->pc == 0x206084u) {
        ctx->pc = 0x206088u;
        goto label_206088;
    }
    ctx->pc = 0x206080u;
    {
        const bool branch_taken_0x206080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x206080) {
            ctx->pc = 0x206098u;
            goto label_206098;
        }
    }
    ctx->pc = 0x206088u;
label_206088:
    // 0x206088: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x206088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_20608c:
    // 0x20608c: 0x8e86011c  lw          $a2, 0x11C($s4)
    ctx->pc = 0x20608cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_206090:
    // 0x206090: 0xc08b0e0  jal         func_22C380
label_206094:
    if (ctx->pc == 0x206094u) {
        ctx->pc = 0x206094u;
            // 0x206094: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x206098u;
        goto label_206098;
    }
    ctx->pc = 0x206090u;
    SET_GPR_U32(ctx, 31, 0x206098u);
    ctx->pc = 0x206094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206090u;
            // 0x206094: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C380u;
    if (runtime->hasFunction(0x22C380u)) {
        auto targetFn = runtime->lookupFunction(0x22C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206098u; }
        if (ctx->pc != 0x206098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPosMenuItemOnItemBrd__18CMenuPosDataManageFPiii_0x22c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206098u; }
        if (ctx->pc != 0x206098u) { return; }
    }
    ctx->pc = 0x206098u;
label_206098:
    // 0x206098: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x206098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20609c:
    // 0x20609c: 0x8f839364  lw          $v1, -0x6C9C($gp)
    ctx->pc = 0x20609cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939492)));
label_2060a0:
    // 0x2060a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2060a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2060a4:
    // 0x2060a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2060a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2060a8:
    // 0x2060a8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2060a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_2060ac:
    // 0x2060ac: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x2060acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2060b0:
    // 0x2060b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2060b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2060b4:
    // 0x2060b4: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2060b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_2060b8:
    // 0x2060b8: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x2060b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_2060bc:
    // 0x2060bc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2060c0:
    if (ctx->pc == 0x2060C0u) {
        ctx->pc = 0x2060C4u;
        goto label_2060c4;
    }
    ctx->pc = 0x2060BCu;
    {
        const bool branch_taken_0x2060bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2060bc) {
            ctx->pc = 0x2060C8u;
            goto label_2060c8;
        }
    }
    ctx->pc = 0x2060C4u;
label_2060c4:
    // 0x2060c4: 0xaf809360  sw          $zero, -0x6CA0($gp)
    ctx->pc = 0x2060c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939488), GPR_U32(ctx, 0));
label_2060c8:
    // 0x2060c8: 0x8e820ebc  lw          $v0, 0xEBC($s4)
    ctx->pc = 0x2060c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3772)));
label_2060cc:
    // 0x2060cc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2060d0:
    if (ctx->pc == 0x2060D0u) {
        ctx->pc = 0x2060D4u;
        goto label_2060d4;
    }
    ctx->pc = 0x2060CCu;
    {
        const bool branch_taken_0x2060cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2060cc) {
            ctx->pc = 0x206110u;
            goto label_206110;
        }
    }
    ctx->pc = 0x2060D4u;
label_2060d4:
    // 0x2060d4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2060d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2060d8:
    // 0x2060d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2060dc:
    if (ctx->pc == 0x2060DCu) {
        ctx->pc = 0x2060E0u;
        goto label_2060e0;
    }
    ctx->pc = 0x2060D8u;
    {
        const bool branch_taken_0x2060d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2060d8) {
            ctx->pc = 0x206110u;
            goto label_206110;
        }
    }
    ctx->pc = 0x2060E0u;
label_2060e0:
    // 0x2060e0: 0xc08b050  jal         func_22C140
label_2060e4:
    if (ctx->pc == 0x2060E4u) {
        ctx->pc = 0x2060E4u;
            // 0x2060e4: 0x8e840120  lw          $a0, 0x120($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
        ctx->pc = 0x2060E8u;
        goto label_2060e8;
    }
    ctx->pc = 0x2060E0u;
    SET_GPR_U32(ctx, 31, 0x2060E8u);
    ctx->pc = 0x2060E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2060E0u;
            // 0x2060e4: 0x8e840120  lw          $a0, 0x120($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C140u;
    if (runtime->hasFunction(0x22C140u)) {
        auto targetFn = runtime->lookupFunction(0x22C140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2060E8u; }
        if (ctx->pc != 0x2060E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Func_MenuItemBrdPosStep__Fi_0x22c140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2060E8u; }
        if (ctx->pc != 0x2060E8u) { return; }
    }
    ctx->pc = 0x2060E8u;
label_2060e8:
    // 0x2060e8: 0x8e840ebc  lw          $a0, 0xEBC($s4)
    ctx->pc = 0x2060e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3772)));
label_2060ec:
    // 0x2060ec: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2060ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2060f0:
    // 0x2060f0: 0xc089664  jal         func_225990
label_2060f4:
    if (ctx->pc == 0x2060F4u) {
        ctx->pc = 0x2060F4u;
            // 0x2060f4: 0x24a59820  addiu       $a1, $a1, -0x67E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940704));
        ctx->pc = 0x2060F8u;
        goto label_2060f8;
    }
    ctx->pc = 0x2060F0u;
    SET_GPR_U32(ctx, 31, 0x2060F8u);
    ctx->pc = 0x2060F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2060F0u;
            // 0x2060f4: 0x24a59820  addiu       $a1, $a1, -0x67E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2060F8u; }
        if (ctx->pc != 0x2060F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2060F8u; }
        if (ctx->pc != 0x2060F8u) { return; }
    }
    ctx->pc = 0x2060F8u;
label_2060f8:
    // 0x2060f8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2060f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2060fc:
    // 0x2060fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2060fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206100:
    // 0x206100: 0x8c25d8d0  lw          $a1, -0x2730($at)
    ctx->pc = 0x206100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957264)));
label_206104:
    // 0x206104: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x206104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206108:
    // 0x206108: 0xc08ae38  jal         func_22B8E0
label_20610c:
    if (ctx->pc == 0x20610Cu) {
        ctx->pc = 0x20610Cu;
            // 0x20610c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x206110u;
        goto label_206110;
    }
    ctx->pc = 0x206108u;
    SET_GPR_U32(ctx, 31, 0x206110u);
    ctx->pc = 0x20610Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206108u;
            // 0x20610c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B8E0u;
    if (runtime->hasFunction(0x22B8E0u)) {
        auto targetFn = runtime->lookupFunction(0x22B8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206110u; }
        if (ctx->pc != 0x206110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Func_MenuItemBrdPrepare__FP18MENUFORMPARTS_TYPEP13CGameDataUsedP13CGameDataUsedi_0x22b8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206110u; }
        if (ctx->pc != 0x206110u) { return; }
    }
    ctx->pc = 0x206110u;
label_206110:
    // 0x206110: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x206110u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_206114:
    // 0x206114: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x206114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_206118:
    // 0x206118: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
label_20611c:
    if (ctx->pc == 0x20611Cu) {
        ctx->pc = 0x206120u;
        goto label_206120;
    }
    ctx->pc = 0x206118u;
    {
        const bool branch_taken_0x206118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x206118) {
            ctx->pc = 0x206190u;
            goto label_206190;
        }
    }
    ctx->pc = 0x206120u;
label_206120:
    // 0x206120: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x206120u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_206124:
    // 0x206124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206128:
    // 0x206128: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_20612c:
    if (ctx->pc == 0x20612Cu) {
        ctx->pc = 0x206130u;
        goto label_206130;
    }
    ctx->pc = 0x206128u;
    {
        const bool branch_taken_0x206128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x206128) {
            ctx->pc = 0x206190u;
            goto label_206190;
        }
    }
    ctx->pc = 0x206130u;
label_206130:
    // 0x206130: 0x8e860104  lw          $a2, 0x104($s4)
    ctx->pc = 0x206130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
label_206134:
    // 0x206134: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x206134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_206138:
    // 0x206138: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x206138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_20613c:
    // 0x20613c: 0xc08b0f0  jal         func_22C3C0
label_206140:
    if (ctx->pc == 0x206140u) {
        ctx->pc = 0x206140u;
            // 0x206140: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x206144u;
        goto label_206144;
    }
    ctx->pc = 0x20613Cu;
    SET_GPR_U32(ctx, 31, 0x206144u);
    ctx->pc = 0x206140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20613Cu;
            // 0x206140: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C3C0u;
    if (runtime->hasFunction(0x22C3C0u)) {
        auto targetFn = runtime->lookupFunction(0x22C3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206144u; }
        if (ctx->pc != 0x206144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPosMenuItemBrdForEffect__18CMenuPosDataManageFPiii_0x22c3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206144u; }
        if (ctx->pc != 0x206144u) { return; }
    }
    ctx->pc = 0x206144u;
label_206144:
    // 0x206144: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x206144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_206148:
    // 0x206148: 0x87a30140  lh          $v1, 0x140($sp)
    ctx->pc = 0x206148u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
label_20614c:
    // 0x20614c: 0x8c227ab8  lw          $v0, 0x7AB8($at)
    ctx->pc = 0x20614cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31416)));
label_206150:
    // 0x206150: 0x27a40144  addiu       $a0, $sp, 0x144
    ctx->pc = 0x206150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_206154:
    // 0x206154: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x206154u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
label_206158:
    // 0x206158: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x206158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_20615c:
    // 0x20615c: 0x8c227ab8  lw          $v0, 0x7AB8($at)
    ctx->pc = 0x20615cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31416)));
label_206160:
    // 0x206160: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x206160u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_206164:
    // 0x206164: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x206164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_206168:
    // 0x206168: 0xa4430016  sh          $v1, 0x16($v0)
    ctx->pc = 0x206168u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 3));
label_20616c:
    // 0x20616c: 0x87a30140  lh          $v1, 0x140($sp)
    ctx->pc = 0x20616cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
label_206170:
    // 0x206170: 0x8c227abc  lw          $v0, 0x7ABC($at)
    ctx->pc = 0x206170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31420)));
label_206174:
    // 0x206174: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x206174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_206178:
    // 0x206178: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x206178u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
label_20617c:
    // 0x20617c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x20617cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_206180:
    // 0x206180: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x206180u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_206184:
    // 0x206184: 0x8c227abc  lw          $v0, 0x7ABC($at)
    ctx->pc = 0x206184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31420)));
label_206188:
    // 0x206188: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x206188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20618c:
    // 0x20618c: 0xa4430016  sh          $v1, 0x16($v0)
    ctx->pc = 0x20618cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 3));
label_206190:
    // 0x206190: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x206190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_206194:
    // 0x206194: 0xc08c258  jal         func_230960
label_206198:
    if (ctx->pc == 0x206198u) {
        ctx->pc = 0x206198u;
            // 0x206198: 0x8c247ab8  lw          $a0, 0x7AB8($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31416)));
        ctx->pc = 0x20619Cu;
        goto label_20619c;
    }
    ctx->pc = 0x206194u;
    SET_GPR_U32(ctx, 31, 0x20619Cu);
    ctx->pc = 0x206198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206194u;
            // 0x206198: 0x8c247ab8  lw          $a0, 0x7AB8($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230960u;
    if (runtime->hasFunction(0x230960u)) {
        auto targetFn = runtime->lookupFunction(0x230960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20619Cu; }
        if (ctx->pc != 0x20619Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__11CMenuEffectFv_0x230960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20619Cu; }
        if (ctx->pc != 0x20619Cu) { return; }
    }
    ctx->pc = 0x20619Cu;
label_20619c:
    // 0x20619c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x20619cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_2061a0:
    // 0x2061a0: 0xc08c258  jal         func_230960
label_2061a4:
    if (ctx->pc == 0x2061A4u) {
        ctx->pc = 0x2061A4u;
            // 0x2061a4: 0x8c247abc  lw          $a0, 0x7ABC($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31420)));
        ctx->pc = 0x2061A8u;
        goto label_2061a8;
    }
    ctx->pc = 0x2061A0u;
    SET_GPR_U32(ctx, 31, 0x2061A8u);
    ctx->pc = 0x2061A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2061A0u;
            // 0x2061a4: 0x8c247abc  lw          $a0, 0x7ABC($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31420)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230960u;
    if (runtime->hasFunction(0x230960u)) {
        auto targetFn = runtime->lookupFunction(0x230960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2061A8u; }
        if (ctx->pc != 0x2061A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__11CMenuEffectFv_0x230960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2061A8u; }
        if (ctx->pc != 0x2061A8u) { return; }
    }
    ctx->pc = 0x2061A8u;
label_2061a8:
    // 0x2061a8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2061a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2061ac:
    // 0x2061ac: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2061acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2061b0:
    // 0x2061b0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2061b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2061b4:
    // 0x2061b4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2061b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2061b8:
    // 0x2061b8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2061b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2061bc:
    // 0x2061bc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2061bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2061c0:
    // 0x2061c0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2061c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2061c4:
    // 0x2061c4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2061c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2061c8:
    // 0x2061c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2061c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2061cc:
    // 0x2061cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2061ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2061d0:
    // 0x2061d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2061d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2061d4:
    // 0x2061d4: 0x3e00008  jr          $ra
label_2061d8:
    if (ctx->pc == 0x2061D8u) {
        ctx->pc = 0x2061D8u;
            // 0x2061d8: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x2061DCu;
        goto label_fallthrough_0x2061d4;
    }
    ctx->pc = 0x2061D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2061D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2061D4u;
            // 0x2061d8: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2061d4:
    ctx->pc = 0x2061DCu;
}
