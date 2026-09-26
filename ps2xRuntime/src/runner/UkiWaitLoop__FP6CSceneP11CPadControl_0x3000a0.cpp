#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UkiWaitLoop__FP6CSceneP11CPadControl
// Address: 0x3000a0 - 0x300dbc
void UkiWaitLoop__FP6CSceneP11CPadControl_0x3000a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UkiWaitLoop__FP6CSceneP11CPadControl_0x3000a0");
#endif

    switch (ctx->pc) {
        case 0x3000a0u: goto label_3000a0;
        case 0x3000a4u: goto label_3000a4;
        case 0x3000a8u: goto label_3000a8;
        case 0x3000acu: goto label_3000ac;
        case 0x3000b0u: goto label_3000b0;
        case 0x3000b4u: goto label_3000b4;
        case 0x3000b8u: goto label_3000b8;
        case 0x3000bcu: goto label_3000bc;
        case 0x3000c0u: goto label_3000c0;
        case 0x3000c4u: goto label_3000c4;
        case 0x3000c8u: goto label_3000c8;
        case 0x3000ccu: goto label_3000cc;
        case 0x3000d0u: goto label_3000d0;
        case 0x3000d4u: goto label_3000d4;
        case 0x3000d8u: goto label_3000d8;
        case 0x3000dcu: goto label_3000dc;
        case 0x3000e0u: goto label_3000e0;
        case 0x3000e4u: goto label_3000e4;
        case 0x3000e8u: goto label_3000e8;
        case 0x3000ecu: goto label_3000ec;
        case 0x3000f0u: goto label_3000f0;
        case 0x3000f4u: goto label_3000f4;
        case 0x3000f8u: goto label_3000f8;
        case 0x3000fcu: goto label_3000fc;
        case 0x300100u: goto label_300100;
        case 0x300104u: goto label_300104;
        case 0x300108u: goto label_300108;
        case 0x30010cu: goto label_30010c;
        case 0x300110u: goto label_300110;
        case 0x300114u: goto label_300114;
        case 0x300118u: goto label_300118;
        case 0x30011cu: goto label_30011c;
        case 0x300120u: goto label_300120;
        case 0x300124u: goto label_300124;
        case 0x300128u: goto label_300128;
        case 0x30012cu: goto label_30012c;
        case 0x300130u: goto label_300130;
        case 0x300134u: goto label_300134;
        case 0x300138u: goto label_300138;
        case 0x30013cu: goto label_30013c;
        case 0x300140u: goto label_300140;
        case 0x300144u: goto label_300144;
        case 0x300148u: goto label_300148;
        case 0x30014cu: goto label_30014c;
        case 0x300150u: goto label_300150;
        case 0x300154u: goto label_300154;
        case 0x300158u: goto label_300158;
        case 0x30015cu: goto label_30015c;
        case 0x300160u: goto label_300160;
        case 0x300164u: goto label_300164;
        case 0x300168u: goto label_300168;
        case 0x30016cu: goto label_30016c;
        case 0x300170u: goto label_300170;
        case 0x300174u: goto label_300174;
        case 0x300178u: goto label_300178;
        case 0x30017cu: goto label_30017c;
        case 0x300180u: goto label_300180;
        case 0x300184u: goto label_300184;
        case 0x300188u: goto label_300188;
        case 0x30018cu: goto label_30018c;
        case 0x300190u: goto label_300190;
        case 0x300194u: goto label_300194;
        case 0x300198u: goto label_300198;
        case 0x30019cu: goto label_30019c;
        case 0x3001a0u: goto label_3001a0;
        case 0x3001a4u: goto label_3001a4;
        case 0x3001a8u: goto label_3001a8;
        case 0x3001acu: goto label_3001ac;
        case 0x3001b0u: goto label_3001b0;
        case 0x3001b4u: goto label_3001b4;
        case 0x3001b8u: goto label_3001b8;
        case 0x3001bcu: goto label_3001bc;
        case 0x3001c0u: goto label_3001c0;
        case 0x3001c4u: goto label_3001c4;
        case 0x3001c8u: goto label_3001c8;
        case 0x3001ccu: goto label_3001cc;
        case 0x3001d0u: goto label_3001d0;
        case 0x3001d4u: goto label_3001d4;
        case 0x3001d8u: goto label_3001d8;
        case 0x3001dcu: goto label_3001dc;
        case 0x3001e0u: goto label_3001e0;
        case 0x3001e4u: goto label_3001e4;
        case 0x3001e8u: goto label_3001e8;
        case 0x3001ecu: goto label_3001ec;
        case 0x3001f0u: goto label_3001f0;
        case 0x3001f4u: goto label_3001f4;
        case 0x3001f8u: goto label_3001f8;
        case 0x3001fcu: goto label_3001fc;
        case 0x300200u: goto label_300200;
        case 0x300204u: goto label_300204;
        case 0x300208u: goto label_300208;
        case 0x30020cu: goto label_30020c;
        case 0x300210u: goto label_300210;
        case 0x300214u: goto label_300214;
        case 0x300218u: goto label_300218;
        case 0x30021cu: goto label_30021c;
        case 0x300220u: goto label_300220;
        case 0x300224u: goto label_300224;
        case 0x300228u: goto label_300228;
        case 0x30022cu: goto label_30022c;
        case 0x300230u: goto label_300230;
        case 0x300234u: goto label_300234;
        case 0x300238u: goto label_300238;
        case 0x30023cu: goto label_30023c;
        case 0x300240u: goto label_300240;
        case 0x300244u: goto label_300244;
        case 0x300248u: goto label_300248;
        case 0x30024cu: goto label_30024c;
        case 0x300250u: goto label_300250;
        case 0x300254u: goto label_300254;
        case 0x300258u: goto label_300258;
        case 0x30025cu: goto label_30025c;
        case 0x300260u: goto label_300260;
        case 0x300264u: goto label_300264;
        case 0x300268u: goto label_300268;
        case 0x30026cu: goto label_30026c;
        case 0x300270u: goto label_300270;
        case 0x300274u: goto label_300274;
        case 0x300278u: goto label_300278;
        case 0x30027cu: goto label_30027c;
        case 0x300280u: goto label_300280;
        case 0x300284u: goto label_300284;
        case 0x300288u: goto label_300288;
        case 0x30028cu: goto label_30028c;
        case 0x300290u: goto label_300290;
        case 0x300294u: goto label_300294;
        case 0x300298u: goto label_300298;
        case 0x30029cu: goto label_30029c;
        case 0x3002a0u: goto label_3002a0;
        case 0x3002a4u: goto label_3002a4;
        case 0x3002a8u: goto label_3002a8;
        case 0x3002acu: goto label_3002ac;
        case 0x3002b0u: goto label_3002b0;
        case 0x3002b4u: goto label_3002b4;
        case 0x3002b8u: goto label_3002b8;
        case 0x3002bcu: goto label_3002bc;
        case 0x3002c0u: goto label_3002c0;
        case 0x3002c4u: goto label_3002c4;
        case 0x3002c8u: goto label_3002c8;
        case 0x3002ccu: goto label_3002cc;
        case 0x3002d0u: goto label_3002d0;
        case 0x3002d4u: goto label_3002d4;
        case 0x3002d8u: goto label_3002d8;
        case 0x3002dcu: goto label_3002dc;
        case 0x3002e0u: goto label_3002e0;
        case 0x3002e4u: goto label_3002e4;
        case 0x3002e8u: goto label_3002e8;
        case 0x3002ecu: goto label_3002ec;
        case 0x3002f0u: goto label_3002f0;
        case 0x3002f4u: goto label_3002f4;
        case 0x3002f8u: goto label_3002f8;
        case 0x3002fcu: goto label_3002fc;
        case 0x300300u: goto label_300300;
        case 0x300304u: goto label_300304;
        case 0x300308u: goto label_300308;
        case 0x30030cu: goto label_30030c;
        case 0x300310u: goto label_300310;
        case 0x300314u: goto label_300314;
        case 0x300318u: goto label_300318;
        case 0x30031cu: goto label_30031c;
        case 0x300320u: goto label_300320;
        case 0x300324u: goto label_300324;
        case 0x300328u: goto label_300328;
        case 0x30032cu: goto label_30032c;
        case 0x300330u: goto label_300330;
        case 0x300334u: goto label_300334;
        case 0x300338u: goto label_300338;
        case 0x30033cu: goto label_30033c;
        case 0x300340u: goto label_300340;
        case 0x300344u: goto label_300344;
        case 0x300348u: goto label_300348;
        case 0x30034cu: goto label_30034c;
        case 0x300350u: goto label_300350;
        case 0x300354u: goto label_300354;
        case 0x300358u: goto label_300358;
        case 0x30035cu: goto label_30035c;
        case 0x300360u: goto label_300360;
        case 0x300364u: goto label_300364;
        case 0x300368u: goto label_300368;
        case 0x30036cu: goto label_30036c;
        case 0x300370u: goto label_300370;
        case 0x300374u: goto label_300374;
        case 0x300378u: goto label_300378;
        case 0x30037cu: goto label_30037c;
        case 0x300380u: goto label_300380;
        case 0x300384u: goto label_300384;
        case 0x300388u: goto label_300388;
        case 0x30038cu: goto label_30038c;
        case 0x300390u: goto label_300390;
        case 0x300394u: goto label_300394;
        case 0x300398u: goto label_300398;
        case 0x30039cu: goto label_30039c;
        case 0x3003a0u: goto label_3003a0;
        case 0x3003a4u: goto label_3003a4;
        case 0x3003a8u: goto label_3003a8;
        case 0x3003acu: goto label_3003ac;
        case 0x3003b0u: goto label_3003b0;
        case 0x3003b4u: goto label_3003b4;
        case 0x3003b8u: goto label_3003b8;
        case 0x3003bcu: goto label_3003bc;
        case 0x3003c0u: goto label_3003c0;
        case 0x3003c4u: goto label_3003c4;
        case 0x3003c8u: goto label_3003c8;
        case 0x3003ccu: goto label_3003cc;
        case 0x3003d0u: goto label_3003d0;
        case 0x3003d4u: goto label_3003d4;
        case 0x3003d8u: goto label_3003d8;
        case 0x3003dcu: goto label_3003dc;
        case 0x3003e0u: goto label_3003e0;
        case 0x3003e4u: goto label_3003e4;
        case 0x3003e8u: goto label_3003e8;
        case 0x3003ecu: goto label_3003ec;
        case 0x3003f0u: goto label_3003f0;
        case 0x3003f4u: goto label_3003f4;
        case 0x3003f8u: goto label_3003f8;
        case 0x3003fcu: goto label_3003fc;
        case 0x300400u: goto label_300400;
        case 0x300404u: goto label_300404;
        case 0x300408u: goto label_300408;
        case 0x30040cu: goto label_30040c;
        case 0x300410u: goto label_300410;
        case 0x300414u: goto label_300414;
        case 0x300418u: goto label_300418;
        case 0x30041cu: goto label_30041c;
        case 0x300420u: goto label_300420;
        case 0x300424u: goto label_300424;
        case 0x300428u: goto label_300428;
        case 0x30042cu: goto label_30042c;
        case 0x300430u: goto label_300430;
        case 0x300434u: goto label_300434;
        case 0x300438u: goto label_300438;
        case 0x30043cu: goto label_30043c;
        case 0x300440u: goto label_300440;
        case 0x300444u: goto label_300444;
        case 0x300448u: goto label_300448;
        case 0x30044cu: goto label_30044c;
        case 0x300450u: goto label_300450;
        case 0x300454u: goto label_300454;
        case 0x300458u: goto label_300458;
        case 0x30045cu: goto label_30045c;
        case 0x300460u: goto label_300460;
        case 0x300464u: goto label_300464;
        case 0x300468u: goto label_300468;
        case 0x30046cu: goto label_30046c;
        case 0x300470u: goto label_300470;
        case 0x300474u: goto label_300474;
        case 0x300478u: goto label_300478;
        case 0x30047cu: goto label_30047c;
        case 0x300480u: goto label_300480;
        case 0x300484u: goto label_300484;
        case 0x300488u: goto label_300488;
        case 0x30048cu: goto label_30048c;
        case 0x300490u: goto label_300490;
        case 0x300494u: goto label_300494;
        case 0x300498u: goto label_300498;
        case 0x30049cu: goto label_30049c;
        case 0x3004a0u: goto label_3004a0;
        case 0x3004a4u: goto label_3004a4;
        case 0x3004a8u: goto label_3004a8;
        case 0x3004acu: goto label_3004ac;
        case 0x3004b0u: goto label_3004b0;
        case 0x3004b4u: goto label_3004b4;
        case 0x3004b8u: goto label_3004b8;
        case 0x3004bcu: goto label_3004bc;
        case 0x3004c0u: goto label_3004c0;
        case 0x3004c4u: goto label_3004c4;
        case 0x3004c8u: goto label_3004c8;
        case 0x3004ccu: goto label_3004cc;
        case 0x3004d0u: goto label_3004d0;
        case 0x3004d4u: goto label_3004d4;
        case 0x3004d8u: goto label_3004d8;
        case 0x3004dcu: goto label_3004dc;
        case 0x3004e0u: goto label_3004e0;
        case 0x3004e4u: goto label_3004e4;
        case 0x3004e8u: goto label_3004e8;
        case 0x3004ecu: goto label_3004ec;
        case 0x3004f0u: goto label_3004f0;
        case 0x3004f4u: goto label_3004f4;
        case 0x3004f8u: goto label_3004f8;
        case 0x3004fcu: goto label_3004fc;
        case 0x300500u: goto label_300500;
        case 0x300504u: goto label_300504;
        case 0x300508u: goto label_300508;
        case 0x30050cu: goto label_30050c;
        case 0x300510u: goto label_300510;
        case 0x300514u: goto label_300514;
        case 0x300518u: goto label_300518;
        case 0x30051cu: goto label_30051c;
        case 0x300520u: goto label_300520;
        case 0x300524u: goto label_300524;
        case 0x300528u: goto label_300528;
        case 0x30052cu: goto label_30052c;
        case 0x300530u: goto label_300530;
        case 0x300534u: goto label_300534;
        case 0x300538u: goto label_300538;
        case 0x30053cu: goto label_30053c;
        case 0x300540u: goto label_300540;
        case 0x300544u: goto label_300544;
        case 0x300548u: goto label_300548;
        case 0x30054cu: goto label_30054c;
        case 0x300550u: goto label_300550;
        case 0x300554u: goto label_300554;
        case 0x300558u: goto label_300558;
        case 0x30055cu: goto label_30055c;
        case 0x300560u: goto label_300560;
        case 0x300564u: goto label_300564;
        case 0x300568u: goto label_300568;
        case 0x30056cu: goto label_30056c;
        case 0x300570u: goto label_300570;
        case 0x300574u: goto label_300574;
        case 0x300578u: goto label_300578;
        case 0x30057cu: goto label_30057c;
        case 0x300580u: goto label_300580;
        case 0x300584u: goto label_300584;
        case 0x300588u: goto label_300588;
        case 0x30058cu: goto label_30058c;
        case 0x300590u: goto label_300590;
        case 0x300594u: goto label_300594;
        case 0x300598u: goto label_300598;
        case 0x30059cu: goto label_30059c;
        case 0x3005a0u: goto label_3005a0;
        case 0x3005a4u: goto label_3005a4;
        case 0x3005a8u: goto label_3005a8;
        case 0x3005acu: goto label_3005ac;
        case 0x3005b0u: goto label_3005b0;
        case 0x3005b4u: goto label_3005b4;
        case 0x3005b8u: goto label_3005b8;
        case 0x3005bcu: goto label_3005bc;
        case 0x3005c0u: goto label_3005c0;
        case 0x3005c4u: goto label_3005c4;
        case 0x3005c8u: goto label_3005c8;
        case 0x3005ccu: goto label_3005cc;
        case 0x3005d0u: goto label_3005d0;
        case 0x3005d4u: goto label_3005d4;
        case 0x3005d8u: goto label_3005d8;
        case 0x3005dcu: goto label_3005dc;
        case 0x3005e0u: goto label_3005e0;
        case 0x3005e4u: goto label_3005e4;
        case 0x3005e8u: goto label_3005e8;
        case 0x3005ecu: goto label_3005ec;
        case 0x3005f0u: goto label_3005f0;
        case 0x3005f4u: goto label_3005f4;
        case 0x3005f8u: goto label_3005f8;
        case 0x3005fcu: goto label_3005fc;
        case 0x300600u: goto label_300600;
        case 0x300604u: goto label_300604;
        case 0x300608u: goto label_300608;
        case 0x30060cu: goto label_30060c;
        case 0x300610u: goto label_300610;
        case 0x300614u: goto label_300614;
        case 0x300618u: goto label_300618;
        case 0x30061cu: goto label_30061c;
        case 0x300620u: goto label_300620;
        case 0x300624u: goto label_300624;
        case 0x300628u: goto label_300628;
        case 0x30062cu: goto label_30062c;
        case 0x300630u: goto label_300630;
        case 0x300634u: goto label_300634;
        case 0x300638u: goto label_300638;
        case 0x30063cu: goto label_30063c;
        case 0x300640u: goto label_300640;
        case 0x300644u: goto label_300644;
        case 0x300648u: goto label_300648;
        case 0x30064cu: goto label_30064c;
        case 0x300650u: goto label_300650;
        case 0x300654u: goto label_300654;
        case 0x300658u: goto label_300658;
        case 0x30065cu: goto label_30065c;
        case 0x300660u: goto label_300660;
        case 0x300664u: goto label_300664;
        case 0x300668u: goto label_300668;
        case 0x30066cu: goto label_30066c;
        case 0x300670u: goto label_300670;
        case 0x300674u: goto label_300674;
        case 0x300678u: goto label_300678;
        case 0x30067cu: goto label_30067c;
        case 0x300680u: goto label_300680;
        case 0x300684u: goto label_300684;
        case 0x300688u: goto label_300688;
        case 0x30068cu: goto label_30068c;
        case 0x300690u: goto label_300690;
        case 0x300694u: goto label_300694;
        case 0x300698u: goto label_300698;
        case 0x30069cu: goto label_30069c;
        case 0x3006a0u: goto label_3006a0;
        case 0x3006a4u: goto label_3006a4;
        case 0x3006a8u: goto label_3006a8;
        case 0x3006acu: goto label_3006ac;
        case 0x3006b0u: goto label_3006b0;
        case 0x3006b4u: goto label_3006b4;
        case 0x3006b8u: goto label_3006b8;
        case 0x3006bcu: goto label_3006bc;
        case 0x3006c0u: goto label_3006c0;
        case 0x3006c4u: goto label_3006c4;
        case 0x3006c8u: goto label_3006c8;
        case 0x3006ccu: goto label_3006cc;
        case 0x3006d0u: goto label_3006d0;
        case 0x3006d4u: goto label_3006d4;
        case 0x3006d8u: goto label_3006d8;
        case 0x3006dcu: goto label_3006dc;
        case 0x3006e0u: goto label_3006e0;
        case 0x3006e4u: goto label_3006e4;
        case 0x3006e8u: goto label_3006e8;
        case 0x3006ecu: goto label_3006ec;
        case 0x3006f0u: goto label_3006f0;
        case 0x3006f4u: goto label_3006f4;
        case 0x3006f8u: goto label_3006f8;
        case 0x3006fcu: goto label_3006fc;
        case 0x300700u: goto label_300700;
        case 0x300704u: goto label_300704;
        case 0x300708u: goto label_300708;
        case 0x30070cu: goto label_30070c;
        case 0x300710u: goto label_300710;
        case 0x300714u: goto label_300714;
        case 0x300718u: goto label_300718;
        case 0x30071cu: goto label_30071c;
        case 0x300720u: goto label_300720;
        case 0x300724u: goto label_300724;
        case 0x300728u: goto label_300728;
        case 0x30072cu: goto label_30072c;
        case 0x300730u: goto label_300730;
        case 0x300734u: goto label_300734;
        case 0x300738u: goto label_300738;
        case 0x30073cu: goto label_30073c;
        case 0x300740u: goto label_300740;
        case 0x300744u: goto label_300744;
        case 0x300748u: goto label_300748;
        case 0x30074cu: goto label_30074c;
        case 0x300750u: goto label_300750;
        case 0x300754u: goto label_300754;
        case 0x300758u: goto label_300758;
        case 0x30075cu: goto label_30075c;
        case 0x300760u: goto label_300760;
        case 0x300764u: goto label_300764;
        case 0x300768u: goto label_300768;
        case 0x30076cu: goto label_30076c;
        case 0x300770u: goto label_300770;
        case 0x300774u: goto label_300774;
        case 0x300778u: goto label_300778;
        case 0x30077cu: goto label_30077c;
        case 0x300780u: goto label_300780;
        case 0x300784u: goto label_300784;
        case 0x300788u: goto label_300788;
        case 0x30078cu: goto label_30078c;
        case 0x300790u: goto label_300790;
        case 0x300794u: goto label_300794;
        case 0x300798u: goto label_300798;
        case 0x30079cu: goto label_30079c;
        case 0x3007a0u: goto label_3007a0;
        case 0x3007a4u: goto label_3007a4;
        case 0x3007a8u: goto label_3007a8;
        case 0x3007acu: goto label_3007ac;
        case 0x3007b0u: goto label_3007b0;
        case 0x3007b4u: goto label_3007b4;
        case 0x3007b8u: goto label_3007b8;
        case 0x3007bcu: goto label_3007bc;
        case 0x3007c0u: goto label_3007c0;
        case 0x3007c4u: goto label_3007c4;
        case 0x3007c8u: goto label_3007c8;
        case 0x3007ccu: goto label_3007cc;
        case 0x3007d0u: goto label_3007d0;
        case 0x3007d4u: goto label_3007d4;
        case 0x3007d8u: goto label_3007d8;
        case 0x3007dcu: goto label_3007dc;
        case 0x3007e0u: goto label_3007e0;
        case 0x3007e4u: goto label_3007e4;
        case 0x3007e8u: goto label_3007e8;
        case 0x3007ecu: goto label_3007ec;
        case 0x3007f0u: goto label_3007f0;
        case 0x3007f4u: goto label_3007f4;
        case 0x3007f8u: goto label_3007f8;
        case 0x3007fcu: goto label_3007fc;
        case 0x300800u: goto label_300800;
        case 0x300804u: goto label_300804;
        case 0x300808u: goto label_300808;
        case 0x30080cu: goto label_30080c;
        case 0x300810u: goto label_300810;
        case 0x300814u: goto label_300814;
        case 0x300818u: goto label_300818;
        case 0x30081cu: goto label_30081c;
        case 0x300820u: goto label_300820;
        case 0x300824u: goto label_300824;
        case 0x300828u: goto label_300828;
        case 0x30082cu: goto label_30082c;
        case 0x300830u: goto label_300830;
        case 0x300834u: goto label_300834;
        case 0x300838u: goto label_300838;
        case 0x30083cu: goto label_30083c;
        case 0x300840u: goto label_300840;
        case 0x300844u: goto label_300844;
        case 0x300848u: goto label_300848;
        case 0x30084cu: goto label_30084c;
        case 0x300850u: goto label_300850;
        case 0x300854u: goto label_300854;
        case 0x300858u: goto label_300858;
        case 0x30085cu: goto label_30085c;
        case 0x300860u: goto label_300860;
        case 0x300864u: goto label_300864;
        case 0x300868u: goto label_300868;
        case 0x30086cu: goto label_30086c;
        case 0x300870u: goto label_300870;
        case 0x300874u: goto label_300874;
        case 0x300878u: goto label_300878;
        case 0x30087cu: goto label_30087c;
        case 0x300880u: goto label_300880;
        case 0x300884u: goto label_300884;
        case 0x300888u: goto label_300888;
        case 0x30088cu: goto label_30088c;
        case 0x300890u: goto label_300890;
        case 0x300894u: goto label_300894;
        case 0x300898u: goto label_300898;
        case 0x30089cu: goto label_30089c;
        case 0x3008a0u: goto label_3008a0;
        case 0x3008a4u: goto label_3008a4;
        case 0x3008a8u: goto label_3008a8;
        case 0x3008acu: goto label_3008ac;
        case 0x3008b0u: goto label_3008b0;
        case 0x3008b4u: goto label_3008b4;
        case 0x3008b8u: goto label_3008b8;
        case 0x3008bcu: goto label_3008bc;
        case 0x3008c0u: goto label_3008c0;
        case 0x3008c4u: goto label_3008c4;
        case 0x3008c8u: goto label_3008c8;
        case 0x3008ccu: goto label_3008cc;
        case 0x3008d0u: goto label_3008d0;
        case 0x3008d4u: goto label_3008d4;
        case 0x3008d8u: goto label_3008d8;
        case 0x3008dcu: goto label_3008dc;
        case 0x3008e0u: goto label_3008e0;
        case 0x3008e4u: goto label_3008e4;
        case 0x3008e8u: goto label_3008e8;
        case 0x3008ecu: goto label_3008ec;
        case 0x3008f0u: goto label_3008f0;
        case 0x3008f4u: goto label_3008f4;
        case 0x3008f8u: goto label_3008f8;
        case 0x3008fcu: goto label_3008fc;
        case 0x300900u: goto label_300900;
        case 0x300904u: goto label_300904;
        case 0x300908u: goto label_300908;
        case 0x30090cu: goto label_30090c;
        case 0x300910u: goto label_300910;
        case 0x300914u: goto label_300914;
        case 0x300918u: goto label_300918;
        case 0x30091cu: goto label_30091c;
        case 0x300920u: goto label_300920;
        case 0x300924u: goto label_300924;
        case 0x300928u: goto label_300928;
        case 0x30092cu: goto label_30092c;
        case 0x300930u: goto label_300930;
        case 0x300934u: goto label_300934;
        case 0x300938u: goto label_300938;
        case 0x30093cu: goto label_30093c;
        case 0x300940u: goto label_300940;
        case 0x300944u: goto label_300944;
        case 0x300948u: goto label_300948;
        case 0x30094cu: goto label_30094c;
        case 0x300950u: goto label_300950;
        case 0x300954u: goto label_300954;
        case 0x300958u: goto label_300958;
        case 0x30095cu: goto label_30095c;
        case 0x300960u: goto label_300960;
        case 0x300964u: goto label_300964;
        case 0x300968u: goto label_300968;
        case 0x30096cu: goto label_30096c;
        case 0x300970u: goto label_300970;
        case 0x300974u: goto label_300974;
        case 0x300978u: goto label_300978;
        case 0x30097cu: goto label_30097c;
        case 0x300980u: goto label_300980;
        case 0x300984u: goto label_300984;
        case 0x300988u: goto label_300988;
        case 0x30098cu: goto label_30098c;
        case 0x300990u: goto label_300990;
        case 0x300994u: goto label_300994;
        case 0x300998u: goto label_300998;
        case 0x30099cu: goto label_30099c;
        case 0x3009a0u: goto label_3009a0;
        case 0x3009a4u: goto label_3009a4;
        case 0x3009a8u: goto label_3009a8;
        case 0x3009acu: goto label_3009ac;
        case 0x3009b0u: goto label_3009b0;
        case 0x3009b4u: goto label_3009b4;
        case 0x3009b8u: goto label_3009b8;
        case 0x3009bcu: goto label_3009bc;
        case 0x3009c0u: goto label_3009c0;
        case 0x3009c4u: goto label_3009c4;
        case 0x3009c8u: goto label_3009c8;
        case 0x3009ccu: goto label_3009cc;
        case 0x3009d0u: goto label_3009d0;
        case 0x3009d4u: goto label_3009d4;
        case 0x3009d8u: goto label_3009d8;
        case 0x3009dcu: goto label_3009dc;
        case 0x3009e0u: goto label_3009e0;
        case 0x3009e4u: goto label_3009e4;
        case 0x3009e8u: goto label_3009e8;
        case 0x3009ecu: goto label_3009ec;
        case 0x3009f0u: goto label_3009f0;
        case 0x3009f4u: goto label_3009f4;
        case 0x3009f8u: goto label_3009f8;
        case 0x3009fcu: goto label_3009fc;
        case 0x300a00u: goto label_300a00;
        case 0x300a04u: goto label_300a04;
        case 0x300a08u: goto label_300a08;
        case 0x300a0cu: goto label_300a0c;
        case 0x300a10u: goto label_300a10;
        case 0x300a14u: goto label_300a14;
        case 0x300a18u: goto label_300a18;
        case 0x300a1cu: goto label_300a1c;
        case 0x300a20u: goto label_300a20;
        case 0x300a24u: goto label_300a24;
        case 0x300a28u: goto label_300a28;
        case 0x300a2cu: goto label_300a2c;
        case 0x300a30u: goto label_300a30;
        case 0x300a34u: goto label_300a34;
        case 0x300a38u: goto label_300a38;
        case 0x300a3cu: goto label_300a3c;
        case 0x300a40u: goto label_300a40;
        case 0x300a44u: goto label_300a44;
        case 0x300a48u: goto label_300a48;
        case 0x300a4cu: goto label_300a4c;
        case 0x300a50u: goto label_300a50;
        case 0x300a54u: goto label_300a54;
        case 0x300a58u: goto label_300a58;
        case 0x300a5cu: goto label_300a5c;
        case 0x300a60u: goto label_300a60;
        case 0x300a64u: goto label_300a64;
        case 0x300a68u: goto label_300a68;
        case 0x300a6cu: goto label_300a6c;
        case 0x300a70u: goto label_300a70;
        case 0x300a74u: goto label_300a74;
        case 0x300a78u: goto label_300a78;
        case 0x300a7cu: goto label_300a7c;
        case 0x300a80u: goto label_300a80;
        case 0x300a84u: goto label_300a84;
        case 0x300a88u: goto label_300a88;
        case 0x300a8cu: goto label_300a8c;
        case 0x300a90u: goto label_300a90;
        case 0x300a94u: goto label_300a94;
        case 0x300a98u: goto label_300a98;
        case 0x300a9cu: goto label_300a9c;
        case 0x300aa0u: goto label_300aa0;
        case 0x300aa4u: goto label_300aa4;
        case 0x300aa8u: goto label_300aa8;
        case 0x300aacu: goto label_300aac;
        case 0x300ab0u: goto label_300ab0;
        case 0x300ab4u: goto label_300ab4;
        case 0x300ab8u: goto label_300ab8;
        case 0x300abcu: goto label_300abc;
        case 0x300ac0u: goto label_300ac0;
        case 0x300ac4u: goto label_300ac4;
        case 0x300ac8u: goto label_300ac8;
        case 0x300accu: goto label_300acc;
        case 0x300ad0u: goto label_300ad0;
        case 0x300ad4u: goto label_300ad4;
        case 0x300ad8u: goto label_300ad8;
        case 0x300adcu: goto label_300adc;
        case 0x300ae0u: goto label_300ae0;
        case 0x300ae4u: goto label_300ae4;
        case 0x300ae8u: goto label_300ae8;
        case 0x300aecu: goto label_300aec;
        case 0x300af0u: goto label_300af0;
        case 0x300af4u: goto label_300af4;
        case 0x300af8u: goto label_300af8;
        case 0x300afcu: goto label_300afc;
        case 0x300b00u: goto label_300b00;
        case 0x300b04u: goto label_300b04;
        case 0x300b08u: goto label_300b08;
        case 0x300b0cu: goto label_300b0c;
        case 0x300b10u: goto label_300b10;
        case 0x300b14u: goto label_300b14;
        case 0x300b18u: goto label_300b18;
        case 0x300b1cu: goto label_300b1c;
        case 0x300b20u: goto label_300b20;
        case 0x300b24u: goto label_300b24;
        case 0x300b28u: goto label_300b28;
        case 0x300b2cu: goto label_300b2c;
        case 0x300b30u: goto label_300b30;
        case 0x300b34u: goto label_300b34;
        case 0x300b38u: goto label_300b38;
        case 0x300b3cu: goto label_300b3c;
        case 0x300b40u: goto label_300b40;
        case 0x300b44u: goto label_300b44;
        case 0x300b48u: goto label_300b48;
        case 0x300b4cu: goto label_300b4c;
        case 0x300b50u: goto label_300b50;
        case 0x300b54u: goto label_300b54;
        case 0x300b58u: goto label_300b58;
        case 0x300b5cu: goto label_300b5c;
        case 0x300b60u: goto label_300b60;
        case 0x300b64u: goto label_300b64;
        case 0x300b68u: goto label_300b68;
        case 0x300b6cu: goto label_300b6c;
        case 0x300b70u: goto label_300b70;
        case 0x300b74u: goto label_300b74;
        case 0x300b78u: goto label_300b78;
        case 0x300b7cu: goto label_300b7c;
        case 0x300b80u: goto label_300b80;
        case 0x300b84u: goto label_300b84;
        case 0x300b88u: goto label_300b88;
        case 0x300b8cu: goto label_300b8c;
        case 0x300b90u: goto label_300b90;
        case 0x300b94u: goto label_300b94;
        case 0x300b98u: goto label_300b98;
        case 0x300b9cu: goto label_300b9c;
        case 0x300ba0u: goto label_300ba0;
        case 0x300ba4u: goto label_300ba4;
        case 0x300ba8u: goto label_300ba8;
        case 0x300bacu: goto label_300bac;
        case 0x300bb0u: goto label_300bb0;
        case 0x300bb4u: goto label_300bb4;
        case 0x300bb8u: goto label_300bb8;
        case 0x300bbcu: goto label_300bbc;
        case 0x300bc0u: goto label_300bc0;
        case 0x300bc4u: goto label_300bc4;
        case 0x300bc8u: goto label_300bc8;
        case 0x300bccu: goto label_300bcc;
        case 0x300bd0u: goto label_300bd0;
        case 0x300bd4u: goto label_300bd4;
        case 0x300bd8u: goto label_300bd8;
        case 0x300bdcu: goto label_300bdc;
        case 0x300be0u: goto label_300be0;
        case 0x300be4u: goto label_300be4;
        case 0x300be8u: goto label_300be8;
        case 0x300becu: goto label_300bec;
        case 0x300bf0u: goto label_300bf0;
        case 0x300bf4u: goto label_300bf4;
        case 0x300bf8u: goto label_300bf8;
        case 0x300bfcu: goto label_300bfc;
        case 0x300c00u: goto label_300c00;
        case 0x300c04u: goto label_300c04;
        case 0x300c08u: goto label_300c08;
        case 0x300c0cu: goto label_300c0c;
        case 0x300c10u: goto label_300c10;
        case 0x300c14u: goto label_300c14;
        case 0x300c18u: goto label_300c18;
        case 0x300c1cu: goto label_300c1c;
        case 0x300c20u: goto label_300c20;
        case 0x300c24u: goto label_300c24;
        case 0x300c28u: goto label_300c28;
        case 0x300c2cu: goto label_300c2c;
        case 0x300c30u: goto label_300c30;
        case 0x300c34u: goto label_300c34;
        case 0x300c38u: goto label_300c38;
        case 0x300c3cu: goto label_300c3c;
        case 0x300c40u: goto label_300c40;
        case 0x300c44u: goto label_300c44;
        case 0x300c48u: goto label_300c48;
        case 0x300c4cu: goto label_300c4c;
        case 0x300c50u: goto label_300c50;
        case 0x300c54u: goto label_300c54;
        case 0x300c58u: goto label_300c58;
        case 0x300c5cu: goto label_300c5c;
        case 0x300c60u: goto label_300c60;
        case 0x300c64u: goto label_300c64;
        case 0x300c68u: goto label_300c68;
        case 0x300c6cu: goto label_300c6c;
        case 0x300c70u: goto label_300c70;
        case 0x300c74u: goto label_300c74;
        case 0x300c78u: goto label_300c78;
        case 0x300c7cu: goto label_300c7c;
        case 0x300c80u: goto label_300c80;
        case 0x300c84u: goto label_300c84;
        case 0x300c88u: goto label_300c88;
        case 0x300c8cu: goto label_300c8c;
        case 0x300c90u: goto label_300c90;
        case 0x300c94u: goto label_300c94;
        case 0x300c98u: goto label_300c98;
        case 0x300c9cu: goto label_300c9c;
        case 0x300ca0u: goto label_300ca0;
        case 0x300ca4u: goto label_300ca4;
        case 0x300ca8u: goto label_300ca8;
        case 0x300cacu: goto label_300cac;
        case 0x300cb0u: goto label_300cb0;
        case 0x300cb4u: goto label_300cb4;
        case 0x300cb8u: goto label_300cb8;
        case 0x300cbcu: goto label_300cbc;
        case 0x300cc0u: goto label_300cc0;
        case 0x300cc4u: goto label_300cc4;
        case 0x300cc8u: goto label_300cc8;
        case 0x300cccu: goto label_300ccc;
        case 0x300cd0u: goto label_300cd0;
        case 0x300cd4u: goto label_300cd4;
        case 0x300cd8u: goto label_300cd8;
        case 0x300cdcu: goto label_300cdc;
        case 0x300ce0u: goto label_300ce0;
        case 0x300ce4u: goto label_300ce4;
        case 0x300ce8u: goto label_300ce8;
        case 0x300cecu: goto label_300cec;
        case 0x300cf0u: goto label_300cf0;
        case 0x300cf4u: goto label_300cf4;
        case 0x300cf8u: goto label_300cf8;
        case 0x300cfcu: goto label_300cfc;
        case 0x300d00u: goto label_300d00;
        case 0x300d04u: goto label_300d04;
        case 0x300d08u: goto label_300d08;
        case 0x300d0cu: goto label_300d0c;
        case 0x300d10u: goto label_300d10;
        case 0x300d14u: goto label_300d14;
        case 0x300d18u: goto label_300d18;
        case 0x300d1cu: goto label_300d1c;
        case 0x300d20u: goto label_300d20;
        case 0x300d24u: goto label_300d24;
        case 0x300d28u: goto label_300d28;
        case 0x300d2cu: goto label_300d2c;
        case 0x300d30u: goto label_300d30;
        case 0x300d34u: goto label_300d34;
        case 0x300d38u: goto label_300d38;
        case 0x300d3cu: goto label_300d3c;
        case 0x300d40u: goto label_300d40;
        case 0x300d44u: goto label_300d44;
        case 0x300d48u: goto label_300d48;
        case 0x300d4cu: goto label_300d4c;
        case 0x300d50u: goto label_300d50;
        case 0x300d54u: goto label_300d54;
        case 0x300d58u: goto label_300d58;
        case 0x300d5cu: goto label_300d5c;
        case 0x300d60u: goto label_300d60;
        case 0x300d64u: goto label_300d64;
        case 0x300d68u: goto label_300d68;
        case 0x300d6cu: goto label_300d6c;
        case 0x300d70u: goto label_300d70;
        case 0x300d74u: goto label_300d74;
        case 0x300d78u: goto label_300d78;
        case 0x300d7cu: goto label_300d7c;
        case 0x300d80u: goto label_300d80;
        case 0x300d84u: goto label_300d84;
        case 0x300d88u: goto label_300d88;
        case 0x300d8cu: goto label_300d8c;
        case 0x300d90u: goto label_300d90;
        case 0x300d94u: goto label_300d94;
        case 0x300d98u: goto label_300d98;
        case 0x300d9cu: goto label_300d9c;
        case 0x300da0u: goto label_300da0;
        case 0x300da4u: goto label_300da4;
        case 0x300da8u: goto label_300da8;
        case 0x300dacu: goto label_300dac;
        case 0x300db0u: goto label_300db0;
        case 0x300db4u: goto label_300db4;
        case 0x300db8u: goto label_300db8;
        default: break;
    }

    ctx->pc = 0x3000a0u;

