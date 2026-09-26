#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadData__8CEditMapFP9CEditData
// Address: 0x2a9110 - 0x2a97f0
void LoadData__8CEditMapFP9CEditData_0x2a9110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadData__8CEditMapFP9CEditData_0x2a9110");
#endif

    switch (ctx->pc) {
        case 0x2a9110u: goto label_2a9110;
        case 0x2a9114u: goto label_2a9114;
        case 0x2a9118u: goto label_2a9118;
        case 0x2a911cu: goto label_2a911c;
        case 0x2a9120u: goto label_2a9120;
        case 0x2a9124u: goto label_2a9124;
        case 0x2a9128u: goto label_2a9128;
        case 0x2a912cu: goto label_2a912c;
        case 0x2a9130u: goto label_2a9130;
        case 0x2a9134u: goto label_2a9134;
        case 0x2a9138u: goto label_2a9138;
        case 0x2a913cu: goto label_2a913c;
        case 0x2a9140u: goto label_2a9140;
        case 0x2a9144u: goto label_2a9144;
        case 0x2a9148u: goto label_2a9148;
        case 0x2a914cu: goto label_2a914c;
        case 0x2a9150u: goto label_2a9150;
        case 0x2a9154u: goto label_2a9154;
        case 0x2a9158u: goto label_2a9158;
        case 0x2a915cu: goto label_2a915c;
        case 0x2a9160u: goto label_2a9160;
        case 0x2a9164u: goto label_2a9164;
        case 0x2a9168u: goto label_2a9168;
        case 0x2a916cu: goto label_2a916c;
        case 0x2a9170u: goto label_2a9170;
        case 0x2a9174u: goto label_2a9174;
        case 0x2a9178u: goto label_2a9178;
        case 0x2a917cu: goto label_2a917c;
        case 0x2a9180u: goto label_2a9180;
        case 0x2a9184u: goto label_2a9184;
        case 0x2a9188u: goto label_2a9188;
        case 0x2a918cu: goto label_2a918c;
        case 0x2a9190u: goto label_2a9190;
        case 0x2a9194u: goto label_2a9194;
        case 0x2a9198u: goto label_2a9198;
        case 0x2a919cu: goto label_2a919c;
        case 0x2a91a0u: goto label_2a91a0;
        case 0x2a91a4u: goto label_2a91a4;
        case 0x2a91a8u: goto label_2a91a8;
        case 0x2a91acu: goto label_2a91ac;
        case 0x2a91b0u: goto label_2a91b0;
        case 0x2a91b4u: goto label_2a91b4;
        case 0x2a91b8u: goto label_2a91b8;
        case 0x2a91bcu: goto label_2a91bc;
        case 0x2a91c0u: goto label_2a91c0;
        case 0x2a91c4u: goto label_2a91c4;
        case 0x2a91c8u: goto label_2a91c8;
        case 0x2a91ccu: goto label_2a91cc;
        case 0x2a91d0u: goto label_2a91d0;
        case 0x2a91d4u: goto label_2a91d4;
        case 0x2a91d8u: goto label_2a91d8;
        case 0x2a91dcu: goto label_2a91dc;
        case 0x2a91e0u: goto label_2a91e0;
        case 0x2a91e4u: goto label_2a91e4;
        case 0x2a91e8u: goto label_2a91e8;
        case 0x2a91ecu: goto label_2a91ec;
        case 0x2a91f0u: goto label_2a91f0;
        case 0x2a91f4u: goto label_2a91f4;
        case 0x2a91f8u: goto label_2a91f8;
        case 0x2a91fcu: goto label_2a91fc;
        case 0x2a9200u: goto label_2a9200;
        case 0x2a9204u: goto label_2a9204;
        case 0x2a9208u: goto label_2a9208;
        case 0x2a920cu: goto label_2a920c;
        case 0x2a9210u: goto label_2a9210;
        case 0x2a9214u: goto label_2a9214;
        case 0x2a9218u: goto label_2a9218;
        case 0x2a921cu: goto label_2a921c;
        case 0x2a9220u: goto label_2a9220;
        case 0x2a9224u: goto label_2a9224;
        case 0x2a9228u: goto label_2a9228;
        case 0x2a922cu: goto label_2a922c;
        case 0x2a9230u: goto label_2a9230;
        case 0x2a9234u: goto label_2a9234;
        case 0x2a9238u: goto label_2a9238;
        case 0x2a923cu: goto label_2a923c;
        case 0x2a9240u: goto label_2a9240;
        case 0x2a9244u: goto label_2a9244;
        case 0x2a9248u: goto label_2a9248;
        case 0x2a924cu: goto label_2a924c;
        case 0x2a9250u: goto label_2a9250;
        case 0x2a9254u: goto label_2a9254;
        case 0x2a9258u: goto label_2a9258;
        case 0x2a925cu: goto label_2a925c;
        case 0x2a9260u: goto label_2a9260;
        case 0x2a9264u: goto label_2a9264;
        case 0x2a9268u: goto label_2a9268;
        case 0x2a926cu: goto label_2a926c;
        case 0x2a9270u: goto label_2a9270;
        case 0x2a9274u: goto label_2a9274;
        case 0x2a9278u: goto label_2a9278;
        case 0x2a927cu: goto label_2a927c;
        case 0x2a9280u: goto label_2a9280;
        case 0x2a9284u: goto label_2a9284;
        case 0x2a9288u: goto label_2a9288;
        case 0x2a928cu: goto label_2a928c;
        case 0x2a9290u: goto label_2a9290;
        case 0x2a9294u: goto label_2a9294;
        case 0x2a9298u: goto label_2a9298;
        case 0x2a929cu: goto label_2a929c;
        case 0x2a92a0u: goto label_2a92a0;
        case 0x2a92a4u: goto label_2a92a4;
        case 0x2a92a8u: goto label_2a92a8;
        case 0x2a92acu: goto label_2a92ac;
        case 0x2a92b0u: goto label_2a92b0;
        case 0x2a92b4u: goto label_2a92b4;
        case 0x2a92b8u: goto label_2a92b8;
        case 0x2a92bcu: goto label_2a92bc;
        case 0x2a92c0u: goto label_2a92c0;
        case 0x2a92c4u: goto label_2a92c4;
        case 0x2a92c8u: goto label_2a92c8;
        case 0x2a92ccu: goto label_2a92cc;
        case 0x2a92d0u: goto label_2a92d0;
        case 0x2a92d4u: goto label_2a92d4;
        case 0x2a92d8u: goto label_2a92d8;
        case 0x2a92dcu: goto label_2a92dc;
        case 0x2a92e0u: goto label_2a92e0;
        case 0x2a92e4u: goto label_2a92e4;
        case 0x2a92e8u: goto label_2a92e8;
        case 0x2a92ecu: goto label_2a92ec;
        case 0x2a92f0u: goto label_2a92f0;
        case 0x2a92f4u: goto label_2a92f4;
        case 0x2a92f8u: goto label_2a92f8;
        case 0x2a92fcu: goto label_2a92fc;
        case 0x2a9300u: goto label_2a9300;
        case 0x2a9304u: goto label_2a9304;
        case 0x2a9308u: goto label_2a9308;
        case 0x2a930cu: goto label_2a930c;
        case 0x2a9310u: goto label_2a9310;
        case 0x2a9314u: goto label_2a9314;
        case 0x2a9318u: goto label_2a9318;
        case 0x2a931cu: goto label_2a931c;
        case 0x2a9320u: goto label_2a9320;
        case 0x2a9324u: goto label_2a9324;
        case 0x2a9328u: goto label_2a9328;
        case 0x2a932cu: goto label_2a932c;
        case 0x2a9330u: goto label_2a9330;
        case 0x2a9334u: goto label_2a9334;
        case 0x2a9338u: goto label_2a9338;
        case 0x2a933cu: goto label_2a933c;
        case 0x2a9340u: goto label_2a9340;
        case 0x2a9344u: goto label_2a9344;
        case 0x2a9348u: goto label_2a9348;
        case 0x2a934cu: goto label_2a934c;
        case 0x2a9350u: goto label_2a9350;
        case 0x2a9354u: goto label_2a9354;
        case 0x2a9358u: goto label_2a9358;
        case 0x2a935cu: goto label_2a935c;
        case 0x2a9360u: goto label_2a9360;
        case 0x2a9364u: goto label_2a9364;
        case 0x2a9368u: goto label_2a9368;
        case 0x2a936cu: goto label_2a936c;
        case 0x2a9370u: goto label_2a9370;
        case 0x2a9374u: goto label_2a9374;
        case 0x2a9378u: goto label_2a9378;
        case 0x2a937cu: goto label_2a937c;
        case 0x2a9380u: goto label_2a9380;
        case 0x2a9384u: goto label_2a9384;
        case 0x2a9388u: goto label_2a9388;
        case 0x2a938cu: goto label_2a938c;
        case 0x2a9390u: goto label_2a9390;
        case 0x2a9394u: goto label_2a9394;
        case 0x2a9398u: goto label_2a9398;
        case 0x2a939cu: goto label_2a939c;
        case 0x2a93a0u: goto label_2a93a0;
        case 0x2a93a4u: goto label_2a93a4;
        case 0x2a93a8u: goto label_2a93a8;
        case 0x2a93acu: goto label_2a93ac;
        case 0x2a93b0u: goto label_2a93b0;
        case 0x2a93b4u: goto label_2a93b4;
        case 0x2a93b8u: goto label_2a93b8;
        case 0x2a93bcu: goto label_2a93bc;
        case 0x2a93c0u: goto label_2a93c0;
        case 0x2a93c4u: goto label_2a93c4;
        case 0x2a93c8u: goto label_2a93c8;
        case 0x2a93ccu: goto label_2a93cc;
        case 0x2a93d0u: goto label_2a93d0;
        case 0x2a93d4u: goto label_2a93d4;
        case 0x2a93d8u: goto label_2a93d8;
        case 0x2a93dcu: goto label_2a93dc;
        case 0x2a93e0u: goto label_2a93e0;
        case 0x2a93e4u: goto label_2a93e4;
        case 0x2a93e8u: goto label_2a93e8;
        case 0x2a93ecu: goto label_2a93ec;
        case 0x2a93f0u: goto label_2a93f0;
        case 0x2a93f4u: goto label_2a93f4;
        case 0x2a93f8u: goto label_2a93f8;
        case 0x2a93fcu: goto label_2a93fc;
        case 0x2a9400u: goto label_2a9400;
        case 0x2a9404u: goto label_2a9404;
        case 0x2a9408u: goto label_2a9408;
        case 0x2a940cu: goto label_2a940c;
        case 0x2a9410u: goto label_2a9410;
        case 0x2a9414u: goto label_2a9414;
        case 0x2a9418u: goto label_2a9418;
        case 0x2a941cu: goto label_2a941c;
        case 0x2a9420u: goto label_2a9420;
        case 0x2a9424u: goto label_2a9424;
        case 0x2a9428u: goto label_2a9428;
        case 0x2a942cu: goto label_2a942c;
        case 0x2a9430u: goto label_2a9430;
        case 0x2a9434u: goto label_2a9434;
        case 0x2a9438u: goto label_2a9438;
        case 0x2a943cu: goto label_2a943c;
        case 0x2a9440u: goto label_2a9440;
        case 0x2a9444u: goto label_2a9444;
        case 0x2a9448u: goto label_2a9448;
        case 0x2a944cu: goto label_2a944c;
        case 0x2a9450u: goto label_2a9450;
        case 0x2a9454u: goto label_2a9454;
        case 0x2a9458u: goto label_2a9458;
        case 0x2a945cu: goto label_2a945c;
        case 0x2a9460u: goto label_2a9460;
        case 0x2a9464u: goto label_2a9464;
        case 0x2a9468u: goto label_2a9468;
        case 0x2a946cu: goto label_2a946c;
        case 0x2a9470u: goto label_2a9470;
        case 0x2a9474u: goto label_2a9474;
        case 0x2a9478u: goto label_2a9478;
        case 0x2a947cu: goto label_2a947c;
        case 0x2a9480u: goto label_2a9480;
        case 0x2a9484u: goto label_2a9484;
        case 0x2a9488u: goto label_2a9488;
        case 0x2a948cu: goto label_2a948c;
        case 0x2a9490u: goto label_2a9490;
        case 0x2a9494u: goto label_2a9494;
        case 0x2a9498u: goto label_2a9498;
        case 0x2a949cu: goto label_2a949c;
        case 0x2a94a0u: goto label_2a94a0;
        case 0x2a94a4u: goto label_2a94a4;
        case 0x2a94a8u: goto label_2a94a8;
        case 0x2a94acu: goto label_2a94ac;
        case 0x2a94b0u: goto label_2a94b0;
        case 0x2a94b4u: goto label_2a94b4;
        case 0x2a94b8u: goto label_2a94b8;
        case 0x2a94bcu: goto label_2a94bc;
        case 0x2a94c0u: goto label_2a94c0;
        case 0x2a94c4u: goto label_2a94c4;
        case 0x2a94c8u: goto label_2a94c8;
        case 0x2a94ccu: goto label_2a94cc;
        case 0x2a94d0u: goto label_2a94d0;
        case 0x2a94d4u: goto label_2a94d4;
        case 0x2a94d8u: goto label_2a94d8;
        case 0x2a94dcu: goto label_2a94dc;
        case 0x2a94e0u: goto label_2a94e0;
        case 0x2a94e4u: goto label_2a94e4;
        case 0x2a94e8u: goto label_2a94e8;
        case 0x2a94ecu: goto label_2a94ec;
        case 0x2a94f0u: goto label_2a94f0;
        case 0x2a94f4u: goto label_2a94f4;
        case 0x2a94f8u: goto label_2a94f8;
        case 0x2a94fcu: goto label_2a94fc;
        case 0x2a9500u: goto label_2a9500;
        case 0x2a9504u: goto label_2a9504;
        case 0x2a9508u: goto label_2a9508;
        case 0x2a950cu: goto label_2a950c;
        case 0x2a9510u: goto label_2a9510;
        case 0x2a9514u: goto label_2a9514;
        case 0x2a9518u: goto label_2a9518;
        case 0x2a951cu: goto label_2a951c;
        case 0x2a9520u: goto label_2a9520;
        case 0x2a9524u: goto label_2a9524;
        case 0x2a9528u: goto label_2a9528;
        case 0x2a952cu: goto label_2a952c;
        case 0x2a9530u: goto label_2a9530;
        case 0x2a9534u: goto label_2a9534;
        case 0x2a9538u: goto label_2a9538;
        case 0x2a953cu: goto label_2a953c;
        case 0x2a9540u: goto label_2a9540;
        case 0x2a9544u: goto label_2a9544;
        case 0x2a9548u: goto label_2a9548;
        case 0x2a954cu: goto label_2a954c;
        case 0x2a9550u: goto label_2a9550;
        case 0x2a9554u: goto label_2a9554;
        case 0x2a9558u: goto label_2a9558;
        case 0x2a955cu: goto label_2a955c;
        case 0x2a9560u: goto label_2a9560;
        case 0x2a9564u: goto label_2a9564;
        case 0x2a9568u: goto label_2a9568;
        case 0x2a956cu: goto label_2a956c;
        case 0x2a9570u: goto label_2a9570;
        case 0x2a9574u: goto label_2a9574;
        case 0x2a9578u: goto label_2a9578;
        case 0x2a957cu: goto label_2a957c;
        case 0x2a9580u: goto label_2a9580;
        case 0x2a9584u: goto label_2a9584;
        case 0x2a9588u: goto label_2a9588;
        case 0x2a958cu: goto label_2a958c;
        case 0x2a9590u: goto label_2a9590;
        case 0x2a9594u: goto label_2a9594;
        case 0x2a9598u: goto label_2a9598;
        case 0x2a959cu: goto label_2a959c;
        case 0x2a95a0u: goto label_2a95a0;
        case 0x2a95a4u: goto label_2a95a4;
        case 0x2a95a8u: goto label_2a95a8;
        case 0x2a95acu: goto label_2a95ac;
        case 0x2a95b0u: goto label_2a95b0;
        case 0x2a95b4u: goto label_2a95b4;
        case 0x2a95b8u: goto label_2a95b8;
        case 0x2a95bcu: goto label_2a95bc;
        case 0x2a95c0u: goto label_2a95c0;
        case 0x2a95c4u: goto label_2a95c4;
        case 0x2a95c8u: goto label_2a95c8;
        case 0x2a95ccu: goto label_2a95cc;
        case 0x2a95d0u: goto label_2a95d0;
        case 0x2a95d4u: goto label_2a95d4;
        case 0x2a95d8u: goto label_2a95d8;
        case 0x2a95dcu: goto label_2a95dc;
        case 0x2a95e0u: goto label_2a95e0;
        case 0x2a95e4u: goto label_2a95e4;
        case 0x2a95e8u: goto label_2a95e8;
        case 0x2a95ecu: goto label_2a95ec;
        case 0x2a95f0u: goto label_2a95f0;
        case 0x2a95f4u: goto label_2a95f4;
        case 0x2a95f8u: goto label_2a95f8;
        case 0x2a95fcu: goto label_2a95fc;
        case 0x2a9600u: goto label_2a9600;
        case 0x2a9604u: goto label_2a9604;
        case 0x2a9608u: goto label_2a9608;
        case 0x2a960cu: goto label_2a960c;
        case 0x2a9610u: goto label_2a9610;
        case 0x2a9614u: goto label_2a9614;
        case 0x2a9618u: goto label_2a9618;
        case 0x2a961cu: goto label_2a961c;
        case 0x2a9620u: goto label_2a9620;
        case 0x2a9624u: goto label_2a9624;
        case 0x2a9628u: goto label_2a9628;
        case 0x2a962cu: goto label_2a962c;
        case 0x2a9630u: goto label_2a9630;
        case 0x2a9634u: goto label_2a9634;
        case 0x2a9638u: goto label_2a9638;
        case 0x2a963cu: goto label_2a963c;
        case 0x2a9640u: goto label_2a9640;
        case 0x2a9644u: goto label_2a9644;
        case 0x2a9648u: goto label_2a9648;
        case 0x2a964cu: goto label_2a964c;
        case 0x2a9650u: goto label_2a9650;
        case 0x2a9654u: goto label_2a9654;
        case 0x2a9658u: goto label_2a9658;
        case 0x2a965cu: goto label_2a965c;
        case 0x2a9660u: goto label_2a9660;
        case 0x2a9664u: goto label_2a9664;
        case 0x2a9668u: goto label_2a9668;
        case 0x2a966cu: goto label_2a966c;
        case 0x2a9670u: goto label_2a9670;
        case 0x2a9674u: goto label_2a9674;
        case 0x2a9678u: goto label_2a9678;
        case 0x2a967cu: goto label_2a967c;
        case 0x2a9680u: goto label_2a9680;
        case 0x2a9684u: goto label_2a9684;
        case 0x2a9688u: goto label_2a9688;
        case 0x2a968cu: goto label_2a968c;
        case 0x2a9690u: goto label_2a9690;
        case 0x2a9694u: goto label_2a9694;
        case 0x2a9698u: goto label_2a9698;
        case 0x2a969cu: goto label_2a969c;
        case 0x2a96a0u: goto label_2a96a0;
        case 0x2a96a4u: goto label_2a96a4;
        case 0x2a96a8u: goto label_2a96a8;
        case 0x2a96acu: goto label_2a96ac;
        case 0x2a96b0u: goto label_2a96b0;
        case 0x2a96b4u: goto label_2a96b4;
        case 0x2a96b8u: goto label_2a96b8;
        case 0x2a96bcu: goto label_2a96bc;
        case 0x2a96c0u: goto label_2a96c0;
        case 0x2a96c4u: goto label_2a96c4;
        case 0x2a96c8u: goto label_2a96c8;
        case 0x2a96ccu: goto label_2a96cc;
        case 0x2a96d0u: goto label_2a96d0;
        case 0x2a96d4u: goto label_2a96d4;
        case 0x2a96d8u: goto label_2a96d8;
        case 0x2a96dcu: goto label_2a96dc;
        case 0x2a96e0u: goto label_2a96e0;
        case 0x2a96e4u: goto label_2a96e4;
        case 0x2a96e8u: goto label_2a96e8;
        case 0x2a96ecu: goto label_2a96ec;
        case 0x2a96f0u: goto label_2a96f0;
        case 0x2a96f4u: goto label_2a96f4;
        case 0x2a96f8u: goto label_2a96f8;
        case 0x2a96fcu: goto label_2a96fc;
        case 0x2a9700u: goto label_2a9700;
        case 0x2a9704u: goto label_2a9704;
        case 0x2a9708u: goto label_2a9708;
        case 0x2a970cu: goto label_2a970c;
        case 0x2a9710u: goto label_2a9710;
        case 0x2a9714u: goto label_2a9714;
        case 0x2a9718u: goto label_2a9718;
        case 0x2a971cu: goto label_2a971c;
        case 0x2a9720u: goto label_2a9720;
        case 0x2a9724u: goto label_2a9724;
        case 0x2a9728u: goto label_2a9728;
        case 0x2a972cu: goto label_2a972c;
        case 0x2a9730u: goto label_2a9730;
        case 0x2a9734u: goto label_2a9734;
        case 0x2a9738u: goto label_2a9738;
        case 0x2a973cu: goto label_2a973c;
        case 0x2a9740u: goto label_2a9740;
        case 0x2a9744u: goto label_2a9744;
        case 0x2a9748u: goto label_2a9748;
        case 0x2a974cu: goto label_2a974c;
        case 0x2a9750u: goto label_2a9750;
        case 0x2a9754u: goto label_2a9754;
        case 0x2a9758u: goto label_2a9758;
        case 0x2a975cu: goto label_2a975c;
        case 0x2a9760u: goto label_2a9760;
        case 0x2a9764u: goto label_2a9764;
        case 0x2a9768u: goto label_2a9768;
        case 0x2a976cu: goto label_2a976c;
        case 0x2a9770u: goto label_2a9770;
        case 0x2a9774u: goto label_2a9774;
        case 0x2a9778u: goto label_2a9778;
        case 0x2a977cu: goto label_2a977c;
        case 0x2a9780u: goto label_2a9780;
        case 0x2a9784u: goto label_2a9784;
        case 0x2a9788u: goto label_2a9788;
        case 0x2a978cu: goto label_2a978c;
        case 0x2a9790u: goto label_2a9790;
        case 0x2a9794u: goto label_2a9794;
        case 0x2a9798u: goto label_2a9798;
        case 0x2a979cu: goto label_2a979c;
        case 0x2a97a0u: goto label_2a97a0;
        case 0x2a97a4u: goto label_2a97a4;
        case 0x2a97a8u: goto label_2a97a8;
        case 0x2a97acu: goto label_2a97ac;
        case 0x2a97b0u: goto label_2a97b0;
        case 0x2a97b4u: goto label_2a97b4;
        case 0x2a97b8u: goto label_2a97b8;
        case 0x2a97bcu: goto label_2a97bc;
        case 0x2a97c0u: goto label_2a97c0;
        case 0x2a97c4u: goto label_2a97c4;
        case 0x2a97c8u: goto label_2a97c8;
        case 0x2a97ccu: goto label_2a97cc;
        case 0x2a97d0u: goto label_2a97d0;
        case 0x2a97d4u: goto label_2a97d4;
        case 0x2a97d8u: goto label_2a97d8;
        case 0x2a97dcu: goto label_2a97dc;
        case 0x2a97e0u: goto label_2a97e0;
        case 0x2a97e4u: goto label_2a97e4;
        case 0x2a97e8u: goto label_2a97e8;
        case 0x2a97ecu: goto label_2a97ec;
        default: break;
    }

    ctx->pc = 0x2a9110u;

