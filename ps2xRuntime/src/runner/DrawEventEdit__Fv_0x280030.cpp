#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawEventEdit__Fv
// Address: 0x280030 - 0x2812f4
void DrawEventEdit__Fv_0x280030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawEventEdit__Fv_0x280030");
#endif

    switch (ctx->pc) {
        case 0x280030u: goto label_280030;
        case 0x280034u: goto label_280034;
        case 0x280038u: goto label_280038;
        case 0x28003cu: goto label_28003c;
        case 0x280040u: goto label_280040;
        case 0x280044u: goto label_280044;
        case 0x280048u: goto label_280048;
        case 0x28004cu: goto label_28004c;
        case 0x280050u: goto label_280050;
        case 0x280054u: goto label_280054;
        case 0x280058u: goto label_280058;
        case 0x28005cu: goto label_28005c;
        case 0x280060u: goto label_280060;
        case 0x280064u: goto label_280064;
        case 0x280068u: goto label_280068;
        case 0x28006cu: goto label_28006c;
        case 0x280070u: goto label_280070;
        case 0x280074u: goto label_280074;
        case 0x280078u: goto label_280078;
        case 0x28007cu: goto label_28007c;
        case 0x280080u: goto label_280080;
        case 0x280084u: goto label_280084;
        case 0x280088u: goto label_280088;
        case 0x28008cu: goto label_28008c;
        case 0x280090u: goto label_280090;
        case 0x280094u: goto label_280094;
        case 0x280098u: goto label_280098;
        case 0x28009cu: goto label_28009c;
        case 0x2800a0u: goto label_2800a0;
        case 0x2800a4u: goto label_2800a4;
        case 0x2800a8u: goto label_2800a8;
        case 0x2800acu: goto label_2800ac;
        case 0x2800b0u: goto label_2800b0;
        case 0x2800b4u: goto label_2800b4;
        case 0x2800b8u: goto label_2800b8;
        case 0x2800bcu: goto label_2800bc;
        case 0x2800c0u: goto label_2800c0;
        case 0x2800c4u: goto label_2800c4;
        case 0x2800c8u: goto label_2800c8;
        case 0x2800ccu: goto label_2800cc;
        case 0x2800d0u: goto label_2800d0;
        case 0x2800d4u: goto label_2800d4;
        case 0x2800d8u: goto label_2800d8;
        case 0x2800dcu: goto label_2800dc;
        case 0x2800e0u: goto label_2800e0;
        case 0x2800e4u: goto label_2800e4;
        case 0x2800e8u: goto label_2800e8;
        case 0x2800ecu: goto label_2800ec;
        case 0x2800f0u: goto label_2800f0;
        case 0x2800f4u: goto label_2800f4;
        case 0x2800f8u: goto label_2800f8;
        case 0x2800fcu: goto label_2800fc;
        case 0x280100u: goto label_280100;
        case 0x280104u: goto label_280104;
        case 0x280108u: goto label_280108;
        case 0x28010cu: goto label_28010c;
        case 0x280110u: goto label_280110;
        case 0x280114u: goto label_280114;
        case 0x280118u: goto label_280118;
        case 0x28011cu: goto label_28011c;
        case 0x280120u: goto label_280120;
        case 0x280124u: goto label_280124;
        case 0x280128u: goto label_280128;
        case 0x28012cu: goto label_28012c;
        case 0x280130u: goto label_280130;
        case 0x280134u: goto label_280134;
        case 0x280138u: goto label_280138;
        case 0x28013cu: goto label_28013c;
        case 0x280140u: goto label_280140;
        case 0x280144u: goto label_280144;
        case 0x280148u: goto label_280148;
        case 0x28014cu: goto label_28014c;
        case 0x280150u: goto label_280150;
        case 0x280154u: goto label_280154;
        case 0x280158u: goto label_280158;
        case 0x28015cu: goto label_28015c;
        case 0x280160u: goto label_280160;
        case 0x280164u: goto label_280164;
        case 0x280168u: goto label_280168;
        case 0x28016cu: goto label_28016c;
        case 0x280170u: goto label_280170;
        case 0x280174u: goto label_280174;
        case 0x280178u: goto label_280178;
        case 0x28017cu: goto label_28017c;
        case 0x280180u: goto label_280180;
        case 0x280184u: goto label_280184;
        case 0x280188u: goto label_280188;
        case 0x28018cu: goto label_28018c;
        case 0x280190u: goto label_280190;
        case 0x280194u: goto label_280194;
        case 0x280198u: goto label_280198;
        case 0x28019cu: goto label_28019c;
        case 0x2801a0u: goto label_2801a0;
        case 0x2801a4u: goto label_2801a4;
        case 0x2801a8u: goto label_2801a8;
        case 0x2801acu: goto label_2801ac;
        case 0x2801b0u: goto label_2801b0;
        case 0x2801b4u: goto label_2801b4;
        case 0x2801b8u: goto label_2801b8;
        case 0x2801bcu: goto label_2801bc;
        case 0x2801c0u: goto label_2801c0;
        case 0x2801c4u: goto label_2801c4;
        case 0x2801c8u: goto label_2801c8;
        case 0x2801ccu: goto label_2801cc;
        case 0x2801d0u: goto label_2801d0;
        case 0x2801d4u: goto label_2801d4;
        case 0x2801d8u: goto label_2801d8;
        case 0x2801dcu: goto label_2801dc;
        case 0x2801e0u: goto label_2801e0;
        case 0x2801e4u: goto label_2801e4;
        case 0x2801e8u: goto label_2801e8;
        case 0x2801ecu: goto label_2801ec;
        case 0x2801f0u: goto label_2801f0;
        case 0x2801f4u: goto label_2801f4;
        case 0x2801f8u: goto label_2801f8;
        case 0x2801fcu: goto label_2801fc;
        case 0x280200u: goto label_280200;
        case 0x280204u: goto label_280204;
        case 0x280208u: goto label_280208;
        case 0x28020cu: goto label_28020c;
        case 0x280210u: goto label_280210;
        case 0x280214u: goto label_280214;
        case 0x280218u: goto label_280218;
        case 0x28021cu: goto label_28021c;
        case 0x280220u: goto label_280220;
        case 0x280224u: goto label_280224;
        case 0x280228u: goto label_280228;
        case 0x28022cu: goto label_28022c;
        case 0x280230u: goto label_280230;
        case 0x280234u: goto label_280234;
        case 0x280238u: goto label_280238;
        case 0x28023cu: goto label_28023c;
        case 0x280240u: goto label_280240;
        case 0x280244u: goto label_280244;
        case 0x280248u: goto label_280248;
        case 0x28024cu: goto label_28024c;
        case 0x280250u: goto label_280250;
        case 0x280254u: goto label_280254;
        case 0x280258u: goto label_280258;
        case 0x28025cu: goto label_28025c;
        case 0x280260u: goto label_280260;
        case 0x280264u: goto label_280264;
        case 0x280268u: goto label_280268;
        case 0x28026cu: goto label_28026c;
        case 0x280270u: goto label_280270;
        case 0x280274u: goto label_280274;
        case 0x280278u: goto label_280278;
        case 0x28027cu: goto label_28027c;
        case 0x280280u: goto label_280280;
        case 0x280284u: goto label_280284;
        case 0x280288u: goto label_280288;
        case 0x28028cu: goto label_28028c;
        case 0x280290u: goto label_280290;
        case 0x280294u: goto label_280294;
        case 0x280298u: goto label_280298;
        case 0x28029cu: goto label_28029c;
        case 0x2802a0u: goto label_2802a0;
        case 0x2802a4u: goto label_2802a4;
        case 0x2802a8u: goto label_2802a8;
        case 0x2802acu: goto label_2802ac;
        case 0x2802b0u: goto label_2802b0;
        case 0x2802b4u: goto label_2802b4;
        case 0x2802b8u: goto label_2802b8;
        case 0x2802bcu: goto label_2802bc;
        case 0x2802c0u: goto label_2802c0;
        case 0x2802c4u: goto label_2802c4;
        case 0x2802c8u: goto label_2802c8;
        case 0x2802ccu: goto label_2802cc;
        case 0x2802d0u: goto label_2802d0;
        case 0x2802d4u: goto label_2802d4;
        case 0x2802d8u: goto label_2802d8;
        case 0x2802dcu: goto label_2802dc;
        case 0x2802e0u: goto label_2802e0;
        case 0x2802e4u: goto label_2802e4;
        case 0x2802e8u: goto label_2802e8;
        case 0x2802ecu: goto label_2802ec;
        case 0x2802f0u: goto label_2802f0;
        case 0x2802f4u: goto label_2802f4;
        case 0x2802f8u: goto label_2802f8;
        case 0x2802fcu: goto label_2802fc;
        case 0x280300u: goto label_280300;
        case 0x280304u: goto label_280304;
        case 0x280308u: goto label_280308;
        case 0x28030cu: goto label_28030c;
        case 0x280310u: goto label_280310;
        case 0x280314u: goto label_280314;
        case 0x280318u: goto label_280318;
        case 0x28031cu: goto label_28031c;
        case 0x280320u: goto label_280320;
        case 0x280324u: goto label_280324;
        case 0x280328u: goto label_280328;
        case 0x28032cu: goto label_28032c;
        case 0x280330u: goto label_280330;
        case 0x280334u: goto label_280334;
        case 0x280338u: goto label_280338;
        case 0x28033cu: goto label_28033c;
        case 0x280340u: goto label_280340;
        case 0x280344u: goto label_280344;
        case 0x280348u: goto label_280348;
        case 0x28034cu: goto label_28034c;
        case 0x280350u: goto label_280350;
        case 0x280354u: goto label_280354;
        case 0x280358u: goto label_280358;
        case 0x28035cu: goto label_28035c;
        case 0x280360u: goto label_280360;
        case 0x280364u: goto label_280364;
        case 0x280368u: goto label_280368;
        case 0x28036cu: goto label_28036c;
        case 0x280370u: goto label_280370;
        case 0x280374u: goto label_280374;
        case 0x280378u: goto label_280378;
        case 0x28037cu: goto label_28037c;
        case 0x280380u: goto label_280380;
        case 0x280384u: goto label_280384;
        case 0x280388u: goto label_280388;
        case 0x28038cu: goto label_28038c;
        case 0x280390u: goto label_280390;
        case 0x280394u: goto label_280394;
        case 0x280398u: goto label_280398;
        case 0x28039cu: goto label_28039c;
        case 0x2803a0u: goto label_2803a0;
        case 0x2803a4u: goto label_2803a4;
        case 0x2803a8u: goto label_2803a8;
        case 0x2803acu: goto label_2803ac;
        case 0x2803b0u: goto label_2803b0;
        case 0x2803b4u: goto label_2803b4;
        case 0x2803b8u: goto label_2803b8;
        case 0x2803bcu: goto label_2803bc;
        case 0x2803c0u: goto label_2803c0;
        case 0x2803c4u: goto label_2803c4;
        case 0x2803c8u: goto label_2803c8;
        case 0x2803ccu: goto label_2803cc;
        case 0x2803d0u: goto label_2803d0;
        case 0x2803d4u: goto label_2803d4;
        case 0x2803d8u: goto label_2803d8;
        case 0x2803dcu: goto label_2803dc;
        case 0x2803e0u: goto label_2803e0;
        case 0x2803e4u: goto label_2803e4;
        case 0x2803e8u: goto label_2803e8;
        case 0x2803ecu: goto label_2803ec;
        case 0x2803f0u: goto label_2803f0;
        case 0x2803f4u: goto label_2803f4;
        case 0x2803f8u: goto label_2803f8;
        case 0x2803fcu: goto label_2803fc;
        case 0x280400u: goto label_280400;
        case 0x280404u: goto label_280404;
        case 0x280408u: goto label_280408;
        case 0x28040cu: goto label_28040c;
        case 0x280410u: goto label_280410;
        case 0x280414u: goto label_280414;
        case 0x280418u: goto label_280418;
        case 0x28041cu: goto label_28041c;
        case 0x280420u: goto label_280420;
        case 0x280424u: goto label_280424;
        case 0x280428u: goto label_280428;
        case 0x28042cu: goto label_28042c;
        case 0x280430u: goto label_280430;
        case 0x280434u: goto label_280434;
        case 0x280438u: goto label_280438;
        case 0x28043cu: goto label_28043c;
        case 0x280440u: goto label_280440;
        case 0x280444u: goto label_280444;
        case 0x280448u: goto label_280448;
        case 0x28044cu: goto label_28044c;
        case 0x280450u: goto label_280450;
        case 0x280454u: goto label_280454;
        case 0x280458u: goto label_280458;
        case 0x28045cu: goto label_28045c;
        case 0x280460u: goto label_280460;
        case 0x280464u: goto label_280464;
        case 0x280468u: goto label_280468;
        case 0x28046cu: goto label_28046c;
        case 0x280470u: goto label_280470;
        case 0x280474u: goto label_280474;
        case 0x280478u: goto label_280478;
        case 0x28047cu: goto label_28047c;
        case 0x280480u: goto label_280480;
        case 0x280484u: goto label_280484;
        case 0x280488u: goto label_280488;
        case 0x28048cu: goto label_28048c;
        case 0x280490u: goto label_280490;
        case 0x280494u: goto label_280494;
        case 0x280498u: goto label_280498;
        case 0x28049cu: goto label_28049c;
        case 0x2804a0u: goto label_2804a0;
        case 0x2804a4u: goto label_2804a4;
        case 0x2804a8u: goto label_2804a8;
        case 0x2804acu: goto label_2804ac;
        case 0x2804b0u: goto label_2804b0;
        case 0x2804b4u: goto label_2804b4;
        case 0x2804b8u: goto label_2804b8;
        case 0x2804bcu: goto label_2804bc;
        case 0x2804c0u: goto label_2804c0;
        case 0x2804c4u: goto label_2804c4;
        case 0x2804c8u: goto label_2804c8;
        case 0x2804ccu: goto label_2804cc;
        case 0x2804d0u: goto label_2804d0;
        case 0x2804d4u: goto label_2804d4;
        case 0x2804d8u: goto label_2804d8;
        case 0x2804dcu: goto label_2804dc;
        case 0x2804e0u: goto label_2804e0;
        case 0x2804e4u: goto label_2804e4;
        case 0x2804e8u: goto label_2804e8;
        case 0x2804ecu: goto label_2804ec;
        case 0x2804f0u: goto label_2804f0;
        case 0x2804f4u: goto label_2804f4;
        case 0x2804f8u: goto label_2804f8;
        case 0x2804fcu: goto label_2804fc;
        case 0x280500u: goto label_280500;
        case 0x280504u: goto label_280504;
        case 0x280508u: goto label_280508;
        case 0x28050cu: goto label_28050c;
        case 0x280510u: goto label_280510;
        case 0x280514u: goto label_280514;
        case 0x280518u: goto label_280518;
        case 0x28051cu: goto label_28051c;
        case 0x280520u: goto label_280520;
        case 0x280524u: goto label_280524;
        case 0x280528u: goto label_280528;
        case 0x28052cu: goto label_28052c;
        case 0x280530u: goto label_280530;
        case 0x280534u: goto label_280534;
        case 0x280538u: goto label_280538;
        case 0x28053cu: goto label_28053c;
        case 0x280540u: goto label_280540;
        case 0x280544u: goto label_280544;
        case 0x280548u: goto label_280548;
        case 0x28054cu: goto label_28054c;
        case 0x280550u: goto label_280550;
        case 0x280554u: goto label_280554;
        case 0x280558u: goto label_280558;
        case 0x28055cu: goto label_28055c;
        case 0x280560u: goto label_280560;
        case 0x280564u: goto label_280564;
        case 0x280568u: goto label_280568;
        case 0x28056cu: goto label_28056c;
        case 0x280570u: goto label_280570;
        case 0x280574u: goto label_280574;
        case 0x280578u: goto label_280578;
        case 0x28057cu: goto label_28057c;
        case 0x280580u: goto label_280580;
        case 0x280584u: goto label_280584;
        case 0x280588u: goto label_280588;
        case 0x28058cu: goto label_28058c;
        case 0x280590u: goto label_280590;
        case 0x280594u: goto label_280594;
        case 0x280598u: goto label_280598;
        case 0x28059cu: goto label_28059c;
        case 0x2805a0u: goto label_2805a0;
        case 0x2805a4u: goto label_2805a4;
        case 0x2805a8u: goto label_2805a8;
        case 0x2805acu: goto label_2805ac;
        case 0x2805b0u: goto label_2805b0;
        case 0x2805b4u: goto label_2805b4;
        case 0x2805b8u: goto label_2805b8;
        case 0x2805bcu: goto label_2805bc;
        case 0x2805c0u: goto label_2805c0;
        case 0x2805c4u: goto label_2805c4;
        case 0x2805c8u: goto label_2805c8;
        case 0x2805ccu: goto label_2805cc;
        case 0x2805d0u: goto label_2805d0;
        case 0x2805d4u: goto label_2805d4;
        case 0x2805d8u: goto label_2805d8;
        case 0x2805dcu: goto label_2805dc;
        case 0x2805e0u: goto label_2805e0;
        case 0x2805e4u: goto label_2805e4;
        case 0x2805e8u: goto label_2805e8;
        case 0x2805ecu: goto label_2805ec;
        case 0x2805f0u: goto label_2805f0;
        case 0x2805f4u: goto label_2805f4;
        case 0x2805f8u: goto label_2805f8;
        case 0x2805fcu: goto label_2805fc;
        case 0x280600u: goto label_280600;
        case 0x280604u: goto label_280604;
        case 0x280608u: goto label_280608;
        case 0x28060cu: goto label_28060c;
        case 0x280610u: goto label_280610;
        case 0x280614u: goto label_280614;
        case 0x280618u: goto label_280618;
        case 0x28061cu: goto label_28061c;
        case 0x280620u: goto label_280620;
        case 0x280624u: goto label_280624;
        case 0x280628u: goto label_280628;
        case 0x28062cu: goto label_28062c;
        case 0x280630u: goto label_280630;
        case 0x280634u: goto label_280634;
        case 0x280638u: goto label_280638;
        case 0x28063cu: goto label_28063c;
        case 0x280640u: goto label_280640;
        case 0x280644u: goto label_280644;
        case 0x280648u: goto label_280648;
        case 0x28064cu: goto label_28064c;
        case 0x280650u: goto label_280650;
        case 0x280654u: goto label_280654;
        case 0x280658u: goto label_280658;
        case 0x28065cu: goto label_28065c;
        case 0x280660u: goto label_280660;
        case 0x280664u: goto label_280664;
        case 0x280668u: goto label_280668;
        case 0x28066cu: goto label_28066c;
        case 0x280670u: goto label_280670;
        case 0x280674u: goto label_280674;
        case 0x280678u: goto label_280678;
        case 0x28067cu: goto label_28067c;
        case 0x280680u: goto label_280680;
        case 0x280684u: goto label_280684;
        case 0x280688u: goto label_280688;
        case 0x28068cu: goto label_28068c;
        case 0x280690u: goto label_280690;
        case 0x280694u: goto label_280694;
        case 0x280698u: goto label_280698;
        case 0x28069cu: goto label_28069c;
        case 0x2806a0u: goto label_2806a0;
        case 0x2806a4u: goto label_2806a4;
        case 0x2806a8u: goto label_2806a8;
        case 0x2806acu: goto label_2806ac;
        case 0x2806b0u: goto label_2806b0;
        case 0x2806b4u: goto label_2806b4;
        case 0x2806b8u: goto label_2806b8;
        case 0x2806bcu: goto label_2806bc;
        case 0x2806c0u: goto label_2806c0;
        case 0x2806c4u: goto label_2806c4;
        case 0x2806c8u: goto label_2806c8;
        case 0x2806ccu: goto label_2806cc;
        case 0x2806d0u: goto label_2806d0;
        case 0x2806d4u: goto label_2806d4;
        case 0x2806d8u: goto label_2806d8;
        case 0x2806dcu: goto label_2806dc;
        case 0x2806e0u: goto label_2806e0;
        case 0x2806e4u: goto label_2806e4;
        case 0x2806e8u: goto label_2806e8;
        case 0x2806ecu: goto label_2806ec;
        case 0x2806f0u: goto label_2806f0;
        case 0x2806f4u: goto label_2806f4;
        case 0x2806f8u: goto label_2806f8;
        case 0x2806fcu: goto label_2806fc;
        case 0x280700u: goto label_280700;
        case 0x280704u: goto label_280704;
        case 0x280708u: goto label_280708;
        case 0x28070cu: goto label_28070c;
        case 0x280710u: goto label_280710;
        case 0x280714u: goto label_280714;
        case 0x280718u: goto label_280718;
        case 0x28071cu: goto label_28071c;
        case 0x280720u: goto label_280720;
        case 0x280724u: goto label_280724;
        case 0x280728u: goto label_280728;
        case 0x28072cu: goto label_28072c;
        case 0x280730u: goto label_280730;
        case 0x280734u: goto label_280734;
        case 0x280738u: goto label_280738;
        case 0x28073cu: goto label_28073c;
        case 0x280740u: goto label_280740;
        case 0x280744u: goto label_280744;
        case 0x280748u: goto label_280748;
        case 0x28074cu: goto label_28074c;
        case 0x280750u: goto label_280750;
        case 0x280754u: goto label_280754;
        case 0x280758u: goto label_280758;
        case 0x28075cu: goto label_28075c;
        case 0x280760u: goto label_280760;
        case 0x280764u: goto label_280764;
        case 0x280768u: goto label_280768;
        case 0x28076cu: goto label_28076c;
        case 0x280770u: goto label_280770;
        case 0x280774u: goto label_280774;
        case 0x280778u: goto label_280778;
        case 0x28077cu: goto label_28077c;
        case 0x280780u: goto label_280780;
        case 0x280784u: goto label_280784;
        case 0x280788u: goto label_280788;
        case 0x28078cu: goto label_28078c;
        case 0x280790u: goto label_280790;
        case 0x280794u: goto label_280794;
        case 0x280798u: goto label_280798;
        case 0x28079cu: goto label_28079c;
        case 0x2807a0u: goto label_2807a0;
        case 0x2807a4u: goto label_2807a4;
        case 0x2807a8u: goto label_2807a8;
        case 0x2807acu: goto label_2807ac;
        case 0x2807b0u: goto label_2807b0;
        case 0x2807b4u: goto label_2807b4;
        case 0x2807b8u: goto label_2807b8;
        case 0x2807bcu: goto label_2807bc;
        case 0x2807c0u: goto label_2807c0;
        case 0x2807c4u: goto label_2807c4;
        case 0x2807c8u: goto label_2807c8;
        case 0x2807ccu: goto label_2807cc;
        case 0x2807d0u: goto label_2807d0;
        case 0x2807d4u: goto label_2807d4;
        case 0x2807d8u: goto label_2807d8;
        case 0x2807dcu: goto label_2807dc;
        case 0x2807e0u: goto label_2807e0;
        case 0x2807e4u: goto label_2807e4;
        case 0x2807e8u: goto label_2807e8;
        case 0x2807ecu: goto label_2807ec;
        case 0x2807f0u: goto label_2807f0;
        case 0x2807f4u: goto label_2807f4;
        case 0x2807f8u: goto label_2807f8;
        case 0x2807fcu: goto label_2807fc;
        case 0x280800u: goto label_280800;
        case 0x280804u: goto label_280804;
        case 0x280808u: goto label_280808;
        case 0x28080cu: goto label_28080c;
        case 0x280810u: goto label_280810;
        case 0x280814u: goto label_280814;
        case 0x280818u: goto label_280818;
        case 0x28081cu: goto label_28081c;
        case 0x280820u: goto label_280820;
        case 0x280824u: goto label_280824;
        case 0x280828u: goto label_280828;
        case 0x28082cu: goto label_28082c;
        case 0x280830u: goto label_280830;
        case 0x280834u: goto label_280834;
        case 0x280838u: goto label_280838;
        case 0x28083cu: goto label_28083c;
        case 0x280840u: goto label_280840;
        case 0x280844u: goto label_280844;
        case 0x280848u: goto label_280848;
        case 0x28084cu: goto label_28084c;
        case 0x280850u: goto label_280850;
        case 0x280854u: goto label_280854;
        case 0x280858u: goto label_280858;
        case 0x28085cu: goto label_28085c;
        case 0x280860u: goto label_280860;
        case 0x280864u: goto label_280864;
        case 0x280868u: goto label_280868;
        case 0x28086cu: goto label_28086c;
        case 0x280870u: goto label_280870;
        case 0x280874u: goto label_280874;
        case 0x280878u: goto label_280878;
        case 0x28087cu: goto label_28087c;
        case 0x280880u: goto label_280880;
        case 0x280884u: goto label_280884;
        case 0x280888u: goto label_280888;
        case 0x28088cu: goto label_28088c;
        case 0x280890u: goto label_280890;
        case 0x280894u: goto label_280894;
        case 0x280898u: goto label_280898;
        case 0x28089cu: goto label_28089c;
        case 0x2808a0u: goto label_2808a0;
        case 0x2808a4u: goto label_2808a4;
        case 0x2808a8u: goto label_2808a8;
        case 0x2808acu: goto label_2808ac;
        case 0x2808b0u: goto label_2808b0;
        case 0x2808b4u: goto label_2808b4;
        case 0x2808b8u: goto label_2808b8;
        case 0x2808bcu: goto label_2808bc;
        case 0x2808c0u: goto label_2808c0;
        case 0x2808c4u: goto label_2808c4;
        case 0x2808c8u: goto label_2808c8;
        case 0x2808ccu: goto label_2808cc;
        case 0x2808d0u: goto label_2808d0;
        case 0x2808d4u: goto label_2808d4;
        case 0x2808d8u: goto label_2808d8;
        case 0x2808dcu: goto label_2808dc;
        case 0x2808e0u: goto label_2808e0;
        case 0x2808e4u: goto label_2808e4;
        case 0x2808e8u: goto label_2808e8;
        case 0x2808ecu: goto label_2808ec;
        case 0x2808f0u: goto label_2808f0;
        case 0x2808f4u: goto label_2808f4;
        case 0x2808f8u: goto label_2808f8;
        case 0x2808fcu: goto label_2808fc;
        case 0x280900u: goto label_280900;
        case 0x280904u: goto label_280904;
        case 0x280908u: goto label_280908;
        case 0x28090cu: goto label_28090c;
        case 0x280910u: goto label_280910;
        case 0x280914u: goto label_280914;
        case 0x280918u: goto label_280918;
        case 0x28091cu: goto label_28091c;
        case 0x280920u: goto label_280920;
        case 0x280924u: goto label_280924;
        case 0x280928u: goto label_280928;
        case 0x28092cu: goto label_28092c;
        case 0x280930u: goto label_280930;
        case 0x280934u: goto label_280934;
        case 0x280938u: goto label_280938;
        case 0x28093cu: goto label_28093c;
        case 0x280940u: goto label_280940;
        case 0x280944u: goto label_280944;
        case 0x280948u: goto label_280948;
        case 0x28094cu: goto label_28094c;
        case 0x280950u: goto label_280950;
        case 0x280954u: goto label_280954;
        case 0x280958u: goto label_280958;
        case 0x28095cu: goto label_28095c;
        case 0x280960u: goto label_280960;
        case 0x280964u: goto label_280964;
        case 0x280968u: goto label_280968;
        case 0x28096cu: goto label_28096c;
        case 0x280970u: goto label_280970;
        case 0x280974u: goto label_280974;
        case 0x280978u: goto label_280978;
        case 0x28097cu: goto label_28097c;
        case 0x280980u: goto label_280980;
        case 0x280984u: goto label_280984;
        case 0x280988u: goto label_280988;
        case 0x28098cu: goto label_28098c;
        case 0x280990u: goto label_280990;
        case 0x280994u: goto label_280994;
        case 0x280998u: goto label_280998;
        case 0x28099cu: goto label_28099c;
        case 0x2809a0u: goto label_2809a0;
        case 0x2809a4u: goto label_2809a4;
        case 0x2809a8u: goto label_2809a8;
        case 0x2809acu: goto label_2809ac;
        case 0x2809b0u: goto label_2809b0;
        case 0x2809b4u: goto label_2809b4;
        case 0x2809b8u: goto label_2809b8;
        case 0x2809bcu: goto label_2809bc;
        case 0x2809c0u: goto label_2809c0;
        case 0x2809c4u: goto label_2809c4;
        case 0x2809c8u: goto label_2809c8;
        case 0x2809ccu: goto label_2809cc;
        case 0x2809d0u: goto label_2809d0;
        case 0x2809d4u: goto label_2809d4;
        case 0x2809d8u: goto label_2809d8;
        case 0x2809dcu: goto label_2809dc;
        case 0x2809e0u: goto label_2809e0;
        case 0x2809e4u: goto label_2809e4;
        case 0x2809e8u: goto label_2809e8;
        case 0x2809ecu: goto label_2809ec;
        case 0x2809f0u: goto label_2809f0;
        case 0x2809f4u: goto label_2809f4;
        case 0x2809f8u: goto label_2809f8;
        case 0x2809fcu: goto label_2809fc;
        case 0x280a00u: goto label_280a00;
        case 0x280a04u: goto label_280a04;
        case 0x280a08u: goto label_280a08;
        case 0x280a0cu: goto label_280a0c;
        case 0x280a10u: goto label_280a10;
        case 0x280a14u: goto label_280a14;
        case 0x280a18u: goto label_280a18;
        case 0x280a1cu: goto label_280a1c;
        case 0x280a20u: goto label_280a20;
        case 0x280a24u: goto label_280a24;
        case 0x280a28u: goto label_280a28;
        case 0x280a2cu: goto label_280a2c;
        case 0x280a30u: goto label_280a30;
        case 0x280a34u: goto label_280a34;
        case 0x280a38u: goto label_280a38;
        case 0x280a3cu: goto label_280a3c;
        case 0x280a40u: goto label_280a40;
        case 0x280a44u: goto label_280a44;
        case 0x280a48u: goto label_280a48;
        case 0x280a4cu: goto label_280a4c;
        case 0x280a50u: goto label_280a50;
        case 0x280a54u: goto label_280a54;
        case 0x280a58u: goto label_280a58;
        case 0x280a5cu: goto label_280a5c;
        case 0x280a60u: goto label_280a60;
        case 0x280a64u: goto label_280a64;
        case 0x280a68u: goto label_280a68;
        case 0x280a6cu: goto label_280a6c;
        case 0x280a70u: goto label_280a70;
        case 0x280a74u: goto label_280a74;
        case 0x280a78u: goto label_280a78;
        case 0x280a7cu: goto label_280a7c;
        case 0x280a80u: goto label_280a80;
        case 0x280a84u: goto label_280a84;
        case 0x280a88u: goto label_280a88;
        case 0x280a8cu: goto label_280a8c;
        case 0x280a90u: goto label_280a90;
        case 0x280a94u: goto label_280a94;
        case 0x280a98u: goto label_280a98;
        case 0x280a9cu: goto label_280a9c;
        case 0x280aa0u: goto label_280aa0;
        case 0x280aa4u: goto label_280aa4;
        case 0x280aa8u: goto label_280aa8;
        case 0x280aacu: goto label_280aac;
        case 0x280ab0u: goto label_280ab0;
        case 0x280ab4u: goto label_280ab4;
        case 0x280ab8u: goto label_280ab8;
        case 0x280abcu: goto label_280abc;
        case 0x280ac0u: goto label_280ac0;
        case 0x280ac4u: goto label_280ac4;
        case 0x280ac8u: goto label_280ac8;
        case 0x280accu: goto label_280acc;
        case 0x280ad0u: goto label_280ad0;
        case 0x280ad4u: goto label_280ad4;
        case 0x280ad8u: goto label_280ad8;
        case 0x280adcu: goto label_280adc;
        case 0x280ae0u: goto label_280ae0;
        case 0x280ae4u: goto label_280ae4;
        case 0x280ae8u: goto label_280ae8;
        case 0x280aecu: goto label_280aec;
        case 0x280af0u: goto label_280af0;
        case 0x280af4u: goto label_280af4;
        case 0x280af8u: goto label_280af8;
        case 0x280afcu: goto label_280afc;
        case 0x280b00u: goto label_280b00;
        case 0x280b04u: goto label_280b04;
        case 0x280b08u: goto label_280b08;
        case 0x280b0cu: goto label_280b0c;
        case 0x280b10u: goto label_280b10;
        case 0x280b14u: goto label_280b14;
        case 0x280b18u: goto label_280b18;
        case 0x280b1cu: goto label_280b1c;
        case 0x280b20u: goto label_280b20;
        case 0x280b24u: goto label_280b24;
        case 0x280b28u: goto label_280b28;
        case 0x280b2cu: goto label_280b2c;
        case 0x280b30u: goto label_280b30;
        case 0x280b34u: goto label_280b34;
        case 0x280b38u: goto label_280b38;
        case 0x280b3cu: goto label_280b3c;
        case 0x280b40u: goto label_280b40;
        case 0x280b44u: goto label_280b44;
        case 0x280b48u: goto label_280b48;
        case 0x280b4cu: goto label_280b4c;
        case 0x280b50u: goto label_280b50;
        case 0x280b54u: goto label_280b54;
        case 0x280b58u: goto label_280b58;
        case 0x280b5cu: goto label_280b5c;
        case 0x280b60u: goto label_280b60;
        case 0x280b64u: goto label_280b64;
        case 0x280b68u: goto label_280b68;
        case 0x280b6cu: goto label_280b6c;
        case 0x280b70u: goto label_280b70;
        case 0x280b74u: goto label_280b74;
        case 0x280b78u: goto label_280b78;
        case 0x280b7cu: goto label_280b7c;
        case 0x280b80u: goto label_280b80;
        case 0x280b84u: goto label_280b84;
        case 0x280b88u: goto label_280b88;
        case 0x280b8cu: goto label_280b8c;
        case 0x280b90u: goto label_280b90;
        case 0x280b94u: goto label_280b94;
        case 0x280b98u: goto label_280b98;
        case 0x280b9cu: goto label_280b9c;
        case 0x280ba0u: goto label_280ba0;
        case 0x280ba4u: goto label_280ba4;
        case 0x280ba8u: goto label_280ba8;
        case 0x280bacu: goto label_280bac;
        case 0x280bb0u: goto label_280bb0;
        case 0x280bb4u: goto label_280bb4;
        case 0x280bb8u: goto label_280bb8;
        case 0x280bbcu: goto label_280bbc;
        case 0x280bc0u: goto label_280bc0;
        case 0x280bc4u: goto label_280bc4;
        case 0x280bc8u: goto label_280bc8;
        case 0x280bccu: goto label_280bcc;
        case 0x280bd0u: goto label_280bd0;
        case 0x280bd4u: goto label_280bd4;
        case 0x280bd8u: goto label_280bd8;
        case 0x280bdcu: goto label_280bdc;
        case 0x280be0u: goto label_280be0;
        case 0x280be4u: goto label_280be4;
        case 0x280be8u: goto label_280be8;
        case 0x280becu: goto label_280bec;
        case 0x280bf0u: goto label_280bf0;
        case 0x280bf4u: goto label_280bf4;
        case 0x280bf8u: goto label_280bf8;
        case 0x280bfcu: goto label_280bfc;
        case 0x280c00u: goto label_280c00;
        case 0x280c04u: goto label_280c04;
        case 0x280c08u: goto label_280c08;
        case 0x280c0cu: goto label_280c0c;
        case 0x280c10u: goto label_280c10;
        case 0x280c14u: goto label_280c14;
        case 0x280c18u: goto label_280c18;
        case 0x280c1cu: goto label_280c1c;
        case 0x280c20u: goto label_280c20;
        case 0x280c24u: goto label_280c24;
        case 0x280c28u: goto label_280c28;
        case 0x280c2cu: goto label_280c2c;
        case 0x280c30u: goto label_280c30;
        case 0x280c34u: goto label_280c34;
        case 0x280c38u: goto label_280c38;
        case 0x280c3cu: goto label_280c3c;
        case 0x280c40u: goto label_280c40;
        case 0x280c44u: goto label_280c44;
        case 0x280c48u: goto label_280c48;
        case 0x280c4cu: goto label_280c4c;
        case 0x280c50u: goto label_280c50;
        case 0x280c54u: goto label_280c54;
        case 0x280c58u: goto label_280c58;
        case 0x280c5cu: goto label_280c5c;
        case 0x280c60u: goto label_280c60;
        case 0x280c64u: goto label_280c64;
        case 0x280c68u: goto label_280c68;
        case 0x280c6cu: goto label_280c6c;
        case 0x280c70u: goto label_280c70;
        case 0x280c74u: goto label_280c74;
        case 0x280c78u: goto label_280c78;
        case 0x280c7cu: goto label_280c7c;
        case 0x280c80u: goto label_280c80;
        case 0x280c84u: goto label_280c84;
        case 0x280c88u: goto label_280c88;
        case 0x280c8cu: goto label_280c8c;
        case 0x280c90u: goto label_280c90;
        case 0x280c94u: goto label_280c94;
        case 0x280c98u: goto label_280c98;
        case 0x280c9cu: goto label_280c9c;
        case 0x280ca0u: goto label_280ca0;
        case 0x280ca4u: goto label_280ca4;
        case 0x280ca8u: goto label_280ca8;
        case 0x280cacu: goto label_280cac;
        case 0x280cb0u: goto label_280cb0;
        case 0x280cb4u: goto label_280cb4;
        case 0x280cb8u: goto label_280cb8;
        case 0x280cbcu: goto label_280cbc;
        case 0x280cc0u: goto label_280cc0;
        case 0x280cc4u: goto label_280cc4;
        case 0x280cc8u: goto label_280cc8;
        case 0x280cccu: goto label_280ccc;
        case 0x280cd0u: goto label_280cd0;
        case 0x280cd4u: goto label_280cd4;
        case 0x280cd8u: goto label_280cd8;
        case 0x280cdcu: goto label_280cdc;
        case 0x280ce0u: goto label_280ce0;
        case 0x280ce4u: goto label_280ce4;
        case 0x280ce8u: goto label_280ce8;
        case 0x280cecu: goto label_280cec;
        case 0x280cf0u: goto label_280cf0;
        case 0x280cf4u: goto label_280cf4;
        case 0x280cf8u: goto label_280cf8;
        case 0x280cfcu: goto label_280cfc;
        case 0x280d00u: goto label_280d00;
        case 0x280d04u: goto label_280d04;
        case 0x280d08u: goto label_280d08;
        case 0x280d0cu: goto label_280d0c;
        case 0x280d10u: goto label_280d10;
        case 0x280d14u: goto label_280d14;
        case 0x280d18u: goto label_280d18;
        case 0x280d1cu: goto label_280d1c;
        case 0x280d20u: goto label_280d20;
        case 0x280d24u: goto label_280d24;
        case 0x280d28u: goto label_280d28;
        case 0x280d2cu: goto label_280d2c;
        case 0x280d30u: goto label_280d30;
        case 0x280d34u: goto label_280d34;
        case 0x280d38u: goto label_280d38;
        case 0x280d3cu: goto label_280d3c;
        case 0x280d40u: goto label_280d40;
        case 0x280d44u: goto label_280d44;
        case 0x280d48u: goto label_280d48;
        case 0x280d4cu: goto label_280d4c;
        case 0x280d50u: goto label_280d50;
        case 0x280d54u: goto label_280d54;
        case 0x280d58u: goto label_280d58;
        case 0x280d5cu: goto label_280d5c;
        case 0x280d60u: goto label_280d60;
        case 0x280d64u: goto label_280d64;
        case 0x280d68u: goto label_280d68;
        case 0x280d6cu: goto label_280d6c;
        case 0x280d70u: goto label_280d70;
        case 0x280d74u: goto label_280d74;
        case 0x280d78u: goto label_280d78;
        case 0x280d7cu: goto label_280d7c;
        case 0x280d80u: goto label_280d80;
        case 0x280d84u: goto label_280d84;
        case 0x280d88u: goto label_280d88;
        case 0x280d8cu: goto label_280d8c;
        case 0x280d90u: goto label_280d90;
        case 0x280d94u: goto label_280d94;
        case 0x280d98u: goto label_280d98;
        case 0x280d9cu: goto label_280d9c;
        case 0x280da0u: goto label_280da0;
        case 0x280da4u: goto label_280da4;
        case 0x280da8u: goto label_280da8;
        case 0x280dacu: goto label_280dac;
        case 0x280db0u: goto label_280db0;
        case 0x280db4u: goto label_280db4;
        case 0x280db8u: goto label_280db8;
        case 0x280dbcu: goto label_280dbc;
        case 0x280dc0u: goto label_280dc0;
        case 0x280dc4u: goto label_280dc4;
        case 0x280dc8u: goto label_280dc8;
        case 0x280dccu: goto label_280dcc;
        case 0x280dd0u: goto label_280dd0;
        case 0x280dd4u: goto label_280dd4;
        case 0x280dd8u: goto label_280dd8;
        case 0x280ddcu: goto label_280ddc;
        case 0x280de0u: goto label_280de0;
        case 0x280de4u: goto label_280de4;
        case 0x280de8u: goto label_280de8;
        case 0x280decu: goto label_280dec;
        case 0x280df0u: goto label_280df0;
        case 0x280df4u: goto label_280df4;
        case 0x280df8u: goto label_280df8;
        case 0x280dfcu: goto label_280dfc;
        case 0x280e00u: goto label_280e00;
        case 0x280e04u: goto label_280e04;
        case 0x280e08u: goto label_280e08;
        case 0x280e0cu: goto label_280e0c;
        case 0x280e10u: goto label_280e10;
        case 0x280e14u: goto label_280e14;
        case 0x280e18u: goto label_280e18;
        case 0x280e1cu: goto label_280e1c;
        case 0x280e20u: goto label_280e20;
        case 0x280e24u: goto label_280e24;
        case 0x280e28u: goto label_280e28;
        case 0x280e2cu: goto label_280e2c;
        case 0x280e30u: goto label_280e30;
        case 0x280e34u: goto label_280e34;
        case 0x280e38u: goto label_280e38;
        case 0x280e3cu: goto label_280e3c;
        case 0x280e40u: goto label_280e40;
        case 0x280e44u: goto label_280e44;
        case 0x280e48u: goto label_280e48;
        case 0x280e4cu: goto label_280e4c;
        case 0x280e50u: goto label_280e50;
        case 0x280e54u: goto label_280e54;
        case 0x280e58u: goto label_280e58;
        case 0x280e5cu: goto label_280e5c;
        case 0x280e60u: goto label_280e60;
        case 0x280e64u: goto label_280e64;
        case 0x280e68u: goto label_280e68;
        case 0x280e6cu: goto label_280e6c;
        case 0x280e70u: goto label_280e70;
        case 0x280e74u: goto label_280e74;
        case 0x280e78u: goto label_280e78;
        case 0x280e7cu: goto label_280e7c;
        case 0x280e80u: goto label_280e80;
        case 0x280e84u: goto label_280e84;
        case 0x280e88u: goto label_280e88;
        case 0x280e8cu: goto label_280e8c;
        case 0x280e90u: goto label_280e90;
        case 0x280e94u: goto label_280e94;
        case 0x280e98u: goto label_280e98;
        case 0x280e9cu: goto label_280e9c;
        case 0x280ea0u: goto label_280ea0;
        case 0x280ea4u: goto label_280ea4;
        case 0x280ea8u: goto label_280ea8;
        case 0x280eacu: goto label_280eac;
        case 0x280eb0u: goto label_280eb0;
        case 0x280eb4u: goto label_280eb4;
        case 0x280eb8u: goto label_280eb8;
        case 0x280ebcu: goto label_280ebc;
        case 0x280ec0u: goto label_280ec0;
        case 0x280ec4u: goto label_280ec4;
        case 0x280ec8u: goto label_280ec8;
        case 0x280eccu: goto label_280ecc;
        case 0x280ed0u: goto label_280ed0;
        case 0x280ed4u: goto label_280ed4;
        case 0x280ed8u: goto label_280ed8;
        case 0x280edcu: goto label_280edc;
        case 0x280ee0u: goto label_280ee0;
        case 0x280ee4u: goto label_280ee4;
        case 0x280ee8u: goto label_280ee8;
        case 0x280eecu: goto label_280eec;
        case 0x280ef0u: goto label_280ef0;
        case 0x280ef4u: goto label_280ef4;
        case 0x280ef8u: goto label_280ef8;
        case 0x280efcu: goto label_280efc;
        case 0x280f00u: goto label_280f00;
        case 0x280f04u: goto label_280f04;
        case 0x280f08u: goto label_280f08;
        case 0x280f0cu: goto label_280f0c;
        case 0x280f10u: goto label_280f10;
        case 0x280f14u: goto label_280f14;
        case 0x280f18u: goto label_280f18;
        case 0x280f1cu: goto label_280f1c;
        case 0x280f20u: goto label_280f20;
        case 0x280f24u: goto label_280f24;
        case 0x280f28u: goto label_280f28;
        case 0x280f2cu: goto label_280f2c;
        case 0x280f30u: goto label_280f30;
        case 0x280f34u: goto label_280f34;
        case 0x280f38u: goto label_280f38;
        case 0x280f3cu: goto label_280f3c;
        case 0x280f40u: goto label_280f40;
        case 0x280f44u: goto label_280f44;
        case 0x280f48u: goto label_280f48;
        case 0x280f4cu: goto label_280f4c;
        case 0x280f50u: goto label_280f50;
        case 0x280f54u: goto label_280f54;
        case 0x280f58u: goto label_280f58;
        case 0x280f5cu: goto label_280f5c;
        case 0x280f60u: goto label_280f60;
        case 0x280f64u: goto label_280f64;
        case 0x280f68u: goto label_280f68;
        case 0x280f6cu: goto label_280f6c;
        case 0x280f70u: goto label_280f70;
        case 0x280f74u: goto label_280f74;
        case 0x280f78u: goto label_280f78;
        case 0x280f7cu: goto label_280f7c;
        case 0x280f80u: goto label_280f80;
        case 0x280f84u: goto label_280f84;
        case 0x280f88u: goto label_280f88;
        case 0x280f8cu: goto label_280f8c;
        case 0x280f90u: goto label_280f90;
        case 0x280f94u: goto label_280f94;
        case 0x280f98u: goto label_280f98;
        case 0x280f9cu: goto label_280f9c;
        case 0x280fa0u: goto label_280fa0;
        case 0x280fa4u: goto label_280fa4;
        case 0x280fa8u: goto label_280fa8;
        case 0x280facu: goto label_280fac;
        case 0x280fb0u: goto label_280fb0;
        case 0x280fb4u: goto label_280fb4;
        case 0x280fb8u: goto label_280fb8;
        case 0x280fbcu: goto label_280fbc;
        case 0x280fc0u: goto label_280fc0;
        case 0x280fc4u: goto label_280fc4;
        case 0x280fc8u: goto label_280fc8;
        case 0x280fccu: goto label_280fcc;
        case 0x280fd0u: goto label_280fd0;
        case 0x280fd4u: goto label_280fd4;
        case 0x280fd8u: goto label_280fd8;
        case 0x280fdcu: goto label_280fdc;
        case 0x280fe0u: goto label_280fe0;
        case 0x280fe4u: goto label_280fe4;
        case 0x280fe8u: goto label_280fe8;
        case 0x280fecu: goto label_280fec;
        case 0x280ff0u: goto label_280ff0;
        case 0x280ff4u: goto label_280ff4;
        case 0x280ff8u: goto label_280ff8;
        case 0x280ffcu: goto label_280ffc;
        case 0x281000u: goto label_281000;
        case 0x281004u: goto label_281004;
        case 0x281008u: goto label_281008;
        case 0x28100cu: goto label_28100c;
        case 0x281010u: goto label_281010;
        case 0x281014u: goto label_281014;
        case 0x281018u: goto label_281018;
        case 0x28101cu: goto label_28101c;
        case 0x281020u: goto label_281020;
        case 0x281024u: goto label_281024;
        case 0x281028u: goto label_281028;
        case 0x28102cu: goto label_28102c;
        case 0x281030u: goto label_281030;
        case 0x281034u: goto label_281034;
        case 0x281038u: goto label_281038;
        case 0x28103cu: goto label_28103c;
        case 0x281040u: goto label_281040;
        case 0x281044u: goto label_281044;
        case 0x281048u: goto label_281048;
        case 0x28104cu: goto label_28104c;
        case 0x281050u: goto label_281050;
        case 0x281054u: goto label_281054;
        case 0x281058u: goto label_281058;
        case 0x28105cu: goto label_28105c;
        case 0x281060u: goto label_281060;
        case 0x281064u: goto label_281064;
        case 0x281068u: goto label_281068;
        case 0x28106cu: goto label_28106c;
        case 0x281070u: goto label_281070;
        case 0x281074u: goto label_281074;
        case 0x281078u: goto label_281078;
        case 0x28107cu: goto label_28107c;
        case 0x281080u: goto label_281080;
        case 0x281084u: goto label_281084;
        case 0x281088u: goto label_281088;
        case 0x28108cu: goto label_28108c;
        case 0x281090u: goto label_281090;
        case 0x281094u: goto label_281094;
        case 0x281098u: goto label_281098;
        case 0x28109cu: goto label_28109c;
        case 0x2810a0u: goto label_2810a0;
        case 0x2810a4u: goto label_2810a4;
        case 0x2810a8u: goto label_2810a8;
        case 0x2810acu: goto label_2810ac;
        case 0x2810b0u: goto label_2810b0;
        case 0x2810b4u: goto label_2810b4;
        case 0x2810b8u: goto label_2810b8;
        case 0x2810bcu: goto label_2810bc;
        case 0x2810c0u: goto label_2810c0;
        case 0x2810c4u: goto label_2810c4;
        case 0x2810c8u: goto label_2810c8;
        case 0x2810ccu: goto label_2810cc;
        case 0x2810d0u: goto label_2810d0;
        case 0x2810d4u: goto label_2810d4;
        case 0x2810d8u: goto label_2810d8;
        case 0x2810dcu: goto label_2810dc;
        case 0x2810e0u: goto label_2810e0;
        case 0x2810e4u: goto label_2810e4;
        case 0x2810e8u: goto label_2810e8;
        case 0x2810ecu: goto label_2810ec;
        case 0x2810f0u: goto label_2810f0;
        case 0x2810f4u: goto label_2810f4;
        case 0x2810f8u: goto label_2810f8;
        case 0x2810fcu: goto label_2810fc;
        case 0x281100u: goto label_281100;
        case 0x281104u: goto label_281104;
        case 0x281108u: goto label_281108;
        case 0x28110cu: goto label_28110c;
        case 0x281110u: goto label_281110;
        case 0x281114u: goto label_281114;
        case 0x281118u: goto label_281118;
        case 0x28111cu: goto label_28111c;
        case 0x281120u: goto label_281120;
        case 0x281124u: goto label_281124;
        case 0x281128u: goto label_281128;
        case 0x28112cu: goto label_28112c;
        case 0x281130u: goto label_281130;
        case 0x281134u: goto label_281134;
        case 0x281138u: goto label_281138;
        case 0x28113cu: goto label_28113c;
        case 0x281140u: goto label_281140;
        case 0x281144u: goto label_281144;
        case 0x281148u: goto label_281148;
        case 0x28114cu: goto label_28114c;
        case 0x281150u: goto label_281150;
        case 0x281154u: goto label_281154;
        case 0x281158u: goto label_281158;
        case 0x28115cu: goto label_28115c;
        case 0x281160u: goto label_281160;
        case 0x281164u: goto label_281164;
        case 0x281168u: goto label_281168;
        case 0x28116cu: goto label_28116c;
        case 0x281170u: goto label_281170;
        case 0x281174u: goto label_281174;
        case 0x281178u: goto label_281178;
        case 0x28117cu: goto label_28117c;
        case 0x281180u: goto label_281180;
        case 0x281184u: goto label_281184;
        case 0x281188u: goto label_281188;
        case 0x28118cu: goto label_28118c;
        case 0x281190u: goto label_281190;
        case 0x281194u: goto label_281194;
        case 0x281198u: goto label_281198;
        case 0x28119cu: goto label_28119c;
        case 0x2811a0u: goto label_2811a0;
        case 0x2811a4u: goto label_2811a4;
        case 0x2811a8u: goto label_2811a8;
        case 0x2811acu: goto label_2811ac;
        case 0x2811b0u: goto label_2811b0;
        case 0x2811b4u: goto label_2811b4;
        case 0x2811b8u: goto label_2811b8;
        case 0x2811bcu: goto label_2811bc;
        case 0x2811c0u: goto label_2811c0;
        case 0x2811c4u: goto label_2811c4;
        case 0x2811c8u: goto label_2811c8;
        case 0x2811ccu: goto label_2811cc;
        case 0x2811d0u: goto label_2811d0;
        case 0x2811d4u: goto label_2811d4;
        case 0x2811d8u: goto label_2811d8;
        case 0x2811dcu: goto label_2811dc;
        case 0x2811e0u: goto label_2811e0;
        case 0x2811e4u: goto label_2811e4;
        case 0x2811e8u: goto label_2811e8;
        case 0x2811ecu: goto label_2811ec;
        case 0x2811f0u: goto label_2811f0;
        case 0x2811f4u: goto label_2811f4;
        case 0x2811f8u: goto label_2811f8;
        case 0x2811fcu: goto label_2811fc;
        case 0x281200u: goto label_281200;
        case 0x281204u: goto label_281204;
        case 0x281208u: goto label_281208;
        case 0x28120cu: goto label_28120c;
        case 0x281210u: goto label_281210;
        case 0x281214u: goto label_281214;
        case 0x281218u: goto label_281218;
        case 0x28121cu: goto label_28121c;
        case 0x281220u: goto label_281220;
        case 0x281224u: goto label_281224;
        case 0x281228u: goto label_281228;
        case 0x28122cu: goto label_28122c;
        case 0x281230u: goto label_281230;
        case 0x281234u: goto label_281234;
        case 0x281238u: goto label_281238;
        case 0x28123cu: goto label_28123c;
        case 0x281240u: goto label_281240;
        case 0x281244u: goto label_281244;
        case 0x281248u: goto label_281248;
        case 0x28124cu: goto label_28124c;
        case 0x281250u: goto label_281250;
        case 0x281254u: goto label_281254;
        case 0x281258u: goto label_281258;
        case 0x28125cu: goto label_28125c;
        case 0x281260u: goto label_281260;
        case 0x281264u: goto label_281264;
        case 0x281268u: goto label_281268;
        case 0x28126cu: goto label_28126c;
        case 0x281270u: goto label_281270;
        case 0x281274u: goto label_281274;
        case 0x281278u: goto label_281278;
        case 0x28127cu: goto label_28127c;
        case 0x281280u: goto label_281280;
        case 0x281284u: goto label_281284;
        case 0x281288u: goto label_281288;
        case 0x28128cu: goto label_28128c;
        case 0x281290u: goto label_281290;
        case 0x281294u: goto label_281294;
        case 0x281298u: goto label_281298;
        case 0x28129cu: goto label_28129c;
        case 0x2812a0u: goto label_2812a0;
        case 0x2812a4u: goto label_2812a4;
        case 0x2812a8u: goto label_2812a8;
        case 0x2812acu: goto label_2812ac;
        case 0x2812b0u: goto label_2812b0;
        case 0x2812b4u: goto label_2812b4;
        case 0x2812b8u: goto label_2812b8;
        case 0x2812bcu: goto label_2812bc;
        case 0x2812c0u: goto label_2812c0;
        case 0x2812c4u: goto label_2812c4;
        case 0x2812c8u: goto label_2812c8;
        case 0x2812ccu: goto label_2812cc;
        case 0x2812d0u: goto label_2812d0;
        case 0x2812d4u: goto label_2812d4;
        case 0x2812d8u: goto label_2812d8;
        case 0x2812dcu: goto label_2812dc;
        case 0x2812e0u: goto label_2812e0;
        case 0x2812e4u: goto label_2812e4;
        case 0x2812e8u: goto label_2812e8;
        case 0x2812ecu: goto label_2812ec;
        case 0x2812f0u: goto label_2812f0;
        default: break;
    }

    ctx->pc = 0x280030u;

