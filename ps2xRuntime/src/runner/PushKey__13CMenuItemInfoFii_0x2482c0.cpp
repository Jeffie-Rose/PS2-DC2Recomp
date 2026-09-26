#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PushKey__13CMenuItemInfoFii
// Address: 0x2482c0 - 0x249e54
void PushKey__13CMenuItemInfoFii_0x2482c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PushKey__13CMenuItemInfoFii_0x2482c0");
#endif

    switch (ctx->pc) {
        case 0x2482c0u: goto label_2482c0;
        case 0x2482c4u: goto label_2482c4;
        case 0x2482c8u: goto label_2482c8;
        case 0x2482ccu: goto label_2482cc;
        case 0x2482d0u: goto label_2482d0;
        case 0x2482d4u: goto label_2482d4;
        case 0x2482d8u: goto label_2482d8;
        case 0x2482dcu: goto label_2482dc;
        case 0x2482e0u: goto label_2482e0;
        case 0x2482e4u: goto label_2482e4;
        case 0x2482e8u: goto label_2482e8;
        case 0x2482ecu: goto label_2482ec;
        case 0x2482f0u: goto label_2482f0;
        case 0x2482f4u: goto label_2482f4;
        case 0x2482f8u: goto label_2482f8;
        case 0x2482fcu: goto label_2482fc;
        case 0x248300u: goto label_248300;
        case 0x248304u: goto label_248304;
        case 0x248308u: goto label_248308;
        case 0x24830cu: goto label_24830c;
        case 0x248310u: goto label_248310;
        case 0x248314u: goto label_248314;
        case 0x248318u: goto label_248318;
        case 0x24831cu: goto label_24831c;
        case 0x248320u: goto label_248320;
        case 0x248324u: goto label_248324;
        case 0x248328u: goto label_248328;
        case 0x24832cu: goto label_24832c;
        case 0x248330u: goto label_248330;
        case 0x248334u: goto label_248334;
        case 0x248338u: goto label_248338;
        case 0x24833cu: goto label_24833c;
        case 0x248340u: goto label_248340;
        case 0x248344u: goto label_248344;
        case 0x248348u: goto label_248348;
        case 0x24834cu: goto label_24834c;
        case 0x248350u: goto label_248350;
        case 0x248354u: goto label_248354;
        case 0x248358u: goto label_248358;
        case 0x24835cu: goto label_24835c;
        case 0x248360u: goto label_248360;
        case 0x248364u: goto label_248364;
        case 0x248368u: goto label_248368;
        case 0x24836cu: goto label_24836c;
        case 0x248370u: goto label_248370;
        case 0x248374u: goto label_248374;
        case 0x248378u: goto label_248378;
        case 0x24837cu: goto label_24837c;
        case 0x248380u: goto label_248380;
        case 0x248384u: goto label_248384;
        case 0x248388u: goto label_248388;
        case 0x24838cu: goto label_24838c;
        case 0x248390u: goto label_248390;
        case 0x248394u: goto label_248394;
        case 0x248398u: goto label_248398;
        case 0x24839cu: goto label_24839c;
        case 0x2483a0u: goto label_2483a0;
        case 0x2483a4u: goto label_2483a4;
        case 0x2483a8u: goto label_2483a8;
        case 0x2483acu: goto label_2483ac;
        case 0x2483b0u: goto label_2483b0;
        case 0x2483b4u: goto label_2483b4;
        case 0x2483b8u: goto label_2483b8;
        case 0x2483bcu: goto label_2483bc;
        case 0x2483c0u: goto label_2483c0;
        case 0x2483c4u: goto label_2483c4;
        case 0x2483c8u: goto label_2483c8;
        case 0x2483ccu: goto label_2483cc;
        case 0x2483d0u: goto label_2483d0;
        case 0x2483d4u: goto label_2483d4;
        case 0x2483d8u: goto label_2483d8;
        case 0x2483dcu: goto label_2483dc;
        case 0x2483e0u: goto label_2483e0;
        case 0x2483e4u: goto label_2483e4;
        case 0x2483e8u: goto label_2483e8;
        case 0x2483ecu: goto label_2483ec;
        case 0x2483f0u: goto label_2483f0;
        case 0x2483f4u: goto label_2483f4;
        case 0x2483f8u: goto label_2483f8;
        case 0x2483fcu: goto label_2483fc;
        case 0x248400u: goto label_248400;
        case 0x248404u: goto label_248404;
        case 0x248408u: goto label_248408;
        case 0x24840cu: goto label_24840c;
        case 0x248410u: goto label_248410;
        case 0x248414u: goto label_248414;
        case 0x248418u: goto label_248418;
        case 0x24841cu: goto label_24841c;
        case 0x248420u: goto label_248420;
        case 0x248424u: goto label_248424;
        case 0x248428u: goto label_248428;
        case 0x24842cu: goto label_24842c;
        case 0x248430u: goto label_248430;
        case 0x248434u: goto label_248434;
        case 0x248438u: goto label_248438;
        case 0x24843cu: goto label_24843c;
        case 0x248440u: goto label_248440;
        case 0x248444u: goto label_248444;
        case 0x248448u: goto label_248448;
        case 0x24844cu: goto label_24844c;
        case 0x248450u: goto label_248450;
        case 0x248454u: goto label_248454;
        case 0x248458u: goto label_248458;
        case 0x24845cu: goto label_24845c;
        case 0x248460u: goto label_248460;
        case 0x248464u: goto label_248464;
        case 0x248468u: goto label_248468;
        case 0x24846cu: goto label_24846c;
        case 0x248470u: goto label_248470;
        case 0x248474u: goto label_248474;
        case 0x248478u: goto label_248478;
        case 0x24847cu: goto label_24847c;
        case 0x248480u: goto label_248480;
        case 0x248484u: goto label_248484;
        case 0x248488u: goto label_248488;
        case 0x24848cu: goto label_24848c;
        case 0x248490u: goto label_248490;
        case 0x248494u: goto label_248494;
        case 0x248498u: goto label_248498;
        case 0x24849cu: goto label_24849c;
        case 0x2484a0u: goto label_2484a0;
        case 0x2484a4u: goto label_2484a4;
        case 0x2484a8u: goto label_2484a8;
        case 0x2484acu: goto label_2484ac;
        case 0x2484b0u: goto label_2484b0;
        case 0x2484b4u: goto label_2484b4;
        case 0x2484b8u: goto label_2484b8;
        case 0x2484bcu: goto label_2484bc;
        case 0x2484c0u: goto label_2484c0;
        case 0x2484c4u: goto label_2484c4;
        case 0x2484c8u: goto label_2484c8;
        case 0x2484ccu: goto label_2484cc;
        case 0x2484d0u: goto label_2484d0;
        case 0x2484d4u: goto label_2484d4;
        case 0x2484d8u: goto label_2484d8;
        case 0x2484dcu: goto label_2484dc;
        case 0x2484e0u: goto label_2484e0;
        case 0x2484e4u: goto label_2484e4;
        case 0x2484e8u: goto label_2484e8;
        case 0x2484ecu: goto label_2484ec;
        case 0x2484f0u: goto label_2484f0;
        case 0x2484f4u: goto label_2484f4;
        case 0x2484f8u: goto label_2484f8;
        case 0x2484fcu: goto label_2484fc;
        case 0x248500u: goto label_248500;
        case 0x248504u: goto label_248504;
        case 0x248508u: goto label_248508;
        case 0x24850cu: goto label_24850c;
        case 0x248510u: goto label_248510;
        case 0x248514u: goto label_248514;
        case 0x248518u: goto label_248518;
        case 0x24851cu: goto label_24851c;
        case 0x248520u: goto label_248520;
        case 0x248524u: goto label_248524;
        case 0x248528u: goto label_248528;
        case 0x24852cu: goto label_24852c;
        case 0x248530u: goto label_248530;
        case 0x248534u: goto label_248534;
        case 0x248538u: goto label_248538;
        case 0x24853cu: goto label_24853c;
        case 0x248540u: goto label_248540;
        case 0x248544u: goto label_248544;
        case 0x248548u: goto label_248548;
        case 0x24854cu: goto label_24854c;
        case 0x248550u: goto label_248550;
        case 0x248554u: goto label_248554;
        case 0x248558u: goto label_248558;
        case 0x24855cu: goto label_24855c;
        case 0x248560u: goto label_248560;
        case 0x248564u: goto label_248564;
        case 0x248568u: goto label_248568;
        case 0x24856cu: goto label_24856c;
        case 0x248570u: goto label_248570;
        case 0x248574u: goto label_248574;
        case 0x248578u: goto label_248578;
        case 0x24857cu: goto label_24857c;
        case 0x248580u: goto label_248580;
        case 0x248584u: goto label_248584;
        case 0x248588u: goto label_248588;
        case 0x24858cu: goto label_24858c;
        case 0x248590u: goto label_248590;
        case 0x248594u: goto label_248594;
        case 0x248598u: goto label_248598;
        case 0x24859cu: goto label_24859c;
        case 0x2485a0u: goto label_2485a0;
        case 0x2485a4u: goto label_2485a4;
        case 0x2485a8u: goto label_2485a8;
        case 0x2485acu: goto label_2485ac;
        case 0x2485b0u: goto label_2485b0;
        case 0x2485b4u: goto label_2485b4;
        case 0x2485b8u: goto label_2485b8;
        case 0x2485bcu: goto label_2485bc;
        case 0x2485c0u: goto label_2485c0;
        case 0x2485c4u: goto label_2485c4;
        case 0x2485c8u: goto label_2485c8;
        case 0x2485ccu: goto label_2485cc;
        case 0x2485d0u: goto label_2485d0;
        case 0x2485d4u: goto label_2485d4;
        case 0x2485d8u: goto label_2485d8;
        case 0x2485dcu: goto label_2485dc;
        case 0x2485e0u: goto label_2485e0;
        case 0x2485e4u: goto label_2485e4;
        case 0x2485e8u: goto label_2485e8;
        case 0x2485ecu: goto label_2485ec;
        case 0x2485f0u: goto label_2485f0;
        case 0x2485f4u: goto label_2485f4;
        case 0x2485f8u: goto label_2485f8;
        case 0x2485fcu: goto label_2485fc;
        case 0x248600u: goto label_248600;
        case 0x248604u: goto label_248604;
        case 0x248608u: goto label_248608;
        case 0x24860cu: goto label_24860c;
        case 0x248610u: goto label_248610;
        case 0x248614u: goto label_248614;
        case 0x248618u: goto label_248618;
        case 0x24861cu: goto label_24861c;
        case 0x248620u: goto label_248620;
        case 0x248624u: goto label_248624;
        case 0x248628u: goto label_248628;
        case 0x24862cu: goto label_24862c;
        case 0x248630u: goto label_248630;
        case 0x248634u: goto label_248634;
        case 0x248638u: goto label_248638;
        case 0x24863cu: goto label_24863c;
        case 0x248640u: goto label_248640;
        case 0x248644u: goto label_248644;
        case 0x248648u: goto label_248648;
        case 0x24864cu: goto label_24864c;
        case 0x248650u: goto label_248650;
        case 0x248654u: goto label_248654;
        case 0x248658u: goto label_248658;
        case 0x24865cu: goto label_24865c;
        case 0x248660u: goto label_248660;
        case 0x248664u: goto label_248664;
        case 0x248668u: goto label_248668;
        case 0x24866cu: goto label_24866c;
        case 0x248670u: goto label_248670;
        case 0x248674u: goto label_248674;
        case 0x248678u: goto label_248678;
        case 0x24867cu: goto label_24867c;
        case 0x248680u: goto label_248680;
        case 0x248684u: goto label_248684;
        case 0x248688u: goto label_248688;
        case 0x24868cu: goto label_24868c;
        case 0x248690u: goto label_248690;
        case 0x248694u: goto label_248694;
        case 0x248698u: goto label_248698;
        case 0x24869cu: goto label_24869c;
        case 0x2486a0u: goto label_2486a0;
        case 0x2486a4u: goto label_2486a4;
        case 0x2486a8u: goto label_2486a8;
        case 0x2486acu: goto label_2486ac;
        case 0x2486b0u: goto label_2486b0;
        case 0x2486b4u: goto label_2486b4;
        case 0x2486b8u: goto label_2486b8;
        case 0x2486bcu: goto label_2486bc;
        case 0x2486c0u: goto label_2486c0;
        case 0x2486c4u: goto label_2486c4;
        case 0x2486c8u: goto label_2486c8;
        case 0x2486ccu: goto label_2486cc;
        case 0x2486d0u: goto label_2486d0;
        case 0x2486d4u: goto label_2486d4;
        case 0x2486d8u: goto label_2486d8;
        case 0x2486dcu: goto label_2486dc;
        case 0x2486e0u: goto label_2486e0;
        case 0x2486e4u: goto label_2486e4;
        case 0x2486e8u: goto label_2486e8;
        case 0x2486ecu: goto label_2486ec;
        case 0x2486f0u: goto label_2486f0;
        case 0x2486f4u: goto label_2486f4;
        case 0x2486f8u: goto label_2486f8;
        case 0x2486fcu: goto label_2486fc;
        case 0x248700u: goto label_248700;
        case 0x248704u: goto label_248704;
        case 0x248708u: goto label_248708;
        case 0x24870cu: goto label_24870c;
        case 0x248710u: goto label_248710;
        case 0x248714u: goto label_248714;
        case 0x248718u: goto label_248718;
        case 0x24871cu: goto label_24871c;
        case 0x248720u: goto label_248720;
        case 0x248724u: goto label_248724;
        case 0x248728u: goto label_248728;
        case 0x24872cu: goto label_24872c;
        case 0x248730u: goto label_248730;
        case 0x248734u: goto label_248734;
        case 0x248738u: goto label_248738;
        case 0x24873cu: goto label_24873c;
        case 0x248740u: goto label_248740;
        case 0x248744u: goto label_248744;
        case 0x248748u: goto label_248748;
        case 0x24874cu: goto label_24874c;
        case 0x248750u: goto label_248750;
        case 0x248754u: goto label_248754;
        case 0x248758u: goto label_248758;
        case 0x24875cu: goto label_24875c;
        case 0x248760u: goto label_248760;
        case 0x248764u: goto label_248764;
        case 0x248768u: goto label_248768;
        case 0x24876cu: goto label_24876c;
        case 0x248770u: goto label_248770;
        case 0x248774u: goto label_248774;
        case 0x248778u: goto label_248778;
        case 0x24877cu: goto label_24877c;
        case 0x248780u: goto label_248780;
        case 0x248784u: goto label_248784;
        case 0x248788u: goto label_248788;
        case 0x24878cu: goto label_24878c;
        case 0x248790u: goto label_248790;
        case 0x248794u: goto label_248794;
        case 0x248798u: goto label_248798;
        case 0x24879cu: goto label_24879c;
        case 0x2487a0u: goto label_2487a0;
        case 0x2487a4u: goto label_2487a4;
        case 0x2487a8u: goto label_2487a8;
        case 0x2487acu: goto label_2487ac;
        case 0x2487b0u: goto label_2487b0;
        case 0x2487b4u: goto label_2487b4;
        case 0x2487b8u: goto label_2487b8;
        case 0x2487bcu: goto label_2487bc;
        case 0x2487c0u: goto label_2487c0;
        case 0x2487c4u: goto label_2487c4;
        case 0x2487c8u: goto label_2487c8;
        case 0x2487ccu: goto label_2487cc;
        case 0x2487d0u: goto label_2487d0;
        case 0x2487d4u: goto label_2487d4;
        case 0x2487d8u: goto label_2487d8;
        case 0x2487dcu: goto label_2487dc;
        case 0x2487e0u: goto label_2487e0;
        case 0x2487e4u: goto label_2487e4;
        case 0x2487e8u: goto label_2487e8;
        case 0x2487ecu: goto label_2487ec;
        case 0x2487f0u: goto label_2487f0;
        case 0x2487f4u: goto label_2487f4;
        case 0x2487f8u: goto label_2487f8;
        case 0x2487fcu: goto label_2487fc;
        case 0x248800u: goto label_248800;
        case 0x248804u: goto label_248804;
        case 0x248808u: goto label_248808;
        case 0x24880cu: goto label_24880c;
        case 0x248810u: goto label_248810;
        case 0x248814u: goto label_248814;
        case 0x248818u: goto label_248818;
        case 0x24881cu: goto label_24881c;
        case 0x248820u: goto label_248820;
        case 0x248824u: goto label_248824;
        case 0x248828u: goto label_248828;
        case 0x24882cu: goto label_24882c;
        case 0x248830u: goto label_248830;
        case 0x248834u: goto label_248834;
        case 0x248838u: goto label_248838;
        case 0x24883cu: goto label_24883c;
        case 0x248840u: goto label_248840;
        case 0x248844u: goto label_248844;
        case 0x248848u: goto label_248848;
        case 0x24884cu: goto label_24884c;
        case 0x248850u: goto label_248850;
        case 0x248854u: goto label_248854;
        case 0x248858u: goto label_248858;
        case 0x24885cu: goto label_24885c;
        case 0x248860u: goto label_248860;
        case 0x248864u: goto label_248864;
        case 0x248868u: goto label_248868;
        case 0x24886cu: goto label_24886c;
        case 0x248870u: goto label_248870;
        case 0x248874u: goto label_248874;
        case 0x248878u: goto label_248878;
        case 0x24887cu: goto label_24887c;
        case 0x248880u: goto label_248880;
        case 0x248884u: goto label_248884;
        case 0x248888u: goto label_248888;
        case 0x24888cu: goto label_24888c;
        case 0x248890u: goto label_248890;
        case 0x248894u: goto label_248894;
        case 0x248898u: goto label_248898;
        case 0x24889cu: goto label_24889c;
        case 0x2488a0u: goto label_2488a0;
        case 0x2488a4u: goto label_2488a4;
        case 0x2488a8u: goto label_2488a8;
        case 0x2488acu: goto label_2488ac;
        case 0x2488b0u: goto label_2488b0;
        case 0x2488b4u: goto label_2488b4;
        case 0x2488b8u: goto label_2488b8;
        case 0x2488bcu: goto label_2488bc;
        case 0x2488c0u: goto label_2488c0;
        case 0x2488c4u: goto label_2488c4;
        case 0x2488c8u: goto label_2488c8;
        case 0x2488ccu: goto label_2488cc;
        case 0x2488d0u: goto label_2488d0;
        case 0x2488d4u: goto label_2488d4;
        case 0x2488d8u: goto label_2488d8;
        case 0x2488dcu: goto label_2488dc;
        case 0x2488e0u: goto label_2488e0;
        case 0x2488e4u: goto label_2488e4;
        case 0x2488e8u: goto label_2488e8;
        case 0x2488ecu: goto label_2488ec;
        case 0x2488f0u: goto label_2488f0;
        case 0x2488f4u: goto label_2488f4;
        case 0x2488f8u: goto label_2488f8;
        case 0x2488fcu: goto label_2488fc;
        case 0x248900u: goto label_248900;
        case 0x248904u: goto label_248904;
        case 0x248908u: goto label_248908;
        case 0x24890cu: goto label_24890c;
        case 0x248910u: goto label_248910;
        case 0x248914u: goto label_248914;
        case 0x248918u: goto label_248918;
        case 0x24891cu: goto label_24891c;
        case 0x248920u: goto label_248920;
        case 0x248924u: goto label_248924;
        case 0x248928u: goto label_248928;
        case 0x24892cu: goto label_24892c;
        case 0x248930u: goto label_248930;
        case 0x248934u: goto label_248934;
        case 0x248938u: goto label_248938;
        case 0x24893cu: goto label_24893c;
        case 0x248940u: goto label_248940;
        case 0x248944u: goto label_248944;
        case 0x248948u: goto label_248948;
        case 0x24894cu: goto label_24894c;
        case 0x248950u: goto label_248950;
        case 0x248954u: goto label_248954;
        case 0x248958u: goto label_248958;
        case 0x24895cu: goto label_24895c;
        case 0x248960u: goto label_248960;
        case 0x248964u: goto label_248964;
        case 0x248968u: goto label_248968;
        case 0x24896cu: goto label_24896c;
        case 0x248970u: goto label_248970;
        case 0x248974u: goto label_248974;
        case 0x248978u: goto label_248978;
        case 0x24897cu: goto label_24897c;
        case 0x248980u: goto label_248980;
        case 0x248984u: goto label_248984;
        case 0x248988u: goto label_248988;
        case 0x24898cu: goto label_24898c;
        case 0x248990u: goto label_248990;
        case 0x248994u: goto label_248994;
        case 0x248998u: goto label_248998;
        case 0x24899cu: goto label_24899c;
        case 0x2489a0u: goto label_2489a0;
        case 0x2489a4u: goto label_2489a4;
        case 0x2489a8u: goto label_2489a8;
        case 0x2489acu: goto label_2489ac;
        case 0x2489b0u: goto label_2489b0;
        case 0x2489b4u: goto label_2489b4;
        case 0x2489b8u: goto label_2489b8;
        case 0x2489bcu: goto label_2489bc;
        case 0x2489c0u: goto label_2489c0;
        case 0x2489c4u: goto label_2489c4;
        case 0x2489c8u: goto label_2489c8;
        case 0x2489ccu: goto label_2489cc;
        case 0x2489d0u: goto label_2489d0;
        case 0x2489d4u: goto label_2489d4;
        case 0x2489d8u: goto label_2489d8;
        case 0x2489dcu: goto label_2489dc;
        case 0x2489e0u: goto label_2489e0;
        case 0x2489e4u: goto label_2489e4;
        case 0x2489e8u: goto label_2489e8;
        case 0x2489ecu: goto label_2489ec;
        case 0x2489f0u: goto label_2489f0;
        case 0x2489f4u: goto label_2489f4;
        case 0x2489f8u: goto label_2489f8;
        case 0x2489fcu: goto label_2489fc;
        case 0x248a00u: goto label_248a00;
        case 0x248a04u: goto label_248a04;
        case 0x248a08u: goto label_248a08;
        case 0x248a0cu: goto label_248a0c;
        case 0x248a10u: goto label_248a10;
        case 0x248a14u: goto label_248a14;
        case 0x248a18u: goto label_248a18;
        case 0x248a1cu: goto label_248a1c;
        case 0x248a20u: goto label_248a20;
        case 0x248a24u: goto label_248a24;
        case 0x248a28u: goto label_248a28;
        case 0x248a2cu: goto label_248a2c;
        case 0x248a30u: goto label_248a30;
        case 0x248a34u: goto label_248a34;
        case 0x248a38u: goto label_248a38;
        case 0x248a3cu: goto label_248a3c;
        case 0x248a40u: goto label_248a40;
        case 0x248a44u: goto label_248a44;
        case 0x248a48u: goto label_248a48;
        case 0x248a4cu: goto label_248a4c;
        case 0x248a50u: goto label_248a50;
        case 0x248a54u: goto label_248a54;
        case 0x248a58u: goto label_248a58;
        case 0x248a5cu: goto label_248a5c;
        case 0x248a60u: goto label_248a60;
        case 0x248a64u: goto label_248a64;
        case 0x248a68u: goto label_248a68;
        case 0x248a6cu: goto label_248a6c;
        case 0x248a70u: goto label_248a70;
        case 0x248a74u: goto label_248a74;
        case 0x248a78u: goto label_248a78;
        case 0x248a7cu: goto label_248a7c;
        case 0x248a80u: goto label_248a80;
        case 0x248a84u: goto label_248a84;
        case 0x248a88u: goto label_248a88;
        case 0x248a8cu: goto label_248a8c;
        case 0x248a90u: goto label_248a90;
        case 0x248a94u: goto label_248a94;
        case 0x248a98u: goto label_248a98;
        case 0x248a9cu: goto label_248a9c;
        case 0x248aa0u: goto label_248aa0;
        case 0x248aa4u: goto label_248aa4;
        case 0x248aa8u: goto label_248aa8;
        case 0x248aacu: goto label_248aac;
        case 0x248ab0u: goto label_248ab0;
        case 0x248ab4u: goto label_248ab4;
        case 0x248ab8u: goto label_248ab8;
        case 0x248abcu: goto label_248abc;
        case 0x248ac0u: goto label_248ac0;
        case 0x248ac4u: goto label_248ac4;
        case 0x248ac8u: goto label_248ac8;
        case 0x248accu: goto label_248acc;
        case 0x248ad0u: goto label_248ad0;
        case 0x248ad4u: goto label_248ad4;
        case 0x248ad8u: goto label_248ad8;
        case 0x248adcu: goto label_248adc;
        case 0x248ae0u: goto label_248ae0;
        case 0x248ae4u: goto label_248ae4;
        case 0x248ae8u: goto label_248ae8;
        case 0x248aecu: goto label_248aec;
        case 0x248af0u: goto label_248af0;
        case 0x248af4u: goto label_248af4;
        case 0x248af8u: goto label_248af8;
        case 0x248afcu: goto label_248afc;
        case 0x248b00u: goto label_248b00;
        case 0x248b04u: goto label_248b04;
        case 0x248b08u: goto label_248b08;
        case 0x248b0cu: goto label_248b0c;
        case 0x248b10u: goto label_248b10;
        case 0x248b14u: goto label_248b14;
        case 0x248b18u: goto label_248b18;
        case 0x248b1cu: goto label_248b1c;
        case 0x248b20u: goto label_248b20;
        case 0x248b24u: goto label_248b24;
        case 0x248b28u: goto label_248b28;
        case 0x248b2cu: goto label_248b2c;
        case 0x248b30u: goto label_248b30;
        case 0x248b34u: goto label_248b34;
        case 0x248b38u: goto label_248b38;
        case 0x248b3cu: goto label_248b3c;
        case 0x248b40u: goto label_248b40;
        case 0x248b44u: goto label_248b44;
        case 0x248b48u: goto label_248b48;
        case 0x248b4cu: goto label_248b4c;
        case 0x248b50u: goto label_248b50;
        case 0x248b54u: goto label_248b54;
        case 0x248b58u: goto label_248b58;
        case 0x248b5cu: goto label_248b5c;
        case 0x248b60u: goto label_248b60;
        case 0x248b64u: goto label_248b64;
        case 0x248b68u: goto label_248b68;
        case 0x248b6cu: goto label_248b6c;
        case 0x248b70u: goto label_248b70;
        case 0x248b74u: goto label_248b74;
        case 0x248b78u: goto label_248b78;
        case 0x248b7cu: goto label_248b7c;
        case 0x248b80u: goto label_248b80;
        case 0x248b84u: goto label_248b84;
        case 0x248b88u: goto label_248b88;
        case 0x248b8cu: goto label_248b8c;
        case 0x248b90u: goto label_248b90;
        case 0x248b94u: goto label_248b94;
        case 0x248b98u: goto label_248b98;
        case 0x248b9cu: goto label_248b9c;
        case 0x248ba0u: goto label_248ba0;
        case 0x248ba4u: goto label_248ba4;
        case 0x248ba8u: goto label_248ba8;
        case 0x248bacu: goto label_248bac;
        case 0x248bb0u: goto label_248bb0;
        case 0x248bb4u: goto label_248bb4;
        case 0x248bb8u: goto label_248bb8;
        case 0x248bbcu: goto label_248bbc;
        case 0x248bc0u: goto label_248bc0;
        case 0x248bc4u: goto label_248bc4;
        case 0x248bc8u: goto label_248bc8;
        case 0x248bccu: goto label_248bcc;
        case 0x248bd0u: goto label_248bd0;
        case 0x248bd4u: goto label_248bd4;
        case 0x248bd8u: goto label_248bd8;
        case 0x248bdcu: goto label_248bdc;
        case 0x248be0u: goto label_248be0;
        case 0x248be4u: goto label_248be4;
        case 0x248be8u: goto label_248be8;
        case 0x248becu: goto label_248bec;
        case 0x248bf0u: goto label_248bf0;
        case 0x248bf4u: goto label_248bf4;
        case 0x248bf8u: goto label_248bf8;
        case 0x248bfcu: goto label_248bfc;
        case 0x248c00u: goto label_248c00;
        case 0x248c04u: goto label_248c04;
        case 0x248c08u: goto label_248c08;
        case 0x248c0cu: goto label_248c0c;
        case 0x248c10u: goto label_248c10;
        case 0x248c14u: goto label_248c14;
        case 0x248c18u: goto label_248c18;
        case 0x248c1cu: goto label_248c1c;
        case 0x248c20u: goto label_248c20;
        case 0x248c24u: goto label_248c24;
        case 0x248c28u: goto label_248c28;
        case 0x248c2cu: goto label_248c2c;
        case 0x248c30u: goto label_248c30;
        case 0x248c34u: goto label_248c34;
        case 0x248c38u: goto label_248c38;
        case 0x248c3cu: goto label_248c3c;
        case 0x248c40u: goto label_248c40;
        case 0x248c44u: goto label_248c44;
        case 0x248c48u: goto label_248c48;
        case 0x248c4cu: goto label_248c4c;
        case 0x248c50u: goto label_248c50;
        case 0x248c54u: goto label_248c54;
        case 0x248c58u: goto label_248c58;
        case 0x248c5cu: goto label_248c5c;
        case 0x248c60u: goto label_248c60;
        case 0x248c64u: goto label_248c64;
        case 0x248c68u: goto label_248c68;
        case 0x248c6cu: goto label_248c6c;
        case 0x248c70u: goto label_248c70;
        case 0x248c74u: goto label_248c74;
        case 0x248c78u: goto label_248c78;
        case 0x248c7cu: goto label_248c7c;
        case 0x248c80u: goto label_248c80;
        case 0x248c84u: goto label_248c84;
        case 0x248c88u: goto label_248c88;
        case 0x248c8cu: goto label_248c8c;
        case 0x248c90u: goto label_248c90;
        case 0x248c94u: goto label_248c94;
        case 0x248c98u: goto label_248c98;
        case 0x248c9cu: goto label_248c9c;
        case 0x248ca0u: goto label_248ca0;
        case 0x248ca4u: goto label_248ca4;
        case 0x248ca8u: goto label_248ca8;
        case 0x248cacu: goto label_248cac;
        case 0x248cb0u: goto label_248cb0;
        case 0x248cb4u: goto label_248cb4;
        case 0x248cb8u: goto label_248cb8;
        case 0x248cbcu: goto label_248cbc;
        case 0x248cc0u: goto label_248cc0;
        case 0x248cc4u: goto label_248cc4;
        case 0x248cc8u: goto label_248cc8;
        case 0x248cccu: goto label_248ccc;
        case 0x248cd0u: goto label_248cd0;
        case 0x248cd4u: goto label_248cd4;
        case 0x248cd8u: goto label_248cd8;
        case 0x248cdcu: goto label_248cdc;
        case 0x248ce0u: goto label_248ce0;
        case 0x248ce4u: goto label_248ce4;
        case 0x248ce8u: goto label_248ce8;
        case 0x248cecu: goto label_248cec;
        case 0x248cf0u: goto label_248cf0;
        case 0x248cf4u: goto label_248cf4;
        case 0x248cf8u: goto label_248cf8;
        case 0x248cfcu: goto label_248cfc;
        case 0x248d00u: goto label_248d00;
        case 0x248d04u: goto label_248d04;
        case 0x248d08u: goto label_248d08;
        case 0x248d0cu: goto label_248d0c;
        case 0x248d10u: goto label_248d10;
        case 0x248d14u: goto label_248d14;
        case 0x248d18u: goto label_248d18;
        case 0x248d1cu: goto label_248d1c;
        case 0x248d20u: goto label_248d20;
        case 0x248d24u: goto label_248d24;
        case 0x248d28u: goto label_248d28;
        case 0x248d2cu: goto label_248d2c;
        case 0x248d30u: goto label_248d30;
        case 0x248d34u: goto label_248d34;
        case 0x248d38u: goto label_248d38;
        case 0x248d3cu: goto label_248d3c;
        case 0x248d40u: goto label_248d40;
        case 0x248d44u: goto label_248d44;
        case 0x248d48u: goto label_248d48;
        case 0x248d4cu: goto label_248d4c;
        case 0x248d50u: goto label_248d50;
        case 0x248d54u: goto label_248d54;
        case 0x248d58u: goto label_248d58;
        case 0x248d5cu: goto label_248d5c;
        case 0x248d60u: goto label_248d60;
        case 0x248d64u: goto label_248d64;
        case 0x248d68u: goto label_248d68;
        case 0x248d6cu: goto label_248d6c;
        case 0x248d70u: goto label_248d70;
        case 0x248d74u: goto label_248d74;
        case 0x248d78u: goto label_248d78;
        case 0x248d7cu: goto label_248d7c;
        case 0x248d80u: goto label_248d80;
        case 0x248d84u: goto label_248d84;
        case 0x248d88u: goto label_248d88;
        case 0x248d8cu: goto label_248d8c;
        case 0x248d90u: goto label_248d90;
        case 0x248d94u: goto label_248d94;
        case 0x248d98u: goto label_248d98;
        case 0x248d9cu: goto label_248d9c;
        case 0x248da0u: goto label_248da0;
        case 0x248da4u: goto label_248da4;
        case 0x248da8u: goto label_248da8;
        case 0x248dacu: goto label_248dac;
        case 0x248db0u: goto label_248db0;
        case 0x248db4u: goto label_248db4;
        case 0x248db8u: goto label_248db8;
        case 0x248dbcu: goto label_248dbc;
        case 0x248dc0u: goto label_248dc0;
        case 0x248dc4u: goto label_248dc4;
        case 0x248dc8u: goto label_248dc8;
        case 0x248dccu: goto label_248dcc;
        case 0x248dd0u: goto label_248dd0;
        case 0x248dd4u: goto label_248dd4;
        case 0x248dd8u: goto label_248dd8;
        case 0x248ddcu: goto label_248ddc;
        case 0x248de0u: goto label_248de0;
        case 0x248de4u: goto label_248de4;
        case 0x248de8u: goto label_248de8;
        case 0x248decu: goto label_248dec;
        case 0x248df0u: goto label_248df0;
        case 0x248df4u: goto label_248df4;
        case 0x248df8u: goto label_248df8;
        case 0x248dfcu: goto label_248dfc;
        case 0x248e00u: goto label_248e00;
        case 0x248e04u: goto label_248e04;
        case 0x248e08u: goto label_248e08;
        case 0x248e0cu: goto label_248e0c;
        case 0x248e10u: goto label_248e10;
        case 0x248e14u: goto label_248e14;
        case 0x248e18u: goto label_248e18;
        case 0x248e1cu: goto label_248e1c;
        case 0x248e20u: goto label_248e20;
        case 0x248e24u: goto label_248e24;
        case 0x248e28u: goto label_248e28;
        case 0x248e2cu: goto label_248e2c;
        case 0x248e30u: goto label_248e30;
        case 0x248e34u: goto label_248e34;
        case 0x248e38u: goto label_248e38;
        case 0x248e3cu: goto label_248e3c;
        case 0x248e40u: goto label_248e40;
        case 0x248e44u: goto label_248e44;
        case 0x248e48u: goto label_248e48;
        case 0x248e4cu: goto label_248e4c;
        case 0x248e50u: goto label_248e50;
        case 0x248e54u: goto label_248e54;
        case 0x248e58u: goto label_248e58;
        case 0x248e5cu: goto label_248e5c;
        case 0x248e60u: goto label_248e60;
        case 0x248e64u: goto label_248e64;
        case 0x248e68u: goto label_248e68;
        case 0x248e6cu: goto label_248e6c;
        case 0x248e70u: goto label_248e70;
        case 0x248e74u: goto label_248e74;
        case 0x248e78u: goto label_248e78;
        case 0x248e7cu: goto label_248e7c;
        case 0x248e80u: goto label_248e80;
        case 0x248e84u: goto label_248e84;
        case 0x248e88u: goto label_248e88;
        case 0x248e8cu: goto label_248e8c;
        case 0x248e90u: goto label_248e90;
        case 0x248e94u: goto label_248e94;
        case 0x248e98u: goto label_248e98;
        case 0x248e9cu: goto label_248e9c;
        case 0x248ea0u: goto label_248ea0;
        case 0x248ea4u: goto label_248ea4;
        case 0x248ea8u: goto label_248ea8;
        case 0x248eacu: goto label_248eac;
        case 0x248eb0u: goto label_248eb0;
        case 0x248eb4u: goto label_248eb4;
        case 0x248eb8u: goto label_248eb8;
        case 0x248ebcu: goto label_248ebc;
        case 0x248ec0u: goto label_248ec0;
        case 0x248ec4u: goto label_248ec4;
        case 0x248ec8u: goto label_248ec8;
        case 0x248eccu: goto label_248ecc;
        case 0x248ed0u: goto label_248ed0;
        case 0x248ed4u: goto label_248ed4;
        case 0x248ed8u: goto label_248ed8;
        case 0x248edcu: goto label_248edc;
        case 0x248ee0u: goto label_248ee0;
        case 0x248ee4u: goto label_248ee4;
        case 0x248ee8u: goto label_248ee8;
        case 0x248eecu: goto label_248eec;
        case 0x248ef0u: goto label_248ef0;
        case 0x248ef4u: goto label_248ef4;
        case 0x248ef8u: goto label_248ef8;
        case 0x248efcu: goto label_248efc;
        case 0x248f00u: goto label_248f00;
        case 0x248f04u: goto label_248f04;
        case 0x248f08u: goto label_248f08;
        case 0x248f0cu: goto label_248f0c;
        case 0x248f10u: goto label_248f10;
        case 0x248f14u: goto label_248f14;
        case 0x248f18u: goto label_248f18;
        case 0x248f1cu: goto label_248f1c;
        case 0x248f20u: goto label_248f20;
        case 0x248f24u: goto label_248f24;
        case 0x248f28u: goto label_248f28;
        case 0x248f2cu: goto label_248f2c;
        case 0x248f30u: goto label_248f30;
        case 0x248f34u: goto label_248f34;
        case 0x248f38u: goto label_248f38;
        case 0x248f3cu: goto label_248f3c;
        case 0x248f40u: goto label_248f40;
        case 0x248f44u: goto label_248f44;
        case 0x248f48u: goto label_248f48;
        case 0x248f4cu: goto label_248f4c;
        case 0x248f50u: goto label_248f50;
        case 0x248f54u: goto label_248f54;
        case 0x248f58u: goto label_248f58;
        case 0x248f5cu: goto label_248f5c;
        case 0x248f60u: goto label_248f60;
        case 0x248f64u: goto label_248f64;
        case 0x248f68u: goto label_248f68;
        case 0x248f6cu: goto label_248f6c;
        case 0x248f70u: goto label_248f70;
        case 0x248f74u: goto label_248f74;
        case 0x248f78u: goto label_248f78;
        case 0x248f7cu: goto label_248f7c;
        case 0x248f80u: goto label_248f80;
        case 0x248f84u: goto label_248f84;
        case 0x248f88u: goto label_248f88;
        case 0x248f8cu: goto label_248f8c;
        case 0x248f90u: goto label_248f90;
        case 0x248f94u: goto label_248f94;
        case 0x248f98u: goto label_248f98;
        case 0x248f9cu: goto label_248f9c;
        case 0x248fa0u: goto label_248fa0;
        case 0x248fa4u: goto label_248fa4;
        case 0x248fa8u: goto label_248fa8;
        case 0x248facu: goto label_248fac;
        case 0x248fb0u: goto label_248fb0;
        case 0x248fb4u: goto label_248fb4;
        case 0x248fb8u: goto label_248fb8;
        case 0x248fbcu: goto label_248fbc;
        case 0x248fc0u: goto label_248fc0;
        case 0x248fc4u: goto label_248fc4;
        case 0x248fc8u: goto label_248fc8;
        case 0x248fccu: goto label_248fcc;
        case 0x248fd0u: goto label_248fd0;
        case 0x248fd4u: goto label_248fd4;
        case 0x248fd8u: goto label_248fd8;
        case 0x248fdcu: goto label_248fdc;
        case 0x248fe0u: goto label_248fe0;
        case 0x248fe4u: goto label_248fe4;
        case 0x248fe8u: goto label_248fe8;
        case 0x248fecu: goto label_248fec;
        case 0x248ff0u: goto label_248ff0;
        case 0x248ff4u: goto label_248ff4;
        case 0x248ff8u: goto label_248ff8;
        case 0x248ffcu: goto label_248ffc;
        case 0x249000u: goto label_249000;
        case 0x249004u: goto label_249004;
        case 0x249008u: goto label_249008;
        case 0x24900cu: goto label_24900c;
        case 0x249010u: goto label_249010;
        case 0x249014u: goto label_249014;
        case 0x249018u: goto label_249018;
        case 0x24901cu: goto label_24901c;
        case 0x249020u: goto label_249020;
        case 0x249024u: goto label_249024;
        case 0x249028u: goto label_249028;
        case 0x24902cu: goto label_24902c;
        case 0x249030u: goto label_249030;
        case 0x249034u: goto label_249034;
        case 0x249038u: goto label_249038;
        case 0x24903cu: goto label_24903c;
        case 0x249040u: goto label_249040;
        case 0x249044u: goto label_249044;
        case 0x249048u: goto label_249048;
        case 0x24904cu: goto label_24904c;
        case 0x249050u: goto label_249050;
        case 0x249054u: goto label_249054;
        case 0x249058u: goto label_249058;
        case 0x24905cu: goto label_24905c;
        case 0x249060u: goto label_249060;
        case 0x249064u: goto label_249064;
        case 0x249068u: goto label_249068;
        case 0x24906cu: goto label_24906c;
        case 0x249070u: goto label_249070;
        case 0x249074u: goto label_249074;
        case 0x249078u: goto label_249078;
        case 0x24907cu: goto label_24907c;
        case 0x249080u: goto label_249080;
        case 0x249084u: goto label_249084;
        case 0x249088u: goto label_249088;
        case 0x24908cu: goto label_24908c;
        case 0x249090u: goto label_249090;
        case 0x249094u: goto label_249094;
        case 0x249098u: goto label_249098;
        case 0x24909cu: goto label_24909c;
        case 0x2490a0u: goto label_2490a0;
        case 0x2490a4u: goto label_2490a4;
        case 0x2490a8u: goto label_2490a8;
        case 0x2490acu: goto label_2490ac;
        case 0x2490b0u: goto label_2490b0;
        case 0x2490b4u: goto label_2490b4;
        case 0x2490b8u: goto label_2490b8;
        case 0x2490bcu: goto label_2490bc;
        case 0x2490c0u: goto label_2490c0;
        case 0x2490c4u: goto label_2490c4;
        case 0x2490c8u: goto label_2490c8;
        case 0x2490ccu: goto label_2490cc;
        case 0x2490d0u: goto label_2490d0;
        case 0x2490d4u: goto label_2490d4;
        case 0x2490d8u: goto label_2490d8;
        case 0x2490dcu: goto label_2490dc;
        case 0x2490e0u: goto label_2490e0;
        case 0x2490e4u: goto label_2490e4;
        case 0x2490e8u: goto label_2490e8;
        case 0x2490ecu: goto label_2490ec;
        case 0x2490f0u: goto label_2490f0;
        case 0x2490f4u: goto label_2490f4;
        case 0x2490f8u: goto label_2490f8;
        case 0x2490fcu: goto label_2490fc;
        case 0x249100u: goto label_249100;
        case 0x249104u: goto label_249104;
        case 0x249108u: goto label_249108;
        case 0x24910cu: goto label_24910c;
        case 0x249110u: goto label_249110;
        case 0x249114u: goto label_249114;
        case 0x249118u: goto label_249118;
        case 0x24911cu: goto label_24911c;
        case 0x249120u: goto label_249120;
        case 0x249124u: goto label_249124;
        case 0x249128u: goto label_249128;
        case 0x24912cu: goto label_24912c;
        case 0x249130u: goto label_249130;
        case 0x249134u: goto label_249134;
        case 0x249138u: goto label_249138;
        case 0x24913cu: goto label_24913c;
        case 0x249140u: goto label_249140;
        case 0x249144u: goto label_249144;
        case 0x249148u: goto label_249148;
        case 0x24914cu: goto label_24914c;
        case 0x249150u: goto label_249150;
        case 0x249154u: goto label_249154;
        case 0x249158u: goto label_249158;
        case 0x24915cu: goto label_24915c;
        case 0x249160u: goto label_249160;
        case 0x249164u: goto label_249164;
        case 0x249168u: goto label_249168;
        case 0x24916cu: goto label_24916c;
        case 0x249170u: goto label_249170;
        case 0x249174u: goto label_249174;
        case 0x249178u: goto label_249178;
        case 0x24917cu: goto label_24917c;
        case 0x249180u: goto label_249180;
        case 0x249184u: goto label_249184;
        case 0x249188u: goto label_249188;
        case 0x24918cu: goto label_24918c;
        case 0x249190u: goto label_249190;
        case 0x249194u: goto label_249194;
        case 0x249198u: goto label_249198;
        case 0x24919cu: goto label_24919c;
        case 0x2491a0u: goto label_2491a0;
        case 0x2491a4u: goto label_2491a4;
        case 0x2491a8u: goto label_2491a8;
        case 0x2491acu: goto label_2491ac;
        case 0x2491b0u: goto label_2491b0;
        case 0x2491b4u: goto label_2491b4;
        case 0x2491b8u: goto label_2491b8;
        case 0x2491bcu: goto label_2491bc;
        case 0x2491c0u: goto label_2491c0;
        case 0x2491c4u: goto label_2491c4;
        case 0x2491c8u: goto label_2491c8;
        case 0x2491ccu: goto label_2491cc;
        case 0x2491d0u: goto label_2491d0;
        case 0x2491d4u: goto label_2491d4;
        case 0x2491d8u: goto label_2491d8;
        case 0x2491dcu: goto label_2491dc;
        case 0x2491e0u: goto label_2491e0;
        case 0x2491e4u: goto label_2491e4;
        case 0x2491e8u: goto label_2491e8;
        case 0x2491ecu: goto label_2491ec;
        case 0x2491f0u: goto label_2491f0;
        case 0x2491f4u: goto label_2491f4;
        case 0x2491f8u: goto label_2491f8;
        case 0x2491fcu: goto label_2491fc;
        case 0x249200u: goto label_249200;
        case 0x249204u: goto label_249204;
        case 0x249208u: goto label_249208;
        case 0x24920cu: goto label_24920c;
        case 0x249210u: goto label_249210;
        case 0x249214u: goto label_249214;
        case 0x249218u: goto label_249218;
        case 0x24921cu: goto label_24921c;
        case 0x249220u: goto label_249220;
        case 0x249224u: goto label_249224;
        case 0x249228u: goto label_249228;
        case 0x24922cu: goto label_24922c;
        case 0x249230u: goto label_249230;
        case 0x249234u: goto label_249234;
        case 0x249238u: goto label_249238;
        case 0x24923cu: goto label_24923c;
        case 0x249240u: goto label_249240;
        case 0x249244u: goto label_249244;
        case 0x249248u: goto label_249248;
        case 0x24924cu: goto label_24924c;
        case 0x249250u: goto label_249250;
        case 0x249254u: goto label_249254;
        case 0x249258u: goto label_249258;
        case 0x24925cu: goto label_24925c;
        case 0x249260u: goto label_249260;
        case 0x249264u: goto label_249264;
        case 0x249268u: goto label_249268;
        case 0x24926cu: goto label_24926c;
        case 0x249270u: goto label_249270;
        case 0x249274u: goto label_249274;
        case 0x249278u: goto label_249278;
        case 0x24927cu: goto label_24927c;
        case 0x249280u: goto label_249280;
        case 0x249284u: goto label_249284;
        case 0x249288u: goto label_249288;
        case 0x24928cu: goto label_24928c;
        case 0x249290u: goto label_249290;
        case 0x249294u: goto label_249294;
        case 0x249298u: goto label_249298;
        case 0x24929cu: goto label_24929c;
        case 0x2492a0u: goto label_2492a0;
        case 0x2492a4u: goto label_2492a4;
        case 0x2492a8u: goto label_2492a8;
        case 0x2492acu: goto label_2492ac;
        case 0x2492b0u: goto label_2492b0;
        case 0x2492b4u: goto label_2492b4;
        case 0x2492b8u: goto label_2492b8;
        case 0x2492bcu: goto label_2492bc;
        case 0x2492c0u: goto label_2492c0;
        case 0x2492c4u: goto label_2492c4;
        case 0x2492c8u: goto label_2492c8;
        case 0x2492ccu: goto label_2492cc;
        case 0x2492d0u: goto label_2492d0;
        case 0x2492d4u: goto label_2492d4;
        case 0x2492d8u: goto label_2492d8;
        case 0x2492dcu: goto label_2492dc;
        case 0x2492e0u: goto label_2492e0;
        case 0x2492e4u: goto label_2492e4;
        case 0x2492e8u: goto label_2492e8;
        case 0x2492ecu: goto label_2492ec;
        case 0x2492f0u: goto label_2492f0;
        case 0x2492f4u: goto label_2492f4;
        case 0x2492f8u: goto label_2492f8;
        case 0x2492fcu: goto label_2492fc;
        case 0x249300u: goto label_249300;
        case 0x249304u: goto label_249304;
        case 0x249308u: goto label_249308;
        case 0x24930cu: goto label_24930c;
        case 0x249310u: goto label_249310;
        case 0x249314u: goto label_249314;
        case 0x249318u: goto label_249318;
        case 0x24931cu: goto label_24931c;
        case 0x249320u: goto label_249320;
        case 0x249324u: goto label_249324;
        case 0x249328u: goto label_249328;
        case 0x24932cu: goto label_24932c;
        case 0x249330u: goto label_249330;
        case 0x249334u: goto label_249334;
        case 0x249338u: goto label_249338;
        case 0x24933cu: goto label_24933c;
        case 0x249340u: goto label_249340;
        case 0x249344u: goto label_249344;
        case 0x249348u: goto label_249348;
        case 0x24934cu: goto label_24934c;
        case 0x249350u: goto label_249350;
        case 0x249354u: goto label_249354;
        case 0x249358u: goto label_249358;
        case 0x24935cu: goto label_24935c;
        case 0x249360u: goto label_249360;
        case 0x249364u: goto label_249364;
        case 0x249368u: goto label_249368;
        case 0x24936cu: goto label_24936c;
        case 0x249370u: goto label_249370;
        case 0x249374u: goto label_249374;
        case 0x249378u: goto label_249378;
        case 0x24937cu: goto label_24937c;
        case 0x249380u: goto label_249380;
        case 0x249384u: goto label_249384;
        case 0x249388u: goto label_249388;
        case 0x24938cu: goto label_24938c;
        case 0x249390u: goto label_249390;
        case 0x249394u: goto label_249394;
        case 0x249398u: goto label_249398;
        case 0x24939cu: goto label_24939c;
        case 0x2493a0u: goto label_2493a0;
        case 0x2493a4u: goto label_2493a4;
        case 0x2493a8u: goto label_2493a8;
        case 0x2493acu: goto label_2493ac;
        case 0x2493b0u: goto label_2493b0;
        case 0x2493b4u: goto label_2493b4;
        case 0x2493b8u: goto label_2493b8;
        case 0x2493bcu: goto label_2493bc;
        case 0x2493c0u: goto label_2493c0;
        case 0x2493c4u: goto label_2493c4;
        case 0x2493c8u: goto label_2493c8;
        case 0x2493ccu: goto label_2493cc;
        case 0x2493d0u: goto label_2493d0;
        case 0x2493d4u: goto label_2493d4;
        case 0x2493d8u: goto label_2493d8;
        case 0x2493dcu: goto label_2493dc;
        case 0x2493e0u: goto label_2493e0;
        case 0x2493e4u: goto label_2493e4;
        case 0x2493e8u: goto label_2493e8;
        case 0x2493ecu: goto label_2493ec;
        case 0x2493f0u: goto label_2493f0;
        case 0x2493f4u: goto label_2493f4;
        case 0x2493f8u: goto label_2493f8;
        case 0x2493fcu: goto label_2493fc;
        case 0x249400u: goto label_249400;
        case 0x249404u: goto label_249404;
        case 0x249408u: goto label_249408;
        case 0x24940cu: goto label_24940c;
        case 0x249410u: goto label_249410;
        case 0x249414u: goto label_249414;
        case 0x249418u: goto label_249418;
        case 0x24941cu: goto label_24941c;
        case 0x249420u: goto label_249420;
        case 0x249424u: goto label_249424;
        case 0x249428u: goto label_249428;
        case 0x24942cu: goto label_24942c;
        case 0x249430u: goto label_249430;
        case 0x249434u: goto label_249434;
        case 0x249438u: goto label_249438;
        case 0x24943cu: goto label_24943c;
        case 0x249440u: goto label_249440;
        case 0x249444u: goto label_249444;
        case 0x249448u: goto label_249448;
        case 0x24944cu: goto label_24944c;
        case 0x249450u: goto label_249450;
        case 0x249454u: goto label_249454;
        case 0x249458u: goto label_249458;
        case 0x24945cu: goto label_24945c;
        case 0x249460u: goto label_249460;
        case 0x249464u: goto label_249464;
        case 0x249468u: goto label_249468;
        case 0x24946cu: goto label_24946c;
        case 0x249470u: goto label_249470;
        case 0x249474u: goto label_249474;
        case 0x249478u: goto label_249478;
        case 0x24947cu: goto label_24947c;
        case 0x249480u: goto label_249480;
        case 0x249484u: goto label_249484;
        case 0x249488u: goto label_249488;
        case 0x24948cu: goto label_24948c;
        case 0x249490u: goto label_249490;
        case 0x249494u: goto label_249494;
        case 0x249498u: goto label_249498;
        case 0x24949cu: goto label_24949c;
        case 0x2494a0u: goto label_2494a0;
        case 0x2494a4u: goto label_2494a4;
        case 0x2494a8u: goto label_2494a8;
        case 0x2494acu: goto label_2494ac;
        case 0x2494b0u: goto label_2494b0;
        case 0x2494b4u: goto label_2494b4;
        case 0x2494b8u: goto label_2494b8;
        case 0x2494bcu: goto label_2494bc;
        case 0x2494c0u: goto label_2494c0;
        case 0x2494c4u: goto label_2494c4;
        case 0x2494c8u: goto label_2494c8;
        case 0x2494ccu: goto label_2494cc;
        case 0x2494d0u: goto label_2494d0;
        case 0x2494d4u: goto label_2494d4;
        case 0x2494d8u: goto label_2494d8;
        case 0x2494dcu: goto label_2494dc;
        case 0x2494e0u: goto label_2494e0;
        case 0x2494e4u: goto label_2494e4;
        case 0x2494e8u: goto label_2494e8;
        case 0x2494ecu: goto label_2494ec;
        case 0x2494f0u: goto label_2494f0;
        case 0x2494f4u: goto label_2494f4;
        case 0x2494f8u: goto label_2494f8;
        case 0x2494fcu: goto label_2494fc;
        case 0x249500u: goto label_249500;
        case 0x249504u: goto label_249504;
        case 0x249508u: goto label_249508;
        case 0x24950cu: goto label_24950c;
        case 0x249510u: goto label_249510;
        case 0x249514u: goto label_249514;
        case 0x249518u: goto label_249518;
        case 0x24951cu: goto label_24951c;
        case 0x249520u: goto label_249520;
        case 0x249524u: goto label_249524;
        case 0x249528u: goto label_249528;
        case 0x24952cu: goto label_24952c;
        case 0x249530u: goto label_249530;
        case 0x249534u: goto label_249534;
        case 0x249538u: goto label_249538;
        case 0x24953cu: goto label_24953c;
        case 0x249540u: goto label_249540;
        case 0x249544u: goto label_249544;
        case 0x249548u: goto label_249548;
        case 0x24954cu: goto label_24954c;
        case 0x249550u: goto label_249550;
        case 0x249554u: goto label_249554;
        case 0x249558u: goto label_249558;
        case 0x24955cu: goto label_24955c;
        case 0x249560u: goto label_249560;
        case 0x249564u: goto label_249564;
        case 0x249568u: goto label_249568;
        case 0x24956cu: goto label_24956c;
        case 0x249570u: goto label_249570;
        case 0x249574u: goto label_249574;
        case 0x249578u: goto label_249578;
        case 0x24957cu: goto label_24957c;
        case 0x249580u: goto label_249580;
        case 0x249584u: goto label_249584;
        case 0x249588u: goto label_249588;
        case 0x24958cu: goto label_24958c;
        case 0x249590u: goto label_249590;
        case 0x249594u: goto label_249594;
        case 0x249598u: goto label_249598;
        case 0x24959cu: goto label_24959c;
        case 0x2495a0u: goto label_2495a0;
        case 0x2495a4u: goto label_2495a4;
        case 0x2495a8u: goto label_2495a8;
        case 0x2495acu: goto label_2495ac;
        case 0x2495b0u: goto label_2495b0;
        case 0x2495b4u: goto label_2495b4;
        case 0x2495b8u: goto label_2495b8;
        case 0x2495bcu: goto label_2495bc;
        case 0x2495c0u: goto label_2495c0;
        case 0x2495c4u: goto label_2495c4;
        case 0x2495c8u: goto label_2495c8;
        case 0x2495ccu: goto label_2495cc;
        case 0x2495d0u: goto label_2495d0;
        case 0x2495d4u: goto label_2495d4;
        case 0x2495d8u: goto label_2495d8;
        case 0x2495dcu: goto label_2495dc;
        case 0x2495e0u: goto label_2495e0;
        case 0x2495e4u: goto label_2495e4;
        case 0x2495e8u: goto label_2495e8;
        case 0x2495ecu: goto label_2495ec;
        case 0x2495f0u: goto label_2495f0;
        case 0x2495f4u: goto label_2495f4;
        case 0x2495f8u: goto label_2495f8;
        case 0x2495fcu: goto label_2495fc;
        case 0x249600u: goto label_249600;
        case 0x249604u: goto label_249604;
        case 0x249608u: goto label_249608;
        case 0x24960cu: goto label_24960c;
        case 0x249610u: goto label_249610;
        case 0x249614u: goto label_249614;
        case 0x249618u: goto label_249618;
        case 0x24961cu: goto label_24961c;
        case 0x249620u: goto label_249620;
        case 0x249624u: goto label_249624;
        case 0x249628u: goto label_249628;
        case 0x24962cu: goto label_24962c;
        case 0x249630u: goto label_249630;
        case 0x249634u: goto label_249634;
        case 0x249638u: goto label_249638;
        case 0x24963cu: goto label_24963c;
        case 0x249640u: goto label_249640;
        case 0x249644u: goto label_249644;
        case 0x249648u: goto label_249648;
        case 0x24964cu: goto label_24964c;
        case 0x249650u: goto label_249650;
        case 0x249654u: goto label_249654;
        case 0x249658u: goto label_249658;
        case 0x24965cu: goto label_24965c;
        case 0x249660u: goto label_249660;
        case 0x249664u: goto label_249664;
        case 0x249668u: goto label_249668;
        case 0x24966cu: goto label_24966c;
        case 0x249670u: goto label_249670;
        case 0x249674u: goto label_249674;
        case 0x249678u: goto label_249678;
        case 0x24967cu: goto label_24967c;
        case 0x249680u: goto label_249680;
        case 0x249684u: goto label_249684;
        case 0x249688u: goto label_249688;
        case 0x24968cu: goto label_24968c;
        case 0x249690u: goto label_249690;
        case 0x249694u: goto label_249694;
        case 0x249698u: goto label_249698;
        case 0x24969cu: goto label_24969c;
        case 0x2496a0u: goto label_2496a0;
        case 0x2496a4u: goto label_2496a4;
        case 0x2496a8u: goto label_2496a8;
        case 0x2496acu: goto label_2496ac;
        case 0x2496b0u: goto label_2496b0;
        case 0x2496b4u: goto label_2496b4;
        case 0x2496b8u: goto label_2496b8;
        case 0x2496bcu: goto label_2496bc;
        case 0x2496c0u: goto label_2496c0;
        case 0x2496c4u: goto label_2496c4;
        case 0x2496c8u: goto label_2496c8;
        case 0x2496ccu: goto label_2496cc;
        case 0x2496d0u: goto label_2496d0;
        case 0x2496d4u: goto label_2496d4;
        case 0x2496d8u: goto label_2496d8;
        case 0x2496dcu: goto label_2496dc;
        case 0x2496e0u: goto label_2496e0;
        case 0x2496e4u: goto label_2496e4;
        case 0x2496e8u: goto label_2496e8;
        case 0x2496ecu: goto label_2496ec;
        case 0x2496f0u: goto label_2496f0;
        case 0x2496f4u: goto label_2496f4;
        case 0x2496f8u: goto label_2496f8;
        case 0x2496fcu: goto label_2496fc;
        case 0x249700u: goto label_249700;
        case 0x249704u: goto label_249704;
        case 0x249708u: goto label_249708;
        case 0x24970cu: goto label_24970c;
        case 0x249710u: goto label_249710;
        case 0x249714u: goto label_249714;
        case 0x249718u: goto label_249718;
        case 0x24971cu: goto label_24971c;
        case 0x249720u: goto label_249720;
        case 0x249724u: goto label_249724;
        case 0x249728u: goto label_249728;
        case 0x24972cu: goto label_24972c;
        case 0x249730u: goto label_249730;
        case 0x249734u: goto label_249734;
        case 0x249738u: goto label_249738;
        case 0x24973cu: goto label_24973c;
        case 0x249740u: goto label_249740;
        case 0x249744u: goto label_249744;
        case 0x249748u: goto label_249748;
        case 0x24974cu: goto label_24974c;
        case 0x249750u: goto label_249750;
        case 0x249754u: goto label_249754;
        case 0x249758u: goto label_249758;
        case 0x24975cu: goto label_24975c;
        case 0x249760u: goto label_249760;
        case 0x249764u: goto label_249764;
        case 0x249768u: goto label_249768;
        case 0x24976cu: goto label_24976c;
        case 0x249770u: goto label_249770;
        case 0x249774u: goto label_249774;
        case 0x249778u: goto label_249778;
        case 0x24977cu: goto label_24977c;
        case 0x249780u: goto label_249780;
        case 0x249784u: goto label_249784;
        case 0x249788u: goto label_249788;
        case 0x24978cu: goto label_24978c;
        case 0x249790u: goto label_249790;
        case 0x249794u: goto label_249794;
        case 0x249798u: goto label_249798;
        case 0x24979cu: goto label_24979c;
        case 0x2497a0u: goto label_2497a0;
        case 0x2497a4u: goto label_2497a4;
        case 0x2497a8u: goto label_2497a8;
        case 0x2497acu: goto label_2497ac;
        case 0x2497b0u: goto label_2497b0;
        case 0x2497b4u: goto label_2497b4;
        case 0x2497b8u: goto label_2497b8;
        case 0x2497bcu: goto label_2497bc;
        case 0x2497c0u: goto label_2497c0;
        case 0x2497c4u: goto label_2497c4;
        case 0x2497c8u: goto label_2497c8;
        case 0x2497ccu: goto label_2497cc;
        case 0x2497d0u: goto label_2497d0;
        case 0x2497d4u: goto label_2497d4;
        case 0x2497d8u: goto label_2497d8;
        case 0x2497dcu: goto label_2497dc;
        case 0x2497e0u: goto label_2497e0;
        case 0x2497e4u: goto label_2497e4;
        case 0x2497e8u: goto label_2497e8;
        case 0x2497ecu: goto label_2497ec;
        case 0x2497f0u: goto label_2497f0;
        case 0x2497f4u: goto label_2497f4;
        case 0x2497f8u: goto label_2497f8;
        case 0x2497fcu: goto label_2497fc;
        case 0x249800u: goto label_249800;
        case 0x249804u: goto label_249804;
        case 0x249808u: goto label_249808;
        case 0x24980cu: goto label_24980c;
        case 0x249810u: goto label_249810;
        case 0x249814u: goto label_249814;
        case 0x249818u: goto label_249818;
        case 0x24981cu: goto label_24981c;
        case 0x249820u: goto label_249820;
        case 0x249824u: goto label_249824;
        case 0x249828u: goto label_249828;
        case 0x24982cu: goto label_24982c;
        case 0x249830u: goto label_249830;
        case 0x249834u: goto label_249834;
        case 0x249838u: goto label_249838;
        case 0x24983cu: goto label_24983c;
        case 0x249840u: goto label_249840;
        case 0x249844u: goto label_249844;
        case 0x249848u: goto label_249848;
        case 0x24984cu: goto label_24984c;
        case 0x249850u: goto label_249850;
        case 0x249854u: goto label_249854;
        case 0x249858u: goto label_249858;
        case 0x24985cu: goto label_24985c;
        case 0x249860u: goto label_249860;
        case 0x249864u: goto label_249864;
        case 0x249868u: goto label_249868;
        case 0x24986cu: goto label_24986c;
        case 0x249870u: goto label_249870;
        case 0x249874u: goto label_249874;
        case 0x249878u: goto label_249878;
        case 0x24987cu: goto label_24987c;
        case 0x249880u: goto label_249880;
        case 0x249884u: goto label_249884;
        case 0x249888u: goto label_249888;
        case 0x24988cu: goto label_24988c;
        case 0x249890u: goto label_249890;
        case 0x249894u: goto label_249894;
        case 0x249898u: goto label_249898;
        case 0x24989cu: goto label_24989c;
        case 0x2498a0u: goto label_2498a0;
        case 0x2498a4u: goto label_2498a4;
        case 0x2498a8u: goto label_2498a8;
        case 0x2498acu: goto label_2498ac;
        case 0x2498b0u: goto label_2498b0;
        case 0x2498b4u: goto label_2498b4;
        case 0x2498b8u: goto label_2498b8;
        case 0x2498bcu: goto label_2498bc;
        case 0x2498c0u: goto label_2498c0;
        case 0x2498c4u: goto label_2498c4;
        case 0x2498c8u: goto label_2498c8;
        case 0x2498ccu: goto label_2498cc;
        case 0x2498d0u: goto label_2498d0;
        case 0x2498d4u: goto label_2498d4;
        case 0x2498d8u: goto label_2498d8;
        case 0x2498dcu: goto label_2498dc;
        case 0x2498e0u: goto label_2498e0;
        case 0x2498e4u: goto label_2498e4;
        case 0x2498e8u: goto label_2498e8;
        case 0x2498ecu: goto label_2498ec;
        case 0x2498f0u: goto label_2498f0;
        case 0x2498f4u: goto label_2498f4;
        case 0x2498f8u: goto label_2498f8;
        case 0x2498fcu: goto label_2498fc;
        case 0x249900u: goto label_249900;
        case 0x249904u: goto label_249904;
        case 0x249908u: goto label_249908;
        case 0x24990cu: goto label_24990c;
        case 0x249910u: goto label_249910;
        case 0x249914u: goto label_249914;
        case 0x249918u: goto label_249918;
        case 0x24991cu: goto label_24991c;
        case 0x249920u: goto label_249920;
        case 0x249924u: goto label_249924;
        case 0x249928u: goto label_249928;
        case 0x24992cu: goto label_24992c;
        case 0x249930u: goto label_249930;
        case 0x249934u: goto label_249934;
        case 0x249938u: goto label_249938;
        case 0x24993cu: goto label_24993c;
        case 0x249940u: goto label_249940;
        case 0x249944u: goto label_249944;
        case 0x249948u: goto label_249948;
        case 0x24994cu: goto label_24994c;
        case 0x249950u: goto label_249950;
        case 0x249954u: goto label_249954;
        case 0x249958u: goto label_249958;
        case 0x24995cu: goto label_24995c;
        case 0x249960u: goto label_249960;
        case 0x249964u: goto label_249964;
        case 0x249968u: goto label_249968;
        case 0x24996cu: goto label_24996c;
        case 0x249970u: goto label_249970;
        case 0x249974u: goto label_249974;
        case 0x249978u: goto label_249978;
        case 0x24997cu: goto label_24997c;
        case 0x249980u: goto label_249980;
        case 0x249984u: goto label_249984;
        case 0x249988u: goto label_249988;
        case 0x24998cu: goto label_24998c;
        case 0x249990u: goto label_249990;
        case 0x249994u: goto label_249994;
        case 0x249998u: goto label_249998;
        case 0x24999cu: goto label_24999c;
        case 0x2499a0u: goto label_2499a0;
        case 0x2499a4u: goto label_2499a4;
        case 0x2499a8u: goto label_2499a8;
        case 0x2499acu: goto label_2499ac;
        case 0x2499b0u: goto label_2499b0;
        case 0x2499b4u: goto label_2499b4;
        case 0x2499b8u: goto label_2499b8;
        case 0x2499bcu: goto label_2499bc;
        case 0x2499c0u: goto label_2499c0;
        case 0x2499c4u: goto label_2499c4;
        case 0x2499c8u: goto label_2499c8;
        case 0x2499ccu: goto label_2499cc;
        case 0x2499d0u: goto label_2499d0;
        case 0x2499d4u: goto label_2499d4;
        case 0x2499d8u: goto label_2499d8;
        case 0x2499dcu: goto label_2499dc;
        case 0x2499e0u: goto label_2499e0;
        case 0x2499e4u: goto label_2499e4;
        case 0x2499e8u: goto label_2499e8;
        case 0x2499ecu: goto label_2499ec;
        case 0x2499f0u: goto label_2499f0;
        case 0x2499f4u: goto label_2499f4;
        case 0x2499f8u: goto label_2499f8;
        case 0x2499fcu: goto label_2499fc;
        case 0x249a00u: goto label_249a00;
        case 0x249a04u: goto label_249a04;
        case 0x249a08u: goto label_249a08;
        case 0x249a0cu: goto label_249a0c;
        case 0x249a10u: goto label_249a10;
        case 0x249a14u: goto label_249a14;
        case 0x249a18u: goto label_249a18;
        case 0x249a1cu: goto label_249a1c;
        case 0x249a20u: goto label_249a20;
        case 0x249a24u: goto label_249a24;
        case 0x249a28u: goto label_249a28;
        case 0x249a2cu: goto label_249a2c;
        case 0x249a30u: goto label_249a30;
        case 0x249a34u: goto label_249a34;
        case 0x249a38u: goto label_249a38;
        case 0x249a3cu: goto label_249a3c;
        case 0x249a40u: goto label_249a40;
        case 0x249a44u: goto label_249a44;
        case 0x249a48u: goto label_249a48;
        case 0x249a4cu: goto label_249a4c;
        case 0x249a50u: goto label_249a50;
        case 0x249a54u: goto label_249a54;
        case 0x249a58u: goto label_249a58;
        case 0x249a5cu: goto label_249a5c;
        case 0x249a60u: goto label_249a60;
        case 0x249a64u: goto label_249a64;
        case 0x249a68u: goto label_249a68;
        case 0x249a6cu: goto label_249a6c;
        case 0x249a70u: goto label_249a70;
        case 0x249a74u: goto label_249a74;
        case 0x249a78u: goto label_249a78;
        case 0x249a7cu: goto label_249a7c;
        case 0x249a80u: goto label_249a80;
        case 0x249a84u: goto label_249a84;
        case 0x249a88u: goto label_249a88;
        case 0x249a8cu: goto label_249a8c;
        case 0x249a90u: goto label_249a90;
        case 0x249a94u: goto label_249a94;
        case 0x249a98u: goto label_249a98;
        case 0x249a9cu: goto label_249a9c;
        case 0x249aa0u: goto label_249aa0;
        case 0x249aa4u: goto label_249aa4;
        case 0x249aa8u: goto label_249aa8;
        case 0x249aacu: goto label_249aac;
        case 0x249ab0u: goto label_249ab0;
        case 0x249ab4u: goto label_249ab4;
        case 0x249ab8u: goto label_249ab8;
        case 0x249abcu: goto label_249abc;
        case 0x249ac0u: goto label_249ac0;
        case 0x249ac4u: goto label_249ac4;
        case 0x249ac8u: goto label_249ac8;
        case 0x249accu: goto label_249acc;
        case 0x249ad0u: goto label_249ad0;
        case 0x249ad4u: goto label_249ad4;
        case 0x249ad8u: goto label_249ad8;
        case 0x249adcu: goto label_249adc;
        case 0x249ae0u: goto label_249ae0;
        case 0x249ae4u: goto label_249ae4;
        case 0x249ae8u: goto label_249ae8;
        case 0x249aecu: goto label_249aec;
        case 0x249af0u: goto label_249af0;
        case 0x249af4u: goto label_249af4;
        case 0x249af8u: goto label_249af8;
        case 0x249afcu: goto label_249afc;
        case 0x249b00u: goto label_249b00;
        case 0x249b04u: goto label_249b04;
        case 0x249b08u: goto label_249b08;
        case 0x249b0cu: goto label_249b0c;
        case 0x249b10u: goto label_249b10;
        case 0x249b14u: goto label_249b14;
        case 0x249b18u: goto label_249b18;
        case 0x249b1cu: goto label_249b1c;
        case 0x249b20u: goto label_249b20;
        case 0x249b24u: goto label_249b24;
        case 0x249b28u: goto label_249b28;
        case 0x249b2cu: goto label_249b2c;
        case 0x249b30u: goto label_249b30;
        case 0x249b34u: goto label_249b34;
        case 0x249b38u: goto label_249b38;
        case 0x249b3cu: goto label_249b3c;
        case 0x249b40u: goto label_249b40;
        case 0x249b44u: goto label_249b44;
        case 0x249b48u: goto label_249b48;
        case 0x249b4cu: goto label_249b4c;
        case 0x249b50u: goto label_249b50;
        case 0x249b54u: goto label_249b54;
        case 0x249b58u: goto label_249b58;
        case 0x249b5cu: goto label_249b5c;
        case 0x249b60u: goto label_249b60;
        case 0x249b64u: goto label_249b64;
        case 0x249b68u: goto label_249b68;
        case 0x249b6cu: goto label_249b6c;
        case 0x249b70u: goto label_249b70;
        case 0x249b74u: goto label_249b74;
        case 0x249b78u: goto label_249b78;
        case 0x249b7cu: goto label_249b7c;
        case 0x249b80u: goto label_249b80;
        case 0x249b84u: goto label_249b84;
        case 0x249b88u: goto label_249b88;
        case 0x249b8cu: goto label_249b8c;
        case 0x249b90u: goto label_249b90;
        case 0x249b94u: goto label_249b94;
        case 0x249b98u: goto label_249b98;
        case 0x249b9cu: goto label_249b9c;
        case 0x249ba0u: goto label_249ba0;
        case 0x249ba4u: goto label_249ba4;
        case 0x249ba8u: goto label_249ba8;
        case 0x249bacu: goto label_249bac;
        case 0x249bb0u: goto label_249bb0;
        case 0x249bb4u: goto label_249bb4;
        case 0x249bb8u: goto label_249bb8;
        case 0x249bbcu: goto label_249bbc;
        case 0x249bc0u: goto label_249bc0;
        case 0x249bc4u: goto label_249bc4;
        case 0x249bc8u: goto label_249bc8;
        case 0x249bccu: goto label_249bcc;
        case 0x249bd0u: goto label_249bd0;
        case 0x249bd4u: goto label_249bd4;
        case 0x249bd8u: goto label_249bd8;
        case 0x249bdcu: goto label_249bdc;
        case 0x249be0u: goto label_249be0;
        case 0x249be4u: goto label_249be4;
        case 0x249be8u: goto label_249be8;
        case 0x249becu: goto label_249bec;
        case 0x249bf0u: goto label_249bf0;
        case 0x249bf4u: goto label_249bf4;
        case 0x249bf8u: goto label_249bf8;
        case 0x249bfcu: goto label_249bfc;
        case 0x249c00u: goto label_249c00;
        case 0x249c04u: goto label_249c04;
        case 0x249c08u: goto label_249c08;
        case 0x249c0cu: goto label_249c0c;
        case 0x249c10u: goto label_249c10;
        case 0x249c14u: goto label_249c14;
        case 0x249c18u: goto label_249c18;
        case 0x249c1cu: goto label_249c1c;
        case 0x249c20u: goto label_249c20;
        case 0x249c24u: goto label_249c24;
        case 0x249c28u: goto label_249c28;
        case 0x249c2cu: goto label_249c2c;
        case 0x249c30u: goto label_249c30;
        case 0x249c34u: goto label_249c34;
        case 0x249c38u: goto label_249c38;
        case 0x249c3cu: goto label_249c3c;
        case 0x249c40u: goto label_249c40;
        case 0x249c44u: goto label_249c44;
        case 0x249c48u: goto label_249c48;
        case 0x249c4cu: goto label_249c4c;
        case 0x249c50u: goto label_249c50;
        case 0x249c54u: goto label_249c54;
        case 0x249c58u: goto label_249c58;
        case 0x249c5cu: goto label_249c5c;
        case 0x249c60u: goto label_249c60;
        case 0x249c64u: goto label_249c64;
        case 0x249c68u: goto label_249c68;
        case 0x249c6cu: goto label_249c6c;
        case 0x249c70u: goto label_249c70;
        case 0x249c74u: goto label_249c74;
        case 0x249c78u: goto label_249c78;
        case 0x249c7cu: goto label_249c7c;
        case 0x249c80u: goto label_249c80;
        case 0x249c84u: goto label_249c84;
        case 0x249c88u: goto label_249c88;
        case 0x249c8cu: goto label_249c8c;
        case 0x249c90u: goto label_249c90;
        case 0x249c94u: goto label_249c94;
        case 0x249c98u: goto label_249c98;
        case 0x249c9cu: goto label_249c9c;
        case 0x249ca0u: goto label_249ca0;
        case 0x249ca4u: goto label_249ca4;
        case 0x249ca8u: goto label_249ca8;
        case 0x249cacu: goto label_249cac;
        case 0x249cb0u: goto label_249cb0;
        case 0x249cb4u: goto label_249cb4;
        case 0x249cb8u: goto label_249cb8;
        case 0x249cbcu: goto label_249cbc;
        case 0x249cc0u: goto label_249cc0;
        case 0x249cc4u: goto label_249cc4;
        case 0x249cc8u: goto label_249cc8;
        case 0x249cccu: goto label_249ccc;
        case 0x249cd0u: goto label_249cd0;
        case 0x249cd4u: goto label_249cd4;
        case 0x249cd8u: goto label_249cd8;
        case 0x249cdcu: goto label_249cdc;
        case 0x249ce0u: goto label_249ce0;
        case 0x249ce4u: goto label_249ce4;
        case 0x249ce8u: goto label_249ce8;
        case 0x249cecu: goto label_249cec;
        case 0x249cf0u: goto label_249cf0;
        case 0x249cf4u: goto label_249cf4;
        case 0x249cf8u: goto label_249cf8;
        case 0x249cfcu: goto label_249cfc;
        case 0x249d00u: goto label_249d00;
        case 0x249d04u: goto label_249d04;
        case 0x249d08u: goto label_249d08;
        case 0x249d0cu: goto label_249d0c;
        case 0x249d10u: goto label_249d10;
        case 0x249d14u: goto label_249d14;
        case 0x249d18u: goto label_249d18;
        case 0x249d1cu: goto label_249d1c;
        case 0x249d20u: goto label_249d20;
        case 0x249d24u: goto label_249d24;
        case 0x249d28u: goto label_249d28;
        case 0x249d2cu: goto label_249d2c;
        case 0x249d30u: goto label_249d30;
        case 0x249d34u: goto label_249d34;
        case 0x249d38u: goto label_249d38;
        case 0x249d3cu: goto label_249d3c;
        case 0x249d40u: goto label_249d40;
        case 0x249d44u: goto label_249d44;
        case 0x249d48u: goto label_249d48;
        case 0x249d4cu: goto label_249d4c;
        case 0x249d50u: goto label_249d50;
        case 0x249d54u: goto label_249d54;
        case 0x249d58u: goto label_249d58;
        case 0x249d5cu: goto label_249d5c;
        case 0x249d60u: goto label_249d60;
        case 0x249d64u: goto label_249d64;
        case 0x249d68u: goto label_249d68;
        case 0x249d6cu: goto label_249d6c;
        case 0x249d70u: goto label_249d70;
        case 0x249d74u: goto label_249d74;
        case 0x249d78u: goto label_249d78;
        case 0x249d7cu: goto label_249d7c;
        case 0x249d80u: goto label_249d80;
        case 0x249d84u: goto label_249d84;
        case 0x249d88u: goto label_249d88;
        case 0x249d8cu: goto label_249d8c;
        case 0x249d90u: goto label_249d90;
        case 0x249d94u: goto label_249d94;
        case 0x249d98u: goto label_249d98;
        case 0x249d9cu: goto label_249d9c;
        case 0x249da0u: goto label_249da0;
        case 0x249da4u: goto label_249da4;
        case 0x249da8u: goto label_249da8;
        case 0x249dacu: goto label_249dac;
        case 0x249db0u: goto label_249db0;
        case 0x249db4u: goto label_249db4;
        case 0x249db8u: goto label_249db8;
        case 0x249dbcu: goto label_249dbc;
        case 0x249dc0u: goto label_249dc0;
        case 0x249dc4u: goto label_249dc4;
        case 0x249dc8u: goto label_249dc8;
        case 0x249dccu: goto label_249dcc;
        case 0x249dd0u: goto label_249dd0;
        case 0x249dd4u: goto label_249dd4;
        case 0x249dd8u: goto label_249dd8;
        case 0x249ddcu: goto label_249ddc;
        case 0x249de0u: goto label_249de0;
        case 0x249de4u: goto label_249de4;
        case 0x249de8u: goto label_249de8;
        case 0x249decu: goto label_249dec;
        case 0x249df0u: goto label_249df0;
        case 0x249df4u: goto label_249df4;
        case 0x249df8u: goto label_249df8;
        case 0x249dfcu: goto label_249dfc;
        case 0x249e00u: goto label_249e00;
        case 0x249e04u: goto label_249e04;
        case 0x249e08u: goto label_249e08;
        case 0x249e0cu: goto label_249e0c;
        case 0x249e10u: goto label_249e10;
        case 0x249e14u: goto label_249e14;
        case 0x249e18u: goto label_249e18;
        case 0x249e1cu: goto label_249e1c;
        case 0x249e20u: goto label_249e20;
        case 0x249e24u: goto label_249e24;
        case 0x249e28u: goto label_249e28;
        case 0x249e2cu: goto label_249e2c;
        case 0x249e30u: goto label_249e30;
        case 0x249e34u: goto label_249e34;
        case 0x249e38u: goto label_249e38;
        case 0x249e3cu: goto label_249e3c;
        case 0x249e40u: goto label_249e40;
        case 0x249e44u: goto label_249e44;
        case 0x249e48u: goto label_249e48;
        case 0x249e4cu: goto label_249e4c;
        case 0x249e50u: goto label_249e50;
        default: break;
    }

    ctx->pc = 0x2482c0u;

label_2482c0:
    // 0x2482c0: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x2482c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
label_2482c4:
    // 0x2482c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2482c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2482c8:
    // 0x2482c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2482c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2482cc:
    // 0x2482cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2482ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2482d0:
    // 0x2482d0: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2482d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2482d4:
    // 0x2482d4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2482d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2482d8:
    // 0x2482d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2482d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2482dc:
    // 0x2482dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2482dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2482e0:
    // 0x2482e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2482e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2482e4:
    // 0x2482e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2482e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2482e8:
    // 0x2482e8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2482e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2482ec:
    // 0x2482ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2482ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2482f0:
    // 0x2482f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2482f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2482f4:
    // 0x2482f4: 0x8f8794f8  lw          $a3, -0x6B08($gp)
    ctx->pc = 0x2482f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2482f8:
    // 0x2482f8: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x2482f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_2482fc:
    // 0x2482fc: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x2482fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_248300:
    // 0x248300: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_248304:
    if (ctx->pc == 0x248304u) {
        ctx->pc = 0x248304u;
            // 0x248304: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248308u;
        goto label_248308;
    }
    ctx->pc = 0x248300u;
    {
        const bool branch_taken_0x248300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248300u;
            // 0x248304: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248300) {
            ctx->pc = 0x248310u;
            goto label_248310;
        }
    }
    ctx->pc = 0x248308u;
label_248308:
    // 0x248308: 0x100006c6  b           . + 4 + (0x6C6 << 2)
label_24830c:
    if (ctx->pc == 0x24830Cu) {
        ctx->pc = 0x24830Cu;
            // 0x24830c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248310u;
        goto label_248310;
    }
    ctx->pc = 0x248308u;
    {
        const bool branch_taken_0x248308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24830Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248308u;
            // 0x24830c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248308) {
            ctx->pc = 0x249E24u;
            goto label_249e24;
        }
    }
    ctx->pc = 0x248310u;
label_248310:
    // 0x248310: 0x86110000  lh          $s1, 0x0($s0)
    ctx->pc = 0x248310u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_248314:
    // 0x248314: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x248314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_248318:
    // 0x248318: 0x12220464  beq         $s1, $v0, . + 4 + (0x464 << 2)
label_24831c:
    if (ctx->pc == 0x24831Cu) {
        ctx->pc = 0x24831Cu;
            // 0x24831c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x248320u;
        goto label_248320;
    }
    ctx->pc = 0x248318u;
    {
        const bool branch_taken_0x248318 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x24831Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248318u;
            // 0x24831c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248318) {
            ctx->pc = 0x2494ACu;
            goto label_2494ac;
        }
    }
    ctx->pc = 0x248320u;
label_248320:
    // 0x248320: 0x12220452  beq         $s1, $v0, . + 4 + (0x452 << 2)
label_248324:
    if (ctx->pc == 0x248324u) {
        ctx->pc = 0x248328u;
        goto label_248328;
    }
    ctx->pc = 0x248320u;
    {
        const bool branch_taken_0x248320 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x248320) {
            ctx->pc = 0x24946Cu;
            goto label_24946c;
        }
    }
    ctx->pc = 0x248328u;
label_248328:
    // 0x248328: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_24832c:
    if (ctx->pc == 0x24832Cu) {
        ctx->pc = 0x248330u;
        goto label_248330;
    }
    ctx->pc = 0x248328u;
    {
        const bool branch_taken_0x248328 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x248328) {
            ctx->pc = 0x248338u;
            goto label_248338;
        }
    }
    ctx->pc = 0x248330u;
label_248330:
    // 0x248330: 0x1000052d  b           . + 4 + (0x52D << 2)
label_248334:
    if (ctx->pc == 0x248334u) {
        ctx->pc = 0x248334u;
            // 0x248334: 0x3c1201ed  lui         $s2, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x248338u;
        goto label_248338;
    }
    ctx->pc = 0x248330u;
    {
        const bool branch_taken_0x248330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248330u;
            // 0x248334: 0x3c1201ed  lui         $s2, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248330) {
            ctx->pc = 0x2497E8u;
            goto label_2497e8;
        }
    }
    ctx->pc = 0x248338u;
label_248338:
    // 0x248338: 0x86030114  lh          $v1, 0x114($s0)
    ctx->pc = 0x248338u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
label_24833c:
    // 0x24833c: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x24833cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
label_248340:
    // 0x248340: 0x84f600c2  lh          $s6, 0xC2($a3)
    ctx->pc = 0x248340u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 194)));
label_248344:
    // 0x248344: 0x2442d8c0  addiu       $v0, $v0, -0x2740
    ctx->pc = 0x248344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957248));
label_248348:
    // 0x248348: 0x8cf40070  lw          $s4, 0x70($a3)
    ctx->pc = 0x248348u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 112)));
label_24834c:
    // 0x24834c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24834cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248350:
    // 0x248350: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x248350u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248354:
    // 0x248354: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x248354u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_248358:
    // 0x248358: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x248358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24835c:
    // 0x24835c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24835cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_248360:
    // 0x248360: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x248360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_248364:
    // 0x248364: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x248364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_248368:
    // 0x248368: 0xc0657b0  jal         func_195EC0
label_24836c:
    if (ctx->pc == 0x24836Cu) {
        ctx->pc = 0x24836Cu;
            // 0x24836c: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x248370u;
        goto label_248370;
    }
    ctx->pc = 0x248368u;
    SET_GPR_U32(ctx, 31, 0x248370u);
    ctx->pc = 0x24836Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248368u;
            // 0x24836c: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195EC0u;
    if (runtime->hasFunction(0x195EC0u)) {
        auto targetFn = runtime->lookupFunction(0x195EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248370u; }
        if (ctx->pc != 0x248370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemDataType__Fi_0x195ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248370u; }
        if (ctx->pc != 0x248370u) { return; }
    }
    ctx->pc = 0x248370u;
label_248370:
    // 0x248370: 0xc0657c4  jal         func_195F10
label_248374:
    if (ctx->pc == 0x248374u) {
        ctx->pc = 0x248374u;
            // 0x248374: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248378u;
        goto label_248378;
    }
    ctx->pc = 0x248370u;
    SET_GPR_U32(ctx, 31, 0x248378u);
    ctx->pc = 0x248374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248370u;
            // 0x248374: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195F10u;
    if (runtime->hasFunction(0x195F10u)) {
        auto targetFn = runtime->lookupFunction(0x195F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248378u; }
        if (ctx->pc != 0x248378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertUsedItemType__Fi_0x195f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248378u; }
        if (ctx->pc != 0x248378u) { return; }
    }
    ctx->pc = 0x248378u;
label_248378:
    // 0x248378: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x248378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_24837c:
    // 0x24837c: 0x17c00003  bnez        $fp, . + 4 + (0x3 << 2)
label_248380:
    if (ctx->pc == 0x248380u) {
        ctx->pc = 0x248380u;
            // 0x248380: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248384u;
        goto label_248384;
    }
    ctx->pc = 0x24837Cu;
    {
        const bool branch_taken_0x24837c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x248380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24837Cu;
            // 0x248380: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24837c) {
            ctx->pc = 0x24838Cu;
            goto label_24838c;
        }
    }
    ctx->pc = 0x248384u;
label_248384:
    // 0x248384: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
label_248388:
    if (ctx->pc == 0x248388u) {
        ctx->pc = 0x248388u;
            // 0x248388: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x24838Cu;
        goto label_24838c;
    }
    ctx->pc = 0x248384u;
    {
        const bool branch_taken_0x248384 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x248388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248384u;
            // 0x248388: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248384) {
            ctx->pc = 0x2483B8u;
            goto label_2483b8;
        }
    }
    ctx->pc = 0x24838Cu;
label_24838c:
    // 0x24838c: 0x8f849598  lw          $a0, -0x6A68($gp)
    ctx->pc = 0x24838cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940056)));
label_248390:
    // 0x248390: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_248394:
    if (ctx->pc == 0x248394u) {
        ctx->pc = 0x248398u;
        goto label_248398;
    }
    ctx->pc = 0x248390u;
    {
        const bool branch_taken_0x248390 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x248390) {
            ctx->pc = 0x2483B4u;
            goto label_2483b4;
        }
    }
    ctx->pc = 0x248398u;
label_248398:
    // 0x248398: 0x86020198  lh          $v0, 0x198($s0)
    ctx->pc = 0x248398u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 408)));
label_24839c:
    // 0x24839c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2483a0:
    if (ctx->pc == 0x2483A0u) {
        ctx->pc = 0x2483A0u;
            // 0x2483a0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2483A4u;
        goto label_2483a4;
    }
    ctx->pc = 0x24839Cu;
    {
        const bool branch_taken_0x24839c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2483A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24839Cu;
            // 0x2483a0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24839c) {
            ctx->pc = 0x2483B4u;
            goto label_2483b4;
        }
    }
    ctx->pc = 0x2483A4u;
label_2483a4:
    // 0x2483a4: 0xc08a240  jal         func_228900
label_2483a8:
    if (ctx->pc == 0x2483A8u) {
        ctx->pc = 0x2483A8u;
            // 0x2483a8: 0x24a5b1d0  addiu       $a1, $a1, -0x4E30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947280));
        ctx->pc = 0x2483ACu;
        goto label_2483ac;
    }
    ctx->pc = 0x2483A4u;
    SET_GPR_U32(ctx, 31, 0x2483ACu);
    ctx->pc = 0x2483A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2483A4u;
            // 0x2483a8: 0x24a5b1d0  addiu       $a1, $a1, -0x4E30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228900u;
    if (runtime->hasFunction(0x228900u)) {
        auto targetFn = runtime->lookupFunction(0x228900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2483ACu; }
        if (ctx->pc != 0x2483ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAction__16CMenuPosDataFormFPc_0x228900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2483ACu; }
        if (ctx->pc != 0x2483ACu) { return; }
    }
    ctx->pc = 0x2483ACu;
label_2483ac:
    // 0x2483ac: 0x1000069c  b           . + 4 + (0x69C << 2)
label_2483b0:
    if (ctx->pc == 0x2483B0u) {
        ctx->pc = 0x2483B0u;
            // 0x2483b0: 0xa6000198  sh          $zero, 0x198($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 408), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2483B4u;
        goto label_2483b4;
    }
    ctx->pc = 0x2483ACu;
    {
        const bool branch_taken_0x2483ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2483B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2483ACu;
            // 0x2483b0: 0xa6000198  sh          $zero, 0x198($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 408), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2483ac) {
            ctx->pc = 0x249E20u;
            goto label_249e20;
        }
    }
    ctx->pc = 0x2483B4u;
label_2483b4:
    // 0x2483b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2483b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2483b8:
    // 0x2483b8: 0x27a301f2  addiu       $v1, $sp, 0x1F2
    ctx->pc = 0x2483b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 498));
label_2483bc:
    // 0x2483bc: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x2483bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_2483c0:
    // 0x2483c0: 0x27be01f6  addiu       $fp, $sp, 0x1F6
    ctx->pc = 0x2483c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 502));
label_2483c4:
    // 0x2483c4: 0x27a301f4  addiu       $v1, $sp, 0x1F4
    ctx->pc = 0x2483c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_2483c8:
    // 0x2483c8: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x2483c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
label_2483cc:
    // 0x2483cc: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x2483ccu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 2));
label_2483d0:
    // 0x2483d0: 0xa7a001f0  sh          $zero, 0x1F0($sp)
    ctx->pc = 0x2483d0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 496), (uint16_t)GPR_U32(ctx, 0));
label_2483d4:
    // 0x2483d4: 0x86030014  lh          $v1, 0x14($s0)
    ctx->pc = 0x2483d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_2483d8:
    // 0x2483d8: 0x2c61000c  sltiu       $at, $v1, 0xC
    ctx->pc = 0x2483d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_2483dc:
    // 0x2483dc: 0x10200125  beqz        $at, . + 4 + (0x125 << 2)
label_2483e0:
    if (ctx->pc == 0x2483E0u) {
        ctx->pc = 0x2483E0u;
            // 0x2483e0: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2483E4u;
        goto label_2483e4;
    }
    ctx->pc = 0x2483DCu;
    {
        const bool branch_taken_0x2483dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2483E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2483DCu;
            // 0x2483e0: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2483dc) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x2483E4u;
label_2483e4:
    // 0x2483e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2483e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2483e8:
    // 0x2483e8: 0x2484b910  addiu       $a0, $a0, -0x46F0
    ctx->pc = 0x2483e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949136));
label_2483ec:
    // 0x2483ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2483ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2483f0:
    // 0x2483f0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2483f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2483f4:
    // 0x2483f4: 0x600008  jr          $v1
label_2483f8:
    if (ctx->pc == 0x2483F8u) {
        ctx->pc = 0x2483FCu;
        goto label_2483fc;
    }
    ctx->pc = 0x2483F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2483FCu: goto label_2483fc;
            case 0x248490u: goto label_248490;
            case 0x24851Cu: goto label_24851c;
            case 0x2485C0u: goto label_2485c0;
            case 0x2485FCu: goto label_2485fc;
            case 0x248668u: goto label_248668;
            case 0x2486A4u: goto label_2486a4;
            case 0x2486E0u: goto label_2486e0;
            case 0x24871Cu: goto label_24871c;
            case 0x2487B4u: goto label_2487b4;
            case 0x2487F0u: goto label_2487f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2483FCu;
label_2483fc:
    // 0x2483fc: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x2483fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_248400:
    // 0x248400: 0x86040114  lh          $a0, 0x114($s0)
    ctx->pc = 0x248400u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
label_248404:
    // 0x248404: 0x542821  addu        $a1, $v0, $s4
    ctx->pc = 0x248404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_248408:
    // 0x248408: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x248408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24840c:
    // 0x24840c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x24840cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_248410:
    // 0x248410: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x248410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248414:
    // 0x248414: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x248414u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_248418:
    // 0x248418: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x248418u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24841c:
    // 0x24841c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x24841cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_248420:
    // 0x248420: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x248420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_248424:
    // 0x248424: 0x27a201f2  addiu       $v0, $sp, 0x1F2
    ctx->pc = 0x248424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 498));
label_248428:
    // 0x248428: 0x24b5002c  addiu       $s5, $a1, 0x2C
    ctx->pc = 0x248428u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
label_24842c:
    // 0x24842c: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x24842cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
label_248430:
    // 0x248430: 0x27a201f4  addiu       $v0, $sp, 0x1F4
    ctx->pc = 0x248430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_248434:
    // 0x248434: 0xa4540000  sh          $s4, 0x0($v0)
    ctx->pc = 0x248434u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 20));
label_248438:
    // 0x248438: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x248438u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 4));
label_24843c:
    // 0x24843c: 0x12630012  beq         $s3, $v1, . + 4 + (0x12 << 2)
label_248440:
    if (ctx->pc == 0x248440u) {
        ctx->pc = 0x248440u;
            // 0x248440: 0xa7a001f0  sh          $zero, 0x1F0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 496), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x248444u;
        goto label_248444;
    }
    ctx->pc = 0x24843Cu;
    {
        const bool branch_taken_0x24843c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x248440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24843Cu;
            // 0x248440: 0xa7a001f0  sh          $zero, 0x1F0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 496), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24843c) {
            ctx->pc = 0x248488u;
            goto label_248488;
        }
    }
    ctx->pc = 0x248444u;
label_248444:
    // 0x248444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x248444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248448:
    // 0x248448: 0x1262000b  beq         $s3, $v0, . + 4 + (0xB << 2)
label_24844c:
    if (ctx->pc == 0x24844Cu) {
        ctx->pc = 0x24844Cu;
            // 0x24844c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x248450u;
        goto label_248450;
    }
    ctx->pc = 0x248448u;
    {
        const bool branch_taken_0x248448 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x24844Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248448u;
            // 0x24844c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248448) {
            ctx->pc = 0x248478u;
            goto label_248478;
        }
    }
    ctx->pc = 0x248450u;
label_248450:
    // 0x248450: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
label_248454:
    if (ctx->pc == 0x248454u) {
        ctx->pc = 0x248454u;
            // 0x248454: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x248458u;
        goto label_248458;
    }
    ctx->pc = 0x248450u;
    {
        const bool branch_taken_0x248450 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x248454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248450u;
            // 0x248454: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248450) {
            ctx->pc = 0x248470u;
            goto label_248470;
        }
    }
    ctx->pc = 0x248458u;
label_248458:
    // 0x248458: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_24845c:
    if (ctx->pc == 0x24845Cu) {
        ctx->pc = 0x248460u;
        goto label_248460;
    }
    ctx->pc = 0x248458u;
    {
        const bool branch_taken_0x248458 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x248458) {
            ctx->pc = 0x248468u;
            goto label_248468;
        }
    }
    ctx->pc = 0x248460u;
label_248460:
    // 0x248460: 0x10000105  b           . + 4 + (0x105 << 2)
label_248464:
    if (ctx->pc == 0x248464u) {
        ctx->pc = 0x248464u;
            // 0x248464: 0x8f829520  lw          $v0, -0x6AE0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
        ctx->pc = 0x248468u;
        goto label_248468;
    }
    ctx->pc = 0x248460u;
    {
        const bool branch_taken_0x248460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248460u;
            // 0x248464: 0x8f829520  lw          $v0, -0x6AE0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248460) {
            ctx->pc = 0x248878u;
            goto label_248878;
        }
    }
    ctx->pc = 0x248468u;
label_248468:
    // 0x248468: 0x10000102  b           . + 4 + (0x102 << 2)
label_24846c:
    if (ctx->pc == 0x24846Cu) {
        ctx->pc = 0x24846Cu;
            // 0x24846c: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x248470u;
        goto label_248470;
    }
    ctx->pc = 0x248468u;
    {
        const bool branch_taken_0x248468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24846Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248468u;
            // 0x24846c: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248468) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x248470u;
label_248470:
    // 0x248470: 0x10000100  b           . + 4 + (0x100 << 2)
label_248474:
    if (ctx->pc == 0x248474u) {
        ctx->pc = 0x248474u;
            // 0x248474: 0x2411001e  addiu       $s1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x248478u;
        goto label_248478;
    }
    ctx->pc = 0x248470u;
    {
        const bool branch_taken_0x248470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248470u;
            // 0x248474: 0x2411001e  addiu       $s1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248470) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x248478u;
label_248478:
    // 0x248478: 0x1ac000fe  blez        $s6, . + 4 + (0xFE << 2)
label_24847c:
    if (ctx->pc == 0x24847Cu) {
        ctx->pc = 0x24847Cu;
            // 0x24847c: 0x2411000a  addiu       $s1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x248480u;
        goto label_248480;
    }
    ctx->pc = 0x248478u;
    {
        const bool branch_taken_0x248478 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x24847Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248478u;
            // 0x24847c: 0x2411000a  addiu       $s1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248478) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x248480u;
label_248480:
    // 0x248480: 0x100000fc  b           . + 4 + (0xFC << 2)
label_248484:
    if (ctx->pc == 0x248484u) {
        ctx->pc = 0x248484u;
            // 0x248484: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x248488u;
        goto label_248488;
    }
    ctx->pc = 0x248480u;
    {
        const bool branch_taken_0x248480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248480u;
            // 0x248484: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248480) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x248488u;
label_248488:
    // 0x248488: 0x100000fa  b           . + 4 + (0xFA << 2)
label_24848c:
    if (ctx->pc == 0x24848Cu) {
        ctx->pc = 0x24848Cu;
            // 0x24848c: 0x24110032  addiu       $s1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x248490u;
        goto label_248490;
    }
    ctx->pc = 0x248488u;
    {
        const bool branch_taken_0x248488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24848Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248488u;
            // 0x24848c: 0x24110032  addiu       $s1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248488) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x248490u;
label_248490:
    // 0x248490: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x248490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_248494:
    // 0x248494: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x248494u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248498:
    // 0x248498: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x248498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_24849c:
    // 0x24849c: 0x86040114  lh          $a0, 0x114($s0)
    ctx->pc = 0x24849cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
label_2484a0:
    // 0x2484a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2484a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2484a4:
    // 0x2484a4: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x2484a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2484a8:
    // 0x2484a8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2484a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2484ac:
    // 0x2484ac: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2484acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2484b0:
    // 0x2484b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2484b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2484b4:
    // 0x2484b4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2484b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2484b8:
    // 0x2484b8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2484b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2484bc:
    // 0x2484bc: 0x24550170  addiu       $s5, $v0, 0x170
    ctx->pc = 0x2484bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
label_2484c0:
    // 0x2484c0: 0x27a201f2  addiu       $v0, $sp, 0x1F2
    ctx->pc = 0x2484c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 498));
label_2484c4:
    // 0x2484c4: 0xa4570000  sh          $s7, 0x0($v0)
    ctx->pc = 0x2484c4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 23));
label_2484c8:
    // 0x2484c8: 0x27a201f4  addiu       $v0, $sp, 0x1F4
    ctx->pc = 0x2484c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_2484cc:
    // 0x2484cc: 0xa4540000  sh          $s4, 0x0($v0)
    ctx->pc = 0x2484ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 20));
label_2484d0:
    // 0x2484d0: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x2484d0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 4));
label_2484d4:
    // 0x2484d4: 0x1263000f  beq         $s3, $v1, . + 4 + (0xF << 2)
label_2484d8:
    if (ctx->pc == 0x2484D8u) {
        ctx->pc = 0x2484D8u;
            // 0x2484d8: 0xa7a001f0  sh          $zero, 0x1F0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 496), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2484DCu;
        goto label_2484dc;
    }
    ctx->pc = 0x2484D4u;
    {
        const bool branch_taken_0x2484d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x2484D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2484D4u;
            // 0x2484d8: 0xa7a001f0  sh          $zero, 0x1F0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 496), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2484d4) {
            ctx->pc = 0x248514u;
            goto label_248514;
        }
    }
    ctx->pc = 0x2484DCu;
label_2484dc:
    // 0x2484dc: 0x12770009  beq         $s3, $s7, . + 4 + (0x9 << 2)
label_2484e0:
    if (ctx->pc == 0x2484E0u) {
        ctx->pc = 0x2484E0u;
            // 0x2484e0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2484E4u;
        goto label_2484e4;
    }
    ctx->pc = 0x2484DCu;
    {
        const bool branch_taken_0x2484dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 23));
        ctx->pc = 0x2484E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2484DCu;
            // 0x2484e0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2484dc) {
            ctx->pc = 0x248504u;
            goto label_248504;
        }
    }
    ctx->pc = 0x2484E4u;
label_2484e4:
    // 0x2484e4: 0x12620005  beq         $s3, $v0, . + 4 + (0x5 << 2)
label_2484e8:
    if (ctx->pc == 0x2484E8u) {
        ctx->pc = 0x2484E8u;
            // 0x2484e8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2484ECu;
        goto label_2484ec;
    }
    ctx->pc = 0x2484E4u;
    {
        const bool branch_taken_0x2484e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2484E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2484E4u;
            // 0x2484e8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2484e4) {
            ctx->pc = 0x2484FCu;
            goto label_2484fc;
        }
    }
    ctx->pc = 0x2484ECu;
label_2484ec:
    // 0x2484ec: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_2484f0:
    if (ctx->pc == 0x2484F0u) {
        ctx->pc = 0x2484F4u;
        goto label_2484f4;
    }
    ctx->pc = 0x2484ECu;
    {
        const bool branch_taken_0x2484ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x2484ec) {
            ctx->pc = 0x2484FCu;
            goto label_2484fc;
        }
    }
    ctx->pc = 0x2484F4u;
label_2484f4:
    // 0x2484f4: 0x100000df  b           . + 4 + (0xDF << 2)
label_2484f8:
    if (ctx->pc == 0x2484F8u) {
        ctx->pc = 0x2484FCu;
        goto label_2484fc;
    }
    ctx->pc = 0x2484F4u;
    {
        const bool branch_taken_0x2484f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2484f4) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x2484FCu;
label_2484fc:
    // 0x2484fc: 0x100000dd  b           . + 4 + (0xDD << 2)
label_248500:
    if (ctx->pc == 0x248500u) {
        ctx->pc = 0x248500u;
            // 0x248500: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x248504u;
        goto label_248504;
    }
    ctx->pc = 0x2484FCu;
    {
        const bool branch_taken_0x2484fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2484FCu;
            // 0x248500: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2484fc) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x248504u;
label_248504:
    // 0x248504: 0x1ac000db  blez        $s6, . + 4 + (0xDB << 2)
label_248508:
    if (ctx->pc == 0x248508u) {
        ctx->pc = 0x248508u;
            // 0x248508: 0x2411000a  addiu       $s1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x24850Cu;
        goto label_24850c;
    }
    ctx->pc = 0x248504u;
    {
        const bool branch_taken_0x248504 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x248508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248504u;
            // 0x248508: 0x2411000a  addiu       $s1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248504) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x24850Cu;
label_24850c:
    // 0x24850c: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_248510:
    if (ctx->pc == 0x248510u) {
        ctx->pc = 0x248510u;
            // 0x248510: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x248514u;
        goto label_248514;
    }
    ctx->pc = 0x24850Cu;
    {
        const bool branch_taken_0x24850c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24850Cu;
            // 0x248510: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24850c) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x248514u;
label_248514:
    // 0x248514: 0x100000d7  b           . + 4 + (0xD7 << 2)
label_248518:
    if (ctx->pc == 0x248518u) {
        ctx->pc = 0x248518u;
            // 0x248518: 0x24110032  addiu       $s1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x24851Cu;
        goto label_24851c;
    }
    ctx->pc = 0x248514u;
    {
        const bool branch_taken_0x248514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248514u;
            // 0x248518: 0x24110032  addiu       $s1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248514) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x24851Cu;
label_24851c:
    // 0x24851c: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x24851cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_248520:
    // 0x248520: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x248520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_248524:
    // 0x248524: 0x742821  addu        $a1, $v1, $s4
    ctx->pc = 0x248524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_248528:
    // 0x248528: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x248528u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24852c:
    // 0x24852c: 0x8c23d8d0  lw          $v1, -0x2730($at)
    ctx->pc = 0x24852cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957264)));
label_248530:
    // 0x248530: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x248530u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_248534:
    // 0x248534: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x248534u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_248538:
    // 0x248538: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x248538u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24853c:
    // 0x24853c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x24853cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_248540:
    // 0x248540: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x248540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_248544:
    // 0x248544: 0x65a821  addu        $s5, $v1, $a1
    ctx->pc = 0x248544u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_248548:
    // 0x248548: 0x27a301f2  addiu       $v1, $sp, 0x1F2
    ctx->pc = 0x248548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 498));
label_24854c:
    // 0x24854c: 0xa4720000  sh          $s2, 0x0($v1)
    ctx->pc = 0x24854cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 18));
label_248550:
    // 0x248550: 0x27a301f4  addiu       $v1, $sp, 0x1F4
    ctx->pc = 0x248550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_248554:
    // 0x248554: 0xa4740000  sh          $s4, 0x0($v1)
    ctx->pc = 0x248554u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 20));
label_248558:
    // 0x248558: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x248558u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 2));
label_24855c:
    // 0x24855c: 0x12640016  beq         $s3, $a0, . + 4 + (0x16 << 2)
label_248560:
    if (ctx->pc == 0x248560u) {
        ctx->pc = 0x248560u;
            // 0x248560: 0xa7a001f0  sh          $zero, 0x1F0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 496), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x248564u;
        goto label_248564;
    }
    ctx->pc = 0x24855Cu;
    {
        const bool branch_taken_0x24855c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 4));
        ctx->pc = 0x248560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24855Cu;
            // 0x248560: 0xa7a001f0  sh          $zero, 0x1F0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 496), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24855c) {
            ctx->pc = 0x2485B8u;
            goto label_2485b8;
        }
    }
    ctx->pc = 0x248564u;
label_248564:
    // 0x248564: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x248564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_248568:
    // 0x248568: 0x12620011  beq         $s3, $v0, . + 4 + (0x11 << 2)
label_24856c:
    if (ctx->pc == 0x24856Cu) {
        ctx->pc = 0x248570u;
        goto label_248570;
    }
    ctx->pc = 0x248568u;
    {
        const bool branch_taken_0x248568 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x248568) {
            ctx->pc = 0x2485B0u;
            goto label_2485b0;
        }
    }
    ctx->pc = 0x248570u;
label_248570:
    // 0x248570: 0x1277000b  beq         $s3, $s7, . + 4 + (0xB << 2)
label_248574:
    if (ctx->pc == 0x248574u) {
        ctx->pc = 0x248574u;
            // 0x248574: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x248578u;
        goto label_248578;
    }
    ctx->pc = 0x248570u;
    {
        const bool branch_taken_0x248570 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 23));
        ctx->pc = 0x248574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248570u;
            // 0x248574: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248570) {
            ctx->pc = 0x2485A0u;
            goto label_2485a0;
        }
    }
    ctx->pc = 0x248578u;
label_248578:
    // 0x248578: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
label_24857c:
    if (ctx->pc == 0x24857Cu) {
        ctx->pc = 0x24857Cu;
            // 0x24857c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x248580u;
        goto label_248580;
    }
    ctx->pc = 0x248578u;
    {
        const bool branch_taken_0x248578 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x24857Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248578u;
            // 0x24857c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248578) {
            ctx->pc = 0x248598u;
            goto label_248598;
        }
    }
    ctx->pc = 0x248580u;
label_248580:
    // 0x248580: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_248584:
    if (ctx->pc == 0x248584u) {
        ctx->pc = 0x248588u;
        goto label_248588;
    }
    ctx->pc = 0x248580u;
    {
        const bool branch_taken_0x248580 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x248580) {
            ctx->pc = 0x248590u;
            goto label_248590;
        }
    }
    ctx->pc = 0x248588u;
label_248588:
    // 0x248588: 0x100000ba  b           . + 4 + (0xBA << 2)
label_24858c:
    if (ctx->pc == 0x24858Cu) {
        ctx->pc = 0x248590u;
        goto label_248590;
    }
    ctx->pc = 0x248588u;
    {
        const bool branch_taken_0x248588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248588) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x248590u;
label_248590:
    // 0x248590: 0x100000b8  b           . + 4 + (0xB8 << 2)
label_248594:
    if (ctx->pc == 0x248594u) {
        ctx->pc = 0x248594u;
            // 0x248594: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x248598u;
        goto label_248598;
    }
    ctx->pc = 0x248590u;
    {
        const bool branch_taken_0x248590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248590u;
            // 0x248594: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248590) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x248598u;
label_248598:
    // 0x248598: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_24859c:
    if (ctx->pc == 0x24859Cu) {
        ctx->pc = 0x24859Cu;
            // 0x24859c: 0x2411001e  addiu       $s1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x2485A0u;
        goto label_2485a0;
    }
    ctx->pc = 0x248598u;
    {
        const bool branch_taken_0x248598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24859Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248598u;
            // 0x24859c: 0x2411001e  addiu       $s1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248598) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x2485A0u;
label_2485a0:
    // 0x2485a0: 0x1ac000b4  blez        $s6, . + 4 + (0xB4 << 2)
label_2485a4:
    if (ctx->pc == 0x2485A4u) {
        ctx->pc = 0x2485A4u;
            // 0x2485a4: 0x2411000a  addiu       $s1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2485A8u;
        goto label_2485a8;
    }
    ctx->pc = 0x2485A0u;
    {
        const bool branch_taken_0x2485a0 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x2485A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2485A0u;
            // 0x2485a4: 0x2411000a  addiu       $s1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2485a0) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x2485A8u;
label_2485a8:
    // 0x2485a8: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_2485ac:
    if (ctx->pc == 0x2485ACu) {
        ctx->pc = 0x2485ACu;
            // 0x2485ac: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2485B0u;
        goto label_2485b0;
    }
    ctx->pc = 0x2485A8u;
    {
        const bool branch_taken_0x2485a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2485ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2485A8u;
            // 0x2485ac: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2485a8) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x2485B0u;
label_2485b0:
    // 0x2485b0: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_2485b4:
    if (ctx->pc == 0x2485B4u) {
        ctx->pc = 0x2485B4u;
            // 0x2485b4: 0x24110032  addiu       $s1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x2485B8u;
        goto label_2485b8;
    }
    ctx->pc = 0x2485B0u;
    {
        const bool branch_taken_0x2485b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2485B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2485B0u;
            // 0x2485b4: 0x24110032  addiu       $s1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2485b0) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x2485B8u;
label_2485b8:
    // 0x2485b8: 0x100000ae  b           . + 4 + (0xAE << 2)
label_2485bc:
    if (ctx->pc == 0x2485BCu) {
        ctx->pc = 0x2485BCu;
            // 0x2485bc: 0x24110028  addiu       $s1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x2485C0u;
        goto label_2485c0;
    }
    ctx->pc = 0x2485B8u;
    {
        const bool branch_taken_0x2485b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2485BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2485B8u;
            // 0x2485bc: 0x24110028  addiu       $s1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2485b8) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x2485C0u;
label_2485c0:
    // 0x2485c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2485c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2485c4:
    // 0x2485c4: 0x1262000b  beq         $s3, $v0, . + 4 + (0xB << 2)
label_2485c8:
    if (ctx->pc == 0x2485C8u) {
        ctx->pc = 0x2485C8u;
            // 0x2485c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2485CCu;
        goto label_2485cc;
    }
    ctx->pc = 0x2485C4u;
    {
        const bool branch_taken_0x2485c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2485C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2485C4u;
            // 0x2485c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2485c4) {
            ctx->pc = 0x2485F4u;
            goto label_2485f4;
        }
    }
    ctx->pc = 0x2485CCu;
label_2485cc:
    // 0x2485cc: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
label_2485d0:
    if (ctx->pc == 0x2485D0u) {
        ctx->pc = 0x2485D0u;
            // 0x2485d0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2485D4u;
        goto label_2485d4;
    }
    ctx->pc = 0x2485CCu;
    {
        const bool branch_taken_0x2485cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2485D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2485CCu;
            // 0x2485d0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2485cc) {
            ctx->pc = 0x2485ECu;
            goto label_2485ec;
        }
    }
    ctx->pc = 0x2485D4u;
label_2485d4:
    // 0x2485d4: 0x12620005  beq         $s3, $v0, . + 4 + (0x5 << 2)
label_2485d8:
    if (ctx->pc == 0x2485D8u) {
        ctx->pc = 0x2485D8u;
            // 0x2485d8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2485DCu;
        goto label_2485dc;
    }
    ctx->pc = 0x2485D4u;
    {
        const bool branch_taken_0x2485d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2485D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2485D4u;
            // 0x2485d8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2485d4) {
            ctx->pc = 0x2485ECu;
            goto label_2485ec;
        }
    }
    ctx->pc = 0x2485DCu;
label_2485dc:
    // 0x2485dc: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_2485e0:
    if (ctx->pc == 0x2485E0u) {
        ctx->pc = 0x2485E4u;
        goto label_2485e4;
    }
    ctx->pc = 0x2485DCu;
    {
        const bool branch_taken_0x2485dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x2485dc) {
            ctx->pc = 0x2485ECu;
            goto label_2485ec;
        }
    }
    ctx->pc = 0x2485E4u;
label_2485e4:
    // 0x2485e4: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_2485e8:
    if (ctx->pc == 0x2485E8u) {
        ctx->pc = 0x2485ECu;
        goto label_2485ec;
    }
    ctx->pc = 0x2485E4u;
    {
        const bool branch_taken_0x2485e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2485e4) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x2485ECu;
label_2485ec:
    // 0x2485ec: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_2485f0:
    if (ctx->pc == 0x2485F0u) {
        ctx->pc = 0x2485F0u;
            // 0x2485f0: 0x2411003c  addiu       $s1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x2485F4u;
        goto label_2485f4;
    }
    ctx->pc = 0x2485ECu;
    {
        const bool branch_taken_0x2485ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2485F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2485ECu;
            // 0x2485f0: 0x2411003c  addiu       $s1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2485ec) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x2485F4u;
label_2485f4:
    // 0x2485f4: 0x1000009f  b           . + 4 + (0x9F << 2)
label_2485f8:
    if (ctx->pc == 0x2485F8u) {
        ctx->pc = 0x2485F8u;
            // 0x2485f8: 0x24110032  addiu       $s1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x2485FCu;
        goto label_2485fc;
    }
    ctx->pc = 0x2485F4u;
    {
        const bool branch_taken_0x2485f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2485F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2485F4u;
            // 0x2485f8: 0x24110032  addiu       $s1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2485f4) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x2485FCu;
label_2485fc:
    // 0x2485fc: 0x8e15017c  lw          $s5, 0x17C($s0)
    ctx->pc = 0x2485fcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_248600:
    // 0x248600: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x248600u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_248604:
    // 0x248604: 0x27a301f2  addiu       $v1, $sp, 0x1F2
    ctx->pc = 0x248604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 498));
label_248608:
    // 0x248608: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x248608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24860c:
    // 0x24860c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x24860cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248610:
    // 0x248610: 0xa4720000  sh          $s2, 0x0($v1)
    ctx->pc = 0x248610u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 18));
label_248614:
    // 0x248614: 0x27a301f4  addiu       $v1, $sp, 0x1F4
    ctx->pc = 0x248614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_248618:
    // 0x248618: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x248618u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_24861c:
    // 0x24861c: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x24861cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 2));
label_248620:
    // 0x248620: 0x1264000f  beq         $s3, $a0, . + 4 + (0xF << 2)
label_248624:
    if (ctx->pc == 0x248624u) {
        ctx->pc = 0x248624u;
            // 0x248624: 0xa7a001f0  sh          $zero, 0x1F0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 496), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x248628u;
        goto label_248628;
    }
    ctx->pc = 0x248620u;
    {
        const bool branch_taken_0x248620 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 4));
        ctx->pc = 0x248624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248620u;
            // 0x248624: 0xa7a001f0  sh          $zero, 0x1F0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 496), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248620) {
            ctx->pc = 0x248660u;
            goto label_248660;
        }
    }
    ctx->pc = 0x248628u;
label_248628:
    // 0x248628: 0x12770009  beq         $s3, $s7, . + 4 + (0x9 << 2)
label_24862c:
    if (ctx->pc == 0x24862Cu) {
        ctx->pc = 0x24862Cu;
            // 0x24862c: 0x16082a  slt         $at, $zero, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->pc = 0x248630u;
        goto label_248630;
    }
    ctx->pc = 0x248628u;
    {
        const bool branch_taken_0x248628 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 23));
        ctx->pc = 0x24862Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248628u;
            // 0x24862c: 0x16082a  slt         $at, $zero, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248628) {
            ctx->pc = 0x248650u;
            goto label_248650;
        }
    }
    ctx->pc = 0x248630u;
label_248630:
    // 0x248630: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x248630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_248634:
    // 0x248634: 0x12620005  beq         $s3, $v0, . + 4 + (0x5 << 2)
label_248638:
    if (ctx->pc == 0x248638u) {
        ctx->pc = 0x248638u;
            // 0x248638: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x24863Cu;
        goto label_24863c;
    }
    ctx->pc = 0x248634u;
    {
        const bool branch_taken_0x248634 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x248638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248634u;
            // 0x248638: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248634) {
            ctx->pc = 0x24864Cu;
            goto label_24864c;
        }
    }
    ctx->pc = 0x24863Cu;
label_24863c:
    // 0x24863c: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_248640:
    if (ctx->pc == 0x248640u) {
        ctx->pc = 0x248644u;
        goto label_248644;
    }
    ctx->pc = 0x24863Cu;
    {
        const bool branch_taken_0x24863c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x24863c) {
            ctx->pc = 0x24864Cu;
            goto label_24864c;
        }
    }
    ctx->pc = 0x248644u;
label_248644:
    // 0x248644: 0x1000008b  b           . + 4 + (0x8B << 2)
label_248648:
    if (ctx->pc == 0x248648u) {
        ctx->pc = 0x24864Cu;
        goto label_24864c;
    }
    ctx->pc = 0x248644u;
    {
        const bool branch_taken_0x248644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248644) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x24864Cu;
label_24864c:
    // 0x24864c: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x24864cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_248650:
    // 0x248650: 0x10200088  beqz        $at, . + 4 + (0x88 << 2)
label_248654:
    if (ctx->pc == 0x248654u) {
        ctx->pc = 0x248654u;
            // 0x248654: 0x2411000a  addiu       $s1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x248658u;
        goto label_248658;
    }
    ctx->pc = 0x248650u;
    {
        const bool branch_taken_0x248650 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x248654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248650u;
            // 0x248654: 0x2411000a  addiu       $s1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248650) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x248658u;
label_248658:
    // 0x248658: 0x10000086  b           . + 4 + (0x86 << 2)
label_24865c:
    if (ctx->pc == 0x24865Cu) {
        ctx->pc = 0x24865Cu;
            // 0x24865c: 0x24110046  addiu       $s1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x248660u;
        goto label_248660;
    }
    ctx->pc = 0x248658u;
    {
        const bool branch_taken_0x248658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24865Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248658u;
            // 0x24865c: 0x24110046  addiu       $s1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248658) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x248660u;
label_248660:
    // 0x248660: 0x10000084  b           . + 4 + (0x84 << 2)
label_248664:
    if (ctx->pc == 0x248664u) {
        ctx->pc = 0x248664u;
            // 0x248664: 0x24110032  addiu       $s1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x248668u;
        goto label_248668;
    }
    ctx->pc = 0x248660u;
    {
        const bool branch_taken_0x248660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248660u;
            // 0x248664: 0x24110032  addiu       $s1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248660) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x248668u;
label_248668:
    // 0x248668: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x248668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24866c:
    // 0x24866c: 0x1262000b  beq         $s3, $v0, . + 4 + (0xB << 2)
label_248670:
    if (ctx->pc == 0x248670u) {
        ctx->pc = 0x248670u;
            // 0x248670: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x248674u;
        goto label_248674;
    }
    ctx->pc = 0x24866Cu;
    {
        const bool branch_taken_0x24866c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x248670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24866Cu;
            // 0x248670: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24866c) {
            ctx->pc = 0x24869Cu;
            goto label_24869c;
        }
    }
    ctx->pc = 0x248674u;
label_248674:
    // 0x248674: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
label_248678:
    if (ctx->pc == 0x248678u) {
        ctx->pc = 0x248678u;
            // 0x248678: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x24867Cu;
        goto label_24867c;
    }
    ctx->pc = 0x248674u;
    {
        const bool branch_taken_0x248674 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x248678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248674u;
            // 0x248678: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248674) {
            ctx->pc = 0x248694u;
            goto label_248694;
        }
    }
    ctx->pc = 0x24867Cu;
label_24867c:
    // 0x24867c: 0x12620005  beq         $s3, $v0, . + 4 + (0x5 << 2)
label_248680:
    if (ctx->pc == 0x248680u) {
        ctx->pc = 0x248680u;
            // 0x248680: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x248684u;
        goto label_248684;
    }
    ctx->pc = 0x24867Cu;
    {
        const bool branch_taken_0x24867c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x248680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24867Cu;
            // 0x248680: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24867c) {
            ctx->pc = 0x248694u;
            goto label_248694;
        }
    }
    ctx->pc = 0x248684u;
label_248684:
    // 0x248684: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_248688:
    if (ctx->pc == 0x248688u) {
        ctx->pc = 0x24868Cu;
        goto label_24868c;
    }
    ctx->pc = 0x248684u;
    {
        const bool branch_taken_0x248684 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x248684) {
            ctx->pc = 0x248694u;
            goto label_248694;
        }
    }
    ctx->pc = 0x24868Cu;
label_24868c:
    // 0x24868c: 0x10000079  b           . + 4 + (0x79 << 2)
label_248690:
    if (ctx->pc == 0x248690u) {
        ctx->pc = 0x248694u;
        goto label_248694;
    }
    ctx->pc = 0x24868Cu;
    {
        const bool branch_taken_0x24868c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24868c) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x248694u;
label_248694:
    // 0x248694: 0x10000077  b           . + 4 + (0x77 << 2)
label_248698:
    if (ctx->pc == 0x248698u) {
        ctx->pc = 0x248698u;
            // 0x248698: 0x24110005  addiu       $s1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x24869Cu;
        goto label_24869c;
    }
    ctx->pc = 0x248694u;
    {
        const bool branch_taken_0x248694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248694u;
            // 0x248698: 0x24110005  addiu       $s1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248694) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x24869Cu;
label_24869c:
    // 0x24869c: 0x10000075  b           . + 4 + (0x75 << 2)
label_2486a0:
    if (ctx->pc == 0x2486A0u) {
        ctx->pc = 0x2486A0u;
            // 0x2486a0: 0x24110064  addiu       $s1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x2486A4u;
        goto label_2486a4;
    }
    ctx->pc = 0x24869Cu;
    {
        const bool branch_taken_0x24869c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2486A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24869Cu;
            // 0x2486a0: 0x24110064  addiu       $s1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24869c) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x2486A4u;
label_2486a4:
    // 0x2486a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2486a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2486a8:
    // 0x2486a8: 0x1262000b  beq         $s3, $v0, . + 4 + (0xB << 2)
label_2486ac:
    if (ctx->pc == 0x2486ACu) {
        ctx->pc = 0x2486ACu;
            // 0x2486ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2486B0u;
        goto label_2486b0;
    }
    ctx->pc = 0x2486A8u;
    {
        const bool branch_taken_0x2486a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2486ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2486A8u;
            // 0x2486ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2486a8) {
            ctx->pc = 0x2486D8u;
            goto label_2486d8;
        }
    }
    ctx->pc = 0x2486B0u;
label_2486b0:
    // 0x2486b0: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
label_2486b4:
    if (ctx->pc == 0x2486B4u) {
        ctx->pc = 0x2486B4u;
            // 0x2486b4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2486B8u;
        goto label_2486b8;
    }
    ctx->pc = 0x2486B0u;
    {
        const bool branch_taken_0x2486b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2486B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2486B0u;
            // 0x2486b4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2486b0) {
            ctx->pc = 0x2486D0u;
            goto label_2486d0;
        }
    }
    ctx->pc = 0x2486B8u;
label_2486b8:
    // 0x2486b8: 0x12620005  beq         $s3, $v0, . + 4 + (0x5 << 2)
label_2486bc:
    if (ctx->pc == 0x2486BCu) {
        ctx->pc = 0x2486BCu;
            // 0x2486bc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2486C0u;
        goto label_2486c0;
    }
    ctx->pc = 0x2486B8u;
    {
        const bool branch_taken_0x2486b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2486BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2486B8u;
            // 0x2486bc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2486b8) {
            ctx->pc = 0x2486D0u;
            goto label_2486d0;
        }
    }
    ctx->pc = 0x2486C0u;
label_2486c0:
    // 0x2486c0: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_2486c4:
    if (ctx->pc == 0x2486C4u) {
        ctx->pc = 0x2486C8u;
        goto label_2486c8;
    }
    ctx->pc = 0x2486C0u;
    {
        const bool branch_taken_0x2486c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x2486c0) {
            ctx->pc = 0x2486D0u;
            goto label_2486d0;
        }
    }
    ctx->pc = 0x2486C8u;
label_2486c8:
    // 0x2486c8: 0x1000006a  b           . + 4 + (0x6A << 2)
label_2486cc:
    if (ctx->pc == 0x2486CCu) {
        ctx->pc = 0x2486D0u;
        goto label_2486d0;
    }
    ctx->pc = 0x2486C8u;
    {
        const bool branch_taken_0x2486c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2486c8) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x2486D0u;
label_2486d0:
    // 0x2486d0: 0x10000068  b           . + 4 + (0x68 << 2)
label_2486d4:
    if (ctx->pc == 0x2486D4u) {
        ctx->pc = 0x2486D4u;
            // 0x2486d4: 0x24110005  addiu       $s1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2486D8u;
        goto label_2486d8;
    }
    ctx->pc = 0x2486D0u;
    {
        const bool branch_taken_0x2486d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2486D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2486D0u;
            // 0x2486d4: 0x24110005  addiu       $s1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2486d0) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x2486D8u;
label_2486d8:
    // 0x2486d8: 0x10000066  b           . + 4 + (0x66 << 2)
label_2486dc:
    if (ctx->pc == 0x2486DCu) {
        ctx->pc = 0x2486DCu;
            // 0x2486dc: 0x24110064  addiu       $s1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x2486E0u;
        goto label_2486e0;
    }
    ctx->pc = 0x2486D8u;
    {
        const bool branch_taken_0x2486d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2486DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2486D8u;
            // 0x2486dc: 0x24110064  addiu       $s1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2486d8) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x2486E0u;
label_2486e0:
    // 0x2486e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2486e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2486e4:
    // 0x2486e4: 0x1262000b  beq         $s3, $v0, . + 4 + (0xB << 2)
label_2486e8:
    if (ctx->pc == 0x2486E8u) {
        ctx->pc = 0x2486E8u;
            // 0x2486e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2486ECu;
        goto label_2486ec;
    }
    ctx->pc = 0x2486E4u;
    {
        const bool branch_taken_0x2486e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2486E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2486E4u;
            // 0x2486e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2486e4) {
            ctx->pc = 0x248714u;
            goto label_248714;
        }
    }
    ctx->pc = 0x2486ECu;
label_2486ec:
    // 0x2486ec: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
label_2486f0:
    if (ctx->pc == 0x2486F0u) {
        ctx->pc = 0x2486F0u;
            // 0x2486f0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2486F4u;
        goto label_2486f4;
    }
    ctx->pc = 0x2486ECu;
    {
        const bool branch_taken_0x2486ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2486F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2486ECu;
            // 0x2486f0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2486ec) {
            ctx->pc = 0x24870Cu;
            goto label_24870c;
        }
    }
    ctx->pc = 0x2486F4u;
label_2486f4:
    // 0x2486f4: 0x12620005  beq         $s3, $v0, . + 4 + (0x5 << 2)
label_2486f8:
    if (ctx->pc == 0x2486F8u) {
        ctx->pc = 0x2486F8u;
            // 0x2486f8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2486FCu;
        goto label_2486fc;
    }
    ctx->pc = 0x2486F4u;
    {
        const bool branch_taken_0x2486f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2486F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2486F4u;
            // 0x2486f8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2486f4) {
            ctx->pc = 0x24870Cu;
            goto label_24870c;
        }
    }
    ctx->pc = 0x2486FCu;
label_2486fc:
    // 0x2486fc: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_248700:
    if (ctx->pc == 0x248700u) {
        ctx->pc = 0x248704u;
        goto label_248704;
    }
    ctx->pc = 0x2486FCu;
    {
        const bool branch_taken_0x2486fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x2486fc) {
            ctx->pc = 0x24870Cu;
            goto label_24870c;
        }
    }
    ctx->pc = 0x248704u;
label_248704:
    // 0x248704: 0x1000005b  b           . + 4 + (0x5B << 2)
label_248708:
    if (ctx->pc == 0x248708u) {
        ctx->pc = 0x24870Cu;
        goto label_24870c;
    }
    ctx->pc = 0x248704u;
    {
        const bool branch_taken_0x248704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248704) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x24870Cu;
label_24870c:
    // 0x24870c: 0x10000059  b           . + 4 + (0x59 << 2)
label_248710:
    if (ctx->pc == 0x248710u) {
        ctx->pc = 0x248710u;
            // 0x248710: 0x24110050  addiu       $s1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x248714u;
        goto label_248714;
    }
    ctx->pc = 0x24870Cu;
    {
        const bool branch_taken_0x24870c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24870Cu;
            // 0x248710: 0x24110050  addiu       $s1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24870c) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x248714u;
label_248714:
    // 0x248714: 0x10000057  b           . + 4 + (0x57 << 2)
label_248718:
    if (ctx->pc == 0x248718u) {
        ctx->pc = 0x248718u;
            // 0x248718: 0x24110032  addiu       $s1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x24871Cu;
        goto label_24871c;
    }
    ctx->pc = 0x248714u;
    {
        const bool branch_taken_0x248714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248714u;
            // 0x248718: 0x24110032  addiu       $s1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248714) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x24871Cu;
label_24871c:
    // 0x24871c: 0x27828358  addiu       $v0, $gp, -0x7CA8
    ctx->pc = 0x24871cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935384));
label_248720:
    // 0x248720: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x248720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_248724:
    // 0x248724: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x248724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_248728:
    // 0x248728: 0x8c23d8c8  lw          $v1, -0x2738($at)
    ctx->pc = 0x248728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
label_24872c:
    // 0x24872c: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x24872cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_248730:
    // 0x248730: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x248730u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_248734:
    // 0x248734: 0x27a201f2  addiu       $v0, $sp, 0x1F2
    ctx->pc = 0x248734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 498));
label_248738:
    // 0x248738: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x248738u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_24873c:
    // 0x24873c: 0xa4520000  sh          $s2, 0x0($v0)
    ctx->pc = 0x24873cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 18));
label_248740:
    // 0x248740: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x248740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_248744:
    // 0x248744: 0x27a201f4  addiu       $v0, $sp, 0x1F4
    ctx->pc = 0x248744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_248748:
    // 0x248748: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x248748u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
label_24874c:
    // 0x24874c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x24874cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_248750:
    // 0x248750: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x248750u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 18));
label_248754:
    // 0x248754: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x248754u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_248758:
    // 0x248758: 0xa7a001f0  sh          $zero, 0x1F0($sp)
    ctx->pc = 0x248758u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 496), (uint16_t)GPR_U32(ctx, 0));
label_24875c:
    // 0x24875c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24875cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_248760:
    // 0x248760: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x248760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_248764:
    // 0x248764: 0x12720011  beq         $s3, $s2, . + 4 + (0x11 << 2)
label_248768:
    if (ctx->pc == 0x248768u) {
        ctx->pc = 0x248768u;
            // 0x248768: 0x24550030  addiu       $s5, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->pc = 0x24876Cu;
        goto label_24876c;
    }
    ctx->pc = 0x248764u;
    {
        const bool branch_taken_0x248764 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 18));
        ctx->pc = 0x248768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248764u;
            // 0x248768: 0x24550030  addiu       $s5, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248764) {
            ctx->pc = 0x2487ACu;
            goto label_2487ac;
        }
    }
    ctx->pc = 0x24876Cu;
label_24876c:
    // 0x24876c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24876cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248770:
    // 0x248770: 0x1262000a  beq         $s3, $v0, . + 4 + (0xA << 2)
label_248774:
    if (ctx->pc == 0x248774u) {
        ctx->pc = 0x248774u;
            // 0x248774: 0x16082a  slt         $at, $zero, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->pc = 0x248778u;
        goto label_248778;
    }
    ctx->pc = 0x248770u;
    {
        const bool branch_taken_0x248770 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x248774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248770u;
            // 0x248774: 0x16082a  slt         $at, $zero, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248770) {
            ctx->pc = 0x24879Cu;
            goto label_24879c;
        }
    }
    ctx->pc = 0x248778u;
label_248778:
    // 0x248778: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x248778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_24877c:
    // 0x24877c: 0x12620005  beq         $s3, $v0, . + 4 + (0x5 << 2)
label_248780:
    if (ctx->pc == 0x248780u) {
        ctx->pc = 0x248780u;
            // 0x248780: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x248784u;
        goto label_248784;
    }
    ctx->pc = 0x24877Cu;
    {
        const bool branch_taken_0x24877c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x248780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24877Cu;
            // 0x248780: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24877c) {
            ctx->pc = 0x248794u;
            goto label_248794;
        }
    }
    ctx->pc = 0x248784u;
label_248784:
    // 0x248784: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_248788:
    if (ctx->pc == 0x248788u) {
        ctx->pc = 0x24878Cu;
        goto label_24878c;
    }
    ctx->pc = 0x248784u;
    {
        const bool branch_taken_0x248784 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x248784) {
            ctx->pc = 0x248794u;
            goto label_248794;
        }
    }
    ctx->pc = 0x24878Cu;
label_24878c:
    // 0x24878c: 0x10000039  b           . + 4 + (0x39 << 2)
label_248790:
    if (ctx->pc == 0x248790u) {
        ctx->pc = 0x248794u;
        goto label_248794;
    }
    ctx->pc = 0x24878Cu;
    {
        const bool branch_taken_0x24878c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24878c) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x248794u;
label_248794:
    // 0x248794: 0x10000037  b           . + 4 + (0x37 << 2)
label_248798:
    if (ctx->pc == 0x248798u) {
        ctx->pc = 0x248798u;
            // 0x248798: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x24879Cu;
        goto label_24879c;
    }
    ctx->pc = 0x248794u;
    {
        const bool branch_taken_0x248794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248794u;
            // 0x248798: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248794) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x24879Cu;
label_24879c:
    // 0x24879c: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
label_2487a0:
    if (ctx->pc == 0x2487A0u) {
        ctx->pc = 0x2487A0u;
            // 0x2487a0: 0x2411000a  addiu       $s1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2487A4u;
        goto label_2487a4;
    }
    ctx->pc = 0x24879Cu;
    {
        const bool branch_taken_0x24879c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2487A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24879Cu;
            // 0x2487a0: 0x2411000a  addiu       $s1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24879c) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x2487A4u;
label_2487a4:
    // 0x2487a4: 0x10000033  b           . + 4 + (0x33 << 2)
label_2487a8:
    if (ctx->pc == 0x2487A8u) {
        ctx->pc = 0x2487A8u;
            // 0x2487a8: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2487ACu;
        goto label_2487ac;
    }
    ctx->pc = 0x2487A4u;
    {
        const bool branch_taken_0x2487a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2487A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2487A4u;
            // 0x2487a8: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2487a4) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x2487ACu;
label_2487ac:
    // 0x2487ac: 0x10000031  b           . + 4 + (0x31 << 2)
label_2487b0:
    if (ctx->pc == 0x2487B0u) {
        ctx->pc = 0x2487B0u;
            // 0x2487b0: 0x24110032  addiu       $s1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x2487B4u;
        goto label_2487b4;
    }
    ctx->pc = 0x2487ACu;
    {
        const bool branch_taken_0x2487ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2487B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2487ACu;
            // 0x2487b0: 0x24110032  addiu       $s1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2487ac) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x2487B4u;
label_2487b4:
    // 0x2487b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2487b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2487b8:
    // 0x2487b8: 0x1262000b  beq         $s3, $v0, . + 4 + (0xB << 2)
label_2487bc:
    if (ctx->pc == 0x2487BCu) {
        ctx->pc = 0x2487BCu;
            // 0x2487bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2487C0u;
        goto label_2487c0;
    }
    ctx->pc = 0x2487B8u;
    {
        const bool branch_taken_0x2487b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2487BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2487B8u;
            // 0x2487bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2487b8) {
            ctx->pc = 0x2487E8u;
            goto label_2487e8;
        }
    }
    ctx->pc = 0x2487C0u;
label_2487c0:
    // 0x2487c0: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
label_2487c4:
    if (ctx->pc == 0x2487C4u) {
        ctx->pc = 0x2487C4u;
            // 0x2487c4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2487C8u;
        goto label_2487c8;
    }
    ctx->pc = 0x2487C0u;
    {
        const bool branch_taken_0x2487c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2487C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2487C0u;
            // 0x2487c4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2487c0) {
            ctx->pc = 0x2487E0u;
            goto label_2487e0;
        }
    }
    ctx->pc = 0x2487C8u;
label_2487c8:
    // 0x2487c8: 0x12620005  beq         $s3, $v0, . + 4 + (0x5 << 2)
label_2487cc:
    if (ctx->pc == 0x2487CCu) {
        ctx->pc = 0x2487CCu;
            // 0x2487cc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2487D0u;
        goto label_2487d0;
    }
    ctx->pc = 0x2487C8u;
    {
        const bool branch_taken_0x2487c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2487CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2487C8u;
            // 0x2487cc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2487c8) {
            ctx->pc = 0x2487E0u;
            goto label_2487e0;
        }
    }
    ctx->pc = 0x2487D0u;
label_2487d0:
    // 0x2487d0: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_2487d4:
    if (ctx->pc == 0x2487D4u) {
        ctx->pc = 0x2487D8u;
        goto label_2487d8;
    }
    ctx->pc = 0x2487D0u;
    {
        const bool branch_taken_0x2487d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x2487d0) {
            ctx->pc = 0x2487E0u;
            goto label_2487e0;
        }
    }
    ctx->pc = 0x2487D8u;
label_2487d8:
    // 0x2487d8: 0x10000026  b           . + 4 + (0x26 << 2)
label_2487dc:
    if (ctx->pc == 0x2487DCu) {
        ctx->pc = 0x2487E0u;
        goto label_2487e0;
    }
    ctx->pc = 0x2487D8u;
    {
        const bool branch_taken_0x2487d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2487d8) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x2487E0u;
label_2487e0:
    // 0x2487e0: 0x10000024  b           . + 4 + (0x24 << 2)
label_2487e4:
    if (ctx->pc == 0x2487E4u) {
        ctx->pc = 0x2487E4u;
            // 0x2487e4: 0x2411005a  addiu       $s1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->pc = 0x2487E8u;
        goto label_2487e8;
    }
    ctx->pc = 0x2487E0u;
    {
        const bool branch_taken_0x2487e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2487E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2487E0u;
            // 0x2487e4: 0x2411005a  addiu       $s1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2487e0) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x2487E8u;
label_2487e8:
    // 0x2487e8: 0x10000022  b           . + 4 + (0x22 << 2)
label_2487ec:
    if (ctx->pc == 0x2487ECu) {
        ctx->pc = 0x2487ECu;
            // 0x2487ec: 0x24110032  addiu       $s1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x2487F0u;
        goto label_2487f0;
    }
    ctx->pc = 0x2487E8u;
    {
        const bool branch_taken_0x2487e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2487ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2487E8u;
            // 0x2487ec: 0x24110032  addiu       $s1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2487e8) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x2487F0u;
label_2487f0:
    // 0x2487f0: 0xc065af8  jal         func_196BE0
label_2487f4:
    if (ctx->pc == 0x2487F4u) {
        ctx->pc = 0x2487F8u;
        goto label_2487f8;
    }
    ctx->pc = 0x2487F0u;
    SET_GPR_U32(ctx, 31, 0x2487F8u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2487F8u; }
        if (ctx->pc != 0x2487F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2487F8u; }
        if (ctx->pc != 0x2487F8u) { return; }
    }
    ctx->pc = 0x2487F8u;
label_2487f8:
    // 0x2487f8: 0xc0673b8  jal         func_19CEE0
label_2487fc:
    if (ctx->pc == 0x2487FCu) {
        ctx->pc = 0x2487FCu;
            // 0x2487fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248800u;
        goto label_248800;
    }
    ctx->pc = 0x2487F8u;
    SET_GPR_U32(ctx, 31, 0x248800u);
    ctx->pc = 0x2487FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2487F8u;
            // 0x2487fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CEE0u;
    if (runtime->hasFunction(0x19CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x19CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248800u; }
        if (ctx->pc != 0x248800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveEsa__16CUserDataManagerFv_0x19cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248800u; }
        if (ctx->pc != 0x248800u) { return; }
    }
    ctx->pc = 0x248800u;
label_248800:
    // 0x248800: 0x86040114  lh          $a0, 0x114($s0)
    ctx->pc = 0x248800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
label_248804:
    // 0x248804: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x248804u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248808:
    // 0x248808: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x248808u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_24880c:
    // 0x24880c: 0x27a201f2  addiu       $v0, $sp, 0x1F2
    ctx->pc = 0x24880cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 498));
label_248810:
    // 0x248810: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x248810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_248814:
    // 0x248814: 0xa4520000  sh          $s2, 0x0($v0)
    ctx->pc = 0x248814u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 18));
label_248818:
    // 0x248818: 0x27a201f4  addiu       $v0, $sp, 0x1F4
    ctx->pc = 0x248818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_24881c:
    // 0x24881c: 0xa4540000  sh          $s4, 0x0($v0)
    ctx->pc = 0x24881cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 20));
label_248820:
    // 0x248820: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x248820u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 4));
label_248824:
    // 0x248824: 0x12630012  beq         $s3, $v1, . + 4 + (0x12 << 2)
label_248828:
    if (ctx->pc == 0x248828u) {
        ctx->pc = 0x248828u;
            // 0x248828: 0xa7a001f0  sh          $zero, 0x1F0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 496), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x24882Cu;
        goto label_24882c;
    }
    ctx->pc = 0x248824u;
    {
        const bool branch_taken_0x248824 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x248828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248824u;
            // 0x248828: 0xa7a001f0  sh          $zero, 0x1F0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 496), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248824) {
            ctx->pc = 0x248870u;
            goto label_248870;
        }
    }
    ctx->pc = 0x24882Cu;
label_24882c:
    // 0x24882c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24882cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248830:
    // 0x248830: 0x1262000b  beq         $s3, $v0, . + 4 + (0xB << 2)
label_248834:
    if (ctx->pc == 0x248834u) {
        ctx->pc = 0x248834u;
            // 0x248834: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x248838u;
        goto label_248838;
    }
    ctx->pc = 0x248830u;
    {
        const bool branch_taken_0x248830 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x248834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248830u;
            // 0x248834: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248830) {
            ctx->pc = 0x248860u;
            goto label_248860;
        }
    }
    ctx->pc = 0x248838u;
label_248838:
    // 0x248838: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
label_24883c:
    if (ctx->pc == 0x24883Cu) {
        ctx->pc = 0x24883Cu;
            // 0x24883c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x248840u;
        goto label_248840;
    }
    ctx->pc = 0x248838u;
    {
        const bool branch_taken_0x248838 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x24883Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248838u;
            // 0x24883c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248838) {
            ctx->pc = 0x248858u;
            goto label_248858;
        }
    }
    ctx->pc = 0x248840u;
label_248840:
    // 0x248840: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_248844:
    if (ctx->pc == 0x248844u) {
        ctx->pc = 0x248848u;
        goto label_248848;
    }
    ctx->pc = 0x248840u;
    {
        const bool branch_taken_0x248840 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x248840) {
            ctx->pc = 0x248850u;
            goto label_248850;
        }
    }
    ctx->pc = 0x248848u;
label_248848:
    // 0x248848: 0x1000000a  b           . + 4 + (0xA << 2)
label_24884c:
    if (ctx->pc == 0x24884Cu) {
        ctx->pc = 0x248850u;
        goto label_248850;
    }
    ctx->pc = 0x248848u;
    {
        const bool branch_taken_0x248848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248848) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x248850u;
label_248850:
    // 0x248850: 0x10000008  b           . + 4 + (0x8 << 2)
label_248854:
    if (ctx->pc == 0x248854u) {
        ctx->pc = 0x248854u;
            // 0x248854: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x248858u;
        goto label_248858;
    }
    ctx->pc = 0x248850u;
    {
        const bool branch_taken_0x248850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248850u;
            // 0x248854: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248850) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x248858u;
label_248858:
    // 0x248858: 0x10000006  b           . + 4 + (0x6 << 2)
label_24885c:
    if (ctx->pc == 0x24885Cu) {
        ctx->pc = 0x24885Cu;
            // 0x24885c: 0x2411001e  addiu       $s1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x248860u;
        goto label_248860;
    }
    ctx->pc = 0x248858u;
    {
        const bool branch_taken_0x248858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24885Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248858u;
            // 0x24885c: 0x2411001e  addiu       $s1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248858) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x248860u;
label_248860:
    // 0x248860: 0x1ac00004  blez        $s6, . + 4 + (0x4 << 2)
label_248864:
    if (ctx->pc == 0x248864u) {
        ctx->pc = 0x248864u;
            // 0x248864: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248868u;
        goto label_248868;
    }
    ctx->pc = 0x248860u;
    {
        const bool branch_taken_0x248860 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x248864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248860u;
            // 0x248864: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248860) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x248868u;
label_248868:
    // 0x248868: 0x10000002  b           . + 4 + (0x2 << 2)
label_24886c:
    if (ctx->pc == 0x24886Cu) {
        ctx->pc = 0x24886Cu;
            // 0x24886c: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x248870u;
        goto label_248870;
    }
    ctx->pc = 0x248868u;
    {
        const bool branch_taken_0x248868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24886Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248868u;
            // 0x24886c: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248868) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x248870u;
label_248870:
    // 0x248870: 0x24110032  addiu       $s1, $zero, 0x32
    ctx->pc = 0x248870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_248874:
    // 0x248874: 0x8f829520  lw          $v0, -0x6AE0($gp)
    ctx->pc = 0x248874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
label_248878:
    // 0x248878: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_24887c:
    if (ctx->pc == 0x24887Cu) {
        ctx->pc = 0x24887Cu;
            // 0x24887c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x248880u;
        goto label_248880;
    }
    ctx->pc = 0x248878u;
    {
        const bool branch_taken_0x248878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24887Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248878u;
            // 0x24887c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248878) {
            ctx->pc = 0x248890u;
            goto label_248890;
        }
    }
    ctx->pc = 0x248880u;
label_248880:
    // 0x248880: 0xc091610  jal         func_245840
label_248884:
    if (ctx->pc == 0x248884u) {
        ctx->pc = 0x248888u;
        goto label_248888;
    }
    ctx->pc = 0x248880u;
    SET_GPR_U32(ctx, 31, 0x248888u);
    ctx->pc = 0x245840u;
    if (runtime->hasFunction(0x245840u)) {
        auto targetFn = runtime->lookupFunction(0x245840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248888u; }
        if (ctx->pc != 0x248888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemDebugKey__Fv_0x245840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248888u; }
        if (ctx->pc != 0x248888u) { return; }
    }
    ctx->pc = 0x248888u;
label_248888:
    // 0x248888: 0x10000566  b           . + 4 + (0x566 << 2)
label_24888c:
    if (ctx->pc == 0x24888Cu) {
        ctx->pc = 0x24888Cu;
            // 0x24888c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248890u;
        goto label_248890;
    }
    ctx->pc = 0x248888u;
    {
        const bool branch_taken_0x248888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24888Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248888u;
            // 0x24888c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248888) {
            ctx->pc = 0x249E24u;
            goto label_249e24;
        }
    }
    ctx->pc = 0x248890u;
label_248890:
    // 0x248890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248894:
    // 0x248894: 0x8c22cb40  lw          $v0, -0x34C0($at)
    ctx->pc = 0x248894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953792)));
label_248898:
    // 0x248898: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x248898u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24889c:
    // 0x24889c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x24889cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_2488a0:
    // 0x2488a0: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2488a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2488a4:
    // 0x2488a4: 0xc090164  jal         func_240590
label_2488a8:
    if (ctx->pc == 0x2488A8u) {
        ctx->pc = 0x2488A8u;
            // 0x2488a8: 0x245300c0  addiu       $s3, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x2488ACu;
        goto label_2488ac;
    }
    ctx->pc = 0x2488A4u;
    SET_GPR_U32(ctx, 31, 0x2488ACu);
    ctx->pc = 0x2488A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2488A4u;
            // 0x2488a8: 0x245300c0  addiu       $s3, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240590u;
    if (runtime->hasFunction(0x240590u)) {
        auto targetFn = runtime->lookupFunction(0x240590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2488ACu; }
        if (ctx->pc != 0x2488ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SaveViewWeaponStatus__13CMenuItemInfoFv_0x240590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2488ACu; }
        if (ctx->pc != 0x2488ACu) { return; }
    }
    ctx->pc = 0x2488ACu;
label_2488ac:
    // 0x2488ac: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x2488acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2488b0:
    // 0x2488b0: 0x12220230  beq         $s1, $v0, . + 4 + (0x230 << 2)
label_2488b4:
    if (ctx->pc == 0x2488B4u) {
        ctx->pc = 0x2488B4u;
            // 0x2488b4: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->pc = 0x2488B8u;
        goto label_2488b8;
    }
    ctx->pc = 0x2488B0u;
    {
        const bool branch_taken_0x2488b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2488B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2488B0u;
            // 0x2488b4: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488b0) {
            ctx->pc = 0x249174u;
            goto label_249174;
        }
    }
    ctx->pc = 0x2488B8u;
label_2488b8:
    // 0x2488b8: 0x12220231  beq         $s1, $v0, . + 4 + (0x231 << 2)
label_2488bc:
    if (ctx->pc == 0x2488BCu) {
        ctx->pc = 0x2488BCu;
            // 0x2488bc: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x2488C0u;
        goto label_2488c0;
    }
    ctx->pc = 0x2488B8u;
    {
        const bool branch_taken_0x2488b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2488BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2488B8u;
            // 0x2488bc: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488b8) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x2488C0u;
label_2488c0:
    // 0x2488c0: 0x12220228  beq         $s1, $v0, . + 4 + (0x228 << 2)
label_2488c4:
    if (ctx->pc == 0x2488C4u) {
        ctx->pc = 0x2488C4u;
            // 0x2488c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2488C8u;
        goto label_2488c8;
    }
    ctx->pc = 0x2488C0u;
    {
        const bool branch_taken_0x2488c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2488C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2488C0u;
            // 0x2488c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488c0) {
            ctx->pc = 0x249164u;
            goto label_249164;
        }
    }
    ctx->pc = 0x2488C8u;
label_2488c8:
    // 0x2488c8: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x2488c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_2488cc:
    // 0x2488cc: 0x122201ed  beq         $s1, $v0, . + 4 + (0x1ED << 2)
label_2488d0:
    if (ctx->pc == 0x2488D0u) {
        ctx->pc = 0x2488D0u;
            // 0x2488d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2488D4u;
        goto label_2488d4;
    }
    ctx->pc = 0x2488CCu;
    {
        const bool branch_taken_0x2488cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2488D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2488CCu;
            // 0x2488d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488cc) {
            ctx->pc = 0x249084u;
            goto label_249084;
        }
    }
    ctx->pc = 0x2488D4u;
label_2488d4:
    // 0x2488d4: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x2488d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_2488d8:
    // 0x2488d8: 0x122201d1  beq         $s1, $v0, . + 4 + (0x1D1 << 2)
label_2488dc:
    if (ctx->pc == 0x2488DCu) {
        ctx->pc = 0x2488DCu;
            // 0x2488dc: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x2488E0u;
        goto label_2488e0;
    }
    ctx->pc = 0x2488D8u;
    {
        const bool branch_taken_0x2488d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2488DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2488D8u;
            // 0x2488dc: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488d8) {
            ctx->pc = 0x249020u;
            goto label_249020;
        }
    }
    ctx->pc = 0x2488E0u;
label_2488e0:
    // 0x2488e0: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x2488e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2488e4:
    // 0x2488e4: 0x1222018c  beq         $s1, $v0, . + 4 + (0x18C << 2)
label_2488e8:
    if (ctx->pc == 0x2488E8u) {
        ctx->pc = 0x2488E8u;
            // 0x2488e8: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x2488ECu;
        goto label_2488ec;
    }
    ctx->pc = 0x2488E4u;
    {
        const bool branch_taken_0x2488e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2488E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2488E4u;
            // 0x2488e8: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488e4) {
            ctx->pc = 0x248F18u;
            goto label_248f18;
        }
    }
    ctx->pc = 0x2488ECu;
label_2488ec:
    // 0x2488ec: 0x12220161  beq         $s1, $v0, . + 4 + (0x161 << 2)
label_2488f0:
    if (ctx->pc == 0x2488F0u) {
        ctx->pc = 0x2488F0u;
            // 0x2488f0: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x2488F4u;
        goto label_2488f4;
    }
    ctx->pc = 0x2488ECu;
    {
        const bool branch_taken_0x2488ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2488F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2488ECu;
            // 0x2488f0: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488ec) {
            ctx->pc = 0x248E74u;
            goto label_248e74;
        }
    }
    ctx->pc = 0x2488F4u;
label_2488f4:
    // 0x2488f4: 0x122200f8  beq         $s1, $v0, . + 4 + (0xF8 << 2)
label_2488f8:
    if (ctx->pc == 0x2488F8u) {
        ctx->pc = 0x2488F8u;
            // 0x2488f8: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x2488FCu;
        goto label_2488fc;
    }
    ctx->pc = 0x2488F4u;
    {
        const bool branch_taken_0x2488f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2488F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2488F4u;
            // 0x2488f8: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488f4) {
            ctx->pc = 0x248CD8u;
            goto label_248cd8;
        }
    }
    ctx->pc = 0x2488FCu;
label_2488fc:
    // 0x2488fc: 0x122200c1  beq         $s1, $v0, . + 4 + (0xC1 << 2)
label_248900:
    if (ctx->pc == 0x248900u) {
        ctx->pc = 0x248900u;
            // 0x248900: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x248904u;
        goto label_248904;
    }
    ctx->pc = 0x2488FCu;
    {
        const bool branch_taken_0x2488fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x248900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2488FCu;
            // 0x248900: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488fc) {
            ctx->pc = 0x248C04u;
            goto label_248c04;
        }
    }
    ctx->pc = 0x248904u;
label_248904:
    // 0x248904: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x248904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_248908:
    // 0x248908: 0x122200ac  beq         $s1, $v0, . + 4 + (0xAC << 2)
label_24890c:
    if (ctx->pc == 0x24890Cu) {
        ctx->pc = 0x24890Cu;
            // 0x24890c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x248910u;
        goto label_248910;
    }
    ctx->pc = 0x248908u;
    {
        const bool branch_taken_0x248908 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x24890Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248908u;
            // 0x24890c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248908) {
            ctx->pc = 0x248BBCu;
            goto label_248bbc;
        }
    }
    ctx->pc = 0x248910u;
label_248910:
    // 0x248910: 0x1222001e  beq         $s1, $v0, . + 4 + (0x1E << 2)
label_248914:
    if (ctx->pc == 0x248914u) {
        ctx->pc = 0x248914u;
            // 0x248914: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x248918u;
        goto label_248918;
    }
    ctx->pc = 0x248910u;
    {
        const bool branch_taken_0x248910 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x248914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248910u;
            // 0x248914: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248910) {
            ctx->pc = 0x24898Cu;
            goto label_24898c;
        }
    }
    ctx->pc = 0x248918u;
label_248918:
    // 0x248918: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
label_24891c:
    if (ctx->pc == 0x24891Cu) {
        ctx->pc = 0x24891Cu;
            // 0x24891c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248920u;
        goto label_248920;
    }
    ctx->pc = 0x248918u;
    {
        const bool branch_taken_0x248918 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x24891Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248918u;
            // 0x24891c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248918) {
            ctx->pc = 0x248944u;
            goto label_248944;
        }
    }
    ctx->pc = 0x248920u;
label_248920:
    // 0x248920: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x248920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_248924:
    // 0x248924: 0x12240003  beq         $s1, $a0, . + 4 + (0x3 << 2)
label_248928:
    if (ctx->pc == 0x248928u) {
        ctx->pc = 0x24892Cu;
        goto label_24892c;
    }
    ctx->pc = 0x248924u;
    {
        const bool branch_taken_0x248924 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        if (branch_taken_0x248924) {
            ctx->pc = 0x248934u;
            goto label_248934;
        }
    }
    ctx->pc = 0x24892Cu;
label_24892c:
    // 0x24892c: 0x10000214  b           . + 4 + (0x214 << 2)
label_248930:
    if (ctx->pc == 0x248930u) {
        ctx->pc = 0x248934u;
        goto label_248934;
    }
    ctx->pc = 0x24892Cu;
    {
        const bool branch_taken_0x24892c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24892c) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248934u;
label_248934:
    // 0x248934: 0xc094274  jal         func_2509D0
label_248938:
    if (ctx->pc == 0x248938u) {
        ctx->pc = 0x24893Cu;
        goto label_24893c;
    }
    ctx->pc = 0x248934u;
    SET_GPR_U32(ctx, 31, 0x24893Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24893Cu; }
        if (ctx->pc != 0x24893Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24893Cu; }
        if (ctx->pc != 0x24893Cu) { return; }
    }
    ctx->pc = 0x24893Cu;
label_24893c:
    // 0x24893c: 0x10000210  b           . + 4 + (0x210 << 2)
label_248940:
    if (ctx->pc == 0x248940u) {
        ctx->pc = 0x248944u;
        goto label_248944;
    }
    ctx->pc = 0x24893Cu;
    {
        const bool branch_taken_0x24893c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24893c) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248944u;
label_248944:
    // 0x248944: 0xc090c20  jal         func_243080
label_248948:
    if (ctx->pc == 0x248948u) {
        ctx->pc = 0x24894Cu;
        goto label_24894c;
    }
    ctx->pc = 0x248944u;
    SET_GPR_U32(ctx, 31, 0x24894Cu);
    ctx->pc = 0x243080u;
    if (runtime->hasFunction(0x243080u)) {
        auto targetFn = runtime->lookupFunction(0x243080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24894Cu; }
        if (ctx->pc != 0x24894Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveCharaIDForItemCmd__13CMenuItemInfoFv_0x243080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24894Cu; }
        if (ctx->pc != 0x24894Cu) { return; }
    }
    ctx->pc = 0x24894Cu;
label_24894c:
    // 0x24894c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24894cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_248950:
    // 0x248950: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x248950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_248954:
    // 0x248954: 0x8c28cb44  lw          $t0, -0x34BC($at)
    ctx->pc = 0x248954u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953796)));
label_248958:
    // 0x248958: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x248958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24895c:
    // 0x24895c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24895cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248960:
    // 0x248960: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x248960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_248964:
    // 0x248964: 0xc08dca8  jal         func_2372A0
label_248968:
    if (ctx->pc == 0x248968u) {
        ctx->pc = 0x248968u;
            // 0x248968: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24896Cu;
        goto label_24896c;
    }
    ctx->pc = 0x248964u;
    SET_GPR_U32(ctx, 31, 0x24896Cu);
    ctx->pc = 0x248968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248964u;
            // 0x248968: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2372A0u;
    if (runtime->hasFunction(0x2372A0u)) {
        auto targetFn = runtime->lookupFunction(0x2372A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24896Cu; }
        if (ctx->pc != 0x24896Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemMoveItemCommand__14CBaseMenuClassFP13CGameDataUsediiP16CMenuPosDataFormi_0x2372a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24896Cu; }
        if (ctx->pc != 0x24896Cu) { return; }
    }
    ctx->pc = 0x24896Cu;
label_24896c:
    // 0x24896c: 0x10400204  beqz        $v0, . + 4 + (0x204 << 2)
label_248970:
    if (ctx->pc == 0x248970u) {
        ctx->pc = 0x248974u;
        goto label_248974;
    }
    ctx->pc = 0x24896Cu;
    {
        const bool branch_taken_0x24896c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24896c) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248974u;
label_248974:
    // 0x248974: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x248974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_248978:
    // 0x248978: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x248978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_24897c:
    // 0x24897c: 0x10400200  beqz        $v0, . + 4 + (0x200 << 2)
label_248980:
    if (ctx->pc == 0x248980u) {
        ctx->pc = 0x248984u;
        goto label_248984;
    }
    ctx->pc = 0x24897Cu;
    {
        const bool branch_taken_0x24897c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24897c) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248984u;
label_248984:
    // 0x248984: 0x100001fe  b           . + 4 + (0x1FE << 2)
label_248988:
    if (ctx->pc == 0x248988u) {
        ctx->pc = 0x248988u;
            // 0x248988: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x24898Cu;
        goto label_24898c;
    }
    ctx->pc = 0x248984u;
    {
        const bool branch_taken_0x248984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248984u;
            // 0x248988: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248984) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x24898Cu;
label_24898c:
    // 0x24898c: 0x12e00014  beqz        $s7, . + 4 + (0x14 << 2)
label_248990:
    if (ctx->pc == 0x248990u) {
        ctx->pc = 0x248994u;
        goto label_248994;
    }
    ctx->pc = 0x24898Cu;
    {
        const bool branch_taken_0x24898c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x24898c) {
            ctx->pc = 0x2489E0u;
            goto label_2489e0;
        }
    }
    ctx->pc = 0x248994u;
label_248994:
    // 0x248994: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x248994u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_248998:
    // 0x248998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24899c:
    // 0x24899c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x24899cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2489a0:
    // 0x2489a0: 0xc08e31c  jal         func_238C70
label_2489a4:
    if (ctx->pc == 0x2489A4u) {
        ctx->pc = 0x2489A4u;
            // 0x2489a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2489A8u;
        goto label_2489a8;
    }
    ctx->pc = 0x2489A0u;
    SET_GPR_U32(ctx, 31, 0x2489A8u);
    ctx->pc = 0x2489A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2489A0u;
            // 0x2489a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238C70u;
    if (runtime->hasFunction(0x238C70u)) {
        auto targetFn = runtime->lookupFunction(0x238C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2489A8u; }
        if (ctx->pc != 0x2489A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSpectolFusion__14CBaseMenuClassFP13CGameDataUsediP16CMenuPosDataForm_0x238c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2489A8u; }
        if (ctx->pc != 0x2489A8u) { return; }
    }
    ctx->pc = 0x2489A8u;
label_2489a8:
    // 0x2489a8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2489ac:
    if (ctx->pc == 0x2489ACu) {
        ctx->pc = 0x2489B0u;
        goto label_2489b0;
    }
    ctx->pc = 0x2489A8u;
    {
        const bool branch_taken_0x2489a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2489a8) {
            ctx->pc = 0x2489E0u;
            goto label_2489e0;
        }
    }
    ctx->pc = 0x2489B0u;
label_2489b0:
    // 0x2489b0: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2489b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2489b4:
    // 0x2489b4: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x2489b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_2489b8:
    // 0x2489b8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2489bc:
    if (ctx->pc == 0x2489BCu) {
        ctx->pc = 0x2489BCu;
            // 0x2489bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2489C0u;
        goto label_2489c0;
    }
    ctx->pc = 0x2489B8u;
    {
        const bool branch_taken_0x2489b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2489BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2489B8u;
            // 0x2489bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2489b8) {
            ctx->pc = 0x2489C4u;
            goto label_2489c4;
        }
    }
    ctx->pc = 0x2489C0u;
label_2489c0:
    // 0x2489c0: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2489c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_2489c4:
    // 0x2489c4: 0xc094274  jal         func_2509D0
label_2489c8:
    if (ctx->pc == 0x2489C8u) {
        ctx->pc = 0x2489CCu;
        goto label_2489cc;
    }
    ctx->pc = 0x2489C4u;
    SET_GPR_U32(ctx, 31, 0x2489CCu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2489CCu; }
        if (ctx->pc != 0x2489CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2489CCu; }
        if (ctx->pc != 0x2489CCu) { return; }
    }
    ctx->pc = 0x2489CCu;
label_2489cc:
    // 0x2489cc: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x2489ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_2489d0:
    // 0x2489d0: 0x16a201eb  bne         $s5, $v0, . + 4 + (0x1EB << 2)
label_2489d4:
    if (ctx->pc == 0x2489D4u) {
        ctx->pc = 0x2489D8u;
        goto label_2489d8;
    }
    ctx->pc = 0x2489D0u;
    {
        const bool branch_taken_0x2489d0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x2489d0) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x2489D8u;
label_2489d8:
    // 0x2489d8: 0x100001e9  b           . + 4 + (0x1E9 << 2)
label_2489dc:
    if (ctx->pc == 0x2489DCu) {
        ctx->pc = 0x2489DCu;
            // 0x2489dc: 0xa380962c  sb          $zero, -0x69D4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294940204), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2489E0u;
        goto label_2489e0;
    }
    ctx->pc = 0x2489D8u;
    {
        const bool branch_taken_0x2489d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2489DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2489D8u;
            // 0x2489dc: 0xa380962c  sb          $zero, -0x69D4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294940204), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2489d8) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x2489E0u;
label_2489e0:
    // 0x2489e0: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2489e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2489e4:
    // 0x2489e4: 0xc08f0b8  jal         func_23C2E0
label_2489e8:
    if (ctx->pc == 0x2489E8u) {
        ctx->pc = 0x2489E8u;
            // 0x2489e8: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x2489ECu;
        goto label_2489ec;
    }
    ctx->pc = 0x2489E4u;
    SET_GPR_U32(ctx, 31, 0x2489ECu);
    ctx->pc = 0x2489E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2489E4u;
            // 0x2489e8: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C2E0u;
    if (runtime->hasFunction(0x23C2E0u)) {
        auto targetFn = runtime->lookupFunction(0x23C2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2489ECu; }
        if (ctx->pc != 0x2489ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableSwapNowPos__12CMenuKeyFuncFP18MENU_SWAPITEM_INFO_0x23c2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2489ECu; }
        if (ctx->pc != 0x2489ECu) { return; }
    }
    ctx->pc = 0x2489ECu;
label_2489ec:
    // 0x2489ec: 0x2c41000a  sltiu       $at, $v0, 0xA
    ctx->pc = 0x2489ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_2489f0:
    // 0x2489f0: 0x102001e3  beqz        $at, . + 4 + (0x1E3 << 2)
label_2489f4:
    if (ctx->pc == 0x2489F4u) {
        ctx->pc = 0x2489F4u;
            // 0x2489f4: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2489F8u;
        goto label_2489f8;
    }
    ctx->pc = 0x2489F0u;
    {
        const bool branch_taken_0x2489f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2489F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2489F0u;
            // 0x2489f4: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2489f0) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x2489F8u;
label_2489f8:
    // 0x2489f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2489f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2489fc:
    // 0x2489fc: 0x2463b8e0  addiu       $v1, $v1, -0x4720
    ctx->pc = 0x2489fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949088));
label_248a00:
    // 0x248a00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x248a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_248a04:
    // 0x248a04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x248a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_248a08:
    // 0x248a08: 0x400008  jr          $v0
label_248a0c:
    if (ctx->pc == 0x248A0Cu) {
        ctx->pc = 0x248A10u;
        goto label_248a10;
    }
    ctx->pc = 0x248A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x248A10u: goto label_248a10;
            case 0x248AF8u: goto label_248af8;
            case 0x248B08u: goto label_248b08;
            case 0x248B28u: goto label_248b28;
            case 0x248B38u: goto label_248b38;
            case 0x249180u: goto label_249180;
            default: break;
        }
        return;
    }
    ctx->pc = 0x248A10u;
label_248a10:
    // 0x248a10: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x248a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_248a14:
    // 0x248a14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x248a14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248a18:
    // 0x248a18: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x248a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_248a1c:
    // 0x248a1c: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x248a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_248a20:
    // 0x248a20: 0xc08f9ac  jal         func_23E6B0
label_248a24:
    if (ctx->pc == 0x248A24u) {
        ctx->pc = 0x248A24u;
            // 0x248a24: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248A28u;
        goto label_248a28;
    }
    ctx->pc = 0x248A20u;
    SET_GPR_U32(ctx, 31, 0x248A28u);
    ctx->pc = 0x248A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248A20u;
            // 0x248a24: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E6B0u;
    if (runtime->hasFunction(0x23E6B0u)) {
        auto targetFn = runtime->lookupFunction(0x23E6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248A28u; }
        if (ctx->pc != 0x248A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSwapItem__12CMenuKeyFuncFP13CGameDataUsedP18MENU_SWAPITEM_INFOib_0x23e6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248A28u; }
        if (ctx->pc != 0x248A28u) { return; }
    }
    ctx->pc = 0x248A28u;
label_248a28:
    // 0x248a28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x248a28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248a2c:
    // 0x248a2c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x248a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_248a30:
    // 0x248a30: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x248a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_248a34:
    // 0x248a34: 0x24421460  addiu       $v0, $v0, 0x1460
    ctx->pc = 0x248a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5216));
label_248a38:
    // 0x248a38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x248a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_248a3c:
    // 0x248a3c: 0xc094274  jal         func_2509D0
label_248a40:
    if (ctx->pc == 0x248A40u) {
        ctx->pc = 0x248A40u;
            // 0x248a40: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x248A44u;
        goto label_248a44;
    }
    ctx->pc = 0x248A3Cu;
    SET_GPR_U32(ctx, 31, 0x248A44u);
    ctx->pc = 0x248A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248A3Cu;
            // 0x248a40: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248A44u; }
        if (ctx->pc != 0x248A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248A44u; }
        if (ctx->pc != 0x248A44u) { return; }
    }
    ctx->pc = 0x248A44u;
label_248a44:
    // 0x248a44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248a48:
    // 0x248a48: 0xc09018c  jal         func_240630
label_248a4c:
    if (ctx->pc == 0x248A4Cu) {
        ctx->pc = 0x248A4Cu;
            // 0x248a4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248A50u;
        goto label_248a50;
    }
    ctx->pc = 0x248A48u;
    SET_GPR_U32(ctx, 31, 0x248A50u);
    ctx->pc = 0x248A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248A48u;
            // 0x248a4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (runtime->hasFunction(0x240630u)) {
        auto targetFn = runtime->lookupFunction(0x240630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248A50u; }
        if (ctx->pc != 0x248A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckViewWeaponStatus__13CMenuItemInfoFi_0x240630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248A50u; }
        if (ctx->pc != 0x248A50u) { return; }
    }
    ctx->pc = 0x248A50u;
label_248a50:
    // 0x248a50: 0x1a2001cb  blez        $s1, . + 4 + (0x1CB << 2)
label_248a54:
    if (ctx->pc == 0x248A54u) {
        ctx->pc = 0x248A54u;
            // 0x248a54: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x248A58u;
        goto label_248a58;
    }
    ctx->pc = 0x248A50u;
    {
        const bool branch_taken_0x248a50 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x248A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248A50u;
            // 0x248a54: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248a50) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248A58u;
label_248a58:
    // 0x248a58: 0x12450017  beq         $s2, $a1, . + 4 + (0x17 << 2)
label_248a5c:
    if (ctx->pc == 0x248A5Cu) {
        ctx->pc = 0x248A5Cu;
            // 0x248a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248A60u;
        goto label_248a60;
    }
    ctx->pc = 0x248A58u;
    {
        const bool branch_taken_0x248a58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        ctx->pc = 0x248A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248A58u;
            // 0x248a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248a58) {
            ctx->pc = 0x248AB8u;
            goto label_248ab8;
        }
    }
    ctx->pc = 0x248A60u;
label_248a60:
    // 0x248a60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x248a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248a64:
    // 0x248a64: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
label_248a68:
    if (ctx->pc == 0x248A68u) {
        ctx->pc = 0x248A6Cu;
        goto label_248a6c;
    }
    ctx->pc = 0x248A64u;
    {
        const bool branch_taken_0x248a64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x248a64) {
            ctx->pc = 0x248A74u;
            goto label_248a74;
        }
    }
    ctx->pc = 0x248A6Cu;
label_248a6c:
    // 0x248a6c: 0x100001c4  b           . + 4 + (0x1C4 << 2)
label_248a70:
    if (ctx->pc == 0x248A70u) {
        ctx->pc = 0x248A74u;
        goto label_248a74;
    }
    ctx->pc = 0x248A6Cu;
    {
        const bool branch_taken_0x248a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248a6c) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248A74u;
label_248a74:
    // 0x248a74: 0x86050114  lh          $a1, 0x114($s0)
    ctx->pc = 0x248a74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
label_248a78:
    // 0x248a78: 0xc090320  jal         func_240C80
label_248a7c:
    if (ctx->pc == 0x248A7Cu) {
        ctx->pc = 0x248A7Cu;
            // 0x248a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248A80u;
        goto label_248a80;
    }
    ctx->pc = 0x248A78u;
    SET_GPR_U32(ctx, 31, 0x248A80u);
    ctx->pc = 0x248A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248A78u;
            // 0x248a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240C80u;
    if (runtime->hasFunction(0x240C80u)) {
        auto targetFn = runtime->lookupFunction(0x240C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248A80u; }
        if (ctx->pc != 0x248A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadInfo__13CMenuItemInfoFi_0x240c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248A80u; }
        if (ctx->pc != 0x248A80u) { return; }
    }
    ctx->pc = 0x248A80u;
label_248a80:
    // 0x248a80: 0x86040114  lh          $a0, 0x114($s0)
    ctx->pc = 0x248a80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
label_248a84:
    // 0x248a84: 0xc0abf4c  jal         func_2AFD30
label_248a88:
    if (ctx->pc == 0x248A88u) {
        ctx->pc = 0x248A88u;
            // 0x248a88: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248A8Cu;
        goto label_248a8c;
    }
    ctx->pc = 0x248A84u;
    SET_GPR_U32(ctx, 31, 0x248A8Cu);
    ctx->pc = 0x248A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248A84u;
            // 0x248a88: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFD30u;
    if (runtime->hasFunction(0x2AFD30u)) {
        auto targetFn = runtime->lookupFunction(0x2AFD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248A8Cu; }
        if (ctx->pc != 0x248A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertCharaLoadDataPhase__Fii_0x2afd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248A8Cu; }
        if (ctx->pc != 0x248A8Cu) { return; }
    }
    ctx->pc = 0x248A8Cu;
label_248a8c:
    // 0x248a8c: 0xa3829b74  sb          $v0, -0x648C($gp)
    ctx->pc = 0x248a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941556), (uint8_t)GPR_U32(ctx, 2));
label_248a90:
    // 0x248a90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x248a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248a94:
    // 0x248a94: 0x83829b74  lb          $v0, -0x648C($gp)
    ctx->pc = 0x248a94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941556)));
label_248a98:
    // 0x248a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248a9c:
    // 0x248a9c: 0xa3829b75  sb          $v0, -0x648B($gp)
    ctx->pc = 0x248a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 2));
label_248aa0:
    // 0x248aa0: 0xa3809b72  sb          $zero, -0x648E($gp)
    ctx->pc = 0x248aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941554), (uint8_t)GPR_U32(ctx, 0));
label_248aa4:
    // 0x248aa4: 0x86050110  lh          $a1, 0x110($s0)
    ctx->pc = 0x248aa4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_248aa8:
    // 0x248aa8: 0xc093114  jal         func_24C450
label_248aac:
    if (ctx->pc == 0x248AACu) {
        ctx->pc = 0x248AACu;
            // 0x248aac: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248AB0u;
        goto label_248ab0;
    }
    ctx->pc = 0x248AA8u;
    SET_GPR_U32(ctx, 31, 0x248AB0u);
    ctx->pc = 0x248AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248AA8u;
            // 0x248aac: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C450u;
    if (runtime->hasFunction(0x24C450u)) {
        auto targetFn = runtime->lookupFunction(0x24C450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248AB0u; }
        if (ctx->pc != 0x248AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ModelReadStart__13CMenuItemInfoFiii_0x24c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248AB0u; }
        if (ctx->pc != 0x248AB0u) { return; }
    }
    ctx->pc = 0x248AB0u;
label_248ab0:
    // 0x248ab0: 0x100001b3  b           . + 4 + (0x1B3 << 2)
label_248ab4:
    if (ctx->pc == 0x248AB4u) {
        ctx->pc = 0x248AB8u;
        goto label_248ab8;
    }
    ctx->pc = 0x248AB0u;
    {
        const bool branch_taken_0x248ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248ab0) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248AB8u;
label_248ab8:
    // 0x248ab8: 0xc090320  jal         func_240C80
label_248abc:
    if (ctx->pc == 0x248ABCu) {
        ctx->pc = 0x248AC0u;
        goto label_248ac0;
    }
    ctx->pc = 0x248AB8u;
    SET_GPR_U32(ctx, 31, 0x248AC0u);
    ctx->pc = 0x240C80u;
    if (runtime->hasFunction(0x240C80u)) {
        auto targetFn = runtime->lookupFunction(0x240C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248AC0u; }
        if (ctx->pc != 0x248AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadInfo__13CMenuItemInfoFi_0x240c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248AC0u; }
        if (ctx->pc != 0x248AC0u) { return; }
    }
    ctx->pc = 0x248AC0u;
label_248ac0:
    // 0x248ac0: 0x27828358  addiu       $v0, $gp, -0x7CA8
    ctx->pc = 0x248ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935384));
label_248ac4:
    // 0x248ac4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x248ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_248ac8:
    // 0x248ac8: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x248ac8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_248acc:
    // 0x248acc: 0xc0abf4c  jal         func_2AFD30
label_248ad0:
    if (ctx->pc == 0x248AD0u) {
        ctx->pc = 0x248AD0u;
            // 0x248ad0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x248AD4u;
        goto label_248ad4;
    }
    ctx->pc = 0x248ACCu;
    SET_GPR_U32(ctx, 31, 0x248AD4u);
    ctx->pc = 0x248AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248ACCu;
            // 0x248ad0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFD30u;
    if (runtime->hasFunction(0x2AFD30u)) {
        auto targetFn = runtime->lookupFunction(0x2AFD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248AD4u; }
        if (ctx->pc != 0x248AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertCharaLoadDataPhase__Fii_0x2afd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248AD4u; }
        if (ctx->pc != 0x248AD4u) { return; }
    }
    ctx->pc = 0x248AD4u;
label_248ad4:
    // 0x248ad4: 0xa3829b74  sb          $v0, -0x648C($gp)
    ctx->pc = 0x248ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941556), (uint8_t)GPR_U32(ctx, 2));
label_248ad8:
    // 0x248ad8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x248ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248adc:
    // 0x248adc: 0xa3809b72  sb          $zero, -0x648E($gp)
    ctx->pc = 0x248adcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941554), (uint8_t)GPR_U32(ctx, 0));
label_248ae0:
    // 0x248ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248ae4:
    // 0x248ae4: 0x86050110  lh          $a1, 0x110($s0)
    ctx->pc = 0x248ae4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_248ae8:
    // 0x248ae8: 0xc093114  jal         func_24C450
label_248aec:
    if (ctx->pc == 0x248AECu) {
        ctx->pc = 0x248AECu;
            // 0x248aec: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248AF0u;
        goto label_248af0;
    }
    ctx->pc = 0x248AE8u;
    SET_GPR_U32(ctx, 31, 0x248AF0u);
    ctx->pc = 0x248AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248AE8u;
            // 0x248aec: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C450u;
    if (runtime->hasFunction(0x24C450u)) {
        auto targetFn = runtime->lookupFunction(0x24C450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248AF0u; }
        if (ctx->pc != 0x248AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ModelReadStart__13CMenuItemInfoFiii_0x24c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248AF0u; }
        if (ctx->pc != 0x248AF0u) { return; }
    }
    ctx->pc = 0x248AF0u;
label_248af0:
    // 0x248af0: 0x100001a3  b           . + 4 + (0x1A3 << 2)
label_248af4:
    if (ctx->pc == 0x248AF4u) {
        ctx->pc = 0x248AF8u;
        goto label_248af8;
    }
    ctx->pc = 0x248AF0u;
    {
        const bool branch_taken_0x248af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248af0) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248AF8u;
label_248af8:
    // 0x248af8: 0xc094274  jal         func_2509D0
label_248afc:
    if (ctx->pc == 0x248AFCu) {
        ctx->pc = 0x248AFCu;
            // 0x248afc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x248B00u;
        goto label_248b00;
    }
    ctx->pc = 0x248AF8u;
    SET_GPR_U32(ctx, 31, 0x248B00u);
    ctx->pc = 0x248AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248AF8u;
            // 0x248afc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248B00u; }
        if (ctx->pc != 0x248B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248B00u; }
        if (ctx->pc != 0x248B00u) { return; }
    }
    ctx->pc = 0x248B00u;
label_248b00:
    // 0x248b00: 0x1000019f  b           . + 4 + (0x19F << 2)
label_248b04:
    if (ctx->pc == 0x248B04u) {
        ctx->pc = 0x248B08u;
        goto label_248b08;
    }
    ctx->pc = 0x248B00u;
    {
        const bool branch_taken_0x248b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248b00) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248B08u;
label_248b08:
    // 0x248b08: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x248b08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_248b0c:
    // 0x248b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248b10:
    // 0x248b10: 0xc08e73c  jal         func_239CF0
label_248b14:
    if (ctx->pc == 0x248B14u) {
        ctx->pc = 0x248B14u;
            // 0x248b14: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x248B18u;
        goto label_248b18;
    }
    ctx->pc = 0x248B10u;
    SET_GPR_U32(ctx, 31, 0x248B18u);
    ctx->pc = 0x248B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248B10u;
            // 0x248b14: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239CF0u;
    if (runtime->hasFunction(0x239CF0u)) {
        auto targetFn = runtime->lookupFunction(0x239CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248B18u; }
        if (ctx->pc != 0x248B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAskHowMuchItemNum__14CBaseMenuClassFP18MENU_SWAPITEM_INFOP13CGameDataUsed_0x239cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248B18u; }
        if (ctx->pc != 0x248B18u) { return; }
    }
    ctx->pc = 0x248B18u;
label_248b18:
    // 0x248b18: 0xc094274  jal         func_2509D0
label_248b1c:
    if (ctx->pc == 0x248B1Cu) {
        ctx->pc = 0x248B1Cu;
            // 0x248b1c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x248B20u;
        goto label_248b20;
    }
    ctx->pc = 0x248B18u;
    SET_GPR_U32(ctx, 31, 0x248B20u);
    ctx->pc = 0x248B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248B18u;
            // 0x248b1c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248B20u; }
        if (ctx->pc != 0x248B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248B20u; }
        if (ctx->pc != 0x248B20u) { return; }
    }
    ctx->pc = 0x248B20u;
label_248b20:
    // 0x248b20: 0x10000197  b           . + 4 + (0x197 << 2)
label_248b24:
    if (ctx->pc == 0x248B24u) {
        ctx->pc = 0x248B28u;
        goto label_248b28;
    }
    ctx->pc = 0x248B20u;
    {
        const bool branch_taken_0x248b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248b20) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248B28u;
label_248b28:
    // 0x248b28: 0xc094274  jal         func_2509D0
label_248b2c:
    if (ctx->pc == 0x248B2Cu) {
        ctx->pc = 0x248B2Cu;
            // 0x248b2c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x248B30u;
        goto label_248b30;
    }
    ctx->pc = 0x248B28u;
    SET_GPR_U32(ctx, 31, 0x248B30u);
    ctx->pc = 0x248B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248B28u;
            // 0x248b2c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248B30u; }
        if (ctx->pc != 0x248B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248B30u; }
        if (ctx->pc != 0x248B30u) { return; }
    }
    ctx->pc = 0x248B30u;
label_248b30:
    // 0x248b30: 0x10000193  b           . + 4 + (0x193 << 2)
label_248b34:
    if (ctx->pc == 0x248B34u) {
        ctx->pc = 0x248B38u;
        goto label_248b38;
    }
    ctx->pc = 0x248B30u;
    {
        const bool branch_taken_0x248b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248b30) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248B38u;
label_248b38:
    // 0x248b38: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x248b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_248b3c:
    // 0x248b3c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x248b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_248b40:
    // 0x248b40: 0x2484d570  addiu       $a0, $a0, -0x2A90
    ctx->pc = 0x248b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956400));
label_248b44:
    // 0x248b44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x248b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248b48:
    // 0x248b48: 0xc087d14  jal         func_21F450
label_248b4c:
    if (ctx->pc == 0x248B4Cu) {
        ctx->pc = 0x248B4Cu;
            // 0x248b4c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248B50u;
        goto label_248b50;
    }
    ctx->pc = 0x248B48u;
    SET_GPR_U32(ctx, 31, 0x248B50u);
    ctx->pc = 0x248B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248B48u;
            // 0x248b4c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F450u;
    if (runtime->hasFunction(0x21F450u)) {
        auto targetFn = runtime->lookupFunction(0x21F450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248B50u; }
        if (ctx->pc != 0x248B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckItemUseEnable__12CMenuItemUseFP13CGameDataUsediPv_0x21f450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248B50u; }
        if (ctx->pc != 0x248B50u) { return; }
    }
    ctx->pc = 0x248B50u;
label_248b50:
    // 0x248b50: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_248b54:
    if (ctx->pc == 0x248B54u) {
        ctx->pc = 0x248B54u;
            // 0x248b54: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x248B58u;
        goto label_248b58;
    }
    ctx->pc = 0x248B50u;
    {
        const bool branch_taken_0x248b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248B50u;
            // 0x248b54: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248b50) {
            ctx->pc = 0x248BACu;
            goto label_248bac;
        }
    }
    ctx->pc = 0x248B58u;
label_248b58:
    // 0x248b58: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x248b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_248b5c:
    // 0x248b5c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x248b5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_248b60:
    // 0x248b60: 0x2484d570  addiu       $a0, $a0, -0x2A90
    ctx->pc = 0x248b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956400));
label_248b64:
    // 0x248b64: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x248b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_248b68:
    // 0x248b68: 0xc087d2c  jal         func_21F4B0
label_248b6c:
    if (ctx->pc == 0x248B6Cu) {
        ctx->pc = 0x248B6Cu;
            // 0x248b6c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x248B70u;
        goto label_248b70;
    }
    ctx->pc = 0x248B68u;
    SET_GPR_U32(ctx, 31, 0x248B70u);
    ctx->pc = 0x248B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248B68u;
            // 0x248b6c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F4B0u;
    if (runtime->hasFunction(0x21F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x21F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248B70u; }
        if (ctx->pc != 0x248B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UseItem__12CMenuItemUseFP13CGameDataUsediPv_0x21f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248B70u; }
        if (ctx->pc != 0x248B70u) { return; }
    }
    ctx->pc = 0x248B70u;
label_248b70:
    // 0x248b70: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x248b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_248b74:
    // 0x248b74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x248b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248b78:
    // 0x248b78: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x248b78u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248b7c:
    // 0x248b7c: 0xc08fa94  jal         func_23EA50
label_248b80:
    if (ctx->pc == 0x248B80u) {
        ctx->pc = 0x248B80u;
            // 0x248b80: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248B84u;
        goto label_248b84;
    }
    ctx->pc = 0x248B7Cu;
    SET_GPR_U32(ctx, 31, 0x248B84u);
    ctx->pc = 0x248B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248B7Cu;
            // 0x248b80: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EA50u;
    if (runtime->hasFunction(0x23EA50u)) {
        auto targetFn = runtime->lookupFunction(0x23EA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248B84u; }
        if (ctx->pc != 0x248B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHaveItemInfo__12CMenuKeyFuncFii_0x23ea50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248B84u; }
        if (ctx->pc != 0x248B84u) { return; }
    }
    ctx->pc = 0x248B84u;
label_248b84:
    // 0x248b84: 0xc065cb8  jal         func_1972E0
label_248b88:
    if (ctx->pc == 0x248B88u) {
        ctx->pc = 0x248B88u;
            // 0x248b88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248B8Cu;
        goto label_248b8c;
    }
    ctx->pc = 0x248B84u;
    SET_GPR_U32(ctx, 31, 0x248B8Cu);
    ctx->pc = 0x248B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248B84u;
            // 0x248b88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248B8Cu; }
        if (ctx->pc != 0x248B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248B8Cu; }
        if (ctx->pc != 0x248B8Cu) { return; }
    }
    ctx->pc = 0x248B8Cu;
label_248b8c:
    // 0x248b8c: 0x1c40017c  bgtz        $v0, . + 4 + (0x17C << 2)
label_248b90:
    if (ctx->pc == 0x248B90u) {
        ctx->pc = 0x248B94u;
        goto label_248b94;
    }
    ctx->pc = 0x248B8Cu;
    {
        const bool branch_taken_0x248b8c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x248b8c) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248B94u;
label_248b94:
    // 0x248b94: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x248b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_248b98:
    // 0x248b98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x248b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248b9c:
    // 0x248b9c: 0xc08fa94  jal         func_23EA50
label_248ba0:
    if (ctx->pc == 0x248BA0u) {
        ctx->pc = 0x248BA0u;
            // 0x248ba0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x248BA4u;
        goto label_248ba4;
    }
    ctx->pc = 0x248B9Cu;
    SET_GPR_U32(ctx, 31, 0x248BA4u);
    ctx->pc = 0x248BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248B9Cu;
            // 0x248ba0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EA50u;
    if (runtime->hasFunction(0x23EA50u)) {
        auto targetFn = runtime->lookupFunction(0x23EA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248BA4u; }
        if (ctx->pc != 0x248BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHaveItemInfo__12CMenuKeyFuncFii_0x23ea50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248BA4u; }
        if (ctx->pc != 0x248BA4u) { return; }
    }
    ctx->pc = 0x248BA4u;
label_248ba4:
    // 0x248ba4: 0x10000176  b           . + 4 + (0x176 << 2)
label_248ba8:
    if (ctx->pc == 0x248BA8u) {
        ctx->pc = 0x248BACu;
        goto label_248bac;
    }
    ctx->pc = 0x248BA4u;
    {
        const bool branch_taken_0x248ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248ba4) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248BACu;
label_248bac:
    // 0x248bac: 0xc094274  jal         func_2509D0
label_248bb0:
    if (ctx->pc == 0x248BB0u) {
        ctx->pc = 0x248BB4u;
        goto label_248bb4;
    }
    ctx->pc = 0x248BACu;
    SET_GPR_U32(ctx, 31, 0x248BB4u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248BB4u; }
        if (ctx->pc != 0x248BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248BB4u; }
        if (ctx->pc != 0x248BB4u) { return; }
    }
    ctx->pc = 0x248BB4u;
label_248bb4:
    // 0x248bb4: 0x10000172  b           . + 4 + (0x172 << 2)
label_248bb8:
    if (ctx->pc == 0x248BB8u) {
        ctx->pc = 0x248BBCu;
        goto label_248bbc;
    }
    ctx->pc = 0x248BB4u;
    {
        const bool branch_taken_0x248bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248bb4) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248BBCu;
label_248bbc:
    // 0x248bbc: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x248bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_248bc0:
    // 0x248bc0: 0xc08f0b8  jal         func_23C2E0
label_248bc4:
    if (ctx->pc == 0x248BC4u) {
        ctx->pc = 0x248BC4u;
            // 0x248bc4: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x248BC8u;
        goto label_248bc8;
    }
    ctx->pc = 0x248BC0u;
    SET_GPR_U32(ctx, 31, 0x248BC8u);
    ctx->pc = 0x248BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248BC0u;
            // 0x248bc4: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C2E0u;
    if (runtime->hasFunction(0x23C2E0u)) {
        auto targetFn = runtime->lookupFunction(0x23C2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248BC8u; }
        if (ctx->pc != 0x248BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableSwapNowPos__12CMenuKeyFuncFP18MENU_SWAPITEM_INFO_0x23c2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248BC8u; }
        if (ctx->pc != 0x248BC8u) { return; }
    }
    ctx->pc = 0x248BC8u;
label_248bc8:
    // 0x248bc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_248bcc:
    if (ctx->pc == 0x248BCCu) {
        ctx->pc = 0x248BD0u;
        goto label_248bd0;
    }
    ctx->pc = 0x248BC8u;
    {
        const bool branch_taken_0x248bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248bc8) {
            ctx->pc = 0x248BE0u;
            goto label_248be0;
        }
    }
    ctx->pc = 0x248BD0u;
label_248bd0:
    // 0x248bd0: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x248bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_248bd4:
    // 0x248bd4: 0x844200c2  lh          $v0, 0xC2($v0)
    ctx->pc = 0x248bd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 194)));
label_248bd8:
    // 0x248bd8: 0x1c400169  bgtz        $v0, . + 4 + (0x169 << 2)
label_248bdc:
    if (ctx->pc == 0x248BDCu) {
        ctx->pc = 0x248BE0u;
        goto label_248be0;
    }
    ctx->pc = 0x248BD8u;
    {
        const bool branch_taken_0x248bd8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x248bd8) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248BE0u;
label_248be0:
    // 0x248be0: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x248be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_248be4:
    // 0x248be4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x248be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_248be8:
    // 0x248be8: 0xc08f244  jal         func_23C910
label_248bec:
    if (ctx->pc == 0x248BECu) {
        ctx->pc = 0x248BECu;
            // 0x248bec: 0x27a601f0  addiu       $a2, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x248BF0u;
        goto label_248bf0;
    }
    ctx->pc = 0x248BE8u;
    SET_GPR_U32(ctx, 31, 0x248BF0u);
    ctx->pc = 0x248BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248BE8u;
            // 0x248bec: 0x27a601f0  addiu       $a2, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C910u;
    if (runtime->hasFunction(0x23C910u)) {
        auto targetFn = runtime->lookupFunction(0x23C910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248BF0u; }
        if (ctx->pc != 0x248BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemAll__12CMenuKeyFuncFP13CGameDataUsedP18MENU_SWAPITEM_INFO_0x23c910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248BF0u; }
        if (ctx->pc != 0x248BF0u) { return; }
    }
    ctx->pc = 0x248BF0u;
label_248bf0:
    // 0x248bf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248bf4:
    // 0x248bf4: 0xc09018c  jal         func_240630
label_248bf8:
    if (ctx->pc == 0x248BF8u) {
        ctx->pc = 0x248BF8u;
            // 0x248bf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248BFCu;
        goto label_248bfc;
    }
    ctx->pc = 0x248BF4u;
    SET_GPR_U32(ctx, 31, 0x248BFCu);
    ctx->pc = 0x248BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248BF4u;
            // 0x248bf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (runtime->hasFunction(0x240630u)) {
        auto targetFn = runtime->lookupFunction(0x240630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248BFCu; }
        if (ctx->pc != 0x248BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckViewWeaponStatus__13CMenuItemInfoFi_0x240630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248BFCu; }
        if (ctx->pc != 0x248BFCu) { return; }
    }
    ctx->pc = 0x248BFCu;
label_248bfc:
    // 0x248bfc: 0x10000160  b           . + 4 + (0x160 << 2)
label_248c00:
    if (ctx->pc == 0x248C00u) {
        ctx->pc = 0x248C04u;
        goto label_248c04;
    }
    ctx->pc = 0x248BFCu;
    {
        const bool branch_taken_0x248bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248bfc) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248C04u;
label_248c04:
    // 0x248c04: 0xc065c24  jal         func_197090
label_248c08:
    if (ctx->pc == 0x248C08u) {
        ctx->pc = 0x248C08u;
            // 0x248c08: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248C0Cu;
        goto label_248c0c;
    }
    ctx->pc = 0x248C04u;
    SET_GPR_U32(ctx, 31, 0x248C0Cu);
    ctx->pc = 0x248C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248C04u;
            // 0x248c08: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248C0Cu; }
        if (ctx->pc != 0x248C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248C0Cu; }
        if (ctx->pc != 0x248C0Cu) { return; }
    }
    ctx->pc = 0x248C0Cu;
label_248c0c:
    // 0x248c0c: 0x86030110  lh          $v1, 0x110($s0)
    ctx->pc = 0x248c0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_248c10:
    // 0x248c10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x248c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_248c14:
    // 0x248c14: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_248c18:
    if (ctx->pc == 0x248C18u) {
        ctx->pc = 0x248C18u;
            // 0x248c18: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x248C1Cu;
        goto label_248c1c;
    }
    ctx->pc = 0x248C14u;
    {
        const bool branch_taken_0x248c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x248C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248C14u;
            // 0x248c18: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c14) {
            ctx->pc = 0x248C24u;
            goto label_248c24;
        }
    }
    ctx->pc = 0x248C1Cu;
label_248c1c:
    // 0x248c1c: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_248c20:
    if (ctx->pc == 0x248C20u) {
        ctx->pc = 0x248C24u;
        goto label_248c24;
    }
    ctx->pc = 0x248C1Cu;
    {
        const bool branch_taken_0x248c1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x248c1c) {
            ctx->pc = 0x248C4Cu;
            goto label_248c4c;
        }
    }
    ctx->pc = 0x248C24u;
label_248c24:
    // 0x248c24: 0x8e04017c  lw          $a0, 0x17C($s0)
    ctx->pc = 0x248c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_248c28:
    // 0x248c28: 0xc0943e4  jal         func_250F90
label_248c2c:
    if (ctx->pc == 0x248C2Cu) {
        ctx->pc = 0x248C2Cu;
            // 0x248c2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248C30u;
        goto label_248c30;
    }
    ctx->pc = 0x248C28u;
    SET_GPR_U32(ctx, 31, 0x248C30u);
    ctx->pc = 0x248C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248C28u;
            // 0x248c2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250F90u;
    if (runtime->hasFunction(0x250F90u)) {
        auto targetFn = runtime->lookupFunction(0x250F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248C30u; }
        if (ctx->pc != 0x248C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSameAdrressUserData__FP13CGameDataUsedi_0x250f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248C30u; }
        if (ctx->pc != 0x248C30u) { return; }
    }
    ctx->pc = 0x248C30u;
label_248c30:
    // 0x248c30: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x248c30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_248c34:
    // 0x248c34: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_248c38:
    if (ctx->pc == 0x248C38u) {
        ctx->pc = 0x248C3Cu;
        goto label_248c3c;
    }
    ctx->pc = 0x248C34u;
    {
        const bool branch_taken_0x248c34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x248c34) {
            ctx->pc = 0x248C4Cu;
            goto label_248c4c;
        }
    }
    ctx->pc = 0x248C3Cu;
label_248c3c:
    // 0x248c3c: 0x8e05017c  lw          $a1, 0x17C($s0)
    ctx->pc = 0x248c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_248c40:
    // 0x248c40: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x248c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_248c44:
    // 0x248c44: 0xc06666c  jal         func_1999B0
label_248c48:
    if (ctx->pc == 0x248C48u) {
        ctx->pc = 0x248C48u;
            // 0x248c48: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x248C4Cu;
        goto label_248c4c;
    }
    ctx->pc = 0x248C44u;
    SET_GPR_U32(ctx, 31, 0x248C4Cu);
    ctx->pc = 0x248C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248C44u;
            // 0x248c48: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248C4Cu; }
        if (ctx->pc != 0x248C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248C4Cu; }
        if (ctx->pc != 0x248C4Cu) { return; }
    }
    ctx->pc = 0x248C4Cu;
label_248c4c:
    // 0x248c4c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x248c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_248c50:
    // 0x248c50: 0x8c24d8d0  lw          $a0, -0x2730($at)
    ctx->pc = 0x248c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957264)));
label_248c54:
    // 0x248c54: 0xc094380  jal         func_250E00
label_248c58:
    if (ctx->pc == 0x248C58u) {
        ctx->pc = 0x248C58u;
            // 0x248c58: 0x24050096  addiu       $a1, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->pc = 0x248C5Cu;
        goto label_248c5c;
    }
    ctx->pc = 0x248C54u;
    SET_GPR_U32(ctx, 31, 0x248C5Cu);
    ctx->pc = 0x248C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248C54u;
            // 0x248c58: 0x24050096  addiu       $a1, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250E00u;
    if (runtime->hasFunction(0x250E00u)) {
        auto targetFn = runtime->lookupFunction(0x250E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248C5Cu; }
        if (ctx->pc != 0x248C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSeiton__FP13CGameDataUsedi_0x250e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248C5Cu; }
        if (ctx->pc != 0x248C5Cu) { return; }
    }
    ctx->pc = 0x248C5Cu;
label_248c5c:
    // 0x248c5c: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_248c60:
    if (ctx->pc == 0x248C60u) {
        ctx->pc = 0x248C60u;
            // 0x248c60: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248C64u;
        goto label_248c64;
    }
    ctx->pc = 0x248C5Cu;
    {
        const bool branch_taken_0x248c5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x248C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248C5Cu;
            // 0x248c60: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c5c) {
            ctx->pc = 0x248CBCu;
            goto label_248cbc;
        }
    }
    ctx->pc = 0x248C64u;
label_248c64:
    // 0x248c64: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x248c64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248c68:
    // 0x248c68: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x248c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_248c6c:
    // 0x248c6c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x248c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_248c70:
    // 0x248c70: 0x8c22d8d0  lw          $v0, -0x2730($at)
    ctx->pc = 0x248c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957264)));
label_248c74:
    // 0x248c74: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x248c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_248c78:
    // 0x248c78: 0xc049bf2  jal         func_126FC8
label_248c7c:
    if (ctx->pc == 0x248C7Cu) {
        ctx->pc = 0x248C7Cu;
            // 0x248c7c: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->pc = 0x248C80u;
        goto label_248c80;
    }
    ctx->pc = 0x248C78u;
    SET_GPR_U32(ctx, 31, 0x248C80u);
    ctx->pc = 0x248C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248C78u;
            // 0x248c7c: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248C80u; }
        if (ctx->pc != 0x248C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248C80u; }
        if (ctx->pc != 0x248C80u) { return; }
    }
    ctx->pc = 0x248C80u;
label_248c80:
    // 0x248c80: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_248c84:
    if (ctx->pc == 0x248C84u) {
        ctx->pc = 0x248C84u;
            // 0x248c84: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x248C88u;
        goto label_248c88;
    }
    ctx->pc = 0x248C80u;
    {
        const bool branch_taken_0x248c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248C80u;
            // 0x248c84: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c80) {
            ctx->pc = 0x248CACu;
            goto label_248cac;
        }
    }
    ctx->pc = 0x248C88u;
label_248c88:
    // 0x248c88: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x248c88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_248c8c:
    // 0x248c8c: 0x8c22d8d0  lw          $v0, -0x2730($at)
    ctx->pc = 0x248c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957264)));
label_248c90:
    // 0x248c90: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x248c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_248c94:
    // 0x248c94: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x248c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_248c98:
    // 0x248c98: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x248c98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_248c9c:
    // 0x248c9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x248c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_248ca0:
    // 0x248ca0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x248ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_248ca4:
    // 0x248ca4: 0x10000005  b           . + 4 + (0x5 << 2)
label_248ca8:
    if (ctx->pc == 0x248CA8u) {
        ctx->pc = 0x248CA8u;
            // 0x248ca8: 0xae02017c  sw          $v0, 0x17C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
        ctx->pc = 0x248CACu;
        goto label_248cac;
    }
    ctx->pc = 0x248CA4u;
    {
        const bool branch_taken_0x248ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248CA4u;
            // 0x248ca8: 0xae02017c  sw          $v0, 0x17C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248ca4) {
            ctx->pc = 0x248CBCu;
            goto label_248cbc;
        }
    }
    ctx->pc = 0x248CACu;
label_248cac:
    // 0x248cac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x248cacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_248cb0:
    // 0x248cb0: 0x2a220096  slti        $v0, $s1, 0x96
    ctx->pc = 0x248cb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)150) ? 1 : 0);
label_248cb4:
    // 0x248cb4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_248cb8:
    if (ctx->pc == 0x248CB8u) {
        ctx->pc = 0x248CB8u;
            // 0x248cb8: 0x2652006c  addiu       $s2, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->pc = 0x248CBCu;
        goto label_248cbc;
    }
    ctx->pc = 0x248CB4u;
    {
        const bool branch_taken_0x248cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248CB4u;
            // 0x248cb8: 0x2652006c  addiu       $s2, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248cb4) {
            ctx->pc = 0x248C68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_248c68;
        }
    }
    ctx->pc = 0x248CBCu;
label_248cbc:
    // 0x248cbc: 0x0  nop
    ctx->pc = 0x248cbcu;
    // NOP
label_248cc0:
    // 0x248cc0: 0xc08fc00  jal         func_23F000
label_248cc4:
    if (ctx->pc == 0x248CC4u) {
        ctx->pc = 0x248CC8u;
        goto label_248cc8;
    }
    ctx->pc = 0x248CC0u;
    SET_GPR_U32(ctx, 31, 0x248CC8u);
    ctx->pc = 0x23F000u;
    if (runtime->hasFunction(0x23F000u)) {
        auto targetFn = runtime->lookupFunction(0x23F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248CC8u; }
        if (ctx->pc != 0x248CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEnableHaveItemNum__Fv_0x23f000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248CC8u; }
        if (ctx->pc != 0x248CC8u) { return; }
    }
    ctx->pc = 0x248CC8u;
label_248cc8:
    // 0x248cc8: 0xc094274  jal         func_2509D0
label_248ccc:
    if (ctx->pc == 0x248CCCu) {
        ctx->pc = 0x248CCCu;
            // 0x248ccc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x248CD0u;
        goto label_248cd0;
    }
    ctx->pc = 0x248CC8u;
    SET_GPR_U32(ctx, 31, 0x248CD0u);
    ctx->pc = 0x248CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248CC8u;
            // 0x248ccc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248CD0u; }
        if (ctx->pc != 0x248CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248CD0u; }
        if (ctx->pc != 0x248CD0u) { return; }
    }
    ctx->pc = 0x248CD0u;
label_248cd0:
    // 0x248cd0: 0x1000012b  b           . + 4 + (0x12B << 2)
label_248cd4:
    if (ctx->pc == 0x248CD4u) {
        ctx->pc = 0x248CD8u;
        goto label_248cd8;
    }
    ctx->pc = 0x248CD0u;
    {
        const bool branch_taken_0x248cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248cd0) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248CD8u;
label_248cd8:
    // 0x248cd8: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x248cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_248cdc:
    // 0x248cdc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x248cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_248ce0:
    // 0x248ce0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_248ce4:
    if (ctx->pc == 0x248CE4u) {
        ctx->pc = 0x248CE4u;
            // 0x248ce4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x248CE8u;
        goto label_248ce8;
    }
    ctx->pc = 0x248CE0u;
    {
        const bool branch_taken_0x248ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x248CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248CE0u;
            // 0x248ce4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248ce0) {
            ctx->pc = 0x248D00u;
            goto label_248d00;
        }
    }
    ctx->pc = 0x248CE8u;
label_248ce8:
    // 0x248ce8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_248cec:
    if (ctx->pc == 0x248CECu) {
        ctx->pc = 0x248CECu;
            // 0x248cec: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x248CF0u;
        goto label_248cf0;
    }
    ctx->pc = 0x248CE8u;
    {
        const bool branch_taken_0x248ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x248CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248CE8u;
            // 0x248cec: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248ce8) {
            ctx->pc = 0x248D00u;
            goto label_248d00;
        }
    }
    ctx->pc = 0x248CF0u;
label_248cf0:
    // 0x248cf0: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_248cf4:
    if (ctx->pc == 0x248CF4u) {
        ctx->pc = 0x248CF4u;
            // 0x248cf4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x248CF8u;
        goto label_248cf8;
    }
    ctx->pc = 0x248CF0u;
    {
        const bool branch_taken_0x248cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x248CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248CF0u;
            // 0x248cf4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248cf0) {
            ctx->pc = 0x248D04u;
            goto label_248d04;
        }
    }
    ctx->pc = 0x248CF8u;
label_248cf8:
    // 0x248cf8: 0x10000021  b           . + 4 + (0x21 << 2)
label_248cfc:
    if (ctx->pc == 0x248CFCu) {
        ctx->pc = 0x248CFCu;
            // 0x248cfc: 0x86040114  lh          $a0, 0x114($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
        ctx->pc = 0x248D00u;
        goto label_248d00;
    }
    ctx->pc = 0x248CF8u;
    {
        const bool branch_taken_0x248cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248CF8u;
            // 0x248cfc: 0x86040114  lh          $a0, 0x114($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248cf8) {
            ctx->pc = 0x248D80u;
            goto label_248d80;
        }
    }
    ctx->pc = 0x248D00u;
label_248d00:
    // 0x248d00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x248d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_248d04:
    // 0x248d04: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x248d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_248d08:
    // 0x248d08: 0xafa201fc  sw          $v0, 0x1FC($sp)
    ctx->pc = 0x248d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 2));
label_248d0c:
    // 0x248d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248d10:
    // 0x248d10: 0x86050114  lh          $a1, 0x114($s0)
    ctx->pc = 0x248d10u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
label_248d14:
    // 0x248d14: 0xc090270  jal         func_2409C0
label_248d18:
    if (ctx->pc == 0x248D18u) {
        ctx->pc = 0x248D18u;
            // 0x248d18: 0x27a701fc  addiu       $a3, $sp, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 508));
        ctx->pc = 0x248D1Cu;
        goto label_248d1c;
    }
    ctx->pc = 0x248D14u;
    SET_GPR_U32(ctx, 31, 0x248D1Cu);
    ctx->pc = 0x248D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248D14u;
            // 0x248d18: 0x27a701fc  addiu       $a3, $sp, 0x1FC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 508));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2409C0u;
    if (runtime->hasFunction(0x2409C0u)) {
        auto targetFn = runtime->lookupFunction(0x2409C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248D1Cu; }
        if (ctx->pc != 0x248D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EquipDirect__13CMenuItemInfoFiP13CGameDataUsedRi_0x2409c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248D1Cu; }
        if (ctx->pc != 0x248D1Cu) { return; }
    }
    ctx->pc = 0x248D1Cu;
label_248d1c:
    // 0x248d1c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_248d20:
    if (ctx->pc == 0x248D20u) {
        ctx->pc = 0x248D20u;
            // 0x248d20: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x248D24u;
        goto label_248d24;
    }
    ctx->pc = 0x248D1Cu;
    {
        const bool branch_taken_0x248d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248D1Cu;
            // 0x248d20: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d1c) {
            ctx->pc = 0x248D34u;
            goto label_248d34;
        }
    }
    ctx->pc = 0x248D24u;
label_248d24:
    // 0x248d24: 0xc094274  jal         func_2509D0
label_248d28:
    if (ctx->pc == 0x248D28u) {
        ctx->pc = 0x248D28u;
            // 0x248d28: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x248D2Cu;
        goto label_248d2c;
    }
    ctx->pc = 0x248D24u;
    SET_GPR_U32(ctx, 31, 0x248D2Cu);
    ctx->pc = 0x248D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248D24u;
            // 0x248d28: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248D2Cu; }
        if (ctx->pc != 0x248D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248D2Cu; }
        if (ctx->pc != 0x248D2Cu) { return; }
    }
    ctx->pc = 0x248D2Cu;
label_248d2c:
    // 0x248d2c: 0x10000114  b           . + 4 + (0x114 << 2)
label_248d30:
    if (ctx->pc == 0x248D30u) {
        ctx->pc = 0x248D34u;
        goto label_248d34;
    }
    ctx->pc = 0x248D2Cu;
    {
        const bool branch_taken_0x248d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248d2c) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248D34u;
label_248d34:
    // 0x248d34: 0xc094274  jal         func_2509D0
label_248d38:
    if (ctx->pc == 0x248D38u) {
        ctx->pc = 0x248D3Cu;
        goto label_248d3c;
    }
    ctx->pc = 0x248D34u;
    SET_GPR_U32(ctx, 31, 0x248D3Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248D3Cu; }
        if (ctx->pc != 0x248D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248D3Cu; }
        if (ctx->pc != 0x248D3Cu) { return; }
    }
    ctx->pc = 0x248D3Cu;
label_248d3c:
    // 0x248d3c: 0x86050114  lh          $a1, 0x114($s0)
    ctx->pc = 0x248d3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
label_248d40:
    // 0x248d40: 0xc090320  jal         func_240C80
label_248d44:
    if (ctx->pc == 0x248D44u) {
        ctx->pc = 0x248D44u;
            // 0x248d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248D48u;
        goto label_248d48;
    }
    ctx->pc = 0x248D40u;
    SET_GPR_U32(ctx, 31, 0x248D48u);
    ctx->pc = 0x248D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248D40u;
            // 0x248d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240C80u;
    if (runtime->hasFunction(0x240C80u)) {
        auto targetFn = runtime->lookupFunction(0x240C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248D48u; }
        if (ctx->pc != 0x248D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadInfo__13CMenuItemInfoFi_0x240c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248D48u; }
        if (ctx->pc != 0x248D48u) { return; }
    }
    ctx->pc = 0x248D48u;
label_248d48:
    // 0x248d48: 0x8fa501fc  lw          $a1, 0x1FC($sp)
    ctx->pc = 0x248d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
label_248d4c:
    // 0x248d4c: 0xc0abf4c  jal         func_2AFD30
label_248d50:
    if (ctx->pc == 0x248D50u) {
        ctx->pc = 0x248D50u;
            // 0x248d50: 0x86040114  lh          $a0, 0x114($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
        ctx->pc = 0x248D54u;
        goto label_248d54;
    }
    ctx->pc = 0x248D4Cu;
    SET_GPR_U32(ctx, 31, 0x248D54u);
    ctx->pc = 0x248D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248D4Cu;
            // 0x248d50: 0x86040114  lh          $a0, 0x114($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFD30u;
    if (runtime->hasFunction(0x2AFD30u)) {
        auto targetFn = runtime->lookupFunction(0x2AFD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248D54u; }
        if (ctx->pc != 0x248D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertCharaLoadDataPhase__Fii_0x2afd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248D54u; }
        if (ctx->pc != 0x248D54u) { return; }
    }
    ctx->pc = 0x248D54u;
label_248d54:
    // 0x248d54: 0xa3829b74  sb          $v0, -0x648C($gp)
    ctx->pc = 0x248d54u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941556), (uint8_t)GPR_U32(ctx, 2));
label_248d58:
    // 0x248d58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x248d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248d5c:
    // 0x248d5c: 0x83829b74  lb          $v0, -0x648C($gp)
    ctx->pc = 0x248d5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941556)));
label_248d60:
    // 0x248d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248d64:
    // 0x248d64: 0xa3829b75  sb          $v0, -0x648B($gp)
    ctx->pc = 0x248d64u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 2));
label_248d68:
    // 0x248d68: 0xa3809b72  sb          $zero, -0x648E($gp)
    ctx->pc = 0x248d68u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941554), (uint8_t)GPR_U32(ctx, 0));
label_248d6c:
    // 0x248d6c: 0x86050110  lh          $a1, 0x110($s0)
    ctx->pc = 0x248d6cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_248d70:
    // 0x248d70: 0xc093114  jal         func_24C450
label_248d74:
    if (ctx->pc == 0x248D74u) {
        ctx->pc = 0x248D74u;
            // 0x248d74: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248D78u;
        goto label_248d78;
    }
    ctx->pc = 0x248D70u;
    SET_GPR_U32(ctx, 31, 0x248D78u);
    ctx->pc = 0x248D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248D70u;
            // 0x248d74: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C450u;
    if (runtime->hasFunction(0x24C450u)) {
        auto targetFn = runtime->lookupFunction(0x24C450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248D78u; }
        if (ctx->pc != 0x248D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ModelReadStart__13CMenuItemInfoFiii_0x24c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248D78u; }
        if (ctx->pc != 0x248D78u) { return; }
    }
    ctx->pc = 0x248D78u;
label_248d78:
    // 0x248d78: 0x10000101  b           . + 4 + (0x101 << 2)
label_248d7c:
    if (ctx->pc == 0x248D7Cu) {
        ctx->pc = 0x248D80u;
        goto label_248d80;
    }
    ctx->pc = 0x248D78u;
    {
        const bool branch_taken_0x248d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248d78) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248D80u;
label_248d80:
    // 0x248d80: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x248d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
label_248d84:
    // 0x248d84: 0x2463d8c0  addiu       $v1, $v1, -0x2740
    ctx->pc = 0x248d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957248));
label_248d88:
    // 0x248d88: 0x24020126  addiu       $v0, $zero, 0x126
    ctx->pc = 0x248d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
label_248d8c:
    // 0x248d8c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x248d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_248d90:
    // 0x248d90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x248d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_248d94:
    // 0x248d94: 0x16c20014  bne         $s6, $v0, . + 4 + (0x14 << 2)
label_248d98:
    if (ctx->pc == 0x248D98u) {
        ctx->pc = 0x248D98u;
            // 0x248d98: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x248D9Cu;
        goto label_248d9c;
    }
    ctx->pc = 0x248D94u;
    {
        const bool branch_taken_0x248d94 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x248D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248D94u;
            // 0x248d98: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d94) {
            ctx->pc = 0x248DE8u;
            goto label_248de8;
        }
    }
    ctx->pc = 0x248D9Cu;
label_248d9c:
    // 0x248d9c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x248d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_248da0:
    // 0x248da0: 0x26270170  addiu       $a3, $s1, 0x170
    ctx->pc = 0x248da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
label_248da4:
    // 0x248da4: 0x2484d570  addiu       $a0, $a0, -0x2A90
    ctx->pc = 0x248da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956400));
label_248da8:
    // 0x248da8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x248da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_248dac:
    // 0x248dac: 0xc087d2c  jal         func_21F4B0
label_248db0:
    if (ctx->pc == 0x248DB0u) {
        ctx->pc = 0x248DB0u;
            // 0x248db0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x248DB4u;
        goto label_248db4;
    }
    ctx->pc = 0x248DACu;
    SET_GPR_U32(ctx, 31, 0x248DB4u);
    ctx->pc = 0x248DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248DACu;
            // 0x248db0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F4B0u;
    if (runtime->hasFunction(0x21F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x21F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248DB4u; }
        if (ctx->pc != 0x248DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UseItem__12CMenuItemUseFP13CGameDataUsediPv_0x21f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248DB4u; }
        if (ctx->pc != 0x248DB4u) { return; }
    }
    ctx->pc = 0x248DB4u;
label_248db4:
    // 0x248db4: 0x144000f2  bnez        $v0, . + 4 + (0xF2 << 2)
label_248db8:
    if (ctx->pc == 0x248DB8u) {
        ctx->pc = 0x248DB8u;
            // 0x248db8: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x248DBCu;
        goto label_248dbc;
    }
    ctx->pc = 0x248DB4u;
    {
        const bool branch_taken_0x248db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248DB4u;
            // 0x248db8: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248db4) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248DBCu;
label_248dbc:
    // 0x248dbc: 0x262701dc  addiu       $a3, $s1, 0x1DC
    ctx->pc = 0x248dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 476));
label_248dc0:
    // 0x248dc0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x248dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_248dc4:
    // 0x248dc4: 0x2484d570  addiu       $a0, $a0, -0x2A90
    ctx->pc = 0x248dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956400));
label_248dc8:
    // 0x248dc8: 0xc087d2c  jal         func_21F4B0
label_248dcc:
    if (ctx->pc == 0x248DCCu) {
        ctx->pc = 0x248DCCu;
            // 0x248dcc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x248DD0u;
        goto label_248dd0;
    }
    ctx->pc = 0x248DC8u;
    SET_GPR_U32(ctx, 31, 0x248DD0u);
    ctx->pc = 0x248DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248DC8u;
            // 0x248dcc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F4B0u;
    if (runtime->hasFunction(0x21F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x21F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248DD0u; }
        if (ctx->pc != 0x248DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UseItem__12CMenuItemUseFP13CGameDataUsediPv_0x21f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248DD0u; }
        if (ctx->pc != 0x248DD0u) { return; }
    }
    ctx->pc = 0x248DD0u;
label_248dd0:
    // 0x248dd0: 0x144000eb  bnez        $v0, . + 4 + (0xEB << 2)
label_248dd4:
    if (ctx->pc == 0x248DD4u) {
        ctx->pc = 0x248DD4u;
            // 0x248dd4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x248DD8u;
        goto label_248dd8;
    }
    ctx->pc = 0x248DD0u;
    {
        const bool branch_taken_0x248dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248DD0u;
            // 0x248dd4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248dd0) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248DD8u;
label_248dd8:
    // 0x248dd8: 0xc094274  jal         func_2509D0
label_248ddc:
    if (ctx->pc == 0x248DDCu) {
        ctx->pc = 0x248DE0u;
        goto label_248de0;
    }
    ctx->pc = 0x248DD8u;
    SET_GPR_U32(ctx, 31, 0x248DE0u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248DE0u; }
        if (ctx->pc != 0x248DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248DE0u; }
        if (ctx->pc != 0x248DE0u) { return; }
    }
    ctx->pc = 0x248DE0u;
label_248de0:
    // 0x248de0: 0x100000e7  b           . + 4 + (0xE7 << 2)
label_248de4:
    if (ctx->pc == 0x248DE4u) {
        ctx->pc = 0x248DE8u;
        goto label_248de8;
    }
    ctx->pc = 0x248DE0u;
    {
        const bool branch_taken_0x248de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248de0) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248DE8u;
label_248de8:
    // 0x248de8: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x248de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_248dec:
    // 0x248dec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x248decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_248df0:
    // 0x248df0: 0x2484d570  addiu       $a0, $a0, -0x2A90
    ctx->pc = 0x248df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956400));
label_248df4:
    // 0x248df4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x248df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248df8:
    // 0x248df8: 0xc087d14  jal         func_21F450
label_248dfc:
    if (ctx->pc == 0x248DFCu) {
        ctx->pc = 0x248DFCu;
            // 0x248dfc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248E00u;
        goto label_248e00;
    }
    ctx->pc = 0x248DF8u;
    SET_GPR_U32(ctx, 31, 0x248E00u);
    ctx->pc = 0x248DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248DF8u;
            // 0x248dfc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F450u;
    if (runtime->hasFunction(0x21F450u)) {
        auto targetFn = runtime->lookupFunction(0x21F450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248E00u; }
        if (ctx->pc != 0x248E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckItemUseEnable__12CMenuItemUseFP13CGameDataUsediPv_0x21f450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248E00u; }
        if (ctx->pc != 0x248E00u) { return; }
    }
    ctx->pc = 0x248E00u;
label_248e00:
    // 0x248e00: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_248e04:
    if (ctx->pc == 0x248E04u) {
        ctx->pc = 0x248E04u;
            // 0x248e04: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x248E08u;
        goto label_248e08;
    }
    ctx->pc = 0x248E00u;
    {
        const bool branch_taken_0x248e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248E00u;
            // 0x248e04: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e00) {
            ctx->pc = 0x248E64u;
            goto label_248e64;
        }
    }
    ctx->pc = 0x248E08u;
label_248e08:
    // 0x248e08: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x248e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_248e0c:
    // 0x248e0c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x248e0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_248e10:
    // 0x248e10: 0x2484d570  addiu       $a0, $a0, -0x2A90
    ctx->pc = 0x248e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956400));
label_248e14:
    // 0x248e14: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x248e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_248e18:
    // 0x248e18: 0xc087d2c  jal         func_21F4B0
label_248e1c:
    if (ctx->pc == 0x248E1Cu) {
        ctx->pc = 0x248E1Cu;
            // 0x248e1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248E20u;
        goto label_248e20;
    }
    ctx->pc = 0x248E18u;
    SET_GPR_U32(ctx, 31, 0x248E20u);
    ctx->pc = 0x248E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248E18u;
            // 0x248e1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F4B0u;
    if (runtime->hasFunction(0x21F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x21F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248E20u; }
        if (ctx->pc != 0x248E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UseItem__12CMenuItemUseFP13CGameDataUsediPv_0x21f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248E20u; }
        if (ctx->pc != 0x248E20u) { return; }
    }
    ctx->pc = 0x248E20u;
label_248e20:
    // 0x248e20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x248e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_248e24:
    // 0x248e24: 0xc065cb8  jal         func_1972E0
label_248e28:
    if (ctx->pc == 0x248E28u) {
        ctx->pc = 0x248E28u;
            // 0x248e28: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248E2Cu;
        goto label_248e2c;
    }
    ctx->pc = 0x248E24u;
    SET_GPR_U32(ctx, 31, 0x248E2Cu);
    ctx->pc = 0x248E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248E24u;
            // 0x248e28: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248E2Cu; }
        if (ctx->pc != 0x248E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248E2Cu; }
        if (ctx->pc != 0x248E2Cu) { return; }
    }
    ctx->pc = 0x248E2Cu;
label_248e2c:
    // 0x248e2c: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
label_248e30:
    if (ctx->pc == 0x248E30u) {
        ctx->pc = 0x248E34u;
        goto label_248e34;
    }
    ctx->pc = 0x248E2Cu;
    {
        const bool branch_taken_0x248e2c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x248e2c) {
            ctx->pc = 0x248E4Cu;
            goto label_248e4c;
        }
    }
    ctx->pc = 0x248E34u;
label_248e34:
    // 0x248e34: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x248e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_248e38:
    // 0x248e38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x248e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248e3c:
    // 0x248e3c: 0xc08fa94  jal         func_23EA50
label_248e40:
    if (ctx->pc == 0x248E40u) {
        ctx->pc = 0x248E40u;
            // 0x248e40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x248E44u;
        goto label_248e44;
    }
    ctx->pc = 0x248E3Cu;
    SET_GPR_U32(ctx, 31, 0x248E44u);
    ctx->pc = 0x248E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248E3Cu;
            // 0x248e40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EA50u;
    if (runtime->hasFunction(0x23EA50u)) {
        auto targetFn = runtime->lookupFunction(0x23EA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248E44u; }
        if (ctx->pc != 0x248E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHaveItemInfo__12CMenuKeyFuncFii_0x23ea50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248E44u; }
        if (ctx->pc != 0x248E44u) { return; }
    }
    ctx->pc = 0x248E44u;
label_248e44:
    // 0x248e44: 0x100000ce  b           . + 4 + (0xCE << 2)
label_248e48:
    if (ctx->pc == 0x248E48u) {
        ctx->pc = 0x248E4Cu;
        goto label_248e4c;
    }
    ctx->pc = 0x248E44u;
    {
        const bool branch_taken_0x248e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248e44) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248E4Cu;
label_248e4c:
    // 0x248e4c: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x248e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_248e50:
    // 0x248e50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x248e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248e54:
    // 0x248e54: 0xc08fa94  jal         func_23EA50
label_248e58:
    if (ctx->pc == 0x248E58u) {
        ctx->pc = 0x248E58u;
            // 0x248e58: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248E5Cu;
        goto label_248e5c;
    }
    ctx->pc = 0x248E54u;
    SET_GPR_U32(ctx, 31, 0x248E5Cu);
    ctx->pc = 0x248E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248E54u;
            // 0x248e58: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EA50u;
    if (runtime->hasFunction(0x23EA50u)) {
        auto targetFn = runtime->lookupFunction(0x23EA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248E5Cu; }
        if (ctx->pc != 0x248E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHaveItemInfo__12CMenuKeyFuncFii_0x23ea50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248E5Cu; }
        if (ctx->pc != 0x248E5Cu) { return; }
    }
    ctx->pc = 0x248E5Cu;
label_248e5c:
    // 0x248e5c: 0x100000c8  b           . + 4 + (0xC8 << 2)
label_248e60:
    if (ctx->pc == 0x248E60u) {
        ctx->pc = 0x248E64u;
        goto label_248e64;
    }
    ctx->pc = 0x248E5Cu;
    {
        const bool branch_taken_0x248e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248e5c) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248E64u;
label_248e64:
    // 0x248e64: 0xc094274  jal         func_2509D0
label_248e68:
    if (ctx->pc == 0x248E68u) {
        ctx->pc = 0x248E6Cu;
        goto label_248e6c;
    }
    ctx->pc = 0x248E64u;
    SET_GPR_U32(ctx, 31, 0x248E6Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248E6Cu; }
        if (ctx->pc != 0x248E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248E6Cu; }
        if (ctx->pc != 0x248E6Cu) { return; }
    }
    ctx->pc = 0x248E6Cu;
label_248e6c:
    // 0x248e6c: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_248e70:
    if (ctx->pc == 0x248E70u) {
        ctx->pc = 0x248E74u;
        goto label_248e74;
    }
    ctx->pc = 0x248E6Cu;
    {
        const bool branch_taken_0x248e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248e6c) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248E74u;
label_248e74:
    // 0x248e74: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x248e74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_248e78:
    // 0x248e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248e7c:
    // 0x248e7c: 0x8e05017c  lw          $a1, 0x17C($s0)
    ctx->pc = 0x248e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_248e80:
    // 0x248e80: 0xc08e31c  jal         func_238C70
label_248e84:
    if (ctx->pc == 0x248E84u) {
        ctx->pc = 0x248E84u;
            // 0x248e84: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x248E88u;
        goto label_248e88;
    }
    ctx->pc = 0x248E80u;
    SET_GPR_U32(ctx, 31, 0x248E88u);
    ctx->pc = 0x248E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248E80u;
            // 0x248e84: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238C70u;
    if (runtime->hasFunction(0x238C70u)) {
        auto targetFn = runtime->lookupFunction(0x238C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248E88u; }
        if (ctx->pc != 0x248E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSpectolFusion__14CBaseMenuClassFP13CGameDataUsediP16CMenuPosDataForm_0x238c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248E88u; }
        if (ctx->pc != 0x248E88u) { return; }
    }
    ctx->pc = 0x248E88u;
label_248e88:
    // 0x248e88: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_248e8c:
    if (ctx->pc == 0x248E8Cu) {
        ctx->pc = 0x248E90u;
        goto label_248e90;
    }
    ctx->pc = 0x248E88u;
    {
        const bool branch_taken_0x248e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248e88) {
            ctx->pc = 0x248EB4u;
            goto label_248eb4;
        }
    }
    ctx->pc = 0x248E90u;
label_248e90:
    // 0x248e90: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x248e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_248e94:
    // 0x248e94: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x248e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_248e98:
    // 0x248e98: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_248e9c:
    if (ctx->pc == 0x248E9Cu) {
        ctx->pc = 0x248E9Cu;
            // 0x248e9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x248EA0u;
        goto label_248ea0;
    }
    ctx->pc = 0x248E98u;
    {
        const bool branch_taken_0x248e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248E98u;
            // 0x248e9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e98) {
            ctx->pc = 0x248EA4u;
            goto label_248ea4;
        }
    }
    ctx->pc = 0x248EA0u;
label_248ea0:
    // 0x248ea0: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x248ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_248ea4:
    // 0x248ea4: 0xc094274  jal         func_2509D0
label_248ea8:
    if (ctx->pc == 0x248EA8u) {
        ctx->pc = 0x248EACu;
        goto label_248eac;
    }
    ctx->pc = 0x248EA4u;
    SET_GPR_U32(ctx, 31, 0x248EACu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248EACu; }
        if (ctx->pc != 0x248EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248EACu; }
        if (ctx->pc != 0x248EACu) { return; }
    }
    ctx->pc = 0x248EACu;
label_248eac:
    // 0x248eac: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_248eb0:
    if (ctx->pc == 0x248EB0u) {
        ctx->pc = 0x248EB0u;
            // 0x248eb0: 0xa380962c  sb          $zero, -0x69D4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294940204), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x248EB4u;
        goto label_248eb4;
    }
    ctx->pc = 0x248EACu;
    {
        const bool branch_taken_0x248eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248EACu;
            // 0x248eb0: 0xa380962c  sb          $zero, -0x69D4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294940204), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248eac) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248EB4u;
label_248eb4:
    // 0x248eb4: 0x8e07017c  lw          $a3, 0x17C($s0)
    ctx->pc = 0x248eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_248eb8:
    // 0x248eb8: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x248eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_248ebc:
    // 0x248ebc: 0x2484d570  addiu       $a0, $a0, -0x2A90
    ctx->pc = 0x248ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956400));
label_248ec0:
    // 0x248ec0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x248ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_248ec4:
    // 0x248ec4: 0xc087d2c  jal         func_21F4B0
label_248ec8:
    if (ctx->pc == 0x248EC8u) {
        ctx->pc = 0x248EC8u;
            // 0x248ec8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x248ECCu;
        goto label_248ecc;
    }
    ctx->pc = 0x248EC4u;
    SET_GPR_U32(ctx, 31, 0x248ECCu);
    ctx->pc = 0x248EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248EC4u;
            // 0x248ec8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F4B0u;
    if (runtime->hasFunction(0x21F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x21F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248ECCu; }
        if (ctx->pc != 0x248ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UseItem__12CMenuItemUseFP13CGameDataUsediPv_0x21f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248ECCu; }
        if (ctx->pc != 0x248ECCu) { return; }
    }
    ctx->pc = 0x248ECCu;
label_248ecc:
    // 0x248ecc: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x248eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_248ed0:
    // 0x248ed0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x248ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248ed4:
    // 0x248ed4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x248ed4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248ed8:
    // 0x248ed8: 0xc08fa94  jal         func_23EA50
label_248edc:
    if (ctx->pc == 0x248EDCu) {
        ctx->pc = 0x248EDCu;
            // 0x248edc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248EE0u;
        goto label_248ee0;
    }
    ctx->pc = 0x248ED8u;
    SET_GPR_U32(ctx, 31, 0x248EE0u);
    ctx->pc = 0x248EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248ED8u;
            // 0x248edc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EA50u;
    if (runtime->hasFunction(0x23EA50u)) {
        auto targetFn = runtime->lookupFunction(0x23EA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248EE0u; }
        if (ctx->pc != 0x248EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHaveItemInfo__12CMenuKeyFuncFii_0x23ea50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248EE0u; }
        if (ctx->pc != 0x248EE0u) { return; }
    }
    ctx->pc = 0x248EE0u;
label_248ee0:
    // 0x248ee0: 0xc065cb8  jal         func_1972E0
label_248ee4:
    if (ctx->pc == 0x248EE4u) {
        ctx->pc = 0x248EE4u;
            // 0x248ee4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248EE8u;
        goto label_248ee8;
    }
    ctx->pc = 0x248EE0u;
    SET_GPR_U32(ctx, 31, 0x248EE8u);
    ctx->pc = 0x248EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248EE0u;
            // 0x248ee4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248EE8u; }
        if (ctx->pc != 0x248EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248EE8u; }
        if (ctx->pc != 0x248EE8u) { return; }
    }
    ctx->pc = 0x248EE8u;
label_248ee8:
    // 0x248ee8: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
label_248eec:
    if (ctx->pc == 0x248EECu) {
        ctx->pc = 0x248EF0u;
        goto label_248ef0;
    }
    ctx->pc = 0x248EE8u;
    {
        const bool branch_taken_0x248ee8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x248ee8) {
            ctx->pc = 0x248F00u;
            goto label_248f00;
        }
    }
    ctx->pc = 0x248EF0u;
label_248ef0:
    // 0x248ef0: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x248ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_248ef4:
    // 0x248ef4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x248ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248ef8:
    // 0x248ef8: 0xc08fa94  jal         func_23EA50
label_248efc:
    if (ctx->pc == 0x248EFCu) {
        ctx->pc = 0x248EFCu;
            // 0x248efc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x248F00u;
        goto label_248f00;
    }
    ctx->pc = 0x248EF8u;
    SET_GPR_U32(ctx, 31, 0x248F00u);
    ctx->pc = 0x248EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248EF8u;
            // 0x248efc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EA50u;
    if (runtime->hasFunction(0x23EA50u)) {
        auto targetFn = runtime->lookupFunction(0x23EA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248F00u; }
        if (ctx->pc != 0x248F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHaveItemInfo__12CMenuKeyFuncFii_0x23ea50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248F00u; }
        if (ctx->pc != 0x248F00u) { return; }
    }
    ctx->pc = 0x248F00u;
label_248f00:
    // 0x248f00: 0x17c0009f  bnez        $fp, . + 4 + (0x9F << 2)
label_248f04:
    if (ctx->pc == 0x248F04u) {
        ctx->pc = 0x248F04u;
            // 0x248f04: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x248F08u;
        goto label_248f08;
    }
    ctx->pc = 0x248F00u;
    {
        const bool branch_taken_0x248f00 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x248F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248F00u;
            // 0x248f04: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f00) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248F08u;
label_248f08:
    // 0x248f08: 0xc094274  jal         func_2509D0
label_248f0c:
    if (ctx->pc == 0x248F0Cu) {
        ctx->pc = 0x248F10u;
        goto label_248f10;
    }
    ctx->pc = 0x248F08u;
    SET_GPR_U32(ctx, 31, 0x248F10u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248F10u; }
        if (ctx->pc != 0x248F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248F10u; }
        if (ctx->pc != 0x248F10u) { return; }
    }
    ctx->pc = 0x248F10u;
label_248f10:
    // 0x248f10: 0x1000009b  b           . + 4 + (0x9B << 2)
label_248f14:
    if (ctx->pc == 0x248F14u) {
        ctx->pc = 0x248F18u;
        goto label_248f18;
    }
    ctx->pc = 0x248F10u;
    {
        const bool branch_taken_0x248f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248f10) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248F18u;
label_248f18:
    // 0x248f18: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x248f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_248f1c:
    // 0x248f1c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x248f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_248f20:
    // 0x248f20: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_248f24:
    if (ctx->pc == 0x248F24u) {
        ctx->pc = 0x248F24u;
            // 0x248f24: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x248F28u;
        goto label_248f28;
    }
    ctx->pc = 0x248F20u;
    {
        const bool branch_taken_0x248f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x248F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248F20u;
            // 0x248f24: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f20) {
            ctx->pc = 0x248F40u;
            goto label_248f40;
        }
    }
    ctx->pc = 0x248F28u;
label_248f28:
    // 0x248f28: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_248f2c:
    if (ctx->pc == 0x248F2Cu) {
        ctx->pc = 0x248F2Cu;
            // 0x248f2c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x248F30u;
        goto label_248f30;
    }
    ctx->pc = 0x248F28u;
    {
        const bool branch_taken_0x248f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x248F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248F28u;
            // 0x248f2c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f28) {
            ctx->pc = 0x248F40u;
            goto label_248f40;
        }
    }
    ctx->pc = 0x248F30u;
label_248f30:
    // 0x248f30: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_248f34:
    if (ctx->pc == 0x248F34u) {
        ctx->pc = 0x248F34u;
            // 0x248f34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x248F38u;
        goto label_248f38;
    }
    ctx->pc = 0x248F30u;
    {
        const bool branch_taken_0x248f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x248F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248F30u;
            // 0x248f34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f30) {
            ctx->pc = 0x248F44u;
            goto label_248f44;
        }
    }
    ctx->pc = 0x248F38u;
label_248f38:
    // 0x248f38: 0x1000001e  b           . + 4 + (0x1E << 2)
label_248f3c:
    if (ctx->pc == 0x248F3Cu) {
        ctx->pc = 0x248F3Cu;
            // 0x248f3c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x248F40u;
        goto label_248f40;
    }
    ctx->pc = 0x248F38u;
    {
        const bool branch_taken_0x248f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248F38u;
            // 0x248f3c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f38) {
            ctx->pc = 0x248FB4u;
            goto label_248fb4;
        }
    }
    ctx->pc = 0x248F40u;
label_248f40:
    // 0x248f40: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x248f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_248f44:
    // 0x248f44: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x248f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_248f48:
    // 0x248f48: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x248f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
label_248f4c:
    // 0x248f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248f50:
    // 0x248f50: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x248f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_248f54:
    // 0x248f54: 0xc090270  jal         func_2409C0
label_248f58:
    if (ctx->pc == 0x248F58u) {
        ctx->pc = 0x248F58u;
            // 0x248f58: 0x27a70200  addiu       $a3, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x248F5Cu;
        goto label_248f5c;
    }
    ctx->pc = 0x248F54u;
    SET_GPR_U32(ctx, 31, 0x248F5Cu);
    ctx->pc = 0x248F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248F54u;
            // 0x248f58: 0x27a70200  addiu       $a3, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2409C0u;
    if (runtime->hasFunction(0x2409C0u)) {
        auto targetFn = runtime->lookupFunction(0x2409C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248F5Cu; }
        if (ctx->pc != 0x248F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EquipDirect__13CMenuItemInfoFiP13CGameDataUsedRi_0x2409c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248F5Cu; }
        if (ctx->pc != 0x248F5Cu) { return; }
    }
    ctx->pc = 0x248F5Cu;
label_248f5c:
    // 0x248f5c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_248f60:
    if (ctx->pc == 0x248F60u) {
        ctx->pc = 0x248F60u;
            // 0x248f60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248F64u;
        goto label_248f64;
    }
    ctx->pc = 0x248F5Cu;
    {
        const bool branch_taken_0x248f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248F5Cu;
            // 0x248f60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f5c) {
            ctx->pc = 0x248F74u;
            goto label_248f74;
        }
    }
    ctx->pc = 0x248F64u;
label_248f64:
    // 0x248f64: 0xc094274  jal         func_2509D0
label_248f68:
    if (ctx->pc == 0x248F68u) {
        ctx->pc = 0x248F68u;
            // 0x248f68: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x248F6Cu;
        goto label_248f6c;
    }
    ctx->pc = 0x248F64u;
    SET_GPR_U32(ctx, 31, 0x248F6Cu);
    ctx->pc = 0x248F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248F64u;
            // 0x248f68: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248F6Cu; }
        if (ctx->pc != 0x248F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248F6Cu; }
        if (ctx->pc != 0x248F6Cu) { return; }
    }
    ctx->pc = 0x248F6Cu;
label_248f6c:
    // 0x248f6c: 0x10000084  b           . + 4 + (0x84 << 2)
label_248f70:
    if (ctx->pc == 0x248F70u) {
        ctx->pc = 0x248F74u;
        goto label_248f74;
    }
    ctx->pc = 0x248F6Cu;
    {
        const bool branch_taken_0x248f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248f6c) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248F74u;
label_248f74:
    // 0x248f74: 0xc090320  jal         func_240C80
label_248f78:
    if (ctx->pc == 0x248F78u) {
        ctx->pc = 0x248F78u;
            // 0x248f78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x248F7Cu;
        goto label_248f7c;
    }
    ctx->pc = 0x248F74u;
    SET_GPR_U32(ctx, 31, 0x248F7Cu);
    ctx->pc = 0x248F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248F74u;
            // 0x248f78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240C80u;
    if (runtime->hasFunction(0x240C80u)) {
        auto targetFn = runtime->lookupFunction(0x240C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248F7Cu; }
        if (ctx->pc != 0x248F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadInfo__13CMenuItemInfoFi_0x240c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248F7Cu; }
        if (ctx->pc != 0x248F7Cu) { return; }
    }
    ctx->pc = 0x248F7Cu;
label_248f7c:
    // 0x248f7c: 0xc094274  jal         func_2509D0
label_248f80:
    if (ctx->pc == 0x248F80u) {
        ctx->pc = 0x248F80u;
            // 0x248f80: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x248F84u;
        goto label_248f84;
    }
    ctx->pc = 0x248F7Cu;
    SET_GPR_U32(ctx, 31, 0x248F84u);
    ctx->pc = 0x248F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248F7Cu;
            // 0x248f80: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248F84u; }
        if (ctx->pc != 0x248F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248F84u; }
        if (ctx->pc != 0x248F84u) { return; }
    }
    ctx->pc = 0x248F84u;
label_248f84:
    // 0x248f84: 0x8fa50200  lw          $a1, 0x200($sp)
    ctx->pc = 0x248f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_248f88:
    // 0x248f88: 0xc0abf4c  jal         func_2AFD30
label_248f8c:
    if (ctx->pc == 0x248F8Cu) {
        ctx->pc = 0x248F8Cu;
            // 0x248f8c: 0x86040118  lh          $a0, 0x118($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
        ctx->pc = 0x248F90u;
        goto label_248f90;
    }
    ctx->pc = 0x248F88u;
    SET_GPR_U32(ctx, 31, 0x248F90u);
    ctx->pc = 0x248F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248F88u;
            // 0x248f8c: 0x86040118  lh          $a0, 0x118($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFD30u;
    if (runtime->hasFunction(0x2AFD30u)) {
        auto targetFn = runtime->lookupFunction(0x2AFD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248F90u; }
        if (ctx->pc != 0x248F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertCharaLoadDataPhase__Fii_0x2afd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248F90u; }
        if (ctx->pc != 0x248F90u) { return; }
    }
    ctx->pc = 0x248F90u;
label_248f90:
    // 0x248f90: 0xa3829b74  sb          $v0, -0x648C($gp)
    ctx->pc = 0x248f90u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941556), (uint8_t)GPR_U32(ctx, 2));
label_248f94:
    // 0x248f94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x248f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248f98:
    // 0x248f98: 0xa3809b72  sb          $zero, -0x648E($gp)
    ctx->pc = 0x248f98u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941554), (uint8_t)GPR_U32(ctx, 0));
label_248f9c:
    // 0x248f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248fa0:
    // 0x248fa0: 0x86050110  lh          $a1, 0x110($s0)
    ctx->pc = 0x248fa0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_248fa4:
    // 0x248fa4: 0xc093114  jal         func_24C450
label_248fa8:
    if (ctx->pc == 0x248FA8u) {
        ctx->pc = 0x248FA8u;
            // 0x248fa8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248FACu;
        goto label_248fac;
    }
    ctx->pc = 0x248FA4u;
    SET_GPR_U32(ctx, 31, 0x248FACu);
    ctx->pc = 0x248FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248FA4u;
            // 0x248fa8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C450u;
    if (runtime->hasFunction(0x24C450u)) {
        auto targetFn = runtime->lookupFunction(0x24C450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248FACu; }
        if (ctx->pc != 0x248FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ModelReadStart__13CMenuItemInfoFiii_0x24c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248FACu; }
        if (ctx->pc != 0x248FACu) { return; }
    }
    ctx->pc = 0x248FACu;
label_248fac:
    // 0x248fac: 0x10000074  b           . + 4 + (0x74 << 2)
label_248fb0:
    if (ctx->pc == 0x248FB0u) {
        ctx->pc = 0x248FB4u;
        goto label_248fb4;
    }
    ctx->pc = 0x248FACu;
    {
        const bool branch_taken_0x248fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248fac) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x248FB4u;
label_248fb4:
    // 0x248fb4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x248fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_248fb8:
    // 0x248fb8: 0x8c27d8c8  lw          $a3, -0x2738($at)
    ctx->pc = 0x248fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
label_248fbc:
    // 0x248fbc: 0x2484d570  addiu       $a0, $a0, -0x2A90
    ctx->pc = 0x248fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956400));
label_248fc0:
    // 0x248fc0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x248fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_248fc4:
    // 0x248fc4: 0xc087d2c  jal         func_21F4B0
label_248fc8:
    if (ctx->pc == 0x248FC8u) {
        ctx->pc = 0x248FC8u;
            // 0x248fc8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x248FCCu;
        goto label_248fcc;
    }
    ctx->pc = 0x248FC4u;
    SET_GPR_U32(ctx, 31, 0x248FCCu);
    ctx->pc = 0x248FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248FC4u;
            // 0x248fc8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F4B0u;
    if (runtime->hasFunction(0x21F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x21F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248FCCu; }
        if (ctx->pc != 0x248FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UseItem__12CMenuItemUseFP13CGameDataUsediPv_0x21f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248FCCu; }
        if (ctx->pc != 0x248FCCu) { return; }
    }
    ctx->pc = 0x248FCCu;
label_248fcc:
    // 0x248fcc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x248fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_248fd0:
    // 0x248fd0: 0xc065cb8  jal         func_1972E0
label_248fd4:
    if (ctx->pc == 0x248FD4u) {
        ctx->pc = 0x248FD4u;
            // 0x248fd4: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248FD8u;
        goto label_248fd8;
    }
    ctx->pc = 0x248FD0u;
    SET_GPR_U32(ctx, 31, 0x248FD8u);
    ctx->pc = 0x248FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248FD0u;
            // 0x248fd4: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248FD8u; }
        if (ctx->pc != 0x248FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248FD8u; }
        if (ctx->pc != 0x248FD8u) { return; }
    }
    ctx->pc = 0x248FD8u;
label_248fd8:
    // 0x248fd8: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
label_248fdc:
    if (ctx->pc == 0x248FDCu) {
        ctx->pc = 0x248FE0u;
        goto label_248fe0;
    }
    ctx->pc = 0x248FD8u;
    {
        const bool branch_taken_0x248fd8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x248fd8) {
            ctx->pc = 0x248FF8u;
            goto label_248ff8;
        }
    }
    ctx->pc = 0x248FE0u;
label_248fe0:
    // 0x248fe0: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x248fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_248fe4:
    // 0x248fe4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x248fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248fe8:
    // 0x248fe8: 0xc08fa94  jal         func_23EA50
label_248fec:
    if (ctx->pc == 0x248FECu) {
        ctx->pc = 0x248FECu;
            // 0x248fec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x248FF0u;
        goto label_248ff0;
    }
    ctx->pc = 0x248FE8u;
    SET_GPR_U32(ctx, 31, 0x248FF0u);
    ctx->pc = 0x248FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248FE8u;
            // 0x248fec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EA50u;
    if (runtime->hasFunction(0x23EA50u)) {
        auto targetFn = runtime->lookupFunction(0x23EA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248FF0u; }
        if (ctx->pc != 0x248FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHaveItemInfo__12CMenuKeyFuncFii_0x23ea50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248FF0u; }
        if (ctx->pc != 0x248FF0u) { return; }
    }
    ctx->pc = 0x248FF0u;
label_248ff0:
    // 0x248ff0: 0x10000005  b           . + 4 + (0x5 << 2)
label_248ff4:
    if (ctx->pc == 0x248FF4u) {
        ctx->pc = 0x248FF8u;
        goto label_248ff8;
    }
    ctx->pc = 0x248FF0u;
    {
        const bool branch_taken_0x248ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248ff0) {
            ctx->pc = 0x249008u;
            goto label_249008;
        }
    }
    ctx->pc = 0x248FF8u;
label_248ff8:
    // 0x248ff8: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x248ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_248ffc:
    // 0x248ffc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x248ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249000:
    // 0x249000: 0xc08fa94  jal         func_23EA50
label_249004:
    if (ctx->pc == 0x249004u) {
        ctx->pc = 0x249004u;
            // 0x249004: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x249008u;
        goto label_249008;
    }
    ctx->pc = 0x249000u;
    SET_GPR_U32(ctx, 31, 0x249008u);
    ctx->pc = 0x249004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249000u;
            // 0x249004: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EA50u;
    if (runtime->hasFunction(0x23EA50u)) {
        auto targetFn = runtime->lookupFunction(0x23EA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249008u; }
        if (ctx->pc != 0x249008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHaveItemInfo__12CMenuKeyFuncFii_0x23ea50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249008u; }
        if (ctx->pc != 0x249008u) { return; }
    }
    ctx->pc = 0x249008u;
label_249008:
    // 0x249008: 0x17c0005d  bnez        $fp, . + 4 + (0x5D << 2)
label_24900c:
    if (ctx->pc == 0x24900Cu) {
        ctx->pc = 0x24900Cu;
            // 0x24900c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x249010u;
        goto label_249010;
    }
    ctx->pc = 0x249008u;
    {
        const bool branch_taken_0x249008 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x24900Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249008u;
            // 0x24900c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249008) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x249010u;
label_249010:
    // 0x249010: 0xc094274  jal         func_2509D0
label_249014:
    if (ctx->pc == 0x249014u) {
        ctx->pc = 0x249018u;
        goto label_249018;
    }
    ctx->pc = 0x249010u;
    SET_GPR_U32(ctx, 31, 0x249018u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249018u; }
        if (ctx->pc != 0x249018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249018u; }
        if (ctx->pc != 0x249018u) { return; }
    }
    ctx->pc = 0x249018u;
label_249018:
    // 0x249018: 0x10000059  b           . + 4 + (0x59 << 2)
label_24901c:
    if (ctx->pc == 0x24901Cu) {
        ctx->pc = 0x249020u;
        goto label_249020;
    }
    ctx->pc = 0x249018u;
    {
        const bool branch_taken_0x249018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249018) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x249020u;
label_249020:
    // 0x249020: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x249020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_249024:
    // 0x249024: 0x8c27d8cc  lw          $a3, -0x2734($at)
    ctx->pc = 0x249024u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957260)));
label_249028:
    // 0x249028: 0x2484d570  addiu       $a0, $a0, -0x2A90
    ctx->pc = 0x249028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956400));
label_24902c:
    // 0x24902c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24902cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_249030:
    // 0x249030: 0xc087d2c  jal         func_21F4B0
label_249034:
    if (ctx->pc == 0x249034u) {
        ctx->pc = 0x249034u;
            // 0x249034: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x249038u;
        goto label_249038;
    }
    ctx->pc = 0x249030u;
    SET_GPR_U32(ctx, 31, 0x249038u);
    ctx->pc = 0x249034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249030u;
            // 0x249034: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F4B0u;
    if (runtime->hasFunction(0x21F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x21F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249038u; }
        if (ctx->pc != 0x249038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UseItem__12CMenuItemUseFP13CGameDataUsediPv_0x21f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249038u; }
        if (ctx->pc != 0x249038u) { return; }
    }
    ctx->pc = 0x249038u;
label_249038:
    // 0x249038: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x249038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_24903c:
    // 0x24903c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24903cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249040:
    // 0x249040: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x249040u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_249044:
    // 0x249044: 0xc08fa94  jal         func_23EA50
label_249048:
    if (ctx->pc == 0x249048u) {
        ctx->pc = 0x249048u;
            // 0x249048: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24904Cu;
        goto label_24904c;
    }
    ctx->pc = 0x249044u;
    SET_GPR_U32(ctx, 31, 0x24904Cu);
    ctx->pc = 0x249048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249044u;
            // 0x249048: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EA50u;
    if (runtime->hasFunction(0x23EA50u)) {
        auto targetFn = runtime->lookupFunction(0x23EA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24904Cu; }
        if (ctx->pc != 0x24904Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHaveItemInfo__12CMenuKeyFuncFii_0x23ea50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24904Cu; }
        if (ctx->pc != 0x24904Cu) { return; }
    }
    ctx->pc = 0x24904Cu;
label_24904c:
    // 0x24904c: 0xc065cb8  jal         func_1972E0
label_249050:
    if (ctx->pc == 0x249050u) {
        ctx->pc = 0x249050u;
            // 0x249050: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x249054u;
        goto label_249054;
    }
    ctx->pc = 0x24904Cu;
    SET_GPR_U32(ctx, 31, 0x249054u);
    ctx->pc = 0x249050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24904Cu;
            // 0x249050: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249054u; }
        if (ctx->pc != 0x249054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249054u; }
        if (ctx->pc != 0x249054u) { return; }
    }
    ctx->pc = 0x249054u;
label_249054:
    // 0x249054: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
label_249058:
    if (ctx->pc == 0x249058u) {
        ctx->pc = 0x24905Cu;
        goto label_24905c;
    }
    ctx->pc = 0x249054u;
    {
        const bool branch_taken_0x249054 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x249054) {
            ctx->pc = 0x24906Cu;
            goto label_24906c;
        }
    }
    ctx->pc = 0x24905Cu;
label_24905c:
    // 0x24905c: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x24905cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_249060:
    // 0x249060: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249064:
    // 0x249064: 0xc08fa94  jal         func_23EA50
label_249068:
    if (ctx->pc == 0x249068u) {
        ctx->pc = 0x249068u;
            // 0x249068: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x24906Cu;
        goto label_24906c;
    }
    ctx->pc = 0x249064u;
    SET_GPR_U32(ctx, 31, 0x24906Cu);
    ctx->pc = 0x249068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249064u;
            // 0x249068: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EA50u;
    if (runtime->hasFunction(0x23EA50u)) {
        auto targetFn = runtime->lookupFunction(0x23EA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24906Cu; }
        if (ctx->pc != 0x24906Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHaveItemInfo__12CMenuKeyFuncFii_0x23ea50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24906Cu; }
        if (ctx->pc != 0x24906Cu) { return; }
    }
    ctx->pc = 0x24906Cu;
label_24906c:
    // 0x24906c: 0x17c00044  bnez        $fp, . + 4 + (0x44 << 2)
label_249070:
    if (ctx->pc == 0x249070u) {
        ctx->pc = 0x249070u;
            // 0x249070: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x249074u;
        goto label_249074;
    }
    ctx->pc = 0x24906Cu;
    {
        const bool branch_taken_0x24906c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x249070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24906Cu;
            // 0x249070: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24906c) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x249074u;
label_249074:
    // 0x249074: 0xc094274  jal         func_2509D0
label_249078:
    if (ctx->pc == 0x249078u) {
        ctx->pc = 0x24907Cu;
        goto label_24907c;
    }
    ctx->pc = 0x249074u;
    SET_GPR_U32(ctx, 31, 0x24907Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24907Cu; }
        if (ctx->pc != 0x24907Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24907Cu; }
        if (ctx->pc != 0x24907Cu) { return; }
    }
    ctx->pc = 0x24907Cu;
label_24907c:
    // 0x24907c: 0x10000040  b           . + 4 + (0x40 << 2)
label_249080:
    if (ctx->pc == 0x249080u) {
        ctx->pc = 0x249084u;
        goto label_249084;
    }
    ctx->pc = 0x24907Cu;
    {
        const bool branch_taken_0x24907c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24907c) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x249084u;
label_249084:
    // 0x249084: 0xc0900c4  jal         func_240310
label_249088:
    if (ctx->pc == 0x249088u) {
        ctx->pc = 0x24908Cu;
        goto label_24908c;
    }
    ctx->pc = 0x249084u;
    SET_GPR_U32(ctx, 31, 0x24908Cu);
    ctx->pc = 0x240310u;
    if (runtime->hasFunction(0x240310u)) {
        auto targetFn = runtime->lookupFunction(0x240310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24908Cu; }
        if (ctx->pc != 0x24908Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsCancelLoadItem__13CMenuItemInfoFv_0x240310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24908Cu; }
        if (ctx->pc != 0x24908Cu) { return; }
    }
    ctx->pc = 0x24908Cu;
label_24908c:
    // 0x24908c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24908cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_249090:
    // 0x249090: 0x1443003b  bne         $v0, $v1, . + 4 + (0x3B << 2)
label_249094:
    if (ctx->pc == 0x249094u) {
        ctx->pc = 0x249094u;
            // 0x249094: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x249098u;
        goto label_249098;
    }
    ctx->pc = 0x249090u;
    {
        const bool branch_taken_0x249090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x249094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249090u;
            // 0x249094: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249090) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x249098u;
label_249098:
    // 0x249098: 0xc068514  jal         func_1A1450
label_24909c:
    if (ctx->pc == 0x24909Cu) {
        ctx->pc = 0x24909Cu;
            // 0x24909c: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x2490A0u;
        goto label_2490a0;
    }
    ctx->pc = 0x249098u;
    SET_GPR_U32(ctx, 31, 0x2490A0u);
    ctx->pc = 0x24909Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249098u;
            // 0x24909c: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1450u;
    if (runtime->hasFunction(0x1A1450u)) {
        auto targetFn = runtime->lookupFunction(0x1A1450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2490A0u; }
        if (ctx->pc != 0x2490A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckItemLimmitOver__Fv_0x1a1450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2490A0u; }
        if (ctx->pc != 0x2490A0u) { return; }
    }
    ctx->pc = 0x2490A0u;
label_2490a0:
    // 0x2490a0: 0xc0684ec  jal         func_1A13B0
label_2490a4:
    if (ctx->pc == 0x2490A4u) {
        ctx->pc = 0x2490A4u;
            // 0x2490a4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2490A8u;
        goto label_2490a8;
    }
    ctx->pc = 0x2490A0u;
    SET_GPR_U32(ctx, 31, 0x2490A8u);
    ctx->pc = 0x2490A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2490A0u;
            // 0x2490a4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A13B0u;
    if (runtime->hasFunction(0x1A13B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A13B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2490A8u; }
        if (ctx->pc != 0x2490A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckItemOver__Fv_0x1a13b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2490A8u; }
        if (ctx->pc != 0x2490A8u) { return; }
    }
    ctx->pc = 0x2490A8u;
label_2490a8:
    // 0x2490a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2490ac:
    if (ctx->pc == 0x2490ACu) {
        ctx->pc = 0x2490B0u;
        goto label_2490b0;
    }
    ctx->pc = 0x2490A8u;
    {
        const bool branch_taken_0x2490a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2490a8) {
            ctx->pc = 0x2490B8u;
            goto label_2490b8;
        }
    }
    ctx->pc = 0x2490B0u;
label_2490b0:
    // 0x2490b0: 0x12200033  beqz        $s1, . + 4 + (0x33 << 2)
label_2490b4:
    if (ctx->pc == 0x2490B4u) {
        ctx->pc = 0x2490B8u;
        goto label_2490b8;
    }
    ctx->pc = 0x2490B0u;
    {
        const bool branch_taken_0x2490b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2490b0) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x2490B8u;
label_2490b8:
    // 0x2490b8: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x2490b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_2490bc:
    // 0x2490bc: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2490bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2490c0:
    // 0x2490c0: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x2490c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_2490c4:
    // 0x2490c4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2490c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2490c8:
    // 0x2490c8: 0x8c22cb4c  lw          $v0, -0x34B4($at)
    ctx->pc = 0x2490c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953804)));
label_2490cc:
    // 0x2490cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2490ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2490d0:
    // 0x2490d0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2490d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2490d4:
    // 0x2490d4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2490d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_2490d8:
    // 0x2490d8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2490d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2490dc:
    // 0x2490dc: 0x8c32ca5c  lw          $s2, -0x35A4($at)
    ctx->pc = 0x2490dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
label_2490e0:
    // 0x2490e0: 0xc0874e8  jal         func_21D3A0
label_2490e4:
    if (ctx->pc == 0x2490E4u) {
        ctx->pc = 0x2490E4u;
            // 0x2490e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2490E8u;
        goto label_2490e8;
    }
    ctx->pc = 0x2490E0u;
    SET_GPR_U32(ctx, 31, 0x2490E8u);
    ctx->pc = 0x2490E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2490E0u;
            // 0x2490e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2490E8u; }
        if (ctx->pc != 0x2490E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2490E8u; }
        if (ctx->pc != 0x2490E8u) { return; }
    }
    ctx->pc = 0x2490E8u;
label_2490e8:
    // 0x2490e8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2490e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2490ec:
    // 0x2490ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2490ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2490f0:
    // 0x2490f0: 0xae42014c  sw          $v0, 0x14C($s2)
    ctx->pc = 0x2490f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 2));
label_2490f4:
    // 0x2490f4: 0xc0877e0  jal         func_21DF80
label_2490f8:
    if (ctx->pc == 0x2490F8u) {
        ctx->pc = 0x2490F8u;
            // 0x2490f8: 0x24050096  addiu       $a1, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->pc = 0x2490FCu;
        goto label_2490fc;
    }
    ctx->pc = 0x2490F4u;
    SET_GPR_U32(ctx, 31, 0x2490FCu);
    ctx->pc = 0x2490F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2490F4u;
            // 0x2490f8: 0x24050096  addiu       $a1, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2490FCu; }
        if (ctx->pc != 0x2490FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2490FCu; }
        if (ctx->pc != 0x2490FCu) { return; }
    }
    ctx->pc = 0x2490FCu;
label_2490fc:
    // 0x2490fc: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_249100:
    if (ctx->pc == 0x249100u) {
        ctx->pc = 0x249100u;
            // 0x249100: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x249104u;
        goto label_249104;
    }
    ctx->pc = 0x2490FCu;
    {
        const bool branch_taken_0x2490fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x249100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2490FCu;
            // 0x249100: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2490fc) {
            ctx->pc = 0x24914Cu;
            goto label_24914c;
        }
    }
    ctx->pc = 0x249104u;
label_249104:
    // 0x249104: 0xc0877e0  jal         func_21DF80
label_249108:
    if (ctx->pc == 0x249108u) {
        ctx->pc = 0x249108u;
            // 0x249108: 0x24050099  addiu       $a1, $zero, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
        ctx->pc = 0x24910Cu;
        goto label_24910c;
    }
    ctx->pc = 0x249104u;
    SET_GPR_U32(ctx, 31, 0x24910Cu);
    ctx->pc = 0x249108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249104u;
            // 0x249108: 0x24050099  addiu       $a1, $zero, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24910Cu; }
        if (ctx->pc != 0x24910Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24910Cu; }
        if (ctx->pc != 0x24910Cu) { return; }
    }
    ctx->pc = 0x24910Cu;
label_24910c:
    // 0x24910c: 0xc7809738  lwc1        $f0, -0x68C8($gp)
    ctx->pc = 0x24910cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249110:
    // 0x249110: 0x27a20204  addiu       $v0, $sp, 0x204
    ctx->pc = 0x249110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
label_249114:
    // 0x249114: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x249114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_249118:
    // 0x249118: 0xc065810  jal         func_196040
label_24911c:
    if (ctx->pc == 0x24911Cu) {
        ctx->pc = 0x24911Cu;
            // 0x24911c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->pc = 0x249120u;
        goto label_249120;
    }
    ctx->pc = 0x249118u;
    SET_GPR_U32(ctx, 31, 0x249120u);
    ctx->pc = 0x24911Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249118u;
            // 0x24911c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249120u; }
        if (ctx->pc != 0x249120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249120u; }
        if (ctx->pc != 0x249120u) { return; }
    }
    ctx->pc = 0x249120u;
label_249120:
    // 0x249120: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x249120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_249124:
    // 0x249124: 0xc065708  jal         func_195C20
label_249128:
    if (ctx->pc == 0x249128u) {
        ctx->pc = 0x249128u;
            // 0x249128: 0xafa20204  sw          $v0, 0x204($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
        ctx->pc = 0x24912Cu;
        goto label_24912c;
    }
    ctx->pc = 0x249124u;
    SET_GPR_U32(ctx, 31, 0x24912Cu);
    ctx->pc = 0x249128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249124u;
            // 0x249128: 0xafa20204  sw          $v0, 0x204($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C20u;
    if (runtime->hasFunction(0x195C20u)) {
        auto targetFn = runtime->lookupFunction(0x195C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24912Cu; }
        if (ctx->pc != 0x24912Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonItemData__Fi_0x195c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24912Cu; }
        if (ctx->pc != 0x24912Cu) { return; }
    }
    ctx->pc = 0x24912Cu;
label_24912c:
    // 0x24912c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24912cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_249130:
    // 0x249130: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x249130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_249134:
    // 0x249134: 0x27a50204  addiu       $a1, $sp, 0x204
    ctx->pc = 0x249134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
label_249138:
    // 0x249138: 0xc087720  jal         func_21DC80
label_24913c:
    if (ctx->pc == 0x24913Cu) {
        ctx->pc = 0x24913Cu;
            // 0x24913c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x249140u;
        goto label_249140;
    }
    ctx->pc = 0x249138u;
    SET_GPR_U32(ctx, 31, 0x249140u);
    ctx->pc = 0x24913Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249138u;
            // 0x24913c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249140u; }
        if (ctx->pc != 0x249140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249140u; }
        if (ctx->pc != 0x249140u) { return; }
    }
    ctx->pc = 0x249140u;
label_249140:
    // 0x249140: 0x9625000a  lhu         $a1, 0xA($s1)
    ctx->pc = 0x249140u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_249144:
    // 0x249144: 0xc0877b8  jal         func_21DEE0
label_249148:
    if (ctx->pc == 0x249148u) {
        ctx->pc = 0x249148u;
            // 0x249148: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24914Cu;
        goto label_24914c;
    }
    ctx->pc = 0x249144u;
    SET_GPR_U32(ctx, 31, 0x24914Cu);
    ctx->pc = 0x249148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249144u;
            // 0x249148: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24914Cu; }
        if (ctx->pc != 0x24914Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24914Cu; }
        if (ctx->pc != 0x24914Cu) { return; }
    }
    ctx->pc = 0x24914Cu;
label_24914c:
    // 0x24914c: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x24914cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_249150:
    // 0x249150: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x249150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_249154:
    // 0x249154: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_249158:
    if (ctx->pc == 0x249158u) {
        ctx->pc = 0x24915Cu;
        goto label_24915c;
    }
    ctx->pc = 0x249154u;
    {
        const bool branch_taken_0x249154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249154) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x24915Cu;
label_24915c:
    // 0x24915c: 0x10000008  b           . + 4 + (0x8 << 2)
label_249160:
    if (ctx->pc == 0x249160u) {
        ctx->pc = 0x249160u;
            // 0x249160: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x249164u;
        goto label_249164;
    }
    ctx->pc = 0x24915Cu;
    {
        const bool branch_taken_0x24915c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24915Cu;
            // 0x249160: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24915c) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x249164u;
label_249164:
    // 0x249164: 0xc090060  jal         func_240180
label_249168:
    if (ctx->pc == 0x249168u) {
        ctx->pc = 0x24916Cu;
        goto label_24916c;
    }
    ctx->pc = 0x249164u;
    SET_GPR_U32(ctx, 31, 0x24916Cu);
    ctx->pc = 0x240180u;
    if (runtime->hasFunction(0x240180u)) {
        auto targetFn = runtime->lookupFunction(0x240180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24916Cu; }
        if (ctx->pc != 0x24916Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsCancelNoneLoadItem__13CMenuItemInfoFv_0x240180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24916Cu; }
        if (ctx->pc != 0x24916Cu) { return; }
    }
    ctx->pc = 0x24916Cu;
label_24916c:
    // 0x24916c: 0x10000004  b           . + 4 + (0x4 << 2)
label_249170:
    if (ctx->pc == 0x249170u) {
        ctx->pc = 0x249174u;
        goto label_249174;
    }
    ctx->pc = 0x24916Cu;
    {
        const bool branch_taken_0x24916c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24916c) {
            ctx->pc = 0x249180u;
            goto label_249180;
        }
    }
    ctx->pc = 0x249174u;
label_249174:
    // 0x249174: 0x8e05017c  lw          $a1, 0x17C($s0)
    ctx->pc = 0x249174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_249178:
    // 0x249178: 0xc0901fc  jal         func_2407F0
label_24917c:
    if (ctx->pc == 0x24917Cu) {
        ctx->pc = 0x24917Cu;
            // 0x24917c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x249180u;
        goto label_249180;
    }
    ctx->pc = 0x249178u;
    SET_GPR_U32(ctx, 31, 0x249180u);
    ctx->pc = 0x24917Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249178u;
            // 0x24917c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2407F0u;
    if (runtime->hasFunction(0x2407F0u)) {
        auto targetFn = runtime->lookupFunction(0x2407F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249180u; }
        if (ctx->pc != 0x249180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextModeBuildUpInfo__13CMenuItemInfoFP13CGameDataUsed_0x2407f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249180u; }
        if (ctx->pc != 0x249180u) { return; }
    }
    ctx->pc = 0x249180u;
label_249180:
    // 0x249180: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
label_249184:
    if (ctx->pc == 0x249184u) {
        ctx->pc = 0x249184u;
            // 0x249184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x249188u;
        goto label_249188;
    }
    ctx->pc = 0x249180u;
    {
        const bool branch_taken_0x249180 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x249184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249180u;
            // 0x249184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249180) {
            ctx->pc = 0x249190u;
            goto label_249190;
        }
    }
    ctx->pc = 0x249188u;
label_249188:
    // 0x249188: 0xc093444  jal         func_24D110
label_24918c:
    if (ctx->pc == 0x24918Cu) {
        ctx->pc = 0x249190u;
        goto label_249190;
    }
    ctx->pc = 0x249188u;
    SET_GPR_U32(ctx, 31, 0x249190u);
    ctx->pc = 0x24D110u;
    if (runtime->hasFunction(0x24D110u)) {
        auto targetFn = runtime->lookupFunction(0x24D110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249190u; }
        if (ctx->pc != 0x249190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetItemEffect__13CMenuItemInfoFv_0x24d110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249190u; }
        if (ctx->pc != 0x249190u) { return; }
    }
    ctx->pc = 0x249190u;
label_249190:
    // 0x249190: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x249190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_249194:
    // 0x249194: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x249194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249198:
    // 0x249198: 0x14430321  bne         $v0, $v1, . + 4 + (0x321 << 2)
label_24919c:
    if (ctx->pc == 0x24919Cu) {
        ctx->pc = 0x24919Cu;
            // 0x24919c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2491A0u;
        goto label_2491a0;
    }
    ctx->pc = 0x249198u;
    {
        const bool branch_taken_0x249198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x24919Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249198u;
            // 0x24919c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249198) {
            ctx->pc = 0x249E20u;
            goto label_249e20;
        }
    }
    ctx->pc = 0x2491A0u;
label_2491a0:
    // 0x2491a0: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x2491a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_2491a4:
    // 0x2491a4: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2491a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2491a8:
    // 0x2491a8: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2491a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_2491ac:
    // 0x2491ac: 0xc08b614  jal         func_22D850
label_2491b0:
    if (ctx->pc == 0x2491B0u) {
        ctx->pc = 0x2491B0u;
            // 0x2491b0: 0x8f849584  lw          $a0, -0x6A7C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940036)));
        ctx->pc = 0x2491B4u;
        goto label_2491b4;
    }
    ctx->pc = 0x2491ACu;
    SET_GPR_U32(ctx, 31, 0x2491B4u);
    ctx->pc = 0x2491B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2491ACu;
            // 0x2491b0: 0x8f849584  lw          $a0, -0x6A7C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940036)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D850u;
    if (runtime->hasFunction(0x22D850u)) {
        auto targetFn = runtime->lookupFunction(0x22D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2491B4u; }
        if (ctx->pc != 0x2491B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__14CRepairManagerFv_0x22d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2491B4u; }
        if (ctx->pc != 0x2491B4u) { return; }
    }
    ctx->pc = 0x2491B4u;
label_2491b4:
    // 0x2491b4: 0x8f849598  lw          $a0, -0x6A68($gp)
    ctx->pc = 0x2491b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940056)));
label_2491b8:
    // 0x2491b8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2491bc:
    if (ctx->pc == 0x2491BCu) {
        ctx->pc = 0x2491BCu;
            // 0x2491bc: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2491C0u;
        goto label_2491c0;
    }
    ctx->pc = 0x2491B8u;
    {
        const bool branch_taken_0x2491b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2491BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2491B8u;
            // 0x2491bc: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2491b8) {
            ctx->pc = 0x2491CCu;
            goto label_2491cc;
        }
    }
    ctx->pc = 0x2491C0u;
label_2491c0:
    // 0x2491c0: 0xc08a240  jal         func_228900
label_2491c4:
    if (ctx->pc == 0x2491C4u) {
        ctx->pc = 0x2491C4u;
            // 0x2491c4: 0x24a5b1d0  addiu       $a1, $a1, -0x4E30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947280));
        ctx->pc = 0x2491C8u;
        goto label_2491c8;
    }
    ctx->pc = 0x2491C0u;
    SET_GPR_U32(ctx, 31, 0x2491C8u);
    ctx->pc = 0x2491C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2491C0u;
            // 0x2491c4: 0x24a5b1d0  addiu       $a1, $a1, -0x4E30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228900u;
    if (runtime->hasFunction(0x228900u)) {
        auto targetFn = runtime->lookupFunction(0x228900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2491C8u; }
        if (ctx->pc != 0x2491C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAction__16CMenuPosDataFormFPc_0x228900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2491C8u; }
        if (ctx->pc != 0x2491C8u) { return; }
    }
    ctx->pc = 0x2491C8u;
label_2491c8:
    // 0x2491c8: 0xa6000198  sh          $zero, 0x198($s0)
    ctx->pc = 0x2491c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 408), (uint16_t)GPR_U32(ctx, 0));
label_2491cc:
    // 0x2491cc: 0xc08ca8c  jal         func_232A30
label_2491d0:
    if (ctx->pc == 0x2491D0u) {
        ctx->pc = 0x2491D4u;
        goto label_2491d4;
    }
    ctx->pc = 0x2491CCu;
    SET_GPR_U32(ctx, 31, 0x2491D4u);
    ctx->pc = 0x232A30u;
    if (runtime->hasFunction(0x232A30u)) {
        auto targetFn = runtime->lookupFunction(0x232A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2491D4u; }
        if (ctx->pc != 0x2491D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTrushMenu__Fv_0x232a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2491D4u; }
        if (ctx->pc != 0x2491D4u) { return; }
    }
    ctx->pc = 0x2491D4u;
label_2491d4:
    // 0x2491d4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2491d8:
    if (ctx->pc == 0x2491D8u) {
        ctx->pc = 0x2491DCu;
        goto label_2491dc;
    }
    ctx->pc = 0x2491D4u;
    {
        const bool branch_taken_0x2491d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2491d4) {
            ctx->pc = 0x2491FCu;
            goto label_2491fc;
        }
    }
    ctx->pc = 0x2491DCu;
label_2491dc:
    // 0x2491dc: 0x838394f0  lb          $v1, -0x6B10($gp)
    ctx->pc = 0x2491dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939888)));
label_2491e0:
    // 0x2491e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2491e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2491e4:
    // 0x2491e4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_2491e8:
    if (ctx->pc == 0x2491E8u) {
        ctx->pc = 0x2491ECu;
        goto label_2491ec;
    }
    ctx->pc = 0x2491E4u;
    {
        const bool branch_taken_0x2491e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2491e4) {
            ctx->pc = 0x2491FCu;
            goto label_2491fc;
        }
    }
    ctx->pc = 0x2491ECu;
label_2491ec:
    // 0x2491ec: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x2491ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2491f0:
    // 0x2491f0: 0x84620050  lh          $v0, 0x50($v1)
    ctx->pc = 0x2491f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2491f4:
    // 0x2491f4: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x2491f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_2491f8:
    // 0x2491f8: 0xa4620050  sh          $v0, 0x50($v1)
    ctx->pc = 0x2491f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 80), (uint16_t)GPR_U32(ctx, 2));
label_2491fc:
    // 0x2491fc: 0xc052330  jal         func_148CC0
label_249200:
    if (ctx->pc == 0x249200u) {
        ctx->pc = 0x249204u;
        goto label_249204;
    }
    ctx->pc = 0x2491FCu;
    SET_GPR_U32(ctx, 31, 0x249204u);
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249204u; }
        if (ctx->pc != 0x249204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249204u; }
        if (ctx->pc != 0x249204u) { return; }
    }
    ctx->pc = 0x249204u;
label_249204:
    // 0x249204: 0xa6000174  sh          $zero, 0x174($s0)
    ctx->pc = 0x249204u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 372), (uint16_t)GPR_U32(ctx, 0));
label_249208:
    // 0x249208: 0x86020172  lh          $v0, 0x172($s0)
    ctx->pc = 0x249208u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 370)));
label_24920c:
    // 0x24920c: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x24920cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_249210:
    // 0x249210: 0x1420006f  bnez        $at, . + 4 + (0x6F << 2)
label_249214:
    if (ctx->pc == 0x249214u) {
        ctx->pc = 0x249214u;
            // 0x249214: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x249218u;
        goto label_249218;
    }
    ctx->pc = 0x249210u;
    {
        const bool branch_taken_0x249210 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x249214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249210u;
            // 0x249214: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249210) {
            ctx->pc = 0x2493D0u;
            goto label_2493d0;
        }
    }
    ctx->pc = 0x249218u;
label_249218:
    // 0x249218: 0xc090c40  jal         func_243100
label_24921c:
    if (ctx->pc == 0x24921Cu) {
        ctx->pc = 0x24921Cu;
            // 0x24921c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x249220u;
        goto label_249220;
    }
    ctx->pc = 0x249218u;
    SET_GPR_U32(ctx, 31, 0x249220u);
    ctx->pc = 0x24921Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249218u;
            // 0x24921c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243100u;
    if (runtime->hasFunction(0x243100u)) {
        auto targetFn = runtime->lookupFunction(0x243100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249220u; }
        if (ctx->pc != 0x249220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveCharaNo__13CMenuItemInfoFv_0x243100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249220u; }
        if (ctx->pc != 0x249220u) { return; }
    }
    ctx->pc = 0x249220u;
label_249220:
    // 0x249220: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x249220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_249224:
    // 0x249224: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x249224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_249228:
    // 0x249228: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x249228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
label_24922c:
    // 0x24922c: 0x2442d8c0  addiu       $v0, $v0, -0x2740
    ctx->pc = 0x24922cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957248));
label_249230:
    // 0x249230: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x249230u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_249234:
    // 0x249234: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x249234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_249238:
    // 0x249238: 0xc0664ec  jal         func_1993B0
label_24923c:
    if (ctx->pc == 0x24923Cu) {
        ctx->pc = 0x24923Cu;
            // 0x24923c: 0x24440170  addiu       $a0, $v0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
        ctx->pc = 0x249240u;
        goto label_249240;
    }
    ctx->pc = 0x249238u;
    SET_GPR_U32(ctx, 31, 0x249240u);
    ctx->pc = 0x24923Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249238u;
            // 0x24923c: 0x24440170  addiu       $a0, $v0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1993B0u;
    if (runtime->hasFunction(0x1993B0u)) {
        auto targetFn = runtime->lookupFunction(0x1993B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249240u; }
        if (ctx->pc != 0x249240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetModelNo__13CGameDataUsedFv_0x1993b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249240u; }
        if (ctx->pc != 0x249240u) { return; }
    }
    ctx->pc = 0x249240u;
label_249240:
    // 0x249240: 0x86030172  lh          $v1, 0x172($s0)
    ctx->pc = 0x249240u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 370)));
label_249244:
    // 0x249244: 0x10620061  beq         $v1, $v0, . + 4 + (0x61 << 2)
label_249248:
    if (ctx->pc == 0x249248u) {
        ctx->pc = 0x249248u;
            // 0x249248: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x24924Cu;
        goto label_24924c;
    }
    ctx->pc = 0x249244u;
    {
        const bool branch_taken_0x249244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x249248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249244u;
            // 0x249248: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249244) {
            ctx->pc = 0x2493CCu;
            goto label_2493cc;
        }
    }
    ctx->pc = 0x24924Cu;
label_24924c:
    // 0x24924c: 0xc08cb08  jal         func_232C20
label_249250:
    if (ctx->pc == 0x249250u) {
        ctx->pc = 0x249254u;
        goto label_249254;
    }
    ctx->pc = 0x24924Cu;
    SET_GPR_U32(ctx, 31, 0x249254u);
    ctx->pc = 0x232C20u;
    if (runtime->hasFunction(0x232C20u)) {
        auto targetFn = runtime->lookupFunction(0x232C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249254u; }
        if (ctx->pc != 0x249254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuEtcFlag__Fi_0x232c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249254u; }
        if (ctx->pc != 0x249254u) { return; }
    }
    ctx->pc = 0x249254u;
label_249254:
    // 0x249254: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x249254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_249258:
    // 0x249258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x249258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24925c:
    // 0x24925c: 0x8c23d904  lw          $v1, -0x26FC($at)
    ctx->pc = 0x24925cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957316)));
label_249260:
    // 0x249260: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x249260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_249264:
    // 0x249264: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x249264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249268:
    // 0x249268: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x249268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24926c:
    // 0x24926c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x24926cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_249270:
    // 0x249270: 0x8c22d900  lw          $v0, -0x2700($at)
    ctx->pc = 0x249270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957312)));
label_249274:
    // 0x249274: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x249274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_249278:
    // 0x249278: 0xc0664fc  jal         func_1993F0
label_24927c:
    if (ctx->pc == 0x24927Cu) {
        ctx->pc = 0x24927Cu;
            // 0x24927c: 0xaf829580  sw          $v0, -0x6A80($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940032), GPR_U32(ctx, 2));
        ctx->pc = 0x249280u;
        goto label_249280;
    }
    ctx->pc = 0x249278u;
    SET_GPR_U32(ctx, 31, 0x249280u);
    ctx->pc = 0x24927Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249278u;
            // 0x24927c: 0xaf829580  sw          $v0, -0x6A80($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940032), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1993F0u;
    if (runtime->hasFunction(0x1993F0u)) {
        auto targetFn = runtime->lookupFunction(0x1993F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249280u; }
        if (ctx->pc != 0x249280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainCharaModelName__FiPci_0x1993f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249280u; }
        if (ctx->pc != 0x249280u) { return; }
    }
    ctx->pc = 0x249280u;
label_249280:
    // 0x249280: 0x8f829580  lw          $v0, -0x6A80($gp)
    ctx->pc = 0x249280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940032)));
label_249284:
    // 0x249284: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x249284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_249288:
    // 0x249288: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x249288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24928c:
    // 0x24928c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x24928cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_249290:
    // 0x249290: 0x24a5b870  addiu       $a1, $a1, -0x4790
    ctx->pc = 0x249290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948976));
label_249294:
    // 0x249294: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x249294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_249298:
    // 0x249298: 0xc04a234  jal         func_1288D0
label_24929c:
    if (ctx->pc == 0x24929Cu) {
        ctx->pc = 0x24929Cu;
            // 0x24929c: 0xac22d910  sw          $v0, -0x26F0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294957328), GPR_U32(ctx, 2));
        ctx->pc = 0x2492A0u;
        goto label_2492a0;
    }
    ctx->pc = 0x249298u;
    SET_GPR_U32(ctx, 31, 0x2492A0u);
    ctx->pc = 0x24929Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249298u;
            // 0x24929c: 0xac22d910  sw          $v0, -0x26F0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294957328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2492A0u; }
        if (ctx->pc != 0x2492A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2492A0u; }
        if (ctx->pc != 0x2492A0u) { return; }
    }
    ctx->pc = 0x2492A0u;
label_2492a0:
    // 0x2492a0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2492a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2492a4:
    // 0x2492a4: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2492a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2492a8:
    // 0x2492a8: 0x8c25d910  lw          $a1, -0x26F0($at)
    ctx->pc = 0x2492a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957328)));
label_2492ac:
    // 0x2492ac: 0xc05224c  jal         func_148930
label_2492b0:
    if (ctx->pc == 0x2492B0u) {
        ctx->pc = 0x2492B0u;
            // 0x2492b0: 0x27a60208  addiu       $a2, $sp, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
        ctx->pc = 0x2492B4u;
        goto label_2492b4;
    }
    ctx->pc = 0x2492ACu;
    SET_GPR_U32(ctx, 31, 0x2492B4u);
    ctx->pc = 0x2492B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2492ACu;
            // 0x2492b0: 0x27a60208  addiu       $a2, $sp, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2492B4u; }
        if (ctx->pc != 0x2492B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2492B4u; }
        if (ctx->pc != 0x2492B4u) { return; }
    }
    ctx->pc = 0x2492B4u;
label_2492b4:
    // 0x2492b4: 0x8fa30208  lw          $v1, 0x208($sp)
    ctx->pc = 0x2492b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_2492b8:
    // 0x2492b8: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2492b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_2492bc:
    // 0x2492bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2492c0:
    if (ctx->pc == 0x2492C0u) {
        ctx->pc = 0x2492C0u;
            // 0x2492c0: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x2492C4u;
        goto label_2492c4;
    }
    ctx->pc = 0x2492BCu;
    {
        const bool branch_taken_0x2492bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2492C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2492BCu;
            // 0x2492c0: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2492bc) {
            ctx->pc = 0x2492CCu;
            goto label_2492cc;
        }
    }
    ctx->pc = 0x2492C4u;
label_2492c4:
    // 0x2492c4: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2492c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_2492c8:
    // 0x2492c8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2492c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2492cc:
    // 0x2492cc: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2492ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_2492d0:
    // 0x2492d0: 0xc04e748  jal         func_139D20
label_2492d4:
    if (ctx->pc == 0x2492D4u) {
        ctx->pc = 0x2492D4u;
            // 0x2492d4: 0x2484d8e0  addiu       $a0, $a0, -0x2720 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957280));
        ctx->pc = 0x2492D8u;
        goto label_2492d8;
    }
    ctx->pc = 0x2492D0u;
    SET_GPR_U32(ctx, 31, 0x2492D8u);
    ctx->pc = 0x2492D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2492D0u;
            // 0x2492d4: 0x2484d8e0  addiu       $a0, $a0, -0x2720 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2492D8u; }
        if (ctx->pc != 0x2492D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2492D8u; }
        if (ctx->pc != 0x2492D8u) { return; }
    }
    ctx->pc = 0x2492D8u;
label_2492d8:
    // 0x2492d8: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2492d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_2492dc:
    // 0x2492dc: 0xc04e780  jal         func_139E00
label_2492e0:
    if (ctx->pc == 0x2492E0u) {
        ctx->pc = 0x2492E0u;
            // 0x2492e0: 0x2484d8e0  addiu       $a0, $a0, -0x2720 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957280));
        ctx->pc = 0x2492E4u;
        goto label_2492e4;
    }
    ctx->pc = 0x2492DCu;
    SET_GPR_U32(ctx, 31, 0x2492E4u);
    ctx->pc = 0x2492E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2492DCu;
            // 0x2492e0: 0x2484d8e0  addiu       $a0, $a0, -0x2720 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2492E4u; }
        if (ctx->pc != 0x2492E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2492E4u; }
        if (ctx->pc != 0x2492E4u) { return; }
    }
    ctx->pc = 0x2492E4u;
label_2492e4:
    // 0x2492e4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2492e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2492e8:
    // 0x2492e8: 0x8c23d904  lw          $v1, -0x26FC($at)
    ctx->pc = 0x2492e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957316)));
label_2492ec:
    // 0x2492ec: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2492ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2492f0:
    // 0x2492f0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2492f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2492f4:
    // 0x2492f4: 0x8c22d900  lw          $v0, -0x2700($at)
    ctx->pc = 0x2492f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957312)));
label_2492f8:
    // 0x2492f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2492f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2492fc:
    // 0x2492fc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2492fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_249300:
    // 0x249300: 0xac22d914  sw          $v0, -0x26EC($at)
    ctx->pc = 0x249300u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957332), GPR_U32(ctx, 2));
label_249304:
    // 0x249304: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x249304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_249308:
    // 0x249308: 0xc065c48  jal         func_197120
label_24930c:
    if (ctx->pc == 0x24930Cu) {
        ctx->pc = 0x24930Cu;
            // 0x24930c: 0x24440320  addiu       $a0, $v0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
        ctx->pc = 0x249310u;
        goto label_249310;
    }
    ctx->pc = 0x249308u;
    SET_GPR_U32(ctx, 31, 0x249310u);
    ctx->pc = 0x24930Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249308u;
            // 0x24930c: 0x24440320  addiu       $a0, $v0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197120u;
    if (runtime->hasFunction(0x197120u)) {
        auto targetFn = runtime->lookupFunction(0x197120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249310u; }
        if (ctx->pc != 0x249310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDataPath__13CGameDataUsedFv_0x197120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249310u; }
        if (ctx->pc != 0x249310u) { return; }
    }
    ctx->pc = 0x249310u;
label_249310:
    // 0x249310: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_249314:
    if (ctx->pc == 0x249314u) {
        ctx->pc = 0x249318u;
        goto label_249318;
    }
    ctx->pc = 0x249310u;
    {
        const bool branch_taken_0x249310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249310) {
            ctx->pc = 0x249350u;
            goto label_249350;
        }
    }
    ctx->pc = 0x249318u;
label_249318:
    // 0x249318: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x249318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24931c:
    // 0x24931c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24931cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_249320:
    // 0x249320: 0x8c25d914  lw          $a1, -0x26EC($at)
    ctx->pc = 0x249320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957332)));
label_249324:
    // 0x249324: 0xc05224c  jal         func_148930
label_249328:
    if (ctx->pc == 0x249328u) {
        ctx->pc = 0x249328u;
            // 0x249328: 0x27a60208  addiu       $a2, $sp, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
        ctx->pc = 0x24932Cu;
        goto label_24932c;
    }
    ctx->pc = 0x249324u;
    SET_GPR_U32(ctx, 31, 0x24932Cu);
    ctx->pc = 0x249328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249324u;
            // 0x249328: 0x27a60208  addiu       $a2, $sp, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24932Cu; }
        if (ctx->pc != 0x24932Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24932Cu; }
        if (ctx->pc != 0x24932Cu) { return; }
    }
    ctx->pc = 0x24932Cu;
label_24932c:
    // 0x24932c: 0x8fa30208  lw          $v1, 0x208($sp)
    ctx->pc = 0x24932cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_249330:
    // 0x249330: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x249330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_249334:
    // 0x249334: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_249338:
    if (ctx->pc == 0x249338u) {
        ctx->pc = 0x249338u;
            // 0x249338: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x24933Cu;
        goto label_24933c;
    }
    ctx->pc = 0x249334u;
    {
        const bool branch_taken_0x249334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249334u;
            // 0x249338: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249334) {
            ctx->pc = 0x249344u;
            goto label_249344;
        }
    }
    ctx->pc = 0x24933Cu;
label_24933c:
    // 0x24933c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x24933cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_249340:
    // 0x249340: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x249340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_249344:
    // 0x249344: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x249344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_249348:
    // 0x249348: 0xc04e748  jal         func_139D20
label_24934c:
    if (ctx->pc == 0x24934Cu) {
        ctx->pc = 0x24934Cu;
            // 0x24934c: 0x2484d8e0  addiu       $a0, $a0, -0x2720 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957280));
        ctx->pc = 0x249350u;
        goto label_249350;
    }
    ctx->pc = 0x249348u;
    SET_GPR_U32(ctx, 31, 0x249350u);
    ctx->pc = 0x24934Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249348u;
            // 0x24934c: 0x2484d8e0  addiu       $a0, $a0, -0x2720 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249350u; }
        if (ctx->pc != 0x249350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249350u; }
        if (ctx->pc != 0x249350u) { return; }
    }
    ctx->pc = 0x249350u;
label_249350:
    // 0x249350: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x249350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_249354:
    // 0x249354: 0xc04e780  jal         func_139E00
label_249358:
    if (ctx->pc == 0x249358u) {
        ctx->pc = 0x249358u;
            // 0x249358: 0x2484d8e0  addiu       $a0, $a0, -0x2720 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957280));
        ctx->pc = 0x24935Cu;
        goto label_24935c;
    }
    ctx->pc = 0x249354u;
    SET_GPR_U32(ctx, 31, 0x24935Cu);
    ctx->pc = 0x249358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249354u;
            // 0x249358: 0x2484d8e0  addiu       $a0, $a0, -0x2720 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24935Cu; }
        if (ctx->pc != 0x24935Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24935Cu; }
        if (ctx->pc != 0x24935Cu) { return; }
    }
    ctx->pc = 0x24935Cu;
label_24935c:
    // 0x24935c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24935cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_249360:
    // 0x249360: 0x8c23d904  lw          $v1, -0x26FC($at)
    ctx->pc = 0x249360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957316)));
label_249364:
    // 0x249364: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x249364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_249368:
    // 0x249368: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x249368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_24936c:
    // 0x24936c: 0x8c22d900  lw          $v0, -0x2700($at)
    ctx->pc = 0x24936cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957312)));
label_249370:
    // 0x249370: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x249370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_249374:
    // 0x249374: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x249374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_249378:
    // 0x249378: 0xac22d918  sw          $v0, -0x26E8($at)
    ctx->pc = 0x249378u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957336), GPR_U32(ctx, 2));
label_24937c:
    // 0x24937c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x24937cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_249380:
    // 0x249380: 0xc065c48  jal         func_197120
label_249384:
    if (ctx->pc == 0x249384u) {
        ctx->pc = 0x249384u;
            // 0x249384: 0x244402b4  addiu       $a0, $v0, 0x2B4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 692));
        ctx->pc = 0x249388u;
        goto label_249388;
    }
    ctx->pc = 0x249380u;
    SET_GPR_U32(ctx, 31, 0x249388u);
    ctx->pc = 0x249384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249380u;
            // 0x249384: 0x244402b4  addiu       $a0, $v0, 0x2B4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 692));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197120u;
    if (runtime->hasFunction(0x197120u)) {
        auto targetFn = runtime->lookupFunction(0x197120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249388u; }
        if (ctx->pc != 0x249388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDataPath__13CGameDataUsedFv_0x197120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249388u; }
        if (ctx->pc != 0x249388u) { return; }
    }
    ctx->pc = 0x249388u;
label_249388:
    // 0x249388: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_24938c:
    if (ctx->pc == 0x24938Cu) {
        ctx->pc = 0x24938Cu;
            // 0x24938c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x249390u;
        goto label_249390;
    }
    ctx->pc = 0x249388u;
    {
        const bool branch_taken_0x249388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24938Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249388u;
            // 0x24938c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249388) {
            ctx->pc = 0x2493C4u;
            goto label_2493c4;
        }
    }
    ctx->pc = 0x249390u;
label_249390:
    // 0x249390: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x249390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_249394:
    // 0x249394: 0x8c25d918  lw          $a1, -0x26E8($at)
    ctx->pc = 0x249394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957336)));
label_249398:
    // 0x249398: 0xc05224c  jal         func_148930
label_24939c:
    if (ctx->pc == 0x24939Cu) {
        ctx->pc = 0x24939Cu;
            // 0x24939c: 0x27a60208  addiu       $a2, $sp, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
        ctx->pc = 0x2493A0u;
        goto label_2493a0;
    }
    ctx->pc = 0x249398u;
    SET_GPR_U32(ctx, 31, 0x2493A0u);
    ctx->pc = 0x24939Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249398u;
            // 0x24939c: 0x27a60208  addiu       $a2, $sp, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2493A0u; }
        if (ctx->pc != 0x2493A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2493A0u; }
        if (ctx->pc != 0x2493A0u) { return; }
    }
    ctx->pc = 0x2493A0u;
label_2493a0:
    // 0x2493a0: 0x8fa30208  lw          $v1, 0x208($sp)
    ctx->pc = 0x2493a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_2493a4:
    // 0x2493a4: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2493a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_2493a8:
    // 0x2493a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2493ac:
    if (ctx->pc == 0x2493ACu) {
        ctx->pc = 0x2493ACu;
            // 0x2493ac: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x2493B0u;
        goto label_2493b0;
    }
    ctx->pc = 0x2493A8u;
    {
        const bool branch_taken_0x2493a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2493ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2493A8u;
            // 0x2493ac: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2493a8) {
            ctx->pc = 0x2493B8u;
            goto label_2493b8;
        }
    }
    ctx->pc = 0x2493B0u;
label_2493b0:
    // 0x2493b0: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2493b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_2493b4:
    // 0x2493b4: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2493b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2493b8:
    // 0x2493b8: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2493b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_2493bc:
    // 0x2493bc: 0xc04e748  jal         func_139D20
label_2493c0:
    if (ctx->pc == 0x2493C0u) {
        ctx->pc = 0x2493C0u;
            // 0x2493c0: 0x2484d8e0  addiu       $a0, $a0, -0x2720 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957280));
        ctx->pc = 0x2493C4u;
        goto label_2493c4;
    }
    ctx->pc = 0x2493BCu;
    SET_GPR_U32(ctx, 31, 0x2493C4u);
    ctx->pc = 0x2493C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2493BCu;
            // 0x2493c0: 0x2484d8e0  addiu       $a0, $a0, -0x2720 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2493C4u; }
        if (ctx->pc != 0x2493C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2493C4u; }
        if (ctx->pc != 0x2493C4u) { return; }
    }
    ctx->pc = 0x2493C4u;
label_2493c4:
    // 0x2493c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2493c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2493c8:
    // 0x2493c8: 0xa6020174  sh          $v0, 0x174($s0)
    ctx->pc = 0x2493c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 372), (uint16_t)GPR_U32(ctx, 2));
label_2493cc:
    // 0x2493cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2493ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2493d0:
    // 0x2493d0: 0xc08bd6c  jal         func_22F5B0
label_2493d4:
    if (ctx->pc == 0x2493D4u) {
        ctx->pc = 0x2493D4u;
            // 0x2493d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2493D8u;
        goto label_2493d8;
    }
    ctx->pc = 0x2493D0u;
    SET_GPR_U32(ctx, 31, 0x2493D8u);
    ctx->pc = 0x2493D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2493D0u;
            // 0x2493d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22F5B0u;
    if (runtime->hasFunction(0x22F5B0u)) {
        auto targetFn = runtime->lookupFunction(0x22F5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2493D8u; }
        if (ctx->pc != 0x2493D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitFishBoiledEffect__FPiP10mgCTexture_0x22f5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2493D8u; }
        if (ctx->pc != 0x2493D8u) { return; }
    }
    ctx->pc = 0x2493D8u;
label_2493d8:
    // 0x2493d8: 0xc08ffec  jal         func_23FFB0
label_2493dc:
    if (ctx->pc == 0x2493DCu) {
        ctx->pc = 0x2493DCu;
            // 0x2493dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2493E0u;
        goto label_2493e0;
    }
    ctx->pc = 0x2493D8u;
    SET_GPR_U32(ctx, 31, 0x2493E0u);
    ctx->pc = 0x2493DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2493D8u;
            // 0x2493dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23FFB0u;
    if (runtime->hasFunction(0x23FFB0u)) {
        auto targetFn = runtime->lookupFunction(0x23FFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2493E0u; }
        if (ctx->pc != 0x2493E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSoundLoad__13CMenuItemInfoFv_0x23ffb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2493E0u; }
        if (ctx->pc != 0x2493E0u) { return; }
    }
    ctx->pc = 0x2493E0u;
label_2493e0:
    // 0x2493e0: 0xc08ca8c  jal         func_232A30
label_2493e4:
    if (ctx->pc == 0x2493E4u) {
        ctx->pc = 0x2493E8u;
        goto label_2493e8;
    }
    ctx->pc = 0x2493E0u;
    SET_GPR_U32(ctx, 31, 0x2493E8u);
    ctx->pc = 0x232A30u;
    if (runtime->hasFunction(0x232A30u)) {
        auto targetFn = runtime->lookupFunction(0x232A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2493E8u; }
        if (ctx->pc != 0x2493E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTrushMenu__Fv_0x232a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2493E8u; }
        if (ctx->pc != 0x2493E8u) { return; }
    }
    ctx->pc = 0x2493E8u;
label_2493e8:
    // 0x2493e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2493ec:
    if (ctx->pc == 0x2493ECu) {
        ctx->pc = 0x2493ECu;
            // 0x2493ec: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2493F0u;
        goto label_2493f0;
    }
    ctx->pc = 0x2493E8u;
    {
        const bool branch_taken_0x2493e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2493ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2493E8u;
            // 0x2493ec: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2493e8) {
            ctx->pc = 0x249408u;
            goto label_249408;
        }
    }
    ctx->pc = 0x2493F0u;
label_2493f0:
    // 0x2493f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2493f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2493f4:
    // 0x2493f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2493f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2493f8:
    // 0x2493f8: 0xc08e898  jal         func_23A260
label_2493fc:
    if (ctx->pc == 0x2493FCu) {
        ctx->pc = 0x2493FCu;
            // 0x2493fc: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x249400u;
        goto label_249400;
    }
    ctx->pc = 0x2493F8u;
    SET_GPR_U32(ctx, 31, 0x249400u);
    ctx->pc = 0x2493FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2493F8u;
            // 0x2493fc: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249400u; }
        if (ctx->pc != 0x249400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249400u; }
        if (ctx->pc != 0x249400u) { return; }
    }
    ctx->pc = 0x249400u;
label_249400:
    // 0x249400: 0x10000287  b           . + 4 + (0x287 << 2)
label_249404:
    if (ctx->pc == 0x249404u) {
        ctx->pc = 0x249408u;
        goto label_249408;
    }
    ctx->pc = 0x249400u;
    {
        const bool branch_taken_0x249400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249400) {
            ctx->pc = 0x249E20u;
            goto label_249e20;
        }
    }
    ctx->pc = 0x249408u;
label_249408:
    // 0x249408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24940c:
    // 0x24940c: 0xc08e7cc  jal         func_239F30
label_249410:
    if (ctx->pc == 0x249410u) {
        ctx->pc = 0x249410u;
            // 0x249410: 0x24a5b880  addiu       $a1, $a1, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948992));
        ctx->pc = 0x249414u;
        goto label_249414;
    }
    ctx->pc = 0x24940Cu;
    SET_GPR_U32(ctx, 31, 0x249414u);
    ctx->pc = 0x249410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24940Cu;
            // 0x249410: 0x24a5b880  addiu       $a1, $a1, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249414u; }
        if (ctx->pc != 0x249414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249414u; }
        if (ctx->pc != 0x249414u) { return; }
    }
    ctx->pc = 0x249414u;
label_249414:
    // 0x249414: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x249414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_249418:
    // 0x249418: 0xc08900c  jal         func_224030
label_24941c:
    if (ctx->pc == 0x24941Cu) {
        ctx->pc = 0x24941Cu;
            // 0x24941c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x249420u;
        goto label_249420;
    }
    ctx->pc = 0x249418u;
    SET_GPR_U32(ctx, 31, 0x249420u);
    ctx->pc = 0x24941Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249418u;
            // 0x24941c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224030u;
    if (runtime->hasFunction(0x224030u)) {
        auto targetFn = runtime->lookupFunction(0x224030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249420u; }
        if (ctx->pc != 0x249420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainFrameModeSet__Fii_0x224030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249420u; }
        if (ctx->pc != 0x249420u) { return; }
    }
    ctx->pc = 0x249420u;
label_249420:
    // 0x249420: 0xc08d220  jal         func_234880
label_249424:
    if (ctx->pc == 0x249424u) {
        ctx->pc = 0x249424u;
            // 0x249424: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x249428u;
        goto label_249428;
    }
    ctx->pc = 0x249420u;
    SET_GPR_U32(ctx, 31, 0x249428u);
    ctx->pc = 0x249424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249420u;
            // 0x249424: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234880u;
    if (runtime->hasFunction(0x234880u)) {
        auto targetFn = runtime->lookupFunction(0x234880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249428u; }
        if (ctx->pc != 0x249428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnMenuIntern__Fi_0x234880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249428u; }
        if (ctx->pc != 0x249428u) { return; }
    }
    ctx->pc = 0x249428u;
label_249428:
    // 0x249428: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x249428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_24942c:
    // 0x24942c: 0x8c24caa0  lw          $a0, -0x3560($at)
    ctx->pc = 0x24942cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953632)));
label_249430:
    // 0x249430: 0x1080027b  beqz        $a0, . + 4 + (0x27B << 2)
label_249434:
    if (ctx->pc == 0x249434u) {
        ctx->pc = 0x249438u;
        goto label_249438;
    }
    ctx->pc = 0x249430u;
    {
        const bool branch_taken_0x249430 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x249430) {
            ctx->pc = 0x249E20u;
            goto label_249e20;
        }
    }
    ctx->pc = 0x249438u;
label_249438:
    // 0x249438: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x249438u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24943c:
    // 0x24943c: 0x8f3900c4  lw          $t9, 0xC4($t9)
    ctx->pc = 0x24943cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 196)));
label_249440:
    // 0x249440: 0x320f809  jalr        $t9
label_249444:
    if (ctx->pc == 0x249444u) {
        ctx->pc = 0x249444u;
            // 0x249444: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x249448u;
        goto label_249448;
    }
    ctx->pc = 0x249440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x249448u);
        ctx->pc = 0x249444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249440u;
            // 0x249444: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x249448u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x249448u; }
            if (ctx->pc != 0x249448u) { return; }
        }
        }
    }
    ctx->pc = 0x249448u;
label_249448:
    // 0x249448: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x249448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_24944c:
    // 0x24944c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24944cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249450:
    // 0x249450: 0x8c24caa0  lw          $a0, -0x3560($at)
    ctx->pc = 0x249450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953632)));
label_249454:
    // 0x249454: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x249454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_249458:
    // 0x249458: 0x8f3900f8  lw          $t9, 0xF8($t9)
    ctx->pc = 0x249458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 248)));
label_24945c:
    // 0x24945c: 0x320f809  jalr        $t9
label_249460:
    if (ctx->pc == 0x249460u) {
        ctx->pc = 0x249460u;
            // 0x249460: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x249464u;
        goto label_249464;
    }
    ctx->pc = 0x24945Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x249464u);
        ctx->pc = 0x249460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24945Cu;
            // 0x249460: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x249464u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x249464u; }
            if (ctx->pc != 0x249464u) { return; }
        }
        }
    }
    ctx->pc = 0x249464u;
label_249464:
    // 0x249464: 0x1000026e  b           . + 4 + (0x26E << 2)
label_249468:
    if (ctx->pc == 0x249468u) {
        ctx->pc = 0x24946Cu;
        goto label_24946c;
    }
    ctx->pc = 0x249464u;
    {
        const bool branch_taken_0x249464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249464) {
            ctx->pc = 0x249E20u;
            goto label_249e20;
        }
    }
    ctx->pc = 0x24946Cu;
label_24946c:
    // 0x24946c: 0x1260026c  beqz        $s3, . + 4 + (0x26C << 2)
label_249470:
    if (ctx->pc == 0x249470u) {
        ctx->pc = 0x249474u;
        goto label_249474;
    }
    ctx->pc = 0x24946Cu;
    {
        const bool branch_taken_0x24946c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x24946c) {
            ctx->pc = 0x249E20u;
            goto label_249e20;
        }
    }
    ctx->pc = 0x249474u;
label_249474:
    // 0x249474: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x249474u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
label_249478:
    // 0x249478: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x249478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24947c:
    // 0x24947c: 0x8c22cb4c  lw          $v0, -0x34B4($at)
    ctx->pc = 0x24947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953804)));
label_249480:
    // 0x249480: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x249480u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_249484:
    // 0x249484: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x249484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_249488:
    // 0x249488: 0x8c430138  lw          $v1, 0x138($v0)
    ctx->pc = 0x249488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_24948c:
    // 0x24948c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_249490:
    if (ctx->pc == 0x249490u) {
        ctx->pc = 0x249490u;
            // 0x249490: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x249494u;
        goto label_249494;
    }
    ctx->pc = 0x24948Cu;
    {
        const bool branch_taken_0x24948c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24948Cu;
            // 0x249490: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24948c) {
            ctx->pc = 0x24949Cu;
            goto label_24949c;
        }
    }
    ctx->pc = 0x249494u;
label_249494:
    // 0x249494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249498:
    // 0x249498: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x249498u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_24949c:
    // 0x24949c: 0xc094274  jal         func_2509D0
label_2494a0:
    if (ctx->pc == 0x2494A0u) {
        ctx->pc = 0x2494A4u;
        goto label_2494a4;
    }
    ctx->pc = 0x24949Cu;
    SET_GPR_U32(ctx, 31, 0x2494A4u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2494A4u; }
        if (ctx->pc != 0x2494A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2494A4u; }
        if (ctx->pc != 0x2494A4u) { return; }
    }
    ctx->pc = 0x2494A4u;
label_2494a4:
    // 0x2494a4: 0x1000025e  b           . + 4 + (0x25E << 2)
label_2494a8:
    if (ctx->pc == 0x2494A8u) {
        ctx->pc = 0x2494ACu;
        goto label_2494ac;
    }
    ctx->pc = 0x2494A4u;
    {
        const bool branch_taken_0x2494a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2494a4) {
            ctx->pc = 0x249E20u;
            goto label_249e20;
        }
    }
    ctx->pc = 0x2494ACu;
label_2494ac:
    // 0x2494ac: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x2494acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2494b0:
    // 0x2494b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2494b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2494b4:
    // 0x2494b4: 0x106200ad  beq         $v1, $v0, . + 4 + (0xAD << 2)
label_2494b8:
    if (ctx->pc == 0x2494B8u) {
        ctx->pc = 0x2494B8u;
            // 0x2494b8: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x2494BCu;
        goto label_2494bc;
    }
    ctx->pc = 0x2494B4u;
    {
        const bool branch_taken_0x2494b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2494B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2494B4u;
            // 0x2494b8: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2494b4) {
            ctx->pc = 0x24976Cu;
            goto label_24976c;
        }
    }
    ctx->pc = 0x2494BCu;
label_2494bc:
    // 0x2494bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2494bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2494c0:
    // 0x2494c0: 0x10620090  beq         $v1, $v0, . + 4 + (0x90 << 2)
label_2494c4:
    if (ctx->pc == 0x2494C4u) {
        ctx->pc = 0x2494C4u;
            // 0x2494c4: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x2494C8u;
        goto label_2494c8;
    }
    ctx->pc = 0x2494C0u;
    {
        const bool branch_taken_0x2494c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2494C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2494C0u;
            // 0x2494c4: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2494c0) {
            ctx->pc = 0x249704u;
            goto label_249704;
        }
    }
    ctx->pc = 0x2494C8u;
label_2494c8:
    // 0x2494c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2494cc:
    if (ctx->pc == 0x2494CCu) {
        ctx->pc = 0x2494D0u;
        goto label_2494d0;
    }
    ctx->pc = 0x2494C8u;
    {
        const bool branch_taken_0x2494c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2494c8) {
            ctx->pc = 0x2494D8u;
            goto label_2494d8;
        }
    }
    ctx->pc = 0x2494D0u;
label_2494d0:
    // 0x2494d0: 0x10000253  b           . + 4 + (0x253 << 2)
label_2494d4:
    if (ctx->pc == 0x2494D4u) {
        ctx->pc = 0x2494D8u;
        goto label_2494d8;
    }
    ctx->pc = 0x2494D0u;
    {
        const bool branch_taken_0x2494d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2494d0) {
            ctx->pc = 0x249E20u;
            goto label_249e20;
        }
    }
    ctx->pc = 0x2494D8u;
label_2494d8:
    // 0x2494d8: 0x8ce40070  lw          $a0, 0x70($a3)
    ctx->pc = 0x2494d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 112)));
label_2494dc:
    // 0x2494dc: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x2494dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_2494e0:
    // 0x2494e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2494e4:
    if (ctx->pc == 0x2494E4u) {
        ctx->pc = 0x2494E4u;
            // 0x2494e4: 0x24e30070  addiu       $v1, $a3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
        ctx->pc = 0x2494E8u;
        goto label_2494e8;
    }
    ctx->pc = 0x2494E0u;
    {
        const bool branch_taken_0x2494e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2494E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2494E0u;
            // 0x2494e4: 0x24e30070  addiu       $v1, $a3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2494e0) {
            ctx->pc = 0x2494F0u;
            goto label_2494f0;
        }
    }
    ctx->pc = 0x2494E8u;
label_2494e8:
    // 0x2494e8: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x2494e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2494ec:
    // 0x2494ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2494ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2494f0:
    // 0x2494f0: 0x33c20002  andi        $v0, $fp, 0x2
    ctx->pc = 0x2494f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)2);
label_2494f4:
    // 0x2494f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2494f8:
    if (ctx->pc == 0x2494F8u) {
        ctx->pc = 0x2494FCu;
        goto label_2494fc;
    }
    ctx->pc = 0x2494F4u;
    {
        const bool branch_taken_0x2494f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2494f4) {
            ctx->pc = 0x24950Cu;
            goto label_24950c;
        }
    }
    ctx->pc = 0x2494FCu;
label_2494fc:
    // 0x2494fc: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x2494fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_249500:
    // 0x249500: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x249500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_249504:
    // 0x249504: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x249504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_249508:
    // 0x249508: 0xac620070  sw          $v0, 0x70($v1)
    ctx->pc = 0x249508u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 2));
label_24950c:
    // 0x24950c: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x24950cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_249510:
    // 0x249510: 0x24430070  addiu       $v1, $v0, 0x70
    ctx->pc = 0x249510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_249514:
    // 0x249514: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x249514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_249518:
    // 0x249518: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_24951c:
    if (ctx->pc == 0x24951Cu) {
        ctx->pc = 0x249520u;
        goto label_249520;
    }
    ctx->pc = 0x249518u;
    {
        const bool branch_taken_0x249518 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x249518) {
            ctx->pc = 0x249524u;
            goto label_249524;
        }
    }
    ctx->pc = 0x249520u;
label_249520:
    // 0x249520: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x249520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_249524:
    // 0x249524: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x249524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_249528:
    // 0x249528: 0x24430070  addiu       $v1, $v0, 0x70
    ctx->pc = 0x249528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_24952c:
    // 0x24952c: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x24952cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_249530:
    // 0x249530: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x249530u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_249534:
    // 0x249534: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_249538:
    if (ctx->pc == 0x249538u) {
        ctx->pc = 0x249538u;
            // 0x249538: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x24953Cu;
        goto label_24953c;
    }
    ctx->pc = 0x249534u;
    {
        const bool branch_taken_0x249534 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x249538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249534u;
            // 0x249538: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249534) {
            ctx->pc = 0x249540u;
            goto label_249540;
        }
    }
    ctx->pc = 0x24953Cu;
label_24953c:
    // 0x24953c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x24953cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_249540:
    // 0x249540: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x249540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_249544:
    // 0x249544: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x249544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_249548:
    // 0x249548: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_24954c:
    if (ctx->pc == 0x24954Cu) {
        ctx->pc = 0x24954Cu;
            // 0x24954c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x249550u;
        goto label_249550;
    }
    ctx->pc = 0x249548u;
    {
        const bool branch_taken_0x249548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24954Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249548u;
            // 0x24954c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249548) {
            ctx->pc = 0x249558u;
            goto label_249558;
        }
    }
    ctx->pc = 0x249550u;
label_249550:
    // 0x249550: 0xc094274  jal         func_2509D0
label_249554:
    if (ctx->pc == 0x249554u) {
        ctx->pc = 0x249558u;
        goto label_249558;
    }
    ctx->pc = 0x249550u;
    SET_GPR_U32(ctx, 31, 0x249558u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249558u; }
        if (ctx->pc != 0x249558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249558u; }
        if (ctx->pc != 0x249558u) { return; }
    }
    ctx->pc = 0x249558u;
label_249558:
    // 0x249558: 0x8e04017c  lw          $a0, 0x17C($s0)
    ctx->pc = 0x249558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_24955c:
    // 0x24955c: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x24955cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_249560:
    // 0x249560: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x249560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_249564:
    // 0x249564: 0x3c1101ed  lui         $s1, 0x1ED
    ctx->pc = 0x249564u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)493 << 16));
label_249568:
    // 0x249568: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x249568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_24956c:
    // 0x24956c: 0x2631dc80  addiu       $s1, $s1, -0x2380
    ctx->pc = 0x24956cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958208));
label_249570:
    // 0x249570: 0x24920010  addiu       $s2, $a0, 0x10
    ctx->pc = 0x249570u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_249574:
    // 0x249574: 0x8484003c  lh          $a0, 0x3C($a0)
    ctx->pc = 0x249574u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
label_249578:
    // 0x249578: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x249578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_24957c:
    // 0x24957c: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x24957cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_249580:
    // 0x249580: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x249580u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_249584:
    // 0x249584: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x249584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_249588:
    // 0x249588: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x249588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_24958c:
    // 0x24958c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24958cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_249590:
    // 0x249590: 0x24660016  addiu       $a2, $v1, 0x16
    ctx->pc = 0x249590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
label_249594:
    // 0x249594: 0x84420016  lh          $v0, 0x16($v0)
    ctx->pc = 0x249594u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
label_249598:
    // 0x249598: 0x2010  mfhi        $a0
    ctx->pc = 0x249598u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_24959c:
    // 0x24959c: 0x84630016  lh          $v1, 0x16($v1)
    ctx->pc = 0x24959cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
label_2495a0:
    // 0x2495a0: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x2495a0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
label_2495a4:
    // 0x2495a4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2495a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2495a8:
    // 0x2495a8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2495a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2495ac:
    // 0x2495ac: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_2495b0:
    if (ctx->pc == 0x2495B0u) {
        ctx->pc = 0x2495B0u;
            // 0x2495b0: 0x85a021  addu        $s4, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->pc = 0x2495B4u;
        goto label_2495b4;
    }
    ctx->pc = 0x2495ACu;
    {
        const bool branch_taken_0x2495ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2495B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2495ACu;
            // 0x2495b0: 0x85a021  addu        $s4, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2495ac) {
            ctx->pc = 0x2495E4u;
            goto label_2495e4;
        }
    }
    ctx->pc = 0x2495B4u;
label_2495b4:
    // 0x2495b4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2495b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2495b8:
    // 0x2495b8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_2495bc:
    if (ctx->pc == 0x2495BCu) {
        ctx->pc = 0x2495BCu;
            // 0x2495bc: 0x14082a  slt         $at, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->pc = 0x2495C0u;
        goto label_2495c0;
    }
    ctx->pc = 0x2495B8u;
    {
        const bool branch_taken_0x2495b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2495BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2495B8u;
            // 0x2495bc: 0x14082a  slt         $at, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2495b8) {
            ctx->pc = 0x2495E8u;
            goto label_2495e8;
        }
    }
    ctx->pc = 0x2495C0u;
label_2495c0:
    // 0x2495c0: 0x33c20004  andi        $v0, $fp, 0x4
    ctx->pc = 0x2495c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4);
label_2495c4:
    // 0x2495c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2495c8:
    if (ctx->pc == 0x2495C8u) {
        ctx->pc = 0x2495C8u;
            // 0x2495c8: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->pc = 0x2495CCu;
        goto label_2495cc;
    }
    ctx->pc = 0x2495C4u;
    {
        const bool branch_taken_0x2495c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2495C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2495C4u;
            // 0x2495c8: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2495c4) {
            ctx->pc = 0x2495E4u;
            goto label_2495e4;
        }
    }
    ctx->pc = 0x2495CCu;
label_2495cc:
    // 0x2495cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2495ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2495d0:
    // 0x2495d0: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x2495d0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_2495d4:
    // 0x2495d4: 0x8642002c  lh          $v0, 0x2C($s2)
    ctx->pc = 0x2495d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
label_2495d8:
    // 0x2495d8: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x2495d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_2495dc:
    // 0x2495dc: 0xc094274  jal         func_2509D0
label_2495e0:
    if (ctx->pc == 0x2495E0u) {
        ctx->pc = 0x2495E0u;
            // 0x2495e0: 0xa642002c  sh          $v0, 0x2C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 44), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2495E4u;
        goto label_2495e4;
    }
    ctx->pc = 0x2495DCu;
    SET_GPR_U32(ctx, 31, 0x2495E4u);
    ctx->pc = 0x2495E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2495DCu;
            // 0x2495e0: 0xa642002c  sh          $v0, 0x2C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 44), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2495E4u; }
        if (ctx->pc != 0x2495E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2495E4u; }
        if (ctx->pc != 0x2495E4u) { return; }
    }
    ctx->pc = 0x2495E4u;
label_2495e4:
    // 0x2495e4: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x2495e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_2495e8:
    // 0x2495e8: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
label_2495ec:
    if (ctx->pc == 0x2495ECu) {
        ctx->pc = 0x2495ECu;
            // 0x2495ec: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x2495F0u;
        goto label_2495f0;
    }
    ctx->pc = 0x2495E8u;
    {
        const bool branch_taken_0x2495e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2495ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2495E8u;
            // 0x2495ec: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2495e8) {
            ctx->pc = 0x24965Cu;
            goto label_24965c;
        }
    }
    ctx->pc = 0x2495F0u;
label_2495f0:
    // 0x2495f0: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2495f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2495f4:
    // 0x2495f4: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x2495f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_2495f8:
    // 0x2495f8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2495f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2495fc:
    // 0x2495fc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2495fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_249600:
    // 0x249600: 0x84420016  lh          $v0, 0x16($v0)
    ctx->pc = 0x249600u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
label_249604:
    // 0x249604: 0x28410064  slti        $at, $v0, 0x64
    ctx->pc = 0x249604u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
label_249608:
    // 0x249608: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_24960c:
    if (ctx->pc == 0x24960Cu) {
        ctx->pc = 0x24960Cu;
            // 0x24960c: 0x33c20008  andi        $v0, $fp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x249610u;
        goto label_249610;
    }
    ctx->pc = 0x249608u;
    {
        const bool branch_taken_0x249608 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24960Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249608u;
            // 0x24960c: 0x33c20008  andi        $v0, $fp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x249608) {
            ctx->pc = 0x249658u;
            goto label_249658;
        }
    }
    ctx->pc = 0x249610u;
label_249610:
    // 0x249610: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_249614:
    if (ctx->pc == 0x249614u) {
        ctx->pc = 0x249618u;
        goto label_249618;
    }
    ctx->pc = 0x249610u;
    {
        const bool branch_taken_0x249610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249610) {
            ctx->pc = 0x249658u;
            goto label_249658;
        }
    }
    ctx->pc = 0x249618u;
label_249618:
    // 0x249618: 0x8642002c  lh          $v0, 0x2C($s2)
    ctx->pc = 0x249618u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
label_24961c:
    // 0x24961c: 0x2442ff9c  addiu       $v0, $v0, -0x64
    ctx->pc = 0x24961cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_249620:
    // 0x249620: 0xa642002c  sh          $v0, 0x2C($s2)
    ctx->pc = 0x249620u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 44), (uint16_t)GPR_U32(ctx, 2));
label_249624:
    // 0x249624: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x249624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_249628:
    // 0x249628: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x249628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_24962c:
    // 0x24962c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x24962cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_249630:
    // 0x249630: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x249630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_249634:
    // 0x249634: 0x84620016  lh          $v0, 0x16($v1)
    ctx->pc = 0x249634u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
label_249638:
    // 0x249638: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x249638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_24963c:
    // 0x24963c: 0xa4620016  sh          $v0, 0x16($v1)
    ctx->pc = 0x24963cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22), (uint16_t)GPR_U32(ctx, 2));
label_249640:
    // 0x249640: 0x8642002c  lh          $v0, 0x2C($s2)
    ctx->pc = 0x249640u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
label_249644:
    // 0x249644: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_249648:
    if (ctx->pc == 0x249648u) {
        ctx->pc = 0x249648u;
            // 0x249648: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24964Cu;
        goto label_24964c;
    }
    ctx->pc = 0x249644u;
    {
        const bool branch_taken_0x249644 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x249648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249644u;
            // 0x249648: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249644) {
            ctx->pc = 0x249650u;
            goto label_249650;
        }
    }
    ctx->pc = 0x24964Cu;
label_24964c:
    // 0x24964c: 0xa640002c  sh          $zero, 0x2C($s2)
    ctx->pc = 0x24964cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 44), (uint16_t)GPR_U32(ctx, 0));
label_249650:
    // 0x249650: 0xc094274  jal         func_2509D0
label_249654:
    if (ctx->pc == 0x249654u) {
        ctx->pc = 0x249658u;
        goto label_249658;
    }
    ctx->pc = 0x249650u;
    SET_GPR_U32(ctx, 31, 0x249658u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249658u; }
        if (ctx->pc != 0x249658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249658u; }
        if (ctx->pc != 0x249658u) { return; }
    }
    ctx->pc = 0x249658u;
label_249658:
    // 0x249658: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x249658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_24965c:
    // 0x24965c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_249660:
    if (ctx->pc == 0x249660u) {
        ctx->pc = 0x249660u;
            // 0x249660: 0x32620002  andi        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x249664u;
        goto label_249664;
    }
    ctx->pc = 0x24965Cu;
    {
        const bool branch_taken_0x24965c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24965Cu;
            // 0x249660: 0x32620002  andi        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24965c) {
            ctx->pc = 0x2496E0u;
            goto label_2496e0;
        }
    }
    ctx->pc = 0x249664u;
label_249664:
    // 0x249664: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x249664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249668:
    // 0x249668: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24966c:
    // 0x24966c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24966cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249670:
    // 0x249670: 0x2261821  addu        $v1, $s1, $a2
    ctx->pc = 0x249670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_249674:
    // 0x249674: 0x2461021  addu        $v0, $s2, $a2
    ctx->pc = 0x249674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_249678:
    // 0x249678: 0x84630016  lh          $v1, 0x16($v1)
    ctx->pc = 0x249678u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
label_24967c:
    // 0x24967c: 0x84420016  lh          $v0, 0x16($v0)
    ctx->pc = 0x24967cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
label_249680:
    // 0x249680: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x249680u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_249684:
    // 0x249684: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_249688:
    if (ctx->pc == 0x249688u) {
        ctx->pc = 0x24968Cu;
        goto label_24968c;
    }
    ctx->pc = 0x249684u;
    {
        const bool branch_taken_0x249684 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x249684) {
            ctx->pc = 0x249690u;
            goto label_249690;
        }
    }
    ctx->pc = 0x24968Cu;
label_24968c:
    // 0x24968c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24968cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249690:
    // 0x249690: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x249690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_249694:
    // 0x249694: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x249694u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
label_249698:
    // 0x249698: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_24969c:
    if (ctx->pc == 0x24969Cu) {
        ctx->pc = 0x24969Cu;
            // 0x24969c: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x2496A0u;
        goto label_2496a0;
    }
    ctx->pc = 0x249698u;
    {
        const bool branch_taken_0x249698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24969Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249698u;
            // 0x24969c: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249698) {
            ctx->pc = 0x249670u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_249670;
        }
    }
    ctx->pc = 0x2496A0u;
label_2496a0:
    // 0x2496a0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_2496a4:
    if (ctx->pc == 0x2496A4u) {
        ctx->pc = 0x2496A4u;
            // 0x2496a4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2496A8u;
        goto label_2496a8;
    }
    ctx->pc = 0x2496A0u;
    {
        const bool branch_taken_0x2496a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2496A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2496A0u;
            // 0x2496a4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2496a0) {
            ctx->pc = 0x2496D0u;
            goto label_2496d0;
        }
    }
    ctx->pc = 0x2496A8u;
label_2496a8:
    // 0x2496a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2496a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2496ac:
    // 0x2496ac: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2496acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2496b0:
    // 0x2496b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2496b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2496b4:
    // 0x2496b4: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x2496b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_2496b8:
    // 0x2496b8: 0xc08e7cc  jal         func_239F30
label_2496bc:
    if (ctx->pc == 0x2496BCu) {
        ctx->pc = 0x2496BCu;
            // 0x2496bc: 0x24a5b890  addiu       $a1, $a1, -0x4770 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949008));
        ctx->pc = 0x2496C0u;
        goto label_2496c0;
    }
    ctx->pc = 0x2496B8u;
    SET_GPR_U32(ctx, 31, 0x2496C0u);
    ctx->pc = 0x2496BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2496B8u;
            // 0x2496bc: 0x24a5b890  addiu       $a1, $a1, -0x4770 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2496C0u; }
        if (ctx->pc != 0x2496C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2496C0u; }
        if (ctx->pc != 0x2496C0u) { return; }
    }
    ctx->pc = 0x2496C0u;
label_2496c0:
    // 0x2496c0: 0xc094274  jal         func_2509D0
label_2496c4:
    if (ctx->pc == 0x2496C4u) {
        ctx->pc = 0x2496C4u;
            // 0x2496c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2496C8u;
        goto label_2496c8;
    }
    ctx->pc = 0x2496C0u;
    SET_GPR_U32(ctx, 31, 0x2496C8u);
    ctx->pc = 0x2496C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2496C0u;
            // 0x2496c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2496C8u; }
        if (ctx->pc != 0x2496C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2496C8u; }
        if (ctx->pc != 0x2496C8u) { return; }
    }
    ctx->pc = 0x2496C8u;
label_2496c8:
    // 0x2496c8: 0x100001d5  b           . + 4 + (0x1D5 << 2)
label_2496cc:
    if (ctx->pc == 0x2496CCu) {
        ctx->pc = 0x2496D0u;
        goto label_2496d0;
    }
    ctx->pc = 0x2496C8u;
    {
        const bool branch_taken_0x2496c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2496c8) {
            ctx->pc = 0x249E20u;
            goto label_249e20;
        }
    }
    ctx->pc = 0x2496D0u;
label_2496d0:
    // 0x2496d0: 0xc094274  jal         func_2509D0
label_2496d4:
    if (ctx->pc == 0x2496D4u) {
        ctx->pc = 0x2496D8u;
        goto label_2496d8;
    }
    ctx->pc = 0x2496D0u;
    SET_GPR_U32(ctx, 31, 0x2496D8u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2496D8u; }
        if (ctx->pc != 0x2496D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2496D8u; }
        if (ctx->pc != 0x2496D8u) { return; }
    }
    ctx->pc = 0x2496D8u;
label_2496d8:
    // 0x2496d8: 0x100001d1  b           . + 4 + (0x1D1 << 2)
label_2496dc:
    if (ctx->pc == 0x2496DCu) {
        ctx->pc = 0x2496E0u;
        goto label_2496e0;
    }
    ctx->pc = 0x2496D8u;
    {
        const bool branch_taken_0x2496d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2496d8) {
            ctx->pc = 0x249E20u;
            goto label_249e20;
        }
    }
    ctx->pc = 0x2496E0u;
label_2496e0:
    // 0x2496e0: 0x104001cf  beqz        $v0, . + 4 + (0x1CF << 2)
label_2496e4:
    if (ctx->pc == 0x2496E4u) {
        ctx->pc = 0x2496E4u;
            // 0x2496e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2496E8u;
        goto label_2496e8;
    }
    ctx->pc = 0x2496E0u;
    {
        const bool branch_taken_0x2496e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2496E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2496E0u;
            // 0x2496e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2496e0) {
            ctx->pc = 0x249E20u;
            goto label_249e20;
        }
    }
    ctx->pc = 0x2496E8u;
label_2496e8:
    // 0x2496e8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2496e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2496ec:
    // 0x2496ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2496ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2496f0:
    // 0x2496f0: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x2496f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_2496f4:
    // 0x2496f4: 0xc08e7cc  jal         func_239F30
label_2496f8:
    if (ctx->pc == 0x2496F8u) {
        ctx->pc = 0x2496F8u;
            // 0x2496f8: 0x24a5b898  addiu       $a1, $a1, -0x4768 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949016));
        ctx->pc = 0x2496FCu;
        goto label_2496fc;
    }
    ctx->pc = 0x2496F4u;
    SET_GPR_U32(ctx, 31, 0x2496FCu);
    ctx->pc = 0x2496F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2496F4u;
            // 0x2496f8: 0x24a5b898  addiu       $a1, $a1, -0x4768 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2496FCu; }
        if (ctx->pc != 0x2496FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2496FCu; }
        if (ctx->pc != 0x2496FCu) { return; }
    }
    ctx->pc = 0x2496FCu;
label_2496fc:
    // 0x2496fc: 0x100001c8  b           . + 4 + (0x1C8 << 2)
label_249700:
    if (ctx->pc == 0x249700u) {
        ctx->pc = 0x249704u;
        goto label_249704;
    }
    ctx->pc = 0x2496FCu;
    {
        const bool branch_taken_0x2496fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2496fc) {
            ctx->pc = 0x249E20u;
            goto label_249e20;
        }
    }
    ctx->pc = 0x249704u;
label_249704:
    // 0x249704: 0x8c24ca5c  lw          $a0, -0x35A4($at)
    ctx->pc = 0x249704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
label_249708:
    // 0x249708: 0xc087654  jal         func_21D950
label_24970c:
    if (ctx->pc == 0x24970Cu) {
        ctx->pc = 0x24970Cu;
            // 0x24970c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x249710u;
        goto label_249710;
    }
    ctx->pc = 0x249708u;
    SET_GPR_U32(ctx, 31, 0x249710u);
    ctx->pc = 0x24970Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249708u;
            // 0x24970c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249710u; }
        if (ctx->pc != 0x249710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249710u; }
        if (ctx->pc != 0x249710u) { return; }
    }
    ctx->pc = 0x249710u;
label_249710:
    // 0x249710: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x249710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_249714:
    // 0x249714: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249718:
    // 0x249718: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
label_24971c:
    if (ctx->pc == 0x24971Cu) {
        ctx->pc = 0x24971Cu;
            // 0x24971c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x249720u;
        goto label_249720;
    }
    ctx->pc = 0x249718u;
    {
        const bool branch_taken_0x249718 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x24971Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249718u;
            // 0x24971c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249718) {
            ctx->pc = 0x249744u;
            goto label_249744;
        }
    }
    ctx->pc = 0x249720u;
label_249720:
    // 0x249720: 0xc094274  jal         func_2509D0
label_249724:
    if (ctx->pc == 0x249724u) {
        ctx->pc = 0x249724u;
            // 0x249724: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x249728u;
        goto label_249728;
    }
    ctx->pc = 0x249720u;
    SET_GPR_U32(ctx, 31, 0x249728u);
    ctx->pc = 0x249724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249720u;
            // 0x249724: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249728u; }
        if (ctx->pc != 0x249728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249728u; }
        if (ctx->pc != 0x249728u) { return; }
    }
    ctx->pc = 0x249728u;
label_249728:
    // 0x249728: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x249728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_24972c:
    // 0x24972c: 0xa2000160  sb          $zero, 0x160($s0)
    ctx->pc = 0x24972cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 352), (uint8_t)GPR_U32(ctx, 0));
label_249730:
    // 0x249730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_249734:
    // 0x249734: 0x24a5b8a8  addiu       $a1, $a1, -0x4758
    ctx->pc = 0x249734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949032));
label_249738:
    // 0x249738: 0xc08e7cc  jal         func_239F30
label_24973c:
    if (ctx->pc == 0x24973Cu) {
        ctx->pc = 0x24973Cu;
            // 0x24973c: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x249740u;
        goto label_249740;
    }
    ctx->pc = 0x249738u;
    SET_GPR_U32(ctx, 31, 0x249740u);
    ctx->pc = 0x24973Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249738u;
            // 0x24973c: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249740u; }
        if (ctx->pc != 0x249740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249740u; }
        if (ctx->pc != 0x249740u) { return; }
    }
    ctx->pc = 0x249740u;
label_249740:
    // 0x249740: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x249740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_249744:
    // 0x249744: 0x162201b6  bne         $s1, $v0, . + 4 + (0x1B6 << 2)
label_249748:
    if (ctx->pc == 0x249748u) {
        ctx->pc = 0x249748u;
            // 0x249748: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x24974Cu;
        goto label_24974c;
    }
    ctx->pc = 0x249744u;
    {
        const bool branch_taken_0x249744 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x249748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249744u;
            // 0x249748: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249744) {
            ctx->pc = 0x249E20u;
            goto label_249e20;
        }
    }
    ctx->pc = 0x24974Cu;
label_24974c:
    // 0x24974c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24974cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_249750:
    // 0x249750: 0x24a5b8a8  addiu       $a1, $a1, -0x4758
    ctx->pc = 0x249750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949032));
label_249754:
    // 0x249754: 0xc08e7cc  jal         func_239F30
label_249758:
    if (ctx->pc == 0x249758u) {
        ctx->pc = 0x249758u;
            // 0x249758: 0xa6000002  sh          $zero, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x24975Cu;
        goto label_24975c;
    }
    ctx->pc = 0x249754u;
    SET_GPR_U32(ctx, 31, 0x24975Cu);
    ctx->pc = 0x249758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249754u;
            // 0x249758: 0xa6000002  sh          $zero, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24975Cu; }
        if (ctx->pc != 0x24975Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24975Cu; }
        if (ctx->pc != 0x24975Cu) { return; }
    }
    ctx->pc = 0x24975Cu;
label_24975c:
    // 0x24975c: 0xc094274  jal         func_2509D0
label_249760:
    if (ctx->pc == 0x249760u) {
        ctx->pc = 0x249760u;
            // 0x249760: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x249764u;
        goto label_249764;
    }
    ctx->pc = 0x24975Cu;
    SET_GPR_U32(ctx, 31, 0x249764u);
    ctx->pc = 0x249760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24975Cu;
            // 0x249760: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249764u; }
        if (ctx->pc != 0x249764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249764u; }
        if (ctx->pc != 0x249764u) { return; }
    }
    ctx->pc = 0x249764u;
label_249764:
    // 0x249764: 0x100001ae  b           . + 4 + (0x1AE << 2)
label_249768:
    if (ctx->pc == 0x249768u) {
        ctx->pc = 0x24976Cu;
        goto label_24976c;
    }
    ctx->pc = 0x249764u;
    {
        const bool branch_taken_0x249764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249764) {
            ctx->pc = 0x249E20u;
            goto label_249e20;
        }
    }
    ctx->pc = 0x24976Cu;
label_24976c:
    // 0x24976c: 0x8c24ca5c  lw          $a0, -0x35A4($at)
    ctx->pc = 0x24976cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
label_249770:
    // 0x249770: 0xc087654  jal         func_21D950
label_249774:
    if (ctx->pc == 0x249774u) {
        ctx->pc = 0x249774u;
            // 0x249774: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x249778u;
        goto label_249778;
    }
    ctx->pc = 0x249770u;
    SET_GPR_U32(ctx, 31, 0x249778u);
    ctx->pc = 0x249774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249770u;
            // 0x249774: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249778u; }
        if (ctx->pc != 0x249778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249778u; }
        if (ctx->pc != 0x249778u) { return; }
    }
    ctx->pc = 0x249778u;
label_249778:
    // 0x249778: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x249778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24977c:
    // 0x24977c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24977cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249780:
    // 0x249780: 0x1622000f  bne         $s1, $v0, . + 4 + (0xF << 2)
label_249784:
    if (ctx->pc == 0x249784u) {
        ctx->pc = 0x249784u;
            // 0x249784: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x249788u;
        goto label_249788;
    }
    ctx->pc = 0x249780u;
    {
        const bool branch_taken_0x249780 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x249784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249780u;
            // 0x249784: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249780) {
            ctx->pc = 0x2497C0u;
            goto label_2497c0;
        }
    }
    ctx->pc = 0x249788u;
label_249788:
    // 0x249788: 0x8e04017c  lw          $a0, 0x17C($s0)
    ctx->pc = 0x249788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_24978c:
    // 0x24978c: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x24978cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_249790:
    // 0x249790: 0xc06666c  jal         func_1999B0
label_249794:
    if (ctx->pc == 0x249794u) {
        ctx->pc = 0x249794u;
            // 0x249794: 0x24a5dc70  addiu       $a1, $a1, -0x2390 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958192));
        ctx->pc = 0x249798u;
        goto label_249798;
    }
    ctx->pc = 0x249790u;
    SET_GPR_U32(ctx, 31, 0x249798u);
    ctx->pc = 0x249794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249790u;
            // 0x249794: 0x24a5dc70  addiu       $a1, $a1, -0x2390 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249798u; }
        if (ctx->pc != 0x249798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249798u; }
        if (ctx->pc != 0x249798u) { return; }
    }
    ctx->pc = 0x249798u;
label_249798:
    // 0x249798: 0xa2000160  sb          $zero, 0x160($s0)
    ctx->pc = 0x249798u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 352), (uint8_t)GPR_U32(ctx, 0));
label_24979c:
    // 0x24979c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24979cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2497a0:
    // 0x2497a0: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x2497a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
label_2497a4:
    // 0x2497a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2497a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2497a8:
    // 0x2497a8: 0x24a5b8a8  addiu       $a1, $a1, -0x4758
    ctx->pc = 0x2497a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949032));
label_2497ac:
    // 0x2497ac: 0xc08e7cc  jal         func_239F30
label_2497b0:
    if (ctx->pc == 0x2497B0u) {
        ctx->pc = 0x2497B0u;
            // 0x2497b0: 0xa6000002  sh          $zero, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2497B4u;
        goto label_2497b4;
    }
    ctx->pc = 0x2497ACu;
    SET_GPR_U32(ctx, 31, 0x2497B4u);
    ctx->pc = 0x2497B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2497ACu;
            // 0x2497b0: 0xa6000002  sh          $zero, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2497B4u; }
        if (ctx->pc != 0x2497B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2497B4u; }
        if (ctx->pc != 0x2497B4u) { return; }
    }
    ctx->pc = 0x2497B4u;
label_2497b4:
    // 0x2497b4: 0xc094274  jal         func_2509D0
label_2497b8:
    if (ctx->pc == 0x2497B8u) {
        ctx->pc = 0x2497B8u;
            // 0x2497b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2497BCu;
        goto label_2497bc;
    }
    ctx->pc = 0x2497B4u;
    SET_GPR_U32(ctx, 31, 0x2497BCu);
    ctx->pc = 0x2497B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2497B4u;
            // 0x2497b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2497BCu; }
        if (ctx->pc != 0x2497BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2497BCu; }
        if (ctx->pc != 0x2497BCu) { return; }
    }
    ctx->pc = 0x2497BCu;
label_2497bc:
    // 0x2497bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2497bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2497c0:
    // 0x2497c0: 0x16220197  bne         $s1, $v0, . + 4 + (0x197 << 2)
label_2497c4:
    if (ctx->pc == 0x2497C4u) {
        ctx->pc = 0x2497C4u;
            // 0x2497c4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2497C8u;
        goto label_2497c8;
    }
    ctx->pc = 0x2497C0u;
    {
        const bool branch_taken_0x2497c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2497C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2497C0u;
            // 0x2497c4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2497c0) {
            ctx->pc = 0x249E20u;
            goto label_249e20;
        }
    }
    ctx->pc = 0x2497C8u;
label_2497c8:
    // 0x2497c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2497c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2497cc:
    // 0x2497cc: 0x24a5b8a8  addiu       $a1, $a1, -0x4758
    ctx->pc = 0x2497ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949032));
label_2497d0:
    // 0x2497d0: 0xc08e7cc  jal         func_239F30
label_2497d4:
    if (ctx->pc == 0x2497D4u) {
        ctx->pc = 0x2497D4u;
            // 0x2497d4: 0xa6000002  sh          $zero, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2497D8u;
        goto label_2497d8;
    }
    ctx->pc = 0x2497D0u;
    SET_GPR_U32(ctx, 31, 0x2497D8u);
    ctx->pc = 0x2497D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2497D0u;
            // 0x2497d4: 0xa6000002  sh          $zero, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2497D8u; }
        if (ctx->pc != 0x2497D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2497D8u; }
        if (ctx->pc != 0x2497D8u) { return; }
    }
    ctx->pc = 0x2497D8u;
label_2497d8:
    // 0x2497d8: 0xc094274  jal         func_2509D0
label_2497dc:
    if (ctx->pc == 0x2497DCu) {
        ctx->pc = 0x2497DCu;
            // 0x2497dc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2497E0u;
        goto label_2497e0;
    }
    ctx->pc = 0x2497D8u;
    SET_GPR_U32(ctx, 31, 0x2497E0u);
    ctx->pc = 0x2497DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2497D8u;
            // 0x2497dc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2497E0u; }
        if (ctx->pc != 0x2497E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2497E0u; }
        if (ctx->pc != 0x2497E0u) { return; }
    }
    ctx->pc = 0x2497E0u;
label_2497e0:
    // 0x2497e0: 0x1000018f  b           . + 4 + (0x18F << 2)
label_2497e4:
    if (ctx->pc == 0x2497E4u) {
        ctx->pc = 0x2497E8u;
        goto label_2497e8;
    }
    ctx->pc = 0x2497E0u;
    {
        const bool branch_taken_0x2497e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2497e0) {
            ctx->pc = 0x249E20u;
            goto label_249e20;
        }
    }
    ctx->pc = 0x2497E8u;
label_2497e8:
    // 0x2497e8: 0xc08e7d4  jal         func_239F50
label_2497ec:
    if (ctx->pc == 0x2497ECu) {
        ctx->pc = 0x2497ECu;
            // 0x2497ec: 0x2652dbf0  addiu       $s2, $s2, -0x2410 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958064));
        ctx->pc = 0x2497F0u;
        goto label_2497f0;
    }
    ctx->pc = 0x2497E8u;
    SET_GPR_U32(ctx, 31, 0x2497F0u);
    ctx->pc = 0x2497ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2497E8u;
            // 0x2497ec: 0x2652dbf0  addiu       $s2, $s2, -0x2410 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F50u;
    if (runtime->hasFunction(0x239F50u)) {
        auto targetFn = runtime->lookupFunction(0x239F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2497F0u; }
        if (ctx->pc != 0x2497F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExtendCommand__14CBaseMenuClassFii_0x239f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2497F0u; }
        if (ctx->pc != 0x2497F0u) { return; }
    }
    ctx->pc = 0x2497F0u;
label_2497f0:
    // 0x2497f0: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x2497f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_2497f4:
    // 0x2497f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2497f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2497f8:
    // 0x2497f8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2497f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2497fc:
    // 0x2497fc: 0x1062012b  beq         $v1, $v0, . + 4 + (0x12B << 2)
label_249800:
    if (ctx->pc == 0x249800u) {
        ctx->pc = 0x249800u;
            // 0x249800: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x249804u;
        goto label_249804;
    }
    ctx->pc = 0x2497FCu;
    {
        const bool branch_taken_0x2497fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x249800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2497FCu;
            // 0x249800: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2497fc) {
            ctx->pc = 0x249CACu;
            goto label_249cac;
        }
    }
    ctx->pc = 0x249804u;
label_249804:
    // 0x249804: 0x1062004b  beq         $v1, $v0, . + 4 + (0x4B << 2)
label_249808:
    if (ctx->pc == 0x249808u) {
        ctx->pc = 0x249808u;
            // 0x249808: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x24980Cu;
        goto label_24980c;
    }
    ctx->pc = 0x249804u;
    {
        const bool branch_taken_0x249804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x249808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249804u;
            // 0x249808: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249804) {
            ctx->pc = 0x249934u;
            goto label_249934;
        }
    }
    ctx->pc = 0x24980Cu;
label_24980c:
    // 0x24980c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_249810:
    if (ctx->pc == 0x249810u) {
        ctx->pc = 0x249810u;
            // 0x249810: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x249814u;
        goto label_249814;
    }
    ctx->pc = 0x24980Cu;
    {
        const bool branch_taken_0x24980c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x249810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24980Cu;
            // 0x249810: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24980c) {
            ctx->pc = 0x24981Cu;
            goto label_24981c;
        }
    }
    ctx->pc = 0x249814u;
label_249814:
    // 0x249814: 0x10000135  b           . + 4 + (0x135 << 2)
label_249818:
    if (ctx->pc == 0x249818u) {
        ctx->pc = 0x249818u;
            // 0x249818: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x24981Cu;
        goto label_24981c;
    }
    ctx->pc = 0x249814u;
    {
        const bool branch_taken_0x249814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249814u;
            // 0x249818: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249814) {
            ctx->pc = 0x249CECu;
            goto label_249cec;
        }
    }
    ctx->pc = 0x24981Cu;
label_24981c:
    // 0x24981c: 0x16620011  bne         $s3, $v0, . + 4 + (0x11 << 2)
label_249820:
    if (ctx->pc == 0x249820u) {
        ctx->pc = 0x249820u;
            // 0x249820: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x249824u;
        goto label_249824;
    }
    ctx->pc = 0x24981Cu;
    {
        const bool branch_taken_0x24981c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x249820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24981Cu;
            // 0x249820: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24981c) {
            ctx->pc = 0x249864u;
            goto label_249864;
        }
    }
    ctx->pc = 0x249824u;
label_249824:
    // 0x249824: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x249824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_249828:
    // 0x249828: 0x8f8595c8  lw          $a1, -0x6A38($gp)
    ctx->pc = 0x249828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940104)));
label_24982c:
    // 0x24982c: 0x84460002  lh          $a2, 0x2($v0)
    ctx->pc = 0x24982cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_249830:
    // 0x249830: 0xc08be60  jal         func_22F980
label_249834:
    if (ctx->pc == 0x249834u) {
        ctx->pc = 0x249834u;
            // 0x249834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x249838u;
        goto label_249838;
    }
    ctx->pc = 0x249830u;
    SET_GPR_U32(ctx, 31, 0x249838u);
    ctx->pc = 0x249834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249830u;
            // 0x249834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22F980u;
    if (runtime->hasFunction(0x22F980u)) {
        auto targetFn = runtime->lookupFunction(0x22F980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249838u; }
        if (ctx->pc != 0x249838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEffectSpectolBreak__FP9mgCMemoryP11CMenuEffecti_0x22f980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249838u; }
        if (ctx->pc != 0x249838u) { return; }
    }
    ctx->pc = 0x249838u;
label_249838:
    // 0x249838: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x249838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_24983c:
    // 0x24983c: 0x2405fffa  addiu       $a1, $zero, -0x6
    ctx->pc = 0x24983cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
label_249840:
    // 0x249840: 0xc08fbb4  jal         func_23EED0
label_249844:
    if (ctx->pc == 0x249844u) {
        ctx->pc = 0x249844u;
            // 0x249844: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x249848u;
        goto label_249848;
    }
    ctx->pc = 0x249840u;
    SET_GPR_U32(ctx, 31, 0x249848u);
    ctx->pc = 0x249844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249840u;
            // 0x249844: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EED0u;
    if (runtime->hasFunction(0x23EED0u)) {
        auto targetFn = runtime->lookupFunction(0x23EED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249848u; }
        if (ctx->pc != 0x249848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenuBGMVol__12CMenuKeyFuncFii_0x23eed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249848u; }
        if (ctx->pc != 0x249848u) { return; }
    }
    ctx->pc = 0x249848u;
label_249848:
    // 0x249848: 0x8f8595d0  lw          $a1, -0x6A30($gp)
    ctx->pc = 0x249848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940112)));
label_24984c:
    // 0x24984c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24984cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_249850:
    // 0x249850: 0xc094288  jal         func_250A20
label_249854:
    if (ctx->pc == 0x249854u) {
        ctx->pc = 0x249854u;
            // 0x249854: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x249858u;
        goto label_249858;
    }
    ctx->pc = 0x249850u;
    SET_GPR_U32(ctx, 31, 0x249858u);
    ctx->pc = 0x249854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249850u;
            // 0x249854: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250A20u;
    if (runtime->hasFunction(0x250A20u)) {
        auto targetFn = runtime->lookupFunction(0x250A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249858u; }
        if (ctx->pc != 0x249858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__FiPUiP9mgCMemory_0x250a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249858u; }
        if (ctx->pc != 0x249858u) { return; }
    }
    ctx->pc = 0x249858u;
label_249858:
    // 0x249858: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x249858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_24985c:
    // 0x24985c: 0xaf82973c  sw          $v0, -0x68C4($gp)
    ctx->pc = 0x24985cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940476), GPR_U32(ctx, 2));
label_249860:
    // 0x249860: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x249860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_249864:
    // 0x249864: 0x16620120  bne         $s3, $v0, . + 4 + (0x120 << 2)
label_249868:
    if (ctx->pc == 0x249868u) {
        ctx->pc = 0x24986Cu;
        goto label_24986c;
    }
    ctx->pc = 0x249864u;
    {
        const bool branch_taken_0x249864 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x249864) {
            ctx->pc = 0x249CE8u;
            goto label_249ce8;
        }
    }
    ctx->pc = 0x24986Cu;
label_24986c:
    // 0x24986c: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x24986cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_249870:
    // 0x249870: 0xc0943e4  jal         func_250F90
label_249874:
    if (ctx->pc == 0x249874u) {
        ctx->pc = 0x249874u;
            // 0x249874: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x249878u;
        goto label_249878;
    }
    ctx->pc = 0x249870u;
    SET_GPR_U32(ctx, 31, 0x249878u);
    ctx->pc = 0x249874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249870u;
            // 0x249874: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250F90u;
    if (runtime->hasFunction(0x250F90u)) {
        auto targetFn = runtime->lookupFunction(0x250F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249878u; }
        if (ctx->pc != 0x249878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSameAdrressUserData__FP13CGameDataUsedi_0x250f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249878u; }
        if (ctx->pc != 0x249878u) { return; }
    }
    ctx->pc = 0x249878u;
label_249878:
    // 0x249878: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x249878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
label_24987c:
    // 0x24987c: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x24987cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_249880:
    // 0x249880: 0x3464aaab  ori         $a0, $v1, 0xAAAB
    ctx->pc = 0x249880u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_249884:
    // 0x249884: 0x820018  mult        $zero, $a0, $v0
    ctx->pc = 0x249884u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_249888:
    // 0x249888: 0x87839588  lh          $v1, -0x6A78($gp)
    ctx->pc = 0x249888u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940040)));
label_24988c:
    // 0x24988c: 0x0  nop
    ctx->pc = 0x24988cu;
    // NOP
label_249890:
    // 0x249890: 0x2010  mfhi        $a0
    ctx->pc = 0x249890u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_249894:
    // 0x249894: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x249894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_249898:
    // 0x249898: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x249898u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_24989c:
    // 0x24989c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_2498a0:
    if (ctx->pc == 0x2498A0u) {
        ctx->pc = 0x2498A4u;
        goto label_2498a4;
    }
    ctx->pc = 0x24989Cu;
    {
        const bool branch_taken_0x24989c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24989c) {
            ctx->pc = 0x2498D0u;
            goto label_2498d0;
        }
    }
    ctx->pc = 0x2498A4u;
label_2498a4:
    // 0x2498a4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2498a8:
    if (ctx->pc == 0x2498A8u) {
        ctx->pc = 0x2498ACu;
        goto label_2498ac;
    }
    ctx->pc = 0x2498A4u;
    {
        const bool branch_taken_0x2498a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2498a4) {
            ctx->pc = 0x2498B8u;
            goto label_2498b8;
        }
    }
    ctx->pc = 0x2498ACu;
label_2498ac:
    // 0x2498ac: 0x87839588  lh          $v1, -0x6A78($gp)
    ctx->pc = 0x2498acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940040)));
label_2498b0:
    // 0x2498b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2498b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2498b4:
    // 0x2498b4: 0xa7839588  sh          $v1, -0x6A78($gp)
    ctx->pc = 0x2498b4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940040), (uint16_t)GPR_U32(ctx, 3));
label_2498b8:
    // 0x2498b8: 0x87839588  lh          $v1, -0x6A78($gp)
    ctx->pc = 0x2498b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940040)));
label_2498bc:
    // 0x2498bc: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2498bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2498c0:
    // 0x2498c0: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
label_2498c4:
    if (ctx->pc == 0x2498C4u) {
        ctx->pc = 0x2498C8u;
        goto label_2498c8;
    }
    ctx->pc = 0x2498C0u;
    {
        const bool branch_taken_0x2498c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2498c0) {
            ctx->pc = 0x2498ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2498ac;
        }
    }
    ctx->pc = 0x2498C8u;
label_2498c8:
    // 0x2498c8: 0x10000010  b           . + 4 + (0x10 << 2)
label_2498cc:
    if (ctx->pc == 0x2498CCu) {
        ctx->pc = 0x2498D0u;
        goto label_2498d0;
    }
    ctx->pc = 0x2498C8u;
    {
        const bool branch_taken_0x2498c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2498c8) {
            ctx->pc = 0x24990Cu;
            goto label_24990c;
        }
    }
    ctx->pc = 0x2498D0u;
label_2498d0:
    // 0x2498d0: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x2498d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_2498d4:
    // 0x2498d4: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2498d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2498d8:
    // 0x2498d8: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_2498dc:
    if (ctx->pc == 0x2498DCu) {
        ctx->pc = 0x2498E0u;
        goto label_2498e0;
    }
    ctx->pc = 0x2498D8u;
    {
        const bool branch_taken_0x2498d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2498d8) {
            ctx->pc = 0x24990Cu;
            goto label_24990c;
        }
    }
    ctx->pc = 0x2498E0u;
label_2498e0:
    // 0x2498e0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2498e4:
    if (ctx->pc == 0x2498E4u) {
        ctx->pc = 0x2498E8u;
        goto label_2498e8;
    }
    ctx->pc = 0x2498E0u;
    {
        const bool branch_taken_0x2498e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2498e0) {
            ctx->pc = 0x2498F4u;
            goto label_2498f4;
        }
    }
    ctx->pc = 0x2498E8u;
label_2498e8:
    // 0x2498e8: 0x87839588  lh          $v1, -0x6A78($gp)
    ctx->pc = 0x2498e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940040)));
label_2498ec:
    // 0x2498ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2498ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2498f0:
    // 0x2498f0: 0xa7839588  sh          $v1, -0x6A78($gp)
    ctx->pc = 0x2498f0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940040), (uint16_t)GPR_U32(ctx, 3));
label_2498f4:
    // 0x2498f4: 0x0  nop
    ctx->pc = 0x2498f4u;
    // NOP
label_2498f8:
    // 0x2498f8: 0x87839588  lh          $v1, -0x6A78($gp)
    ctx->pc = 0x2498f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940040)));
label_2498fc:
    // 0x2498fc: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x2498fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_249900:
    // 0x249900: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x249900u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_249904:
    // 0x249904: 0x1020fff8  beqz        $at, . + 4 + (-0x8 << 2)
label_249908:
    if (ctx->pc == 0x249908u) {
        ctx->pc = 0x24990Cu;
        goto label_24990c;
    }
    ctx->pc = 0x249904u;
    {
        const bool branch_taken_0x249904 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x249904) {
            ctx->pc = 0x2498E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2498e8;
        }
    }
    ctx->pc = 0x24990Cu;
label_24990c:
    // 0x24990c: 0x0  nop
    ctx->pc = 0x24990cu;
    // NOP
label_249910:
    // 0x249910: 0x87859588  lh          $a1, -0x6A78($gp)
    ctx->pc = 0x249910u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940040)));
label_249914:
    // 0x249914: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x249914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_249918:
    // 0x249918: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x249918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_24991c:
    // 0x24991c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x24991cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_249920:
    // 0x249920: 0xac850074  sw          $a1, 0x74($a0)
    ctx->pc = 0x249920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 5));
label_249924:
    // 0x249924: 0xa782958c  sh          $v0, -0x6A74($gp)
    ctx->pc = 0x249924u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940044), (uint16_t)GPR_U32(ctx, 2));
label_249928:
    // 0x249928: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x249928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_24992c:
    // 0x24992c: 0x100000ee  b           . + 4 + (0xEE << 2)
label_249930:
    if (ctx->pc == 0x249930u) {
        ctx->pc = 0x249930u;
            // 0x249930: 0xac430070  sw          $v1, 0x70($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
        ctx->pc = 0x249934u;
        goto label_249934;
    }
    ctx->pc = 0x24992Cu;
    {
        const bool branch_taken_0x24992c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24992Cu;
            // 0x249930: 0xac430070  sw          $v1, 0x70($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24992c) {
            ctx->pc = 0x249CE8u;
            goto label_249ce8;
        }
    }
    ctx->pc = 0x249934u;
label_249934:
    // 0x249934: 0x83829744  lb          $v0, -0x68BC($gp)
    ctx->pc = 0x249934u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940484)));
label_249938:
    // 0x249938: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_24993c:
    if (ctx->pc == 0x24993Cu) {
        ctx->pc = 0x24993Cu;
            // 0x24993c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x249940u;
        goto label_249940;
    }
    ctx->pc = 0x249938u;
    {
        const bool branch_taken_0x249938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24993Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249938u;
            // 0x24993c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249938) {
            ctx->pc = 0x249948u;
            goto label_249948;
        }
    }
    ctx->pc = 0x249940u;
label_249940:
    // 0x249940: 0xa3809740  sb          $zero, -0x68C0($gp)
    ctx->pc = 0x249940u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940480), (uint8_t)GPR_U32(ctx, 0));
label_249944:
    // 0x249944: 0xa3829744  sb          $v0, -0x68BC($gp)
    ctx->pc = 0x249944u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940484), (uint8_t)GPR_U32(ctx, 2));
label_249948:
    // 0x249948: 0x83829740  lb          $v0, -0x68C0($gp)
    ctx->pc = 0x249948u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940480)));
label_24994c:
    // 0x24994c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24994cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_249950:
    // 0x249950: 0xa3829740  sb          $v0, -0x68C0($gp)
    ctx->pc = 0x249950u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940480), (uint8_t)GPR_U32(ctx, 2));
label_249954:
    // 0x249954: 0x83829740  lb          $v0, -0x68C0($gp)
    ctx->pc = 0x249954u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940480)));
label_249958:
    // 0x249958: 0x2842003c  slti        $v0, $v0, 0x3C
    ctx->pc = 0x249958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)60) ? 1 : 0);
label_24995c:
    // 0x24995c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_249960:
    if (ctx->pc == 0x249960u) {
        ctx->pc = 0x249964u;
        goto label_249964;
    }
    ctx->pc = 0x24995Cu;
    {
        const bool branch_taken_0x24995c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24995c) {
            ctx->pc = 0x249968u;
            goto label_249968;
        }
    }
    ctx->pc = 0x249964u;
label_249964:
    // 0x249964: 0xa3809740  sb          $zero, -0x68C0($gp)
    ctx->pc = 0x249964u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940480), (uint8_t)GPR_U32(ctx, 0));
label_249968:
    // 0x249968: 0x8382974c  lb          $v0, -0x68B4($gp)
    ctx->pc = 0x249968u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940492)));
label_24996c:
    // 0x24996c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_249970:
    if (ctx->pc == 0x249970u) {
        ctx->pc = 0x249970u;
            // 0x249970: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x249974u;
        goto label_249974;
    }
    ctx->pc = 0x24996Cu;
    {
        const bool branch_taken_0x24996c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24996Cu;
            // 0x249970: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24996c) {
            ctx->pc = 0x249984u;
            goto label_249984;
        }
    }
    ctx->pc = 0x249974u;
label_249974:
    // 0x249974: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249978:
    // 0x249978: 0xa3809748  sb          $zero, -0x68B8($gp)
    ctx->pc = 0x249978u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940488), (uint8_t)GPR_U32(ctx, 0));
label_24997c:
    // 0x24997c: 0xa382974c  sb          $v0, -0x68B4($gp)
    ctx->pc = 0x24997cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940492), (uint8_t)GPR_U32(ctx, 2));
label_249980:
    // 0x249980: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x249980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_249984:
    // 0x249984: 0x16620051  bne         $s3, $v0, . + 4 + (0x51 << 2)
label_249988:
    if (ctx->pc == 0x249988u) {
        ctx->pc = 0x249988u;
            // 0x249988: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x24998Cu;
        goto label_24998c;
    }
    ctx->pc = 0x249984u;
    {
        const bool branch_taken_0x249984 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x249988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249984u;
            // 0x249988: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249984) {
            ctx->pc = 0x249ACCu;
            goto label_249acc;
        }
    }
    ctx->pc = 0x24998Cu;
label_24998c:
    // 0x24998c: 0xa3809748  sb          $zero, -0x68B8($gp)
    ctx->pc = 0x24998cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940488), (uint8_t)GPR_U32(ctx, 0));
label_249990:
    // 0x249990: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x249990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_249994:
    // 0x249994: 0x86020014  lh          $v0, 0x14($s0)
    ctx->pc = 0x249994u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_249998:
    // 0x249998: 0x278595c8  addiu       $a1, $gp, -0x6A38
    ctx->pc = 0x249998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940104));
label_24999c:
    // 0x24999c: 0x8f8695d8  lw          $a2, -0x6A28($gp)
    ctx->pc = 0x24999cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940120)));
label_2499a0:
    // 0x2499a0: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x2499a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_2499a4:
    // 0x2499a4: 0xc08be98  jal         func_22FA60
label_2499a8:
    if (ctx->pc == 0x2499A8u) {
        ctx->pc = 0x2499A8u;
            // 0x2499a8: 0x2c470001  sltiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x2499ACu;
        goto label_2499ac;
    }
    ctx->pc = 0x2499A4u;
    SET_GPR_U32(ctx, 31, 0x2499ACu);
    ctx->pc = 0x2499A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2499A4u;
            // 0x2499a8: 0x2c470001  sltiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FA60u;
    if (runtime->hasFunction(0x22FA60u)) {
        auto targetFn = runtime->lookupFunction(0x22FA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2499ACu; }
        if (ctx->pc != 0x2499ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEffectSpectolFusion__FP9mgCMemoryPP11CMenuEffectP13CGameDataUsedi_0x22fa60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2499ACu; }
        if (ctx->pc != 0x2499ACu) { return; }
    }
    ctx->pc = 0x2499ACu;
label_2499ac:
    // 0x2499ac: 0x87839588  lh          $v1, -0x6A78($gp)
    ctx->pc = 0x2499acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940040)));
label_2499b0:
    // 0x2499b0: 0x8f848374  lw          $a0, -0x7C8C($gp)
    ctx->pc = 0x2499b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935412)));
label_2499b4:
    // 0x2499b4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2499b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2499b8:
    // 0x2499b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2499bc:
    if (ctx->pc == 0x2499BCu) {
        ctx->pc = 0x2499BCu;
            // 0x2499bc: 0x24620005  addiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
        ctx->pc = 0x2499C0u;
        goto label_2499c0;
    }
    ctx->pc = 0x2499B8u;
    {
        const bool branch_taken_0x2499b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2499BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2499B8u;
            // 0x2499bc: 0x24620005  addiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2499b8) {
            ctx->pc = 0x2499CCu;
            goto label_2499cc;
        }
    }
    ctx->pc = 0x2499C0u;
label_2499c0:
    // 0x2499c0: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x2499c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2499c4:
    // 0x2499c4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_2499c8:
    if (ctx->pc == 0x2499C8u) {
        ctx->pc = 0x2499CCu;
        goto label_2499cc;
    }
    ctx->pc = 0x2499C4u;
    {
        const bool branch_taken_0x2499c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2499c4) {
            ctx->pc = 0x2499DCu;
            goto label_2499dc;
        }
    }
    ctx->pc = 0x2499CCu;
label_2499cc:
    // 0x2499cc: 0x8f8495cc  lw          $a0, -0x6A34($gp)
    ctx->pc = 0x2499ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940108)));
label_2499d0:
    // 0x2499d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2499d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2499d4:
    // 0x2499d4: 0xc08bf64  jal         func_22FD90
label_2499d8:
    if (ctx->pc == 0x2499D8u) {
        ctx->pc = 0x2499D8u;
            // 0x2499d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2499DCu;
        goto label_2499dc;
    }
    ctx->pc = 0x2499D4u;
    SET_GPR_U32(ctx, 31, 0x2499DCu);
    ctx->pc = 0x2499D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2499D4u;
            // 0x2499d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FD90u;
    if (runtime->hasFunction(0x22FD90u)) {
        auto targetFn = runtime->lookupFunction(0x22FD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2499DCu; }
        if (ctx->pc != 0x2499DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexInfo__11CMenuEffectFP10mgCTexturePi_0x22fd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2499DCu; }
        if (ctx->pc != 0x2499DCu) { return; }
    }
    ctx->pc = 0x2499DCu;
label_2499dc:
    // 0x2499dc: 0x86030014  lh          $v1, 0x14($s0)
    ctx->pc = 0x2499dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_2499e0:
    // 0x2499e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2499e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2499e4:
    // 0x2499e4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_2499e8:
    if (ctx->pc == 0x2499E8u) {
        ctx->pc = 0x2499E8u;
            // 0x2499e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2499ECu;
        goto label_2499ec;
    }
    ctx->pc = 0x2499E4u;
    {
        const bool branch_taken_0x2499e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2499E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2499E4u;
            // 0x2499e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2499e4) {
            ctx->pc = 0x249A00u;
            goto label_249a00;
        }
    }
    ctx->pc = 0x2499ECu;
label_2499ec:
    // 0x2499ec: 0x8f8495cc  lw          $a0, -0x6A34($gp)
    ctx->pc = 0x2499ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940108)));
label_2499f0:
    // 0x2499f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2499f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2499f4:
    // 0x2499f4: 0xc08bf64  jal         func_22FD90
label_2499f8:
    if (ctx->pc == 0x2499F8u) {
        ctx->pc = 0x2499F8u;
            // 0x2499f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2499FCu;
        goto label_2499fc;
    }
    ctx->pc = 0x2499F4u;
    SET_GPR_U32(ctx, 31, 0x2499FCu);
    ctx->pc = 0x2499F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2499F4u;
            // 0x2499f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FD90u;
    if (runtime->hasFunction(0x22FD90u)) {
        auto targetFn = runtime->lookupFunction(0x22FD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2499FCu; }
        if (ctx->pc != 0x2499FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexInfo__11CMenuEffectFP10mgCTexturePi_0x22fd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2499FCu; }
        if (ctx->pc != 0x2499FCu) { return; }
    }
    ctx->pc = 0x2499FCu;
label_2499fc:
    // 0x2499fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2499fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_249a00:
    // 0x249a00: 0xc04e748  jal         func_139D20
label_249a04:
    if (ctx->pc == 0x249A04u) {
        ctx->pc = 0x249A04u;
            // 0x249a04: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x249A08u;
        goto label_249a08;
    }
    ctx->pc = 0x249A00u;
    SET_GPR_U32(ctx, 31, 0x249A08u);
    ctx->pc = 0x249A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249A00u;
            // 0x249a04: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249A08u; }
        if (ctx->pc != 0x249A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249A08u; }
        if (ctx->pc != 0x249A08u) { return; }
    }
    ctx->pc = 0x249A08u;
label_249a08:
    // 0x249a08: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x249a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_249a0c:
    // 0x249a0c: 0x2405fffa  addiu       $a1, $zero, -0x6
    ctx->pc = 0x249a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
label_249a10:
    // 0x249a10: 0xc08fbb4  jal         func_23EED0
label_249a14:
    if (ctx->pc == 0x249A14u) {
        ctx->pc = 0x249A14u;
            // 0x249a14: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x249A18u;
        goto label_249a18;
    }
    ctx->pc = 0x249A10u;
    SET_GPR_U32(ctx, 31, 0x249A18u);
    ctx->pc = 0x249A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249A10u;
            // 0x249a14: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EED0u;
    if (runtime->hasFunction(0x23EED0u)) {
        auto targetFn = runtime->lookupFunction(0x23EED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249A18u; }
        if (ctx->pc != 0x249A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenuBGMVol__12CMenuKeyFuncFii_0x23eed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249A18u; }
        if (ctx->pc != 0x249A18u) { return; }
    }
    ctx->pc = 0x249A18u;
label_249a18:
    // 0x249a18: 0xc052330  jal         func_148CC0
label_249a1c:
    if (ctx->pc == 0x249A1Cu) {
        ctx->pc = 0x249A20u;
        goto label_249a20;
    }
    ctx->pc = 0x249A18u;
    SET_GPR_U32(ctx, 31, 0x249A20u);
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249A20u; }
        if (ctx->pc != 0x249A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249A20u; }
        if (ctx->pc != 0x249A20u) { return; }
    }
    ctx->pc = 0x249A20u;
label_249a20:
    // 0x249a20: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x249a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_249a24:
    // 0x249a24: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x249a24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_249a28:
    // 0x249a28: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x249a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_249a2c:
    // 0x249a2c: 0x2484b8c0  addiu       $a0, $a0, -0x4740
    ctx->pc = 0x249a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949056));
label_249a30:
    // 0x249a30: 0x27a6020c  addiu       $a2, $sp, 0x20C
    ctx->pc = 0x249a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 524));
label_249a34:
    // 0x249a34: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x249a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_249a38:
    // 0x249a38: 0xc05224c  jal         func_148930
label_249a3c:
    if (ctx->pc == 0x249A3Cu) {
        ctx->pc = 0x249A3Cu;
            // 0x249a3c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x249A40u;
        goto label_249a40;
    }
    ctx->pc = 0x249A38u;
    SET_GPR_U32(ctx, 31, 0x249A40u);
    ctx->pc = 0x249A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249A38u;
            // 0x249a3c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249A40u; }
        if (ctx->pc != 0x249A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249A40u; }
        if (ctx->pc != 0x249A40u) { return; }
    }
    ctx->pc = 0x249A40u;
label_249a40:
    // 0x249a40: 0x8fa3020c  lw          $v1, 0x20C($sp)
    ctx->pc = 0x249a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_249a44:
    // 0x249a44: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x249a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_249a48:
    // 0x249a48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_249a4c:
    if (ctx->pc == 0x249A4Cu) {
        ctx->pc = 0x249A4Cu;
            // 0x249a4c: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x249A50u;
        goto label_249a50;
    }
    ctx->pc = 0x249A48u;
    {
        const bool branch_taken_0x249a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249A48u;
            // 0x249a4c: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a48) {
            ctx->pc = 0x249A58u;
            goto label_249a58;
        }
    }
    ctx->pc = 0x249A50u;
label_249a50:
    // 0x249a50: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x249a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_249a54:
    // 0x249a54: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x249a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_249a58:
    // 0x249a58: 0xc04e748  jal         func_139D20
label_249a5c:
    if (ctx->pc == 0x249A5Cu) {
        ctx->pc = 0x249A5Cu;
            // 0x249a5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x249A60u;
        goto label_249a60;
    }
    ctx->pc = 0x249A58u;
    SET_GPR_U32(ctx, 31, 0x249A60u);
    ctx->pc = 0x249A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249A58u;
            // 0x249a5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249A60u; }
        if (ctx->pc != 0x249A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249A60u; }
        if (ctx->pc != 0x249A60u) { return; }
    }
    ctx->pc = 0x249A60u;
label_249a60:
    // 0x249a60: 0xaf8095e4  sw          $zero, -0x6A1C($gp)
    ctx->pc = 0x249a60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940132), GPR_U32(ctx, 0));
label_249a64:
    // 0x249a64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x249a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_249a68:
    // 0x249a68: 0xa78095e0  sh          $zero, -0x6A20($gp)
    ctx->pc = 0x249a68u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940128), (uint16_t)GPR_U32(ctx, 0));
label_249a6c:
    // 0x249a6c: 0x86030110  lh          $v1, 0x110($s0)
    ctx->pc = 0x249a6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_249a70:
    // 0x249a70: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_249a74:
    if (ctx->pc == 0x249A74u) {
        ctx->pc = 0x249A74u;
            // 0x249a74: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x249A78u;
        goto label_249a78;
    }
    ctx->pc = 0x249A70u;
    {
        const bool branch_taken_0x249a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x249A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249A70u;
            // 0x249a74: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a70) {
            ctx->pc = 0x249A94u;
            goto label_249a94;
        }
    }
    ctx->pc = 0x249A78u;
label_249a78:
    // 0x249a78: 0x8f8295d8  lw          $v0, -0x6A28($gp)
    ctx->pc = 0x249a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940120)));
label_249a7c:
    // 0x249a7c: 0x8c23caa0  lw          $v1, -0x3560($at)
    ctx->pc = 0x249a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953632)));
label_249a80:
    // 0x249a80: 0xaf8395e4  sw          $v1, -0x6A1C($gp)
    ctx->pc = 0x249a80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940132), GPR_U32(ctx, 3));
label_249a84:
    // 0x249a84: 0x8e03017c  lw          $v1, 0x17C($s0)
    ctx->pc = 0x249a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_249a88:
    // 0x249a88: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_249a8c:
    if (ctx->pc == 0x249A8Cu) {
        ctx->pc = 0x249A8Cu;
            // 0x249a8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x249A90u;
        goto label_249a90;
    }
    ctx->pc = 0x249A88u;
    {
        const bool branch_taken_0x249a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x249A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249A88u;
            // 0x249a8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a88) {
            ctx->pc = 0x249A94u;
            goto label_249a94;
        }
    }
    ctx->pc = 0x249A90u;
label_249a90:
    // 0x249a90: 0xa3829748  sb          $v0, -0x68B8($gp)
    ctx->pc = 0x249a90u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940488), (uint8_t)GPR_U32(ctx, 2));
label_249a94:
    // 0x249a94: 0x8f8495d8  lw          $a0, -0x6A28($gp)
    ctx->pc = 0x249a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940120)));
label_249a98:
    // 0x249a98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249a9c:
    // 0x249a9c: 0x86030014  lh          $v1, 0x14($s0)
    ctx->pc = 0x249a9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_249aa0:
    // 0x249aa0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_249aa4:
    if (ctx->pc == 0x249AA4u) {
        ctx->pc = 0x249AA4u;
            // 0x249aa4: 0x80840004  lb          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x249AA8u;
        goto label_249aa8;
    }
    ctx->pc = 0x249AA0u;
    {
        const bool branch_taken_0x249aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x249AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249AA0u;
            // 0x249aa4: 0x80840004  lb          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249aa0) {
            ctx->pc = 0x249AC8u;
            goto label_249ac8;
        }
    }
    ctx->pc = 0x249AA8u;
label_249aa8:
    // 0x249aa8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x249aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_249aac:
    // 0x249aac: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_249ab0:
    if (ctx->pc == 0x249AB0u) {
        ctx->pc = 0x249AB0u;
            // 0x249ab0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x249AB4u;
        goto label_249ab4;
    }
    ctx->pc = 0x249AACu;
    {
        const bool branch_taken_0x249aac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x249AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249AACu;
            // 0x249ab0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249aac) {
            ctx->pc = 0x249AC4u;
            goto label_249ac4;
        }
    }
    ctx->pc = 0x249AB4u;
label_249ab4:
    // 0x249ab4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x249ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_249ab8:
    // 0x249ab8: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_249abc:
    if (ctx->pc == 0x249ABCu) {
        ctx->pc = 0x249AC0u;
        goto label_249ac0;
    }
    ctx->pc = 0x249AB8u;
    {
        const bool branch_taken_0x249ab8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x249ab8) {
            ctx->pc = 0x249AC8u;
            goto label_249ac8;
        }
    }
    ctx->pc = 0x249AC0u;
label_249ac0:
    // 0x249ac0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249ac4:
    // 0x249ac4: 0xa78295e0  sh          $v0, -0x6A20($gp)
    ctx->pc = 0x249ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940128), (uint16_t)GPR_U32(ctx, 2));
label_249ac8:
    // 0x249ac8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x249ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_249acc:
    // 0x249acc: 0x16620036  bne         $s3, $v0, . + 4 + (0x36 << 2)
label_249ad0:
    if (ctx->pc == 0x249AD0u) {
        ctx->pc = 0x249AD4u;
        goto label_249ad4;
    }
    ctx->pc = 0x249ACCu;
    {
        const bool branch_taken_0x249acc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x249acc) {
            ctx->pc = 0x249BA8u;
            goto label_249ba8;
        }
    }
    ctx->pc = 0x249AD4u;
label_249ad4:
    // 0x249ad4: 0x86030110  lh          $v1, 0x110($s0)
    ctx->pc = 0x249ad4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_249ad8:
    // 0x249ad8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x249ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_249adc:
    // 0x249adc: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_249ae0:
    if (ctx->pc == 0x249AE0u) {
        ctx->pc = 0x249AE4u;
        goto label_249ae4;
    }
    ctx->pc = 0x249ADCu;
    {
        const bool branch_taken_0x249adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x249adc) {
            ctx->pc = 0x249B1Cu;
            goto label_249b1c;
        }
    }
    ctx->pc = 0x249AE4u;
label_249ae4:
    // 0x249ae4: 0x8e04017c  lw          $a0, 0x17C($s0)
    ctx->pc = 0x249ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_249ae8:
    // 0x249ae8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249aec:
    // 0x249aec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x249aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249af0:
    // 0x249af0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x249af0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249af4:
    // 0x249af4: 0xc0663f0  jal         func_198FC0
label_249af8:
    if (ctx->pc == 0x249AF8u) {
        ctx->pc = 0x249AF8u;
            // 0x249af8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x249AFCu;
        goto label_249afc;
    }
    ctx->pc = 0x249AF4u;
    SET_GPR_U32(ctx, 31, 0x249AFCu);
    ctx->pc = 0x249AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249AF4u;
            // 0x249af8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198FC0u;
    if (runtime->hasFunction(0x198FC0u)) {
        auto targetFn = runtime->lookupFunction(0x198FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249AFCu; }
        if (ctx->pc != 0x249AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsBuildUp__13CGameDataUsedFPiPiPi_0x198fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249AFCu; }
        if (ctx->pc != 0x249AFCu) { return; }
    }
    ctx->pc = 0x249AFCu;
label_249afc:
    // 0x249afc: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x249afcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_249b00:
    // 0x249b00: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_249b04:
    if (ctx->pc == 0x249B04u) {
        ctx->pc = 0x249B04u;
            // 0x249b04: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x249B08u;
        goto label_249b08;
    }
    ctx->pc = 0x249B00u;
    {
        const bool branch_taken_0x249b00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x249B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249B00u;
            // 0x249b04: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249b00) {
            ctx->pc = 0x249B10u;
            goto label_249b10;
        }
    }
    ctx->pc = 0x249B08u;
label_249b08:
    // 0x249b08: 0x8c32caa0  lw          $s2, -0x3560($at)
    ctx->pc = 0x249b08u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953632)));
label_249b0c:
    // 0x249b0c: 0x0  nop
    ctx->pc = 0x249b0cu;
    // NOP
label_249b10:
    // 0x249b10: 0xc78c95a4  lwc1        $f12, -0x6A5C($gp)
    ctx->pc = 0x249b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_249b14:
    // 0x249b14: 0xc08bcf4  jal         func_22F3D0
label_249b18:
    if (ctx->pc == 0x249B18u) {
        ctx->pc = 0x249B18u;
            // 0x249b18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x249B1Cu;
        goto label_249b1c;
    }
    ctx->pc = 0x249B14u;
    SET_GPR_U32(ctx, 31, 0x249B1Cu);
    ctx->pc = 0x249B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249B14u;
            // 0x249b18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22F3D0u;
    if (runtime->hasFunction(0x22F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x22F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249B1Cu; }
        if (ctx->pc != 0x249B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuildUpInfoChara__FP11CCharacter2f_0x22f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249B1Cu; }
        if (ctx->pc != 0x249B1Cu) { return; }
    }
    ctx->pc = 0x249B1Cu;
label_249b1c:
    // 0x249b1c: 0x86030110  lh          $v1, 0x110($s0)
    ctx->pc = 0x249b1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_249b20:
    // 0x249b20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x249b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_249b24:
    // 0x249b24: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_249b28:
    if (ctx->pc == 0x249B28u) {
        ctx->pc = 0x249B28u;
            // 0x249b28: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x249B2Cu;
        goto label_249b2c;
    }
    ctx->pc = 0x249B24u;
    {
        const bool branch_taken_0x249b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x249B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249B24u;
            // 0x249b28: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249b24) {
            ctx->pc = 0x249B40u;
            goto label_249b40;
        }
    }
    ctx->pc = 0x249B2Cu;
label_249b2c:
    // 0x249b2c: 0x83839748  lb          $v1, -0x68B8($gp)
    ctx->pc = 0x249b2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940488)));
label_249b30:
    // 0x249b30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249b34:
    // 0x249b34: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
label_249b38:
    if (ctx->pc == 0x249B38u) {
        ctx->pc = 0x249B3Cu;
        goto label_249b3c;
    }
    ctx->pc = 0x249B34u;
    {
        const bool branch_taken_0x249b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x249b34) {
            ctx->pc = 0x249BA8u;
            goto label_249ba8;
        }
    }
    ctx->pc = 0x249B3Cu;
label_249b3c:
    // 0x249b3c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x249b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_249b40:
    // 0x249b40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x249b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249b44:
    // 0x249b44: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x249b44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
label_249b48:
    // 0x249b48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x249b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_249b4c:
    // 0x249b4c: 0xa6020110  sh          $v0, 0x110($s0)
    ctx->pc = 0x249b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 272), (uint16_t)GPR_U32(ctx, 2));
label_249b50:
    // 0x249b50: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x249b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_249b54:
    // 0x249b54: 0x86080014  lh          $t0, 0x14($s0)
    ctx->pc = 0x249b54u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_249b58:
    // 0x249b58: 0x24630d00  addiu       $v1, $v1, 0xD00
    ctx->pc = 0x249b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3328));
label_249b5c:
    // 0x249b5c: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x249b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_249b60:
    // 0x249b60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_249b64:
    // 0x249b64: 0x828c0  sll         $a1, $t0, 3
    ctx->pc = 0x249b64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_249b68:
    // 0x249b68: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x249b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_249b6c:
    // 0x249b6c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x249b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_249b70:
    // 0x249b70: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x249b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_249b74:
    // 0x249b74: 0xac430134  sw          $v1, 0x134($v0)
    ctx->pc = 0x249b74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 3));
label_249b78:
    // 0x249b78: 0x8f8295d8  lw          $v0, -0x6A28($gp)
    ctx->pc = 0x249b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940120)));
label_249b7c:
    // 0x249b7c: 0xae02017c  sw          $v0, 0x17C($s0)
    ctx->pc = 0x249b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
label_249b80:
    // 0x249b80: 0x8e03017c  lw          $v1, 0x17C($s0)
    ctx->pc = 0x249b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_249b84:
    // 0x249b84: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x249b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_249b88:
    // 0x249b88: 0x84630002  lh          $v1, 0x2($v1)
    ctx->pc = 0x249b88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_249b8c:
    // 0x249b8c: 0xa4430116  sh          $v1, 0x116($v0)
    ctx->pc = 0x249b8cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 278), (uint16_t)GPR_U32(ctx, 3));
label_249b90:
    // 0x249b90: 0x86050110  lh          $a1, 0x110($s0)
    ctx->pc = 0x249b90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_249b94:
    // 0x249b94: 0xc093114  jal         func_24C450
label_249b98:
    if (ctx->pc == 0x249B98u) {
        ctx->pc = 0x249B98u;
            // 0x249b98: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x249B9Cu;
        goto label_249b9c;
    }
    ctx->pc = 0x249B94u;
    SET_GPR_U32(ctx, 31, 0x249B9Cu);
    ctx->pc = 0x249B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249B94u;
            // 0x249b98: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C450u;
    if (runtime->hasFunction(0x24C450u)) {
        auto targetFn = runtime->lookupFunction(0x24C450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249B9Cu; }
        if (ctx->pc != 0x249B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ModelReadStart__13CMenuItemInfoFiii_0x24c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249B9Cu; }
        if (ctx->pc != 0x249B9Cu) { return; }
    }
    ctx->pc = 0x249B9Cu;
label_249b9c:
    // 0x249b9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x249b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249ba0:
    // 0x249ba0: 0xc08e9f0  jal         func_23A7C0
label_249ba4:
    if (ctx->pc == 0x249BA4u) {
        ctx->pc = 0x249BA4u;
            // 0x249ba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x249BA8u;
        goto label_249ba8;
    }
    ctx->pc = 0x249BA0u;
    SET_GPR_U32(ctx, 31, 0x249BA8u);
    ctx->pc = 0x249BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249BA0u;
            // 0x249ba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A7C0u;
    if (runtime->hasFunction(0x23A7C0u)) {
        auto targetFn = runtime->lookupFunction(0x23A7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249BA8u; }
        if (ctx->pc != 0x249BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpectolInfo__FP13CGameDataUsedP13CGameDataUsed_0x23a7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249BA8u; }
        if (ctx->pc != 0x249BA8u) { return; }
    }
    ctx->pc = 0x249BA8u;
label_249ba8:
    // 0x249ba8: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x249ba8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_249bac:
    // 0x249bac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_249bb0:
    if (ctx->pc == 0x249BB0u) {
        ctx->pc = 0x249BB4u;
        goto label_249bb4;
    }
    ctx->pc = 0x249BACu;
    {
        const bool branch_taken_0x249bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249bac) {
            ctx->pc = 0x249BD4u;
            goto label_249bd4;
        }
    }
    ctx->pc = 0x249BB4u;
label_249bb4:
    // 0x249bb4: 0x8f849598  lw          $a0, -0x6A68($gp)
    ctx->pc = 0x249bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940056)));
label_249bb8:
    // 0x249bb8: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x249bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_249bbc:
    // 0x249bbc: 0x3c0801ed  lui         $t0, 0x1ED
    ctx->pc = 0x249bbcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)493 << 16));
label_249bc0:
    // 0x249bc0: 0x24a5dce0  addiu       $a1, $a1, -0x2320
    ctx->pc = 0x249bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958304));
label_249bc4:
    // 0x249bc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x249bc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249bc8:
    // 0x249bc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x249bc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249bcc:
    // 0x249bcc: 0xc08fdf8  jal         func_23F7E0
label_249bd0:
    if (ctx->pc == 0x249BD0u) {
        ctx->pc = 0x249BD0u;
            // 0x249bd0: 0x2508dd50  addiu       $t0, $t0, -0x22B0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958416));
        ctx->pc = 0x249BD4u;
        goto label_249bd4;
    }
    ctx->pc = 0x249BCCu;
    SET_GPR_U32(ctx, 31, 0x249BD4u);
    ctx->pc = 0x249BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249BCCu;
            // 0x249bd0: 0x2508dd50  addiu       $t0, $t0, -0x22B0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F7E0u;
    if (runtime->hasFunction(0x23F7E0u)) {
        auto targetFn = runtime->lookupFunction(0x23F7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249BD4u; }
        if (ctx->pc != 0x249BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuFormUpdataAttachInfo__FP16CMenuPosDataFormP13CGameDataUsediiPs_0x23f7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249BD4u; }
        if (ctx->pc != 0x249BD4u) { return; }
    }
    ctx->pc = 0x249BD4u;
label_249bd4:
    // 0x249bd4: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x249bd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_249bd8:
    // 0x249bd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x249bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_249bdc:
    // 0x249bdc: 0x14620042  bne         $v1, $v0, . + 4 + (0x42 << 2)
label_249be0:
    if (ctx->pc == 0x249BE0u) {
        ctx->pc = 0x249BE4u;
        goto label_249be4;
    }
    ctx->pc = 0x249BDCu;
    {
        const bool branch_taken_0x249bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x249bdc) {
            ctx->pc = 0x249CE8u;
            goto label_249ce8;
        }
    }
    ctx->pc = 0x249BE4u;
label_249be4:
    // 0x249be4: 0x83829740  lb          $v0, -0x68C0($gp)
    ctx->pc = 0x249be4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940480)));
label_249be8:
    // 0x249be8: 0x2841001f  slti        $at, $v0, 0x1F
    ctx->pc = 0x249be8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
label_249bec:
    // 0x249bec: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_249bf0:
    if (ctx->pc == 0x249BF0u) {
        ctx->pc = 0x249BF0u;
            // 0x249bf0: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x249BF4u;
        goto label_249bf4;
    }
    ctx->pc = 0x249BECu;
    {
        const bool branch_taken_0x249bec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x249BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249BECu;
            // 0x249bf0: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249bec) {
            ctx->pc = 0x249BF8u;
            goto label_249bf8;
        }
    }
    ctx->pc = 0x249BF4u;
label_249bf4:
    // 0x249bf4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x249bf4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249bf8:
    // 0x249bf8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x249bf8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249bfc:
    // 0x249bfc: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x249bfcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249c00:
    // 0x249c00: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x249c00u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249c04:
    // 0x249c04: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x249c04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_249c08:
    // 0x249c08: 0x3c0901ed  lui         $t1, 0x1ED
    ctx->pc = 0x249c08u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)493 << 16));
label_249c0c:
    // 0x249c0c: 0x3c0701ed  lui         $a3, 0x1ED
    ctx->pc = 0x249c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)493 << 16));
label_249c10:
    // 0x249c10: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x249c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_249c14:
    // 0x249c14: 0x240300a4  addiu       $v1, $zero, 0xA4
    ctx->pc = 0x249c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
label_249c18:
    // 0x249c18: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x249c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_249c1c:
    // 0x249c1c: 0x24a5dd50  addiu       $a1, $a1, -0x22B0
    ctx->pc = 0x249c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958416));
label_249c20:
    // 0x249c20: 0x2529dac0  addiu       $t1, $t1, -0x2540
    ctx->pc = 0x249c20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957760));
label_249c24:
    // 0x249c24: 0x24e7daf0  addiu       $a3, $a3, -0x2510
    ctx->pc = 0x249c24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957808));
label_249c28:
    // 0x249c28: 0x12d4021  addu        $t0, $t1, $t5
    ctx->pc = 0x249c28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
label_249c2c:
    // 0x249c2c: 0xed1021  addu        $v0, $a3, $t5
    ctx->pc = 0x249c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
label_249c30:
    // 0x249c30: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x249c30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_249c34:
    // 0x249c34: 0x11000016  beqz        $t0, . + 4 + (0x16 << 2)
label_249c38:
    if (ctx->pc == 0x249C38u) {
        ctx->pc = 0x249C38u;
            // 0x249c38: 0x8c4c0000  lw          $t4, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x249C3Cu;
        goto label_249c3c;
    }
    ctx->pc = 0x249C34u;
    {
        const bool branch_taken_0x249c34 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x249C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249C34u;
            // 0x249c38: 0x8c4c0000  lw          $t4, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c34) {
            ctx->pc = 0x249C90u;
            goto label_249c90;
        }
    }
    ctx->pc = 0x249C3Cu;
label_249c3c:
    // 0x249c3c: 0x11800014  beqz        $t4, . + 4 + (0x14 << 2)
label_249c40:
    if (ctx->pc == 0x249C40u) {
        ctx->pc = 0x249C44u;
        goto label_249c44;
    }
    ctx->pc = 0x249C3Cu;
    {
        const bool branch_taken_0x249c3c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x249c3c) {
            ctx->pc = 0x249C90u;
            goto label_249c90;
        }
    }
    ctx->pc = 0x249C44u;
label_249c44:
    // 0x249c44: 0xa1060007  sb          $a2, 0x7($t0)
    ctx->pc = 0x249c44u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 6));
label_249c48:
    // 0x249c48: 0xae1021  addu        $v0, $a1, $t6
    ctx->pc = 0x249c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
label_249c4c:
    // 0x249c4c: 0xa1060008  sb          $a2, 0x8($t0)
    ctx->pc = 0x249c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 8), (uint8_t)GPR_U32(ctx, 6));
label_249c50:
    // 0x249c50: 0xa1060009  sb          $a2, 0x9($t0)
    ctx->pc = 0x249c50u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 9), (uint8_t)GPR_U32(ctx, 6));
label_249c54:
    // 0x249c54: 0xa1860007  sb          $a2, 0x7($t4)
    ctx->pc = 0x249c54u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 7), (uint8_t)GPR_U32(ctx, 6));
label_249c58:
    // 0x249c58: 0xa1860008  sb          $a2, 0x8($t4)
    ctx->pc = 0x249c58u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 8), (uint8_t)GPR_U32(ctx, 6));
label_249c5c:
    // 0x249c5c: 0xa1860009  sb          $a2, 0x9($t4)
    ctx->pc = 0x249c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 9), (uint8_t)GPR_U32(ctx, 6));
label_249c60:
    // 0x249c60: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x249c60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_249c64:
    // 0x249c64: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x249c64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_249c68:
    // 0x249c68: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_249c6c:
    if (ctx->pc == 0x249C6Cu) {
        ctx->pc = 0x249C70u;
        goto label_249c70;
    }
    ctx->pc = 0x249C68u;
    {
        const bool branch_taken_0x249c68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x249c68) {
            ctx->pc = 0x249C90u;
            goto label_249c90;
        }
    }
    ctx->pc = 0x249C70u;
label_249c70:
    // 0x249c70: 0x11600007  beqz        $t3, . + 4 + (0x7 << 2)
label_249c74:
    if (ctx->pc == 0x249C74u) {
        ctx->pc = 0x249C78u;
        goto label_249c78;
    }
    ctx->pc = 0x249C70u;
    {
        const bool branch_taken_0x249c70 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x249c70) {
            ctx->pc = 0x249C90u;
            goto label_249c90;
        }
    }
    ctx->pc = 0x249C78u;
label_249c78:
    // 0x249c78: 0xa1040007  sb          $a0, 0x7($t0)
    ctx->pc = 0x249c78u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 4));
label_249c7c:
    // 0x249c7c: 0xa1040008  sb          $a0, 0x8($t0)
    ctx->pc = 0x249c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 8), (uint8_t)GPR_U32(ctx, 4));
label_249c80:
    // 0x249c80: 0xa1030009  sb          $v1, 0x9($t0)
    ctx->pc = 0x249c80u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 9), (uint8_t)GPR_U32(ctx, 3));
label_249c84:
    // 0x249c84: 0xa1840007  sb          $a0, 0x7($t4)
    ctx->pc = 0x249c84u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 7), (uint8_t)GPR_U32(ctx, 4));
label_249c88:
    // 0x249c88: 0xa1840008  sb          $a0, 0x8($t4)
    ctx->pc = 0x249c88u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 8), (uint8_t)GPR_U32(ctx, 4));
label_249c8c:
    // 0x249c8c: 0xa1830009  sb          $v1, 0x9($t4)
    ctx->pc = 0x249c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 9), (uint8_t)GPR_U32(ctx, 3));
label_249c90:
    // 0x249c90: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x249c90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_249c94:
    // 0x249c94: 0x2942000a  slti        $v0, $t2, 0xA
    ctx->pc = 0x249c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)10) ? 1 : 0);
label_249c98:
    // 0x249c98: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x249c98u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
label_249c9c:
    // 0x249c9c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_249ca0:
    if (ctx->pc == 0x249CA0u) {
        ctx->pc = 0x249CA0u;
            // 0x249ca0: 0x25ce0002  addiu       $t6, $t6, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
        ctx->pc = 0x249CA4u;
        goto label_249ca4;
    }
    ctx->pc = 0x249C9Cu;
    {
        const bool branch_taken_0x249c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249C9Cu;
            // 0x249ca0: 0x25ce0002  addiu       $t6, $t6, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c9c) {
            ctx->pc = 0x249C28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_249c28;
        }
    }
    ctx->pc = 0x249CA4u;
label_249ca4:
    // 0x249ca4: 0x10000010  b           . + 4 + (0x10 << 2)
label_249ca8:
    if (ctx->pc == 0x249CA8u) {
        ctx->pc = 0x249CACu;
        goto label_249cac;
    }
    ctx->pc = 0x249CA4u;
    {
        const bool branch_taken_0x249ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249ca4) {
            ctx->pc = 0x249CE8u;
            goto label_249ce8;
        }
    }
    ctx->pc = 0x249CACu;
label_249cac:
    // 0x249cac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x249cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_249cb0:
    // 0x249cb0: 0x1663000d  bne         $s3, $v1, . + 4 + (0xD << 2)
label_249cb4:
    if (ctx->pc == 0x249CB4u) {
        ctx->pc = 0x249CB8u;
        goto label_249cb8;
    }
    ctx->pc = 0x249CB0u;
    {
        const bool branch_taken_0x249cb0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x249cb0) {
            ctx->pc = 0x249CE8u;
            goto label_249ce8;
        }
    }
    ctx->pc = 0x249CB8u;
label_249cb8:
    // 0x249cb8: 0x86020110  lh          $v0, 0x110($s0)
    ctx->pc = 0x249cb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_249cbc:
    // 0x249cbc: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_249cc0:
    if (ctx->pc == 0x249CC0u) {
        ctx->pc = 0x249CC4u;
        goto label_249cc4;
    }
    ctx->pc = 0x249CBCu;
    {
        const bool branch_taken_0x249cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x249cbc) {
            ctx->pc = 0x249CE8u;
            goto label_249ce8;
        }
    }
    ctx->pc = 0x249CC4u;
label_249cc4:
    // 0x249cc4: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x249cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_249cc8:
    // 0x249cc8: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x249cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_249ccc:
    // 0x249ccc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_249cd0:
    if (ctx->pc == 0x249CD0u) {
        ctx->pc = 0x249CD4u;
        goto label_249cd4;
    }
    ctx->pc = 0x249CCCu;
    {
        const bool branch_taken_0x249ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x249ccc) {
            ctx->pc = 0x249CE8u;
            goto label_249ce8;
        }
    }
    ctx->pc = 0x249CD4u;
label_249cd4:
    // 0x249cd4: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x249cd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_249cd8:
    // 0x249cd8: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_249cdc:
    if (ctx->pc == 0x249CDCu) {
        ctx->pc = 0x249CDCu;
            // 0x249cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x249CE0u;
        goto label_249ce0;
    }
    ctx->pc = 0x249CD8u;
    {
        const bool branch_taken_0x249cd8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x249CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249CD8u;
            // 0x249cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249cd8) {
            ctx->pc = 0x249CE8u;
            goto label_249ce8;
        }
    }
    ctx->pc = 0x249CE0u;
label_249ce0:
    // 0x249ce0: 0xc0901a4  jal         func_240690
label_249ce4:
    if (ctx->pc == 0x249CE4u) {
        ctx->pc = 0x249CE4u;
            // 0x249ce4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x249CE8u;
        goto label_249ce8;
    }
    ctx->pc = 0x249CE0u;
    SET_GPR_U32(ctx, 31, 0x249CE8u);
    ctx->pc = 0x249CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249CE0u;
            // 0x249ce4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240690u;
    if (runtime->hasFunction(0x240690u)) {
        auto targetFn = runtime->lookupFunction(0x240690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249CE8u; }
        if (ctx->pc != 0x249CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnActiveCharaViewMode__13CMenuItemInfoFi_0x240690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249CE8u; }
        if (ctx->pc != 0x249CE8u) { return; }
    }
    ctx->pc = 0x249CE8u;
label_249ce8:
    // 0x249ce8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x249ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_249cec:
    // 0x249cec: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
label_249cf0:
    if (ctx->pc == 0x249CF0u) {
        ctx->pc = 0x249CF0u;
            // 0x249cf0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x249CF4u;
        goto label_249cf4;
    }
    ctx->pc = 0x249CECu;
    {
        const bool branch_taken_0x249cec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x249CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249CECu;
            // 0x249cf0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249cec) {
            ctx->pc = 0x249D14u;
            goto label_249d14;
        }
    }
    ctx->pc = 0x249CF4u;
label_249cf4:
    // 0x249cf4: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_249cf8:
    if (ctx->pc == 0x249CF8u) {
        ctx->pc = 0x249CFCu;
        goto label_249cfc;
    }
    ctx->pc = 0x249CF4u;
    {
        const bool branch_taken_0x249cf4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x249cf4) {
            ctx->pc = 0x249D10u;
            goto label_249d10;
        }
    }
    ctx->pc = 0x249CFCu;
label_249cfc:
    // 0x249cfc: 0x8f849598  lw          $a0, -0x6A68($gp)
    ctx->pc = 0x249cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940056)));
label_249d00:
    // 0x249d00: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_249d04:
    if (ctx->pc == 0x249D04u) {
        ctx->pc = 0x249D04u;
            // 0x249d04: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x249D08u;
        goto label_249d08;
    }
    ctx->pc = 0x249D00u;
    {
        const bool branch_taken_0x249d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249D00u;
            // 0x249d04: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d00) {
            ctx->pc = 0x249D10u;
            goto label_249d10;
        }
    }
    ctx->pc = 0x249D08u;
label_249d08:
    // 0x249d08: 0xc08a240  jal         func_228900
label_249d0c:
    if (ctx->pc == 0x249D0Cu) {
        ctx->pc = 0x249D0Cu;
            // 0x249d0c: 0x24a5b1d0  addiu       $a1, $a1, -0x4E30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947280));
        ctx->pc = 0x249D10u;
        goto label_249d10;
    }
    ctx->pc = 0x249D08u;
    SET_GPR_U32(ctx, 31, 0x249D10u);
    ctx->pc = 0x249D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249D08u;
            // 0x249d0c: 0x24a5b1d0  addiu       $a1, $a1, -0x4E30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228900u;
    if (runtime->hasFunction(0x228900u)) {
        auto targetFn = runtime->lookupFunction(0x228900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249D10u; }
        if (ctx->pc != 0x249D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAction__16CMenuPosDataFormFPc_0x228900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249D10u; }
        if (ctx->pc != 0x249D10u) { return; }
    }
    ctx->pc = 0x249D10u;
label_249d10:
    // 0x249d10: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x249d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_249d14:
    // 0x249d14: 0x1622000e  bne         $s1, $v0, . + 4 + (0xE << 2)
label_249d18:
    if (ctx->pc == 0x249D18u) {
        ctx->pc = 0x249D1Cu;
        goto label_249d1c;
    }
    ctx->pc = 0x249D14u;
    {
        const bool branch_taken_0x249d14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x249d14) {
            ctx->pc = 0x249D50u;
            goto label_249d50;
        }
    }
    ctx->pc = 0x249D1Cu;
label_249d1c:
    // 0x249d1c: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
label_249d20:
    if (ctx->pc == 0x249D20u) {
        ctx->pc = 0x249D24u;
        goto label_249d24;
    }
    ctx->pc = 0x249D1Cu;
    {
        const bool branch_taken_0x249d1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x249d1c) {
            ctx->pc = 0x249D50u;
            goto label_249d50;
        }
    }
    ctx->pc = 0x249D24u;
label_249d24:
    // 0x249d24: 0x8f849598  lw          $a0, -0x6A68($gp)
    ctx->pc = 0x249d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940056)));
label_249d28:
    // 0x249d28: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_249d2c:
    if (ctx->pc == 0x249D2Cu) {
        ctx->pc = 0x249D2Cu;
            // 0x249d2c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x249D30u;
        goto label_249d30;
    }
    ctx->pc = 0x249D28u;
    {
        const bool branch_taken_0x249d28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249D28u;
            // 0x249d2c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d28) {
            ctx->pc = 0x249D38u;
            goto label_249d38;
        }
    }
    ctx->pc = 0x249D30u;
label_249d30:
    // 0x249d30: 0xc08a240  jal         func_228900
label_249d34:
    if (ctx->pc == 0x249D34u) {
        ctx->pc = 0x249D34u;
            // 0x249d34: 0x24a5b1d0  addiu       $a1, $a1, -0x4E30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947280));
        ctx->pc = 0x249D38u;
        goto label_249d38;
    }
    ctx->pc = 0x249D30u;
    SET_GPR_U32(ctx, 31, 0x249D38u);
    ctx->pc = 0x249D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249D30u;
            // 0x249d34: 0x24a5b1d0  addiu       $a1, $a1, -0x4E30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228900u;
    if (runtime->hasFunction(0x228900u)) {
        auto targetFn = runtime->lookupFunction(0x228900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249D38u; }
        if (ctx->pc != 0x249D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAction__16CMenuPosDataFormFPc_0x228900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249D38u; }
        if (ctx->pc != 0x249D38u) { return; }
    }
    ctx->pc = 0x249D38u;
label_249d38:
    // 0x249d38: 0x8f82959c  lw          $v0, -0x6A64($gp)
    ctx->pc = 0x249d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940060)));
label_249d3c:
    // 0x249d3c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_249d40:
    if (ctx->pc == 0x249D40u) {
        ctx->pc = 0x249D40u;
            // 0x249d40: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x249D44u;
        goto label_249d44;
    }
    ctx->pc = 0x249D3Cu;
    {
        const bool branch_taken_0x249d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249D3Cu;
            // 0x249d40: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d3c) {
            ctx->pc = 0x249D48u;
            goto label_249d48;
        }
    }
    ctx->pc = 0x249D44u;
label_249d44:
    // 0x249d44: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x249d44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_249d48:
    // 0x249d48: 0x8c22ca50  lw          $v0, -0x35B0($at)
    ctx->pc = 0x249d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953552)));
label_249d4c:
    // 0x249d4c: 0xa04021e9  sb          $zero, 0x21E9($v0)
    ctx->pc = 0x249d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8681), (uint8_t)GPR_U32(ctx, 0));
label_249d50:
    // 0x249d50: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x249d50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_249d54:
    // 0x249d54: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_249d58:
    if (ctx->pc == 0x249D58u) {
        ctx->pc = 0x249D5Cu;
        goto label_249d5c;
    }
    ctx->pc = 0x249D54u;
    {
        const bool branch_taken_0x249d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249d54) {
            ctx->pc = 0x249E20u;
            goto label_249e20;
        }
    }
    ctx->pc = 0x249D5Cu;
label_249d5c:
    // 0x249d5c: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x249d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_249d60:
    // 0x249d60: 0x8c430138  lw          $v1, 0x138($v0)
    ctx->pc = 0x249d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_249d64:
    // 0x249d64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_249d68:
    if (ctx->pc == 0x249D68u) {
        ctx->pc = 0x249D68u;
            // 0x249d68: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x249D6Cu;
        goto label_249d6c;
    }
    ctx->pc = 0x249D64u;
    {
        const bool branch_taken_0x249d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249D64u;
            // 0x249d68: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d64) {
            ctx->pc = 0x249D78u;
            goto label_249d78;
        }
    }
    ctx->pc = 0x249D6Cu;
label_249d6c:
    // 0x249d6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249d70:
    // 0x249d70: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x249d70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_249d74:
    // 0x249d74: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x249d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_249d78:
    // 0x249d78: 0x1622000f  bne         $s1, $v0, . + 4 + (0xF << 2)
label_249d7c:
    if (ctx->pc == 0x249D7Cu) {
        ctx->pc = 0x249D7Cu;
            // 0x249d7c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x249D80u;
        goto label_249d80;
    }
    ctx->pc = 0x249D78u;
    {
        const bool branch_taken_0x249d78 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x249D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249D78u;
            // 0x249d7c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d78) {
            ctx->pc = 0x249DB8u;
            goto label_249db8;
        }
    }
    ctx->pc = 0x249D80u;
label_249d80:
    // 0x249d80: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x249d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_249d84:
    // 0x249d84: 0x1662000b  bne         $s3, $v0, . + 4 + (0xB << 2)
label_249d88:
    if (ctx->pc == 0x249D88u) {
        ctx->pc = 0x249D8Cu;
        goto label_249d8c;
    }
    ctx->pc = 0x249D84u;
    {
        const bool branch_taken_0x249d84 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x249d84) {
            ctx->pc = 0x249DB4u;
            goto label_249db4;
        }
    }
    ctx->pc = 0x249D8Cu;
label_249d8c:
    // 0x249d8c: 0x86030110  lh          $v1, 0x110($s0)
    ctx->pc = 0x249d8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_249d90:
    // 0x249d90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x249d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_249d94:
    // 0x249d94: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_249d98:
    if (ctx->pc == 0x249D98u) {
        ctx->pc = 0x249D9Cu;
        goto label_249d9c;
    }
    ctx->pc = 0x249D94u;
    {
        const bool branch_taken_0x249d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x249d94) {
            ctx->pc = 0x249DB4u;
            goto label_249db4;
        }
    }
    ctx->pc = 0x249D9Cu;
label_249d9c:
    // 0x249d9c: 0x8e03017c  lw          $v1, 0x17C($s0)
    ctx->pc = 0x249d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_249da0:
    // 0x249da0: 0x8f82973c  lw          $v0, -0x68C4($gp)
    ctx->pc = 0x249da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940476)));
label_249da4:
    // 0x249da4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_249da8:
    if (ctx->pc == 0x249DA8u) {
        ctx->pc = 0x249DA8u;
            // 0x249da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x249DACu;
        goto label_249dac;
    }
    ctx->pc = 0x249DA4u;
    {
        const bool branch_taken_0x249da4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x249DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249DA4u;
            // 0x249da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249da4) {
            ctx->pc = 0x249DB4u;
            goto label_249db4;
        }
    }
    ctx->pc = 0x249DACu;
label_249dac:
    // 0x249dac: 0xc0901a4  jal         func_240690
label_249db0:
    if (ctx->pc == 0x249DB0u) {
        ctx->pc = 0x249DB0u;
            // 0x249db0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x249DB4u;
        goto label_249db4;
    }
    ctx->pc = 0x249DACu;
    SET_GPR_U32(ctx, 31, 0x249DB4u);
    ctx->pc = 0x249DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249DACu;
            // 0x249db0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240690u;
    if (runtime->hasFunction(0x240690u)) {
        auto targetFn = runtime->lookupFunction(0x240690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249DB4u; }
        if (ctx->pc != 0x249DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnActiveCharaViewMode__13CMenuItemInfoFi_0x240690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249DB4u; }
        if (ctx->pc != 0x249DB4u) { return; }
    }
    ctx->pc = 0x249DB4u;
label_249db4:
    // 0x249db4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x249db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_249db8:
    // 0x249db8: 0x16220019  bne         $s1, $v0, . + 4 + (0x19 << 2)
label_249dbc:
    if (ctx->pc == 0x249DBCu) {
        ctx->pc = 0x249DBCu;
            // 0x249dbc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x249DC0u;
        goto label_249dc0;
    }
    ctx->pc = 0x249DB8u;
    {
        const bool branch_taken_0x249db8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x249DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249DB8u;
            // 0x249dbc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249db8) {
            ctx->pc = 0x249E20u;
            goto label_249e20;
        }
    }
    ctx->pc = 0x249DC0u;
label_249dc0:
    // 0x249dc0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x249dc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249dc4:
    // 0x249dc4: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x249dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
label_249dc8:
    // 0x249dc8: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x249dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_249dcc:
    // 0x249dcc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x249dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_249dd0:
    // 0x249dd0: 0x24c6dac0  addiu       $a2, $a2, -0x2540
    ctx->pc = 0x249dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957760));
label_249dd4:
    // 0x249dd4: 0x2484daf0  addiu       $a0, $a0, -0x2510
    ctx->pc = 0x249dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957808));
label_249dd8:
    // 0x249dd8: 0xc82821  addu        $a1, $a2, $t0
    ctx->pc = 0x249dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_249ddc:
    // 0x249ddc: 0x881021  addu        $v0, $a0, $t0
    ctx->pc = 0x249ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_249de0:
    // 0x249de0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x249de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_249de4:
    // 0x249de4: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_249de8:
    if (ctx->pc == 0x249DE8u) {
        ctx->pc = 0x249DE8u;
            // 0x249de8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x249DECu;
        goto label_249dec;
    }
    ctx->pc = 0x249DE4u;
    {
        const bool branch_taken_0x249de4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x249DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249DE4u;
            // 0x249de8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249de4) {
            ctx->pc = 0x249E0Cu;
            goto label_249e0c;
        }
    }
    ctx->pc = 0x249DECu;
label_249dec:
    // 0x249dec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_249df0:
    if (ctx->pc == 0x249DF0u) {
        ctx->pc = 0x249DF4u;
        goto label_249df4;
    }
    ctx->pc = 0x249DECu;
    {
        const bool branch_taken_0x249dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249dec) {
            ctx->pc = 0x249E0Cu;
            goto label_249e0c;
        }
    }
    ctx->pc = 0x249DF4u;
label_249df4:
    // 0x249df4: 0xa0a30007  sb          $v1, 0x7($a1)
    ctx->pc = 0x249df4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 3));
label_249df8:
    // 0x249df8: 0xa0a30008  sb          $v1, 0x8($a1)
    ctx->pc = 0x249df8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 3));
label_249dfc:
    // 0x249dfc: 0xa0a30009  sb          $v1, 0x9($a1)
    ctx->pc = 0x249dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 3));
label_249e00:
    // 0x249e00: 0xa0430007  sb          $v1, 0x7($v0)
    ctx->pc = 0x249e00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 3));
label_249e04:
    // 0x249e04: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x249e04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
label_249e08:
    // 0x249e08: 0xa0430009  sb          $v1, 0x9($v0)
    ctx->pc = 0x249e08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 3));
label_249e0c:
    // 0x249e0c: 0x0  nop
    ctx->pc = 0x249e0cu;
    // NOP
label_249e10:
    // 0x249e10: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x249e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_249e14:
    // 0x249e14: 0x28e2000a  slti        $v0, $a3, 0xA
    ctx->pc = 0x249e14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
label_249e18:
    // 0x249e18: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_249e1c:
    if (ctx->pc == 0x249E1Cu) {
        ctx->pc = 0x249E1Cu;
            // 0x249e1c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->pc = 0x249E20u;
        goto label_249e20;
    }
    ctx->pc = 0x249E18u;
    {
        const bool branch_taken_0x249e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249E18u;
            // 0x249e1c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e18) {
            ctx->pc = 0x249DD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_249dd8;
        }
    }
    ctx->pc = 0x249E20u;
label_249e20:
    // 0x249e20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249e24:
    // 0x249e24: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x249e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_249e28:
    // 0x249e28: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x249e28u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_249e2c:
    // 0x249e2c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x249e2cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_249e30:
    // 0x249e30: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x249e30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_249e34:
    // 0x249e34: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x249e34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_249e38:
    // 0x249e38: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x249e38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_249e3c:
    // 0x249e3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x249e3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_249e40:
    // 0x249e40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x249e40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_249e44:
    // 0x249e44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x249e44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_249e48:
    // 0x249e48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x249e48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_249e4c:
    // 0x249e4c: 0x3e00008  jr          $ra
label_249e50:
    if (ctx->pc == 0x249E50u) {
        ctx->pc = 0x249E50u;
            // 0x249e50: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = 0x249E54u;
        goto label_fallthrough_0x249e4c;
    }
    ctx->pc = 0x249E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249E4Cu;
            // 0x249e50: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x249e4c:
    ctx->pc = 0x249E54u;
}