label_2a9110:
    // 0x2a9110: 0x27bdfa80  addiu       $sp, $sp, -0x580
    ctx->pc = 0x2a9110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965888));
label_2a9114:
    // 0x2a9114: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a9114u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9118:
    // 0x2a9118: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2a9118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2a911c:
    // 0x2a911c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2a911cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2a9120:
    // 0x2a9120: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2a9120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2a9124:
    // 0x2a9124: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2a9124u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a9128:
    // 0x2a9128: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a9128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2a912c:
    // 0x2a912c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2a912cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9130:
    // 0x2a9130: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a9130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2a9134:
    // 0x2a9134: 0x27c62c40  addiu       $a2, $fp, 0x2C40
    ctx->pc = 0x2a9134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 11328));
label_2a9138:
    // 0x2a9138: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a9138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2a913c:
    // 0x2a913c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a913cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9140:
    // 0x2a9140: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a9140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2a9144:
    // 0x2a9144: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a9144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a9148:
    // 0x2a9148: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a9148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a914c:
    // 0x2a914c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a914cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a9150:
    // 0x2a9150: 0x27d1000c  addiu       $s1, $fp, 0xC
    ctx->pc = 0x2a9150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
label_2a9154:
    // 0x2a9154: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a9154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a9158:
    // 0x2a9158: 0x10000006  b           . + 4 + (0x6 << 2)