label_280030:
    // 0x280030: 0x27bdfb70  addiu       $sp, $sp, -0x490
    ctx->pc = 0x280030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966128));
label_280034:
    // 0x280034: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x280034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_280038:
    // 0x280038: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x280038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_28003c:
    // 0x28003c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x28003cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_280040:
    // 0x280040: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x280040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_280044:
    // 0x280044: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x280044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_280048:
    // 0x280048: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x280048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_28004c:
    // 0x28004c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x28004cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_280050:
    // 0x280050: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x280050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_280054:
    // 0x280054: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x280054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_280058:
    // 0x280058: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x280058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_28005c:
    // 0x28005c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x28005cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_280060:
    // 0x280060: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x280060u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_280064:
    // 0x280064: 0x8f848ac8  lw          $a0, -0x7538($gp)
    ctx->pc = 0x280064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
label_280068:
    // 0x280068: 0x14830495  bne         $a0, $v1, . + 4 + (0x495 << 2)
label_28006c:
    if (ctx->pc == 0x28006Cu) {
        ctx->pc = 0x28006Cu;
            // 0x28006c: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->pc = 0x280070u;
        goto label_280070;
    }
    ctx->pc = 0x280068u;
    {
        const bool branch_taken_0x280068 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x28006Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280068u;
            // 0x28006c: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280068) {
            ctx->pc = 0x2812C0u;
            goto label_2812c0;
        }
    }
    ctx->pc = 0x280070u;
label_280070:
    // 0x280070: 0x8c235008  lw          $v1, 0x5008($at)
    ctx->pc = 0x280070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20488)));
label_280074:
    // 0x280074: 0x10600492  beqz        $v1, . + 4 + (0x492 << 2)
label_280078:
    if (ctx->pc == 0x280078u) {
        ctx->pc = 0x280078u;
            // 0x280078: 0x278497e4  addiu       $a0, $gp, -0x681C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940644));
        ctx->pc = 0x28007Cu;
        goto label_28007c;
    }
    ctx->pc = 0x280074u;
    {
        const bool branch_taken_0x280074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x280078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280074u;
            // 0x280078: 0x278497e4  addiu       $a0, $gp, -0x681C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940644));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280074) {
            ctx->pc = 0x2812C0u;
            goto label_2812c0;
        }
    }
    ctx->pc = 0x28007Cu;
label_28007c:
    // 0x28007c: 0xc0a407c  jal         func_2901F0
label_280080:
    if (ctx->pc == 0x280080u) {
        ctx->pc = 0x280084u;
        goto label_280084;
    }
    ctx->pc = 0x28007Cu;
    SET_GPR_U32(ctx, 31, 0x280084u);
    ctx->pc = 0x2901F0u;
    if (runtime->hasFunction(0x2901F0u)) {
        auto targetFn = runtime->lookupFunction(0x2901F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280084u; }
        if (ctx->pc != 0x280084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__7CMarkerFv_0x2901f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280084u; }
        if (ctx->pc != 0x280084u) { return; }
    }
    ctx->pc = 0x280084u;
label_280084:
    // 0x280084: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x280084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_280088:
    // 0x280088: 0x8c235000  lw          $v1, 0x5000($at)
    ctx->pc = 0x280088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20480)));
label_28008c:
    // 0x28008c: 0x1060048c  beqz        $v1, . + 4 + (0x48C << 2)
label_280090:
    if (ctx->pc == 0x280090u) {
        ctx->pc = 0x280090u;
            // 0x280090: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x280094u;
        goto label_280094;
    }
    ctx->pc = 0x28008Cu;
    {
        const bool branch_taken_0x28008c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x280090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28008Cu;
            // 0x280090: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28008c) {
            ctx->pc = 0x2812C0u;
            goto label_2812c0;
        }
    }
    ctx->pc = 0x280094u;
label_280094:
    // 0x280094: 0xc0618dc  jal         func_186370
label_280098:
    if (ctx->pc == 0x280098u) {
        ctx->pc = 0x280098u;
            // 0x280098: 0x248407e0  addiu       $a0, $a0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
        ctx->pc = 0x28009Cu;
        goto label_28009c;
    }
    ctx->pc = 0x280094u;
    SET_GPR_U32(ctx, 31, 0x28009Cu);
    ctx->pc = 0x280098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280094u;
            // 0x280098: 0x248407e0  addiu       $a0, $a0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186370u;
    if (runtime->hasFunction(0x186370u)) {
        auto targetFn = runtime->lookupFunction(0x186370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28009Cu; }
        if (ctx->pc != 0x28009Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clear__11dbgCJISFontFv_0x186370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28009Cu; }
        if (ctx->pc != 0x28009Cu) { return; }
    }
    ctx->pc = 0x28009Cu;
label_28009c:
    // 0x28009c: 0xc04d0e8  jal         func_1343A0
label_2800a0:
    if (ctx->pc == 0x2800A0u) {
        ctx->pc = 0x2800A0u;
            // 0x2800a0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2800A4u;
        goto label_2800a4;
    }
    ctx->pc = 0x28009Cu;
    SET_GPR_U32(ctx, 31, 0x2800A4u);
    ctx->pc = 0x2800A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28009Cu;
            // 0x2800a0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2800A4u; }
        if (ctx->pc != 0x2800A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2800A4u; }
        if (ctx->pc != 0x2800A4u) { return; }
    }
    ctx->pc = 0x2800A4u;
label_2800a4:
    // 0x2800a4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2800a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2800a8:
    // 0x2800a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2800a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2800ac:
    // 0x2800ac: 0xc04d104  jal         func_134410
label_2800b0:
    if (ctx->pc == 0x2800B0u) {
        ctx->pc = 0x2800B0u;
            // 0x2800b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2800B4u;
        goto label_2800b4;
    }
    ctx->pc = 0x2800ACu;
    SET_GPR_U32(ctx, 31, 0x2800B4u);
    ctx->pc = 0x2800B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2800ACu;
            // 0x2800b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2800B4u; }
        if (ctx->pc != 0x2800B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2800B4u; }
        if (ctx->pc != 0x2800B4u) { return; }
    }
    ctx->pc = 0x2800B4u;
label_2800b4:
    // 0x2800b4: 0xc079f5c  jal         func_1E7D70
label_2800b8:
    if (ctx->pc == 0x2800B8u) {
        ctx->pc = 0x2800B8u;
            // 0x2800b8: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2800BCu;
        goto label_2800bc;
    }
    ctx->pc = 0x2800B4u;
    SET_GPR_U32(ctx, 31, 0x2800BCu);
    ctx->pc = 0x2800B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2800B4u;
            // 0x2800b8: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2800BCu; }
        if (ctx->pc != 0x2800BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2800BCu; }
        if (ctx->pc != 0x2800BCu) { return; }
    }
    ctx->pc = 0x2800BCu;
label_2800bc:
    // 0x2800bc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2800bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2800c0:
    // 0x2800c0: 0xc04d428  jal         func_1350A0