label_3000a0:
    // 0x3000a0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x3000a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_3000a4:
    // 0x3000a4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3000a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3000a8:
    // 0x3000a8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3000a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3000ac:
    // 0x3000ac: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3000acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3000b0:
    // 0x3000b0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3000b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3000b4:
    // 0x3000b4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3000b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3000b8:
    // 0x3000b8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3000b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3000bc:
    // 0x3000bc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3000bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3000c0:
    // 0x3000c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3000c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3000c4:
    // 0x3000c4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3000c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3000c8:
    // 0x3000c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3000c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3000cc:
    // 0x3000cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3000ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3000d0:
    // 0x3000d0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3000d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3000d4:
    // 0x3000d4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3000d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3000d8:
    // 0x3000d8: 0x8c852e50  lw          $a1, 0x2E50($a0)
    ctx->pc = 0x3000d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
label_3000dc:
    // 0x3000dc: 0xc0a0ed8  jal         func_283B60
label_3000e0:
    if (ctx->pc == 0x3000E0u) {
        ctx->pc = 0x3000E0u;
            // 0x3000e0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3000E4u;
        goto label_3000e4;
    }
    ctx->pc = 0x3000DCu;
    SET_GPR_U32(ctx, 31, 0x3000E4u);
    ctx->pc = 0x3000E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3000DCu;
            // 0x3000e0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3000E4u; }
        if (ctx->pc != 0x3000E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3000E4u; }
        if (ctx->pc != 0x3000E4u) { return; }
    }
    ctx->pc = 0x3000E4u;
label_3000e4:
    // 0x3000e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3000e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3000e8:
    // 0x3000e8: 0x12200326  beqz        $s1, . + 4 + (0x326 << 2)
label_3000ec:
    if (ctx->pc == 0x3000ECu) {
        ctx->pc = 0x3000F0u;
        goto label_3000f0;
    }
    ctx->pc = 0x3000E8u;
    {
        const bool branch_taken_0x3000e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3000e8) {
            ctx->pc = 0x300D84u;
            goto label_300d84;
        }
    }
    ctx->pc = 0x3000F0u;
label_3000f0:
    // 0x3000f0: 0x8e852e54  lw          $a1, 0x2E54($s4)
    ctx->pc = 0x3000f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11860)));
label_3000f4:
    // 0x3000f4: 0xc0a0e30  jal         func_2838C0
label_3000f8:
    if (ctx->pc == 0x3000F8u) {
        ctx->pc = 0x3000F8u;
            // 0x3000f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3000FCu;
        goto label_3000fc;
    }
    ctx->pc = 0x3000F4u;
    SET_GPR_U32(ctx, 31, 0x3000FCu);
    ctx->pc = 0x3000F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3000F4u;
            // 0x3000f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3000FCu; }
        if (ctx->pc != 0x3000FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3000FCu; }
        if (ctx->pc != 0x3000FCu) { return; }
    }
    ctx->pc = 0x3000FCu;
label_3000fc:
    // 0x3000fc: 0x8f84a010  lw          $a0, -0x5FF0($gp)
    ctx->pc = 0x3000fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942736)));
label_300100:
    // 0x300100: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x300100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_300104:
    // 0x300104: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
label_300108:
    if (ctx->pc == 0x300108u) {
        ctx->pc = 0x300108u;
            // 0x300108: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30010Cu;
        goto label_30010c;
    }
    ctx->pc = 0x300104u;
    {
        const bool branch_taken_0x300104 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x300108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300104u;
            // 0x300108: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300104) {
            ctx->pc = 0x300168u;
            goto label_300168;
        }
    }
    ctx->pc = 0x30010Cu;
label_30010c:
    // 0x30010c: 0x8f83a014  lw          $v1, -0x5FEC($gp)
    ctx->pc = 0x30010cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942740)));
label_300110:
    // 0x300110: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x300110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_300114:
    // 0x300114: 0xaf83a014  sw          $v1, -0x5FEC($gp)
    ctx->pc = 0x300114u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942740), GPR_U32(ctx, 3));
label_300118:
    // 0x300118: 0x8f83a014  lw          $v1, -0x5FEC($gp)
    ctx->pc = 0x300118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942740)));
label_30011c:
    // 0x30011c: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x30011cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
label_300120:
    // 0x300120: 0x14200318  bnez        $at, . + 4 + (0x318 << 2)
label_300124:
    if (ctx->pc == 0x300124u) {
        ctx->pc = 0x300128u;
        goto label_300128;
    }
    ctx->pc = 0x300120u;
    {
        const bool branch_taken_0x300120 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x300120) {
            ctx->pc = 0x300D84u;
            goto label_300d84;
        }
    }
    ctx->pc = 0x300128u;
label_300128:
    // 0x300128: 0xc0bfd3c  jal         func_2FF4F0
label_30012c:
    if (ctx->pc == 0x30012Cu) {
        ctx->pc = 0x30012Cu;
            // 0x30012c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300130u;
        goto label_300130;
    }
    ctx->pc = 0x300128u;
    SET_GPR_U32(ctx, 31, 0x300130u);
    ctx->pc = 0x30012Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300128u;
            // 0x30012c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FF4F0u;
    if (runtime->hasFunction(0x2FF4F0u)) {
        auto targetFn = runtime->lookupFunction(0x2FF4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300130u; }
        if (ctx->pc != 0x300130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndSelectCastingPoint__FP6CScene_0x2ff4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300130u; }
        if (ctx->pc != 0x300130u) { return; }
    }
    ctx->pc = 0x300130u;
label_300130:
    // 0x300130: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_300134:
    if (ctx->pc == 0x300134u) {
        ctx->pc = 0x300134u;
            // 0x300134: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300138u;
        goto label_300138;
    }
    ctx->pc = 0x300130u;
    {
        const bool branch_taken_0x300130 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x300134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300130u;
            // 0x300134: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300130) {
            ctx->pc = 0x300158u;
            goto label_300158;
        }
    }
    ctx->pc = 0x300138u;
label_300138:
    // 0x300138: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x300138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30013c:
    // 0x30013c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x30013cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_300140:
    // 0x300140: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x300140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_300144:
    // 0x300144: 0x24a51f28  addiu       $a1, $a1, 0x1F28
    ctx->pc = 0x300144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7976));
label_300148:
    // 0x300148: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x300148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_30014c:
    // 0x30014c: 0x320f809  jalr        $t9
label_300150:
    if (ctx->pc == 0x300150u) {
        ctx->pc = 0x300150u;
            // 0x300150: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x300154u;
        goto label_300154;
    }
    ctx->pc = 0x30014Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x300154u);
        ctx->pc = 0x300150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30014Cu;
            // 0x300150: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x300154u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x300154u; }
            if (ctx->pc != 0x300154u) { return; }
        }
        }
    }
    ctx->pc = 0x300154u;
label_300154:
    // 0x300154: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300158:
    // 0x300158: 0xc0bf1d0  jal         func_2FC740
label_30015c:
    if (ctx->pc == 0x30015Cu) {
        ctx->pc = 0x300160u;
        goto label_300160;
    }
    ctx->pc = 0x300158u;
    SET_GPR_U32(ctx, 31, 0x300160u);
    ctx->pc = 0x2FC740u;
    if (runtime->hasFunction(0x2FC740u)) {
        auto targetFn = runtime->lookupFunction(0x2FC740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300160u; }
        if (ctx->pc != 0x300160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextMode__Fi_0x2fc740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300160u; }
        if (ctx->pc != 0x300160u) { return; }
    }
    ctx->pc = 0x300160u;
label_300160:
    // 0x300160: 0x10000309  b           . + 4 + (0x309 << 2)
label_300164:
    if (ctx->pc == 0x300164u) {
        ctx->pc = 0x300164u;
            // 0x300164: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x300168u;
        goto label_300168;
    }
    ctx->pc = 0x300160u;
    {
        const bool branch_taken_0x300160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300160u;
            // 0x300164: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300160) {
            ctx->pc = 0x300D88u;
            goto label_300d88;
        }
    }
    ctx->pc = 0x300168u;
label_300168:
    // 0x300168: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x300168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30016c:
    // 0x30016c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x30016cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_300170:
    // 0x300170: 0xc0bb548  jal         func_2ED520
label_300174:
    if (ctx->pc == 0x300174u) {
        ctx->pc = 0x300174u;
            // 0x300174: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x300178u;
        goto label_300178;
    }
    ctx->pc = 0x300170u;
    SET_GPR_U32(ctx, 31, 0x300178u);
    ctx->pc = 0x300174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300170u;
            // 0x300174: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED520u;
    if (runtime->hasFunction(0x2ED520u)) {
        auto targetFn = runtime->lookupFunction(0x2ED520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300178u; }
        if (ctx->pc != 0x300178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analog__11CPadControlFi_0x2ed520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300178u; }
        if (ctx->pc != 0x300178u) { return; }
    }
    ctx->pc = 0x300178u;
