#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RunScript__12CActionCharaFP6CSceneP14RUN_SCRIPT_ENV
// Address: 0x171210 - 0x1719b8
void RunScript__12CActionCharaFP6CSceneP14RUN_SCRIPT_ENV_0x171210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RunScript__12CActionCharaFP6CSceneP14RUN_SCRIPT_ENV_0x171210");
#endif

    switch (ctx->pc) {
        case 0x171210u: goto label_171210;
        case 0x171214u: goto label_171214;
        case 0x171218u: goto label_171218;
        case 0x17121cu: goto label_17121c;
        case 0x171220u: goto label_171220;
        case 0x171224u: goto label_171224;
        case 0x171228u: goto label_171228;
        case 0x17122cu: goto label_17122c;
        case 0x171230u: goto label_171230;
        case 0x171234u: goto label_171234;
        case 0x171238u: goto label_171238;
        case 0x17123cu: goto label_17123c;
        case 0x171240u: goto label_171240;
        case 0x171244u: goto label_171244;
        case 0x171248u: goto label_171248;
        case 0x17124cu: goto label_17124c;
        case 0x171250u: goto label_171250;
        case 0x171254u: goto label_171254;
        case 0x171258u: goto label_171258;
        case 0x17125cu: goto label_17125c;
        case 0x171260u: goto label_171260;
        case 0x171264u: goto label_171264;
        case 0x171268u: goto label_171268;
        case 0x17126cu: goto label_17126c;
        case 0x171270u: goto label_171270;
        case 0x171274u: goto label_171274;
        case 0x171278u: goto label_171278;
        case 0x17127cu: goto label_17127c;
        case 0x171280u: goto label_171280;
        case 0x171284u: goto label_171284;
        case 0x171288u: goto label_171288;
        case 0x17128cu: goto label_17128c;
        case 0x171290u: goto label_171290;
        case 0x171294u: goto label_171294;
        case 0x171298u: goto label_171298;
        case 0x17129cu: goto label_17129c;
        case 0x1712a0u: goto label_1712a0;
        case 0x1712a4u: goto label_1712a4;
        case 0x1712a8u: goto label_1712a8;
        case 0x1712acu: goto label_1712ac;
        case 0x1712b0u: goto label_1712b0;
        case 0x1712b4u: goto label_1712b4;
        case 0x1712b8u: goto label_1712b8;
        case 0x1712bcu: goto label_1712bc;
        case 0x1712c0u: goto label_1712c0;
        case 0x1712c4u: goto label_1712c4;
        case 0x1712c8u: goto label_1712c8;
        case 0x1712ccu: goto label_1712cc;
        case 0x1712d0u: goto label_1712d0;
        case 0x1712d4u: goto label_1712d4;
        case 0x1712d8u: goto label_1712d8;
        case 0x1712dcu: goto label_1712dc;
        case 0x1712e0u: goto label_1712e0;
        case 0x1712e4u: goto label_1712e4;
        case 0x1712e8u: goto label_1712e8;
        case 0x1712ecu: goto label_1712ec;
        case 0x1712f0u: goto label_1712f0;
        case 0x1712f4u: goto label_1712f4;
        case 0x1712f8u: goto label_1712f8;
        case 0x1712fcu: goto label_1712fc;
        case 0x171300u: goto label_171300;
        case 0x171304u: goto label_171304;
        case 0x171308u: goto label_171308;
        case 0x17130cu: goto label_17130c;
        case 0x171310u: goto label_171310;
        case 0x171314u: goto label_171314;
        case 0x171318u: goto label_171318;
        case 0x17131cu: goto label_17131c;
        case 0x171320u: goto label_171320;
        case 0x171324u: goto label_171324;
        case 0x171328u: goto label_171328;
        case 0x17132cu: goto label_17132c;
        case 0x171330u: goto label_171330;
        case 0x171334u: goto label_171334;
        case 0x171338u: goto label_171338;
        case 0x17133cu: goto label_17133c;
        case 0x171340u: goto label_171340;
        case 0x171344u: goto label_171344;
        case 0x171348u: goto label_171348;
        case 0x17134cu: goto label_17134c;
        case 0x171350u: goto label_171350;
        case 0x171354u: goto label_171354;
        case 0x171358u: goto label_171358;
        case 0x17135cu: goto label_17135c;
        case 0x171360u: goto label_171360;
        case 0x171364u: goto label_171364;
        case 0x171368u: goto label_171368;
        case 0x17136cu: goto label_17136c;
        case 0x171370u: goto label_171370;
        case 0x171374u: goto label_171374;
        case 0x171378u: goto label_171378;
        case 0x17137cu: goto label_17137c;
        case 0x171380u: goto label_171380;
        case 0x171384u: goto label_171384;
        case 0x171388u: goto label_171388;
        case 0x17138cu: goto label_17138c;
        case 0x171390u: goto label_171390;
        case 0x171394u: goto label_171394;
        case 0x171398u: goto label_171398;
        case 0x17139cu: goto label_17139c;
        case 0x1713a0u: goto label_1713a0;
        case 0x1713a4u: goto label_1713a4;
        case 0x1713a8u: goto label_1713a8;
        case 0x1713acu: goto label_1713ac;
        case 0x1713b0u: goto label_1713b0;
        case 0x1713b4u: goto label_1713b4;
        case 0x1713b8u: goto label_1713b8;
        case 0x1713bcu: goto label_1713bc;
        case 0x1713c0u: goto label_1713c0;
        case 0x1713c4u: goto label_1713c4;
        case 0x1713c8u: goto label_1713c8;
        case 0x1713ccu: goto label_1713cc;
        case 0x1713d0u: goto label_1713d0;
        case 0x1713d4u: goto label_1713d4;
        case 0x1713d8u: goto label_1713d8;
        case 0x1713dcu: goto label_1713dc;
        case 0x1713e0u: goto label_1713e0;
        case 0x1713e4u: goto label_1713e4;
        case 0x1713e8u: goto label_1713e8;
        case 0x1713ecu: goto label_1713ec;
        case 0x1713f0u: goto label_1713f0;
        case 0x1713f4u: goto label_1713f4;
        case 0x1713f8u: goto label_1713f8;
        case 0x1713fcu: goto label_1713fc;
        case 0x171400u: goto label_171400;
        case 0x171404u: goto label_171404;
        case 0x171408u: goto label_171408;
        case 0x17140cu: goto label_17140c;
        case 0x171410u: goto label_171410;
        case 0x171414u: goto label_171414;
        case 0x171418u: goto label_171418;
        case 0x17141cu: goto label_17141c;
        case 0x171420u: goto label_171420;
        case 0x171424u: goto label_171424;
        case 0x171428u: goto label_171428;
        case 0x17142cu: goto label_17142c;
        case 0x171430u: goto label_171430;
        case 0x171434u: goto label_171434;
        case 0x171438u: goto label_171438;
        case 0x17143cu: goto label_17143c;
        case 0x171440u: goto label_171440;
        case 0x171444u: goto label_171444;
        case 0x171448u: goto label_171448;
        case 0x17144cu: goto label_17144c;
        case 0x171450u: goto label_171450;
        case 0x171454u: goto label_171454;
        case 0x171458u: goto label_171458;
        case 0x17145cu: goto label_17145c;
        case 0x171460u: goto label_171460;
        case 0x171464u: goto label_171464;
        case 0x171468u: goto label_171468;
        case 0x17146cu: goto label_17146c;
        case 0x171470u: goto label_171470;
        case 0x171474u: goto label_171474;
        case 0x171478u: goto label_171478;
        case 0x17147cu: goto label_17147c;
        case 0x171480u: goto label_171480;
        case 0x171484u: goto label_171484;
        case 0x171488u: goto label_171488;
        case 0x17148cu: goto label_17148c;
        case 0x171490u: goto label_171490;
        case 0x171494u: goto label_171494;
        case 0x171498u: goto label_171498;
        case 0x17149cu: goto label_17149c;
        case 0x1714a0u: goto label_1714a0;
        case 0x1714a4u: goto label_1714a4;
        case 0x1714a8u: goto label_1714a8;
        case 0x1714acu: goto label_1714ac;
        case 0x1714b0u: goto label_1714b0;
        case 0x1714b4u: goto label_1714b4;
        case 0x1714b8u: goto label_1714b8;
        case 0x1714bcu: goto label_1714bc;
        case 0x1714c0u: goto label_1714c0;
        case 0x1714c4u: goto label_1714c4;
        case 0x1714c8u: goto label_1714c8;
        case 0x1714ccu: goto label_1714cc;
        case 0x1714d0u: goto label_1714d0;
        case 0x1714d4u: goto label_1714d4;
        case 0x1714d8u: goto label_1714d8;
        case 0x1714dcu: goto label_1714dc;
        case 0x1714e0u: goto label_1714e0;
        case 0x1714e4u: goto label_1714e4;
        case 0x1714e8u: goto label_1714e8;
        case 0x1714ecu: goto label_1714ec;
        case 0x1714f0u: goto label_1714f0;
        case 0x1714f4u: goto label_1714f4;
        case 0x1714f8u: goto label_1714f8;
        case 0x1714fcu: goto label_1714fc;
        case 0x171500u: goto label_171500;
        case 0x171504u: goto label_171504;
        case 0x171508u: goto label_171508;
        case 0x17150cu: goto label_17150c;
        case 0x171510u: goto label_171510;
        case 0x171514u: goto label_171514;
        case 0x171518u: goto label_171518;
        case 0x17151cu: goto label_17151c;
        case 0x171520u: goto label_171520;
        case 0x171524u: goto label_171524;
        case 0x171528u: goto label_171528;
        case 0x17152cu: goto label_17152c;
        case 0x171530u: goto label_171530;
        case 0x171534u: goto label_171534;
        case 0x171538u: goto label_171538;
        case 0x17153cu: goto label_17153c;
        case 0x171540u: goto label_171540;
        case 0x171544u: goto label_171544;
        case 0x171548u: goto label_171548;
        case 0x17154cu: goto label_17154c;
        case 0x171550u: goto label_171550;
        case 0x171554u: goto label_171554;
        case 0x171558u: goto label_171558;
        case 0x17155cu: goto label_17155c;
        case 0x171560u: goto label_171560;
        case 0x171564u: goto label_171564;
        case 0x171568u: goto label_171568;
        case 0x17156cu: goto label_17156c;
        case 0x171570u: goto label_171570;
        case 0x171574u: goto label_171574;
        case 0x171578u: goto label_171578;
        case 0x17157cu: goto label_17157c;
        case 0x171580u: goto label_171580;
        case 0x171584u: goto label_171584;
        case 0x171588u: goto label_171588;
        case 0x17158cu: goto label_17158c;
        case 0x171590u: goto label_171590;
        case 0x171594u: goto label_171594;
        case 0x171598u: goto label_171598;
        case 0x17159cu: goto label_17159c;
        case 0x1715a0u: goto label_1715a0;
        case 0x1715a4u: goto label_1715a4;
        case 0x1715a8u: goto label_1715a8;
        case 0x1715acu: goto label_1715ac;
        case 0x1715b0u: goto label_1715b0;
        case 0x1715b4u: goto label_1715b4;
        case 0x1715b8u: goto label_1715b8;
        case 0x1715bcu: goto label_1715bc;
        case 0x1715c0u: goto label_1715c0;
        case 0x1715c4u: goto label_1715c4;
        case 0x1715c8u: goto label_1715c8;
        case 0x1715ccu: goto label_1715cc;
        case 0x1715d0u: goto label_1715d0;
        case 0x1715d4u: goto label_1715d4;
        case 0x1715d8u: goto label_1715d8;
        case 0x1715dcu: goto label_1715dc;
        case 0x1715e0u: goto label_1715e0;
        case 0x1715e4u: goto label_1715e4;
        case 0x1715e8u: goto label_1715e8;
        case 0x1715ecu: goto label_1715ec;
        case 0x1715f0u: goto label_1715f0;
        case 0x1715f4u: goto label_1715f4;
        case 0x1715f8u: goto label_1715f8;
        case 0x1715fcu: goto label_1715fc;
        case 0x171600u: goto label_171600;
        case 0x171604u: goto label_171604;
        case 0x171608u: goto label_171608;
        case 0x17160cu: goto label_17160c;
        case 0x171610u: goto label_171610;
        case 0x171614u: goto label_171614;
        case 0x171618u: goto label_171618;
        case 0x17161cu: goto label_17161c;
        case 0x171620u: goto label_171620;
        case 0x171624u: goto label_171624;
        case 0x171628u: goto label_171628;
        case 0x17162cu: goto label_17162c;
        case 0x171630u: goto label_171630;
        case 0x171634u: goto label_171634;
        case 0x171638u: goto label_171638;
        case 0x17163cu: goto label_17163c;
        case 0x171640u: goto label_171640;
        case 0x171644u: goto label_171644;
        case 0x171648u: goto label_171648;
        case 0x17164cu: goto label_17164c;
        case 0x171650u: goto label_171650;
        case 0x171654u: goto label_171654;
        case 0x171658u: goto label_171658;
        case 0x17165cu: goto label_17165c;
        case 0x171660u: goto label_171660;
        case 0x171664u: goto label_171664;
        case 0x171668u: goto label_171668;
        case 0x17166cu: goto label_17166c;
        case 0x171670u: goto label_171670;
        case 0x171674u: goto label_171674;
        case 0x171678u: goto label_171678;
        case 0x17167cu: goto label_17167c;
        case 0x171680u: goto label_171680;
        case 0x171684u: goto label_171684;
        case 0x171688u: goto label_171688;
        case 0x17168cu: goto label_17168c;
        case 0x171690u: goto label_171690;
        case 0x171694u: goto label_171694;
        case 0x171698u: goto label_171698;
        case 0x17169cu: goto label_17169c;
        case 0x1716a0u: goto label_1716a0;
        case 0x1716a4u: goto label_1716a4;
        case 0x1716a8u: goto label_1716a8;
        case 0x1716acu: goto label_1716ac;
        case 0x1716b0u: goto label_1716b0;
        case 0x1716b4u: goto label_1716b4;
        case 0x1716b8u: goto label_1716b8;
        case 0x1716bcu: goto label_1716bc;
        case 0x1716c0u: goto label_1716c0;
        case 0x1716c4u: goto label_1716c4;
        case 0x1716c8u: goto label_1716c8;
        case 0x1716ccu: goto label_1716cc;
        case 0x1716d0u: goto label_1716d0;
        case 0x1716d4u: goto label_1716d4;
        case 0x1716d8u: goto label_1716d8;
        case 0x1716dcu: goto label_1716dc;
        case 0x1716e0u: goto label_1716e0;
        case 0x1716e4u: goto label_1716e4;
        case 0x1716e8u: goto label_1716e8;
        case 0x1716ecu: goto label_1716ec;
        case 0x1716f0u: goto label_1716f0;
        case 0x1716f4u: goto label_1716f4;
        case 0x1716f8u: goto label_1716f8;
        case 0x1716fcu: goto label_1716fc;
        case 0x171700u: goto label_171700;
        case 0x171704u: goto label_171704;
        case 0x171708u: goto label_171708;
        case 0x17170cu: goto label_17170c;
        case 0x171710u: goto label_171710;
        case 0x171714u: goto label_171714;
        case 0x171718u: goto label_171718;
        case 0x17171cu: goto label_17171c;
        case 0x171720u: goto label_171720;
        case 0x171724u: goto label_171724;
        case 0x171728u: goto label_171728;
        case 0x17172cu: goto label_17172c;
        case 0x171730u: goto label_171730;
        case 0x171734u: goto label_171734;
        case 0x171738u: goto label_171738;
        case 0x17173cu: goto label_17173c;
        case 0x171740u: goto label_171740;
        case 0x171744u: goto label_171744;
        case 0x171748u: goto label_171748;
        case 0x17174cu: goto label_17174c;
        case 0x171750u: goto label_171750;
        case 0x171754u: goto label_171754;
        case 0x171758u: goto label_171758;
        case 0x17175cu: goto label_17175c;
        case 0x171760u: goto label_171760;
        case 0x171764u: goto label_171764;
        case 0x171768u: goto label_171768;
        case 0x17176cu: goto label_17176c;
        case 0x171770u: goto label_171770;
        case 0x171774u: goto label_171774;
        case 0x171778u: goto label_171778;
        case 0x17177cu: goto label_17177c;
        case 0x171780u: goto label_171780;
        case 0x171784u: goto label_171784;
        case 0x171788u: goto label_171788;
        case 0x17178cu: goto label_17178c;
        case 0x171790u: goto label_171790;
        case 0x171794u: goto label_171794;
        case 0x171798u: goto label_171798;
        case 0x17179cu: goto label_17179c;
        case 0x1717a0u: goto label_1717a0;
        case 0x1717a4u: goto label_1717a4;
        case 0x1717a8u: goto label_1717a8;
        case 0x1717acu: goto label_1717ac;
        case 0x1717b0u: goto label_1717b0;
        case 0x1717b4u: goto label_1717b4;
        case 0x1717b8u: goto label_1717b8;
        case 0x1717bcu: goto label_1717bc;
        case 0x1717c0u: goto label_1717c0;
        case 0x1717c4u: goto label_1717c4;
        case 0x1717c8u: goto label_1717c8;
        case 0x1717ccu: goto label_1717cc;
        case 0x1717d0u: goto label_1717d0;
        case 0x1717d4u: goto label_1717d4;
        case 0x1717d8u: goto label_1717d8;
        case 0x1717dcu: goto label_1717dc;
        case 0x1717e0u: goto label_1717e0;
        case 0x1717e4u: goto label_1717e4;
        case 0x1717e8u: goto label_1717e8;
        case 0x1717ecu: goto label_1717ec;
        case 0x1717f0u: goto label_1717f0;
        case 0x1717f4u: goto label_1717f4;
        case 0x1717f8u: goto label_1717f8;
        case 0x1717fcu: goto label_1717fc;
        case 0x171800u: goto label_171800;
        case 0x171804u: goto label_171804;
        case 0x171808u: goto label_171808;
        case 0x17180cu: goto label_17180c;
        case 0x171810u: goto label_171810;
        case 0x171814u: goto label_171814;
        case 0x171818u: goto label_171818;
        case 0x17181cu: goto label_17181c;
        case 0x171820u: goto label_171820;
        case 0x171824u: goto label_171824;
        case 0x171828u: goto label_171828;
        case 0x17182cu: goto label_17182c;
        case 0x171830u: goto label_171830;
        case 0x171834u: goto label_171834;
        case 0x171838u: goto label_171838;
        case 0x17183cu: goto label_17183c;
        case 0x171840u: goto label_171840;
        case 0x171844u: goto label_171844;
        case 0x171848u: goto label_171848;
        case 0x17184cu: goto label_17184c;
        case 0x171850u: goto label_171850;
        case 0x171854u: goto label_171854;
        case 0x171858u: goto label_171858;
        case 0x17185cu: goto label_17185c;
        case 0x171860u: goto label_171860;
        case 0x171864u: goto label_171864;
        case 0x171868u: goto label_171868;
        case 0x17186cu: goto label_17186c;
        case 0x171870u: goto label_171870;
        case 0x171874u: goto label_171874;
        case 0x171878u: goto label_171878;
        case 0x17187cu: goto label_17187c;
        case 0x171880u: goto label_171880;
        case 0x171884u: goto label_171884;
        case 0x171888u: goto label_171888;
        case 0x17188cu: goto label_17188c;
        case 0x171890u: goto label_171890;
        case 0x171894u: goto label_171894;
        case 0x171898u: goto label_171898;
        case 0x17189cu: goto label_17189c;
        case 0x1718a0u: goto label_1718a0;
        case 0x1718a4u: goto label_1718a4;
        case 0x1718a8u: goto label_1718a8;
        case 0x1718acu: goto label_1718ac;
        case 0x1718b0u: goto label_1718b0;
        case 0x1718b4u: goto label_1718b4;
        case 0x1718b8u: goto label_1718b8;
        case 0x1718bcu: goto label_1718bc;
        case 0x1718c0u: goto label_1718c0;
        case 0x1718c4u: goto label_1718c4;
        case 0x1718c8u: goto label_1718c8;
        case 0x1718ccu: goto label_1718cc;
        case 0x1718d0u: goto label_1718d0;
        case 0x1718d4u: goto label_1718d4;
        case 0x1718d8u: goto label_1718d8;
        case 0x1718dcu: goto label_1718dc;
        case 0x1718e0u: goto label_1718e0;
        case 0x1718e4u: goto label_1718e4;
        case 0x1718e8u: goto label_1718e8;
        case 0x1718ecu: goto label_1718ec;
        case 0x1718f0u: goto label_1718f0;
        case 0x1718f4u: goto label_1718f4;
        case 0x1718f8u: goto label_1718f8;
        case 0x1718fcu: goto label_1718fc;
        case 0x171900u: goto label_171900;
        case 0x171904u: goto label_171904;
        case 0x171908u: goto label_171908;
        case 0x17190cu: goto label_17190c;
        case 0x171910u: goto label_171910;
        case 0x171914u: goto label_171914;
        case 0x171918u: goto label_171918;
        case 0x17191cu: goto label_17191c;
        case 0x171920u: goto label_171920;
        case 0x171924u: goto label_171924;
        case 0x171928u: goto label_171928;
        case 0x17192cu: goto label_17192c;
        case 0x171930u: goto label_171930;
        case 0x171934u: goto label_171934;
        case 0x171938u: goto label_171938;
        case 0x17193cu: goto label_17193c;
        case 0x171940u: goto label_171940;
        case 0x171944u: goto label_171944;
        case 0x171948u: goto label_171948;
        case 0x17194cu: goto label_17194c;
        case 0x171950u: goto label_171950;
        case 0x171954u: goto label_171954;
        case 0x171958u: goto label_171958;
        case 0x17195cu: goto label_17195c;
        case 0x171960u: goto label_171960;
        case 0x171964u: goto label_171964;
        case 0x171968u: goto label_171968;
        case 0x17196cu: goto label_17196c;
        case 0x171970u: goto label_171970;
        case 0x171974u: goto label_171974;
        case 0x171978u: goto label_171978;
        case 0x17197cu: goto label_17197c;
        case 0x171980u: goto label_171980;
        case 0x171984u: goto label_171984;
        case 0x171988u: goto label_171988;
        case 0x17198cu: goto label_17198c;
        case 0x171990u: goto label_171990;
        case 0x171994u: goto label_171994;
        case 0x171998u: goto label_171998;
        case 0x17199cu: goto label_17199c;
        case 0x1719a0u: goto label_1719a0;
        case 0x1719a4u: goto label_1719a4;
        case 0x1719a8u: goto label_1719a8;
        case 0x1719acu: goto label_1719ac;
        case 0x1719b0u: goto label_1719b0;
        case 0x1719b4u: goto label_1719b4;
        default: break;
    }

    ctx->pc = 0x171210u;