label_2800c4:
    if (ctx->pc == 0x2800C4u) {
        ctx->pc = 0x2800C4u;
            // 0x2800c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2800C8u;
        goto label_2800c8;
    }
    ctx->pc = 0x2800C0u;
    SET_GPR_U32(ctx, 31, 0x2800C8u);
    ctx->pc = 0x2800C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2800C0u;
            // 0x2800c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2800C8u; }
        if (ctx->pc != 0x2800C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2800C8u; }
        if (ctx->pc != 0x2800C8u) { return; }
    }
    ctx->pc = 0x2800C8u;
label_2800c8:
    // 0x2800c8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2800c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2800cc:
    // 0x2800cc: 0xc04d128  jal         func_1344A0
label_2800d0:
    if (ctx->pc == 0x2800D0u) {
        ctx->pc = 0x2800D0u;
            // 0x2800d0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2800D4u;
        goto label_2800d4;
    }
    ctx->pc = 0x2800CCu;
    SET_GPR_U32(ctx, 31, 0x2800D4u);
    ctx->pc = 0x2800D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2800CCu;
            // 0x2800d0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2800D4u; }
        if (ctx->pc != 0x2800D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2800D4u; }
        if (ctx->pc != 0x2800D4u) { return; }
    }
    ctx->pc = 0x2800D4u;
label_2800d4:
    // 0x2800d4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2800d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2800d8:
    // 0x2800d8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2800d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2800dc:
    // 0x2800dc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2800dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2800e0:
    // 0x2800e0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2800e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2800e4:
    // 0x2800e4: 0xc04d320  jal         func_134C80
label_2800e8:
    if (ctx->pc == 0x2800E8u) {
        ctx->pc = 0x2800E8u;
            // 0x2800e8: 0x24080050  addiu       $t0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x2800ECu;
        goto label_2800ec;
    }
    ctx->pc = 0x2800E4u;
    SET_GPR_U32(ctx, 31, 0x2800ECu);
    ctx->pc = 0x2800E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2800E4u;
            // 0x2800e8: 0x24080050  addiu       $t0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2800ECu; }
        if (ctx->pc != 0x2800ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2800ECu; }
        if (ctx->pc != 0x2800ECu) { return; }
    }
    ctx->pc = 0x2800ECu;
label_2800ec:
    // 0x2800ec: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2800ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2800f0:
    // 0x2800f0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2800f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2800f4:
    // 0x2800f4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2800f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2800f8:
    // 0x2800f8: 0xc04d2c8  jal         func_134B20
label_2800fc:
    if (ctx->pc == 0x2800FCu) {
        ctx->pc = 0x2800FCu;
            // 0x2800fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x280100u;
        goto label_280100;
    }
    ctx->pc = 0x2800F8u;
    SET_GPR_U32(ctx, 31, 0x280100u);
    ctx->pc = 0x2800FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2800F8u;
            // 0x2800fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280100u; }
        if (ctx->pc != 0x280100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280100u; }
        if (ctx->pc != 0x280100u) { return; }
    }
    ctx->pc = 0x280100u;
label_280100:
    // 0x280100: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x280100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_280104:
    // 0x280104: 0x240500e2  addiu       $a1, $zero, 0xE2
    ctx->pc = 0x280104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
label_280108:
    // 0x280108: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x280108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_28010c:
    // 0x28010c: 0xc04d2c8  jal         func_134B20
label_280110:
    if (ctx->pc == 0x280110u) {
        ctx->pc = 0x280110u;
            // 0x280110: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x280114u;
        goto label_280114;
    }
    ctx->pc = 0x28010Cu;
    SET_GPR_U32(ctx, 31, 0x280114u);
    ctx->pc = 0x280110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28010Cu;
            // 0x280110: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280114u; }
        if (ctx->pc != 0x280114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280114u; }
        if (ctx->pc != 0x280114u) { return; }
    }
    ctx->pc = 0x280114u;
label_280114:
    // 0x280114: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x280114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_280118:
    // 0x280118: 0x8c225008  lw          $v0, 0x5008($at)
    ctx->pc = 0x280118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20488)));
label_28011c:
    // 0x28011c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_280120:
    if (ctx->pc == 0x280120u) {
        ctx->pc = 0x280120u;
            // 0x280120: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x280124u;
        goto label_280124;
    }
    ctx->pc = 0x28011Cu;
    {
        const bool branch_taken_0x28011c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28011Cu;
            // 0x280120: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28011c) {
            ctx->pc = 0x280150u;
            goto label_280150;
        }
    }
    ctx->pc = 0x280124u;
label_280124:
    // 0x280124: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x280124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_280128:
    // 0x280128: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x280128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28012c:
    // 0x28012c: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x28012cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_280130:
    // 0x280130: 0xc04d2c8  jal         func_134B20
label_280134:
    if (ctx->pc == 0x280134u) {
        ctx->pc = 0x280134u;
            // 0x280134: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x280138u;
        goto label_280138;
    }
    ctx->pc = 0x280130u;
    SET_GPR_U32(ctx, 31, 0x280138u);
    ctx->pc = 0x280134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280130u;
            // 0x280134: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280138u; }
        if (ctx->pc != 0x280138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280138u; }
        if (ctx->pc != 0x280138u) { return; }
    }
    ctx->pc = 0x280138u;
label_280138:
    // 0x280138: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x280138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_28013c:
    // 0x28013c: 0x240500e2  addiu       $a1, $zero, 0xE2
    ctx->pc = 0x28013cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
label_280140:
    // 0x280140: 0x24060128  addiu       $a2, $zero, 0x128
    ctx->pc = 0x280140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
label_280144:
    // 0x280144: 0xc04d2c8  jal         func_134B20
label_280148:
    if (ctx->pc == 0x280148u) {
        ctx->pc = 0x280148u;
            // 0x280148: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28014Cu;
        goto label_28014c;
    }
    ctx->pc = 0x280144u;
    SET_GPR_U32(ctx, 31, 0x28014Cu);
    ctx->pc = 0x280148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280144u;
            // 0x280148: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28014Cu; }
        if (ctx->pc != 0x28014Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28014Cu; }
        if (ctx->pc != 0x28014Cu) { return; }
    }
    ctx->pc = 0x28014Cu;
label_28014c:
    // 0x28014c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x28014cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_280150:
    // 0x280150: 0xc04d1a4  jal         func_134690
label_280154:
    if (ctx->pc == 0x280154u) {
        ctx->pc = 0x280158u;
        goto label_280158;
    }
    ctx->pc = 0x280150u;
    SET_GPR_U32(ctx, 31, 0x280158u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280158u; }
        if (ctx->pc != 0x280158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280158u; }
        if (ctx->pc != 0x280158u) { return; }
    }
    ctx->pc = 0x280158u;
label_280158:
    // 0x280158: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x280158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_28015c:
    // 0x28015c: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x28015cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280160:
    // 0x280160: 0x24843e30  addiu       $a0, $a0, 0x3E30
    ctx->pc = 0x280160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15920));
label_280164:
    // 0x280164: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280164u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280168:
    // 0x280168: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x280168u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_28016c:
    // 0x28016c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x28016cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280170:
    // 0x280170: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x280170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_280174:
    // 0x280174: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x280174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_280178:
    // 0x280178: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x280178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28017c:
    // 0x28017c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28017cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280180:
    // 0x280180: 0x24e7cfb8  addiu       $a3, $a3, -0x3048
    ctx->pc = 0x280180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954936));
label_280184:
    // 0x280184: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x280184u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_280188:
    // 0x280188: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_28018c:
    // 0x28018c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x28018cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_280190:
    // 0x280190: 0x8c225004  lw          $v0, 0x5004($at)
    ctx->pc = 0x280190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20484)));
label_280194:
    // 0x280194: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x280194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_280198:
    // 0x280198: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x280198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_28019c:
    // 0x28019c: 0x8c4801c0  lw          $t0, 0x1C0($v0)
    ctx->pc = 0x28019cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 448)));
label_2801a0:
    // 0x2801a0: 0xc061a0c  jal         func_186830
label_2801a4:
    if (ctx->pc == 0x2801A4u) {
        ctx->pc = 0x2801A4u;
            // 0x2801a4: 0x248407e0  addiu       $a0, $a0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
        ctx->pc = 0x2801A8u;
        goto label_2801a8;
    }
    ctx->pc = 0x2801A0u;
    SET_GPR_U32(ctx, 31, 0x2801A8u);
    ctx->pc = 0x2801A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2801A0u;
            // 0x2801a4: 0x248407e0  addiu       $a0, $a0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2801A8u; }
        if (ctx->pc != 0x2801A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2801A8u; }
        if (ctx->pc != 0x2801A8u) { return; }
    }
    ctx->pc = 0x2801A8u;
label_2801a8:
    // 0x2801a8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2801a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_2801ac:
    // 0x2801ac: 0xc0956d4  jal         func_255B50
label_2801b0:
    if (ctx->pc == 0x2801B0u) {
        ctx->pc = 0x2801B0u;
            // 0x2801b0: 0x8c245014  lw          $a0, 0x5014($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20500)));
        ctx->pc = 0x2801B4u;
        goto label_2801b4;
    }
    ctx->pc = 0x2801ACu;
    SET_GPR_U32(ctx, 31, 0x2801B4u);
    ctx->pc = 0x2801B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2801ACu;
            // 0x2801b0: 0x8c245014  lw          $a0, 0x5014($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20500)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2801B4u; }
        if (ctx->pc != 0x2801B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2801B4u; }
        if (ctx->pc != 0x2801B4u) { return; }
    }
    ctx->pc = 0x2801B4u;
label_2801b4:
    // 0x2801b4: 0xc0956c8  jal         func_255B20
label_2801b8:
    if (ctx->pc == 0x2801B8u) {
        ctx->pc = 0x2801B8u;
            // 0x2801b8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2801BCu;
        goto label_2801bc;
    }
    ctx->pc = 0x2801B4u;
    SET_GPR_U32(ctx, 31, 0x2801BCu);
    ctx->pc = 0x2801B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2801B4u;
            // 0x2801b8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B20u;
    if (runtime->hasFunction(0x255B20u)) {
        auto targetFn = runtime->lookupFunction(0x255B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2801BCu; }
        if (ctx->pc != 0x2801BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveCamera__Fv_0x255b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2801BCu; }
        if (ctx->pc != 0x2801BCu) { return; }
    }
    ctx->pc = 0x2801BCu;
label_2801bc:
    // 0x2801bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2801bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2801c0:
    // 0x2801c0: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x2801c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_2801c4:
    // 0x2801c4: 0xc04c574  jal         func_1315D0
label_2801c8:
    if (ctx->pc == 0x2801C8u) {
        ctx->pc = 0x2801C8u;
            // 0x2801c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2801CCu;
        goto label_2801cc;
    }
    ctx->pc = 0x2801C4u;
    SET_GPR_U32(ctx, 31, 0x2801CCu);
    ctx->pc = 0x2801C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2801C4u;
            // 0x2801c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2801CCu; }
        if (ctx->pc != 0x2801CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2801CCu; }
        if (ctx->pc != 0x2801CCu) { return; }
    }
    ctx->pc = 0x2801CCu;
label_2801cc:
    // 0x2801cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2801ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2801d0:
    // 0x2801d0: 0xc04c578  jal         func_1315E0
label_2801d4:
    if (ctx->pc == 0x2801D4u) {
        ctx->pc = 0x2801D4u;
            // 0x2801d4: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x2801D8u;
        goto label_2801d8;
    }
    ctx->pc = 0x2801D0u;
    SET_GPR_U32(ctx, 31, 0x2801D8u);
    ctx->pc = 0x2801D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2801D0u;
            // 0x2801d4: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315E0u;
    if (runtime->hasFunction(0x1315E0u)) {
        auto targetFn = runtime->lookupFunction(0x1315E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2801D8u; }
        if (ctx->pc != 0x2801D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRef__9mgCCameraFPf_0x1315e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2801D8u; }
        if (ctx->pc != 0x2801D8u) { return; }
    }
    ctx->pc = 0x2801D8u;
label_2801d8:
    // 0x2801d8: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2801d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_2801dc:
    // 0x2801dc: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x2801dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2801e0:
    // 0x2801e0: 0xc041c3e  jal         func_1070F8
label_2801e4:
    if (ctx->pc == 0x2801E4u) {
        ctx->pc = 0x2801E4u;
            // 0x2801e4: 0x27a601e0  addiu       $a2, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x2801E8u;
        goto label_2801e8;
    }
    ctx->pc = 0x2801E0u;
    SET_GPR_U32(ctx, 31, 0x2801E8u);
    ctx->pc = 0x2801E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2801E0u;
            // 0x2801e4: 0x27a601e0  addiu       $a2, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2801E8u; }
        if (ctx->pc != 0x2801E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2801E8u; }
        if (ctx->pc != 0x2801E8u) { return; }
    }
    ctx->pc = 0x2801E8u;
label_2801e8:
    // 0x2801e8: 0xc7a10200  lwc1        $f1, 0x200($sp)
    ctx->pc = 0x2801e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2801ec:
    // 0x2801ec: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x2801ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_2801f0:
    // 0x2801f0: 0xc7a00208  lwc1        $f0, 0x208($sp)
    ctx->pc = 0x2801f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2801f4:
    // 0x2801f4: 0xafa00214  sw          $zero, 0x214($sp)
    ctx->pc = 0x2801f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 0));
label_2801f8:
    // 0x2801f8: 0x27b20218  addiu       $s2, $sp, 0x218
    ctx->pc = 0x2801f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
label_2801fc:
    // 0x2801fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2801fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_280200:
    // 0x280200: 0xe7a10210  swc1        $f1, 0x210($sp)
    ctx->pc = 0x280200u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_280204:
    // 0x280204: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x280204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_280208:
    // 0x280208: 0xc041be0  jal         func_106F80
label_28020c:
    if (ctx->pc == 0x28020Cu) {
        ctx->pc = 0x28020Cu;
            // 0x28020c: 0xafa0021c  sw          $zero, 0x21C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 0));
        ctx->pc = 0x280210u;
        goto label_280210;
    }
    ctx->pc = 0x280208u;
    SET_GPR_U32(ctx, 31, 0x280210u);
    ctx->pc = 0x28020Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280208u;
            // 0x28020c: 0xafa0021c  sw          $zero, 0x21C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280210u; }
        if (ctx->pc != 0x280210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280210u; }
        if (ctx->pc != 0x280210u) { return; }
    }
    ctx->pc = 0x280210u;
label_280210:
    // 0x280210: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x280210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280214:
    // 0x280214: 0xc7a10210  lwc1        $f1, 0x210($sp)
    ctx->pc = 0x280214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_280218:
    // 0x280218: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x280218u;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
label_28021c:
    // 0x28021c: 0xc047c76  jal         func_11F1D8
label_280220:
    if (ctx->pc == 0x280220u) {
        ctx->pc = 0x280220u;
            // 0x280220: 0x46000b07  neg.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[1]);
        ctx->pc = 0x280224u;
        goto label_280224;
    }
    ctx->pc = 0x28021Cu;
    SET_GPR_U32(ctx, 31, 0x280224u);
    ctx->pc = 0x280220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28021Cu;
            // 0x280220: 0x46000b07  neg.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280224u; }
        if (ctx->pc != 0x280224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280224u; }
        if (ctx->pc != 0x280224u) { return; }
    }
    ctx->pc = 0x280224u;
label_280224:
    // 0x280224: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x280224u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_280228:
    // 0x280228: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x280228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_28022c:
    // 0x28022c: 0xc041c5c  jal         func_107170
label_280230:
    if (ctx->pc == 0x280230u) {
        ctx->pc = 0x280230u;
            // 0x280230: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x280234u;
        goto label_280234;
    }
    ctx->pc = 0x28022Cu;
    SET_GPR_U32(ctx, 31, 0x280234u);
    ctx->pc = 0x280230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28022Cu;
            // 0x280230: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280234u; }
        if (ctx->pc != 0x280234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280234u; }
        if (ctx->pc != 0x280234u) { return; }
    }
    ctx->pc = 0x280234u;
label_280234:
    // 0x280234: 0xc0975d8  jal         func_25D760
label_280238:
    if (ctx->pc == 0x280238u) {
        ctx->pc = 0x280238u;
            // 0x280238: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x28023Cu;
        goto label_28023c;
    }
    ctx->pc = 0x280234u;
    SET_GPR_U32(ctx, 31, 0x28023Cu);
    ctx->pc = 0x280238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280234u;
            // 0x280238: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D760u;
    if (runtime->hasFunction(0x25D760u)) {
        auto targetFn = runtime->lookupFunction(0x25D760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28023Cu; }
        if (ctx->pc != 0x28023Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoordGyaku__FPf_0x25d760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28023Cu; }
        if (ctx->pc != 0x28023Cu) { return; }
    }
    ctx->pc = 0x28023Cu;
label_28023c:
    // 0x28023c: 0xc0975d8  jal         func_25D760
label_280240:
    if (ctx->pc == 0x280240u) {
        ctx->pc = 0x280240u;
            // 0x280240: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x280244u;
        goto label_280244;
    }
    ctx->pc = 0x28023Cu;
    SET_GPR_U32(ctx, 31, 0x280244u);
    ctx->pc = 0x280240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28023Cu;
            // 0x280240: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D760u;
    if (runtime->hasFunction(0x25D760u)) {
        auto targetFn = runtime->lookupFunction(0x25D760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280244u; }
        if (ctx->pc != 0x280244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoordGyaku__FPf_0x25d760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280244u; }
        if (ctx->pc != 0x280244u) { return; }
    }
    ctx->pc = 0x280244u;
label_280244:
    // 0x280244: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x280244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_280248:
    // 0x280248: 0x8c225008  lw          $v0, 0x5008($at)
    ctx->pc = 0x280248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20488)));
label_28024c:
    // 0x28024c: 0x1040032f  beqz        $v0, . + 4 + (0x32F << 2)
label_280250:
    if (ctx->pc == 0x280250u) {
        ctx->pc = 0x280250u;
            // 0x280250: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->pc = 0x280254u;
        goto label_280254;
    }
    ctx->pc = 0x28024Cu;
    {
        const bool branch_taken_0x28024c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28024Cu;
            // 0x280250: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28024c) {
            ctx->pc = 0x280F0Cu;
            goto label_280f0c;
        }
    }
    ctx->pc = 0x280254u;
label_280254:
    // 0x280254: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x280254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_280258:
    // 0x280258: 0x8c235004  lw          $v1, 0x5004($at)
    ctx->pc = 0x280258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20484)));
label_28025c:
    // 0x28025c: 0x1062026d  beq         $v1, $v0, . + 4 + (0x26D << 2)
label_280260:
    if (ctx->pc == 0x280260u) {
        ctx->pc = 0x280260u;
            // 0x280260: 0x3c040035  lui         $a0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
        ctx->pc = 0x280264u;
        goto label_280264;
    }
    ctx->pc = 0x28025Cu;
    {
        const bool branch_taken_0x28025c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x280260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28025Cu;
            // 0x280260: 0x3c040035  lui         $a0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28025c) {
            ctx->pc = 0x280C14u;
            goto label_280c14;
        }
    }
    ctx->pc = 0x280264u;
label_280264:
    // 0x280264: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x280264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_280268:
    // 0x280268: 0x10620156  beq         $v1, $v0, . + 4 + (0x156 << 2)
label_28026c:
    if (ctx->pc == 0x28026Cu) {
        ctx->pc = 0x28026Cu;
            // 0x28026c: 0x3c040035  lui         $a0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
        ctx->pc = 0x280270u;
        goto label_280270;
    }
    ctx->pc = 0x280268u;
    {
        const bool branch_taken_0x280268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28026Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280268u;
            // 0x28026c: 0x3c040035  lui         $a0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280268) {
            ctx->pc = 0x2807C4u;
            goto label_2807c4;
        }
    }
    ctx->pc = 0x280270u;
label_280270:
    // 0x280270: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x280270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_280274:
    // 0x280274: 0x106200cf  beq         $v1, $v0, . + 4 + (0xCF << 2)
label_280278:
    if (ctx->pc == 0x280278u) {
        ctx->pc = 0x280278u;
            // 0x280278: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->pc = 0x28027Cu;
        goto label_28027c;
    }
    ctx->pc = 0x280274u;
    {
        const bool branch_taken_0x280274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x280278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280274u;
            // 0x280278: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280274) {
            ctx->pc = 0x2805B4u;
            goto label_2805b4;
        }
    }
    ctx->pc = 0x28027Cu;
label_28027c:
    // 0x28027c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_280280:
    if (ctx->pc == 0x280280u) {
        ctx->pc = 0x280284u;
        goto label_280284;
    }
    ctx->pc = 0x28027Cu;
    {
        const bool branch_taken_0x28027c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28027c) {
            ctx->pc = 0x28028Cu;
            goto label_28028c;
        }
    }
    ctx->pc = 0x280284u;
label_280284:
    // 0x280284: 0x10000321  b           . + 4 + (0x321 << 2)
label_280288:
    if (ctx->pc == 0x280288u) {
        ctx->pc = 0x28028Cu;
        goto label_28028c;
    }
    ctx->pc = 0x280284u;
    {
        const bool branch_taken_0x280284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280284) {
            ctx->pc = 0x280F0Cu;
            goto label_280f0c;
        }
    }
    ctx->pc = 0x28028Cu;
label_28028c:
    // 0x28028c: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x28028cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_280290:
    // 0x280290: 0x26100016  addiu       $s0, $s0, 0x16
    ctx->pc = 0x280290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22));
label_280294:
    // 0x280294: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_280298:
    // 0x280298: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280298u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_28029c:
    // 0x28029c: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x28029cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_2802a0:
    // 0x2802a0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2802a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2802a4:
    // 0x2802a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2802a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2802a8:
    // 0x2802a8: 0x8c482e54  lw          $t0, 0x2E54($v0)
    ctx->pc = 0x2802a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11860)));
label_2802ac:
    // 0x2802ac: 0xc061a0c  jal         func_186830
label_2802b0:
    if (ctx->pc == 0x2802B0u) {
        ctx->pc = 0x2802B0u;
            // 0x2802b0: 0x24e7cfc0  addiu       $a3, $a3, -0x3040 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954944));
        ctx->pc = 0x2802B4u;
        goto label_2802b4;
    }
    ctx->pc = 0x2802ACu;
    SET_GPR_U32(ctx, 31, 0x2802B4u);
    ctx->pc = 0x2802B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2802ACu;
            // 0x2802b0: 0x24e7cfc0  addiu       $a3, $a3, -0x3040 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2802B4u; }
        if (ctx->pc != 0x2802B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2802B4u; }
        if (ctx->pc != 0x2802B4u) { return; }
    }
    ctx->pc = 0x2802B4u;
label_2802b4:
    // 0x2802b4: 0xc0a24f0  jal         func_2893C0
label_2802b8:
    if (ctx->pc == 0x2802B8u) {
        ctx->pc = 0x2802B8u;
            // 0x2802b8: 0xc7ac01e0  lwc1        $f12, 0x1E0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2802BCu;
        goto label_2802bc;
    }
    ctx->pc = 0x2802B4u;
    SET_GPR_U32(ctx, 31, 0x2802BCu);
    ctx->pc = 0x2802B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2802B4u;
            // 0x2802b8: 0xc7ac01e0  lwc1        $f12, 0x1E0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2802BCu; }
        if (ctx->pc != 0x2802BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2802BCu; }
        if (ctx->pc != 0x2802BCu) { return; }
    }
    ctx->pc = 0x2802BCu;
label_2802bc:
    // 0x2802bc: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x2802bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_2802c0:
    // 0x2802c0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2802c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2802c4:
    // 0x2802c4: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x2802c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_2802c8:
    // 0x2802c8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2802c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2802cc:
    // 0x2802cc: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x2802ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_2802d0:
    // 0x2802d0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2802d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2802d4:
    // 0x2802d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2802d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2802d8:
    // 0x2802d8: 0xc061a0c  jal         func_186830
label_2802dc:
    if (ctx->pc == 0x2802DCu) {
        ctx->pc = 0x2802DCu;
            // 0x2802dc: 0x24e7cfd0  addiu       $a3, $a3, -0x3030 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954960));
        ctx->pc = 0x2802E0u;
        goto label_2802e0;
    }
    ctx->pc = 0x2802D8u;
    SET_GPR_U32(ctx, 31, 0x2802E0u);
    ctx->pc = 0x2802DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2802D8u;
            // 0x2802dc: 0x24e7cfd0  addiu       $a3, $a3, -0x3030 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2802E0u; }
        if (ctx->pc != 0x2802E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2802E0u; }
        if (ctx->pc != 0x2802E0u) { return; }
    }
    ctx->pc = 0x2802E0u;
label_2802e0:
    // 0x2802e0: 0x27b301e4  addiu       $s3, $sp, 0x1E4
    ctx->pc = 0x2802e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
label_2802e4:
    // 0x2802e4: 0xc0a24f0  jal         func_2893C0
label_2802e8:
    if (ctx->pc == 0x2802E8u) {
        ctx->pc = 0x2802E8u;
            // 0x2802e8: 0xc66c0000  lwc1        $f12, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2802ECu;
        goto label_2802ec;
    }
    ctx->pc = 0x2802E4u;
    SET_GPR_U32(ctx, 31, 0x2802ECu);
    ctx->pc = 0x2802E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2802E4u;
            // 0x2802e8: 0xc66c0000  lwc1        $f12, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2802ECu; }
        if (ctx->pc != 0x2802ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2802ECu; }
        if (ctx->pc != 0x2802ECu) { return; }
    }
    ctx->pc = 0x2802ECu;
label_2802ec:
    // 0x2802ec: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x2802ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_2802f0:
    // 0x2802f0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2802f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2802f4:
    // 0x2802f4: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x2802f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_2802f8:
    // 0x2802f8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2802f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2802fc:
    // 0x2802fc: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x2802fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_280300:
    // 0x280300: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x280300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280304:
    // 0x280304: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280308:
    // 0x280308: 0xc061a0c  jal         func_186830
label_28030c:
    if (ctx->pc == 0x28030Cu) {
        ctx->pc = 0x28030Cu;
            // 0x28030c: 0x24e7cfe0  addiu       $a3, $a3, -0x3020 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954976));
        ctx->pc = 0x280310u;
        goto label_280310;
    }
    ctx->pc = 0x280308u;
    SET_GPR_U32(ctx, 31, 0x280310u);
    ctx->pc = 0x28030Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280308u;
            // 0x28030c: 0x24e7cfe0  addiu       $a3, $a3, -0x3020 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280310u; }
        if (ctx->pc != 0x280310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280310u; }
        if (ctx->pc != 0x280310u) { return; }
    }
    ctx->pc = 0x280310u;
label_280310:
    // 0x280310: 0xc0a24f0  jal         func_2893C0
label_280314:
    if (ctx->pc == 0x280314u) {
        ctx->pc = 0x280314u;
            // 0x280314: 0xc7ac01e8  lwc1        $f12, 0x1E8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x280318u;
        goto label_280318;
    }
    ctx->pc = 0x280310u;
    SET_GPR_U32(ctx, 31, 0x280318u);
    ctx->pc = 0x280314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280310u;
            // 0x280314: 0xc7ac01e8  lwc1        $f12, 0x1E8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280318u; }
        if (ctx->pc != 0x280318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280318u; }
        if (ctx->pc != 0x280318u) { return; }
    }
    ctx->pc = 0x280318u;
label_280318:
    // 0x280318: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x280318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_28031c:
    // 0x28031c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x28031cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_280320:
    // 0x280320: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280320u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280324:
    // 0x280324: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x280324u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_280328:
    // 0x280328: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x280328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_28032c:
    // 0x28032c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x28032cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280330:
    // 0x280330: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280334:
    // 0x280334: 0xc061a0c  jal         func_186830
label_280338:
    if (ctx->pc == 0x280338u) {
        ctx->pc = 0x280338u;
            // 0x280338: 0x24e7cff0  addiu       $a3, $a3, -0x3010 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954992));
        ctx->pc = 0x28033Cu;
        goto label_28033c;
    }
    ctx->pc = 0x280334u;
    SET_GPR_U32(ctx, 31, 0x28033Cu);
    ctx->pc = 0x280338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280334u;
            // 0x280338: 0x24e7cff0  addiu       $a3, $a3, -0x3010 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28033Cu; }
        if (ctx->pc != 0x28033Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28033Cu; }
        if (ctx->pc != 0x28033Cu) { return; }
    }
    ctx->pc = 0x28033Cu;
label_28033c:
    // 0x28033c: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x28033cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_280340:
    // 0x280340: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_280344:
    // 0x280344: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280344u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280348:
    // 0x280348: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x280348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_28034c:
    // 0x28034c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x28034cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280350:
    // 0x280350: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280354:
    // 0x280354: 0xc061a0c  jal         func_186830
label_280358:
    if (ctx->pc == 0x280358u) {
        ctx->pc = 0x280358u;
            // 0x280358: 0x24e7d000  addiu       $a3, $a3, -0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955008));
        ctx->pc = 0x28035Cu;
        goto label_28035c;
    }
    ctx->pc = 0x280354u;
    SET_GPR_U32(ctx, 31, 0x28035Cu);
    ctx->pc = 0x280358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280354u;
            // 0x280358: 0x24e7d000  addiu       $a3, $a3, -0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28035Cu; }
        if (ctx->pc != 0x28035Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28035Cu; }
        if (ctx->pc != 0x28035Cu) { return; }
    }
    ctx->pc = 0x28035Cu;
label_28035c:
    // 0x28035c: 0xc0a24f0  jal         func_2893C0
label_280360:
    if (ctx->pc == 0x280360u) {
        ctx->pc = 0x280360u;
            // 0x280360: 0xc7ac01f0  lwc1        $f12, 0x1F0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x280364u;
        goto label_280364;
    }
    ctx->pc = 0x28035Cu;
    SET_GPR_U32(ctx, 31, 0x280364u);
    ctx->pc = 0x280360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28035Cu;
            // 0x280360: 0xc7ac01f0  lwc1        $f12, 0x1F0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280364u; }
        if (ctx->pc != 0x280364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280364u; }
        if (ctx->pc != 0x280364u) { return; }
    }
    ctx->pc = 0x280364u;
label_280364:
    // 0x280364: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x280364u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_280368:
    // 0x280368: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_28036c:
    // 0x28036c: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x28036cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280370:
    // 0x280370: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x280370u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_280374:
    // 0x280374: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x280374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_280378:
    // 0x280378: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x280378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_28037c:
    // 0x28037c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28037cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280380:
    // 0x280380: 0xc061a0c  jal         func_186830
label_280384:
    if (ctx->pc == 0x280384u) {
        ctx->pc = 0x280384u;
            // 0x280384: 0x24e7cfd0  addiu       $a3, $a3, -0x3030 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954960));
        ctx->pc = 0x280388u;
        goto label_280388;
    }
    ctx->pc = 0x280380u;
    SET_GPR_U32(ctx, 31, 0x280388u);
    ctx->pc = 0x280384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280380u;
            // 0x280384: 0x24e7cfd0  addiu       $a3, $a3, -0x3030 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280388u; }
        if (ctx->pc != 0x280388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280388u; }
        if (ctx->pc != 0x280388u) { return; }
    }
    ctx->pc = 0x280388u;
label_280388:
    // 0x280388: 0x27b201f4  addiu       $s2, $sp, 0x1F4
    ctx->pc = 0x280388u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_28038c:
    // 0x28038c: 0xc0a24f0  jal         func_2893C0