label_300178:
    // 0x300178: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x300178u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_30017c:
    // 0x30017c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30017cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_300180:
    // 0x300180: 0xc0bb548  jal         func_2ED520
label_300184:
    if (ctx->pc == 0x300184u) {
        ctx->pc = 0x300184u;
            // 0x300184: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x300188u;
        goto label_300188;
    }
    ctx->pc = 0x300180u;
    SET_GPR_U32(ctx, 31, 0x300188u);
    ctx->pc = 0x300184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300180u;
            // 0x300184: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED520u;
    if (runtime->hasFunction(0x2ED520u)) {
        auto targetFn = runtime->lookupFunction(0x2ED520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300188u; }
        if (ctx->pc != 0x300188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analog__11CPadControlFi_0x2ed520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300188u; }
        if (ctx->pc != 0x300188u) { return; }
    }
    ctx->pc = 0x300188u;
label_300188:
    // 0x300188: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x300188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_30018c:
    // 0x30018c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x30018cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_300190:
    // 0x300190: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x300190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_300194:
    // 0x300194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_300198:
    // 0x300198: 0x0  nop
    ctx->pc = 0x300198u;
    // NOP
label_30019c:
    // 0x30019c: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x30019cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3001a0:
    // 0x3001a0: 0x0  nop
    ctx->pc = 0x3001a0u;
    // NOP
label_3001a4:
    // 0x3001a4: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_3001a8:
    if (ctx->pc == 0x3001A8u) {
        ctx->pc = 0x3001ACu;
        goto label_3001ac;
    }
    ctx->pc = 0x3001A4u;
    {
        const bool branch_taken_0x3001a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3001a4) {
            ctx->pc = 0x3001D8u;
            goto label_3001d8;
        }
    }
    ctx->pc = 0x3001ACu;
label_3001ac:
    // 0x3001ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3001acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3001b0:
    // 0x3001b0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x3001b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_3001b4:
    // 0x3001b4: 0xaf82a098  sw          $v0, -0x5F68($gp)
    ctx->pc = 0x3001b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942872), GPR_U32(ctx, 2));
label_3001b8:
    // 0x3001b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3001b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3001bc:
    // 0x3001bc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3001bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3001c0:
    // 0x3001c0: 0x24a52020  addiu       $a1, $a1, 0x2020
    ctx->pc = 0x3001c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8224));
label_3001c4:
    // 0x3001c4: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x3001c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_3001c8:
    // 0x3001c8: 0x320f809  jalr        $t9
label_3001cc:
    if (ctx->pc == 0x3001CCu) {
        ctx->pc = 0x3001CCu;
            // 0x3001cc: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x3001D0u;
        goto label_3001d0;
    }
    ctx->pc = 0x3001C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3001D0u);
        ctx->pc = 0x3001CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3001C8u;
            // 0x3001cc: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3001D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3001D0u; }
            if (ctx->pc != 0x3001D0u) { return; }
        }
        }
    }
    ctx->pc = 0x3001D0u;
label_3001d0:
    // 0x3001d0: 0x1000002c  b           . + 4 + (0x2C << 2)
label_3001d4:
    if (ctx->pc == 0x3001D4u) {
        ctx->pc = 0x3001D4u;
            // 0x3001d4: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->pc = 0x3001D8u;
        goto label_3001d8;
    }
    ctx->pc = 0x3001D0u;
    {
        const bool branch_taken_0x3001d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3001D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3001D0u;
            // 0x3001d4: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3001d0) {
            ctx->pc = 0x300284u;
            goto label_300284;
        }
    }
    ctx->pc = 0x3001D8u;
label_3001d8:
    // 0x3001d8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3001d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3001dc:
    // 0x3001dc: 0x0  nop
    ctx->pc = 0x3001dcu;
    // NOP
label_3001e0:
    // 0x3001e0: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_3001e4:
    if (ctx->pc == 0x3001E4u) {
        ctx->pc = 0x3001E4u;
            // 0x3001e4: 0x3c02bf4c  lui         $v0, 0xBF4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48972 << 16));
        ctx->pc = 0x3001E8u;
        goto label_3001e8;
    }
    ctx->pc = 0x3001E0u;
    {
        const bool branch_taken_0x3001e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3001E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3001E0u;
            // 0x3001e4: 0x3c02bf4c  lui         $v0, 0xBF4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48972 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3001e0) {
            ctx->pc = 0x300218u;
            goto label_300218;
        }
    }
    ctx->pc = 0x3001E8u;
label_3001e8:
    // 0x3001e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3001e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3001ec:
    // 0x3001ec: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x3001ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_3001f0:
    // 0x3001f0: 0xaf82a098  sw          $v0, -0x5F68($gp)
    ctx->pc = 0x3001f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942872), GPR_U32(ctx, 2));
label_3001f4:
    // 0x3001f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3001f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3001f8:
    // 0x3001f8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3001f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3001fc:
    // 0x3001fc: 0x24a52030  addiu       $a1, $a1, 0x2030
    ctx->pc = 0x3001fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8240));
label_300200:
    // 0x300200: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x300200u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_300204:
    // 0x300204: 0x320f809  jalr        $t9
label_300208:
    if (ctx->pc == 0x300208u) {
        ctx->pc = 0x300208u;
            // 0x300208: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x30020Cu;
        goto label_30020c;
    }
    ctx->pc = 0x300204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30020Cu);
        ctx->pc = 0x300208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300204u;
            // 0x300208: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30020Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30020Cu; }
            if (ctx->pc != 0x30020Cu) { return; }
        }
        }
    }
    ctx->pc = 0x30020Cu;
label_30020c:
    // 0x30020c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_300210:
    if (ctx->pc == 0x300210u) {
        ctx->pc = 0x300214u;
        goto label_300214;
    }
    ctx->pc = 0x30020Cu;
    {
        const bool branch_taken_0x30020c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30020c) {
            ctx->pc = 0x300280u;
            goto label_300280;
        }
    }
    ctx->pc = 0x300214u;
label_300214:
    // 0x300214: 0x3c02bf4c  lui         $v0, 0xBF4C
    ctx->pc = 0x300214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48972 << 16));
label_300218:
    // 0x300218: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x300218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_30021c:
    // 0x30021c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30021cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_300220:
    // 0x300220: 0x0  nop
    ctx->pc = 0x300220u;
    // NOP
label_300224:
    // 0x300224: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x300224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_300228:
    // 0x300228: 0x0  nop
    ctx->pc = 0x300228u;
    // NOP
label_30022c:
    // 0x30022c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_300230:
    if (ctx->pc == 0x300230u) {
        ctx->pc = 0x300234u;
        goto label_300234;
    }
    ctx->pc = 0x30022Cu;
    {
        const bool branch_taken_0x30022c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30022c) {
            ctx->pc = 0x300260u;
            goto label_300260;
        }
    }
    ctx->pc = 0x300234u;
label_300234:
    // 0x300234: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x300234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_300238:
    // 0x300238: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x300238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_30023c:
    // 0x30023c: 0xaf82a098  sw          $v0, -0x5F68($gp)
    ctx->pc = 0x30023cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942872), GPR_U32(ctx, 2));
label_300240:
    // 0x300240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x300240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_300244:
    // 0x300244: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x300244u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_300248:
    // 0x300248: 0x24a52040  addiu       $a1, $a1, 0x2040
    ctx->pc = 0x300248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8256));
label_30024c:
    // 0x30024c: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x30024cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_300250:
    // 0x300250: 0x320f809  jalr        $t9
label_300254:
    if (ctx->pc == 0x300254u) {
        ctx->pc = 0x300254u;
            // 0x300254: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x300258u;
        goto label_300258;
    }
    ctx->pc = 0x300250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x300258u);
        ctx->pc = 0x300254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300250u;
            // 0x300254: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x300258u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x300258u; }
            if (ctx->pc != 0x300258u) { return; }
        }
        }
    }
    ctx->pc = 0x300258u;
label_300258:
    // 0x300258: 0x10000009  b           . + 4 + (0x9 << 2)
label_30025c:
    if (ctx->pc == 0x30025Cu) {
        ctx->pc = 0x300260u;
        goto label_300260;
    }
    ctx->pc = 0x300258u;
    {
        const bool branch_taken_0x300258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300258) {
            ctx->pc = 0x300280u;
            goto label_300280;
        }
    }
    ctx->pc = 0x300260u;
label_300260:
    // 0x300260: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x300260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_300264:
    // 0x300264: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x300264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_300268:
    // 0x300268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x300268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30026c:
    // 0x30026c: 0x24a52010  addiu       $a1, $a1, 0x2010
    ctx->pc = 0x30026cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8208));
label_300270:
    // 0x300270: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x300270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_300274:
    // 0x300274: 0x320f809  jalr        $t9
label_300278:
    if (ctx->pc == 0x300278u) {
        ctx->pc = 0x300278u;
            // 0x300278: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30027Cu;
        goto label_30027c;
    }
    ctx->pc = 0x300274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30027Cu);
        ctx->pc = 0x300278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300274u;
            // 0x300278: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30027Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30027Cu; }
            if (ctx->pc != 0x30027Cu) { return; }
        }
        }
    }
    ctx->pc = 0x30027Cu;
label_30027c:
    // 0x30027c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30027cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300280:
    // 0x300280: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x300280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_300284:
    // 0x300284: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x300284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_300288:
    // 0x300288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30028c:
    // 0x30028c: 0x0  nop
    ctx->pc = 0x30028cu;
    // NOP
label_300290:
    // 0x300290: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x300290u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_300294:
    // 0x300294: 0x0  nop
    ctx->pc = 0x300294u;
    // NOP
label_300298:
    // 0x300298: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_30029c:
    if (ctx->pc == 0x30029Cu) {
        ctx->pc = 0x30029Cu;
            // 0x30029c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3002A0u;
        goto label_3002a0;
    }
    ctx->pc = 0x300298u;
    {
        const bool branch_taken_0x300298 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30029Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300298u;
            // 0x30029c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300298) {
            ctx->pc = 0x3002A4u;
            goto label_3002a4;
        }
    }
    ctx->pc = 0x3002A0u;
label_3002a0:
    // 0x3002a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3002a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3002a4:
    // 0x3002a4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3002a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3002a8:
    // 0x3002a8: 0x3c03bf4c  lui         $v1, 0xBF4C
    ctx->pc = 0x3002a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48972 << 16));
label_3002ac:
    // 0x3002ac: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3002acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_3002b0:
    // 0x3002b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3002b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3002b4:
    // 0x3002b4: 0x0  nop
    ctx->pc = 0x3002b4u;
    // NOP
label_3002b8:
    // 0x3002b8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3002b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3002bc:
    // 0x3002bc: 0x0  nop
    ctx->pc = 0x3002bcu;
    // NOP
label_3002c0:
    // 0x3002c0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3002c4:
    if (ctx->pc == 0x3002C4u) {
        ctx->pc = 0x3002C4u;
            // 0x3002c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3002C8u;
        goto label_3002c8;
    }
    ctx->pc = 0x3002C0u;
    {
        const bool branch_taken_0x3002c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3002C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3002C0u;
            // 0x3002c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3002c0) {
            ctx->pc = 0x3002CCu;
            goto label_3002cc;
        }
    }
    ctx->pc = 0x3002C8u;
label_3002c8:
    // 0x3002c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3002c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3002cc:
    // 0x3002cc: 0xc7819fcc  lwc1        $f1, -0x6034($gp)
    ctx->pc = 0x3002ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3002d0:
    // 0x3002d0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3002d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3002d4:
    // 0x3002d4: 0x3c043f4c  lui         $a0, 0x3F4C
    ctx->pc = 0x3002d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16204 << 16));
label_3002d8:
    // 0x3002d8: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x3002d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_3002dc:
    // 0x3002dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3002dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3002e0:
    // 0x3002e0: 0x0  nop
    ctx->pc = 0x3002e0u;
    // NOP
label_3002e4:
    // 0x3002e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3002e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3002e8:
    // 0x3002e8: 0x0  nop
    ctx->pc = 0x3002e8u;
    // NOP
label_3002ec:
    // 0x3002ec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3002f0:
    if (ctx->pc == 0x3002F0u) {
        ctx->pc = 0x3002F0u;
            // 0x3002f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3002F4u;
        goto label_3002f4;
    }
    ctx->pc = 0x3002ECu;
    {
        const bool branch_taken_0x3002ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3002F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3002ECu;
            // 0x3002f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3002ec) {
            ctx->pc = 0x3002F8u;
            goto label_3002f8;
        }
    }
    ctx->pc = 0x3002F4u;
label_3002f4:
    // 0x3002f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3002f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3002f8:
    // 0x3002f8: 0xc7819fc8  lwc1        $f1, -0x6038($gp)
    ctx->pc = 0x3002f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3002fc:
    // 0x3002fc: 0x3c043f4c  lui         $a0, 0x3F4C
    ctx->pc = 0x3002fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16204 << 16));
label_300300:
    // 0x300300: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x300300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_300304:
    // 0x300304: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x300304u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_300308:
    // 0x300308: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x300308u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30030c:
    // 0x30030c: 0x0  nop
    ctx->pc = 0x30030cu;
    // NOP
label_300310:
    // 0x300310: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x300310u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_300314:
    // 0x300314: 0x0  nop
    ctx->pc = 0x300314u;
    // NOP
label_300318:
    // 0x300318: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_30031c:
    if (ctx->pc == 0x30031Cu) {
        ctx->pc = 0x30031Cu;
            // 0x30031c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x300320u;
        goto label_300320;
    }
    ctx->pc = 0x300318u;
    {
        const bool branch_taken_0x300318 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30031Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300318u;
            // 0x30031c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300318) {
            ctx->pc = 0x300324u;
            goto label_300324;
        }
    }
    ctx->pc = 0x300320u;
label_300320:
    // 0x300320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300324:
    // 0x300324: 0x3c04bf4c  lui         $a0, 0xBF4C
    ctx->pc = 0x300324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48972 << 16));
label_300328:
    // 0x300328: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x300328u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_30032c:
    // 0x30032c: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x30032cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_300330:
    // 0x300330: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x300330u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_300334:
    // 0x300334: 0x0  nop
    ctx->pc = 0x300334u;
    // NOP
label_300338:
    // 0x300338: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x300338u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30033c:
    // 0x30033c: 0x0  nop
    ctx->pc = 0x30033cu;
    // NOP
label_300340:
    // 0x300340: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_300344:
    if (ctx->pc == 0x300344u) {
        ctx->pc = 0x300344u;
            // 0x300344: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x300348u;
        goto label_300348;
    }
    ctx->pc = 0x300340u;
    {
        const bool branch_taken_0x300340 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x300344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300340u;
            // 0x300344: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300340) {
            ctx->pc = 0x30034Cu;
            goto label_30034c;
        }
    }
    ctx->pc = 0x300348u;
label_300348:
    // 0x300348: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30034c:
    // 0x30034c: 0x3c043f4c  lui         $a0, 0x3F4C
    ctx->pc = 0x30034cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16204 << 16));
label_300350:
    // 0x300350: 0x30a800ff  andi        $t0, $a1, 0xFF
    ctx->pc = 0x300350u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_300354:
    // 0x300354: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x300354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_300358:
    // 0x300358: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x300358u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30035c:
    // 0x30035c: 0x0  nop
    ctx->pc = 0x30035cu;
    // NOP
label_300360:
    // 0x300360: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x300360u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_300364:
    // 0x300364: 0x0  nop
    ctx->pc = 0x300364u;
    // NOP
label_300368:
    // 0x300368: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_30036c:
    if (ctx->pc == 0x30036Cu) {
        ctx->pc = 0x30036Cu;
            // 0x30036c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x300370u;
        goto label_300370;
    }
    ctx->pc = 0x300368u;
    {
        const bool branch_taken_0x300368 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30036Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300368u;
            // 0x30036c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300368) {
            ctx->pc = 0x300374u;
            goto label_300374;
        }
    }
    ctx->pc = 0x300370u;
label_300370:
    // 0x300370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300374:
    // 0x300374: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x300374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_300378:
    // 0x300378: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x300378u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_30037c:
    // 0x30037c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_300380:
    if (ctx->pc == 0x300380u) {
        ctx->pc = 0x300384u;
        goto label_300384;
    }
    ctx->pc = 0x30037Cu;
    {
        const bool branch_taken_0x30037c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30037c) {
            ctx->pc = 0x30038Cu;
            goto label_30038c;
        }
    }
    ctx->pc = 0x300384u;
label_300384:
    // 0x300384: 0x6202b  sltu        $a0, $zero, $a2
    ctx->pc = 0x300384u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_300388:
    // 0x300388: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x300388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_30038c:
    // 0x30038c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x30038cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_300390:
    // 0x300390: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_300394:
    if (ctx->pc == 0x300394u) {
        ctx->pc = 0x300394u;
            // 0x300394: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x300398u;
        goto label_300398;
    }
    ctx->pc = 0x300390u;
    {
        const bool branch_taken_0x300390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x300394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300390u;
            // 0x300394: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x300390) {
            ctx->pc = 0x3003A0u;
            goto label_3003a0;
        }
    }
    ctx->pc = 0x300398u;
label_300398:
    // 0x300398: 0x7102b  sltu        $v0, $zero, $a3
    ctx->pc = 0x300398u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_30039c:
    // 0x30039c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x30039cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3003a0:
    // 0x3003a0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3003a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3003a4:
    // 0x3003a4: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x3003a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3003a8:
    // 0x3003a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3003ac:
    if (ctx->pc == 0x3003ACu) {
        ctx->pc = 0x3003ACu;
            // 0x3003ac: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3003B0u;
        goto label_3003b0;
    }
    ctx->pc = 0x3003A8u;
    {
        const bool branch_taken_0x3003a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3003ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3003A8u;
            // 0x3003ac: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3003a8) {
            ctx->pc = 0x3003BCu;
            goto label_3003bc;
        }
    }
    ctx->pc = 0x3003B0u;
label_3003b0:
    // 0x3003b0: 0x8102b  sltu        $v0, $zero, $t0
    ctx->pc = 0x3003b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_3003b4:
    // 0x3003b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3003b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3003b8:
    // 0x3003b8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3003b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3003bc:
    // 0x3003bc: 0x4102b  sltu        $v0, $zero, $a0
    ctx->pc = 0x3003bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3003c0:
    // 0x3003c0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3003c4:
    if (ctx->pc == 0x3003C4u) {
        ctx->pc = 0x3003C8u;
        goto label_3003c8;
    }
    ctx->pc = 0x3003C0u;
    {
        const bool branch_taken_0x3003c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3003c0) {
            ctx->pc = 0x3003CCu;
            goto label_3003cc;
        }
    }
    ctx->pc = 0x3003C8u;
label_3003c8:
    // 0x3003c8: 0x5102b  sltu        $v0, $zero, $a1
    ctx->pc = 0x3003c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3003cc:
    // 0x3003cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3003d0:
    if (ctx->pc == 0x3003D0u) {
        ctx->pc = 0x3003D0u;
            // 0x3003d0: 0x305500ff  andi        $s5, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3003D4u;
        goto label_3003d4;
    }
    ctx->pc = 0x3003CCu;
    {
        const bool branch_taken_0x3003cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3003D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3003CCu;
            // 0x3003d0: 0x305500ff  andi        $s5, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3003cc) {
            ctx->pc = 0x3003DCu;
            goto label_3003dc;
        }
    }
    ctx->pc = 0x3003D4u;
label_3003d4:
    // 0x3003d4: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x3003d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3003d8:
    // 0x3003d8: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x3003d8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3003dc:
    // 0x3003dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3003dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3003e0:
    // 0x3003e0: 0x24050079  addiu       $a1, $zero, 0x79
    ctx->pc = 0x3003e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
label_3003e4:
    // 0x3003e4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x3003e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3003e8:
    // 0x3003e8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3003e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3003ec:
    // 0x3003ec: 0xc0bb538  jal         func_2ED4E0
label_3003f0:
    if (ctx->pc == 0x3003F0u) {
        ctx->pc = 0x3003F0u;
            // 0x3003f0: 0x24170007  addiu       $s7, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x3003F4u;
        goto label_3003f4;
    }
    ctx->pc = 0x3003ECu;
    SET_GPR_U32(ctx, 31, 0x3003F4u);
    ctx->pc = 0x3003F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3003ECu;
            // 0x3003f0: 0x24170007  addiu       $s7, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3003F4u; }
        if (ctx->pc != 0x3003F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3003F4u; }
        if (ctx->pc != 0x3003F4u) { return; }
    }
    ctx->pc = 0x3003F4u;
label_3003f4:
    // 0x3003f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3003f8:
    if (ctx->pc == 0x3003F8u) {
        ctx->pc = 0x3003F8u;
            // 0x3003f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3003FCu;
        goto label_3003fc;
    }
    ctx->pc = 0x3003F4u;
    {
        const bool branch_taken_0x3003f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3003F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3003F4u;
            // 0x3003f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3003f4) {
            ctx->pc = 0x300420u;
            goto label_300420;
        }
    }
    ctx->pc = 0x3003FCu;
label_3003fc:
    // 0x3003fc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3003fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_300400:
    // 0x300400: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x300400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_300404:
    // 0x300404: 0xc0c3e94  jal         func_30FA50
label_300408:
    if (ctx->pc == 0x300408u) {
        ctx->pc = 0x30040Cu;
        goto label_30040c;
    }
    ctx->pc = 0x300404u;
    SET_GPR_U32(ctx, 31, 0x30040Cu);
    ctx->pc = 0x30FA50u;
    if (runtime->hasFunction(0x30FA50u)) {
        auto targetFn = runtime->lookupFunction(0x30FA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30040Cu; }
        if (ctx->pc != 0x30040Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExtendLine__Ff_0x30fa50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30040Cu; }
        if (ctx->pc != 0x30040Cu) { return; }
    }
    ctx->pc = 0x30040Cu;
label_30040c:
    // 0x30040c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x30040cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300410:
    // 0x300410: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x300410u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300414:
    // 0x300414: 0x1000000e  b           . + 4 + (0xE << 2)
label_300418:
    if (ctx->pc == 0x300418u) {
        ctx->pc = 0x300418u;
            // 0x300418: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30041Cu;
        goto label_30041c;
    }
    ctx->pc = 0x300414u;
    {
        const bool branch_taken_0x300414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300414u;
            // 0x300418: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300414) {
            ctx->pc = 0x300450u;
            goto label_300450;
        }
    }
    ctx->pc = 0x30041Cu;
label_30041c:
    // 0x30041c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30041cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_300420:
    // 0x300420: 0xc0bb538  jal         func_2ED4E0
label_300424:
    if (ctx->pc == 0x300424u) {
        ctx->pc = 0x300424u;
            // 0x300424: 0x2405007a  addiu       $a1, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->pc = 0x300428u;
        goto label_300428;
    }
    ctx->pc = 0x300420u;
    SET_GPR_U32(ctx, 31, 0x300428u);
    ctx->pc = 0x300424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300420u;
            // 0x300424: 0x2405007a  addiu       $a1, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300428u; }
        if (ctx->pc != 0x300428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300428u; }
        if (ctx->pc != 0x300428u) { return; }
    }
    ctx->pc = 0x300428u;
label_300428:
    // 0x300428: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_30042c:
    if (ctx->pc == 0x30042Cu) {
        ctx->pc = 0x300430u;
        goto label_300430;
    }
    ctx->pc = 0x300428u;
    {
        const bool branch_taken_0x300428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300428) {
            ctx->pc = 0x300450u;
            goto label_300450;
        }
    }
    ctx->pc = 0x300430u;
label_300430:
    // 0x300430: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x300430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
label_300434:
    // 0x300434: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x300434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_300438:
    // 0x300438: 0xc0c3e94  jal         func_30FA50
label_30043c:
    if (ctx->pc == 0x30043Cu) {
        ctx->pc = 0x300440u;
        goto label_300440;
    }
    ctx->pc = 0x300438u;
    SET_GPR_U32(ctx, 31, 0x300440u);
    ctx->pc = 0x30FA50u;
    if (runtime->hasFunction(0x30FA50u)) {
        auto targetFn = runtime->lookupFunction(0x30FA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300440u; }
        if (ctx->pc != 0x300440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExtendLine__Ff_0x30fa50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300440u; }
        if (ctx->pc != 0x300440u) { return; }
    }
    ctx->pc = 0x300440u;