label_171210:
    // 0x171210: 0x27bdd700  addiu       $sp, $sp, -0x2900
    ctx->pc = 0x171210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294956800));
label_171214:
    // 0x171214: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x171214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_171218:
    // 0x171218: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x171218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_17121c:
    // 0x17121c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17121cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_171220:
    // 0x171220: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x171220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_171224:
    // 0x171224: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x171224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_171228:
    // 0x171228: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x171228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17122c:
    // 0x17122c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17122cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_171230:
    // 0x171230: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x171230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_171234:
    // 0x171234: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x171234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_171238:
    // 0x171238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x171238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17123c:
    // 0x17123c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17123cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_171240:
    // 0x171240: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x171240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_171244:
    // 0x171244: 0xac31d430  sw          $s1, -0x2BD0($at)
    ctx->pc = 0x171244u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956080), GPR_U32(ctx, 17));
label_171248:
    // 0x171248: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x171248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_17124c:
    // 0x17124c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17124cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171250:
    // 0x171250: 0x24a53760  addiu       $a1, $a1, 0x3760
    ctx->pc = 0x171250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14176));
label_171254:
    // 0x171254: 0xaf909da4  sw          $s0, -0x625C($gp)
    ctx->pc = 0x171254u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942116), GPR_U32(ctx, 16));
label_171258:
    // 0x171258: 0xc0a0e08  jal         func_283820
label_17125c:
    if (ctx->pc == 0x17125Cu) {
        ctx->pc = 0x17125Cu;
            // 0x17125c: 0x26142f90  addiu       $s4, $s0, 0x2F90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 12176));
        ctx->pc = 0x171260u;
        goto label_171260;
    }
    ctx->pc = 0x171258u;
    SET_GPR_U32(ctx, 31, 0x171260u);
    ctx->pc = 0x17125Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171258u;
            // 0x17125c: 0x26142f90  addiu       $s4, $s0, 0x2F90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 12176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283820u;
    if (runtime->hasFunction(0x283820u)) {
        auto targetFn = runtime->lookupFunction(0x283820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171260u; }
        if (ctx->pc != 0x171260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCameraID__6CSceneFPc_0x283820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171260u; }
        if (ctx->pc != 0x171260u) { return; }
    }
    ctx->pc = 0x171260u;
label_171260:
    // 0x171260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171264:
    // 0x171264: 0xc0a0e30  jal         func_2838C0
label_171268:
    if (ctx->pc == 0x171268u) {
        ctx->pc = 0x171268u;
            // 0x171268: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17126Cu;
        goto label_17126c;
    }
    ctx->pc = 0x171264u;
    SET_GPR_U32(ctx, 31, 0x17126Cu);
    ctx->pc = 0x171268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171264u;
            // 0x171268: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17126Cu; }
        if (ctx->pc != 0x17126Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17126Cu; }
        if (ctx->pc != 0x17126Cu) { return; }
    }
    ctx->pc = 0x17126Cu;
label_17126c:
    // 0x17126c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x17126cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_171270:
    // 0x171270: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x171270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_171274:
    // 0x171274: 0xac32d438  sw          $s2, -0x2BC8($at)
    ctx->pc = 0x171274u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956088), GPR_U32(ctx, 18));
label_171278:
    // 0x171278: 0x248404d0  addiu       $a0, $a0, 0x4D0
    ctx->pc = 0x171278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1232));
label_17127c:
    // 0x17127c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x17127cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_171280:
    // 0x171280: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x171280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_171284:
    // 0x171284: 0xac22d434  sw          $v0, -0x2BCC($at)
    ctx->pc = 0x171284u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956084), GPR_U32(ctx, 2));