label_280390:
    if (ctx->pc == 0x280390u) {
        ctx->pc = 0x280390u;
            // 0x280390: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x280394u;
        goto label_280394;
    }
    ctx->pc = 0x28038Cu;
    SET_GPR_U32(ctx, 31, 0x280394u);
    ctx->pc = 0x280390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28038Cu;
            // 0x280390: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280394u; }
        if (ctx->pc != 0x280394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280394u; }
        if (ctx->pc != 0x280394u) { return; }
    }
    ctx->pc = 0x280394u;
label_280394:
    // 0x280394: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x280394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_280398:
    // 0x280398: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_28039c:
    // 0x28039c: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x28039cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_2803a0:
    // 0x2803a0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2803a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2803a4:
    // 0x2803a4: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x2803a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_2803a8:
    // 0x2803a8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2803a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2803ac:
    // 0x2803ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2803acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2803b0:
    // 0x2803b0: 0xc061a0c  jal         func_186830
label_2803b4:
    if (ctx->pc == 0x2803B4u) {
        ctx->pc = 0x2803B4u;
            // 0x2803b4: 0x24e7cfe0  addiu       $a3, $a3, -0x3020 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954976));
        ctx->pc = 0x2803B8u;
        goto label_2803b8;
    }
    ctx->pc = 0x2803B0u;
    SET_GPR_U32(ctx, 31, 0x2803B8u);
    ctx->pc = 0x2803B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2803B0u;
            // 0x2803b4: 0x24e7cfe0  addiu       $a3, $a3, -0x3020 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2803B8u; }
        if (ctx->pc != 0x2803B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2803B8u; }
        if (ctx->pc != 0x2803B8u) { return; }
    }
    ctx->pc = 0x2803B8u;
label_2803b8:
    // 0x2803b8: 0xc0a24f0  jal         func_2893C0
label_2803bc:
    if (ctx->pc == 0x2803BCu) {
        ctx->pc = 0x2803BCu;
            // 0x2803bc: 0xc7ac01f8  lwc1        $f12, 0x1F8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2803C0u;
        goto label_2803c0;
    }
    ctx->pc = 0x2803B8u;
    SET_GPR_U32(ctx, 31, 0x2803C0u);
    ctx->pc = 0x2803BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2803B8u;
            // 0x2803bc: 0xc7ac01f8  lwc1        $f12, 0x1F8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2803C0u; }
        if (ctx->pc != 0x2803C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2803C0u; }
        if (ctx->pc != 0x2803C0u) { return; }
    }
    ctx->pc = 0x2803C0u;
label_2803c0:
    // 0x2803c0: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x2803c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_2803c4:
    // 0x2803c4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2803c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2803c8:
    // 0x2803c8: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x2803c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_2803cc:
    // 0x2803cc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2803ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2803d0:
    // 0x2803d0: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x2803d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_2803d4:
    // 0x2803d4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2803d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2803d8:
    // 0x2803d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2803d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2803dc:
    // 0x2803dc: 0xc061a0c  jal         func_186830
label_2803e0:
    if (ctx->pc == 0x2803E0u) {
        ctx->pc = 0x2803E0u;
            // 0x2803e0: 0x24e7cff0  addiu       $a3, $a3, -0x3010 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954992));
        ctx->pc = 0x2803E4u;
        goto label_2803e4;
    }
    ctx->pc = 0x2803DCu;
    SET_GPR_U32(ctx, 31, 0x2803E4u);
    ctx->pc = 0x2803E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2803DCu;
            // 0x2803e0: 0x24e7cff0  addiu       $a3, $a3, -0x3010 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2803E4u; }
        if (ctx->pc != 0x2803E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2803E4u; }
        if (ctx->pc != 0x2803E4u) { return; }
    }
    ctx->pc = 0x2803E4u;
label_2803e4:
    // 0x2803e4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2803e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2803e8:
    // 0x2803e8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2803e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_2803ec:
    // 0x2803ec: 0xc421e444  lwc1        $f1, -0x1BBC($at)
    ctx->pc = 0x2803ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2803f0:
    // 0x2803f0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2803f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2803f4:
    // 0x2803f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2803f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2803f8:
    // 0x2803f8: 0x0  nop
    ctx->pc = 0x2803f8u;
    // NOP
label_2803fc:
    // 0x2803fc: 0x4601ad41  sub.s       $f21, $f21, $f1
    ctx->pc = 0x2803fcu;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_280400:
    // 0x280400: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x280400u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_280404:
    // 0x280404: 0x0  nop
    ctx->pc = 0x280404u;
    // NOP
label_280408:
    // 0x280408: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_28040c:
    if (ctx->pc == 0x28040Cu) {
        ctx->pc = 0x28040Cu;
            // 0x28040c: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->pc = 0x280410u;
        goto label_280410;
    }
    ctx->pc = 0x280408u;
    {
        const bool branch_taken_0x280408 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28040Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280408u;
            // 0x28040c: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280408) {
            ctx->pc = 0x280424u;
            goto label_280424;
        }
    }
    ctx->pc = 0x280410u;
label_280410:
    // 0x280410: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x280410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_280414:
    // 0x280414: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x280414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_280418:
    // 0x280418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x280418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28041c:
    // 0x28041c: 0x1000000d  b           . + 4 + (0xD << 2)
label_280420:
    if (ctx->pc == 0x280420u) {
        ctx->pc = 0x280420u;
            // 0x280420: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x280424u;
        goto label_280424;
    }
    ctx->pc = 0x28041Cu;
    {
        const bool branch_taken_0x28041c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28041Cu;
            // 0x280420: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28041c) {
            ctx->pc = 0x280454u;
            goto label_280454;
        }
    }
    ctx->pc = 0x280424u;
label_280424:
    // 0x280424: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x280424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_280428:
    // 0x280428: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x280428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28042c:
    // 0x28042c: 0x0  nop
    ctx->pc = 0x28042cu;
    // NOP
label_280430:
    // 0x280430: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x280430u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_280434:
    // 0x280434: 0x0  nop
    ctx->pc = 0x280434u;
    // NOP
label_280438:
    // 0x280438: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_28043c:
    if (ctx->pc == 0x28043Cu) {
        ctx->pc = 0x28043Cu;
            // 0x28043c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x280440u;
        goto label_280440;
    }
    ctx->pc = 0x280438u;
    {
        const bool branch_taken_0x280438 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28043Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280438u;
            // 0x28043c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280438) {
            ctx->pc = 0x280458u;
            goto label_280458;
        }
    }
    ctx->pc = 0x280440u;
label_280440:
    // 0x280440: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x280440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_280444:
    // 0x280444: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x280444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_280448:
    // 0x280448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x280448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28044c:
    // 0x28044c: 0x0  nop
    ctx->pc = 0x28044cu;
    // NOP
label_280450:
    // 0x280450: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x280450u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_280454:
    // 0x280454: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x280454u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_280458:
    // 0x280458: 0xc0a24f0  jal         func_2893C0
label_28045c:
    if (ctx->pc == 0x28045Cu) {
        ctx->pc = 0x280460u;
        goto label_280460;
    }
    ctx->pc = 0x280458u;
    SET_GPR_U32(ctx, 31, 0x280460u);
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280460u; }
        if (ctx->pc != 0x280460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280460u; }
        if (ctx->pc != 0x280460u) { return; }
    }
    ctx->pc = 0x280460u;
label_280460:
    // 0x280460: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x280460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_280464:
    // 0x280464: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_280468:
    // 0x280468: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280468u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_28046c:
    // 0x28046c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x28046cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_280470:
    // 0x280470: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x280470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_280474:
    // 0x280474: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x280474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280478:
    // 0x280478: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28047c:
    // 0x28047c: 0xc061a0c  jal         func_186830
label_280480:
    if (ctx->pc == 0x280480u) {
        ctx->pc = 0x280480u;
            // 0x280480: 0x24e7d010  addiu       $a3, $a3, -0x2FF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955024));
        ctx->pc = 0x280484u;
        goto label_280484;
    }
    ctx->pc = 0x28047Cu;
    SET_GPR_U32(ctx, 31, 0x280484u);
    ctx->pc = 0x280480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28047Cu;
            // 0x280480: 0x24e7d010  addiu       $a3, $a3, -0x2FF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280484u; }
        if (ctx->pc != 0x280484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280484u; }
        if (ctx->pc != 0x280484u) { return; }
    }
    ctx->pc = 0x280484u;
label_280484:
    // 0x280484: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x280484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_280488:
    // 0x280488: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x280488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28048c:
    // 0x28048c: 0xc0a24f0  jal         func_2893C0
label_280490:
    if (ctx->pc == 0x280490u) {
        ctx->pc = 0x280490u;
            // 0x280490: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x280494u;
        goto label_280494;
    }
    ctx->pc = 0x28048Cu;
    SET_GPR_U32(ctx, 31, 0x280494u);
    ctx->pc = 0x280490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28048Cu;
            // 0x280490: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280494u; }
        if (ctx->pc != 0x280494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280494u; }
        if (ctx->pc != 0x280494u) { return; }
    }
    ctx->pc = 0x280494u;
label_280494:
    // 0x280494: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x280494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_280498:
    // 0x280498: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_28049c:
    // 0x28049c: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x28049cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_2804a0:
    // 0x2804a0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2804a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2804a4:
    // 0x2804a4: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x2804a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_2804a8:
    // 0x2804a8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2804a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2804ac:
    // 0x2804ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2804acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2804b0:
    // 0x2804b0: 0xc061a0c  jal         func_186830
label_2804b4:
    if (ctx->pc == 0x2804B4u) {
        ctx->pc = 0x2804B4u;
            // 0x2804b4: 0x24e7d020  addiu       $a3, $a3, -0x2FE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955040));
        ctx->pc = 0x2804B8u;
        goto label_2804b8;
    }
    ctx->pc = 0x2804B0u;
    SET_GPR_U32(ctx, 31, 0x2804B8u);
    ctx->pc = 0x2804B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2804B0u;
            // 0x2804b4: 0x24e7d020  addiu       $a3, $a3, -0x2FE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2804B8u; }
        if (ctx->pc != 0x2804B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2804B8u; }
        if (ctx->pc != 0x2804B8u) { return; }
    }
    ctx->pc = 0x2804B8u;
label_2804b8:
    // 0x2804b8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2804b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_2804bc:
    // 0x2804bc: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2804bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_2804c0:
    // 0x2804c0: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x2804c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2804c4:
    // 0x2804c4: 0xc04c018  jal         func_130060
label_2804c8:
    if (ctx->pc == 0x2804C8u) {
        ctx->pc = 0x2804C8u;
            // 0x2804c8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x2804CCu;
        goto label_2804cc;
    }
    ctx->pc = 0x2804C4u;
    SET_GPR_U32(ctx, 31, 0x2804CCu);
    ctx->pc = 0x2804C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2804C4u;
            // 0x2804c8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2804CCu; }
        if (ctx->pc != 0x2804CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2804CCu; }
        if (ctx->pc != 0x2804CCu) { return; }
    }
    ctx->pc = 0x2804CCu;
label_2804cc:
    // 0x2804cc: 0xc0a24f0  jal         func_2893C0
label_2804d0:
    if (ctx->pc == 0x2804D0u) {
        ctx->pc = 0x2804D0u;
            // 0x2804d0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2804D4u;
        goto label_2804d4;
    }
    ctx->pc = 0x2804CCu;
    SET_GPR_U32(ctx, 31, 0x2804D4u);
    ctx->pc = 0x2804D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2804CCu;
            // 0x2804d0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2804D4u; }
        if (ctx->pc != 0x2804D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2804D4u; }
        if (ctx->pc != 0x2804D4u) { return; }
    }
    ctx->pc = 0x2804D4u;
label_2804d4:
    // 0x2804d4: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x2804d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_2804d8:
    // 0x2804d8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2804d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2804dc:
    // 0x2804dc: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x2804dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_2804e0:
    // 0x2804e0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2804e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2804e4:
    // 0x2804e4: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x2804e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_2804e8:
    // 0x2804e8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2804e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2804ec:
    // 0x2804ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2804ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2804f0:
    // 0x2804f0: 0xc061a0c  jal         func_186830
label_2804f4:
    if (ctx->pc == 0x2804F4u) {
        ctx->pc = 0x2804F4u;
            // 0x2804f4: 0x24e7d040  addiu       $a3, $a3, -0x2FC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955072));
        ctx->pc = 0x2804F8u;
        goto label_2804f8;
    }
    ctx->pc = 0x2804F0u;
    SET_GPR_U32(ctx, 31, 0x2804F8u);
    ctx->pc = 0x2804F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2804F0u;
            // 0x2804f4: 0x24e7d040  addiu       $a3, $a3, -0x2FC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2804F8u; }
        if (ctx->pc != 0x2804F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2804F8u; }
        if (ctx->pc != 0x2804F8u) { return; }
    }
    ctx->pc = 0x2804F8u;
label_2804f8:
    // 0x2804f8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2804f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2804fc:
    // 0x2804fc: 0xc0a24f0  jal         func_2893C0
label_280500:
    if (ctx->pc == 0x280500u) {
        ctx->pc = 0x280500u;
            // 0x280500: 0xc42ce450  lwc1        $f12, -0x1BB0($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x280504u;
        goto label_280504;
    }
    ctx->pc = 0x2804FCu;
    SET_GPR_U32(ctx, 31, 0x280504u);
    ctx->pc = 0x280500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2804FCu;
            // 0x280500: 0xc42ce450  lwc1        $f12, -0x1BB0($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280504u; }
        if (ctx->pc != 0x280504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280504u; }
        if (ctx->pc != 0x280504u) { return; }
    }
    ctx->pc = 0x280504u;
label_280504:
    // 0x280504: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x280504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_280508:
    // 0x280508: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_28050c:
    // 0x28050c: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x28050cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280510:
    // 0x280510: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x280510u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_280514:
    // 0x280514: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x280514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_280518:
    // 0x280518: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x280518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_28051c:
    // 0x28051c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28051cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280520:
    // 0x280520: 0xc061a0c  jal         func_186830
label_280524:
    if (ctx->pc == 0x280524u) {
        ctx->pc = 0x280524u;
            // 0x280524: 0x24e7d060  addiu       $a3, $a3, -0x2FA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955104));
        ctx->pc = 0x280528u;
        goto label_280528;
    }
    ctx->pc = 0x280520u;
    SET_GPR_U32(ctx, 31, 0x280528u);
    ctx->pc = 0x280524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280520u;
            // 0x280524: 0x24e7d060  addiu       $a3, $a3, -0x2FA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280528u; }
        if (ctx->pc != 0x280528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280528u; }
        if (ctx->pc != 0x280528u) { return; }
    }
    ctx->pc = 0x280528u;
label_280528:
    // 0x280528: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x280528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_28052c:
    // 0x28052c: 0xc0a0c64  jal         func_283190
label_280530:
    if (ctx->pc == 0x280530u) {
        ctx->pc = 0x280530u;
            // 0x280530: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x280534u;
        goto label_280534;
    }
    ctx->pc = 0x28052Cu;
    SET_GPR_U32(ctx, 31, 0x280534u);
    ctx->pc = 0x280530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28052Cu;
            // 0x280530: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280534u; }
        if (ctx->pc != 0x280534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280534u; }
        if (ctx->pc != 0x280534u) { return; }
    }
    ctx->pc = 0x280534u;
label_280534:
    // 0x280534: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_280538:
    if (ctx->pc == 0x280538u) {
        ctx->pc = 0x28053Cu;
        goto label_28053c;
    }
    ctx->pc = 0x280534u;
    {
        const bool branch_taken_0x280534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280534) {
            ctx->pc = 0x280554u;
            goto label_280554;
        }
    }
    ctx->pc = 0x28053Cu;
label_28053c:
    // 0x28053c: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x28053cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_280540:
    // 0x280540: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x280540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_280544:
    // 0x280544: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x280544u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_280548:
    // 0x280548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x280548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28054c:
    // 0x28054c: 0x0  nop
    ctx->pc = 0x28054cu;
    // NOP
label_280550:
    // 0x280550: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x280550u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_280554:
    // 0x280554: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x280554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_280558:
    // 0x280558: 0x3c034480  lui         $v1, 0x4480
    ctx->pc = 0x280558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17536 << 16));
label_28055c:
    // 0x28055c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28055cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_280560:
    // 0x280560: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x280560u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_280564:
    // 0x280564: 0x0  nop
    ctx->pc = 0x280564u;
    // NOP
label_280568:
    // 0x280568: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x280568u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_28056c:
    // 0x28056c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x28056cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_280570:
    // 0x280570: 0x0  nop
    ctx->pc = 0x280570u;
    // NOP
label_280574:
    // 0x280574: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x280574u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_280578:
    // 0x280578: 0x0  nop
    ctx->pc = 0x280578u;
    // NOP
label_28057c:
    // 0x28057c: 0x0  nop
    ctx->pc = 0x28057cu;
    // NOP
label_280580:
    // 0x280580: 0xc0a24f0  jal         func_2893C0
label_280584:
    if (ctx->pc == 0x280584u) {
        ctx->pc = 0x280584u;
            // 0x280584: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x280588u;
        goto label_280588;
    }
    ctx->pc = 0x280580u;
    SET_GPR_U32(ctx, 31, 0x280588u);
    ctx->pc = 0x280584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280580u;
            // 0x280584: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280588u; }
        if (ctx->pc != 0x280588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280588u; }
        if (ctx->pc != 0x280588u) { return; }
    }
    ctx->pc = 0x280588u;
label_280588:
    // 0x280588: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x280588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_28058c:
    // 0x28058c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x28058cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_280590:
    // 0x280590: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280590u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280594:
    // 0x280594: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x280594u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_280598:
    // 0x280598: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28059c:
    // 0x28059c: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x28059cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_2805a0:
    // 0x2805a0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2805a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2805a4:
    // 0x2805a4: 0xc061a0c  jal         func_186830
label_2805a8:
    if (ctx->pc == 0x2805A8u) {
        ctx->pc = 0x2805A8u;
            // 0x2805a8: 0x24e7d080  addiu       $a3, $a3, -0x2F80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955136));
        ctx->pc = 0x2805ACu;
        goto label_2805ac;
    }
    ctx->pc = 0x2805A4u;
    SET_GPR_U32(ctx, 31, 0x2805ACu);
    ctx->pc = 0x2805A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2805A4u;
            // 0x2805a8: 0x24e7d080  addiu       $a3, $a3, -0x2F80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2805ACu; }
        if (ctx->pc != 0x2805ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2805ACu; }
        if (ctx->pc != 0x2805ACu) { return; }
    }
    ctx->pc = 0x2805ACu;
label_2805ac:
    // 0x2805ac: 0x10000257  b           . + 4 + (0x257 << 2)
label_2805b0:
    if (ctx->pc == 0x2805B0u) {
        ctx->pc = 0x2805B4u;
        goto label_2805b4;
    }
    ctx->pc = 0x2805ACu;
    {
        const bool branch_taken_0x2805ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2805ac) {
            ctx->pc = 0x280F0Cu;
            goto label_280f0c;
        }
    }
    ctx->pc = 0x2805B4u;
label_2805b4:
    // 0x2805b4: 0x26100016  addiu       $s0, $s0, 0x16
    ctx->pc = 0x2805b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22));
label_2805b8:
    // 0x2805b8: 0x8c285014  lw          $t0, 0x5014($at)
    ctx->pc = 0x2805b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20500)));
label_2805bc:
    // 0x2805bc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2805bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2805c0:
    // 0x2805c0: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x2805c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_2805c4:
    // 0x2805c4: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x2805c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_2805c8:
    // 0x2805c8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2805c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2805cc:
    // 0x2805cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2805ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2805d0:
    // 0x2805d0: 0xc061a0c  jal         func_186830
label_2805d4:
    if (ctx->pc == 0x2805D4u) {
        ctx->pc = 0x2805D4u;
            // 0x2805d4: 0x24e7d0a0  addiu       $a3, $a3, -0x2F60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955168));
        ctx->pc = 0x2805D8u;
        goto label_2805d8;
    }
    ctx->pc = 0x2805D0u;
    SET_GPR_U32(ctx, 31, 0x2805D8u);
    ctx->pc = 0x2805D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2805D0u;
            // 0x2805d4: 0x24e7d0a0  addiu       $a3, $a3, -0x2F60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2805D8u; }
        if (ctx->pc != 0x2805D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2805D8u; }
        if (ctx->pc != 0x2805D8u) { return; }
    }
    ctx->pc = 0x2805D8u;
label_2805d8:
    // 0x2805d8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2805d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_2805dc:
    // 0x2805dc: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x2805dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_2805e0:
    // 0x2805e0: 0x8c285018  lw          $t0, 0x5018($at)
    ctx->pc = 0x2805e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20504)));
label_2805e4:
    // 0x2805e4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2805e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2805e8:
    // 0x2805e8: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x2805e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_2805ec:
    // 0x2805ec: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x2805ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_2805f0:
    // 0x2805f0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2805f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2805f4:
    // 0x2805f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2805f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2805f8:
    // 0x2805f8: 0xc061a0c  jal         func_186830
label_2805fc:
    if (ctx->pc == 0x2805FCu) {
        ctx->pc = 0x2805FCu;
            // 0x2805fc: 0x24e7d0b8  addiu       $a3, $a3, -0x2F48 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955192));
        ctx->pc = 0x280600u;
        goto label_280600;
    }
    ctx->pc = 0x2805F8u;
    SET_GPR_U32(ctx, 31, 0x280600u);
    ctx->pc = 0x2805FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2805F8u;
            // 0x2805fc: 0x24e7d0b8  addiu       $a3, $a3, -0x2F48 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280600u; }
        if (ctx->pc != 0x280600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280600u; }
        if (ctx->pc != 0x280600u) { return; }
    }
    ctx->pc = 0x280600u;
label_280600:
    // 0x280600: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x280600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_280604:
    // 0x280604: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_280608:
    // 0x280608: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x280608u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_28060c:
    // 0x28060c: 0x320f809  jalr        $t9
label_280610:
    if (ctx->pc == 0x280610u) {
        ctx->pc = 0x280610u;
            // 0x280610: 0x27a50230  addiu       $a1, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x280614u;
        goto label_280614;
    }
    ctx->pc = 0x28060Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x280614u);
        ctx->pc = 0x280610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28060Cu;
            // 0x280610: 0x27a50230  addiu       $a1, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x280614u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x280614u; }
            if (ctx->pc != 0x280614u) { return; }
        }
        }
    }
    ctx->pc = 0x280614u;
label_280614:
    // 0x280614: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x280614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_280618:
    // 0x280618: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28061c:
    // 0x28061c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x28061cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_280620:
    // 0x280620: 0x320f809  jalr        $t9
label_280624:
    if (ctx->pc == 0x280624u) {
        ctx->pc = 0x280624u;
            // 0x280624: 0x27a50240  addiu       $a1, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->pc = 0x280628u;
        goto label_280628;
    }
    ctx->pc = 0x280620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x280628u);
        ctx->pc = 0x280624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280620u;
            // 0x280624: 0x27a50240  addiu       $a1, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x280628u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x280628u; }
            if (ctx->pc != 0x280628u) { return; }
        }
        }
    }
    ctx->pc = 0x280628u;
label_280628:
    // 0x280628: 0xc0975d8  jal         func_25D760
label_28062c:
    if (ctx->pc == 0x28062Cu) {
        ctx->pc = 0x28062Cu;
            // 0x28062c: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x280630u;
        goto label_280630;
    }
    ctx->pc = 0x280628u;
    SET_GPR_U32(ctx, 31, 0x280630u);
    ctx->pc = 0x28062Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280628u;
            // 0x28062c: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D760u;
    if (runtime->hasFunction(0x25D760u)) {
        auto targetFn = runtime->lookupFunction(0x25D760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280630u; }
        if (ctx->pc != 0x280630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoordGyaku__FPf_0x25d760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280630u; }
        if (ctx->pc != 0x280630u) { return; }
    }
    ctx->pc = 0x280630u;
label_280630:
    // 0x280630: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x280630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_280634:
    // 0x280634: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x280634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_280638:
    // 0x280638: 0xc421e440  lwc1        $f1, -0x1BC0($at)
    ctx->pc = 0x280638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28063c:
    // 0x28063c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x28063cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_280640:
    // 0x280640: 0xc7a20240  lwc1        $f2, 0x240($sp)
    ctx->pc = 0x280640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_280644:
    // 0x280644: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280644u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280648:
    // 0x280648: 0x27b20244  addiu       $s2, $sp, 0x244
    ctx->pc = 0x280648u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
label_28064c:
    // 0x28064c: 0x27b30248  addiu       $s3, $sp, 0x248
    ctx->pc = 0x28064cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
label_280650:
    // 0x280650: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x280650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_280654:
    // 0x280654: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x280654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280658:
    // 0x280658: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28065c:
    // 0x28065c: 0x24e7d0c8  addiu       $a3, $a3, -0x2F38
    ctx->pc = 0x28065cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955208));
label_280660:
    // 0x280660: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x280660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_280664:
    // 0x280664: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x280664u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_280668:
    // 0x280668: 0xe7a10240  swc1        $f1, 0x240($sp)
    ctx->pc = 0x280668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
label_28066c:
    // 0x28066c: 0xc420e444  lwc1        $f0, -0x1BBC($at)
    ctx->pc = 0x28066cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280670:
    // 0x280670: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x280670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_280674:
    // 0x280674: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x280674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_280678:
    // 0x280678: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x280678u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_28067c:
    // 0x28067c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x28067cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_280680:
    // 0x280680: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x280680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_280684:
    // 0x280684: 0xc420e448  lwc1        $f0, -0x1BB8($at)
    ctx->pc = 0x280684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280688:
    // 0x280688: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x280688u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_28068c:
    // 0x28068c: 0xc061a0c  jal         func_186830
label_280690:
    if (ctx->pc == 0x280690u) {
        ctx->pc = 0x280690u;
            // 0x280690: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->pc = 0x280694u;
        goto label_280694;
    }
    ctx->pc = 0x28068Cu;
    SET_GPR_U32(ctx, 31, 0x280694u);
    ctx->pc = 0x280690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28068Cu;
            // 0x280690: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280694u; }
        if (ctx->pc != 0x280694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280694u; }
        if (ctx->pc != 0x280694u) { return; }
    }
    ctx->pc = 0x280694u;
label_280694:
    // 0x280694: 0xc0a24f0  jal         func_2893C0
label_280698:
    if (ctx->pc == 0x280698u) {
        ctx->pc = 0x280698u;
            // 0x280698: 0xc7ac0230  lwc1        $f12, 0x230($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x28069Cu;
        goto label_28069c;
    }
    ctx->pc = 0x280694u;
    SET_GPR_U32(ctx, 31, 0x28069Cu);
    ctx->pc = 0x280698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280694u;
            // 0x280698: 0xc7ac0230  lwc1        $f12, 0x230($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28069Cu; }
        if (ctx->pc != 0x28069Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28069Cu; }
        if (ctx->pc != 0x28069Cu) { return; }
    }
    ctx->pc = 0x28069Cu;
label_28069c:
    // 0x28069c: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x28069cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_2806a0:
    // 0x2806a0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2806a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2806a4:
    // 0x2806a4: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x2806a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_2806a8:
    // 0x2806a8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2806a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2806ac:
    // 0x2806ac: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x2806acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_2806b0:
    // 0x2806b0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2806b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2806b4:
    // 0x2806b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2806b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2806b8:
    // 0x2806b8: 0xc061a0c  jal         func_186830
label_2806bc:
    if (ctx->pc == 0x2806BCu) {
        ctx->pc = 0x2806BCu;
            // 0x2806bc: 0x24e7cfd0  addiu       $a3, $a3, -0x3030 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954960));
        ctx->pc = 0x2806C0u;
        goto label_2806c0;
    }
    ctx->pc = 0x2806B8u;
    SET_GPR_U32(ctx, 31, 0x2806C0u);
    ctx->pc = 0x2806BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2806B8u;
            // 0x2806bc: 0x24e7cfd0  addiu       $a3, $a3, -0x3030 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2806C0u; }
        if (ctx->pc != 0x2806C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2806C0u; }
        if (ctx->pc != 0x2806C0u) { return; }
    }
    ctx->pc = 0x2806C0u;
label_2806c0:
    // 0x2806c0: 0xc0a24f0  jal         func_2893C0
label_2806c4:
    if (ctx->pc == 0x2806C4u) {
        ctx->pc = 0x2806C4u;
            // 0x2806c4: 0xc7ac0234  lwc1        $f12, 0x234($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2806C8u;
        goto label_2806c8;
    }
    ctx->pc = 0x2806C0u;
    SET_GPR_U32(ctx, 31, 0x2806C8u);
    ctx->pc = 0x2806C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2806C0u;
            // 0x2806c4: 0xc7ac0234  lwc1        $f12, 0x234($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2806C8u; }
        if (ctx->pc != 0x2806C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2806C8u; }
        if (ctx->pc != 0x2806C8u) { return; }
    }
    ctx->pc = 0x2806C8u;
label_2806c8:
    // 0x2806c8: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x2806c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_2806cc:
    // 0x2806cc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2806ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2806d0:
    // 0x2806d0: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x2806d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_2806d4:
    // 0x2806d4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2806d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2806d8:
    // 0x2806d8: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x2806d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_2806dc:
    // 0x2806dc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2806dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2806e0:
    // 0x2806e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2806e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2806e4:
    // 0x2806e4: 0xc061a0c  jal         func_186830
label_2806e8:
    if (ctx->pc == 0x2806E8u) {
        ctx->pc = 0x2806E8u;
            // 0x2806e8: 0x24e7cfe0  addiu       $a3, $a3, -0x3020 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954976));
        ctx->pc = 0x2806ECu;
        goto label_2806ec;
    }
    ctx->pc = 0x2806E4u;
    SET_GPR_U32(ctx, 31, 0x2806ECu);
    ctx->pc = 0x2806E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2806E4u;
            // 0x2806e8: 0x24e7cfe0  addiu       $a3, $a3, -0x3020 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2806ECu; }
        if (ctx->pc != 0x2806ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2806ECu; }
        if (ctx->pc != 0x2806ECu) { return; }
    }
    ctx->pc = 0x2806ECu;
label_2806ec:
    // 0x2806ec: 0xc0a24f0  jal         func_2893C0
label_2806f0:
    if (ctx->pc == 0x2806F0u) {
        ctx->pc = 0x2806F0u;
            // 0x2806f0: 0xc7ac0238  lwc1        $f12, 0x238($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2806F4u;
        goto label_2806f4;
    }
    ctx->pc = 0x2806ECu;
    SET_GPR_U32(ctx, 31, 0x2806F4u);
    ctx->pc = 0x2806F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2806ECu;
            // 0x2806f0: 0xc7ac0238  lwc1        $f12, 0x238($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2806F4u; }
        if (ctx->pc != 0x2806F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2806F4u; }
        if (ctx->pc != 0x2806F4u) { return; }
    }
    ctx->pc = 0x2806F4u;
label_2806f4:
    // 0x2806f4: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x2806f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_2806f8:
    // 0x2806f8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2806f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2806fc:
    // 0x2806fc: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x2806fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280700:
    // 0x280700: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x280700u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_280704:
    // 0x280704: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x280704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_280708:
    // 0x280708: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x280708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_28070c:
    // 0x28070c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28070cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280710:
    // 0x280710: 0xc061a0c  jal         func_186830
