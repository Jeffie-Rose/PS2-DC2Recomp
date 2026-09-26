#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BattleLoop__FP6CSceneP11CPadControl
// Address: 0x300f50 - 0x301698
void BattleLoop__FP6CSceneP11CPadControl_0x300f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BattleLoop__FP6CSceneP11CPadControl_0x300f50");
#endif

    switch (ctx->pc) {
        case 0x300f50u: goto label_300f50;
        case 0x300f54u: goto label_300f54;
        case 0x300f58u: goto label_300f58;
        case 0x300f5cu: goto label_300f5c;
        case 0x300f60u: goto label_300f60;
        case 0x300f64u: goto label_300f64;
        case 0x300f68u: goto label_300f68;
        case 0x300f6cu: goto label_300f6c;
        case 0x300f70u: goto label_300f70;
        case 0x300f74u: goto label_300f74;
        case 0x300f78u: goto label_300f78;
        case 0x300f7cu: goto label_300f7c;
        case 0x300f80u: goto label_300f80;
        case 0x300f84u: goto label_300f84;
        case 0x300f88u: goto label_300f88;
        case 0x300f8cu: goto label_300f8c;
        case 0x300f90u: goto label_300f90;
        case 0x300f94u: goto label_300f94;
        case 0x300f98u: goto label_300f98;
        case 0x300f9cu: goto label_300f9c;
        case 0x300fa0u: goto label_300fa0;
        case 0x300fa4u: goto label_300fa4;
        case 0x300fa8u: goto label_300fa8;
        case 0x300facu: goto label_300fac;
        case 0x300fb0u: goto label_300fb0;
        case 0x300fb4u: goto label_300fb4;
        case 0x300fb8u: goto label_300fb8;
        case 0x300fbcu: goto label_300fbc;
        case 0x300fc0u: goto label_300fc0;
        case 0x300fc4u: goto label_300fc4;
        case 0x300fc8u: goto label_300fc8;
        case 0x300fccu: goto label_300fcc;
        case 0x300fd0u: goto label_300fd0;
        case 0x300fd4u: goto label_300fd4;
        case 0x300fd8u: goto label_300fd8;
        case 0x300fdcu: goto label_300fdc;
        case 0x300fe0u: goto label_300fe0;
        case 0x300fe4u: goto label_300fe4;
        case 0x300fe8u: goto label_300fe8;
        case 0x300fecu: goto label_300fec;
        case 0x300ff0u: goto label_300ff0;
        case 0x300ff4u: goto label_300ff4;
        case 0x300ff8u: goto label_300ff8;
        case 0x300ffcu: goto label_300ffc;
        case 0x301000u: goto label_301000;
        case 0x301004u: goto label_301004;
        case 0x301008u: goto label_301008;
        case 0x30100cu: goto label_30100c;
        case 0x301010u: goto label_301010;
        case 0x301014u: goto label_301014;
        case 0x301018u: goto label_301018;
        case 0x30101cu: goto label_30101c;
        case 0x301020u: goto label_301020;
        case 0x301024u: goto label_301024;
        case 0x301028u: goto label_301028;
        case 0x30102cu: goto label_30102c;
        case 0x301030u: goto label_301030;
        case 0x301034u: goto label_301034;
        case 0x301038u: goto label_301038;
        case 0x30103cu: goto label_30103c;
        case 0x301040u: goto label_301040;
        case 0x301044u: goto label_301044;
        case 0x301048u: goto label_301048;
        case 0x30104cu: goto label_30104c;
        case 0x301050u: goto label_301050;
        case 0x301054u: goto label_301054;
        case 0x301058u: goto label_301058;
        case 0x30105cu: goto label_30105c;
        case 0x301060u: goto label_301060;
        case 0x301064u: goto label_301064;
        case 0x301068u: goto label_301068;
        case 0x30106cu: goto label_30106c;
        case 0x301070u: goto label_301070;
        case 0x301074u: goto label_301074;
        case 0x301078u: goto label_301078;
        case 0x30107cu: goto label_30107c;
        case 0x301080u: goto label_301080;
        case 0x301084u: goto label_301084;
        case 0x301088u: goto label_301088;
        case 0x30108cu: goto label_30108c;
        case 0x301090u: goto label_301090;
        case 0x301094u: goto label_301094;
        case 0x301098u: goto label_301098;
        case 0x30109cu: goto label_30109c;
        case 0x3010a0u: goto label_3010a0;
        case 0x3010a4u: goto label_3010a4;
        case 0x3010a8u: goto label_3010a8;
        case 0x3010acu: goto label_3010ac;
        case 0x3010b0u: goto label_3010b0;
        case 0x3010b4u: goto label_3010b4;
        case 0x3010b8u: goto label_3010b8;
        case 0x3010bcu: goto label_3010bc;
        case 0x3010c0u: goto label_3010c0;
        case 0x3010c4u: goto label_3010c4;
        case 0x3010c8u: goto label_3010c8;
        case 0x3010ccu: goto label_3010cc;
        case 0x3010d0u: goto label_3010d0;
        case 0x3010d4u: goto label_3010d4;
        case 0x3010d8u: goto label_3010d8;
        case 0x3010dcu: goto label_3010dc;
        case 0x3010e0u: goto label_3010e0;
        case 0x3010e4u: goto label_3010e4;
        case 0x3010e8u: goto label_3010e8;
        case 0x3010ecu: goto label_3010ec;
        case 0x3010f0u: goto label_3010f0;
        case 0x3010f4u: goto label_3010f4;
        case 0x3010f8u: goto label_3010f8;
        case 0x3010fcu: goto label_3010fc;
        case 0x301100u: goto label_301100;
        case 0x301104u: goto label_301104;
        case 0x301108u: goto label_301108;
        case 0x30110cu: goto label_30110c;
        case 0x301110u: goto label_301110;
        case 0x301114u: goto label_301114;
        case 0x301118u: goto label_301118;
        case 0x30111cu: goto label_30111c;
        case 0x301120u: goto label_301120;
        case 0x301124u: goto label_301124;
        case 0x301128u: goto label_301128;
        case 0x30112cu: goto label_30112c;
        case 0x301130u: goto label_301130;
        case 0x301134u: goto label_301134;
        case 0x301138u: goto label_301138;
        case 0x30113cu: goto label_30113c;
        case 0x301140u: goto label_301140;
        case 0x301144u: goto label_301144;
        case 0x301148u: goto label_301148;
        case 0x30114cu: goto label_30114c;
        case 0x301150u: goto label_301150;
        case 0x301154u: goto label_301154;
        case 0x301158u: goto label_301158;
        case 0x30115cu: goto label_30115c;
        case 0x301160u: goto label_301160;
        case 0x301164u: goto label_301164;
        case 0x301168u: goto label_301168;
        case 0x30116cu: goto label_30116c;
        case 0x301170u: goto label_301170;
        case 0x301174u: goto label_301174;
        case 0x301178u: goto label_301178;
        case 0x30117cu: goto label_30117c;
        case 0x301180u: goto label_301180;
        case 0x301184u: goto label_301184;
        case 0x301188u: goto label_301188;
        case 0x30118cu: goto label_30118c;
        case 0x301190u: goto label_301190;
        case 0x301194u: goto label_301194;
        case 0x301198u: goto label_301198;
        case 0x30119cu: goto label_30119c;
        case 0x3011a0u: goto label_3011a0;
        case 0x3011a4u: goto label_3011a4;
        case 0x3011a8u: goto label_3011a8;
        case 0x3011acu: goto label_3011ac;
        case 0x3011b0u: goto label_3011b0;
        case 0x3011b4u: goto label_3011b4;
        case 0x3011b8u: goto label_3011b8;
        case 0x3011bcu: goto label_3011bc;
        case 0x3011c0u: goto label_3011c0;
        case 0x3011c4u: goto label_3011c4;
        case 0x3011c8u: goto label_3011c8;
        case 0x3011ccu: goto label_3011cc;
        case 0x3011d0u: goto label_3011d0;
        case 0x3011d4u: goto label_3011d4;
        case 0x3011d8u: goto label_3011d8;
        case 0x3011dcu: goto label_3011dc;
        case 0x3011e0u: goto label_3011e0;
        case 0x3011e4u: goto label_3011e4;
        case 0x3011e8u: goto label_3011e8;
        case 0x3011ecu: goto label_3011ec;
        case 0x3011f0u: goto label_3011f0;
        case 0x3011f4u: goto label_3011f4;
        case 0x3011f8u: goto label_3011f8;
        case 0x3011fcu: goto label_3011fc;
        case 0x301200u: goto label_301200;
        case 0x301204u: goto label_301204;
        case 0x301208u: goto label_301208;
        case 0x30120cu: goto label_30120c;
        case 0x301210u: goto label_301210;
        case 0x301214u: goto label_301214;
        case 0x301218u: goto label_301218;
        case 0x30121cu: goto label_30121c;
        case 0x301220u: goto label_301220;
        case 0x301224u: goto label_301224;
        case 0x301228u: goto label_301228;
        case 0x30122cu: goto label_30122c;
        case 0x301230u: goto label_301230;
        case 0x301234u: goto label_301234;
        case 0x301238u: goto label_301238;
        case 0x30123cu: goto label_30123c;
        case 0x301240u: goto label_301240;
        case 0x301244u: goto label_301244;
        case 0x301248u: goto label_301248;
        case 0x30124cu: goto label_30124c;
        case 0x301250u: goto label_301250;
        case 0x301254u: goto label_301254;
        case 0x301258u: goto label_301258;
        case 0x30125cu: goto label_30125c;
        case 0x301260u: goto label_301260;
        case 0x301264u: goto label_301264;
        case 0x301268u: goto label_301268;
        case 0x30126cu: goto label_30126c;
        case 0x301270u: goto label_301270;
        case 0x301274u: goto label_301274;
        case 0x301278u: goto label_301278;
        case 0x30127cu: goto label_30127c;
        case 0x301280u: goto label_301280;
        case 0x301284u: goto label_301284;
        case 0x301288u: goto label_301288;
        case 0x30128cu: goto label_30128c;
        case 0x301290u: goto label_301290;
        case 0x301294u: goto label_301294;
        case 0x301298u: goto label_301298;
        case 0x30129cu: goto label_30129c;
        case 0x3012a0u: goto label_3012a0;
        case 0x3012a4u: goto label_3012a4;
        case 0x3012a8u: goto label_3012a8;
        case 0x3012acu: goto label_3012ac;
        case 0x3012b0u: goto label_3012b0;
        case 0x3012b4u: goto label_3012b4;
        case 0x3012b8u: goto label_3012b8;
        case 0x3012bcu: goto label_3012bc;
        case 0x3012c0u: goto label_3012c0;
        case 0x3012c4u: goto label_3012c4;
        case 0x3012c8u: goto label_3012c8;
        case 0x3012ccu: goto label_3012cc;
        case 0x3012d0u: goto label_3012d0;
        case 0x3012d4u: goto label_3012d4;
        case 0x3012d8u: goto label_3012d8;
        case 0x3012dcu: goto label_3012dc;
        case 0x3012e0u: goto label_3012e0;
        case 0x3012e4u: goto label_3012e4;
        case 0x3012e8u: goto label_3012e8;
        case 0x3012ecu: goto label_3012ec;
        case 0x3012f0u: goto label_3012f0;
        case 0x3012f4u: goto label_3012f4;
        case 0x3012f8u: goto label_3012f8;
        case 0x3012fcu: goto label_3012fc;
        case 0x301300u: goto label_301300;
        case 0x301304u: goto label_301304;
        case 0x301308u: goto label_301308;
        case 0x30130cu: goto label_30130c;
        case 0x301310u: goto label_301310;
        case 0x301314u: goto label_301314;
        case 0x301318u: goto label_301318;
        case 0x30131cu: goto label_30131c;
        case 0x301320u: goto label_301320;
        case 0x301324u: goto label_301324;
        case 0x301328u: goto label_301328;
        case 0x30132cu: goto label_30132c;
        case 0x301330u: goto label_301330;
        case 0x301334u: goto label_301334;
        case 0x301338u: goto label_301338;
        case 0x30133cu: goto label_30133c;
        case 0x301340u: goto label_301340;
        case 0x301344u: goto label_301344;
        case 0x301348u: goto label_301348;
        case 0x30134cu: goto label_30134c;
        case 0x301350u: goto label_301350;
        case 0x301354u: goto label_301354;
        case 0x301358u: goto label_301358;
        case 0x30135cu: goto label_30135c;
        case 0x301360u: goto label_301360;
        case 0x301364u: goto label_301364;
        case 0x301368u: goto label_301368;
        case 0x30136cu: goto label_30136c;
        case 0x301370u: goto label_301370;
        case 0x301374u: goto label_301374;
        case 0x301378u: goto label_301378;
        case 0x30137cu: goto label_30137c;
        case 0x301380u: goto label_301380;
        case 0x301384u: goto label_301384;
        case 0x301388u: goto label_301388;
        case 0x30138cu: goto label_30138c;
        case 0x301390u: goto label_301390;
        case 0x301394u: goto label_301394;
        case 0x301398u: goto label_301398;
        case 0x30139cu: goto label_30139c;
        case 0x3013a0u: goto label_3013a0;
        case 0x3013a4u: goto label_3013a4;
        case 0x3013a8u: goto label_3013a8;
        case 0x3013acu: goto label_3013ac;
        case 0x3013b0u: goto label_3013b0;
        case 0x3013b4u: goto label_3013b4;
        case 0x3013b8u: goto label_3013b8;
        case 0x3013bcu: goto label_3013bc;
        case 0x3013c0u: goto label_3013c0;
        case 0x3013c4u: goto label_3013c4;
        case 0x3013c8u: goto label_3013c8;
        case 0x3013ccu: goto label_3013cc;
        case 0x3013d0u: goto label_3013d0;
        case 0x3013d4u: goto label_3013d4;
        case 0x3013d8u: goto label_3013d8;
        case 0x3013dcu: goto label_3013dc;
        case 0x3013e0u: goto label_3013e0;
        case 0x3013e4u: goto label_3013e4;
        case 0x3013e8u: goto label_3013e8;
        case 0x3013ecu: goto label_3013ec;
        case 0x3013f0u: goto label_3013f0;
        case 0x3013f4u: goto label_3013f4;
        case 0x3013f8u: goto label_3013f8;
        case 0x3013fcu: goto label_3013fc;
        case 0x301400u: goto label_301400;
        case 0x301404u: goto label_301404;
        case 0x301408u: goto label_301408;
        case 0x30140cu: goto label_30140c;
        case 0x301410u: goto label_301410;
        case 0x301414u: goto label_301414;
        case 0x301418u: goto label_301418;
        case 0x30141cu: goto label_30141c;
        case 0x301420u: goto label_301420;
        case 0x301424u: goto label_301424;
        case 0x301428u: goto label_301428;
        case 0x30142cu: goto label_30142c;
        case 0x301430u: goto label_301430;
        case 0x301434u: goto label_301434;
        case 0x301438u: goto label_301438;
        case 0x30143cu: goto label_30143c;
        case 0x301440u: goto label_301440;
        case 0x301444u: goto label_301444;
        case 0x301448u: goto label_301448;
        case 0x30144cu: goto label_30144c;
        case 0x301450u: goto label_301450;
        case 0x301454u: goto label_301454;
        case 0x301458u: goto label_301458;
        case 0x30145cu: goto label_30145c;
        case 0x301460u: goto label_301460;
        case 0x301464u: goto label_301464;
        case 0x301468u: goto label_301468;
        case 0x30146cu: goto label_30146c;
        case 0x301470u: goto label_301470;
        case 0x301474u: goto label_301474;
        case 0x301478u: goto label_301478;
        case 0x30147cu: goto label_30147c;
        case 0x301480u: goto label_301480;
        case 0x301484u: goto label_301484;
        case 0x301488u: goto label_301488;
        case 0x30148cu: goto label_30148c;
        case 0x301490u: goto label_301490;
        case 0x301494u: goto label_301494;
        case 0x301498u: goto label_301498;
        case 0x30149cu: goto label_30149c;
        case 0x3014a0u: goto label_3014a0;
        case 0x3014a4u: goto label_3014a4;
        case 0x3014a8u: goto label_3014a8;
        case 0x3014acu: goto label_3014ac;
        case 0x3014b0u: goto label_3014b0;
        case 0x3014b4u: goto label_3014b4;
        case 0x3014b8u: goto label_3014b8;
        case 0x3014bcu: goto label_3014bc;
        case 0x3014c0u: goto label_3014c0;
        case 0x3014c4u: goto label_3014c4;
        case 0x3014c8u: goto label_3014c8;
        case 0x3014ccu: goto label_3014cc;
        case 0x3014d0u: goto label_3014d0;
        case 0x3014d4u: goto label_3014d4;
        case 0x3014d8u: goto label_3014d8;
        case 0x3014dcu: goto label_3014dc;
        case 0x3014e0u: goto label_3014e0;
        case 0x3014e4u: goto label_3014e4;
        case 0x3014e8u: goto label_3014e8;
        case 0x3014ecu: goto label_3014ec;
        case 0x3014f0u: goto label_3014f0;
        case 0x3014f4u: goto label_3014f4;
        case 0x3014f8u: goto label_3014f8;
        case 0x3014fcu: goto label_3014fc;
        case 0x301500u: goto label_301500;
        case 0x301504u: goto label_301504;
        case 0x301508u: goto label_301508;
        case 0x30150cu: goto label_30150c;
        case 0x301510u: goto label_301510;
        case 0x301514u: goto label_301514;
        case 0x301518u: goto label_301518;
        case 0x30151cu: goto label_30151c;
        case 0x301520u: goto label_301520;
        case 0x301524u: goto label_301524;
        case 0x301528u: goto label_301528;
        case 0x30152cu: goto label_30152c;
        case 0x301530u: goto label_301530;
        case 0x301534u: goto label_301534;
        case 0x301538u: goto label_301538;
        case 0x30153cu: goto label_30153c;
        case 0x301540u: goto label_301540;
        case 0x301544u: goto label_301544;
        case 0x301548u: goto label_301548;
        case 0x30154cu: goto label_30154c;
        case 0x301550u: goto label_301550;
        case 0x301554u: goto label_301554;
        case 0x301558u: goto label_301558;
        case 0x30155cu: goto label_30155c;
        case 0x301560u: goto label_301560;
        case 0x301564u: goto label_301564;
        case 0x301568u: goto label_301568;
        case 0x30156cu: goto label_30156c;
        case 0x301570u: goto label_301570;
        case 0x301574u: goto label_301574;
        case 0x301578u: goto label_301578;
        case 0x30157cu: goto label_30157c;
        case 0x301580u: goto label_301580;
        case 0x301584u: goto label_301584;
        case 0x301588u: goto label_301588;
        case 0x30158cu: goto label_30158c;
        case 0x301590u: goto label_301590;
        case 0x301594u: goto label_301594;
        case 0x301598u: goto label_301598;
        case 0x30159cu: goto label_30159c;
        case 0x3015a0u: goto label_3015a0;
        case 0x3015a4u: goto label_3015a4;
        case 0x3015a8u: goto label_3015a8;
        case 0x3015acu: goto label_3015ac;
        case 0x3015b0u: goto label_3015b0;
        case 0x3015b4u: goto label_3015b4;
        case 0x3015b8u: goto label_3015b8;
        case 0x3015bcu: goto label_3015bc;
        case 0x3015c0u: goto label_3015c0;
        case 0x3015c4u: goto label_3015c4;
        case 0x3015c8u: goto label_3015c8;
        case 0x3015ccu: goto label_3015cc;
        case 0x3015d0u: goto label_3015d0;
        case 0x3015d4u: goto label_3015d4;
        case 0x3015d8u: goto label_3015d8;
        case 0x3015dcu: goto label_3015dc;
        case 0x3015e0u: goto label_3015e0;
        case 0x3015e4u: goto label_3015e4;
        case 0x3015e8u: goto label_3015e8;
        case 0x3015ecu: goto label_3015ec;
        case 0x3015f0u: goto label_3015f0;
        case 0x3015f4u: goto label_3015f4;
        case 0x3015f8u: goto label_3015f8;
        case 0x3015fcu: goto label_3015fc;
        case 0x301600u: goto label_301600;
        case 0x301604u: goto label_301604;
        case 0x301608u: goto label_301608;
        case 0x30160cu: goto label_30160c;
        case 0x301610u: goto label_301610;
        case 0x301614u: goto label_301614;
        case 0x301618u: goto label_301618;
        case 0x30161cu: goto label_30161c;
        case 0x301620u: goto label_301620;
        case 0x301624u: goto label_301624;
        case 0x301628u: goto label_301628;
        case 0x30162cu: goto label_30162c;
        case 0x301630u: goto label_301630;
        case 0x301634u: goto label_301634;
        case 0x301638u: goto label_301638;
        case 0x30163cu: goto label_30163c;
        case 0x301640u: goto label_301640;
        case 0x301644u: goto label_301644;
        case 0x301648u: goto label_301648;
        case 0x30164cu: goto label_30164c;
        case 0x301650u: goto label_301650;
        case 0x301654u: goto label_301654;
        case 0x301658u: goto label_301658;
        case 0x30165cu: goto label_30165c;
        case 0x301660u: goto label_301660;
        case 0x301664u: goto label_301664;
        case 0x301668u: goto label_301668;
        case 0x30166cu: goto label_30166c;
        case 0x301670u: goto label_301670;
        case 0x301674u: goto label_301674;
        case 0x301678u: goto label_301678;
        case 0x30167cu: goto label_30167c;
        case 0x301680u: goto label_301680;
        case 0x301684u: goto label_301684;
        case 0x301688u: goto label_301688;
        case 0x30168cu: goto label_30168c;
        case 0x301690u: goto label_301690;
        case 0x301694u: goto label_301694;
        default: break;
    }

    ctx->pc = 0x300f50u;