label_171288:
    // 0x171288: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x171288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_17128c:
    // 0x17128c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x17128cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_171290:
    // 0x171290: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x171290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_171294:
    // 0x171294: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x171294u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_171298:
    // 0x171298: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x171298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_17129c:
    // 0x17129c: 0xa220076c  sb          $zero, 0x76C($s1)
    ctx->pc = 0x17129cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1900), (uint8_t)GPR_U32(ctx, 0));
label_1712a0:
    // 0x1712a0: 0xa220076e  sb          $zero, 0x76E($s1)
    ctx->pc = 0x1712a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1902), (uint8_t)GPR_U32(ctx, 0));
label_1712a4:
    // 0x1712a4: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x1712a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_1712a8:
    // 0x1712a8: 0x8c520714  lw          $s2, 0x714($v0)
    ctx->pc = 0x1712a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1812)));
label_1712ac:
    // 0x1712ac: 0xc0bb538  jal         func_2ED4E0
label_1712b0:
    if (ctx->pc == 0x1712B0u) {
        ctx->pc = 0x1712B0u;
            // 0x1712b0: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->pc = 0x1712B4u;
        goto label_1712b4;
    }
    ctx->pc = 0x1712ACu;
    SET_GPR_U32(ctx, 31, 0x1712B4u);
    ctx->pc = 0x1712B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1712ACu;
            // 0x1712b0: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1712B4u; }
        if (ctx->pc != 0x1712B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1712B4u; }
        if (ctx->pc != 0x1712B4u) { return; }
    }
    ctx->pc = 0x1712B4u;
label_1712b4:
    // 0x1712b4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1712b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_1712b8:
    // 0x1712b8: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x1712b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_1712bc:
    // 0x1712bc: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x1712bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_1712c0:
    // 0x1712c0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1712c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1712c4:
    // 0x1712c4: 0x24847b60  addiu       $a0, $a0, 0x7B60
    ctx->pc = 0x1712c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
label_1712c8:
    // 0x1712c8: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1712c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1712cc:
    // 0x1712cc: 0xc0bb538  jal         func_2ED4E0
label_1712d0:
    if (ctx->pc == 0x1712D0u) {
        ctx->pc = 0x1712D0u;
            // 0x1712d0: 0xac520714  sw          $s2, 0x714($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1812), GPR_U32(ctx, 18));
        ctx->pc = 0x1712D4u;
        goto label_1712d4;
    }
    ctx->pc = 0x1712CCu;
    SET_GPR_U32(ctx, 31, 0x1712D4u);
    ctx->pc = 0x1712D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1712CCu;
            // 0x1712d0: 0xac520714  sw          $s2, 0x714($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1812), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1712D4u; }
        if (ctx->pc != 0x1712D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1712D4u; }
        if (ctx->pc != 0x1712D4u) { return; }
    }
    ctx->pc = 0x1712D4u;
label_1712d4:
    // 0x1712d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1712d8:
    if (ctx->pc == 0x1712D8u) {
        ctx->pc = 0x1712D8u;
            // 0x1712d8: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x1712DCu;
        goto label_1712dc;
    }
    ctx->pc = 0x1712D4u;
    {
        const bool branch_taken_0x1712d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1712D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1712D4u;
            // 0x1712d8: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1712d4) {
            ctx->pc = 0x1712F4u;
            goto label_1712f4;
        }
    }
    ctx->pc = 0x1712DCu;
label_1712dc:
    // 0x1712dc: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x1712dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_1712e0:
    // 0x1712e0: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x1712e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_1712e4:
    // 0x1712e4: 0x8c6207d8  lw          $v0, 0x7D8($v1)
    ctx->pc = 0x1712e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2008)));
label_1712e8:
    // 0x1712e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1712e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1712ec:
    // 0x1712ec: 0x10000003  b           . + 4 + (0x3 << 2)
label_1712f0:
    if (ctx->pc == 0x1712F0u) {
        ctx->pc = 0x1712F0u;
            // 0x1712f0: 0xac6207d8  sw          $v0, 0x7D8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2008), GPR_U32(ctx, 2));
        ctx->pc = 0x1712F4u;
        goto label_1712f4;
    }
    ctx->pc = 0x1712ECu;
    {
        const bool branch_taken_0x1712ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1712F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1712ECu;
            // 0x1712f0: 0xac6207d8  sw          $v0, 0x7D8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2008), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1712ec) {
            ctx->pc = 0x1712FCu;
            goto label_1712fc;
        }
    }
    ctx->pc = 0x1712F4u;
label_1712f4:
    // 0x1712f4: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x1712f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_1712f8:
    // 0x1712f8: 0xac4007d8  sw          $zero, 0x7D8($v0)
    ctx->pc = 0x1712f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2008), GPR_U32(ctx, 0));
label_1712fc:
    // 0x1712fc: 0x8e220bec  lw          $v0, 0xBEC($s1)
    ctx->pc = 0x1712fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3052)));
label_171300:
    // 0x171300: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_171304:
    if (ctx->pc == 0x171304u) {
        ctx->pc = 0x171304u;
            // 0x171304: 0x240202bc  addiu       $v0, $zero, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
        ctx->pc = 0x171308u;
        goto label_171308;
    }
    ctx->pc = 0x171300u;
    {
        const bool branch_taken_0x171300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171300u;
            // 0x171304: 0x240202bc  addiu       $v0, $zero, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171300) {
            ctx->pc = 0x171310u;
            goto label_171310;
        }
    }
    ctx->pc = 0x171308u;
label_171308:
    // 0x171308: 0xa6220710  sh          $v0, 0x710($s1)
    ctx->pc = 0x171308u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1808), (uint16_t)GPR_U32(ctx, 2));
label_17130c:
    // 0x17130c: 0xae200bec  sw          $zero, 0xBEC($s1)
    ctx->pc = 0x17130cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3052), GPR_U32(ctx, 0));
label_171310:
    // 0x171310: 0x8e230bdc  lw          $v1, 0xBDC($s1)
    ctx->pc = 0x171310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3036)));
label_171314:
    // 0x171314: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x171314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_171318:
    // 0x171318: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_17131c:
    if (ctx->pc == 0x17131Cu) {
        ctx->pc = 0x17131Cu;
            // 0x17131c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171320u;
        goto label_171320;
    }
    ctx->pc = 0x171318u;
    {
        const bool branch_taken_0x171318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17131Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171318u;
            // 0x17131c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171318) {
            ctx->pc = 0x17133Cu;
            goto label_17133c;
        }
    }
    ctx->pc = 0x171320u;
label_171320:
    // 0x171320: 0xc05aa6c  jal         func_16A9B0
label_171324:
    if (ctx->pc == 0x171324u) {
        ctx->pc = 0x171328u;
        goto label_171328;
    }
    ctx->pc = 0x171320u;
    SET_GPR_U32(ctx, 31, 0x171328u);
    ctx->pc = 0x16A9B0u;
    if (runtime->hasFunction(0x16A9B0u)) {
        auto targetFn = runtime->lookupFunction(0x16A9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171328u; }
        if (ctx->pc != 0x171328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AllDeleteDamage__12CActionCharaFv_0x16a9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171328u; }
        if (ctx->pc != 0x171328u) { return; }
    }
    ctx->pc = 0x171328u;
label_171328:
    // 0x171328: 0x24030578  addiu       $v1, $zero, 0x578
    ctx->pc = 0x171328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1400));
label_17132c:
    // 0x17132c: 0x240204b0  addiu       $v0, $zero, 0x4B0
    ctx->pc = 0x17132cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
label_171330:
    // 0x171330: 0xa6230710  sh          $v1, 0x710($s1)
    ctx->pc = 0x171330u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1808), (uint16_t)GPR_U32(ctx, 3));
label_171334:
    // 0x171334: 0xae200bdc  sw          $zero, 0xBDC($s1)
    ctx->pc = 0x171334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3036), GPR_U32(ctx, 0));
label_171338:
    // 0x171338: 0xa6022fd4  sh          $v0, 0x2FD4($s0)
    ctx->pc = 0x171338u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12244), (uint16_t)GPR_U32(ctx, 2));
label_17133c:
    // 0x17133c: 0x8e230bdc  lw          $v1, 0xBDC($s1)
    ctx->pc = 0x17133cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3036)));
label_171340:
    // 0x171340: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x171340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_171344:
    // 0x171344: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_171348:
    if (ctx->pc == 0x171348u) {
        ctx->pc = 0x171348u;
            // 0x171348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17134Cu;
        goto label_17134c;
    }
    ctx->pc = 0x171344u;
    {
        const bool branch_taken_0x171344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x171348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171344u;
            // 0x171348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171344) {
            ctx->pc = 0x171360u;
            goto label_171360;
        }
    }
    ctx->pc = 0x17134Cu;
label_17134c:
    // 0x17134c: 0xc05aa6c  jal         func_16A9B0
label_171350:
    if (ctx->pc == 0x171350u) {
        ctx->pc = 0x171354u;
        goto label_171354;
    }
    ctx->pc = 0x17134Cu;
    SET_GPR_U32(ctx, 31, 0x171354u);
    ctx->pc = 0x16A9B0u;
    if (runtime->hasFunction(0x16A9B0u)) {
        auto targetFn = runtime->lookupFunction(0x16A9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171354u; }
        if (ctx->pc != 0x171354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AllDeleteDamage__12CActionCharaFv_0x16a9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171354u; }
        if (ctx->pc != 0x171354u) { return; }
    }
    ctx->pc = 0x171354u;
label_171354:
    // 0x171354: 0x24020226  addiu       $v0, $zero, 0x226
    ctx->pc = 0x171354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
label_171358:
    // 0x171358: 0xa6220710  sh          $v0, 0x710($s1)
    ctx->pc = 0x171358u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1808), (uint16_t)GPR_U32(ctx, 2));
label_17135c:
    // 0x17135c: 0xae200bdc  sw          $zero, 0xBDC($s1)
    ctx->pc = 0x17135cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3036), GPR_U32(ctx, 0));
label_171360:
    // 0x171360: 0x8e230bdc  lw          $v1, 0xBDC($s1)
    ctx->pc = 0x171360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3036)));
label_171364:
    // 0x171364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171368:
    // 0x171368: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_17136c:
    if (ctx->pc == 0x17136Cu) {
        ctx->pc = 0x17136Cu;
            // 0x17136c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171370u;
        goto label_171370;
    }
    ctx->pc = 0x171368u;
    {
        const bool branch_taken_0x171368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17136Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171368u;
            // 0x17136c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171368) {
            ctx->pc = 0x171384u;
            goto label_171384;
        }
    }
    ctx->pc = 0x171370u;
label_171370:
    // 0x171370: 0xc05aa6c  jal         func_16A9B0
label_171374:
    if (ctx->pc == 0x171374u) {
        ctx->pc = 0x171378u;
        goto label_171378;
    }
    ctx->pc = 0x171370u;
    SET_GPR_U32(ctx, 31, 0x171378u);
    ctx->pc = 0x16A9B0u;
    if (runtime->hasFunction(0x16A9B0u)) {
        auto targetFn = runtime->lookupFunction(0x16A9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171378u; }
        if (ctx->pc != 0x171378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AllDeleteDamage__12CActionCharaFv_0x16a9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171378u; }
        if (ctx->pc != 0x171378u) { return; }
    }
    ctx->pc = 0x171378u;
label_171378:
    // 0x171378: 0x240201f4  addiu       $v0, $zero, 0x1F4
    ctx->pc = 0x171378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_17137c:
    // 0x17137c: 0xa6220710  sh          $v0, 0x710($s1)
    ctx->pc = 0x17137cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1808), (uint16_t)GPR_U32(ctx, 2));
label_171380:
    // 0x171380: 0xae200bdc  sw          $zero, 0xBDC($s1)
    ctx->pc = 0x171380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3036), GPR_U32(ctx, 0));
label_171384:
    // 0x171384: 0x8e230bdc  lw          $v1, 0xBDC($s1)
    ctx->pc = 0x171384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3036)));
label_171388:
    // 0x171388: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x171388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17138c:
    // 0x17138c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_171390:
    if (ctx->pc == 0x171390u) {
        ctx->pc = 0x171390u;
            // 0x171390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171394u;
        goto label_171394;
    }
    ctx->pc = 0x17138Cu;
    {
        const bool branch_taken_0x17138c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x171390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17138Cu;
            // 0x171390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17138c) {
            ctx->pc = 0x1713A8u;
            goto label_1713a8;
        }
    }
    ctx->pc = 0x171394u;
label_171394:
    // 0x171394: 0xc05aa6c  jal         func_16A9B0
label_171398:
    if (ctx->pc == 0x171398u) {
        ctx->pc = 0x17139Cu;
        goto label_17139c;
    }
    ctx->pc = 0x171394u;
    SET_GPR_U32(ctx, 31, 0x17139Cu);
    ctx->pc = 0x16A9B0u;
    if (runtime->hasFunction(0x16A9B0u)) {
        auto targetFn = runtime->lookupFunction(0x16A9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17139Cu; }
        if (ctx->pc != 0x17139Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AllDeleteDamage__12CActionCharaFv_0x16a9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17139Cu; }
        if (ctx->pc != 0x17139Cu) { return; }
    }
    ctx->pc = 0x17139Cu;
label_17139c:
    // 0x17139c: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x17139cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