label_280714:
    if (ctx->pc == 0x280714u) {
        ctx->pc = 0x280714u;
            // 0x280714: 0x24e7cff0  addiu       $a3, $a3, -0x3010 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954992));
        ctx->pc = 0x280718u;
        goto label_280718;
    }
    ctx->pc = 0x280710u;
    SET_GPR_U32(ctx, 31, 0x280718u);
    ctx->pc = 0x280714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280710u;
            // 0x280714: 0x24e7cff0  addiu       $a3, $a3, -0x3010 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280718u; }
        if (ctx->pc != 0x280718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280718u; }
        if (ctx->pc != 0x280718u) { return; }
    }
    ctx->pc = 0x280718u;
label_280718:
    // 0x280718: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x280718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_28071c:
    // 0x28071c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x28071cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_280720:
    // 0x280720: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280720u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280724:
    // 0x280724: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x280724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_280728:
    // 0x280728: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x280728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_28072c:
    // 0x28072c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28072cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280730:
    // 0x280730: 0xc061a0c  jal         func_186830
label_280734:
    if (ctx->pc == 0x280734u) {
        ctx->pc = 0x280734u;
            // 0x280734: 0x24e7d0d8  addiu       $a3, $a3, -0x2F28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955224));
        ctx->pc = 0x280738u;
        goto label_280738;
    }
    ctx->pc = 0x280730u;
    SET_GPR_U32(ctx, 31, 0x280738u);
    ctx->pc = 0x280734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280730u;
            // 0x280734: 0x24e7d0d8  addiu       $a3, $a3, -0x2F28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280738u; }
        if (ctx->pc != 0x280738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280738u; }
        if (ctx->pc != 0x280738u) { return; }
    }
    ctx->pc = 0x280738u;
label_280738:
    // 0x280738: 0xc0a24f0  jal         func_2893C0
label_28073c:
    if (ctx->pc == 0x28073Cu) {
        ctx->pc = 0x28073Cu;
            // 0x28073c: 0xc7ac0240  lwc1        $f12, 0x240($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x280740u;
        goto label_280740;
    }
    ctx->pc = 0x280738u;
    SET_GPR_U32(ctx, 31, 0x280740u);
    ctx->pc = 0x28073Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280738u;
            // 0x28073c: 0xc7ac0240  lwc1        $f12, 0x240($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280740u; }
        if (ctx->pc != 0x280740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280740u; }
        if (ctx->pc != 0x280740u) { return; }
    }
    ctx->pc = 0x280740u;
label_280740:
    // 0x280740: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x280740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_280744:
    // 0x280744: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_280748:
    // 0x280748: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280748u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_28074c:
    // 0x28074c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x28074cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_280750:
    // 0x280750: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x280750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_280754:
    // 0x280754: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x280754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280758:
    // 0x280758: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28075c:
    // 0x28075c: 0xc061a0c  jal         func_186830
label_280760:
    if (ctx->pc == 0x280760u) {
        ctx->pc = 0x280760u;
            // 0x280760: 0x24e7cfd0  addiu       $a3, $a3, -0x3030 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954960));
        ctx->pc = 0x280764u;
        goto label_280764;
    }
    ctx->pc = 0x28075Cu;
    SET_GPR_U32(ctx, 31, 0x280764u);
    ctx->pc = 0x280760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28075Cu;
            // 0x280760: 0x24e7cfd0  addiu       $a3, $a3, -0x3030 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280764u; }
        if (ctx->pc != 0x280764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280764u; }
        if (ctx->pc != 0x280764u) { return; }
    }
    ctx->pc = 0x280764u;
label_280764:
    // 0x280764: 0xc0a24f0  jal         func_2893C0
label_280768:
    if (ctx->pc == 0x280768u) {
        ctx->pc = 0x280768u;
            // 0x280768: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x28076Cu;
        goto label_28076c;
    }
    ctx->pc = 0x280764u;
    SET_GPR_U32(ctx, 31, 0x28076Cu);
    ctx->pc = 0x280768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280764u;
            // 0x280768: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28076Cu; }
        if (ctx->pc != 0x28076Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28076Cu; }
        if (ctx->pc != 0x28076Cu) { return; }
    }
    ctx->pc = 0x28076Cu;
label_28076c:
    // 0x28076c: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x28076cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_280770:
    // 0x280770: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_280774:
    // 0x280774: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280774u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280778:
    // 0x280778: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x280778u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28077c:
    // 0x28077c: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x28077cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_280780:
    // 0x280780: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x280780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280784:
    // 0x280784: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280788:
    // 0x280788: 0xc061a0c  jal         func_186830
label_28078c:
    if (ctx->pc == 0x28078Cu) {
        ctx->pc = 0x28078Cu;
            // 0x28078c: 0x24e7cfe0  addiu       $a3, $a3, -0x3020 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954976));
        ctx->pc = 0x280790u;
        goto label_280790;
    }
    ctx->pc = 0x280788u;
    SET_GPR_U32(ctx, 31, 0x280790u);
    ctx->pc = 0x28078Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280788u;
            // 0x28078c: 0x24e7cfe0  addiu       $a3, $a3, -0x3020 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280790u; }
        if (ctx->pc != 0x280790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280790u; }
        if (ctx->pc != 0x280790u) { return; }
    }
    ctx->pc = 0x280790u;
label_280790:
    // 0x280790: 0xc0a24f0  jal         func_2893C0
label_280794:
    if (ctx->pc == 0x280794u) {
        ctx->pc = 0x280794u;
            // 0x280794: 0xc66c0000  lwc1        $f12, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x280798u;
        goto label_280798;
    }
    ctx->pc = 0x280790u;
    SET_GPR_U32(ctx, 31, 0x280798u);
    ctx->pc = 0x280794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280790u;
            // 0x280794: 0xc66c0000  lwc1        $f12, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280798u; }
        if (ctx->pc != 0x280798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280798u; }
        if (ctx->pc != 0x280798u) { return; }
    }
    ctx->pc = 0x280798u;
label_280798:
    // 0x280798: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x280798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_28079c:
    // 0x28079c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x28079cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2807a0:
    // 0x2807a0: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x2807a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_2807a4:
    // 0x2807a4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2807a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2807a8:
    // 0x2807a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2807a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2807ac:
    // 0x2807ac: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x2807acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_2807b0:
    // 0x2807b0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2807b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2807b4:
    // 0x2807b4: 0xc061a0c  jal         func_186830
label_2807b8:
    if (ctx->pc == 0x2807B8u) {
        ctx->pc = 0x2807B8u;
            // 0x2807b8: 0x24e7cff0  addiu       $a3, $a3, -0x3010 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954992));
        ctx->pc = 0x2807BCu;
        goto label_2807bc;
    }
    ctx->pc = 0x2807B4u;
    SET_GPR_U32(ctx, 31, 0x2807BCu);
    ctx->pc = 0x2807B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2807B4u;
            // 0x2807b8: 0x24e7cff0  addiu       $a3, $a3, -0x3010 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2807BCu; }
        if (ctx->pc != 0x2807BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2807BCu; }
        if (ctx->pc != 0x2807BCu) { return; }
    }
    ctx->pc = 0x2807BCu;
label_2807bc:
    // 0x2807bc: 0x100001d3  b           . + 4 + (0x1D3 << 2)
label_2807c0:
    if (ctx->pc == 0x2807C0u) {
        ctx->pc = 0x2807C4u;
        goto label_2807c4;
    }
    ctx->pc = 0x2807BCu;
    {
        const bool branch_taken_0x2807bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2807bc) {
            ctx->pc = 0x280F0Cu;
            goto label_280f0c;
        }
    }
    ctx->pc = 0x2807C4u;
label_2807c4:
    // 0x2807c4: 0x27a30250  addiu       $v1, $sp, 0x250
    ctx->pc = 0x2807c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_2807c8:
    // 0x2807c8: 0x24843e50  addiu       $a0, $a0, 0x3E50
    ctx->pc = 0x2807c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15952));
label_2807cc:
    // 0x2807cc: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2807ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2807d0:
    // 0x2807d0: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2807d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2807d4:
    // 0x2807d4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2807d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_2807d8:
    // 0x2807d8: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2807d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_2807dc:
    // 0x2807dc: 0x8f829810  lw          $v0, -0x67F0($gp)
    ctx->pc = 0x2807dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940688)));
label_2807e0:
    // 0x2807e0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_2807e4:
    if (ctx->pc == 0x2807E4u) {
        ctx->pc = 0x2807E8u;
        goto label_2807e8;
    }
    ctx->pc = 0x2807E0u;
    {
        const bool branch_taken_0x2807e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2807e0) {
            ctx->pc = 0x280820u;
            goto label_280820;
        }
    }
    ctx->pc = 0x2807E8u;
label_2807e8:
    // 0x2807e8: 0x8f82980c  lw          $v0, -0x67F4($gp)
    ctx->pc = 0x2807e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940684)));
label_2807ec:
    // 0x2807ec: 0x26100016  addiu       $s0, $s0, 0x16
    ctx->pc = 0x2807ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22));
label_2807f0:
    // 0x2807f0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2807f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2807f4:
    // 0x2807f4: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x2807f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_2807f8:
    // 0x2807f8: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x2807f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_2807fc:
    // 0x2807fc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2807fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280800:
    // 0x280800: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280804:
    // 0x280804: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x280804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_280808:
    // 0x280808: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x280808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_28080c:
    // 0x28080c: 0x8c480250  lw          $t0, 0x250($v0)
    ctx->pc = 0x28080cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
label_280810:
    // 0x280810: 0xc061a0c  jal         func_186830
label_280814:
    if (ctx->pc == 0x280814u) {
        ctx->pc = 0x280814u;
            // 0x280814: 0x24e7d0f0  addiu       $a3, $a3, -0x2F10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955248));
        ctx->pc = 0x280818u;
        goto label_280818;
    }
    ctx->pc = 0x280810u;
    SET_GPR_U32(ctx, 31, 0x280818u);
    ctx->pc = 0x280814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280810u;
            // 0x280814: 0x24e7d0f0  addiu       $a3, $a3, -0x2F10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280818u; }
        if (ctx->pc != 0x280818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280818u; }
        if (ctx->pc != 0x280818u) { return; }
    }
    ctx->pc = 0x280818u;
label_280818:
    // 0x280818: 0x1000000e  b           . + 4 + (0xE << 2)
label_28081c:
    if (ctx->pc == 0x28081Cu) {
        ctx->pc = 0x28081Cu;
            // 0x28081c: 0x8f839810  lw          $v1, -0x67F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940688)));
        ctx->pc = 0x280820u;
        goto label_280820;
    }
    ctx->pc = 0x280818u;
    {
        const bool branch_taken_0x280818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28081Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280818u;
            // 0x28081c: 0x8f839810  lw          $v1, -0x67F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280818) {
            ctx->pc = 0x280854u;
            goto label_280854;
        }
    }
    ctx->pc = 0x280820u;
label_280820:
    // 0x280820: 0x8f82980c  lw          $v0, -0x67F4($gp)
    ctx->pc = 0x280820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940684)));
label_280824:
    // 0x280824: 0x26100016  addiu       $s0, $s0, 0x16
    ctx->pc = 0x280824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22));
label_280828:
    // 0x280828: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_28082c:
    // 0x28082c: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x28082cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280830:
    // 0x280830: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x280830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_280834:
    // 0x280834: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x280834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280838:
    // 0x280838: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28083c:
    // 0x28083c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28083cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_280840:
    // 0x280840: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x280840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_280844:
    // 0x280844: 0x8c480250  lw          $t0, 0x250($v0)
    ctx->pc = 0x280844u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
label_280848:
    // 0x280848: 0xc061a0c  jal         func_186830
label_28084c:
    if (ctx->pc == 0x28084Cu) {
        ctx->pc = 0x28084Cu;
            // 0x28084c: 0x24e7d100  addiu       $a3, $a3, -0x2F00 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955264));
        ctx->pc = 0x280850u;
        goto label_280850;
    }
    ctx->pc = 0x280848u;
    SET_GPR_U32(ctx, 31, 0x280850u);
    ctx->pc = 0x28084Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280848u;
            // 0x28084c: 0x24e7d100  addiu       $a3, $a3, -0x2F00 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280850u; }
        if (ctx->pc != 0x280850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280850u; }
        if (ctx->pc != 0x280850u) { return; }
    }
    ctx->pc = 0x280850u;
label_280850:
    // 0x280850: 0x8f839810  lw          $v1, -0x67F0($gp)
    ctx->pc = 0x280850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940688)));
label_280854:
    // 0x280854: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x280854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_280858:
    // 0x280858: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_28085c:
    if (ctx->pc == 0x28085Cu) {
        ctx->pc = 0x280860u;
        goto label_280860;
    }
    ctx->pc = 0x280858u;
    {
        const bool branch_taken_0x280858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x280858) {
            ctx->pc = 0x28088Cu;
            goto label_28088c;
        }
    }
    ctx->pc = 0x280860u;
label_280860:
    // 0x280860: 0x8f889814  lw          $t0, -0x67EC($gp)
    ctx->pc = 0x280860u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940692)));
label_280864:
    // 0x280864: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x280864u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_280868:
    // 0x280868: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_28086c:
    // 0x28086c: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x28086cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280870:
    // 0x280870: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x280870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_280874:
    // 0x280874: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x280874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280878:
    // 0x280878: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28087c:
    // 0x28087c: 0xc061a0c  jal         func_186830
label_280880:
    if (ctx->pc == 0x280880u) {
        ctx->pc = 0x280880u;
            // 0x280880: 0x24e7d110  addiu       $a3, $a3, -0x2EF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955280));
        ctx->pc = 0x280884u;
        goto label_280884;
    }
    ctx->pc = 0x28087Cu;
    SET_GPR_U32(ctx, 31, 0x280884u);
    ctx->pc = 0x280880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28087Cu;
            // 0x280880: 0x24e7d110  addiu       $a3, $a3, -0x2EF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280884u; }
        if (ctx->pc != 0x280884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280884u; }
        if (ctx->pc != 0x280884u) { return; }
    }
    ctx->pc = 0x280884u;
label_280884:
    // 0x280884: 0x1000000b  b           . + 4 + (0xB << 2)
label_280888:
    if (ctx->pc == 0x280888u) {
        ctx->pc = 0x280888u;
            // 0x280888: 0x8f859814  lw          $a1, -0x67EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940692)));
        ctx->pc = 0x28088Cu;
        goto label_28088c;
    }
    ctx->pc = 0x280884u;
    {
        const bool branch_taken_0x280884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280884u;
            // 0x280888: 0x8f859814  lw          $a1, -0x67EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280884) {
            ctx->pc = 0x2808B4u;
            goto label_2808b4;
        }
    }
    ctx->pc = 0x28088Cu;
label_28088c:
    // 0x28088c: 0x8f889814  lw          $t0, -0x67EC($gp)
    ctx->pc = 0x28088cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940692)));
label_280890:
    // 0x280890: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x280890u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_280894:
    // 0x280894: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_280898:
    // 0x280898: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280898u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_28089c:
    // 0x28089c: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x28089cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_2808a0:
    // 0x2808a0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2808a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2808a4:
    // 0x2808a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2808a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2808a8:
    // 0x2808a8: 0xc061a0c  jal         func_186830
label_2808ac:
    if (ctx->pc == 0x2808ACu) {
        ctx->pc = 0x2808ACu;
            // 0x2808ac: 0x24e7d120  addiu       $a3, $a3, -0x2EE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955296));
        ctx->pc = 0x2808B0u;
        goto label_2808b0;
    }
    ctx->pc = 0x2808A8u;
    SET_GPR_U32(ctx, 31, 0x2808B0u);
    ctx->pc = 0x2808ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2808A8u;
            // 0x2808ac: 0x24e7d120  addiu       $a3, $a3, -0x2EE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2808B0u; }
        if (ctx->pc != 0x2808B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2808B0u; }
        if (ctx->pc != 0x2808B0u) { return; }
    }
    ctx->pc = 0x2808B0u;
label_2808b0:
    // 0x2808b0: 0x8f859814  lw          $a1, -0x67EC($gp)
    ctx->pc = 0x2808b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940692)));
label_2808b4:
    // 0x2808b4: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x2808b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_2808b8:
    // 0x2808b8: 0x24844200  addiu       $a0, $a0, 0x4200
    ctx->pc = 0x2808b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
label_2808bc:
    // 0x2808bc: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x2808bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_2808c0:
    // 0x2808c0: 0xc09596c  jal         func_2565B0
label_2808c4:
    if (ctx->pc == 0x2808C4u) {
        ctx->pc = 0x2808C4u;
            // 0x2808c4: 0x27a70280  addiu       $a3, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x2808C8u;
        goto label_2808c8;
    }
    ctx->pc = 0x2808C0u;
    SET_GPR_U32(ctx, 31, 0x2808C8u);
    ctx->pc = 0x2808C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2808C0u;
            // 0x2808c4: 0x27a70280  addiu       $a3, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2565B0u;
    if (runtime->hasFunction(0x2565B0u)) {
        auto targetFn = runtime->lookupFunction(0x2565B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2808C8u; }
        if (ctx->pc != 0x2808C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCameraPas__10CCameraPasFiPfPf_0x2565b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2808C8u; }
        if (ctx->pc != 0x2808C8u) { return; }
    }
    ctx->pc = 0x2808C8u;
label_2808c8:
    // 0x2808c8: 0xc0975d8  jal         func_25D760
label_2808cc:
    if (ctx->pc == 0x2808CCu) {
        ctx->pc = 0x2808CCu;
            // 0x2808cc: 0x27a40270  addiu       $a0, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x2808D0u;
        goto label_2808d0;
    }
    ctx->pc = 0x2808C8u;
    SET_GPR_U32(ctx, 31, 0x2808D0u);
    ctx->pc = 0x2808CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2808C8u;
            // 0x2808cc: 0x27a40270  addiu       $a0, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D760u;
    if (runtime->hasFunction(0x25D760u)) {
        auto targetFn = runtime->lookupFunction(0x25D760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2808D0u; }
        if (ctx->pc != 0x2808D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoordGyaku__FPf_0x25d760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2808D0u; }
        if (ctx->pc != 0x2808D0u) { return; }
    }
    ctx->pc = 0x2808D0u;
label_2808d0:
    // 0x2808d0: 0xc0975d8  jal         func_25D760
label_2808d4:
    if (ctx->pc == 0x2808D4u) {
        ctx->pc = 0x2808D4u;
            // 0x2808d4: 0x27a40280  addiu       $a0, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x2808D8u;
        goto label_2808d8;
    }
    ctx->pc = 0x2808D0u;
    SET_GPR_U32(ctx, 31, 0x2808D8u);
    ctx->pc = 0x2808D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2808D0u;
            // 0x2808d4: 0x27a40280  addiu       $a0, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D760u;
    if (runtime->hasFunction(0x25D760u)) {
        auto targetFn = runtime->lookupFunction(0x25D760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2808D8u; }
        if (ctx->pc != 0x2808D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoordGyaku__FPf_0x25d760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2808D8u; }
        if (ctx->pc != 0x2808D8u) { return; }
    }
    ctx->pc = 0x2808D8u;
label_2808d8:
    // 0x2808d8: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x2808d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_2808dc:
    // 0x2808dc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2808dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2808e0:
    // 0x2808e0: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x2808e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_2808e4:
    // 0x2808e4: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x2808e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_2808e8:
    // 0x2808e8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2808e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2808ec:
    // 0x2808ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2808ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2808f0:
    // 0x2808f0: 0xc061a0c  jal         func_186830
label_2808f4:
    if (ctx->pc == 0x2808F4u) {
        ctx->pc = 0x2808F4u;
            // 0x2808f4: 0x24e7d0c8  addiu       $a3, $a3, -0x2F38 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955208));
        ctx->pc = 0x2808F8u;
        goto label_2808f8;
    }
    ctx->pc = 0x2808F0u;
    SET_GPR_U32(ctx, 31, 0x2808F8u);
    ctx->pc = 0x2808F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2808F0u;
            // 0x2808f4: 0x24e7d0c8  addiu       $a3, $a3, -0x2F38 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2808F8u; }
        if (ctx->pc != 0x2808F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2808F8u; }
        if (ctx->pc != 0x2808F8u) { return; }
    }
    ctx->pc = 0x2808F8u;
label_2808f8:
    // 0x2808f8: 0xc0a24f0  jal         func_2893C0
label_2808fc:
    if (ctx->pc == 0x2808FCu) {
        ctx->pc = 0x2808FCu;
            // 0x2808fc: 0xc7ac0270  lwc1        $f12, 0x270($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x280900u;
        goto label_280900;
    }
    ctx->pc = 0x2808F8u;
    SET_GPR_U32(ctx, 31, 0x280900u);
    ctx->pc = 0x2808FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2808F8u;
            // 0x2808fc: 0xc7ac0270  lwc1        $f12, 0x270($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280900u; }
        if (ctx->pc != 0x280900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280900u; }
        if (ctx->pc != 0x280900u) { return; }
    }
    ctx->pc = 0x280900u;
label_280900:
    // 0x280900: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x280900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_280904:
    // 0x280904: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_280908:
    // 0x280908: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280908u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_28090c:
    // 0x28090c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x28090cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_280910:
    // 0x280910: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x280910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_280914:
    // 0x280914: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x280914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280918:
    // 0x280918: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28091c:
    // 0x28091c: 0xc061a0c  jal         func_186830
label_280920:
    if (ctx->pc == 0x280920u) {
        ctx->pc = 0x280920u;
            // 0x280920: 0x24e7cfd0  addiu       $a3, $a3, -0x3030 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954960));
        ctx->pc = 0x280924u;
        goto label_280924;
    }
    ctx->pc = 0x28091Cu;
    SET_GPR_U32(ctx, 31, 0x280924u);
    ctx->pc = 0x280920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28091Cu;
            // 0x280920: 0x24e7cfd0  addiu       $a3, $a3, -0x3030 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280924u; }
        if (ctx->pc != 0x280924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280924u; }
        if (ctx->pc != 0x280924u) { return; }
    }
    ctx->pc = 0x280924u;
label_280924:
    // 0x280924: 0xc0a24f0  jal         func_2893C0
label_280928:
    if (ctx->pc == 0x280928u) {
        ctx->pc = 0x280928u;
            // 0x280928: 0xc7ac0274  lwc1        $f12, 0x274($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x28092Cu;
        goto label_28092c;
    }
    ctx->pc = 0x280924u;
    SET_GPR_U32(ctx, 31, 0x28092Cu);
    ctx->pc = 0x280928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280924u;
            // 0x280928: 0xc7ac0274  lwc1        $f12, 0x274($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28092Cu; }
        if (ctx->pc != 0x28092Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28092Cu; }
        if (ctx->pc != 0x28092Cu) { return; }
    }
    ctx->pc = 0x28092Cu;
label_28092c:
    // 0x28092c: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x28092cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_280930:
    // 0x280930: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_280934:
    // 0x280934: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280934u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280938:
    // 0x280938: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x280938u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28093c:
    // 0x28093c: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x28093cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_280940:
    // 0x280940: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x280940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280944:
    // 0x280944: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280948:
    // 0x280948: 0xc061a0c  jal         func_186830
label_28094c:
    if (ctx->pc == 0x28094Cu) {
        ctx->pc = 0x28094Cu;
            // 0x28094c: 0x24e7cfe0  addiu       $a3, $a3, -0x3020 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954976));
        ctx->pc = 0x280950u;
        goto label_280950;
    }
    ctx->pc = 0x280948u;
    SET_GPR_U32(ctx, 31, 0x280950u);
    ctx->pc = 0x28094Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280948u;
            // 0x28094c: 0x24e7cfe0  addiu       $a3, $a3, -0x3020 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280950u; }
        if (ctx->pc != 0x280950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280950u; }
        if (ctx->pc != 0x280950u) { return; }
    }
    ctx->pc = 0x280950u;
label_280950:
    // 0x280950: 0xc0a24f0  jal         func_2893C0
label_280954:
    if (ctx->pc == 0x280954u) {
        ctx->pc = 0x280954u;
            // 0x280954: 0xc7ac0278  lwc1        $f12, 0x278($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x280958u;
        goto label_280958;
    }
    ctx->pc = 0x280950u;
    SET_GPR_U32(ctx, 31, 0x280958u);
    ctx->pc = 0x280954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280950u;
            // 0x280954: 0xc7ac0278  lwc1        $f12, 0x278($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280958u; }
        if (ctx->pc != 0x280958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280958u; }
        if (ctx->pc != 0x280958u) { return; }
    }
    ctx->pc = 0x280958u;
label_280958:
    // 0x280958: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x280958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_28095c:
    // 0x28095c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x28095cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_280960:
    // 0x280960: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280960u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280964:
    // 0x280964: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x280964u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_280968:
    // 0x280968: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x280968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_28096c:
    // 0x28096c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x28096cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280970:
    // 0x280970: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280974:
    // 0x280974: 0xc061a0c  jal         func_186830
label_280978:
    if (ctx->pc == 0x280978u) {
        ctx->pc = 0x280978u;
            // 0x280978: 0x24e7cff0  addiu       $a3, $a3, -0x3010 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954992));
        ctx->pc = 0x28097Cu;
        goto label_28097c;
    }
    ctx->pc = 0x280974u;
    SET_GPR_U32(ctx, 31, 0x28097Cu);
    ctx->pc = 0x280978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280974u;
            // 0x280978: 0x24e7cff0  addiu       $a3, $a3, -0x3010 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28097Cu; }
        if (ctx->pc != 0x28097Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28097Cu; }
        if (ctx->pc != 0x28097Cu) { return; }
    }
    ctx->pc = 0x28097Cu;
label_28097c:
    // 0x28097c: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x28097cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_280980:
    // 0x280980: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_280984:
    // 0x280984: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280984u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280988:
    // 0x280988: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x280988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_28098c:
    // 0x28098c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x28098cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280990:
    // 0x280990: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280994:
    // 0x280994: 0xc061a0c  jal         func_186830
label_280998:
    if (ctx->pc == 0x280998u) {
        ctx->pc = 0x280998u;
            // 0x280998: 0x24e7d000  addiu       $a3, $a3, -0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955008));
        ctx->pc = 0x28099Cu;
        goto label_28099c;
    }
    ctx->pc = 0x280994u;
    SET_GPR_U32(ctx, 31, 0x28099Cu);
    ctx->pc = 0x280998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280994u;
            // 0x280998: 0x24e7d000  addiu       $a3, $a3, -0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28099Cu; }
        if (ctx->pc != 0x28099Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28099Cu; }
        if (ctx->pc != 0x28099Cu) { return; }
    }
    ctx->pc = 0x28099Cu;
label_28099c:
    // 0x28099c: 0xc0a24f0  jal         func_2893C0
label_2809a0:
    if (ctx->pc == 0x2809A0u) {
        ctx->pc = 0x2809A0u;
            // 0x2809a0: 0xc7ac0280  lwc1        $f12, 0x280($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2809A4u;
        goto label_2809a4;
    }
    ctx->pc = 0x28099Cu;
    SET_GPR_U32(ctx, 31, 0x2809A4u);
    ctx->pc = 0x2809A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28099Cu;
            // 0x2809a0: 0xc7ac0280  lwc1        $f12, 0x280($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2809A4u; }
        if (ctx->pc != 0x2809A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2809A4u; }
        if (ctx->pc != 0x2809A4u) { return; }
    }
    ctx->pc = 0x2809A4u;
label_2809a4:
    // 0x2809a4: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x2809a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_2809a8:
    // 0x2809a8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2809a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2809ac:
    // 0x2809ac: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x2809acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_2809b0:
    // 0x2809b0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2809b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2809b4:
    // 0x2809b4: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x2809b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_2809b8:
    // 0x2809b8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2809b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2809bc:
    // 0x2809bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2809bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2809c0:
    // 0x2809c0: 0xc061a0c  jal         func_186830
label_2809c4:
    if (ctx->pc == 0x2809C4u) {
        ctx->pc = 0x2809C4u;
            // 0x2809c4: 0x24e7cfd0  addiu       $a3, $a3, -0x3030 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954960));
        ctx->pc = 0x2809C8u;
        goto label_2809c8;
    }
    ctx->pc = 0x2809C0u;
    SET_GPR_U32(ctx, 31, 0x2809C8u);
    ctx->pc = 0x2809C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2809C0u;
            // 0x2809c4: 0x24e7cfd0  addiu       $a3, $a3, -0x3030 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2809C8u; }
        if (ctx->pc != 0x2809C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2809C8u; }
        if (ctx->pc != 0x2809C8u) { return; }
    }
    ctx->pc = 0x2809C8u;
label_2809c8:
    // 0x2809c8: 0xc0a24f0  jal         func_2893C0
label_2809cc:
    if (ctx->pc == 0x2809CCu) {
        ctx->pc = 0x2809CCu;
            // 0x2809cc: 0xc7ac0284  lwc1        $f12, 0x284($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2809D0u;
        goto label_2809d0;
    }
    ctx->pc = 0x2809C8u;
    SET_GPR_U32(ctx, 31, 0x2809D0u);
    ctx->pc = 0x2809CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2809C8u;
            // 0x2809cc: 0xc7ac0284  lwc1        $f12, 0x284($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2809D0u; }
        if (ctx->pc != 0x2809D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2809D0u; }
        if (ctx->pc != 0x2809D0u) { return; }
    }
    ctx->pc = 0x2809D0u;
label_2809d0:
    // 0x2809d0: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x2809d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_2809d4:
    // 0x2809d4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2809d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2809d8:
    // 0x2809d8: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x2809d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_2809dc:
    // 0x2809dc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2809dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2809e0:
    // 0x2809e0: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x2809e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_2809e4:
    // 0x2809e4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2809e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2809e8:
    // 0x2809e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2809e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2809ec:
    // 0x2809ec: 0xc061a0c  jal         func_186830
label_2809f0:
    if (ctx->pc == 0x2809F0u) {
        ctx->pc = 0x2809F0u;
            // 0x2809f0: 0x24e7cfe0  addiu       $a3, $a3, -0x3020 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954976));
        ctx->pc = 0x2809F4u;
        goto label_2809f4;
    }
    ctx->pc = 0x2809ECu;
    SET_GPR_U32(ctx, 31, 0x2809F4u);
    ctx->pc = 0x2809F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2809ECu;
            // 0x2809f0: 0x24e7cfe0  addiu       $a3, $a3, -0x3020 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2809F4u; }
        if (ctx->pc != 0x2809F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2809F4u; }
        if (ctx->pc != 0x2809F4u) { return; }
    }
    ctx->pc = 0x2809F4u;
label_2809f4:
    // 0x2809f4: 0xc0a24f0  jal         func_2893C0
label_2809f8:
    if (ctx->pc == 0x2809F8u) {
        ctx->pc = 0x2809F8u;
            // 0x2809f8: 0xc7ac0288  lwc1        $f12, 0x288($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2809FCu;
        goto label_2809fc;
    }
    ctx->pc = 0x2809F4u;
    SET_GPR_U32(ctx, 31, 0x2809FCu);
    ctx->pc = 0x2809F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2809F4u;
            // 0x2809f8: 0xc7ac0288  lwc1        $f12, 0x288($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2809FCu; }
        if (ctx->pc != 0x2809FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2809FCu; }
        if (ctx->pc != 0x2809FCu) { return; }
    }
    ctx->pc = 0x2809FCu;
label_2809fc:
    // 0x2809fc: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x2809fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_280a00:
    // 0x280a00: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_280a04:
    // 0x280a04: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280a04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280a08:
    // 0x280a08: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x280a08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_280a0c:
    // 0x280a0c: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x280a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_280a10:
    // 0x280a10: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x280a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280a14:
    // 0x280a14: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280a14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280a18:
    // 0x280a18: 0xc061a0c  jal         func_186830