label_300f50:
    // 0x300f50: 0x3c01fffe  lui         $at, 0xFFFE
    ctx->pc = 0x300f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65534 << 16));
label_300f54:
    // 0x300f54: 0x3421bf50  ori         $at, $at, 0xBF50
    ctx->pc = 0x300f54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48976);
label_300f58:
    // 0x300f58: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x300f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
label_300f5c:
    // 0x300f5c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x300f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_300f60:
    // 0x300f60: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x300f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_300f64:
    // 0x300f64: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x300f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_300f68:
    // 0x300f68: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x300f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_300f6c:
    // 0x300f6c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x300f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_300f70:
    // 0x300f70: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x300f70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_300f74:
    // 0x300f74: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x300f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_300f78:
    // 0x300f78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x300f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_300f7c:
    // 0x300f7c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x300f7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_300f80:
    // 0x300f80: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x300f80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_300f84:
    // 0x300f84: 0x8c852e50  lw          $a1, 0x2E50($a0)
    ctx->pc = 0x300f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
label_300f88:
    // 0x300f88: 0xc0a0ed8  jal         func_283B60
label_300f8c:
    if (ctx->pc == 0x300F8Cu) {
        ctx->pc = 0x300F8Cu;
            // 0x300f8c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300F90u;
        goto label_300f90;
    }
    ctx->pc = 0x300F88u;
    SET_GPR_U32(ctx, 31, 0x300F90u);
    ctx->pc = 0x300F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300F88u;
            // 0x300f8c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300F90u; }
        if (ctx->pc != 0x300F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300F90u; }
        if (ctx->pc != 0x300F90u) { return; }
    }
    ctx->pc = 0x300F90u;
label_300f90:
    // 0x300f90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x300f90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300f94:
    // 0x300f94: 0x124001b3  beqz        $s2, . + 4 + (0x1B3 << 2)
label_300f98:
    if (ctx->pc == 0x300F98u) {
        ctx->pc = 0x300F98u;
            // 0x300f98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300F9Cu;
        goto label_300f9c;
    }
    ctx->pc = 0x300F94u;
    {
        const bool branch_taken_0x300f94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x300F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300F94u;
            // 0x300f98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300f94) {
            ctx->pc = 0x301664u;
            goto label_301664;
        }
    }
    ctx->pc = 0x300F9Cu;
label_300f9c:
    // 0x300f9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x300f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_300fa0:
    // 0x300fa0: 0xc0693a0  jal         func_1A4E80
label_300fa4:
    if (ctx->pc == 0x300FA4u) {
        ctx->pc = 0x300FA4u;
            // 0x300fa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300FA8u;
        goto label_300fa8;
    }
    ctx->pc = 0x300FA0u;
    SET_GPR_U32(ctx, 31, 0x300FA8u);
    ctx->pc = 0x300FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300FA0u;
            // 0x300fa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E80u;
    if (runtime->hasFunction(0x1A4E80u)) {
        auto targetFn = runtime->lookupFunction(0x1A4E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300FA8u; }
        if (ctx->pc != 0x300FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditCameraControl__FP6CSceneP11CPadControlPA4_f_0x1a4e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300FA8u; }
        if (ctx->pc != 0x300FA8u) { return; }
    }
    ctx->pc = 0x300FA8u;
label_300fa8:
    // 0x300fa8: 0xc052334  jal         func_148CD0
label_300fac:
    if (ctx->pc == 0x300FACu) {
        ctx->pc = 0x300FB0u;
        goto label_300fb0;
    }
    ctx->pc = 0x300FA8u;
    SET_GPR_U32(ctx, 31, 0x300FB0u);
    ctx->pc = 0x148CD0u;
    if (runtime->hasFunction(0x148CD0u)) {
        auto targetFn = runtime->lookupFunction(0x148CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300FB0u; }
        if (ctx->pc != 0x300FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBG__Fv_0x148cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300FB0u; }
        if (ctx->pc != 0x300FB0u) { return; }
    }
    ctx->pc = 0x300FB0u;
label_300fb0:
    // 0x300fb0: 0x24040069  addiu       $a0, $zero, 0x69
    ctx->pc = 0x300fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_300fb4:
    // 0x300fb4: 0xc0c6564  jal         func_319590
label_300fb8:
    if (ctx->pc == 0x300FB8u) {
        ctx->pc = 0x300FB8u;
            // 0x300fb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x300FBCu;
        goto label_300fbc;
    }
    ctx->pc = 0x300FB4u;
    SET_GPR_U32(ctx, 31, 0x300FBCu);
    ctx->pc = 0x300FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300FB4u;
            // 0x300fb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x319590u;
    if (runtime->hasFunction(0x319590u)) {
        auto targetFn = runtime->lookupFunction(0x319590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300FBCu; }
        if (ctx->pc != 0x300FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShowHelpMes__Fii_0x319590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300FBCu; }
        if (ctx->pc != 0x300FBCu) { return; }
    }
    ctx->pc = 0x300FBCu;
label_300fbc:
    // 0x300fbc: 0x8f829fd4  lw          $v0, -0x602C($gp)
    ctx->pc = 0x300fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942676)));
label_300fc0:
    // 0x300fc0: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