label_2a915c:
    if (ctx->pc == 0x2A915Cu) {
        ctx->pc = 0x2A915Cu;
            // 0x2a915c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2A9160u;
        goto label_2a9160;
    }
    ctx->pc = 0x2A9158u;
    {
        const bool branch_taken_0x2a9158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A915Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9158u;
            // 0x2a915c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9158) {
            ctx->pc = 0x2A9174u;
            goto label_2a9174;
        }
    }
    ctx->pc = 0x2A9160u;
label_2a9160:
    // 0x2a9160: 0x8e030f4c  lw          $v1, 0xF4C($s0)
    ctx->pc = 0x2a9160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3916)));
label_2a9164:
    // 0x2a9164: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2a9164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2a9168:
    // 0x2a9168: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2a9168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2a916c:
    // 0x2a916c: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x2a916cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_2a9170:
    // 0x2a9170: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2a9170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_2a9174:
    // 0x2a9174: 0x0  nop
    ctx->pc = 0x2a9174u;
    // NOP
label_2a9178:
    // 0x2a9178: 0x8e030f48  lw          $v1, 0xF48($s0)
    ctx->pc = 0x2a9178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3912)));
label_2a917c:
    // 0x2a917c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x2a917cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2a9180:
    // 0x2a9180: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_2a9184:
    if (ctx->pc == 0x2A9184u) {
        ctx->pc = 0x2A9188u;
        goto label_2a9188;
    }
    ctx->pc = 0x2A9180u;
    {
        const bool branch_taken_0x2a9180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9180) {
            ctx->pc = 0x2A9160u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9160;
        }
    }
    ctx->pc = 0x2A9188u;
label_2a9188:
    // 0x2a9188: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a9188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a918c:
    // 0x2a918c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a918cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9190:
    // 0x2a9190: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a9190u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9194:
    // 0x2a9194: 0xc85021  addu        $t2, $a2, $t0
    ctx->pc = 0x2a9194u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_2a9198:
    // 0x2a9198: 0x85440000  lh          $a0, 0x0($t2)
    ctx->pc = 0x2a9198u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_2a919c:
    // 0x2a919c: 0x80182a  slt         $v1, $a0, $zero
    ctx->pc = 0x2a919cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2a91a0:
    // 0x2a91a0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_2a91a4:
    if (ctx->pc == 0x2A91A4u) {
        ctx->pc = 0x2A91A8u;
        goto label_2a91a8;
    }
    ctx->pc = 0x2A91A0u;
    {
        const bool branch_taken_0x2a91a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a91a0) {
            ctx->pc = 0x2A91C4u;
            goto label_2a91c4;
        }
    }
    ctx->pc = 0x2A91A8u;
label_2a91a8:
    // 0x2a91a8: 0x8e030f4c  lw          $v1, 0xF4C($s0)
    ctx->pc = 0x2a91a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3916)));
label_2a91ac:
    // 0x2a91ac: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2a91acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_2a91b0:
    // 0x2a91b0: 0x693821  addu        $a3, $v1, $t1
    ctx->pc = 0x2a91b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_2a91b4:
    // 0x2a91b4: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x2a91b4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
label_2a91b8:
    // 0x2a91b8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2a91b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_2a91bc:
    // 0x2a91bc: 0x85430002  lh          $v1, 0x2($t2)
    ctx->pc = 0x2a91bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
label_2a91c0:
    // 0x2a91c0: 0xa4e30002  sh          $v1, 0x2($a3)
    ctx->pc = 0x2a91c0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 3));
label_2a91c4:
    // 0x2a91c4: 0x0  nop
    ctx->pc = 0x2a91c4u;
    // NOP
label_2a91c8:
    // 0x2a91c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2a91c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2a91cc:
    // 0x2a91cc: 0x28a30800  slti        $v1, $a1, 0x800
    ctx->pc = 0x2a91ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2048) ? 1 : 0);
label_2a91d0:
    // 0x2a91d0: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_2a91d4:
    if (ctx->pc == 0x2A91D4u) {
        ctx->pc = 0x2A91D4u;
            // 0x2a91d4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->pc = 0x2A91D8u;
        goto label_2a91d8;
    }
    ctx->pc = 0x2A91D0u;
    {
        const bool branch_taken_0x2a91d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A91D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A91D0u;
            // 0x2a91d4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a91d0) {
            ctx->pc = 0x2A9194u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9194;
        }
    }
    ctx->pc = 0x2A91D8u;
label_2a91d8:
    // 0x2a91d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a91d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a91dc:
    // 0x2a91dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a91dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a91e0:
    // 0x2a91e0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2a91e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a91e4:
    // 0x2a91e4: 0xbd1821  addu        $v1, $a1, $sp
    ctx->pc = 0x2a91e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_2a91e8:
    // 0x2a91e8: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x2a91e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_2a91ec:
    // 0x2a91ec: 0x246600a0  addiu       $a2, $v1, 0xA0
    ctx->pc = 0x2a91ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
label_2a91f0:
    // 0x2a91f0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2a91f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_2a91f4:
    // 0x2a91f4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x2a91f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_2a91f8:
    // 0x2a91f8: 0x28e30124  slti        $v1, $a3, 0x124
    ctx->pc = 0x2a91f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)292) ? 1 : 0);
label_2a91fc:
    // 0x2a91fc: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x2a91fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_2a9200:
    // 0x2a9200: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x2a9200u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_2a9204:
    // 0x2a9204: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x2a9204u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
label_2a9208:
    // 0x2a9208: 0xacc40010  sw          $a0, 0x10($a2)
    ctx->pc = 0x2a9208u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
label_2a920c:
    // 0x2a920c: 0xacc40014  sw          $a0, 0x14($a2)
    ctx->pc = 0x2a920cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 4));
label_2a9210:
    // 0x2a9210: 0xacc40018  sw          $a0, 0x18($a2)
    ctx->pc = 0x2a9210u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 4));
label_2a9214:
    // 0x2a9214: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_2a9218:
    if (ctx->pc == 0x2A9218u) {
        ctx->pc = 0x2A9218u;
            // 0x2a9218: 0xacc4001c  sw          $a0, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 4));
        ctx->pc = 0x2A921Cu;
        goto label_2a921c;
    }
    ctx->pc = 0x2A9214u;
    {
        const bool branch_taken_0x2a9214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9214u;
            // 0x2a9218: 0xacc4001c  sw          $a0, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9214) {
            ctx->pc = 0x2A91E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a91e4;
        }
    }
    ctx->pc = 0x2A921Cu;
label_2a921c:
    // 0x2a921c: 0x28e1012c  slti        $at, $a3, 0x12C
    ctx->pc = 0x2a921cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)300) ? 1 : 0);
label_2a9220:
    // 0x2a9220: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_2a9224:
    if (ctx->pc == 0x2A9224u) {
        ctx->pc = 0x2A9224u;
            // 0x2a9224: 0x72880  sll         $a1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x2A9228u;
        goto label_2a9228;
    }
    ctx->pc = 0x2A9220u;
    {
        const bool branch_taken_0x2a9220 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9220u;
            // 0x2a9224: 0x72880  sll         $a1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9220) {
            ctx->pc = 0x2A924Cu;
            goto label_2a924c;
        }
    }
    ctx->pc = 0x2A9228u;
label_2a9228:
    // 0x2a9228: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2a9228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a922c:
    // 0x2a922c: 0xbd1821  addu        $v1, $a1, $sp
    ctx->pc = 0x2a922cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_2a9230:
    // 0x2a9230: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2a9230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2a9234:
    // 0x2a9234: 0xac6400a0  sw          $a0, 0xA0($v1)
    ctx->pc = 0x2a9234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 4));
label_2a9238:
    // 0x2a9238: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2a9238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2a923c:
    // 0x2a923c: 0x28e3012c  slti        $v1, $a3, 0x12C
    ctx->pc = 0x2a923cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)300) ? 1 : 0);
label_2a9240:
    // 0x2a9240: 0x0  nop
    ctx->pc = 0x2a9240u;
    // NOP
label_2a9244:
    // 0x2a9244: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_2a9248:
    if (ctx->pc == 0x2A9248u) {
        ctx->pc = 0x2A924Cu;
        goto label_2a924c;
    }
    ctx->pc = 0x2A9244u;
    {
        const bool branch_taken_0x2a9244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9244) {
            ctx->pc = 0x2A922Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a922c;
        }
    }
    ctx->pc = 0x2A924Cu;
label_2a924c:
    // 0x2a924c: 0x0  nop
    ctx->pc = 0x2a924cu;
    // NOP
label_2a9250:
    // 0x2a9250: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2a9250u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9254:
    // 0x2a9254: 0x100000bb  b           . + 4 + (0xBB << 2)
label_2a9258:
    if (ctx->pc == 0x2A9258u) {
        ctx->pc = 0x2A9258u;
            // 0x2a9258: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A925Cu;
        goto label_2a925c;
    }
    ctx->pc = 0x2A9254u;
    {
        const bool branch_taken_0x2a9254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9254u;
            // 0x2a9258: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9254) {
            ctx->pc = 0x2A9544u;
            goto label_2a9544;
        }
    }
    ctx->pc = 0x2A925Cu;
label_2a925c:
    // 0x2a925c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a925cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a9260:
    // 0x2a9260: 0x10a000b5  beqz        $a1, . + 4 + (0xB5 << 2)
label_2a9264:
    if (ctx->pc == 0x2A9264u) {
        ctx->pc = 0x2A9264u;
            // 0x2a9264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9268u;
        goto label_2a9268;
    }
    ctx->pc = 0x2A9260u;
    {
        const bool branch_taken_0x2a9260 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9260u;
            // 0x2a9264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9260) {
            ctx->pc = 0x2A9538u;
            goto label_2a9538;
        }
    }
    ctx->pc = 0x2A9268u;
label_2a9268:
    // 0x2a9268: 0xc06c2d4  jal         func_1B0B50
label_2a926c:
    if (ctx->pc == 0x2A926Cu) {
        ctx->pc = 0x2A9270u;
        goto label_2a9270;
    }
    ctx->pc = 0x2A9268u;
    SET_GPR_U32(ctx, 31, 0x2A9270u);
    ctx->pc = 0x1B0B50u;
    if (runtime->hasFunction(0x1B0B50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9270u; }
        if (ctx->pc != 0x2A9270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfoAtID__8CEditMapFi_0x1b0b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9270u; }
        if (ctx->pc != 0x2A9270u) { return; }
    }
    ctx->pc = 0x2A9270u;
label_2a9270:
    // 0x2a9270: 0x104000b1  beqz        $v0, . + 4 + (0xB1 << 2)