label_280a1c:
    if (ctx->pc == 0x280A1Cu) {
        ctx->pc = 0x280A1Cu;
            // 0x280a1c: 0x24e7cff0  addiu       $a3, $a3, -0x3010 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954992));
        ctx->pc = 0x280A20u;
        goto label_280a20;
    }
    ctx->pc = 0x280A18u;
    SET_GPR_U32(ctx, 31, 0x280A20u);
    ctx->pc = 0x280A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280A18u;
            // 0x280a1c: 0x24e7cff0  addiu       $a3, $a3, -0x3010 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280A20u; }
        if (ctx->pc != 0x280A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280A20u; }
        if (ctx->pc != 0x280A20u) { return; }
    }
    ctx->pc = 0x280A20u;
label_280a20:
    // 0x280a20: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x280a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_280a24:
    // 0x280a24: 0xc0959c0  jal         func_256700
label_280a28:
    if (ctx->pc == 0x280A28u) {
        ctx->pc = 0x280A28u;
            // 0x280a28: 0x24844200  addiu       $a0, $a0, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
        ctx->pc = 0x280A2Cu;
        goto label_280a2c;
    }
    ctx->pc = 0x280A24u;
    SET_GPR_U32(ctx, 31, 0x280A2Cu);
    ctx->pc = 0x280A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280A24u;
            // 0x280a28: 0x24844200  addiu       $a0, $a0, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256700u;
    if (runtime->hasFunction(0x256700u)) {
        auto targetFn = runtime->lookupFunction(0x256700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280A2Cu; }
        if (ctx->pc != 0x280A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__10CCameraPasFv_0x256700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280A2Cu; }
        if (ctx->pc != 0x280A2Cu) { return; }
    }
    ctx->pc = 0x280A2Cu;
label_280a2c:
    // 0x280a2c: 0x8f849810  lw          $a0, -0x67F0($gp)
    ctx->pc = 0x280a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940688)));
label_280a30:
    // 0x280a30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x280a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_280a34:
    // 0x280a34: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
label_280a38:
    if (ctx->pc == 0x280A38u) {
        ctx->pc = 0x280A3Cu;
        goto label_280a3c;
    }
    ctx->pc = 0x280A34u;
    {
        const bool branch_taken_0x280a34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x280a34) {
            ctx->pc = 0x280A68u;
            goto label_280a68;
        }
    }
    ctx->pc = 0x280A3Cu;
label_280a3c:
    // 0x280a3c: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x280a3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_280a40:
    // 0x280a40: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280a40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_280a44:
    // 0x280a44: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280a44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280a48:
    // 0x280a48: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x280a48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_280a4c:
    // 0x280a4c: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x280a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_280a50:
    // 0x280a50: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x280a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280a54:
    // 0x280a54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280a58:
    // 0x280a58: 0xc061a0c  jal         func_186830
label_280a5c:
    if (ctx->pc == 0x280A5Cu) {
        ctx->pc = 0x280A5Cu;
            // 0x280a5c: 0x24e7d130  addiu       $a3, $a3, -0x2ED0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955312));
        ctx->pc = 0x280A60u;
        goto label_280a60;
    }
    ctx->pc = 0x280A58u;
    SET_GPR_U32(ctx, 31, 0x280A60u);
    ctx->pc = 0x280A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280A58u;
            // 0x280a5c: 0x24e7d130  addiu       $a3, $a3, -0x2ED0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280A60u; }
        if (ctx->pc != 0x280A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280A60u; }
        if (ctx->pc != 0x280A60u) { return; }
    }
    ctx->pc = 0x280A60u;
label_280a60:
    // 0x280a60: 0x1000000a  b           . + 4 + (0xA << 2)
label_280a64:
    if (ctx->pc == 0x280A64u) {
        ctx->pc = 0x280A68u;
        goto label_280a68;
    }
    ctx->pc = 0x280A60u;
    {
        const bool branch_taken_0x280a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280a60) {
            ctx->pc = 0x280A8Cu;
            goto label_280a8c;
        }
    }
    ctx->pc = 0x280A68u;
label_280a68:
    // 0x280a68: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x280a68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_280a6c:
    // 0x280a6c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_280a70:
    // 0x280a70: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280a70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280a74:
    // 0x280a74: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x280a74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_280a78:
    // 0x280a78: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x280a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_280a7c:
    // 0x280a7c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x280a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280a80:
    // 0x280a80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280a84:
    // 0x280a84: 0xc061a0c  jal         func_186830
label_280a88:
    if (ctx->pc == 0x280A88u) {
        ctx->pc = 0x280A88u;
            // 0x280a88: 0x24e7d140  addiu       $a3, $a3, -0x2EC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955328));
        ctx->pc = 0x280A8Cu;
        goto label_280a8c;
    }
    ctx->pc = 0x280A84u;
    SET_GPR_U32(ctx, 31, 0x280A8Cu);
    ctx->pc = 0x280A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280A84u;
            // 0x280a88: 0x24e7d140  addiu       $a3, $a3, -0x2EC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280A8Cu; }
        if (ctx->pc != 0x280A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280A8Cu; }
        if (ctx->pc != 0x280A8Cu) { return; }
    }
    ctx->pc = 0x280A8Cu;
label_280a8c:
    // 0x280a8c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x280a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_280a90:
    // 0x280a90: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x280a90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_280a94:
    // 0x280a94: 0x8c284400  lw          $t0, 0x4400($at)
    ctx->pc = 0x280a94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 17408)));
label_280a98:
    // 0x280a98: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280a98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_280a9c:
    // 0x280a9c: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280aa0:
    // 0x280aa0: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x280aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_280aa4:
    // 0x280aa4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280aa8:
    // 0x280aa8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x280aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280aac:
    // 0x280aac: 0xc061a0c  jal         func_186830
label_280ab0:
    if (ctx->pc == 0x280AB0u) {
        ctx->pc = 0x280AB0u;
            // 0x280ab0: 0x24e7d150  addiu       $a3, $a3, -0x2EB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955344));
        ctx->pc = 0x280AB4u;
        goto label_280ab4;
    }
    ctx->pc = 0x280AACu;
    SET_GPR_U32(ctx, 31, 0x280AB4u);
    ctx->pc = 0x280AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280AACu;
            // 0x280ab0: 0x24e7d150  addiu       $a3, $a3, -0x2EB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280AB4u; }
        if (ctx->pc != 0x280AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280AB4u; }
        if (ctx->pc != 0x280AB4u) { return; }
    }
    ctx->pc = 0x280AB4u;
label_280ab4:
    // 0x280ab4: 0x1000004f  b           . + 4 + (0x4F << 2)
label_280ab8:
    if (ctx->pc == 0x280AB8u) {
        ctx->pc = 0x280AB8u;
            // 0x280ab8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x280ABCu;
        goto label_280abc;
    }
    ctx->pc = 0x280AB4u;
    {
        const bool branch_taken_0x280ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280AB4u;
            // 0x280ab8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ab4) {
            ctx->pc = 0x280BF4u;
            goto label_280bf4;
        }
    }
    ctx->pc = 0x280ABCu;
label_280abc:
    // 0x280abc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x280abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280ac0:
    // 0x280ac0: 0x24844200  addiu       $a0, $a0, 0x4200
    ctx->pc = 0x280ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
label_280ac4:
    // 0x280ac4: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x280ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_280ac8:
    // 0x280ac8: 0xc09596c  jal         func_2565B0
label_280acc:
    if (ctx->pc == 0x280ACCu) {
        ctx->pc = 0x280ACCu;
            // 0x280acc: 0x27a702a0  addiu       $a3, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->pc = 0x280AD0u;
        goto label_280ad0;
    }
    ctx->pc = 0x280AC8u;
    SET_GPR_U32(ctx, 31, 0x280AD0u);
    ctx->pc = 0x280ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280AC8u;
            // 0x280acc: 0x27a702a0  addiu       $a3, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2565B0u;
    if (runtime->hasFunction(0x2565B0u)) {
        auto targetFn = runtime->lookupFunction(0x2565B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280AD0u; }
        if (ctx->pc != 0x280AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCameraPas__10CCameraPasFiPfPf_0x2565b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280AD0u; }
        if (ctx->pc != 0x280AD0u) { return; }
    }
    ctx->pc = 0x280AD0u;
label_280ad0:
    // 0x280ad0: 0xc0975d8  jal         func_25D760
label_280ad4:
    if (ctx->pc == 0x280AD4u) {
        ctx->pc = 0x280AD4u;
            // 0x280ad4: 0x27a40290  addiu       $a0, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x280AD8u;
        goto label_280ad8;
    }
    ctx->pc = 0x280AD0u;
    SET_GPR_U32(ctx, 31, 0x280AD8u);
    ctx->pc = 0x280AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280AD0u;
            // 0x280ad4: 0x27a40290  addiu       $a0, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D760u;
    if (runtime->hasFunction(0x25D760u)) {
        auto targetFn = runtime->lookupFunction(0x25D760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280AD8u; }
        if (ctx->pc != 0x280AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoordGyaku__FPf_0x25d760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280AD8u; }
        if (ctx->pc != 0x280AD8u) { return; }
    }
    ctx->pc = 0x280AD8u;
label_280ad8:
    // 0x280ad8: 0xc0975d8  jal         func_25D760
label_280adc:
    if (ctx->pc == 0x280ADCu) {
        ctx->pc = 0x280ADCu;
            // 0x280adc: 0x27a402a0  addiu       $a0, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->pc = 0x280AE0u;
        goto label_280ae0;
    }
    ctx->pc = 0x280AD8u;
    SET_GPR_U32(ctx, 31, 0x280AE0u);
    ctx->pc = 0x280ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280AD8u;
            // 0x280adc: 0x27a402a0  addiu       $a0, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D760u;
    if (runtime->hasFunction(0x25D760u)) {
        auto targetFn = runtime->lookupFunction(0x25D760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280AE0u; }
        if (ctx->pc != 0x280AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoordGyaku__FPf_0x25d760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280AE0u; }
        if (ctx->pc != 0x280AE0u) { return; }
    }
    ctx->pc = 0x280AE0u;
label_280ae0:
    // 0x280ae0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x280ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_280ae4:
    // 0x280ae4: 0xc041c5c  jal         func_107170
label_280ae8:
    if (ctx->pc == 0x280AE8u) {
        ctx->pc = 0x280AE8u;
            // 0x280ae8: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x280AECu;
        goto label_280aec;
    }
    ctx->pc = 0x280AE4u;
    SET_GPR_U32(ctx, 31, 0x280AECu);
    ctx->pc = 0x280AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280AE4u;
            // 0x280ae8: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280AECu; }
        if (ctx->pc != 0x280AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280AECu; }
        if (ctx->pc != 0x280AECu) { return; }
    }
    ctx->pc = 0x280AECu;
label_280aec:
    // 0x280aec: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x280aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_280af0:
    // 0x280af0: 0xc041c5c  jal         func_107170
label_280af4:
    if (ctx->pc == 0x280AF4u) {
        ctx->pc = 0x280AF4u;
            // 0x280af4: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x280AF8u;
        goto label_280af8;
    }
    ctx->pc = 0x280AF0u;
    SET_GPR_U32(ctx, 31, 0x280AF8u);
    ctx->pc = 0x280AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280AF0u;
            // 0x280af4: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280AF8u; }
        if (ctx->pc != 0x280AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280AF8u; }
        if (ctx->pc != 0x280AF8u) { return; }
    }
    ctx->pc = 0x280AF8u;
label_280af8:
    // 0x280af8: 0xc7a002c0  lwc1        $f0, 0x2C0($sp)
    ctx->pc = 0x280af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280afc:
    // 0x280afc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x280afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_280b00:
    // 0x280b00: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x280b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_280b04:
    // 0x280b04: 0x27b202c4  addiu       $s2, $sp, 0x2C4
    ctx->pc = 0x280b04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 708));
label_280b08:
    // 0x280b08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_280b0c:
    // 0x280b0c: 0x27b302c8  addiu       $s3, $sp, 0x2C8
    ctx->pc = 0x280b0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
label_280b10:
    // 0x280b10: 0x27b402b4  addiu       $s4, $sp, 0x2B4
    ctx->pc = 0x280b10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 692));
label_280b14:
    // 0x280b14: 0x27b502b8  addiu       $s5, $sp, 0x2B8
    ctx->pc = 0x280b14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
label_280b18:
    // 0x280b18: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x280b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_280b1c:
    // 0x280b1c: 0x27a502c0  addiu       $a1, $sp, 0x2C0
    ctx->pc = 0x280b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_280b20:
    // 0x280b20: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x280b20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_280b24:
    // 0x280b24: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x280b24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_280b28:
    // 0x280b28: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x280b28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_280b2c:
    // 0x280b2c: 0xe7a002c0  swc1        $f0, 0x2C0($sp)
    ctx->pc = 0x280b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
label_280b30:
    // 0x280b30: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x280b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280b34:
    // 0x280b34: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x280b34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_280b38:
    // 0x280b38: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x280b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_280b3c:
    // 0x280b3c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x280b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280b40:
    // 0x280b40: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x280b40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_280b44:
    // 0x280b44: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x280b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_280b48:
    // 0x280b48: 0xc7a002b0  lwc1        $f0, 0x2B0($sp)
    ctx->pc = 0x280b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280b4c:
    // 0x280b4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280b4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_280b50:
    // 0x280b50: 0xe7a002b0  swc1        $f0, 0x2B0($sp)
    ctx->pc = 0x280b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
label_280b54:
    // 0x280b54: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x280b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280b58:
    // 0x280b58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280b58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_280b5c:
    // 0x280b5c: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x280b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_280b60:
    // 0x280b60: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x280b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280b64:
    // 0x280b64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280b64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_280b68:
    // 0x280b68: 0xc09f944  jal         func_27E510
label_280b6c:
    if (ctx->pc == 0x280B6Cu) {
        ctx->pc = 0x280B6Cu;
            // 0x280b6c: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->pc = 0x280B70u;
        goto label_280b70;
    }
    ctx->pc = 0x280B68u;
    SET_GPR_U32(ctx, 31, 0x280B70u);
    ctx->pc = 0x280B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280B68u;
            // 0x280b6c: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x27E510u;
    if (runtime->hasFunction(0x27E510u)) {
        auto targetFn = runtime->lookupFunction(0x27E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280B70u; }
        if (ctx->pc != 0x280B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawBox__FPfPfiii_0x27e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280B70u; }
        if (ctx->pc != 0x280B70u) { return; }
    }
    ctx->pc = 0x280B70u;
label_280b70:
    // 0x280b70: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x280b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_280b74:
    // 0x280b74: 0xc041c5c  jal         func_107170
label_280b78:
    if (ctx->pc == 0x280B78u) {
        ctx->pc = 0x280B78u;
            // 0x280b78: 0x27a502a0  addiu       $a1, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->pc = 0x280B7Cu;
        goto label_280b7c;
    }
    ctx->pc = 0x280B74u;
    SET_GPR_U32(ctx, 31, 0x280B7Cu);
    ctx->pc = 0x280B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280B74u;
            // 0x280b78: 0x27a502a0  addiu       $a1, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280B7Cu; }
        if (ctx->pc != 0x280B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280B7Cu; }
        if (ctx->pc != 0x280B7Cu) { return; }
    }
    ctx->pc = 0x280B7Cu;
label_280b7c:
    // 0x280b7c: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x280b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_280b80:
    // 0x280b80: 0xc041c5c  jal         func_107170
label_280b84:
    if (ctx->pc == 0x280B84u) {
        ctx->pc = 0x280B84u;
            // 0x280b84: 0x27a502a0  addiu       $a1, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->pc = 0x280B88u;
        goto label_280b88;
    }
    ctx->pc = 0x280B80u;
    SET_GPR_U32(ctx, 31, 0x280B88u);
    ctx->pc = 0x280B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280B80u;
            // 0x280b84: 0x27a502a0  addiu       $a1, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280B88u; }
        if (ctx->pc != 0x280B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280B88u; }
        if (ctx->pc != 0x280B88u) { return; }
    }
    ctx->pc = 0x280B88u;
label_280b88:
    // 0x280b88: 0xc7a002c0  lwc1        $f0, 0x2C0($sp)
    ctx->pc = 0x280b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280b8c:
    // 0x280b8c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x280b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_280b90:
    // 0x280b90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_280b94:
    // 0x280b94: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x280b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_280b98:
    // 0x280b98: 0x27a502c0  addiu       $a1, $sp, 0x2C0
    ctx->pc = 0x280b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_280b9c:
    // 0x280b9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x280b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280ba0:
    // 0x280ba0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x280ba0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280ba4:
    // 0x280ba4: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x280ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_280ba8:
    // 0x280ba8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x280ba8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_280bac:
    // 0x280bac: 0xe7a002c0  swc1        $f0, 0x2C0($sp)
    ctx->pc = 0x280bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
label_280bb0:
    // 0x280bb0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x280bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280bb4:
    // 0x280bb4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x280bb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_280bb8:
    // 0x280bb8: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x280bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_280bbc:
    // 0x280bbc: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x280bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280bc0:
    // 0x280bc0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x280bc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_280bc4:
    // 0x280bc4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x280bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_280bc8:
    // 0x280bc8: 0xc7a002b0  lwc1        $f0, 0x2B0($sp)
    ctx->pc = 0x280bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280bcc:
    // 0x280bcc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280bccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_280bd0:
    // 0x280bd0: 0xe7a002b0  swc1        $f0, 0x2B0($sp)
    ctx->pc = 0x280bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
label_280bd4:
    // 0x280bd4: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x280bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280bd8:
    // 0x280bd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280bd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_280bdc:
    // 0x280bdc: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x280bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_280be0:
    // 0x280be0: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x280be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280be4:
    // 0x280be4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280be4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_280be8:
    // 0x280be8: 0xc09f944  jal         func_27E510
label_280bec:
    if (ctx->pc == 0x280BECu) {
        ctx->pc = 0x280BECu;
            // 0x280bec: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->pc = 0x280BF0u;
        goto label_280bf0;
    }
    ctx->pc = 0x280BE8u;
    SET_GPR_U32(ctx, 31, 0x280BF0u);
    ctx->pc = 0x280BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280BE8u;
            // 0x280bec: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x27E510u;
    if (runtime->hasFunction(0x27E510u)) {
        auto targetFn = runtime->lookupFunction(0x27E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280BF0u; }
        if (ctx->pc != 0x280BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawBox__FPfPfiii_0x27e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280BF0u; }
        if (ctx->pc != 0x280BF0u) { return; }
    }
    ctx->pc = 0x280BF0u;
label_280bf0:
    // 0x280bf0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x280bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_280bf4:
    // 0x280bf4: 0x0  nop
    ctx->pc = 0x280bf4u;
    // NOP
label_280bf8:
    // 0x280bf8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x280bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_280bfc:
    // 0x280bfc: 0x8c224400  lw          $v0, 0x4400($at)
    ctx->pc = 0x280bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 17408)));
label_280c00:
    // 0x280c00: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x280c00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_280c04:
    // 0x280c04: 0x1440ffad  bnez        $v0, . + 4 + (-0x53 << 2)
label_280c08:
    if (ctx->pc == 0x280C08u) {
        ctx->pc = 0x280C08u;
            // 0x280c08: 0x3c0401f0  lui         $a0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
        ctx->pc = 0x280C0Cu;
        goto label_280c0c;
    }
    ctx->pc = 0x280C04u;
    {
        const bool branch_taken_0x280c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280C04u;
            // 0x280c08: 0x3c0401f0  lui         $a0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c04) {
            ctx->pc = 0x280ABCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_280abc;
        }
    }
    ctx->pc = 0x280C0Cu;
label_280c0c:
    // 0x280c0c: 0x100000bf  b           . + 4 + (0xBF << 2)
label_280c10:
    if (ctx->pc == 0x280C10u) {
        ctx->pc = 0x280C14u;
        goto label_280c14;
    }
    ctx->pc = 0x280C0Cu;
    {
        const bool branch_taken_0x280c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280c0c) {
            ctx->pc = 0x280F0Cu;
            goto label_280f0c;
        }
    }
    ctx->pc = 0x280C14u;
label_280c14:
    // 0x280c14: 0x27a302d0  addiu       $v1, $sp, 0x2D0
    ctx->pc = 0x280c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_280c18:
    // 0x280c18: 0x24843e70  addiu       $a0, $a0, 0x3E70
    ctx->pc = 0x280c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15984));
label_280c1c:
    // 0x280c1c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x280c1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_280c20:
    // 0x280c20: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x280c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280c24:
    // 0x280c24: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x280c24u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_280c28:
    // 0x280c28: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x280c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_280c2c:
    // 0x280c2c: 0x8f82981c  lw          $v0, -0x67E4($gp)
    ctx->pc = 0x280c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940700)));
label_280c30:
    // 0x280c30: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_280c34:
    if (ctx->pc == 0x280C34u) {
        ctx->pc = 0x280C38u;
        goto label_280c38;
    }
    ctx->pc = 0x280C30u;
    {
        const bool branch_taken_0x280c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280c30) {
            ctx->pc = 0x280C70u;
            goto label_280c70;
        }
    }
    ctx->pc = 0x280C38u;
label_280c38:
    // 0x280c38: 0x8f829818  lw          $v0, -0x67E8($gp)
    ctx->pc = 0x280c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940696)));
label_280c3c:
    // 0x280c3c: 0x26100016  addiu       $s0, $s0, 0x16
    ctx->pc = 0x280c3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22));
label_280c40:
    // 0x280c40: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_280c44:
    // 0x280c44: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280c44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280c48:
    // 0x280c48: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x280c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_280c4c:
    // 0x280c4c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x280c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280c50:
    // 0x280c50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280c54:
    // 0x280c54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x280c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_280c58:
    // 0x280c58: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x280c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_280c5c:
    // 0x280c5c: 0x8c4802d0  lw          $t0, 0x2D0($v0)
    ctx->pc = 0x280c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_280c60:
    // 0x280c60: 0xc061a0c  jal         func_186830
label_280c64:
    if (ctx->pc == 0x280C64u) {
        ctx->pc = 0x280C64u;
            // 0x280c64: 0x24e7d0f0  addiu       $a3, $a3, -0x2F10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955248));
        ctx->pc = 0x280C68u;
        goto label_280c68;
    }
    ctx->pc = 0x280C60u;
    SET_GPR_U32(ctx, 31, 0x280C68u);
    ctx->pc = 0x280C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280C60u;
            // 0x280c64: 0x24e7d0f0  addiu       $a3, $a3, -0x2F10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280C68u; }
        if (ctx->pc != 0x280C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280C68u; }
        if (ctx->pc != 0x280C68u) { return; }
    }
    ctx->pc = 0x280C68u;
label_280c68:
    // 0x280c68: 0x1000000e  b           . + 4 + (0xE << 2)
label_280c6c:
    if (ctx->pc == 0x280C6Cu) {
        ctx->pc = 0x280C6Cu;
            // 0x280c6c: 0x8f83981c  lw          $v1, -0x67E4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940700)));
        ctx->pc = 0x280C70u;
        goto label_280c70;
    }
    ctx->pc = 0x280C68u;
    {
        const bool branch_taken_0x280c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280C68u;
            // 0x280c6c: 0x8f83981c  lw          $v1, -0x67E4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940700)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c68) {
            ctx->pc = 0x280CA4u;
            goto label_280ca4;
        }
    }
    ctx->pc = 0x280C70u;
label_280c70:
    // 0x280c70: 0x8f829818  lw          $v0, -0x67E8($gp)
    ctx->pc = 0x280c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940696)));
label_280c74:
    // 0x280c74: 0x26100016  addiu       $s0, $s0, 0x16
    ctx->pc = 0x280c74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22));
label_280c78:
    // 0x280c78: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_280c7c:
    // 0x280c7c: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280c80:
    // 0x280c80: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x280c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_280c84:
    // 0x280c84: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x280c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280c88:
    // 0x280c88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280c8c:
    // 0x280c8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x280c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_280c90:
    // 0x280c90: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x280c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_280c94:
    // 0x280c94: 0x8c4802d0  lw          $t0, 0x2D0($v0)
    ctx->pc = 0x280c94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_280c98:
    // 0x280c98: 0xc061a0c  jal         func_186830
label_280c9c:
    if (ctx->pc == 0x280C9Cu) {
        ctx->pc = 0x280C9Cu;
            // 0x280c9c: 0x24e7d100  addiu       $a3, $a3, -0x2F00 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955264));
        ctx->pc = 0x280CA0u;
        goto label_280ca0;
    }
    ctx->pc = 0x280C98u;
    SET_GPR_U32(ctx, 31, 0x280CA0u);
    ctx->pc = 0x280C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280C98u;
            // 0x280c9c: 0x24e7d100  addiu       $a3, $a3, -0x2F00 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280CA0u; }
        if (ctx->pc != 0x280CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280CA0u; }
        if (ctx->pc != 0x280CA0u) { return; }
    }
    ctx->pc = 0x280CA0u;
label_280ca0:
    // 0x280ca0: 0x8f83981c  lw          $v1, -0x67E4($gp)
    ctx->pc = 0x280ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940700)));
label_280ca4:
    // 0x280ca4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x280ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_280ca8:
    // 0x280ca8: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_280cac:
    if (ctx->pc == 0x280CACu) {
        ctx->pc = 0x280CB0u;
        goto label_280cb0;
    }
    ctx->pc = 0x280CA8u;
    {
        const bool branch_taken_0x280ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x280ca8) {
            ctx->pc = 0x280CDCu;
            goto label_280cdc;
        }
    }
    ctx->pc = 0x280CB0u;
label_280cb0:
    // 0x280cb0: 0x8f889820  lw          $t0, -0x67E0($gp)
    ctx->pc = 0x280cb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940704)));
label_280cb4:
    // 0x280cb4: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x280cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_280cb8:
    // 0x280cb8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_280cbc:
    // 0x280cbc: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280cc0:
    // 0x280cc0: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x280cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_280cc4:
    // 0x280cc4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x280cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280cc8:
    // 0x280cc8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280cc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280ccc:
    // 0x280ccc: 0xc061a0c  jal         func_186830
label_280cd0:
    if (ctx->pc == 0x280CD0u) {
        ctx->pc = 0x280CD0u;
            // 0x280cd0: 0x24e7d110  addiu       $a3, $a3, -0x2EF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955280));
        ctx->pc = 0x280CD4u;
        goto label_280cd4;
    }
    ctx->pc = 0x280CCCu;
    SET_GPR_U32(ctx, 31, 0x280CD4u);
    ctx->pc = 0x280CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280CCCu;
            // 0x280cd0: 0x24e7d110  addiu       $a3, $a3, -0x2EF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280CD4u; }
        if (ctx->pc != 0x280CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280CD4u; }
        if (ctx->pc != 0x280CD4u) { return; }
    }
    ctx->pc = 0x280CD4u;
label_280cd4:
    // 0x280cd4: 0x1000000b  b           . + 4 + (0xB << 2)
label_280cd8:
    if (ctx->pc == 0x280CD8u) {
        ctx->pc = 0x280CD8u;
            // 0x280cd8: 0x8f859820  lw          $a1, -0x67E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940704)));
        ctx->pc = 0x280CDCu;
        goto label_280cdc;
    }
    ctx->pc = 0x280CD4u;
    {
        const bool branch_taken_0x280cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280CD4u;
            // 0x280cd8: 0x8f859820  lw          $a1, -0x67E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280cd4) {
            ctx->pc = 0x280D04u;
            goto label_280d04;
        }
    }
    ctx->pc = 0x280CDCu;
label_280cdc:
    // 0x280cdc: 0x8f889820  lw          $t0, -0x67E0($gp)
    ctx->pc = 0x280cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940704)));
label_280ce0:
    // 0x280ce0: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x280ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_280ce4:
    // 0x280ce4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_280ce8:
    // 0x280ce8: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280cec:
    // 0x280cec: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x280cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_280cf0:
    // 0x280cf0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x280cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280cf4:
    // 0x280cf4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280cf8:
    // 0x280cf8: 0xc061a0c  jal         func_186830
label_280cfc:
    if (ctx->pc == 0x280CFCu) {
        ctx->pc = 0x280CFCu;
            // 0x280cfc: 0x24e7d120  addiu       $a3, $a3, -0x2EE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955296));
        ctx->pc = 0x280D00u;
        goto label_280d00;
    }
    ctx->pc = 0x280CF8u;
    SET_GPR_U32(ctx, 31, 0x280D00u);
    ctx->pc = 0x280CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280CF8u;
            // 0x280cfc: 0x24e7d120  addiu       $a3, $a3, -0x2EE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D00u; }
        if (ctx->pc != 0x280D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D00u; }
        if (ctx->pc != 0x280D00u) { return; }
    }
    ctx->pc = 0x280D00u;
label_280d00:
    // 0x280d00: 0x8f859820  lw          $a1, -0x67E0($gp)
    ctx->pc = 0x280d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940704)));
label_280d04:
    // 0x280d04: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x280d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_280d08:
    // 0x280d08: 0x24844b50  addiu       $a0, $a0, 0x4B50
    ctx->pc = 0x280d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
label_280d0c:
    // 0x280d0c: 0xc095c18  jal         func_257060
label_280d10:
    if (ctx->pc == 0x280D10u) {
        ctx->pc = 0x280D10u;
            // 0x280d10: 0x27a602f0  addiu       $a2, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->pc = 0x280D14u;
        goto label_280d14;
    }
    ctx->pc = 0x280D0Cu;
    SET_GPR_U32(ctx, 31, 0x280D14u);
    ctx->pc = 0x280D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280D0Cu;
            // 0x280d10: 0x27a602f0  addiu       $a2, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x257060u;
    if (runtime->hasFunction(0x257060u)) {
        auto targetFn = runtime->lookupFunction(0x257060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D14u; }
        if (ctx->pc != 0x280D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaPas__9CCharaPasFiPf_0x257060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D14u; }
        if (ctx->pc != 0x280D14u) { return; }
    }
    ctx->pc = 0x280D14u;
label_280d14:
    // 0x280d14: 0xc0975d8  jal         func_25D760
label_280d18:
    if (ctx->pc == 0x280D18u) {
        ctx->pc = 0x280D18u;
            // 0x280d18: 0x27a402f0  addiu       $a0, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->pc = 0x280D1Cu;
        goto label_280d1c;
    }
    ctx->pc = 0x280D14u;
    SET_GPR_U32(ctx, 31, 0x280D1Cu);
    ctx->pc = 0x280D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280D14u;
            // 0x280d18: 0x27a402f0  addiu       $a0, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D760u;
    if (runtime->hasFunction(0x25D760u)) {
        auto targetFn = runtime->lookupFunction(0x25D760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D1Cu; }
        if (ctx->pc != 0x280D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoordGyaku__FPf_0x25d760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D1Cu; }
        if (ctx->pc != 0x280D1Cu) { return; }
    }
    ctx->pc = 0x280D1Cu;
label_280d1c:
    // 0x280d1c: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x280d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_280d20:
    // 0x280d20: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280d20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_280d24:
    // 0x280d24: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280d24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280d28:
    // 0x280d28: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x280d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_280d2c:
    // 0x280d2c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x280d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280d30:
    // 0x280d30: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280d34:
    // 0x280d34: 0xc061a0c  jal         func_186830