label_300fc4:
    if (ctx->pc == 0x300FC4u) {
        ctx->pc = 0x300FC4u;
            // 0x300fc4: 0x26842c70  addiu       $a0, $s4, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 11376));
        ctx->pc = 0x300FC8u;
        goto label_300fc8;
    }
    ctx->pc = 0x300FC0u;
    {
        const bool branch_taken_0x300fc0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x300FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300FC0u;
            // 0x300fc4: 0x26842c70  addiu       $a0, $s4, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 11376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300fc0) {
            ctx->pc = 0x301030u;
            goto label_301030;
        }
    }
    ctx->pc = 0x300FC8u;
label_300fc8:
    // 0x300fc8: 0xc05f65c  jal         func_17D970
label_300fcc:
    if (ctx->pc == 0x300FCCu) {
        ctx->pc = 0x300FD0u;
        goto label_300fd0;
    }
    ctx->pc = 0x300FC8u;
    SET_GPR_U32(ctx, 31, 0x300FD0u);
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300FD0u; }
        if (ctx->pc != 0x300FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300FD0u; }
        if (ctx->pc != 0x300FD0u) { return; }
    }
    ctx->pc = 0x300FD0u;
label_300fd0:
    // 0x300fd0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_300fd4:
    if (ctx->pc == 0x300FD4u) {
        ctx->pc = 0x300FD4u;
            // 0x300fd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300FD8u;
        goto label_300fd8;
    }
    ctx->pc = 0x300FD0u;
    {
        const bool branch_taken_0x300fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x300FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300FD0u;
            // 0x300fd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300fd0) {
            ctx->pc = 0x301030u;
            goto label_301030;
        }
    }
    ctx->pc = 0x300FD8u;
label_300fd8:
    // 0x300fd8: 0xc0a98a0  jal         func_2A6280
label_300fdc:
    if (ctx->pc == 0x300FDCu) {
        ctx->pc = 0x300FDCu;
            // 0x300fdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300FE0u;
        goto label_300fe0;
    }
    ctx->pc = 0x300FD8u;
    SET_GPR_U32(ctx, 31, 0x300FE0u);
    ctx->pc = 0x300FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300FD8u;
            // 0x300fdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300FE0u; }
        if (ctx->pc != 0x300FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300FE0u; }
        if (ctx->pc != 0x300FE0u) { return; }
    }
    ctx->pc = 0x300FE0u;
label_300fe0:
    // 0x300fe0: 0xc0a9700  jal         func_2A5C00
label_300fe4:
    if (ctx->pc == 0x300FE4u) {
        ctx->pc = 0x300FE4u;
            // 0x300fe4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300FE8u;
        goto label_300fe8;
    }
    ctx->pc = 0x300FE0u;
    SET_GPR_U32(ctx, 31, 0x300FE8u);
    ctx->pc = 0x300FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300FE0u;
            // 0x300fe4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5C00u;
    if (runtime->hasFunction(0x2A5C00u)) {
        auto targetFn = runtime->lookupFunction(0x2A5C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300FE8u; }
        if (ctx->pc != 0x300FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitBGM__6CSceneFv_0x2a5c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300FE8u; }
        if (ctx->pc != 0x300FE8u) { return; }
    }
    ctx->pc = 0x300FE8u;
label_300fe8:
    // 0x300fe8: 0x8f859fd4  lw          $a1, -0x602C($gp)
    ctx->pc = 0x300fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942676)));
label_300fec:
    // 0x300fec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x300fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_300ff0:
    // 0x300ff0: 0xc0b1f3c  jal         func_2C7CF0
label_300ff4:
    if (ctx->pc == 0x300FF4u) {
        ctx->pc = 0x300FF4u;
            // 0x300ff4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300FF8u;
        goto label_300ff8;
    }
    ctx->pc = 0x300FF0u;
    SET_GPR_U32(ctx, 31, 0x300FF8u);
    ctx->pc = 0x300FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300FF0u;
            // 0x300ff4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7CF0u;
    if (runtime->hasFunction(0x2C7CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2C7CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300FF8u; }
        if (ctx->pc != 0x300FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunEvent__6CSceneFiP15CSceneEventData_0x2c7cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300FF8u; }
        if (ctx->pc != 0x300FF8u) { return; }
    }
    ctx->pc = 0x300FF8u;
label_300ff8:
    // 0x300ff8: 0xc0bf154  jal         func_2FC550
label_300ffc:
    if (ctx->pc == 0x300FFCu) {
        ctx->pc = 0x301000u;
        goto label_301000;
    }
    ctx->pc = 0x300FF8u;
    SET_GPR_U32(ctx, 31, 0x301000u);
    ctx->pc = 0x2FC550u;
    if (runtime->hasFunction(0x2FC550u)) {
        auto targetFn = runtime->lookupFunction(0x2FC550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301000u; }
        if (ctx->pc != 0x301000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EsaInit__Fv_0x2fc550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301000u; }
        if (ctx->pc != 0x301000u) { return; }
    }
    ctx->pc = 0x301000u;
label_301000:
    // 0x301000: 0xc064220  jal         func_190880
label_301004:
    if (ctx->pc == 0x301004u) {
        ctx->pc = 0x301004u;
            // 0x301004: 0xaf809fa8  sw          $zero, -0x6058($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942632), GPR_U32(ctx, 0));
        ctx->pc = 0x301008u;
        goto label_301008;
    }
    ctx->pc = 0x301000u;
    SET_GPR_U32(ctx, 31, 0x301008u);
    ctx->pc = 0x301004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301000u;
            // 0x301004: 0xaf809fa8  sw          $zero, -0x6058($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301008u; }
        if (ctx->pc != 0x301008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301008u; }
        if (ctx->pc != 0x301008u) { return; }
    }
    ctx->pc = 0x301008u;
label_301008:
    // 0x301008: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x301008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_30100c:
    // 0x30100c: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x30100cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
label_301010:
    // 0x301010: 0xc0673e4  jal         func_19CF90
label_301014:
    if (ctx->pc == 0x301014u) {
        ctx->pc = 0x301014u;
            // 0x301014: 0x412021  addu        $a0, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->pc = 0x301018u;
        goto label_301018;
    }
    ctx->pc = 0x301010u;
    SET_GPR_U32(ctx, 31, 0x301018u);
    ctx->pc = 0x301014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301010u;
            // 0x301014: 0x412021  addu        $a0, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CF90u;
    if (runtime->hasFunction(0x19CF90u)) {
        auto targetFn = runtime->lookupFunction(0x19CF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301018u; }
        if (ctx->pc != 0x301018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBait__16CUserDataManagerFv_0x19cf90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301018u; }
        if (ctx->pc != 0x301018u) { return; }
    }
    ctx->pc = 0x301018u;
label_301018:
    // 0x301018: 0xc0bfd3c  jal         func_2FF4F0
label_30101c:
    if (ctx->pc == 0x30101Cu) {
        ctx->pc = 0x30101Cu;
            // 0x30101c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301020u;
        goto label_301020;
    }
    ctx->pc = 0x301018u;
    SET_GPR_U32(ctx, 31, 0x301020u);
    ctx->pc = 0x30101Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301018u;
            // 0x30101c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FF4F0u;
    if (runtime->hasFunction(0x2FF4F0u)) {
        auto targetFn = runtime->lookupFunction(0x2FF4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301020u; }
        if (ctx->pc != 0x301020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndSelectCastingPoint__FP6CScene_0x2ff4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301020u; }
        if (ctx->pc != 0x301020u) { return; }
    }
    ctx->pc = 0x301020u;
label_301020:
    // 0x301020: 0xc0bf1d4  jal         func_2FC750
label_301024:
    if (ctx->pc == 0x301024u) {
        ctx->pc = 0x301024u;
            // 0x301024: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301028u;
        goto label_301028;
    }
    ctx->pc = 0x301020u;
    SET_GPR_U32(ctx, 31, 0x301028u);
    ctx->pc = 0x301024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301020u;
            // 0x301024: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC750u;
    if (runtime->hasFunction(0x2FC750u)) {
        auto targetFn = runtime->lookupFunction(0x2FC750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301028u; }
        if (ctx->pc != 0x301028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExitFishing__FP6CScene_0x2fc750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301028u; }
        if (ctx->pc != 0x301028u) { return; }
    }
    ctx->pc = 0x301028u;
label_301028:
    // 0x301028: 0x1000018f  b           . + 4 + (0x18F << 2)
label_30102c:
    if (ctx->pc == 0x30102Cu) {
        ctx->pc = 0x30102Cu;
            // 0x30102c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x301030u;
        goto label_301030;
    }
    ctx->pc = 0x301028u;
    {
        const bool branch_taken_0x301028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30102Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301028u;
            // 0x30102c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301028) {
            ctx->pc = 0x301668u;
            goto label_301668;
        }
    }
    ctx->pc = 0x301030u;
label_301030:
    // 0x301030: 0x8f83a06c  lw          $v1, -0x5F94($gp)
    ctx->pc = 0x301030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942828)));
label_301034:
    // 0x301034: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x301034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_301038:
    // 0x301038: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_30103c:
    if (ctx->pc == 0x30103Cu) {
        ctx->pc = 0x30103Cu;
            // 0x30103c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x301040u;
        goto label_301040;
    }
    ctx->pc = 0x301038u;
    {
        const bool branch_taken_0x301038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30103Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301038u;
            // 0x30103c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301038) {
            ctx->pc = 0x301054u;
            goto label_301054;
        }
    }
    ctx->pc = 0x301040u;
label_301040:
    // 0x301040: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x301040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_301044:
    // 0x301044: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x301044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_301048:
    // 0x301048: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x301048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30104c:
    // 0x30104c: 0xc0a9844  jal         func_2A6110
label_301050:
    if (ctx->pc == 0x301050u) {
        ctx->pc = 0x301050u;
            // 0x301050: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x301054u;
        goto label_301054;
    }
    ctx->pc = 0x30104Cu;
    SET_GPR_U32(ctx, 31, 0x301054u);
    ctx->pc = 0x301050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30104Cu;
            // 0x301050: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6110u;
    if (runtime->hasFunction(0x2A6110u)) {
        auto targetFn = runtime->lookupFunction(0x2A6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301054u; }
        if (ctx->pc != 0x301054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBGM__6CSceneFiif_0x2a6110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301054u; }
        if (ctx->pc != 0x301054u) { return; }
    }
    ctx->pc = 0x301054u;
label_301054:
    // 0x301054: 0x8f82a06c  lw          $v0, -0x5F94($gp)
    ctx->pc = 0x301054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942828)));
label_301058:
    // 0x301058: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x301058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30105c:
    // 0x30105c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x30105cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_301060:
    // 0x301060: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x301060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_301064:
    // 0x301064: 0xc0bb548  jal         func_2ED520
label_301068:
    if (ctx->pc == 0x301068u) {
        ctx->pc = 0x301068u;
            // 0x301068: 0xaf82a06c  sw          $v0, -0x5F94($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942828), GPR_U32(ctx, 2));
        ctx->pc = 0x30106Cu;
        goto label_30106c;
    }
    ctx->pc = 0x301064u;
    SET_GPR_U32(ctx, 31, 0x30106Cu);
    ctx->pc = 0x301068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301064u;
            // 0x301068: 0xaf82a06c  sw          $v0, -0x5F94($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942828), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED520u;
    if (runtime->hasFunction(0x2ED520u)) {
        auto targetFn = runtime->lookupFunction(0x2ED520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30106Cu; }
        if (ctx->pc != 0x30106Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analog__11CPadControlFi_0x2ed520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30106Cu; }
        if (ctx->pc != 0x30106Cu) { return; }
    }
    ctx->pc = 0x30106Cu;
label_30106c:
    // 0x30106c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x30106cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_301070:
    // 0x301070: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x301070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_301074:
    // 0x301074: 0xc0bb548  jal         func_2ED520
label_301078:
    if (ctx->pc == 0x301078u) {
        ctx->pc = 0x301078u;
            // 0x301078: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x30107Cu;
        goto label_30107c;
    }
    ctx->pc = 0x301074u;
    SET_GPR_U32(ctx, 31, 0x30107Cu);
    ctx->pc = 0x301078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301074u;
            // 0x301078: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED520u;
    if (runtime->hasFunction(0x2ED520u)) {
        auto targetFn = runtime->lookupFunction(0x2ED520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30107Cu; }
        if (ctx->pc != 0x30107Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analog__11CPadControlFi_0x2ed520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30107Cu; }
        if (ctx->pc != 0x30107Cu) { return; }
    }
    ctx->pc = 0x30107Cu;
label_30107c:
    // 0x30107c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x30107cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_301080:
    // 0x301080: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x301080u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_301084:
    // 0x301084: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x301084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_301088:
    // 0x301088: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x301088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30108c:
    // 0x30108c: 0x0  nop
    ctx->pc = 0x30108cu;
    // NOP
label_301090:
    // 0x301090: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x301090u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_301094:
    // 0x301094: 0x0  nop
    ctx->pc = 0x301094u;
    // NOP
label_301098:
    // 0x301098: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_30109c:
    if (ctx->pc == 0x30109Cu) {
        ctx->pc = 0x30109Cu;
            // 0x30109c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3010A0u;
        goto label_3010a0;
    }
    ctx->pc = 0x301098u;
    {
        const bool branch_taken_0x301098 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30109Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301098u;
            // 0x30109c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301098) {
            ctx->pc = 0x3010A4u;
            goto label_3010a4;
        }
    }
    ctx->pc = 0x3010A0u;
label_3010a0:
    // 0x3010a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3010a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3010a4:
    // 0x3010a4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3010a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3010a8:
    // 0x3010a8: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x3010a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_3010ac:
    // 0x3010ac: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3010acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_3010b0:
    // 0x3010b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3010b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3010b4:
    // 0x3010b4: 0x0  nop
    ctx->pc = 0x3010b4u;
    // NOP