label_1713a0:
    // 0x1713a0: 0xa6220710  sh          $v0, 0x710($s1)
    ctx->pc = 0x1713a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1808), (uint16_t)GPR_U32(ctx, 2));
label_1713a4:
    // 0x1713a4: 0xae200bdc  sw          $zero, 0xBDC($s1)
    ctx->pc = 0x1713a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3036), GPR_U32(ctx, 0));
label_1713a8:
    // 0x1713a8: 0x86250710  lh          $a1, 0x710($s1)
    ctx->pc = 0x1713a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1808)));
label_1713ac:
    // 0x1713ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1713acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1713b0:
    // 0x1713b0: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
label_1713b4:
    if (ctx->pc == 0x1713B4u) {
        ctx->pc = 0x1713B4u;
            // 0x1713b4: 0x262406bc  addiu       $a0, $s1, 0x6BC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1724));
        ctx->pc = 0x1713B8u;
        goto label_1713b8;
    }
    ctx->pc = 0x1713B0u;
    {
        const bool branch_taken_0x1713b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1713B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1713B0u;
            // 0x1713b4: 0x262406bc  addiu       $a0, $s1, 0x6BC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1724));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713b0) {
            ctx->pc = 0x1713E0u;
            goto label_1713e0;
        }
    }
    ctx->pc = 0x1713B8u;
label_1713b8:
    // 0x1713b8: 0xc061cd8  jal         func_187360
label_1713bc:
    if (ctx->pc == 0x1713BCu) {
        ctx->pc = 0x1713BCu;
            // 0x1713bc: 0x262406bc  addiu       $a0, $s1, 0x6BC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1724));
        ctx->pc = 0x1713C0u;
        goto label_1713c0;
    }
    ctx->pc = 0x1713B8u;
    SET_GPR_U32(ctx, 31, 0x1713C0u);
    ctx->pc = 0x1713BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1713B8u;
            // 0x1713bc: 0x262406bc  addiu       $a0, $s1, 0x6BC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1724));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187360u;
    if (runtime->hasFunction(0x187360u)) {
        auto targetFn = runtime->lookupFunction(0x187360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1713C0u; }
        if (ctx->pc != 0x1713C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        check_program__10CRunScriptFi_0x187360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1713C0u; }
        if (ctx->pc != 0x1713C0u) { return; }
    }
    ctx->pc = 0x1713C0u;
label_1713c0:
    // 0x1713c0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1713c4:
    if (ctx->pc == 0x1713C4u) {
        ctx->pc = 0x1713C8u;
        goto label_1713c8;
    }
    ctx->pc = 0x1713C0u;
    {
        const bool branch_taken_0x1713c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1713c0) {
            ctx->pc = 0x1713F8u;
            goto label_1713f8;
        }
    }
    ctx->pc = 0x1713C8u;
label_1713c8:
    // 0x1713c8: 0x86250710  lh          $a1, 0x710($s1)
    ctx->pc = 0x1713c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1808)));
label_1713cc:
    // 0x1713cc: 0xc061c84  jal         func_187210
label_1713d0:
    if (ctx->pc == 0x1713D0u) {
        ctx->pc = 0x1713D0u;
            // 0x1713d0: 0x262406bc  addiu       $a0, $s1, 0x6BC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1724));
        ctx->pc = 0x1713D4u;
        goto label_1713d4;
    }
    ctx->pc = 0x1713CCu;
    SET_GPR_U32(ctx, 31, 0x1713D4u);
    ctx->pc = 0x1713D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1713CCu;
            // 0x1713d0: 0x262406bc  addiu       $a0, $s1, 0x6BC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1724));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187210u;
    if (runtime->hasFunction(0x187210u)) {
        auto targetFn = runtime->lookupFunction(0x187210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1713D4u; }
        if (ctx->pc != 0x1713D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        run__10CRunScriptFi_0x187210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1713D4u; }
        if (ctx->pc != 0x1713D4u) { return; }
    }
    ctx->pc = 0x1713D4u;
label_1713d4:
    // 0x1713d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1713d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1713d8:
    // 0x1713d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1713dc:
    if (ctx->pc == 0x1713DCu) {
        ctx->pc = 0x1713DCu;
            // 0x1713dc: 0xa6220710  sh          $v0, 0x710($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1808), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1713E0u;
        goto label_1713e0;
    }
    ctx->pc = 0x1713D8u;
    {
        const bool branch_taken_0x1713d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1713DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1713D8u;
            // 0x1713dc: 0xa6220710  sh          $v0, 0x710($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1808), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713d8) {
            ctx->pc = 0x1713F8u;
            goto label_1713f8;
        }
    }
    ctx->pc = 0x1713E0u;
label_1713e0:
    // 0x1713e0: 0xc061c78  jal         func_1871E0
label_1713e4:
    if (ctx->pc == 0x1713E4u) {
        ctx->pc = 0x1713E8u;
        goto label_1713e8;
    }
    ctx->pc = 0x1713E0u;
    SET_GPR_U32(ctx, 31, 0x1713E8u);
    ctx->pc = 0x1871E0u;
    if (runtime->hasFunction(0x1871E0u)) {
        auto targetFn = runtime->lookupFunction(0x1871E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1713E8u; }
        if (ctx->pc != 0x1713E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        resume__10CRunScriptFv_0x1871e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1713E8u; }
        if (ctx->pc != 0x1713E8u) { return; }
    }
    ctx->pc = 0x1713E8u;
label_1713e8:
    // 0x1713e8: 0x8e2206f8  lw          $v0, 0x6F8($s1)
    ctx->pc = 0x1713e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1784)));
label_1713ec:
    // 0x1713ec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1713f0:
    if (ctx->pc == 0x1713F0u) {
        ctx->pc = 0x1713F0u;
            // 0x1713f0: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->pc = 0x1713F4u;
        goto label_1713f4;
    }
    ctx->pc = 0x1713ECu;
    {
        const bool branch_taken_0x1713ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1713F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1713ECu;
            // 0x1713f0: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713ec) {
            ctx->pc = 0x1713F8u;
            goto label_1713f8;
        }
    }
    ctx->pc = 0x1713F4u;
label_1713f4:
    // 0x1713f4: 0xa6220710  sh          $v0, 0x710($s1)
    ctx->pc = 0x1713f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1808), (uint16_t)GPR_U32(ctx, 2));
label_1713f8:
    // 0x1713f8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1713f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1713fc:
    // 0x1713fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1713fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_171400:
    // 0x171400: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x171400u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_171404:
    // 0x171404: 0x320f809  jalr        $t9
label_171408:
    if (ctx->pc == 0x171408u) {
        ctx->pc = 0x171408u;
            // 0x171408: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x17140Cu;
        goto label_17140c;
    }
    ctx->pc = 0x171404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17140Cu);
        ctx->pc = 0x171408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171404u;
            // 0x171408: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17140Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17140Cu; }
            if (ctx->pc != 0x17140Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17140Cu;
label_17140c:
    // 0x17140c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x17140cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_171410:
    // 0x171410: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x171410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_171414:
    // 0x171414: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x171414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_171418:
    // 0x171418: 0x320f809  jalr        $t9
label_17141c:
    if (ctx->pc == 0x17141Cu) {
        ctx->pc = 0x17141Cu;
            // 0x17141c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x171420u;
        goto label_171420;
    }
    ctx->pc = 0x171418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x171420u);
        ctx->pc = 0x17141Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171418u;
            // 0x17141c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x171420u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x171420u; }
            if (ctx->pc != 0x171420u) { return; }
        }
        }
    }
    ctx->pc = 0x171420u;
label_171420:
    // 0x171420: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x171420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_171424:
    // 0x171424: 0xc041c5c  jal         func_107170
label_171428:
    if (ctx->pc == 0x171428u) {
        ctx->pc = 0x171428u;
            // 0x171428: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->pc = 0x17142Cu;
        goto label_17142c;
    }
    ctx->pc = 0x171424u;
    SET_GPR_U32(ctx, 31, 0x17142Cu);
    ctx->pc = 0x171428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171424u;
            // 0x171428: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17142Cu; }
        if (ctx->pc != 0x17142Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17142Cu; }
        if (ctx->pc != 0x17142Cu) { return; }
    }
    ctx->pc = 0x17142Cu;
label_17142c:
    // 0x17142c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17142cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_171430:
    // 0x171430: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x171430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_171434:
    // 0x171434: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x171434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_171438:
    // 0x171438: 0xc05b11c  jal         func_16C470
label_17143c:
    if (ctx->pc == 0x17143Cu) {
        ctx->pc = 0x17143Cu;
            // 0x17143c: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x171440u;
        goto label_171440;
    }
    ctx->pc = 0x171438u;
    SET_GPR_U32(ctx, 31, 0x171440u);
    ctx->pc = 0x17143Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171438u;
            // 0x17143c: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16C470u;
    if (runtime->hasFunction(0x16C470u)) {
        auto targetFn = runtime->lookupFunction(0x16C470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171440u; }
        if (ctx->pc != 0x171440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionCheck__12CActionCharaFPfPfPf_0x16c470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171440u; }
        if (ctx->pc != 0x171440u) { return; }
    }
    ctx->pc = 0x171440u;
label_171440:
    // 0x171440: 0x8f849da4  lw          $a0, -0x625C($gp)
    ctx->pc = 0x171440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
label_171444:
    // 0x171444: 0xc0a0f58  jal         func_283D60
label_171448:
    if (ctx->pc == 0x171448u) {
        ctx->pc = 0x171448u;
            // 0x171448: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x17144Cu;
        goto label_17144c;
    }
    ctx->pc = 0x171444u;
    SET_GPR_U32(ctx, 31, 0x17144Cu);
    ctx->pc = 0x171448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171444u;
            // 0x171448: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17144Cu; }
        if (ctx->pc != 0x17144Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17144Cu; }
        if (ctx->pc != 0x17144Cu) { return; }
    }
    ctx->pc = 0x17144Cu;
label_17144c:
    // 0x17144c: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x17144cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_171450:
    // 0x171450: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x171450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_171454:
    // 0x171454: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x171454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_171458:
    // 0x171458: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x171458u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17145c:
    // 0x17145c: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x17145cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_171460:
    // 0x171460: 0x27b500a8  addiu       $s5, $sp, 0xA8
    ctx->pc = 0x171460u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_171464:
    // 0x171464: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x171464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_171468:
    // 0x171468: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x171468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17146c:
    // 0x17146c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x17146cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_171470:
    // 0x171470: 0x27a628d0  addiu       $a2, $sp, 0x28D0
    ctx->pc = 0x171470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 10448));
label_171474:
    // 0x171474: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x171474u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_171478:
    // 0x171478: 0xe7a028d0  swc1        $f0, 0x28D0($sp)
    ctx->pc = 0x171478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10448), bits); }
label_17147c:
    // 0x17147c: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x17147cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_171480:
    // 0x171480: 0xe7a028e0  swc1        $f0, 0x28E0($sp)
    ctx->pc = 0x171480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10464), bits); }
label_171484:
    // 0x171484: 0x46031000  add.s       $f0, $f2, $f3
    ctx->pc = 0x171484u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_171488:
    // 0x171488: 0xe7a028d4  swc1        $f0, 0x28D4($sp)
    ctx->pc = 0x171488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10452), bits); }
label_17148c:
    // 0x17148c: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x17148cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_171490:
    // 0x171490: 0xe7a028e4  swc1        $f0, 0x28E4($sp)
    ctx->pc = 0x171490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10468), bits); }
label_171494:
    // 0x171494: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x171494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171498:
    // 0x171498: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x171498u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_17149c:
    // 0x17149c: 0xafa328dc  sw          $v1, 0x28DC($sp)
    ctx->pc = 0x17149cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10460), GPR_U32(ctx, 3));
label_1714a0:
    // 0x1714a0: 0xafa328ec  sw          $v1, 0x28EC($sp)
    ctx->pc = 0x1714a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10476), GPR_U32(ctx, 3));
label_1714a4:
    // 0x1714a4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1714a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1714a8:
    // 0x1714a8: 0xe7a128d8  swc1        $f1, 0x28D8($sp)
    ctx->pc = 0x1714a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10456), bits); }
label_1714ac:
    // 0x1714ac: 0xe7a028e8  swc1        $f0, 0x28E8($sp)
    ctx->pc = 0x1714acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10472), bits); }
label_1714b0:
    // 0x1714b0: 0x8c590d00  lw          $t9, 0xD00($v0)
    ctx->pc = 0x1714b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3328)));
label_1714b4:
    // 0x1714b4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1714b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1714b8:
    // 0x1714b8: 0x320f809  jalr        $t9
label_1714bc:
    if (ctx->pc == 0x1714BCu) {
        ctx->pc = 0x1714BCu;
            // 0x1714bc: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x1714C0u;
        goto label_1714c0;
    }
    ctx->pc = 0x1714B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1714C0u);
        ctx->pc = 0x1714BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1714B8u;
            // 0x1714bc: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1714C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1714C0u; }
            if (ctx->pc != 0x1714C0u) { return; }
        }
        }
    }
    ctx->pc = 0x1714C0u;
label_1714c0:
    // 0x1714c0: 0x8e84007c  lw          $a0, 0x7C($s4)
    ctx->pc = 0x1714c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