label_280d38:
    if (ctx->pc == 0x280D38u) {
        ctx->pc = 0x280D38u;
            // 0x280d38: 0x24e7d0c8  addiu       $a3, $a3, -0x2F38 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955208));
        ctx->pc = 0x280D3Cu;
        goto label_280d3c;
    }
    ctx->pc = 0x280D34u;
    SET_GPR_U32(ctx, 31, 0x280D3Cu);
    ctx->pc = 0x280D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280D34u;
            // 0x280d38: 0x24e7d0c8  addiu       $a3, $a3, -0x2F38 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D3Cu; }
        if (ctx->pc != 0x280D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D3Cu; }
        if (ctx->pc != 0x280D3Cu) { return; }
    }
    ctx->pc = 0x280D3Cu;
label_280d3c:
    // 0x280d3c: 0xc0a24f0  jal         func_2893C0
label_280d40:
    if (ctx->pc == 0x280D40u) {
        ctx->pc = 0x280D40u;
            // 0x280d40: 0xc7ac02f0  lwc1        $f12, 0x2F0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x280D44u;
        goto label_280d44;
    }
    ctx->pc = 0x280D3Cu;
    SET_GPR_U32(ctx, 31, 0x280D44u);
    ctx->pc = 0x280D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280D3Cu;
            // 0x280d40: 0xc7ac02f0  lwc1        $f12, 0x2F0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D44u; }
        if (ctx->pc != 0x280D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D44u; }
        if (ctx->pc != 0x280D44u) { return; }
    }
    ctx->pc = 0x280D44u;
label_280d44:
    // 0x280d44: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x280d44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_280d48:
    // 0x280d48: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280d48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_280d4c:
    // 0x280d4c: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280d50:
    // 0x280d50: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x280d50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_280d54:
    // 0x280d54: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x280d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_280d58:
    // 0x280d58: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x280d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280d5c:
    // 0x280d5c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280d5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280d60:
    // 0x280d60: 0xc061a0c  jal         func_186830
label_280d64:
    if (ctx->pc == 0x280D64u) {
        ctx->pc = 0x280D64u;
            // 0x280d64: 0x24e7cfd0  addiu       $a3, $a3, -0x3030 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954960));
        ctx->pc = 0x280D68u;
        goto label_280d68;
    }
    ctx->pc = 0x280D60u;
    SET_GPR_U32(ctx, 31, 0x280D68u);
    ctx->pc = 0x280D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280D60u;
            // 0x280d64: 0x24e7cfd0  addiu       $a3, $a3, -0x3030 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D68u; }
        if (ctx->pc != 0x280D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D68u; }
        if (ctx->pc != 0x280D68u) { return; }
    }
    ctx->pc = 0x280D68u;
label_280d68:
    // 0x280d68: 0xc0a24f0  jal         func_2893C0
label_280d6c:
    if (ctx->pc == 0x280D6Cu) {
        ctx->pc = 0x280D6Cu;
            // 0x280d6c: 0xc7ac02f4  lwc1        $f12, 0x2F4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x280D70u;
        goto label_280d70;
    }
    ctx->pc = 0x280D68u;
    SET_GPR_U32(ctx, 31, 0x280D70u);
    ctx->pc = 0x280D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280D68u;
            // 0x280d6c: 0xc7ac02f4  lwc1        $f12, 0x2F4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D70u; }
        if (ctx->pc != 0x280D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D70u; }
        if (ctx->pc != 0x280D70u) { return; }
    }
    ctx->pc = 0x280D70u;
label_280d70:
    // 0x280d70: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x280d70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_280d74:
    // 0x280d74: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280d74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_280d78:
    // 0x280d78: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280d78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280d7c:
    // 0x280d7c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x280d7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_280d80:
    // 0x280d80: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x280d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_280d84:
    // 0x280d84: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x280d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280d88:
    // 0x280d88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280d8c:
    // 0x280d8c: 0xc061a0c  jal         func_186830
label_280d90:
    if (ctx->pc == 0x280D90u) {
        ctx->pc = 0x280D90u;
            // 0x280d90: 0x24e7cfe0  addiu       $a3, $a3, -0x3020 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954976));
        ctx->pc = 0x280D94u;
        goto label_280d94;
    }
    ctx->pc = 0x280D8Cu;
    SET_GPR_U32(ctx, 31, 0x280D94u);
    ctx->pc = 0x280D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280D8Cu;
            // 0x280d90: 0x24e7cfe0  addiu       $a3, $a3, -0x3020 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D94u; }
        if (ctx->pc != 0x280D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D94u; }
        if (ctx->pc != 0x280D94u) { return; }
    }
    ctx->pc = 0x280D94u;
label_280d94:
    // 0x280d94: 0xc0a24f0  jal         func_2893C0
label_280d98:
    if (ctx->pc == 0x280D98u) {
        ctx->pc = 0x280D98u;
            // 0x280d98: 0xc7ac02f8  lwc1        $f12, 0x2F8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x280D9Cu;
        goto label_280d9c;
    }
    ctx->pc = 0x280D94u;
    SET_GPR_U32(ctx, 31, 0x280D9Cu);
    ctx->pc = 0x280D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280D94u;
            // 0x280d98: 0xc7ac02f8  lwc1        $f12, 0x2F8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D9Cu; }
        if (ctx->pc != 0x280D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D9Cu; }
        if (ctx->pc != 0x280D9Cu) { return; }
    }
    ctx->pc = 0x280D9Cu;
label_280d9c:
    // 0x280d9c: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x280d9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_280da0:
    // 0x280da0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_280da4:
    // 0x280da4: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280da4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280da8:
    // 0x280da8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x280da8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_280dac:
    // 0x280dac: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x280dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_280db0:
    // 0x280db0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x280db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280db4:
    // 0x280db4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280db4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280db8:
    // 0x280db8: 0xc061a0c  jal         func_186830
label_280dbc:
    if (ctx->pc == 0x280DBCu) {
        ctx->pc = 0x280DBCu;
            // 0x280dbc: 0x24e7cff0  addiu       $a3, $a3, -0x3010 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954992));
        ctx->pc = 0x280DC0u;
        goto label_280dc0;
    }
    ctx->pc = 0x280DB8u;
    SET_GPR_U32(ctx, 31, 0x280DC0u);
    ctx->pc = 0x280DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280DB8u;
            // 0x280dbc: 0x24e7cff0  addiu       $a3, $a3, -0x3010 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280DC0u; }
        if (ctx->pc != 0x280DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280DC0u; }
        if (ctx->pc != 0x280DC0u) { return; }
    }
    ctx->pc = 0x280DC0u;
label_280dc0:
    // 0x280dc0: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x280dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_280dc4:
    // 0x280dc4: 0xc095c58  jal         func_257160
label_280dc8:
    if (ctx->pc == 0x280DC8u) {
        ctx->pc = 0x280DC8u;
            // 0x280dc8: 0x24844b50  addiu       $a0, $a0, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
        ctx->pc = 0x280DCCu;
        goto label_280dcc;
    }
    ctx->pc = 0x280DC4u;
    SET_GPR_U32(ctx, 31, 0x280DCCu);
    ctx->pc = 0x280DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280DC4u;
            // 0x280dc8: 0x24844b50  addiu       $a0, $a0, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x257160u;
    if (runtime->hasFunction(0x257160u)) {
        auto targetFn = runtime->lookupFunction(0x257160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280DCCu; }
        if (ctx->pc != 0x280DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__9CCharaPasFv_0x257160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280DCCu; }
        if (ctx->pc != 0x280DCCu) { return; }
    }
    ctx->pc = 0x280DCCu;
label_280dcc:
    // 0x280dcc: 0x8f84981c  lw          $a0, -0x67E4($gp)
    ctx->pc = 0x280dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940700)));
label_280dd0:
    // 0x280dd0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x280dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_280dd4:
    // 0x280dd4: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
label_280dd8:
    if (ctx->pc == 0x280DD8u) {
        ctx->pc = 0x280DDCu;
        goto label_280ddc;
    }
    ctx->pc = 0x280DD4u;
    {
        const bool branch_taken_0x280dd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x280dd4) {
            ctx->pc = 0x280E08u;
            goto label_280e08;
        }
    }
    ctx->pc = 0x280DDCu;
label_280ddc:
    // 0x280ddc: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x280ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_280de0:
    // 0x280de0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_280de4:
    // 0x280de4: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280de4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280de8:
    // 0x280de8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x280de8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_280dec:
    // 0x280dec: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x280decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_280df0:
    // 0x280df0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x280df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280df4:
    // 0x280df4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280df8:
    // 0x280df8: 0xc061a0c  jal         func_186830
label_280dfc:
    if (ctx->pc == 0x280DFCu) {
        ctx->pc = 0x280DFCu;
            // 0x280dfc: 0x24e7d130  addiu       $a3, $a3, -0x2ED0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955312));
        ctx->pc = 0x280E00u;
        goto label_280e00;
    }
    ctx->pc = 0x280DF8u;
    SET_GPR_U32(ctx, 31, 0x280E00u);
    ctx->pc = 0x280DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280DF8u;
            // 0x280dfc: 0x24e7d130  addiu       $a3, $a3, -0x2ED0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E00u; }
        if (ctx->pc != 0x280E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E00u; }
        if (ctx->pc != 0x280E00u) { return; }
    }
    ctx->pc = 0x280E00u;
label_280e00:
    // 0x280e00: 0x1000000a  b           . + 4 + (0xA << 2)
label_280e04:
    if (ctx->pc == 0x280E04u) {
        ctx->pc = 0x280E08u;
        goto label_280e08;
    }
    ctx->pc = 0x280E00u;
    {
        const bool branch_taken_0x280e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280e00) {
            ctx->pc = 0x280E2Cu;
            goto label_280e2c;
        }
    }
    ctx->pc = 0x280E08u;
label_280e08:
    // 0x280e08: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x280e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_280e0c:
    // 0x280e0c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_280e10:
    // 0x280e10: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280e10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280e14:
    // 0x280e14: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x280e14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_280e18:
    // 0x280e18: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x280e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_280e1c:
    // 0x280e1c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x280e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280e20:
    // 0x280e20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280e24:
    // 0x280e24: 0xc061a0c  jal         func_186830
label_280e28:
    if (ctx->pc == 0x280E28u) {
        ctx->pc = 0x280E28u;
            // 0x280e28: 0x24e7d140  addiu       $a3, $a3, -0x2EC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955328));
        ctx->pc = 0x280E2Cu;
        goto label_280e2c;
    }
    ctx->pc = 0x280E24u;
    SET_GPR_U32(ctx, 31, 0x280E2Cu);
    ctx->pc = 0x280E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280E24u;
            // 0x280e28: 0x24e7d140  addiu       $a3, $a3, -0x2EC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E2Cu; }
        if (ctx->pc != 0x280E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E2Cu; }
        if (ctx->pc != 0x280E2Cu) { return; }
    }
    ctx->pc = 0x280E2Cu;
label_280e2c:
    // 0x280e2c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x280e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_280e30:
    // 0x280e30: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x280e30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_280e34:
    // 0x280e34: 0x8c284c54  lw          $t0, 0x4C54($at)
    ctx->pc = 0x280e34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19540)));
label_280e38:
    // 0x280e38: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x280e38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_280e3c:
    // 0x280e3c: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x280e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_280e40:
    // 0x280e40: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x280e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_280e44:
    // 0x280e44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x280e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280e48:
    // 0x280e48: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x280e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_280e4c:
    // 0x280e4c: 0xc061a0c  jal         func_186830
label_280e50:
    if (ctx->pc == 0x280E50u) {
        ctx->pc = 0x280E50u;
            // 0x280e50: 0x24e7d150  addiu       $a3, $a3, -0x2EB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955344));
        ctx->pc = 0x280E54u;
        goto label_280e54;
    }
    ctx->pc = 0x280E4Cu;
    SET_GPR_U32(ctx, 31, 0x280E54u);
    ctx->pc = 0x280E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280E4Cu;
            // 0x280e50: 0x24e7d150  addiu       $a3, $a3, -0x2EB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E54u; }
        if (ctx->pc != 0x280E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E54u; }
        if (ctx->pc != 0x280E54u) { return; }
    }
    ctx->pc = 0x280E54u;
label_280e54:
    // 0x280e54: 0x10000028  b           . + 4 + (0x28 << 2)
label_280e58:
    if (ctx->pc == 0x280E58u) {
        ctx->pc = 0x280E58u;
            // 0x280e58: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x280E5Cu;
        goto label_280e5c;
    }
    ctx->pc = 0x280E54u;
    {
        const bool branch_taken_0x280e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280E54u;
            // 0x280e58: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e54) {
            ctx->pc = 0x280EF8u;
            goto label_280ef8;
        }
    }
    ctx->pc = 0x280E5Cu;
label_280e5c:
    // 0x280e5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x280e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280e60:
    // 0x280e60: 0x24844b50  addiu       $a0, $a0, 0x4B50
    ctx->pc = 0x280e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
label_280e64:
    // 0x280e64: 0xc095c18  jal         func_257060
label_280e68:
    if (ctx->pc == 0x280E68u) {
        ctx->pc = 0x280E68u;
            // 0x280e68: 0x27a60300  addiu       $a2, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->pc = 0x280E6Cu;
        goto label_280e6c;
    }
    ctx->pc = 0x280E64u;
    SET_GPR_U32(ctx, 31, 0x280E6Cu);
    ctx->pc = 0x280E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280E64u;
            // 0x280e68: 0x27a60300  addiu       $a2, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x257060u;
    if (runtime->hasFunction(0x257060u)) {
        auto targetFn = runtime->lookupFunction(0x257060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E6Cu; }
        if (ctx->pc != 0x280E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaPas__9CCharaPasFiPf_0x257060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E6Cu; }
        if (ctx->pc != 0x280E6Cu) { return; }
    }
    ctx->pc = 0x280E6Cu;
label_280e6c:
    // 0x280e6c: 0xc0975d8  jal         func_25D760
label_280e70:
    if (ctx->pc == 0x280E70u) {
        ctx->pc = 0x280E70u;
            // 0x280e70: 0x27a40300  addiu       $a0, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->pc = 0x280E74u;
        goto label_280e74;
    }
    ctx->pc = 0x280E6Cu;
    SET_GPR_U32(ctx, 31, 0x280E74u);
    ctx->pc = 0x280E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280E6Cu;
            // 0x280e70: 0x27a40300  addiu       $a0, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D760u;
    if (runtime->hasFunction(0x25D760u)) {
        auto targetFn = runtime->lookupFunction(0x25D760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E74u; }
        if (ctx->pc != 0x280E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoordGyaku__FPf_0x25d760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E74u; }
        if (ctx->pc != 0x280E74u) { return; }
    }
    ctx->pc = 0x280E74u;
label_280e74:
    // 0x280e74: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x280e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_280e78:
    // 0x280e78: 0xc041c5c  jal         func_107170
label_280e7c:
    if (ctx->pc == 0x280E7Cu) {
        ctx->pc = 0x280E7Cu;
            // 0x280e7c: 0x27a50300  addiu       $a1, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->pc = 0x280E80u;
        goto label_280e80;
    }
    ctx->pc = 0x280E78u;
    SET_GPR_U32(ctx, 31, 0x280E80u);
    ctx->pc = 0x280E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280E78u;
            // 0x280e7c: 0x27a50300  addiu       $a1, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E80u; }
        if (ctx->pc != 0x280E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E80u; }
        if (ctx->pc != 0x280E80u) { return; }
    }
    ctx->pc = 0x280E80u;
label_280e80:
    // 0x280e80: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x280e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_280e84:
    // 0x280e84: 0xc041c5c  jal         func_107170
label_280e88:
    if (ctx->pc == 0x280E88u) {
        ctx->pc = 0x280E88u;
            // 0x280e88: 0x27a50300  addiu       $a1, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->pc = 0x280E8Cu;
        goto label_280e8c;
    }
    ctx->pc = 0x280E84u;
    SET_GPR_U32(ctx, 31, 0x280E8Cu);
    ctx->pc = 0x280E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280E84u;
            // 0x280e88: 0x27a50300  addiu       $a1, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E8Cu; }
        if (ctx->pc != 0x280E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E8Cu; }
        if (ctx->pc != 0x280E8Cu) { return; }
    }
    ctx->pc = 0x280E8Cu;
label_280e8c:
    // 0x280e8c: 0xc7a50320  lwc1        $f5, 0x320($sp)
    ctx->pc = 0x280e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_280e90:
    // 0x280e90: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x280e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_280e94:
    // 0x280e94: 0xc7a40324  lwc1        $f4, 0x324($sp)
    ctx->pc = 0x280e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_280e98:
    // 0x280e98: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x280e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_280e9c:
    // 0x280e9c: 0xc7a30328  lwc1        $f3, 0x328($sp)
    ctx->pc = 0x280e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_280ea0:
    // 0x280ea0: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x280ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_280ea4:
    // 0x280ea4: 0xc7a20310  lwc1        $f2, 0x310($sp)
    ctx->pc = 0x280ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_280ea8:
    // 0x280ea8: 0x27a50320  addiu       $a1, $sp, 0x320
    ctx->pc = 0x280ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_280eac:
    // 0x280eac: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x280eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_280eb0:
    // 0x280eb0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x280eb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_280eb4:
    // 0x280eb4: 0xc7a10314  lwc1        $f1, 0x314($sp)
    ctx->pc = 0x280eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_280eb8:
    // 0x280eb8: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x280eb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_280ebc:
    // 0x280ebc: 0xc7a00318  lwc1        $f0, 0x318($sp)
    ctx->pc = 0x280ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280ec0:
    // 0x280ec0: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x280ec0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_280ec4:
    // 0x280ec4: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x280ec4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
label_280ec8:
    // 0x280ec8: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x280ec8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
label_280ecc:
    // 0x280ecc: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x280eccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
label_280ed0:
    // 0x280ed0: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x280ed0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_280ed4:
    // 0x280ed4: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x280ed4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_280ed8:
    // 0x280ed8: 0xe7a50320  swc1        $f5, 0x320($sp)
    ctx->pc = 0x280ed8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 800), bits); }
label_280edc:
    // 0x280edc: 0xe7a40324  swc1        $f4, 0x324($sp)
    ctx->pc = 0x280edcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 804), bits); }
label_280ee0:
    // 0x280ee0: 0xe7a30328  swc1        $f3, 0x328($sp)
    ctx->pc = 0x280ee0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 808), bits); }
label_280ee4:
    // 0x280ee4: 0xe7a20310  swc1        $f2, 0x310($sp)
    ctx->pc = 0x280ee4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 784), bits); }
label_280ee8:
    // 0x280ee8: 0xe7a10314  swc1        $f1, 0x314($sp)
    ctx->pc = 0x280ee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 788), bits); }
label_280eec:
    // 0x280eec: 0xc09f944  jal         func_27E510
label_280ef0:
    if (ctx->pc == 0x280EF0u) {
        ctx->pc = 0x280EF0u;
            // 0x280ef0: 0xe7a00318  swc1        $f0, 0x318($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 792), bits); }
        ctx->pc = 0x280EF4u;
        goto label_280ef4;
    }
    ctx->pc = 0x280EECu;
    SET_GPR_U32(ctx, 31, 0x280EF4u);
    ctx->pc = 0x280EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280EECu;
            // 0x280ef0: 0xe7a00318  swc1        $f0, 0x318($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 792), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x27E510u;
    if (runtime->hasFunction(0x27E510u)) {
        auto targetFn = runtime->lookupFunction(0x27E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280EF4u; }
        if (ctx->pc != 0x280EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawBox__FPfPfiii_0x27e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280EF4u; }
        if (ctx->pc != 0x280EF4u) { return; }
    }
    ctx->pc = 0x280EF4u;
label_280ef4:
    // 0x280ef4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x280ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_280ef8:
    // 0x280ef8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x280ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_280efc:
    // 0x280efc: 0x8c224c54  lw          $v0, 0x4C54($at)
    ctx->pc = 0x280efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19540)));
label_280f00:
    // 0x280f00: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x280f00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_280f04:
    // 0x280f04: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_280f08:
    if (ctx->pc == 0x280F08u) {
        ctx->pc = 0x280F08u;
            // 0x280f08: 0x3c0401f0  lui         $a0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
        ctx->pc = 0x280F0Cu;
        goto label_280f0c;
    }
    ctx->pc = 0x280F04u;
    {
        const bool branch_taken_0x280f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280F04u;
            // 0x280f08: 0x3c0401f0  lui         $a0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f04) {
            ctx->pc = 0x280E5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_280e5c;
        }
    }
    ctx->pc = 0x280F0Cu;
label_280f0c:
    // 0x280f0c: 0x0  nop
    ctx->pc = 0x280f0cu;
    // NOP
label_280f10:
    // 0x280f10: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x280f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_280f14:
    // 0x280f14: 0x8c235004  lw          $v1, 0x5004($at)
    ctx->pc = 0x280f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20484)));
label_280f18:
    // 0x280f18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x280f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_280f1c:
    // 0x280f1c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_280f20:
    if (ctx->pc == 0x280F20u) {
        ctx->pc = 0x280F20u;
            // 0x280f20: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x280F24u;
        goto label_280f24;
    }
    ctx->pc = 0x280F1Cu;
    {
        const bool branch_taken_0x280f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x280F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280F1Cu;
            // 0x280f20: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f1c) {
            ctx->pc = 0x280F2Cu;
            goto label_280f2c;
        }
    }
    ctx->pc = 0x280F24u;
label_280f24:
    // 0x280f24: 0x146200c7  bne         $v1, $v0, . + 4 + (0xC7 << 2)
label_280f28:
    if (ctx->pc == 0x280F28u) {
        ctx->pc = 0x280F28u;
            // 0x280f28: 0x27a40470  addiu       $a0, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->pc = 0x280F2Cu;
        goto label_280f2c;
    }
    ctx->pc = 0x280F24u;
    {
        const bool branch_taken_0x280f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x280F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280F24u;
            // 0x280f28: 0x27a40470  addiu       $a0, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f24) {
            ctx->pc = 0x281244u;
            goto label_281244;
        }
    }
    ctx->pc = 0x280F2Cu;
label_280f2c:
    // 0x280f2c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x280f2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_280f30:
    // 0x280f30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_280f34:
    // 0x280f34: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x280f34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_280f38:
    // 0x280f38: 0x320f809  jalr        $t9
label_280f3c:
    if (ctx->pc == 0x280F3Cu) {
        ctx->pc = 0x280F3Cu;
            // 0x280f3c: 0x27a50350  addiu       $a1, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->pc = 0x280F40u;
        goto label_280f40;
    }
    ctx->pc = 0x280F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x280F40u);
        ctx->pc = 0x280F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280F38u;
            // 0x280f3c: 0x27a50350  addiu       $a1, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x280F40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x280F40u; }
            if (ctx->pc != 0x280F40u) { return; }
        }
        }
    }
    ctx->pc = 0x280F40u;
label_280f40:
    // 0x280f40: 0x8e300070  lw          $s0, 0x70($s1)
    ctx->pc = 0x280f40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_280f44:
    // 0x280f44: 0x1200009e  beqz        $s0, . + 4 + (0x9E << 2)
label_280f48:
    if (ctx->pc == 0x280F48u) {
        ctx->pc = 0x280F48u;
            // 0x280f48: 0x27a40450  addiu       $a0, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->pc = 0x280F4Cu;
        goto label_280f4c;
    }
    ctx->pc = 0x280F44u;
    {
        const bool branch_taken_0x280f44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x280F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280F44u;
            // 0x280f48: 0x27a40450  addiu       $a0, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f44) {
            ctx->pc = 0x2811C0u;
            goto label_2811c0;
        }
    }
    ctx->pc = 0x280F4Cu;
label_280f4c:
    // 0x280f4c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x280f4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_280f50:
    // 0x280f50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x280f50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_280f54:
    // 0x280f54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x280f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280f58:
    // 0x280f58: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x280f58u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_280f5c:
    // 0x280f5c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x280f5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_280f60:
    // 0x280f60: 0x320f809  jalr        $t9
label_280f64:
    if (ctx->pc == 0x280F64u) {
        ctx->pc = 0x280F64u;
            // 0x280f64: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x280F68u;
        goto label_280f68;
    }
    ctx->pc = 0x280F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x280F68u);
        ctx->pc = 0x280F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280F60u;
            // 0x280f64: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x280F68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x280F68u; }
            if (ctx->pc != 0x280F68u) { return; }
        }
        }
    }
    ctx->pc = 0x280F68u;
label_280f68:
    // 0x280f68: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x280f68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_280f6c:
    // 0x280f6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x280f6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_280f70:
    // 0x280f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x280f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280f74:
    // 0x280f74: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x280f74u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_280f78:
    // 0x280f78: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x280f78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_280f7c:
    // 0x280f7c: 0x320f809  jalr        $t9
label_280f80:
    if (ctx->pc == 0x280F80u) {
        ctx->pc = 0x280F80u;
            // 0x280f80: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x280F84u;
        goto label_280f84;
    }
    ctx->pc = 0x280F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x280F84u);
        ctx->pc = 0x280F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280F7Cu;
            // 0x280f80: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x280F84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x280F84u; }
            if (ctx->pc != 0x280F84u) { return; }
        }
        }
    }
    ctx->pc = 0x280F84u;
label_280f84:
    // 0x280f84: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x280f84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_280f88:
    // 0x280f88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_280f8c:
    // 0x280f8c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x280f8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_280f90:
    // 0x280f90: 0x320f809  jalr        $t9
label_280f94:
    if (ctx->pc == 0x280F94u) {
        ctx->pc = 0x280F94u;
            // 0x280f94: 0x27a50360  addiu       $a1, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->pc = 0x280F98u;
        goto label_280f98;
    }
    ctx->pc = 0x280F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x280F98u);
        ctx->pc = 0x280F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280F90u;
            // 0x280f94: 0x27a50360  addiu       $a1, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x280F98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x280F98u; }
            if (ctx->pc != 0x280F98u) { return; }
        }
        }
    }
    ctx->pc = 0x280F98u;
label_280f98:
    // 0x280f98: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x280f98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_280f9c:
    // 0x280f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x280f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280fa0:
    // 0x280fa0: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x280fa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_280fa4:
    // 0x280fa4: 0x320f809  jalr        $t9
label_280fa8:
    if (ctx->pc == 0x280FA8u) {
        ctx->pc = 0x280FA8u;
            // 0x280fa8: 0x27a50330  addiu       $a1, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->pc = 0x280FACu;
        goto label_280fac;
    }
    ctx->pc = 0x280FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x280FACu);
        ctx->pc = 0x280FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280FA4u;
            // 0x280fa8: 0x27a50330  addiu       $a1, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x280FACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x280FACu; }
            if (ctx->pc != 0x280FACu) { return; }
        }
        }
    }
    ctx->pc = 0x280FACu;
label_280fac:
    // 0x280fac: 0x27a20340  addiu       $v0, $sp, 0x340
    ctx->pc = 0x280facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_280fb0:
    // 0x280fb0: 0x27a503f0  addiu       $a1, $sp, 0x3F0
    ctx->pc = 0x280fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
label_280fb4:
    // 0x280fb4: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x280fb4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_280fb8:
    // 0x280fb8: 0x27a60330  addiu       $a2, $sp, 0x330
    ctx->pc = 0x280fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
label_280fbc:
    // 0x280fbc: 0x27a30400  addiu       $v1, $sp, 0x400
    ctx->pc = 0x280fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_280fc0:
    // 0x280fc0: 0x27b70380  addiu       $s7, $sp, 0x380
    ctx->pc = 0x280fc0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_280fc4:
    // 0x280fc4: 0x27b60390  addiu       $s6, $sp, 0x390
    ctx->pc = 0x280fc4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_280fc8:
    // 0x280fc8: 0x27b103a0  addiu       $s1, $sp, 0x3A0
    ctx->pc = 0x280fc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_280fcc:
    // 0x280fcc: 0x27b203b0  addiu       $s2, $sp, 0x3B0
    ctx->pc = 0x280fccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_280fd0:
    // 0x280fd0: 0x27b303c0  addiu       $s3, $sp, 0x3C0
    ctx->pc = 0x280fd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_280fd4:
    // 0x280fd4: 0x27b403d0  addiu       $s4, $sp, 0x3D0
    ctx->pc = 0x280fd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_280fd8:
    // 0x280fd8: 0x27b503e0  addiu       $s5, $sp, 0x3E0
    ctx->pc = 0x280fd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_280fdc:
    // 0x280fdc: 0x27a40410  addiu       $a0, $sp, 0x410
    ctx->pc = 0x280fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_280fe0:
    // 0x280fe0: 0x7ca70000  sq          $a3, 0x0($a1)
    ctx->pc = 0x280fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 7));
label_280fe4:
    // 0x280fe4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x280fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_280fe8:
    // 0x280fe8: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x280fe8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_280fec:
    // 0x280fec: 0x27a50350  addiu       $a1, $sp, 0x350
    ctx->pc = 0x280fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
label_280ff0:
    // 0x280ff0: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x280ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
label_280ff4:
    // 0x280ff4: 0xc7a203f0  lwc1        $f2, 0x3F0($sp)
    ctx->pc = 0x280ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_280ff8:
    // 0x280ff8: 0xafa2037c  sw          $v0, 0x37C($sp)
    ctx->pc = 0x280ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 892), GPR_U32(ctx, 2));
label_280ffc:
    // 0x280ffc: 0xc7a003f4  lwc1        $f0, 0x3F4($sp)
    ctx->pc = 0x280ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_281000:
    // 0x281000: 0xafa2038c  sw          $v0, 0x38C($sp)
    ctx->pc = 0x281000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 908), GPR_U32(ctx, 2));
label_281004:
    // 0x281004: 0xc7a103f8  lwc1        $f1, 0x3F8($sp)
    ctx->pc = 0x281004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_281008:
    // 0x281008: 0xc7a30400  lwc1        $f3, 0x400($sp)
    ctx->pc = 0x281008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28100c:
    // 0x28100c: 0xe7a20370  swc1        $f2, 0x370($sp)
    ctx->pc = 0x28100cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 880), bits); }
label_281010:
    // 0x281010: 0xe7a00374  swc1        $f0, 0x374($sp)
    ctx->pc = 0x281010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 884), bits); }
label_281014:
    // 0x281014: 0xe7a10378  swc1        $f1, 0x378($sp)
    ctx->pc = 0x281014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 888), bits); }
label_281018:
    // 0x281018: 0xe6e30000  swc1        $f3, 0x0($s7)
    ctx->pc = 0x281018u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_28101c:
    // 0x28101c: 0xe7a00384  swc1        $f0, 0x384($sp)
    ctx->pc = 0x28101cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 900), bits); }
label_281020:
    // 0x281020: 0xafa2039c  sw          $v0, 0x39C($sp)
    ctx->pc = 0x281020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 924), GPR_U32(ctx, 2));
label_281024:
    // 0x281024: 0xe7a10388  swc1        $f1, 0x388($sp)
    ctx->pc = 0x281024u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 904), bits); }
label_281028:
    // 0x281028: 0xe6c20000  swc1        $f2, 0x0($s6)
    ctx->pc = 0x281028u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_28102c:
    // 0x28102c: 0xc7a40404  lwc1        $f4, 0x404($sp)
    ctx->pc = 0x28102cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_281030:
    // 0x281030: 0xafa203ac  sw          $v0, 0x3AC($sp)
    ctx->pc = 0x281030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 940), GPR_U32(ctx, 2));
label_281034:
    // 0x281034: 0xe7a10398  swc1        $f1, 0x398($sp)
    ctx->pc = 0x281034u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 920), bits); }
label_281038:
    // 0x281038: 0xe7a40394  swc1        $f4, 0x394($sp)
    ctx->pc = 0x281038u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 916), bits); }