label_3010b8:
    // 0x3010b8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3010b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3010bc:
    // 0x3010bc: 0x0  nop
    ctx->pc = 0x3010bcu;
    // NOP
label_3010c0:
    // 0x3010c0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3010c4:
    if (ctx->pc == 0x3010C4u) {
        ctx->pc = 0x3010C4u;
            // 0x3010c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3010C8u;
        goto label_3010c8;
    }
    ctx->pc = 0x3010C0u;
    {
        const bool branch_taken_0x3010c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3010C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3010C0u;
            // 0x3010c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3010c0) {
            ctx->pc = 0x3010CCu;
            goto label_3010cc;
        }
    }
    ctx->pc = 0x3010C8u;
label_3010c8:
    // 0x3010c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3010c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3010cc:
    // 0x3010cc: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3010ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3010d0:
    // 0x3010d0: 0x3c04bf4c  lui         $a0, 0xBF4C
    ctx->pc = 0x3010d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48972 << 16));
label_3010d4:
    // 0x3010d4: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x3010d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_3010d8:
    // 0x3010d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3010d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3010dc:
    // 0x3010dc: 0x0  nop
    ctx->pc = 0x3010dcu;
    // NOP
label_3010e0:
    // 0x3010e0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3010e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3010e4:
    // 0x3010e4: 0x0  nop
    ctx->pc = 0x3010e4u;
    // NOP
label_3010e8:
    // 0x3010e8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3010ec:
    if (ctx->pc == 0x3010ECu) {
        ctx->pc = 0x3010ECu;
            // 0x3010ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3010F0u;
        goto label_3010f0;
    }
    ctx->pc = 0x3010E8u;
    {
        const bool branch_taken_0x3010e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3010ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3010E8u;
            // 0x3010ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3010e8) {
            ctx->pc = 0x3010F4u;
            goto label_3010f4;
        }
    }
    ctx->pc = 0x3010F0u;
label_3010f0:
    // 0x3010f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3010f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3010f4:
    // 0x3010f4: 0xc7819fcc  lwc1        $f1, -0x6034($gp)
    ctx->pc = 0x3010f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3010f8:
    // 0x3010f8: 0x3c043f4c  lui         $a0, 0x3F4C
    ctx->pc = 0x3010f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16204 << 16));
label_3010fc:
    // 0x3010fc: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x3010fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_301100:
    // 0x301100: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x301100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_301104:
    // 0x301104: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x301104u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_301108:
    // 0x301108: 0x0  nop
    ctx->pc = 0x301108u;
    // NOP
label_30110c:
    // 0x30110c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30110cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_301110:
    // 0x301110: 0x0  nop
    ctx->pc = 0x301110u;
    // NOP
label_301114:
    // 0x301114: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_301118:
    if (ctx->pc == 0x301118u) {
        ctx->pc = 0x301118u;
            // 0x301118: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x30111Cu;
        goto label_30111c;
    }
    ctx->pc = 0x301114u;
    {
        const bool branch_taken_0x301114 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x301118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301114u;
            // 0x301118: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301114) {
            ctx->pc = 0x301120u;
            goto label_301120;
        }
    }
    ctx->pc = 0x30111Cu;
label_30111c:
    // 0x30111c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30111cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301120:
    // 0x301120: 0xc7819fc8  lwc1        $f1, -0x6038($gp)
    ctx->pc = 0x301120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_301124:
    // 0x301124: 0x3c043f4c  lui         $a0, 0x3F4C
    ctx->pc = 0x301124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16204 << 16));
label_301128:
    // 0x301128: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x301128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_30112c:
    // 0x30112c: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x30112cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_301130:
    // 0x301130: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x301130u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_301134:
    // 0x301134: 0x0  nop
    ctx->pc = 0x301134u;
    // NOP
label_301138:
    // 0x301138: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x301138u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30113c:
    // 0x30113c: 0x0  nop
    ctx->pc = 0x30113cu;
    // NOP
label_301140:
    // 0x301140: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_301144:
    if (ctx->pc == 0x301144u) {
        ctx->pc = 0x301144u;
            // 0x301144: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x301148u;
        goto label_301148;
    }
    ctx->pc = 0x301140u;
    {
        const bool branch_taken_0x301140 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x301144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301140u;
            // 0x301144: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301140) {
            ctx->pc = 0x30114Cu;
            goto label_30114c;
        }
    }
    ctx->pc = 0x301148u;
label_301148:
    // 0x301148: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x301148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30114c:
    // 0x30114c: 0x3c04bf4c  lui         $a0, 0xBF4C
    ctx->pc = 0x30114cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48972 << 16));
label_301150:
    // 0x301150: 0x30c800ff  andi        $t0, $a2, 0xFF
    ctx->pc = 0x301150u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_301154:
    // 0x301154: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x301154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_301158:
    // 0x301158: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x301158u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30115c:
    // 0x30115c: 0x0  nop
    ctx->pc = 0x30115cu;
    // NOP
label_301160:
    // 0x301160: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x301160u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_301164:
    // 0x301164: 0x0  nop
    ctx->pc = 0x301164u;
    // NOP
label_301168:
    // 0x301168: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_30116c:
    if (ctx->pc == 0x30116Cu) {
        ctx->pc = 0x30116Cu;
            // 0x30116c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x301170u;
        goto label_301170;
    }
    ctx->pc = 0x301168u;
    {
        const bool branch_taken_0x301168 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30116Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301168u;
            // 0x30116c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301168) {
            ctx->pc = 0x301174u;
            goto label_301174;
        }
    }
    ctx->pc = 0x301170u;
label_301170:
    // 0x301170: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x301170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301174:
    // 0x301174: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x301174u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_301178:
    // 0x301178: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_30117c:
    if (ctx->pc == 0x30117Cu) {
        ctx->pc = 0x30117Cu;
            // 0x30117c: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x301180u;
        goto label_301180;
    }
    ctx->pc = 0x301178u;
    {
        const bool branch_taken_0x301178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30117Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301178u;
            // 0x30117c: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x301178) {
            ctx->pc = 0x301188u;
            goto label_301188;
        }
    }
    ctx->pc = 0x301180u;
label_301180:
    // 0x301180: 0x7202b  sltu        $a0, $zero, $a3
    ctx->pc = 0x301180u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_301184:
    // 0x301184: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x301184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_301188:
    // 0x301188: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_30118c:
    if (ctx->pc == 0x30118Cu) {
        ctx->pc = 0x301190u;
        goto label_301190;
    }
    ctx->pc = 0x301188u;
    {
        const bool branch_taken_0x301188 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x301188) {
            ctx->pc = 0x3011A4u;
            goto label_3011a4;
        }
    }
    ctx->pc = 0x301190u;
label_301190:
    // 0x301190: 0x3202b  sltu        $a0, $zero, $v1
    ctx->pc = 0x301190u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_301194:
    // 0x301194: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_301198:
    if (ctx->pc == 0x301198u) {
        ctx->pc = 0x30119Cu;
        goto label_30119c;
    }
    ctx->pc = 0x301194u;
    {
        const bool branch_taken_0x301194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x301194) {
            ctx->pc = 0x3011A4u;
            goto label_3011a4;
        }
    }
    ctx->pc = 0x30119Cu;
label_30119c:
    // 0x30119c: 0x8202b  sltu        $a0, $zero, $t0
    ctx->pc = 0x30119cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_3011a0:
    // 0x3011a0: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x3011a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_3011a4:
    // 0x3011a4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3011a8:
    if (ctx->pc == 0x3011A8u) {
        ctx->pc = 0x3011ACu;
        goto label_3011ac;
    }
    ctx->pc = 0x3011A4u;
    {
        const bool branch_taken_0x3011a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3011a4) {
            ctx->pc = 0x3011C0u;
            goto label_3011c0;
        }
    }
    ctx->pc = 0x3011ACu;
label_3011ac:
    // 0x3011ac: 0x5202b  sltu        $a0, $zero, $a1
    ctx->pc = 0x3011acu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3011b0:
    // 0x3011b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3011b4:
    if (ctx->pc == 0x3011B4u) {
        ctx->pc = 0x3011B8u;
        goto label_3011b8;
    }
    ctx->pc = 0x3011B0u;
    {
        const bool branch_taken_0x3011b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3011b0) {
            ctx->pc = 0x3011C0u;
            goto label_3011c0;
        }
    }
    ctx->pc = 0x3011B8u;
label_3011b8:
    // 0x3011b8: 0x6202b  sltu        $a0, $zero, $a2
    ctx->pc = 0x3011b8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_3011bc:
    // 0x3011bc: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x3011bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_3011c0:
    // 0x3011c0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3011c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3011c4:
    // 0x3011c4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3011c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3011c8:
    // 0x3011c8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3011cc:
    if (ctx->pc == 0x3011CCu) {
        ctx->pc = 0x3011CCu;
            // 0x3011cc: 0x309000ff  andi        $s0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3011D0u;
        goto label_3011d0;
    }
    ctx->pc = 0x3011C8u;
    {
        const bool branch_taken_0x3011c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3011CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3011C8u;
            // 0x3011cc: 0x309000ff  andi        $s0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3011c8) {
            ctx->pc = 0x3011D4u;
            goto label_3011d4;
        }
    }
    ctx->pc = 0x3011D0u;
label_3011d0:
    // 0x3011d0: 0x7102b  sltu        $v0, $zero, $a3
    ctx->pc = 0x3011d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_3011d4:
    // 0x3011d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3011d8:
    if (ctx->pc == 0x3011D8u) {
        ctx->pc = 0x3011DCu;
        goto label_3011dc;
    }
    ctx->pc = 0x3011D4u;
    {
        const bool branch_taken_0x3011d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3011d4) {
            ctx->pc = 0x3011F0u;
            goto label_3011f0;
        }
    }
    ctx->pc = 0x3011DCu;
label_3011dc:
    // 0x3011dc: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x3011dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3011e0:
    // 0x3011e0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3011e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3011e4:
    // 0x3011e4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3011e8:
    if (ctx->pc == 0x3011E8u) {
        ctx->pc = 0x3011ECu;
        goto label_3011ec;
    }
    ctx->pc = 0x3011E4u;
    {
        const bool branch_taken_0x3011e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3011e4) {
            ctx->pc = 0x3011F0u;
            goto label_3011f0;
        }
    }
    ctx->pc = 0x3011ECu;
label_3011ec:
    // 0x3011ec: 0x8102b  sltu        $v0, $zero, $t0
    ctx->pc = 0x3011ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_3011f0:
    // 0x3011f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3011f4:
    if (ctx->pc == 0x3011F4u) {
        ctx->pc = 0x3011F4u;
            // 0x3011f4: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3011F8u;
        goto label_3011f8;
    }
    ctx->pc = 0x3011F0u;
    {
        const bool branch_taken_0x3011f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3011F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3011F0u;
            // 0x3011f4: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3011f0) {
            ctx->pc = 0x301210u;
            goto label_301210;
        }
    }
    ctx->pc = 0x3011F8u;
label_3011f8:
    // 0x3011f8: 0x5102b  sltu        $v0, $zero, $a1
    ctx->pc = 0x3011f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3011fc:
    // 0x3011fc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3011fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_301200:
    // 0x301200: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_301204:
    if (ctx->pc == 0x301204u) {
        ctx->pc = 0x301208u;
        goto label_301208;
    }
    ctx->pc = 0x301200u;
    {
        const bool branch_taken_0x301200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301200) {
            ctx->pc = 0x30120Cu;
            goto label_30120c;
        }
    }
    ctx->pc = 0x301208u;
label_301208:
    // 0x301208: 0x6102b  sltu        $v0, $zero, $a2
    ctx->pc = 0x301208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_30120c:
    // 0x30120c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x30120cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_301210:
    // 0x301210: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_301214:
    if (ctx->pc == 0x301214u) {
        ctx->pc = 0x301214u;
            // 0x301214: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301218u;
        goto label_301218;
    }
    ctx->pc = 0x301210u;
    {
        const bool branch_taken_0x301210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x301214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301210u;
            // 0x301214: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301210) {
            ctx->pc = 0x30121Cu;
            goto label_30121c;
        }
    }
    ctx->pc = 0x301218u;
label_301218:
    // 0x301218: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x301218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30121c:
    // 0x30121c: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_301220:
    if (ctx->pc == 0x301220u) {
        ctx->pc = 0x301220u;
            // 0x301220: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->pc = 0x301224u;
        goto label_301224;
    }
    ctx->pc = 0x30121Cu;
    {
        const bool branch_taken_0x30121c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x301220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30121Cu;
            // 0x301220: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30121c) {
            ctx->pc = 0x301228u;
            goto label_301228;
        }
    }
    ctx->pc = 0x301224u;
label_301224:
    // 0x301224: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x301224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_301228:
    // 0x301228: 0xc0c4314  jal         func_310C50
label_30122c:
    if (ctx->pc == 0x30122Cu) {
        ctx->pc = 0x301230u;
        goto label_301230;
    }
    ctx->pc = 0x301228u;
    SET_GPR_U32(ctx, 31, 0x301230u);
    ctx->pc = 0x310C50u;
    if (runtime->hasFunction(0x310C50u)) {
        auto targetFn = runtime->lookupFunction(0x310C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301230u; }
        if (ctx->pc != 0x301230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckRodActionChance__FiPi_0x310c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301230u; }
        if (ctx->pc != 0x301230u) { return; }
    }
    ctx->pc = 0x301230u;
label_301230:
    // 0x301230: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x301230u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301234:
    // 0x301234: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x301234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_301238:
    // 0x301238: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_30123c:
    if (ctx->pc == 0x30123Cu) {
        ctx->pc = 0x301240u;
        goto label_301240;
    }
    ctx->pc = 0x301238u;
    {
        const bool branch_taken_0x301238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301238) {
            ctx->pc = 0x301250u;
            goto label_301250;
        }
    }
    ctx->pc = 0x301240u;
