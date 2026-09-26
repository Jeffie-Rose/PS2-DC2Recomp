#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__9CAquariumFv
// Address: 0x216000 - 0x217b04
void Step__9CAquariumFv_0x216000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__9CAquariumFv_0x216000");
#endif

    switch (ctx->pc) {
        case 0x216000u: goto label_216000;
        case 0x216004u: goto label_216004;
        case 0x216008u: goto label_216008;
        case 0x21600cu: goto label_21600c;
        case 0x216010u: goto label_216010;
        case 0x216014u: goto label_216014;
        case 0x216018u: goto label_216018;
        case 0x21601cu: goto label_21601c;
        case 0x216020u: goto label_216020;
        case 0x216024u: goto label_216024;
        case 0x216028u: goto label_216028;
        case 0x21602cu: goto label_21602c;
        case 0x216030u: goto label_216030;
        case 0x216034u: goto label_216034;
        case 0x216038u: goto label_216038;
        case 0x21603cu: goto label_21603c;
        case 0x216040u: goto label_216040;
        case 0x216044u: goto label_216044;
        case 0x216048u: goto label_216048;
        case 0x21604cu: goto label_21604c;
        case 0x216050u: goto label_216050;
        case 0x216054u: goto label_216054;
        case 0x216058u: goto label_216058;
        case 0x21605cu: goto label_21605c;
        case 0x216060u: goto label_216060;
        case 0x216064u: goto label_216064;
        case 0x216068u: goto label_216068;
        case 0x21606cu: goto label_21606c;
        case 0x216070u: goto label_216070;
        case 0x216074u: goto label_216074;
        case 0x216078u: goto label_216078;
        case 0x21607cu: goto label_21607c;
        case 0x216080u: goto label_216080;
        case 0x216084u: goto label_216084;
        case 0x216088u: goto label_216088;
        case 0x21608cu: goto label_21608c;
        case 0x216090u: goto label_216090;
        case 0x216094u: goto label_216094;
        case 0x216098u: goto label_216098;
        case 0x21609cu: goto label_21609c;
        case 0x2160a0u: goto label_2160a0;
        case 0x2160a4u: goto label_2160a4;
        case 0x2160a8u: goto label_2160a8;
        case 0x2160acu: goto label_2160ac;
        case 0x2160b0u: goto label_2160b0;
        case 0x2160b4u: goto label_2160b4;
        case 0x2160b8u: goto label_2160b8;
        case 0x2160bcu: goto label_2160bc;
        case 0x2160c0u: goto label_2160c0;
        case 0x2160c4u: goto label_2160c4;
        case 0x2160c8u: goto label_2160c8;
        case 0x2160ccu: goto label_2160cc;
        case 0x2160d0u: goto label_2160d0;
        case 0x2160d4u: goto label_2160d4;
        case 0x2160d8u: goto label_2160d8;
        case 0x2160dcu: goto label_2160dc;
        case 0x2160e0u: goto label_2160e0;
        case 0x2160e4u: goto label_2160e4;
        case 0x2160e8u: goto label_2160e8;
        case 0x2160ecu: goto label_2160ec;
        case 0x2160f0u: goto label_2160f0;
        case 0x2160f4u: goto label_2160f4;
        case 0x2160f8u: goto label_2160f8;
        case 0x2160fcu: goto label_2160fc;
        case 0x216100u: goto label_216100;
        case 0x216104u: goto label_216104;
        case 0x216108u: goto label_216108;
        case 0x21610cu: goto label_21610c;
        case 0x216110u: goto label_216110;
        case 0x216114u: goto label_216114;
        case 0x216118u: goto label_216118;
        case 0x21611cu: goto label_21611c;
        case 0x216120u: goto label_216120;
        case 0x216124u: goto label_216124;
        case 0x216128u: goto label_216128;
        case 0x21612cu: goto label_21612c;
        case 0x216130u: goto label_216130;
        case 0x216134u: goto label_216134;
        case 0x216138u: goto label_216138;
        case 0x21613cu: goto label_21613c;
        case 0x216140u: goto label_216140;
        case 0x216144u: goto label_216144;
        case 0x216148u: goto label_216148;
        case 0x21614cu: goto label_21614c;
        case 0x216150u: goto label_216150;
        case 0x216154u: goto label_216154;
        case 0x216158u: goto label_216158;
        case 0x21615cu: goto label_21615c;
        case 0x216160u: goto label_216160;
        case 0x216164u: goto label_216164;
        case 0x216168u: goto label_216168;
        case 0x21616cu: goto label_21616c;
        case 0x216170u: goto label_216170;
        case 0x216174u: goto label_216174;
        case 0x216178u: goto label_216178;
        case 0x21617cu: goto label_21617c;
        case 0x216180u: goto label_216180;
        case 0x216184u: goto label_216184;
        case 0x216188u: goto label_216188;
        case 0x21618cu: goto label_21618c;
        case 0x216190u: goto label_216190;
        case 0x216194u: goto label_216194;
        case 0x216198u: goto label_216198;
        case 0x21619cu: goto label_21619c;
        case 0x2161a0u: goto label_2161a0;
        case 0x2161a4u: goto label_2161a4;
        case 0x2161a8u: goto label_2161a8;
        case 0x2161acu: goto label_2161ac;
        case 0x2161b0u: goto label_2161b0;
        case 0x2161b4u: goto label_2161b4;
        case 0x2161b8u: goto label_2161b8;
        case 0x2161bcu: goto label_2161bc;
        case 0x2161c0u: goto label_2161c0;
        case 0x2161c4u: goto label_2161c4;
        case 0x2161c8u: goto label_2161c8;
        case 0x2161ccu: goto label_2161cc;
        case 0x2161d0u: goto label_2161d0;
        case 0x2161d4u: goto label_2161d4;
        case 0x2161d8u: goto label_2161d8;
        case 0x2161dcu: goto label_2161dc;
        case 0x2161e0u: goto label_2161e0;
        case 0x2161e4u: goto label_2161e4;
        case 0x2161e8u: goto label_2161e8;
        case 0x2161ecu: goto label_2161ec;
        case 0x2161f0u: goto label_2161f0;
        case 0x2161f4u: goto label_2161f4;
        case 0x2161f8u: goto label_2161f8;
        case 0x2161fcu: goto label_2161fc;
        case 0x216200u: goto label_216200;
        case 0x216204u: goto label_216204;
        case 0x216208u: goto label_216208;
        case 0x21620cu: goto label_21620c;
        case 0x216210u: goto label_216210;
        case 0x216214u: goto label_216214;
        case 0x216218u: goto label_216218;
        case 0x21621cu: goto label_21621c;
        case 0x216220u: goto label_216220;
        case 0x216224u: goto label_216224;
        case 0x216228u: goto label_216228;
        case 0x21622cu: goto label_21622c;
        case 0x216230u: goto label_216230;
        case 0x216234u: goto label_216234;
        case 0x216238u: goto label_216238;
        case 0x21623cu: goto label_21623c;
        case 0x216240u: goto label_216240;
        case 0x216244u: goto label_216244;
        case 0x216248u: goto label_216248;
        case 0x21624cu: goto label_21624c;
        case 0x216250u: goto label_216250;
        case 0x216254u: goto label_216254;
        case 0x216258u: goto label_216258;
        case 0x21625cu: goto label_21625c;
        case 0x216260u: goto label_216260;
        case 0x216264u: goto label_216264;
        case 0x216268u: goto label_216268;
        case 0x21626cu: goto label_21626c;
        case 0x216270u: goto label_216270;
        case 0x216274u: goto label_216274;
        case 0x216278u: goto label_216278;
        case 0x21627cu: goto label_21627c;
        case 0x216280u: goto label_216280;
        case 0x216284u: goto label_216284;
        case 0x216288u: goto label_216288;
        case 0x21628cu: goto label_21628c;
        case 0x216290u: goto label_216290;
        case 0x216294u: goto label_216294;
        case 0x216298u: goto label_216298;
        case 0x21629cu: goto label_21629c;
        case 0x2162a0u: goto label_2162a0;
        case 0x2162a4u: goto label_2162a4;
        case 0x2162a8u: goto label_2162a8;
        case 0x2162acu: goto label_2162ac;
        case 0x2162b0u: goto label_2162b0;
        case 0x2162b4u: goto label_2162b4;
        case 0x2162b8u: goto label_2162b8;
        case 0x2162bcu: goto label_2162bc;
        case 0x2162c0u: goto label_2162c0;
        case 0x2162c4u: goto label_2162c4;
        case 0x2162c8u: goto label_2162c8;
        case 0x2162ccu: goto label_2162cc;
        case 0x2162d0u: goto label_2162d0;
        case 0x2162d4u: goto label_2162d4;
        case 0x2162d8u: goto label_2162d8;
        case 0x2162dcu: goto label_2162dc;
        case 0x2162e0u: goto label_2162e0;
        case 0x2162e4u: goto label_2162e4;
        case 0x2162e8u: goto label_2162e8;
        case 0x2162ecu: goto label_2162ec;
        case 0x2162f0u: goto label_2162f0;
        case 0x2162f4u: goto label_2162f4;
        case 0x2162f8u: goto label_2162f8;
        case 0x2162fcu: goto label_2162fc;
        case 0x216300u: goto label_216300;
        case 0x216304u: goto label_216304;
        case 0x216308u: goto label_216308;
        case 0x21630cu: goto label_21630c;
        case 0x216310u: goto label_216310;
        case 0x216314u: goto label_216314;
        case 0x216318u: goto label_216318;
        case 0x21631cu: goto label_21631c;
        case 0x216320u: goto label_216320;
        case 0x216324u: goto label_216324;
        case 0x216328u: goto label_216328;
        case 0x21632cu: goto label_21632c;
        case 0x216330u: goto label_216330;
        case 0x216334u: goto label_216334;
        case 0x216338u: goto label_216338;
        case 0x21633cu: goto label_21633c;
        case 0x216340u: goto label_216340;
        case 0x216344u: goto label_216344;
        case 0x216348u: goto label_216348;
        case 0x21634cu: goto label_21634c;
        case 0x216350u: goto label_216350;
        case 0x216354u: goto label_216354;
        case 0x216358u: goto label_216358;
        case 0x21635cu: goto label_21635c;
        case 0x216360u: goto label_216360;
        case 0x216364u: goto label_216364;
        case 0x216368u: goto label_216368;
        case 0x21636cu: goto label_21636c;
        case 0x216370u: goto label_216370;
        case 0x216374u: goto label_216374;
        case 0x216378u: goto label_216378;
        case 0x21637cu: goto label_21637c;
        case 0x216380u: goto label_216380;
        case 0x216384u: goto label_216384;
        case 0x216388u: goto label_216388;
        case 0x21638cu: goto label_21638c;
        case 0x216390u: goto label_216390;
        case 0x216394u: goto label_216394;
        case 0x216398u: goto label_216398;
        case 0x21639cu: goto label_21639c;
        case 0x2163a0u: goto label_2163a0;
        case 0x2163a4u: goto label_2163a4;
        case 0x2163a8u: goto label_2163a8;
        case 0x2163acu: goto label_2163ac;
        case 0x2163b0u: goto label_2163b0;
        case 0x2163b4u: goto label_2163b4;
        case 0x2163b8u: goto label_2163b8;
        case 0x2163bcu: goto label_2163bc;
        case 0x2163c0u: goto label_2163c0;
        case 0x2163c4u: goto label_2163c4;
        case 0x2163c8u: goto label_2163c8;
        case 0x2163ccu: goto label_2163cc;
        case 0x2163d0u: goto label_2163d0;
        case 0x2163d4u: goto label_2163d4;
        case 0x2163d8u: goto label_2163d8;
        case 0x2163dcu: goto label_2163dc;
        case 0x2163e0u: goto label_2163e0;
        case 0x2163e4u: goto label_2163e4;
        case 0x2163e8u: goto label_2163e8;
        case 0x2163ecu: goto label_2163ec;
        case 0x2163f0u: goto label_2163f0;
        case 0x2163f4u: goto label_2163f4;
        case 0x2163f8u: goto label_2163f8;
        case 0x2163fcu: goto label_2163fc;
        case 0x216400u: goto label_216400;
        case 0x216404u: goto label_216404;
        case 0x216408u: goto label_216408;
        case 0x21640cu: goto label_21640c;
        case 0x216410u: goto label_216410;
        case 0x216414u: goto label_216414;
        case 0x216418u: goto label_216418;
        case 0x21641cu: goto label_21641c;
        case 0x216420u: goto label_216420;
        case 0x216424u: goto label_216424;
        case 0x216428u: goto label_216428;
        case 0x21642cu: goto label_21642c;
        case 0x216430u: goto label_216430;
        case 0x216434u: goto label_216434;
        case 0x216438u: goto label_216438;
        case 0x21643cu: goto label_21643c;
        case 0x216440u: goto label_216440;
        case 0x216444u: goto label_216444;
        case 0x216448u: goto label_216448;
        case 0x21644cu: goto label_21644c;
        case 0x216450u: goto label_216450;
        case 0x216454u: goto label_216454;
        case 0x216458u: goto label_216458;
        case 0x21645cu: goto label_21645c;
        case 0x216460u: goto label_216460;
        case 0x216464u: goto label_216464;
        case 0x216468u: goto label_216468;
        case 0x21646cu: goto label_21646c;
        case 0x216470u: goto label_216470;
        case 0x216474u: goto label_216474;
        case 0x216478u: goto label_216478;
        case 0x21647cu: goto label_21647c;
        case 0x216480u: goto label_216480;
        case 0x216484u: goto label_216484;
        case 0x216488u: goto label_216488;
        case 0x21648cu: goto label_21648c;
        case 0x216490u: goto label_216490;
        case 0x216494u: goto label_216494;
        case 0x216498u: goto label_216498;
        case 0x21649cu: goto label_21649c;
        case 0x2164a0u: goto label_2164a0;
        case 0x2164a4u: goto label_2164a4;
        case 0x2164a8u: goto label_2164a8;
        case 0x2164acu: goto label_2164ac;
        case 0x2164b0u: goto label_2164b0;
        case 0x2164b4u: goto label_2164b4;
        case 0x2164b8u: goto label_2164b8;
        case 0x2164bcu: goto label_2164bc;
        case 0x2164c0u: goto label_2164c0;
        case 0x2164c4u: goto label_2164c4;
        case 0x2164c8u: goto label_2164c8;
        case 0x2164ccu: goto label_2164cc;
        case 0x2164d0u: goto label_2164d0;
        case 0x2164d4u: goto label_2164d4;
        case 0x2164d8u: goto label_2164d8;
        case 0x2164dcu: goto label_2164dc;
        case 0x2164e0u: goto label_2164e0;
        case 0x2164e4u: goto label_2164e4;
        case 0x2164e8u: goto label_2164e8;
        case 0x2164ecu: goto label_2164ec;
        case 0x2164f0u: goto label_2164f0;
        case 0x2164f4u: goto label_2164f4;
        case 0x2164f8u: goto label_2164f8;
        case 0x2164fcu: goto label_2164fc;
        case 0x216500u: goto label_216500;
        case 0x216504u: goto label_216504;
        case 0x216508u: goto label_216508;
        case 0x21650cu: goto label_21650c;
        case 0x216510u: goto label_216510;
        case 0x216514u: goto label_216514;
        case 0x216518u: goto label_216518;
        case 0x21651cu: goto label_21651c;
        case 0x216520u: goto label_216520;
        case 0x216524u: goto label_216524;
        case 0x216528u: goto label_216528;
        case 0x21652cu: goto label_21652c;
        case 0x216530u: goto label_216530;
        case 0x216534u: goto label_216534;
        case 0x216538u: goto label_216538;
        case 0x21653cu: goto label_21653c;
        case 0x216540u: goto label_216540;
        case 0x216544u: goto label_216544;
        case 0x216548u: goto label_216548;
        case 0x21654cu: goto label_21654c;
        case 0x216550u: goto label_216550;
        case 0x216554u: goto label_216554;
        case 0x216558u: goto label_216558;
        case 0x21655cu: goto label_21655c;
        case 0x216560u: goto label_216560;
        case 0x216564u: goto label_216564;
        case 0x216568u: goto label_216568;
        case 0x21656cu: goto label_21656c;
        case 0x216570u: goto label_216570;
        case 0x216574u: goto label_216574;
        case 0x216578u: goto label_216578;
        case 0x21657cu: goto label_21657c;
        case 0x216580u: goto label_216580;
        case 0x216584u: goto label_216584;
        case 0x216588u: goto label_216588;
        case 0x21658cu: goto label_21658c;
        case 0x216590u: goto label_216590;
        case 0x216594u: goto label_216594;
        case 0x216598u: goto label_216598;
        case 0x21659cu: goto label_21659c;
        case 0x2165a0u: goto label_2165a0;
        case 0x2165a4u: goto label_2165a4;
        case 0x2165a8u: goto label_2165a8;
        case 0x2165acu: goto label_2165ac;
        case 0x2165b0u: goto label_2165b0;
        case 0x2165b4u: goto label_2165b4;
        case 0x2165b8u: goto label_2165b8;
        case 0x2165bcu: goto label_2165bc;
        case 0x2165c0u: goto label_2165c0;
        case 0x2165c4u: goto label_2165c4;
        case 0x2165c8u: goto label_2165c8;
        case 0x2165ccu: goto label_2165cc;
        case 0x2165d0u: goto label_2165d0;
        case 0x2165d4u: goto label_2165d4;
        case 0x2165d8u: goto label_2165d8;
        case 0x2165dcu: goto label_2165dc;
        case 0x2165e0u: goto label_2165e0;
        case 0x2165e4u: goto label_2165e4;
        case 0x2165e8u: goto label_2165e8;
        case 0x2165ecu: goto label_2165ec;
        case 0x2165f0u: goto label_2165f0;
        case 0x2165f4u: goto label_2165f4;
        case 0x2165f8u: goto label_2165f8;
        case 0x2165fcu: goto label_2165fc;
        case 0x216600u: goto label_216600;
        case 0x216604u: goto label_216604;
        case 0x216608u: goto label_216608;
        case 0x21660cu: goto label_21660c;
        case 0x216610u: goto label_216610;
        case 0x216614u: goto label_216614;
        case 0x216618u: goto label_216618;
        case 0x21661cu: goto label_21661c;
        case 0x216620u: goto label_216620;
        case 0x216624u: goto label_216624;
        case 0x216628u: goto label_216628;
        case 0x21662cu: goto label_21662c;
        case 0x216630u: goto label_216630;
        case 0x216634u: goto label_216634;
        case 0x216638u: goto label_216638;
        case 0x21663cu: goto label_21663c;
        case 0x216640u: goto label_216640;
        case 0x216644u: goto label_216644;
        case 0x216648u: goto label_216648;
        case 0x21664cu: goto label_21664c;
        case 0x216650u: goto label_216650;
        case 0x216654u: goto label_216654;
        case 0x216658u: goto label_216658;
        case 0x21665cu: goto label_21665c;
        case 0x216660u: goto label_216660;
        case 0x216664u: goto label_216664;
        case 0x216668u: goto label_216668;
        case 0x21666cu: goto label_21666c;
        case 0x216670u: goto label_216670;
        case 0x216674u: goto label_216674;
        case 0x216678u: goto label_216678;
        case 0x21667cu: goto label_21667c;
        case 0x216680u: goto label_216680;
        case 0x216684u: goto label_216684;
        case 0x216688u: goto label_216688;
        case 0x21668cu: goto label_21668c;
        case 0x216690u: goto label_216690;
        case 0x216694u: goto label_216694;
        case 0x216698u: goto label_216698;
        case 0x21669cu: goto label_21669c;
        case 0x2166a0u: goto label_2166a0;
        case 0x2166a4u: goto label_2166a4;
        case 0x2166a8u: goto label_2166a8;
        case 0x2166acu: goto label_2166ac;
        case 0x2166b0u: goto label_2166b0;
        case 0x2166b4u: goto label_2166b4;
        case 0x2166b8u: goto label_2166b8;
        case 0x2166bcu: goto label_2166bc;
        case 0x2166c0u: goto label_2166c0;
        case 0x2166c4u: goto label_2166c4;
        case 0x2166c8u: goto label_2166c8;
        case 0x2166ccu: goto label_2166cc;
        case 0x2166d0u: goto label_2166d0;
        case 0x2166d4u: goto label_2166d4;
        case 0x2166d8u: goto label_2166d8;
        case 0x2166dcu: goto label_2166dc;
        case 0x2166e0u: goto label_2166e0;
        case 0x2166e4u: goto label_2166e4;
        case 0x2166e8u: goto label_2166e8;
        case 0x2166ecu: goto label_2166ec;
        case 0x2166f0u: goto label_2166f0;
        case 0x2166f4u: goto label_2166f4;
        case 0x2166f8u: goto label_2166f8;
        case 0x2166fcu: goto label_2166fc;
        case 0x216700u: goto label_216700;
        case 0x216704u: goto label_216704;
        case 0x216708u: goto label_216708;
        case 0x21670cu: goto label_21670c;
        case 0x216710u: goto label_216710;
        case 0x216714u: goto label_216714;
        case 0x216718u: goto label_216718;
        case 0x21671cu: goto label_21671c;
        case 0x216720u: goto label_216720;
        case 0x216724u: goto label_216724;
        case 0x216728u: goto label_216728;
        case 0x21672cu: goto label_21672c;
        case 0x216730u: goto label_216730;
        case 0x216734u: goto label_216734;
        case 0x216738u: goto label_216738;
        case 0x21673cu: goto label_21673c;
        case 0x216740u: goto label_216740;
        case 0x216744u: goto label_216744;
        case 0x216748u: goto label_216748;
        case 0x21674cu: goto label_21674c;
        case 0x216750u: goto label_216750;
        case 0x216754u: goto label_216754;
        case 0x216758u: goto label_216758;
        case 0x21675cu: goto label_21675c;
        case 0x216760u: goto label_216760;
        case 0x216764u: goto label_216764;
        case 0x216768u: goto label_216768;
        case 0x21676cu: goto label_21676c;
        case 0x216770u: goto label_216770;
        case 0x216774u: goto label_216774;
        case 0x216778u: goto label_216778;
        case 0x21677cu: goto label_21677c;
        case 0x216780u: goto label_216780;
        case 0x216784u: goto label_216784;
        case 0x216788u: goto label_216788;
        case 0x21678cu: goto label_21678c;
        case 0x216790u: goto label_216790;
        case 0x216794u: goto label_216794;
        case 0x216798u: goto label_216798;
        case 0x21679cu: goto label_21679c;
        case 0x2167a0u: goto label_2167a0;
        case 0x2167a4u: goto label_2167a4;
        case 0x2167a8u: goto label_2167a8;
        case 0x2167acu: goto label_2167ac;
        case 0x2167b0u: goto label_2167b0;
        case 0x2167b4u: goto label_2167b4;
        case 0x2167b8u: goto label_2167b8;
        case 0x2167bcu: goto label_2167bc;
        case 0x2167c0u: goto label_2167c0;
        case 0x2167c4u: goto label_2167c4;
        case 0x2167c8u: goto label_2167c8;
        case 0x2167ccu: goto label_2167cc;
        case 0x2167d0u: goto label_2167d0;
        case 0x2167d4u: goto label_2167d4;
        case 0x2167d8u: goto label_2167d8;
        case 0x2167dcu: goto label_2167dc;
        case 0x2167e0u: goto label_2167e0;
        case 0x2167e4u: goto label_2167e4;
        case 0x2167e8u: goto label_2167e8;
        case 0x2167ecu: goto label_2167ec;
        case 0x2167f0u: goto label_2167f0;
        case 0x2167f4u: goto label_2167f4;
        case 0x2167f8u: goto label_2167f8;
        case 0x2167fcu: goto label_2167fc;
        case 0x216800u: goto label_216800;
        case 0x216804u: goto label_216804;
        case 0x216808u: goto label_216808;
        case 0x21680cu: goto label_21680c;
        case 0x216810u: goto label_216810;
        case 0x216814u: goto label_216814;
        case 0x216818u: goto label_216818;
        case 0x21681cu: goto label_21681c;
        case 0x216820u: goto label_216820;
        case 0x216824u: goto label_216824;
        case 0x216828u: goto label_216828;
        case 0x21682cu: goto label_21682c;
        case 0x216830u: goto label_216830;
        case 0x216834u: goto label_216834;
        case 0x216838u: goto label_216838;
        case 0x21683cu: goto label_21683c;
        case 0x216840u: goto label_216840;
        case 0x216844u: goto label_216844;
        case 0x216848u: goto label_216848;
        case 0x21684cu: goto label_21684c;
        case 0x216850u: goto label_216850;
        case 0x216854u: goto label_216854;
        case 0x216858u: goto label_216858;
        case 0x21685cu: goto label_21685c;
        case 0x216860u: goto label_216860;
        case 0x216864u: goto label_216864;
        case 0x216868u: goto label_216868;
        case 0x21686cu: goto label_21686c;
        case 0x216870u: goto label_216870;
        case 0x216874u: goto label_216874;
        case 0x216878u: goto label_216878;
        case 0x21687cu: goto label_21687c;
        case 0x216880u: goto label_216880;
        case 0x216884u: goto label_216884;
        case 0x216888u: goto label_216888;
        case 0x21688cu: goto label_21688c;
        case 0x216890u: goto label_216890;
        case 0x216894u: goto label_216894;
        case 0x216898u: goto label_216898;
        case 0x21689cu: goto label_21689c;
        case 0x2168a0u: goto label_2168a0;
        case 0x2168a4u: goto label_2168a4;
        case 0x2168a8u: goto label_2168a8;
        case 0x2168acu: goto label_2168ac;
        case 0x2168b0u: goto label_2168b0;
        case 0x2168b4u: goto label_2168b4;
        case 0x2168b8u: goto label_2168b8;
        case 0x2168bcu: goto label_2168bc;
        case 0x2168c0u: goto label_2168c0;
        case 0x2168c4u: goto label_2168c4;
        case 0x2168c8u: goto label_2168c8;
        case 0x2168ccu: goto label_2168cc;
        case 0x2168d0u: goto label_2168d0;
        case 0x2168d4u: goto label_2168d4;
        case 0x2168d8u: goto label_2168d8;
        case 0x2168dcu: goto label_2168dc;
        case 0x2168e0u: goto label_2168e0;
        case 0x2168e4u: goto label_2168e4;
        case 0x2168e8u: goto label_2168e8;
        case 0x2168ecu: goto label_2168ec;
        case 0x2168f0u: goto label_2168f0;
        case 0x2168f4u: goto label_2168f4;
        case 0x2168f8u: goto label_2168f8;
        case 0x2168fcu: goto label_2168fc;
        case 0x216900u: goto label_216900;
        case 0x216904u: goto label_216904;
        case 0x216908u: goto label_216908;
        case 0x21690cu: goto label_21690c;
        case 0x216910u: goto label_216910;
        case 0x216914u: goto label_216914;
        case 0x216918u: goto label_216918;
        case 0x21691cu: goto label_21691c;
        case 0x216920u: goto label_216920;
        case 0x216924u: goto label_216924;
        case 0x216928u: goto label_216928;
        case 0x21692cu: goto label_21692c;
        case 0x216930u: goto label_216930;
        case 0x216934u: goto label_216934;
        case 0x216938u: goto label_216938;
        case 0x21693cu: goto label_21693c;
        case 0x216940u: goto label_216940;
        case 0x216944u: goto label_216944;
        case 0x216948u: goto label_216948;
        case 0x21694cu: goto label_21694c;
        case 0x216950u: goto label_216950;
        case 0x216954u: goto label_216954;
        case 0x216958u: goto label_216958;
        case 0x21695cu: goto label_21695c;
        case 0x216960u: goto label_216960;
        case 0x216964u: goto label_216964;
        case 0x216968u: goto label_216968;
        case 0x21696cu: goto label_21696c;
        case 0x216970u: goto label_216970;
        case 0x216974u: goto label_216974;
        case 0x216978u: goto label_216978;
        case 0x21697cu: goto label_21697c;
        case 0x216980u: goto label_216980;
        case 0x216984u: goto label_216984;
        case 0x216988u: goto label_216988;
        case 0x21698cu: goto label_21698c;
        case 0x216990u: goto label_216990;
        case 0x216994u: goto label_216994;
        case 0x216998u: goto label_216998;
        case 0x21699cu: goto label_21699c;
        case 0x2169a0u: goto label_2169a0;
        case 0x2169a4u: goto label_2169a4;
        case 0x2169a8u: goto label_2169a8;
        case 0x2169acu: goto label_2169ac;
        case 0x2169b0u: goto label_2169b0;
        case 0x2169b4u: goto label_2169b4;
        case 0x2169b8u: goto label_2169b8;
        case 0x2169bcu: goto label_2169bc;
        case 0x2169c0u: goto label_2169c0;
        case 0x2169c4u: goto label_2169c4;
        case 0x2169c8u: goto label_2169c8;
        case 0x2169ccu: goto label_2169cc;
        case 0x2169d0u: goto label_2169d0;
        case 0x2169d4u: goto label_2169d4;
        case 0x2169d8u: goto label_2169d8;
        case 0x2169dcu: goto label_2169dc;
        case 0x2169e0u: goto label_2169e0;
        case 0x2169e4u: goto label_2169e4;
        case 0x2169e8u: goto label_2169e8;
        case 0x2169ecu: goto label_2169ec;
        case 0x2169f0u: goto label_2169f0;
        case 0x2169f4u: goto label_2169f4;
        case 0x2169f8u: goto label_2169f8;
        case 0x2169fcu: goto label_2169fc;
        case 0x216a00u: goto label_216a00;
        case 0x216a04u: goto label_216a04;
        case 0x216a08u: goto label_216a08;
        case 0x216a0cu: goto label_216a0c;
        case 0x216a10u: goto label_216a10;
        case 0x216a14u: goto label_216a14;
        case 0x216a18u: goto label_216a18;
        case 0x216a1cu: goto label_216a1c;
        case 0x216a20u: goto label_216a20;
        case 0x216a24u: goto label_216a24;
        case 0x216a28u: goto label_216a28;
        case 0x216a2cu: goto label_216a2c;
        case 0x216a30u: goto label_216a30;
        case 0x216a34u: goto label_216a34;
        case 0x216a38u: goto label_216a38;
        case 0x216a3cu: goto label_216a3c;
        case 0x216a40u: goto label_216a40;
        case 0x216a44u: goto label_216a44;
        case 0x216a48u: goto label_216a48;
        case 0x216a4cu: goto label_216a4c;
        case 0x216a50u: goto label_216a50;
        case 0x216a54u: goto label_216a54;
        case 0x216a58u: goto label_216a58;
        case 0x216a5cu: goto label_216a5c;
        case 0x216a60u: goto label_216a60;
        case 0x216a64u: goto label_216a64;
        case 0x216a68u: goto label_216a68;
        case 0x216a6cu: goto label_216a6c;
        case 0x216a70u: goto label_216a70;
        case 0x216a74u: goto label_216a74;
        case 0x216a78u: goto label_216a78;
        case 0x216a7cu: goto label_216a7c;
        case 0x216a80u: goto label_216a80;
        case 0x216a84u: goto label_216a84;
        case 0x216a88u: goto label_216a88;
        case 0x216a8cu: goto label_216a8c;
        case 0x216a90u: goto label_216a90;
        case 0x216a94u: goto label_216a94;
        case 0x216a98u: goto label_216a98;
        case 0x216a9cu: goto label_216a9c;
        case 0x216aa0u: goto label_216aa0;
        case 0x216aa4u: goto label_216aa4;
        case 0x216aa8u: goto label_216aa8;
        case 0x216aacu: goto label_216aac;
        case 0x216ab0u: goto label_216ab0;
        case 0x216ab4u: goto label_216ab4;
        case 0x216ab8u: goto label_216ab8;
        case 0x216abcu: goto label_216abc;
        case 0x216ac0u: goto label_216ac0;
        case 0x216ac4u: goto label_216ac4;
        case 0x216ac8u: goto label_216ac8;
        case 0x216accu: goto label_216acc;
        case 0x216ad0u: goto label_216ad0;
        case 0x216ad4u: goto label_216ad4;
        case 0x216ad8u: goto label_216ad8;
        case 0x216adcu: goto label_216adc;
        case 0x216ae0u: goto label_216ae0;
        case 0x216ae4u: goto label_216ae4;
        case 0x216ae8u: goto label_216ae8;
        case 0x216aecu: goto label_216aec;
        case 0x216af0u: goto label_216af0;
        case 0x216af4u: goto label_216af4;
        case 0x216af8u: goto label_216af8;
        case 0x216afcu: goto label_216afc;
        case 0x216b00u: goto label_216b00;
        case 0x216b04u: goto label_216b04;
        case 0x216b08u: goto label_216b08;
        case 0x216b0cu: goto label_216b0c;
        case 0x216b10u: goto label_216b10;
        case 0x216b14u: goto label_216b14;
        case 0x216b18u: goto label_216b18;
        case 0x216b1cu: goto label_216b1c;
        case 0x216b20u: goto label_216b20;
        case 0x216b24u: goto label_216b24;
        case 0x216b28u: goto label_216b28;
        case 0x216b2cu: goto label_216b2c;
        case 0x216b30u: goto label_216b30;
        case 0x216b34u: goto label_216b34;
        case 0x216b38u: goto label_216b38;
        case 0x216b3cu: goto label_216b3c;
        case 0x216b40u: goto label_216b40;
        case 0x216b44u: goto label_216b44;
        case 0x216b48u: goto label_216b48;
        case 0x216b4cu: goto label_216b4c;
        case 0x216b50u: goto label_216b50;
        case 0x216b54u: goto label_216b54;
        case 0x216b58u: goto label_216b58;
        case 0x216b5cu: goto label_216b5c;
        case 0x216b60u: goto label_216b60;
        case 0x216b64u: goto label_216b64;
        case 0x216b68u: goto label_216b68;
        case 0x216b6cu: goto label_216b6c;
        case 0x216b70u: goto label_216b70;
        case 0x216b74u: goto label_216b74;
        case 0x216b78u: goto label_216b78;
        case 0x216b7cu: goto label_216b7c;
        case 0x216b80u: goto label_216b80;
        case 0x216b84u: goto label_216b84;
        case 0x216b88u: goto label_216b88;
        case 0x216b8cu: goto label_216b8c;
        case 0x216b90u: goto label_216b90;
        case 0x216b94u: goto label_216b94;
        case 0x216b98u: goto label_216b98;
        case 0x216b9cu: goto label_216b9c;
        case 0x216ba0u: goto label_216ba0;
        case 0x216ba4u: goto label_216ba4;
        case 0x216ba8u: goto label_216ba8;
        case 0x216bacu: goto label_216bac;
        case 0x216bb0u: goto label_216bb0;
        case 0x216bb4u: goto label_216bb4;
        case 0x216bb8u: goto label_216bb8;
        case 0x216bbcu: goto label_216bbc;
        case 0x216bc0u: goto label_216bc0;
        case 0x216bc4u: goto label_216bc4;
        case 0x216bc8u: goto label_216bc8;
        case 0x216bccu: goto label_216bcc;
        case 0x216bd0u: goto label_216bd0;
        case 0x216bd4u: goto label_216bd4;
        case 0x216bd8u: goto label_216bd8;
        case 0x216bdcu: goto label_216bdc;
        case 0x216be0u: goto label_216be0;
        case 0x216be4u: goto label_216be4;
        case 0x216be8u: goto label_216be8;
        case 0x216becu: goto label_216bec;
        case 0x216bf0u: goto label_216bf0;
        case 0x216bf4u: goto label_216bf4;
        case 0x216bf8u: goto label_216bf8;
        case 0x216bfcu: goto label_216bfc;
        case 0x216c00u: goto label_216c00;
        case 0x216c04u: goto label_216c04;
        case 0x216c08u: goto label_216c08;
        case 0x216c0cu: goto label_216c0c;
        case 0x216c10u: goto label_216c10;
        case 0x216c14u: goto label_216c14;
        case 0x216c18u: goto label_216c18;
        case 0x216c1cu: goto label_216c1c;
        case 0x216c20u: goto label_216c20;
        case 0x216c24u: goto label_216c24;
        case 0x216c28u: goto label_216c28;
        case 0x216c2cu: goto label_216c2c;
        case 0x216c30u: goto label_216c30;
        case 0x216c34u: goto label_216c34;
        case 0x216c38u: goto label_216c38;
        case 0x216c3cu: goto label_216c3c;
        case 0x216c40u: goto label_216c40;
        case 0x216c44u: goto label_216c44;
        case 0x216c48u: goto label_216c48;
        case 0x216c4cu: goto label_216c4c;
        case 0x216c50u: goto label_216c50;
        case 0x216c54u: goto label_216c54;
        case 0x216c58u: goto label_216c58;
        case 0x216c5cu: goto label_216c5c;
        case 0x216c60u: goto label_216c60;
        case 0x216c64u: goto label_216c64;
        case 0x216c68u: goto label_216c68;
        case 0x216c6cu: goto label_216c6c;
        case 0x216c70u: goto label_216c70;
        case 0x216c74u: goto label_216c74;
        case 0x216c78u: goto label_216c78;
        case 0x216c7cu: goto label_216c7c;
        case 0x216c80u: goto label_216c80;
        case 0x216c84u: goto label_216c84;
        case 0x216c88u: goto label_216c88;
        case 0x216c8cu: goto label_216c8c;
        case 0x216c90u: goto label_216c90;
        case 0x216c94u: goto label_216c94;
        case 0x216c98u: goto label_216c98;
        case 0x216c9cu: goto label_216c9c;
        case 0x216ca0u: goto label_216ca0;
        case 0x216ca4u: goto label_216ca4;
        case 0x216ca8u: goto label_216ca8;
        case 0x216cacu: goto label_216cac;
        case 0x216cb0u: goto label_216cb0;
        case 0x216cb4u: goto label_216cb4;
        case 0x216cb8u: goto label_216cb8;
        case 0x216cbcu: goto label_216cbc;
        case 0x216cc0u: goto label_216cc0;
        case 0x216cc4u: goto label_216cc4;
        case 0x216cc8u: goto label_216cc8;
        case 0x216cccu: goto label_216ccc;
        case 0x216cd0u: goto label_216cd0;
        case 0x216cd4u: goto label_216cd4;
        case 0x216cd8u: goto label_216cd8;
        case 0x216cdcu: goto label_216cdc;
        case 0x216ce0u: goto label_216ce0;
        case 0x216ce4u: goto label_216ce4;
        case 0x216ce8u: goto label_216ce8;
        case 0x216cecu: goto label_216cec;
        case 0x216cf0u: goto label_216cf0;
        case 0x216cf4u: goto label_216cf4;
        case 0x216cf8u: goto label_216cf8;
        case 0x216cfcu: goto label_216cfc;
        case 0x216d00u: goto label_216d00;
        case 0x216d04u: goto label_216d04;
        case 0x216d08u: goto label_216d08;
        case 0x216d0cu: goto label_216d0c;
        case 0x216d10u: goto label_216d10;
        case 0x216d14u: goto label_216d14;
        case 0x216d18u: goto label_216d18;
        case 0x216d1cu: goto label_216d1c;
        case 0x216d20u: goto label_216d20;
        case 0x216d24u: goto label_216d24;
        case 0x216d28u: goto label_216d28;
        case 0x216d2cu: goto label_216d2c;
        case 0x216d30u: goto label_216d30;
        case 0x216d34u: goto label_216d34;
        case 0x216d38u: goto label_216d38;
        case 0x216d3cu: goto label_216d3c;
        case 0x216d40u: goto label_216d40;
        case 0x216d44u: goto label_216d44;
        case 0x216d48u: goto label_216d48;
        case 0x216d4cu: goto label_216d4c;
        case 0x216d50u: goto label_216d50;
        case 0x216d54u: goto label_216d54;
        case 0x216d58u: goto label_216d58;
        case 0x216d5cu: goto label_216d5c;
        case 0x216d60u: goto label_216d60;
        case 0x216d64u: goto label_216d64;
        case 0x216d68u: goto label_216d68;
        case 0x216d6cu: goto label_216d6c;
        case 0x216d70u: goto label_216d70;
        case 0x216d74u: goto label_216d74;
        case 0x216d78u: goto label_216d78;
        case 0x216d7cu: goto label_216d7c;
        case 0x216d80u: goto label_216d80;
        case 0x216d84u: goto label_216d84;
        case 0x216d88u: goto label_216d88;
        case 0x216d8cu: goto label_216d8c;
        case 0x216d90u: goto label_216d90;
        case 0x216d94u: goto label_216d94;
        case 0x216d98u: goto label_216d98;
        case 0x216d9cu: goto label_216d9c;
        case 0x216da0u: goto label_216da0;
        case 0x216da4u: goto label_216da4;
        case 0x216da8u: goto label_216da8;
        case 0x216dacu: goto label_216dac;
        case 0x216db0u: goto label_216db0;
        case 0x216db4u: goto label_216db4;
        case 0x216db8u: goto label_216db8;
        case 0x216dbcu: goto label_216dbc;
        case 0x216dc0u: goto label_216dc0;
        case 0x216dc4u: goto label_216dc4;
        case 0x216dc8u: goto label_216dc8;
        case 0x216dccu: goto label_216dcc;
        case 0x216dd0u: goto label_216dd0;
        case 0x216dd4u: goto label_216dd4;
        case 0x216dd8u: goto label_216dd8;
        case 0x216ddcu: goto label_216ddc;
        case 0x216de0u: goto label_216de0;
        case 0x216de4u: goto label_216de4;
        case 0x216de8u: goto label_216de8;
        case 0x216decu: goto label_216dec;
        case 0x216df0u: goto label_216df0;
        case 0x216df4u: goto label_216df4;
        case 0x216df8u: goto label_216df8;
        case 0x216dfcu: goto label_216dfc;
        case 0x216e00u: goto label_216e00;
        case 0x216e04u: goto label_216e04;
        case 0x216e08u: goto label_216e08;
        case 0x216e0cu: goto label_216e0c;
        case 0x216e10u: goto label_216e10;
        case 0x216e14u: goto label_216e14;
        case 0x216e18u: goto label_216e18;
        case 0x216e1cu: goto label_216e1c;
        case 0x216e20u: goto label_216e20;
        case 0x216e24u: goto label_216e24;
        case 0x216e28u: goto label_216e28;
        case 0x216e2cu: goto label_216e2c;
        case 0x216e30u: goto label_216e30;
        case 0x216e34u: goto label_216e34;
        case 0x216e38u: goto label_216e38;
        case 0x216e3cu: goto label_216e3c;
        case 0x216e40u: goto label_216e40;
        case 0x216e44u: goto label_216e44;
        case 0x216e48u: goto label_216e48;
        case 0x216e4cu: goto label_216e4c;
        case 0x216e50u: goto label_216e50;
        case 0x216e54u: goto label_216e54;
        case 0x216e58u: goto label_216e58;
        case 0x216e5cu: goto label_216e5c;
        case 0x216e60u: goto label_216e60;
        case 0x216e64u: goto label_216e64;
        case 0x216e68u: goto label_216e68;
        case 0x216e6cu: goto label_216e6c;
        case 0x216e70u: goto label_216e70;
        case 0x216e74u: goto label_216e74;
        case 0x216e78u: goto label_216e78;
        case 0x216e7cu: goto label_216e7c;
        case 0x216e80u: goto label_216e80;
        case 0x216e84u: goto label_216e84;
        case 0x216e88u: goto label_216e88;
        case 0x216e8cu: goto label_216e8c;
        case 0x216e90u: goto label_216e90;
        case 0x216e94u: goto label_216e94;
        case 0x216e98u: goto label_216e98;
        case 0x216e9cu: goto label_216e9c;
        case 0x216ea0u: goto label_216ea0;
        case 0x216ea4u: goto label_216ea4;
        case 0x216ea8u: goto label_216ea8;
        case 0x216eacu: goto label_216eac;
        case 0x216eb0u: goto label_216eb0;
        case 0x216eb4u: goto label_216eb4;
        case 0x216eb8u: goto label_216eb8;
        case 0x216ebcu: goto label_216ebc;
        case 0x216ec0u: goto label_216ec0;
        case 0x216ec4u: goto label_216ec4;
        case 0x216ec8u: goto label_216ec8;
        case 0x216eccu: goto label_216ecc;
        case 0x216ed0u: goto label_216ed0;
        case 0x216ed4u: goto label_216ed4;
        case 0x216ed8u: goto label_216ed8;
        case 0x216edcu: goto label_216edc;
        case 0x216ee0u: goto label_216ee0;
        case 0x216ee4u: goto label_216ee4;
        case 0x216ee8u: goto label_216ee8;
        case 0x216eecu: goto label_216eec;
        case 0x216ef0u: goto label_216ef0;
        case 0x216ef4u: goto label_216ef4;
        case 0x216ef8u: goto label_216ef8;
        case 0x216efcu: goto label_216efc;
        case 0x216f00u: goto label_216f00;
        case 0x216f04u: goto label_216f04;
        case 0x216f08u: goto label_216f08;
        case 0x216f0cu: goto label_216f0c;
        case 0x216f10u: goto label_216f10;
        case 0x216f14u: goto label_216f14;
        case 0x216f18u: goto label_216f18;
        case 0x216f1cu: goto label_216f1c;
        case 0x216f20u: goto label_216f20;
        case 0x216f24u: goto label_216f24;
        case 0x216f28u: goto label_216f28;
        case 0x216f2cu: goto label_216f2c;
        case 0x216f30u: goto label_216f30;
        case 0x216f34u: goto label_216f34;
        case 0x216f38u: goto label_216f38;
        case 0x216f3cu: goto label_216f3c;
        case 0x216f40u: goto label_216f40;
        case 0x216f44u: goto label_216f44;
        case 0x216f48u: goto label_216f48;
        case 0x216f4cu: goto label_216f4c;
        case 0x216f50u: goto label_216f50;
        case 0x216f54u: goto label_216f54;
        case 0x216f58u: goto label_216f58;
        case 0x216f5cu: goto label_216f5c;
        case 0x216f60u: goto label_216f60;
        case 0x216f64u: goto label_216f64;
        case 0x216f68u: goto label_216f68;
        case 0x216f6cu: goto label_216f6c;
        case 0x216f70u: goto label_216f70;
        case 0x216f74u: goto label_216f74;
        case 0x216f78u: goto label_216f78;
        case 0x216f7cu: goto label_216f7c;
        case 0x216f80u: goto label_216f80;
        case 0x216f84u: goto label_216f84;
        case 0x216f88u: goto label_216f88;
        case 0x216f8cu: goto label_216f8c;
        case 0x216f90u: goto label_216f90;
        case 0x216f94u: goto label_216f94;
        case 0x216f98u: goto label_216f98;
        case 0x216f9cu: goto label_216f9c;
        case 0x216fa0u: goto label_216fa0;
        case 0x216fa4u: goto label_216fa4;
        case 0x216fa8u: goto label_216fa8;
        case 0x216facu: goto label_216fac;
        case 0x216fb0u: goto label_216fb0;
        case 0x216fb4u: goto label_216fb4;
        case 0x216fb8u: goto label_216fb8;
        case 0x216fbcu: goto label_216fbc;
        case 0x216fc0u: goto label_216fc0;
        case 0x216fc4u: goto label_216fc4;
        case 0x216fc8u: goto label_216fc8;
        case 0x216fccu: goto label_216fcc;
        case 0x216fd0u: goto label_216fd0;
        case 0x216fd4u: goto label_216fd4;
        case 0x216fd8u: goto label_216fd8;
        case 0x216fdcu: goto label_216fdc;
        case 0x216fe0u: goto label_216fe0;
        case 0x216fe4u: goto label_216fe4;
        case 0x216fe8u: goto label_216fe8;
        case 0x216fecu: goto label_216fec;
        case 0x216ff0u: goto label_216ff0;
        case 0x216ff4u: goto label_216ff4;
        case 0x216ff8u: goto label_216ff8;
        case 0x216ffcu: goto label_216ffc;
        case 0x217000u: goto label_217000;
        case 0x217004u: goto label_217004;
        case 0x217008u: goto label_217008;
        case 0x21700cu: goto label_21700c;
        case 0x217010u: goto label_217010;
        case 0x217014u: goto label_217014;
        case 0x217018u: goto label_217018;
        case 0x21701cu: goto label_21701c;
        case 0x217020u: goto label_217020;
        case 0x217024u: goto label_217024;
        case 0x217028u: goto label_217028;
        case 0x21702cu: goto label_21702c;
        case 0x217030u: goto label_217030;
        case 0x217034u: goto label_217034;
        case 0x217038u: goto label_217038;
        case 0x21703cu: goto label_21703c;
        case 0x217040u: goto label_217040;
        case 0x217044u: goto label_217044;
        case 0x217048u: goto label_217048;
        case 0x21704cu: goto label_21704c;
        case 0x217050u: goto label_217050;
        case 0x217054u: goto label_217054;
        case 0x217058u: goto label_217058;
        case 0x21705cu: goto label_21705c;
        case 0x217060u: goto label_217060;
        case 0x217064u: goto label_217064;
        case 0x217068u: goto label_217068;
        case 0x21706cu: goto label_21706c;
        case 0x217070u: goto label_217070;
        case 0x217074u: goto label_217074;
        case 0x217078u: goto label_217078;
        case 0x21707cu: goto label_21707c;
        case 0x217080u: goto label_217080;
        case 0x217084u: goto label_217084;
        case 0x217088u: goto label_217088;
        case 0x21708cu: goto label_21708c;
        case 0x217090u: goto label_217090;
        case 0x217094u: goto label_217094;
        case 0x217098u: goto label_217098;
        case 0x21709cu: goto label_21709c;
        case 0x2170a0u: goto label_2170a0;
        case 0x2170a4u: goto label_2170a4;
        case 0x2170a8u: goto label_2170a8;
        case 0x2170acu: goto label_2170ac;
        case 0x2170b0u: goto label_2170b0;
        case 0x2170b4u: goto label_2170b4;
        case 0x2170b8u: goto label_2170b8;
        case 0x2170bcu: goto label_2170bc;
        case 0x2170c0u: goto label_2170c0;
        case 0x2170c4u: goto label_2170c4;
        case 0x2170c8u: goto label_2170c8;
        case 0x2170ccu: goto label_2170cc;
        case 0x2170d0u: goto label_2170d0;
        case 0x2170d4u: goto label_2170d4;
        case 0x2170d8u: goto label_2170d8;
        case 0x2170dcu: goto label_2170dc;
        case 0x2170e0u: goto label_2170e0;
        case 0x2170e4u: goto label_2170e4;
        case 0x2170e8u: goto label_2170e8;
        case 0x2170ecu: goto label_2170ec;
        case 0x2170f0u: goto label_2170f0;
        case 0x2170f4u: goto label_2170f4;
        case 0x2170f8u: goto label_2170f8;
        case 0x2170fcu: goto label_2170fc;
        case 0x217100u: goto label_217100;
        case 0x217104u: goto label_217104;
        case 0x217108u: goto label_217108;
        case 0x21710cu: goto label_21710c;
        case 0x217110u: goto label_217110;
        case 0x217114u: goto label_217114;
        case 0x217118u: goto label_217118;
        case 0x21711cu: goto label_21711c;
        case 0x217120u: goto label_217120;
        case 0x217124u: goto label_217124;
        case 0x217128u: goto label_217128;
        case 0x21712cu: goto label_21712c;
        case 0x217130u: goto label_217130;
        case 0x217134u: goto label_217134;
        case 0x217138u: goto label_217138;
        case 0x21713cu: goto label_21713c;
        case 0x217140u: goto label_217140;
        case 0x217144u: goto label_217144;
        case 0x217148u: goto label_217148;
        case 0x21714cu: goto label_21714c;
        case 0x217150u: goto label_217150;
        case 0x217154u: goto label_217154;
        case 0x217158u: goto label_217158;
        case 0x21715cu: goto label_21715c;
        case 0x217160u: goto label_217160;
        case 0x217164u: goto label_217164;
        case 0x217168u: goto label_217168;
        case 0x21716cu: goto label_21716c;
        case 0x217170u: goto label_217170;
        case 0x217174u: goto label_217174;
        case 0x217178u: goto label_217178;
        case 0x21717cu: goto label_21717c;
        case 0x217180u: goto label_217180;
        case 0x217184u: goto label_217184;
        case 0x217188u: goto label_217188;
        case 0x21718cu: goto label_21718c;
        case 0x217190u: goto label_217190;
        case 0x217194u: goto label_217194;
        case 0x217198u: goto label_217198;
        case 0x21719cu: goto label_21719c;
        case 0x2171a0u: goto label_2171a0;
        case 0x2171a4u: goto label_2171a4;
        case 0x2171a8u: goto label_2171a8;
        case 0x2171acu: goto label_2171ac;
        case 0x2171b0u: goto label_2171b0;
        case 0x2171b4u: goto label_2171b4;
        case 0x2171b8u: goto label_2171b8;
        case 0x2171bcu: goto label_2171bc;
        case 0x2171c0u: goto label_2171c0;
        case 0x2171c4u: goto label_2171c4;
        case 0x2171c8u: goto label_2171c8;
        case 0x2171ccu: goto label_2171cc;
        case 0x2171d0u: goto label_2171d0;
        case 0x2171d4u: goto label_2171d4;
        case 0x2171d8u: goto label_2171d8;
        case 0x2171dcu: goto label_2171dc;
        case 0x2171e0u: goto label_2171e0;
        case 0x2171e4u: goto label_2171e4;
        case 0x2171e8u: goto label_2171e8;
        case 0x2171ecu: goto label_2171ec;
        case 0x2171f0u: goto label_2171f0;
        case 0x2171f4u: goto label_2171f4;
        case 0x2171f8u: goto label_2171f8;
        case 0x2171fcu: goto label_2171fc;
        case 0x217200u: goto label_217200;
        case 0x217204u: goto label_217204;
        case 0x217208u: goto label_217208;
        case 0x21720cu: goto label_21720c;
        case 0x217210u: goto label_217210;
        case 0x217214u: goto label_217214;
        case 0x217218u: goto label_217218;
        case 0x21721cu: goto label_21721c;
        case 0x217220u: goto label_217220;
        case 0x217224u: goto label_217224;
        case 0x217228u: goto label_217228;
        case 0x21722cu: goto label_21722c;
        case 0x217230u: goto label_217230;
        case 0x217234u: goto label_217234;
        case 0x217238u: goto label_217238;
        case 0x21723cu: goto label_21723c;
        case 0x217240u: goto label_217240;
        case 0x217244u: goto label_217244;
        case 0x217248u: goto label_217248;
        case 0x21724cu: goto label_21724c;
        case 0x217250u: goto label_217250;
        case 0x217254u: goto label_217254;
        case 0x217258u: goto label_217258;
        case 0x21725cu: goto label_21725c;
        case 0x217260u: goto label_217260;
        case 0x217264u: goto label_217264;
        case 0x217268u: goto label_217268;
        case 0x21726cu: goto label_21726c;
        case 0x217270u: goto label_217270;
        case 0x217274u: goto label_217274;
        case 0x217278u: goto label_217278;
        case 0x21727cu: goto label_21727c;
        case 0x217280u: goto label_217280;
        case 0x217284u: goto label_217284;
        case 0x217288u: goto label_217288;
        case 0x21728cu: goto label_21728c;
        case 0x217290u: goto label_217290;
        case 0x217294u: goto label_217294;
        case 0x217298u: goto label_217298;
        case 0x21729cu: goto label_21729c;
        case 0x2172a0u: goto label_2172a0;
        case 0x2172a4u: goto label_2172a4;
        case 0x2172a8u: goto label_2172a8;
        case 0x2172acu: goto label_2172ac;
        case 0x2172b0u: goto label_2172b0;
        case 0x2172b4u: goto label_2172b4;
        case 0x2172b8u: goto label_2172b8;
        case 0x2172bcu: goto label_2172bc;
        case 0x2172c0u: goto label_2172c0;
        case 0x2172c4u: goto label_2172c4;
        case 0x2172c8u: goto label_2172c8;
        case 0x2172ccu: goto label_2172cc;
        case 0x2172d0u: goto label_2172d0;
        case 0x2172d4u: goto label_2172d4;
        case 0x2172d8u: goto label_2172d8;
        case 0x2172dcu: goto label_2172dc;
        case 0x2172e0u: goto label_2172e0;
        case 0x2172e4u: goto label_2172e4;
        case 0x2172e8u: goto label_2172e8;
        case 0x2172ecu: goto label_2172ec;
        case 0x2172f0u: goto label_2172f0;
        case 0x2172f4u: goto label_2172f4;
        case 0x2172f8u: goto label_2172f8;
        case 0x2172fcu: goto label_2172fc;
        case 0x217300u: goto label_217300;
        case 0x217304u: goto label_217304;
        case 0x217308u: goto label_217308;
        case 0x21730cu: goto label_21730c;
        case 0x217310u: goto label_217310;
        case 0x217314u: goto label_217314;
        case 0x217318u: goto label_217318;
        case 0x21731cu: goto label_21731c;
        case 0x217320u: goto label_217320;
        case 0x217324u: goto label_217324;
        case 0x217328u: goto label_217328;
        case 0x21732cu: goto label_21732c;
        case 0x217330u: goto label_217330;
        case 0x217334u: goto label_217334;
        case 0x217338u: goto label_217338;
        case 0x21733cu: goto label_21733c;
        case 0x217340u: goto label_217340;
        case 0x217344u: goto label_217344;
        case 0x217348u: goto label_217348;
        case 0x21734cu: goto label_21734c;
        case 0x217350u: goto label_217350;
        case 0x217354u: goto label_217354;
        case 0x217358u: goto label_217358;
        case 0x21735cu: goto label_21735c;
        case 0x217360u: goto label_217360;
        case 0x217364u: goto label_217364;
        case 0x217368u: goto label_217368;
        case 0x21736cu: goto label_21736c;
        case 0x217370u: goto label_217370;
        case 0x217374u: goto label_217374;
        case 0x217378u: goto label_217378;
        case 0x21737cu: goto label_21737c;
        case 0x217380u: goto label_217380;
        case 0x217384u: goto label_217384;
        case 0x217388u: goto label_217388;
        case 0x21738cu: goto label_21738c;
        case 0x217390u: goto label_217390;
        case 0x217394u: goto label_217394;
        case 0x217398u: goto label_217398;
        case 0x21739cu: goto label_21739c;
        case 0x2173a0u: goto label_2173a0;
        case 0x2173a4u: goto label_2173a4;
        case 0x2173a8u: goto label_2173a8;
        case 0x2173acu: goto label_2173ac;
        case 0x2173b0u: goto label_2173b0;
        case 0x2173b4u: goto label_2173b4;
        case 0x2173b8u: goto label_2173b8;
        case 0x2173bcu: goto label_2173bc;
        case 0x2173c0u: goto label_2173c0;
        case 0x2173c4u: goto label_2173c4;
        case 0x2173c8u: goto label_2173c8;
        case 0x2173ccu: goto label_2173cc;
        case 0x2173d0u: goto label_2173d0;
        case 0x2173d4u: goto label_2173d4;
        case 0x2173d8u: goto label_2173d8;
        case 0x2173dcu: goto label_2173dc;
        case 0x2173e0u: goto label_2173e0;
        case 0x2173e4u: goto label_2173e4;
        case 0x2173e8u: goto label_2173e8;
        case 0x2173ecu: goto label_2173ec;
        case 0x2173f0u: goto label_2173f0;
        case 0x2173f4u: goto label_2173f4;
        case 0x2173f8u: goto label_2173f8;
        case 0x2173fcu: goto label_2173fc;
        case 0x217400u: goto label_217400;
        case 0x217404u: goto label_217404;
        case 0x217408u: goto label_217408;
        case 0x21740cu: goto label_21740c;
        case 0x217410u: goto label_217410;
        case 0x217414u: goto label_217414;
        case 0x217418u: goto label_217418;
        case 0x21741cu: goto label_21741c;
        case 0x217420u: goto label_217420;
        case 0x217424u: goto label_217424;
        case 0x217428u: goto label_217428;
        case 0x21742cu: goto label_21742c;
        case 0x217430u: goto label_217430;
        case 0x217434u: goto label_217434;
        case 0x217438u: goto label_217438;
        case 0x21743cu: goto label_21743c;
        case 0x217440u: goto label_217440;
        case 0x217444u: goto label_217444;
        case 0x217448u: goto label_217448;
        case 0x21744cu: goto label_21744c;
        case 0x217450u: goto label_217450;
        case 0x217454u: goto label_217454;
        case 0x217458u: goto label_217458;
        case 0x21745cu: goto label_21745c;
        case 0x217460u: goto label_217460;
        case 0x217464u: goto label_217464;
        case 0x217468u: goto label_217468;
        case 0x21746cu: goto label_21746c;
        case 0x217470u: goto label_217470;
        case 0x217474u: goto label_217474;
        case 0x217478u: goto label_217478;
        case 0x21747cu: goto label_21747c;
        case 0x217480u: goto label_217480;
        case 0x217484u: goto label_217484;
        case 0x217488u: goto label_217488;
        case 0x21748cu: goto label_21748c;
        case 0x217490u: goto label_217490;
        case 0x217494u: goto label_217494;
        case 0x217498u: goto label_217498;
        case 0x21749cu: goto label_21749c;
        case 0x2174a0u: goto label_2174a0;
        case 0x2174a4u: goto label_2174a4;
        case 0x2174a8u: goto label_2174a8;
        case 0x2174acu: goto label_2174ac;
        case 0x2174b0u: goto label_2174b0;
        case 0x2174b4u: goto label_2174b4;
        case 0x2174b8u: goto label_2174b8;
        case 0x2174bcu: goto label_2174bc;
        case 0x2174c0u: goto label_2174c0;
        case 0x2174c4u: goto label_2174c4;
        case 0x2174c8u: goto label_2174c8;
        case 0x2174ccu: goto label_2174cc;
        case 0x2174d0u: goto label_2174d0;
        case 0x2174d4u: goto label_2174d4;
        case 0x2174d8u: goto label_2174d8;
        case 0x2174dcu: goto label_2174dc;
        case 0x2174e0u: goto label_2174e0;
        case 0x2174e4u: goto label_2174e4;
        case 0x2174e8u: goto label_2174e8;
        case 0x2174ecu: goto label_2174ec;
        case 0x2174f0u: goto label_2174f0;
        case 0x2174f4u: goto label_2174f4;
        case 0x2174f8u: goto label_2174f8;
        case 0x2174fcu: goto label_2174fc;
        case 0x217500u: goto label_217500;
        case 0x217504u: goto label_217504;
        case 0x217508u: goto label_217508;
        case 0x21750cu: goto label_21750c;
        case 0x217510u: goto label_217510;
        case 0x217514u: goto label_217514;
        case 0x217518u: goto label_217518;
        case 0x21751cu: goto label_21751c;
        case 0x217520u: goto label_217520;
        case 0x217524u: goto label_217524;
        case 0x217528u: goto label_217528;
        case 0x21752cu: goto label_21752c;
        case 0x217530u: goto label_217530;
        case 0x217534u: goto label_217534;
        case 0x217538u: goto label_217538;
        case 0x21753cu: goto label_21753c;
        case 0x217540u: goto label_217540;
        case 0x217544u: goto label_217544;
        case 0x217548u: goto label_217548;
        case 0x21754cu: goto label_21754c;
        case 0x217550u: goto label_217550;
        case 0x217554u: goto label_217554;
        case 0x217558u: goto label_217558;
        case 0x21755cu: goto label_21755c;
        case 0x217560u: goto label_217560;
        case 0x217564u: goto label_217564;
        case 0x217568u: goto label_217568;
        case 0x21756cu: goto label_21756c;
        case 0x217570u: goto label_217570;
        case 0x217574u: goto label_217574;
        case 0x217578u: goto label_217578;
        case 0x21757cu: goto label_21757c;
        case 0x217580u: goto label_217580;
        case 0x217584u: goto label_217584;
        case 0x217588u: goto label_217588;
        case 0x21758cu: goto label_21758c;
        case 0x217590u: goto label_217590;
        case 0x217594u: goto label_217594;
        case 0x217598u: goto label_217598;
        case 0x21759cu: goto label_21759c;
        case 0x2175a0u: goto label_2175a0;
        case 0x2175a4u: goto label_2175a4;
        case 0x2175a8u: goto label_2175a8;
        case 0x2175acu: goto label_2175ac;
        case 0x2175b0u: goto label_2175b0;
        case 0x2175b4u: goto label_2175b4;
        case 0x2175b8u: goto label_2175b8;
        case 0x2175bcu: goto label_2175bc;
        case 0x2175c0u: goto label_2175c0;
        case 0x2175c4u: goto label_2175c4;
        case 0x2175c8u: goto label_2175c8;
        case 0x2175ccu: goto label_2175cc;
        case 0x2175d0u: goto label_2175d0;
        case 0x2175d4u: goto label_2175d4;
        case 0x2175d8u: goto label_2175d8;
        case 0x2175dcu: goto label_2175dc;
        case 0x2175e0u: goto label_2175e0;
        case 0x2175e4u: goto label_2175e4;
        case 0x2175e8u: goto label_2175e8;
        case 0x2175ecu: goto label_2175ec;
        case 0x2175f0u: goto label_2175f0;
        case 0x2175f4u: goto label_2175f4;
        case 0x2175f8u: goto label_2175f8;
        case 0x2175fcu: goto label_2175fc;
        case 0x217600u: goto label_217600;
        case 0x217604u: goto label_217604;
        case 0x217608u: goto label_217608;
        case 0x21760cu: goto label_21760c;
        case 0x217610u: goto label_217610;
        case 0x217614u: goto label_217614;
        case 0x217618u: goto label_217618;
        case 0x21761cu: goto label_21761c;
        case 0x217620u: goto label_217620;
        case 0x217624u: goto label_217624;
        case 0x217628u: goto label_217628;
        case 0x21762cu: goto label_21762c;
        case 0x217630u: goto label_217630;
        case 0x217634u: goto label_217634;
        case 0x217638u: goto label_217638;
        case 0x21763cu: goto label_21763c;
        case 0x217640u: goto label_217640;
        case 0x217644u: goto label_217644;
        case 0x217648u: goto label_217648;
        case 0x21764cu: goto label_21764c;
        case 0x217650u: goto label_217650;
        case 0x217654u: goto label_217654;
        case 0x217658u: goto label_217658;
        case 0x21765cu: goto label_21765c;
        case 0x217660u: goto label_217660;
        case 0x217664u: goto label_217664;
        case 0x217668u: goto label_217668;
        case 0x21766cu: goto label_21766c;
        case 0x217670u: goto label_217670;
        case 0x217674u: goto label_217674;
        case 0x217678u: goto label_217678;
        case 0x21767cu: goto label_21767c;
        case 0x217680u: goto label_217680;
        case 0x217684u: goto label_217684;
        case 0x217688u: goto label_217688;
        case 0x21768cu: goto label_21768c;
        case 0x217690u: goto label_217690;
        case 0x217694u: goto label_217694;
        case 0x217698u: goto label_217698;
        case 0x21769cu: goto label_21769c;
        case 0x2176a0u: goto label_2176a0;
        case 0x2176a4u: goto label_2176a4;
        case 0x2176a8u: goto label_2176a8;
        case 0x2176acu: goto label_2176ac;
        case 0x2176b0u: goto label_2176b0;
        case 0x2176b4u: goto label_2176b4;
        case 0x2176b8u: goto label_2176b8;
        case 0x2176bcu: goto label_2176bc;
        case 0x2176c0u: goto label_2176c0;
        case 0x2176c4u: goto label_2176c4;
        case 0x2176c8u: goto label_2176c8;
        case 0x2176ccu: goto label_2176cc;
        case 0x2176d0u: goto label_2176d0;
        case 0x2176d4u: goto label_2176d4;
        case 0x2176d8u: goto label_2176d8;
        case 0x2176dcu: goto label_2176dc;
        case 0x2176e0u: goto label_2176e0;
        case 0x2176e4u: goto label_2176e4;
        case 0x2176e8u: goto label_2176e8;
        case 0x2176ecu: goto label_2176ec;
        case 0x2176f0u: goto label_2176f0;
        case 0x2176f4u: goto label_2176f4;
        case 0x2176f8u: goto label_2176f8;
        case 0x2176fcu: goto label_2176fc;
        case 0x217700u: goto label_217700;
        case 0x217704u: goto label_217704;
        case 0x217708u: goto label_217708;
        case 0x21770cu: goto label_21770c;
        case 0x217710u: goto label_217710;
        case 0x217714u: goto label_217714;
        case 0x217718u: goto label_217718;
        case 0x21771cu: goto label_21771c;
        case 0x217720u: goto label_217720;
        case 0x217724u: goto label_217724;
        case 0x217728u: goto label_217728;
        case 0x21772cu: goto label_21772c;
        case 0x217730u: goto label_217730;
        case 0x217734u: goto label_217734;
        case 0x217738u: goto label_217738;
        case 0x21773cu: goto label_21773c;
        case 0x217740u: goto label_217740;
        case 0x217744u: goto label_217744;
        case 0x217748u: goto label_217748;
        case 0x21774cu: goto label_21774c;
        case 0x217750u: goto label_217750;
        case 0x217754u: goto label_217754;
        case 0x217758u: goto label_217758;
        case 0x21775cu: goto label_21775c;
        case 0x217760u: goto label_217760;
        case 0x217764u: goto label_217764;
        case 0x217768u: goto label_217768;
        case 0x21776cu: goto label_21776c;
        case 0x217770u: goto label_217770;
        case 0x217774u: goto label_217774;
        case 0x217778u: goto label_217778;
        case 0x21777cu: goto label_21777c;
        case 0x217780u: goto label_217780;
        case 0x217784u: goto label_217784;
        case 0x217788u: goto label_217788;
        case 0x21778cu: goto label_21778c;
        case 0x217790u: goto label_217790;
        case 0x217794u: goto label_217794;
        case 0x217798u: goto label_217798;
        case 0x21779cu: goto label_21779c;
        case 0x2177a0u: goto label_2177a0;
        case 0x2177a4u: goto label_2177a4;
        case 0x2177a8u: goto label_2177a8;
        case 0x2177acu: goto label_2177ac;
        case 0x2177b0u: goto label_2177b0;
        case 0x2177b4u: goto label_2177b4;
        case 0x2177b8u: goto label_2177b8;
        case 0x2177bcu: goto label_2177bc;
        case 0x2177c0u: goto label_2177c0;
        case 0x2177c4u: goto label_2177c4;
        case 0x2177c8u: goto label_2177c8;
        case 0x2177ccu: goto label_2177cc;
        case 0x2177d0u: goto label_2177d0;
        case 0x2177d4u: goto label_2177d4;
        case 0x2177d8u: goto label_2177d8;
        case 0x2177dcu: goto label_2177dc;
        case 0x2177e0u: goto label_2177e0;
        case 0x2177e4u: goto label_2177e4;
        case 0x2177e8u: goto label_2177e8;
        case 0x2177ecu: goto label_2177ec;
        case 0x2177f0u: goto label_2177f0;
        case 0x2177f4u: goto label_2177f4;
        case 0x2177f8u: goto label_2177f8;
        case 0x2177fcu: goto label_2177fc;
        case 0x217800u: goto label_217800;
        case 0x217804u: goto label_217804;
        case 0x217808u: goto label_217808;
        case 0x21780cu: goto label_21780c;
        case 0x217810u: goto label_217810;
        case 0x217814u: goto label_217814;
        case 0x217818u: goto label_217818;
        case 0x21781cu: goto label_21781c;
        case 0x217820u: goto label_217820;
        case 0x217824u: goto label_217824;
        case 0x217828u: goto label_217828;
        case 0x21782cu: goto label_21782c;
        case 0x217830u: goto label_217830;
        case 0x217834u: goto label_217834;
        case 0x217838u: goto label_217838;
        case 0x21783cu: goto label_21783c;
        case 0x217840u: goto label_217840;
        case 0x217844u: goto label_217844;
        case 0x217848u: goto label_217848;
        case 0x21784cu: goto label_21784c;
        case 0x217850u: goto label_217850;
        case 0x217854u: goto label_217854;
        case 0x217858u: goto label_217858;
        case 0x21785cu: goto label_21785c;
        case 0x217860u: goto label_217860;
        case 0x217864u: goto label_217864;
        case 0x217868u: goto label_217868;
        case 0x21786cu: goto label_21786c;
        case 0x217870u: goto label_217870;
        case 0x217874u: goto label_217874;
        case 0x217878u: goto label_217878;
        case 0x21787cu: goto label_21787c;
        case 0x217880u: goto label_217880;
        case 0x217884u: goto label_217884;
        case 0x217888u: goto label_217888;
        case 0x21788cu: goto label_21788c;
        case 0x217890u: goto label_217890;
        case 0x217894u: goto label_217894;
        case 0x217898u: goto label_217898;
        case 0x21789cu: goto label_21789c;
        case 0x2178a0u: goto label_2178a0;
        case 0x2178a4u: goto label_2178a4;
        case 0x2178a8u: goto label_2178a8;
        case 0x2178acu: goto label_2178ac;
        case 0x2178b0u: goto label_2178b0;
        case 0x2178b4u: goto label_2178b4;
        case 0x2178b8u: goto label_2178b8;
        case 0x2178bcu: goto label_2178bc;
        case 0x2178c0u: goto label_2178c0;
        case 0x2178c4u: goto label_2178c4;
        case 0x2178c8u: goto label_2178c8;
        case 0x2178ccu: goto label_2178cc;
        case 0x2178d0u: goto label_2178d0;
        case 0x2178d4u: goto label_2178d4;
        case 0x2178d8u: goto label_2178d8;
        case 0x2178dcu: goto label_2178dc;
        case 0x2178e0u: goto label_2178e0;
        case 0x2178e4u: goto label_2178e4;
        case 0x2178e8u: goto label_2178e8;
        case 0x2178ecu: goto label_2178ec;
        case 0x2178f0u: goto label_2178f0;
        case 0x2178f4u: goto label_2178f4;
        case 0x2178f8u: goto label_2178f8;
        case 0x2178fcu: goto label_2178fc;
        case 0x217900u: goto label_217900;
        case 0x217904u: goto label_217904;
        case 0x217908u: goto label_217908;
        case 0x21790cu: goto label_21790c;
        case 0x217910u: goto label_217910;
        case 0x217914u: goto label_217914;
        case 0x217918u: goto label_217918;
        case 0x21791cu: goto label_21791c;
        case 0x217920u: goto label_217920;
        case 0x217924u: goto label_217924;
        case 0x217928u: goto label_217928;
        case 0x21792cu: goto label_21792c;
        case 0x217930u: goto label_217930;
        case 0x217934u: goto label_217934;
        case 0x217938u: goto label_217938;
        case 0x21793cu: goto label_21793c;
        case 0x217940u: goto label_217940;
        case 0x217944u: goto label_217944;
        case 0x217948u: goto label_217948;
        case 0x21794cu: goto label_21794c;
        case 0x217950u: goto label_217950;
        case 0x217954u: goto label_217954;
        case 0x217958u: goto label_217958;
        case 0x21795cu: goto label_21795c;
        case 0x217960u: goto label_217960;
        case 0x217964u: goto label_217964;
        case 0x217968u: goto label_217968;
        case 0x21796cu: goto label_21796c;
        case 0x217970u: goto label_217970;
        case 0x217974u: goto label_217974;
        case 0x217978u: goto label_217978;
        case 0x21797cu: goto label_21797c;
        case 0x217980u: goto label_217980;
        case 0x217984u: goto label_217984;
        case 0x217988u: goto label_217988;
        case 0x21798cu: goto label_21798c;
        case 0x217990u: goto label_217990;
        case 0x217994u: goto label_217994;
        case 0x217998u: goto label_217998;
        case 0x21799cu: goto label_21799c;
        case 0x2179a0u: goto label_2179a0;
        case 0x2179a4u: goto label_2179a4;
        case 0x2179a8u: goto label_2179a8;
        case 0x2179acu: goto label_2179ac;
        case 0x2179b0u: goto label_2179b0;
        case 0x2179b4u: goto label_2179b4;
        case 0x2179b8u: goto label_2179b8;
        case 0x2179bcu: goto label_2179bc;
        case 0x2179c0u: goto label_2179c0;
        case 0x2179c4u: goto label_2179c4;
        case 0x2179c8u: goto label_2179c8;
        case 0x2179ccu: goto label_2179cc;
        case 0x2179d0u: goto label_2179d0;
        case 0x2179d4u: goto label_2179d4;
        case 0x2179d8u: goto label_2179d8;
        case 0x2179dcu: goto label_2179dc;
        case 0x2179e0u: goto label_2179e0;
        case 0x2179e4u: goto label_2179e4;
        case 0x2179e8u: goto label_2179e8;
        case 0x2179ecu: goto label_2179ec;
        case 0x2179f0u: goto label_2179f0;
        case 0x2179f4u: goto label_2179f4;
        case 0x2179f8u: goto label_2179f8;
        case 0x2179fcu: goto label_2179fc;
        case 0x217a00u: goto label_217a00;
        case 0x217a04u: goto label_217a04;
        case 0x217a08u: goto label_217a08;
        case 0x217a0cu: goto label_217a0c;
        case 0x217a10u: goto label_217a10;
        case 0x217a14u: goto label_217a14;
        case 0x217a18u: goto label_217a18;
        case 0x217a1cu: goto label_217a1c;
        case 0x217a20u: goto label_217a20;
        case 0x217a24u: goto label_217a24;
        case 0x217a28u: goto label_217a28;
        case 0x217a2cu: goto label_217a2c;
        case 0x217a30u: goto label_217a30;
        case 0x217a34u: goto label_217a34;
        case 0x217a38u: goto label_217a38;
        case 0x217a3cu: goto label_217a3c;
        case 0x217a40u: goto label_217a40;
        case 0x217a44u: goto label_217a44;
        case 0x217a48u: goto label_217a48;
        case 0x217a4cu: goto label_217a4c;
        case 0x217a50u: goto label_217a50;
        case 0x217a54u: goto label_217a54;
        case 0x217a58u: goto label_217a58;
        case 0x217a5cu: goto label_217a5c;
        case 0x217a60u: goto label_217a60;
        case 0x217a64u: goto label_217a64;
        case 0x217a68u: goto label_217a68;
        case 0x217a6cu: goto label_217a6c;
        case 0x217a70u: goto label_217a70;
        case 0x217a74u: goto label_217a74;
        case 0x217a78u: goto label_217a78;
        case 0x217a7cu: goto label_217a7c;
        case 0x217a80u: goto label_217a80;
        case 0x217a84u: goto label_217a84;
        case 0x217a88u: goto label_217a88;
        case 0x217a8cu: goto label_217a8c;
        case 0x217a90u: goto label_217a90;
        case 0x217a94u: goto label_217a94;
        case 0x217a98u: goto label_217a98;
        case 0x217a9cu: goto label_217a9c;
        case 0x217aa0u: goto label_217aa0;
        case 0x217aa4u: goto label_217aa4;
        case 0x217aa8u: goto label_217aa8;
        case 0x217aacu: goto label_217aac;
        case 0x217ab0u: goto label_217ab0;
        case 0x217ab4u: goto label_217ab4;
        case 0x217ab8u: goto label_217ab8;
        case 0x217abcu: goto label_217abc;
        case 0x217ac0u: goto label_217ac0;
        case 0x217ac4u: goto label_217ac4;
        case 0x217ac8u: goto label_217ac8;
        case 0x217accu: goto label_217acc;
        case 0x217ad0u: goto label_217ad0;
        case 0x217ad4u: goto label_217ad4;
        case 0x217ad8u: goto label_217ad8;
        case 0x217adcu: goto label_217adc;
        case 0x217ae0u: goto label_217ae0;
        case 0x217ae4u: goto label_217ae4;
        case 0x217ae8u: goto label_217ae8;
        case 0x217aecu: goto label_217aec;
        case 0x217af0u: goto label_217af0;
        case 0x217af4u: goto label_217af4;
        case 0x217af8u: goto label_217af8;
        case 0x217afcu: goto label_217afc;
        case 0x217b00u: goto label_217b00;
        default: break;
    }

    ctx->pc = 0x216000u;

label_216000:
    // 0x216000: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x216000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_216004:
    // 0x216004: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x216004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_216008:
    // 0x216008: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x216008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_21600c:
    // 0x21600c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x21600cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_216010:
    // 0x216010: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x216010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_216014:
    // 0x216014: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x216014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_216018:
    // 0x216018: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x216018u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21601c:
    // 0x21601c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x21601cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_216020:
    // 0x216020: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x216020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_216024:
    // 0x216024: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x216024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_216028:
    // 0x216028: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x216028u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_21602c:
    // 0x21602c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x21602cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_216030:
    // 0x216030: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x216030u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_216034:
    // 0x216034: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x216034u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_216038:
    // 0x216038: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x216038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_21603c:
    // 0x21603c: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
label_216040:
    if (ctx->pc == 0x216040u) {
        ctx->pc = 0x216040u;
            // 0x216040: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216044u;
        goto label_216044;
    }
    ctx->pc = 0x21603Cu;
    {
        const bool branch_taken_0x21603c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x216040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21603Cu;
            // 0x216040: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21603c) {
            ctx->pc = 0x216048u;
            goto label_216048;
        }
    }
    ctx->pc = 0x216044u;
label_216044:
    // 0x216044: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x216044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216048:
    // 0x216048: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x216048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_21604c:
    // 0x21604c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x21604cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_216050:
    // 0x216050: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x216050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_216054:
    // 0x216054: 0x2442fc60  addiu       $v0, $v0, -0x3A0
    ctx->pc = 0x216054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966368));
label_216058:
    // 0x216058: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x216058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21605c:
    // 0x21605c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21605cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_216060:
    // 0x216060: 0xc052d0c  jal         func_14B430
label_216064:
    if (ctx->pc == 0x216064u) {
        ctx->pc = 0x216064u;
            // 0x216064: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x216068u;
        goto label_216068;
    }
    ctx->pc = 0x216060u;
    SET_GPR_U32(ctx, 31, 0x216068u);
    ctx->pc = 0x216064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216060u;
            // 0x216064: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216068u; }
        if (ctx->pc != 0x216068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216068u; }
        if (ctx->pc != 0x216068u) { return; }
    }
    ctx->pc = 0x216068u;
label_216068:
    // 0x216068: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21606c:
    if (ctx->pc == 0x21606Cu) {
        ctx->pc = 0x216070u;
        goto label_216070;
    }
    ctx->pc = 0x216068u;
    {
        const bool branch_taken_0x216068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216068) {
            ctx->pc = 0x216078u;
            goto label_216078;
        }
    }
    ctx->pc = 0x216070u;
label_216070:
    // 0x216070: 0x10000008  b           . + 4 + (0x8 << 2)
label_216074:
    if (ctx->pc == 0x216074u) {
        ctx->pc = 0x216074u;
            // 0x216074: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x216078u;
        goto label_216078;
    }
    ctx->pc = 0x216070u;
    {
        const bool branch_taken_0x216070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216070u;
            // 0x216074: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216070) {
            ctx->pc = 0x216094u;
            goto label_216094;
        }
    }
    ctx->pc = 0x216078u;
label_216078:
    // 0x216078: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x216078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_21607c:
    // 0x21607c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x21607cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_216080:
    // 0x216080: 0xc052d0c  jal         func_14B430
label_216084:
    if (ctx->pc == 0x216084u) {
        ctx->pc = 0x216084u;
            // 0x216084: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x216088u;
        goto label_216088;
    }
    ctx->pc = 0x216080u;
    SET_GPR_U32(ctx, 31, 0x216088u);
    ctx->pc = 0x216084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216080u;
            // 0x216084: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216088u; }
        if (ctx->pc != 0x216088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216088u; }
        if (ctx->pc != 0x216088u) { return; }
    }
    ctx->pc = 0x216088u;
label_216088:
    // 0x216088: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_21608c:
    if (ctx->pc == 0x21608Cu) {
        ctx->pc = 0x216090u;
        goto label_216090;
    }
    ctx->pc = 0x216088u;
    {
        const bool branch_taken_0x216088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216088) {
            ctx->pc = 0x216094u;
            goto label_216094;
        }
    }
    ctx->pc = 0x216090u;
label_216090:
    // 0x216090: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x216090u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_216094:
    // 0x216094: 0x8382921c  lb          $v0, -0x6DE4($gp)
    ctx->pc = 0x216094u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939164)));
label_216098:
    // 0x216098: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_21609c:
    if (ctx->pc == 0x21609Cu) {
        ctx->pc = 0x21609Cu;
            // 0x21609c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2160A0u;
        goto label_2160a0;
    }
    ctx->pc = 0x216098u;
    {
        const bool branch_taken_0x216098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21609Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216098u;
            // 0x21609c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216098) {
            ctx->pc = 0x2160ACu;
            goto label_2160ac;
        }
    }
    ctx->pc = 0x2160A0u;
label_2160a0:
    // 0x2160a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2160a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2160a4:
    // 0x2160a4: 0xaf809218  sw          $zero, -0x6DE8($gp)
    ctx->pc = 0x2160a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939160), GPR_U32(ctx, 0));
label_2160a8:
    // 0x2160a8: 0xa382921c  sb          $v0, -0x6DE4($gp)
    ctx->pc = 0x2160a8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939164), (uint8_t)GPR_U32(ctx, 2));
label_2160ac:
    // 0x2160ac: 0x86830388  lh          $v1, 0x388($s4)
    ctx->pc = 0x2160acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 904)));
label_2160b0:
    // 0x2160b0: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2160b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2160b4:
    // 0x2160b4: 0x10200128  beqz        $at, . + 4 + (0x128 << 2)
label_2160b8:
    if (ctx->pc == 0x2160B8u) {
        ctx->pc = 0x2160B8u;
            // 0x2160b8: 0x269100fc  addiu       $s1, $s4, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 252));
        ctx->pc = 0x2160BCu;
        goto label_2160bc;
    }
    ctx->pc = 0x2160B4u;
    {
        const bool branch_taken_0x2160b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2160B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2160B4u;
            // 0x2160b8: 0x269100fc  addiu       $s1, $s4, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2160b4) {
            ctx->pc = 0x216558u;
            goto label_216558;
        }
    }
    ctx->pc = 0x2160BCu;
label_2160bc:
    // 0x2160bc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2160bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2160c0:
    // 0x2160c0: 0x1062011c  beq         $v1, $v0, . + 4 + (0x11C << 2)
label_2160c4:
    if (ctx->pc == 0x2160C4u) {
        ctx->pc = 0x2160C4u;
            // 0x2160c4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x2160C8u;
        goto label_2160c8;
    }
    ctx->pc = 0x2160C0u;
    {
        const bool branch_taken_0x2160c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2160C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2160C0u;
            // 0x2160c4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2160c0) {
            ctx->pc = 0x216534u;
            goto label_216534;
        }
    }
    ctx->pc = 0x2160C8u;
label_2160c8:
    // 0x2160c8: 0x1062010f  beq         $v1, $v0, . + 4 + (0x10F << 2)
label_2160cc:
    if (ctx->pc == 0x2160CCu) {
        ctx->pc = 0x2160CCu;
            // 0x2160cc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2160D0u;
        goto label_2160d0;
    }
    ctx->pc = 0x2160C8u;
    {
        const bool branch_taken_0x2160c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2160CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2160C8u;
            // 0x2160cc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2160c8) {
            ctx->pc = 0x216508u;
            goto label_216508;
        }
    }
    ctx->pc = 0x2160D0u;
label_2160d0:
    // 0x2160d0: 0x1062010d  beq         $v1, $v0, . + 4 + (0x10D << 2)
label_2160d4:
    if (ctx->pc == 0x2160D4u) {
        ctx->pc = 0x2160D4u;
            // 0x2160d4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x2160D8u;
        goto label_2160d8;
    }
    ctx->pc = 0x2160D0u;
    {
        const bool branch_taken_0x2160d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2160D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2160D0u;
            // 0x2160d4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2160d0) {
            ctx->pc = 0x216508u;
            goto label_216508;
        }
    }
    ctx->pc = 0x2160D8u;
label_2160d8:
    // 0x2160d8: 0x1062009f  beq         $v1, $v0, . + 4 + (0x9F << 2)
label_2160dc:
    if (ctx->pc == 0x2160DCu) {
        ctx->pc = 0x2160DCu;
            // 0x2160dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2160E0u;
        goto label_2160e0;
    }
    ctx->pc = 0x2160D8u;
    {
        const bool branch_taken_0x2160d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2160DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2160D8u;
            // 0x2160dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2160d8) {
            ctx->pc = 0x216358u;
            goto label_216358;
        }
    }
    ctx->pc = 0x2160E0u;
label_2160e0:
    // 0x2160e0: 0x1062009d  beq         $v1, $v0, . + 4 + (0x9D << 2)
label_2160e4:
    if (ctx->pc == 0x2160E4u) {
        ctx->pc = 0x2160E4u;
            // 0x2160e4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x2160E8u;
        goto label_2160e8;
    }
    ctx->pc = 0x2160E0u;
    {
        const bool branch_taken_0x2160e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2160E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2160E0u;
            // 0x2160e4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2160e0) {
            ctx->pc = 0x216358u;
            goto label_216358;
        }
    }
    ctx->pc = 0x2160E8u;
label_2160e8:
    // 0x2160e8: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
label_2160ec:
    if (ctx->pc == 0x2160ECu) {
        ctx->pc = 0x2160ECu;
            // 0x2160ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2160F0u;
        goto label_2160f0;
    }
    ctx->pc = 0x2160E8u;
    {
        const bool branch_taken_0x2160e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2160ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2160E8u;
            // 0x2160ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2160e8) {
            ctx->pc = 0x216180u;
            goto label_216180;
        }
    }
    ctx->pc = 0x2160F0u;
label_2160f0:
    // 0x2160f0: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
label_2160f4:
    if (ctx->pc == 0x2160F4u) {
        ctx->pc = 0x2160F4u;
            // 0x2160f4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2160F8u;
        goto label_2160f8;
    }
    ctx->pc = 0x2160F0u;
    {
        const bool branch_taken_0x2160f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2160F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2160F0u;
            // 0x2160f4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2160f0) {
            ctx->pc = 0x216180u;
            goto label_216180;
        }
    }
    ctx->pc = 0x2160F8u;
label_2160f8:
    // 0x2160f8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2160fc:
    if (ctx->pc == 0x2160FCu) {
        ctx->pc = 0x2160FCu;
            // 0x2160fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x216100u;
        goto label_216100;
    }
    ctx->pc = 0x2160F8u;
    {
        const bool branch_taken_0x2160f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2160FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2160F8u;
            // 0x2160fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2160f8) {
            ctx->pc = 0x216118u;
            goto label_216118;
        }
    }
    ctx->pc = 0x216100u;
label_216100:
    // 0x216100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x216100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216104:
    // 0x216104: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_216108:
    if (ctx->pc == 0x216108u) {
        ctx->pc = 0x21610Cu;
        goto label_21610c;
    }
    ctx->pc = 0x216104u;
    {
        const bool branch_taken_0x216104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x216104) {
            ctx->pc = 0x216114u;
            goto label_216114;
        }
    }
    ctx->pc = 0x21610Cu;
label_21610c:
    // 0x21610c: 0x100004b2  b           . + 4 + (0x4B2 << 2)
label_216110:
    if (ctx->pc == 0x216110u) {
        ctx->pc = 0x216110u;
            // 0x216110: 0x200082a  slt         $at, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->pc = 0x216114u;
        goto label_216114;
    }
    ctx->pc = 0x21610Cu;
    {
        const bool branch_taken_0x21610c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21610Cu;
            // 0x216110: 0x200082a  slt         $at, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21610c) {
            ctx->pc = 0x2173D8u;
            goto label_2173d8;
        }
    }
    ctx->pc = 0x216114u;
label_216114:
    // 0x216114: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x216114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216118:
    // 0x216118: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_21611c:
    if (ctx->pc == 0x21611Cu) {
        ctx->pc = 0x21611Cu;
            // 0x21611c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216120u;
        goto label_216120;
    }
    ctx->pc = 0x216118u;
    {
        const bool branch_taken_0x216118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21611Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216118u;
            // 0x21611c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216118) {
            ctx->pc = 0x216140u;
            goto label_216140;
        }
    }
    ctx->pc = 0x216120u;
label_216120:
    // 0x216120: 0x8f8291b0  lw          $v0, -0x6E50($gp)
    ctx->pc = 0x216120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_216124:
    // 0x216124: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x216124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_216128:
    // 0x216128: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x216128u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21612c:
    // 0x21612c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x21612cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_216130:
    // 0x216130: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x216130u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_216134:
    // 0x216134: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x216134u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_216138:
    // 0x216138: 0xc05f610  jal         func_17D840
label_21613c:
    if (ctx->pc == 0x21613Cu) {
        ctx->pc = 0x21613Cu;
            // 0x21613c: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x216140u;
        goto label_216140;
    }
    ctx->pc = 0x216138u;
    SET_GPR_U32(ctx, 31, 0x216140u);
    ctx->pc = 0x21613Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216138u;
            // 0x21613c: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216140u; }
        if (ctx->pc != 0x216140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216140u; }
        if (ctx->pc != 0x216140u) { return; }
    }
    ctx->pc = 0x216140u;
label_216140:
    // 0x216140: 0x86830388  lh          $v1, 0x388($s4)
    ctx->pc = 0x216140u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 904)));
label_216144:
    // 0x216144: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x216144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_216148:
    // 0x216148: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_21614c:
    if (ctx->pc == 0x21614Cu) {
        ctx->pc = 0x216150u;
        goto label_216150;
    }
    ctx->pc = 0x216148u;
    {
        const bool branch_taken_0x216148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x216148) {
            ctx->pc = 0x216170u;
            goto label_216170;
        }
    }
    ctx->pc = 0x216150u;
label_216150:
    // 0x216150: 0x8f8291b0  lw          $v0, -0x6E50($gp)
    ctx->pc = 0x216150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_216154:
    // 0x216154: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x216154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_216158:
    // 0x216158: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x216158u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21615c:
    // 0x21615c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x21615cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_216160:
    // 0x216160: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x216160u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_216164:
    // 0x216164: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x216164u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_216168:
    // 0x216168: 0xc05f610  jal         func_17D840
label_21616c:
    if (ctx->pc == 0x21616Cu) {
        ctx->pc = 0x21616Cu;
            // 0x21616c: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x216170u;
        goto label_216170;
    }
    ctx->pc = 0x216168u;
    SET_GPR_U32(ctx, 31, 0x216170u);
    ctx->pc = 0x21616Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216168u;
            // 0x21616c: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216170u; }
        if (ctx->pc != 0x216170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216170u; }
        if (ctx->pc != 0x216170u) { return; }
    }
    ctx->pc = 0x216170u;
label_216170:
    // 0x216170: 0x86820388  lh          $v0, 0x388($s4)
    ctx->pc = 0x216170u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 904)));
label_216174:
    // 0x216174: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x216174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_216178:
    // 0x216178: 0x10000496  b           . + 4 + (0x496 << 2)
label_21617c:
    if (ctx->pc == 0x21617Cu) {
        ctx->pc = 0x21617Cu;
            // 0x21617c: 0xa6820388  sh          $v0, 0x388($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 904), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x216180u;
        goto label_216180;
    }
    ctx->pc = 0x216178u;
    {
        const bool branch_taken_0x216178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21617Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216178u;
            // 0x21617c: 0xa6820388  sh          $v0, 0x388($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 904), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216178) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216180u;
label_216180:
    // 0x216180: 0x8f8291b0  lw          $v0, -0x6E50($gp)
    ctx->pc = 0x216180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_216184:
    // 0x216184: 0xc05f65c  jal         func_17D970
label_216188:
    if (ctx->pc == 0x216188u) {
        ctx->pc = 0x216188u;
            // 0x216188: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x21618Cu;
        goto label_21618c;
    }
    ctx->pc = 0x216184u;
    SET_GPR_U32(ctx, 31, 0x21618Cu);
    ctx->pc = 0x216188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216184u;
            // 0x216188: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21618Cu; }
        if (ctx->pc != 0x21618Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21618Cu; }
        if (ctx->pc != 0x21618Cu) { return; }
    }
    ctx->pc = 0x21618Cu;
label_21618c:
    // 0x21618c: 0x10400491  beqz        $v0, . + 4 + (0x491 << 2)
label_216190:
    if (ctx->pc == 0x216190u) {
        ctx->pc = 0x216194u;
        goto label_216194;
    }
    ctx->pc = 0x21618Cu;
    {
        const bool branch_taken_0x21618c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21618c) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216194u;
label_216194:
    // 0x216194: 0x86830388  lh          $v1, 0x388($s4)
    ctx->pc = 0x216194u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 904)));
label_216198:
    // 0x216198: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x216198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21619c:
    // 0x21619c: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
label_2161a0:
    if (ctx->pc == 0x2161A0u) {
        ctx->pc = 0x2161A4u;
        goto label_2161a4;
    }
    ctx->pc = 0x21619Cu;
    {
        const bool branch_taken_0x21619c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21619c) {
            ctx->pc = 0x216224u;
            goto label_216224;
        }
    }
    ctx->pc = 0x2161A4u;
label_2161a4:
    // 0x2161a4: 0x868502cc  lh          $a1, 0x2CC($s4)
    ctx->pc = 0x2161a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 716)));
label_2161a8:
    // 0x2161a8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2161a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_2161ac:
    // 0x2161ac: 0xc04b950  jal         func_12E540
label_2161b0:
    if (ctx->pc == 0x2161B0u) {
        ctx->pc = 0x2161B0u;
            // 0x2161b0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->pc = 0x2161B4u;
        goto label_2161b4;
    }
    ctx->pc = 0x2161ACu;
    SET_GPR_U32(ctx, 31, 0x2161B4u);
    ctx->pc = 0x2161B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2161ACu;
            // 0x2161b0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2161B4u; }
        if (ctx->pc != 0x2161B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2161B4u; }
        if (ctx->pc != 0x2161B4u) { return; }
    }
    ctx->pc = 0x2161B4u;
label_2161b4:
    // 0x2161b4: 0x868502ce  lh          $a1, 0x2CE($s4)
    ctx->pc = 0x2161b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 718)));
label_2161b8:
    // 0x2161b8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2161b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_2161bc:
    // 0x2161bc: 0xc04b950  jal         func_12E540
label_2161c0:
    if (ctx->pc == 0x2161C0u) {
        ctx->pc = 0x2161C0u;
            // 0x2161c0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->pc = 0x2161C4u;
        goto label_2161c4;
    }
    ctx->pc = 0x2161BCu;
    SET_GPR_U32(ctx, 31, 0x2161C4u);
    ctx->pc = 0x2161C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2161BCu;
            // 0x2161c0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2161C4u; }
        if (ctx->pc != 0x2161C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2161C4u; }
        if (ctx->pc != 0x2161C4u) { return; }
    }
    ctx->pc = 0x2161C4u;
label_2161c4:
    // 0x2161c4: 0x8682031a  lh          $v0, 0x31A($s4)
    ctx->pc = 0x2161c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 794)));
label_2161c8:
    // 0x2161c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2161c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2161cc:
    // 0x2161cc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2161ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2161d0:
    // 0x2161d0: 0x8c4202b4  lw          $v0, 0x2B4($v0)
    ctx->pc = 0x2161d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_2161d4:
    // 0x2161d4: 0x8c440938  lw          $a0, 0x938($v0)
    ctx->pc = 0x2161d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2360)));
label_2161d8:
    // 0x2161d8: 0xc065dc0  jal         func_197700
label_2161dc:
    if (ctx->pc == 0x2161DCu) {
        ctx->pc = 0x2161DCu;
            // 0x2161dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2161E0u;
        goto label_2161e0;
    }
    ctx->pc = 0x2161D8u;
    SET_GPR_U32(ctx, 31, 0x2161E0u);
    ctx->pc = 0x2161DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2161D8u;
            // 0x2161dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2161E0u; }
        if (ctx->pc != 0x2161E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2161E0u; }
        if (ctx->pc != 0x2161E0u) { return; }
    }
    ctx->pc = 0x2161E0u;
label_2161e0:
    // 0x2161e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2161e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2161e4:
    // 0x2161e4: 0xc04a3dc  jal         func_128F70
label_2161e8:
    if (ctx->pc == 0x2161E8u) {
        ctx->pc = 0x2161E8u;
            // 0x2161e8: 0x268402da  addiu       $a0, $s4, 0x2DA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 730));
        ctx->pc = 0x2161ECu;
        goto label_2161ec;
    }
    ctx->pc = 0x2161E4u;
    SET_GPR_U32(ctx, 31, 0x2161ECu);
    ctx->pc = 0x2161E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2161E4u;
            // 0x2161e8: 0x268402da  addiu       $a0, $s4, 0x2DA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 730));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2161ECu; }
        if (ctx->pc != 0x2161ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2161ECu; }
        if (ctx->pc != 0x2161ECu) { return; }
    }
    ctx->pc = 0x2161ECu;
label_2161ec:
    // 0x2161ec: 0x8682031c  lh          $v0, 0x31C($s4)
    ctx->pc = 0x2161ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 796)));
label_2161f0:
    // 0x2161f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2161f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2161f4:
    // 0x2161f4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2161f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2161f8:
    // 0x2161f8: 0x8c4202b4  lw          $v0, 0x2B4($v0)
    ctx->pc = 0x2161f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_2161fc:
    // 0x2161fc: 0x8c440938  lw          $a0, 0x938($v0)
    ctx->pc = 0x2161fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2360)));
label_216200:
    // 0x216200: 0xc065dc0  jal         func_197700
label_216204:
    if (ctx->pc == 0x216204u) {
        ctx->pc = 0x216204u;
            // 0x216204: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x216208u;
        goto label_216208;
    }
    ctx->pc = 0x216200u;
    SET_GPR_U32(ctx, 31, 0x216208u);
    ctx->pc = 0x216204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216200u;
            // 0x216204: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216208u; }
        if (ctx->pc != 0x216208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216208u; }
        if (ctx->pc != 0x216208u) { return; }
    }
    ctx->pc = 0x216208u;
label_216208:
    // 0x216208: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x216208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21620c:
    // 0x21620c: 0xc04a3dc  jal         func_128F70
label_216210:
    if (ctx->pc == 0x216210u) {
        ctx->pc = 0x216210u;
            // 0x216210: 0x268402fa  addiu       $a0, $s4, 0x2FA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 762));
        ctx->pc = 0x216214u;
        goto label_216214;
    }
    ctx->pc = 0x21620Cu;
    SET_GPR_U32(ctx, 31, 0x216214u);
    ctx->pc = 0x216210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21620Cu;
            // 0x216210: 0x268402fa  addiu       $a0, $s4, 0x2FA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 762));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216214u; }
        if (ctx->pc != 0x216214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216214u; }
        if (ctx->pc != 0x216214u) { return; }
    }
    ctx->pc = 0x216214u;
label_216214:
    // 0x216214: 0x8685031a  lh          $a1, 0x31A($s4)
    ctx->pc = 0x216214u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 794)));
label_216218:
    // 0x216218: 0x8686031c  lh          $a2, 0x31C($s4)
    ctx->pc = 0x216218u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 796)));
label_21621c:
    // 0x21621c: 0xc085118  jal         func_214460
label_216220:
    if (ctx->pc == 0x216220u) {
        ctx->pc = 0x216220u;
            // 0x216220: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216224u;
        goto label_216224;
    }
    ctx->pc = 0x21621Cu;
    SET_GPR_U32(ctx, 31, 0x216224u);
    ctx->pc = 0x216220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21621Cu;
            // 0x216220: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x214460u;
    if (runtime->hasFunction(0x214460u)) {
        auto targetFn = runtime->lookupFunction(0x214460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216224u; }
        if (ctx->pc != 0x216224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CombineFish__9CAquariumFii_0x214460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216224u; }
        if (ctx->pc != 0x216224u) { return; }
    }
    ctx->pc = 0x216224u;
label_216224:
    // 0x216224: 0x86830388  lh          $v1, 0x388($s4)
    ctx->pc = 0x216224u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 904)));
label_216228:
    // 0x216228: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x216228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_21622c:
    // 0x21622c: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
label_216230:
    if (ctx->pc == 0x216230u) {
        ctx->pc = 0x216230u;
            // 0x216230: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216234u;
        goto label_216234;
    }
    ctx->pc = 0x21622Cu;
    {
        const bool branch_taken_0x21622c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x216230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21622Cu;
            // 0x216230: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21622c) {
            ctx->pc = 0x2162F4u;
            goto label_2162f4;
        }
    }
    ctx->pc = 0x216234u;
label_216234:
    // 0x216234: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x216234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216238:
    // 0x216238: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x216238u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21623c:
    // 0x21623c: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x21623cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_216240:
    // 0x216240: 0x8c4402b4  lw          $a0, 0x2B4($v0)
    ctx->pc = 0x216240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_216244:
    // 0x216244: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_216248:
    if (ctx->pc == 0x216248u) {
        ctx->pc = 0x216248u;
            // 0x216248: 0x245602b4  addiu       $s6, $v0, 0x2B4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 692));
        ctx->pc = 0x21624Cu;
        goto label_21624c;
    }
    ctx->pc = 0x216244u;
    {
        const bool branch_taken_0x216244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x216248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216244u;
            // 0x216248: 0x245602b4  addiu       $s6, $v0, 0x2B4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 692));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216244) {
            ctx->pc = 0x216278u;
            goto label_216278;
        }
    }
    ctx->pc = 0x21624Cu;
label_21624c:
    // 0x21624c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x21624cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_216250:
    // 0x216250: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x216250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
label_216254:
    // 0x216254: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x216254u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_216258:
    // 0x216258: 0x320f809  jalr        $t9
label_21625c:
    if (ctx->pc == 0x21625Cu) {
        ctx->pc = 0x21625Cu;
            // 0x21625c: 0x24450090  addiu       $a1, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->pc = 0x216260u;
        goto label_216260;
    }
    ctx->pc = 0x216258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x216260u);
        ctx->pc = 0x21625Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216258u;
            // 0x21625c: 0x24450090  addiu       $a1, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x216260u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x216260u; }
            if (ctx->pc != 0x216260u) { return; }
        }
        }
    }
    ctx->pc = 0x216260u;
label_216260:
    // 0x216260: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x216260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_216264:
    // 0x216264: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x216264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
label_216268:
    // 0x216268: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x216268u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_21626c:
    // 0x21626c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x21626cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_216270:
    // 0x216270: 0x320f809  jalr        $t9
label_216274:
    if (ctx->pc == 0x216274u) {
        ctx->pc = 0x216274u;
            // 0x216274: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
        ctx->pc = 0x216278u;
        goto label_216278;
    }
    ctx->pc = 0x216270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x216278u);
        ctx->pc = 0x216274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216270u;
            // 0x216274: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x216278u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x216278u; }
            if (ctx->pc != 0x216278u) { return; }
        }
        }
    }
    ctx->pc = 0x216278u;
label_216278:
    // 0x216278: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x216278u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_21627c:
    // 0x21627c: 0x2aa20006  slti        $v0, $s5, 0x6
    ctx->pc = 0x21627cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)6) ? 1 : 0);
label_216280:
    // 0x216280: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x216280u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_216284:
    // 0x216284: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_216288:
    if (ctx->pc == 0x216288u) {
        ctx->pc = 0x216288u;
            // 0x216288: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x21628Cu;
        goto label_21628c;
    }
    ctx->pc = 0x216284u;
    {
        const bool branch_taken_0x216284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216284u;
            // 0x216288: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216284) {
            ctx->pc = 0x21623Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21623c;
        }
    }
    ctx->pc = 0x21628Cu;
label_21628c:
    // 0x21628c: 0xc084dc4  jal         func_213710
label_216290:
    if (ctx->pc == 0x216290u) {
        ctx->pc = 0x216290u;
            // 0x216290: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216294u;
        goto label_216294;
    }
    ctx->pc = 0x21628Cu;
    SET_GPR_U32(ctx, 31, 0x216294u);
    ctx->pc = 0x216290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21628Cu;
            // 0x216290: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x213710u;
    if (runtime->hasFunction(0x213710u)) {
        auto targetFn = runtime->lookupFunction(0x213710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216294u; }
        if (ctx->pc != 0x216294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SettingAqua__9CAquariumFv_0x213710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216294u; }
        if (ctx->pc != 0x216294u) { return; }
    }
    ctx->pc = 0x216294u;
label_216294:
    // 0x216294: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x216294u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216298:
    // 0x216298: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x216298u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21629c:
    // 0x21629c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21629cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2162a0:
    // 0x2162a0: 0x2951021  addu        $v0, $s4, $s5
    ctx->pc = 0x2162a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_2162a4:
    // 0x2162a4: 0x8c4402b4  lw          $a0, 0x2B4($v0)
    ctx->pc = 0x2162a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_2162a8:
    // 0x2162a8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2162ac:
    if (ctx->pc == 0x2162ACu) {
        ctx->pc = 0x2162ACu;
            // 0x2162ac: 0x245602b4  addiu       $s6, $v0, 0x2B4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 692));
        ctx->pc = 0x2162B0u;
        goto label_2162b0;
    }
    ctx->pc = 0x2162A8u;
    {
        const bool branch_taken_0x2162a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2162ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2162A8u;
            // 0x2162ac: 0x245602b4  addiu       $s6, $v0, 0x2B4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 692));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2162a8) {
            ctx->pc = 0x2162DCu;
            goto label_2162dc;
        }
    }
    ctx->pc = 0x2162B0u;
label_2162b0:
    // 0x2162b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2162b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2162b4:
    // 0x2162b4: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2162b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
label_2162b8:
    // 0x2162b8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2162b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2162bc:
    // 0x2162bc: 0x320f809  jalr        $t9
label_2162c0:
    if (ctx->pc == 0x2162C0u) {
        ctx->pc = 0x2162C0u;
            // 0x2162c0: 0x24450090  addiu       $a1, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->pc = 0x2162C4u;
        goto label_2162c4;
    }
    ctx->pc = 0x2162BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2162C4u);
        ctx->pc = 0x2162C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2162BCu;
            // 0x2162c0: 0x24450090  addiu       $a1, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2162C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2162C4u; }
            if (ctx->pc != 0x2162C4u) { return; }
        }
        }
    }
    ctx->pc = 0x2162C4u;
label_2162c4:
    // 0x2162c4: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x2162c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2162c8:
    // 0x2162c8: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2162c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
label_2162cc:
    // 0x2162cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2162ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2162d0:
    // 0x2162d0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2162d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2162d4:
    // 0x2162d4: 0x320f809  jalr        $t9
label_2162d8:
    if (ctx->pc == 0x2162D8u) {
        ctx->pc = 0x2162D8u;
            // 0x2162d8: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
        ctx->pc = 0x2162DCu;
        goto label_2162dc;
    }
    ctx->pc = 0x2162D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2162DCu);
        ctx->pc = 0x2162D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2162D4u;
            // 0x2162d8: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2162DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2162DCu; }
            if (ctx->pc != 0x2162DCu) { return; }
        }
        }
    }
    ctx->pc = 0x2162DCu;
label_2162dc:
    // 0x2162dc: 0x0  nop
    ctx->pc = 0x2162dcu;
    // NOP
label_2162e0:
    // 0x2162e0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2162e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2162e4:
    // 0x2162e4: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x2162e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
label_2162e8:
    // 0x2162e8: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x2162e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_2162ec:
    // 0x2162ec: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_2162f0:
    if (ctx->pc == 0x2162F0u) {
        ctx->pc = 0x2162F0u;
            // 0x2162f0: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x2162F4u;
        goto label_2162f4;
    }
    ctx->pc = 0x2162ECu;
    {
        const bool branch_taken_0x2162ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2162F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2162ECu;
            // 0x2162f0: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2162ec) {
            ctx->pc = 0x2162A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2162a0;
        }
    }
    ctx->pc = 0x2162F4u;
label_2162f4:
    // 0x2162f4: 0x0  nop
    ctx->pc = 0x2162f4u;
    // NOP
label_2162f8:
    // 0x2162f8: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2162f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_2162fc:
    // 0x2162fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2162fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_216300:
    // 0x216300: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x216300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_216304:
    // 0x216304: 0x8f8291b0  lw          $v0, -0x6E50($gp)
    ctx->pc = 0x216304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_216308:
    // 0x216308: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x216308u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_21630c:
    // 0x21630c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x21630cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_216310:
    // 0x216310: 0xc05f5e4  jal         func_17D790
label_216314:
    if (ctx->pc == 0x216314u) {
        ctx->pc = 0x216314u;
            // 0x216314: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x216318u;
        goto label_216318;
    }
    ctx->pc = 0x216310u;
    SET_GPR_U32(ctx, 31, 0x216318u);
    ctx->pc = 0x216314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216310u;
            // 0x216314: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D790u;
    if (runtime->hasFunction(0x17D790u)) {
        auto targetFn = runtime->lookupFunction(0x17D790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216318u; }
        if (ctx->pc != 0x216318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFifff_0x17d790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216318u; }
        if (ctx->pc != 0x216318u) { return; }
    }
    ctx->pc = 0x216318u;
label_216318:
    // 0x216318: 0x8e840390  lw          $a0, 0x390($s4)
    ctx->pc = 0x216318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 912)));
label_21631c:
    // 0x21631c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_216320:
    if (ctx->pc == 0x216320u) {
        ctx->pc = 0x216324u;
        goto label_216324;
    }
    ctx->pc = 0x21631Cu;
    {
        const bool branch_taken_0x21631c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21631c) {
            ctx->pc = 0x216348u;
            goto label_216348;
        }
    }
    ctx->pc = 0x216324u;
label_216324:
    // 0x216324: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x216324u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_216328:
    // 0x216328: 0x8f3900c4  lw          $t9, 0xC4($t9)
    ctx->pc = 0x216328u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 196)));
label_21632c:
    // 0x21632c: 0x320f809  jalr        $t9
label_216330:
    if (ctx->pc == 0x216330u) {
        ctx->pc = 0x216330u;
            // 0x216330: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x216334u;
        goto label_216334;
    }
    ctx->pc = 0x21632Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x216334u);
        ctx->pc = 0x216330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21632Cu;
            // 0x216330: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x216334u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x216334u; }
            if (ctx->pc != 0x216334u) { return; }
        }
        }
    }
    ctx->pc = 0x216334u;
label_216334:
    // 0x216334: 0x8e840390  lw          $a0, 0x390($s4)
    ctx->pc = 0x216334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 912)));
label_216338:
    // 0x216338: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x216338u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_21633c:
    // 0x21633c: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x21633cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_216340:
    // 0x216340: 0x320f809  jalr        $t9
label_216344:
    if (ctx->pc == 0x216344u) {
        ctx->pc = 0x216344u;
            // 0x216344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216348u;
        goto label_216348;
    }
    ctx->pc = 0x216340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x216348u);
        ctx->pc = 0x216344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216340u;
            // 0x216344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x216348u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x216348u; }
            if (ctx->pc != 0x216348u) { return; }
        }
        }
    }
    ctx->pc = 0x216348u;
label_216348:
    // 0x216348: 0x86820388  lh          $v0, 0x388($s4)
    ctx->pc = 0x216348u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 904)));
label_21634c:
    // 0x21634c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21634cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_216350:
    // 0x216350: 0x10000420  b           . + 4 + (0x420 << 2)
label_216354:
    if (ctx->pc == 0x216354u) {
        ctx->pc = 0x216354u;
            // 0x216354: 0xa6820388  sh          $v0, 0x388($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 904), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x216358u;
        goto label_216358;
    }
    ctx->pc = 0x216350u;
    {
        const bool branch_taken_0x216350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216350u;
            // 0x216354: 0xa6820388  sh          $v0, 0x388($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 904), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216350) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216358u;
label_216358:
    // 0x216358: 0x8f8291b0  lw          $v0, -0x6E50($gp)
    ctx->pc = 0x216358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_21635c:
    // 0x21635c: 0xc05f65c  jal         func_17D970
label_216360:
    if (ctx->pc == 0x216360u) {
        ctx->pc = 0x216360u;
            // 0x216360: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x216364u;
        goto label_216364;
    }
    ctx->pc = 0x21635Cu;
    SET_GPR_U32(ctx, 31, 0x216364u);
    ctx->pc = 0x216360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21635Cu;
            // 0x216360: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216364u; }
        if (ctx->pc != 0x216364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216364u; }
        if (ctx->pc != 0x216364u) { return; }
    }
    ctx->pc = 0x216364u;
label_216364:
    // 0x216364: 0x1040041b  beqz        $v0, . + 4 + (0x41B << 2)
label_216368:
    if (ctx->pc == 0x216368u) {
        ctx->pc = 0x21636Cu;
        goto label_21636c;
    }
    ctx->pc = 0x216364u;
    {
        const bool branch_taken_0x216364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216364) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x21636Cu;
label_21636c:
    // 0x21636c: 0x86830388  lh          $v1, 0x388($s4)
    ctx->pc = 0x21636cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 904)));
label_216370:
    // 0x216370: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x216370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_216374:
    // 0x216374: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
label_216378:
    if (ctx->pc == 0x216378u) {
        ctx->pc = 0x216378u;
            // 0x216378: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21637Cu;
        goto label_21637c;
    }
    ctx->pc = 0x216374u;
    {
        const bool branch_taken_0x216374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x216378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216374u;
            // 0x216378: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216374) {
            ctx->pc = 0x216414u;
            goto label_216414;
        }
    }
    ctx->pc = 0x21637Cu;
label_21637c:
    // 0x21637c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21637cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216380:
    // 0x216380: 0x268502da  addiu       $a1, $s4, 0x2DA
    ctx->pc = 0x216380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 730));
label_216384:
    // 0x216384: 0xa2220040  sb          $v0, 0x40($s1)
    ctx->pc = 0x216384u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 2));
label_216388:
    // 0x216388: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_21638c:
    if (ctx->pc == 0x21638Cu) {
        ctx->pc = 0x21638Cu;
            // 0x21638c: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->pc = 0x216390u;
        goto label_216390;
    }
    ctx->pc = 0x216388u;
    {
        const bool branch_taken_0x216388 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21638Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216388u;
            // 0x21638c: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216388) {
            ctx->pc = 0x216398u;
            goto label_216398;
        }
    }
    ctx->pc = 0x216390u;
label_216390:
    // 0x216390: 0xc04a3dc  jal         func_128F70
label_216394:
    if (ctx->pc == 0x216394u) {
        ctx->pc = 0x216394u;
            // 0x216394: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->pc = 0x216398u;
        goto label_216398;
    }
    ctx->pc = 0x216390u;
    SET_GPR_U32(ctx, 31, 0x216398u);
    ctx->pc = 0x216394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216390u;
            // 0x216394: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216398u; }
        if (ctx->pc != 0x216398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216398u; }
        if (ctx->pc != 0x216398u) { return; }
    }
    ctx->pc = 0x216398u;
label_216398:
    // 0x216398: 0x268502fa  addiu       $a1, $s4, 0x2FA
    ctx->pc = 0x216398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 762));
label_21639c:
    // 0x21639c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_2163a0:
    if (ctx->pc == 0x2163A0u) {
        ctx->pc = 0x2163A0u;
            // 0x2163a0: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->pc = 0x2163A4u;
        goto label_2163a4;
    }
    ctx->pc = 0x21639Cu;
    {
        const bool branch_taken_0x21639c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2163A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21639Cu;
            // 0x2163a0: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21639c) {
            ctx->pc = 0x2163ACu;
            goto label_2163ac;
        }
    }
    ctx->pc = 0x2163A4u;
label_2163a4:
    // 0x2163a4: 0xc04a3dc  jal         func_128F70
label_2163a8:
    if (ctx->pc == 0x2163A8u) {
        ctx->pc = 0x2163A8u;
            // 0x2163a8: 0x24441821  addiu       $a0, $v0, 0x1821 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6177));
        ctx->pc = 0x2163ACu;
        goto label_2163ac;
    }
    ctx->pc = 0x2163A4u;
    SET_GPR_U32(ctx, 31, 0x2163ACu);
    ctx->pc = 0x2163A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2163A4u;
            // 0x2163a8: 0x24441821  addiu       $a0, $v0, 0x1821 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6177));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2163ACu; }
        if (ctx->pc != 0x2163ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2163ACu; }
        if (ctx->pc != 0x2163ACu) { return; }
    }
    ctx->pc = 0x2163ACu;
label_2163ac:
    // 0x2163ac: 0x8e9202b4  lw          $s2, 0x2B4($s4)
    ctx->pc = 0x2163acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 692)));
label_2163b0:
    // 0x2163b0: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_2163b4:
    if (ctx->pc == 0x2163B4u) {
        ctx->pc = 0x2163B8u;
        goto label_2163b8;
    }
    ctx->pc = 0x2163B0u;
    {
        const bool branch_taken_0x2163b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2163b0) {
            ctx->pc = 0x2163C0u;
            goto label_2163c0;
        }
    }
    ctx->pc = 0x2163B8u;
label_2163b8:
    // 0x2163b8: 0x8e9202b8  lw          $s2, 0x2B8($s4)
    ctx->pc = 0x2163b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 696)));
label_2163bc:
    // 0x2163bc: 0x0  nop
    ctx->pc = 0x2163bcu;
    // NOP
label_2163c0:
    // 0x2163c0: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_2163c4:
    if (ctx->pc == 0x2163C4u) {
        ctx->pc = 0x2163C8u;
        goto label_2163c8;
    }
    ctx->pc = 0x2163C0u;
    {
        const bool branch_taken_0x2163c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2163c0) {
            ctx->pc = 0x216414u;
            goto label_216414;
        }
    }
    ctx->pc = 0x2163C8u;
label_2163c8:
    // 0x2163c8: 0x8e440938  lw          $a0, 0x938($s2)
    ctx->pc = 0x2163c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2360)));
label_2163cc:
    // 0x2163cc: 0xc065dc0  jal         func_197700
label_2163d0:
    if (ctx->pc == 0x2163D0u) {
        ctx->pc = 0x2163D0u;
            // 0x2163d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2163D4u;
        goto label_2163d4;
    }
    ctx->pc = 0x2163CCu;
    SET_GPR_U32(ctx, 31, 0x2163D4u);
    ctx->pc = 0x2163D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2163CCu;
            // 0x2163d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2163D4u; }
        if (ctx->pc != 0x2163D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2163D4u; }
        if (ctx->pc != 0x2163D4u) { return; }
    }
    ctx->pc = 0x2163D4u;
label_2163d4:
    // 0x2163d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2163d8:
    if (ctx->pc == 0x2163D8u) {
        ctx->pc = 0x2163D8u;
            // 0x2163d8: 0x8e230038  lw          $v1, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->pc = 0x2163DCu;
        goto label_2163dc;
    }
    ctx->pc = 0x2163D4u;
    {
        const bool branch_taken_0x2163d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2163D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2163D4u;
            // 0x2163d8: 0x8e230038  lw          $v1, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2163d4) {
            ctx->pc = 0x2163E8u;
            goto label_2163e8;
        }
    }
    ctx->pc = 0x2163DCu;
label_2163dc:
    // 0x2163dc: 0x24641841  addiu       $a0, $v1, 0x1841
    ctx->pc = 0x2163dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6209));
label_2163e0:
    // 0x2163e0: 0xc04a3dc  jal         func_128F70
label_2163e4:
    if (ctx->pc == 0x2163E4u) {
        ctx->pc = 0x2163E4u;
            // 0x2163e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2163E8u;
        goto label_2163e8;
    }
    ctx->pc = 0x2163E0u;
    SET_GPR_U32(ctx, 31, 0x2163E8u);
    ctx->pc = 0x2163E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2163E0u;
            // 0x2163e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2163E8u; }
        if (ctx->pc != 0x2163E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2163E8u; }
        if (ctx->pc != 0x2163E8u) { return; }
    }
    ctx->pc = 0x2163E8u;
label_2163e8:
    // 0x2163e8: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x2163e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_2163ec:
    // 0x2163ec: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x2163ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
label_2163f0:
    // 0x2163f0: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x2163f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2163f4:
    // 0x2163f4: 0xc0562c8  jal         func_158B20
label_2163f8:
    if (ctx->pc == 0x2163F8u) {
        ctx->pc = 0x2163F8u;
            // 0x2163f8: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->pc = 0x2163FCu;
        goto label_2163fc;
    }
    ctx->pc = 0x2163F4u;
    SET_GPR_U32(ctx, 31, 0x2163FCu);
    ctx->pc = 0x2163F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2163F4u;
            // 0x2163f8: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2163FCu; }
        if (ctx->pc != 0x2163FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2163FCu; }
        if (ctx->pc != 0x2163FCu) { return; }
    }
    ctx->pc = 0x2163FCu;
label_2163fc:
    // 0x2163fc: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x2163fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_216400:
    // 0x216400: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x216400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_216404:
    // 0x216404: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x216404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_216408:
    // 0x216408: 0xac43014c  sw          $v1, 0x14C($v0)
    ctx->pc = 0x216408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
label_21640c:
    // 0x21640c: 0xc094274  jal         func_2509D0
label_216410:
    if (ctx->pc == 0x216410u) {
        ctx->pc = 0x216410u;
            // 0x216410: 0xa2200048  sb          $zero, 0x48($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x216414u;
        goto label_216414;
    }
    ctx->pc = 0x21640Cu;
    SET_GPR_U32(ctx, 31, 0x216414u);
    ctx->pc = 0x216410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21640Cu;
            // 0x216410: 0xa2200048  sb          $zero, 0x48($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216414u; }
        if (ctx->pc != 0x216414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216414u; }
        if (ctx->pc != 0x216414u) { return; }
    }
    ctx->pc = 0x216414u;
label_216414:
    // 0x216414: 0x86830388  lh          $v1, 0x388($s4)
    ctx->pc = 0x216414u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 904)));
label_216418:
    // 0x216418: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x216418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_21641c:
    // 0x21641c: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
label_216420:
    if (ctx->pc == 0x216420u) {
        ctx->pc = 0x216420u;
            // 0x216420: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x216424u;
        goto label_216424;
    }
    ctx->pc = 0x21641Cu;
    {
        const bool branch_taken_0x21641c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x216420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21641Cu;
            // 0x216420: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21641c) {
            ctx->pc = 0x2164D4u;
            goto label_2164d4;
        }
    }
    ctx->pc = 0x216424u;
label_216424:
    // 0x216424: 0x268502da  addiu       $a1, $s4, 0x2DA
    ctx->pc = 0x216424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 730));
label_216428:
    // 0x216428: 0xa2220040  sb          $v0, 0x40($s1)
    ctx->pc = 0x216428u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 2));
label_21642c:
    // 0x21642c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_216430:
    if (ctx->pc == 0x216430u) {
        ctx->pc = 0x216430u;
            // 0x216430: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->pc = 0x216434u;
        goto label_216434;
    }
    ctx->pc = 0x21642Cu;
    {
        const bool branch_taken_0x21642c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x216430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21642Cu;
            // 0x216430: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21642c) {
            ctx->pc = 0x21643Cu;
            goto label_21643c;
        }
    }
    ctx->pc = 0x216434u;
label_216434:
    // 0x216434: 0xc04a3dc  jal         func_128F70
label_216438:
    if (ctx->pc == 0x216438u) {
        ctx->pc = 0x216438u;
            // 0x216438: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->pc = 0x21643Cu;
        goto label_21643c;
    }
    ctx->pc = 0x216434u;
    SET_GPR_U32(ctx, 31, 0x21643Cu);
    ctx->pc = 0x216438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216434u;
            // 0x216438: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21643Cu; }
        if (ctx->pc != 0x21643Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21643Cu; }
        if (ctx->pc != 0x21643Cu) { return; }
    }
    ctx->pc = 0x21643Cu;
label_21643c:
    // 0x21643c: 0x8682031a  lh          $v0, 0x31A($s4)
    ctx->pc = 0x21643cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 794)));
label_216440:
    // 0x216440: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x216440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_216444:
    // 0x216444: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x216444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_216448:
    // 0x216448: 0x8c5202b4  lw          $s2, 0x2B4($v0)
    ctx->pc = 0x216448u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_21644c:
    // 0x21644c: 0x1640000d  bnez        $s2, . + 4 + (0xD << 2)
label_216450:
    if (ctx->pc == 0x216450u) {
        ctx->pc = 0x216450u;
            // 0x216450: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216454u;
        goto label_216454;
    }
    ctx->pc = 0x21644Cu;
    {
        const bool branch_taken_0x21644c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x216450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21644Cu;
            // 0x216450: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21644c) {
            ctx->pc = 0x216484u;
            goto label_216484;
        }
    }
    ctx->pc = 0x216454u;
label_216454:
    // 0x216454: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x216454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216458:
    // 0x216458: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x216458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_21645c:
    // 0x21645c: 0x8c4202b4  lw          $v0, 0x2B4($v0)
    ctx->pc = 0x21645cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_216460:
    // 0x216460: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_216464:
    if (ctx->pc == 0x216464u) {
        ctx->pc = 0x216464u;
            // 0x216464: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x216468u;
        goto label_216468;
    }
    ctx->pc = 0x216460u;
    {
        const bool branch_taken_0x216460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216460u;
            // 0x216464: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216460) {
            ctx->pc = 0x216474u;
            goto label_216474;
        }
    }
    ctx->pc = 0x216468u;
label_216468:
    // 0x216468: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x216468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_21646c:
    // 0x21646c: 0x10000005  b           . + 4 + (0x5 << 2)
label_216470:
    if (ctx->pc == 0x216470u) {
        ctx->pc = 0x216470u;
            // 0x216470: 0x8c5202b4  lw          $s2, 0x2B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
        ctx->pc = 0x216474u;
        goto label_216474;
    }
    ctx->pc = 0x21646Cu;
    {
        const bool branch_taken_0x21646c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21646Cu;
            // 0x216470: 0x8c5202b4  lw          $s2, 0x2B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21646c) {
            ctx->pc = 0x216484u;
            goto label_216484;
        }
    }
    ctx->pc = 0x216474u;
label_216474:
    // 0x216474: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x216474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_216478:
    // 0x216478: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x216478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_21647c:
    // 0x21647c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_216480:
    if (ctx->pc == 0x216480u) {
        ctx->pc = 0x216480u;
            // 0x216480: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x216484u;
        goto label_216484;
    }
    ctx->pc = 0x21647Cu;
    {
        const bool branch_taken_0x21647c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21647Cu;
            // 0x216480: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21647c) {
            ctx->pc = 0x216458u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216458;
        }
    }
    ctx->pc = 0x216484u;
label_216484:
    // 0x216484: 0x0  nop
    ctx->pc = 0x216484u;
    // NOP
label_216488:
    // 0x216488: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
label_21648c:
    if (ctx->pc == 0x21648Cu) {
        ctx->pc = 0x216490u;
        goto label_216490;
    }
    ctx->pc = 0x216488u;
    {
        const bool branch_taken_0x216488 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x216488) {
            ctx->pc = 0x2164D4u;
            goto label_2164d4;
        }
    }
    ctx->pc = 0x216490u;
label_216490:
    // 0x216490: 0x8e440938  lw          $a0, 0x938($s2)
    ctx->pc = 0x216490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2360)));
label_216494:
    // 0x216494: 0xc065dc0  jal         func_197700
label_216498:
    if (ctx->pc == 0x216498u) {
        ctx->pc = 0x216498u;
            // 0x216498: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x21649Cu;
        goto label_21649c;
    }
    ctx->pc = 0x216494u;
    SET_GPR_U32(ctx, 31, 0x21649Cu);
    ctx->pc = 0x216498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216494u;
            // 0x216498: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21649Cu; }
        if (ctx->pc != 0x21649Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21649Cu; }
        if (ctx->pc != 0x21649Cu) { return; }
    }
    ctx->pc = 0x21649Cu;
label_21649c:
    // 0x21649c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2164a0:
    if (ctx->pc == 0x2164A0u) {
        ctx->pc = 0x2164A0u;
            // 0x2164a0: 0x8e230038  lw          $v1, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->pc = 0x2164A4u;
        goto label_2164a4;
    }
    ctx->pc = 0x21649Cu;
    {
        const bool branch_taken_0x21649c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2164A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21649Cu;
            // 0x2164a0: 0x8e230038  lw          $v1, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21649c) {
            ctx->pc = 0x2164B0u;
            goto label_2164b0;
        }
    }
    ctx->pc = 0x2164A4u;
label_2164a4:
    // 0x2164a4: 0x24641841  addiu       $a0, $v1, 0x1841
    ctx->pc = 0x2164a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6209));
label_2164a8:
    // 0x2164a8: 0xc04a3dc  jal         func_128F70
label_2164ac:
    if (ctx->pc == 0x2164ACu) {
        ctx->pc = 0x2164ACu;
            // 0x2164ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2164B0u;
        goto label_2164b0;
    }
    ctx->pc = 0x2164A8u;
    SET_GPR_U32(ctx, 31, 0x2164B0u);
    ctx->pc = 0x2164ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2164A8u;
            // 0x2164ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2164B0u; }
        if (ctx->pc != 0x2164B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2164B0u; }
        if (ctx->pc != 0x2164B0u) { return; }
    }
    ctx->pc = 0x2164B0u;
label_2164b0:
    // 0x2164b0: 0x2402012f  addiu       $v0, $zero, 0x12F
    ctx->pc = 0x2164b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
label_2164b4:
    // 0x2164b4: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x2164b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
label_2164b8:
    // 0x2164b8: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x2164b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2164bc:
    // 0x2164bc: 0xc0562c8  jal         func_158B20
label_2164c0:
    if (ctx->pc == 0x2164C0u) {
        ctx->pc = 0x2164C0u;
            // 0x2164c0: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->pc = 0x2164C4u;
        goto label_2164c4;
    }
    ctx->pc = 0x2164BCu;
    SET_GPR_U32(ctx, 31, 0x2164C4u);
    ctx->pc = 0x2164C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2164BCu;
            // 0x2164c0: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2164C4u; }
        if (ctx->pc != 0x2164C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2164C4u; }
        if (ctx->pc != 0x2164C4u) { return; }
    }
    ctx->pc = 0x2164C4u;
label_2164c4:
    // 0x2164c4: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x2164c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_2164c8:
    // 0x2164c8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2164c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2164cc:
    // 0x2164cc: 0xac43014c  sw          $v1, 0x14C($v0)
    ctx->pc = 0x2164ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
label_2164d0:
    // 0x2164d0: 0xa2200048  sb          $zero, 0x48($s1)
    ctx->pc = 0x2164d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 0));
label_2164d4:
    // 0x2164d4: 0x86820388  lh          $v0, 0x388($s4)
    ctx->pc = 0x2164d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 904)));
label_2164d8:
    // 0x2164d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2164d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2164dc:
    // 0x2164dc: 0x164003bd  bnez        $s2, . + 4 + (0x3BD << 2)
label_2164e0:
    if (ctx->pc == 0x2164E0u) {
        ctx->pc = 0x2164E0u;
            // 0x2164e0: 0xa6820388  sh          $v0, 0x388($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 904), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2164E4u;
        goto label_2164e4;
    }
    ctx->pc = 0x2164DCu;
    {
        const bool branch_taken_0x2164dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2164E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2164DCu;
            // 0x2164e0: 0xa6820388  sh          $v0, 0x388($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 904), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2164dc) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x2164E4u;
label_2164e4:
    // 0x2164e4: 0xa6800388  sh          $zero, 0x388($s4)
    ctx->pc = 0x2164e4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 904), (uint16_t)GPR_U32(ctx, 0));
label_2164e8:
    // 0x2164e8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2164e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2164ec:
    // 0x2164ec: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x2164ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_2164f0:
    // 0x2164f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2164f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2164f4:
    // 0x2164f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2164f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2164f8:
    // 0x2164f8: 0xc094274  jal         func_2509D0
label_2164fc:
    if (ctx->pc == 0x2164FCu) {
        ctx->pc = 0x2164FCu;
            // 0x2164fc: 0xac43014c  sw          $v1, 0x14C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
        ctx->pc = 0x216500u;
        goto label_216500;
    }
    ctx->pc = 0x2164F8u;
    SET_GPR_U32(ctx, 31, 0x216500u);
    ctx->pc = 0x2164FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2164F8u;
            // 0x2164fc: 0xac43014c  sw          $v1, 0x14C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216500u; }
        if (ctx->pc != 0x216500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216500u; }
        if (ctx->pc != 0x216500u) { return; }
    }
    ctx->pc = 0x216500u;
label_216500:
    // 0x216500: 0x100003b4  b           . + 4 + (0x3B4 << 2)
label_216504:
    if (ctx->pc == 0x216504u) {
        ctx->pc = 0x216508u;
        goto label_216508;
    }
    ctx->pc = 0x216500u;
    {
        const bool branch_taken_0x216500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216500) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216508u;
label_216508:
    // 0x216508: 0x124003b2  beqz        $s2, . + 4 + (0x3B2 << 2)
label_21650c:
    if (ctx->pc == 0x21650Cu) {
        ctx->pc = 0x216510u;
        goto label_216510;
    }
    ctx->pc = 0x216508u;
    {
        const bool branch_taken_0x216508 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x216508) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216510u;
label_216510:
    // 0x216510: 0xa6800388  sh          $zero, 0x388($s4)
    ctx->pc = 0x216510u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 904), (uint16_t)GPR_U32(ctx, 0));
label_216514:
    // 0x216514: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x216514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_216518:
    // 0x216518: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x216518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_21651c:
    // 0x21651c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21651cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216520:
    // 0x216520: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x216520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216524:
    // 0x216524: 0xc094274  jal         func_2509D0
label_216528:
    if (ctx->pc == 0x216528u) {
        ctx->pc = 0x216528u;
            // 0x216528: 0xac43014c  sw          $v1, 0x14C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
        ctx->pc = 0x21652Cu;
        goto label_21652c;
    }
    ctx->pc = 0x216524u;
    SET_GPR_U32(ctx, 31, 0x21652Cu);
    ctx->pc = 0x216528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216524u;
            // 0x216528: 0xac43014c  sw          $v1, 0x14C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21652Cu; }
        if (ctx->pc != 0x21652Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21652Cu; }
        if (ctx->pc != 0x21652Cu) { return; }
    }
    ctx->pc = 0x21652Cu;
label_21652c:
    // 0x21652c: 0x100003a9  b           . + 4 + (0x3A9 << 2)
label_216530:
    if (ctx->pc == 0x216530u) {
        ctx->pc = 0x216534u;
        goto label_216534;
    }
    ctx->pc = 0x21652Cu;
    {
        const bool branch_taken_0x21652c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21652c) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216534u;
label_216534:
    // 0x216534: 0x8682038a  lh          $v0, 0x38A($s4)
    ctx->pc = 0x216534u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 906)));
label_216538:
    // 0x216538: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x216538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_21653c:
    // 0x21653c: 0xa682038a  sh          $v0, 0x38A($s4)
    ctx->pc = 0x21653cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 906), (uint16_t)GPR_U32(ctx, 2));
label_216540:
    // 0x216540: 0x8682038a  lh          $v0, 0x38A($s4)
    ctx->pc = 0x216540u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 906)));
label_216544:
    // 0x216544: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x216544u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
label_216548:
    // 0x216548: 0x142003a2  bnez        $at, . + 4 + (0x3A2 << 2)
label_21654c:
    if (ctx->pc == 0x21654Cu) {
        ctx->pc = 0x21654Cu;
            // 0x21654c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x216550u;
        goto label_216550;
    }
    ctx->pc = 0x216548u;
    {
        const bool branch_taken_0x216548 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x21654Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216548u;
            // 0x21654c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216548) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216550u;
label_216550:
    // 0x216550: 0x100003a0  b           . + 4 + (0x3A0 << 2)
label_216554:
    if (ctx->pc == 0x216554u) {
        ctx->pc = 0x216554u;
            // 0x216554: 0xa6820388  sh          $v0, 0x388($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 904), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x216558u;
        goto label_216558;
    }
    ctx->pc = 0x216550u;
    {
        const bool branch_taken_0x216550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216550u;
            // 0x216554: 0xa6820388  sh          $v0, 0x388($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 904), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216550) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216558u;
label_216558:
    // 0x216558: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x216558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_21655c:
    // 0x21655c: 0xc052c7c  jal         func_14B1F0
label_216560:
    if (ctx->pc == 0x216560u) {
        ctx->pc = 0x216560u;
            // 0x216560: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x216564u;
        goto label_216564;
    }
    ctx->pc = 0x21655Cu;
    SET_GPR_U32(ctx, 31, 0x216564u);
    ctx->pc = 0x216560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21655Cu;
            // 0x216560: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B1F0u;
    if (runtime->hasFunction(0x14B1F0u)) {
        auto targetFn = runtime->lookupFunction(0x14B1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216564u; }
        if (ctx->pc != 0x216564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPadOn__8CGamePadFv_0x14b1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216564u; }
        if (ctx->pc != 0x216564u) { return; }
    }
    ctx->pc = 0x216564u;
label_216564:
    // 0x216564: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_216568:
    if (ctx->pc == 0x216568u) {
        ctx->pc = 0x21656Cu;
        goto label_21656c;
    }
    ctx->pc = 0x216564u;
    {
        const bool branch_taken_0x216564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216564) {
            ctx->pc = 0x216570u;
            goto label_216570;
        }
    }
    ctx->pc = 0x21656Cu;
label_21656c:
    // 0x21656c: 0xae800154  sw          $zero, 0x154($s4)
    ctx->pc = 0x21656cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 340), GPR_U32(ctx, 0));
label_216570:
    // 0x216570: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x216570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_216574:
    // 0x216574: 0x2c410012  sltiu       $at, $v0, 0x12
    ctx->pc = 0x216574u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_216578:
    // 0x216578: 0x10200396  beqz        $at, . + 4 + (0x396 << 2)
label_21657c:
    if (ctx->pc == 0x21657Cu) {
        ctx->pc = 0x21657Cu;
            // 0x21657c: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x216580u;
        goto label_216580;
    }
    ctx->pc = 0x216578u;
    {
        const bool branch_taken_0x216578 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21657Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216578u;
            // 0x21657c: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216578) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216580u;
label_216580:
    // 0x216580: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x216580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_216584:
    // 0x216584: 0x2463a1f0  addiu       $v1, $v1, -0x5E10
    ctx->pc = 0x216584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943216));
label_216588:
    // 0x216588: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x216588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21658c:
    // 0x21658c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21658cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_216590:
    // 0x216590: 0x400008  jr          $v0
label_216594:
    if (ctx->pc == 0x216594u) {
        ctx->pc = 0x216598u;
        goto label_216598;
    }
    ctx->pc = 0x216590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216598u: goto label_216598;
            case 0x2165D8u: goto label_2165d8;
            case 0x216794u: goto label_216794;
            case 0x216B4Cu: goto label_216b4c;
            case 0x216CD4u: goto label_216cd4;
            case 0x216CECu: goto label_216cec;
            case 0x216DC4u: goto label_216dc4;
            case 0x216DDCu: goto label_216ddc;
            case 0x216ED0u: goto label_216ed0;
            case 0x216F60u: goto label_216f60;
            case 0x217084u: goto label_217084;
            case 0x21709Cu: goto label_21709c;
            case 0x217140u: goto label_217140;
            case 0x217320u: goto label_217320;
            case 0x217338u: goto label_217338;
            case 0x2173D4u: goto label_2173d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x216598u;
label_216598:
    // 0x216598: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x216598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_21659c:
    // 0x21659c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2165a0:
    if (ctx->pc == 0x2165A0u) {
        ctx->pc = 0x2165A0u;
            // 0x2165a0: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x2165A4u;
        goto label_2165a4;
    }
    ctx->pc = 0x21659Cu;
    {
        const bool branch_taken_0x21659c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2165A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21659Cu;
            // 0x2165a0: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21659c) {
            ctx->pc = 0x2165B4u;
            goto label_2165b4;
        }
    }
    ctx->pc = 0x2165A4u;
label_2165a4:
    // 0x2165a4: 0xc094274  jal         func_2509D0
label_2165a8:
    if (ctx->pc == 0x2165A8u) {
        ctx->pc = 0x2165A8u;
            // 0x2165a8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2165ACu;
        goto label_2165ac;
    }
    ctx->pc = 0x2165A4u;
    SET_GPR_U32(ctx, 31, 0x2165ACu);
    ctx->pc = 0x2165A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2165A4u;
            // 0x2165a8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2165ACu; }
        if (ctx->pc != 0x2165ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2165ACu; }
        if (ctx->pc != 0x2165ACu) { return; }
    }
    ctx->pc = 0x2165ACu;
label_2165ac:
    // 0x2165ac: 0x10000547  b           . + 4 + (0x547 << 2)
label_2165b0:
    if (ctx->pc == 0x2165B0u) {
        ctx->pc = 0x2165B0u;
            // 0x2165b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2165B4u;
        goto label_2165b4;
    }
    ctx->pc = 0x2165ACu;
    {
        const bool branch_taken_0x2165ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2165B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2165ACu;
            // 0x2165b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2165ac) {
            ctx->pc = 0x217ACCu;
            goto label_217acc;
        }
    }
    ctx->pc = 0x2165B4u;
label_2165b4:
    // 0x2165b4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2165b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2165b8:
    // 0x2165b8: 0xc052d0c  jal         func_14B430
label_2165bc:
    if (ctx->pc == 0x2165BCu) {
        ctx->pc = 0x2165BCu;
            // 0x2165bc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x2165C0u;
        goto label_2165c0;
    }
    ctx->pc = 0x2165B8u;
    SET_GPR_U32(ctx, 31, 0x2165C0u);
    ctx->pc = 0x2165BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2165B8u;
            // 0x2165bc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2165C0u; }
        if (ctx->pc != 0x2165C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2165C0u; }
        if (ctx->pc != 0x2165C0u) { return; }
    }
    ctx->pc = 0x2165C0u;
label_2165c0:
    // 0x2165c0: 0x10400384  beqz        $v0, . + 4 + (0x384 << 2)
label_2165c4:
    if (ctx->pc == 0x2165C4u) {
        ctx->pc = 0x2165C4u;
            // 0x2165c4: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x2165C8u;
        goto label_2165c8;
    }
    ctx->pc = 0x2165C0u;
    {
        const bool branch_taken_0x2165c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2165C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2165C0u;
            // 0x2165c4: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2165c0) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x2165C8u;
label_2165c8:
    // 0x2165c8: 0xc094274  jal         func_2509D0
label_2165cc:
    if (ctx->pc == 0x2165CCu) {
        ctx->pc = 0x2165D0u;
        goto label_2165d0;
    }
    ctx->pc = 0x2165C8u;
    SET_GPR_U32(ctx, 31, 0x2165D0u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2165D0u; }
        if (ctx->pc != 0x2165D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2165D0u; }
        if (ctx->pc != 0x2165D0u) { return; }
    }
    ctx->pc = 0x2165D0u;
label_2165d0:
    // 0x2165d0: 0x10000380  b           . + 4 + (0x380 << 2)
label_2165d4:
    if (ctx->pc == 0x2165D4u) {
        ctx->pc = 0x2165D4u;
            // 0x2165d4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2165D8u;
        goto label_2165d8;
    }
    ctx->pc = 0x2165D0u;
    {
        const bool branch_taken_0x2165d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2165D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2165D0u;
            // 0x2165d4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2165d0) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x2165D8u;
label_2165d8:
    // 0x2165d8: 0x8f82920c  lw          $v0, -0x6DF4($gp)
    ctx->pc = 0x2165d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939148)));
label_2165dc:
    // 0x2165dc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2165dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2165e0:
    // 0x2165e0: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x2165e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_2165e4:
    // 0x2165e4: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x2165e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_2165e8:
    // 0x2165e8: 0x94550000  lhu         $s5, 0x0($v0)
    ctx->pc = 0x2165e8u;
    SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2165ec:
    // 0x2165ec: 0xc052d0c  jal         func_14B430
label_2165f0:
    if (ctx->pc == 0x2165F0u) {
        ctx->pc = 0x2165F0u;
            // 0x2165f0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2165F4u;
        goto label_2165f4;
    }
    ctx->pc = 0x2165ECu;
    SET_GPR_U32(ctx, 31, 0x2165F4u);
    ctx->pc = 0x2165F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2165ECu;
            // 0x2165f0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2165F4u; }
        if (ctx->pc != 0x2165F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2165F4u; }
        if (ctx->pc != 0x2165F4u) { return; }
    }
    ctx->pc = 0x2165F4u;
label_2165f4:
    // 0x2165f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2165f8:
    if (ctx->pc == 0x2165F8u) {
        ctx->pc = 0x2165F8u;
            // 0x2165f8: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x2165FCu;
        goto label_2165fc;
    }
    ctx->pc = 0x2165F4u;
    {
        const bool branch_taken_0x2165f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2165F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2165F4u;
            // 0x2165f8: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2165f4) {
            ctx->pc = 0x216604u;
            goto label_216604;
        }
    }
    ctx->pc = 0x2165FCu;
label_2165fc:
    // 0x2165fc: 0x10000007  b           . + 4 + (0x7 << 2)
label_216600:
    if (ctx->pc == 0x216600u) {
        ctx->pc = 0x216600u;
            // 0x216600: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->pc = 0x216604u;
        goto label_216604;
    }
    ctx->pc = 0x2165FCu;
    {
        const bool branch_taken_0x2165fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2165FCu;
            // 0x216600: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2165fc) {
            ctx->pc = 0x21661Cu;
            goto label_21661c;
        }
    }
    ctx->pc = 0x216604u;
label_216604:
    // 0x216604: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x216604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_216608:
    // 0x216608: 0xc052d0c  jal         func_14B430
label_21660c:
    if (ctx->pc == 0x21660Cu) {
        ctx->pc = 0x21660Cu;
            // 0x21660c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x216610u;
        goto label_216610;
    }
    ctx->pc = 0x216608u;
    SET_GPR_U32(ctx, 31, 0x216610u);
    ctx->pc = 0x21660Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216608u;
            // 0x21660c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216610u; }
        if (ctx->pc != 0x216610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216610u; }
        if (ctx->pc != 0x216610u) { return; }
    }
    ctx->pc = 0x216610u;
label_216610:
    // 0x216610: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_216614:
    if (ctx->pc == 0x216614u) {
        ctx->pc = 0x216614u;
            // 0x216614: 0x27828290  addiu       $v0, $gp, -0x7D70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935184));
        ctx->pc = 0x216618u;
        goto label_216618;
    }
    ctx->pc = 0x216610u;
    {
        const bool branch_taken_0x216610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216610u;
            // 0x216614: 0x27828290  addiu       $v0, $gp, -0x7D70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216610) {
            ctx->pc = 0x216620u;
            goto label_216620;
        }
    }
    ctx->pc = 0x216618u;
label_216618:
    // 0x216618: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x216618u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_21661c:
    // 0x21661c: 0x27828290  addiu       $v0, $gp, -0x7D70
    ctx->pc = 0x21661cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935184));
label_216620:
    // 0x216620: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x216620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_216624:
    // 0x216624: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x216624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_216628:
    // 0x216628: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x216628u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_21662c:
    // 0x21662c: 0xc0844b4  jal         func_2112D0
label_216630:
    if (ctx->pc == 0x216630u) {
        ctx->pc = 0x216630u;
            // 0x216630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216634u;
        goto label_216634;
    }
    ctx->pc = 0x21662Cu;
    SET_GPR_U32(ctx, 31, 0x216634u);
    ctx->pc = 0x216630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21662Cu;
            // 0x216630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2112D0u;
    if (runtime->hasFunction(0x2112D0u)) {
        auto targetFn = runtime->lookupFunction(0x2112D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216634u; }
        if (ctx->pc != 0x216634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMenuCursor__8CAquaMesFii_0x2112d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216634u; }
        if (ctx->pc != 0x216634u) { return; }
    }
    ctx->pc = 0x216634u;
label_216634:
    // 0x216634: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_216638:
    if (ctx->pc == 0x216638u) {
        ctx->pc = 0x216638u;
            // 0x216638: 0x32420002  andi        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x21663Cu;
        goto label_21663c;
    }
    ctx->pc = 0x216634u;
    {
        const bool branch_taken_0x216634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216634u;
            // 0x216638: 0x32420002  andi        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216634) {
            ctx->pc = 0x216648u;
            goto label_216648;
        }
    }
    ctx->pc = 0x21663Cu;
label_21663c:
    // 0x21663c: 0xc094274  jal         func_2509D0
label_216640:
    if (ctx->pc == 0x216640u) {
        ctx->pc = 0x216640u;
            // 0x216640: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216644u;
        goto label_216644;
    }
    ctx->pc = 0x21663Cu;
    SET_GPR_U32(ctx, 31, 0x216644u);
    ctx->pc = 0x216640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21663Cu;
            // 0x216640: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216644u; }
        if (ctx->pc != 0x216644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216644u; }
        if (ctx->pc != 0x216644u) { return; }
    }
    ctx->pc = 0x216644u;
label_216644:
    // 0x216644: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x216644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_216648:
    // 0x216648: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_21664c:
    if (ctx->pc == 0x21664Cu) {
        ctx->pc = 0x21664Cu;
            // 0x21664c: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x216650u;
        goto label_216650;
    }
    ctx->pc = 0x216648u;
    {
        const bool branch_taken_0x216648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21664Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216648u;
            // 0x21664c: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216648) {
            ctx->pc = 0x216660u;
            goto label_216660;
        }
    }
    ctx->pc = 0x216650u;
label_216650:
    // 0x216650: 0xc094274  jal         func_2509D0
label_216654:
    if (ctx->pc == 0x216654u) {
        ctx->pc = 0x216654u;
            // 0x216654: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x216658u;
        goto label_216658;
    }
    ctx->pc = 0x216650u;
    SET_GPR_U32(ctx, 31, 0x216658u);
    ctx->pc = 0x216654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216650u;
            // 0x216654: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216658u; }
        if (ctx->pc != 0x216658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216658u; }
        if (ctx->pc != 0x216658u) { return; }
    }
    ctx->pc = 0x216658u;
label_216658:
    // 0x216658: 0x1000035e  b           . + 4 + (0x35E << 2)
label_21665c:
    if (ctx->pc == 0x21665Cu) {
        ctx->pc = 0x21665Cu;
            // 0x21665c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216660u;
        goto label_216660;
    }
    ctx->pc = 0x216658u;
    {
        const bool branch_taken_0x216658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21665Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216658u;
            // 0x21665c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216658) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216660u;
label_216660:
    // 0x216660: 0x1040035c  beqz        $v0, . + 4 + (0x35C << 2)
label_216664:
    if (ctx->pc == 0x216664u) {
        ctx->pc = 0x216668u;
        goto label_216668;
    }
    ctx->pc = 0x216660u;
    {
        const bool branch_taken_0x216660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216660) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216668u;
label_216668:
    // 0x216668: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x216668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_21666c:
    // 0x21666c: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x21666cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
label_216670:
    // 0x216670: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x216670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_216674:
    // 0x216674: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x216674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_216678:
    // 0x216678: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x216678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_21667c:
    // 0x21667c: 0x2442fc70  addiu       $v0, $v0, -0x390
    ctx->pc = 0x21667cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966384));
label_216680:
    // 0x216680: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x216680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_216684:
    // 0x216684: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x216684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_216688:
    // 0x216688: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x216688u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_21668c:
    // 0x21668c: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x21668cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_216690:
    // 0x216690: 0x10200350  beqz        $at, . + 4 + (0x350 << 2)
label_216694:
    if (ctx->pc == 0x216694u) {
        ctx->pc = 0x216694u;
            // 0x216694: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x216698u;
        goto label_216698;
    }
    ctx->pc = 0x216690u;
    {
        const bool branch_taken_0x216690 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x216694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216690u;
            // 0x216694: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216690) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216698u;
label_216698:
    // 0x216698: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x216698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21669c:
    // 0x21669c: 0x2463a1d0  addiu       $v1, $v1, -0x5E30
    ctx->pc = 0x21669cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943184));
label_2166a0:
    // 0x2166a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2166a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2166a4:
    // 0x2166a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2166a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2166a8:
    // 0x2166a8: 0x400008  jr          $v0
label_2166ac:
    if (ctx->pc == 0x2166ACu) {
        ctx->pc = 0x2166B0u;
        goto label_2166b0;
    }
    ctx->pc = 0x2166A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2166B0u: goto label_2166b0;
            case 0x2166E0u: goto label_2166e0;
            case 0x2166F4u: goto label_2166f4;
            case 0x216724u: goto label_216724;
            case 0x216754u: goto label_216754;
            case 0x216784u: goto label_216784;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2166B0u;
label_2166b0:
    // 0x2166b0: 0xc08575c  jal         func_215D70
label_2166b4:
    if (ctx->pc == 0x2166B4u) {
        ctx->pc = 0x2166B4u;
            // 0x2166b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2166B8u;
        goto label_2166b8;
    }
    ctx->pc = 0x2166B0u;
    SET_GPR_U32(ctx, 31, 0x2166B8u);
    ctx->pc = 0x2166B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2166B0u;
            // 0x2166b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x215D70u;
    if (runtime->hasFunction(0x215D70u)) {
        auto targetFn = runtime->lookupFunction(0x215D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2166B8u; }
        if (ctx->pc != 0x2166B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSelFish__9CAquariumFv_0x215d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2166B8u; }
        if (ctx->pc != 0x2166B8u) { return; }
    }
    ctx->pc = 0x2166B8u;
label_2166b8:
    // 0x2166b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2166bc:
    if (ctx->pc == 0x2166BCu) {
        ctx->pc = 0x2166BCu;
            // 0x2166bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2166C0u;
        goto label_2166c0;
    }
    ctx->pc = 0x2166B8u;
    {
        const bool branch_taken_0x2166b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2166BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2166B8u;
            // 0x2166bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2166b8) {
            ctx->pc = 0x2166D0u;
            goto label_2166d0;
        }
    }
    ctx->pc = 0x2166C0u;
label_2166c0:
    // 0x2166c0: 0xc094274  jal         func_2509D0
label_2166c4:
    if (ctx->pc == 0x2166C4u) {
        ctx->pc = 0x2166C4u;
            // 0x2166c4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2166C8u;
        goto label_2166c8;
    }
    ctx->pc = 0x2166C0u;
    SET_GPR_U32(ctx, 31, 0x2166C8u);
    ctx->pc = 0x2166C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2166C0u;
            // 0x2166c4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2166C8u; }
        if (ctx->pc != 0x2166C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2166C8u; }
        if (ctx->pc != 0x2166C8u) { return; }
    }
    ctx->pc = 0x2166C8u;
label_2166c8:
    // 0x2166c8: 0x10000342  b           . + 4 + (0x342 << 2)
label_2166cc:
    if (ctx->pc == 0x2166CCu) {
        ctx->pc = 0x2166D0u;
        goto label_2166d0;
    }
    ctx->pc = 0x2166C8u;
    {
        const bool branch_taken_0x2166c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2166c8) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x2166D0u;
label_2166d0:
    // 0x2166d0: 0xc094274  jal         func_2509D0
label_2166d4:
    if (ctx->pc == 0x2166D4u) {
        ctx->pc = 0x2166D4u;
            // 0x2166d4: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2166D8u;
        goto label_2166d8;
    }
    ctx->pc = 0x2166D0u;
    SET_GPR_U32(ctx, 31, 0x2166D8u);
    ctx->pc = 0x2166D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2166D0u;
            // 0x2166d4: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2166D8u; }
        if (ctx->pc != 0x2166D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2166D8u; }
        if (ctx->pc != 0x2166D8u) { return; }
    }
    ctx->pc = 0x2166D8u;
label_2166d8:
    // 0x2166d8: 0x1000033e  b           . + 4 + (0x33E << 2)
label_2166dc:
    if (ctx->pc == 0x2166DCu) {
        ctx->pc = 0x2166E0u;
        goto label_2166e0;
    }
    ctx->pc = 0x2166D8u;
    {
        const bool branch_taken_0x2166d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2166d8) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x2166E0u;
label_2166e0:
    // 0x2166e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2166e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2166e4:
    // 0x2166e4: 0xc094274  jal         func_2509D0
label_2166e8:
    if (ctx->pc == 0x2166E8u) {
        ctx->pc = 0x2166E8u;
            // 0x2166e8: 0x2410000e  addiu       $s0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x2166ECu;
        goto label_2166ec;
    }
    ctx->pc = 0x2166E4u;
    SET_GPR_U32(ctx, 31, 0x2166ECu);
    ctx->pc = 0x2166E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2166E4u;
            // 0x2166e8: 0x2410000e  addiu       $s0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2166ECu; }
        if (ctx->pc != 0x2166ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2166ECu; }
        if (ctx->pc != 0x2166ECu) { return; }
    }
    ctx->pc = 0x2166ECu;
label_2166ec:
    // 0x2166ec: 0x10000339  b           . + 4 + (0x339 << 2)
label_2166f0:
    if (ctx->pc == 0x2166F0u) {
        ctx->pc = 0x2166F4u;
        goto label_2166f4;
    }
    ctx->pc = 0x2166ECu;
    {
        const bool branch_taken_0x2166ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2166ec) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x2166F4u;
label_2166f4:
    // 0x2166f4: 0xc08575c  jal         func_215D70
label_2166f8:
    if (ctx->pc == 0x2166F8u) {
        ctx->pc = 0x2166F8u;
            // 0x2166f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2166FCu;
        goto label_2166fc;
    }
    ctx->pc = 0x2166F4u;
    SET_GPR_U32(ctx, 31, 0x2166FCu);
    ctx->pc = 0x2166F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2166F4u;
            // 0x2166f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x215D70u;
    if (runtime->hasFunction(0x215D70u)) {
        auto targetFn = runtime->lookupFunction(0x215D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2166FCu; }
        if (ctx->pc != 0x2166FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSelFish__9CAquariumFv_0x215d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2166FCu; }
        if (ctx->pc != 0x2166FCu) { return; }
    }
    ctx->pc = 0x2166FCu;
label_2166fc:
    // 0x2166fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_216700:
    if (ctx->pc == 0x216700u) {
        ctx->pc = 0x216700u;
            // 0x216700: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x216704u;
        goto label_216704;
    }
    ctx->pc = 0x2166FCu;
    {
        const bool branch_taken_0x2166fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2166FCu;
            // 0x216700: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2166fc) {
            ctx->pc = 0x216714u;
            goto label_216714;
        }
    }
    ctx->pc = 0x216704u;
label_216704:
    // 0x216704: 0xc094274  jal         func_2509D0
label_216708:
    if (ctx->pc == 0x216708u) {
        ctx->pc = 0x216708u;
            // 0x216708: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x21670Cu;
        goto label_21670c;
    }
    ctx->pc = 0x216704u;
    SET_GPR_U32(ctx, 31, 0x21670Cu);
    ctx->pc = 0x216708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216704u;
            // 0x216708: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21670Cu; }
        if (ctx->pc != 0x21670Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21670Cu; }
        if (ctx->pc != 0x21670Cu) { return; }
    }
    ctx->pc = 0x21670Cu;
label_21670c:
    // 0x21670c: 0x10000331  b           . + 4 + (0x331 << 2)
label_216710:
    if (ctx->pc == 0x216710u) {
        ctx->pc = 0x216714u;
        goto label_216714;
    }
    ctx->pc = 0x21670Cu;
    {
        const bool branch_taken_0x21670c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21670c) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216714u;
label_216714:
    // 0x216714: 0xc094274  jal         func_2509D0
label_216718:
    if (ctx->pc == 0x216718u) {
        ctx->pc = 0x216718u;
            // 0x216718: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x21671Cu;
        goto label_21671c;
    }
    ctx->pc = 0x216714u;
    SET_GPR_U32(ctx, 31, 0x21671Cu);
    ctx->pc = 0x216718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216714u;
            // 0x216718: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21671Cu; }
        if (ctx->pc != 0x21671Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21671Cu; }
        if (ctx->pc != 0x21671Cu) { return; }
    }
    ctx->pc = 0x21671Cu;
label_21671c:
    // 0x21671c: 0x1000032d  b           . + 4 + (0x32D << 2)
label_216720:
    if (ctx->pc == 0x216720u) {
        ctx->pc = 0x216724u;
        goto label_216724;
    }
    ctx->pc = 0x21671Cu;
    {
        const bool branch_taken_0x21671c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21671c) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216724u;
label_216724:
    // 0x216724: 0xc08575c  jal         func_215D70
label_216728:
    if (ctx->pc == 0x216728u) {
        ctx->pc = 0x216728u;
            // 0x216728: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21672Cu;
        goto label_21672c;
    }
    ctx->pc = 0x216724u;
    SET_GPR_U32(ctx, 31, 0x21672Cu);
    ctx->pc = 0x216728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216724u;
            // 0x216728: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x215D70u;
    if (runtime->hasFunction(0x215D70u)) {
        auto targetFn = runtime->lookupFunction(0x215D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21672Cu; }
        if (ctx->pc != 0x21672Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSelFish__9CAquariumFv_0x215d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21672Cu; }
        if (ctx->pc != 0x21672Cu) { return; }
    }
    ctx->pc = 0x21672Cu;
label_21672c:
    // 0x21672c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_216730:
    if (ctx->pc == 0x216730u) {
        ctx->pc = 0x216730u;
            // 0x216730: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x216734u;
        goto label_216734;
    }
    ctx->pc = 0x21672Cu;
    {
        const bool branch_taken_0x21672c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21672Cu;
            // 0x216730: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21672c) {
            ctx->pc = 0x216744u;
            goto label_216744;
        }
    }
    ctx->pc = 0x216734u;
label_216734:
    // 0x216734: 0xc094274  jal         func_2509D0
label_216738:
    if (ctx->pc == 0x216738u) {
        ctx->pc = 0x216738u;
            // 0x216738: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x21673Cu;
        goto label_21673c;
    }
    ctx->pc = 0x216734u;
    SET_GPR_U32(ctx, 31, 0x21673Cu);
    ctx->pc = 0x216738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216734u;
            // 0x216738: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21673Cu; }
        if (ctx->pc != 0x21673Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21673Cu; }
        if (ctx->pc != 0x21673Cu) { return; }
    }
    ctx->pc = 0x21673Cu;
label_21673c:
    // 0x21673c: 0x10000325  b           . + 4 + (0x325 << 2)
label_216740:
    if (ctx->pc == 0x216740u) {
        ctx->pc = 0x216744u;
        goto label_216744;
    }
    ctx->pc = 0x21673Cu;
    {
        const bool branch_taken_0x21673c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21673c) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216744u;
label_216744:
    // 0x216744: 0xc094274  jal         func_2509D0
label_216748:
    if (ctx->pc == 0x216748u) {
        ctx->pc = 0x21674Cu;
        goto label_21674c;
    }
    ctx->pc = 0x216744u;
    SET_GPR_U32(ctx, 31, 0x21674Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21674Cu; }
        if (ctx->pc != 0x21674Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21674Cu; }
        if (ctx->pc != 0x21674Cu) { return; }
    }
    ctx->pc = 0x21674Cu;
label_21674c:
    // 0x21674c: 0x10000321  b           . + 4 + (0x321 << 2)
label_216750:
    if (ctx->pc == 0x216750u) {
        ctx->pc = 0x216750u;
            // 0x216750: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x216754u;
        goto label_216754;
    }
    ctx->pc = 0x21674Cu;
    {
        const bool branch_taken_0x21674c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21674Cu;
            // 0x216750: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21674c) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216754u;
label_216754:
    // 0x216754: 0xc08575c  jal         func_215D70
label_216758:
    if (ctx->pc == 0x216758u) {
        ctx->pc = 0x216758u;
            // 0x216758: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21675Cu;
        goto label_21675c;
    }
    ctx->pc = 0x216754u;
    SET_GPR_U32(ctx, 31, 0x21675Cu);
    ctx->pc = 0x216758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216754u;
            // 0x216758: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x215D70u;
    if (runtime->hasFunction(0x215D70u)) {
        auto targetFn = runtime->lookupFunction(0x215D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21675Cu; }
        if (ctx->pc != 0x21675Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSelFish__9CAquariumFv_0x215d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21675Cu; }
        if (ctx->pc != 0x21675Cu) { return; }
    }
    ctx->pc = 0x21675Cu;
label_21675c:
    // 0x21675c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_216760:
    if (ctx->pc == 0x216760u) {
        ctx->pc = 0x216760u;
            // 0x216760: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x216764u;
        goto label_216764;
    }
    ctx->pc = 0x21675Cu;
    {
        const bool branch_taken_0x21675c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21675Cu;
            // 0x216760: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21675c) {
            ctx->pc = 0x216774u;
            goto label_216774;
        }
    }
    ctx->pc = 0x216764u;
label_216764:
    // 0x216764: 0xc094274  jal         func_2509D0
label_216768:
    if (ctx->pc == 0x216768u) {
        ctx->pc = 0x216768u;
            // 0x216768: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x21676Cu;
        goto label_21676c;
    }
    ctx->pc = 0x216764u;
    SET_GPR_U32(ctx, 31, 0x21676Cu);
    ctx->pc = 0x216768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216764u;
            // 0x216768: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21676Cu; }
        if (ctx->pc != 0x21676Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21676Cu; }
        if (ctx->pc != 0x21676Cu) { return; }
    }
    ctx->pc = 0x21676Cu;
label_21676c:
    // 0x21676c: 0x10000319  b           . + 4 + (0x319 << 2)
label_216770:
    if (ctx->pc == 0x216770u) {
        ctx->pc = 0x216774u;
        goto label_216774;
    }
    ctx->pc = 0x21676Cu;
    {
        const bool branch_taken_0x21676c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21676c) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216774u;
label_216774:
    // 0x216774: 0xc094274  jal         func_2509D0
label_216778:
    if (ctx->pc == 0x216778u) {
        ctx->pc = 0x21677Cu;
        goto label_21677c;
    }
    ctx->pc = 0x216774u;
    SET_GPR_U32(ctx, 31, 0x21677Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21677Cu; }
        if (ctx->pc != 0x21677Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21677Cu; }
        if (ctx->pc != 0x21677Cu) { return; }
    }
    ctx->pc = 0x21677Cu;
label_21677c:
    // 0x21677c: 0x10000315  b           . + 4 + (0x315 << 2)
label_216780:
    if (ctx->pc == 0x216780u) {
        ctx->pc = 0x216780u;
            // 0x216780: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x216784u;
        goto label_216784;
    }
    ctx->pc = 0x21677Cu;
    {
        const bool branch_taken_0x21677c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21677Cu;
            // 0x216780: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21677c) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216784u;
label_216784:
    // 0x216784: 0xc094274  jal         func_2509D0
label_216788:
    if (ctx->pc == 0x216788u) {
        ctx->pc = 0x216788u;
            // 0x216788: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x21678Cu;
        goto label_21678c;
    }
    ctx->pc = 0x216784u;
    SET_GPR_U32(ctx, 31, 0x21678Cu);
    ctx->pc = 0x216788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216784u;
            // 0x216788: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21678Cu; }
        if (ctx->pc != 0x21678Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21678Cu; }
        if (ctx->pc != 0x21678Cu) { return; }
    }
    ctx->pc = 0x21678Cu;
label_21678c:
    // 0x21678c: 0x10000311  b           . + 4 + (0x311 << 2)
label_216790:
    if (ctx->pc == 0x216790u) {
        ctx->pc = 0x216790u;
            // 0x216790: 0x2410000b  addiu       $s0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x216794u;
        goto label_216794;
    }
    ctx->pc = 0x21678Cu;
    {
        const bool branch_taken_0x21678c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21678Cu;
            // 0x216790: 0x2410000b  addiu       $s0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21678c) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216794u;
label_216794:
    // 0x216794: 0x8f829520  lw          $v0, -0x6AE0($gp)
    ctx->pc = 0x216794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
label_216798:
    // 0x216798: 0x104000e1  beqz        $v0, . + 4 + (0xE1 << 2)
label_21679c:
    if (ctx->pc == 0x21679Cu) {
        ctx->pc = 0x21679Cu;
            // 0x21679c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2167A0u;
        goto label_2167a0;
    }
    ctx->pc = 0x216798u;
    {
        const bool branch_taken_0x216798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21679Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216798u;
            // 0x21679c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216798) {
            ctx->pc = 0x216B20u;
            goto label_216b20;
        }
    }
    ctx->pc = 0x2167A0u;
label_2167a0:
    // 0x2167a0: 0x868202d8  lh          $v0, 0x2D8($s4)
    ctx->pc = 0x2167a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 728)));
label_2167a4:
    // 0x2167a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2167a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2167a8:
    // 0x2167a8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2167a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2167ac:
    // 0x2167ac: 0x8c4202b4  lw          $v0, 0x2B4($v0)
    ctx->pc = 0x2167acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_2167b0:
    // 0x2167b0: 0x10400308  beqz        $v0, . + 4 + (0x308 << 2)
label_2167b4:
    if (ctx->pc == 0x2167B4u) {
        ctx->pc = 0x2167B8u;
        goto label_2167b8;
    }
    ctx->pc = 0x2167B0u;
    {
        const bool branch_taken_0x2167b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2167b0) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x2167B8u;
label_2167b8:
    // 0x2167b8: 0x8c420938  lw          $v0, 0x938($v0)
    ctx->pc = 0x2167b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2360)));
label_2167bc:
    // 0x2167bc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2167c0:
    if (ctx->pc == 0x2167C0u) {
        ctx->pc = 0x2167C0u;
            // 0x2167c0: 0x24530010  addiu       $s3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x2167C4u;
        goto label_2167c4;
    }
    ctx->pc = 0x2167BCu;
    {
        const bool branch_taken_0x2167bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2167C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2167BCu;
            // 0x2167c0: 0x24530010  addiu       $s3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2167bc) {
            ctx->pc = 0x2167C8u;
            goto label_2167c8;
        }
    }
    ctx->pc = 0x2167C4u;
label_2167c4:
    // 0x2167c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2167c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2167c8:
    // 0x2167c8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2167c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2167cc:
    // 0x2167cc: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x2167ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_2167d0:
    // 0x2167d0: 0xc052d0c  jal         func_14B430
label_2167d4:
    if (ctx->pc == 0x2167D4u) {
        ctx->pc = 0x2167D4u;
            // 0x2167d4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x2167D8u;
        goto label_2167d8;
    }
    ctx->pc = 0x2167D0u;
    SET_GPR_U32(ctx, 31, 0x2167D8u);
    ctx->pc = 0x2167D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2167D0u;
            // 0x2167d4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2167D8u; }
        if (ctx->pc != 0x2167D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2167D8u; }
        if (ctx->pc != 0x2167D8u) { return; }
    }
    ctx->pc = 0x2167D8u;
label_2167d8:
    // 0x2167d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2167dc:
    if (ctx->pc == 0x2167DCu) {
        ctx->pc = 0x2167DCu;
            // 0x2167dc: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x2167E0u;
        goto label_2167e0;
    }
    ctx->pc = 0x2167D8u;
    {
        const bool branch_taken_0x2167d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2167DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2167D8u;
            // 0x2167dc: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2167d8) {
            ctx->pc = 0x2167ECu;
            goto label_2167ec;
        }
    }
    ctx->pc = 0x2167E0u;
label_2167e0:
    // 0x2167e0: 0x878291d8  lh          $v0, -0x6E28($gp)
    ctx->pc = 0x2167e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939096)));
label_2167e4:
    // 0x2167e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2167e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2167e8:
    // 0x2167e8: 0xa78291d8  sh          $v0, -0x6E28($gp)
    ctx->pc = 0x2167e8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939096), (uint16_t)GPR_U32(ctx, 2));
label_2167ec:
    // 0x2167ec: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x2167ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_2167f0:
    // 0x2167f0: 0xc052d0c  jal         func_14B430
label_2167f4:
    if (ctx->pc == 0x2167F4u) {
        ctx->pc = 0x2167F4u;
            // 0x2167f4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x2167F8u;
        goto label_2167f8;
    }
    ctx->pc = 0x2167F0u;
    SET_GPR_U32(ctx, 31, 0x2167F8u);
    ctx->pc = 0x2167F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2167F0u;
            // 0x2167f4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2167F8u; }
        if (ctx->pc != 0x2167F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2167F8u; }
        if (ctx->pc != 0x2167F8u) { return; }
    }
    ctx->pc = 0x2167F8u;
label_2167f8:
    // 0x2167f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2167fc:
    if (ctx->pc == 0x2167FCu) {
        ctx->pc = 0x2167FCu;
            // 0x2167fc: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x216800u;
        goto label_216800;
    }
    ctx->pc = 0x2167F8u;
    {
        const bool branch_taken_0x2167f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2167FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2167F8u;
            // 0x2167fc: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2167f8) {
            ctx->pc = 0x21680Cu;
            goto label_21680c;
        }
    }
    ctx->pc = 0x216800u;
label_216800:
    // 0x216800: 0x878291d8  lh          $v0, -0x6E28($gp)
    ctx->pc = 0x216800u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939096)));
label_216804:
    // 0x216804: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x216804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_216808:
    // 0x216808: 0xa78291d8  sh          $v0, -0x6E28($gp)
    ctx->pc = 0x216808u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939096), (uint16_t)GPR_U32(ctx, 2));
label_21680c:
    // 0x21680c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x21680cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_216810:
    // 0x216810: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x216810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_216814:
    // 0x216814: 0xc052cf0  jal         func_14B3C0
label_216818:
    if (ctx->pc == 0x216818u) {
        ctx->pc = 0x216818u;
            // 0x216818: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21681Cu;
        goto label_21681c;
    }
    ctx->pc = 0x216814u;
    SET_GPR_U32(ctx, 31, 0x21681Cu);
    ctx->pc = 0x216818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216814u;
            // 0x216818: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21681Cu; }
        if (ctx->pc != 0x21681Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21681Cu; }
        if (ctx->pc != 0x21681Cu) { return; }
    }
    ctx->pc = 0x21681Cu;
label_21681c:
    // 0x21681c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_216820:
    if (ctx->pc == 0x216820u) {
        ctx->pc = 0x216820u;
            // 0x216820: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x216824u;
        goto label_216824;
    }
    ctx->pc = 0x21681Cu;
    {
        const bool branch_taken_0x21681c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21681Cu;
            // 0x216820: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21681c) {
            ctx->pc = 0x216828u;
            goto label_216828;
        }
    }
    ctx->pc = 0x216824u;
label_216824:
    // 0x216824: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x216824u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_216828:
    // 0x216828: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x216828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_21682c:
    // 0x21682c: 0xc052cf0  jal         func_14B3C0
label_216830:
    if (ctx->pc == 0x216830u) {
        ctx->pc = 0x216830u;
            // 0x216830: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x216834u;
        goto label_216834;
    }
    ctx->pc = 0x21682Cu;
    SET_GPR_U32(ctx, 31, 0x216834u);
    ctx->pc = 0x216830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21682Cu;
            // 0x216830: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216834u; }
        if (ctx->pc != 0x216834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216834u; }
        if (ctx->pc != 0x216834u) { return; }
    }
    ctx->pc = 0x216834u;
label_216834:
    // 0x216834: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_216838:
    if (ctx->pc == 0x216838u) {
        ctx->pc = 0x216838u;
            // 0x216838: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x21683Cu;
        goto label_21683c;
    }
    ctx->pc = 0x216834u;
    {
        const bool branch_taken_0x216834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216834u;
            // 0x216838: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216834) {
            ctx->pc = 0x216840u;
            goto label_216840;
        }
    }
    ctx->pc = 0x21683Cu;
label_21683c:
    // 0x21683c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x21683cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216840:
    // 0x216840: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x216840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_216844:
    // 0x216844: 0xc052cf0  jal         func_14B3C0
label_216848:
    if (ctx->pc == 0x216848u) {
        ctx->pc = 0x216848u;
            // 0x216848: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x21684Cu;
        goto label_21684c;
    }
    ctx->pc = 0x216844u;
    SET_GPR_U32(ctx, 31, 0x21684Cu);
    ctx->pc = 0x216848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216844u;
            // 0x216848: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21684Cu; }
        if (ctx->pc != 0x21684Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21684Cu; }
        if (ctx->pc != 0x21684Cu) { return; }
    }
    ctx->pc = 0x21684Cu;
label_21684c:
    // 0x21684c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_216850:
    if (ctx->pc == 0x216850u) {
        ctx->pc = 0x216850u;
            // 0x216850: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x216854u;
        goto label_216854;
    }
    ctx->pc = 0x21684Cu;
    {
        const bool branch_taken_0x21684c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21684Cu;
            // 0x216850: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21684c) {
            ctx->pc = 0x216858u;
            goto label_216858;
        }
    }
    ctx->pc = 0x216854u;
label_216854:
    // 0x216854: 0x2412fff9  addiu       $s2, $zero, -0x7
    ctx->pc = 0x216854u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
label_216858:
    // 0x216858: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x216858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21685c:
    // 0x21685c: 0xc052cf0  jal         func_14B3C0
label_216860:
    if (ctx->pc == 0x216860u) {
        ctx->pc = 0x216860u;
            // 0x216860: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x216864u;
        goto label_216864;
    }
    ctx->pc = 0x21685Cu;
    SET_GPR_U32(ctx, 31, 0x216864u);
    ctx->pc = 0x216860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21685Cu;
            // 0x216860: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216864u; }
        if (ctx->pc != 0x216864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216864u; }
        if (ctx->pc != 0x216864u) { return; }
    }
    ctx->pc = 0x216864u;
label_216864:
    // 0x216864: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_216868:
    if (ctx->pc == 0x216868u) {
        ctx->pc = 0x21686Cu;
        goto label_21686c;
    }
    ctx->pc = 0x216864u;
    {
        const bool branch_taken_0x216864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216864) {
            ctx->pc = 0x216870u;
            goto label_216870;
        }
    }
    ctx->pc = 0x21686Cu;
label_21686c:
    // 0x21686c: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x21686cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_216870:
    // 0x216870: 0x878291d8  lh          $v0, -0x6E28($gp)
    ctx->pc = 0x216870u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939096)));
label_216874:
    // 0x216874: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_216878:
    if (ctx->pc == 0x216878u) {
        ctx->pc = 0x216878u;
            // 0x216878: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x21687Cu;
        goto label_21687c;
    }
    ctx->pc = 0x216874u;
    {
        const bool branch_taken_0x216874 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x216878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216874u;
            // 0x216878: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216874) {
            ctx->pc = 0x216880u;
            goto label_216880;
        }
    }
    ctx->pc = 0x21687Cu;
label_21687c:
    // 0x21687c: 0xa78291d8  sh          $v0, -0x6E28($gp)
    ctx->pc = 0x21687cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939096), (uint16_t)GPR_U32(ctx, 2));
label_216880:
    // 0x216880: 0x878291d8  lh          $v0, -0x6E28($gp)
    ctx->pc = 0x216880u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939096)));
label_216884:
    // 0x216884: 0x2841000c  slti        $at, $v0, 0xC
    ctx->pc = 0x216884u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
label_216888:
    // 0x216888: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_21688c:
    if (ctx->pc == 0x21688Cu) {
        ctx->pc = 0x216890u;
        goto label_216890;
    }
    ctx->pc = 0x216888u;
    {
        const bool branch_taken_0x216888 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x216888) {
            ctx->pc = 0x216894u;
            goto label_216894;
        }
    }
    ctx->pc = 0x216890u;
label_216890:
    // 0x216890: 0xa78091d8  sh          $zero, -0x6E28($gp)
    ctx->pc = 0x216890u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939096), (uint16_t)GPR_U32(ctx, 0));
label_216894:
    // 0x216894: 0x878291d8  lh          $v0, -0x6E28($gp)
    ctx->pc = 0x216894u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939096)));
label_216898:
    // 0x216898: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_21689c:
    if (ctx->pc == 0x21689Cu) {
        ctx->pc = 0x2168A0u;
        goto label_2168a0;
    }
    ctx->pc = 0x216898u;
    {
        const bool branch_taken_0x216898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216898) {
            ctx->pc = 0x2168D8u;
            goto label_2168d8;
        }
    }
    ctx->pc = 0x2168A0u;
label_2168a0:
    // 0x2168a0: 0x9663002e  lhu         $v1, 0x2E($s3)
    ctx->pc = 0x2168a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 46)));
label_2168a4:
    // 0x2168a4: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x2168a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2168a8:
    // 0x2168a8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_2168ac:
    if (ctx->pc == 0x2168ACu) {
        ctx->pc = 0x2168ACu;
            // 0x2168ac: 0x3401ffff  ori         $at, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x2168B0u;
        goto label_2168b0;
    }
    ctx->pc = 0x2168A8u;
    {
        const bool branch_taken_0x2168a8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2168ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2168A8u;
            // 0x2168ac: 0x3401ffff  ori         $at, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2168a8) {
            ctx->pc = 0x2168B8u;
            goto label_2168b8;
        }
    }
    ctx->pc = 0x2168B0u;
label_2168b0:
    // 0x2168b0: 0x10000009  b           . + 4 + (0x9 << 2)
label_2168b4:
    if (ctx->pc == 0x2168B4u) {
        ctx->pc = 0x2168B4u;
            // 0x2168b4: 0xa660002e  sh          $zero, 0x2E($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 46), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2168B8u;
        goto label_2168b8;
    }
    ctx->pc = 0x2168B0u;
    {
        const bool branch_taken_0x2168b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2168B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2168B0u;
            // 0x2168b4: 0xa660002e  sh          $zero, 0x2E($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 46), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2168b0) {
            ctx->pc = 0x2168D8u;
            goto label_2168d8;
        }
    }
    ctx->pc = 0x2168B8u;
label_2168b8:
    // 0x2168b8: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x2168b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_2168bc:
    // 0x2168bc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_2168c0:
    if (ctx->pc == 0x2168C0u) {
        ctx->pc = 0x2168C0u;
            // 0x2168c0: 0x3242ffff  andi        $v0, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x2168C4u;
        goto label_2168c4;
    }
    ctx->pc = 0x2168BCu;
    {
        const bool branch_taken_0x2168bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2168C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2168BCu;
            // 0x2168c0: 0x3242ffff  andi        $v0, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2168bc) {
            ctx->pc = 0x2168D0u;
            goto label_2168d0;
        }
    }
    ctx->pc = 0x2168C4u;
label_2168c4:
    // 0x2168c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2168c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2168c8:
    // 0x2168c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2168cc:
    if (ctx->pc == 0x2168CCu) {
        ctx->pc = 0x2168CCu;
            // 0x2168cc: 0xa662002e  sh          $v0, 0x2E($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 46), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2168D0u;
        goto label_2168d0;
    }
    ctx->pc = 0x2168C8u;
    {
        const bool branch_taken_0x2168c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2168CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2168C8u;
            // 0x2168cc: 0xa662002e  sh          $v0, 0x2E($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 46), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2168c8) {
            ctx->pc = 0x2168D8u;
            goto label_2168d8;
        }
    }
    ctx->pc = 0x2168D0u;
label_2168d0:
    // 0x2168d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2168d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2168d4:
    // 0x2168d4: 0xa662002e  sh          $v0, 0x2E($s3)
    ctx->pc = 0x2168d4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 46), (uint16_t)GPR_U32(ctx, 2));
label_2168d8:
    // 0x2168d8: 0x878391d8  lh          $v1, -0x6E28($gp)
    ctx->pc = 0x2168d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939096)));
label_2168dc:
    // 0x2168dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2168dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2168e0:
    // 0x2168e0: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_2168e4:
    if (ctx->pc == 0x2168E4u) {
        ctx->pc = 0x2168E8u;
        goto label_2168e8;
    }
    ctx->pc = 0x2168E0u;
    {
        const bool branch_taken_0x2168e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2168e0) {
            ctx->pc = 0x216920u;
            goto label_216920;
        }
    }
    ctx->pc = 0x2168E8u;
label_2168e8:
    // 0x2168e8: 0x9663002c  lhu         $v1, 0x2C($s3)
    ctx->pc = 0x2168e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 44)));
label_2168ec:
    // 0x2168ec: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x2168ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2168f0:
    // 0x2168f0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_2168f4:
    if (ctx->pc == 0x2168F4u) {
        ctx->pc = 0x2168F4u;
            // 0x2168f4: 0x3401ffff  ori         $at, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x2168F8u;
        goto label_2168f8;
    }
    ctx->pc = 0x2168F0u;
    {
        const bool branch_taken_0x2168f0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2168F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2168F0u;
            // 0x2168f4: 0x3401ffff  ori         $at, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2168f0) {
            ctx->pc = 0x216900u;
            goto label_216900;
        }
    }
    ctx->pc = 0x2168F8u;
label_2168f8:
    // 0x2168f8: 0x10000009  b           . + 4 + (0x9 << 2)
label_2168fc:
    if (ctx->pc == 0x2168FCu) {
        ctx->pc = 0x2168FCu;
            // 0x2168fc: 0xa660002c  sh          $zero, 0x2C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 44), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x216900u;
        goto label_216900;
    }
    ctx->pc = 0x2168F8u;
    {
        const bool branch_taken_0x2168f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2168FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2168F8u;
            // 0x2168fc: 0xa660002c  sh          $zero, 0x2C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 44), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2168f8) {
            ctx->pc = 0x216920u;
            goto label_216920;
        }
    }
    ctx->pc = 0x216900u;
label_216900:
    // 0x216900: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x216900u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_216904:
    // 0x216904: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_216908:
    if (ctx->pc == 0x216908u) {
        ctx->pc = 0x216908u;
            // 0x216908: 0x3242ffff  andi        $v0, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x21690Cu;
        goto label_21690c;
    }
    ctx->pc = 0x216904u;
    {
        const bool branch_taken_0x216904 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x216908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216904u;
            // 0x216908: 0x3242ffff  andi        $v0, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216904) {
            ctx->pc = 0x216918u;
            goto label_216918;
        }
    }
    ctx->pc = 0x21690Cu;
label_21690c:
    // 0x21690c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21690cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_216910:
    // 0x216910: 0x10000003  b           . + 4 + (0x3 << 2)
label_216914:
    if (ctx->pc == 0x216914u) {
        ctx->pc = 0x216914u;
            // 0x216914: 0xa662002c  sh          $v0, 0x2C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 44), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x216918u;
        goto label_216918;
    }
    ctx->pc = 0x216910u;
    {
        const bool branch_taken_0x216910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216910u;
            // 0x216914: 0xa662002c  sh          $v0, 0x2C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 44), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216910) {
            ctx->pc = 0x216920u;
            goto label_216920;
        }
    }
    ctx->pc = 0x216918u;
label_216918:
    // 0x216918: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x216918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21691c:
    // 0x21691c: 0xa662002c  sh          $v0, 0x2C($s3)
    ctx->pc = 0x21691cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 44), (uint16_t)GPR_U32(ctx, 2));
label_216920:
    // 0x216920: 0x878391d8  lh          $v1, -0x6E28($gp)
    ctx->pc = 0x216920u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939096)));
label_216924:
    // 0x216924: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x216924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_216928:
    // 0x216928: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_21692c:
    if (ctx->pc == 0x21692Cu) {
        ctx->pc = 0x21692Cu;
            // 0x21692c: 0x28610005  slti        $at, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->pc = 0x216930u;
        goto label_216930;
    }
    ctx->pc = 0x216928u;
    {
        const bool branch_taken_0x216928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21692Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216928u;
            // 0x21692c: 0x28610005  slti        $at, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216928) {
            ctx->pc = 0x216978u;
            goto label_216978;
        }
    }
    ctx->pc = 0x216930u;
label_216930:
    // 0x216930: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_216934:
    if (ctx->pc == 0x216934u) {
        ctx->pc = 0x216934u;
            // 0x216934: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x216938u;
        goto label_216938;
    }
    ctx->pc = 0x216930u;
    {
        const bool branch_taken_0x216930 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x216934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216930u;
            // 0x216934: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216930) {
            ctx->pc = 0x216978u;
            goto label_216978;
        }
    }
    ctx->pc = 0x216938u;
label_216938:
    // 0x216938: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x216938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_21693c:
    // 0x21693c: 0x94430022  lhu         $v1, 0x22($v0)
    ctx->pc = 0x21693cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 34)));
label_216940:
    // 0x216940: 0x24440022  addiu       $a0, $v0, 0x22
    ctx->pc = 0x216940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 34));
label_216944:
    // 0x216944: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x216944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_216948:
    // 0x216948: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_21694c:
    if (ctx->pc == 0x21694Cu) {
        ctx->pc = 0x21694Cu;
            // 0x21694c: 0x3401ffff  ori         $at, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x216950u;
        goto label_216950;
    }
    ctx->pc = 0x216948u;
    {
        const bool branch_taken_0x216948 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x21694Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216948u;
            // 0x21694c: 0x3401ffff  ori         $at, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216948) {
            ctx->pc = 0x216958u;
            goto label_216958;
        }
    }
    ctx->pc = 0x216950u;
label_216950:
    // 0x216950: 0x10000009  b           . + 4 + (0x9 << 2)
label_216954:
    if (ctx->pc == 0x216954u) {
        ctx->pc = 0x216954u;
            // 0x216954: 0xa4800000  sh          $zero, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x216958u;
        goto label_216958;
    }
    ctx->pc = 0x216950u;
    {
        const bool branch_taken_0x216950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216950u;
            // 0x216954: 0xa4800000  sh          $zero, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216950) {
            ctx->pc = 0x216978u;
            goto label_216978;
        }
    }
    ctx->pc = 0x216958u;
label_216958:
    // 0x216958: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x216958u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_21695c:
    // 0x21695c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_216960:
    if (ctx->pc == 0x216960u) {
        ctx->pc = 0x216960u;
            // 0x216960: 0x3242ffff  andi        $v0, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x216964u;
        goto label_216964;
    }
    ctx->pc = 0x21695Cu;
    {
        const bool branch_taken_0x21695c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x216960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21695Cu;
            // 0x216960: 0x3242ffff  andi        $v0, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21695c) {
            ctx->pc = 0x216970u;
            goto label_216970;
        }
    }
    ctx->pc = 0x216964u;
label_216964:
    // 0x216964: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x216964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_216968:
    // 0x216968: 0x10000003  b           . + 4 + (0x3 << 2)
label_21696c:
    if (ctx->pc == 0x21696Cu) {
        ctx->pc = 0x21696Cu;
            // 0x21696c: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x216970u;
        goto label_216970;
    }
    ctx->pc = 0x216968u;
    {
        const bool branch_taken_0x216968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21696Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216968u;
            // 0x21696c: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216968) {
            ctx->pc = 0x216978u;
            goto label_216978;
        }
    }
    ctx->pc = 0x216970u;
label_216970:
    // 0x216970: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x216970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_216974:
    // 0x216974: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x216974u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_216978:
    // 0x216978: 0x878391d8  lh          $v1, -0x6E28($gp)
    ctx->pc = 0x216978u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939096)));
label_21697c:
    // 0x21697c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x21697cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_216980:
    // 0x216980: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_216984:
    if (ctx->pc == 0x216984u) {
        ctx->pc = 0x216988u;
        goto label_216988;
    }
    ctx->pc = 0x216980u;
    {
        const bool branch_taken_0x216980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x216980) {
            ctx->pc = 0x2169B0u;
            goto label_2169b0;
        }
    }
    ctx->pc = 0x216988u;
label_216988:
    // 0x216988: 0x9262003a  lbu         $v0, 0x3A($s3)
    ctx->pc = 0x216988u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 58)));
label_21698c:
    // 0x21698c: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x21698cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_216990:
    // 0x216990: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_216994:
    if (ctx->pc == 0x216994u) {
        ctx->pc = 0x216994u;
            // 0x216994: 0x28620013  slti        $v0, $v1, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)19) ? 1 : 0);
        ctx->pc = 0x216998u;
        goto label_216998;
    }
    ctx->pc = 0x216990u;
    {
        const bool branch_taken_0x216990 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x216994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216990u;
            // 0x216994: 0x28620013  slti        $v0, $v1, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216990) {
            ctx->pc = 0x2169A0u;
            goto label_2169a0;
        }
    }
    ctx->pc = 0x216998u;
label_216998:
    // 0x216998: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x216998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_21699c:
    // 0x21699c: 0x28620013  slti        $v0, $v1, 0x13
    ctx->pc = 0x21699cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)19) ? 1 : 0);
label_2169a0:
    // 0x2169a0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2169a4:
    if (ctx->pc == 0x2169A4u) {
        ctx->pc = 0x2169A8u;
        goto label_2169a8;
    }
    ctx->pc = 0x2169A0u;
    {
        const bool branch_taken_0x2169a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2169a0) {
            ctx->pc = 0x2169ACu;
            goto label_2169ac;
        }
    }
    ctx->pc = 0x2169A8u;
label_2169a8:
    // 0x2169a8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2169a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2169ac:
    // 0x2169ac: 0xa263003a  sb          $v1, 0x3A($s3)
    ctx->pc = 0x2169acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 58), (uint8_t)GPR_U32(ctx, 3));
label_2169b0:
    // 0x2169b0: 0x878391d8  lh          $v1, -0x6E28($gp)
    ctx->pc = 0x2169b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939096)));
label_2169b4:
    // 0x2169b4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2169b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2169b8:
    // 0x2169b8: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_2169bc:
    if (ctx->pc == 0x2169BCu) {
        ctx->pc = 0x2169C0u;
        goto label_2169c0;
    }
    ctx->pc = 0x2169B8u;
    {
        const bool branch_taken_0x2169b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2169b8) {
            ctx->pc = 0x216A04u;
            goto label_216a04;
        }
    }
    ctx->pc = 0x2169C0u;
label_2169c0:
    // 0x2169c0: 0x96620018  lhu         $v0, 0x18($s3)
    ctx->pc = 0x2169c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
label_2169c4:
    // 0x2169c4: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x2169c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2169c8:
    // 0x2169c8: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x2169c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_2169cc:
    // 0x2169cc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2169d0:
    if (ctx->pc == 0x2169D0u) {
        ctx->pc = 0x2169D0u;
            // 0x2169d0: 0x286207d0  slti        $v0, $v1, 0x7D0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2000) ? 1 : 0);
        ctx->pc = 0x2169D4u;
        goto label_2169d4;
    }
    ctx->pc = 0x2169CCu;
    {
        const bool branch_taken_0x2169cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2169D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2169CCu;
            // 0x2169d0: 0x286207d0  slti        $v0, $v1, 0x7D0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2169cc) {
            ctx->pc = 0x2169DCu;
            goto label_2169dc;
        }
    }
    ctx->pc = 0x2169D4u;
label_2169d4:
    // 0x2169d4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2169d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2169d8:
    // 0x2169d8: 0x286207d0  slti        $v0, $v1, 0x7D0
    ctx->pc = 0x2169d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2000) ? 1 : 0);
label_2169dc:
    // 0x2169dc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2169e0:
    if (ctx->pc == 0x2169E0u) {
        ctx->pc = 0x2169E4u;
        goto label_2169e4;
    }
    ctx->pc = 0x2169DCu;
    {
        const bool branch_taken_0x2169dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2169dc) {
            ctx->pc = 0x2169E8u;
            goto label_2169e8;
        }
    }
    ctx->pc = 0x2169E4u;
label_2169e4:
    // 0x2169e4: 0x240307d0  addiu       $v1, $zero, 0x7D0
    ctx->pc = 0x2169e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_2169e8:
    // 0x2169e8: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_2169ec:
    if (ctx->pc == 0x2169ECu) {
        ctx->pc = 0x2169ECu;
            // 0x2169ec: 0xa6630018  sh          $v1, 0x18($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 24), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2169F0u;
        goto label_2169f0;
    }
    ctx->pc = 0x2169E8u;
    {
        const bool branch_taken_0x2169e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2169ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2169E8u;
            // 0x2169ec: 0xa6630018  sh          $v1, 0x18($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 24), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2169e8) {
            ctx->pc = 0x216A04u;
            goto label_216a04;
        }
    }
    ctx->pc = 0x2169F0u;
label_2169f0:
    // 0x2169f0: 0x868202d8  lh          $v0, 0x2D8($s4)
    ctx->pc = 0x2169f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 728)));
label_2169f4:
    // 0x2169f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2169f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2169f8:
    // 0x2169f8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2169f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2169fc:
    // 0x2169fc: 0xc083560  jal         func_20D580
label_216a00:
    if (ctx->pc == 0x216A00u) {
        ctx->pc = 0x216A00u;
            // 0x216a00: 0x8c4402b4  lw          $a0, 0x2B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
        ctx->pc = 0x216A04u;
        goto label_216a04;
    }
    ctx->pc = 0x2169FCu;
    SET_GPR_U32(ctx, 31, 0x216A04u);
    ctx->pc = 0x216A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2169FCu;
            // 0x216a00: 0x8c4402b4  lw          $a0, 0x2B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D580u;
    if (runtime->hasFunction(0x20D580u)) {
        auto targetFn = runtime->lookupFunction(0x20D580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216A04u; }
        if (ctx->pc != 0x216A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAdjustScale__9CAquaFishFv_0x20d580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216A04u; }
        if (ctx->pc != 0x216A04u) { return; }
    }
    ctx->pc = 0x216A04u;
label_216a04:
    // 0x216a04: 0x878391d8  lh          $v1, -0x6E28($gp)
    ctx->pc = 0x216a04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939096)));
label_216a08:
    // 0x216a08: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x216a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_216a0c:
    // 0x216a0c: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_216a10:
    if (ctx->pc == 0x216A10u) {
        ctx->pc = 0x216A14u;
        goto label_216a14;
    }
    ctx->pc = 0x216A0Cu;
    {
        const bool branch_taken_0x216a0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x216a0c) {
            ctx->pc = 0x216A3Cu;
            goto label_216a3c;
        }
    }
    ctx->pc = 0x216A14u;
label_216a14:
    // 0x216a14: 0x9662001a  lhu         $v0, 0x1A($s3)
    ctx->pc = 0x216a14u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
label_216a18:
    // 0x216a18: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x216a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_216a1c:
    // 0x216a1c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_216a20:
    if (ctx->pc == 0x216A20u) {
        ctx->pc = 0x216A20u;
            // 0x216a20: 0x3403c350  ori         $v1, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->pc = 0x216A24u;
        goto label_216a24;
    }
    ctx->pc = 0x216A1Cu;
    {
        const bool branch_taken_0x216a1c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x216A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216A1Cu;
            // 0x216a20: 0x3403c350  ori         $v1, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216a1c) {
            ctx->pc = 0x216A28u;
            goto label_216a28;
        }
    }
    ctx->pc = 0x216A24u;
label_216a24:
    // 0x216a24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x216a24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216a28:
    // 0x216a28: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x216a28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_216a2c:
    // 0x216a2c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_216a30:
    if (ctx->pc == 0x216A30u) {
        ctx->pc = 0x216A34u;
        goto label_216a34;
    }
    ctx->pc = 0x216A2Cu;
    {
        const bool branch_taken_0x216a2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x216a2c) {
            ctx->pc = 0x216A38u;
            goto label_216a38;
        }
    }
    ctx->pc = 0x216A34u;
label_216a34:
    // 0x216a34: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x216a34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_216a38:
    // 0x216a38: 0xa662001a  sh          $v0, 0x1A($s3)
    ctx->pc = 0x216a38u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 26), (uint16_t)GPR_U32(ctx, 2));
label_216a3c:
    // 0x216a3c: 0x878391d8  lh          $v1, -0x6E28($gp)
    ctx->pc = 0x216a3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939096)));
label_216a40:
    // 0x216a40: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x216a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_216a44:
    // 0x216a44: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_216a48:
    if (ctx->pc == 0x216A48u) {
        ctx->pc = 0x216A4Cu;
        goto label_216a4c;
    }
    ctx->pc = 0x216A44u;
    {
        const bool branch_taken_0x216a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x216a44) {
            ctx->pc = 0x216A74u;
            goto label_216a74;
        }
    }
    ctx->pc = 0x216A4Cu;
label_216a4c:
    // 0x216a4c: 0x96620030  lhu         $v0, 0x30($s3)
    ctx->pc = 0x216a4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_216a50:
    // 0x216a50: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x216a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_216a54:
    // 0x216a54: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_216a58:
    if (ctx->pc == 0x216A58u) {
        ctx->pc = 0x216A58u;
            // 0x216a58: 0x3403c350  ori         $v1, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->pc = 0x216A5Cu;
        goto label_216a5c;
    }
    ctx->pc = 0x216A54u;
    {
        const bool branch_taken_0x216a54 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x216A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216A54u;
            // 0x216a58: 0x3403c350  ori         $v1, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216a54) {
            ctx->pc = 0x216A60u;
            goto label_216a60;
        }
    }
    ctx->pc = 0x216A5Cu;
label_216a5c:
    // 0x216a5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x216a5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216a60:
    // 0x216a60: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x216a60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_216a64:
    // 0x216a64: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_216a68:
    if (ctx->pc == 0x216A68u) {
        ctx->pc = 0x216A6Cu;
        goto label_216a6c;
    }
    ctx->pc = 0x216A64u;
    {
        const bool branch_taken_0x216a64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x216a64) {
            ctx->pc = 0x216A70u;
            goto label_216a70;
        }
    }
    ctx->pc = 0x216A6Cu;
label_216a6c:
    // 0x216a6c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x216a6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_216a70:
    // 0x216a70: 0xa6620030  sh          $v0, 0x30($s3)
    ctx->pc = 0x216a70u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 48), (uint16_t)GPR_U32(ctx, 2));
label_216a74:
    // 0x216a74: 0x878391d8  lh          $v1, -0x6E28($gp)
    ctx->pc = 0x216a74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939096)));
label_216a78:
    // 0x216a78: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x216a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_216a7c:
    // 0x216a7c: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_216a80:
    if (ctx->pc == 0x216A80u) {
        ctx->pc = 0x216A84u;
        goto label_216a84;
    }
    ctx->pc = 0x216A7Cu;
    {
        const bool branch_taken_0x216a7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x216a7c) {
            ctx->pc = 0x216AACu;
            goto label_216aac;
        }
    }
    ctx->pc = 0x216A84u;
label_216a84:
    // 0x216a84: 0x96620036  lhu         $v0, 0x36($s3)
    ctx->pc = 0x216a84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 54)));
label_216a88:
    // 0x216a88: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x216a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_216a8c:
    // 0x216a8c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
label_216a90:
    if (ctx->pc == 0x216A90u) {
        ctx->pc = 0x216A90u;
            // 0x216a90: 0x3403c350  ori         $v1, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->pc = 0x216A94u;
        goto label_216a94;
    }
    ctx->pc = 0x216A8Cu;
    {
        const bool branch_taken_0x216a8c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x216A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216A8Cu;
            // 0x216a90: 0x3403c350  ori         $v1, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216a8c) {
            ctx->pc = 0x216A98u;
            goto label_216a98;
        }
    }
    ctx->pc = 0x216A94u;
label_216a94:
    // 0x216a94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x216a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216a98:
    // 0x216a98: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x216a98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_216a9c:
    // 0x216a9c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_216aa0:
    if (ctx->pc == 0x216AA0u) {
        ctx->pc = 0x216AA4u;
        goto label_216aa4;
    }
    ctx->pc = 0x216A9Cu;
    {
        const bool branch_taken_0x216a9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x216a9c) {
            ctx->pc = 0x216AA8u;
            goto label_216aa8;
        }
    }
    ctx->pc = 0x216AA4u;
label_216aa4:
    // 0x216aa4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x216aa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_216aa8:
    // 0x216aa8: 0xa6620036  sh          $v0, 0x36($s3)
    ctx->pc = 0x216aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 54), (uint16_t)GPR_U32(ctx, 2));
label_216aac:
    // 0x216aac: 0x878391d8  lh          $v1, -0x6E28($gp)
    ctx->pc = 0x216aacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939096)));
label_216ab0:
    // 0x216ab0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x216ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_216ab4:
    // 0x216ab4: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_216ab8:
    if (ctx->pc == 0x216AB8u) {
        ctx->pc = 0x216ABCu;
        goto label_216abc;
    }
    ctx->pc = 0x216AB4u;
    {
        const bool branch_taken_0x216ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x216ab4) {
            ctx->pc = 0x216AE4u;
            goto label_216ae4;
        }
    }
    ctx->pc = 0x216ABCu;
label_216abc:
    // 0x216abc: 0x82620035  lb          $v0, 0x35($s3)
    ctx->pc = 0x216abcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 53)));
label_216ac0:
    // 0x216ac0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x216ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_216ac4:
    // 0x216ac4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_216ac8:
    if (ctx->pc == 0x216AC8u) {
        ctx->pc = 0x216AC8u;
            // 0x216ac8: 0x28410065  slti        $at, $v0, 0x65 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
        ctx->pc = 0x216ACCu;
        goto label_216acc;
    }
    ctx->pc = 0x216AC4u;
    {
        const bool branch_taken_0x216ac4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x216AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216AC4u;
            // 0x216ac8: 0x28410065  slti        $at, $v0, 0x65 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216ac4) {
            ctx->pc = 0x216AD4u;
            goto label_216ad4;
        }
    }
    ctx->pc = 0x216ACCu;
label_216acc:
    // 0x216acc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x216accu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216ad0:
    // 0x216ad0: 0x28410065  slti        $at, $v0, 0x65
    ctx->pc = 0x216ad0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
label_216ad4:
    // 0x216ad4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_216ad8:
    if (ctx->pc == 0x216AD8u) {
        ctx->pc = 0x216ADCu;
        goto label_216adc;
    }
    ctx->pc = 0x216AD4u;
    {
        const bool branch_taken_0x216ad4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x216ad4) {
            ctx->pc = 0x216AE0u;
            goto label_216ae0;
        }
    }
    ctx->pc = 0x216ADCu;
label_216adc:
    // 0x216adc: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x216adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_216ae0:
    // 0x216ae0: 0xa2620035  sb          $v0, 0x35($s3)
    ctx->pc = 0x216ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 53), (uint8_t)GPR_U32(ctx, 2));
label_216ae4:
    // 0x216ae4: 0x878391d8  lh          $v1, -0x6E28($gp)
    ctx->pc = 0x216ae4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939096)));
label_216ae8:
    // 0x216ae8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x216ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_216aec:
    // 0x216aec: 0x14620239  bne         $v1, $v0, . + 4 + (0x239 << 2)
label_216af0:
    if (ctx->pc == 0x216AF0u) {
        ctx->pc = 0x216AF4u;
        goto label_216af4;
    }
    ctx->pc = 0x216AECu;
    {
        const bool branch_taken_0x216aec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x216aec) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216AF4u;
label_216af4:
    // 0x216af4: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x216af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_216af8:
    // 0x216af8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x216af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_216afc:
    // 0x216afc: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_216b00:
    if (ctx->pc == 0x216B00u) {
        ctx->pc = 0x216B00u;
            // 0x216b00: 0x28410065  slti        $at, $v0, 0x65 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
        ctx->pc = 0x216B04u;
        goto label_216b04;
    }
    ctx->pc = 0x216AFCu;
    {
        const bool branch_taken_0x216afc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x216B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216AFCu;
            // 0x216b00: 0x28410065  slti        $at, $v0, 0x65 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216afc) {
            ctx->pc = 0x216B0Cu;
            goto label_216b0c;
        }
    }
    ctx->pc = 0x216B04u;
label_216b04:
    // 0x216b04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x216b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216b08:
    // 0x216b08: 0x28410065  slti        $at, $v0, 0x65
    ctx->pc = 0x216b08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
label_216b0c:
    // 0x216b0c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_216b10:
    if (ctx->pc == 0x216B10u) {
        ctx->pc = 0x216B14u;
        goto label_216b14;
    }
    ctx->pc = 0x216B0Cu;
    {
        const bool branch_taken_0x216b0c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x216b0c) {
            ctx->pc = 0x216B18u;
            goto label_216b18;
        }
    }
    ctx->pc = 0x216B14u;
label_216b14:
    // 0x216b14: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x216b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_216b18:
    // 0x216b18: 0x1000022e  b           . + 4 + (0x22E << 2)
label_216b1c:
    if (ctx->pc == 0x216B1Cu) {
        ctx->pc = 0x216B1Cu;
            // 0x216b1c: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x216B20u;
        goto label_216b20;
    }
    ctx->pc = 0x216B18u;
    {
        const bool branch_taken_0x216b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216B18u;
            // 0x216b1c: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b18) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216B20u;
label_216b20:
    // 0x216b20: 0xc085780  jal         func_215E00
label_216b24:
    if (ctx->pc == 0x216B24u) {
        ctx->pc = 0x216B24u;
            // 0x216b24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216B28u;
        goto label_216b28;
    }
    ctx->pc = 0x216B20u;
    SET_GPR_U32(ctx, 31, 0x216B28u);
    ctx->pc = 0x216B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216B20u;
            // 0x216b24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x215E00u;
    if (runtime->hasFunction(0x215E00u)) {
        auto targetFn = runtime->lookupFunction(0x215E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216B28u; }
        if (ctx->pc != 0x216B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelectFish__9CAquariumFi_0x215e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216B28u; }
        if (ctx->pc != 0x216B28u) { return; }
    }
    ctx->pc = 0x216B28u;
label_216b28:
    // 0x216b28: 0xc0857c8  jal         func_215F20
label_216b2c:
    if (ctx->pc == 0x216B2Cu) {
        ctx->pc = 0x216B2Cu;
            // 0x216b2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216B30u;
        goto label_216b30;
    }
    ctx->pc = 0x216B28u;
    SET_GPR_U32(ctx, 31, 0x216B30u);
    ctx->pc = 0x216B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216B28u;
            // 0x216b2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x215F20u;
    if (runtime->hasFunction(0x215F20u)) {
        auto targetFn = runtime->lookupFunction(0x215F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216B30u; }
        if (ctx->pc != 0x216B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelFishSetCursor__9CAquariumFv_0x215f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216B30u; }
        if (ctx->pc != 0x216B30u) { return; }
    }
    ctx->pc = 0x216B30u;
label_216b30:
    // 0x216b30: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x216b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_216b34:
    // 0x216b34: 0x10400227  beqz        $v0, . + 4 + (0x227 << 2)
label_216b38:
    if (ctx->pc == 0x216B38u) {
        ctx->pc = 0x216B38u;
            // 0x216b38: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x216B3Cu;
        goto label_216b3c;
    }
    ctx->pc = 0x216B34u;
    {
        const bool branch_taken_0x216b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216B34u;
            // 0x216b38: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b34) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216B3Cu;
label_216b3c:
    // 0x216b3c: 0xc094274  jal         func_2509D0
label_216b40:
    if (ctx->pc == 0x216B40u) {
        ctx->pc = 0x216B40u;
            // 0x216b40: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x216B44u;
        goto label_216b44;
    }
    ctx->pc = 0x216B3Cu;
    SET_GPR_U32(ctx, 31, 0x216B44u);
    ctx->pc = 0x216B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216B3Cu;
            // 0x216b40: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216B44u; }
        if (ctx->pc != 0x216B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216B44u; }
        if (ctx->pc != 0x216B44u) { return; }
    }
    ctx->pc = 0x216B44u;
label_216b44:
    // 0x216b44: 0x10000223  b           . + 4 + (0x223 << 2)
label_216b48:
    if (ctx->pc == 0x216B48u) {
        ctx->pc = 0x216B4Cu;
        goto label_216b4c;
    }
    ctx->pc = 0x216B44u;
    {
        const bool branch_taken_0x216b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216b44) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216B4Cu;
label_216b4c:
    // 0x216b4c: 0xc08454c  jal         func_211530
label_216b50:
    if (ctx->pc == 0x216B50u) {
        ctx->pc = 0x216B50u;
            // 0x216b50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216B54u;
        goto label_216b54;
    }
    ctx->pc = 0x216B4Cu;
    SET_GPR_U32(ctx, 31, 0x216B54u);
    ctx->pc = 0x216B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216B4Cu;
            // 0x216b50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211530u;
    if (runtime->hasFunction(0x211530u)) {
        auto targetFn = runtime->lookupFunction(0x211530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216B54u; }
        if (ctx->pc != 0x216B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddQuestionCursor__8CAquaMesFv_0x211530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216B54u; }
        if (ctx->pc != 0x216B54u) { return; }
    }
    ctx->pc = 0x216B54u;
label_216b54:
    // 0x216b54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_216b58:
    if (ctx->pc == 0x216B58u) {
        ctx->pc = 0x216B58u;
            // 0x216b58: 0x32420002  andi        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x216B5Cu;
        goto label_216b5c;
    }
    ctx->pc = 0x216B54u;
    {
        const bool branch_taken_0x216b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216B54u;
            // 0x216b58: 0x32420002  andi        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b54) {
            ctx->pc = 0x216B68u;
            goto label_216b68;
        }
    }
    ctx->pc = 0x216B5Cu;
label_216b5c:
    // 0x216b5c: 0xc094274  jal         func_2509D0
label_216b60:
    if (ctx->pc == 0x216B60u) {
        ctx->pc = 0x216B60u;
            // 0x216b60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216B64u;
        goto label_216b64;
    }
    ctx->pc = 0x216B5Cu;
    SET_GPR_U32(ctx, 31, 0x216B64u);
    ctx->pc = 0x216B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216B5Cu;
            // 0x216b60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216B64u; }
        if (ctx->pc != 0x216B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216B64u; }
        if (ctx->pc != 0x216B64u) { return; }
    }
    ctx->pc = 0x216B64u;
label_216b64:
    // 0x216b64: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x216b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_216b68:
    // 0x216b68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_216b6c:
    if (ctx->pc == 0x216B6Cu) {
        ctx->pc = 0x216B6Cu;
            // 0x216b6c: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x216B70u;
        goto label_216b70;
    }
    ctx->pc = 0x216B68u;
    {
        const bool branch_taken_0x216b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216B68u;
            // 0x216b6c: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b68) {
            ctx->pc = 0x216B80u;
            goto label_216b80;
        }
    }
    ctx->pc = 0x216B70u;
label_216b70:
    // 0x216b70: 0xc094274  jal         func_2509D0
label_216b74:
    if (ctx->pc == 0x216B74u) {
        ctx->pc = 0x216B74u;
            // 0x216b74: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x216B78u;
        goto label_216b78;
    }
    ctx->pc = 0x216B70u;
    SET_GPR_U32(ctx, 31, 0x216B78u);
    ctx->pc = 0x216B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216B70u;
            // 0x216b74: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216B78u; }
        if (ctx->pc != 0x216B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216B78u; }
        if (ctx->pc != 0x216B78u) { return; }
    }
    ctx->pc = 0x216B78u;
label_216b78:
    // 0x216b78: 0x10000216  b           . + 4 + (0x216 << 2)
label_216b7c:
    if (ctx->pc == 0x216B7Cu) {
        ctx->pc = 0x216B7Cu;
            // 0x216b7c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x216B80u;
        goto label_216b80;
    }
    ctx->pc = 0x216B78u;
    {
        const bool branch_taken_0x216b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216B78u;
            // 0x216b7c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b78) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216B80u;
label_216b80:
    // 0x216b80: 0x10400214  beqz        $v0, . + 4 + (0x214 << 2)
label_216b84:
    if (ctx->pc == 0x216B84u) {
        ctx->pc = 0x216B88u;
        goto label_216b88;
    }
    ctx->pc = 0x216B80u;
    {
        const bool branch_taken_0x216b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216b80) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216B88u;
label_216b88:
    // 0x216b88: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x216b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_216b8c:
    // 0x216b8c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x216b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_216b90:
    // 0x216b90: 0x2442f7b0  addiu       $v0, $v0, -0x850
    ctx->pc = 0x216b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965168));
label_216b94:
    // 0x216b94: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x216b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_216b98:
    // 0x216b98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x216b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_216b9c:
    // 0x216b9c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x216b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_216ba0:
    // 0x216ba0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x216ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_216ba4:
    // 0x216ba4: 0x84520000  lh          $s2, 0x0($v0)
    ctx->pc = 0x216ba4u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_216ba8:
    // 0x216ba8: 0xc0684dc  jal         func_1A1370
label_216bac:
    if (ctx->pc == 0x216BACu) {
        ctx->pc = 0x216BACu;
            // 0x216bac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216BB0u;
        goto label_216bb0;
    }
    ctx->pc = 0x216BA8u;
    SET_GPR_U32(ctx, 31, 0x216BB0u);
    ctx->pc = 0x216BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216BA8u;
            // 0x216bac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1370u;
    if (runtime->hasFunction(0x1A1370u)) {
        auto targetFn = runtime->lookupFunction(0x1A1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216BB0u; }
        if (ctx->pc != 0x216BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserItemHaveNum__Fi_0x1a1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216BB0u; }
        if (ctx->pc != 0x216BB0u) { return; }
    }
    ctx->pc = 0x216BB0u;
label_216bb0:
    // 0x216bb0: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
label_216bb4:
    if (ctx->pc == 0x216BB4u) {
        ctx->pc = 0x216BB4u;
            // 0x216bb4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x216BB8u;
        goto label_216bb8;
    }
    ctx->pc = 0x216BB0u;
    {
        const bool branch_taken_0x216bb0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x216BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216BB0u;
            // 0x216bb4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216bb0) {
            ctx->pc = 0x216BC8u;
            goto label_216bc8;
        }
    }
    ctx->pc = 0x216BB8u;
label_216bb8:
    // 0x216bb8: 0xc094274  jal         func_2509D0
label_216bbc:
    if (ctx->pc == 0x216BBCu) {
        ctx->pc = 0x216BBCu;
            // 0x216bbc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x216BC0u;
        goto label_216bc0;
    }
    ctx->pc = 0x216BB8u;
    SET_GPR_U32(ctx, 31, 0x216BC0u);
    ctx->pc = 0x216BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216BB8u;
            // 0x216bbc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216BC0u; }
        if (ctx->pc != 0x216BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216BC0u; }
        if (ctx->pc != 0x216BC0u) { return; }
    }
    ctx->pc = 0x216BC0u;
label_216bc0:
    // 0x216bc0: 0x10000204  b           . + 4 + (0x204 << 2)
label_216bc4:
    if (ctx->pc == 0x216BC4u) {
        ctx->pc = 0x216BC8u;
        goto label_216bc8;
    }
    ctx->pc = 0x216BC0u;
    {
        const bool branch_taken_0x216bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216bc0) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216BC8u;
label_216bc8:
    // 0x216bc8: 0xc094274  jal         func_2509D0
label_216bcc:
    if (ctx->pc == 0x216BCCu) {
        ctx->pc = 0x216BD0u;
        goto label_216bd0;
    }
    ctx->pc = 0x216BC8u;
    SET_GPR_U32(ctx, 31, 0x216BD0u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216BD0u; }
        if (ctx->pc != 0x216BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216BD0u; }
        if (ctx->pc != 0x216BD0u) { return; }
    }
    ctx->pc = 0x216BD0u;
label_216bd0:
    // 0x216bd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x216bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_216bd4:
    // 0x216bd4: 0xc065750  jal         func_195D40
label_216bd8:
    if (ctx->pc == 0x216BD8u) {
        ctx->pc = 0x216BD8u;
            // 0x216bd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216BDCu;
        goto label_216bdc;
    }
    ctx->pc = 0x216BD4u;
    SET_GPR_U32(ctx, 31, 0x216BDCu);
    ctx->pc = 0x216BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216BD4u;
            // 0x216bd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195D40u;
    if (runtime->hasFunction(0x195D40u)) {
        auto targetFn = runtime->lookupFunction(0x195D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216BDCu; }
        if (ctx->pc != 0x216BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFilePath__Fii_0x195d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216BDCu; }
        if (ctx->pc != 0x216BDCu) { return; }
    }
    ctx->pc = 0x216BDCu;
label_216bdc:
    // 0x216bdc: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x216bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_216be0:
    // 0x216be0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x216be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_216be4:
    // 0x216be4: 0x27a6018c  addiu       $a2, $sp, 0x18C
    ctx->pc = 0x216be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_216be8:
    // 0x216be8: 0xc0524dc  jal         func_149370
label_216bec:
    if (ctx->pc == 0x216BECu) {
        ctx->pc = 0x216BECu;
            // 0x216bec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216BF0u;
        goto label_216bf0;
    }
    ctx->pc = 0x216BE8u;
    SET_GPR_U32(ctx, 31, 0x216BF0u);
    ctx->pc = 0x216BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216BE8u;
            // 0x216bec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216BF0u; }
        if (ctx->pc != 0x216BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216BF0u; }
        if (ctx->pc != 0x216BF0u) { return; }
    }
    ctx->pc = 0x216BF0u;
label_216bf0:
    // 0x216bf0: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_216bf4:
    if (ctx->pc == 0x216BF4u) {
        ctx->pc = 0x216BF4u;
            // 0x216bf4: 0x2410000f  addiu       $s0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x216BF8u;
        goto label_216bf8;
    }
    ctx->pc = 0x216BF0u;
    {
        const bool branch_taken_0x216bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216BF0u;
            // 0x216bf4: 0x2410000f  addiu       $s0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216bf0) {
            ctx->pc = 0x216CCCu;
            goto label_216ccc;
        }
    }
    ctx->pc = 0x216BF8u;
label_216bf8:
    // 0x216bf8: 0xae8003b8  sw          $zero, 0x3B8($s4)
    ctx->pc = 0x216bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 952), GPR_U32(ctx, 0));
label_216bfc:
    // 0x216bfc: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x216bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_216c00:
    // 0x216c00: 0xae8003b0  sw          $zero, 0x3B0($s4)
    ctx->pc = 0x216c00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 944), GPR_U32(ctx, 0));
label_216c04:
    // 0x216c04: 0x86850324  lh          $a1, 0x324($s4)
    ctx->pc = 0x216c04u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 804)));
label_216c08:
    // 0x216c08: 0xc04b950  jal         func_12E540
label_216c0c:
    if (ctx->pc == 0x216C0Cu) {
        ctx->pc = 0x216C0Cu;
            // 0x216c0c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->pc = 0x216C10u;
        goto label_216c10;
    }
    ctx->pc = 0x216C08u;
    SET_GPR_U32(ctx, 31, 0x216C10u);
    ctx->pc = 0x216C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216C08u;
            // 0x216c0c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216C10u; }
        if (ctx->pc != 0x216C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216C10u; }
        if (ctx->pc != 0x216C10u) { return; }
    }
    ctx->pc = 0x216C10u;
label_216c10:
    // 0x216c10: 0x26840394  addiu       $a0, $s4, 0x394
    ctx->pc = 0x216c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 916));
label_216c14:
    // 0x216c14: 0xc04e748  jal         func_139D20
label_216c18:
    if (ctx->pc == 0x216C18u) {
        ctx->pc = 0x216C18u;
            // 0x216c18: 0x2405006c  addiu       $a1, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->pc = 0x216C1Cu;
        goto label_216c1c;
    }
    ctx->pc = 0x216C14u;
    SET_GPR_U32(ctx, 31, 0x216C1Cu);
    ctx->pc = 0x216C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216C14u;
            // 0x216c18: 0x2405006c  addiu       $a1, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216C1Cu; }
        if (ctx->pc != 0x216C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216C1Cu; }
        if (ctx->pc != 0x216C1Cu) { return; }
    }
    ctx->pc = 0x216C1Cu;
label_216c1c:
    // 0x216c1c: 0x240406a0  addiu       $a0, $zero, 0x6A0
    ctx->pc = 0x216c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1696));
label_216c20:
    // 0x216c20: 0xc04e638  jal         func_1398E0
label_216c24:
    if (ctx->pc == 0x216C24u) {
        ctx->pc = 0x216C24u;
            // 0x216c24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216C28u;
        goto label_216c28;
    }
    ctx->pc = 0x216C20u;
    SET_GPR_U32(ctx, 31, 0x216C28u);
    ctx->pc = 0x216C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216C20u;
            // 0x216c24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216C28u; }
        if (ctx->pc != 0x216C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216C28u; }
        if (ctx->pc != 0x216C28u) { return; }
    }
    ctx->pc = 0x216C28u;
label_216c28:
    // 0x216c28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_216c2c:
    if (ctx->pc == 0x216C2Cu) {
        ctx->pc = 0x216C2Cu;
            // 0x216c2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216C30u;
        goto label_216c30;
    }
    ctx->pc = 0x216C28u;
    {
        const bool branch_taken_0x216c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216C28u;
            // 0x216c2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c28) {
            ctx->pc = 0x216C38u;
            goto label_216c38;
        }
    }
    ctx->pc = 0x216C30u;
label_216c30:
    // 0x216c30: 0xc083cc4  jal         func_20F310
label_216c34:
    if (ctx->pc == 0x216C34u) {
        ctx->pc = 0x216C38u;
        goto label_216c38;
    }
    ctx->pc = 0x216C30u;
    SET_GPR_U32(ctx, 31, 0x216C38u);
    ctx->pc = 0x20F310u;
    if (runtime->hasFunction(0x20F310u)) {
        auto targetFn = runtime->lookupFunction(0x20F310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216C38u; }
        if (ctx->pc != 0x216C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CFishFoodFv_0x20f310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216C38u; }
        if (ctx->pc != 0x216C38u) { return; }
    }
    ctx->pc = 0x216C38u;
label_216c38:
    // 0x216c38: 0xae820320  sw          $v0, 0x320($s4)
    ctx->pc = 0x216c38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 800), GPR_U32(ctx, 2));
label_216c3c:
    // 0x216c3c: 0x26870394  addiu       $a3, $s4, 0x394
    ctx->pc = 0x216c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 916));
label_216c40:
    // 0x216c40: 0x8e840320  lw          $a0, 0x320($s4)
    ctx->pc = 0x216c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_216c44:
    // 0x216c44: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x216c44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_216c48:
    // 0x216c48: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x216c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_216c4c:
    // 0x216c4c: 0x24c69f88  addiu       $a2, $a2, -0x6078
    ctx->pc = 0x216c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942600));
label_216c50:
    // 0x216c50: 0x868a0324  lh          $t2, 0x324($s4)
    ctx->pc = 0x216c50u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 804)));
label_216c54:
    // 0x216c54: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x216c54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_216c58:
    // 0x216c58: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x216c58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_216c5c:
    // 0x216c5c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x216c5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_216c60:
    // 0x216c60: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x216c60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_216c64:
    // 0x216c64: 0x320f809  jalr        $t9
label_216c68:
    if (ctx->pc == 0x216C68u) {
        ctx->pc = 0x216C68u;
            // 0x216c68: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216C6Cu;
        goto label_216c6c;
    }
    ctx->pc = 0x216C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x216C6Cu);
        ctx->pc = 0x216C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216C64u;
            // 0x216c68: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x216C6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x216C6Cu; }
            if (ctx->pc != 0x216C6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x216C6Cu;
label_216c6c:
    // 0x216c6c: 0x8e830320  lw          $v1, 0x320($s4)
    ctx->pc = 0x216c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_216c70:
    // 0x216c70: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x216c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_216c74:
    // 0x216c74: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x216c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_216c78:
    // 0x216c78: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x216c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_216c7c:
    // 0x216c7c: 0x0  nop
    ctx->pc = 0x216c7cu;
    // NOP
label_216c80:
    // 0x216c80: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x216c80u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_216c84:
    // 0x216c84: 0xa4720680  sh          $s2, 0x680($v1)
    ctx->pc = 0x216c84u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1664), (uint16_t)GPR_U32(ctx, 18));
label_216c88:
    // 0x216c88: 0x8e840320  lw          $a0, 0x320($s4)
    ctx->pc = 0x216c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_216c8c:
    // 0x216c8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x216c8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_216c90:
    // 0x216c90: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x216c90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_216c94:
    // 0x216c94: 0x320f809  jalr        $t9
label_216c98:
    if (ctx->pc == 0x216C98u) {
        ctx->pc = 0x216C98u;
            // 0x216c98: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x216C9Cu;
        goto label_216c9c;
    }
    ctx->pc = 0x216C94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x216C9Cu);
        ctx->pc = 0x216C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216C94u;
            // 0x216c98: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x216C9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x216C9Cu; }
            if (ctx->pc != 0x216C9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x216C9Cu;
label_216c9c:
    // 0x216c9c: 0xae800330  sw          $zero, 0x330($s4)
    ctx->pc = 0x216c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 816), GPR_U32(ctx, 0));
label_216ca0:
    // 0x216ca0: 0x3c024274  lui         $v0, 0x4274
    ctx->pc = 0x216ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17012 << 16));
label_216ca4:
    // 0x216ca4: 0xae820334  sw          $v0, 0x334($s4)
    ctx->pc = 0x216ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 820), GPR_U32(ctx, 2));
label_216ca8:
    // 0x216ca8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x216ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_216cac:
    // 0x216cac: 0xae800338  sw          $zero, 0x338($s4)
    ctx->pc = 0x216cacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 824), GPR_U32(ctx, 0));
label_216cb0:
    // 0x216cb0: 0xae82033c  sw          $v0, 0x33C($s4)
    ctx->pc = 0x216cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 828), GPR_U32(ctx, 2));
label_216cb4:
    // 0x216cb4: 0x8e840320  lw          $a0, 0x320($s4)
    ctx->pc = 0x216cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_216cb8:
    // 0x216cb8: 0xc083cfc  jal         func_20F3F0
label_216cbc:
    if (ctx->pc == 0x216CBCu) {
        ctx->pc = 0x216CBCu;
            // 0x216cbc: 0x26850330  addiu       $a1, $s4, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 816));
        ctx->pc = 0x216CC0u;
        goto label_216cc0;
    }
    ctx->pc = 0x216CB8u;
    SET_GPR_U32(ctx, 31, 0x216CC0u);
    ctx->pc = 0x216CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216CB8u;
            // 0x216cbc: 0x26850330  addiu       $a1, $s4, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F3F0u;
    if (runtime->hasFunction(0x20F3F0u)) {
        auto targetFn = runtime->lookupFunction(0x20F3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216CC0u; }
        if (ctx->pc != 0x216CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDropPosition__9CFishFoodFPf_0x20f3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216CC0u; }
        if (ctx->pc != 0x216CC0u) { return; }
    }
    ctx->pc = 0x216CC0u;
label_216cc0:
    // 0x216cc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x216cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216cc4:
    // 0x216cc4: 0xa2820384  sb          $v0, 0x384($s4)
    ctx->pc = 0x216cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 900), (uint8_t)GPR_U32(ctx, 2));
label_216cc8:
    // 0x216cc8: 0x2410000f  addiu       $s0, $zero, 0xF
    ctx->pc = 0x216cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_216ccc:
    // 0x216ccc: 0x100001c1  b           . + 4 + (0x1C1 << 2)
label_216cd0:
    if (ctx->pc == 0x216CD0u) {
        ctx->pc = 0x216CD4u;
        goto label_216cd4;
    }
    ctx->pc = 0x216CCCu;
    {
        const bool branch_taken_0x216ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216ccc) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216CD4u;
label_216cd4:
    // 0x216cd4: 0x124001bf  beqz        $s2, . + 4 + (0x1BF << 2)
label_216cd8:
    if (ctx->pc == 0x216CD8u) {
        ctx->pc = 0x216CD8u;
            // 0x216cd8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x216CDCu;
        goto label_216cdc;
    }
    ctx->pc = 0x216CD4u;
    {
        const bool branch_taken_0x216cd4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x216CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216CD4u;
            // 0x216cd8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216cd4) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216CDCu;
label_216cdc:
    // 0x216cdc: 0xc094274  jal         func_2509D0
label_216ce0:
    if (ctx->pc == 0x216CE0u) {
        ctx->pc = 0x216CE0u;
            // 0x216ce0: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x216CE4u;
        goto label_216ce4;
    }
    ctx->pc = 0x216CDCu;
    SET_GPR_U32(ctx, 31, 0x216CE4u);
    ctx->pc = 0x216CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216CDCu;
            // 0x216ce0: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216CE4u; }
        if (ctx->pc != 0x216CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216CE4u; }
        if (ctx->pc != 0x216CE4u) { return; }
    }
    ctx->pc = 0x216CE4u;
label_216ce4:
    // 0x216ce4: 0x100001bb  b           . + 4 + (0x1BB << 2)
label_216ce8:
    if (ctx->pc == 0x216CE8u) {
        ctx->pc = 0x216CECu;
        goto label_216cec;
    }
    ctx->pc = 0x216CE4u;
    {
        const bool branch_taken_0x216ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216ce4) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216CECu;
label_216cec:
    // 0x216cec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x216cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_216cf0:
    // 0x216cf0: 0xc085780  jal         func_215E00
label_216cf4:
    if (ctx->pc == 0x216CF4u) {
        ctx->pc = 0x216CF4u;
            // 0x216cf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216CF8u;
        goto label_216cf8;
    }
    ctx->pc = 0x216CF0u;
    SET_GPR_U32(ctx, 31, 0x216CF8u);
    ctx->pc = 0x216CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216CF0u;
            // 0x216cf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x215E00u;
    if (runtime->hasFunction(0x215E00u)) {
        auto targetFn = runtime->lookupFunction(0x215E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216CF8u; }
        if (ctx->pc != 0x216CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelectFish__9CAquariumFi_0x215e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216CF8u; }
        if (ctx->pc != 0x216CF8u) { return; }
    }
    ctx->pc = 0x216CF8u;
label_216cf8:
    // 0x216cf8: 0xc0857c8  jal         func_215F20
label_216cfc:
    if (ctx->pc == 0x216CFCu) {
        ctx->pc = 0x216CFCu;
            // 0x216cfc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216D00u;
        goto label_216d00;
    }
    ctx->pc = 0x216CF8u;
    SET_GPR_U32(ctx, 31, 0x216D00u);
    ctx->pc = 0x216CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216CF8u;
            // 0x216cfc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x215F20u;
    if (runtime->hasFunction(0x215F20u)) {
        auto targetFn = runtime->lookupFunction(0x215F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216D00u; }
        if (ctx->pc != 0x216D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelFishSetCursor__9CAquariumFv_0x215f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216D00u; }
        if (ctx->pc != 0x216D00u) { return; }
    }
    ctx->pc = 0x216D00u;
label_216d00:
    // 0x216d00: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x216d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_216d04:
    // 0x216d04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_216d08:
    if (ctx->pc == 0x216D08u) {
        ctx->pc = 0x216D08u;
            // 0x216d08: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x216D0Cu;
        goto label_216d0c;
    }
    ctx->pc = 0x216D04u;
    {
        const bool branch_taken_0x216d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216D04u;
            // 0x216d08: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216d04) {
            ctx->pc = 0x216D1Cu;
            goto label_216d1c;
        }
    }
    ctx->pc = 0x216D0Cu;
label_216d0c:
    // 0x216d0c: 0xc094274  jal         func_2509D0
label_216d10:
    if (ctx->pc == 0x216D10u) {
        ctx->pc = 0x216D10u;
            // 0x216d10: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x216D14u;
        goto label_216d14;
    }
    ctx->pc = 0x216D0Cu;
    SET_GPR_U32(ctx, 31, 0x216D14u);
    ctx->pc = 0x216D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216D0Cu;
            // 0x216d10: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216D14u; }
        if (ctx->pc != 0x216D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216D14u; }
        if (ctx->pc != 0x216D14u) { return; }
    }
    ctx->pc = 0x216D14u;
label_216d14:
    // 0x216d14: 0x100001af  b           . + 4 + (0x1AF << 2)
label_216d18:
    if (ctx->pc == 0x216D18u) {
        ctx->pc = 0x216D18u;
            // 0x216d18: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x216D1Cu;
        goto label_216d1c;
    }
    ctx->pc = 0x216D14u;
    {
        const bool branch_taken_0x216d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216D14u;
            // 0x216d18: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216d14) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216D1Cu;
label_216d1c:
    // 0x216d1c: 0x104001ad  beqz        $v0, . + 4 + (0x1AD << 2)
label_216d20:
    if (ctx->pc == 0x216D20u) {
        ctx->pc = 0x216D24u;
        goto label_216d24;
    }
    ctx->pc = 0x216D1Cu;
    {
        const bool branch_taken_0x216d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216d1c) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216D24u;
label_216d24:
    // 0x216d24: 0x868202d8  lh          $v0, 0x2D8($s4)
    ctx->pc = 0x216d24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 728)));
label_216d28:
    // 0x216d28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x216d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_216d2c:
    // 0x216d2c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x216d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_216d30:
    // 0x216d30: 0x8c4202b4  lw          $v0, 0x2B4($v0)
    ctx->pc = 0x216d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_216d34:
    // 0x216d34: 0x104001a7  beqz        $v0, . + 4 + (0x1A7 << 2)
label_216d38:
    if (ctx->pc == 0x216D38u) {
        ctx->pc = 0x216D38u;
            // 0x216d38: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x216D3Cu;
        goto label_216d3c;
    }
    ctx->pc = 0x216D34u;
    {
        const bool branch_taken_0x216d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216D34u;
            // 0x216d38: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216d34) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216D3Cu;
label_216d3c:
    // 0x216d3c: 0xa420dce0  sh          $zero, -0x2320($at)
    ctx->pc = 0x216d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294958304), (uint16_t)GPR_U32(ctx, 0));
label_216d40:
    // 0x216d40: 0x868202d8  lh          $v0, 0x2D8($s4)
    ctx->pc = 0x216d40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 728)));
label_216d44:
    // 0x216d44: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x216d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_216d48:
    // 0x216d48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x216d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_216d4c:
    // 0x216d4c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x216d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_216d50:
    // 0x216d50: 0x8c4202b4  lw          $v0, 0x2B4($v0)
    ctx->pc = 0x216d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_216d54:
    // 0x216d54: 0x8c420938  lw          $v0, 0x938($v0)
    ctx->pc = 0x216d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2360)));
label_216d58:
    // 0x216d58: 0xac22dce4  sw          $v0, -0x231C($at)
    ctx->pc = 0x216d58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958308), GPR_U32(ctx, 2));
label_216d5c:
    // 0x216d5c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x216d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_216d60:
    // 0x216d60: 0x8c22dce4  lw          $v0, -0x231C($at)
    ctx->pc = 0x216d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958308)));
label_216d64:
    // 0x216d64: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_216d68:
    if (ctx->pc == 0x216D68u) {
        ctx->pc = 0x216D6Cu;
        goto label_216d6c;
    }
    ctx->pc = 0x216D64u;
    {
        const bool branch_taken_0x216d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216d64) {
            ctx->pc = 0x216D8Cu;
            goto label_216d8c;
        }
    }
    ctx->pc = 0x216D6Cu;
label_216d6c:
    // 0x216d6c: 0x80420005  lb          $v0, 0x5($v0)
    ctx->pc = 0x216d6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_216d70:
    // 0x216d70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_216d74:
    if (ctx->pc == 0x216D74u) {
        ctx->pc = 0x216D74u;
            // 0x216d74: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x216D78u;
        goto label_216d78;
    }
    ctx->pc = 0x216D70u;
    {
        const bool branch_taken_0x216d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216D70u;
            // 0x216d74: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216d70) {
            ctx->pc = 0x216D90u;
            goto label_216d90;
        }
    }
    ctx->pc = 0x216D78u;
label_216d78:
    // 0x216d78: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x216d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_216d7c:
    // 0x216d7c: 0xc094274  jal         func_2509D0
label_216d80:
    if (ctx->pc == 0x216D80u) {
        ctx->pc = 0x216D80u;
            // 0x216d80: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x216D84u;
        goto label_216d84;
    }
    ctx->pc = 0x216D7Cu;
    SET_GPR_U32(ctx, 31, 0x216D84u);
    ctx->pc = 0x216D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216D7Cu;
            // 0x216d80: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216D84u; }
        if (ctx->pc != 0x216D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216D84u; }
        if (ctx->pc != 0x216D84u) { return; }
    }
    ctx->pc = 0x216D84u;
label_216d84:
    // 0x216d84: 0x10000193  b           . + 4 + (0x193 << 2)
label_216d88:
    if (ctx->pc == 0x216D88u) {
        ctx->pc = 0x216D8Cu;
        goto label_216d8c;
    }
    ctx->pc = 0x216D84u;
    {
        const bool branch_taken_0x216d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216d84) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216D8Cu;
label_216d8c:
    // 0x216d8c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x216d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_216d90:
    // 0x216d90: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x216d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_216d94:
    // 0x216d94: 0xaf8291b4  sw          $v0, -0x6E4C($gp)
    ctx->pc = 0x216d94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939060), GPR_U32(ctx, 2));
label_216d98:
    // 0x216d98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x216d98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_216d9c:
    // 0x216d9c: 0x8f8291b0  lw          $v0, -0x6E50($gp)
    ctx->pc = 0x216d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_216da0:
    // 0x216da0: 0x24100011  addiu       $s0, $zero, 0x11
    ctx->pc = 0x216da0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_216da4:
    // 0x216da4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x216da4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_216da8:
    // 0x216da8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x216da8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_216dac:
    // 0x216dac: 0xc05f610  jal         func_17D840
label_216db0:
    if (ctx->pc == 0x216DB0u) {
        ctx->pc = 0x216DB0u;
            // 0x216db0: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x216DB4u;
        goto label_216db4;
    }
    ctx->pc = 0x216DACu;
    SET_GPR_U32(ctx, 31, 0x216DB4u);
    ctx->pc = 0x216DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216DACu;
            // 0x216db0: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216DB4u; }
        if (ctx->pc != 0x216DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216DB4u; }
        if (ctx->pc != 0x216DB4u) { return; }
    }
    ctx->pc = 0x216DB4u;
label_216db4:
    // 0x216db4: 0xc094274  jal         func_2509D0
label_216db8:
    if (ctx->pc == 0x216DB8u) {
        ctx->pc = 0x216DB8u;
            // 0x216db8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x216DBCu;
        goto label_216dbc;
    }
    ctx->pc = 0x216DB4u;
    SET_GPR_U32(ctx, 31, 0x216DBCu);
    ctx->pc = 0x216DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216DB4u;
            // 0x216db8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216DBCu; }
        if (ctx->pc != 0x216DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216DBCu; }
        if (ctx->pc != 0x216DBCu) { return; }
    }
    ctx->pc = 0x216DBCu;
label_216dbc:
    // 0x216dbc: 0x10000185  b           . + 4 + (0x185 << 2)
label_216dc0:
    if (ctx->pc == 0x216DC0u) {
        ctx->pc = 0x216DC4u;
        goto label_216dc4;
    }
    ctx->pc = 0x216DBCu;
    {
        const bool branch_taken_0x216dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216dbc) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216DC4u;
label_216dc4:
    // 0x216dc4: 0x12400183  beqz        $s2, . + 4 + (0x183 << 2)
label_216dc8:
    if (ctx->pc == 0x216DC8u) {
        ctx->pc = 0x216DC8u;
            // 0x216dc8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x216DCCu;
        goto label_216dcc;
    }
    ctx->pc = 0x216DC4u;
    {
        const bool branch_taken_0x216dc4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x216DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216DC4u;
            // 0x216dc8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216dc4) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216DCCu;
label_216dcc:
    // 0x216dcc: 0xc094274  jal         func_2509D0
label_216dd0:
    if (ctx->pc == 0x216DD0u) {
        ctx->pc = 0x216DD0u;
            // 0x216dd0: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x216DD4u;
        goto label_216dd4;
    }
    ctx->pc = 0x216DCCu;
    SET_GPR_U32(ctx, 31, 0x216DD4u);
    ctx->pc = 0x216DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216DCCu;
            // 0x216dd0: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216DD4u; }
        if (ctx->pc != 0x216DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216DD4u; }
        if (ctx->pc != 0x216DD4u) { return; }
    }
    ctx->pc = 0x216DD4u;
label_216dd4:
    // 0x216dd4: 0x1000017f  b           . + 4 + (0x17F << 2)
label_216dd8:
    if (ctx->pc == 0x216DD8u) {
        ctx->pc = 0x216DDCu;
        goto label_216ddc;
    }
    ctx->pc = 0x216DD4u;
    {
        const bool branch_taken_0x216dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216dd4) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216DDCu;
label_216ddc:
    // 0x216ddc: 0x8e840320  lw          $a0, 0x320($s4)
    ctx->pc = 0x216ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_216de0:
    // 0x216de0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x216de0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_216de4:
    // 0x216de4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x216de4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_216de8:
    // 0x216de8: 0x320f809  jalr        $t9
label_216dec:
    if (ctx->pc == 0x216DECu) {
        ctx->pc = 0x216DECu;
            // 0x216dec: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x216DF0u;
        goto label_216df0;
    }
    ctx->pc = 0x216DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x216DF0u);
        ctx->pc = 0x216DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216DE8u;
            // 0x216dec: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x216DF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x216DF0u; }
            if (ctx->pc != 0x216DF0u) { return; }
        }
        }
    }
    ctx->pc = 0x216DF0u;
label_216df0:
    // 0x216df0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x216df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_216df4:
    // 0x216df4: 0xc052cc0  jal         func_14B300
label_216df8:
    if (ctx->pc == 0x216DF8u) {
        ctx->pc = 0x216DF8u;
            // 0x216df8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x216DFCu;
        goto label_216dfc;
    }
    ctx->pc = 0x216DF4u;
    SET_GPR_U32(ctx, 31, 0x216DFCu);
    ctx->pc = 0x216DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216DF4u;
            // 0x216df8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B300u;
    if (runtime->hasFunction(0x14B300u)) {
        auto targetFn = runtime->lookupFunction(0x14B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216DFCu; }
        if (ctx->pc != 0x216DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLXf__8CGamePadFv_0x14b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216DFCu; }
        if (ctx->pc != 0x216DFCu) { return; }
    }
    ctx->pc = 0x216DFCu;
label_216dfc:
    // 0x216dfc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x216dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_216e00:
    // 0x216e00: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x216e00u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_216e04:
    // 0x216e04: 0xc052cd0  jal         func_14B340
label_216e08:
    if (ctx->pc == 0x216E08u) {
        ctx->pc = 0x216E08u;
            // 0x216e08: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x216E0Cu;
        goto label_216e0c;
    }
    ctx->pc = 0x216E04u;
    SET_GPR_U32(ctx, 31, 0x216E0Cu);
    ctx->pc = 0x216E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216E04u;
            // 0x216e08: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B340u;
    if (runtime->hasFunction(0x14B340u)) {
        auto targetFn = runtime->lookupFunction(0x14B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216E0Cu; }
        if (ctx->pc != 0x216E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLYf__8CGamePadFv_0x14b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216E0Cu; }
        if (ctx->pc != 0x216E0Cu) { return; }
    }
    ctx->pc = 0x216E0Cu;
label_216e0c:
    // 0x216e0c: 0x8f8491c8  lw          $a0, -0x6E38($gp)
    ctx->pc = 0x216e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
label_216e10:
    // 0x216e10: 0xc04c678  jal         func_1319E0
label_216e14:
    if (ctx->pc == 0x216E14u) {
        ctx->pc = 0x216E14u;
            // 0x216e14: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x216E18u;
        goto label_216e18;
    }
    ctx->pc = 0x216E10u;
    SET_GPR_U32(ctx, 31, 0x216E18u);
    ctx->pc = 0x216E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216E10u;
            // 0x216e14: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319E0u;
    if (runtime->hasFunction(0x1319E0u)) {
        auto targetFn = runtime->lookupFunction(0x1319E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216E18u; }
        if (ctx->pc != 0x216E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAngle__15mgCCameraFollowFv_0x1319e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216E18u; }
        if (ctx->pc != 0x216E18u) { return; }
    }
    ctx->pc = 0x216E18u;
label_216e18:
    // 0x216e18: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x216e18u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_216e1c:
    // 0x216e1c: 0xc047964  jal         func_11E590
label_216e20:
    if (ctx->pc == 0x216E20u) {
        ctx->pc = 0x216E20u;
            // 0x216e20: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x216E24u;
        goto label_216e24;
    }
    ctx->pc = 0x216E1Cu;
    SET_GPR_U32(ctx, 31, 0x216E24u);
    ctx->pc = 0x216E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216E1Cu;
            // 0x216e20: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216E24u; }
        if (ctx->pc != 0x216E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216E24u; }
        if (ctx->pc != 0x216E24u) { return; }
    }
    ctx->pc = 0x216E24u;
label_216e24:
    // 0x216e24: 0x4600ad02  mul.s       $f20, $f21, $f0
    ctx->pc = 0x216e24u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_216e28:
    // 0x216e28: 0xc047a42  jal         func_11E908
label_216e2c:
    if (ctx->pc == 0x216E2Cu) {
        ctx->pc = 0x216E2Cu;
            // 0x216e2c: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x216E30u;
        goto label_216e30;
    }
    ctx->pc = 0x216E28u;
    SET_GPR_U32(ctx, 31, 0x216E30u);
    ctx->pc = 0x216E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216E28u;
            // 0x216e2c: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216E30u; }
        if (ctx->pc != 0x216E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216E30u; }
        if (ctx->pc != 0x216E30u) { return; }
    }
    ctx->pc = 0x216E30u;
label_216e30:
    // 0x216e30: 0x4600b042  mul.s       $f1, $f22, $f0
    ctx->pc = 0x216e30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_216e34:
    // 0x216e34: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x216e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_216e38:
    // 0x216e38: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x216e38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_216e3c:
    // 0x216e3c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x216e3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_216e40:
    // 0x216e40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x216e40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_216e44:
    // 0x216e44: 0xc047a42  jal         func_11E908
label_216e48:
    if (ctx->pc == 0x216E48u) {
        ctx->pc = 0x216E48u;
            // 0x216e48: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x216E4Cu;
        goto label_216e4c;
    }
    ctx->pc = 0x216E44u;
    SET_GPR_U32(ctx, 31, 0x216E4Cu);
    ctx->pc = 0x216E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216E44u;
            // 0x216e48: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216E4Cu; }
        if (ctx->pc != 0x216E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216E4Cu; }
        if (ctx->pc != 0x216E4Cu) { return; }
    }
    ctx->pc = 0x216E4Cu;
label_216e4c:
    // 0x216e4c: 0x4600a847  neg.s       $f1, $f21
    ctx->pc = 0x216e4cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[21]);
label_216e50:
    // 0x216e50: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x216e50u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_216e54:
    // 0x216e54: 0xc047964  jal         func_11E590
label_216e58:
    if (ctx->pc == 0x216E58u) {
        ctx->pc = 0x216E58u;
            // 0x216e58: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x216E5Cu;
        goto label_216e5c;
    }
    ctx->pc = 0x216E54u;
    SET_GPR_U32(ctx, 31, 0x216E5Cu);
    ctx->pc = 0x216E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216E54u;
            // 0x216e58: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216E5Cu; }
        if (ctx->pc != 0x216E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216E5Cu; }
        if (ctx->pc != 0x216E5Cu) { return; }
    }
    ctx->pc = 0x216E5Cu;
label_216e5c:
    // 0x216e5c: 0x4600b042  mul.s       $f1, $f22, $f0
    ctx->pc = 0x216e5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_216e60:
    // 0x216e60: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x216e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_216e64:
    // 0x216e64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x216e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216e68:
    // 0x216e68: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x216e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_216e6c:
    // 0x216e6c: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x216e6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_216e70:
    // 0x216e70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x216e70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_216e74:
    // 0x216e74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x216e74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_216e78:
    // 0x216e78: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x216e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_216e7c:
    // 0x216e7c: 0xc083258  jal         func_20C960
label_216e80:
    if (ctx->pc == 0x216E80u) {
        ctx->pc = 0x216E80u;
            // 0x216e80: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x216E84u;
        goto label_216e84;
    }
    ctx->pc = 0x216E7Cu;
    SET_GPR_U32(ctx, 31, 0x216E84u);
    ctx->pc = 0x216E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216E7Cu;
            // 0x216e80: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x20C960u;
    if (runtime->hasFunction(0x20C960u)) {
        auto targetFn = runtime->lookupFunction(0x20C960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216E84u; }
        if (ctx->pc != 0x216E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_aquarium_limmit_check__FPffif_0x20c960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216E84u; }
        if (ctx->pc != 0x216E84u) { return; }
    }
    ctx->pc = 0x216E84u;
label_216e84:
    // 0x216e84: 0x3c024274  lui         $v0, 0x4274
    ctx->pc = 0x216e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17012 << 16));
label_216e88:
    // 0x216e88: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x216e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_216e8c:
    // 0x216e8c: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x216e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
label_216e90:
    // 0x216e90: 0xc083cfc  jal         func_20F3F0
label_216e94:
    if (ctx->pc == 0x216E94u) {
        ctx->pc = 0x216E94u;
            // 0x216e94: 0x8e840320  lw          $a0, 0x320($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
        ctx->pc = 0x216E98u;
        goto label_216e98;
    }
    ctx->pc = 0x216E90u;
    SET_GPR_U32(ctx, 31, 0x216E98u);
    ctx->pc = 0x216E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216E90u;
            // 0x216e94: 0x8e840320  lw          $a0, 0x320($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F3F0u;
    if (runtime->hasFunction(0x20F3F0u)) {
        auto targetFn = runtime->lookupFunction(0x20F3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216E98u; }
        if (ctx->pc != 0x216E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDropPosition__9CFishFoodFPf_0x20f3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216E98u; }
        if (ctx->pc != 0x216E98u) { return; }
    }
    ctx->pc = 0x216E98u;
label_216e98:
    // 0x216e98: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x216e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_216e9c:
    // 0x216e9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_216ea0:
    if (ctx->pc == 0x216EA0u) {
        ctx->pc = 0x216EA0u;
            // 0x216ea0: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x216EA4u;
        goto label_216ea4;
    }
    ctx->pc = 0x216E9Cu;
    {
        const bool branch_taken_0x216e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216E9Cu;
            // 0x216ea0: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216e9c) {
            ctx->pc = 0x216EB8u;
            goto label_216eb8;
        }
    }
    ctx->pc = 0x216EA4u;
label_216ea4:
    // 0x216ea4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x216ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_216ea8:
    // 0x216ea8: 0xc094274  jal         func_2509D0
label_216eac:
    if (ctx->pc == 0x216EACu) {
        ctx->pc = 0x216EACu;
            // 0x216eac: 0x2410000e  addiu       $s0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x216EB0u;
        goto label_216eb0;
    }
    ctx->pc = 0x216EA8u;
    SET_GPR_U32(ctx, 31, 0x216EB0u);
    ctx->pc = 0x216EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216EA8u;
            // 0x216eac: 0x2410000e  addiu       $s0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216EB0u; }
        if (ctx->pc != 0x216EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216EB0u; }
        if (ctx->pc != 0x216EB0u) { return; }
    }
    ctx->pc = 0x216EB0u;
label_216eb0:
    // 0x216eb0: 0x10000148  b           . + 4 + (0x148 << 2)
label_216eb4:
    if (ctx->pc == 0x216EB4u) {
        ctx->pc = 0x216EB8u;
        goto label_216eb8;
    }
    ctx->pc = 0x216EB0u;
    {
        const bool branch_taken_0x216eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216eb0) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216EB8u;
label_216eb8:
    // 0x216eb8: 0x10400146  beqz        $v0, . + 4 + (0x146 << 2)
label_216ebc:
    if (ctx->pc == 0x216EBCu) {
        ctx->pc = 0x216EBCu;
            // 0x216ebc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x216EC0u;
        goto label_216ec0;
    }
    ctx->pc = 0x216EB8u;
    {
        const bool branch_taken_0x216eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216EB8u;
            // 0x216ebc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216eb8) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216EC0u;
label_216ec0:
    // 0x216ec0: 0xc094274  jal         func_2509D0
label_216ec4:
    if (ctx->pc == 0x216EC4u) {
        ctx->pc = 0x216EC4u;
            // 0x216ec4: 0x24100010  addiu       $s0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x216EC8u;
        goto label_216ec8;
    }
    ctx->pc = 0x216EC0u;
    SET_GPR_U32(ctx, 31, 0x216EC8u);
    ctx->pc = 0x216EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216EC0u;
            // 0x216ec4: 0x24100010  addiu       $s0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216EC8u; }
        if (ctx->pc != 0x216EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216EC8u; }
        if (ctx->pc != 0x216EC8u) { return; }
    }
    ctx->pc = 0x216EC8u;
label_216ec8:
    // 0x216ec8: 0x10000142  b           . + 4 + (0x142 << 2)
label_216ecc:
    if (ctx->pc == 0x216ECCu) {
        ctx->pc = 0x216ED0u;
        goto label_216ed0;
    }
    ctx->pc = 0x216EC8u;
    {
        const bool branch_taken_0x216ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216ec8) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216ED0u;
label_216ed0:
    // 0x216ed0: 0x8e820340  lw          $v0, 0x340($s4)
    ctx->pc = 0x216ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 832)));
label_216ed4:
    // 0x216ed4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x216ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_216ed8:
    // 0x216ed8: 0xae820340  sw          $v0, 0x340($s4)
    ctx->pc = 0x216ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 832), GPR_U32(ctx, 2));
label_216edc:
    // 0x216edc: 0x8e840320  lw          $a0, 0x320($s4)
    ctx->pc = 0x216edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_216ee0:
    // 0x216ee0: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
label_216ee4:
    if (ctx->pc == 0x216EE4u) {
        ctx->pc = 0x216EE8u;
        goto label_216ee8;
    }
    ctx->pc = 0x216EE0u;
    {
        const bool branch_taken_0x216ee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x216ee0) {
            ctx->pc = 0x216F3Cu;
            goto label_216f3c;
        }
    }
    ctx->pc = 0x216EE8u;
label_216ee8:
    // 0x216ee8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x216ee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_216eec:
    // 0x216eec: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x216eecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_216ef0:
    // 0x216ef0: 0x320f809  jalr        $t9
label_216ef4:
    if (ctx->pc == 0x216EF4u) {
        ctx->pc = 0x216EF4u;
            // 0x216ef4: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x216EF8u;
        goto label_216ef8;
    }
    ctx->pc = 0x216EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x216EF8u);
        ctx->pc = 0x216EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216EF0u;
            // 0x216ef4: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x216EF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x216EF8u; }
            if (ctx->pc != 0x216EF8u) { return; }
        }
        }
    }
    ctx->pc = 0x216EF8u;
label_216ef8:
    // 0x216ef8: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x216ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_216efc:
    // 0x216efc: 0x3c0241ac  lui         $v0, 0x41AC
    ctx->pc = 0x216efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16812 << 16));
label_216f00:
    // 0x216f00: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x216f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_216f04:
    // 0x216f04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x216f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_216f08:
    // 0x216f08: 0x0  nop
    ctx->pc = 0x216f08u;
    // NOP
label_216f0c:
    // 0x216f0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x216f0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_216f10:
    // 0x216f10: 0x0  nop
    ctx->pc = 0x216f10u;
    // NOP
label_216f14:
    // 0x216f14: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_216f18:
    if (ctx->pc == 0x216F18u) {
        ctx->pc = 0x216F18u;
            // 0x216f18: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x216F1Cu;
        goto label_216f1c;
    }
    ctx->pc = 0x216F14u;
    {
        const bool branch_taken_0x216f14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x216F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216F14u;
            // 0x216f18: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216f14) {
            ctx->pc = 0x216F3Cu;
            goto label_216f3c;
        }
    }
    ctx->pc = 0x216F1Cu;
label_216f1c:
    // 0x216f1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_216f20:
    if (ctx->pc == 0x216F20u) {
        ctx->pc = 0x216F20u;
            // 0x216f20: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x216F24u;
        goto label_216f24;
    }
    ctx->pc = 0x216F1Cu;
    {
        const bool branch_taken_0x216f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216F1Cu;
            // 0x216f20: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216f1c) {
            ctx->pc = 0x216F30u;
            goto label_216f30;
        }
    }
    ctx->pc = 0x216F24u;
label_216f24:
    // 0x216f24: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x216f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_216f28:
    // 0x216f28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_216f2c:
    if (ctx->pc == 0x216F2Cu) {
        ctx->pc = 0x216F30u;
        goto label_216f30;
    }
    ctx->pc = 0x216F28u;
    {
        const bool branch_taken_0x216f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216f28) {
            ctx->pc = 0x216F3Cu;
            goto label_216f3c;
        }
    }
    ctx->pc = 0x216F30u;
label_216f30:
    // 0x216f30: 0xc094274  jal         func_2509D0
label_216f34:
    if (ctx->pc == 0x216F34u) {
        ctx->pc = 0x216F38u;
        goto label_216f38;
    }
    ctx->pc = 0x216F30u;
    SET_GPR_U32(ctx, 31, 0x216F38u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216F38u; }
        if (ctx->pc != 0x216F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216F38u; }
        if (ctx->pc != 0x216F38u) { return; }
    }
    ctx->pc = 0x216F38u;
label_216f38:
    // 0x216f38: 0xae800320  sw          $zero, 0x320($s4)
    ctx->pc = 0x216f38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 800), GPR_U32(ctx, 0));
label_216f3c:
    // 0x216f3c: 0x8e820340  lw          $v0, 0x340($s4)
    ctx->pc = 0x216f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 832)));
label_216f40:
    // 0x216f40: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
label_216f44:
    if (ctx->pc == 0x216F44u) {
        ctx->pc = 0x216F48u;
        goto label_216f48;
    }
    ctx->pc = 0x216F40u;
    {
        const bool branch_taken_0x216f40 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x216f40) {
            ctx->pc = 0x216F4Cu;
            goto label_216f4c;
        }
    }
    ctx->pc = 0x216F48u;
label_216f48:
    // 0x216f48: 0xae800320  sw          $zero, 0x320($s4)
    ctx->pc = 0x216f48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 800), GPR_U32(ctx, 0));
label_216f4c:
    // 0x216f4c: 0x8e820320  lw          $v0, 0x320($s4)
    ctx->pc = 0x216f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_216f50:
    // 0x216f50: 0x14400120  bnez        $v0, . + 4 + (0x120 << 2)
label_216f54:
    if (ctx->pc == 0x216F54u) {
        ctx->pc = 0x216F58u;
        goto label_216f58;
    }
    ctx->pc = 0x216F50u;
    {
        const bool branch_taken_0x216f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216f50) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216F58u;
label_216f58:
    // 0x216f58: 0x1000011e  b           . + 4 + (0x11E << 2)
label_216f5c:
    if (ctx->pc == 0x216F5Cu) {
        ctx->pc = 0x216F5Cu;
            // 0x216f5c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216F60u;
        goto label_216f60;
    }
    ctx->pc = 0x216F58u;
    {
        const bool branch_taken_0x216f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216F58u;
            // 0x216f5c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216f58) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216F60u;
label_216f60:
    // 0x216f60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x216f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_216f64:
    // 0x216f64: 0xc085780  jal         func_215E00
label_216f68:
    if (ctx->pc == 0x216F68u) {
        ctx->pc = 0x216F68u;
            // 0x216f68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216F6Cu;
        goto label_216f6c;
    }
    ctx->pc = 0x216F64u;
    SET_GPR_U32(ctx, 31, 0x216F6Cu);
    ctx->pc = 0x216F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216F64u;
            // 0x216f68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x215E00u;
    if (runtime->hasFunction(0x215E00u)) {
        auto targetFn = runtime->lookupFunction(0x215E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216F6Cu; }
        if (ctx->pc != 0x216F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelectFish__9CAquariumFi_0x215e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216F6Cu; }
        if (ctx->pc != 0x216F6Cu) { return; }
    }
    ctx->pc = 0x216F6Cu;
label_216f6c:
    // 0x216f6c: 0xc0857c8  jal         func_215F20
label_216f70:
    if (ctx->pc == 0x216F70u) {
        ctx->pc = 0x216F70u;
            // 0x216f70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216F74u;
        goto label_216f74;
    }
    ctx->pc = 0x216F6Cu;
    SET_GPR_U32(ctx, 31, 0x216F74u);
    ctx->pc = 0x216F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216F6Cu;
            // 0x216f70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x215F20u;
    if (runtime->hasFunction(0x215F20u)) {
        auto targetFn = runtime->lookupFunction(0x215F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216F74u; }
        if (ctx->pc != 0x216F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelFishSetCursor__9CAquariumFv_0x215f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216F74u; }
        if (ctx->pc != 0x216F74u) { return; }
    }
    ctx->pc = 0x216F74u;
label_216f74:
    // 0x216f74: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x216f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_216f78:
    // 0x216f78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_216f7c:
    if (ctx->pc == 0x216F7Cu) {
        ctx->pc = 0x216F7Cu;
            // 0x216f7c: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x216F80u;
        goto label_216f80;
    }
    ctx->pc = 0x216F78u;
    {
        const bool branch_taken_0x216f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216F78u;
            // 0x216f7c: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216f78) {
            ctx->pc = 0x216F90u;
            goto label_216f90;
        }
    }
    ctx->pc = 0x216F80u;
label_216f80:
    // 0x216f80: 0xc094274  jal         func_2509D0
label_216f84:
    if (ctx->pc == 0x216F84u) {
        ctx->pc = 0x216F84u;
            // 0x216f84: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x216F88u;
        goto label_216f88;
    }
    ctx->pc = 0x216F80u;
    SET_GPR_U32(ctx, 31, 0x216F88u);
    ctx->pc = 0x216F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216F80u;
            // 0x216f84: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216F88u; }
        if (ctx->pc != 0x216F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216F88u; }
        if (ctx->pc != 0x216F88u) { return; }
    }
    ctx->pc = 0x216F88u;
label_216f88:
    // 0x216f88: 0x10000112  b           . + 4 + (0x112 << 2)
label_216f8c:
    if (ctx->pc == 0x216F8Cu) {
        ctx->pc = 0x216F8Cu;
            // 0x216f8c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x216F90u;
        goto label_216f90;
    }
    ctx->pc = 0x216F88u;
    {
        const bool branch_taken_0x216f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216F88u;
            // 0x216f8c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216f88) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216F90u;
label_216f90:
    // 0x216f90: 0x10400110  beqz        $v0, . + 4 + (0x110 << 2)
label_216f94:
    if (ctx->pc == 0x216F94u) {
        ctx->pc = 0x216F98u;
        goto label_216f98;
    }
    ctx->pc = 0x216F90u;
    {
        const bool branch_taken_0x216f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216f90) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216F98u;
label_216f98:
    // 0x216f98: 0x868202d8  lh          $v0, 0x2D8($s4)
    ctx->pc = 0x216f98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 728)));
label_216f9c:
    // 0x216f9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x216f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_216fa0:
    // 0x216fa0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x216fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_216fa4:
    // 0x216fa4: 0x8c5202b4  lw          $s2, 0x2B4($v0)
    ctx->pc = 0x216fa4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_216fa8:
    // 0x216fa8: 0x8e530938  lw          $s3, 0x938($s2)
    ctx->pc = 0x216fa8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2360)));
label_216fac:
    // 0x216fac: 0x96620048  lhu         $v0, 0x48($s3)
    ctx->pc = 0x216facu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 72)));
label_216fb0:
    // 0x216fb0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x216fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_216fb4:
    // 0x216fb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_216fb8:
    if (ctx->pc == 0x216FB8u) {
        ctx->pc = 0x216FB8u;
            // 0x216fb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216FBCu;
        goto label_216fbc;
    }
    ctx->pc = 0x216FB4u;
    {
        const bool branch_taken_0x216fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216FB4u;
            // 0x216fb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216fb4) {
            ctx->pc = 0x216FD8u;
            goto label_216fd8;
        }
    }
    ctx->pc = 0x216FBCu;
label_216fbc:
    // 0x216fbc: 0x2405012d  addiu       $a1, $zero, 0x12D
    ctx->pc = 0x216fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
label_216fc0:
    // 0x216fc0: 0xc0845ac  jal         func_2116B0
label_216fc4:
    if (ctx->pc == 0x216FC4u) {
        ctx->pc = 0x216FC4u;
            // 0x216fc4: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x216FC8u;
        goto label_216fc8;
    }
    ctx->pc = 0x216FC0u;
    SET_GPR_U32(ctx, 31, 0x216FC8u);
    ctx->pc = 0x216FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216FC0u;
            // 0x216fc4: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2116B0u;
    if (runtime->hasFunction(0x2116B0u)) {
        auto targetFn = runtime->lookupFunction(0x2116B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216FC8u; }
        if (ctx->pc != 0x216FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetInfoMsgID__8CAquaMesFi_0x2116b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216FC8u; }
        if (ctx->pc != 0x216FC8u) { return; }
    }
    ctx->pc = 0x216FC8u;
label_216fc8:
    // 0x216fc8: 0xc094274  jal         func_2509D0
label_216fcc:
    if (ctx->pc == 0x216FCCu) {
        ctx->pc = 0x216FCCu;
            // 0x216fcc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x216FD0u;
        goto label_216fd0;
    }
    ctx->pc = 0x216FC8u;
    SET_GPR_U32(ctx, 31, 0x216FD0u);
    ctx->pc = 0x216FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216FC8u;
            // 0x216fcc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216FD0u; }
        if (ctx->pc != 0x216FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216FD0u; }
        if (ctx->pc != 0x216FD0u) { return; }
    }
    ctx->pc = 0x216FD0u;
label_216fd0:
    // 0x216fd0: 0x10000100  b           . + 4 + (0x100 << 2)
label_216fd4:
    if (ctx->pc == 0x216FD4u) {
        ctx->pc = 0x216FD8u;
        goto label_216fd8;
    }
    ctx->pc = 0x216FD0u;
    {
        const bool branch_taken_0x216fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216fd0) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x216FD8u;
label_216fd8:
    // 0x216fd8: 0xc067660  jal         func_19D980
label_216fdc:
    if (ctx->pc == 0x216FDCu) {
        ctx->pc = 0x216FDCu;
            // 0x216fdc: 0x8e84006c  lw          $a0, 0x6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
        ctx->pc = 0x216FE0u;
        goto label_216fe0;
    }
    ctx->pc = 0x216FD8u;
    SET_GPR_U32(ctx, 31, 0x216FE0u);
    ctx->pc = 0x216FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216FD8u;
            // 0x216fdc: 0x8e84006c  lw          $a0, 0x6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D980u;
    if (runtime->hasFunction(0x19D980u)) {
        auto targetFn = runtime->lookupFunction(0x19D980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216FE0u; }
        if (ctx->pc != 0x216FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceUsedDataPtr__16CUserDataManagerFv_0x19d980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216FE0u; }
        if (ctx->pc != 0x216FE0u) { return; }
    }
    ctx->pc = 0x216FE0u;
label_216fe0:
    // 0x216fe0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_216fe4:
    if (ctx->pc == 0x216FE4u) {
        ctx->pc = 0x216FE4u;
            // 0x216fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216FE8u;
        goto label_216fe8;
    }
    ctx->pc = 0x216FE0u;
    {
        const bool branch_taken_0x216fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216FE0u;
            // 0x216fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216fe0) {
            ctx->pc = 0x217068u;
            goto label_217068;
        }
    }
    ctx->pc = 0x216FE8u;
label_216fe8:
    // 0x216fe8: 0x12400020  beqz        $s2, . + 4 + (0x20 << 2)
label_216fec:
    if (ctx->pc == 0x216FECu) {
        ctx->pc = 0x216FECu;
            // 0x216fec: 0x2405012e  addiu       $a1, $zero, 0x12E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
        ctx->pc = 0x216FF0u;
        goto label_216ff0;
    }
    ctx->pc = 0x216FE8u;
    {
        const bool branch_taken_0x216fe8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x216FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216FE8u;
            // 0x216fec: 0x2405012e  addiu       $a1, $zero, 0x12E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216fe8) {
            ctx->pc = 0x21706Cu;
            goto label_21706c;
        }
    }
    ctx->pc = 0x216FF0u;
label_216ff0:
    // 0x216ff0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x216ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_216ff4:
    // 0x216ff4: 0xc06666c  jal         func_1999B0
label_216ff8:
    if (ctx->pc == 0x216FF8u) {
        ctx->pc = 0x216FF8u;
            // 0x216ff8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216FFCu;
        goto label_216ffc;
    }
    ctx->pc = 0x216FF4u;
    SET_GPR_U32(ctx, 31, 0x216FFCu);
    ctx->pc = 0x216FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216FF4u;
            // 0x216ff8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216FFCu; }
        if (ctx->pc != 0x216FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216FFCu; }
        if (ctx->pc != 0x216FFCu) { return; }
    }
    ctx->pc = 0x216FFCu;
label_216ffc:
    // 0x216ffc: 0x868302d8  lh          $v1, 0x2D8($s4)
    ctx->pc = 0x216ffcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 728)));
label_217000:
    // 0x217000: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x217000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
label_217004:
    // 0x217004: 0x2442c480  addiu       $v0, $v0, -0x3B80
    ctx->pc = 0x217004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952064));
label_217008:
    // 0x217008: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x217008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21700c:
    // 0x21700c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21700cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_217010:
    // 0x217010: 0xc083bcc  jal         func_20EF30
label_217014:
    if (ctx->pc == 0x217014u) {
        ctx->pc = 0x217014u;
            // 0x217014: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x217018u;
        goto label_217018;
    }
    ctx->pc = 0x217010u;
    SET_GPR_U32(ctx, 31, 0x217018u);
    ctx->pc = 0x217014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217010u;
            // 0x217014: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20EF30u;
    if (runtime->hasFunction(0x20EF30u)) {
        auto targetFn = runtime->lookupFunction(0x20EF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217018u; }
        if (ctx->pc != 0x217018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CAquaFishEffFv_0x20ef30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217018u; }
        if (ctx->pc != 0x217018u) { return; }
    }
    ctx->pc = 0x217018u;
label_217018:
    // 0x217018: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x217018u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21701c:
    // 0x21701c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x21701cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_217020:
    // 0x217020: 0x320f809  jalr        $t9
label_217024:
    if (ctx->pc == 0x217024u) {
        ctx->pc = 0x217024u;
            // 0x217024: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x217028u;
        goto label_217028;
    }
    ctx->pc = 0x217020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x217028u);
        ctx->pc = 0x217024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217020u;
            // 0x217024: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x217028u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x217028u; }
            if (ctx->pc != 0x217028u) { return; }
        }
        }
    }
    ctx->pc = 0x217028u;
label_217028:
    // 0x217028: 0x868202d8  lh          $v0, 0x2D8($s4)
    ctx->pc = 0x217028u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 728)));
label_21702c:
    // 0x21702c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21702cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_217030:
    // 0x217030: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x217030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_217034:
    // 0x217034: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x217034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_217038:
    // 0x217038: 0xc08575c  jal         func_215D70
label_21703c:
    if (ctx->pc == 0x21703Cu) {
        ctx->pc = 0x21703Cu;
            // 0x21703c: 0xac4002b4  sw          $zero, 0x2B4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 692), GPR_U32(ctx, 0));
        ctx->pc = 0x217040u;
        goto label_217040;
    }
    ctx->pc = 0x217038u;
    SET_GPR_U32(ctx, 31, 0x217040u);
    ctx->pc = 0x21703Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217038u;
            // 0x21703c: 0xac4002b4  sw          $zero, 0x2B4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 692), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x215D70u;
    if (runtime->hasFunction(0x215D70u)) {
        auto targetFn = runtime->lookupFunction(0x215D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217040u; }
        if (ctx->pc != 0x217040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSelFish__9CAquariumFv_0x215d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217040u; }
        if (ctx->pc != 0x217040u) { return; }
    }
    ctx->pc = 0x217040u;
label_217040:
    // 0x217040: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_217044:
    if (ctx->pc == 0x217044u) {
        ctx->pc = 0x217044u;
            // 0x217044: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x217048u;
        goto label_217048;
    }
    ctx->pc = 0x217040u;
    {
        const bool branch_taken_0x217040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217040u;
            // 0x217044: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217040) {
            ctx->pc = 0x217058u;
            goto label_217058;
        }
    }
    ctx->pc = 0x217048u;
label_217048:
    // 0x217048: 0xc094274  jal         func_2509D0
label_21704c:
    if (ctx->pc == 0x21704Cu) {
        ctx->pc = 0x21704Cu;
            // 0x21704c: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x217050u;
        goto label_217050;
    }
    ctx->pc = 0x217048u;
    SET_GPR_U32(ctx, 31, 0x217050u);
    ctx->pc = 0x21704Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217048u;
            // 0x21704c: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217050u; }
        if (ctx->pc != 0x217050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217050u; }
        if (ctx->pc != 0x217050u) { return; }
    }
    ctx->pc = 0x217050u;
label_217050:
    // 0x217050: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x217050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217054:
    // 0x217054: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x217054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217058:
    // 0x217058: 0xc094274  jal         func_2509D0
label_21705c:
    if (ctx->pc == 0x21705Cu) {
        ctx->pc = 0x217060u;
        goto label_217060;
    }
    ctx->pc = 0x217058u;
    SET_GPR_U32(ctx, 31, 0x217060u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217060u; }
        if (ctx->pc != 0x217060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217060u; }
        if (ctx->pc != 0x217060u) { return; }
    }
    ctx->pc = 0x217060u;
label_217060:
    // 0x217060: 0x100000dc  b           . + 4 + (0xDC << 2)
label_217064:
    if (ctx->pc == 0x217064u) {
        ctx->pc = 0x217068u;
        goto label_217068;
    }
    ctx->pc = 0x217060u;
    {
        const bool branch_taken_0x217060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217060) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x217068u;
label_217068:
    // 0x217068: 0x2405012e  addiu       $a1, $zero, 0x12E
    ctx->pc = 0x217068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
label_21706c:
    // 0x21706c: 0xc0845ac  jal         func_2116B0
label_217070:
    if (ctx->pc == 0x217070u) {
        ctx->pc = 0x217070u;
            // 0x217070: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x217074u;
        goto label_217074;
    }
    ctx->pc = 0x21706Cu;
    SET_GPR_U32(ctx, 31, 0x217074u);
    ctx->pc = 0x217070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21706Cu;
            // 0x217070: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2116B0u;
    if (runtime->hasFunction(0x2116B0u)) {
        auto targetFn = runtime->lookupFunction(0x2116B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217074u; }
        if (ctx->pc != 0x217074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetInfoMsgID__8CAquaMesFi_0x2116b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217074u; }
        if (ctx->pc != 0x217074u) { return; }
    }
    ctx->pc = 0x217074u;
label_217074:
    // 0x217074: 0xc094274  jal         func_2509D0
label_217078:
    if (ctx->pc == 0x217078u) {
        ctx->pc = 0x217078u;
            // 0x217078: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x21707Cu;
        goto label_21707c;
    }
    ctx->pc = 0x217074u;
    SET_GPR_U32(ctx, 31, 0x21707Cu);
    ctx->pc = 0x217078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217074u;
            // 0x217078: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21707Cu; }
        if (ctx->pc != 0x21707Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21707Cu; }
        if (ctx->pc != 0x21707Cu) { return; }
    }
    ctx->pc = 0x21707Cu;
label_21707c:
    // 0x21707c: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_217080:
    if (ctx->pc == 0x217080u) {
        ctx->pc = 0x217084u;
        goto label_217084;
    }
    ctx->pc = 0x21707Cu;
    {
        const bool branch_taken_0x21707c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21707c) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x217084u;
label_217084:
    // 0x217084: 0x124000d3  beqz        $s2, . + 4 + (0xD3 << 2)
label_217088:
    if (ctx->pc == 0x217088u) {
        ctx->pc = 0x217088u;
            // 0x217088: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x21708Cu;
        goto label_21708c;
    }
    ctx->pc = 0x217084u;
    {
        const bool branch_taken_0x217084 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x217088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217084u;
            // 0x217088: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217084) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x21708Cu;
label_21708c:
    // 0x21708c: 0xc094274  jal         func_2509D0
label_217090:
    if (ctx->pc == 0x217090u) {
        ctx->pc = 0x217090u;
            // 0x217090: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x217094u;
        goto label_217094;
    }
    ctx->pc = 0x21708Cu;
    SET_GPR_U32(ctx, 31, 0x217094u);
    ctx->pc = 0x217090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21708Cu;
            // 0x217090: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217094u; }
        if (ctx->pc != 0x217094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217094u; }
        if (ctx->pc != 0x217094u) { return; }
    }
    ctx->pc = 0x217094u;
label_217094:
    // 0x217094: 0x100000cf  b           . + 4 + (0xCF << 2)
label_217098:
    if (ctx->pc == 0x217098u) {
        ctx->pc = 0x21709Cu;
        goto label_21709c;
    }
    ctx->pc = 0x217094u;
    {
        const bool branch_taken_0x217094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217094) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x21709Cu;
label_21709c:
    // 0x21709c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21709cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2170a0:
    // 0x2170a0: 0xc085780  jal         func_215E00
label_2170a4:
    if (ctx->pc == 0x2170A4u) {
        ctx->pc = 0x2170A4u;
            // 0x2170a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2170A8u;
        goto label_2170a8;
    }
    ctx->pc = 0x2170A0u;
    SET_GPR_U32(ctx, 31, 0x2170A8u);
    ctx->pc = 0x2170A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2170A0u;
            // 0x2170a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x215E00u;
    if (runtime->hasFunction(0x215E00u)) {
        auto targetFn = runtime->lookupFunction(0x215E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2170A8u; }
        if (ctx->pc != 0x2170A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelectFish__9CAquariumFi_0x215e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2170A8u; }
        if (ctx->pc != 0x2170A8u) { return; }
    }
    ctx->pc = 0x2170A8u;
label_2170a8:
    // 0x2170a8: 0xc0857c8  jal         func_215F20
label_2170ac:
    if (ctx->pc == 0x2170ACu) {
        ctx->pc = 0x2170ACu;
            // 0x2170ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2170B0u;
        goto label_2170b0;
    }
    ctx->pc = 0x2170A8u;
    SET_GPR_U32(ctx, 31, 0x2170B0u);
    ctx->pc = 0x2170ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2170A8u;
            // 0x2170ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x215F20u;
    if (runtime->hasFunction(0x215F20u)) {
        auto targetFn = runtime->lookupFunction(0x215F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2170B0u; }
        if (ctx->pc != 0x2170B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelFishSetCursor__9CAquariumFv_0x215f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2170B0u; }
        if (ctx->pc != 0x2170B0u) { return; }
    }
    ctx->pc = 0x2170B0u;
label_2170b0:
    // 0x2170b0: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x2170b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_2170b4:
    // 0x2170b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2170b8:
    if (ctx->pc == 0x2170B8u) {
        ctx->pc = 0x2170B8u;
            // 0x2170b8: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x2170BCu;
        goto label_2170bc;
    }
    ctx->pc = 0x2170B4u;
    {
        const bool branch_taken_0x2170b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2170B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2170B4u;
            // 0x2170b8: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2170b4) {
            ctx->pc = 0x2170CCu;
            goto label_2170cc;
        }
    }
    ctx->pc = 0x2170BCu;
label_2170bc:
    // 0x2170bc: 0xc094274  jal         func_2509D0
label_2170c0:
    if (ctx->pc == 0x2170C0u) {
        ctx->pc = 0x2170C0u;
            // 0x2170c0: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x2170C4u;
        goto label_2170c4;
    }
    ctx->pc = 0x2170BCu;
    SET_GPR_U32(ctx, 31, 0x2170C4u);
    ctx->pc = 0x2170C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2170BCu;
            // 0x2170c0: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2170C4u; }
        if (ctx->pc != 0x2170C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2170C4u; }
        if (ctx->pc != 0x2170C4u) { return; }
    }
    ctx->pc = 0x2170C4u;
label_2170c4:
    // 0x2170c4: 0x100000c3  b           . + 4 + (0xC3 << 2)
label_2170c8:
    if (ctx->pc == 0x2170C8u) {
        ctx->pc = 0x2170C8u;
            // 0x2170c8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2170CCu;
        goto label_2170cc;
    }
    ctx->pc = 0x2170C4u;
    {
        const bool branch_taken_0x2170c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2170C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2170C4u;
            // 0x2170c8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2170c4) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x2170CCu;
label_2170cc:
    // 0x2170cc: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
label_2170d0:
    if (ctx->pc == 0x2170D0u) {
        ctx->pc = 0x2170D4u;
        goto label_2170d4;
    }
    ctx->pc = 0x2170CCu;
    {
        const bool branch_taken_0x2170cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2170cc) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x2170D4u;
label_2170d4:
    // 0x2170d4: 0x868202d8  lh          $v0, 0x2D8($s4)
    ctx->pc = 0x2170d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 728)));
label_2170d8:
    // 0x2170d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2170d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2170dc:
    // 0x2170dc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2170dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2170e0:
    // 0x2170e0: 0x8c4202b4  lw          $v0, 0x2B4($v0)
    ctx->pc = 0x2170e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_2170e4:
    // 0x2170e4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2170e8:
    if (ctx->pc == 0x2170E8u) {
        ctx->pc = 0x2170E8u;
            // 0x2170e8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2170ECu;
        goto label_2170ec;
    }
    ctx->pc = 0x2170E4u;
    {
        const bool branch_taken_0x2170e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2170E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2170E4u;
            // 0x2170e8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2170e4) {
            ctx->pc = 0x2170FCu;
            goto label_2170fc;
        }
    }
    ctx->pc = 0x2170ECu;
label_2170ec:
    // 0x2170ec: 0xc094274  jal         func_2509D0
label_2170f0:
    if (ctx->pc == 0x2170F0u) {
        ctx->pc = 0x2170F4u;
        goto label_2170f4;
    }
    ctx->pc = 0x2170ECu;
    SET_GPR_U32(ctx, 31, 0x2170F4u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2170F4u; }
        if (ctx->pc != 0x2170F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2170F4u; }
        if (ctx->pc != 0x2170F4u) { return; }
    }
    ctx->pc = 0x2170F4u;
label_2170f4:
    // 0x2170f4: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_2170f8:
    if (ctx->pc == 0x2170F8u) {
        ctx->pc = 0x2170FCu;
        goto label_2170fc;
    }
    ctx->pc = 0x2170F4u;
    {
        const bool branch_taken_0x2170f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2170f4) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x2170FCu;
label_2170fc:
    // 0x2170fc: 0x8c420938  lw          $v0, 0x938($v0)
    ctx->pc = 0x2170fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2360)));
label_217100:
    // 0x217100: 0x94420048  lhu         $v0, 0x48($v0)
    ctx->pc = 0x217100u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_217104:
    // 0x217104: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x217104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_217108:
    // 0x217108: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_21710c:
    if (ctx->pc == 0x21710Cu) {
        ctx->pc = 0x21710Cu;
            // 0x21710c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x217110u;
        goto label_217110;
    }
    ctx->pc = 0x217108u;
    {
        const bool branch_taken_0x217108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21710Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217108u;
            // 0x21710c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217108) {
            ctx->pc = 0x217130u;
            goto label_217130;
        }
    }
    ctx->pc = 0x217110u;
label_217110:
    // 0x217110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_217114:
    // 0x217114: 0x2405012d  addiu       $a1, $zero, 0x12D
    ctx->pc = 0x217114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
label_217118:
    // 0x217118: 0xc0845ac  jal         func_2116B0
label_21711c:
    if (ctx->pc == 0x21711Cu) {
        ctx->pc = 0x21711Cu;
            // 0x21711c: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x217120u;
        goto label_217120;
    }
    ctx->pc = 0x217118u;
    SET_GPR_U32(ctx, 31, 0x217120u);
    ctx->pc = 0x21711Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217118u;
            // 0x21711c: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2116B0u;
    if (runtime->hasFunction(0x2116B0u)) {
        auto targetFn = runtime->lookupFunction(0x2116B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217120u; }
        if (ctx->pc != 0x217120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetInfoMsgID__8CAquaMesFi_0x2116b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217120u; }
        if (ctx->pc != 0x217120u) { return; }
    }
    ctx->pc = 0x217120u;
label_217120:
    // 0x217120: 0xc094274  jal         func_2509D0
label_217124:
    if (ctx->pc == 0x217124u) {
        ctx->pc = 0x217124u;
            // 0x217124: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x217128u;
        goto label_217128;
    }
    ctx->pc = 0x217120u;
    SET_GPR_U32(ctx, 31, 0x217128u);
    ctx->pc = 0x217124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217120u;
            // 0x217124: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217128u; }
        if (ctx->pc != 0x217128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217128u; }
        if (ctx->pc != 0x217128u) { return; }
    }
    ctx->pc = 0x217128u;
label_217128:
    // 0x217128: 0x100000aa  b           . + 4 + (0xAA << 2)
label_21712c:
    if (ctx->pc == 0x21712Cu) {
        ctx->pc = 0x217130u;
        goto label_217130;
    }
    ctx->pc = 0x217128u;
    {
        const bool branch_taken_0x217128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217128) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x217130u;
label_217130:
    // 0x217130: 0xc094274  jal         func_2509D0
label_217134:
    if (ctx->pc == 0x217134u) {
        ctx->pc = 0x217138u;
        goto label_217138;
    }
    ctx->pc = 0x217130u;
    SET_GPR_U32(ctx, 31, 0x217138u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217138u; }
        if (ctx->pc != 0x217138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217138u; }
        if (ctx->pc != 0x217138u) { return; }
    }
    ctx->pc = 0x217138u;
label_217138:
    // 0x217138: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_21713c:
    if (ctx->pc == 0x21713Cu) {
        ctx->pc = 0x21713Cu;
            // 0x21713c: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x217140u;
        goto label_217140;
    }
    ctx->pc = 0x217138u;
    {
        const bool branch_taken_0x217138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21713Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217138u;
            // 0x21713c: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217138) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x217140u;
label_217140:
    // 0x217140: 0xc08454c  jal         func_211530
label_217144:
    if (ctx->pc == 0x217144u) {
        ctx->pc = 0x217144u;
            // 0x217144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x217148u;
        goto label_217148;
    }
    ctx->pc = 0x217140u;
    SET_GPR_U32(ctx, 31, 0x217148u);
    ctx->pc = 0x217144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217140u;
            // 0x217144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211530u;
    if (runtime->hasFunction(0x211530u)) {
        auto targetFn = runtime->lookupFunction(0x211530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217148u; }
        if (ctx->pc != 0x217148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddQuestionCursor__8CAquaMesFv_0x211530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217148u; }
        if (ctx->pc != 0x217148u) { return; }
    }
    ctx->pc = 0x217148u;
label_217148:
    // 0x217148: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21714c:
    if (ctx->pc == 0x21714Cu) {
        ctx->pc = 0x21714Cu;
            // 0x21714c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x217150u;
        goto label_217150;
    }
    ctx->pc = 0x217148u;
    {
        const bool branch_taken_0x217148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21714Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217148u;
            // 0x21714c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217148) {
            ctx->pc = 0x217158u;
            goto label_217158;
        }
    }
    ctx->pc = 0x217150u;
label_217150:
    // 0x217150: 0xc094274  jal         func_2509D0
label_217154:
    if (ctx->pc == 0x217154u) {
        ctx->pc = 0x217158u;
        goto label_217158;
    }
    ctx->pc = 0x217150u;
    SET_GPR_U32(ctx, 31, 0x217158u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217158u; }
        if (ctx->pc != 0x217158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217158u; }
        if (ctx->pc != 0x217158u) { return; }
    }
    ctx->pc = 0x217158u;
label_217158:
    // 0x217158: 0x8f839214  lw          $v1, -0x6DEC($gp)
    ctx->pc = 0x217158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939156)));
label_21715c:
    // 0x21715c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21715cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217160:
    // 0x217160: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_217164:
    if (ctx->pc == 0x217164u) {
        ctx->pc = 0x217164u;
            // 0x217164: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x217168u;
        goto label_217168;
    }
    ctx->pc = 0x217160u;
    {
        const bool branch_taken_0x217160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x217164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217160u;
            // 0x217164: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217160) {
            ctx->pc = 0x217194u;
            goto label_217194;
        }
    }
    ctx->pc = 0x217168u;
label_217168:
    // 0x217168: 0x87829220  lh          $v0, -0x6DE0($gp)
    ctx->pc = 0x217168u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939168)));
label_21716c:
    // 0x21716c: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_217170:
    if (ctx->pc == 0x217170u) {
        ctx->pc = 0x217170u;
            // 0x217170: 0x40082a  slt         $at, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->pc = 0x217174u;
        goto label_217174;
    }
    ctx->pc = 0x21716Cu;
    {
        const bool branch_taken_0x21716c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x217170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21716Cu;
            // 0x217170: 0x40082a  slt         $at, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21716c) {
            ctx->pc = 0x217190u;
            goto label_217190;
        }
    }
    ctx->pc = 0x217174u;
label_217174:
    // 0x217174: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
label_217178:
    if (ctx->pc == 0x217178u) {
        ctx->pc = 0x21717Cu;
        goto label_21717c;
    }
    ctx->pc = 0x217174u;
    {
        const bool branch_taken_0x217174 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x217174) {
            ctx->pc = 0x2171A0u;
            goto label_2171a0;
        }
    }
    ctx->pc = 0x21717Cu;
label_21717c:
    // 0x21717c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21717cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_217180:
    // 0x217180: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x217180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_217184:
    // 0x217184: 0x8c4202b4  lw          $v0, 0x2B4($v0)
    ctx->pc = 0x217184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_217188:
    // 0x217188: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_21718c:
    if (ctx->pc == 0x21718Cu) {
        ctx->pc = 0x21718Cu;
            // 0x21718c: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x217190u;
        goto label_217190;
    }
    ctx->pc = 0x217188u;
    {
        const bool branch_taken_0x217188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21718Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217188u;
            // 0x21718c: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x217188) {
            ctx->pc = 0x2171A4u;
            goto label_2171a4;
        }
    }
    ctx->pc = 0x217190u;
label_217190:
    // 0x217190: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x217190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_217194:
    // 0x217194: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x217194u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_217198:
    // 0x217198: 0x1000008e  b           . + 4 + (0x8E << 2)
label_21719c:
    if (ctx->pc == 0x21719Cu) {
        ctx->pc = 0x21719Cu;
            // 0x21719c: 0xa7829220  sh          $v0, -0x6DE0($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294939168), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2171A0u;
        goto label_2171a0;
    }
    ctx->pc = 0x217198u;
    {
        const bool branch_taken_0x217198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21719Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217198u;
            // 0x21719c: 0xa7829220  sh          $v0, -0x6DE0($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294939168), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217198) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x2171A0u;
label_2171a0:
    // 0x2171a0: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x2171a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_2171a4:
    // 0x2171a4: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
label_2171a8:
    if (ctx->pc == 0x2171A8u) {
        ctx->pc = 0x2171A8u;
            // 0x2171a8: 0x32420002  andi        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x2171ACu;
        goto label_2171ac;
    }
    ctx->pc = 0x2171A4u;
    {
        const bool branch_taken_0x2171a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2171A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2171A4u;
            // 0x2171a8: 0x32420002  andi        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2171a4) {
            ctx->pc = 0x217308u;
            goto label_217308;
        }
    }
    ctx->pc = 0x2171ACu;
label_2171ac:
    // 0x2171ac: 0x8f84920c  lw          $a0, -0x6DF4($gp)
    ctx->pc = 0x2171acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939148)));
label_2171b0:
    // 0x2171b0: 0x27828288  addiu       $v0, $gp, -0x7D78
    ctx->pc = 0x2171b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935176));
label_2171b4:
    // 0x2171b4: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x2171b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2171b8:
    // 0x2171b8: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2171b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2171bc:
    // 0x2171bc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2171bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2171c0:
    // 0x2171c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2171c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2171c4:
    // 0x2171c4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2171c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2171c8:
    // 0x2171c8: 0x80520000  lb          $s2, 0x0($v0)
    ctx->pc = 0x2171c8u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2171cc:
    // 0x2171cc: 0xc066898  jal         func_19A260
label_2171d0:
    if (ctx->pc == 0x2171D0u) {
        ctx->pc = 0x2171D0u;
            // 0x2171d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2171D4u;
        goto label_2171d4;
    }
    ctx->pc = 0x2171CCu;
    SET_GPR_U32(ctx, 31, 0x2171D4u);
    ctx->pc = 0x2171D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2171CCu;
            // 0x2171d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A260u;
    if (runtime->hasFunction(0x19A260u)) {
        auto targetFn = runtime->lookupFunction(0x19A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2171D4u; }
        if (ctx->pc != 0x2171D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchAqua1NotUsed__13CFishAquariumFi_0x19a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2171D4u; }
        if (ctx->pc != 0x2171D4u) { return; }
    }
    ctx->pc = 0x2171D4u;
label_2171d4:
    // 0x2171d4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2171d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2171d8:
    // 0x2171d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2171d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2171dc:
    // 0x2171dc: 0x16420020  bne         $s2, $v0, . + 4 + (0x20 << 2)
label_2171e0:
    if (ctx->pc == 0x2171E0u) {
        ctx->pc = 0x2171E4u;
        goto label_2171e4;
    }
    ctx->pc = 0x2171DCu;
    {
        const bool branch_taken_0x2171dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2171dc) {
            ctx->pc = 0x217260u;
            goto label_217260;
        }
    }
    ctx->pc = 0x2171E4u;
label_2171e4:
    // 0x2171e4: 0x8f829218  lw          $v0, -0x6DE8($gp)
    ctx->pc = 0x2171e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939160)));
label_2171e8:
    // 0x2171e8: 0x8f84920c  lw          $a0, -0x6DF4($gp)
    ctx->pc = 0x2171e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939148)));
label_2171ec:
    // 0x2171ec: 0x8c530938  lw          $s3, 0x938($v0)
    ctx->pc = 0x2171ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2360)));
label_2171f0:
    // 0x2171f0: 0xc066924  jal         func_19A490
label_2171f4:
    if (ctx->pc == 0x2171F4u) {
        ctx->pc = 0x2171F4u;
            // 0x2171f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2171F8u;
        goto label_2171f8;
    }
    ctx->pc = 0x2171F0u;
    SET_GPR_U32(ctx, 31, 0x2171F8u);
    ctx->pc = 0x2171F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2171F0u;
            // 0x2171f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A490u;
    if (runtime->hasFunction(0x19A490u)) {
        auto targetFn = runtime->lookupFunction(0x19A490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2171F8u; }
        if (ctx->pc != 0x2171F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHaigouTankSex__13CFishAquariumFP13CGameDataUsed_0x19a490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2171F8u; }
        if (ctx->pc != 0x2171F8u) { return; }
    }
    ctx->pc = 0x2171F8u;
label_2171f8:
    // 0x2171f8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2171fc:
    if (ctx->pc == 0x2171FCu) {
        ctx->pc = 0x217200u;
        goto label_217200;
    }
    ctx->pc = 0x2171F8u;
    {
        const bool branch_taken_0x2171f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2171f8) {
            ctx->pc = 0x217224u;
            goto label_217224;
        }
    }
    ctx->pc = 0x217200u;
label_217200:
    // 0x217200: 0x82620025  lb          $v0, 0x25($s3)
    ctx->pc = 0x217200u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 37)));
label_217204:
    // 0x217204: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_217208:
    // 0x217208: 0x2410000d  addiu       $s0, $zero, 0xD
    ctx->pc = 0x217208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_21720c:
    // 0x21720c: 0xc0845ac  jal         func_2116B0
label_217210:
    if (ctx->pc == 0x217210u) {
        ctx->pc = 0x217210u;
            // 0x217210: 0x24450130  addiu       $a1, $v0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
        ctx->pc = 0x217214u;
        goto label_217214;
    }
    ctx->pc = 0x21720Cu;
    SET_GPR_U32(ctx, 31, 0x217214u);
    ctx->pc = 0x217210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21720Cu;
            // 0x217210: 0x24450130  addiu       $a1, $v0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2116B0u;
    if (runtime->hasFunction(0x2116B0u)) {
        auto targetFn = runtime->lookupFunction(0x2116B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217214u; }
        if (ctx->pc != 0x217214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetInfoMsgID__8CAquaMesFi_0x2116b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217214u; }
        if (ctx->pc != 0x217214u) { return; }
    }
    ctx->pc = 0x217214u;
label_217214:
    // 0x217214: 0xc094274  jal         func_2509D0
label_217218:
    if (ctx->pc == 0x217218u) {
        ctx->pc = 0x217218u;
            // 0x217218: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x21721Cu;
        goto label_21721c;
    }
    ctx->pc = 0x217214u;
    SET_GPR_U32(ctx, 31, 0x21721Cu);
    ctx->pc = 0x217218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217214u;
            // 0x217218: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21721Cu; }
        if (ctx->pc != 0x21721Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21721Cu; }
        if (ctx->pc != 0x21721Cu) { return; }
    }
    ctx->pc = 0x21721Cu;
label_21721c:
    // 0x21721c: 0x1000006d  b           . + 4 + (0x6D << 2)
label_217220:
    if (ctx->pc == 0x217220u) {
        ctx->pc = 0x217224u;
        goto label_217224;
    }
    ctx->pc = 0x21721Cu;
    {
        const bool branch_taken_0x21721c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21721c) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x217224u;
label_217224:
    // 0x217224: 0x82620045  lb          $v0, 0x45($s3)
    ctx->pc = 0x217224u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 69)));
label_217228:
    // 0x217228: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x217228u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21722c:
    // 0x21722c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_217230:
    if (ctx->pc == 0x217230u) {
        ctx->pc = 0x217234u;
        goto label_217234;
    }
    ctx->pc = 0x21722Cu;
    {
        const bool branch_taken_0x21722c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21722c) {
            ctx->pc = 0x217260u;
            goto label_217260;
        }
    }
    ctx->pc = 0x217234u;
label_217234:
    // 0x217234: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x217234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_217238:
    // 0x217238: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21723c:
    // 0x21723c: 0x24050133  addiu       $a1, $zero, 0x133
    ctx->pc = 0x21723cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 307));
label_217240:
    // 0x217240: 0x2410000d  addiu       $s0, $zero, 0xD
    ctx->pc = 0x217240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_217244:
    // 0x217244: 0xac621a44  sw          $v0, 0x1A44($v1)
    ctx->pc = 0x217244u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6724), GPR_U32(ctx, 2));
label_217248:
    // 0x217248: 0xc0845ac  jal         func_2116B0
label_21724c:
    if (ctx->pc == 0x21724Cu) {
        ctx->pc = 0x21724Cu;
            // 0x21724c: 0xac601a84  sw          $zero, 0x1A84($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 6788), GPR_U32(ctx, 0));
        ctx->pc = 0x217250u;
        goto label_217250;
    }
    ctx->pc = 0x217248u;
    SET_GPR_U32(ctx, 31, 0x217250u);
    ctx->pc = 0x21724Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217248u;
            // 0x21724c: 0xac601a84  sw          $zero, 0x1A84($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 6788), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2116B0u;
    if (runtime->hasFunction(0x2116B0u)) {
        auto targetFn = runtime->lookupFunction(0x2116B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217250u; }
        if (ctx->pc != 0x217250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetInfoMsgID__8CAquaMesFi_0x2116b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217250u; }
        if (ctx->pc != 0x217250u) { return; }
    }
    ctx->pc = 0x217250u;
label_217250:
    // 0x217250: 0xc094274  jal         func_2509D0
label_217254:
    if (ctx->pc == 0x217254u) {
        ctx->pc = 0x217254u;
            // 0x217254: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x217258u;
        goto label_217258;
    }
    ctx->pc = 0x217250u;
    SET_GPR_U32(ctx, 31, 0x217258u);
    ctx->pc = 0x217254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217250u;
            // 0x217254: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217258u; }
        if (ctx->pc != 0x217258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217258u; }
        if (ctx->pc != 0x217258u) { return; }
    }
    ctx->pc = 0x217258u;
label_217258:
    // 0x217258: 0x1000005e  b           . + 4 + (0x5E << 2)
label_21725c:
    if (ctx->pc == 0x21725Cu) {
        ctx->pc = 0x217260u;
        goto label_217260;
    }
    ctx->pc = 0x217258u;
    {
        const bool branch_taken_0x217258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217258) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x217260u;
label_217260:
    // 0x217260: 0x6a10005  bgez        $s5, . + 4 + (0x5 << 2)
label_217264:
    if (ctx->pc == 0x217264u) {
        ctx->pc = 0x217264u;
            // 0x217264: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x217268u;
        goto label_217268;
    }
    ctx->pc = 0x217260u;
    {
        const bool branch_taken_0x217260 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x217264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217260u;
            // 0x217264: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217260) {
            ctx->pc = 0x217278u;
            goto label_217278;
        }
    }
    ctx->pc = 0x217268u;
label_217268:
    // 0x217268: 0xc094274  jal         func_2509D0
label_21726c:
    if (ctx->pc == 0x21726Cu) {
        ctx->pc = 0x217270u;
        goto label_217270;
    }
    ctx->pc = 0x217268u;
    SET_GPR_U32(ctx, 31, 0x217270u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217270u; }
        if (ctx->pc != 0x217270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217270u; }
        if (ctx->pc != 0x217270u) { return; }
    }
    ctx->pc = 0x217270u;
label_217270:
    // 0x217270: 0x10000058  b           . + 4 + (0x58 << 2)
label_217274:
    if (ctx->pc == 0x217274u) {
        ctx->pc = 0x217278u;
        goto label_217278;
    }
    ctx->pc = 0x217270u;
    {
        const bool branch_taken_0x217270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217270) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x217278u;
label_217278:
    // 0x217278: 0x8f829218  lw          $v0, -0x6DE8($gp)
    ctx->pc = 0x217278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939160)));
label_21727c:
    // 0x21727c: 0xc065b18  jal         func_196C60
label_217280:
    if (ctx->pc == 0x217280u) {
        ctx->pc = 0x217280u;
            // 0x217280: 0x8c500938  lw          $s0, 0x938($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2360)));
        ctx->pc = 0x217284u;
        goto label_217284;
    }
    ctx->pc = 0x21727Cu;
    SET_GPR_U32(ctx, 31, 0x217284u);
    ctx->pc = 0x217280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21727Cu;
            // 0x217280: 0x8c500938  lw          $s0, 0x938($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2360)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196C60u;
    if (runtime->hasFunction(0x196C60u)) {
        auto targetFn = runtime->lookupFunction(0x196C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217284u; }
        if (ctx->pc != 0x217284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAquariumData__Fv_0x196c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217284u; }
        if (ctx->pc != 0x217284u) { return; }
    }
    ctx->pc = 0x217284u;
label_217284:
    // 0x217284: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x217284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_217288:
    // 0x217288: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x217288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21728c:
    // 0x21728c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x21728cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_217290:
    // 0x217290: 0xc0668b4  jal         func_19A2D0
label_217294:
    if (ctx->pc == 0x217294u) {
        ctx->pc = 0x217294u;
            // 0x217294: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x217298u;
        goto label_217298;
    }
    ctx->pc = 0x217290u;
    SET_GPR_U32(ctx, 31, 0x217298u);
    ctx->pc = 0x217294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217290u;
            // 0x217294: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A2D0u;
    if (runtime->hasFunction(0x19A2D0u)) {
        auto targetFn = runtime->lookupFunction(0x19A2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217298u; }
        if (ctx->pc != 0x217298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FishIntoAquarium__13CFishAquariumFiiP13CGameDataUsed_0x19a2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217298u; }
        if (ctx->pc != 0x217298u) { return; }
    }
    ctx->pc = 0x217298u;
label_217298:
    // 0x217298: 0x868302d8  lh          $v1, 0x2D8($s4)
    ctx->pc = 0x217298u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 728)));
label_21729c:
    // 0x21729c: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x21729cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
label_2172a0:
    // 0x2172a0: 0x2442c480  addiu       $v0, $v0, -0x3B80
    ctx->pc = 0x2172a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952064));
label_2172a4:
    // 0x2172a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2172a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2172a8:
    // 0x2172a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2172a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2172ac:
    // 0x2172ac: 0xc083bcc  jal         func_20EF30
label_2172b0:
    if (ctx->pc == 0x2172B0u) {
        ctx->pc = 0x2172B0u;
            // 0x2172b0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x2172B4u;
        goto label_2172b4;
    }
    ctx->pc = 0x2172ACu;
    SET_GPR_U32(ctx, 31, 0x2172B4u);
    ctx->pc = 0x2172B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2172ACu;
            // 0x2172b0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20EF30u;
    if (runtime->hasFunction(0x20EF30u)) {
        auto targetFn = runtime->lookupFunction(0x20EF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2172B4u; }
        if (ctx->pc != 0x2172B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CAquaFishEffFv_0x20ef30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2172B4u; }
        if (ctx->pc != 0x2172B4u) { return; }
    }
    ctx->pc = 0x2172B4u;
label_2172b4:
    // 0x2172b4: 0x8f849218  lw          $a0, -0x6DE8($gp)
    ctx->pc = 0x2172b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939160)));
label_2172b8:
    // 0x2172b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2172b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2172bc:
    // 0x2172bc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2172bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2172c0:
    // 0x2172c0: 0x320f809  jalr        $t9
label_2172c4:
    if (ctx->pc == 0x2172C4u) {
        ctx->pc = 0x2172C8u;
        goto label_2172c8;
    }
    ctx->pc = 0x2172C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2172C8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2172C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2172C8u; }
            if (ctx->pc != 0x2172C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2172C8u;
label_2172c8:
    // 0x2172c8: 0x868202d8  lh          $v0, 0x2D8($s4)
    ctx->pc = 0x2172c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 728)));
label_2172cc:
    // 0x2172cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2172ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2172d0:
    // 0x2172d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2172d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2172d4:
    // 0x2172d4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2172d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2172d8:
    // 0x2172d8: 0xc08575c  jal         func_215D70
label_2172dc:
    if (ctx->pc == 0x2172DCu) {
        ctx->pc = 0x2172DCu;
            // 0x2172dc: 0xac4002b4  sw          $zero, 0x2B4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 692), GPR_U32(ctx, 0));
        ctx->pc = 0x2172E0u;
        goto label_2172e0;
    }
    ctx->pc = 0x2172D8u;
    SET_GPR_U32(ctx, 31, 0x2172E0u);
    ctx->pc = 0x2172DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2172D8u;
            // 0x2172dc: 0xac4002b4  sw          $zero, 0x2B4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 692), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x215D70u;
    if (runtime->hasFunction(0x215D70u)) {
        auto targetFn = runtime->lookupFunction(0x215D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2172E0u; }
        if (ctx->pc != 0x2172E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSelFish__9CAquariumFv_0x215d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2172E0u; }
        if (ctx->pc != 0x2172E0u) { return; }
    }
    ctx->pc = 0x2172E0u;
label_2172e0:
    // 0x2172e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2172e4:
    if (ctx->pc == 0x2172E4u) {
        ctx->pc = 0x2172E4u;
            // 0x2172e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2172E8u;
        goto label_2172e8;
    }
    ctx->pc = 0x2172E0u;
    {
        const bool branch_taken_0x2172e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2172E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2172E0u;
            // 0x2172e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2172e0) {
            ctx->pc = 0x2172F8u;
            goto label_2172f8;
        }
    }
    ctx->pc = 0x2172E8u;
label_2172e8:
    // 0x2172e8: 0xc094274  jal         func_2509D0
label_2172ec:
    if (ctx->pc == 0x2172ECu) {
        ctx->pc = 0x2172ECu;
            // 0x2172ec: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x2172F0u;
        goto label_2172f0;
    }
    ctx->pc = 0x2172E8u;
    SET_GPR_U32(ctx, 31, 0x2172F0u);
    ctx->pc = 0x2172ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2172E8u;
            // 0x2172ec: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2172F0u; }
        if (ctx->pc != 0x2172F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2172F0u; }
        if (ctx->pc != 0x2172F0u) { return; }
    }
    ctx->pc = 0x2172F0u;
label_2172f0:
    // 0x2172f0: 0x10000038  b           . + 4 + (0x38 << 2)
label_2172f4:
    if (ctx->pc == 0x2172F4u) {
        ctx->pc = 0x2172F4u;
            // 0x2172f4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2172F8u;
        goto label_2172f8;
    }
    ctx->pc = 0x2172F0u;
    {
        const bool branch_taken_0x2172f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2172F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2172F0u;
            // 0x2172f4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2172f0) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x2172F8u;
label_2172f8:
    // 0x2172f8: 0xc094274  jal         func_2509D0
label_2172fc:
    if (ctx->pc == 0x2172FCu) {
        ctx->pc = 0x2172FCu;
            // 0x2172fc: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x217300u;
        goto label_217300;
    }
    ctx->pc = 0x2172F8u;
    SET_GPR_U32(ctx, 31, 0x217300u);
    ctx->pc = 0x2172FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2172F8u;
            // 0x2172fc: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217300u; }
        if (ctx->pc != 0x217300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217300u; }
        if (ctx->pc != 0x217300u) { return; }
    }
    ctx->pc = 0x217300u;
label_217300:
    // 0x217300: 0x10000034  b           . + 4 + (0x34 << 2)
label_217304:
    if (ctx->pc == 0x217304u) {
        ctx->pc = 0x217308u;
        goto label_217308;
    }
    ctx->pc = 0x217300u;
    {
        const bool branch_taken_0x217300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217300) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x217308u;
label_217308:
    // 0x217308: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_21730c:
    if (ctx->pc == 0x21730Cu) {
        ctx->pc = 0x21730Cu;
            // 0x21730c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x217310u;
        goto label_217310;
    }
    ctx->pc = 0x217308u;
    {
        const bool branch_taken_0x217308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21730Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217308u;
            // 0x21730c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217308) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x217310u;
label_217310:
    // 0x217310: 0xc094274  jal         func_2509D0
label_217314:
    if (ctx->pc == 0x217314u) {
        ctx->pc = 0x217314u;
            // 0x217314: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x217318u;
        goto label_217318;
    }
    ctx->pc = 0x217310u;
    SET_GPR_U32(ctx, 31, 0x217318u);
    ctx->pc = 0x217314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217310u;
            // 0x217314: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217318u; }
        if (ctx->pc != 0x217318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217318u; }
        if (ctx->pc != 0x217318u) { return; }
    }
    ctx->pc = 0x217318u;
label_217318:
    // 0x217318: 0x1000002e  b           . + 4 + (0x2E << 2)
label_21731c:
    if (ctx->pc == 0x21731Cu) {
        ctx->pc = 0x217320u;
        goto label_217320;
    }
    ctx->pc = 0x217318u;
    {
        const bool branch_taken_0x217318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217318) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x217320u;
label_217320:
    // 0x217320: 0x1240002c  beqz        $s2, . + 4 + (0x2C << 2)
label_217324:
    if (ctx->pc == 0x217324u) {
        ctx->pc = 0x217324u;
            // 0x217324: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x217328u;
        goto label_217328;
    }
    ctx->pc = 0x217320u;
    {
        const bool branch_taken_0x217320 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x217324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217320u;
            // 0x217324: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217320) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x217328u;
label_217328:
    // 0x217328: 0xc094274  jal         func_2509D0
label_21732c:
    if (ctx->pc == 0x21732Cu) {
        ctx->pc = 0x21732Cu;
            // 0x21732c: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x217330u;
        goto label_217330;
    }
    ctx->pc = 0x217328u;
    SET_GPR_U32(ctx, 31, 0x217330u);
    ctx->pc = 0x21732Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217328u;
            // 0x21732c: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217330u; }
        if (ctx->pc != 0x217330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217330u; }
        if (ctx->pc != 0x217330u) { return; }
    }
    ctx->pc = 0x217330u;
label_217330:
    // 0x217330: 0x10000028  b           . + 4 + (0x28 << 2)
label_217334:
    if (ctx->pc == 0x217334u) {
        ctx->pc = 0x217338u;
        goto label_217338;
    }
    ctx->pc = 0x217330u;
    {
        const bool branch_taken_0x217330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217330) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x217338u;
label_217338:
    // 0x217338: 0xc08454c  jal         func_211530
label_21733c:
    if (ctx->pc == 0x21733Cu) {
        ctx->pc = 0x21733Cu;
            // 0x21733c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x217340u;
        goto label_217340;
    }
    ctx->pc = 0x217338u;
    SET_GPR_U32(ctx, 31, 0x217340u);
    ctx->pc = 0x21733Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217338u;
            // 0x21733c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211530u;
    if (runtime->hasFunction(0x211530u)) {
        auto targetFn = runtime->lookupFunction(0x211530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217340u; }
        if (ctx->pc != 0x217340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddQuestionCursor__8CAquaMesFv_0x211530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217340u; }
        if (ctx->pc != 0x217340u) { return; }
    }
    ctx->pc = 0x217340u;
label_217340:
    // 0x217340: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_217344:
    if (ctx->pc == 0x217344u) {
        ctx->pc = 0x217344u;
            // 0x217344: 0x32420002  andi        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x217348u;
        goto label_217348;
    }
    ctx->pc = 0x217340u;
    {
        const bool branch_taken_0x217340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217340u;
            // 0x217344: 0x32420002  andi        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x217340) {
            ctx->pc = 0x217354u;
            goto label_217354;
        }
    }
    ctx->pc = 0x217348u;
label_217348:
    // 0x217348: 0xc094274  jal         func_2509D0
label_21734c:
    if (ctx->pc == 0x21734Cu) {
        ctx->pc = 0x21734Cu;
            // 0x21734c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x217350u;
        goto label_217350;
    }
    ctx->pc = 0x217348u;
    SET_GPR_U32(ctx, 31, 0x217350u);
    ctx->pc = 0x21734Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217348u;
            // 0x21734c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217350u; }
        if (ctx->pc != 0x217350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217350u; }
        if (ctx->pc != 0x217350u) { return; }
    }
    ctx->pc = 0x217350u;
label_217350:
    // 0x217350: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x217350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_217354:
    // 0x217354: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_217358:
    if (ctx->pc == 0x217358u) {
        ctx->pc = 0x217358u;
            // 0x217358: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x21735Cu;
        goto label_21735c;
    }
    ctx->pc = 0x217354u;
    {
        const bool branch_taken_0x217354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217354u;
            // 0x217358: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x217354) {
            ctx->pc = 0x21736Cu;
            goto label_21736c;
        }
    }
    ctx->pc = 0x21735Cu;
label_21735c:
    // 0x21735c: 0xc094274  jal         func_2509D0
label_217360:
    if (ctx->pc == 0x217360u) {
        ctx->pc = 0x217360u;
            // 0x217360: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x217364u;
        goto label_217364;
    }
    ctx->pc = 0x21735Cu;
    SET_GPR_U32(ctx, 31, 0x217364u);
    ctx->pc = 0x217360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21735Cu;
            // 0x217360: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217364u; }
        if (ctx->pc != 0x217364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217364u; }
        if (ctx->pc != 0x217364u) { return; }
    }
    ctx->pc = 0x217364u;
label_217364:
    // 0x217364: 0x1000001b  b           . + 4 + (0x1B << 2)
label_217368:
    if (ctx->pc == 0x217368u) {
        ctx->pc = 0x217368u;
            // 0x217368: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x21736Cu;
        goto label_21736c;
    }
    ctx->pc = 0x217364u;
    {
        const bool branch_taken_0x217364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217364u;
            // 0x217368: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217364) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x21736Cu;
label_21736c:
    // 0x21736c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_217370:
    if (ctx->pc == 0x217370u) {
        ctx->pc = 0x217374u;
        goto label_217374;
    }
    ctx->pc = 0x21736Cu;
    {
        const bool branch_taken_0x21736c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21736c) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x217374u;
label_217374:
    // 0x217374: 0x8f86920c  lw          $a2, -0x6DF4($gp)
    ctx->pc = 0x217374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939148)));
label_217378:
    // 0x217378: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x217378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21737c:
    // 0x21737c: 0x8e270030  lw          $a3, 0x30($s1)
    ctx->pc = 0x21737cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_217380:
    // 0x217380: 0x27848288  addiu       $a0, $gp, -0x7D78
    ctx->pc = 0x217380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935176));
label_217384:
    // 0x217384: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x217384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_217388:
    // 0x217388: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21738c:
    // 0x21738c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x21738cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_217390:
    // 0x217390: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x217390u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_217394:
    // 0x217394: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x217394u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_217398:
    // 0x217398: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x217398u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_21739c:
    // 0x21739c: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x21739cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_2173a0:
    // 0x2173a0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2173a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2173a4:
    // 0x2173a4: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x2173a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_2173a8:
    // 0x2173a8: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x2173a8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2173ac:
    // 0x2173ac: 0xa7848270  sh          $a0, -0x7D90($gp)
    ctx->pc = 0x2173acu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935152), (uint16_t)GPR_U32(ctx, 4));
label_2173b0:
    // 0x2173b0: 0xaf8391b4  sw          $v1, -0x6E4C($gp)
    ctx->pc = 0x2173b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939060), GPR_U32(ctx, 3));
label_2173b4:
    // 0x2173b4: 0xae800110  sw          $zero, 0x110($s4)
    ctx->pc = 0x2173b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 0));
label_2173b8:
    // 0x2173b8: 0xa2820115  sb          $v0, 0x115($s4)
    ctx->pc = 0x2173b8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 277), (uint8_t)GPR_U32(ctx, 2));
label_2173bc:
    // 0x2173bc: 0x8f8291b0  lw          $v0, -0x6E50($gp)
    ctx->pc = 0x2173bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_2173c0:
    // 0x2173c0: 0xc05f610  jal         func_17D840
label_2173c4:
    if (ctx->pc == 0x2173C4u) {
        ctx->pc = 0x2173C4u;
            // 0x2173c4: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x2173C8u;
        goto label_2173c8;
    }
    ctx->pc = 0x2173C0u;
    SET_GPR_U32(ctx, 31, 0x2173C8u);
    ctx->pc = 0x2173C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2173C0u;
            // 0x2173c4: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2173C8u; }
        if (ctx->pc != 0x2173C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2173C8u; }
        if (ctx->pc != 0x2173C8u) { return; }
    }
    ctx->pc = 0x2173C8u;
label_2173c8:
    // 0x2173c8: 0xc094274  jal         func_2509D0
label_2173cc:
    if (ctx->pc == 0x2173CCu) {
        ctx->pc = 0x2173CCu;
            // 0x2173cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2173D0u;
        goto label_2173d0;
    }
    ctx->pc = 0x2173C8u;
    SET_GPR_U32(ctx, 31, 0x2173D0u);
    ctx->pc = 0x2173CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2173C8u;
            // 0x2173cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2173D0u; }
        if (ctx->pc != 0x2173D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2173D0u; }
        if (ctx->pc != 0x2173D0u) { return; }
    }
    ctx->pc = 0x2173D0u;
label_2173d0:
    // 0x2173d0: 0x24100011  addiu       $s0, $zero, 0x11
    ctx->pc = 0x2173d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2173d4:
    // 0x2173d4: 0x200082a  slt         $at, $s0, $zero
    ctx->pc = 0x2173d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2173d8:
    // 0x2173d8: 0x142000c0  bnez        $at, . + 4 + (0xC0 << 2)
label_2173dc:
    if (ctx->pc == 0x2173DCu) {
        ctx->pc = 0x2173E0u;
        goto label_2173e0;
    }
    ctx->pc = 0x2173D8u;
    {
        const bool branch_taken_0x2173d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2173d8) {
            ctx->pc = 0x2176DCu;
            goto label_2176dc;
        }
    }
    ctx->pc = 0x2173E0u;
label_2173e0:
    // 0x2173e0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_2173e4:
    if (ctx->pc == 0x2173E4u) {
        ctx->pc = 0x2173E4u;
            // 0x2173e4: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x2173E8u;
        goto label_2173e8;
    }
    ctx->pc = 0x2173E0u;
    {
        const bool branch_taken_0x2173e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2173E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2173E0u;
            // 0x2173e4: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2173e0) {
            ctx->pc = 0x2173F0u;
            goto label_2173f0;
        }
    }
    ctx->pc = 0x2173E8u;
label_2173e8:
    // 0x2173e8: 0x16020010  bne         $s0, $v0, . + 4 + (0x10 << 2)
label_2173ec:
    if (ctx->pc == 0x2173ECu) {
        ctx->pc = 0x2173ECu;
            // 0x2173ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2173F0u;
        goto label_2173f0;
    }
    ctx->pc = 0x2173E8u;
    {
        const bool branch_taken_0x2173e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2173ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2173E8u;
            // 0x2173ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2173e8) {
            ctx->pc = 0x21742Cu;
            goto label_21742c;
        }
    }
    ctx->pc = 0x2173F0u;
label_2173f0:
    // 0x2173f0: 0xa2200018  sb          $zero, 0x18($s1)
    ctx->pc = 0x2173f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 0));
label_2173f4:
    // 0x2173f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2173f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2173f8:
    // 0x2173f8: 0xa2200040  sb          $zero, 0x40($s1)
    ctx->pc = 0x2173f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 0));
label_2173fc:
    // 0x2173fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2173fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_217400:
    // 0x217400: 0xa220001a  sb          $zero, 0x1A($s1)
    ctx->pc = 0x217400u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26), (uint8_t)GPR_U32(ctx, 0));
label_217404:
    // 0x217404: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x217404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_217408:
    // 0x217408: 0xa2200034  sb          $zero, 0x34($s1)
    ctx->pc = 0x217408u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 52), (uint8_t)GPR_U32(ctx, 0));
label_21740c:
    // 0x21740c: 0xc084588  jal         func_211620
label_217410:
    if (ctx->pc == 0x217410u) {
        ctx->pc = 0x217410u;
            // 0x217410: 0xa2220048  sb          $v0, 0x48($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x217414u;
        goto label_217414;
    }
    ctx->pc = 0x21740Cu;
    SET_GPR_U32(ctx, 31, 0x217414u);
    ctx->pc = 0x217410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21740Cu;
            // 0x217410: 0xa2220048  sb          $v0, 0x48($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211620u;
    if (runtime->hasFunction(0x211620u)) {
        auto targetFn = runtime->lookupFunction(0x211620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217414u; }
        if (ctx->pc != 0x217414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCtrlHelpId__8CAquaMesFi_0x211620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217414u; }
        if (ctx->pc != 0x217414u) { return; }
    }
    ctx->pc = 0x217414u;
label_217414:
    // 0x217414: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x217414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_217418:
    // 0x217418: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
label_21741c:
    if (ctx->pc == 0x21741Cu) {
        ctx->pc = 0x217420u;
        goto label_217420;
    }
    ctx->pc = 0x217418u;
    {
        const bool branch_taken_0x217418 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x217418) {
            ctx->pc = 0x217424u;
            goto label_217424;
        }
    }
    ctx->pc = 0x217420u;
label_217420:
    // 0x217420: 0xa2200048  sb          $zero, 0x48($s1)
    ctx->pc = 0x217420u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 0));
label_217424:
    // 0x217424: 0xa280031e  sb          $zero, 0x31E($s4)
    ctx->pc = 0x217424u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 798), (uint8_t)GPR_U32(ctx, 0));
label_217428:
    // 0x217428: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21742c:
    // 0x21742c: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
label_217430:
    if (ctx->pc == 0x217430u) {
        ctx->pc = 0x217434u;
        goto label_217434;
    }
    ctx->pc = 0x21742Cu;
    {
        const bool branch_taken_0x21742c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x21742c) {
            ctx->pc = 0x21744Cu;
            goto label_21744c;
        }
    }
    ctx->pc = 0x217434u;
label_217434:
    // 0x217434: 0xa220001a  sb          $zero, 0x1A($s1)
    ctx->pc = 0x217434u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26), (uint8_t)GPR_U32(ctx, 0));
label_217438:
    // 0x217438: 0xa2220018  sb          $v0, 0x18($s1)
    ctx->pc = 0x217438u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 2));
label_21743c:
    // 0x21743c: 0xa2200040  sb          $zero, 0x40($s1)
    ctx->pc = 0x21743cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 0));
label_217440:
    // 0x217440: 0xa2200034  sb          $zero, 0x34($s1)
    ctx->pc = 0x217440u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 52), (uint8_t)GPR_U32(ctx, 0));
label_217444:
    // 0x217444: 0xa2200048  sb          $zero, 0x48($s1)
    ctx->pc = 0x217444u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 0));
label_217448:
    // 0x217448: 0xa280031e  sb          $zero, 0x31E($s4)
    ctx->pc = 0x217448u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 798), (uint8_t)GPR_U32(ctx, 0));
label_21744c:
    // 0x21744c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21744cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_217450:
    // 0x217450: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_217454:
    if (ctx->pc == 0x217454u) {
        ctx->pc = 0x217454u;
            // 0x217454: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x217458u;
        goto label_217458;
    }
    ctx->pc = 0x217450u;
    {
        const bool branch_taken_0x217450 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x217454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217450u;
            // 0x217454: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217450) {
            ctx->pc = 0x21746Cu;
            goto label_21746c;
        }
    }
    ctx->pc = 0x217458u;
label_217458:
    // 0x217458: 0xa2200018  sb          $zero, 0x18($s1)
    ctx->pc = 0x217458u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 0));
label_21745c:
    // 0x21745c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21745cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217460:
    // 0x217460: 0xa222001a  sb          $v0, 0x1A($s1)
    ctx->pc = 0x217460u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26), (uint8_t)GPR_U32(ctx, 2));
label_217464:
    // 0x217464: 0xa282031e  sb          $v0, 0x31E($s4)
    ctx->pc = 0x217464u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 798), (uint8_t)GPR_U32(ctx, 2));
label_217468:
    // 0x217468: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x217468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_21746c:
    // 0x21746c: 0x1602000b  bne         $s0, $v0, . + 4 + (0xB << 2)
label_217470:
    if (ctx->pc == 0x217470u) {
        ctx->pc = 0x217470u;
            // 0x217470: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x217474u;
        goto label_217474;
    }
    ctx->pc = 0x21746Cu;
    {
        const bool branch_taken_0x21746c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x217470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21746Cu;
            // 0x217470: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21746c) {
            ctx->pc = 0x21749Cu;
            goto label_21749c;
        }
    }
    ctx->pc = 0x217474u;
label_217474:
    // 0x217474: 0x24020132  addiu       $v0, $zero, 0x132
    ctx->pc = 0x217474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 306));
label_217478:
    // 0x217478: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x217478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
label_21747c:
    // 0x21747c: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x21747cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_217480:
    // 0x217480: 0xc0562c8  jal         func_158B20
label_217484:
    if (ctx->pc == 0x217484u) {
        ctx->pc = 0x217484u;
            // 0x217484: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->pc = 0x217488u;
        goto label_217488;
    }
    ctx->pc = 0x217480u;
    SET_GPR_U32(ctx, 31, 0x217488u);
    ctx->pc = 0x217484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217480u;
            // 0x217484: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217488u; }
        if (ctx->pc != 0x217488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217488u; }
        if (ctx->pc != 0x217488u) { return; }
    }
    ctx->pc = 0x217488u;
label_217488:
    // 0x217488: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21748c:
    // 0x21748c: 0xa2220040  sb          $v0, 0x40($s1)
    ctx->pc = 0x21748cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 2));
label_217490:
    // 0x217490: 0xa2200018  sb          $zero, 0x18($s1)
    ctx->pc = 0x217490u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 0));
label_217494:
    // 0x217494: 0xa220001a  sb          $zero, 0x1A($s1)
    ctx->pc = 0x217494u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26), (uint8_t)GPR_U32(ctx, 0));
label_217498:
    // 0x217498: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x217498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_21749c:
    // 0x21749c: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
label_2174a0:
    if (ctx->pc == 0x2174A0u) {
        ctx->pc = 0x2174A0u;
            // 0x2174a0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2174A4u;
        goto label_2174a4;
    }
    ctx->pc = 0x21749Cu;
    {
        const bool branch_taken_0x21749c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2174A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21749Cu;
            // 0x2174a0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21749c) {
            ctx->pc = 0x2174D0u;
            goto label_2174d0;
        }
    }
    ctx->pc = 0x2174A4u;
label_2174a4:
    // 0x2174a4: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x2174a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_2174a8:
    // 0x2174a8: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x2174a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
label_2174ac:
    // 0x2174ac: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x2174acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2174b0:
    // 0x2174b0: 0xc0562c8  jal         func_158B20
label_2174b4:
    if (ctx->pc == 0x2174B4u) {
        ctx->pc = 0x2174B4u;
            // 0x2174b4: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->pc = 0x2174B8u;
        goto label_2174b8;
    }
    ctx->pc = 0x2174B0u;
    SET_GPR_U32(ctx, 31, 0x2174B8u);
    ctx->pc = 0x2174B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2174B0u;
            // 0x2174b4: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2174B8u; }
        if (ctx->pc != 0x2174B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2174B8u; }
        if (ctx->pc != 0x2174B8u) { return; }
    }
    ctx->pc = 0x2174B8u;
label_2174b8:
    // 0x2174b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2174b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2174bc:
    // 0x2174bc: 0xa2220040  sb          $v0, 0x40($s1)
    ctx->pc = 0x2174bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 2));
label_2174c0:
    // 0x2174c0: 0xa2200018  sb          $zero, 0x18($s1)
    ctx->pc = 0x2174c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 0));
label_2174c4:
    // 0x2174c4: 0xa222001a  sb          $v0, 0x1A($s1)
    ctx->pc = 0x2174c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26), (uint8_t)GPR_U32(ctx, 2));
label_2174c8:
    // 0x2174c8: 0xa282031e  sb          $v0, 0x31E($s4)
    ctx->pc = 0x2174c8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 798), (uint8_t)GPR_U32(ctx, 2));
label_2174cc:
    // 0x2174cc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2174ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2174d0:
    // 0x2174d0: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
label_2174d4:
    if (ctx->pc == 0x2174D4u) {
        ctx->pc = 0x2174D4u;
            // 0x2174d4: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x2174D8u;
        goto label_2174d8;
    }
    ctx->pc = 0x2174D0u;
    {
        const bool branch_taken_0x2174d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2174D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2174D0u;
            // 0x2174d4: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2174d0) {
            ctx->pc = 0x217504u;
            goto label_217504;
        }
    }
    ctx->pc = 0x2174D8u;
label_2174d8:
    // 0x2174d8: 0x24020139  addiu       $v0, $zero, 0x139
    ctx->pc = 0x2174d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 313));
label_2174dc:
    // 0x2174dc: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x2174dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
label_2174e0:
    // 0x2174e0: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x2174e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2174e4:
    // 0x2174e4: 0xc0562c8  jal         func_158B20
label_2174e8:
    if (ctx->pc == 0x2174E8u) {
        ctx->pc = 0x2174E8u;
            // 0x2174e8: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->pc = 0x2174ECu;
        goto label_2174ec;
    }
    ctx->pc = 0x2174E4u;
    SET_GPR_U32(ctx, 31, 0x2174ECu);
    ctx->pc = 0x2174E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2174E4u;
            // 0x2174e8: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2174ECu; }
        if (ctx->pc != 0x2174ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2174ECu; }
        if (ctx->pc != 0x2174ECu) { return; }
    }
    ctx->pc = 0x2174ECu;
label_2174ec:
    // 0x2174ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2174ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2174f0:
    // 0x2174f0: 0xa2220040  sb          $v0, 0x40($s1)
    ctx->pc = 0x2174f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 2));
label_2174f4:
    // 0x2174f4: 0xa2200018  sb          $zero, 0x18($s1)
    ctx->pc = 0x2174f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 0));
label_2174f8:
    // 0x2174f8: 0xa220001a  sb          $zero, 0x1A($s1)
    ctx->pc = 0x2174f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26), (uint8_t)GPR_U32(ctx, 0));
label_2174fc:
    // 0x2174fc: 0xa280031e  sb          $zero, 0x31E($s4)
    ctx->pc = 0x2174fcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 798), (uint8_t)GPR_U32(ctx, 0));
label_217500:
    // 0x217500: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x217500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_217504:
    // 0x217504: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
label_217508:
    if (ctx->pc == 0x217508u) {
        ctx->pc = 0x217508u;
            // 0x217508: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x21750Cu;
        goto label_21750c;
    }
    ctx->pc = 0x217504u;
    {
        const bool branch_taken_0x217504 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x217508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217504u;
            // 0x217508: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217504) {
            ctx->pc = 0x21753Cu;
            goto label_21753c;
        }
    }
    ctx->pc = 0x21750Cu;
label_21750c:
    // 0x21750c: 0xa2200018  sb          $zero, 0x18($s1)
    ctx->pc = 0x21750cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 0));
label_217510:
    // 0x217510: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x217510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217514:
    // 0x217514: 0xa2260034  sb          $a2, 0x34($s1)
    ctx->pc = 0x217514u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 52), (uint8_t)GPR_U32(ctx, 6));
label_217518:
    // 0x217518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21751c:
    // 0x21751c: 0x24050320  addiu       $a1, $zero, 0x320
    ctx->pc = 0x21751cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
label_217520:
    // 0x217520: 0xc0844c8  jal         func_211320
label_217524:
    if (ctx->pc == 0x217524u) {
        ctx->pc = 0x217524u;
            // 0x217524: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x217528u;
        goto label_217528;
    }
    ctx->pc = 0x217520u;
    SET_GPR_U32(ctx, 31, 0x217528u);
    ctx->pc = 0x217524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217520u;
            // 0x217524: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211320u;
    if (runtime->hasFunction(0x211320u)) {
        auto targetFn = runtime->lookupFunction(0x211320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217528u; }
        if (ctx->pc != 0x217528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetQuestionId__8CAquaMesFiii_0x211320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217528u; }
        if (ctx->pc != 0x217528u) { return; }
    }
    ctx->pc = 0x217528u;
label_217528:
    // 0x217528: 0xa2200048  sb          $zero, 0x48($s1)
    ctx->pc = 0x217528u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 0));
label_21752c:
    // 0x21752c: 0xae800320  sw          $zero, 0x320($s4)
    ctx->pc = 0x21752cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 800), GPR_U32(ctx, 0));
label_217530:
    // 0x217530: 0xaf8091c4  sw          $zero, -0x6E3C($gp)
    ctx->pc = 0x217530u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939076), GPR_U32(ctx, 0));
label_217534:
    // 0x217534: 0xa2800384  sb          $zero, 0x384($s4)
    ctx->pc = 0x217534u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 900), (uint8_t)GPR_U32(ctx, 0));
label_217538:
    // 0x217538: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x217538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_21753c:
    // 0x21753c: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
label_217540:
    if (ctx->pc == 0x217540u) {
        ctx->pc = 0x217540u;
            // 0x217540: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x217544u;
        goto label_217544;
    }
    ctx->pc = 0x21753Cu;
    {
        const bool branch_taken_0x21753c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x217540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21753Cu;
            // 0x217540: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21753c) {
            ctx->pc = 0x217574u;
            goto label_217574;
        }
    }
    ctx->pc = 0x217544u;
label_217544:
    // 0x217544: 0xa2200018  sb          $zero, 0x18($s1)
    ctx->pc = 0x217544u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 0));
label_217548:
    // 0x217548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21754c:
    // 0x21754c: 0xa2200040  sb          $zero, 0x40($s1)
    ctx->pc = 0x21754cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 0));
label_217550:
    // 0x217550: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x217550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_217554:
    // 0x217554: 0xa220001a  sb          $zero, 0x1A($s1)
    ctx->pc = 0x217554u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26), (uint8_t)GPR_U32(ctx, 0));
label_217558:
    // 0x217558: 0xc084588  jal         func_211620
label_21755c:
    if (ctx->pc == 0x21755Cu) {
        ctx->pc = 0x21755Cu;
            // 0x21755c: 0xa2200034  sb          $zero, 0x34($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 52), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x217560u;
        goto label_217560;
    }
    ctx->pc = 0x217558u;
    SET_GPR_U32(ctx, 31, 0x217560u);
    ctx->pc = 0x21755Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217558u;
            // 0x21755c: 0xa2200034  sb          $zero, 0x34($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 52), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211620u;
    if (runtime->hasFunction(0x211620u)) {
        auto targetFn = runtime->lookupFunction(0x211620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217560u; }
        if (ctx->pc != 0x217560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCtrlHelpId__8CAquaMesFi_0x211620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217560u; }
        if (ctx->pc != 0x217560u) { return; }
    }
    ctx->pc = 0x217560u;
label_217560:
    // 0x217560: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217564:
    // 0x217564: 0xa2220048  sb          $v0, 0x48($s1)
    ctx->pc = 0x217564u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 2));
label_217568:
    // 0x217568: 0xaf8291c4  sw          $v0, -0x6E3C($gp)
    ctx->pc = 0x217568u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939076), GPR_U32(ctx, 2));
label_21756c:
    // 0x21756c: 0xa2820384  sb          $v0, 0x384($s4)
    ctx->pc = 0x21756cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 900), (uint8_t)GPR_U32(ctx, 2));
label_217570:
    // 0x217570: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x217570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_217574:
    // 0x217574: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
label_217578:
    if (ctx->pc == 0x217578u) {
        ctx->pc = 0x217578u;
            // 0x217578: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x21757Cu;
        goto label_21757c;
    }
    ctx->pc = 0x217574u;
    {
        const bool branch_taken_0x217574 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x217578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217574u;
            // 0x217578: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217574) {
            ctx->pc = 0x21759Cu;
            goto label_21759c;
        }
    }
    ctx->pc = 0x21757Cu;
label_21757c:
    // 0x21757c: 0xa2200048  sb          $zero, 0x48($s1)
    ctx->pc = 0x21757cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 0));
label_217580:
    // 0x217580: 0xc083d04  jal         func_20F410
label_217584:
    if (ctx->pc == 0x217584u) {
        ctx->pc = 0x217584u;
            // 0x217584: 0x8e840320  lw          $a0, 0x320($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
        ctx->pc = 0x217588u;
        goto label_217588;
    }
    ctx->pc = 0x217580u;
    SET_GPR_U32(ctx, 31, 0x217588u);
    ctx->pc = 0x217584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217580u;
            // 0x217584: 0x8e840320  lw          $a0, 0x320($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F410u;
    if (runtime->hasFunction(0x20F410u)) {
        auto targetFn = runtime->lookupFunction(0x20F410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217588u; }
        if (ctx->pc != 0x217588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Drop__9CFishFoodFv_0x20f410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217588u; }
        if (ctx->pc != 0x217588u) { return; }
    }
    ctx->pc = 0x217588u;
label_217588:
    // 0x217588: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x217588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_21758c:
    // 0x21758c: 0xae820340  sw          $v0, 0x340($s4)
    ctx->pc = 0x21758cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 832), GPR_U32(ctx, 2));
label_217590:
    // 0x217590: 0xaf8091c4  sw          $zero, -0x6E3C($gp)
    ctx->pc = 0x217590u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939076), GPR_U32(ctx, 0));
label_217594:
    // 0x217594: 0xa2800384  sb          $zero, 0x384($s4)
    ctx->pc = 0x217594u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 900), (uint8_t)GPR_U32(ctx, 0));
label_217598:
    // 0x217598: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x217598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21759c:
    // 0x21759c: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
label_2175a0:
    if (ctx->pc == 0x2175A0u) {
        ctx->pc = 0x2175A0u;
            // 0x2175a0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2175A4u;
        goto label_2175a4;
    }
    ctx->pc = 0x21759Cu;
    {
        const bool branch_taken_0x21759c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2175A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21759Cu;
            // 0x2175a0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21759c) {
            ctx->pc = 0x2175D4u;
            goto label_2175d4;
        }
    }
    ctx->pc = 0x2175A4u;
label_2175a4:
    // 0x2175a4: 0x240200d2  addiu       $v0, $zero, 0xD2
    ctx->pc = 0x2175a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
label_2175a8:
    // 0x2175a8: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x2175a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
label_2175ac:
    // 0x2175ac: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x2175acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2175b0:
    // 0x2175b0: 0xc0562c8  jal         func_158B20
label_2175b4:
    if (ctx->pc == 0x2175B4u) {
        ctx->pc = 0x2175B4u;
            // 0x2175b4: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->pc = 0x2175B8u;
        goto label_2175b8;
    }
    ctx->pc = 0x2175B0u;
    SET_GPR_U32(ctx, 31, 0x2175B8u);
    ctx->pc = 0x2175B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2175B0u;
            // 0x2175b4: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2175B8u; }
        if (ctx->pc != 0x2175B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2175B8u; }
        if (ctx->pc != 0x2175B8u) { return; }
    }
    ctx->pc = 0x2175B8u;
label_2175b8:
    // 0x2175b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2175b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2175bc:
    // 0x2175bc: 0xa2220040  sb          $v0, 0x40($s1)
    ctx->pc = 0x2175bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 2));
label_2175c0:
    // 0x2175c0: 0xa2200018  sb          $zero, 0x18($s1)
    ctx->pc = 0x2175c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 0));
label_2175c4:
    // 0x2175c4: 0xa222001a  sb          $v0, 0x1A($s1)
    ctx->pc = 0x2175c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26), (uint8_t)GPR_U32(ctx, 2));
label_2175c8:
    // 0x2175c8: 0xa2200050  sb          $zero, 0x50($s1)
    ctx->pc = 0x2175c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 0));
label_2175cc:
    // 0x2175cc: 0xa282031e  sb          $v0, 0x31E($s4)
    ctx->pc = 0x2175ccu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 798), (uint8_t)GPR_U32(ctx, 2));
label_2175d0:
    // 0x2175d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2175d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2175d4:
    // 0x2175d4: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
label_2175d8:
    if (ctx->pc == 0x2175D8u) {
        ctx->pc = 0x2175D8u;
            // 0x2175d8: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x2175DCu;
        goto label_2175dc;
    }
    ctx->pc = 0x2175D4u;
    {
        const bool branch_taken_0x2175d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2175D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2175D4u;
            // 0x2175d8: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2175d4) {
            ctx->pc = 0x2175F4u;
            goto label_2175f4;
        }
    }
    ctx->pc = 0x2175DCu;
label_2175dc:
    // 0x2175dc: 0xa2200040  sb          $zero, 0x40($s1)
    ctx->pc = 0x2175dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 0));
label_2175e0:
    // 0x2175e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2175e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2175e4:
    // 0x2175e4: 0xa2220050  sb          $v0, 0x50($s1)
    ctx->pc = 0x2175e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 2));
label_2175e8:
    // 0x2175e8: 0xa220001a  sb          $zero, 0x1A($s1)
    ctx->pc = 0x2175e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26), (uint8_t)GPR_U32(ctx, 0));
label_2175ec:
    // 0x2175ec: 0xa280031e  sb          $zero, 0x31E($s4)
    ctx->pc = 0x2175ecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 798), (uint8_t)GPR_U32(ctx, 0));
label_2175f0:
    // 0x2175f0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2175f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2175f4:
    // 0x2175f4: 0x1602000b  bne         $s0, $v0, . + 4 + (0xB << 2)
label_2175f8:
    if (ctx->pc == 0x2175F8u) {
        ctx->pc = 0x2175F8u;
            // 0x2175f8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2175FCu;
        goto label_2175fc;
    }
    ctx->pc = 0x2175F4u;
    {
        const bool branch_taken_0x2175f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2175F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2175F4u;
            // 0x2175f8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2175f4) {
            ctx->pc = 0x217624u;
            goto label_217624;
        }
    }
    ctx->pc = 0x2175FCu;
label_2175fc:
    // 0x2175fc: 0xa2200018  sb          $zero, 0x18($s1)
    ctx->pc = 0x2175fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 0));
label_217600:
    // 0x217600: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x217600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217604:
    // 0x217604: 0xa2260034  sb          $a2, 0x34($s1)
    ctx->pc = 0x217604u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 52), (uint8_t)GPR_U32(ctx, 6));
label_217608:
    // 0x217608: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21760c:
    // 0x21760c: 0x8f82920c  lw          $v0, -0x6DF4($gp)
    ctx->pc = 0x21760cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939148)));
label_217610:
    // 0x217610: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x217610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_217614:
    // 0x217614: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x217614u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_217618:
    // 0x217618: 0xc0844c8  jal         func_211320
label_21761c:
    if (ctx->pc == 0x21761Cu) {
        ctx->pc = 0x21761Cu;
            // 0x21761c: 0x24450384  addiu       $a1, $v0, 0x384 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 900));
        ctx->pc = 0x217620u;
        goto label_217620;
    }
    ctx->pc = 0x217618u;
    SET_GPR_U32(ctx, 31, 0x217620u);
    ctx->pc = 0x21761Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217618u;
            // 0x21761c: 0x24450384  addiu       $a1, $v0, 0x384 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 900));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211320u;
    if (runtime->hasFunction(0x211320u)) {
        auto targetFn = runtime->lookupFunction(0x211320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217620u; }
        if (ctx->pc != 0x217620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetQuestionId__8CAquaMesFiii_0x211320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217620u; }
        if (ctx->pc != 0x217620u) { return; }
    }
    ctx->pc = 0x217620u;
label_217620:
    // 0x217620: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x217620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_217624:
    // 0x217624: 0x16020010  bne         $s0, $v0, . + 4 + (0x10 << 2)
label_217628:
    if (ctx->pc == 0x217628u) {
        ctx->pc = 0x217628u;
            // 0x217628: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x21762Cu;
        goto label_21762c;
    }
    ctx->pc = 0x217624u;
    {
        const bool branch_taken_0x217624 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x217628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217624u;
            // 0x217628: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217624) {
            ctx->pc = 0x217668u;
            goto label_217668;
        }
    }
    ctx->pc = 0x21762Cu;
label_21762c:
    // 0x21762c: 0xa2200018  sb          $zero, 0x18($s1)
    ctx->pc = 0x21762cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 0));
label_217630:
    // 0x217630: 0x240200dc  addiu       $v0, $zero, 0xDC
    ctx->pc = 0x217630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
label_217634:
    // 0x217634: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x217634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
label_217638:
    // 0x217638: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x217638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_21763c:
    // 0x21763c: 0xc0562c8  jal         func_158B20
label_217640:
    if (ctx->pc == 0x217640u) {
        ctx->pc = 0x217640u;
            // 0x217640: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->pc = 0x217644u;
        goto label_217644;
    }
    ctx->pc = 0x21763Cu;
    SET_GPR_U32(ctx, 31, 0x217644u);
    ctx->pc = 0x217640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21763Cu;
            // 0x217640: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217644u; }
        if (ctx->pc != 0x217644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217644u; }
        if (ctx->pc != 0x217644u) { return; }
    }
    ctx->pc = 0x217644u;
label_217644:
    // 0x217644: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x217644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217648:
    // 0x217648: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x217648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21764c:
    // 0x21764c: 0xa2230040  sb          $v1, 0x40($s1)
    ctx->pc = 0x21764cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 3));
label_217650:
    // 0x217650: 0xa223001a  sb          $v1, 0x1A($s1)
    ctx->pc = 0x217650u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26), (uint8_t)GPR_U32(ctx, 3));
label_217654:
    // 0x217654: 0xa2200034  sb          $zero, 0x34($s1)
    ctx->pc = 0x217654u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 52), (uint8_t)GPR_U32(ctx, 0));
label_217658:
    // 0x217658: 0xa283031e  sb          $v1, 0x31E($s4)
    ctx->pc = 0x217658u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 798), (uint8_t)GPR_U32(ctx, 3));
label_21765c:
    // 0x21765c: 0xa7829220  sh          $v0, -0x6DE0($gp)
    ctx->pc = 0x21765cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939168), (uint16_t)GPR_U32(ctx, 2));
label_217660:
    // 0x217660: 0xaf809218  sw          $zero, -0x6DE8($gp)
    ctx->pc = 0x217660u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939160), GPR_U32(ctx, 0));
label_217664:
    // 0x217664: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x217664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_217668:
    // 0x217668: 0x16020014  bne         $s0, $v0, . + 4 + (0x14 << 2)
label_21766c:
    if (ctx->pc == 0x21766Cu) {
        ctx->pc = 0x21766Cu;
            // 0x21766c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x217670u;
        goto label_217670;
    }
    ctx->pc = 0x217668u;
    {
        const bool branch_taken_0x217668 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x21766Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217668u;
            // 0x21766c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217668) {
            ctx->pc = 0x2176BCu;
            goto label_2176bc;
        }
    }
    ctx->pc = 0x217670u;
label_217670:
    // 0x217670: 0x868202d8  lh          $v0, 0x2D8($s4)
    ctx->pc = 0x217670u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 728)));
label_217674:
    // 0x217674: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x217674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217678:
    // 0x217678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21767c:
    // 0x21767c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x21767cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_217680:
    // 0x217680: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x217680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_217684:
    // 0x217684: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x217684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_217688:
    // 0x217688: 0x8c4202b4  lw          $v0, 0x2B4($v0)
    ctx->pc = 0x217688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_21768c:
    // 0x21768c: 0xaf829218  sw          $v0, -0x6DE8($gp)
    ctx->pc = 0x21768cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939160), GPR_U32(ctx, 2));
label_217690:
    // 0x217690: 0x868202d8  lh          $v0, 0x2D8($s4)
    ctx->pc = 0x217690u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 728)));
label_217694:
    // 0x217694: 0xa7829220  sh          $v0, -0x6DE0($gp)
    ctx->pc = 0x217694u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939168), (uint16_t)GPR_U32(ctx, 2));
label_217698:
    // 0x217698: 0xa2200040  sb          $zero, 0x40($s1)
    ctx->pc = 0x217698u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 0));
label_21769c:
    // 0x21769c: 0xa220001a  sb          $zero, 0x1A($s1)
    ctx->pc = 0x21769cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26), (uint8_t)GPR_U32(ctx, 0));
label_2176a0:
    // 0x2176a0: 0xa2200050  sb          $zero, 0x50($s1)
    ctx->pc = 0x2176a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 0));
label_2176a4:
    // 0x2176a4: 0xa2260034  sb          $a2, 0x34($s1)
    ctx->pc = 0x2176a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 52), (uint8_t)GPR_U32(ctx, 6));
label_2176a8:
    // 0x2176a8: 0x8f82920c  lw          $v0, -0x6DF4($gp)
    ctx->pc = 0x2176a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939148)));
label_2176ac:
    // 0x2176ac: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2176acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2176b0:
    // 0x2176b0: 0xc0844c8  jal         func_211320
label_2176b4:
    if (ctx->pc == 0x2176B4u) {
        ctx->pc = 0x2176B4u;
            // 0x2176b4: 0x244503e8  addiu       $a1, $v0, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
        ctx->pc = 0x2176B8u;
        goto label_2176b8;
    }
    ctx->pc = 0x2176B0u;
    SET_GPR_U32(ctx, 31, 0x2176B8u);
    ctx->pc = 0x2176B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2176B0u;
            // 0x2176b4: 0x244503e8  addiu       $a1, $v0, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211320u;
    if (runtime->hasFunction(0x211320u)) {
        auto targetFn = runtime->lookupFunction(0x211320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2176B8u; }
        if (ctx->pc != 0x2176B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetQuestionId__8CAquaMesFiii_0x211320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2176B8u; }
        if (ctx->pc != 0x2176B8u) { return; }
    }
    ctx->pc = 0x2176B8u;
label_2176b8:
    // 0x2176b8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2176b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2176bc:
    // 0x2176bc: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_2176c0:
    if (ctx->pc == 0x2176C0u) {
        ctx->pc = 0x2176C4u;
        goto label_2176c4;
    }
    ctx->pc = 0x2176BCu;
    {
        const bool branch_taken_0x2176bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2176bc) {
            ctx->pc = 0x2176D8u;
            goto label_2176d8;
        }
    }
    ctx->pc = 0x2176C4u;
label_2176c4:
    // 0x2176c4: 0xa2200040  sb          $zero, 0x40($s1)
    ctx->pc = 0x2176c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 0));
label_2176c8:
    // 0x2176c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2176c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2176cc:
    // 0x2176cc: 0xa220001a  sb          $zero, 0x1A($s1)
    ctx->pc = 0x2176ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26), (uint8_t)GPR_U32(ctx, 0));
label_2176d0:
    // 0x2176d0: 0xa2220050  sb          $v0, 0x50($s1)
    ctx->pc = 0x2176d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 2));
label_2176d4:
    // 0x2176d4: 0xa2200034  sb          $zero, 0x34($s1)
    ctx->pc = 0x2176d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 52), (uint8_t)GPR_U32(ctx, 0));
label_2176d8:
    // 0x2176d8: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x2176d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
label_2176dc:
    // 0x2176dc: 0xaf809214  sw          $zero, -0x6DEC($gp)
    ctx->pc = 0x2176dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939156), GPR_U32(ctx, 0));
label_2176e0:
    // 0x2176e0: 0x8e840320  lw          $a0, 0x320($s4)
    ctx->pc = 0x2176e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_2176e4:
    // 0x2176e4: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_2176e8:
    if (ctx->pc == 0x2176E8u) {
        ctx->pc = 0x2176E8u;
            // 0x2176e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2176ECu;
        goto label_2176ec;
    }
    ctx->pc = 0x2176E4u;
    {
        const bool branch_taken_0x2176e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2176E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2176E4u;
            // 0x2176e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2176e4) {
            ctx->pc = 0x21771Cu;
            goto label_21771c;
        }
    }
    ctx->pc = 0x2176ECu;
label_2176ec:
    // 0x2176ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2176ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2176f0:
    // 0x2176f0: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x2176f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_2176f4:
    // 0x2176f4: 0x320f809  jalr        $t9
label_2176f8:
    if (ctx->pc == 0x2176F8u) {
        ctx->pc = 0x2176FCu;
        goto label_2176fc;
    }
    ctx->pc = 0x2176F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2176FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2176FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2176FCu; }
            if (ctx->pc != 0x2176FCu) { return; }
        }
        }
    }
    ctx->pc = 0x2176FCu;
label_2176fc:
    // 0x2176fc: 0x8e830320  lw          $v1, 0x320($s4)
    ctx->pc = 0x2176fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_217700:
    // 0x217700: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x217700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_217704:
    // 0x217704: 0x90630690  lbu         $v1, 0x690($v1)
    ctx->pc = 0x217704u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1680)));
label_217708:
    // 0x217708: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_21770c:
    if (ctx->pc == 0x21770Cu) {
        ctx->pc = 0x21770Cu;
            // 0x21770c: 0x3c023e38  lui         $v0, 0x3E38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15928 << 16));
        ctx->pc = 0x217710u;
        goto label_217710;
    }
    ctx->pc = 0x217708u;
    {
        const bool branch_taken_0x217708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21770Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217708u;
            // 0x21770c: 0x3c023e38  lui         $v0, 0x3E38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15928 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217708) {
            ctx->pc = 0x217718u;
            goto label_217718;
        }
    }
    ctx->pc = 0x217710u;
label_217710:
    // 0x217710: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x217710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
label_217714:
    // 0x217714: 0xae8200c4  sw          $v0, 0xC4($s4)
    ctx->pc = 0x217714u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 2));
label_217718:
    // 0x217718: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x217718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21771c:
    // 0x21771c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21771cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217720:
    // 0x217720: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x217720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
label_217724:
    // 0x217724: 0x2442c440  addiu       $v0, $v0, -0x3BC0
    ctx->pc = 0x217724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952000));
label_217728:
    // 0x217728: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x217728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_21772c:
    // 0x21772c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21772cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_217730:
    // 0x217730: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_217734:
    if (ctx->pc == 0x217734u) {
        ctx->pc = 0x217738u;
        goto label_217738;
    }
    ctx->pc = 0x217730u;
    {
        const bool branch_taken_0x217730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x217730) {
            ctx->pc = 0x217740u;
            goto label_217740;
        }
    }
    ctx->pc = 0x217738u;
label_217738:
    // 0x217738: 0xc083344  jal         func_20CD10
label_21773c:
    if (ctx->pc == 0x21773Cu) {
        ctx->pc = 0x217740u;
        goto label_217740;
    }
    ctx->pc = 0x217738u;
    SET_GPR_U32(ctx, 31, 0x217740u);
    ctx->pc = 0x20CD10u;
    if (runtime->hasFunction(0x20CD10u)) {
        auto targetFn = runtime->lookupFunction(0x20CD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217740u; }
        if (ctx->pc != 0x217740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__7CBubbleFv_0x20cd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217740u; }
        if (ctx->pc != 0x217740u) { return; }
    }
    ctx->pc = 0x217740u;
label_217740:
    // 0x217740: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x217740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_217744:
    // 0x217744: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x217744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_217748:
    // 0x217748: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_21774c:
    if (ctx->pc == 0x21774Cu) {
        ctx->pc = 0x21774Cu;
            // 0x21774c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x217750u;
        goto label_217750;
    }
    ctx->pc = 0x217748u;
    {
        const bool branch_taken_0x217748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21774Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217748u;
            // 0x21774c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217748) {
            ctx->pc = 0x217720u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217720;
        }
    }
    ctx->pc = 0x217750u;
label_217750:
    // 0x217750: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x217750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217754:
    // 0x217754: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x217754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217758:
    // 0x217758: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x217758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
label_21775c:
    // 0x21775c: 0x2442c450  addiu       $v0, $v0, -0x3BB0
    ctx->pc = 0x21775cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952016));
label_217760:
    // 0x217760: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x217760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_217764:
    // 0x217764: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x217764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_217768:
    // 0x217768: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_21776c:
    if (ctx->pc == 0x21776Cu) {
        ctx->pc = 0x217770u;
        goto label_217770;
    }
    ctx->pc = 0x217768u;
    {
        const bool branch_taken_0x217768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x217768) {
            ctx->pc = 0x217778u;
            goto label_217778;
        }
    }
    ctx->pc = 0x217770u;
label_217770:
    // 0x217770: 0xc083344  jal         func_20CD10
label_217774:
    if (ctx->pc == 0x217774u) {
        ctx->pc = 0x217778u;
        goto label_217778;
    }
    ctx->pc = 0x217770u;
    SET_GPR_U32(ctx, 31, 0x217778u);
    ctx->pc = 0x20CD10u;
    if (runtime->hasFunction(0x20CD10u)) {
        auto targetFn = runtime->lookupFunction(0x20CD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217778u; }
        if (ctx->pc != 0x217778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__7CBubbleFv_0x20cd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217778u; }
        if (ctx->pc != 0x217778u) { return; }
    }
    ctx->pc = 0x217778u;
label_217778:
    // 0x217778: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x217778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21777c:
    // 0x21777c: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x21777cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_217780:
    // 0x217780: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_217784:
    if (ctx->pc == 0x217784u) {
        ctx->pc = 0x217784u;
            // 0x217784: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x217788u;
        goto label_217788;
    }
    ctx->pc = 0x217780u;
    {
        const bool branch_taken_0x217780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217780u;
            // 0x217784: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217780) {
            ctx->pc = 0x217758u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217758;
        }
    }
    ctx->pc = 0x217788u;
label_217788:
    // 0x217788: 0x8f8291f8  lw          $v0, -0x6E08($gp)
    ctx->pc = 0x217788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939128)));
label_21778c:
    // 0x21778c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_217790:
    if (ctx->pc == 0x217790u) {
        ctx->pc = 0x217790u;
            // 0x217790: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x217794u;
        goto label_217794;
    }
    ctx->pc = 0x21778Cu;
    {
        const bool branch_taken_0x21778c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21778Cu;
            // 0x217790: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21778c) {
            ctx->pc = 0x2177B8u;
            goto label_2177b8;
        }
    }
    ctx->pc = 0x217794u;
label_217794:
    // 0x217794: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x217794u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217798:
    // 0x217798: 0x8f8291f8  lw          $v0, -0x6E08($gp)
    ctx->pc = 0x217798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939128)));
label_21779c:
    // 0x21779c: 0xc083344  jal         func_20CD10
label_2177a0:
    if (ctx->pc == 0x2177A0u) {
        ctx->pc = 0x2177A0u;
            // 0x2177a0: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->pc = 0x2177A4u;
        goto label_2177a4;
    }
    ctx->pc = 0x21779Cu;
    SET_GPR_U32(ctx, 31, 0x2177A4u);
    ctx->pc = 0x2177A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21779Cu;
            // 0x2177a0: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20CD10u;
    if (runtime->hasFunction(0x20CD10u)) {
        auto targetFn = runtime->lookupFunction(0x20CD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2177A4u; }
        if (ctx->pc != 0x2177A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__7CBubbleFv_0x20cd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2177A4u; }
        if (ctx->pc != 0x2177A4u) { return; }
    }
    ctx->pc = 0x2177A4u;
label_2177a4:
    // 0x2177a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2177a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2177a8:
    // 0x2177a8: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x2177a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_2177ac:
    // 0x2177ac: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x2177acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
label_2177b0:
    // 0x2177b0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2177b4:
    if (ctx->pc == 0x2177B4u) {
        ctx->pc = 0x2177B8u;
        goto label_2177b8;
    }
    ctx->pc = 0x2177B0u;
    {
        const bool branch_taken_0x2177b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2177b0) {
            ctx->pc = 0x217798u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217798;
        }
    }
    ctx->pc = 0x2177B8u;
label_2177b8:
    // 0x2177b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2177b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2177bc:
    // 0x2177bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2177bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2177c0:
    // 0x2177c0: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x2177c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
label_2177c4:
    // 0x2177c4: 0x2442c480  addiu       $v0, $v0, -0x3B80
    ctx->pc = 0x2177c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952064));
label_2177c8:
    // 0x2177c8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2177c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2177cc:
    // 0x2177cc: 0xc083be0  jal         func_20EF80
label_2177d0:
    if (ctx->pc == 0x2177D0u) {
        ctx->pc = 0x2177D0u;
            // 0x2177d0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x2177D4u;
        goto label_2177d4;
    }
    ctx->pc = 0x2177CCu;
    SET_GPR_U32(ctx, 31, 0x2177D4u);
    ctx->pc = 0x2177D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2177CCu;
            // 0x2177d0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20EF80u;
    if (runtime->hasFunction(0x20EF80u)) {
        auto targetFn = runtime->lookupFunction(0x20EF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2177D4u; }
        if (ctx->pc != 0x2177D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__12CAquaFishEffFv_0x20ef80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2177D4u; }
        if (ctx->pc != 0x2177D4u) { return; }
    }
    ctx->pc = 0x2177D4u;
label_2177d4:
    // 0x2177d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2177d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2177d8:
    // 0x2177d8: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x2177d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_2177dc:
    // 0x2177dc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_2177e0:
    if (ctx->pc == 0x2177E0u) {
        ctx->pc = 0x2177E0u;
            // 0x2177e0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x2177E4u;
        goto label_2177e4;
    }
    ctx->pc = 0x2177DCu;
    {
        const bool branch_taken_0x2177dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2177E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2177DCu;
            // 0x2177e0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2177dc) {
            ctx->pc = 0x2177C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2177c0;
        }
    }
    ctx->pc = 0x2177E4u;
label_2177e4:
    // 0x2177e4: 0x86820388  lh          $v0, 0x388($s4)
    ctx->pc = 0x2177e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 904)));
label_2177e8:
    // 0x2177e8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2177e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2177ec:
    // 0x2177ec: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_2177f0:
    if (ctx->pc == 0x2177F0u) {
        ctx->pc = 0x2177F0u;
            // 0x2177f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2177F4u;
        goto label_2177f4;
    }
    ctx->pc = 0x2177ECu;
    {
        const bool branch_taken_0x2177ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2177F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2177ECu;
            // 0x2177f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2177ec) {
            ctx->pc = 0x217838u;
            goto label_217838;
        }
    }
    ctx->pc = 0x2177F4u;
label_2177f4:
    // 0x2177f4: 0x8e840390  lw          $a0, 0x390($s4)
    ctx->pc = 0x2177f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 912)));
label_2177f8:
    // 0x2177f8: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_2177fc:
    if (ctx->pc == 0x2177FCu) {
        ctx->pc = 0x217800u;
        goto label_217800;
    }
    ctx->pc = 0x2177F8u;
    {
        const bool branch_taken_0x2177f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2177f8) {
            ctx->pc = 0x217834u;
            goto label_217834;
        }
    }
    ctx->pc = 0x217800u;
label_217800:
    // 0x217800: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x217800u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_217804:
    // 0x217804: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x217804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_217808:
    // 0x217808: 0x320f809  jalr        $t9
label_21780c:
    if (ctx->pc == 0x21780Cu) {
        ctx->pc = 0x217810u;
        goto label_217810;
    }
    ctx->pc = 0x217808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x217810u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x217810u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x217810u; }
            if (ctx->pc != 0x217810u) { return; }
        }
        }
    }
    ctx->pc = 0x217810u;
label_217810:
    // 0x217810: 0x8e840390  lw          $a0, 0x390($s4)
    ctx->pc = 0x217810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 912)));
label_217814:
    // 0x217814: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x217814u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_217818:
    // 0x217818: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x217818u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_21781c:
    // 0x21781c: 0x320f809  jalr        $t9
label_217820:
    if (ctx->pc == 0x217820u) {
        ctx->pc = 0x217824u;
        goto label_217824;
    }
    ctx->pc = 0x21781Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x217824u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x217824u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x217824u; }
            if (ctx->pc != 0x217824u) { return; }
        }
        }
    }
    ctx->pc = 0x217824u;
label_217824:
    // 0x217824: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x217824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217828:
    // 0x217828: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_21782c:
    if (ctx->pc == 0x21782Cu) {
        ctx->pc = 0x217830u;
        goto label_217830;
    }
    ctx->pc = 0x217828u;
    {
        const bool branch_taken_0x217828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x217828) {
            ctx->pc = 0x217834u;
            goto label_217834;
        }
    }
    ctx->pc = 0x217830u;
label_217830:
    // 0x217830: 0xa6800388  sh          $zero, 0x388($s4)
    ctx->pc = 0x217830u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 904), (uint16_t)GPR_U32(ctx, 0));
label_217834:
    // 0x217834: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x217834u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217838:
    // 0x217838: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x217838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21783c:
    // 0x21783c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x21783cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217840:
    // 0x217840: 0x2951021  addu        $v0, $s4, $s5
    ctx->pc = 0x217840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_217844:
    // 0x217844: 0x245302b4  addiu       $s3, $v0, 0x2B4
    ctx->pc = 0x217844u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 692));
label_217848:
    // 0x217848: 0x8c4202b4  lw          $v0, 0x2B4($v0)
    ctx->pc = 0x217848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_21784c:
    // 0x21784c: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_217850:
    if (ctx->pc == 0x217850u) {
        ctx->pc = 0x217850u;
            // 0x217850: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x217854u;
        goto label_217854;
    }
    ctx->pc = 0x21784Cu;
    {
        const bool branch_taken_0x21784c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21784Cu;
            // 0x217850: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21784c) {
            ctx->pc = 0x217958u;
            goto label_217958;
        }
    }
    ctx->pc = 0x217854u;
label_217854:
    // 0x217854: 0xc085258  jal         func_214960
label_217858:
    if (ctx->pc == 0x217858u) {
        ctx->pc = 0x217858u;
            // 0x217858: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21785Cu;
        goto label_21785c;
    }
    ctx->pc = 0x217854u;
    SET_GPR_U32(ctx, 31, 0x21785Cu);
    ctx->pc = 0x217858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217854u;
            // 0x217858: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x214960u;
    if (runtime->hasFunction(0x214960u)) {
        auto targetFn = runtime->lookupFunction(0x214960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21785Cu; }
        if (ctx->pc != 0x21785Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Thinking__9CAquariumFi_0x214960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21785Cu; }
        if (ctx->pc != 0x21785Cu) { return; }
    }
    ctx->pc = 0x21785Cu;
label_21785c:
    // 0x21785c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21785cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_217860:
    // 0x217860: 0xc08559c  jal         func_215670
label_217864:
    if (ctx->pc == 0x217864u) {
        ctx->pc = 0x217864u;
            // 0x217864: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x217868u;
        goto label_217868;
    }
    ctx->pc = 0x217860u;
    SET_GPR_U32(ctx, 31, 0x217868u);
    ctx->pc = 0x217864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217860u;
            // 0x217864: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x215670u;
    if (runtime->hasFunction(0x215670u)) {
        auto targetFn = runtime->lookupFunction(0x215670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217868u; }
        if (ctx->pc != 0x217868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ColCheck__9CAquariumFi_0x215670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217868u; }
        if (ctx->pc != 0x217868u) { return; }
    }
    ctx->pc = 0x217868u;
label_217868:
    // 0x217868: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x217868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21786c:
    // 0x21786c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x21786cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_217870:
    // 0x217870: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x217870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_217874:
    // 0x217874: 0x320f809  jalr        $t9
label_217878:
    if (ctx->pc == 0x217878u) {
        ctx->pc = 0x217878u;
            // 0x217878: 0x2429025  or          $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
        ctx->pc = 0x21787Cu;
        goto label_21787c;
    }
    ctx->pc = 0x217874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x21787Cu);
        ctx->pc = 0x217878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217874u;
            // 0x217878: 0x2429025  or          $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21787Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21787Cu; }
            if (ctx->pc != 0x21787Cu) { return; }
        }
        }
    }
    ctx->pc = 0x21787Cu;
label_21787c:
    // 0x21787c: 0xc083aac  jal         func_20EAB0
label_217880:
    if (ctx->pc == 0x217880u) {
        ctx->pc = 0x217880u;
            // 0x217880: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x217884u;
        goto label_217884;
    }
    ctx->pc = 0x21787Cu;
    SET_GPR_U32(ctx, 31, 0x217884u);
    ctx->pc = 0x217880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21787Cu;
            // 0x217880: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20EAB0u;
    if (runtime->hasFunction(0x20EAB0u)) {
        auto targetFn = runtime->lookupFunction(0x20EAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217884u; }
        if (ctx->pc != 0x217884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ParamStep__9CAquaFishFv_0x20eab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217884u; }
        if (ctx->pc != 0x217884u) { return; }
    }
    ctx->pc = 0x217884u;
label_217884:
    // 0x217884: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x217884u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_217888:
    // 0x217888: 0x32420008  andi        $v0, $s2, 0x8
    ctx->pc = 0x217888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
label_21788c:
    // 0x21788c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_217890:
    if (ctx->pc == 0x217890u) {
        ctx->pc = 0x217894u;
        goto label_217894;
    }
    ctx->pc = 0x21788Cu;
    {
        const bool branch_taken_0x21788c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21788c) {
            ctx->pc = 0x2178ACu;
            goto label_2178ac;
        }
    }
    ctx->pc = 0x217894u;
label_217894:
    // 0x217894: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x217894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_217898:
    // 0x217898: 0x268400fc  addiu       $a0, $s4, 0xFC
    ctx->pc = 0x217898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 252));
label_21789c:
    // 0x21789c: 0xc0845bc  jal         func_2116F0
label_2178a0:
    if (ctx->pc == 0x2178A0u) {
        ctx->pc = 0x2178A0u;
            // 0x2178a0: 0x24050136  addiu       $a1, $zero, 0x136 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
        ctx->pc = 0x2178A4u;
        goto label_2178a4;
    }
    ctx->pc = 0x21789Cu;
    SET_GPR_U32(ctx, 31, 0x2178A4u);
    ctx->pc = 0x2178A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21789Cu;
            // 0x2178a0: 0x24050136  addiu       $a1, $zero, 0x136 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2116F0u;
    if (runtime->hasFunction(0x2116F0u)) {
        auto targetFn = runtime->lookupFunction(0x2116F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2178A4u; }
        if (ctx->pc != 0x2178A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EatMessage__8CAquaMesFiP9CAquaFish_0x2116f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2178A4u; }
        if (ctx->pc != 0x2178A4u) { return; }
    }
    ctx->pc = 0x2178A4u;
label_2178a4:
    // 0x2178a4: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x2178a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_2178a8:
    // 0x2178a8: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x2178a8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_2178ac:
    // 0x2178ac: 0x0  nop
    ctx->pc = 0x2178acu;
    // NOP
label_2178b0:
    // 0x2178b0: 0x32420030  andi        $v0, $s2, 0x30
    ctx->pc = 0x2178b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)48);
label_2178b4:
    // 0x2178b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2178b8:
    if (ctx->pc == 0x2178B8u) {
        ctx->pc = 0x2178BCu;
        goto label_2178bc;
    }
    ctx->pc = 0x2178B4u;
    {
        const bool branch_taken_0x2178b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2178b4) {
            ctx->pc = 0x2178D0u;
            goto label_2178d0;
        }
    }
    ctx->pc = 0x2178BCu;
label_2178bc:
    // 0x2178bc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2178bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2178c0:
    // 0x2178c0: 0xc0845e4  jal         func_211790
label_2178c4:
    if (ctx->pc == 0x2178C4u) {
        ctx->pc = 0x2178C4u;
            // 0x2178c4: 0x268400fc  addiu       $a0, $s4, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 252));
        ctx->pc = 0x2178C8u;
        goto label_2178c8;
    }
    ctx->pc = 0x2178C0u;
    SET_GPR_U32(ctx, 31, 0x2178C8u);
    ctx->pc = 0x2178C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2178C0u;
            // 0x2178c4: 0x268400fc  addiu       $a0, $s4, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 252));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211790u;
    if (runtime->hasFunction(0x211790u)) {
        auto targetFn = runtime->lookupFunction(0x211790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2178C8u; }
        if (ctx->pc != 0x2178C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChangeManMessage__8CAquaMesFP9CAquaFish_0x211790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2178C8u; }
        if (ctx->pc != 0x2178C8u) { return; }
    }
    ctx->pc = 0x2178C8u;
label_2178c8:
    // 0x2178c8: 0x2402ffcf  addiu       $v0, $zero, -0x31
    ctx->pc = 0x2178c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
label_2178cc:
    // 0x2178cc: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x2178ccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_2178d0:
    // 0x2178d0: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x2178d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_2178d4:
    // 0x2178d4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2178d8:
    if (ctx->pc == 0x2178D8u) {
        ctx->pc = 0x2178DCu;
        goto label_2178dc;
    }
    ctx->pc = 0x2178D4u;
    {
        const bool branch_taken_0x2178d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2178d4) {
            ctx->pc = 0x217958u;
            goto label_217958;
        }
    }
    ctx->pc = 0x2178DCu;
label_2178dc:
    // 0x2178dc: 0x8f8491bc  lw          $a0, -0x6E44($gp)
    ctx->pc = 0x2178dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939068)));
label_2178e0:
    // 0x2178e0: 0xc094280  jal         func_250A00
label_2178e4:
    if (ctx->pc == 0x2178E4u) {
        ctx->pc = 0x2178E4u;
            // 0x2178e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2178E8u;
        goto label_2178e8;
    }
    ctx->pc = 0x2178E0u;
    SET_GPR_U32(ctx, 31, 0x2178E8u);
    ctx->pc = 0x2178E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2178E0u;
            // 0x2178e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250A00u;
    if (runtime->hasFunction(0x250A00u)) {
        auto targetFn = runtime->lookupFunction(0x250A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2178E8u; }
        if (ctx->pc != 0x2178E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__FUii_0x250a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2178E8u; }
        if (ctx->pc != 0x2178E8u) { return; }
    }
    ctx->pc = 0x2178E8u;
label_2178e8:
    // 0x2178e8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2178e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2178ec:
    // 0x2178ec: 0xc084614  jal         func_211850
label_2178f0:
    if (ctx->pc == 0x2178F0u) {
        ctx->pc = 0x2178F0u;
            // 0x2178f0: 0x268400fc  addiu       $a0, $s4, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 252));
        ctx->pc = 0x2178F4u;
        goto label_2178f4;
    }
    ctx->pc = 0x2178ECu;
    SET_GPR_U32(ctx, 31, 0x2178F4u);
    ctx->pc = 0x2178F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2178ECu;
            // 0x2178f0: 0x268400fc  addiu       $a0, $s4, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 252));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211850u;
    if (runtime->hasFunction(0x211850u)) {
        auto targetFn = runtime->lookupFunction(0x211850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2178F4u; }
        if (ctx->pc != 0x2178F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeadMessage__8CAquaMesFP9CAquaFish_0x211850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2178F4u; }
        if (ctx->pc != 0x2178F4u) { return; }
    }
    ctx->pc = 0x2178F4u;
label_2178f4:
    // 0x2178f4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2178f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2178f8:
    // 0x2178f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2178f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2178fc:
    // 0x2178fc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2178fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_217900:
    // 0x217900: 0x320f809  jalr        $t9
label_217904:
    if (ctx->pc == 0x217904u) {
        ctx->pc = 0x217908u;
        goto label_217908;
    }
    ctx->pc = 0x217900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x217908u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x217908u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x217908u; }
            if (ctx->pc != 0x217908u) { return; }
        }
        }
    }
    ctx->pc = 0x217908u;
label_217908:
    // 0x217908: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x217908u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_21790c:
    // 0x21790c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21790cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217910:
    // 0x217910: 0xaf859214  sw          $a1, -0x6DEC($gp)
    ctx->pc = 0x217910u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939156), GPR_U32(ctx, 5));
label_217914:
    // 0x217914: 0xc085780  jal         func_215E00
label_217918:
    if (ctx->pc == 0x217918u) {
        ctx->pc = 0x217918u;
            // 0x217918: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21791Cu;
        goto label_21791c;
    }
    ctx->pc = 0x217914u;
    SET_GPR_U32(ctx, 31, 0x21791Cu);
    ctx->pc = 0x217918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217914u;
            // 0x217918: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x215E00u;
    if (runtime->hasFunction(0x215E00u)) {
        auto targetFn = runtime->lookupFunction(0x215E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21791Cu; }
        if (ctx->pc != 0x21791Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelectFish__9CAquariumFi_0x215e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21791Cu; }
        if (ctx->pc != 0x21791Cu) { return; }
    }
    ctx->pc = 0x21791Cu;
label_21791c:
    // 0x21791c: 0x868202d8  lh          $v0, 0x2D8($s4)
    ctx->pc = 0x21791cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 728)));
label_217920:
    // 0x217920: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
label_217924:
    if (ctx->pc == 0x217924u) {
        ctx->pc = 0x217928u;
        goto label_217928;
    }
    ctx->pc = 0x217920u;
    {
        const bool branch_taken_0x217920 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x217920) {
            ctx->pc = 0x21794Cu;
            goto label_21794c;
        }
    }
    ctx->pc = 0x217928u;
label_217928:
    // 0x217928: 0xa2200018  sb          $zero, 0x18($s1)
    ctx->pc = 0x217928u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 0));
label_21792c:
    // 0x21792c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21792cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217930:
    // 0x217930: 0xa2200040  sb          $zero, 0x40($s1)
    ctx->pc = 0x217930u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 0));
label_217934:
    // 0x217934: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_217938:
    // 0x217938: 0xa220001a  sb          $zero, 0x1A($s1)
    ctx->pc = 0x217938u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26), (uint8_t)GPR_U32(ctx, 0));
label_21793c:
    // 0x21793c: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x21793cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_217940:
    // 0x217940: 0xa2200034  sb          $zero, 0x34($s1)
    ctx->pc = 0x217940u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 52), (uint8_t)GPR_U32(ctx, 0));
label_217944:
    // 0x217944: 0xc084588  jal         func_211620
label_217948:
    if (ctx->pc == 0x217948u) {
        ctx->pc = 0x217948u;
            // 0x217948: 0xa2220048  sb          $v0, 0x48($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x21794Cu;
        goto label_21794c;
    }
    ctx->pc = 0x217944u;
    SET_GPR_U32(ctx, 31, 0x21794Cu);
    ctx->pc = 0x217948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217944u;
            // 0x217948: 0xa2220048  sb          $v0, 0x48($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211620u;
    if (runtime->hasFunction(0x211620u)) {
        auto targetFn = runtime->lookupFunction(0x211620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21794Cu; }
        if (ctx->pc != 0x21794Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCtrlHelpId__8CAquaMesFi_0x211620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21794Cu; }
        if (ctx->pc != 0x21794Cu) { return; }
    }
    ctx->pc = 0x21794Cu;
label_21794c:
    // 0x21794c: 0x0  nop
    ctx->pc = 0x21794cu;
    // NOP
label_217950:
    // 0x217950: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x217950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_217954:
    // 0x217954: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x217954u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_217958:
    // 0x217958: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x217958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21795c:
    // 0x21795c: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x21795cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_217960:
    // 0x217960: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
label_217964:
    if (ctx->pc == 0x217964u) {
        ctx->pc = 0x217964u;
            // 0x217964: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x217968u;
        goto label_217968;
    }
    ctx->pc = 0x217960u;
    {
        const bool branch_taken_0x217960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217960u;
            // 0x217964: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217960) {
            ctx->pc = 0x217840u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217840;
        }
    }
    ctx->pc = 0x217968u;
label_217968:
    // 0x217968: 0x878291c0  lh          $v0, -0x6E40($gp)
    ctx->pc = 0x217968u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939072)));
label_21796c:
    // 0x21796c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x21796cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_217970:
    // 0x217970: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_217974:
    if (ctx->pc == 0x217974u) {
        ctx->pc = 0x217978u;
        goto label_217978;
    }
    ctx->pc = 0x217970u;
    {
        const bool branch_taken_0x217970 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x217970) {
            ctx->pc = 0x217980u;
            goto label_217980;
        }
    }
    ctx->pc = 0x217978u;
label_217978:
    // 0x217978: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x217978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_21797c:
    // 0x21797c: 0xa78291c0  sh          $v0, -0x6E40($gp)
    ctx->pc = 0x21797cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939072), (uint16_t)GPR_U32(ctx, 2));
label_217980:
    // 0x217980: 0x878291fc  lh          $v0, -0x6E04($gp)
    ctx->pc = 0x217980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939132)));
label_217984:
    // 0x217984: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x217984u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_217988:
    // 0x217988: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_21798c:
    if (ctx->pc == 0x21798Cu) {
        ctx->pc = 0x217990u;
        goto label_217990;
    }
    ctx->pc = 0x217988u;
    {
        const bool branch_taken_0x217988 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x217988) {
            ctx->pc = 0x217998u;
            goto label_217998;
        }
    }
    ctx->pc = 0x217990u;
label_217990:
    // 0x217990: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x217990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_217994:
    // 0x217994: 0xa78291fc  sh          $v0, -0x6E04($gp)
    ctx->pc = 0x217994u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939132), (uint16_t)GPR_U32(ctx, 2));
label_217998:
    // 0x217998: 0x32420004  andi        $v0, $s2, 0x4
    ctx->pc = 0x217998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
label_21799c:
    // 0x21799c: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_2179a0:
    if (ctx->pc == 0x2179A0u) {
        ctx->pc = 0x2179A0u;
            // 0x2179a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2179A4u;
        goto label_2179a4;
    }
    ctx->pc = 0x21799Cu;
    {
        const bool branch_taken_0x21799c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2179A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21799Cu;
            // 0x2179a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21799c) {
            ctx->pc = 0x217AACu;
            goto label_217aac;
        }
    }
    ctx->pc = 0x2179A4u;
label_2179a4:
    // 0x2179a4: 0x878291c0  lh          $v0, -0x6E40($gp)
    ctx->pc = 0x2179a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939072)));
label_2179a8:
    // 0x2179a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2179ac:
    if (ctx->pc == 0x2179ACu) {
        ctx->pc = 0x2179B0u;
        goto label_2179b0;
    }
    ctx->pc = 0x2179A8u;
    {
        const bool branch_taken_0x2179a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2179a8) {
            ctx->pc = 0x2179C4u;
            goto label_2179c4;
        }
    }
    ctx->pc = 0x2179B0u;
label_2179b0:
    // 0x2179b0: 0x8f8491bc  lw          $a0, -0x6E44($gp)
    ctx->pc = 0x2179b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939068)));
label_2179b4:
    // 0x2179b4: 0xc094280  jal         func_250A00
label_2179b8:
    if (ctx->pc == 0x2179B8u) {
        ctx->pc = 0x2179B8u;
            // 0x2179b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2179BCu;
        goto label_2179bc;
    }
    ctx->pc = 0x2179B4u;
    SET_GPR_U32(ctx, 31, 0x2179BCu);
    ctx->pc = 0x2179B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2179B4u;
            // 0x2179b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250A00u;
    if (runtime->hasFunction(0x250A00u)) {
        auto targetFn = runtime->lookupFunction(0x250A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2179BCu; }
        if (ctx->pc != 0x2179BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__FUii_0x250a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2179BCu; }
        if (ctx->pc != 0x2179BCu) { return; }
    }
    ctx->pc = 0x2179BCu;
label_2179bc:
    // 0x2179bc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2179bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2179c0:
    // 0x2179c0: 0xa78291c0  sh          $v0, -0x6E40($gp)
    ctx->pc = 0x2179c0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939072), (uint16_t)GPR_U32(ctx, 2));
label_2179c4:
    // 0x2179c4: 0x8f8391f8  lw          $v1, -0x6E08($gp)
    ctx->pc = 0x2179c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939128)));
label_2179c8:
    // 0x2179c8: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
label_2179cc:
    if (ctx->pc == 0x2179CCu) {
        ctx->pc = 0x2179D0u;
        goto label_2179d0;
    }
    ctx->pc = 0x2179C8u;
    {
        const bool branch_taken_0x2179c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2179c8) {
            ctx->pc = 0x217AA8u;
            goto label_217aa8;
        }
    }
    ctx->pc = 0x2179D0u;
label_2179d0:
    // 0x2179d0: 0x878291fc  lh          $v0, -0x6E04($gp)
    ctx->pc = 0x2179d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939132)));
label_2179d4:
    // 0x2179d4: 0x1c400034  bgtz        $v0, . + 4 + (0x34 << 2)
label_2179d8:
    if (ctx->pc == 0x2179D8u) {
        ctx->pc = 0x2179DCu;
        goto label_2179dc;
    }
    ctx->pc = 0x2179D4u;
    {
        const bool branch_taken_0x2179d4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2179d4) {
            ctx->pc = 0x217AA8u;
            goto label_217aa8;
        }
    }
    ctx->pc = 0x2179DCu;
label_2179dc:
    // 0x2179dc: 0x8f829200  lw          $v0, -0x6E00($gp)
    ctx->pc = 0x2179dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939136)));
label_2179e0:
    // 0x2179e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2179e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2179e4:
    // 0x2179e4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2179e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2179e8:
    // 0x2179e8: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2179e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2179ec:
    // 0x2179ec: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2179ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_2179f0:
    // 0x2179f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2179f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2179f4:
    // 0x2179f4: 0xc0941c0  jal         func_250700
label_2179f8:
    if (ctx->pc == 0x2179F8u) {
        ctx->pc = 0x2179FCu;
        goto label_2179fc;
    }
    ctx->pc = 0x2179F4u;
    SET_GPR_U32(ctx, 31, 0x2179FCu);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2179FCu; }
        if (ctx->pc != 0x2179FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2179FCu; }
        if (ctx->pc != 0x2179FCu) { return; }
    }
    ctx->pc = 0x2179FCu;
label_2179fc:
    // 0x2179fc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2179fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_217a00:
    // 0x217a00: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x217a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_217a04:
    // 0x217a04: 0xc421c470  lwc1        $f1, -0x3B90($at)
    ctx->pc = 0x217a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_217a08:
    // 0x217a08: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x217a08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_217a0c:
    // 0x217a0c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x217a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_217a10:
    // 0x217a10: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x217a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_217a14:
    // 0x217a14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x217a14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_217a18:
    // 0x217a18: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x217a18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_217a1c:
    // 0x217a1c: 0xc0941c0  jal         func_250700
label_217a20:
    if (ctx->pc == 0x217A20u) {
        ctx->pc = 0x217A20u;
            // 0x217a20: 0xe7a00170  swc1        $f0, 0x170($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
        ctx->pc = 0x217A24u;
        goto label_217a24;
    }
    ctx->pc = 0x217A1Cu;
    SET_GPR_U32(ctx, 31, 0x217A24u);
    ctx->pc = 0x217A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217A1Cu;
            // 0x217a20: 0xe7a00170  swc1        $f0, 0x170($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217A24u; }
        if (ctx->pc != 0x217A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217A24u; }
        if (ctx->pc != 0x217A24u) { return; }
    }
    ctx->pc = 0x217A24u;
label_217a24:
    // 0x217a24: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x217a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_217a28:
    // 0x217a28: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x217a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_217a2c:
    // 0x217a2c: 0xc422c474  lwc1        $f2, -0x3B8C($at)
    ctx->pc = 0x217a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_217a30:
    // 0x217a30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x217a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_217a34:
    // 0x217a34: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x217a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_217a38:
    // 0x217a38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x217a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_217a3c:
    // 0x217a3c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x217a3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_217a40:
    // 0x217a40: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x217a40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_217a44:
    // 0x217a44: 0xc0941c0  jal         func_250700
label_217a48:
    if (ctx->pc == 0x217A48u) {
        ctx->pc = 0x217A48u;
            // 0x217a48: 0xe7a00174  swc1        $f0, 0x174($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
        ctx->pc = 0x217A4Cu;
        goto label_217a4c;
    }
    ctx->pc = 0x217A44u;
    SET_GPR_U32(ctx, 31, 0x217A4Cu);
    ctx->pc = 0x217A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217A44u;
            // 0x217a48: 0xe7a00174  swc1        $f0, 0x174($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217A4Cu; }
        if (ctx->pc != 0x217A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217A4Cu; }
        if (ctx->pc != 0x217A4Cu) { return; }
    }
    ctx->pc = 0x217A4Cu;
label_217a4c:
    // 0x217a4c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x217a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_217a50:
    // 0x217a50: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x217a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_217a54:
    // 0x217a54: 0xc422c478  lwc1        $f2, -0x3B88($at)
    ctx->pc = 0x217a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_217a58:
    // 0x217a58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_217a5c:
    // 0x217a5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x217a5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_217a60:
    // 0x217a60: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x217a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_217a64:
    // 0x217a64: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x217a64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_217a68:
    // 0x217a68: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x217a68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_217a6c:
    // 0x217a6c: 0xc08331c  jal         func_20CC70
label_217a70:
    if (ctx->pc == 0x217A70u) {
        ctx->pc = 0x217A70u;
            // 0x217a70: 0xe7a00178  swc1        $f0, 0x178($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
        ctx->pc = 0x217A74u;
        goto label_217a74;
    }
    ctx->pc = 0x217A6Cu;
    SET_GPR_U32(ctx, 31, 0x217A74u);
    ctx->pc = 0x217A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217A6Cu;
            // 0x217a70: 0xe7a00178  swc1        $f0, 0x178($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x20CC70u;
    if (runtime->hasFunction(0x20CC70u)) {
        auto targetFn = runtime->lookupFunction(0x20CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217A74u; }
        if (ctx->pc != 0x217A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Generate__7CBubbleFPf_0x20cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217A74u; }
        if (ctx->pc != 0x217A74u) { return; }
    }
    ctx->pc = 0x217A74u;
label_217a74:
    // 0x217a74: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x217a74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_217a78:
    // 0x217a78: 0x2a620030  slti        $v0, $s3, 0x30
    ctx->pc = 0x217a78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)48) ? 1 : 0);
label_217a7c:
    // 0x217a7c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_217a80:
    if (ctx->pc == 0x217A80u) {
        ctx->pc = 0x217A80u;
            // 0x217a80: 0x3c0240a0  lui         $v0, 0x40A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
        ctx->pc = 0x217A84u;
        goto label_217a84;
    }
    ctx->pc = 0x217A7Cu;
    {
        const bool branch_taken_0x217a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217A7Cu;
            // 0x217a80: 0x3c0240a0  lui         $v0, 0x40A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217a7c) {
            ctx->pc = 0x2179F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2179f0;
        }
    }
    ctx->pc = 0x217A84u;
label_217a84:
    // 0x217a84: 0x8f829200  lw          $v0, -0x6E00($gp)
    ctx->pc = 0x217a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939136)));
label_217a88:
    // 0x217a88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x217a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_217a8c:
    // 0x217a8c: 0xaf829200  sw          $v0, -0x6E00($gp)
    ctx->pc = 0x217a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939136), GPR_U32(ctx, 2));
label_217a90:
    // 0x217a90: 0x8f829200  lw          $v0, -0x6E00($gp)
    ctx->pc = 0x217a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939136)));
label_217a94:
    // 0x217a94: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x217a94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_217a98:
    // 0x217a98: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_217a9c:
    if (ctx->pc == 0x217A9Cu) {
        ctx->pc = 0x217A9Cu;
            // 0x217a9c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x217AA0u;
        goto label_217aa0;
    }
    ctx->pc = 0x217A98u;
    {
        const bool branch_taken_0x217a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217A98u;
            // 0x217a9c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217a98) {
            ctx->pc = 0x217AA4u;
            goto label_217aa4;
        }
    }
    ctx->pc = 0x217AA0u;
label_217aa0:
    // 0x217aa0: 0xaf809200  sw          $zero, -0x6E00($gp)
    ctx->pc = 0x217aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939136), GPR_U32(ctx, 0));
label_217aa4:
    // 0x217aa4: 0xa78291fc  sh          $v0, -0x6E04($gp)
    ctx->pc = 0x217aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939132), (uint16_t)GPR_U32(ctx, 2));
label_217aa8:
    // 0x217aa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_217aac:
    // 0x217aac: 0xc084638  jal         func_2118E0
label_217ab0:
    if (ctx->pc == 0x217AB0u) {
        ctx->pc = 0x217AB4u;
        goto label_217ab4;
    }
    ctx->pc = 0x217AACu;
    SET_GPR_U32(ctx, 31, 0x217AB4u);
    ctx->pc = 0x2118E0u;
    if (runtime->hasFunction(0x2118E0u)) {
        auto targetFn = runtime->lookupFunction(0x2118E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217AB4u; }
        if (ctx->pc != 0x217AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__8CAquaMesFv_0x2118e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217AB4u; }
        if (ctx->pc != 0x217AB4u) { return; }
    }
    ctx->pc = 0x217AB4u;
label_217ab4:
    // 0x217ab4: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x217ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_217ab8:
    // 0x217ab8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_217abc:
    if (ctx->pc == 0x217ABCu) {
        ctx->pc = 0x217ABCu;
            // 0x217abc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x217AC0u;
        goto label_217ac0;
    }
    ctx->pc = 0x217AB8u;
    {
        const bool branch_taken_0x217ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217AB8u;
            // 0x217abc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ab8) {
            ctx->pc = 0x217ACCu;
            goto label_217acc;
        }
    }
    ctx->pc = 0x217AC0u;
label_217ac0:
    // 0x217ac0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x217ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_217ac4:
    // 0x217ac4: 0xa6820388  sh          $v0, 0x388($s4)
    ctx->pc = 0x217ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 904), (uint16_t)GPR_U32(ctx, 2));
label_217ac8:
    // 0x217ac8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x217ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217acc:
    // 0x217acc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x217accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_217ad0:
    // 0x217ad0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x217ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_217ad4:
    // 0x217ad4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x217ad4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_217ad8:
    // 0x217ad8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x217ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_217adc:
    // 0x217adc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x217adcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_217ae0:
    // 0x217ae0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x217ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_217ae4:
    // 0x217ae4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x217ae4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_217ae8:
    // 0x217ae8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x217ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_217aec:
    // 0x217aec: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x217aecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_217af0:
    // 0x217af0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x217af0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_217af4:
    // 0x217af4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x217af4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_217af8:
    // 0x217af8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x217af8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_217afc:
    // 0x217afc: 0x3e00008  jr          $ra
label_217b00:
    if (ctx->pc == 0x217B00u) {
        ctx->pc = 0x217B00u;
            // 0x217b00: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x217B04u;
        goto label_fallthrough_0x217afc;
    }
    ctx->pc = 0x217AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217AFCu;
            // 0x217b00: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x217afc:
    ctx->pc = 0x217B04u;
}