label_1714c4:
    // 0x1714c4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_1714c8:
    if (ctx->pc == 0x1714C8u) {
        ctx->pc = 0x1714C8u;
            // 0x1714c8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1714CCu;
        goto label_1714cc;
    }
    ctx->pc = 0x1714C4u;
    {
        const bool branch_taken_0x1714c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1714C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1714C4u;
            // 0x1714c8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1714c4) {
            ctx->pc = 0x1714F8u;
            goto label_1714f8;
        }
    }
    ctx->pc = 0x1714CCu;
label_1714cc:
    // 0x1714cc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1714ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1714d0:
    // 0x1714d0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1714d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1714d4:
    // 0x1714d4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1714d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1714d8:
    // 0x1714d8: 0x524023  subu        $t0, $v0, $s2
    ctx->pc = 0x1714d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1714dc:
    // 0x1714dc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1714dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1714e0:
    // 0x1714e0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1714e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1714e4:
    // 0x1714e4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1714e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1714e8:
    // 0x1714e8: 0x27a728d0  addiu       $a3, $sp, 0x28D0
    ctx->pc = 0x1714e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 10448));
label_1714ec:
    // 0x1714ec: 0xc0a3248  jal         func_28C920
label_1714f0:
    if (ctx->pc == 0x1714F0u) {
        ctx->pc = 0x1714F0u;
            // 0x1714f0: 0x244600d0  addiu       $a2, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->pc = 0x1714F4u;
        goto label_1714f4;
    }
    ctx->pc = 0x1714ECu;
    SET_GPR_U32(ctx, 31, 0x1714F4u);
    ctx->pc = 0x1714F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1714ECu;
            // 0x1714f0: 0x244600d0  addiu       $a2, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C920u;
    if (runtime->hasFunction(0x28C920u)) {
        auto targetFn = runtime->lookupFunction(0x28C920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1714F4u; }
        if (ctx->pc != 0x1714F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PickupCollision__19CTreasureBoxManagerFPfP6CCPoly9mgVu0FBOXi_0x28c920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1714F4u; }
        if (ctx->pc != 0x1714F4u) { return; }
    }
    ctx->pc = 0x1714F4u;
label_1714f4:
    // 0x1714f4: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1714f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1714f8:
    // 0x1714f8: 0xc0ba55c  jal         func_2E9570
label_1714fc:
    if (ctx->pc == 0x1714FCu) {
        ctx->pc = 0x171500u;
        goto label_171500;
    }
    ctx->pc = 0x1714F8u;
    SET_GPR_U32(ctx, 31, 0x171500u);
    ctx->pc = 0x2E9570u;
    if (runtime->hasFunction(0x2E9570u)) {
        auto targetFn = runtime->lookupFunction(0x2E9570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171500u; }
        if (ctx->pc != 0x171500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSphidaPtr__Fv_0x2e9570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171500u; }
        if (ctx->pc != 0x171500u) { return; }
    }
    ctx->pc = 0x171500u;
label_171500:
    // 0x171500: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_171504:
    if (ctx->pc == 0x171504u) {
        ctx->pc = 0x171504u;
            // 0x171504: 0x122080  sll         $a0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x171508u;
        goto label_171508;
    }
    ctx->pc = 0x171500u;
    {
        const bool branch_taken_0x171500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171500u;
            // 0x171504: 0x122080  sll         $a0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171500) {
            ctx->pc = 0x171534u;
            goto label_171534;
        }
    }
    ctx->pc = 0x171508u;
label_171508:
    // 0x171508: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x171508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_17150c:
    // 0x17150c: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x17150cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_171510:
    // 0x171510: 0x724023  subu        $t0, $v1, $s2
    ctx->pc = 0x171510u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_171514:
    // 0x171514: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x171514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_171518:
    // 0x171518: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x171518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_17151c:
    // 0x17151c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17151cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171520:
    // 0x171520: 0x27a728d0  addiu       $a3, $sp, 0x28D0
    ctx->pc = 0x171520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 10448));
label_171524:
    // 0x171524: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x171524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_171528:
    // 0x171528: 0xc0baf28  jal         func_2EBCA0
label_17152c:
    if (ctx->pc == 0x17152Cu) {
        ctx->pc = 0x17152Cu;
            // 0x17152c: 0x244600d0  addiu       $a2, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->pc = 0x171530u;
        goto label_171530;
    }
    ctx->pc = 0x171528u;
    SET_GPR_U32(ctx, 31, 0x171530u);
    ctx->pc = 0x17152Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171528u;
            // 0x17152c: 0x244600d0  addiu       $a2, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBCA0u;
    if (runtime->hasFunction(0x2EBCA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171530u; }
        if (ctx->pc != 0x171530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PickupCollision__7CSphidaFPfP6CCPoly9mgVu0FBOXi_0x2ebca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171530u; }
        if (ctx->pc != 0x171530u) { return; }
    }
    ctx->pc = 0x171530u;
label_171530:
    // 0x171530: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x171530u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_171534:
    // 0x171534: 0xc622010c  lwc1        $f2, 0x10C($s1)
    ctx->pc = 0x171534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_171538:
    // 0x171538: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x171538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_17153c:
    // 0x17153c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17153cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_171540:
    // 0x171540: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x171540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_171544:
    // 0x171544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171548:
    // 0x171548: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x171548u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17154c:
    // 0x17154c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x17154cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_171550:
    // 0x171550: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x171550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_171554:
    // 0x171554: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x171554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_171558:
    // 0x171558: 0x26270910  addiu       $a3, $s1, 0x910
    ctx->pc = 0x171558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 2320));
label_17155c:
    // 0x17155c: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x17155cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_171560:
    // 0x171560: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x171560u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171564:
    // 0x171564: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x171564u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_171568:
    // 0x171568: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x171568u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_17156c:
    // 0x17156c: 0xc053d7c  jal         func_14F5F0
label_171570:
    if (ctx->pc == 0x171570u) {
        ctx->pc = 0x171570u;
            // 0x171570: 0xe6200910  swc1        $f0, 0x910($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2320), bits); }
        ctx->pc = 0x171574u;
        goto label_171574;
    }
    ctx->pc = 0x17156Cu;
    SET_GPR_U32(ctx, 31, 0x171574u);
    ctx->pc = 0x171570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17156Cu;
            // 0x171570: 0xe6200910  swc1        $f0, 0x910($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2320), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F5F0u;
    if (runtime->hasFunction(0x14F5F0u)) {
        auto targetFn = runtime->lookupFunction(0x14F5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171574u; }
        if (ctx->pc != 0x171574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MoveCheck__FPfPfPfP13MoveCheckInfoP6CCPolyii_0x14f5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171574u; }
        if (ctx->pc != 0x171574u) { return; }
    }
    ctx->pc = 0x171574u;
label_171574:
    // 0x171574: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x171574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_171578:
    // 0x171578: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x171578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17157c:
    // 0x17157c: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x17157cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_171580:
    // 0x171580: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x171580u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_171584:
    // 0x171584: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x171584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_171588:
    // 0x171588: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x171588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17158c:
    // 0x17158c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17158cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_171590:
    // 0x171590: 0xc0683a8  jal         func_1A0EA0
label_171594:
    if (ctx->pc == 0x171594u) {
        ctx->pc = 0x171594u;
            // 0x171594: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x171598u;
        goto label_171598;
    }
    ctx->pc = 0x171590u;
    SET_GPR_U32(ctx, 31, 0x171598u);
    ctx->pc = 0x171594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171590u;
            // 0x171594: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171598u; }
        if (ctx->pc != 0x171598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171598u; }
        if (ctx->pc != 0x171598u) { return; }
    }
    ctx->pc = 0x171598u;
label_171598:
    // 0x171598: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x171598u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17159c:
    // 0x17159c: 0x8e220918  lw          $v0, 0x918($s1)
    ctx->pc = 0x17159cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2328)));
label_1715a0:
    // 0x1715a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1715a4:
    if (ctx->pc == 0x1715A4u) {
        ctx->pc = 0x1715A8u;
        goto label_1715a8;
    }
    ctx->pc = 0x1715A0u;
    {
        const bool branch_taken_0x1715a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1715a0) {
            ctx->pc = 0x1715D0u;
            goto label_1715d0;
        }
    }
    ctx->pc = 0x1715A8u;
label_1715a8:
    // 0x1715a8: 0x86220962  lh          $v0, 0x962($s1)
    ctx->pc = 0x1715a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2402)));
label_1715ac:
    // 0x1715ac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1715b0:
    if (ctx->pc == 0x1715B0u) {
        ctx->pc = 0x1715B4u;
        goto label_1715b4;
    }
    ctx->pc = 0x1715ACu;
    {
        const bool branch_taken_0x1715ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1715ac) {
            ctx->pc = 0x1715C4u;
            goto label_1715c4;
        }
    }
    ctx->pc = 0x1715B4u;
label_1715b4:
    // 0x1715b4: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_1715b8:
    if (ctx->pc == 0x1715B8u) {
        ctx->pc = 0x1715BCu;
        goto label_1715bc;
    }
    ctx->pc = 0x1715B4u;
    {
        const bool branch_taken_0x1715b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1715b4) {
            ctx->pc = 0x1715C4u;
            goto label_1715c4;
        }
    }
    ctx->pc = 0x1715BCu;
label_1715bc:
    // 0x1715bc: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x1715bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_1715c0:
    // 0x1715c0: 0x0  nop
    ctx->pc = 0x1715c0u;
    // NOP
label_1715c4:
    // 0x1715c4: 0xae220580  sw          $v0, 0x580($s1)
    ctx->pc = 0x1715c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1408), GPR_U32(ctx, 2));
label_1715c8:
    // 0x1715c8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1715cc:
    if (ctx->pc == 0x1715CCu) {
        ctx->pc = 0x1715CCu;
            // 0x1715cc: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->pc = 0x1715D0u;
        goto label_1715d0;
    }
    ctx->pc = 0x1715C8u;
    {
        const bool branch_taken_0x1715c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1715CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1715C8u;
            // 0x1715cc: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1715c8) {
            ctx->pc = 0x171648u;
            goto label_171648;
        }
    }
    ctx->pc = 0x1715D0u;
label_1715d0:
    // 0x1715d0: 0x86c30000  lh          $v1, 0x0($s6)
    ctx->pc = 0x1715d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_1715d4:
    // 0x1715d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1715d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1715d8:
    // 0x1715d8: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_1715dc:
    if (ctx->pc == 0x1715DCu) {
        ctx->pc = 0x1715DCu;
            // 0x1715dc: 0x27a30084  addiu       $v1, $sp, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
        ctx->pc = 0x1715E0u;
        goto label_1715e0;
    }
    ctx->pc = 0x1715D8u;
    {
        const bool branch_taken_0x1715d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1715DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1715D8u;
            // 0x1715dc: 0x27a30084  addiu       $v1, $sp, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1715d8) {
            ctx->pc = 0x171614u;
            goto label_171614;
        }
    }
    ctx->pc = 0x1715E0u;
label_1715e0:
    // 0x1715e0: 0x27a30084  addiu       $v1, $sp, 0x84
    ctx->pc = 0x1715e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_1715e4:
    // 0x1715e4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1715e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1715e8:
    // 0x1715e8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1715e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1715ec:
    // 0x1715ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1715ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1715f0:
    // 0x1715f0: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x1715f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
label_1715f4:
    // 0x1715f4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1715f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1715f8:
    // 0x1715f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1715f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1715fc:
    // 0x1715fc: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1715fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_171600:
    // 0x171600: 0x0  nop
    ctx->pc = 0x171600u;
    // NOP
label_171604:
    // 0x171604: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_171608:
    if (ctx->pc == 0x171608u) {
        ctx->pc = 0x171608u;
            // 0x171608: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x17160Cu;
        goto label_17160c;
    }
    ctx->pc = 0x171604u;
    {
        const bool branch_taken_0x171604 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x171608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171604u;
            // 0x171608: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171604) {
            ctx->pc = 0x171640u;
            goto label_171640;
        }
    }
    ctx->pc = 0x17160Cu;
label_17160c:
    // 0x17160c: 0x1000000c  b           . + 4 + (0xC << 2)
label_171610:
    if (ctx->pc == 0x171610u) {
        ctx->pc = 0x171610u;
            // 0x171610: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x171614u;
        goto label_171614;
    }
    ctx->pc = 0x17160Cu;
    {
        const bool branch_taken_0x17160c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17160Cu;
            // 0x171610: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17160c) {
            ctx->pc = 0x171640u;
            goto label_171640;
        }
    }
    ctx->pc = 0x171614u;
label_171614:
    // 0x171614: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x171614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_171618:
    // 0x171618: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x171618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17161c:
    // 0x17161c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17161cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171620:
    // 0x171620: 0x3c02c060  lui         $v0, 0xC060
    ctx->pc = 0x171620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49248 << 16));
label_171624:
    // 0x171624: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x171624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_171628:
    // 0x171628: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x171628u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_17162c:
    // 0x17162c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x17162cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_171630:
    // 0x171630: 0x0  nop
    ctx->pc = 0x171630u;
    // NOP
label_171634:
    // 0x171634: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_171638:
    if (ctx->pc == 0x171638u) {
        ctx->pc = 0x171638u;
            // 0x171638: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x17163Cu;
        goto label_17163c;
    }
    ctx->pc = 0x171634u;
    {
        const bool branch_taken_0x171634 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x171638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171634u;
            // 0x171638: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171634) {
            ctx->pc = 0x171640u;
            goto label_171640;
        }
    }
    ctx->pc = 0x17163Cu;