label_301240:
    // 0x301240: 0x8f849f74  lw          $a0, -0x608C($gp)
    ctx->pc = 0x301240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_301244:
    // 0x301244: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x301244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_301248:
    // 0x301248: 0xc063818  jal         func_18E060
label_30124c:
    if (ctx->pc == 0x30124Cu) {
        ctx->pc = 0x30124Cu;
            // 0x30124c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301250u;
        goto label_301250;
    }
    ctx->pc = 0x301248u;
    SET_GPR_U32(ctx, 31, 0x301250u);
    ctx->pc = 0x30124Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301248u;
            // 0x30124c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301250u; }
        if (ctx->pc != 0x301250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301250u; }
        if (ctx->pc != 0x301250u) { return; }
    }
    ctx->pc = 0x301250u;
label_301250:
    // 0x301250: 0x8382a0c4  lb          $v0, -0x5F3C($gp)
    ctx->pc = 0x301250u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942916)));
label_301254:
    // 0x301254: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_301258:
    if (ctx->pc == 0x301258u) {
        ctx->pc = 0x301258u;
            // 0x301258: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x30125Cu;
        goto label_30125c;
    }
    ctx->pc = 0x301254u;
    {
        const bool branch_taken_0x301254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x301258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301254u;
            // 0x301258: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301254) {
            ctx->pc = 0x301264u;
            goto label_301264;
        }
    }
    ctx->pc = 0x30125Cu;
label_30125c:
    // 0x30125c: 0xaf80a0c0  sw          $zero, -0x5F40($gp)
    ctx->pc = 0x30125cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942912), GPR_U32(ctx, 0));
label_301260:
    // 0x301260: 0xa382a0c4  sb          $v0, -0x5F3C($gp)
    ctx->pc = 0x301260u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294942916), (uint8_t)GPR_U32(ctx, 2));
label_301264:
    // 0x301264: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_301268:
    if (ctx->pc == 0x301268u) {
        ctx->pc = 0x301268u;
            // 0x301268: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x30126Cu;
        goto label_30126c;
    }
    ctx->pc = 0x301264u;
    {
        const bool branch_taken_0x301264 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x301268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301264u;
            // 0x301268: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301264) {
            ctx->pc = 0x3012B8u;
            goto label_3012b8;
        }
    }
    ctx->pc = 0x30126Cu;
label_30126c:
    // 0x30126c: 0xc0c407c  jal         func_3101F0
label_301270:
    if (ctx->pc == 0x301270u) {
        ctx->pc = 0x301270u;
            // 0x301270: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x301274u;
        goto label_301274;
    }
    ctx->pc = 0x30126Cu;
    SET_GPR_U32(ctx, 31, 0x301274u);
    ctx->pc = 0x301270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30126Cu;
            // 0x301270: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3101F0u;
    if (runtime->hasFunction(0x3101F0u)) {
        auto targetFn = runtime->lookupFunction(0x3101F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301274u; }
        if (ctx->pc != 0x301274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHariPos__FPfPf_0x3101f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301274u; }
        if (ctx->pc != 0x301274u) { return; }
    }
    ctx->pc = 0x301274u;
label_301274:
    // 0x301274: 0x8f849f74  lw          $a0, -0x608C($gp)
    ctx->pc = 0x301274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_301278:
    // 0x301278: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x301278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_30127c:
    // 0x30127c: 0xc063818  jal         func_18E060
label_301280:
    if (ctx->pc == 0x301280u) {
        ctx->pc = 0x301280u;
            // 0x301280: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301284u;
        goto label_301284;
    }
    ctx->pc = 0x30127Cu;
    SET_GPR_U32(ctx, 31, 0x301284u);
    ctx->pc = 0x301280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30127Cu;
            // 0x301280: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301284u; }
        if (ctx->pc != 0x301284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301284u; }
        if (ctx->pc != 0x301284u) { return; }
    }
    ctx->pc = 0x301284u;
label_301284:
    // 0x301284: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x301284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_301288:
    // 0x301288: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x301288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30128c:
    // 0x30128c: 0xc0bff10  jal         func_2FFC40
label_301290:
    if (ctx->pc == 0x301290u) {
        ctx->pc = 0x301290u;
            // 0x301290: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x301294u;
        goto label_301294;
    }
    ctx->pc = 0x30128Cu;
    SET_GPR_U32(ctx, 31, 0x301294u);
    ctx->pc = 0x301290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30128Cu;
            // 0x301290: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FFC40u;
    if (runtime->hasFunction(0x2FFC40u)) {
        auto targetFn = runtime->lookupFunction(0x2FFC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301294u; }
        if (ctx->pc != 0x301294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSplash__FPff_0x2ffc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301294u; }
        if (ctx->pc != 0x301294u) { return; }
    }
    ctx->pc = 0x301294u;
label_301294:
    // 0x301294: 0x8f82a0c0  lw          $v0, -0x5F40($gp)
    ctx->pc = 0x301294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942912)));
label_301298:
    // 0x301298: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_30129c:
    if (ctx->pc == 0x30129Cu) {
        ctx->pc = 0x3012A0u;
        goto label_3012a0;
    }
    ctx->pc = 0x301298u;
    {
        const bool branch_taken_0x301298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301298) {
            ctx->pc = 0x3012B8u;
            goto label_3012b8;
        }
    }
    ctx->pc = 0x3012A0u;
label_3012a0:
    // 0x3012a0: 0x8f849f74  lw          $a0, -0x608C($gp)
    ctx->pc = 0x3012a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_3012a4:
    // 0x3012a4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3012a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3012a8:
    // 0x3012a8: 0xc063818  jal         func_18E060
label_3012ac:
    if (ctx->pc == 0x3012ACu) {
        ctx->pc = 0x3012ACu;
            // 0x3012ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3012B0u;
        goto label_3012b0;
    }
    ctx->pc = 0x3012A8u;
    SET_GPR_U32(ctx, 31, 0x3012B0u);
    ctx->pc = 0x3012ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3012A8u;
            // 0x3012ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3012B0u; }
        if (ctx->pc != 0x3012B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3012B0u; }
        if (ctx->pc != 0x3012B0u) { return; }
    }
    ctx->pc = 0x3012B0u;
label_3012b0:
    // 0x3012b0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3012b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3012b4:
    // 0x3012b4: 0xaf82a0c0  sw          $v0, -0x5F40($gp)
    ctx->pc = 0x3012b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942912), GPR_U32(ctx, 2));
label_3012b8:
    // 0x3012b8: 0x8f82a0c0  lw          $v0, -0x5F40($gp)
    ctx->pc = 0x3012b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942912)));
label_3012bc:
    // 0x3012bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3012bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3012c0:
    // 0x3012c0: 0xaf82a0c0  sw          $v0, -0x5F40($gp)
    ctx->pc = 0x3012c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942912), GPR_U32(ctx, 2));
label_3012c4:
    // 0x3012c4: 0x8f82a0c0  lw          $v0, -0x5F40($gp)
    ctx->pc = 0x3012c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942912)));
label_3012c8:
    // 0x3012c8: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_3012cc:
    if (ctx->pc == 0x3012CCu) {
        ctx->pc = 0x3012D0u;
        goto label_3012d0;
    }
    ctx->pc = 0x3012C8u;
    {
        const bool branch_taken_0x3012c8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3012c8) {
            ctx->pc = 0x3012D4u;
            goto label_3012d4;
        }
    }
    ctx->pc = 0x3012D0u;
label_3012d0:
    // 0x3012d0: 0xaf80a0c0  sw          $zero, -0x5F40($gp)
    ctx->pc = 0x3012d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942912), GPR_U32(ctx, 0));
label_3012d4:
    // 0x3012d4: 0x8f84a04c  lw          $a0, -0x5FB4($gp)
    ctx->pc = 0x3012d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942796)));
label_3012d8:
    // 0x3012d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3012d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3012dc:
    // 0x3012dc: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
label_3012e0:
    if (ctx->pc == 0x3012E0u) {
        ctx->pc = 0x3012E0u;
            // 0x3012e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3012E4u;
        goto label_3012e4;
    }
    ctx->pc = 0x3012DCu;
    {
        const bool branch_taken_0x3012dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3012E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3012DCu;
            // 0x3012e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3012dc) {
            ctx->pc = 0x30134Cu;
            goto label_30134c;
        }
    }
    ctx->pc = 0x3012E4u;
label_3012e4:
    // 0x3012e4: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
label_3012e8:
    if (ctx->pc == 0x3012E8u) {
        ctx->pc = 0x3012ECu;
        goto label_3012ec;
    }
    ctx->pc = 0x3012E4u;
    {
        const bool branch_taken_0x3012e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3012e4) {
            ctx->pc = 0x301328u;
            goto label_301328;
        }
    }
    ctx->pc = 0x3012ECu;
label_3012ec:
    // 0x3012ec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3012f0:
    if (ctx->pc == 0x3012F0u) {
        ctx->pc = 0x3012F4u;
        goto label_3012f4;
    }
    ctx->pc = 0x3012ECu;
    {
        const bool branch_taken_0x3012ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3012ec) {
            ctx->pc = 0x3012FCu;
            goto label_3012fc;
        }
    }
    ctx->pc = 0x3012F4u;
label_3012f4:
    // 0x3012f4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_3012f8:
    if (ctx->pc == 0x3012F8u) {
        ctx->pc = 0x3012F8u;
            // 0x3012f8: 0x8f84a050  lw          $a0, -0x5FB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942800)));
        ctx->pc = 0x3012FCu;
        goto label_3012fc;
    }
    ctx->pc = 0x3012F4u;
    {
        const bool branch_taken_0x3012f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3012F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3012F4u;
            // 0x3012f8: 0x8f84a050  lw          $a0, -0x5FB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3012f4) {
            ctx->pc = 0x301370u;
            goto label_301370;
        }
    }
    ctx->pc = 0x3012FCu;
label_3012fc:
    // 0x3012fc: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_301300:
    if (ctx->pc == 0x301300u) {
        ctx->pc = 0x301304u;
        goto label_301304;
    }
    ctx->pc = 0x3012FCu;
    {
        const bool branch_taken_0x3012fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3012fc) {
            ctx->pc = 0x301314u;
            goto label_301314;
        }
    }
    ctx->pc = 0x301304u;
label_301304:
    // 0x301304: 0xaf82a04c  sw          $v0, -0x5FB4($gp)
    ctx->pc = 0x301304u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942796), GPR_U32(ctx, 2));
label_301308:
    // 0x301308: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x301308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_30130c:
    // 0x30130c: 0x10000017  b           . + 4 + (0x17 << 2)
label_301310:
    if (ctx->pc == 0x301310u) {
        ctx->pc = 0x301310u;
            // 0x301310: 0xaf82a050  sw          $v0, -0x5FB0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942800), GPR_U32(ctx, 2));
        ctx->pc = 0x301314u;
        goto label_301314;
    }
    ctx->pc = 0x30130Cu;
    {
        const bool branch_taken_0x30130c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30130Cu;
            // 0x301310: 0xaf82a050  sw          $v0, -0x5FB0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942800), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30130c) {
            ctx->pc = 0x30136Cu;
            goto label_30136c;
        }
    }
    ctx->pc = 0x301314u;
label_301314:
    // 0x301314: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
label_301318:
    if (ctx->pc == 0x301318u) {
        ctx->pc = 0x301318u;
            // 0x301318: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x30131Cu;
        goto label_30131c;
    }
    ctx->pc = 0x301314u;
    {
        const bool branch_taken_0x301314 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x301318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301314u;
            // 0x301318: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301314) {
            ctx->pc = 0x30136Cu;
            goto label_30136c;
        }
    }
    ctx->pc = 0x30131Cu;
label_30131c:
    // 0x30131c: 0xaf83a04c  sw          $v1, -0x5FB4($gp)
    ctx->pc = 0x30131cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942796), GPR_U32(ctx, 3));
label_301320:
    // 0x301320: 0x10000012  b           . + 4 + (0x12 << 2)
label_301324:
    if (ctx->pc == 0x301324u) {
        ctx->pc = 0x301324u;
            // 0x301324: 0xaf82a050  sw          $v0, -0x5FB0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942800), GPR_U32(ctx, 2));
        ctx->pc = 0x301328u;
        goto label_301328;
    }
    ctx->pc = 0x301320u;
    {
        const bool branch_taken_0x301320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301320u;
            // 0x301324: 0xaf82a050  sw          $v0, -0x5FB0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942800), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301320) {
            ctx->pc = 0x30136Cu;
            goto label_30136c;
        }
    }
    ctx->pc = 0x301328u;
label_301328:
    // 0x301328: 0x8f82a050  lw          $v0, -0x5FB0($gp)
    ctx->pc = 0x301328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942800)));
label_30132c:
    // 0x30132c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_301330:
    if (ctx->pc == 0x301330u) {
        ctx->pc = 0x301334u;
        goto label_301334;
    }
    ctx->pc = 0x30132Cu;
    {
        const bool branch_taken_0x30132c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30132c) {
            ctx->pc = 0x30133Cu;
            goto label_30133c;
        }
    }
    ctx->pc = 0x301334u;
label_301334:
    // 0x301334: 0x1000000d  b           . + 4 + (0xD << 2)