label_2a9274:
    if (ctx->pc == 0x2A9274u) {
        ctx->pc = 0x2A9278u;
        goto label_2a9278;
    }
    ctx->pc = 0x2A9270u;
    {
        const bool branch_taken_0x2a9270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9270) {
            ctx->pc = 0x2A9538u;
            goto label_2a9538;
        }
    }
    ctx->pc = 0x2A9278u;
label_2a9278:
    // 0x2a9278: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2a9278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2a927c:
    // 0x2a927c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2a927cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2a9280:
    // 0x2a9280: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2a9284:
    if (ctx->pc == 0x2A9284u) {
        ctx->pc = 0x2A9284u;
            // 0x2a9284: 0x2bd1821  addu        $v1, $s5, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
        ctx->pc = 0x2A9288u;
        goto label_2a9288;
    }
    ctx->pc = 0x2A9280u;
    {
        const bool branch_taken_0x2a9280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9280u;
            // 0x2a9284: 0x2bd1821  addu        $v1, $s5, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9280) {
            ctx->pc = 0x2A9290u;
            goto label_2a9290;
        }
    }
    ctx->pc = 0x2A9288u;
label_2a9288:
    // 0x2a9288: 0x100000ab  b           . + 4 + (0xAB << 2)
label_2a928c:
    if (ctx->pc == 0x2A928Cu) {
        ctx->pc = 0x2A928Cu;
            // 0x2a928c: 0xac7600a0  sw          $s6, 0xA0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 22));
        ctx->pc = 0x2A9290u;
        goto label_2a9290;
    }
    ctx->pc = 0x2A9288u;
    {
        const bool branch_taken_0x2a9288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A928Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9288u;
            // 0x2a928c: 0xac7600a0  sw          $s6, 0xA0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9288) {
            ctx->pc = 0x2A9538u;
            goto label_2a9538;
        }
    }
    ctx->pc = 0x2A9290u;
label_2a9290:
    // 0x2a9290: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x2a9290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2a9294:
    // 0x2a9294: 0xc06c58c  jal         func_1B1630
label_2a9298:
    if (ctx->pc == 0x2A9298u) {
        ctx->pc = 0x2A9298u;
            // 0x2a9298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A929Cu;
        goto label_2a929c;
    }
    ctx->pc = 0x2A9294u;
    SET_GPR_U32(ctx, 31, 0x2A929Cu);
    ctx->pc = 0x2A9298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9294u;
            // 0x2a9298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1630u;
    if (runtime->hasFunction(0x1B1630u)) {
        auto targetFn = runtime->lookupFunction(0x1B1630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A929Cu; }
        if (ctx->pc != 0x2A929Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildEditParts__8CEditMapFPc_0x1b1630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A929Cu; }
        if (ctx->pc != 0x2A929Cu) { return; }
    }
    ctx->pc = 0x2A929Cu;
label_2a929c:
    // 0x2a929c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a929cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a92a0:
    // 0x2a92a0: 0x64000a5  bltz        $s2, . + 4 + (0xA5 << 2)
label_2a92a4:
    if (ctx->pc == 0x2A92A4u) {
        ctx->pc = 0x2A92A4u;
            // 0x2a92a4: 0x2bd1821  addu        $v1, $s5, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
        ctx->pc = 0x2A92A8u;
        goto label_2a92a8;
    }
    ctx->pc = 0x2A92A0u;
    {
        const bool branch_taken_0x2a92a0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2A92A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A92A0u;
            // 0x2a92a4: 0x2bd1821  addu        $v1, $s5, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a92a0) {
            ctx->pc = 0x2A9538u;
            goto label_2a9538;
        }
    }
    ctx->pc = 0x2A92A8u;
label_2a92a8:
    // 0x2a92a8: 0xac7200a0  sw          $s2, 0xA0($v1)
    ctx->pc = 0x2a92a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 18));
label_2a92ac:
    // 0x2a92ac: 0x82230004  lb          $v1, 0x4($s1)
    ctx->pc = 0x2a92acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_2a92b0:
    // 0x2a92b0: 0x106000a1  beqz        $v1, . + 4 + (0xA1 << 2)
label_2a92b4:
    if (ctx->pc == 0x2A92B4u) {
        ctx->pc = 0x2A92B8u;
        goto label_2a92b8;
    }
    ctx->pc = 0x2A92B0u;
    {
        const bool branch_taken_0x2a92b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a92b0) {
            ctx->pc = 0x2A9538u;
            goto label_2a9538;
        }
    }
    ctx->pc = 0x2A92B8u;
label_2a92b8:
    // 0x2a92b8: 0x1060009f  beqz        $v1, . + 4 + (0x9F << 2)
label_2a92bc:
    if (ctx->pc == 0x2A92BCu) {
        ctx->pc = 0x2A92C0u;
        goto label_2a92c0;
    }
    ctx->pc = 0x2A92B8u;
    {
        const bool branch_taken_0x2a92b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a92b8) {
            ctx->pc = 0x2A9538u;
            goto label_2a9538;
        }
    }
    ctx->pc = 0x2A92C0u;
label_2a92c0:
    // 0x2a92c0: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x2a92c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_2a92c4:
    // 0x2a92c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a92c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a92c8:
    // 0x2a92c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a92c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a92cc:
    // 0x2a92cc: 0x0  nop
    ctx->pc = 0x2a92ccu;
    // NOP
label_2a92d0:
    // 0x2a92d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a92d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a92d4:
    // 0x2a92d4: 0xe7a00550  swc1        $f0, 0x550($sp)
    ctx->pc = 0x2a92d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1360), bits); }
label_2a92d8:
    // 0x2a92d8: 0x86230008  lh          $v1, 0x8($s1)
    ctx->pc = 0x2a92d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_2a92dc:
    // 0x2a92dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a92dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a92e0:
    // 0x2a92e0: 0x0  nop
    ctx->pc = 0x2a92e0u;
    // NOP
label_2a92e4:
    // 0x2a92e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a92e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a92e8:
    // 0x2a92e8: 0xe7a00554  swc1        $f0, 0x554($sp)
    ctx->pc = 0x2a92e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1364), bits); }
label_2a92ec:
    // 0x2a92ec: 0x8623000a  lh          $v1, 0xA($s1)
    ctx->pc = 0x2a92ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_2a92f0:
    // 0x2a92f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a92f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a92f4:
    // 0x2a92f4: 0xafa2055c  sw          $v0, 0x55C($sp)
    ctx->pc = 0x2a92f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1372), GPR_U32(ctx, 2));
label_2a92f8:
    // 0x2a92f8: 0xafa00568  sw          $zero, 0x568($sp)
    ctx->pc = 0x2a92f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1384), GPR_U32(ctx, 0));
label_2a92fc:
    // 0x2a92fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a92fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a9300:
    // 0x2a9300: 0xafa00560  sw          $zero, 0x560($sp)
    ctx->pc = 0x2a9300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1376), GPR_U32(ctx, 0));
label_2a9304:
    // 0x2a9304: 0xe7a00558  swc1        $f0, 0x558($sp)
    ctx->pc = 0x2a9304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1368), bits); }
label_2a9308:
    // 0x2a9308: 0x82250005  lb          $a1, 0x5($s1)
    ctx->pc = 0x2a9308u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_2a930c:
    // 0x2a930c: 0xc06c3c0  jal         func_1B0F00
label_2a9310:
    if (ctx->pc == 0x2A9310u) {
        ctx->pc = 0x2A9310u;
            // 0x2a9310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9314u;
        goto label_2a9314;
    }
    ctx->pc = 0x2A930Cu;
    SET_GPR_U32(ctx, 31, 0x2A9314u);
    ctx->pc = 0x2A9310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A930Cu;
            // 0x2a9310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F00u;
    if (runtime->hasFunction(0x1B0F00u)) {
        auto targetFn = runtime->lookupFunction(0x1B0F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9314u; }
        if (ctx->pc != 0x2A9314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditAngle__8CEditMapFi_0x1b0f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9314u; }
        if (ctx->pc != 0x2A9314u) { return; }
    }
    ctx->pc = 0x2A9314u;
label_2a9314:
    // 0x2a9314: 0xe7a00564  swc1        $f0, 0x564($sp)
    ctx->pc = 0x2a9314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1380), bits); }
label_2a9318:
    // 0x2a9318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a9318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a931c:
    // 0x2a931c: 0xc06c310  jal         func_1B0C40
label_2a9320:
    if (ctx->pc == 0x2A9320u) {
        ctx->pc = 0x2A9320u;
            // 0x2a9320: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9324u;
        goto label_2a9324;
    }
    ctx->pc = 0x2A931Cu;
    SET_GPR_U32(ctx, 31, 0x2A9324u);
    ctx->pc = 0x2A9320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A931Cu;
            // 0x2a9320: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9324u; }
        if (ctx->pc != 0x2A9324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9324u; }
        if (ctx->pc != 0x2A9324u) { return; }
    }
    ctx->pc = 0x2A9324u;
label_2a9324:
    // 0x2a9324: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a9324u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9328:
    // 0x2a9328: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
label_2a932c:
    if (ctx->pc == 0x2A932Cu) {
        ctx->pc = 0x2A932Cu;
            // 0x2a932c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9330u;
        goto label_2a9330;
    }
    ctx->pc = 0x2A9328u;
    {
        const bool branch_taken_0x2a9328 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A932Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9328u;
            // 0x2a932c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9328) {
            ctx->pc = 0x2A9374u;
            goto label_2a9374;
        }
    }
    ctx->pc = 0x2A9330u;
label_2a9330:
    // 0x2a9330: 0xc06d778  jal         func_1B5DE0
label_2a9334:
    if (ctx->pc == 0x2A9334u) {
        ctx->pc = 0x2A9338u;
        goto label_2a9338;
    }
    ctx->pc = 0x2A9330u;
    SET_GPR_U32(ctx, 31, 0x2A9338u);
    ctx->pc = 0x1B5DE0u;
    if (runtime->hasFunction(0x1B5DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9338u; }
        if (ctx->pc != 0x2A9338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartsType__10CEditPartsFv_0x1b5de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9338u; }
        if (ctx->pc != 0x2A9338u) { return; }
    }
    ctx->pc = 0x2A9338u;
label_2a9338:
    // 0x2a9338: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2a9338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2a933c:
    // 0x2a933c: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_2a9340:
    if (ctx->pc == 0x2A9340u) {
        ctx->pc = 0x2A9340u;
            // 0x2a9340: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2A9344u;
        goto label_2a9344;
    }
    ctx->pc = 0x2A933Cu;
    {
        const bool branch_taken_0x2a933c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A9340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A933Cu;
            // 0x2a9340: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a933c) {
            ctx->pc = 0x2A9374u;
            goto label_2a9374;
        }
    }
    ctx->pc = 0x2A9344u;
label_2a9344:
    // 0x2a9344: 0x3c02c61c  lui         $v0, 0xC61C
    ctx->pc = 0x2a9344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50716 << 16));
label_2a9348:
    // 0x2a9348: 0xae630310  sw          $v1, 0x310($s3)
    ctx->pc = 0x2a9348u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 784), GPR_U32(ctx, 3));
label_2a934c:
    // 0x2a934c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2a934cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_2a9350:
    // 0x2a9350: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2a9350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a9354:
    // 0x2a9354: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a9354u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a9358:
    // 0x2a9358: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a9358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a935c:
    // 0x2a935c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a935cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a9360:
    // 0x2a9360: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2a9360u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2a9364:
    // 0x2a9364: 0x320f809  jalr        $t9
label_2a9368:
    if (ctx->pc == 0x2A9368u) {
        ctx->pc = 0x2A9368u;
            // 0x2a9368: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2A936Cu;
        goto label_2a936c;
    }
    ctx->pc = 0x2A9364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A936Cu);
        ctx->pc = 0x2A9368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9364u;
            // 0x2a9368: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A936Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A936Cu; }
            if (ctx->pc != 0x2A936Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2A936Cu;
label_2a936c:
    // 0x2a936c: 0x10000072  b           . + 4 + (0x72 << 2)
label_2a9370:
    if (ctx->pc == 0x2A9370u) {
        ctx->pc = 0x2A9374u;
        goto label_2a9374;
    }
    ctx->pc = 0x2A936Cu;
    {
        const bool branch_taken_0x2a936c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a936c) {
            ctx->pc = 0x2A9538u;
            goto label_2a9538;
        }
    }
    ctx->pc = 0x2A9374u;