label_17163c:
    // 0x17163c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x17163cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_171640:
    // 0x171640: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x171640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_171644:
    // 0x171644: 0xae220580  sw          $v0, 0x580($s1)
    ctx->pc = 0x171644u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1408), GPR_U32(ctx, 2));
label_171648:
    // 0x171648: 0x27a300c4  addiu       $v1, $sp, 0xC4
    ctx->pc = 0x171648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_17164c:
    // 0x17164c: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x17164cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
label_171650:
    // 0x171650: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x171650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_171654:
    // 0x171654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171658:
    // 0x171658: 0x0  nop
    ctx->pc = 0x171658u;
    // NOP
label_17165c:
    // 0x17165c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17165cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_171660:
    // 0x171660: 0x0  nop
    ctx->pc = 0x171660u;
    // NOP
label_171664:
    // 0x171664: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_171668:
    if (ctx->pc == 0x171668u) {
        ctx->pc = 0x171668u;
            // 0x171668: 0x3c0243fa  lui         $v0, 0x43FA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
        ctx->pc = 0x17166Cu;
        goto label_17166c;
    }
    ctx->pc = 0x171664u;
    {
        const bool branch_taken_0x171664 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x171668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171664u;
            // 0x171668: 0x3c0243fa  lui         $v0, 0x43FA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171664) {
            ctx->pc = 0x171670u;
            goto label_171670;
        }
    }
    ctx->pc = 0x17166Cu;
label_17166c:
    // 0x17166c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x17166cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_171670:
    // 0x171670: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x171670u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_171674:
    // 0x171674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x171674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_171678:
    // 0x171678: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x171678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_17167c:
    // 0x17167c: 0x320f809  jalr        $t9
label_171680:
    if (ctx->pc == 0x171680u) {
        ctx->pc = 0x171680u;
            // 0x171680: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x171684u;
        goto label_171684;
    }
    ctx->pc = 0x17167Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x171684u);
        ctx->pc = 0x171680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17167Cu;
            // 0x171680: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x171684u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x171684u; }
            if (ctx->pc != 0x171684u) { return; }
        }
        }
    }
    ctx->pc = 0x171684u;
label_171684:
    // 0x171684: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x171684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_171688:
    // 0x171688: 0xc041c5c  jal         func_107170
label_17168c:
    if (ctx->pc == 0x17168Cu) {
        ctx->pc = 0x17168Cu;
            // 0x17168c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x171690u;
        goto label_171690;
    }
    ctx->pc = 0x171688u;
    SET_GPR_U32(ctx, 31, 0x171690u);
    ctx->pc = 0x17168Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171688u;
            // 0x17168c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171690u; }
        if (ctx->pc != 0x171690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171690u; }
        if (ctx->pc != 0x171690u) { return; }
    }
    ctx->pc = 0x171690u;
label_171690:
    // 0x171690: 0x8622071c  lh          $v0, 0x71C($s1)
    ctx->pc = 0x171690u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1820)));
label_171694:
    // 0x171694: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_171698:
    if (ctx->pc == 0x171698u) {
        ctx->pc = 0x17169Cu;
        goto label_17169c;
    }
    ctx->pc = 0x171694u;
    {
        const bool branch_taken_0x171694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x171694) {
            ctx->pc = 0x171704u;
            goto label_171704;
        }
    }
    ctx->pc = 0x17169Cu;
label_17169c:
    // 0x17169c: 0x86c30000  lh          $v1, 0x0($s6)
    ctx->pc = 0x17169cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_1716a0:
    // 0x1716a0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1716a4:
    if (ctx->pc == 0x1716A4u) {
        ctx->pc = 0x1716A4u;
            // 0x1716a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1716A8u;
        goto label_1716a8;
    }
    ctx->pc = 0x1716A0u;
    {
        const bool branch_taken_0x1716a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1716A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1716A0u;
            // 0x1716a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1716a0) {
            ctx->pc = 0x1716B0u;
            goto label_1716b0;
        }
    }
    ctx->pc = 0x1716A8u;
label_1716a8:
    // 0x1716a8: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_1716ac:
    if (ctx->pc == 0x1716ACu) {
        ctx->pc = 0x1716B0u;
        goto label_1716b0;
    }
    ctx->pc = 0x1716A8u;
    {
        const bool branch_taken_0x1716a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1716a8) {
            ctx->pc = 0x171704u;
            goto label_171704;
        }
    }
    ctx->pc = 0x1716B0u;
label_1716b0:
    // 0x1716b0: 0x8e220918  lw          $v0, 0x918($s1)
    ctx->pc = 0x1716b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2328)));
label_1716b4:
    // 0x1716b4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1716b8:
    if (ctx->pc == 0x1716B8u) {
        ctx->pc = 0x1716BCu;
        goto label_1716bc;
    }
    ctx->pc = 0x1716B4u;
    {
        const bool branch_taken_0x1716b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1716b4) {
            ctx->pc = 0x171704u;
            goto label_171704;
        }
    }
    ctx->pc = 0x1716BCu;
label_1716bc:
    // 0x1716bc: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1716bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1716c0:
    // 0x1716c0: 0x3c02c060  lui         $v0, 0xC060
    ctx->pc = 0x1716c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49248 << 16));
label_1716c4:
    // 0x1716c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1716c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1716c8:
    // 0x1716c8: 0x0  nop
    ctx->pc = 0x1716c8u;
    // NOP
label_1716cc:
    // 0x1716cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1716ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1716d0:
    // 0x1716d0: 0x0  nop
    ctx->pc = 0x1716d0u;
    // NOP
label_1716d4:
    // 0x1716d4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_1716d8:
    if (ctx->pc == 0x1716D8u) {
        ctx->pc = 0x1716DCu;
        goto label_1716dc;
    }
    ctx->pc = 0x1716D4u;
    {
        const bool branch_taken_0x1716d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1716d4) {
            ctx->pc = 0x171704u;
            goto label_171704;
        }
    }
    ctx->pc = 0x1716DCu;
label_1716dc:
    // 0x1716dc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1716dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1716e0:
    // 0x1716e0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1716e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1716e4:
    // 0x1716e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1716e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1716e8:
    // 0x1716e8: 0x24a53768  addiu       $a1, $a1, 0x3768
    ctx->pc = 0x1716e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14184));
label_1716ec:
    // 0x1716ec: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1716ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1716f0:
    // 0x1716f0: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x1716f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_1716f4:
    // 0x1716f4: 0x320f809  jalr        $t9
label_1716f8:
    if (ctx->pc == 0x1716F8u) {
        ctx->pc = 0x1716F8u;
            // 0x1716f8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1716FCu;
        goto label_1716fc;
    }
    ctx->pc = 0x1716F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1716FCu);
        ctx->pc = 0x1716F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1716F4u;
            // 0x1716f8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1716FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1716FCu; }
            if (ctx->pc != 0x1716FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1716FCu;
label_1716fc:
    // 0x1716fc: 0x240205dc  addiu       $v0, $zero, 0x5DC
    ctx->pc = 0x1716fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
label_171700:
    // 0x171700: 0xa6220710  sh          $v0, 0x710($s1)
    ctx->pc = 0x171700u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1808), (uint16_t)GPR_U32(ctx, 2));
label_171704:
    // 0x171704: 0x8e220918  lw          $v0, 0x918($s1)
    ctx->pc = 0x171704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2328)));
label_171708:
    // 0x171708: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_17170c:
    if (ctx->pc == 0x17170Cu) {
        ctx->pc = 0x17170Cu;
            // 0x17170c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171710u;
        goto label_171710;
    }
    ctx->pc = 0x171708u;
    {
        const bool branch_taken_0x171708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17170Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171708u;
            // 0x17170c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171708) {
            ctx->pc = 0x171714u;
            goto label_171714;
        }
    }
    ctx->pc = 0x171710u;
label_171710:
    // 0x171710: 0xa220076c  sb          $zero, 0x76C($s1)
    ctx->pc = 0x171710u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1900), (uint8_t)GPR_U32(ctx, 0));
label_171714:
    // 0x171714: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x171714u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171718:
    // 0x171718: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x171718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
label_17171c:
    // 0x17171c: 0x24530a20  addiu       $s3, $v0, 0xA20
    ctx->pc = 0x17171cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 2592));
label_171720:
    // 0x171720: 0x80420a20  lb          $v0, 0xA20($v0)
    ctx->pc = 0x171720u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2592)));
label_171724:
    // 0x171724: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
label_171728:
    if (ctx->pc == 0x171728u) {
        ctx->pc = 0x17172Cu;
        goto label_17172c;
    }
    ctx->pc = 0x171724u;
    {
        const bool branch_taken_0x171724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171724) {
            ctx->pc = 0x171844u;
            goto label_171844;
        }
    }
    ctx->pc = 0x17172Cu;
label_17172c:
    // 0x17172c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x17172cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_171730:
    // 0x171730: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x171730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_171734:
    // 0x171734: 0x8f390108  lw          $t9, 0x108($t9)
    ctx->pc = 0x171734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 264)));
label_171738:
    // 0x171738: 0x320f809  jalr        $t9
label_17173c:
    if (ctx->pc == 0x17173Cu) {
        ctx->pc = 0x17173Cu;
            // 0x17173c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171740u;
        goto label_171740;
    }
    ctx->pc = 0x171738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x171740u);
        ctx->pc = 0x17173Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171738u;
            // 0x17173c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x171740u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x171740u; }
            if (ctx->pc != 0x171740u) { return; }
        }
        }
    }
    ctx->pc = 0x171740u;
label_171740:
    // 0x171740: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x171740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_171744:
    // 0x171744: 0x14a00025  bnez        $a1, . + 4 + (0x25 << 2)
label_171748:
    if (ctx->pc == 0x171748u) {
        ctx->pc = 0x17174Cu;
        goto label_17174c;
    }
    ctx->pc = 0x171744u;
    {
        const bool branch_taken_0x171744 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x171744) {
            ctx->pc = 0x1717DCu;
            goto label_1717dc;
        }
    }
    ctx->pc = 0x17174Cu;
label_17174c:
    // 0x17174c: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x17174cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_171750:
    // 0x171750: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x171750u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_171754:
    // 0x171754: 0x0  nop
    ctx->pc = 0x171754u;
    // NOP
label_171758:
    // 0x171758: 0x4501003a  bc1t        . + 4 + (0x3A << 2)
label_17175c:
    if (ctx->pc == 0x17175Cu) {
        ctx->pc = 0x171760u;
        goto label_171760;
    }
    ctx->pc = 0x171758u;
    {
        const bool branch_taken_0x171758 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x171758) {
            ctx->pc = 0x171844u;
            goto label_171844;
        }
    }
    ctx->pc = 0x171760u;
label_171760:
    // 0x171760: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x171760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_171764:
    // 0x171764: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x171764u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_171768:
    // 0x171768: 0x0  nop
    ctx->pc = 0x171768u;
    // NOP
label_17176c:
    // 0x17176c: 0x45000035  bc1f        . + 4 + (0x35 << 2)
label_171770:
    if (ctx->pc == 0x171770u) {
        ctx->pc = 0x171770u;
            // 0x171770: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x171774u;
        goto label_171774;
    }
    ctx->pc = 0x17176Cu;
    {
        const bool branch_taken_0x17176c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x171770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17176Cu;
            // 0x171770: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17176c) {
            ctx->pc = 0x171844u;
            goto label_171844;
        }
    }
    ctx->pc = 0x171774u;
label_171774:
    // 0x171774: 0xc06e9c0  jal         func_1BA700
label_171778:
    if (ctx->pc == 0x171778u) {
        ctx->pc = 0x171778u;
            // 0x171778: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->pc = 0x17177Cu;
        goto label_17177c;
    }
    ctx->pc = 0x171774u;
    SET_GPR_U32(ctx, 31, 0x17177Cu);
    ctx->pc = 0x171778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171774u;
            // 0x171778: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA700u;
    if (runtime->hasFunction(0x1BA700u)) {
        auto targetFn = runtime->lookupFunction(0x1BA700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17177Cu; }
        if (ctx->pc != 0x17177Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPrim__11CColPrimManFv_0x1ba700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17177Cu; }
        if (ctx->pc != 0x17177Cu) { return; }
    }
    ctx->pc = 0x17177Cu;
label_17177c:
    // 0x17177c: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x17177cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
label_171780:
    // 0x171780: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x171780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_171784:
    // 0x171784: 0x1080002f  beqz        $a0, . + 4 + (0x2F << 2)
label_171788:
    if (ctx->pc == 0x171788u) {
        ctx->pc = 0x17178Cu;
        goto label_17178c;
    }
    ctx->pc = 0x171784u;
    {
        const bool branch_taken_0x171784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x171784) {
            ctx->pc = 0x171844u;
            goto label_171844;
        }
    }
    ctx->pc = 0x17178Cu;
label_17178c:
    // 0x17178c: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x17178cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_171790:
    // 0x171790: 0xc06e718  jal         func_1B9C60