label_301338:
    if (ctx->pc == 0x301338u) {
        ctx->pc = 0x301338u;
            // 0x301338: 0xaf80a04c  sw          $zero, -0x5FB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942796), GPR_U32(ctx, 0));
        ctx->pc = 0x30133Cu;
        goto label_30133c;
    }
    ctx->pc = 0x301334u;
    {
        const bool branch_taken_0x301334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301334u;
            // 0x301338: 0xaf80a04c  sw          $zero, -0x5FB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942796), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301334) {
            ctx->pc = 0x30136Cu;
            goto label_30136c;
        }
    }
    ctx->pc = 0x30133Cu;
label_30133c:
    // 0x30133c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_301340:
    if (ctx->pc == 0x301340u) {
        ctx->pc = 0x301344u;
        goto label_301344;
    }
    ctx->pc = 0x30133Cu;
    {
        const bool branch_taken_0x30133c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x30133c) {
            ctx->pc = 0x30136Cu;
            goto label_30136c;
        }
    }
    ctx->pc = 0x301344u;
label_301344:
    // 0x301344: 0x10000009  b           . + 4 + (0x9 << 2)
label_301348:
    if (ctx->pc == 0x301348u) {
        ctx->pc = 0x301348u;
            // 0x301348: 0xaf83a04c  sw          $v1, -0x5FB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942796), GPR_U32(ctx, 3));
        ctx->pc = 0x30134Cu;
        goto label_30134c;
    }
    ctx->pc = 0x301344u;
    {
        const bool branch_taken_0x301344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301344u;
            // 0x301348: 0xaf83a04c  sw          $v1, -0x5FB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942796), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301344) {
            ctx->pc = 0x30136Cu;
            goto label_30136c;
        }
    }
    ctx->pc = 0x30134Cu;
label_30134c:
    // 0x30134c: 0x8f82a050  lw          $v0, -0x5FB0($gp)
    ctx->pc = 0x30134cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942800)));
label_301350:
    // 0x301350: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_301354:
    if (ctx->pc == 0x301354u) {
        ctx->pc = 0x301358u;
        goto label_301358;
    }
    ctx->pc = 0x301350u;
    {
        const bool branch_taken_0x301350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301350) {
            ctx->pc = 0x301360u;
            goto label_301360;
        }
    }
    ctx->pc = 0x301358u;
label_301358:
    // 0x301358: 0x10000004  b           . + 4 + (0x4 << 2)
label_30135c:
    if (ctx->pc == 0x30135Cu) {
        ctx->pc = 0x30135Cu;
            // 0x30135c: 0xaf80a04c  sw          $zero, -0x5FB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942796), GPR_U32(ctx, 0));
        ctx->pc = 0x301360u;
        goto label_301360;
    }
    ctx->pc = 0x301358u;
    {
        const bool branch_taken_0x301358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30135Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301358u;
            // 0x30135c: 0xaf80a04c  sw          $zero, -0x5FB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942796), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301358) {
            ctx->pc = 0x30136Cu;
            goto label_30136c;
        }
    }
    ctx->pc = 0x301360u;
label_301360:
    // 0x301360: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_301364:
    if (ctx->pc == 0x301364u) {
        ctx->pc = 0x301364u;
            // 0x301364: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x301368u;
        goto label_301368;
    }
    ctx->pc = 0x301360u;
    {
        const bool branch_taken_0x301360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x301364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301360u;
            // 0x301364: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301360) {
            ctx->pc = 0x30136Cu;
            goto label_30136c;
        }
    }
    ctx->pc = 0x301368u;
label_301368:
    // 0x301368: 0xaf82a04c  sw          $v0, -0x5FB4($gp)
    ctx->pc = 0x301368u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942796), GPR_U32(ctx, 2));
label_30136c:
    // 0x30136c: 0x8f84a050  lw          $a0, -0x5FB0($gp)
    ctx->pc = 0x30136cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942800)));
label_301370:
    // 0x301370: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x301370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_301374:
    // 0x301374: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x301374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_301378:
    // 0x301378: 0x8f83a044  lw          $v1, -0x5FBC($gp)
    ctx->pc = 0x301378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942788)));
label_30137c:
    // 0x30137c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30137cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_301380:
    // 0x301380: 0x0  nop
    ctx->pc = 0x301380u;
    // NOP
label_301384:
    // 0x301384: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x301384u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_301388:
    // 0x301388: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x301388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_30138c:
    // 0x30138c: 0xaf82a050  sw          $v0, -0x5FB0($gp)
    ctx->pc = 0x30138cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942800), GPR_U32(ctx, 2));
label_301390:
    // 0x301390: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x301390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_301394:
    // 0x301394: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_301398:
    if (ctx->pc == 0x301398u) {
        ctx->pc = 0x301398u;
            // 0x301398: 0xaf82a044  sw          $v0, -0x5FBC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942788), GPR_U32(ctx, 2));
        ctx->pc = 0x30139Cu;
        goto label_30139c;
    }
    ctx->pc = 0x301394u;
    {
        const bool branch_taken_0x301394 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x301398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301394u;
            // 0x301398: 0xaf82a044  sw          $v0, -0x5FBC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942788), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301394) {
            ctx->pc = 0x3013C0u;
            goto label_3013c0;
        }
    }
    ctx->pc = 0x30139Cu;
label_30139c:
    // 0x30139c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x30139cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3013a0:
    // 0x3013a0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x3013a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_3013a4:
    // 0x3013a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3013a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3013a8:
    // 0x3013a8: 0x24a52050  addiu       $a1, $a1, 0x2050
    ctx->pc = 0x3013a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8272));
label_3013ac:
    // 0x3013ac: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x3013acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_3013b0:
    // 0x3013b0: 0x320f809  jalr        $t9
label_3013b4:
    if (ctx->pc == 0x3013B4u) {
        ctx->pc = 0x3013B4u;
            // 0x3013b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3013B8u;
        goto label_3013b8;
    }
    ctx->pc = 0x3013B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3013B8u);
        ctx->pc = 0x3013B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3013B0u;
            // 0x3013b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3013B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3013B8u; }
            if (ctx->pc != 0x3013B8u) { return; }
        }
        }
    }
    ctx->pc = 0x3013B8u;
label_3013b8:
    // 0x3013b8: 0x10000026  b           . + 4 + (0x26 << 2)
label_3013bc:
    if (ctx->pc == 0x3013BCu) {
        ctx->pc = 0x3013BCu;
            // 0x3013bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3013C0u;
        goto label_3013c0;
    }
    ctx->pc = 0x3013B8u;
    {
        const bool branch_taken_0x3013b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3013BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3013B8u;
            // 0x3013bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3013b8) {
            ctx->pc = 0x301454u;
            goto label_301454;
        }
    }
    ctx->pc = 0x3013C0u;
label_3013c0:
    // 0x3013c0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3013c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3013c4:
    // 0x3013c4: 0x0  nop
    ctx->pc = 0x3013c4u;
    // NOP
label_3013c8:
    // 0x3013c8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_3013cc:
    if (ctx->pc == 0x3013CCu) {
        ctx->pc = 0x3013CCu;
            // 0x3013cc: 0x3c02bf4c  lui         $v0, 0xBF4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48972 << 16));
        ctx->pc = 0x3013D0u;
        goto label_3013d0;
    }
    ctx->pc = 0x3013C8u;
    {
        const bool branch_taken_0x3013c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3013CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3013C8u;
            // 0x3013cc: 0x3c02bf4c  lui         $v0, 0xBF4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48972 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3013c8) {
            ctx->pc = 0x3013F4u;
            goto label_3013f4;
        }
    }
    ctx->pc = 0x3013D0u;
label_3013d0:
    // 0x3013d0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3013d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3013d4:
    // 0x3013d4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x3013d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_3013d8:
    // 0x3013d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3013d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3013dc:
    // 0x3013dc: 0x24a52060  addiu       $a1, $a1, 0x2060
    ctx->pc = 0x3013dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8288));
label_3013e0:
    // 0x3013e0: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x3013e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_3013e4:
    // 0x3013e4: 0x320f809  jalr        $t9
label_3013e8:
    if (ctx->pc == 0x3013E8u) {
        ctx->pc = 0x3013E8u;
            // 0x3013e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3013ECu;
        goto label_3013ec;
    }
    ctx->pc = 0x3013E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3013ECu);
        ctx->pc = 0x3013E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3013E4u;
            // 0x3013e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3013ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3013ECu; }
            if (ctx->pc != 0x3013ECu) { return; }
        }
        }
    }
    ctx->pc = 0x3013ECu;
label_3013ec:
    // 0x3013ec: 0x10000018  b           . + 4 + (0x18 << 2)
label_3013f0:
    if (ctx->pc == 0x3013F0u) {
        ctx->pc = 0x3013F4u;
        goto label_3013f4;
    }
    ctx->pc = 0x3013ECu;
    {
        const bool branch_taken_0x3013ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3013ec) {
            ctx->pc = 0x301450u;
            goto label_301450;
        }
    }
    ctx->pc = 0x3013F4u;
label_3013f4:
    // 0x3013f4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3013f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3013f8:
    // 0x3013f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3013f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3013fc:
    // 0x3013fc: 0x0  nop
    ctx->pc = 0x3013fcu;
    // NOP
label_301400:
    // 0x301400: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x301400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_301404:
    // 0x301404: 0x0  nop
    ctx->pc = 0x301404u;
    // NOP
label_301408:
    // 0x301408: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_30140c:
    if (ctx->pc == 0x30140Cu) {
        ctx->pc = 0x301410u;
        goto label_301410;
    }
    ctx->pc = 0x301408u;
    {
        const bool branch_taken_0x301408 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x301408) {
            ctx->pc = 0x301434u;
            goto label_301434;
        }
    }
    ctx->pc = 0x301410u;
label_301410:
    // 0x301410: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x301410u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_301414:
    // 0x301414: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x301414u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_301418:
    // 0x301418: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x301418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30141c:
    // 0x30141c: 0x24a52070  addiu       $a1, $a1, 0x2070
    ctx->pc = 0x30141cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8304));
label_301420:
    // 0x301420: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x301420u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_301424:
    // 0x301424: 0x320f809  jalr        $t9
label_301428:
    if (ctx->pc == 0x301428u) {
        ctx->pc = 0x301428u;
            // 0x301428: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30142Cu;
        goto label_30142c;
    }
    ctx->pc = 0x301424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30142Cu);
        ctx->pc = 0x301428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301424u;
            // 0x301428: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30142Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30142Cu; }
            if (ctx->pc != 0x30142Cu) { return; }
        }
        }
    }
    ctx->pc = 0x30142Cu;
label_30142c:
    // 0x30142c: 0x10000008  b           . + 4 + (0x8 << 2)
label_301430:
    if (ctx->pc == 0x301430u) {
        ctx->pc = 0x301434u;
        goto label_301434;
    }
    ctx->pc = 0x30142Cu;
    {
        const bool branch_taken_0x30142c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30142c) {
            ctx->pc = 0x301450u;
            goto label_301450;
        }
    }
    ctx->pc = 0x301434u;
label_301434:
    // 0x301434: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x301434u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_301438:
    // 0x301438: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x301438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_30143c:
    // 0x30143c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30143cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_301440:
    // 0x301440: 0x24a52080  addiu       $a1, $a1, 0x2080
    ctx->pc = 0x301440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8320));
label_301444:
    // 0x301444: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x301444u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_301448:
    // 0x301448: 0x320f809  jalr        $t9
label_30144c:
    if (ctx->pc == 0x30144Cu) {
        ctx->pc = 0x30144Cu;
            // 0x30144c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301450u;
        goto label_301450;
    }
    ctx->pc = 0x301448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301450u);
        ctx->pc = 0x30144Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301448u;
            // 0x30144c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x301450u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x301450u; }
            if (ctx->pc != 0x301450u) { return; }
        }
        }
    }
    ctx->pc = 0x301450u;
label_301450:
    // 0x301450: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x301450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_301454:
    // 0x301454: 0x24050079  addiu       $a1, $zero, 0x79
    ctx->pc = 0x301454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
label_301458:
    // 0x301458: 0xc0bb538  jal         func_2ED4E0
label_30145c:
    if (ctx->pc == 0x30145Cu) {
        ctx->pc = 0x30145Cu;
            // 0x30145c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301460u;
        goto label_301460;
    }
    ctx->pc = 0x301458u;
    SET_GPR_U32(ctx, 31, 0x301460u);
    ctx->pc = 0x30145Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301458u;
            // 0x30145c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301460u; }
        if (ctx->pc != 0x301460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301460u; }
        if (ctx->pc != 0x301460u) { return; }
    }
    ctx->pc = 0x301460u;
label_301460:
    // 0x301460: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_301464:
    if (ctx->pc == 0x301464u) {
        ctx->pc = 0x301468u;
        goto label_301468;
    }
    ctx->pc = 0x301460u;
    {
        const bool branch_taken_0x301460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301460) {
            ctx->pc = 0x3014A8u;
            goto label_3014a8;
        }
    }
    ctx->pc = 0x301468u;
label_301468:
    // 0x301468: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x301468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_30146c:
    // 0x30146c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x30146cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_301470:
    // 0x301470: 0x34210540  ori         $at, $at, 0x540
    ctx->pc = 0x301470u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1344);
label_301474:
    // 0x301474: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x301474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_301478:
    // 0x301478: 0x2812021  addu        $a0, $s4, $at
    ctx->pc = 0x301478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
label_30147c:
    // 0x30147c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x30147cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_301480:
    // 0x301480: 0xc0631a8  jal         func_18C6A0
label_301484:
    if (ctx->pc == 0x301484u) {
        ctx->pc = 0x301484u;
            // 0x301484: 0x24080064  addiu       $t0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x301488u;
        goto label_301488;
    }
    ctx->pc = 0x301480u;
    SET_GPR_U32(ctx, 31, 0x301488u);
    ctx->pc = 0x301484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301480u;
            // 0x301484: 0x24080064  addiu       $t0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C6A0u;
    if (runtime->hasFunction(0x18C6A0u)) {
        auto targetFn = runtime->lookupFunction(0x18C6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301488u; }
        if (ctx->pc != 0x301488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SeLoopPlayStop__11CLoopSeMngrFUiiii_0x18c6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301488u; }
        if (ctx->pc != 0x301488u) { return; }
    }
    ctx->pc = 0x301488u;