label_2a9374:
    // 0x2a9374: 0x0  nop
    ctx->pc = 0x2a9374u;
    // NOP
label_2a9378:
    // 0x2a9378: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a9378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a937c:
    // 0x2a937c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a937cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a9380:
    // 0x2a9380: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a9380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9384:
    // 0x2a9384: 0x27a70550  addiu       $a3, $sp, 0x550
    ctx->pc = 0x2a9384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
label_2a9388:
    // 0x2a9388: 0x27a80560  addiu       $t0, $sp, 0x560
    ctx->pc = 0x2a9388u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
label_2a938c:
    // 0x2a938c: 0xc06c800  jal         func_1B2000
label_2a9390:
    if (ctx->pc == 0x2A9390u) {
        ctx->pc = 0x2A9390u;
            // 0x2a9390: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9394u;
        goto label_2a9394;
    }
    ctx->pc = 0x2A938Cu;
    SET_GPR_U32(ctx, 31, 0x2A9394u);
    ctx->pc = 0x2A9390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A938Cu;
            // 0x2a9390: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2000u;
    if (runtime->hasFunction(0x1B2000u)) {
        auto targetFn = runtime->lookupFunction(0x1B2000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9394u; }
        if (ctx->pc != 0x2A9394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaceEditParts__8CEditMapFiP13EP_PLACE_INFOPfPfPi_0x1b2000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9394u; }
        if (ctx->pc != 0x2A9394u) { return; }
    }
    ctx->pc = 0x2A9394u;
label_2a9394:
    // 0x2a9394: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a9394u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9398:
    // 0x2a9398: 0x12800067  beqz        $s4, . + 4 + (0x67 << 2)
label_2a939c:
    if (ctx->pc == 0x2A939Cu) {
        ctx->pc = 0x2A93A0u;
        goto label_2a93a0;
    }
    ctx->pc = 0x2A9398u;
    {
        const bool branch_taken_0x2a9398 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9398) {
            ctx->pc = 0x2A9538u;
            goto label_2a9538;
        }
    }
    ctx->pc = 0x2A93A0u;
label_2a93a0:
    // 0x2a93a0: 0x82230004  lb          $v1, 0x4($s1)
    ctx->pc = 0x2a93a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_2a93a4:
    // 0x2a93a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a93a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a93a8:
    // 0x2a93a8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_2a93ac:
    if (ctx->pc == 0x2A93ACu) {
        ctx->pc = 0x2A93B0u;
        goto label_2a93b0;
    }
    ctx->pc = 0x2A93A8u;
    {
        const bool branch_taken_0x2a93a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a93a8) {
            ctx->pc = 0x2A93B8u;
            goto label_2a93b8;
        }
    }
    ctx->pc = 0x2A93B0u;
label_2a93b0:
    // 0x2a93b0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a93b4:
    if (ctx->pc == 0x2A93B4u) {
        ctx->pc = 0x2A93B4u;
            // 0x2a93b4: 0xae800310  sw          $zero, 0x310($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 784), GPR_U32(ctx, 0));
        ctx->pc = 0x2A93B8u;
        goto label_2a93b8;
    }
    ctx->pc = 0x2A93B0u;
    {
        const bool branch_taken_0x2a93b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A93B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A93B0u;
            // 0x2a93b4: 0xae800310  sw          $zero, 0x310($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 784), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a93b0) {
            ctx->pc = 0x2A93BCu;
            goto label_2a93bc;
        }
    }
    ctx->pc = 0x2A93B8u;
label_2a93b8:
    // 0x2a93b8: 0xae830310  sw          $v1, 0x310($s4)
    ctx->pc = 0x2a93b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 784), GPR_U32(ctx, 3));
label_2a93bc:
    // 0x2a93bc: 0x0  nop
    ctx->pc = 0x2a93bcu;
    // NOP
label_2a93c0:
    // 0x2a93c0: 0x86220018  lh          $v0, 0x18($s1)
    ctx->pc = 0x2a93c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
label_2a93c4:
    // 0x2a93c4: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_2a93c8:
    if (ctx->pc == 0x2A93C8u) {
        ctx->pc = 0x2A93CCu;
        goto label_2a93cc;
    }
    ctx->pc = 0x2A93C4u;
    {
        const bool branch_taken_0x2a93c4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a93c4) {
            ctx->pc = 0x2A9404u;
            goto label_2a9404;
        }
    }
    ctx->pc = 0x2A93CCu;
label_2a93cc:
    // 0x2a93cc: 0x8e840328  lw          $a0, 0x328($s4)
    ctx->pc = 0x2a93ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 808)));
label_2a93d0:
    // 0x2a93d0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2a93d4:
    if (ctx->pc == 0x2A93D4u) {
        ctx->pc = 0x2A93D4u;
            // 0x2a93d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A93D8u;
        goto label_2a93d8;
    }
    ctx->pc = 0x2A93D0u;
    {
        const bool branch_taken_0x2a93d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A93D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A93D0u;
            // 0x2a93d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a93d0) {
            ctx->pc = 0x2A93E0u;
            goto label_2a93e0;
        }
    }
    ctx->pc = 0x2A93D8u;
label_2a93d8:
    // 0x2a93d8: 0xc049c86  jal         func_127218
label_2a93dc:
    if (ctx->pc == 0x2A93DCu) {
        ctx->pc = 0x2A93DCu;
            // 0x2a93dc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2A93E0u;
        goto label_2a93e0;
    }
    ctx->pc = 0x2A93D8u;
    SET_GPR_U32(ctx, 31, 0x2A93E0u);
    ctx->pc = 0x2A93DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A93D8u;
            // 0x2a93dc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A93E0u; }
        if (ctx->pc != 0x2A93E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A93E0u; }
        if (ctx->pc != 0x2A93E0u) { return; }
    }
    ctx->pc = 0x2A93E0u;
label_2a93e0:
    // 0x2a93e0: 0x86220018  lh          $v0, 0x18($s1)
    ctx->pc = 0x2a93e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
label_2a93e4:
    // 0x2a93e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a93e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a93e8:
    // 0x2a93e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a93e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2a93ec:
    // 0x2a93ec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a93ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2a93f0:
    // 0x2a93f0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2a93f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2a93f4:
    // 0x2a93f4: 0x24420d48  addiu       $v0, $v0, 0xD48
    ctx->pc = 0x2a93f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3400));
label_2a93f8:
    // 0x2a93f8: 0xae820328  sw          $v0, 0x328($s4)
    ctx->pc = 0x2a93f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 808), GPR_U32(ctx, 2));
label_2a93fc:
    // 0x2a93fc: 0x8e820328  lw          $v0, 0x328($s4)
    ctx->pc = 0x2a93fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 808)));
label_2a9400:
    // 0x2a9400: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a9400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a9404:
    // 0x2a9404: 0x0  nop
    ctx->pc = 0x2a9404u;
    // NOP
label_2a9408:
    // 0x2a9408: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a9408u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a940c:
    // 0x2a940c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a940cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9410:
    // 0x2a9410: 0x2331821  addu        $v1, $s1, $s3
    ctx->pc = 0x2a9410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_2a9414:
    // 0x2a9414: 0x9064000c  lbu         $a0, 0xC($v1)
    ctx->pc = 0x2a9414u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
label_2a9418:
    // 0x2a9418: 0x18800041  blez        $a0, . + 4 + (0x41 << 2)
label_2a941c:
    if (ctx->pc == 0x2A941Cu) {
        ctx->pc = 0x2A9420u;
        goto label_2a9420;
    }
    ctx->pc = 0x2A9418u;
    {
        const bool branch_taken_0x2a9418 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x2a9418) {
            ctx->pc = 0x2A9520u;
            goto label_2a9520;
        }
    }
    ctx->pc = 0x2A9420u;
label_2a9420:
    // 0x2a9420: 0x9062000d  lbu         $v0, 0xD($v1)
    ctx->pc = 0x2a9420u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
label_2a9424:
    // 0x2a9424: 0x1840003e  blez        $v0, . + 4 + (0x3E << 2)
label_2a9428:
    if (ctx->pc == 0x2A9428u) {
        ctx->pc = 0x2A9428u;
            // 0x2a9428: 0x2465000d  addiu       $a1, $v1, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 13));
        ctx->pc = 0x2A942Cu;
        goto label_2a942c;
    }
    ctx->pc = 0x2A9424u;
    {
        const bool branch_taken_0x2a9424 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A9428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9424u;
            // 0x2a9428: 0x2465000d  addiu       $a1, $v1, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9424) {
            ctx->pc = 0x2A9520u;
            goto label_2a9520;
        }
    }
    ctx->pc = 0x2A942Cu;
label_2a942c:
    // 0x2a942c: 0x9062000e  lbu         $v0, 0xE($v1)
    ctx->pc = 0x2a942cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
label_2a9430:
    // 0x2a9430: 0x1840003b  blez        $v0, . + 4 + (0x3B << 2)
label_2a9434:
    if (ctx->pc == 0x2A9434u) {
        ctx->pc = 0x2A9434u;
            // 0x2a9434: 0x2466000e  addiu       $a2, $v1, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 14));
        ctx->pc = 0x2A9438u;
        goto label_2a9438;
    }
    ctx->pc = 0x2A9430u;
    {
        const bool branch_taken_0x2a9430 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A9434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9430u;
            // 0x2a9434: 0x2466000e  addiu       $a2, $v1, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9430) {
            ctx->pc = 0x2A9520u;
            goto label_2a9520;
        }
    }
    ctx->pc = 0x2A9438u;
label_2a9438:
    // 0x2a9438: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_2a943c:
    if (ctx->pc == 0x2A943Cu) {
        ctx->pc = 0x2A943Cu;
            // 0x2a943c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x2A9440u;
        goto label_2a9440;
    }
    ctx->pc = 0x2A9438u;
    {
        const bool branch_taken_0x2a9438 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2A943Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9438u;
            // 0x2a943c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9438) {
            ctx->pc = 0x2A944Cu;
            goto label_2a944c;
        }
    }
    ctx->pc = 0x2A9440u;
label_2a9440:
    // 0x2a9440: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a9440u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a9444:
    // 0x2a9444: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a9448:
    if (ctx->pc == 0x2A9448u) {
        ctx->pc = 0x2A9448u;
            // 0x2a9448: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2A944Cu;
        goto label_2a944c;
    }
    ctx->pc = 0x2A9444u;
    {
        const bool branch_taken_0x2a9444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9444u;
            // 0x2a9448: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9444) {
            ctx->pc = 0x2A9464u;
            goto label_2a9464;
        }
    }
    ctx->pc = 0x2A944Cu;
label_2a944c:
    // 0x2a944c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2a944cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2a9450:
    // 0x2a9450: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a9450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2a9454:
    // 0x2a9454: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a9458:
    // 0x2a9458: 0x0  nop
    ctx->pc = 0x2a9458u;
    // NOP
label_2a945c:
    // 0x2a945c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a945cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a9460:
    // 0x2a9460: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a9460u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2a9464:
    // 0x2a9464: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a9464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2a9468:
    // 0x2a9468: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a9468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a946c:
    // 0x2a946c: 0x0  nop
    ctx->pc = 0x2a946cu;
    // NOP
label_2a9470:
    // 0x2a9470: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2a9470u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_2a9474:
    // 0x2a9474: 0x0  nop
    ctx->pc = 0x2a9474u;
    // NOP
label_2a9478:
    // 0x2a9478: 0xe7a00570  swc1        $f0, 0x570($sp)
    ctx->pc = 0x2a9478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1392), bits); }