label_300440:
    // 0x300440: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x300440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300444:
    // 0x300444: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x300444u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300448:
    // 0x300448: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x300448u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30044c:
    // 0x30044c: 0x24170008  addiu       $s7, $zero, 0x8
    ctx->pc = 0x30044cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_300450:
    // 0x300450: 0x7c1000d  bgez        $fp, . + 4 + (0xD << 2)
label_300454:
    if (ctx->pc == 0x300454u) {
        ctx->pc = 0x300458u;
        goto label_300458;
    }
    ctx->pc = 0x300450u;
    {
        const bool branch_taken_0x300450 = (GPR_S32(ctx, 30) >= 0);
        if (branch_taken_0x300450) {
            ctx->pc = 0x300488u;
            goto label_300488;
        }
    }
    ctx->pc = 0x300458u;
label_300458:
    // 0x300458: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x300458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30045c:
    // 0x30045c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_300460:
    if (ctx->pc == 0x300460u) {
        ctx->pc = 0x300460u;
            // 0x300460: 0xaf83a010  sw          $v1, -0x5FF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942736), GPR_U32(ctx, 3));
        ctx->pc = 0x300464u;
        goto label_300464;
    }
    ctx->pc = 0x30045Cu;
    {
        const bool branch_taken_0x30045c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x300460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30045Cu;
            // 0x300460: 0xaf83a010  sw          $v1, -0x5FF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942736), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30045c) {
            ctx->pc = 0x300480u;
            goto label_300480;
        }
    }
    ctx->pc = 0x300464u;
label_300464:
    // 0x300464: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x300464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_300468:
    // 0x300468: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x300468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_30046c:
    // 0x30046c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30046cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_300470:
    // 0x300470: 0x24a51ff0  addiu       $a1, $a1, 0x1FF0
    ctx->pc = 0x300470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8176));
label_300474:
    // 0x300474: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x300474u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_300478:
    // 0x300478: 0x320f809  jalr        $t9
label_30047c:
    if (ctx->pc == 0x30047Cu) {
        ctx->pc = 0x30047Cu;
            // 0x30047c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300480u;
        goto label_300480;
    }
    ctx->pc = 0x300478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x300480u);
        ctx->pc = 0x30047Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300478u;
            // 0x30047c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x300480u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x300480u; }
            if (ctx->pc != 0x300480u) { return; }
        }
        }
    }
    ctx->pc = 0x300480u;
label_300480:
    // 0x300480: 0x10000240  b           . + 4 + (0x240 << 2)
label_300484:
    if (ctx->pc == 0x300484u) {
        ctx->pc = 0x300484u;
            // 0x300484: 0xaf80a014  sw          $zero, -0x5FEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942740), GPR_U32(ctx, 0));
        ctx->pc = 0x300488u;
        goto label_300488;
    }
    ctx->pc = 0x300480u;
    {
        const bool branch_taken_0x300480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300480u;
            // 0x300484: 0xaf80a014  sw          $zero, -0x5FEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942740), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300480) {
            ctx->pc = 0x300D84u;
            goto label_300d84;
        }
    }
    ctx->pc = 0x300488u;
label_300488:
    // 0x300488: 0x12c0000a  beqz        $s6, . + 4 + (0xA << 2)
label_30048c:
    if (ctx->pc == 0x30048Cu) {
        ctx->pc = 0x30048Cu;
            // 0x30048c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x300490u;
        goto label_300490;
    }
    ctx->pc = 0x300488u;
    {
        const bool branch_taken_0x300488 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x30048Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300488u;
            // 0x30048c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300488) {
            ctx->pc = 0x3004B4u;
            goto label_3004b4;
        }
    }
    ctx->pc = 0x300490u;
label_300490:
    // 0x300490: 0x8f859f74  lw          $a1, -0x608C($gp)
    ctx->pc = 0x300490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_300494:
    // 0x300494: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x300494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_300498:
    // 0x300498: 0x34210540  ori         $at, $at, 0x540
    ctx->pc = 0x300498u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1344);
label_30049c:
    // 0x30049c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x30049cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3004a0:
    // 0x3004a0: 0x2812021  addu        $a0, $s4, $at
    ctx->pc = 0x3004a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
label_3004a4:
    // 0x3004a4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3004a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3004a8:
    // 0x3004a8: 0xc0631a8  jal         func_18C6A0
label_3004ac:
    if (ctx->pc == 0x3004ACu) {
        ctx->pc = 0x3004ACu;
            // 0x3004ac: 0x2408000d  addiu       $t0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x3004B0u;
        goto label_3004b0;
    }
    ctx->pc = 0x3004A8u;
    SET_GPR_U32(ctx, 31, 0x3004B0u);
    ctx->pc = 0x3004ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3004A8u;
            // 0x3004ac: 0x2408000d  addiu       $t0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C6A0u;
    if (runtime->hasFunction(0x18C6A0u)) {
        auto targetFn = runtime->lookupFunction(0x18C6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3004B0u; }
        if (ctx->pc != 0x3004B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SeLoopPlayStop__11CLoopSeMngrFUiiii_0x18c6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3004B0u; }
        if (ctx->pc != 0x3004B0u) { return; }
    }
    ctx->pc = 0x3004B0u;
label_3004b0:
    // 0x3004b0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3004b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3004b4:
    // 0x3004b4: 0xc0c407c  jal         func_3101F0
label_3004b8:
    if (ctx->pc == 0x3004B8u) {
        ctx->pc = 0x3004B8u;
            // 0x3004b8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3004BCu;
        goto label_3004bc;
    }
    ctx->pc = 0x3004B4u;
    SET_GPR_U32(ctx, 31, 0x3004BCu);
    ctx->pc = 0x3004B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3004B4u;
            // 0x3004b8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3101F0u;
    if (runtime->hasFunction(0x3101F0u)) {
        auto targetFn = runtime->lookupFunction(0x3101F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3004BCu; }
        if (ctx->pc != 0x3004BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHariPos__FPfPf_0x3101f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3004BCu; }
        if (ctx->pc != 0x3004BCu) { return; }
    }
    ctx->pc = 0x3004BCu;
label_3004bc:
    // 0x3004bc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3004bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3004c0:
    // 0x3004c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3004c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3004c4:
    // 0x3004c4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3004c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3004c8:
    // 0x3004c8: 0x320f809  jalr        $t9
label_3004cc:
    if (ctx->pc == 0x3004CCu) {
        ctx->pc = 0x3004CCu;
            // 0x3004cc: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3004D0u;
        goto label_3004d0;
    }
    ctx->pc = 0x3004C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3004D0u);
        ctx->pc = 0x3004CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3004C8u;
            // 0x3004cc: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3004D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3004D0u; }
            if (ctx->pc != 0x3004D0u) { return; }
        }
        }
    }
    ctx->pc = 0x3004D0u;
label_3004d0:
    // 0x3004d0: 0xc0c3e78  jal         func_30F9E0
label_3004d4:
    if (ctx->pc == 0x3004D4u) {
        ctx->pc = 0x3004D8u;
        goto label_3004d8;
    }
    ctx->pc = 0x3004D0u;
    SET_GPR_U32(ctx, 31, 0x3004D8u);
    ctx->pc = 0x30F9E0u;
    if (runtime->hasFunction(0x30F9E0u)) {
        auto targetFn = runtime->lookupFunction(0x30F9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3004D8u; }
        if (ctx->pc != 0x3004D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWaterLevel__Fv_0x30f9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3004D8u; }
        if (ctx->pc != 0x3004D8u) { return; }
    }
    ctx->pc = 0x3004D8u;
label_3004d8:
    // 0x3004d8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3004d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_3004dc:
    // 0x3004dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3004dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3004e0:
    // 0x3004e0: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x3004e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3004e4:
    // 0x3004e4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3004e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_3004e8:
    // 0x3004e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3004e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3004ec:
    // 0x3004ec: 0x0  nop
    ctx->pc = 0x3004ecu;
    // NOP
label_3004f0:
    // 0x3004f0: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_3004f4:
    if (ctx->pc == 0x3004F4u) {
        ctx->pc = 0x3004F4u;
            // 0x3004f4: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3004F8u;
        goto label_3004f8;
    }
    ctx->pc = 0x3004F0u;
    {
        const bool branch_taken_0x3004f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3004F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3004F0u;
            // 0x3004f4: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3004f0) {
            ctx->pc = 0x30051Cu;
            goto label_30051c;
        }
    }
    ctx->pc = 0x3004F8u;
label_3004f8:
    // 0x3004f8: 0xc0c3e70  jal         func_30F9C0
label_3004fc:
    if (ctx->pc == 0x3004FCu) {
        ctx->pc = 0x300500u;
        goto label_300500;
    }
    ctx->pc = 0x3004F8u;
    SET_GPR_U32(ctx, 31, 0x300500u);
    ctx->pc = 0x30F9C0u;
    if (runtime->hasFunction(0x30F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x30F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300500u; }
        if (ctx->pc != 0x300500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishingMode__Fv_0x30f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300500u; }
        if (ctx->pc != 0x300500u) { return; }
    }
    ctx->pc = 0x300500u;
label_300500:
    // 0x300500: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300504:
    // 0x300504: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_300508:
    if (ctx->pc == 0x300508u) {
        ctx->pc = 0x30050Cu;
        goto label_30050c;
    }
    ctx->pc = 0x300504u;
    {
        const bool branch_taken_0x300504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x300504) {
            ctx->pc = 0x300518u;
            goto label_300518;
        }
    }
    ctx->pc = 0x30050Cu;
label_30050c:
    // 0x30050c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30050cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_300510:
    // 0x300510: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x300510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_300514:
    // 0x300514: 0xac229d00  sw          $v0, -0x6300($at)
    ctx->pc = 0x300514u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941952), GPR_U32(ctx, 2));
label_300518:
    // 0x300518: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x300518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_30051c:
    // 0x30051c: 0xc04c028  jal         func_1300A0
label_300520:
    if (ctx->pc == 0x300520u) {
        ctx->pc = 0x300520u;
            // 0x300520: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x300524u;
        goto label_300524;
    }
    ctx->pc = 0x30051Cu;
    SET_GPR_U32(ctx, 31, 0x300524u);
    ctx->pc = 0x300520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30051Cu;
            // 0x300520: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300A0u;
    if (runtime->hasFunction(0x1300A0u)) {
        auto targetFn = runtime->lookupFunction(0x1300A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300524u; }
        if (ctx->pc != 0x300524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPfPf_0x1300a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300524u; }
        if (ctx->pc != 0x300524u) { return; }
    }
    ctx->pc = 0x300524u;
label_300524:
    // 0x300524: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x300524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_300528:
    // 0x300528: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x300528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30052c:
    // 0x30052c: 0x0  nop
    ctx->pc = 0x30052cu;
    // NOP
label_300530:
    // 0x300530: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x300530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_300534:
    // 0x300534: 0x0  nop
    ctx->pc = 0x300534u;
    // NOP
label_300538:
    // 0x300538: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_30053c:
    if (ctx->pc == 0x30053Cu) {
        ctx->pc = 0x300540u;
        goto label_300540;
    }
    ctx->pc = 0x300538u;
    {
        const bool branch_taken_0x300538 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x300538) {
            ctx->pc = 0x30054Cu;
            goto label_30054c;
        }
    }
    ctx->pc = 0x300540u;
label_300540:
    // 0x300540: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x300540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_300544:
    // 0x300544: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x300544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_300548:
    // 0x300548: 0xac229d00  sw          $v0, -0x6300($at)
    ctx->pc = 0x300548u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941952), GPR_U32(ctx, 2));
label_30054c:
    // 0x30054c: 0x8382a0a8  lb          $v0, -0x5F58($gp)
    ctx->pc = 0x30054cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942888)));
label_300550:
    // 0x300550: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_300554:
    if (ctx->pc == 0x300554u) {
        ctx->pc = 0x300554u;
            // 0x300554: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x300558u;
        goto label_300558;
    }
    ctx->pc = 0x300550u;
    {
        const bool branch_taken_0x300550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x300554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300550u;
            // 0x300554: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300550) {
            ctx->pc = 0x300568u;
            goto label_300568;
        }
    }
    ctx->pc = 0x300558u;
label_300558:
    // 0x300558: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x300558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30055c:
    // 0x30055c: 0xaf80a0a4  sw          $zero, -0x5F5C($gp)
    ctx->pc = 0x30055cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942884), GPR_U32(ctx, 0));
label_300560:
    // 0x300560: 0xa382a0a8  sb          $v0, -0x5F58($gp)
    ctx->pc = 0x300560u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294942888), (uint8_t)GPR_U32(ctx, 2));
label_300564:
    // 0x300564: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x300564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_300568:
    // 0x300568: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x300568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_30056c:
    // 0x30056c: 0xc0c407c  jal         func_3101F0
label_300570:
    if (ctx->pc == 0x300570u) {
        ctx->pc = 0x300570u;
            // 0x300570: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300574u;
        goto label_300574;
    }
    ctx->pc = 0x30056Cu;
    SET_GPR_U32(ctx, 31, 0x300574u);
    ctx->pc = 0x300570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30056Cu;
            // 0x300570: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3101F0u;
    if (runtime->hasFunction(0x3101F0u)) {
        auto targetFn = runtime->lookupFunction(0x3101F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300574u; }
        if (ctx->pc != 0x300574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHariPos__FPfPf_0x3101f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300574u; }
        if (ctx->pc != 0x300574u) { return; }
    }
    ctx->pc = 0x300574u;
label_300574:
    // 0x300574: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x300574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_300578:
    // 0x300578: 0xc0c4088  jal         func_310220
label_30057c:
    if (ctx->pc == 0x30057Cu) {
        ctx->pc = 0x30057Cu;
            // 0x30057c: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x300580u;
        goto label_300580;
    }
    ctx->pc = 0x300578u;
    SET_GPR_U32(ctx, 31, 0x300580u);
    ctx->pc = 0x30057Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300578u;
            // 0x30057c: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x310220u;
    if (runtime->hasFunction(0x310220u)) {
        auto targetFn = runtime->lookupFunction(0x310220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300580u; }
        if (ctx->pc != 0x300580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUkiPos__FPfPf_0x310220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300580u; }
        if (ctx->pc != 0x300580u) { return; }
    }
    ctx->pc = 0x300580u;
label_300580:
    // 0x300580: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x300580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_300584:
    // 0x300584: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x300584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_300588:
    // 0x300588: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x300588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_30058c:
    // 0x30058c: 0x320f809  jalr        $t9
label_300590:
    if (ctx->pc == 0x300590u) {
        ctx->pc = 0x300590u;
            // 0x300590: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x300594u;
        goto label_300594;
    }
    ctx->pc = 0x30058Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x300594u);
        ctx->pc = 0x300590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30058Cu;
            // 0x300590: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x300594u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x300594u; }
            if (ctx->pc != 0x300594u) { return; }
        }
        }
    }
    ctx->pc = 0x300594u;
label_300594:
    // 0x300594: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x300594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_300598:
    // 0x300598: 0xc04c028  jal         func_1300A0
label_30059c:
    if (ctx->pc == 0x30059Cu) {
        ctx->pc = 0x30059Cu;
            // 0x30059c: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3005A0u;
        goto label_3005a0;
    }
    ctx->pc = 0x300598u;
    SET_GPR_U32(ctx, 31, 0x3005A0u);
    ctx->pc = 0x30059Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300598u;
            // 0x30059c: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300A0u;
    if (runtime->hasFunction(0x1300A0u)) {
        auto targetFn = runtime->lookupFunction(0x1300A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3005A0u; }
        if (ctx->pc != 0x3005A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPfPf_0x1300a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3005A0u; }
        if (ctx->pc != 0x3005A0u) { return; }
    }
    ctx->pc = 0x3005A0u;
label_3005a0:
    // 0x3005a0: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x3005a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_3005a4:
    // 0x3005a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3005a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3005a8:
    // 0x3005a8: 0x0  nop
    ctx->pc = 0x3005a8u;
    // NOP
label_3005ac:
    // 0x3005ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3005acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3005b0:
    // 0x3005b0: 0x0  nop
    ctx->pc = 0x3005b0u;
    // NOP
label_3005b4:
    // 0x3005b4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3005b8:
    if (ctx->pc == 0x3005B8u) {
        ctx->pc = 0x3005B8u;
            // 0x3005b8: 0x3c0243c8  lui         $v0, 0x43C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
        ctx->pc = 0x3005BCu;
        goto label_3005bc;
    }
    ctx->pc = 0x3005B4u;
    {
        const bool branch_taken_0x3005b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3005B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3005B4u;
            // 0x3005b8: 0x3c0243c8  lui         $v0, 0x43C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3005b4) {
            ctx->pc = 0x3005C4u;
            goto label_3005c4;
        }
    }
    ctx->pc = 0x3005BCu;
label_3005bc:
    // 0x3005bc: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x3005bcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_3005c0:
    // 0x3005c0: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x3005c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_3005c4:
    // 0x3005c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3005c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3005c8:
    // 0x3005c8: 0x0  nop
    ctx->pc = 0x3005c8u;
    // NOP
label_3005cc:
    // 0x3005cc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3005ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3005d0:
    // 0x3005d0: 0x0  nop
    ctx->pc = 0x3005d0u;
    // NOP
label_3005d4:
    // 0x3005d4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_3005d8:
    if (ctx->pc == 0x3005D8u) {
        ctx->pc = 0x3005D8u;
            // 0x3005d8: 0x3c024320  lui         $v0, 0x4320 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
        ctx->pc = 0x3005DCu;
        goto label_3005dc;
    }
    ctx->pc = 0x3005D4u;
    {
        const bool branch_taken_0x3005d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3005D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3005D4u;
            // 0x3005d8: 0x3c024320  lui         $v0, 0x4320 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3005d4) {
            ctx->pc = 0x3005E4u;
            goto label_3005e4;
        }
    }
    ctx->pc = 0x3005DCu;
label_3005dc:
    // 0x3005dc: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x3005dcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_3005e0:
    // 0x3005e0: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x3005e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_3005e4:
    // 0x3005e4: 0x3c034370  lui         $v1, 0x4370
    ctx->pc = 0x3005e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
label_3005e8:
    // 0x3005e8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3005e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3005ec:
    // 0x3005ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3005ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3005f0:
    // 0x3005f0: 0x0  nop
    ctx->pc = 0x3005f0u;
    // NOP
label_3005f4:
    // 0x3005f4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3005f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_3005f8:
    // 0x3005f8: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x3005f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_3005fc:
    // 0x3005fc: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x3005fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_300600:
    // 0x300600: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x300600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_300604:
    // 0x300604: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x300604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_300608:
    // 0x300608: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x300608u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_30060c:
    // 0x30060c: 0xe780a00c  swc1        $f0, -0x5FF4($gp)
    ctx->pc = 0x30060cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942732), bits); }
label_300610:
    // 0x300610: 0xc781a00c  lwc1        $f1, -0x5FF4($gp)
    ctx->pc = 0x300610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_300614:
    // 0x300614: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x300614u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_300618:
    // 0x300618: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30061c:
    // 0x30061c: 0x0  nop
    ctx->pc = 0x30061cu;
    // NOP
label_300620:
    // 0x300620: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x300620u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_300624:
    // 0x300624: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x300624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_300628:
    // 0x300628: 0xc0c3e70  jal         func_30F9C0
label_30062c:
    if (ctx->pc == 0x30062Cu) {
        ctx->pc = 0x30062Cu;
            // 0x30062c: 0xe780a00c  swc1        $f0, -0x5FF4($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942732), bits); }
        ctx->pc = 0x300630u;
        goto label_300630;
    }
    ctx->pc = 0x300628u;
    SET_GPR_U32(ctx, 31, 0x300630u);
    ctx->pc = 0x30062Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300628u;
            // 0x30062c: 0xe780a00c  swc1        $f0, -0x5FF4($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942732), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x30F9C0u;
    if (runtime->hasFunction(0x30F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x30F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300630u; }
        if (ctx->pc != 0x300630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishingMode__Fv_0x30f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300630u; }
        if (ctx->pc != 0x300630u) { return; }
    }
    ctx->pc = 0x300630u;
label_300630:
    // 0x300630: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x300630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300634:
    // 0x300634: 0x144500a4  bne         $v0, $a1, . + 4 + (0xA4 << 2)
label_300638:
    if (ctx->pc == 0x300638u) {
        ctx->pc = 0x300638u;
            // 0x300638: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x30063Cu;
        goto label_30063c;
    }
    ctx->pc = 0x300634u;
    {
        const bool branch_taken_0x300634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x300638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300634u;
            // 0x300638: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300634) {
            ctx->pc = 0x3008C8u;
            goto label_3008c8;
        }
    }
    ctx->pc = 0x30063Cu;
label_30063c:
    // 0x30063c: 0xc0c6564  jal         func_319590
label_300640:
    if (ctx->pc == 0x300640u) {
        ctx->pc = 0x300640u;
            // 0x300640: 0x24040067  addiu       $a0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->pc = 0x300644u;
        goto label_300644;
    }
    ctx->pc = 0x30063Cu;
    SET_GPR_U32(ctx, 31, 0x300644u);
    ctx->pc = 0x300640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30063Cu;
            // 0x300640: 0x24040067  addiu       $a0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
    ctx->pc = 0x319590u;
    if (runtime->hasFunction(0x319590u)) {
        auto targetFn = runtime->lookupFunction(0x319590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300644u; }
        if (ctx->pc != 0x300644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShowHelpMes__Fii_0x319590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300644u; }
        if (ctx->pc != 0x300644u) { return; }
    }
    ctx->pc = 0x300644u;
label_300644:
    // 0x300644: 0x8f84a010  lw          $a0, -0x5FF0($gp)
    ctx->pc = 0x300644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942736)));
label_300648:
    // 0x300648: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x300648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_30064c:
    // 0x30064c: 0x1083007e  beq         $a0, $v1, . + 4 + (0x7E << 2)
label_300650:
    if (ctx->pc == 0x300650u) {
        ctx->pc = 0x300654u;
        goto label_300654;
    }
    ctx->pc = 0x30064Cu;
    {
        const bool branch_taken_0x30064c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30064c) {
            ctx->pc = 0x300848u;
            goto label_300848;
        }
    }
    ctx->pc = 0x300654u;
label_300654:
    // 0x300654: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x300654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_300658:
    // 0x300658: 0x10820046  beq         $a0, $v0, . + 4 + (0x46 << 2)
label_30065c:
    if (ctx->pc == 0x30065Cu) {
        ctx->pc = 0x300660u;
        goto label_300660;
    }
    ctx->pc = 0x300658u;
    {
        const bool branch_taken_0x300658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x300658) {
            ctx->pc = 0x300774u;
            goto label_300774;
        }
    }
    ctx->pc = 0x300660u;
label_300660:
    // 0x300660: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x300660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300664:
    // 0x300664: 0x10850016  beq         $a0, $a1, . + 4 + (0x16 << 2)
label_300668:
    if (ctx->pc == 0x300668u) {
        ctx->pc = 0x30066Cu;
        goto label_30066c;
    }
    ctx->pc = 0x300664u;
    {
        const bool branch_taken_0x300664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x300664) {
            ctx->pc = 0x3006C0u;
            goto label_3006c0;
        }
    }
    ctx->pc = 0x30066Cu;
label_30066c:
    // 0x30066c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_300670:
    if (ctx->pc == 0x300670u) {
        ctx->pc = 0x300674u;
        goto label_300674;
    }
    ctx->pc = 0x30066Cu;
    {
        const bool branch_taken_0x30066c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30066c) {
            ctx->pc = 0x30067Cu;
            goto label_30067c;
        }
    }
    ctx->pc = 0x300674u;
label_300674:
    // 0x300674: 0x10000130  b           . + 4 + (0x130 << 2)
label_300678:
    if (ctx->pc == 0x300678u) {
        ctx->pc = 0x300678u;
            // 0x300678: 0x8f82a014  lw          $v0, -0x5FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942740)));
        ctx->pc = 0x30067Cu;
        goto label_30067c;
    }
    ctx->pc = 0x300674u;
    {
        const bool branch_taken_0x300674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300674u;
            // 0x300678: 0x8f82a014  lw          $v0, -0x5FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300674) {
            ctx->pc = 0x300B38u;
            goto label_300b38;
        }
    }
    ctx->pc = 0x30067Cu;