label_28103c:
    // 0x28103c: 0xe6230000  swc1        $f3, 0x0($s1)
    ctx->pc = 0x28103cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_281040:
    // 0x281040: 0xe7a103a8  swc1        $f1, 0x3A8($sp)
    ctx->pc = 0x281040u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 936), bits); }
label_281044:
    // 0x281044: 0xafa203bc  sw          $v0, 0x3BC($sp)
    ctx->pc = 0x281044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 956), GPR_U32(ctx, 2));
label_281048:
    // 0x281048: 0xe7a403a4  swc1        $f4, 0x3A4($sp)
    ctx->pc = 0x281048u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 932), bits); }
label_28104c:
    // 0x28104c: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x28104cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_281050:
    // 0x281050: 0xc7a10408  lwc1        $f1, 0x408($sp)
    ctx->pc = 0x281050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_281054:
    // 0x281054: 0xafa203cc  sw          $v0, 0x3CC($sp)
    ctx->pc = 0x281054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 972), GPR_U32(ctx, 2));
label_281058:
    // 0x281058: 0xe7a003b4  swc1        $f0, 0x3B4($sp)
    ctx->pc = 0x281058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 948), bits); }
label_28105c:
    // 0x28105c: 0xe7a103b8  swc1        $f1, 0x3B8($sp)
    ctx->pc = 0x28105cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 952), bits); }
label_281060:
    // 0x281060: 0xe6630000  swc1        $f3, 0x0($s3)
    ctx->pc = 0x281060u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_281064:
    // 0x281064: 0xe7a003c4  swc1        $f0, 0x3C4($sp)
    ctx->pc = 0x281064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 964), bits); }
label_281068:
    // 0x281068: 0xafa203dc  sw          $v0, 0x3DC($sp)
    ctx->pc = 0x281068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 988), GPR_U32(ctx, 2));
label_28106c:
    // 0x28106c: 0xe7a103c8  swc1        $f1, 0x3C8($sp)
    ctx->pc = 0x28106cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 968), bits); }
label_281070:
    // 0x281070: 0xe6820000  swc1        $f2, 0x0($s4)
    ctx->pc = 0x281070u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_281074:
    // 0x281074: 0xafa203ec  sw          $v0, 0x3EC($sp)
    ctx->pc = 0x281074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1004), GPR_U32(ctx, 2));
label_281078:
    // 0x281078: 0xe7a403d4  swc1        $f4, 0x3D4($sp)
    ctx->pc = 0x281078u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 980), bits); }
label_28107c:
    // 0x28107c: 0xe7a103d8  swc1        $f1, 0x3D8($sp)
    ctx->pc = 0x28107cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 984), bits); }
label_281080:
    // 0x281080: 0xe6a30000  swc1        $f3, 0x0($s5)
    ctx->pc = 0x281080u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_281084:
    // 0x281084: 0xe7a403e4  swc1        $f4, 0x3E4($sp)
    ctx->pc = 0x281084u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 996), bits); }
label_281088:
    // 0x281088: 0xc04c13c  jal         func_1304F0
label_28108c:
    if (ctx->pc == 0x28108Cu) {
        ctx->pc = 0x28108Cu;
            // 0x28108c: 0xe7a103e8  swc1        $f1, 0x3E8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1000), bits); }
        ctx->pc = 0x281090u;
        goto label_281090;
    }
    ctx->pc = 0x281088u;
    SET_GPR_U32(ctx, 31, 0x281090u);
    ctx->pc = 0x28108Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281088u;
            // 0x28108c: 0xe7a103e8  swc1        $f1, 0x3E8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1000), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1304F0u;
    if (runtime->hasFunction(0x1304F0u)) {
        auto targetFn = runtime->lookupFunction(0x1304F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281090u; }
        if (ctx->pc != 0x281090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRotMatrixXYZ__FPA4_fPf_0x1304f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281090u; }
        if (ctx->pc != 0x281090u) { return; }
    }
    ctx->pc = 0x281090u;
label_281090:
    // 0x281090: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x281090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_281094:
    // 0x281094: 0x27a60410  addiu       $a2, $sp, 0x410
    ctx->pc = 0x281094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_281098:
    // 0x281098: 0xc09fa18  jal         func_27E860
label_28109c:
    if (ctx->pc == 0x28109Cu) {
        ctx->pc = 0x28109Cu;
            // 0x28109c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2810A0u;
        goto label_2810a0;
    }
    ctx->pc = 0x281098u;
    SET_GPR_U32(ctx, 31, 0x2810A0u);
    ctx->pc = 0x28109Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281098u;
            // 0x28109c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27E860u;
    if (runtime->hasFunction(0x27E860u)) {
        auto targetFn = runtime->lookupFunction(0x27E860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2810A0u; }
        if (ctx->pc != 0x2810A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        VectMatMul__FPfPfPA4_f_0x27e860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2810A0u; }
        if (ctx->pc != 0x2810A0u) { return; }
    }
    ctx->pc = 0x2810A0u;
label_2810a0:
    // 0x2810a0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2810a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2810a4:
    // 0x2810a4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2810a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2810a8:
    // 0x2810a8: 0xc09fa18  jal         func_27E860
label_2810ac:
    if (ctx->pc == 0x2810ACu) {
        ctx->pc = 0x2810ACu;
            // 0x2810ac: 0x27a60410  addiu       $a2, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->pc = 0x2810B0u;
        goto label_2810b0;
    }
    ctx->pc = 0x2810A8u;
    SET_GPR_U32(ctx, 31, 0x2810B0u);
    ctx->pc = 0x2810ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2810A8u;
            // 0x2810ac: 0x27a60410  addiu       $a2, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27E860u;
    if (runtime->hasFunction(0x27E860u)) {
        auto targetFn = runtime->lookupFunction(0x27E860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2810B0u; }
        if (ctx->pc != 0x2810B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        VectMatMul__FPfPfPA4_f_0x27e860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2810B0u; }
        if (ctx->pc != 0x2810B0u) { return; }
    }
    ctx->pc = 0x2810B0u;
label_2810b0:
    // 0x2810b0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2810b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2810b4:
    // 0x2810b4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2810b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2810b8:
    // 0x2810b8: 0xc09fa18  jal         func_27E860
label_2810bc:
    if (ctx->pc == 0x2810BCu) {
        ctx->pc = 0x2810BCu;
            // 0x2810bc: 0x27a60410  addiu       $a2, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->pc = 0x2810C0u;
        goto label_2810c0;
    }
    ctx->pc = 0x2810B8u;
    SET_GPR_U32(ctx, 31, 0x2810C0u);
    ctx->pc = 0x2810BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2810B8u;
            // 0x2810bc: 0x27a60410  addiu       $a2, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27E860u;
    if (runtime->hasFunction(0x27E860u)) {
        auto targetFn = runtime->lookupFunction(0x27E860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2810C0u; }
        if (ctx->pc != 0x2810C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        VectMatMul__FPfPfPA4_f_0x27e860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2810C0u; }
        if (ctx->pc != 0x2810C0u) { return; }
    }
    ctx->pc = 0x2810C0u;
label_2810c0:
    // 0x2810c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2810c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2810c4:
    // 0x2810c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2810c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2810c8:
    // 0x2810c8: 0xc09fa18  jal         func_27E860
label_2810cc:
    if (ctx->pc == 0x2810CCu) {
        ctx->pc = 0x2810CCu;
            // 0x2810cc: 0x27a60410  addiu       $a2, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->pc = 0x2810D0u;
        goto label_2810d0;
    }
    ctx->pc = 0x2810C8u;
    SET_GPR_U32(ctx, 31, 0x2810D0u);
    ctx->pc = 0x2810CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2810C8u;
            // 0x2810cc: 0x27a60410  addiu       $a2, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27E860u;
    if (runtime->hasFunction(0x27E860u)) {
        auto targetFn = runtime->lookupFunction(0x27E860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2810D0u; }
        if (ctx->pc != 0x2810D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        VectMatMul__FPfPfPA4_f_0x27e860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2810D0u; }
        if (ctx->pc != 0x2810D0u) { return; }
    }
    ctx->pc = 0x2810D0u;
label_2810d0:
    // 0x2810d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2810d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2810d4:
    // 0x2810d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2810d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2810d8:
    // 0x2810d8: 0xc09fa18  jal         func_27E860
label_2810dc:
    if (ctx->pc == 0x2810DCu) {
        ctx->pc = 0x2810DCu;
            // 0x2810dc: 0x27a60410  addiu       $a2, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->pc = 0x2810E0u;
        goto label_2810e0;
    }
    ctx->pc = 0x2810D8u;
    SET_GPR_U32(ctx, 31, 0x2810E0u);
    ctx->pc = 0x2810DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2810D8u;
            // 0x2810dc: 0x27a60410  addiu       $a2, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27E860u;
    if (runtime->hasFunction(0x27E860u)) {
        auto targetFn = runtime->lookupFunction(0x27E860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2810E0u; }
        if (ctx->pc != 0x2810E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        VectMatMul__FPfPfPA4_f_0x27e860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2810E0u; }
        if (ctx->pc != 0x2810E0u) { return; }
    }
    ctx->pc = 0x2810E0u;
label_2810e0:
    // 0x2810e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2810e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2810e4:
    // 0x2810e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2810e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2810e8:
    // 0x2810e8: 0xc09fa18  jal         func_27E860
label_2810ec:
    if (ctx->pc == 0x2810ECu) {
        ctx->pc = 0x2810ECu;
            // 0x2810ec: 0x27a60410  addiu       $a2, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->pc = 0x2810F0u;
        goto label_2810f0;
    }
    ctx->pc = 0x2810E8u;
    SET_GPR_U32(ctx, 31, 0x2810F0u);
    ctx->pc = 0x2810ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2810E8u;
            // 0x2810ec: 0x27a60410  addiu       $a2, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27E860u;
    if (runtime->hasFunction(0x27E860u)) {
        auto targetFn = runtime->lookupFunction(0x27E860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2810F0u; }
        if (ctx->pc != 0x2810F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        VectMatMul__FPfPfPA4_f_0x27e860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2810F0u; }
        if (ctx->pc != 0x2810F0u) { return; }
    }
    ctx->pc = 0x2810F0u;
label_2810f0:
    // 0x2810f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2810f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2810f4:
    // 0x2810f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2810f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2810f8:
    // 0x2810f8: 0xc09fa18  jal         func_27E860
label_2810fc:
    if (ctx->pc == 0x2810FCu) {
        ctx->pc = 0x2810FCu;
            // 0x2810fc: 0x27a60410  addiu       $a2, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->pc = 0x281100u;
        goto label_281100;
    }
    ctx->pc = 0x2810F8u;
    SET_GPR_U32(ctx, 31, 0x281100u);
    ctx->pc = 0x2810FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2810F8u;
            // 0x2810fc: 0x27a60410  addiu       $a2, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27E860u;
    if (runtime->hasFunction(0x27E860u)) {
        auto targetFn = runtime->lookupFunction(0x27E860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281100u; }
        if (ctx->pc != 0x281100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        VectMatMul__FPfPfPA4_f_0x27e860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281100u; }
        if (ctx->pc != 0x281100u) { return; }
    }
    ctx->pc = 0x281100u;
label_281100:
    // 0x281100: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x281100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_281104:
    // 0x281104: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x281104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_281108:
    // 0x281108: 0xc09fa18  jal         func_27E860
label_28110c:
    if (ctx->pc == 0x28110Cu) {
        ctx->pc = 0x28110Cu;
            // 0x28110c: 0x27a60410  addiu       $a2, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->pc = 0x281110u;
        goto label_281110;
    }
    ctx->pc = 0x281108u;
    SET_GPR_U32(ctx, 31, 0x281110u);
    ctx->pc = 0x28110Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281108u;
            // 0x28110c: 0x27a60410  addiu       $a2, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27E860u;
    if (runtime->hasFunction(0x27E860u)) {
        auto targetFn = runtime->lookupFunction(0x27E860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281110u; }
        if (ctx->pc != 0x281110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        VectMatMul__FPfPfPA4_f_0x27e860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281110u; }
        if (ctx->pc != 0x281110u) { return; }
    }
    ctx->pc = 0x281110u;
label_281110:
    // 0x281110: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x281110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_281114:
    // 0x281114: 0x27a60360  addiu       $a2, $sp, 0x360
    ctx->pc = 0x281114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
label_281118:
    // 0x281118: 0xc041c38  jal         func_1070E0
label_28111c:
    if (ctx->pc == 0x28111Cu) {
        ctx->pc = 0x28111Cu;
            // 0x28111c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x281120u;
        goto label_281120;
    }
    ctx->pc = 0x281118u;
    SET_GPR_U32(ctx, 31, 0x281120u);
    ctx->pc = 0x28111Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281118u;
            // 0x28111c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281120u; }
        if (ctx->pc != 0x281120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281120u; }
        if (ctx->pc != 0x281120u) { return; }
    }
    ctx->pc = 0x281120u;
label_281120:
    // 0x281120: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x281120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_281124:
    // 0x281124: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x281124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_281128:
    // 0x281128: 0xc041c38  jal         func_1070E0
label_28112c:
    if (ctx->pc == 0x28112Cu) {
        ctx->pc = 0x28112Cu;
            // 0x28112c: 0x27a60360  addiu       $a2, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->pc = 0x281130u;
        goto label_281130;
    }
    ctx->pc = 0x281128u;
    SET_GPR_U32(ctx, 31, 0x281130u);
    ctx->pc = 0x28112Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281128u;
            // 0x28112c: 0x27a60360  addiu       $a2, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281130u; }
        if (ctx->pc != 0x281130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281130u; }
        if (ctx->pc != 0x281130u) { return; }
    }
    ctx->pc = 0x281130u;
label_281130:
    // 0x281130: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x281130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_281134:
    // 0x281134: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x281134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_281138:
    // 0x281138: 0xc041c38  jal         func_1070E0
label_28113c:
    if (ctx->pc == 0x28113Cu) {
        ctx->pc = 0x28113Cu;
            // 0x28113c: 0x27a60360  addiu       $a2, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->pc = 0x281140u;
        goto label_281140;
    }
    ctx->pc = 0x281138u;
    SET_GPR_U32(ctx, 31, 0x281140u);
    ctx->pc = 0x28113Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281138u;
            // 0x28113c: 0x27a60360  addiu       $a2, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281140u; }
        if (ctx->pc != 0x281140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281140u; }
        if (ctx->pc != 0x281140u) { return; }
    }
    ctx->pc = 0x281140u;
label_281140:
    // 0x281140: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x281140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_281144:
    // 0x281144: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x281144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_281148:
    // 0x281148: 0xc041c38  jal         func_1070E0
label_28114c:
    if (ctx->pc == 0x28114Cu) {
        ctx->pc = 0x28114Cu;
            // 0x28114c: 0x27a60360  addiu       $a2, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->pc = 0x281150u;
        goto label_281150;
    }
    ctx->pc = 0x281148u;
    SET_GPR_U32(ctx, 31, 0x281150u);
    ctx->pc = 0x28114Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281148u;
            // 0x28114c: 0x27a60360  addiu       $a2, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281150u; }
        if (ctx->pc != 0x281150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281150u; }
        if (ctx->pc != 0x281150u) { return; }
    }
    ctx->pc = 0x281150u;
label_281150:
    // 0x281150: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x281150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_281154:
    // 0x281154: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x281154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_281158:
    // 0x281158: 0xc041c38  jal         func_1070E0
label_28115c:
    if (ctx->pc == 0x28115Cu) {
        ctx->pc = 0x28115Cu;
            // 0x28115c: 0x27a60360  addiu       $a2, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->pc = 0x281160u;
        goto label_281160;
    }
    ctx->pc = 0x281158u;
    SET_GPR_U32(ctx, 31, 0x281160u);
    ctx->pc = 0x28115Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281158u;
            // 0x28115c: 0x27a60360  addiu       $a2, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281160u; }
        if (ctx->pc != 0x281160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281160u; }
        if (ctx->pc != 0x281160u) { return; }
    }
    ctx->pc = 0x281160u;
label_281160:
    // 0x281160: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x281160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_281164:
    // 0x281164: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x281164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_281168:
    // 0x281168: 0xc041c38  jal         func_1070E0
label_28116c:
    if (ctx->pc == 0x28116Cu) {
        ctx->pc = 0x28116Cu;
            // 0x28116c: 0x27a60360  addiu       $a2, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->pc = 0x281170u;
        goto label_281170;
    }
    ctx->pc = 0x281168u;
    SET_GPR_U32(ctx, 31, 0x281170u);
    ctx->pc = 0x28116Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281168u;
            // 0x28116c: 0x27a60360  addiu       $a2, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281170u; }
        if (ctx->pc != 0x281170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281170u; }
        if (ctx->pc != 0x281170u) { return; }
    }
    ctx->pc = 0x281170u;
label_281170:
    // 0x281170: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x281170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_281174:
    // 0x281174: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x281174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_281178:
    // 0x281178: 0xc041c38  jal         func_1070E0
label_28117c:
    if (ctx->pc == 0x28117Cu) {
        ctx->pc = 0x28117Cu;
            // 0x28117c: 0x27a60360  addiu       $a2, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->pc = 0x281180u;
        goto label_281180;
    }
    ctx->pc = 0x281178u;
    SET_GPR_U32(ctx, 31, 0x281180u);
    ctx->pc = 0x28117Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281178u;
            // 0x28117c: 0x27a60360  addiu       $a2, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281180u; }
        if (ctx->pc != 0x281180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281180u; }
        if (ctx->pc != 0x281180u) { return; }
    }
    ctx->pc = 0x281180u;
label_281180:
    // 0x281180: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x281180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_281184:
    // 0x281184: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x281184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_281188:
    // 0x281188: 0xc041c38  jal         func_1070E0
label_28118c:
    if (ctx->pc == 0x28118Cu) {
        ctx->pc = 0x28118Cu;
            // 0x28118c: 0x27a60360  addiu       $a2, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->pc = 0x281190u;
        goto label_281190;
    }
    ctx->pc = 0x281188u;
    SET_GPR_U32(ctx, 31, 0x281190u);
    ctx->pc = 0x28118Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281188u;
            // 0x28118c: 0x27a60360  addiu       $a2, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281190u; }
        if (ctx->pc != 0x281190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281190u; }
        if (ctx->pc != 0x281190u) { return; }
    }
    ctx->pc = 0x281190u;
label_281190:
    // 0x281190: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x281190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_281194:
    // 0x281194: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x281194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_281198:
    // 0x281198: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28119c:
    // 0x28119c: 0xc09f97c  jal         func_27E5F0
label_2811a0:
    if (ctx->pc == 0x2811A0u) {
        ctx->pc = 0x2811A0u;
            // 0x2811a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2811A4u;
        goto label_2811a4;
    }
    ctx->pc = 0x28119Cu;
    SET_GPR_U32(ctx, 31, 0x2811A4u);
    ctx->pc = 0x2811A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28119Cu;
            // 0x2811a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27E5F0u;
    if (runtime->hasFunction(0x27E5F0u)) {
        auto targetFn = runtime->lookupFunction(0x27E5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2811A4u; }
        if (ctx->pc != 0x2811A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawBox__FPA4_fiii_0x27e5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2811A4u; }
        if (ctx->pc != 0x2811A4u) { return; }
    }
    ctx->pc = 0x2811A4u;
label_2811a4:
    // 0x2811a4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2811a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2811a8:
    // 0x2811a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2811a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2811ac:
    // 0x2811ac: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2811acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2811b0:
    // 0x2811b0: 0x320f809  jalr        $t9
label_2811b4:
    if (ctx->pc == 0x2811B4u) {
        ctx->pc = 0x2811B4u;
            // 0x2811b4: 0x27a50350  addiu       $a1, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->pc = 0x2811B8u;
        goto label_2811b8;
    }
    ctx->pc = 0x2811B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2811B8u);
        ctx->pc = 0x2811B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2811B0u;
            // 0x2811b4: 0x27a50350  addiu       $a1, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2811B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2811B8u; }
            if (ctx->pc != 0x2811B8u) { return; }
        }
        }
    }
    ctx->pc = 0x2811B8u;
label_2811b8:
    // 0x2811b8: 0x10000042  b           . + 4 + (0x42 << 2)
label_2811bc:
    if (ctx->pc == 0x2811BCu) {
        ctx->pc = 0x2811BCu;
            // 0x2811bc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x2811C0u;
        goto label_2811c0;
    }
    ctx->pc = 0x2811B8u;
    {
        const bool branch_taken_0x2811b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2811BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2811B8u;
            // 0x2811bc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2811b8) {
            ctx->pc = 0x2812C4u;
            goto label_2812c4;
        }
    }
    ctx->pc = 0x2811C0u;
label_2811c0:
    // 0x2811c0: 0xc041c5c  jal         func_107170
label_2811c4:
    if (ctx->pc == 0x2811C4u) {
        ctx->pc = 0x2811C4u;
            // 0x2811c4: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x2811C8u;
        goto label_2811c8;
    }
    ctx->pc = 0x2811C0u;
    SET_GPR_U32(ctx, 31, 0x2811C8u);
    ctx->pc = 0x2811C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2811C0u;
            // 0x2811c4: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2811C8u; }
        if (ctx->pc != 0x2811C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2811C8u; }
        if (ctx->pc != 0x2811C8u) { return; }
    }
    ctx->pc = 0x2811C8u;
label_2811c8:
    // 0x2811c8: 0x27a40460  addiu       $a0, $sp, 0x460
    ctx->pc = 0x2811c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_2811cc:
    // 0x2811cc: 0xc041c5c  jal         func_107170
label_2811d0:
    if (ctx->pc == 0x2811D0u) {
        ctx->pc = 0x2811D0u;
            // 0x2811d0: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x2811D4u;
        goto label_2811d4;
    }
    ctx->pc = 0x2811CCu;
    SET_GPR_U32(ctx, 31, 0x2811D4u);
    ctx->pc = 0x2811D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2811CCu;
            // 0x2811d0: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2811D4u; }
        if (ctx->pc != 0x2811D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2811D4u; }
        if (ctx->pc != 0x2811D4u) { return; }
    }
    ctx->pc = 0x2811D4u;
label_2811d4:
    // 0x2811d4: 0xc7a50460  lwc1        $f5, 0x460($sp)
    ctx->pc = 0x2811d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2811d8:
    // 0x2811d8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2811d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2811dc:
    // 0x2811dc: 0xc7a40464  lwc1        $f4, 0x464($sp)
    ctx->pc = 0x2811dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2811e0:
    // 0x2811e0: 0x27a40450  addiu       $a0, $sp, 0x450
    ctx->pc = 0x2811e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_2811e4:
    // 0x2811e4: 0xc7a30468  lwc1        $f3, 0x468($sp)
    ctx->pc = 0x2811e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2811e8:
    // 0x2811e8: 0x27a50460  addiu       $a1, $sp, 0x460
    ctx->pc = 0x2811e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_2811ec:
    // 0x2811ec: 0xc7a20450  lwc1        $f2, 0x450($sp)
    ctx->pc = 0x2811ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2811f0:
    // 0x2811f0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2811f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2811f4:
    // 0x2811f4: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x2811f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_2811f8:
    // 0x2811f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2811f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2811fc:
    // 0x2811fc: 0xc7a10454  lwc1        $f1, 0x454($sp)
    ctx->pc = 0x2811fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_281200:
    // 0x281200: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x281200u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281204:
    // 0x281204: 0xc7a00458  lwc1        $f0, 0x458($sp)
    ctx->pc = 0x281204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_281208:
    // 0x281208: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x281208u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_28120c:
    // 0x28120c: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x28120cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
label_281210:
    // 0x281210: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x281210u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
label_281214:
    // 0x281214: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x281214u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
label_281218:
    // 0x281218: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x281218u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_28121c:
    // 0x28121c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x28121cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_281220:
    // 0x281220: 0xe7a50460  swc1        $f5, 0x460($sp)
    ctx->pc = 0x281220u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
label_281224:
    // 0x281224: 0xe7a40464  swc1        $f4, 0x464($sp)
    ctx->pc = 0x281224u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1124), bits); }
label_281228:
    // 0x281228: 0xe7a30468  swc1        $f3, 0x468($sp)
    ctx->pc = 0x281228u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1128), bits); }
label_28122c:
    // 0x28122c: 0xe7a20450  swc1        $f2, 0x450($sp)
    ctx->pc = 0x28122cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1104), bits); }
label_281230:
    // 0x281230: 0xe7a10454  swc1        $f1, 0x454($sp)
    ctx->pc = 0x281230u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1108), bits); }
label_281234:
    // 0x281234: 0xc09f944  jal         func_27E510
label_281238:
    if (ctx->pc == 0x281238u) {
        ctx->pc = 0x281238u;
            // 0x281238: 0xe7a00458  swc1        $f0, 0x458($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1112), bits); }
        ctx->pc = 0x28123Cu;
        goto label_28123c;
    }
    ctx->pc = 0x281234u;
    SET_GPR_U32(ctx, 31, 0x28123Cu);
    ctx->pc = 0x281238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281234u;
            // 0x281238: 0xe7a00458  swc1        $f0, 0x458($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1112), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x27E510u;
    if (runtime->hasFunction(0x27E510u)) {
        auto targetFn = runtime->lookupFunction(0x27E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28123Cu; }
        if (ctx->pc != 0x28123Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawBox__FPfPfiii_0x27e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28123Cu; }
        if (ctx->pc != 0x28123Cu) { return; }
    }
    ctx->pc = 0x28123Cu;
label_28123c:
    // 0x28123c: 0x10000020  b           . + 4 + (0x20 << 2)
label_281240:
    if (ctx->pc == 0x281240u) {
        ctx->pc = 0x281244u;
        goto label_281244;
    }
    ctx->pc = 0x28123Cu;
    {
        const bool branch_taken_0x28123c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28123c) {
            ctx->pc = 0x2812C0u;
            goto label_2812c0;
        }
    }
    ctx->pc = 0x281244u;
label_281244:
    // 0x281244: 0xc041c5c  jal         func_107170
label_281248:
    if (ctx->pc == 0x281248u) {
        ctx->pc = 0x281248u;
            // 0x281248: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x28124Cu;
        goto label_28124c;
    }
    ctx->pc = 0x281244u;
    SET_GPR_U32(ctx, 31, 0x28124Cu);
    ctx->pc = 0x281248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281244u;
            // 0x281248: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28124Cu; }
        if (ctx->pc != 0x28124Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28124Cu; }
        if (ctx->pc != 0x28124Cu) { return; }
    }
    ctx->pc = 0x28124Cu;
label_28124c:
    // 0x28124c: 0x27a40480  addiu       $a0, $sp, 0x480
    ctx->pc = 0x28124cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_281250:
    // 0x281250: 0xc041c5c  jal         func_107170
label_281254:
    if (ctx->pc == 0x281254u) {
        ctx->pc = 0x281254u;
            // 0x281254: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x281258u;
        goto label_281258;
    }
    ctx->pc = 0x281250u;
    SET_GPR_U32(ctx, 31, 0x281258u);
    ctx->pc = 0x281254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281250u;
            // 0x281254: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281258u; }
        if (ctx->pc != 0x281258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281258u; }
        if (ctx->pc != 0x281258u) { return; }
    }
    ctx->pc = 0x281258u;
label_281258:
    // 0x281258: 0xc7a50480  lwc1        $f5, 0x480($sp)
    ctx->pc = 0x281258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_28125c:
    // 0x28125c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x28125cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_281260:
    // 0x281260: 0xc7a40484  lwc1        $f4, 0x484($sp)
    ctx->pc = 0x281260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_281264:
    // 0x281264: 0x27a40470  addiu       $a0, $sp, 0x470
    ctx->pc = 0x281264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_281268:
    // 0x281268: 0xc7a30488  lwc1        $f3, 0x488($sp)
    ctx->pc = 0x281268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28126c:
    // 0x28126c: 0x27a50480  addiu       $a1, $sp, 0x480
    ctx->pc = 0x28126cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_281270:
    // 0x281270: 0xc7a20470  lwc1        $f2, 0x470($sp)
    ctx->pc = 0x281270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_281274:
    // 0x281274: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x281274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_281278:
    // 0x281278: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x281278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_28127c:
    // 0x28127c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28127cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281280:
    // 0x281280: 0xc7a10474  lwc1        $f1, 0x474($sp)
    ctx->pc = 0x281280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_281284:
    // 0x281284: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x281284u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281288:
    // 0x281288: 0xc7a00478  lwc1        $f0, 0x478($sp)
    ctx->pc = 0x281288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28128c:
    // 0x28128c: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x28128cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_281290:
    // 0x281290: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x281290u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
label_281294:
    // 0x281294: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x281294u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
label_281298:
    // 0x281298: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x281298u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
label_28129c:
    // 0x28129c: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x28129cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_2812a0:
    // 0x2812a0: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2812a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_2812a4:
    // 0x2812a4: 0xe7a50480  swc1        $f5, 0x480($sp)
    ctx->pc = 0x2812a4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1152), bits); }
label_2812a8:
    // 0x2812a8: 0xe7a40484  swc1        $f4, 0x484($sp)
    ctx->pc = 0x2812a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1156), bits); }
label_2812ac:
    // 0x2812ac: 0xe7a30488  swc1        $f3, 0x488($sp)
    ctx->pc = 0x2812acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1160), bits); }
label_2812b0:
    // 0x2812b0: 0xe7a20470  swc1        $f2, 0x470($sp)
    ctx->pc = 0x2812b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
label_2812b4:
    // 0x2812b4: 0xe7a10474  swc1        $f1, 0x474($sp)
    ctx->pc = 0x2812b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1140), bits); }
label_2812b8:
    // 0x2812b8: 0xc09f944  jal         func_27E510
label_2812bc:
    if (ctx->pc == 0x2812BCu) {
        ctx->pc = 0x2812BCu;
            // 0x2812bc: 0xe7a00478  swc1        $f0, 0x478($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1144), bits); }
        ctx->pc = 0x2812C0u;
        goto label_2812c0;
    }
    ctx->pc = 0x2812B8u;
    SET_GPR_U32(ctx, 31, 0x2812C0u);
    ctx->pc = 0x2812BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2812B8u;
            // 0x2812bc: 0xe7a00478  swc1        $f0, 0x478($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1144), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x27E510u;
    if (runtime->hasFunction(0x27E510u)) {
        auto targetFn = runtime->lookupFunction(0x27E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2812C0u; }
        if (ctx->pc != 0x2812C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawBox__FPfPfiii_0x27e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2812C0u; }
        if (ctx->pc != 0x2812C0u) { return; }
    }
    ctx->pc = 0x2812C0u;
label_2812c0:
    // 0x2812c0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2812c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2812c4:
    // 0x2812c4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2812c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2812c8:
    // 0x2812c8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2812c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2812cc:
    // 0x2812cc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2812ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2812d0:
    // 0x2812d0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2812d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2812d4:
    // 0x2812d4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2812d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2812d8:
    // 0x2812d8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2812d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2812dc:
    // 0x2812dc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2812dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2812e0:
    // 0x2812e0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2812e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2812e4:
    // 0x2812e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2812e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2812e8:
    // 0x2812e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2812e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2812ec:
    // 0x2812ec: 0x3e00008  jr          $ra
label_2812f0:
    if (ctx->pc == 0x2812F0u) {
        ctx->pc = 0x2812F0u;
            // 0x2812f0: 0x27bd0490  addiu       $sp, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->pc = 0x2812F4u;
        goto label_fallthrough_0x2812ec;
    }
    ctx->pc = 0x2812ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2812F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2812ECu;
            // 0x2812f0: 0x27bd0490  addiu       $sp, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2812ec:
    ctx->pc = 0x2812F4u;
}