label_2a947c:
    // 0x2a947c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2a947cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2a9480:
    // 0x2a9480: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2a9484:
    if (ctx->pc == 0x2A9484u) {
        ctx->pc = 0x2A9484u;
            // 0x2a9484: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2A9488u;
        goto label_2a9488;
    }
    ctx->pc = 0x2A9480u;
    {
        const bool branch_taken_0x2a9480 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A9484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9480u;
            // 0x2a9484: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9480) {
            ctx->pc = 0x2A9494u;
            goto label_2a9494;
        }
    }
    ctx->pc = 0x2A9488u;
label_2a9488:
    // 0x2a9488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a948c:
    // 0x2a948c: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a9490:
    if (ctx->pc == 0x2A9490u) {
        ctx->pc = 0x2A9490u;
            // 0x2a9490: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2A9494u;
        goto label_2a9494;
    }
    ctx->pc = 0x2A948Cu;
    {
        const bool branch_taken_0x2a948c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A948Cu;
            // 0x2a9490: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a948c) {
            ctx->pc = 0x2A94ACu;
            goto label_2a94ac;
        }
    }
    ctx->pc = 0x2A9494u;
label_2a9494:
    // 0x2a9494: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a9494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a9498:
    // 0x2a9498: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a9498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2a949c:
    // 0x2a949c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a949cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a94a0:
    // 0x2a94a0: 0x0  nop
    ctx->pc = 0x2a94a0u;
    // NOP
label_2a94a4:
    // 0x2a94a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a94a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a94a8:
    // 0x2a94a8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a94a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a94ac:
    // 0x2a94ac: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a94acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2a94b0:
    // 0x2a94b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a94b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a94b4:
    // 0x2a94b4: 0x0  nop
    ctx->pc = 0x2a94b4u;
    // NOP
label_2a94b8:
    // 0x2a94b8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2a94b8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2a94bc:
    // 0x2a94bc: 0x0  nop
    ctx->pc = 0x2a94bcu;
    // NOP
label_2a94c0:
    // 0x2a94c0: 0xe7a00574  swc1        $f0, 0x574($sp)
    ctx->pc = 0x2a94c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1396), bits); }
label_2a94c4:
    // 0x2a94c4: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2a94c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2a94c8:
    // 0x2a94c8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2a94cc:
    if (ctx->pc == 0x2A94CCu) {
        ctx->pc = 0x2A94CCu;
            // 0x2a94cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2A94D0u;
        goto label_2a94d0;
    }
    ctx->pc = 0x2A94C8u;
    {
        const bool branch_taken_0x2a94c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A94CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A94C8u;
            // 0x2a94cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a94c8) {
            ctx->pc = 0x2A94DCu;
            goto label_2a94dc;
        }
    }
    ctx->pc = 0x2A94D0u;
label_2a94d0:
    // 0x2a94d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a94d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a94d4:
    // 0x2a94d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a94d8:
    if (ctx->pc == 0x2A94D8u) {
        ctx->pc = 0x2A94D8u;
            // 0x2a94d8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2A94DCu;
        goto label_2a94dc;
    }
    ctx->pc = 0x2A94D4u;
    {
        const bool branch_taken_0x2a94d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A94D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A94D4u;
            // 0x2a94d8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a94d4) {
            ctx->pc = 0x2A94F4u;
            goto label_2a94f4;
        }
    }
    ctx->pc = 0x2A94DCu;
label_2a94dc:
    // 0x2a94dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a94dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a94e0:
    // 0x2a94e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a94e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2a94e4:
    // 0x2a94e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a94e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a94e8:
    // 0x2a94e8: 0x0  nop
    ctx->pc = 0x2a94e8u;
    // NOP
label_2a94ec:
    // 0x2a94ec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a94ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a94f0:
    // 0x2a94f0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a94f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a94f4:
    // 0x2a94f4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a94f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2a94f8:
    // 0x2a94f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a94f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a94fc:
    // 0x2a94fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a94fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a9500:
    // 0x2a9500: 0xafa2057c  sw          $v0, 0x57C($sp)
    ctx->pc = 0x2a9500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1404), GPR_U32(ctx, 2));
label_2a9504:
    // 0x2a9504: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a9504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a9508:
    // 0x2a9508: 0x27a60570  addiu       $a2, $sp, 0x570
    ctx->pc = 0x2a9508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1392));
label_2a950c:
    // 0x2a950c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2a950cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2a9510:
    // 0x2a9510: 0x0  nop
    ctx->pc = 0x2a9510u;
    // NOP
label_2a9514:
    // 0x2a9514: 0x0  nop
    ctx->pc = 0x2a9514u;
    // NOP
label_2a9518:
    // 0x2a9518: 0xc0599d8  jal         func_166760
label_2a951c:
    if (ctx->pc == 0x2A951Cu) {
        ctx->pc = 0x2A951Cu;
            // 0x2a951c: 0xe7a00578  swc1        $f0, 0x578($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1400), bits); }
        ctx->pc = 0x2A9520u;
        goto label_2a9520;
    }
    ctx->pc = 0x2A9518u;
    SET_GPR_U32(ctx, 31, 0x2A9520u);
    ctx->pc = 0x2A951Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9518u;
            // 0x2a951c: 0xe7a00578  swc1        $f0, 0x578($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1400), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9520u; }
        if (ctx->pc != 0x2A9520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__9CMapPartsFiPf_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9520u; }
        if (ctx->pc != 0x2A9520u) { return; }
    }
    ctx->pc = 0x2A9520u;
label_2a9520:
    // 0x2a9520: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a9520u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2a9524:
    // 0x2a9524: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x2a9524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_2a9528:
    // 0x2a9528: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
label_2a952c:
    if (ctx->pc == 0x2A952Cu) {
        ctx->pc = 0x2A952Cu;
            // 0x2a952c: 0x26730003  addiu       $s3, $s3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
        ctx->pc = 0x2A9530u;
        goto label_2a9530;
    }
    ctx->pc = 0x2A9528u;
    {
        const bool branch_taken_0x2a9528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A952Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9528u;
            // 0x2a952c: 0x26730003  addiu       $s3, $s3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9528) {
            ctx->pc = 0x2A9410u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9410;
        }
    }
    ctx->pc = 0x2A9530u;
label_2a9530:
    // 0x2a9530: 0xc059a38  jal         func_1668E0
label_2a9534:
    if (ctx->pc == 0x2A9534u) {
        ctx->pc = 0x2A9534u;
            // 0x2a9534: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9538u;
        goto label_2a9538;
    }
    ctx->pc = 0x2A9530u;
    SET_GPR_U32(ctx, 31, 0x2A9538u);
    ctx->pc = 0x2A9534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9530u;
            // 0x2a9534: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1668E0u;
    if (runtime->hasFunction(0x1668E0u)) {
        auto targetFn = runtime->lookupFunction(0x1668E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9538u; }
        if (ctx->pc != 0x2A9538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateColor__9CMapPartsFv_0x1668e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9538u; }
        if (ctx->pc != 0x2A9538u) { return; }
    }
    ctx->pc = 0x2A9538u;
label_2a9538:
    // 0x2a9538: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x2a9538u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_2a953c:
    // 0x2a953c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2a953cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2a9540:
    // 0x2a9540: 0x26310024  addiu       $s1, $s1, 0x24
    ctx->pc = 0x2a9540u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
label_2a9544:
    // 0x2a9544: 0x0  nop
    ctx->pc = 0x2a9544u;
    // NOP
label_2a9548:
    // 0x2a9548: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x2a9548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_2a954c:
    // 0x2a954c: 0x2c3182a  slt         $v1, $s6, $v1
    ctx->pc = 0x2a954cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2a9550:
    // 0x2a9550: 0x1460ff42  bnez        $v1, . + 4 + (-0xBE << 2)
label_2a9554:
    if (ctx->pc == 0x2A9554u) {
        ctx->pc = 0x2A9554u;
            // 0x2a9554: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9558u;
        goto label_2a9558;
    }
    ctx->pc = 0x2A9550u;
    {
        const bool branch_taken_0x2a9550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9550u;
            // 0x2a9554: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9550) {
            ctx->pc = 0x2A925Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a925c;
        }
    }
    ctx->pc = 0x2A9558u;
label_2a9558:
    // 0x2a9558: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a9558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a955c:
    // 0x2a955c: 0x3c63821  addu        $a3, $fp, $a2
    ctx->pc = 0x2a955cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
label_2a9560:
    // 0x2a9560: 0x2064021  addu        $t0, $s0, $a2
    ctx->pc = 0x2a9560u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_2a9564:
    // 0x2a9564: 0x84e42a40  lh          $a0, 0x2A40($a3)
    ctx->pc = 0x2a9564u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10816)));
label_2a9568:
    // 0x2a9568: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2a9568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_2a956c:
    // 0x2a956c: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x2a956cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_2a9570:
    // 0x2a9570: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x2a9570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
label_2a9574:
    // 0x2a9574: 0xad040d4c  sw          $a0, 0xD4C($t0)
    ctx->pc = 0x2a9574u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 3404), GPR_U32(ctx, 4));
label_2a9578:
    // 0x2a9578: 0x84e42a50  lh          $a0, 0x2A50($a3)
    ctx->pc = 0x2a9578u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10832)));
label_2a957c:
    // 0x2a957c: 0xad040d5c  sw          $a0, 0xD5C($t0)
    ctx->pc = 0x2a957cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 3420), GPR_U32(ctx, 4));
label_2a9580:
    // 0x2a9580: 0x84e42a60  lh          $a0, 0x2A60($a3)
    ctx->pc = 0x2a9580u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10848)));
label_2a9584:
    // 0x2a9584: 0xad040d6c  sw          $a0, 0xD6C($t0)
    ctx->pc = 0x2a9584u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 3436), GPR_U32(ctx, 4));
label_2a9588:
    // 0x2a9588: 0x84e42a70  lh          $a0, 0x2A70($a3)
    ctx->pc = 0x2a9588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10864)));
label_2a958c:
    // 0x2a958c: 0xad040d7c  sw          $a0, 0xD7C($t0)
    ctx->pc = 0x2a958cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 3452), GPR_U32(ctx, 4));
label_2a9590:
    // 0x2a9590: 0x84e42a80  lh          $a0, 0x2A80($a3)
    ctx->pc = 0x2a9590u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10880)));
label_2a9594:
    // 0x2a9594: 0xad040d8c  sw          $a0, 0xD8C($t0)
    ctx->pc = 0x2a9594u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 3468), GPR_U32(ctx, 4));
label_2a9598:
    // 0x2a9598: 0x84e42a90  lh          $a0, 0x2A90($a3)
    ctx->pc = 0x2a9598u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10896)));
label_2a959c:
    // 0x2a959c: 0xad040d9c  sw          $a0, 0xD9C($t0)
    ctx->pc = 0x2a959cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 3484), GPR_U32(ctx, 4));
label_2a95a0:
    // 0x2a95a0: 0x84e42aa0  lh          $a0, 0x2AA0($a3)
    ctx->pc = 0x2a95a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10912)));
label_2a95a4:
    // 0x2a95a4: 0xad040dac  sw          $a0, 0xDAC($t0)
    ctx->pc = 0x2a95a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 3500), GPR_U32(ctx, 4));
label_2a95a8:
    // 0x2a95a8: 0x84e42ab0  lh          $a0, 0x2AB0($a3)
    ctx->pc = 0x2a95a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10928)));
label_2a95ac:
    // 0x2a95ac: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_2a95b0:
    if (ctx->pc == 0x2A95B0u) {
        ctx->pc = 0x2A95B0u;
            // 0x2a95b0: 0xad040dbc  sw          $a0, 0xDBC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 3516), GPR_U32(ctx, 4));
        ctx->pc = 0x2A95B4u;
        goto label_2a95b4;
    }
    ctx->pc = 0x2A95ACu;
    {
        const bool branch_taken_0x2a95ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A95B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A95ACu;
            // 0x2a95b0: 0xad040dbc  sw          $a0, 0xDBC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 3516), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a95ac) {
            ctx->pc = 0x2A955Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a955c;
        }
    }
    ctx->pc = 0x2A95B4u;