label_30067c:
    // 0x30067c: 0x8e862e50  lw          $a2, 0x2E50($s4)
    ctx->pc = 0x30067cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11856)));
label_300680:
    // 0x300680: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x300680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_300684:
    // 0x300684: 0xc0a11e0  jal         func_284780
label_300688:
    if (ctx->pc == 0x300688u) {
        ctx->pc = 0x300688u;
            // 0x300688: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x30068Cu;
        goto label_30068c;
    }
    ctx->pc = 0x300684u;
    SET_GPR_U32(ctx, 31, 0x30068Cu);
    ctx->pc = 0x300688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300684u;
            // 0x300688: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284780u;
    if (runtime->hasFunction(0x284780u)) {
        auto targetFn = runtime->lookupFunction(0x284780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30068Cu; }
        if (ctx->pc != 0x30068Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetStatus__6CSceneFiii_0x284780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30068Cu; }
        if (ctx->pc != 0x30068Cu) { return; }
    }
    ctx->pc = 0x30068Cu;
label_30068c:
    // 0x30068c: 0x8f879ff4  lw          $a3, -0x600C($gp)
    ctx->pc = 0x30068cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942708)));
label_300690:
    // 0x300690: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x300690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_300694:
    // 0x300694: 0x8f889ffc  lw          $t0, -0x6004($gp)
    ctx->pc = 0x300694u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942716)));
label_300698:
    // 0x300698: 0x24849d00  addiu       $a0, $a0, -0x6300
    ctx->pc = 0x300698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941952));
label_30069c:
    // 0x30069c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x30069cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3006a0:
    // 0x3006a0: 0xc0c0aa4  jal         func_302A90
label_3006a4:
    if (ctx->pc == 0x3006A4u) {
        ctx->pc = 0x3006A4u;
            // 0x3006a4: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3006A8u;
        goto label_3006a8;
    }
    ctx->pc = 0x3006A0u;
    SET_GPR_U32(ctx, 31, 0x3006A8u);
    ctx->pc = 0x3006A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3006A0u;
            // 0x3006a4: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302A90u;
    if (runtime->hasFunction(0x302A90u)) {
        auto targetFn = runtime->lookupFunction(0x302A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3006A8u; }
        if (ctx->pc != 0x3006A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUkiWaitTime__FP9FISH_DATAP6CScenePfii_0x302a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3006A8u; }
        if (ctx->pc != 0x3006A8u) { return; }
    }
    ctx->pc = 0x3006A8u;
label_3006a8:
    // 0x3006a8: 0xaf82a014  sw          $v0, -0x5FEC($gp)
    ctx->pc = 0x3006a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942740), GPR_U32(ctx, 2));
label_3006ac:
    // 0x3006ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3006acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3006b0:
    // 0x3006b0: 0xaf80a0ac  sw          $zero, -0x5F54($gp)
    ctx->pc = 0x3006b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942892), GPR_U32(ctx, 0));
label_3006b4:
    // 0x3006b4: 0xaf82a010  sw          $v0, -0x5FF0($gp)
    ctx->pc = 0x3006b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942736), GPR_U32(ctx, 2));
label_3006b8:
    // 0x3006b8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3006b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3006bc:
    // 0x3006bc: 0xaf82a0a4  sw          $v0, -0x5F5C($gp)
    ctx->pc = 0x3006bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942884), GPR_U32(ctx, 2));
label_3006c0:
    // 0x3006c0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_3006c4:
    if (ctx->pc == 0x3006C4u) {
        ctx->pc = 0x3006C8u;
        goto label_3006c8;
    }
    ctx->pc = 0x3006C0u;
    {
        const bool branch_taken_0x3006c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3006c0) {
            ctx->pc = 0x3006D8u;
            goto label_3006d8;
        }
    }
    ctx->pc = 0x3006C8u;
label_3006c8:
    // 0x3006c8: 0x8f82a0ac  lw          $v0, -0x5F54($gp)
    ctx->pc = 0x3006c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942892)));
label_3006cc:
    // 0x3006cc: 0x28410259  slti        $at, $v0, 0x259
    ctx->pc = 0x3006ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)601) ? 1 : 0);
label_3006d0:
    // 0x3006d0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_3006d4:
    if (ctx->pc == 0x3006D4u) {
        ctx->pc = 0x3006D8u;
        goto label_3006d8;
    }
    ctx->pc = 0x3006D0u;
    {
        const bool branch_taken_0x3006d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3006d0) {
            ctx->pc = 0x3006E0u;
            goto label_3006e0;
        }
    }
    ctx->pc = 0x3006D8u;
label_3006d8:
    // 0x3006d8: 0x10000116  b           . + 4 + (0x116 << 2)
label_3006dc:
    if (ctx->pc == 0x3006DCu) {
        ctx->pc = 0x3006DCu;
            // 0x3006dc: 0xaf80a010  sw          $zero, -0x5FF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942736), GPR_U32(ctx, 0));
        ctx->pc = 0x3006E0u;
        goto label_3006e0;
    }
    ctx->pc = 0x3006D8u;
    {
        const bool branch_taken_0x3006d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3006DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3006D8u;
            // 0x3006dc: 0xaf80a010  sw          $zero, -0x5FF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942736), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3006d8) {
            ctx->pc = 0x300B34u;
            goto label_300b34;
        }
    }
    ctx->pc = 0x3006E0u;
label_3006e0:
    // 0x3006e0: 0x8f82a0a4  lw          $v0, -0x5F5C($gp)
    ctx->pc = 0x3006e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942884)));
label_3006e4:
    // 0x3006e4: 0x1c40000e  bgtz        $v0, . + 4 + (0xE << 2)
label_3006e8:
    if (ctx->pc == 0x3006E8u) {
        ctx->pc = 0x3006ECu;
        goto label_3006ec;
    }
    ctx->pc = 0x3006E4u;
    {
        const bool branch_taken_0x3006e4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3006e4) {
            ctx->pc = 0x300720u;
            goto label_300720;
        }
    }
    ctx->pc = 0x3006ECu;
label_3006ec:
    // 0x3006ec: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x3006ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_3006f0:
    // 0x3006f0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3006f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3006f4:
    // 0x3006f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3006f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3006f8:
    // 0x3006f8: 0xc0bfee8  jal         func_2FFBA0
label_3006fc:
    if (ctx->pc == 0x3006FCu) {
        ctx->pc = 0x3006FCu;
            // 0x3006fc: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x300700u;
        goto label_300700;
    }
    ctx->pc = 0x3006F8u;
    SET_GPR_U32(ctx, 31, 0x300700u);
    ctx->pc = 0x3006FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3006F8u;
            // 0x3006fc: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FFBA0u;
    if (runtime->hasFunction(0x2FFBA0u)) {
        auto targetFn = runtime->lookupFunction(0x2FFBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300700u; }
        if (ctx->pc != 0x300700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawHamon__FPff_0x2ffba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300700u; }
        if (ctx->pc != 0x300700u) { return; }
    }
    ctx->pc = 0x300700u;
label_300700:
    // 0x300700: 0xc04c3b8  jal         func_130EE0
label_300704:
    if (ctx->pc == 0x300704u) {
        ctx->pc = 0x300708u;
        goto label_300708;
    }
    ctx->pc = 0x300700u;
    SET_GPR_U32(ctx, 31, 0x300708u);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300708u; }
        if (ctx->pc != 0x300708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300708u; }
        if (ctx->pc != 0x300708u) { return; }
    }
    ctx->pc = 0x300708u;
label_300708:
    // 0x300708: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x300708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_30070c:
    // 0x30070c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30070cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_300710:
    // 0x300710: 0xc0a248c  jal         func_289230
label_300714:
    if (ctx->pc == 0x300714u) {
        ctx->pc = 0x300714u;
            // 0x300714: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x300718u;
        goto label_300718;
    }
    ctx->pc = 0x300710u;
    SET_GPR_U32(ctx, 31, 0x300718u);
    ctx->pc = 0x300714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300710u;
            // 0x300714: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300718u; }
        if (ctx->pc != 0x300718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300718u; }
        if (ctx->pc != 0x300718u) { return; }
    }
    ctx->pc = 0x300718u;
label_300718:
    // 0x300718: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x300718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
label_30071c:
    // 0x30071c: 0xaf82a0a4  sw          $v0, -0x5F5C($gp)
    ctx->pc = 0x30071cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942884), GPR_U32(ctx, 2));
label_300720:
    // 0x300720: 0x8f83a0a4  lw          $v1, -0x5F5C($gp)
    ctx->pc = 0x300720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942884)));
label_300724:
    // 0x300724: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x300724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_300728:
    // 0x300728: 0x8c229d00  lw          $v0, -0x6300($at)
    ctx->pc = 0x300728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941952)));
label_30072c:
    // 0x30072c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30072cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_300730:
    // 0x300730: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
label_300734:
    if (ctx->pc == 0x300734u) {
        ctx->pc = 0x300734u;
            // 0x300734: 0xaf83a0a4  sw          $v1, -0x5F5C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942884), GPR_U32(ctx, 3));
        ctx->pc = 0x300738u;
        goto label_300738;
    }
    ctx->pc = 0x300730u;
    {
        const bool branch_taken_0x300730 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x300734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300730u;
            // 0x300734: 0xaf83a0a4  sw          $v1, -0x5F5C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942884), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300730) {
            ctx->pc = 0x300748u;
            goto label_300748;
        }
    }
    ctx->pc = 0x300738u;
label_300738:
    // 0x300738: 0x8f82a0ac  lw          $v0, -0x5F54($gp)
    ctx->pc = 0x300738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942892)));
label_30073c:
    // 0x30073c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30073cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_300740:
    // 0x300740: 0x100000fc  b           . + 4 + (0xFC << 2)
label_300744:
    if (ctx->pc == 0x300744u) {
        ctx->pc = 0x300744u;
            // 0x300744: 0xaf82a0ac  sw          $v0, -0x5F54($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942892), GPR_U32(ctx, 2));
        ctx->pc = 0x300748u;
        goto label_300748;
    }
    ctx->pc = 0x300740u;
    {
        const bool branch_taken_0x300740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300740u;
            // 0x300744: 0xaf82a0ac  sw          $v0, -0x5F54($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942892), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300740) {
            ctx->pc = 0x300B34u;
            goto label_300b34;
        }
    }
    ctx->pc = 0x300748u;
label_300748:
    // 0x300748: 0x8f82a014  lw          $v0, -0x5FEC($gp)
    ctx->pc = 0x300748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942740)));
label_30074c:
    // 0x30074c: 0x1c4000f9  bgtz        $v0, . + 4 + (0xF9 << 2)
label_300750:
    if (ctx->pc == 0x300750u) {
        ctx->pc = 0x300754u;
        goto label_300754;
    }
    ctx->pc = 0x30074Cu;
    {
        const bool branch_taken_0x30074c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x30074c) {
            ctx->pc = 0x300B34u;
            goto label_300b34;
        }
    }
    ctx->pc = 0x300754u;
label_300754:
    // 0x300754: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x300754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_300758:
    // 0x300758: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x300758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_30075c:
    // 0x30075c: 0x24849d00  addiu       $a0, $a0, -0x6300
    ctx->pc = 0x30075cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941952));
label_300760:
    // 0x300760: 0xc0c0c78  jal         func_3031E0
label_300764:
    if (ctx->pc == 0x300764u) {
        ctx->pc = 0x300764u;
            // 0x300764: 0xaf82a010  sw          $v0, -0x5FF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942736), GPR_U32(ctx, 2));
        ctx->pc = 0x300768u;
        goto label_300768;
    }
    ctx->pc = 0x300760u;
    SET_GPR_U32(ctx, 31, 0x300768u);
    ctx->pc = 0x300764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300760u;
            // 0x300764: 0xaf82a010  sw          $v0, -0x5FF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3031E0u;
    if (runtime->hasFunction(0x3031E0u)) {
        auto targetFn = runtime->lookupFunction(0x3031E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300768u; }
        if (ctx->pc != 0x300768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUkiPokeTime__FP9FISH_DATA_0x3031e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300768u; }
        if (ctx->pc != 0x300768u) { return; }
    }
    ctx->pc = 0x300768u;
label_300768:
    // 0x300768: 0xaf82a014  sw          $v0, -0x5FEC($gp)
    ctx->pc = 0x300768u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942740), GPR_U32(ctx, 2));
label_30076c:
    // 0x30076c: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_300770:
    if (ctx->pc == 0x300770u) {
        ctx->pc = 0x300770u;
            // 0x300770: 0xaf80a0b0  sw          $zero, -0x5F50($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942896), GPR_U32(ctx, 0));
        ctx->pc = 0x300774u;
        goto label_300774;
    }
    ctx->pc = 0x30076Cu;
    {
        const bool branch_taken_0x30076c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30076Cu;
            // 0x300770: 0xaf80a0b0  sw          $zero, -0x5F50($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942896), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30076c) {
            ctx->pc = 0x300B34u;
            goto label_300b34;
        }
    }
    ctx->pc = 0x300774u;
label_300774:
    // 0x300774: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_300778:
    if (ctx->pc == 0x300778u) {
        ctx->pc = 0x30077Cu;
        goto label_30077c;
    }
    ctx->pc = 0x300774u;
    {
        const bool branch_taken_0x300774 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x300774) {
            ctx->pc = 0x300784u;
            goto label_300784;
        }
    }
    ctx->pc = 0x30077Cu;
label_30077c:
    // 0x30077c: 0x100000ed  b           . + 4 + (0xED << 2)
label_300780:
    if (ctx->pc == 0x300780u) {
        ctx->pc = 0x300780u;
            // 0x300780: 0xaf80a010  sw          $zero, -0x5FF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942736), GPR_U32(ctx, 0));
        ctx->pc = 0x300784u;
        goto label_300784;
    }
    ctx->pc = 0x30077Cu;
    {
        const bool branch_taken_0x30077c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30077Cu;
            // 0x300780: 0xaf80a010  sw          $zero, -0x5FF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942736), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30077c) {
            ctx->pc = 0x300B34u;
            goto label_300b34;
        }
    }
    ctx->pc = 0x300784u;
label_300784:
    // 0x300784: 0x8f82a014  lw          $v0, -0x5FEC($gp)
    ctx->pc = 0x300784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942740)));
label_300788:
    // 0x300788: 0x1c40000c  bgtz        $v0, . + 4 + (0xC << 2)
label_30078c:
    if (ctx->pc == 0x30078Cu) {
        ctx->pc = 0x300790u;
        goto label_300790;
    }
    ctx->pc = 0x300788u;
    {
        const bool branch_taken_0x300788 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x300788) {
            ctx->pc = 0x3007BCu;
            goto label_3007bc;
        }
    }
    ctx->pc = 0x300790u;
label_300790:
    // 0x300790: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x300790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_300794:
    // 0x300794: 0x8c229d00  lw          $v0, -0x6300($at)
    ctx->pc = 0x300794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941952)));
label_300798:
    // 0x300798: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_30079c:
    if (ctx->pc == 0x30079Cu) {
        ctx->pc = 0x3007A0u;
        goto label_3007a0;
    }
    ctx->pc = 0x300798u;
    {
        const bool branch_taken_0x300798 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x300798) {
            ctx->pc = 0x3007A8u;
            goto label_3007a8;
        }
    }
    ctx->pc = 0x3007A0u;
label_3007a0:
    // 0x3007a0: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_3007a4:
    if (ctx->pc == 0x3007A4u) {
        ctx->pc = 0x3007A4u;
            // 0x3007a4: 0xaf80a010  sw          $zero, -0x5FF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942736), GPR_U32(ctx, 0));
        ctx->pc = 0x3007A8u;
        goto label_3007a8;
    }
    ctx->pc = 0x3007A0u;
    {
        const bool branch_taken_0x3007a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3007A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3007A0u;
            // 0x3007a4: 0xaf80a010  sw          $zero, -0x5FF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942736), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3007a0) {
            ctx->pc = 0x300B34u;
            goto label_300b34;
        }
    }
    ctx->pc = 0x3007A8u;
label_3007a8:
    // 0x3007a8: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3007a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_3007ac:
    // 0x3007ac: 0xaf83a010  sw          $v1, -0x5FF0($gp)
    ctx->pc = 0x3007acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942736), GPR_U32(ctx, 3));
label_3007b0:
    // 0x3007b0: 0xc0c0ca4  jal         func_303290
label_3007b4:
    if (ctx->pc == 0x3007B4u) {
        ctx->pc = 0x3007B4u;
            // 0x3007b4: 0x24849d00  addiu       $a0, $a0, -0x6300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941952));
        ctx->pc = 0x3007B8u;
        goto label_3007b8;
    }
    ctx->pc = 0x3007B0u;
    SET_GPR_U32(ctx, 31, 0x3007B8u);
    ctx->pc = 0x3007B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3007B0u;
            // 0x3007b4: 0x24849d00  addiu       $a0, $a0, -0x6300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303290u;
    if (runtime->hasFunction(0x303290u)) {
        auto targetFn = runtime->lookupFunction(0x303290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3007B8u; }
        if (ctx->pc != 0x3007B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUkiPullTime__FP9FISH_DATA_0x303290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3007B8u; }
        if (ctx->pc != 0x3007B8u) { return; }
    }
    ctx->pc = 0x3007B8u;
label_3007b8:
    // 0x3007b8: 0xaf82a014  sw          $v0, -0x5FEC($gp)
    ctx->pc = 0x3007b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942740), GPR_U32(ctx, 2));
label_3007bc:
    // 0x3007bc: 0x8f82a0b0  lw          $v0, -0x5F50($gp)
    ctx->pc = 0x3007bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942896)));
label_3007c0:
    // 0x3007c0: 0x1c40001d  bgtz        $v0, . + 4 + (0x1D << 2)
label_3007c4:
    if (ctx->pc == 0x3007C4u) {
        ctx->pc = 0x3007C8u;
        goto label_3007c8;
    }
    ctx->pc = 0x3007C0u;
    {
        const bool branch_taken_0x3007c0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3007c0) {
            ctx->pc = 0x300838u;
            goto label_300838;
        }
    }
    ctx->pc = 0x3007C8u;
label_3007c8:
    // 0x3007c8: 0xc04c3b8  jal         func_130EE0
label_3007cc:
    if (ctx->pc == 0x3007CCu) {
        ctx->pc = 0x3007D0u;
        goto label_3007d0;
    }
    ctx->pc = 0x3007C8u;
    SET_GPR_U32(ctx, 31, 0x3007D0u);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3007D0u; }
        if (ctx->pc != 0x3007D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3007D0u; }
        if (ctx->pc != 0x3007D0u) { return; }
    }
    ctx->pc = 0x3007D0u;
label_3007d0:
    // 0x3007d0: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x3007d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_3007d4:
    // 0x3007d4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3007d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_3007d8:
    // 0x3007d8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3007d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3007dc:
    // 0x3007dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3007dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3007e0:
    // 0x3007e0: 0x0  nop
    ctx->pc = 0x3007e0u;
    // NOP
label_3007e4:
    // 0x3007e4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3007e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3007e8:
    // 0x3007e8: 0xc0c4094  jal         func_310250
label_3007ec:
    if (ctx->pc == 0x3007ECu) {
        ctx->pc = 0x3007ECu;
            // 0x3007ec: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3007F0u;
        goto label_3007f0;
    }
    ctx->pc = 0x3007E8u;
    SET_GPR_U32(ctx, 31, 0x3007F0u);
    ctx->pc = 0x3007ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3007E8u;
            // 0x3007ec: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x310250u;
    if (runtime->hasFunction(0x310250u)) {
        auto targetFn = runtime->lookupFunction(0x310250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3007F0u; }
        if (ctx->pc != 0x3007F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PullUki__Ff_0x310250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3007F0u; }
        if (ctx->pc != 0x3007F0u) { return; }
    }
    ctx->pc = 0x3007F0u;
label_3007f0:
    // 0x3007f0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3007f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_3007f4:
    // 0x3007f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3007f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3007f8:
    // 0x3007f8: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x3007f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_3007fc:
    // 0x3007fc: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x3007fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_300800:
    // 0x300800: 0xc052d4c  jal         func_14B530
label_300804:
    if (ctx->pc == 0x300804u) {
        ctx->pc = 0x300804u;
            // 0x300804: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x300808u;
        goto label_300808;
    }
    ctx->pc = 0x300800u;
    SET_GPR_U32(ctx, 31, 0x300808u);
    ctx->pc = 0x300804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300800u;
            // 0x300804: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B530u;
    if (runtime->hasFunction(0x14B530u)) {
        auto targetFn = runtime->lookupFunction(0x14B530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300808u; }
        if (ctx->pc != 0x300808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVibration__8CGamePadFiii_0x14b530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300808u; }
        if (ctx->pc != 0x300808u) { return; }
    }
    ctx->pc = 0x300808u;
label_300808:
    // 0x300808: 0xc04a0ea  jal         func_1283A8
label_30080c:
    if (ctx->pc == 0x30080Cu) {
        ctx->pc = 0x300810u;
        goto label_300810;
    }
    ctx->pc = 0x300808u;
    SET_GPR_U32(ctx, 31, 0x300810u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300810u; }
        if (ctx->pc != 0x300810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300810u; }
        if (ctx->pc != 0x300810u) { return; }
    }
    ctx->pc = 0x300810u;
label_300810:
    // 0x300810: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x300810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_300814:
    // 0x300814: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x300814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
label_300818:
    // 0x300818: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x300818u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_30081c:
    // 0x30081c: 0x3462999a  ori         $v0, $v1, 0x999A
    ctx->pc = 0x30081cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_300820:
    // 0x300820: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x300820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_300824:
    // 0x300824: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x300824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_300828:
    // 0x300828: 0x1010  mfhi        $v0
    ctx->pc = 0x300828u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_30082c:
    // 0x30082c: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x30082cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_300830:
    // 0x300830: 0xc0bfee8  jal         func_2FFBA0
label_300834:
    if (ctx->pc == 0x300834u) {
        ctx->pc = 0x300834u;
            // 0x300834: 0xaf82a0b0  sw          $v0, -0x5F50($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942896), GPR_U32(ctx, 2));
        ctx->pc = 0x300838u;
        goto label_300838;
    }
    ctx->pc = 0x300830u;
    SET_GPR_U32(ctx, 31, 0x300838u);
    ctx->pc = 0x300834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300830u;
            // 0x300834: 0xaf82a0b0  sw          $v0, -0x5F50($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942896), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FFBA0u;
    if (runtime->hasFunction(0x2FFBA0u)) {
        auto targetFn = runtime->lookupFunction(0x2FFBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300838u; }
        if (ctx->pc != 0x300838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawHamon__FPff_0x2ffba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300838u; }
        if (ctx->pc != 0x300838u) { return; }
    }
    ctx->pc = 0x300838u;
label_300838:
    // 0x300838: 0x8f82a0b0  lw          $v0, -0x5F50($gp)
    ctx->pc = 0x300838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942896)));
label_30083c:
    // 0x30083c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30083cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_300840:
    // 0x300840: 0x100000bc  b           . + 4 + (0xBC << 2)
label_300844:
    if (ctx->pc == 0x300844u) {
        ctx->pc = 0x300844u;
            // 0x300844: 0xaf82a0b0  sw          $v0, -0x5F50($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942896), GPR_U32(ctx, 2));
        ctx->pc = 0x300848u;
        goto label_300848;
    }
    ctx->pc = 0x300840u;
    {
        const bool branch_taken_0x300840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300840u;
            // 0x300844: 0xaf82a0b0  sw          $v0, -0x5F50($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942896), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300840) {
            ctx->pc = 0x300B34u;
            goto label_300b34;
        }
    }
    ctx->pc = 0x300848u;
label_300848:
    // 0x300848: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x300848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_30084c:
    // 0x30084c: 0x8c229d00  lw          $v0, -0x6300($at)
    ctx->pc = 0x30084cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941952)));
label_300850:
    // 0x300850: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_300854:
    if (ctx->pc == 0x300854u) {
        ctx->pc = 0x300858u;
        goto label_300858;
    }
    ctx->pc = 0x300850u;
    {
        const bool branch_taken_0x300850 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x300850) {
            ctx->pc = 0x300860u;
            goto label_300860;
        }
    }
    ctx->pc = 0x300858u;