label_301488:
    // 0x301488: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x301488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_30148c:
    // 0x30148c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30148cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_301490:
    // 0x301490: 0xc0c3e94  jal         func_30FA50
label_301494:
    if (ctx->pc == 0x301494u) {
        ctx->pc = 0x301498u;
        goto label_301498;
    }
    ctx->pc = 0x301490u;
    SET_GPR_U32(ctx, 31, 0x301498u);
    ctx->pc = 0x30FA50u;
    if (runtime->hasFunction(0x30FA50u)) {
        auto targetFn = runtime->lookupFunction(0x30FA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301498u; }
        if (ctx->pc != 0x301498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExtendLine__Ff_0x30fa50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301498u; }
        if (ctx->pc != 0x301498u) { return; }
    }
    ctx->pc = 0x301498u;
label_301498:
    // 0x301498: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x301498u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30149c:
    // 0x30149c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30149cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3014a0:
    // 0x3014a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_3014a4:
    if (ctx->pc == 0x3014A4u) {
        ctx->pc = 0x3014A4u;
            // 0x3014a4: 0xaf82a048  sw          $v0, -0x5FB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942792), GPR_U32(ctx, 2));
        ctx->pc = 0x3014A8u;
        goto label_3014a8;
    }
    ctx->pc = 0x3014A0u;
    {
        const bool branch_taken_0x3014a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3014A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3014A0u;
            // 0x3014a4: 0xaf82a048  sw          $v0, -0x5FB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3014a0) {
            ctx->pc = 0x3014ACu;
            goto label_3014ac;
        }
    }
    ctx->pc = 0x3014A8u;
label_3014a8:
    // 0x3014a8: 0xaf80a048  sw          $zero, -0x5FB8($gp)
    ctx->pc = 0x3014a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942792), GPR_U32(ctx, 0));
label_3014ac:
    // 0x3014ac: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_3014b0:
    if (ctx->pc == 0x3014B0u) {
        ctx->pc = 0x3014B0u;
            // 0x3014b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3014B4u;
        goto label_3014b4;
    }
    ctx->pc = 0x3014ACu;
    {
        const bool branch_taken_0x3014ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3014B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3014ACu;
            // 0x3014b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3014ac) {
            ctx->pc = 0x3014C4u;
            goto label_3014c4;
        }
    }
    ctx->pc = 0x3014B4u;
label_3014b4:
    // 0x3014b4: 0xc0bb538  jal         func_2ED4E0
label_3014b8:
    if (ctx->pc == 0x3014B8u) {
        ctx->pc = 0x3014B8u;
            // 0x3014b8: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x3014BCu;
        goto label_3014bc;
    }
    ctx->pc = 0x3014B4u;
    SET_GPR_U32(ctx, 31, 0x3014BCu);
    ctx->pc = 0x3014B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3014B4u;
            // 0x3014b8: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3014BCu; }
        if (ctx->pc != 0x3014BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3014BCu; }
        if (ctx->pc != 0x3014BCu) { return; }
    }
    ctx->pc = 0x3014BCu;
label_3014bc:
    // 0x3014bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3014c0:
    if (ctx->pc == 0x3014C0u) {
        ctx->pc = 0x3014C4u;
        goto label_3014c4;
    }
    ctx->pc = 0x3014BCu;
    {
        const bool branch_taken_0x3014bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3014bc) {
            ctx->pc = 0x3014D8u;
            goto label_3014d8;
        }
    }
    ctx->pc = 0x3014C4u;
label_3014c4:
    // 0x3014c4: 0x8f83a054  lw          $v1, -0x5FAC($gp)
    ctx->pc = 0x3014c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942804)));
label_3014c8:
    // 0x3014c8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3014c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3014cc:
    // 0x3014cc: 0xaf82a058  sw          $v0, -0x5FA8($gp)
    ctx->pc = 0x3014ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942808), GPR_U32(ctx, 2));
label_3014d0:
    // 0x3014d0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3014d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3014d4:
    // 0x3014d4: 0xaf82a054  sw          $v0, -0x5FAC($gp)
    ctx->pc = 0x3014d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942804), GPR_U32(ctx, 2));
label_3014d8:
    // 0x3014d8: 0x8f82a058  lw          $v0, -0x5FA8($gp)
    ctx->pc = 0x3014d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942808)));
label_3014dc:
    // 0x3014dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3014dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3014e0:
    // 0x3014e0: 0xaf82a058  sw          $v0, -0x5FA8($gp)
    ctx->pc = 0x3014e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942808), GPR_U32(ctx, 2));
label_3014e4:
    // 0x3014e4: 0x8f82a058  lw          $v0, -0x5FA8($gp)
    ctx->pc = 0x3014e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942808)));
label_3014e8:
    // 0x3014e8: 0x1c400009  bgtz        $v0, . + 4 + (0x9 << 2)
label_3014ec:
    if (ctx->pc == 0x3014ECu) {
        ctx->pc = 0x3014ECu;
            // 0x3014ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3014F0u;
        goto label_3014f0;
    }
    ctx->pc = 0x3014E8u;
    {
        const bool branch_taken_0x3014e8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3014ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3014E8u;
            // 0x3014ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3014e8) {
            ctx->pc = 0x301510u;
            goto label_301510;
        }
    }
    ctx->pc = 0x3014F0u;
label_3014f0:
    // 0x3014f0: 0x8f82a054  lw          $v0, -0x5FAC($gp)
    ctx->pc = 0x3014f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942804)));
label_3014f4:
    // 0x3014f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3014f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3014f8:
    // 0x3014f8: 0xaf82a054  sw          $v0, -0x5FAC($gp)
    ctx->pc = 0x3014f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942804), GPR_U32(ctx, 2));
label_3014fc:
    // 0x3014fc: 0x8f82a054  lw          $v0, -0x5FAC($gp)
    ctx->pc = 0x3014fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942804)));
label_301500:
    // 0x301500: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_301504:
    if (ctx->pc == 0x301504u) {
        ctx->pc = 0x301508u;
        goto label_301508;
    }
    ctx->pc = 0x301500u;
    {
        const bool branch_taken_0x301500 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x301500) {
            ctx->pc = 0x30150Cu;
            goto label_30150c;
        }
    }
    ctx->pc = 0x301508u;
label_301508:
    // 0x301508: 0xaf80a054  sw          $zero, -0x5FAC($gp)
    ctx->pc = 0x301508u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942804), GPR_U32(ctx, 0));
label_30150c:
    // 0x30150c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30150cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_301510:
    // 0x301510: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x301510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_301514:
    // 0x301514: 0xc0c4330  jal         func_310CC0
label_301518:
    if (ctx->pc == 0x301518u) {
        ctx->pc = 0x301518u;
            // 0x301518: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->pc = 0x30151Cu;
        goto label_30151c;
    }
    ctx->pc = 0x301514u;
    SET_GPR_U32(ctx, 31, 0x30151Cu);
    ctx->pc = 0x301518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301514u;
            // 0x301518: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x310CC0u;
    if (runtime->hasFunction(0x310CC0u)) {
        auto targetFn = runtime->lookupFunction(0x310CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30151Cu; }
        if (ctx->pc != 0x30151Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FishBattle__FP6CSceneP6CCPolyi_0x310cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30151Cu; }
        if (ctx->pc != 0x30151Cu) { return; }
    }
    ctx->pc = 0x30151Cu;
label_30151c:
    // 0x30151c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30151cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_301520:
    // 0x301520: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x301520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_301524:
    // 0x301524: 0xc0c0ccc  jal         func_303330
label_301528:
    if (ctx->pc == 0x301528u) {
        ctx->pc = 0x301528u;
            // 0x301528: 0x24849d00  addiu       $a0, $a0, -0x6300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941952));
        ctx->pc = 0x30152Cu;
        goto label_30152c;
    }
    ctx->pc = 0x301524u;
    SET_GPR_U32(ctx, 31, 0x30152Cu);
    ctx->pc = 0x301528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301524u;
            // 0x301528: 0x24849d00  addiu       $a0, $a0, -0x6300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303330u;
    if (runtime->hasFunction(0x303330u)) {
        auto targetFn = runtime->lookupFunction(0x303330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30152Cu; }
        if (ctx->pc != 0x30152Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LineTensionStep__FP9FISH_DATAi_0x303330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30152Cu; }
        if (ctx->pc != 0x30152Cu) { return; }
    }
    ctx->pc = 0x30152Cu;
label_30152c:
    // 0x30152c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30152cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_301530:
    // 0x301530: 0xc0c05a8  jal         func_3016A0
label_301534:
    if (ctx->pc == 0x301534u) {
        ctx->pc = 0x301534u;
            // 0x301534: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301538u;
        goto label_301538;
    }
    ctx->pc = 0x301530u;
    SET_GPR_U32(ctx, 31, 0x301538u);
    ctx->pc = 0x301534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301530u;
            // 0x301534: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3016A0u;
    if (runtime->hasFunction(0x3016A0u)) {
        auto targetFn = runtime->lookupFunction(0x3016A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301538u; }
        if (ctx->pc != 0x301538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishDist__FP6CScene_0x3016a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301538u; }
        if (ctx->pc != 0x301538u) { return; }
    }
    ctx->pc = 0x301538u;
label_301538:
    // 0x301538: 0xc781a040  lwc1        $f1, -0x5FC0($gp)
    ctx->pc = 0x301538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30153c:
    // 0x30153c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x30153cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_301540:
    // 0x301540: 0x0  nop
    ctx->pc = 0x301540u;
    // NOP
label_301544:
    // 0x301544: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_301548:
    if (ctx->pc == 0x301548u) {
        ctx->pc = 0x30154Cu;
        goto label_30154c;
    }
    ctx->pc = 0x301544u;
    {
        const bool branch_taken_0x301544 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x301544) {
            ctx->pc = 0x301554u;
            goto label_301554;
        }
    }
    ctx->pc = 0x30154Cu;
label_30154c:
    // 0x30154c: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
label_301550:
    if (ctx->pc == 0x301550u) {
        ctx->pc = 0x301554u;
        goto label_301554;
    }
    ctx->pc = 0x30154Cu;
    {
        const bool branch_taken_0x30154c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x30154c) {
            ctx->pc = 0x301558u;
            goto label_301558;
        }
    }
    ctx->pc = 0x301554u;
label_301554:
    // 0x301554: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x301554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_301558:
    // 0x301558: 0x8f83a044  lw          $v1, -0x5FBC($gp)
    ctx->pc = 0x301558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942788)));
label_30155c:
    // 0x30155c: 0x28610064  slti        $at, $v1, 0x64
    ctx->pc = 0x30155cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
label_301560:
    // 0x301560: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_301564:
    if (ctx->pc == 0x301564u) {
        ctx->pc = 0x301568u;
        goto label_301568;
    }
    ctx->pc = 0x301560u;
    {
        const bool branch_taken_0x301560 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x301560) {
            ctx->pc = 0x30156Cu;
            goto label_30156c;
        }
    }
    ctx->pc = 0x301568u;
label_301568:
    // 0x301568: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x301568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30156c:
    // 0x30156c: 0x8f839fd8  lw          $v1, -0x6028($gp)
    ctx->pc = 0x30156cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942680)));
label_301570:
    // 0x301570: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_301574:
    if (ctx->pc == 0x301574u) {
        ctx->pc = 0x301578u;
        goto label_301578;
    }
    ctx->pc = 0x301570u;
    {
        const bool branch_taken_0x301570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x301570) {
            ctx->pc = 0x301588u;
            goto label_301588;
        }
    }
    ctx->pc = 0x301578u;
label_301578:
    // 0x301578: 0x8f839fdc  lw          $v1, -0x6024($gp)
    ctx->pc = 0x301578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942684)));
label_30157c:
    // 0x30157c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_301580:
    if (ctx->pc == 0x301580u) {
        ctx->pc = 0x301584u;
        goto label_301584;
    }
    ctx->pc = 0x30157Cu;
    {
        const bool branch_taken_0x30157c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30157c) {
            ctx->pc = 0x301588u;
            goto label_301588;
        }
    }
    ctx->pc = 0x301584u;
label_301584:
    // 0x301584: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x301584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301588:
    // 0x301588: 0xc781a028  lwc1        $f1, -0x5FD8($gp)
    ctx->pc = 0x301588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30158c:
    // 0x30158c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30158cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_301590:
    // 0x301590: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301590u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_301594:
    // 0x301594: 0x0  nop
    ctx->pc = 0x301594u;
    // NOP
label_301598:
    // 0x301598: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x301598u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30159c:
    // 0x30159c: 0x0  nop
    ctx->pc = 0x30159cu;
    // NOP
label_3015a0:
    // 0x3015a0: 0x45010012  bc1t        . + 4 + (0x12 << 2)
label_3015a4:
    if (ctx->pc == 0x3015A4u) {
        ctx->pc = 0x3015A4u;
            // 0x3015a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3015A8u;
        goto label_3015a8;
    }
    ctx->pc = 0x3015A0u;
    {
        const bool branch_taken_0x3015a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3015A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3015A0u;
            // 0x3015a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3015a0) {
            ctx->pc = 0x3015ECu;
            goto label_3015ec;
        }
    }
    ctx->pc = 0x3015A8u;
label_3015a8:
    // 0x3015a8: 0xc0c05d8  jal         func_301760