label_2a95b4:
    // 0x2a95b4: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x2a95b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_2a95b8:
    // 0x2a95b8: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_2a95bc:
    if (ctx->pc == 0x2A95BCu) {
        ctx->pc = 0x2A95BCu;
            // 0x2a95bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A95C0u;
        goto label_2a95c0;
    }
    ctx->pc = 0x2A95B8u;
    {
        const bool branch_taken_0x2a95b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A95BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A95B8u;
            // 0x2a95bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a95b8) {
            ctx->pc = 0x2A9620u;
            goto label_2a9620;
        }
    }
    ctx->pc = 0x2A95C0u;
label_2a95c0:
    // 0x2a95c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a95c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a95c4:
    // 0x2a95c4: 0x8e030f4c  lw          $v1, 0xF4C($s0)
    ctx->pc = 0x2a95c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3916)));
label_2a95c8:
    // 0x2a95c8: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x2a95c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2a95cc:
    // 0x2a95cc: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x2a95ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_2a95d0:
    // 0x2a95d0: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_2a95d4:
    if (ctx->pc == 0x2A95D4u) {
        ctx->pc = 0x2A95D8u;
        goto label_2a95d8;
    }
    ctx->pc = 0x2A95D0u;
    {
        const bool branch_taken_0x2a95d0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2a95d0) {
            ctx->pc = 0x2A95E8u;
            goto label_2a95e8;
        }
    }
    ctx->pc = 0x2A95D8u;
label_2a95d8:
    // 0x2a95d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a95d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a95dc:
    // 0x2a95dc: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2a95dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_2a95e0:
    // 0x2a95e0: 0x846300a0  lh          $v1, 0xA0($v1)
    ctx->pc = 0x2a95e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_2a95e4:
    // 0x2a95e4: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x2a95e4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_2a95e8:
    // 0x2a95e8: 0x8e030f4c  lw          $v1, 0xF4C($s0)
    ctx->pc = 0x2a95e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3916)));
label_2a95ec:
    // 0x2a95ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2a95ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2a95f0:
    // 0x2a95f0: 0x24660002  addiu       $a2, $v1, 0x2
    ctx->pc = 0x2a95f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_2a95f4:
    // 0x2a95f4: 0x84630002  lh          $v1, 0x2($v1)
    ctx->pc = 0x2a95f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_2a95f8:
    // 0x2a95f8: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_2a95fc:
    if (ctx->pc == 0x2A95FCu) {
        ctx->pc = 0x2A9600u;
        goto label_2a9600;
    }
    ctx->pc = 0x2A95F8u;
    {
        const bool branch_taken_0x2a95f8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2a95f8) {
            ctx->pc = 0x2A9610u;
            goto label_2a9610;
        }
    }
    ctx->pc = 0x2A9600u;
label_2a9600:
    // 0x2a9600: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a9600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a9604:
    // 0x2a9604: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2a9604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_2a9608:
    // 0x2a9608: 0x846300a0  lh          $v1, 0xA0($v1)
    ctx->pc = 0x2a9608u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_2a960c:
    // 0x2a960c: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x2a960cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_2a9610:
    // 0x2a9610: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2a9610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2a9614:
    // 0x2a9614: 0x97182a  slt         $v1, $a0, $s7
    ctx->pc = 0x2a9614u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_2a9618:
    // 0x2a9618: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_2a961c:
    if (ctx->pc == 0x2A961Cu) {
        ctx->pc = 0x2A961Cu;
            // 0x2a961c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x2A9620u;
        goto label_2a9620;
    }
    ctx->pc = 0x2A9618u;
    {
        const bool branch_taken_0x2a9618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A961Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9618u;
            // 0x2a961c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9618) {
            ctx->pc = 0x2A95C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a95c4;
        }
    }
    ctx->pc = 0x2A9620u;
label_2a9620:
    // 0x2a9620: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a9620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9624:
    // 0x2a9624: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a9624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9628:
    // 0x2a9628: 0x10000027  b           . + 4 + (0x27 << 2)
label_2a962c:
    if (ctx->pc == 0x2A962Cu) {
        ctx->pc = 0x2A962Cu;
            // 0x2a962c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9630u;
        goto label_2a9630;
    }
    ctx->pc = 0x2A9628u;
    {
        const bool branch_taken_0x2a9628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A962Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9628u;
            // 0x2a962c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9628) {
            ctx->pc = 0x2A96C8u;
            goto label_2a96c8;
        }
    }
    ctx->pc = 0x2A9630u;
label_2a9630:
    // 0x2a9630: 0x8e030d44  lw          $v1, 0xD44($s0)
    ctx->pc = 0x2a9630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3396)));
label_2a9634:
    // 0x2a9634: 0x769821  addu        $s3, $v1, $s6
    ctx->pc = 0x2a9634u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_2a9638:
    // 0x2a9638: 0x82630070  lb          $v1, 0x70($s3)
    ctx->pc = 0x2a9638u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 112)));
label_2a963c:
    // 0x2a963c: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x2a963cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_2a9640:
    // 0x2a9640: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2a9640u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2a9644:
    // 0x2a9644: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_2a9648:
    if (ctx->pc == 0x2A9648u) {
        ctx->pc = 0x2A964Cu;
        goto label_2a964c;
    }
    ctx->pc = 0x2A9644u;
    {
        const bool branch_taken_0x2a9644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9644) {
            ctx->pc = 0x2A96C0u;
            goto label_2a96c0;
        }
    }
    ctx->pc = 0x2A964Cu;
label_2a964c:
    // 0x2a964c: 0x8e640310  lw          $a0, 0x310($s3)
    ctx->pc = 0x2a964cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 784)));
label_2a9650:
    // 0x2a9650: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a9650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a9654:
    // 0x2a9654: 0x1483001a  bne         $a0, $v1, . + 4 + (0x1A << 2)
label_2a9658:
    if (ctx->pc == 0x2A9658u) {
        ctx->pc = 0x2A9658u;
            // 0x2a9658: 0x17082a  slt         $at, $zero, $s7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
        ctx->pc = 0x2A965Cu;
        goto label_2a965c;
    }
    ctx->pc = 0x2A9654u;
    {
        const bool branch_taken_0x2a9654 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A9658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9654u;
            // 0x2a9658: 0x17082a  slt         $at, $zero, $s7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9654) {
            ctx->pc = 0x2A96C0u;
            goto label_2a96c0;
        }
    }
    ctx->pc = 0x2A965Cu;
label_2a965c:
    // 0x2a965c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_2a9660:
    if (ctx->pc == 0x2A9660u) {
        ctx->pc = 0x2A9660u;
            // 0x2a9660: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9664u;
        goto label_2a9664;
    }
    ctx->pc = 0x2A965Cu;
    {
        const bool branch_taken_0x2a965c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A965Cu;
            // 0x2a9660: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a965c) {
            ctx->pc = 0x2A96C0u;
            goto label_2a96c0;
        }
    }
    ctx->pc = 0x2A9664u;
label_2a9664:
    // 0x2a9664: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2a9664u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9668:
    // 0x2a9668: 0x8e030f4c  lw          $v1, 0xF4C($s0)
    ctx->pc = 0x2a9668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3916)));
label_2a966c:
    // 0x2a966c: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x2a966cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_2a9670:
    // 0x2a9670: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x2a9670u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_2a9674:
    // 0x2a9674: 0x1643000d  bne         $s2, $v1, . + 4 + (0xD << 2)
label_2a9678:
    if (ctx->pc == 0x2A9678u) {
        ctx->pc = 0x2A967Cu;
        goto label_2a967c;
    }
    ctx->pc = 0x2A9674u;
    {
        const bool branch_taken_0x2a9674 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a9674) {
            ctx->pc = 0x2A96ACu;
            goto label_2a96ac;
        }
    }
    ctx->pc = 0x2A967Cu;
label_2a967c:
    // 0x2a967c: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x2a967cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2a9680:
    // 0x2a9680: 0xc06c310  jal         func_1B0C40
label_2a9684:
    if (ctx->pc == 0x2A9684u) {
        ctx->pc = 0x2A9684u;
            // 0x2a9684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9688u;
        goto label_2a9688;
    }
    ctx->pc = 0x2A9680u;
    SET_GPR_U32(ctx, 31, 0x2A9688u);
    ctx->pc = 0x2A9684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9680u;
            // 0x2a9684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9688u; }
        if (ctx->pc != 0x2A9688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9688u; }
        if (ctx->pc != 0x2A9688u) { return; }
    }
    ctx->pc = 0x2A9688u;
label_2a9688:
    // 0x2a9688: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2a968c:
    if (ctx->pc == 0x2A968Cu) {
        ctx->pc = 0x2A9690u;
        goto label_2a9690;
    }
    ctx->pc = 0x2A9688u;
    {
        const bool branch_taken_0x2a9688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9688) {
            ctx->pc = 0x2A96ACu;
            goto label_2a96ac;
        }
    }
    ctx->pc = 0x2A9690u;
label_2a9690:
    // 0x2a9690: 0x8c430310  lw          $v1, 0x310($v0)
    ctx->pc = 0x2a9690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 784)));
label_2a9694:
    // 0x2a9694: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_2a9698:
    if (ctx->pc == 0x2A9698u) {
        ctx->pc = 0x2A969Cu;
        goto label_2a969c;
    }
    ctx->pc = 0x2A9694u;
    {
        const bool branch_taken_0x2a9694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9694) {
            ctx->pc = 0x2A96ACu;
            goto label_2a96ac;
        }
    }
    ctx->pc = 0x2A969Cu;
label_2a969c:
    // 0x2a969c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2a969cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a96a0:
    // 0x2a96a0: 0xac510310  sw          $s1, 0x310($v0)
    ctx->pc = 0x2a96a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 784), GPR_U32(ctx, 17));
label_2a96a4:
    // 0x2a96a4: 0x8e630314  lw          $v1, 0x314($s3)
    ctx->pc = 0x2a96a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 788)));
label_2a96a8:
    // 0x2a96a8: 0xac430314  sw          $v1, 0x314($v0)
    ctx->pc = 0x2a96a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 788), GPR_U32(ctx, 3));
label_2a96ac:
    // 0x2a96ac: 0x0  nop
    ctx->pc = 0x2a96acu;
    // NOP
label_2a96b0:
    // 0x2a96b0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a96b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2a96b4:
    // 0x2a96b4: 0x297182a  slt         $v1, $s4, $s7
    ctx->pc = 0x2a96b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_2a96b8:
    // 0x2a96b8: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_2a96bc:
    if (ctx->pc == 0x2A96BCu) {
        ctx->pc = 0x2A96BCu;
            // 0x2a96bc: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x2A96C0u;
        goto label_2a96c0;
    }
    ctx->pc = 0x2A96B8u;
    {
        const bool branch_taken_0x2a96b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A96BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A96B8u;
            // 0x2a96bc: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a96b8) {
            ctx->pc = 0x2A9668u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9668;
        }
    }
    ctx->pc = 0x2A96C0u;
label_2a96c0:
    // 0x2a96c0: 0x26d60330  addiu       $s6, $s6, 0x330
    ctx->pc = 0x2a96c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 816));
label_2a96c4:
    // 0x2a96c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a96c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2a96c8:
    // 0x2a96c8: 0x8e030d40  lw          $v1, 0xD40($s0)
    ctx->pc = 0x2a96c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3392)));
label_2a96cc:
    // 0x2a96cc: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x2a96ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2a96d0:
    // 0x2a96d0: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
label_2a96d4:
    if (ctx->pc == 0x2A96D4u) {
        ctx->pc = 0x2A96D8u;
        goto label_2a96d8;
    }
    ctx->pc = 0x2A96D0u;
    {
        const bool branch_taken_0x2a96d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a96d0) {
            ctx->pc = 0x2A9630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9630;
        }
    }
    ctx->pc = 0x2A96D8u;
label_2a96d8:
    // 0x2a96d8: 0x1620ffd1  bnez        $s1, . + 4 + (-0x2F << 2)