label_300858:
    // 0x300858: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_30085c:
    if (ctx->pc == 0x30085Cu) {
        ctx->pc = 0x30085Cu;
            // 0x30085c: 0xaf80a010  sw          $zero, -0x5FF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942736), GPR_U32(ctx, 0));
        ctx->pc = 0x300860u;
        goto label_300860;
    }
    ctx->pc = 0x300858u;
    {
        const bool branch_taken_0x300858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30085Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300858u;
            // 0x30085c: 0xaf80a010  sw          $zero, -0x5FF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942736), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300858) {
            ctx->pc = 0x300B34u;
            goto label_300b34;
        }
    }
    ctx->pc = 0x300860u;
label_300860:
    // 0x300860: 0x8e862e50  lw          $a2, 0x2E50($s4)
    ctx->pc = 0x300860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11856)));
label_300864:
    // 0x300864: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x300864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_300868:
    // 0x300868: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x300868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30086c:
    // 0x30086c: 0xc0a11d0  jal         func_284740
label_300870:
    if (ctx->pc == 0x300870u) {
        ctx->pc = 0x300870u;
            // 0x300870: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x300874u;
        goto label_300874;
    }
    ctx->pc = 0x30086Cu;
    SET_GPR_U32(ctx, 31, 0x300874u);
    ctx->pc = 0x300870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30086Cu;
            // 0x300870: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284740u;
    if (runtime->hasFunction(0x284740u)) {
        auto targetFn = runtime->lookupFunction(0x284740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300874u; }
        if (ctx->pc != 0x300874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStatus__6CSceneFiii_0x284740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300874u; }
        if (ctx->pc != 0x300874u) { return; }
    }
    ctx->pc = 0x300874u;
label_300874:
    // 0x300874: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
label_300878:
    if (ctx->pc == 0x300878u) {
        ctx->pc = 0x30087Cu;
        goto label_30087c;
    }
    ctx->pc = 0x300874u;
    {
        const bool branch_taken_0x300874 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x300874) {
            ctx->pc = 0x300880u;
            goto label_300880;
        }
    }
    ctx->pc = 0x30087Cu;
label_30087c:
    // 0x30087c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x30087cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300880:
    // 0x300880: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x300880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_300884:
    // 0x300884: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x300884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300888:
    // 0x300888: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x300888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_30088c:
    // 0x30088c: 0x24060096  addiu       $a2, $zero, 0x96
    ctx->pc = 0x30088cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_300890:
    // 0x300890: 0xc052d4c  jal         func_14B530
label_300894:
    if (ctx->pc == 0x300894u) {
        ctx->pc = 0x300894u;
            // 0x300894: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x300898u;
        goto label_300898;
    }
    ctx->pc = 0x300890u;
    SET_GPR_U32(ctx, 31, 0x300898u);
    ctx->pc = 0x300894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300890u;
            // 0x300894: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B530u;
    if (runtime->hasFunction(0x14B530u)) {
        auto targetFn = runtime->lookupFunction(0x14B530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300898u; }
        if (ctx->pc != 0x300898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVibration__8CGamePadFiii_0x14b530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300898u; }
        if (ctx->pc != 0x300898u) { return; }
    }
    ctx->pc = 0x300898u;
label_300898:
    // 0x300898: 0x8f82a014  lw          $v0, -0x5FEC($gp)
    ctx->pc = 0x300898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942740)));
label_30089c:
    // 0x30089c: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
label_3008a0:
    if (ctx->pc == 0x3008A0u) {
        ctx->pc = 0x3008A0u;
            // 0x3008a0: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->pc = 0x3008A4u;
        goto label_3008a4;
    }
    ctx->pc = 0x30089Cu;
    {
        const bool branch_taken_0x30089c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3008A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30089Cu;
            // 0x3008a0: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30089c) {
            ctx->pc = 0x3008B0u;
            goto label_3008b0;
        }
    }
    ctx->pc = 0x3008A4u;
label_3008a4:
    // 0x3008a4: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_3008a8:
    if (ctx->pc == 0x3008A8u) {
        ctx->pc = 0x3008A8u;
            // 0x3008a8: 0xaf80a010  sw          $zero, -0x5FF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942736), GPR_U32(ctx, 0));
        ctx->pc = 0x3008ACu;
        goto label_3008ac;
    }
    ctx->pc = 0x3008A4u;
    {
        const bool branch_taken_0x3008a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3008A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3008A4u;
            // 0x3008a8: 0xaf80a010  sw          $zero, -0x5FF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942736), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3008a4) {
            ctx->pc = 0x300B34u;
            goto label_300b34;
        }
    }
    ctx->pc = 0x3008ACu;
label_3008ac:
    // 0x3008ac: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3008acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3008b0:
    // 0x3008b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3008b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3008b4:
    // 0x3008b4: 0xc0c4094  jal         func_310250
label_3008b8:
    if (ctx->pc == 0x3008B8u) {
        ctx->pc = 0x3008BCu;
        goto label_3008bc;
    }
    ctx->pc = 0x3008B4u;
    SET_GPR_U32(ctx, 31, 0x3008BCu);
    ctx->pc = 0x310250u;
    if (runtime->hasFunction(0x310250u)) {
        auto targetFn = runtime->lookupFunction(0x310250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3008BCu; }
        if (ctx->pc != 0x3008BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PullUki__Ff_0x310250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3008BCu; }
        if (ctx->pc != 0x3008BCu) { return; }
    }
    ctx->pc = 0x3008BCu;
label_3008bc:
    // 0x3008bc: 0x1000009d  b           . + 4 + (0x9D << 2)
label_3008c0:
    if (ctx->pc == 0x3008C0u) {
        ctx->pc = 0x3008C4u;
        goto label_3008c4;
    }
    ctx->pc = 0x3008BCu;
    {
        const bool branch_taken_0x3008bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3008bc) {
            ctx->pc = 0x300B34u;
            goto label_300b34;
        }
    }
    ctx->pc = 0x3008C4u;
label_3008c4:
    // 0x3008c4: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x3008c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_3008c8:
    // 0x3008c8: 0xc0c6564  jal         func_319590
label_3008cc:
    if (ctx->pc == 0x3008CCu) {
        ctx->pc = 0x3008D0u;
        goto label_3008d0;
    }
    ctx->pc = 0x3008C8u;
    SET_GPR_U32(ctx, 31, 0x3008D0u);
    ctx->pc = 0x319590u;
    if (runtime->hasFunction(0x319590u)) {
        auto targetFn = runtime->lookupFunction(0x319590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3008D0u; }
        if (ctx->pc != 0x3008D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShowHelpMes__Fii_0x319590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3008D0u; }
        if (ctx->pc != 0x3008D0u) { return; }
    }
    ctx->pc = 0x3008D0u;
label_3008d0:
    // 0x3008d0: 0x8f83a010  lw          $v1, -0x5FF0($gp)
    ctx->pc = 0x3008d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942736)));
label_3008d4:
    // 0x3008d4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3008d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3008d8:
    // 0x3008d8: 0x1062007b  beq         $v1, $v0, . + 4 + (0x7B << 2)
label_3008dc:
    if (ctx->pc == 0x3008DCu) {
        ctx->pc = 0x3008E0u;
        goto label_3008e0;
    }
    ctx->pc = 0x3008D8u;
    {
        const bool branch_taken_0x3008d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3008d8) {
            ctx->pc = 0x300AC8u;
            goto label_300ac8;
        }
    }
    ctx->pc = 0x3008E0u;
label_3008e0:
    // 0x3008e0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3008e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3008e4:
    // 0x3008e4: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
label_3008e8:
    if (ctx->pc == 0x3008E8u) {
        ctx->pc = 0x3008ECu;
        goto label_3008ec;
    }
    ctx->pc = 0x3008E4u;
    {
        const bool branch_taken_0x3008e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3008e4) {
            ctx->pc = 0x300944u;
            goto label_300944;
        }
    }
    ctx->pc = 0x3008ECu;
label_3008ec:
    // 0x3008ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3008f0:
    if (ctx->pc == 0x3008F0u) {
        ctx->pc = 0x3008F4u;
        goto label_3008f4;
    }
    ctx->pc = 0x3008ECu;
    {
        const bool branch_taken_0x3008ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3008ec) {
            ctx->pc = 0x3008FCu;
            goto label_3008fc;
        }
    }
    ctx->pc = 0x3008F4u;
label_3008f4:
    // 0x3008f4: 0x1000008f  b           . + 4 + (0x8F << 2)
label_3008f8:
    if (ctx->pc == 0x3008F8u) {
        ctx->pc = 0x3008FCu;
        goto label_3008fc;
    }
    ctx->pc = 0x3008F4u;
    {
        const bool branch_taken_0x3008f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3008f4) {
            ctx->pc = 0x300B34u;
            goto label_300b34;
        }
    }
    ctx->pc = 0x3008FCu;
label_3008fc:
    // 0x3008fc: 0x8e862e50  lw          $a2, 0x2E50($s4)
    ctx->pc = 0x3008fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11856)));
label_300900:
    // 0x300900: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x300900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_300904:
    // 0x300904: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x300904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300908:
    // 0x300908: 0xc0a11e0  jal         func_284780
label_30090c:
    if (ctx->pc == 0x30090Cu) {
        ctx->pc = 0x30090Cu;
            // 0x30090c: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x300910u;
        goto label_300910;
    }
    ctx->pc = 0x300908u;
    SET_GPR_U32(ctx, 31, 0x300910u);
    ctx->pc = 0x30090Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300908u;
            // 0x30090c: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284780u;
    if (runtime->hasFunction(0x284780u)) {
        auto targetFn = runtime->lookupFunction(0x284780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300910u; }
        if (ctx->pc != 0x300910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetStatus__6CSceneFiii_0x284780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300910u; }
        if (ctx->pc != 0x300910u) { return; }
    }
    ctx->pc = 0x300910u;
label_300910:
    // 0x300910: 0x8f879ff4  lw          $a3, -0x600C($gp)
    ctx->pc = 0x300910u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942708)));
label_300914:
    // 0x300914: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x300914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_300918:
    // 0x300918: 0x8f889ffc  lw          $t0, -0x6004($gp)
    ctx->pc = 0x300918u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942716)));
label_30091c:
    // 0x30091c: 0x24849d00  addiu       $a0, $a0, -0x6300
    ctx->pc = 0x30091cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941952));
label_300920:
    // 0x300920: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x300920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_300924:
    // 0x300924: 0xc0c0aa4  jal         func_302A90
label_300928:
    if (ctx->pc == 0x300928u) {
        ctx->pc = 0x300928u;
            // 0x300928: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x30092Cu;
        goto label_30092c;
    }
    ctx->pc = 0x300924u;
    SET_GPR_U32(ctx, 31, 0x30092Cu);
    ctx->pc = 0x300928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300924u;
            // 0x300928: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302A90u;
    if (runtime->hasFunction(0x302A90u)) {
        auto targetFn = runtime->lookupFunction(0x302A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30092Cu; }
        if (ctx->pc != 0x30092Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUkiWaitTime__FP9FISH_DATAP6CScenePfii_0x302a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30092Cu; }
        if (ctx->pc != 0x30092Cu) { return; }
    }
    ctx->pc = 0x30092Cu;
label_30092c:
    // 0x30092c: 0xaf82a018  sw          $v0, -0x5FE8($gp)
    ctx->pc = 0x30092cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942744), GPR_U32(ctx, 2));
label_300930:
    // 0x300930: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x300930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_300934:
    // 0x300934: 0xaf80a0b4  sw          $zero, -0x5F4C($gp)
    ctx->pc = 0x300934u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942900), GPR_U32(ctx, 0));
label_300938:
    // 0x300938: 0xaf82a010  sw          $v0, -0x5FF0($gp)
    ctx->pc = 0x300938u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942736), GPR_U32(ctx, 2));
label_30093c:
    // 0x30093c: 0xaf80a0b8  sw          $zero, -0x5F48($gp)
    ctx->pc = 0x30093cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942904), GPR_U32(ctx, 0));
label_300940:
    // 0x300940: 0xaf80a0bc  sw          $zero, -0x5F44($gp)
    ctx->pc = 0x300940u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942908), GPR_U32(ctx, 0));
label_300944:
    // 0x300944: 0x8f82a0b4  lw          $v0, -0x5F4C($gp)
    ctx->pc = 0x300944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942900)));
label_300948:
    // 0x300948: 0x1c400009  bgtz        $v0, . + 4 + (0x9 << 2)
label_30094c:
    if (ctx->pc == 0x30094Cu) {
        ctx->pc = 0x300950u;
        goto label_300950;
    }
    ctx->pc = 0x300948u;
    {
        const bool branch_taken_0x300948 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x300948) {
            ctx->pc = 0x300970u;
            goto label_300970;
        }
    }
    ctx->pc = 0x300950u;
label_300950:
    // 0x300950: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_300954:
    if (ctx->pc == 0x300954u) {
        ctx->pc = 0x300958u;
        goto label_300958;
    }
    ctx->pc = 0x300950u;
    {
        const bool branch_taken_0x300950 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x300950) {
            ctx->pc = 0x300970u;
            goto label_300970;
        }
    }
    ctx->pc = 0x300958u;
label_300958:
    // 0x300958: 0x8f82a0b8  lw          $v0, -0x5F48($gp)
    ctx->pc = 0x300958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942904)));
label_30095c:
    // 0x30095c: 0x8f83a018  lw          $v1, -0x5FE8($gp)
    ctx->pc = 0x30095cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942744)));
label_300960:
    // 0x300960: 0xaf80a0b4  sw          $zero, -0x5F4C($gp)
    ctx->pc = 0x300960u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942900), GPR_U32(ctx, 0));
label_300964:
    // 0x300964: 0xaf80a0b8  sw          $zero, -0x5F48($gp)
    ctx->pc = 0x300964u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942904), GPR_U32(ctx, 0));
label_300968:
    // 0x300968: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x300968u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30096c:
    // 0x30096c: 0xaf82a018  sw          $v0, -0x5FE8($gp)
    ctx->pc = 0x30096cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942744), GPR_U32(ctx, 2));
label_300970:
    // 0x300970: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
label_300974:
    if (ctx->pc == 0x300974u) {
        ctx->pc = 0x300978u;
        goto label_300978;
    }
    ctx->pc = 0x300970u;
    {
        const bool branch_taken_0x300970 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x300970) {
            ctx->pc = 0x30098Cu;
            goto label_30098c;
        }
    }
    ctx->pc = 0x300978u;
label_300978:
    // 0x300978: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x300978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30097c:
    // 0x30097c: 0xc0bb538  jal         func_2ED4E0
label_300980:
    if (ctx->pc == 0x300980u) {
        ctx->pc = 0x300980u;
            // 0x300980: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x300984u;
        goto label_300984;
    }
    ctx->pc = 0x30097Cu;
    SET_GPR_U32(ctx, 31, 0x300984u);
    ctx->pc = 0x300980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30097Cu;
            // 0x300980: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300984u; }
        if (ctx->pc != 0x300984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300984u; }
        if (ctx->pc != 0x300984u) { return; }
    }
    ctx->pc = 0x300984u;
label_300984:
    // 0x300984: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_300988:
    if (ctx->pc == 0x300988u) {
        ctx->pc = 0x30098Cu;
        goto label_30098c;
    }
    ctx->pc = 0x300984u;
    {
        const bool branch_taken_0x300984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300984) {
            ctx->pc = 0x300A4Cu;
            goto label_300a4c;
        }
    }
    ctx->pc = 0x30098Cu;
label_30098c:
    // 0x30098c: 0x8f82a0bc  lw          $v0, -0x5F44($gp)
    ctx->pc = 0x30098cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942908)));
label_300990:
    // 0x300990: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x300990u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_300994:
    // 0x300994: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_300998:
    if (ctx->pc == 0x300998u) {
        ctx->pc = 0x30099Cu;
        goto label_30099c;
    }
    ctx->pc = 0x300994u;
    {
        const bool branch_taken_0x300994 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x300994) {
            ctx->pc = 0x3009C4u;
            goto label_3009c4;
        }
    }
    ctx->pc = 0x30099Cu;
label_30099c:
    // 0x30099c: 0xc04c3b8  jal         func_130EE0
label_3009a0:
    if (ctx->pc == 0x3009A0u) {
        ctx->pc = 0x3009A4u;
        goto label_3009a4;
    }
    ctx->pc = 0x30099Cu;
    SET_GPR_U32(ctx, 31, 0x3009A4u);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3009A4u; }
        if (ctx->pc != 0x3009A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3009A4u; }
        if (ctx->pc != 0x3009A4u) { return; }
    }
    ctx->pc = 0x3009A4u;
label_3009a4:
    // 0x3009a4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3009a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_3009a8:
    // 0x3009a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3009a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3009ac:
    // 0x3009ac: 0xc0a248c  jal         func_289230
label_3009b0:
    if (ctx->pc == 0x3009B0u) {
        ctx->pc = 0x3009B0u;
            // 0x3009b0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3009B4u;
        goto label_3009b4;
    }
    ctx->pc = 0x3009ACu;
    SET_GPR_U32(ctx, 31, 0x3009B4u);
    ctx->pc = 0x3009B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3009ACu;
            // 0x3009b0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3009B4u; }
        if (ctx->pc != 0x3009B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3009B4u; }
        if (ctx->pc != 0x3009B4u) { return; }
    }
    ctx->pc = 0x3009B4u;
label_3009b4:
    // 0x3009b4: 0x8f83a018  lw          $v1, -0x5FE8($gp)
    ctx->pc = 0x3009b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942744)));
label_3009b8:
    // 0x3009b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3009b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3009bc:
    // 0x3009bc: 0x10000013  b           . + 4 + (0x13 << 2)
label_3009c0:
    if (ctx->pc == 0x3009C0u) {
        ctx->pc = 0x3009C0u;
            // 0x3009c0: 0xaf82a018  sw          $v0, -0x5FE8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942744), GPR_U32(ctx, 2));
        ctx->pc = 0x3009C4u;
        goto label_3009c4;
    }
    ctx->pc = 0x3009BCu;
    {
        const bool branch_taken_0x3009bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3009C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3009BCu;
            // 0x3009c0: 0xaf82a018  sw          $v0, -0x5FE8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942744), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3009bc) {
            ctx->pc = 0x300A0Cu;
            goto label_300a0c;
        }
    }
    ctx->pc = 0x3009C4u;
label_3009c4:
    // 0x3009c4: 0xc04c3b8  jal         func_130EE0
label_3009c8:
    if (ctx->pc == 0x3009C8u) {
        ctx->pc = 0x3009CCu;
        goto label_3009cc;
    }
    ctx->pc = 0x3009C4u;
    SET_GPR_U32(ctx, 31, 0x3009CCu);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3009CCu; }
        if (ctx->pc != 0x3009CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3009CCu; }
        if (ctx->pc != 0x3009CCu) { return; }
    }
    ctx->pc = 0x3009CCu;
label_3009cc:
    // 0x3009cc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3009ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3009d0:
    // 0x3009d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3009d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3009d4:
    // 0x3009d4: 0xc0a248c  jal         func_289230
label_3009d8:
    if (ctx->pc == 0x3009D8u) {
        ctx->pc = 0x3009D8u;
            // 0x3009d8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3009DCu;
        goto label_3009dc;
    }
    ctx->pc = 0x3009D4u;
    SET_GPR_U32(ctx, 31, 0x3009DCu);
    ctx->pc = 0x3009D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3009D4u;
            // 0x3009d8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3009DCu; }
        if (ctx->pc != 0x3009DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3009DCu; }
        if (ctx->pc != 0x3009DCu) { return; }
    }
    ctx->pc = 0x3009DCu;
label_3009dc:
    // 0x3009dc: 0x24430002  addiu       $v1, $v0, 0x2
    ctx->pc = 0x3009dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_3009e0:
    // 0x3009e0: 0x8f82a0b8  lw          $v0, -0x5F48($gp)
    ctx->pc = 0x3009e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942904)));
label_3009e4:
    // 0x3009e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3009e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3009e8:
    // 0x3009e8: 0xc04c3b8  jal         func_130EE0
label_3009ec:
    if (ctx->pc == 0x3009ECu) {
        ctx->pc = 0x3009ECu;
            // 0x3009ec: 0xaf82a0b8  sw          $v0, -0x5F48($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942904), GPR_U32(ctx, 2));
        ctx->pc = 0x3009F0u;
        goto label_3009f0;
    }
    ctx->pc = 0x3009E8u;
    SET_GPR_U32(ctx, 31, 0x3009F0u);
    ctx->pc = 0x3009ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3009E8u;
            // 0x3009ec: 0xaf82a0b8  sw          $v0, -0x5F48($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942904), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3009F0u; }
        if (ctx->pc != 0x3009F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3009F0u; }
        if (ctx->pc != 0x3009F0u) { return; }
    }
    ctx->pc = 0x3009F0u;
label_3009f0:
    // 0x3009f0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3009f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_3009f4:
    // 0x3009f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3009f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3009f8:
    // 0x3009f8: 0xc0a248c  jal         func_289230
label_3009fc:
    if (ctx->pc == 0x3009FCu) {
        ctx->pc = 0x3009FCu;
            // 0x3009fc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x300A00u;
        goto label_300a00;
    }
    ctx->pc = 0x3009F8u;
    SET_GPR_U32(ctx, 31, 0x300A00u);
    ctx->pc = 0x3009FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3009F8u;
            // 0x3009fc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300A00u; }
        if (ctx->pc != 0x300A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300A00u; }
        if (ctx->pc != 0x300A00u) { return; }
    }
    ctx->pc = 0x300A00u;
label_300a00:
    // 0x300a00: 0x8f83a018  lw          $v1, -0x5FE8($gp)
    ctx->pc = 0x300a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942744)));
label_300a04:
    // 0x300a04: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x300a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_300a08:
    // 0x300a08: 0xaf82a018  sw          $v0, -0x5FE8($gp)
    ctx->pc = 0x300a08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942744), GPR_U32(ctx, 2));
label_300a0c:
    // 0x300a0c: 0xc04c3b8  jal         func_130EE0
label_300a10:
    if (ctx->pc == 0x300A10u) {
        ctx->pc = 0x300A10u;
            // 0x300a10: 0xaf80a0bc  sw          $zero, -0x5F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942908), GPR_U32(ctx, 0));
        ctx->pc = 0x300A14u;
        goto label_300a14;
    }
    ctx->pc = 0x300A0Cu;
    SET_GPR_U32(ctx, 31, 0x300A14u);
    ctx->pc = 0x300A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300A0Cu;
            // 0x300a10: 0xaf80a0bc  sw          $zero, -0x5F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942908), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300A14u; }
        if (ctx->pc != 0x300A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300A14u; }
        if (ctx->pc != 0x300A14u) { return; }
    }
    ctx->pc = 0x300A14u;
label_300a14:
    // 0x300a14: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x300a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_300a18:
    // 0x300a18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x300a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_300a1c:
    // 0x300a1c: 0xc0a248c  jal         func_289230
label_300a20:
    if (ctx->pc == 0x300A20u) {
        ctx->pc = 0x300A20u;
            // 0x300a20: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x300A24u;
        goto label_300a24;
    }
    ctx->pc = 0x300A1Cu;
    SET_GPR_U32(ctx, 31, 0x300A24u);
    ctx->pc = 0x300A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300A1Cu;
            // 0x300a20: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300A24u; }
        if (ctx->pc != 0x300A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300A24u; }
        if (ctx->pc != 0x300A24u) { return; }
    }
    ctx->pc = 0x300A24u;
label_300a24:
    // 0x300a24: 0x2443000a  addiu       $v1, $v0, 0xA
    ctx->pc = 0x300a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_300a28:
    // 0x300a28: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x300a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_300a2c:
    // 0x300a2c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x300a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_300a30:
    // 0x300a30: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x300a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_300a34:
    // 0x300a34: 0xc0bfee8  jal         func_2FFBA0