label_171794:
    if (ctx->pc == 0x171794u) {
        ctx->pc = 0x171794u;
            // 0x171794: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171798u;
        goto label_171798;
    }
    ctx->pc = 0x171790u;
    SET_GPR_U32(ctx, 31, 0x171798u);
    ctx->pc = 0x171794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171790u;
            // 0x171794: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9C60u;
    if (runtime->hasFunction(0x1B9C60u)) {
        auto targetFn = runtime->lookupFunction(0x1B9C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171798u; }
        if (ctx->pc != 0x171798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDamage__8CColPrimFPci_0x1b9c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171798u; }
        if (ctx->pc != 0x171798u) { return; }
    }
    ctx->pc = 0x171798u;
label_171798:
    // 0x171798: 0xc66c0010  lwc1        $f12, 0x10($s3)
    ctx->pc = 0x171798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_17179c:
    // 0x17179c: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x17179cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1717a0:
    // 0x1717a0: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x1717a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1717a4:
    // 0x1717a4: 0xc06e7d4  jal         func_1B9F50
label_1717a8:
    if (ctx->pc == 0x1717A8u) {
        ctx->pc = 0x1717A8u;
            // 0x1717a8: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->pc = 0x1717ACu;
        goto label_1717ac;
    }
    ctx->pc = 0x1717A4u;
    SET_GPR_U32(ctx, 31, 0x1717ACu);
    ctx->pc = 0x1717A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1717A4u;
            // 0x1717a8: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9F50u;
    if (runtime->hasFunction(0x1B9F50u)) {
        auto targetFn = runtime->lookupFunction(0x1B9F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717ACu; }
        if (ctx->pc != 0x1717ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCoord__8CColPrimFP8mgCFrameP8mgCFramef_0x1b9f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717ACu; }
        if (ctx->pc != 0x1717ACu) { return; }
    }
    ctx->pc = 0x1717ACu;
label_1717ac:
    // 0x1717ac: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x1717acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1717b0:
    // 0x1717b0: 0xc07a260  jal         func_1E8980
label_1717b4:
    if (ctx->pc == 0x1717B4u) {
        ctx->pc = 0x1717B4u;
            // 0x1717b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1717B8u;
        goto label_1717b8;
    }
    ctx->pc = 0x1717B0u;
    SET_GPR_U32(ctx, 31, 0x1717B8u);
    ctx->pc = 0x1717B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1717B0u;
            // 0x1717b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8980u;
    if (runtime->hasFunction(0x1E8980u)) {
        auto targetFn = runtime->lookupFunction(0x1E8980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717B8u; }
        if (ctx->pc != 0x1717B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDamageParam__FP8CColPrimi_0x1e8980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717B8u; }
        if (ctx->pc != 0x1717B8u) { return; }
    }
    ctx->pc = 0x1717B8u;
label_1717b8:
    // 0x1717b8: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1717b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1717bc:
    // 0x1717bc: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x1717bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1717c0:
    // 0x1717c0: 0xc4410088  lwc1        $f1, 0x88($v0)
    ctx->pc = 0x1717c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1717c4:
    // 0x1717c4: 0x24530088  addiu       $s3, $v0, 0x88
    ctx->pc = 0x1717c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
label_1717c8:
    // 0x1717c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1717c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1717cc:
    // 0x1717cc: 0xc0a248c  jal         func_289230
label_1717d0:
    if (ctx->pc == 0x1717D0u) {
        ctx->pc = 0x1717D0u;
            // 0x1717d0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1717D4u;
        goto label_1717d4;
    }
    ctx->pc = 0x1717CCu;
    SET_GPR_U32(ctx, 31, 0x1717D4u);
    ctx->pc = 0x1717D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1717CCu;
            // 0x1717d0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717D4u; }
        if (ctx->pc != 0x1717D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717D4u; }
        if (ctx->pc != 0x1717D4u) { return; }
    }
    ctx->pc = 0x1717D4u;
label_1717d4:
    // 0x1717d4: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1717d8:
    if (ctx->pc == 0x1717D8u) {
        ctx->pc = 0x1717D8u;
            // 0x1717d8: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1717DCu;
        goto label_1717dc;
    }
    ctx->pc = 0x1717D4u;
    {
        const bool branch_taken_0x1717d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1717D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1717D4u;
            // 0x1717d8: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1717d4) {
            ctx->pc = 0x171844u;
            goto label_171844;
        }
    }
    ctx->pc = 0x1717DCu;
label_1717dc:
    // 0x1717dc: 0x0  nop
    ctx->pc = 0x1717dcu;
    // NOP
label_1717e0:
    // 0x1717e0: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x1717e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1717e4:
    // 0x1717e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1717e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1717e8:
    // 0x1717e8: 0x0  nop
    ctx->pc = 0x1717e8u;
    // NOP
label_1717ec:
    // 0x1717ec: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1717f0:
    if (ctx->pc == 0x1717F0u) {
        ctx->pc = 0x1717F4u;
        goto label_1717f4;
    }
    ctx->pc = 0x1717ECu;
    {
        const bool branch_taken_0x1717ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1717ec) {
            ctx->pc = 0x171808u;
            goto label_171808;
        }
    }
    ctx->pc = 0x1717F4u;
label_1717f4:
    // 0x1717f4: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x1717f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1717f8:
    // 0x1717f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1717f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1717fc:
    // 0x1717fc: 0x0  nop
    ctx->pc = 0x1717fcu;
    // NOP
label_171800:
    // 0x171800: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_171804:
    if (ctx->pc == 0x171804u) {
        ctx->pc = 0x171808u;
        goto label_171808;
    }
    ctx->pc = 0x171800u;
    {
        const bool branch_taken_0x171800 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x171800) {
            ctx->pc = 0x17181Cu;
            goto label_17181c;
        }
    }
    ctx->pc = 0x171808u;
label_171808:
    // 0x171808: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x171808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17180c:
    // 0x17180c: 0xc06e9a0  jal         func_1BA680
label_171810:
    if (ctx->pc == 0x171810u) {
        ctx->pc = 0x171810u;
            // 0x171810: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x171814u;
        goto label_171814;
    }
    ctx->pc = 0x17180Cu;
    SET_GPR_U32(ctx, 31, 0x171814u);
    ctx->pc = 0x171810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17180Cu;
            // 0x171810: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA680u;
    if (runtime->hasFunction(0x1BA680u)) {
        auto targetFn = runtime->lookupFunction(0x1BA680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171814u; }
        if (ctx->pc != 0x171814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Delete__8CColPrimFi_0x1ba680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171814u; }
        if (ctx->pc != 0x171814u) { return; }
    }
    ctx->pc = 0x171814u;
label_171814:
    // 0x171814: 0x1000000b  b           . + 4 + (0xB << 2)
label_171818:
    if (ctx->pc == 0x171818u) {
        ctx->pc = 0x171818u;
            // 0x171818: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x17181Cu;
        goto label_17181c;
    }
    ctx->pc = 0x171814u;
    {
        const bool branch_taken_0x171814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171814u;
            // 0x171818: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171814) {
            ctx->pc = 0x171844u;
            goto label_171844;
        }
    }
    ctx->pc = 0x17181Cu;
label_17181c:
    // 0x17181c: 0x0  nop
    ctx->pc = 0x17181cu;
    // NOP
label_171820:
    // 0x171820: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x171820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_171824:
    // 0x171824: 0xc06ea34  jal         func_1BA8D0
label_171828:
    if (ctx->pc == 0x171828u) {
        ctx->pc = 0x171828u;
            // 0x171828: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->pc = 0x17182Cu;
        goto label_17182c;
    }
    ctx->pc = 0x171824u;
    SET_GPR_U32(ctx, 31, 0x17182Cu);
    ctx->pc = 0x171828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171824u;
            // 0x171828: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA8D0u;
    if (runtime->hasFunction(0x1BA8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1BA8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17182Cu; }
        if (ctx->pc != 0x17182Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsReversVec__11CColPrimManFP8CColPrim_0x1ba8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17182Cu; }
        if (ctx->pc != 0x17182Cu) { return; }
    }
    ctx->pc = 0x17182Cu;
label_17182c:
    // 0x17182c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_171830:
    if (ctx->pc == 0x171830u) {
        ctx->pc = 0x171830u;
            // 0x171830: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x171834u;
        goto label_171834;
    }
    ctx->pc = 0x17182Cu;
    {
        const bool branch_taken_0x17182c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17182Cu;
            // 0x171830: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17182c) {
            ctx->pc = 0x171844u;
            goto label_171844;
        }
    }
    ctx->pc = 0x171834u;
label_171834:
    // 0x171834: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x171834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171838:
    // 0x171838: 0xa04300c0  sb          $v1, 0xC0($v0)
    ctx->pc = 0x171838u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 192), (uint8_t)GPR_U32(ctx, 3));
label_17183c:
    // 0x17183c: 0xc06e93c  jal         func_1BA4F0
label_171840:
    if (ctx->pc == 0x171840u) {
        ctx->pc = 0x171840u;
            // 0x171840: 0x244500d0  addiu       $a1, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->pc = 0x171844u;
        goto label_171844;
    }
    ctx->pc = 0x17183Cu;
    SET_GPR_U32(ctx, 31, 0x171844u);
    ctx->pc = 0x171840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17183Cu;
            // 0x171840: 0x244500d0  addiu       $a1, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA4F0u;
    if (runtime->hasFunction(0x1BA4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1BA4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171844u; }
        if (ctx->pc != 0x171844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReversVec__8CColPrimFPf_0x1ba4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171844u; }
        if (ctx->pc != 0x171844u) { return; }
    }
    ctx->pc = 0x171844u;
label_171844:
    // 0x171844: 0x0  nop
    ctx->pc = 0x171844u;
    // NOP
label_171848:
    // 0x171848: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x171848u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_17184c:
    // 0x17184c: 0x2a42000b  slti        $v0, $s2, 0xB
    ctx->pc = 0x17184cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)11) ? 1 : 0);
label_171850:
    // 0x171850: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
label_171854:
    if (ctx->pc == 0x171854u) {
        ctx->pc = 0x171854u;
            // 0x171854: 0x26b50028  addiu       $s5, $s5, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
        ctx->pc = 0x171858u;
        goto label_171858;
    }
    ctx->pc = 0x171850u;
    {
        const bool branch_taken_0x171850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171850u;
            // 0x171854: 0x26b50028  addiu       $s5, $s5, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171850) {
            ctx->pc = 0x171718u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_171718;
        }
    }
    ctx->pc = 0x171858u;
label_171858:
    // 0x171858: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x171858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_17185c:
    // 0x17185c: 0xc067d34  jal         func_19F4D0
label_171860:
    if (ctx->pc == 0x171860u) {
        ctx->pc = 0x171860u;
            // 0x171860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171864u;
        goto label_171864;
    }
    ctx->pc = 0x17185Cu;
    SET_GPR_U32(ctx, 31, 0x171864u);
    ctx->pc = 0x171860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17185Cu;
            // 0x171860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F4D0u;
    if (runtime->hasFunction(0x19F4D0u)) {
        auto targetFn = runtime->lookupFunction(0x19F4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171864u; }
        if (ctx->pc != 0x171864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPalletNo__16CBattleCharaInfoFi_0x19f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171864u; }
        if (ctx->pc != 0x171864u) { return; }
    }
    ctx->pc = 0x171864u;
label_171864:
    // 0x171864: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
label_171868:
    if (ctx->pc == 0x171868u) {
        ctx->pc = 0x171868u;
            // 0x171868: 0x30520001  andi        $s2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x17186Cu;
        goto label_17186c;
    }
    ctx->pc = 0x171864u;
    {
        const bool branch_taken_0x171864 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x171868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171864u;
            // 0x171868: 0x30520001  andi        $s2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x171864) {
            ctx->pc = 0x1718C8u;
            goto label_1718c8;
        }
    }
    ctx->pc = 0x17186Cu;
label_17186c:
    // 0x17186c: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
label_171870:
    if (ctx->pc == 0x171870u) {
        ctx->pc = 0x171870u;
            // 0x171870: 0x2b043  sra         $s6, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 1));
        ctx->pc = 0x171874u;
        goto label_171874;
    }
    ctx->pc = 0x17186Cu;
    {
        const bool branch_taken_0x17186c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x171870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17186Cu;
            // 0x171870: 0x2b043  sra         $s6, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17186c) {
            ctx->pc = 0x171884u;
            goto label_171884;
        }
    }
    ctx->pc = 0x171874u;
label_171874:
    // 0x171874: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
label_171878:
    if (ctx->pc == 0x171878u) {
        ctx->pc = 0x17187Cu;
        goto label_17187c;
    }
    ctx->pc = 0x171874u;
    {
        const bool branch_taken_0x171874 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x171874) {
            ctx->pc = 0x171880u;
            goto label_171880;
        }
    }
    ctx->pc = 0x17187Cu;
label_17187c:
    // 0x17187c: 0x2652fffe  addiu       $s2, $s2, -0x2
    ctx->pc = 0x17187cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
label_171880:
    // 0x171880: 0x2b043  sra         $s6, $v0, 1
    ctx->pc = 0x171880u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 1));
label_171884:
    // 0x171884: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_171888:
    if (ctx->pc == 0x171888u) {
        ctx->pc = 0x171888u;
            // 0x171888: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17188Cu;
        goto label_17188c;
    }
    ctx->pc = 0x171884u;
    {
        const bool branch_taken_0x171884 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x171888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171884u;
            // 0x171888: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171884) {
            ctx->pc = 0x171894u;
            goto label_171894;
        }
    }
    ctx->pc = 0x17188Cu;