label_3015ac:
    if (ctx->pc == 0x3015ACu) {
        ctx->pc = 0x3015B0u;
        goto label_3015b0;
    }
    ctx->pc = 0x3015A8u;
    SET_GPR_U32(ctx, 31, 0x3015B0u);
    ctx->pc = 0x301760u;
    if (runtime->hasFunction(0x301760u)) {
        auto targetFn = runtime->lookupFunction(0x301760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3015B0u; }
        if (ctx->pc != 0x3015B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitFalse__FP6CScene_0x301760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3015B0u; }
        if (ctx->pc != 0x3015B0u) { return; }
    }
    ctx->pc = 0x3015B0u;
label_3015b0:
    // 0x3015b0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_3015b4:
    if (ctx->pc == 0x3015B4u) {
        ctx->pc = 0x3015B8u;
        goto label_3015b8;
    }
    ctx->pc = 0x3015B0u;
    {
        const bool branch_taken_0x3015b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3015b0) {
            ctx->pc = 0x301664u;
            goto label_301664;
        }
    }
    ctx->pc = 0x3015B8u;
label_3015b8:
    // 0x3015b8: 0xc0c430c  jal         func_310C30
label_3015bc:
    if (ctx->pc == 0x3015BCu) {
        ctx->pc = 0x3015C0u;
        goto label_3015c0;
    }
    ctx->pc = 0x3015B8u;
    SET_GPR_U32(ctx, 31, 0x3015C0u);
    ctx->pc = 0x310C30u;
    if (runtime->hasFunction(0x310C30u)) {
        auto targetFn = runtime->lookupFunction(0x310C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3015C0u; }
        if (ctx->pc != 0x3015C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndFishBattle__Fv_0x310c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3015C0u; }
        if (ctx->pc != 0x3015C0u) { return; }
    }
    ctx->pc = 0x3015C0u;
label_3015c0:
    // 0x3015c0: 0xc0bf1d0  jal         func_2FC740
label_3015c4:
    if (ctx->pc == 0x3015C4u) {
        ctx->pc = 0x3015C4u;
            // 0x3015c4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x3015C8u;
        goto label_3015c8;
    }
    ctx->pc = 0x3015C0u;
    SET_GPR_U32(ctx, 31, 0x3015C8u);
    ctx->pc = 0x3015C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3015C0u;
            // 0x3015c4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC740u;
    if (runtime->hasFunction(0x2FC740u)) {
        auto targetFn = runtime->lookupFunction(0x2FC740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3015C8u; }
        if (ctx->pc != 0x3015C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextMode__Fi_0x2fc740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3015C8u; }
        if (ctx->pc != 0x3015C8u) { return; }
    }
    ctx->pc = 0x3015C8u;
label_3015c8:
    // 0x3015c8: 0x8f849f74  lw          $a0, -0x608C($gp)
    ctx->pc = 0x3015c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_3015cc:
    // 0x3015cc: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x3015ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3015d0:
    // 0x3015d0: 0xc063818  jal         func_18E060
label_3015d4:
    if (ctx->pc == 0x3015D4u) {
        ctx->pc = 0x3015D4u;
            // 0x3015d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3015D8u;
        goto label_3015d8;
    }
    ctx->pc = 0x3015D0u;
    SET_GPR_U32(ctx, 31, 0x3015D8u);
    ctx->pc = 0x3015D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3015D0u;
            // 0x3015d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3015D8u; }
        if (ctx->pc != 0x3015D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3015D8u; }
        if (ctx->pc != 0x3015D8u) { return; }
    }
    ctx->pc = 0x3015D8u;
label_3015d8:
    // 0x3015d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3015d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3015dc:
    // 0x3015dc: 0xc0a98a0  jal         func_2A6280
label_3015e0:
    if (ctx->pc == 0x3015E0u) {
        ctx->pc = 0x3015E0u;
            // 0x3015e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3015E4u;
        goto label_3015e4;
    }
    ctx->pc = 0x3015DCu;
    SET_GPR_U32(ctx, 31, 0x3015E4u);
    ctx->pc = 0x3015E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3015DCu;
            // 0x3015e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3015E4u; }
        if (ctx->pc != 0x3015E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3015E4u; }
        if (ctx->pc != 0x3015E4u) { return; }
    }
    ctx->pc = 0x3015E4u;
label_3015e4:
    // 0x3015e4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_3015e8:
    if (ctx->pc == 0x3015E8u) {
        ctx->pc = 0x3015ECu;
        goto label_3015ec;
    }
    ctx->pc = 0x3015E4u;
    {
        const bool branch_taken_0x3015e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3015e4) {
            ctx->pc = 0x301664u;
            goto label_301664;
        }
    }
    ctx->pc = 0x3015ECu;
label_3015ec:
    // 0x3015ec: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
label_3015f0:
    if (ctx->pc == 0x3015F0u) {
        ctx->pc = 0x3015F4u;
        goto label_3015f4;
    }
    ctx->pc = 0x3015ECu;
    {
        const bool branch_taken_0x3015ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3015ec) {
            ctx->pc = 0x301664u;
            goto label_301664;
        }
    }
    ctx->pc = 0x3015F4u;
label_3015f4:
    // 0x3015f4: 0x8f82a020  lw          $v0, -0x5FE0($gp)
    ctx->pc = 0x3015f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942752)));
label_3015f8:
    // 0x3015f8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_3015fc:
    if (ctx->pc == 0x3015FCu) {
        ctx->pc = 0x3015FCu;
            // 0x3015fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301600u;
        goto label_301600;
    }
    ctx->pc = 0x3015F8u;
    {
        const bool branch_taken_0x3015f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3015FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3015F8u;
            // 0x3015fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3015f8) {
            ctx->pc = 0x301628u;
            goto label_301628;
        }
    }
    ctx->pc = 0x301600u;
label_301600:
    // 0x301600: 0xc0c05d8  jal         func_301760
label_301604:
    if (ctx->pc == 0x301604u) {
        ctx->pc = 0x301604u;
            // 0x301604: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301608u;
        goto label_301608;
    }
    ctx->pc = 0x301600u;
    SET_GPR_U32(ctx, 31, 0x301608u);
    ctx->pc = 0x301604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301600u;
            // 0x301604: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301760u;
    if (runtime->hasFunction(0x301760u)) {
        auto targetFn = runtime->lookupFunction(0x301760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301608u; }
        if (ctx->pc != 0x301608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitFalse__FP6CScene_0x301760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301608u; }
        if (ctx->pc != 0x301608u) { return; }
    }
    ctx->pc = 0x301608u;
label_301608:
    // 0x301608: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_30160c:
    if (ctx->pc == 0x30160Cu) {
        ctx->pc = 0x301610u;
        goto label_301610;
    }
    ctx->pc = 0x301608u;
    {
        const bool branch_taken_0x301608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301608) {
            ctx->pc = 0x301664u;
            goto label_301664;
        }
    }
    ctx->pc = 0x301610u;
label_301610:
    // 0x301610: 0xc0c430c  jal         func_310C30
label_301614:
    if (ctx->pc == 0x301614u) {
        ctx->pc = 0x301618u;
        goto label_301618;
    }
    ctx->pc = 0x301610u;
    SET_GPR_U32(ctx, 31, 0x301618u);
    ctx->pc = 0x310C30u;
    if (runtime->hasFunction(0x310C30u)) {
        auto targetFn = runtime->lookupFunction(0x310C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301618u; }
        if (ctx->pc != 0x301618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndFishBattle__Fv_0x310c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301618u; }
        if (ctx->pc != 0x301618u) { return; }
    }
    ctx->pc = 0x301618u;
label_301618:
    // 0x301618: 0xc0bf1d0  jal         func_2FC740
label_30161c:
    if (ctx->pc == 0x30161Cu) {
        ctx->pc = 0x30161Cu;
            // 0x30161c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x301620u;
        goto label_301620;
    }
    ctx->pc = 0x301618u;
    SET_GPR_U32(ctx, 31, 0x301620u);
    ctx->pc = 0x30161Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301618u;
            // 0x30161c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC740u;
    if (runtime->hasFunction(0x2FC740u)) {
        auto targetFn = runtime->lookupFunction(0x2FC740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301620u; }
        if (ctx->pc != 0x301620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextMode__Fi_0x2fc740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301620u; }
        if (ctx->pc != 0x301620u) { return; }
    }
    ctx->pc = 0x301620u;
label_301620:
    // 0x301620: 0x10000010  b           . + 4 + (0x10 << 2)
label_301624:
    if (ctx->pc == 0x301624u) {
        ctx->pc = 0x301628u;
        goto label_301628;
    }
    ctx->pc = 0x301620u;
    {
        const bool branch_taken_0x301620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301620) {
            ctx->pc = 0x301664u;
            goto label_301664;
        }
    }
    ctx->pc = 0x301628u;
label_301628:
    // 0x301628: 0xc0c06d4  jal         func_301B50
label_30162c:
    if (ctx->pc == 0x30162Cu) {
        ctx->pc = 0x301630u;
        goto label_301630;
    }
    ctx->pc = 0x301628u;
    SET_GPR_U32(ctx, 31, 0x301630u);
    ctx->pc = 0x301B50u;
    if (runtime->hasFunction(0x301B50u)) {
        auto targetFn = runtime->lookupFunction(0x301B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301630u; }
        if (ctx->pc != 0x301630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSuccess__FP6CScene_0x301b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301630u; }
        if (ctx->pc != 0x301630u) { return; }
    }
    ctx->pc = 0x301630u;
label_301630:
    // 0x301630: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_301634:
    if (ctx->pc == 0x301634u) {
        ctx->pc = 0x301638u;
        goto label_301638;
    }
    ctx->pc = 0x301630u;
    {
        const bool branch_taken_0x301630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301630) {
            ctx->pc = 0x301664u;
            goto label_301664;
        }
    }
    ctx->pc = 0x301638u;
label_301638:
    // 0x301638: 0xc0c430c  jal         func_310C30
label_30163c:
    if (ctx->pc == 0x30163Cu) {
        ctx->pc = 0x301640u;
        goto label_301640;
    }
    ctx->pc = 0x301638u;
    SET_GPR_U32(ctx, 31, 0x301640u);
    ctx->pc = 0x310C30u;
    if (runtime->hasFunction(0x310C30u)) {
        auto targetFn = runtime->lookupFunction(0x310C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301640u; }
        if (ctx->pc != 0x301640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndFishBattle__Fv_0x310c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301640u; }
        if (ctx->pc != 0x301640u) { return; }
    }
    ctx->pc = 0x301640u;
label_301640:
    // 0x301640: 0xc0bf1d0  jal         func_2FC740
label_301644:
    if (ctx->pc == 0x301644u) {
        ctx->pc = 0x301644u;
            // 0x301644: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x301648u;
        goto label_301648;
    }
    ctx->pc = 0x301640u;
    SET_GPR_U32(ctx, 31, 0x301648u);
    ctx->pc = 0x301644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301640u;
            // 0x301644: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC740u;
    if (runtime->hasFunction(0x2FC740u)) {
        auto targetFn = runtime->lookupFunction(0x2FC740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301648u; }
        if (ctx->pc != 0x301648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextMode__Fi_0x2fc740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301648u; }
        if (ctx->pc != 0x301648u) { return; }
    }
    ctx->pc = 0x301648u;
label_301648:
    // 0x301648: 0x8f849f74  lw          $a0, -0x608C($gp)
    ctx->pc = 0x301648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_30164c:
    // 0x30164c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x30164cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_301650:
    // 0x301650: 0xc063818  jal         func_18E060
label_301654:
    if (ctx->pc == 0x301654u) {
        ctx->pc = 0x301654u;
            // 0x301654: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301658u;
        goto label_301658;
    }
    ctx->pc = 0x301650u;
    SET_GPR_U32(ctx, 31, 0x301658u);
    ctx->pc = 0x301654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301650u;
            // 0x301654: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301658u; }
        if (ctx->pc != 0x301658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301658u; }
        if (ctx->pc != 0x301658u) { return; }
    }
    ctx->pc = 0x301658u;
label_301658:
    // 0x301658: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x301658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30165c:
    // 0x30165c: 0xc0a98a0  jal         func_2A6280
label_301660:
    if (ctx->pc == 0x301660u) {
        ctx->pc = 0x301660u;
            // 0x301660: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301664u;
        goto label_301664;
    }
    ctx->pc = 0x30165Cu;
    SET_GPR_U32(ctx, 31, 0x301664u);
    ctx->pc = 0x301660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30165Cu;
            // 0x301660: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301664u; }
        if (ctx->pc != 0x301664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301664u; }
        if (ctx->pc != 0x301664u) { return; }
    }
    ctx->pc = 0x301664u;
label_301664:
    // 0x301664: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x301664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_301668:
    // 0x301668: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x301668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_30166c:
    // 0x30166c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x30166cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_301670:
    // 0x301670: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x301670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_301674:
    // 0x301674: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x301674u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_301678:
    // 0x301678: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x301678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_30167c:
    // 0x30167c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x30167cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_301680:
    // 0x301680: 0x342140b0  ori         $at, $at, 0x40B0
    ctx->pc = 0x301680u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16560);
label_301684:
    // 0x301684: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x301684u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_301688:
    // 0x301688: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x301688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30168c:
    // 0x30168c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30168cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_301690:
    // 0x301690: 0x3e00008  jr          $ra
label_301694:
    if (ctx->pc == 0x301694u) {
        ctx->pc = 0x301694u;
            // 0x301694: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->pc = 0x301698u;
        goto label_fallthrough_0x301690;
    }
    ctx->pc = 0x301690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301690u;
            // 0x301694: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x301690:
    ctx->pc = 0x301698u;
}