label_300a38:
    if (ctx->pc == 0x300A38u) {
        ctx->pc = 0x300A38u;
            // 0x300a38: 0xaf83a0b4  sw          $v1, -0x5F4C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942900), GPR_U32(ctx, 3));
        ctx->pc = 0x300A3Cu;
        goto label_300a3c;
    }
    ctx->pc = 0x300A34u;
    SET_GPR_U32(ctx, 31, 0x300A3Cu);
    ctx->pc = 0x300A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300A34u;
            // 0x300a38: 0xaf83a0b4  sw          $v1, -0x5F4C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942900), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FFBA0u;
    if (runtime->hasFunction(0x2FFBA0u)) {
        auto targetFn = runtime->lookupFunction(0x2FFBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300A3Cu; }
        if (ctx->pc != 0x300A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawHamon__FPff_0x2ffba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300A3Cu; }
        if (ctx->pc != 0x300A3Cu) { return; }
    }
    ctx->pc = 0x300A3Cu;
label_300a3c:
    // 0x300a3c: 0x8f849f74  lw          $a0, -0x608C($gp)
    ctx->pc = 0x300a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_300a40:
    // 0x300a40: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x300a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_300a44:
    // 0x300a44: 0xc063818  jal         func_18E060
label_300a48:
    if (ctx->pc == 0x300A48u) {
        ctx->pc = 0x300A48u;
            // 0x300a48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300A4Cu;
        goto label_300a4c;
    }
    ctx->pc = 0x300A44u;
    SET_GPR_U32(ctx, 31, 0x300A4Cu);
    ctx->pc = 0x300A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300A44u;
            // 0x300a48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300A4Cu; }
        if (ctx->pc != 0x300A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300A4Cu; }
        if (ctx->pc != 0x300A4Cu) { return; }
    }
    ctx->pc = 0x300A4Cu;
label_300a4c:
    // 0x300a4c: 0x8f84a0bc  lw          $a0, -0x5F44($gp)
    ctx->pc = 0x300a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942908)));
label_300a50:
    // 0x300a50: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x300a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_300a54:
    // 0x300a54: 0x8f83a0b4  lw          $v1, -0x5F4C($gp)
    ctx->pc = 0x300a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942900)));
label_300a58:
    // 0x300a58: 0x8c229d00  lw          $v0, -0x6300($at)
    ctx->pc = 0x300a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941952)));
label_300a5c:
    // 0x300a5c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x300a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_300a60:
    // 0x300a60: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x300a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_300a64:
    // 0x300a64: 0xaf84a0bc  sw          $a0, -0x5F44($gp)
    ctx->pc = 0x300a64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942908), GPR_U32(ctx, 4));
label_300a68:
    // 0x300a68: 0x4400032  bltz        $v0, . + 4 + (0x32 << 2)
label_300a6c:
    if (ctx->pc == 0x300A6Cu) {
        ctx->pc = 0x300A6Cu;
            // 0x300a6c: 0xaf83a0b4  sw          $v1, -0x5F4C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942900), GPR_U32(ctx, 3));
        ctx->pc = 0x300A70u;
        goto label_300a70;
    }
    ctx->pc = 0x300A68u;
    {
        const bool branch_taken_0x300a68 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x300A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300A68u;
            // 0x300a6c: 0xaf83a0b4  sw          $v1, -0x5F4C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942900), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300a68) {
            ctx->pc = 0x300B34u;
            goto label_300b34;
        }
    }
    ctx->pc = 0x300A70u;
label_300a70:
    // 0x300a70: 0x8f82a018  lw          $v0, -0x5FE8($gp)
    ctx->pc = 0x300a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942744)));
label_300a74:
    // 0x300a74: 0x441002f  bgez        $v0, . + 4 + (0x2F << 2)
label_300a78:
    if (ctx->pc == 0x300A78u) {
        ctx->pc = 0x300A7Cu;
        goto label_300a7c;
    }
    ctx->pc = 0x300A74u;
    {
        const bool branch_taken_0x300a74 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x300a74) {
            ctx->pc = 0x300B34u;
            goto label_300b34;
        }
    }
    ctx->pc = 0x300A7Cu;
label_300a7c:
    // 0x300a7c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x300a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_300a80:
    // 0x300a80: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x300a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_300a84:
    // 0x300a84: 0xaf82a010  sw          $v0, -0x5FF0($gp)
    ctx->pc = 0x300a84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942736), GPR_U32(ctx, 2));
label_300a88:
    // 0x300a88: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x300a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_300a8c:
    // 0x300a8c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x300a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_300a90:
    // 0x300a90: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x300a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_300a94:
    // 0x300a94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x300a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_300a98:
    // 0x300a98: 0xc0bfee8  jal         func_2FFBA0
label_300a9c:
    if (ctx->pc == 0x300A9Cu) {
        ctx->pc = 0x300A9Cu;
            // 0x300a9c: 0xaf83a014  sw          $v1, -0x5FEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942740), GPR_U32(ctx, 3));
        ctx->pc = 0x300AA0u;
        goto label_300aa0;
    }
    ctx->pc = 0x300A98u;
    SET_GPR_U32(ctx, 31, 0x300AA0u);
    ctx->pc = 0x300A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300A98u;
            // 0x300a9c: 0xaf83a014  sw          $v1, -0x5FEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942740), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FFBA0u;
    if (runtime->hasFunction(0x2FFBA0u)) {
        auto targetFn = runtime->lookupFunction(0x2FFBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300AA0u; }
        if (ctx->pc != 0x300AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawHamon__FPff_0x2ffba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300AA0u; }
        if (ctx->pc != 0x300AA0u) { return; }
    }
    ctx->pc = 0x300AA0u;
label_300aa0:
    // 0x300aa0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x300aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_300aa4:
    // 0x300aa4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x300aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_300aa8:
    // 0x300aa8: 0xc0bff10  jal         func_2FFC40
label_300aac:
    if (ctx->pc == 0x300AACu) {
        ctx->pc = 0x300AACu;
            // 0x300aac: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x300AB0u;
        goto label_300ab0;
    }
    ctx->pc = 0x300AA8u;
    SET_GPR_U32(ctx, 31, 0x300AB0u);
    ctx->pc = 0x300AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300AA8u;
            // 0x300aac: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FFC40u;
    if (runtime->hasFunction(0x2FFC40u)) {
        auto targetFn = runtime->lookupFunction(0x2FFC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300AB0u; }
        if (ctx->pc != 0x300AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSplash__FPff_0x2ffc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300AB0u; }
        if (ctx->pc != 0x300AB0u) { return; }
    }
    ctx->pc = 0x300AB0u;
label_300ab0:
    // 0x300ab0: 0x8f849f74  lw          $a0, -0x608C($gp)
    ctx->pc = 0x300ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_300ab4:
    // 0x300ab4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x300ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_300ab8:
    // 0x300ab8: 0xc063818  jal         func_18E060
label_300abc:
    if (ctx->pc == 0x300ABCu) {
        ctx->pc = 0x300ABCu;
            // 0x300abc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300AC0u;
        goto label_300ac0;
    }
    ctx->pc = 0x300AB8u;
    SET_GPR_U32(ctx, 31, 0x300AC0u);
    ctx->pc = 0x300ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300AB8u;
            // 0x300abc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300AC0u; }
        if (ctx->pc != 0x300AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300AC0u; }
        if (ctx->pc != 0x300AC0u) { return; }
    }
    ctx->pc = 0x300AC0u;
label_300ac0:
    // 0x300ac0: 0x1000001c  b           . + 4 + (0x1C << 2)
label_300ac4:
    if (ctx->pc == 0x300AC4u) {
        ctx->pc = 0x300AC8u;
        goto label_300ac8;
    }
    ctx->pc = 0x300AC0u;
    {
        const bool branch_taken_0x300ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300ac0) {
            ctx->pc = 0x300B34u;
            goto label_300b34;
        }
    }
    ctx->pc = 0x300AC8u;
label_300ac8:
    // 0x300ac8: 0x8f82a014  lw          $v0, -0x5FEC($gp)
    ctx->pc = 0x300ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942740)));
label_300acc:
    // 0x300acc: 0x28410020  slti        $at, $v0, 0x20
    ctx->pc = 0x300accu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
label_300ad0:
    // 0x300ad0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_300ad4:
    if (ctx->pc == 0x300AD4u) {
        ctx->pc = 0x300AD8u;
        goto label_300ad8;
    }
    ctx->pc = 0x300AD0u;
    {
        const bool branch_taken_0x300ad0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x300ad0) {
            ctx->pc = 0x300AE4u;
            goto label_300ae4;
        }
    }
    ctx->pc = 0x300AD8u;
label_300ad8:
    // 0x300ad8: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
label_300adc:
    if (ctx->pc == 0x300ADCu) {
        ctx->pc = 0x300AE0u;
        goto label_300ae0;
    }
    ctx->pc = 0x300AD8u;
    {
        const bool branch_taken_0x300ad8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x300ad8) {
            ctx->pc = 0x300AE4u;
            goto label_300ae4;
        }
    }
    ctx->pc = 0x300AE0u;
label_300ae0:
    // 0x300ae0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x300ae0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300ae4:
    // 0x300ae4: 0x8e862e50  lw          $a2, 0x2E50($s4)
    ctx->pc = 0x300ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11856)));
label_300ae8:
    // 0x300ae8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x300ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_300aec:
    // 0x300aec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x300aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300af0:
    // 0x300af0: 0xc0a11d0  jal         func_284740
label_300af4:
    if (ctx->pc == 0x300AF4u) {
        ctx->pc = 0x300AF4u;
            // 0x300af4: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x300AF8u;
        goto label_300af8;
    }
    ctx->pc = 0x300AF0u;
    SET_GPR_U32(ctx, 31, 0x300AF8u);
    ctx->pc = 0x300AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300AF0u;
            // 0x300af4: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284740u;
    if (runtime->hasFunction(0x284740u)) {
        auto targetFn = runtime->lookupFunction(0x284740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300AF8u; }
        if (ctx->pc != 0x300AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStatus__6CSceneFiii_0x284740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300AF8u; }
        if (ctx->pc != 0x300AF8u) { return; }
    }
    ctx->pc = 0x300AF8u;
label_300af8:
    // 0x300af8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x300af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_300afc:
    // 0x300afc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x300afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300b00:
    // 0x300b00: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x300b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_300b04:
    // 0x300b04: 0x24060096  addiu       $a2, $zero, 0x96
    ctx->pc = 0x300b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_300b08:
    // 0x300b08: 0xc052d4c  jal         func_14B530
label_300b0c:
    if (ctx->pc == 0x300B0Cu) {
        ctx->pc = 0x300B0Cu;
            // 0x300b0c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x300B10u;
        goto label_300b10;
    }
    ctx->pc = 0x300B08u;
    SET_GPR_U32(ctx, 31, 0x300B10u);
    ctx->pc = 0x300B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300B08u;
            // 0x300b0c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B530u;
    if (runtime->hasFunction(0x14B530u)) {
        auto targetFn = runtime->lookupFunction(0x14B530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300B10u; }
        if (ctx->pc != 0x300B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVibration__8CGamePadFiii_0x14b530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300B10u; }
        if (ctx->pc != 0x300B10u) { return; }
    }
    ctx->pc = 0x300B10u;
label_300b10:
    // 0x300b10: 0x8f82a014  lw          $v0, -0x5FEC($gp)
    ctx->pc = 0x300b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942740)));
label_300b14:
    // 0x300b14: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
label_300b18:
    if (ctx->pc == 0x300B18u) {
        ctx->pc = 0x300B18u;
            // 0x300b18: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->pc = 0x300B1Cu;
        goto label_300b1c;
    }
    ctx->pc = 0x300B14u;
    {
        const bool branch_taken_0x300b14 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x300B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300B14u;
            // 0x300b18: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300b14) {
            ctx->pc = 0x300B28u;
            goto label_300b28;
        }
    }
    ctx->pc = 0x300B1Cu;
label_300b1c:
    // 0x300b1c: 0x10000005  b           . + 4 + (0x5 << 2)
label_300b20:
    if (ctx->pc == 0x300B20u) {
        ctx->pc = 0x300B20u;
            // 0x300b20: 0xaf80a010  sw          $zero, -0x5FF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942736), GPR_U32(ctx, 0));
        ctx->pc = 0x300B24u;
        goto label_300b24;
    }
    ctx->pc = 0x300B1Cu;
    {
        const bool branch_taken_0x300b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300B1Cu;
            // 0x300b20: 0xaf80a010  sw          $zero, -0x5FF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942736), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300b1c) {
            ctx->pc = 0x300B34u;
            goto label_300b34;
        }
    }
    ctx->pc = 0x300B24u;
label_300b24:
    // 0x300b24: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x300b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_300b28:
    // 0x300b28: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x300b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_300b2c:
    // 0x300b2c: 0xc0c4094  jal         func_310250
label_300b30:
    if (ctx->pc == 0x300B30u) {
        ctx->pc = 0x300B34u;
        goto label_300b34;
    }
    ctx->pc = 0x300B2Cu;
    SET_GPR_U32(ctx, 31, 0x300B34u);
    ctx->pc = 0x310250u;
    if (runtime->hasFunction(0x310250u)) {
        auto targetFn = runtime->lookupFunction(0x310250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300B34u; }
        if (ctx->pc != 0x300B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PullUki__Ff_0x310250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300B34u; }
        if (ctx->pc != 0x300B34u) { return; }
    }
    ctx->pc = 0x300B34u;
label_300b34:
    // 0x300b34: 0x8f82a014  lw          $v0, -0x5FEC($gp)
    ctx->pc = 0x300b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942740)));
label_300b38:
    // 0x300b38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x300b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_300b3c:
    // 0x300b3c: 0xaf82a014  sw          $v0, -0x5FEC($gp)
    ctx->pc = 0x300b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942740), GPR_U32(ctx, 2));
label_300b40:
    // 0x300b40: 0x8f82a014  lw          $v0, -0x5FEC($gp)
    ctx->pc = 0x300b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942740)));
label_300b44:
    // 0x300b44: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_300b48:
    if (ctx->pc == 0x300B48u) {
        ctx->pc = 0x300B48u;
            // 0x300b48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300B4Cu;
        goto label_300b4c;
    }
    ctx->pc = 0x300B44u;
    {
        const bool branch_taken_0x300b44 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x300B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300B44u;
            // 0x300b48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300b44) {
            ctx->pc = 0x300B54u;
            goto label_300b54;
        }
    }
    ctx->pc = 0x300B4Cu;
label_300b4c:
    // 0x300b4c: 0xaf80a014  sw          $zero, -0x5FEC($gp)
    ctx->pc = 0x300b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942740), GPR_U32(ctx, 0));
label_300b50:
    // 0x300b50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x300b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_300b54:
    // 0x300b54: 0xc0baff4  jal         func_2EBFD0
label_300b58:
    if (ctx->pc == 0x300B58u) {
        ctx->pc = 0x300B58u;
            // 0x300b58: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x300B5Cu;
        goto label_300b5c;
    }
    ctx->pc = 0x300B54u;
    SET_GPR_U32(ctx, 31, 0x300B5Cu);
    ctx->pc = 0x300B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300B54u;
            // 0x300b58: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFD0u;
    if (runtime->hasFunction(0x2EBFD0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300B5Cu; }
        if (ctx->pc != 0x300B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRotCameraCancel__14CCameraControlFi_0x2ebfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300B5Cu; }
        if (ctx->pc != 0x300B5Cu) { return; }
    }
    ctx->pc = 0x300B5Cu;
label_300b5c:
    // 0x300b5c: 0x16c00030  bnez        $s6, . + 4 + (0x30 << 2)
label_300b60:
    if (ctx->pc == 0x300B60u) {
        ctx->pc = 0x300B60u;
            // 0x300b60: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300B64u;
        goto label_300b64;
    }
    ctx->pc = 0x300B5Cu;
    {
        const bool branch_taken_0x300b5c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x300B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300B5Cu;
            // 0x300b60: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300b5c) {
            ctx->pc = 0x300C20u;
            goto label_300c20;
        }
    }
    ctx->pc = 0x300B64u;
label_300b64:
    // 0x300b64: 0xc0c3e70  jal         func_30F9C0
label_300b68:
    if (ctx->pc == 0x300B68u) {
        ctx->pc = 0x300B6Cu;
        goto label_300b6c;
    }
    ctx->pc = 0x300B64u;
    SET_GPR_U32(ctx, 31, 0x300B6Cu);
    ctx->pc = 0x30F9C0u;
    if (runtime->hasFunction(0x30F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x30F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300B6Cu; }
        if (ctx->pc != 0x300B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishingMode__Fv_0x30f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300B6Cu; }
        if (ctx->pc != 0x300B6Cu) { return; }
    }
    ctx->pc = 0x300B6Cu;
label_300b6c:
    // 0x300b6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300b70:
    // 0x300b70: 0x1443002a  bne         $v0, $v1, . + 4 + (0x2A << 2)
label_300b74:
    if (ctx->pc == 0x300B74u) {
        ctx->pc = 0x300B78u;
        goto label_300b78;
    }
    ctx->pc = 0x300B70u;
    {
        const bool branch_taken_0x300b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x300b70) {
            ctx->pc = 0x300C1Cu;
            goto label_300c1c;
        }
    }
    ctx->pc = 0x300B78u;
label_300b78:
    // 0x300b78: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x300b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_300b7c:
    // 0x300b7c: 0xc0c4088  jal         func_310220
label_300b80:
    if (ctx->pc == 0x300B80u) {
        ctx->pc = 0x300B80u;
            // 0x300b80: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x300B84u;
        goto label_300b84;
    }
    ctx->pc = 0x300B7Cu;
    SET_GPR_U32(ctx, 31, 0x300B84u);
    ctx->pc = 0x300B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300B7Cu;
            // 0x300b80: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x310220u;
    if (runtime->hasFunction(0x310220u)) {
        auto targetFn = runtime->lookupFunction(0x310220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300B84u; }
        if (ctx->pc != 0x300B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUkiPos__FPfPf_0x310220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300B84u; }
        if (ctx->pc != 0x300B84u) { return; }
    }
    ctx->pc = 0x300B84u;
label_300b84:
    // 0x300b84: 0xc0c3e78  jal         func_30F9E0
label_300b88:
    if (ctx->pc == 0x300B88u) {
        ctx->pc = 0x300B8Cu;
        goto label_300b8c;
    }
    ctx->pc = 0x300B84u;
    SET_GPR_U32(ctx, 31, 0x300B8Cu);
    ctx->pc = 0x30F9E0u;
    if (runtime->hasFunction(0x30F9E0u)) {
        auto targetFn = runtime->lookupFunction(0x30F9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300B8Cu; }
        if (ctx->pc != 0x300B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWaterLevel__Fv_0x30f9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300B8Cu; }
        if (ctx->pc != 0x300B8Cu) { return; }
    }
    ctx->pc = 0x300B8Cu;
label_300b8c:
    // 0x300b8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x300b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_300b90:
    // 0x300b90: 0x27b10134  addiu       $s1, $sp, 0x134
    ctx->pc = 0x300b90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_300b94:
    // 0x300b94: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x300b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_300b98:
    // 0x300b98: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x300b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_300b9c:
    // 0x300b9c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x300b9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_300ba0:
    // 0x300ba0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x300ba0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_300ba4:
    // 0x300ba4: 0x0  nop
    ctx->pc = 0x300ba4u;
    // NOP
label_300ba8:
    // 0x300ba8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_300bac:
    if (ctx->pc == 0x300BACu) {
        ctx->pc = 0x300BB0u;
        goto label_300bb0;
    }
    ctx->pc = 0x300BA8u;
    {
        const bool branch_taken_0x300ba8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x300ba8) {
            ctx->pc = 0x300BB8u;
            goto label_300bb8;
        }
    }
    ctx->pc = 0x300BB0u;
label_300bb0:
    // 0x300bb0: 0xc0c0014  jal         func_300050
label_300bb4:
    if (ctx->pc == 0x300BB4u) {
        ctx->pc = 0x300BB4u;
            // 0x300bb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300BB8u;
        goto label_300bb8;
    }
    ctx->pc = 0x300BB0u;
    SET_GPR_U32(ctx, 31, 0x300BB8u);
    ctx->pc = 0x300BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300BB0u;
            // 0x300bb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x300050u;
    if (runtime->hasFunction(0x300050u)) {
        auto targetFn = runtime->lookupFunction(0x300050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300BB8u; }
        if (ctx->pc != 0x300BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetUkiCamera__FP14CCameraControl_0x300050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300BB8u; }
        if (ctx->pc != 0x300BB8u) { return; }
    }
    ctx->pc = 0x300BB8u;
label_300bb8:
    // 0x300bb8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_300bbc:
    if (ctx->pc == 0x300BBCu) {
        ctx->pc = 0x300BC0u;
        goto label_300bc0;
    }
    ctx->pc = 0x300BB8u;
    {
        const bool branch_taken_0x300bb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x300bb8) {
            ctx->pc = 0x300BC8u;
            goto label_300bc8;
        }
    }
    ctx->pc = 0x300BC0u;
label_300bc0:
    // 0x300bc0: 0xc0c0014  jal         func_300050
label_300bc4:
    if (ctx->pc == 0x300BC4u) {
        ctx->pc = 0x300BC4u;
            // 0x300bc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300BC8u;
        goto label_300bc8;
    }
    ctx->pc = 0x300BC0u;
    SET_GPR_U32(ctx, 31, 0x300BC8u);
    ctx->pc = 0x300BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300BC0u;
            // 0x300bc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x300050u;
    if (runtime->hasFunction(0x300050u)) {
        auto targetFn = runtime->lookupFunction(0x300050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300BC8u; }
        if (ctx->pc != 0x300BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetUkiCamera__FP14CCameraControl_0x300050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300BC8u; }
        if (ctx->pc != 0x300BC8u) { return; }
    }
    ctx->pc = 0x300BC8u;
label_300bc8:
    // 0x300bc8: 0x8f82a09c  lw          $v0, -0x5F64($gp)
    ctx->pc = 0x300bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942876)));
label_300bcc:
    // 0x300bcc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_300bd0:
    if (ctx->pc == 0x300BD0u) {
        ctx->pc = 0x300BD0u;
            // 0x300bd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300BD4u;
        goto label_300bd4;
    }
    ctx->pc = 0x300BCCu;
    {
        const bool branch_taken_0x300bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x300BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300BCCu;
            // 0x300bd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300bcc) {
            ctx->pc = 0x300C08u;
            goto label_300c08;
        }
    }
    ctx->pc = 0x300BD4u;
label_300bd4:
    // 0x300bd4: 0xc0c3e78  jal         func_30F9E0
label_300bd8:
    if (ctx->pc == 0x300BD8u) {
        ctx->pc = 0x300BDCu;
        goto label_300bdc;
    }
    ctx->pc = 0x300BD4u;
    SET_GPR_U32(ctx, 31, 0x300BDCu);
    ctx->pc = 0x30F9E0u;
    if (runtime->hasFunction(0x30F9E0u)) {
        auto targetFn = runtime->lookupFunction(0x30F9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300BDCu; }
        if (ctx->pc != 0x300BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWaterLevel__Fv_0x30f9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300BDCu; }
        if (ctx->pc != 0x300BDCu) { return; }
    }
    ctx->pc = 0x300BDCu;
label_300bdc:
    // 0x300bdc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x300bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_300be0:
    // 0x300be0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x300be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_300be4:
    // 0x300be4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x300be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_300be8:
    // 0x300be8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300bec:
    // 0x300bec: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x300becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_300bf0:
    // 0x300bf0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x300bf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_300bf4:
    // 0x300bf4: 0xc0693a0  jal         func_1A4E80
label_300bf8:
    if (ctx->pc == 0x300BF8u) {
        ctx->pc = 0x300BF8u;
            // 0x300bf8: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->pc = 0x300BFCu;
        goto label_300bfc;
    }
    ctx->pc = 0x300BF4u;
    SET_GPR_U32(ctx, 31, 0x300BFCu);
    ctx->pc = 0x300BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300BF4u;
            // 0x300bf8: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E80u;
    if (runtime->hasFunction(0x1A4E80u)) {
        auto targetFn = runtime->lookupFunction(0x1A4E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300BFCu; }
        if (ctx->pc != 0x300BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditCameraControl__FP6CSceneP11CPadControlPA4_f_0x1a4e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300BFCu; }
        if (ctx->pc != 0x300BFCu) { return; }
    }
    ctx->pc = 0x300BFCu;