label_17188c:
    // 0x17188c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x17188cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_171890:
    // 0x171890: 0x3b043  sra         $s6, $v1, 1
    ctx->pc = 0x171890u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 3), 1));
label_171894:
    // 0x171894: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x171894u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171898:
    // 0x171898: 0x2351821  addu        $v1, $s1, $s5
    ctx->pc = 0x171898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
label_17189c:
    // 0x17189c: 0x8c640570  lw          $a0, 0x570($v1)
    ctx->pc = 0x17189cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1392)));
label_1718a0:
    // 0x1718a0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1718a4:
    if (ctx->pc == 0x1718A4u) {
        ctx->pc = 0x1718A4u;
            // 0x1718a4: 0x122980  sll         $a1, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->pc = 0x1718A8u;
        goto label_1718a8;
    }
    ctx->pc = 0x1718A0u;
    {
        const bool branch_taken_0x1718a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1718A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1718A0u;
            // 0x1718a4: 0x122980  sll         $a1, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1718a0) {
            ctx->pc = 0x1718B8u;
            goto label_1718b8;
        }
    }
    ctx->pc = 0x1718A8u;
label_1718a8:
    // 0x1718a8: 0x163140  sll         $a2, $s6, 5
    ctx->pc = 0x1718a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 22), 5));
label_1718ac:
    // 0x1718ac: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1718acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1718b0:
    // 0x1718b0: 0xc0bd730  jal         func_2F5CC0
label_1718b4:
    if (ctx->pc == 0x1718B4u) {
        ctx->pc = 0x1718B4u;
            // 0x1718b4: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x1718B8u;
        goto label_1718b8;
    }
    ctx->pc = 0x1718B0u;
    SET_GPR_U32(ctx, 31, 0x1718B8u);
    ctx->pc = 0x1718B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1718B0u;
            // 0x1718b4: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CC0u;
    if (runtime->hasFunction(0x2F5CC0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1718B8u; }
        if (ctx->pc != 0x1718B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexture__17CSWordAfterEffectFiiii_0x2f5cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1718B8u; }
        if (ctx->pc != 0x1718B8u) { return; }
    }
    ctx->pc = 0x1718B8u;
label_1718b8:
    // 0x1718b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1718b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1718bc:
    // 0x1718bc: 0x2a630003  slti        $v1, $s3, 0x3
    ctx->pc = 0x1718bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
label_1718c0:
    // 0x1718c0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_1718c4:
    if (ctx->pc == 0x1718C4u) {
        ctx->pc = 0x1718C4u;
            // 0x1718c4: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x1718C8u;
        goto label_1718c8;
    }
    ctx->pc = 0x1718C0u;
    {
        const bool branch_taken_0x1718c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1718C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1718C0u;
            // 0x1718c4: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1718c0) {
            ctx->pc = 0x171898u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_171898;
        }
    }
    ctx->pc = 0x1718C8u;
label_1718c8:
    // 0x1718c8: 0x8684009e  lh          $a0, 0x9E($s4)
    ctx->pc = 0x1718c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 158)));
label_1718cc:
    // 0x1718cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1718ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1718d0:
    // 0x1718d0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1718d4:
    if (ctx->pc == 0x1718D4u) {
        ctx->pc = 0x1718D8u;
        goto label_1718d8;
    }
    ctx->pc = 0x1718D0u;
    {
        const bool branch_taken_0x1718d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1718d0) {
            ctx->pc = 0x1718E8u;
            goto label_1718e8;
        }
    }
    ctx->pc = 0x1718D8u;
label_1718d8:
    // 0x1718d8: 0x86250770  lh          $a1, 0x770($s1)
    ctx->pc = 0x1718d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1904)));
label_1718dc:
    // 0x1718dc: 0xc05afb8  jal         func_16BEE0
label_1718e0:
    if (ctx->pc == 0x1718E0u) {
        ctx->pc = 0x1718E0u;
            // 0x1718e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1718E4u;
        goto label_1718e4;
    }
    ctx->pc = 0x1718DCu;
    SET_GPR_U32(ctx, 31, 0x1718E4u);
    ctx->pc = 0x1718E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1718DCu;
            // 0x1718e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BEE0u;
    if (runtime->hasFunction(0x16BEE0u)) {
        auto targetFn = runtime->lookupFunction(0x16BEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1718E4u; }
        if (ctx->pc != 0x1718E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RockOn_TargetSel__FP6CScenei_0x16bee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1718E4u; }
        if (ctx->pc != 0x1718E4u) { return; }
    }
    ctx->pc = 0x1718E4u;
label_1718e4:
    // 0x1718e4: 0xa6220770  sh          $v0, 0x770($s1)
    ctx->pc = 0x1718e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1904), (uint16_t)GPR_U32(ctx, 2));
label_1718e8:
    // 0x1718e8: 0x8683009e  lh          $v1, 0x9E($s4)
    ctx->pc = 0x1718e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 158)));
label_1718ec:
    // 0x1718ec: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
label_1718f0:
    if (ctx->pc == 0x1718F0u) {
        ctx->pc = 0x1718F4u;
        goto label_1718f4;
    }
    ctx->pc = 0x1718ECu;
    {
        const bool branch_taken_0x1718ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1718ec) {
            ctx->pc = 0x171990u;
            goto label_171990;
        }
    }
    ctx->pc = 0x1718F4u;
label_1718f4:
    // 0x1718f4: 0x86220772  lh          $v0, 0x772($s1)
    ctx->pc = 0x1718f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1906)));
label_1718f8:
    // 0x1718f8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1718fc:
    if (ctx->pc == 0x1718FCu) {
        ctx->pc = 0x1718FCu;
            // 0x1718fc: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->pc = 0x171900u;
        goto label_171900;
    }
    ctx->pc = 0x1718F8u;
    {
        const bool branch_taken_0x1718f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1718FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1718F8u;
            // 0x1718fc: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1718f8) {
            ctx->pc = 0x171928u;
            goto label_171928;
        }
    }
    ctx->pc = 0x171900u;
label_171900:
    // 0x171900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171904:
    // 0x171904: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x171904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_171908:
    // 0x171908: 0x27a528fc  addiu       $a1, $sp, 0x28FC
    ctx->pc = 0x171908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10492));
label_17190c:
    // 0x17190c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17190cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171910:
    // 0x171910: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x171910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_171914:
    // 0x171914: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x171914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_171918:
    // 0x171918: 0xc05b008  jal         func_16C020
label_17191c:
    if (ctx->pc == 0x17191Cu) {
        ctx->pc = 0x17191Cu;
            // 0x17191c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171920u;
        goto label_171920;
    }
    ctx->pc = 0x171918u;
    SET_GPR_U32(ctx, 31, 0x171920u);
    ctx->pc = 0x17191Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171918u;
            // 0x17191c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16C020u;
    if (runtime->hasFunction(0x16C020u)) {
        auto targetFn = runtime->lookupFunction(0x16C020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171920u; }
        if (ctx->pc != 0x171920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DistCheck_Action2__FP6CSceneffPfiPi_0x16c020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171920u; }
        if (ctx->pc != 0x171920u) { return; }
    }
    ctx->pc = 0x171920u;
label_171920:
    // 0x171920: 0x1000001b  b           . + 4 + (0x1B << 2)
label_171924:
    if (ctx->pc == 0x171924u) {
        ctx->pc = 0x171924u;
            // 0x171924: 0xa6220770  sh          $v0, 0x770($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1904), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x171928u;
        goto label_171928;
    }
    ctx->pc = 0x171920u;
    {
        const bool branch_taken_0x171920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171920u;
            // 0x171924: 0xa6220770  sh          $v0, 0x770($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1904), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171920) {
            ctx->pc = 0x171990u;
            goto label_171990;
        }
    }
    ctx->pc = 0x171928u;
label_171928:
    // 0x171928: 0x86250770  lh          $a1, 0x770($s1)
    ctx->pc = 0x171928u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1904)));
label_17192c:
    // 0x17192c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x17192cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_171930:
    // 0x171930: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x171930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_171934:
    // 0x171934: 0xc05b0d4  jal         func_16C350
label_171938:
    if (ctx->pc == 0x171938u) {
        ctx->pc = 0x171938u;
            // 0x171938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17193Cu;
        goto label_17193c;
    }
    ctx->pc = 0x171934u;
    SET_GPR_U32(ctx, 31, 0x17193Cu);
    ctx->pc = 0x171938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171934u;
            // 0x171938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16C350u;
    if (runtime->hasFunction(0x16C350u)) {
        auto targetFn = runtime->lookupFunction(0x16C350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17193Cu; }
        if (ctx->pc != 0x17193Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Check_LockOn__FP6CScenefi_0x16c350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17193Cu; }
        if (ctx->pc != 0x17193Cu) { return; }
    }
    ctx->pc = 0x17193Cu;
label_17193c:
    // 0x17193c: 0xa6220772  sh          $v0, 0x772($s1)
    ctx->pc = 0x17193cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1906), (uint16_t)GPR_U32(ctx, 2));
label_171940:
    // 0x171940: 0x86230772  lh          $v1, 0x772($s1)
    ctx->pc = 0x171940u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1906)));
label_171944:
    // 0x171944: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_171948:
    if (ctx->pc == 0x171948u) {
        ctx->pc = 0x17194Cu;
        goto label_17194c;
    }
    ctx->pc = 0x171944u;
    {
        const bool branch_taken_0x171944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x171944) {
            ctx->pc = 0x171990u;
            goto label_171990;
        }
    }
    ctx->pc = 0x17194Cu;
label_17194c:
    // 0x17194c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x17194cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_171950:
    // 0x171950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171954:
    // 0x171954: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x171954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_171958:
    // 0x171958: 0x27a528fc  addiu       $a1, $sp, 0x28FC
    ctx->pc = 0x171958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10492));
label_17195c:
    // 0x17195c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17195cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171960:
    // 0x171960: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x171960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_171964:
    // 0x171964: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x171964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_171968:
    // 0x171968: 0xc05b008  jal         func_16C020
label_17196c:
    if (ctx->pc == 0x17196Cu) {
        ctx->pc = 0x17196Cu;
            // 0x17196c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171970u;
        goto label_171970;
    }
    ctx->pc = 0x171968u;
    SET_GPR_U32(ctx, 31, 0x171970u);
    ctx->pc = 0x17196Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171968u;
            // 0x17196c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16C020u;
    if (runtime->hasFunction(0x16C020u)) {
        auto targetFn = runtime->lookupFunction(0x16C020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171970u; }
        if (ctx->pc != 0x171970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DistCheck_Action2__FP6CSceneffPfiPi_0x16c020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171970u; }
        if (ctx->pc != 0x171970u) { return; }
    }
    ctx->pc = 0x171970u;
label_171970:
    // 0x171970: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x171970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_171974:
    // 0x171974: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_171978:
    if (ctx->pc == 0x171978u) {
        ctx->pc = 0x17197Cu;
        goto label_17197c;
    }
    ctx->pc = 0x171974u;
    {
        const bool branch_taken_0x171974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x171974) {
            ctx->pc = 0x17198Cu;
            goto label_17198c;
        }
    }
    ctx->pc = 0x17197Cu;
label_17197c:
    // 0x17197c: 0xa6220770  sh          $v0, 0x770($s1)
    ctx->pc = 0x17197cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1904), (uint16_t)GPR_U32(ctx, 2));
label_171980:
    // 0x171980: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x171980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171984:
    // 0x171984: 0x10000002  b           . + 4 + (0x2 << 2)
label_171988:
    if (ctx->pc == 0x171988u) {
        ctx->pc = 0x171988u;
            // 0x171988: 0xa6230772  sh          $v1, 0x772($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1906), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x17198Cu;
        goto label_17198c;
    }
    ctx->pc = 0x171984u;
    {
        const bool branch_taken_0x171984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171984u;
            // 0x171988: 0xa6230772  sh          $v1, 0x772($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1906), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171984) {
            ctx->pc = 0x171990u;
            goto label_171990;
        }
    }
    ctx->pc = 0x17198Cu;
label_17198c:
    // 0x17198c: 0xa6220770  sh          $v0, 0x770($s1)
    ctx->pc = 0x17198cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1904), (uint16_t)GPR_U32(ctx, 2));
label_171990:
    // 0x171990: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x171990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_171994:
    // 0x171994: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x171994u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_171998:
    // 0x171998: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x171998u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17199c:
    // 0x17199c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17199cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1719a0:
    // 0x1719a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1719a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1719a4:
    // 0x1719a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1719a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1719a8:
    // 0x1719a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1719a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1719ac:
    // 0x1719ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1719acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1719b0:
    // 0x1719b0: 0x3e00008  jr          $ra
label_1719b4:
    if (ctx->pc == 0x1719B4u) {
        ctx->pc = 0x1719B4u;
            // 0x1719b4: 0x27bd2900  addiu       $sp, $sp, 0x2900 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10496));
        ctx->pc = 0x1719B8u;
        goto label_fallthrough_0x1719b0;
    }
    ctx->pc = 0x1719B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1719B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1719B0u;
            // 0x1719b4: 0x27bd2900  addiu       $sp, $sp, 0x2900 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1719b0:
    ctx->pc = 0x1719B8u;
}