label_2a96dc:
    if (ctx->pc == 0x2A96DCu) {
        ctx->pc = 0x2A96DCu;
            // 0x2a96dc: 0x27d14c40  addiu       $s1, $fp, 0x4C40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 19520));
        ctx->pc = 0x2A96E0u;
        goto label_2a96e0;
    }
    ctx->pc = 0x2A96D8u;
    {
        const bool branch_taken_0x2a96d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A96DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A96D8u;
            // 0x2a96dc: 0x27d14c40  addiu       $s1, $fp, 0x4C40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 19520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a96d8) {
            ctx->pc = 0x2A9620u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9620;
        }
    }
    ctx->pc = 0x2A96E0u;
label_2a96e0:
    // 0x2a96e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a96e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a96e4:
    // 0x2a96e4: 0x10000032  b           . + 4 + (0x32 << 2)
label_2a96e8:
    if (ctx->pc == 0x2A96E8u) {
        ctx->pc = 0x2A96E8u;
            // 0x2a96e8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A96ECu;
        goto label_2a96ec;
    }
    ctx->pc = 0x2A96E4u;
    {
        const bool branch_taken_0x2a96e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A96E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A96E4u;
            // 0x2a96e8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a96e4) {
            ctx->pc = 0x2A97B0u;
            goto label_2a97b0;
        }
    }
    ctx->pc = 0x2A96ECu;
label_2a96ec:
    // 0x2a96ec: 0x8c730f54  lw          $s3, 0xF54($v1)
    ctx->pc = 0x2a96ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3924)));
label_2a96f0:
    // 0x2a96f0: 0x1260002c  beqz        $s3, . + 4 + (0x2C << 2)
label_2a96f4:
    if (ctx->pc == 0x2A96F4u) {
        ctx->pc = 0x2A96F8u;
        goto label_2a96f8;
    }
    ctx->pc = 0x2A96F0u;
    {
        const bool branch_taken_0x2a96f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a96f0) {
            ctx->pc = 0x2A97A4u;
            goto label_2a97a4;
        }
    }
    ctx->pc = 0x2A96F8u;
label_2a96f8:
    // 0x2a96f8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2a96f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2a96fc:
    // 0x2a96fc: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2a96fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a9700:
    // 0x2a9700: 0x1483002f  bne         $a0, $v1, . + 4 + (0x2F << 2)
label_2a9704:
    if (ctx->pc == 0x2A9704u) {
        ctx->pc = 0x2A9704u;
            // 0x2a9704: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x2A9708u;
        goto label_2a9708;
    }
    ctx->pc = 0x2A9700u;
    {
        const bool branch_taken_0x2a9700 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A9704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9700u;
            // 0x2a9704: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9700) {
            ctx->pc = 0x2A97C0u;
            goto label_2a97c0;
        }
    }
    ctx->pc = 0x2A9708u;
label_2a9708:
    // 0x2a9708: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2a9708u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2a970c:
    // 0x2a970c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2a970cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2a9710:
    // 0x2a9710: 0x1483002b  bne         $a0, $v1, . + 4 + (0x2B << 2)
label_2a9714:
    if (ctx->pc == 0x2A9714u) {
        ctx->pc = 0x2A9714u;
            // 0x2a9714: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x2A9718u;
        goto label_2a9718;
    }
    ctx->pc = 0x2A9710u;
    {
        const bool branch_taken_0x2a9710 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A9714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9710u;
            // 0x2a9714: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9710) {
            ctx->pc = 0x2A97C0u;
            goto label_2a97c0;
        }
    }
    ctx->pc = 0x2A9718u;
label_2a9718:
    // 0x2a9718: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x2a9718u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_2a971c:
    // 0x2a971c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2a971cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2a9720:
    // 0x2a9720: 0x86260002  lh          $a2, 0x2($s1)
    ctx->pc = 0x2a9720u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2a9724:
    // 0x2a9724: 0x86270004  lh          $a3, 0x4($s1)
    ctx->pc = 0x2a9724u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_2a9728:
    // 0x2a9728: 0xc04a0d2  jal         func_128348
label_2a972c:
    if (ctx->pc == 0x2A972Cu) {
        ctx->pc = 0x2A972Cu;
            // 0x2a972c: 0x2484e648  addiu       $a0, $a0, -0x19B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960712));
        ctx->pc = 0x2A9730u;
        goto label_2a9730;
    }
    ctx->pc = 0x2A9728u;
    SET_GPR_U32(ctx, 31, 0x2A9730u);
    ctx->pc = 0x2A972Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9728u;
            // 0x2a972c: 0x2484e648  addiu       $a0, $a0, -0x19B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9730u; }
        if (ctx->pc != 0x2A9730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9730u; }
        if (ctx->pc != 0x2A9730u) { return; }
    }
    ctx->pc = 0x2A9730u;
label_2a9730:
    // 0x2a9730: 0x26310016  addiu       $s1, $s1, 0x16
    ctx->pc = 0x2a9730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 22));
label_2a9734:
    // 0x2a9734: 0x10000013  b           . + 4 + (0x13 << 2)
label_2a9738:
    if (ctx->pc == 0x2A9738u) {
        ctx->pc = 0x2A9738u;
            // 0x2a9738: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A973Cu;
        goto label_2a973c;
    }
    ctx->pc = 0x2A9734u;
    {
        const bool branch_taken_0x2a9734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9734u;
            // 0x2a9738: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9734) {
            ctx->pc = 0x2A9784u;
            goto label_2a9784;
        }
    }
    ctx->pc = 0x2A973Cu;
label_2a973c:
    // 0x2a973c: 0x0  nop
    ctx->pc = 0x2a973cu;
    // NOP
label_2a9740:
    // 0x2a9740: 0x1000000b  b           . + 4 + (0xB << 2)
label_2a9744:
    if (ctx->pc == 0x2A9744u) {
        ctx->pc = 0x2A9744u;
            // 0x2a9744: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9748u;
        goto label_2a9748;
    }
    ctx->pc = 0x2A9740u;
    {
        const bool branch_taken_0x2a9740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9740u;
            // 0x2a9744: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9740) {
            ctx->pc = 0x2A9770u;
            goto label_2a9770;
        }
    }
    ctx->pc = 0x2A9748u;
label_2a9748:
    // 0x2a9748: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2a9748u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2a974c:
    // 0x2a974c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2a974cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2a9750:
    // 0x2a9750: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2a9754:
    if (ctx->pc == 0x2A9754u) {
        ctx->pc = 0x2A9754u;
            // 0x2a9754: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9758u;
        goto label_2a9758;
    }
    ctx->pc = 0x2A9750u;
    {
        const bool branch_taken_0x2a9750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9750u;
            // 0x2a9754: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9750) {
            ctx->pc = 0x2A9764u;
            goto label_2a9764;
        }
    }
    ctx->pc = 0x2A9758u;
label_2a9758:
    // 0x2a9758: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2a9758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a975c:
    // 0x2a975c: 0xc0a5ec8  jal         func_297B20
label_2a9760:
    if (ctx->pc == 0x2A9760u) {
        ctx->pc = 0x2A9760u;
            // 0x2a9760: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9764u;
        goto label_2a9764;
    }
    ctx->pc = 0x2A975Cu;
    SET_GPR_U32(ctx, 31, 0x2A9764u);
    ctx->pc = 0x2A9760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A975Cu;
            // 0x2a9760: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297B20u;
    if (runtime->hasFunction(0x297B20u)) {
        auto targetFn = runtime->lookupFunction(0x297B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9764u; }
        if (ctx->pc != 0x2A9764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRiver__9CEditGridFii_0x297b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9764u; }
        if (ctx->pc != 0x2A9764u) { return; }
    }
    ctx->pc = 0x2A9764u;
label_2a9764:
    // 0x2a9764: 0x0  nop
    ctx->pc = 0x2a9764u;
    // NOP
label_2a9768:
    // 0x2a9768: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a9768u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a976c:
    // 0x2a976c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2a976cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2a9770:
    // 0x2a9770: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2a9770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2a9774:
    // 0x2a9774: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x2a9774u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2a9778:
    // 0x2a9778: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_2a977c:
    if (ctx->pc == 0x2A977Cu) {
        ctx->pc = 0x2A9780u;
        goto label_2a9780;
    }
    ctx->pc = 0x2A9778u;
    {
        const bool branch_taken_0x2a9778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9778) {
            ctx->pc = 0x2A9748u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9748;
        }
    }
    ctx->pc = 0x2A9780u;
label_2a9780:
    // 0x2a9780: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a9780u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2a9784:
    // 0x2a9784: 0x0  nop
    ctx->pc = 0x2a9784u;
    // NOP
label_2a9788:
    // 0x2a9788: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a9788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a978c:
    // 0x2a978c: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x2a978cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2a9790:
    // 0x2a9790: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_2a9794:
    if (ctx->pc == 0x2A9794u) {
        ctx->pc = 0x2A9794u;
            // 0x2a9794: 0x32230001  andi        $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x2A9798u;
        goto label_2a9798;
    }
    ctx->pc = 0x2A9790u;
    {
        const bool branch_taken_0x2a9790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9790u;
            // 0x2a9794: 0x32230001  andi        $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9790) {
            ctx->pc = 0x2A973Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a973c;
        }
    }
    ctx->pc = 0x2A9798u;
label_2a9798:
    // 0x2a9798: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_2a979c:
    if (ctx->pc == 0x2A979Cu) {
        ctx->pc = 0x2A97A0u;
        goto label_2a97a0;
    }
    ctx->pc = 0x2A9798u;
    {
        const bool branch_taken_0x2a9798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9798) {
            ctx->pc = 0x2A97A4u;
            goto label_2a97a4;
        }
    }
    ctx->pc = 0x2A97A0u;
label_2a97a0:
    // 0x2a97a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a97a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a97a4:
    // 0x2a97a4: 0x0  nop
    ctx->pc = 0x2a97a4u;
    // NOP
label_2a97a8:
    // 0x2a97a8: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x2a97a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_2a97ac:
    // 0x2a97ac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a97acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2a97b0:
    // 0x2a97b0: 0x8e030f50  lw          $v1, 0xF50($s0)
    ctx->pc = 0x2a97b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3920)));
label_2a97b4:
    // 0x2a97b4: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x2a97b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2a97b8:
    // 0x2a97b8: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
label_2a97bc:
    if (ctx->pc == 0x2A97BCu) {
        ctx->pc = 0x2A97BCu;
            // 0x2a97bc: 0x2161821  addu        $v1, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->pc = 0x2A97C0u;
        goto label_2a97c0;
    }
    ctx->pc = 0x2A97B8u;
    {
        const bool branch_taken_0x2a97b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A97BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A97B8u;
            // 0x2a97bc: 0x2161821  addu        $v1, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a97b8) {
            ctx->pc = 0x2A96ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a96ec;
        }
    }
    ctx->pc = 0x2A97C0u;
label_2a97c0:
    // 0x2a97c0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2a97c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2a97c4:
    // 0x2a97c4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2a97c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2a97c8:
    // 0x2a97c8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2a97c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2a97cc:
    // 0x2a97cc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a97ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2a97d0:
    // 0x2a97d0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a97d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2a97d4:
    // 0x2a97d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a97d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2a97d8:
    // 0x2a97d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a97d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a97dc:
    // 0x2a97dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a97dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a97e0:
    // 0x2a97e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a97e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a97e4:
    // 0x2a97e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a97e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a97e8:
    // 0x2a97e8: 0x3e00008  jr          $ra
label_2a97ec:
    if (ctx->pc == 0x2A97ECu) {
        ctx->pc = 0x2A97ECu;
            // 0x2a97ec: 0x27bd0580  addiu       $sp, $sp, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
        ctx->pc = 0x2A97F0u;
        goto label_fallthrough_0x2a97e8;
    }
    ctx->pc = 0x2A97E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A97ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A97E8u;
            // 0x2a97ec: 0x27bd0580  addiu       $sp, $sp, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2a97e8:
    ctx->pc = 0x2A97F0u;
}