label_300bfc:
    // 0x300bfc: 0x1000000b  b           . + 4 + (0xB << 2)
label_300c00:
    if (ctx->pc == 0x300C00u) {
        ctx->pc = 0x300C04u;
        goto label_300c04;
    }
    ctx->pc = 0x300BFCu;
    {
        const bool branch_taken_0x300bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300bfc) {
            ctx->pc = 0x300C2Cu;
            goto label_300c2c;
        }
    }
    ctx->pc = 0x300C04u;
label_300c04:
    // 0x300c04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x300c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_300c08:
    // 0x300c08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x300c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_300c0c:
    // 0x300c0c: 0xc0693a0  jal         func_1A4E80
label_300c10:
    if (ctx->pc == 0x300C10u) {
        ctx->pc = 0x300C10u;
            // 0x300c10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300C14u;
        goto label_300c14;
    }
    ctx->pc = 0x300C0Cu;
    SET_GPR_U32(ctx, 31, 0x300C14u);
    ctx->pc = 0x300C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300C0Cu;
            // 0x300c10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E80u;
    if (runtime->hasFunction(0x1A4E80u)) {
        auto targetFn = runtime->lookupFunction(0x1A4E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300C14u; }
        if (ctx->pc != 0x300C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditCameraControl__FP6CSceneP11CPadControlPA4_f_0x1a4e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300C14u; }
        if (ctx->pc != 0x300C14u) { return; }
    }
    ctx->pc = 0x300C14u;
label_300c14:
    // 0x300c14: 0x10000005  b           . + 4 + (0x5 << 2)
label_300c18:
    if (ctx->pc == 0x300C18u) {
        ctx->pc = 0x300C1Cu;
        goto label_300c1c;
    }
    ctx->pc = 0x300C14u;
    {
        const bool branch_taken_0x300c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300c14) {
            ctx->pc = 0x300C2Cu;
            goto label_300c2c;
        }
    }
    ctx->pc = 0x300C1Cu;
label_300c1c:
    // 0x300c1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x300c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_300c20:
    // 0x300c20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x300c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_300c24:
    // 0x300c24: 0xc0693a0  jal         func_1A4E80
label_300c28:
    if (ctx->pc == 0x300C28u) {
        ctx->pc = 0x300C28u;
            // 0x300c28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300C2Cu;
        goto label_300c2c;
    }
    ctx->pc = 0x300C24u;
    SET_GPR_U32(ctx, 31, 0x300C2Cu);
    ctx->pc = 0x300C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300C24u;
            // 0x300c28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E80u;
    if (runtime->hasFunction(0x1A4E80u)) {
        auto targetFn = runtime->lookupFunction(0x1A4E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300C2Cu; }
        if (ctx->pc != 0x300C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditCameraControl__FP6CSceneP11CPadControlPA4_f_0x1a4e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300C2Cu; }
        if (ctx->pc != 0x300C2Cu) { return; }
    }
    ctx->pc = 0x300C2Cu;
label_300c2c:
    // 0x300c2c: 0xc0c3e70  jal         func_30F9C0
label_300c30:
    if (ctx->pc == 0x300C30u) {
        ctx->pc = 0x300C34u;
        goto label_300c34;
    }
    ctx->pc = 0x300C2Cu;
    SET_GPR_U32(ctx, 31, 0x300C34u);
    ctx->pc = 0x30F9C0u;
    if (runtime->hasFunction(0x30F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x30F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300C34u; }
        if (ctx->pc != 0x300C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishingMode__Fv_0x30f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300C34u; }
        if (ctx->pc != 0x300C34u) { return; }
    }
    ctx->pc = 0x300C34u;
label_300c34:
    // 0x300c34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300c38:
    // 0x300c38: 0x14430024  bne         $v0, $v1, . + 4 + (0x24 << 2)
label_300c3c:
    if (ctx->pc == 0x300C3Cu) {
        ctx->pc = 0x300C3Cu;
            // 0x300c3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300C40u;
        goto label_300c40;
    }
    ctx->pc = 0x300C38u;
    {
        const bool branch_taken_0x300c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x300C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300C38u;
            // 0x300c3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300c38) {
            ctx->pc = 0x300CCCu;
            goto label_300ccc;
        }
    }
    ctx->pc = 0x300C40u;
label_300c40:
    // 0x300c40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x300c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_300c44:
    // 0x300c44: 0xc0bb538  jal         func_2ED4E0
label_300c48:
    if (ctx->pc == 0x300C48u) {
        ctx->pc = 0x300C48u;
            // 0x300c48: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x300C4Cu;
        goto label_300c4c;
    }
    ctx->pc = 0x300C44u;
    SET_GPR_U32(ctx, 31, 0x300C4Cu);
    ctx->pc = 0x300C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300C44u;
            // 0x300c48: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300C4Cu; }
        if (ctx->pc != 0x300C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300C4Cu; }
        if (ctx->pc != 0x300C4Cu) { return; }
    }
    ctx->pc = 0x300C4Cu;
label_300c4c:
    // 0x300c4c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_300c50:
    if (ctx->pc == 0x300C50u) {
        ctx->pc = 0x300C54u;
        goto label_300c54;
    }
    ctx->pc = 0x300C4Cu;
    {
        const bool branch_taken_0x300c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300c4c) {
            ctx->pc = 0x300CC8u;
            goto label_300cc8;
        }
    }
    ctx->pc = 0x300C54u;
label_300c54:
    // 0x300c54: 0x8f82a09c  lw          $v0, -0x5F64($gp)
    ctx->pc = 0x300c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942876)));
label_300c58:
    // 0x300c58: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_300c5c:
    if (ctx->pc == 0x300C5Cu) {
        ctx->pc = 0x300C5Cu;
            // 0x300c5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300C60u;
        goto label_300c60;
    }
    ctx->pc = 0x300C58u;
    {
        const bool branch_taken_0x300c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x300C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300C58u;
            // 0x300c5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300c58) {
            ctx->pc = 0x300CC0u;
            goto label_300cc0;
        }
    }
    ctx->pc = 0x300C60u;
label_300c60:
    // 0x300c60: 0xc04c678  jal         func_1319E0
label_300c64:
    if (ctx->pc == 0x300C64u) {
        ctx->pc = 0x300C64u;
            // 0x300c64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300C68u;
        goto label_300c68;
    }
    ctx->pc = 0x300C60u;
    SET_GPR_U32(ctx, 31, 0x300C68u);
    ctx->pc = 0x300C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300C60u;
            // 0x300c64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319E0u;
    if (runtime->hasFunction(0x1319E0u)) {
        auto targetFn = runtime->lookupFunction(0x1319E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300C68u; }
        if (ctx->pc != 0x300C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAngle__15mgCCameraFollowFv_0x1319e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300C68u; }
        if (ctx->pc != 0x300C68u) { return; }
    }
    ctx->pc = 0x300C68u;
label_300c68:
    // 0x300c68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x300c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300c6c:
    // 0x300c6c: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x300c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_300c70:
    // 0x300c70: 0xe780a0a0  swc1        $f0, -0x5F60($gp)
    ctx->pc = 0x300c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942880), bits); }
label_300c74:
    // 0x300c74: 0xaf82a09c  sw          $v0, -0x5F64($gp)
    ctx->pc = 0x300c74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942876), GPR_U32(ctx, 2));
label_300c78:
    // 0x300c78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x300c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_300c7c:
    // 0x300c7c: 0xc0bb4c8  jal         func_2ED320
label_300c80:
    if (ctx->pc == 0x300C80u) {
        ctx->pc = 0x300C80u;
            // 0x300c80: 0x24a59ad0  addiu       $a1, $a1, -0x6530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941392));
        ctx->pc = 0x300C84u;
        goto label_300c84;
    }
    ctx->pc = 0x300C7Cu;
    SET_GPR_U32(ctx, 31, 0x300C84u);
    ctx->pc = 0x300C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300C7Cu;
            // 0x300c80: 0x24a59ad0  addiu       $a1, $a1, -0x6530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED320u;
    if (runtime->hasFunction(0x2ED320u)) {
        auto targetFn = runtime->lookupFunction(0x2ED320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300C84u; }
        if (ctx->pc != 0x300C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyParam__14CCameraControlFR14CCameraControl_0x2ed320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300C84u; }
        if (ctx->pc != 0x300C84u) { return; }
    }
    ctx->pc = 0x300C84u;
label_300c84:
    // 0x300c84: 0xc0bafe8  jal         func_2EBFA0
label_300c88:
    if (ctx->pc == 0x300C88u) {
        ctx->pc = 0x300C88u;
            // 0x300c88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300C8Cu;
        goto label_300c8c;
    }
    ctx->pc = 0x300C84u;
    SET_GPR_U32(ctx, 31, 0x300C8Cu);
    ctx->pc = 0x300C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300C84u;
            // 0x300c88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFA0u;
    if (runtime->hasFunction(0x2EBFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300C8Cu; }
        if (ctx->pc != 0x300C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveParam__14CCameraControlFv_0x2ebfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300C8Cu; }
        if (ctx->pc != 0x300C8Cu) { return; }
    }
    ctx->pc = 0x300C8Cu;
label_300c8c:
    // 0x300c8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x300c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300c90:
    // 0x300c90: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x300c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_300c94:
    // 0x300c94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x300c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_300c98:
    // 0x300c98: 0xc0baf94  jal         func_2EBE50
label_300c9c:
    if (ctx->pc == 0x300C9Cu) {
        ctx->pc = 0x300C9Cu;
            // 0x300c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300CA0u;
        goto label_300ca0;
    }
    ctx->pc = 0x300C98u;
    SET_GPR_U32(ctx, 31, 0x300CA0u);
    ctx->pc = 0x300C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300C98u;
            // 0x300c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBE50u;
    if (runtime->hasFunction(0x2EBE50u)) {
        auto targetFn = runtime->lookupFunction(0x2EBE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300CA0u; }
        if (ctx->pc != 0x300CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFixHeight__15CameraCtrlParamFf_0x2ebe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300CA0u; }
        if (ctx->pc != 0x300CA0u) { return; }
    }
    ctx->pc = 0x300CA0u;
label_300ca0:
    // 0x300ca0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x300ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_300ca4:
    // 0x300ca4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x300ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_300ca8:
    // 0x300ca8: 0xc0baf9c  jal         func_2EBE70
label_300cac:
    if (ctx->pc == 0x300CACu) {
        ctx->pc = 0x300CACu;
            // 0x300cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300CB0u;
        goto label_300cb0;
    }
    ctx->pc = 0x300CA8u;
    SET_GPR_U32(ctx, 31, 0x300CB0u);
    ctx->pc = 0x300CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300CA8u;
            // 0x300cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBE70u;
    if (runtime->hasFunction(0x2EBE70u)) {
        auto targetFn = runtime->lookupFunction(0x2EBE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300CB0u; }
        if (ctx->pc != 0x300CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFixDist__15CameraCtrlParamFf_0x2ebe70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300CB0u; }
        if (ctx->pc != 0x300CB0u) { return; }
    }
    ctx->pc = 0x300CB0u;
label_300cb0:
    // 0x300cb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x300cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300cb4:
    // 0x300cb4: 0x10000004  b           . + 4 + (0x4 << 2)
label_300cb8:
    if (ctx->pc == 0x300CB8u) {
        ctx->pc = 0x300CB8u;
            // 0x300cb8: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->pc = 0x300CBCu;
        goto label_300cbc;
    }
    ctx->pc = 0x300CB4u;
    {
        const bool branch_taken_0x300cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300CB4u;
            // 0x300cb8: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300cb4) {
            ctx->pc = 0x300CC8u;
            goto label_300cc8;
        }
    }
    ctx->pc = 0x300CBCu;
label_300cbc:
    // 0x300cbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x300cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_300cc0:
    // 0x300cc0: 0xc0c0014  jal         func_300050
label_300cc4:
    if (ctx->pc == 0x300CC4u) {
        ctx->pc = 0x300CC8u;
        goto label_300cc8;
    }
    ctx->pc = 0x300CC0u;
    SET_GPR_U32(ctx, 31, 0x300CC8u);
    ctx->pc = 0x300050u;
    if (runtime->hasFunction(0x300050u)) {
        auto targetFn = runtime->lookupFunction(0x300050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300CC8u; }
        if (ctx->pc != 0x300CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetUkiCamera__FP14CCameraControl_0x300050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300CC8u; }
        if (ctx->pc != 0x300CC8u) { return; }
    }
    ctx->pc = 0x300CC8u;
label_300cc8:
    // 0x300cc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x300cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_300ccc:
    // 0x300ccc: 0xc0baff4  jal         func_2EBFD0
label_300cd0:
    if (ctx->pc == 0x300CD0u) {
        ctx->pc = 0x300CD0u;
            // 0x300cd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300CD4u;
        goto label_300cd4;
    }
    ctx->pc = 0x300CCCu;
    SET_GPR_U32(ctx, 31, 0x300CD4u);
    ctx->pc = 0x300CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300CCCu;
            // 0x300cd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFD0u;
    if (runtime->hasFunction(0x2EBFD0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300CD4u; }
        if (ctx->pc != 0x300CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRotCameraCancel__14CCameraControlFi_0x2ebfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300CD4u; }
        if (ctx->pc != 0x300CD4u) { return; }
    }
    ctx->pc = 0x300CD4u;
label_300cd4:
    // 0x300cd4: 0x12c0002b  beqz        $s6, . + 4 + (0x2B << 2)
label_300cd8:
    if (ctx->pc == 0x300CD8u) {
        ctx->pc = 0x300CDCu;
        goto label_300cdc;
    }
    ctx->pc = 0x300CD4u;
    {
        const bool branch_taken_0x300cd4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x300cd4) {
            ctx->pc = 0x300D84u;
            goto label_300d84;
        }
    }
    ctx->pc = 0x300CDCu;
label_300cdc:
    // 0x300cdc: 0xc0c0014  jal         func_300050
label_300ce0:
    if (ctx->pc == 0x300CE0u) {
        ctx->pc = 0x300CE0u;
            // 0x300ce0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300CE4u;
        goto label_300ce4;
    }
    ctx->pc = 0x300CDCu;
    SET_GPR_U32(ctx, 31, 0x300CE4u);
    ctx->pc = 0x300CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300CDCu;
            // 0x300ce0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x300050u;
    if (runtime->hasFunction(0x300050u)) {
        auto targetFn = runtime->lookupFunction(0x300050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300CE4u; }
        if (ctx->pc != 0x300CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetUkiCamera__FP14CCameraControl_0x300050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300CE4u; }
        if (ctx->pc != 0x300CE4u) { return; }
    }
    ctx->pc = 0x300CE4u;
label_300ce4:
    // 0x300ce4: 0x8e862e50  lw          $a2, 0x2E50($s4)
    ctx->pc = 0x300ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11856)));
label_300ce8:
    // 0x300ce8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x300ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_300cec:
    // 0x300cec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x300cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300cf0:
    // 0x300cf0: 0xc0a11e0  jal         func_284780
label_300cf4:
    if (ctx->pc == 0x300CF4u) {
        ctx->pc = 0x300CF4u;
            // 0x300cf4: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x300CF8u;
        goto label_300cf8;
    }
    ctx->pc = 0x300CF0u;
    SET_GPR_U32(ctx, 31, 0x300CF8u);
    ctx->pc = 0x300CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300CF0u;
            // 0x300cf4: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284780u;
    if (runtime->hasFunction(0x284780u)) {
        auto targetFn = runtime->lookupFunction(0x284780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300CF8u; }
        if (ctx->pc != 0x300CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetStatus__6CSceneFiii_0x284780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300CF8u; }
        if (ctx->pc != 0x300CF8u) { return; }
    }
    ctx->pc = 0x300CF8u;
label_300cf8:
    // 0x300cf8: 0xc0c0370  jal         func_300DC0
label_300cfc:
    if (ctx->pc == 0x300CFCu) {
        ctx->pc = 0x300CFCu;
            // 0x300cfc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300D00u;
        goto label_300d00;
    }
    ctx->pc = 0x300CF8u;
    SET_GPR_U32(ctx, 31, 0x300D00u);
    ctx->pc = 0x300CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300CF8u;
            // 0x300cfc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x300DC0u;
    if (runtime->hasFunction(0x300DC0u)) {
        auto targetFn = runtime->lookupFunction(0x300DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D00u; }
        if (ctx->pc != 0x300D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitBattle__FP6CScene_0x300dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D00u; }
        if (ctx->pc != 0x300D00u) { return; }
    }
    ctx->pc = 0x300D00u;
label_300d00:
    // 0x300d00: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_300d04:
    if (ctx->pc == 0x300D04u) {
        ctx->pc = 0x300D08u;
        goto label_300d08;
    }
    ctx->pc = 0x300D00u;
    {
        const bool branch_taken_0x300d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300d00) {
            ctx->pc = 0x300D84u;
            goto label_300d84;
        }
    }
    ctx->pc = 0x300D08u;
label_300d08:
    // 0x300d08: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x300d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_300d0c:
    // 0x300d0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300d10:
    // 0x300d10: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x300d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_300d14:
    // 0x300d14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x300d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300d18:
    // 0x300d18: 0xc052d4c  jal         func_14B530
label_300d1c:
    if (ctx->pc == 0x300D1Cu) {
        ctx->pc = 0x300D1Cu;
            // 0x300d1c: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x300D20u;
        goto label_300d20;
    }
    ctx->pc = 0x300D18u;
    SET_GPR_U32(ctx, 31, 0x300D20u);
    ctx->pc = 0x300D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300D18u;
            // 0x300d1c: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B530u;
    if (runtime->hasFunction(0x14B530u)) {
        auto targetFn = runtime->lookupFunction(0x14B530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D20u; }
        if (ctx->pc != 0x300D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVibration__8CGamePadFiii_0x14b530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D20u; }
        if (ctx->pc != 0x300D20u) { return; }
    }
    ctx->pc = 0x300D20u;
label_300d20:
    // 0x300d20: 0xc0bf1d0  jal         func_2FC740
label_300d24:
    if (ctx->pc == 0x300D24u) {
        ctx->pc = 0x300D24u;
            // 0x300d24: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x300D28u;
        goto label_300d28;
    }
    ctx->pc = 0x300D20u;
    SET_GPR_U32(ctx, 31, 0x300D28u);
    ctx->pc = 0x300D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300D20u;
            // 0x300d24: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC740u;
    if (runtime->hasFunction(0x2FC740u)) {
        auto targetFn = runtime->lookupFunction(0x2FC740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D28u; }
        if (ctx->pc != 0x300D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextMode__Fi_0x2fc740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D28u; }
        if (ctx->pc != 0x300D28u) { return; }
    }
    ctx->pc = 0x300D28u;
label_300d28:
    // 0x300d28: 0x8f849f74  lw          $a0, -0x608C($gp)
    ctx->pc = 0x300d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942580)));
label_300d2c:
    // 0x300d2c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x300d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_300d30:
    // 0x300d30: 0xc063818  jal         func_18E060
label_300d34:
    if (ctx->pc == 0x300D34u) {
        ctx->pc = 0x300D34u;
            // 0x300d34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300D38u;
        goto label_300d38;
    }
    ctx->pc = 0x300D30u;
    SET_GPR_U32(ctx, 31, 0x300D38u);
    ctx->pc = 0x300D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300D30u;
            // 0x300d34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D38u; }
        if (ctx->pc != 0x300D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D38u; }
        if (ctx->pc != 0x300D38u) { return; }
    }
    ctx->pc = 0x300D38u;
label_300d38:
    // 0x300d38: 0x8f829fd8  lw          $v0, -0x6028($gp)
    ctx->pc = 0x300d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942680)));
label_300d3c:
    // 0x300d3c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_300d40:
    if (ctx->pc == 0x300D40u) {
        ctx->pc = 0x300D44u;
        goto label_300d44;
    }
    ctx->pc = 0x300D3Cu;
    {
        const bool branch_taken_0x300d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300d3c) {
            ctx->pc = 0x300D70u;
            goto label_300d70;
        }
    }
    ctx->pc = 0x300D44u;
label_300d44:
    // 0x300d44: 0x8f829fdc  lw          $v0, -0x6024($gp)
    ctx->pc = 0x300d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942684)));
label_300d48:
    // 0x300d48: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_300d4c:
    if (ctx->pc == 0x300D4Cu) {
        ctx->pc = 0x300D50u;
        goto label_300d50;
    }
    ctx->pc = 0x300D48u;
    {
        const bool branch_taken_0x300d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300d48) {
            ctx->pc = 0x300D70u;
            goto label_300d70;
        }
    }
    ctx->pc = 0x300D50u;
label_300d50:
    // 0x300d50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x300d50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_300d54:
    // 0x300d54: 0x240201f9  addiu       $v0, $zero, 0x1F9
    ctx->pc = 0x300d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 505));
label_300d58:
    // 0x300d58: 0x26842c70  addiu       $a0, $s4, 0x2C70
    ctx->pc = 0x300d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 11376));
label_300d5c:
    // 0x300d5c: 0xaf829fd4  sw          $v0, -0x602C($gp)
    ctx->pc = 0x300d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942676), GPR_U32(ctx, 2));
label_300d60:
    // 0x300d60: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x300d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_300d64:
    // 0x300d64: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x300d64u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_300d68:
    // 0x300d68: 0xc05f610  jal         func_17D840
label_300d6c:
    if (ctx->pc == 0x300D6Cu) {
        ctx->pc = 0x300D6Cu;
            // 0x300d6c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x300D70u;
        goto label_300d70;
    }
    ctx->pc = 0x300D68u;
    SET_GPR_U32(ctx, 31, 0x300D70u);
    ctx->pc = 0x300D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300D68u;
            // 0x300d6c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D70u; }
        if (ctx->pc != 0x300D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D70u; }
        if (ctx->pc != 0x300D70u) { return; }
    }
    ctx->pc = 0x300D70u;
label_300d70:
    // 0x300d70: 0x8f85a01c  lw          $a1, -0x5FE4($gp)
    ctx->pc = 0x300d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
label_300d74:
    // 0x300d74: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x300d74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_300d78:
    // 0x300d78: 0xc0c0ca8  jal         func_3032A0
label_300d7c:
    if (ctx->pc == 0x300D7Cu) {
        ctx->pc = 0x300D7Cu;
            // 0x300d7c: 0x24849d00  addiu       $a0, $a0, -0x6300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941952));
        ctx->pc = 0x300D80u;
        goto label_300d80;
    }
    ctx->pc = 0x300D78u;
    SET_GPR_U32(ctx, 31, 0x300D80u);
    ctx->pc = 0x300D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300D78u;
            // 0x300d7c: 0x24849d00  addiu       $a0, $a0, -0x6300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3032A0u;
    if (runtime->hasFunction(0x3032A0u)) {
        auto targetFn = runtime->lookupFunction(0x3032A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D80u; }
        if (ctx->pc != 0x300D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FishLoadBG__FP9FISH_DATAP1_0x3032a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D80u; }
        if (ctx->pc != 0x300D80u) { return; }
    }
    ctx->pc = 0x300D80u;
label_300d80:
    // 0x300d80: 0xaf82a020  sw          $v0, -0x5FE0($gp)
    ctx->pc = 0x300d80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942752), GPR_U32(ctx, 2));
label_300d84:
    // 0x300d84: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x300d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_300d88:
    // 0x300d88: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x300d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_300d8c:
    // 0x300d8c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x300d8cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_300d90:
    // 0x300d90: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x300d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_300d94:
    // 0x300d94: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x300d94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_300d98:
    // 0x300d98: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x300d98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_300d9c:
    // 0x300d9c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x300d9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_300da0:
    // 0x300da0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x300da0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_300da4:
    // 0x300da4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x300da4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_300da8:
    // 0x300da8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x300da8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_300dac:
    // 0x300dac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x300dacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_300db0:
    // 0x300db0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x300db0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_300db4:
    // 0x300db4: 0x3e00008  jr          $ra
label_300db8:
    if (ctx->pc == 0x300DB8u) {
        ctx->pc = 0x300DB8u;
            // 0x300db8: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x300DBCu;
        goto label_fallthrough_0x300db4;
    }
    ctx->pc = 0x300DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300DB4u;
            // 0x300db8: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x300db4:
    ctx->pc = 0x300DBCu;
}
