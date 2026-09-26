#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__9CPullItemFv
// Address: 0x1b8270 - 0x1b90cc
void Step__9CPullItemFv_0x1b8270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__9CPullItemFv_0x1b8270");
#endif

    switch (ctx->pc) {
        case 0x1b8270u: goto label_1b8270;
        case 0x1b8274u: goto label_1b8274;
        case 0x1b8278u: goto label_1b8278;
        case 0x1b827cu: goto label_1b827c;
        case 0x1b8280u: goto label_1b8280;
        case 0x1b8284u: goto label_1b8284;
        case 0x1b8288u: goto label_1b8288;
        case 0x1b828cu: goto label_1b828c;
        case 0x1b8290u: goto label_1b8290;
        case 0x1b8294u: goto label_1b8294;
        case 0x1b8298u: goto label_1b8298;
        case 0x1b829cu: goto label_1b829c;
        case 0x1b82a0u: goto label_1b82a0;
        case 0x1b82a4u: goto label_1b82a4;
        case 0x1b82a8u: goto label_1b82a8;
        case 0x1b82acu: goto label_1b82ac;
        case 0x1b82b0u: goto label_1b82b0;
        case 0x1b82b4u: goto label_1b82b4;
        case 0x1b82b8u: goto label_1b82b8;
        case 0x1b82bcu: goto label_1b82bc;
        case 0x1b82c0u: goto label_1b82c0;
        case 0x1b82c4u: goto label_1b82c4;
        case 0x1b82c8u: goto label_1b82c8;
        case 0x1b82ccu: goto label_1b82cc;
        case 0x1b82d0u: goto label_1b82d0;
        case 0x1b82d4u: goto label_1b82d4;
        case 0x1b82d8u: goto label_1b82d8;
        case 0x1b82dcu: goto label_1b82dc;
        case 0x1b82e0u: goto label_1b82e0;
        case 0x1b82e4u: goto label_1b82e4;
        case 0x1b82e8u: goto label_1b82e8;
        case 0x1b82ecu: goto label_1b82ec;
        case 0x1b82f0u: goto label_1b82f0;
        case 0x1b82f4u: goto label_1b82f4;
        case 0x1b82f8u: goto label_1b82f8;
        case 0x1b82fcu: goto label_1b82fc;
        case 0x1b8300u: goto label_1b8300;
        case 0x1b8304u: goto label_1b8304;
        case 0x1b8308u: goto label_1b8308;
        case 0x1b830cu: goto label_1b830c;
        case 0x1b8310u: goto label_1b8310;
        case 0x1b8314u: goto label_1b8314;
        case 0x1b8318u: goto label_1b8318;
        case 0x1b831cu: goto label_1b831c;
        case 0x1b8320u: goto label_1b8320;
        case 0x1b8324u: goto label_1b8324;
        case 0x1b8328u: goto label_1b8328;
        case 0x1b832cu: goto label_1b832c;
        case 0x1b8330u: goto label_1b8330;
        case 0x1b8334u: goto label_1b8334;
        case 0x1b8338u: goto label_1b8338;
        case 0x1b833cu: goto label_1b833c;
        case 0x1b8340u: goto label_1b8340;
        case 0x1b8344u: goto label_1b8344;
        case 0x1b8348u: goto label_1b8348;
        case 0x1b834cu: goto label_1b834c;
        case 0x1b8350u: goto label_1b8350;
        case 0x1b8354u: goto label_1b8354;
        case 0x1b8358u: goto label_1b8358;
        case 0x1b835cu: goto label_1b835c;
        case 0x1b8360u: goto label_1b8360;
        case 0x1b8364u: goto label_1b8364;
        case 0x1b8368u: goto label_1b8368;
        case 0x1b836cu: goto label_1b836c;
        case 0x1b8370u: goto label_1b8370;
        case 0x1b8374u: goto label_1b8374;
        case 0x1b8378u: goto label_1b8378;
        case 0x1b837cu: goto label_1b837c;
        case 0x1b8380u: goto label_1b8380;
        case 0x1b8384u: goto label_1b8384;
        case 0x1b8388u: goto label_1b8388;
        case 0x1b838cu: goto label_1b838c;
        case 0x1b8390u: goto label_1b8390;
        case 0x1b8394u: goto label_1b8394;
        case 0x1b8398u: goto label_1b8398;
        case 0x1b839cu: goto label_1b839c;
        case 0x1b83a0u: goto label_1b83a0;
        case 0x1b83a4u: goto label_1b83a4;
        case 0x1b83a8u: goto label_1b83a8;
        case 0x1b83acu: goto label_1b83ac;
        case 0x1b83b0u: goto label_1b83b0;
        case 0x1b83b4u: goto label_1b83b4;
        case 0x1b83b8u: goto label_1b83b8;
        case 0x1b83bcu: goto label_1b83bc;
        case 0x1b83c0u: goto label_1b83c0;
        case 0x1b83c4u: goto label_1b83c4;
        case 0x1b83c8u: goto label_1b83c8;
        case 0x1b83ccu: goto label_1b83cc;
        case 0x1b83d0u: goto label_1b83d0;
        case 0x1b83d4u: goto label_1b83d4;
        case 0x1b83d8u: goto label_1b83d8;
        case 0x1b83dcu: goto label_1b83dc;
        case 0x1b83e0u: goto label_1b83e0;
        case 0x1b83e4u: goto label_1b83e4;
        case 0x1b83e8u: goto label_1b83e8;
        case 0x1b83ecu: goto label_1b83ec;
        case 0x1b83f0u: goto label_1b83f0;
        case 0x1b83f4u: goto label_1b83f4;
        case 0x1b83f8u: goto label_1b83f8;
        case 0x1b83fcu: goto label_1b83fc;
        case 0x1b8400u: goto label_1b8400;
        case 0x1b8404u: goto label_1b8404;
        case 0x1b8408u: goto label_1b8408;
        case 0x1b840cu: goto label_1b840c;
        case 0x1b8410u: goto label_1b8410;
        case 0x1b8414u: goto label_1b8414;
        case 0x1b8418u: goto label_1b8418;
        case 0x1b841cu: goto label_1b841c;
        case 0x1b8420u: goto label_1b8420;
        case 0x1b8424u: goto label_1b8424;
        case 0x1b8428u: goto label_1b8428;
        case 0x1b842cu: goto label_1b842c;
        case 0x1b8430u: goto label_1b8430;
        case 0x1b8434u: goto label_1b8434;
        case 0x1b8438u: goto label_1b8438;
        case 0x1b843cu: goto label_1b843c;
        case 0x1b8440u: goto label_1b8440;
        case 0x1b8444u: goto label_1b8444;
        case 0x1b8448u: goto label_1b8448;
        case 0x1b844cu: goto label_1b844c;
        case 0x1b8450u: goto label_1b8450;
        case 0x1b8454u: goto label_1b8454;
        case 0x1b8458u: goto label_1b8458;
        case 0x1b845cu: goto label_1b845c;
        case 0x1b8460u: goto label_1b8460;
        case 0x1b8464u: goto label_1b8464;
        case 0x1b8468u: goto label_1b8468;
        case 0x1b846cu: goto label_1b846c;
        case 0x1b8470u: goto label_1b8470;
        case 0x1b8474u: goto label_1b8474;
        case 0x1b8478u: goto label_1b8478;
        case 0x1b847cu: goto label_1b847c;
        case 0x1b8480u: goto label_1b8480;
        case 0x1b8484u: goto label_1b8484;
        case 0x1b8488u: goto label_1b8488;
        case 0x1b848cu: goto label_1b848c;
        case 0x1b8490u: goto label_1b8490;
        case 0x1b8494u: goto label_1b8494;
        case 0x1b8498u: goto label_1b8498;
        case 0x1b849cu: goto label_1b849c;
        case 0x1b84a0u: goto label_1b84a0;
        case 0x1b84a4u: goto label_1b84a4;
        case 0x1b84a8u: goto label_1b84a8;
        case 0x1b84acu: goto label_1b84ac;
        case 0x1b84b0u: goto label_1b84b0;
        case 0x1b84b4u: goto label_1b84b4;
        case 0x1b84b8u: goto label_1b84b8;
        case 0x1b84bcu: goto label_1b84bc;
        case 0x1b84c0u: goto label_1b84c0;
        case 0x1b84c4u: goto label_1b84c4;
        case 0x1b84c8u: goto label_1b84c8;
        case 0x1b84ccu: goto label_1b84cc;
        case 0x1b84d0u: goto label_1b84d0;
        case 0x1b84d4u: goto label_1b84d4;
        case 0x1b84d8u: goto label_1b84d8;
        case 0x1b84dcu: goto label_1b84dc;
        case 0x1b84e0u: goto label_1b84e0;
        case 0x1b84e4u: goto label_1b84e4;
        case 0x1b84e8u: goto label_1b84e8;
        case 0x1b84ecu: goto label_1b84ec;
        case 0x1b84f0u: goto label_1b84f0;
        case 0x1b84f4u: goto label_1b84f4;
        case 0x1b84f8u: goto label_1b84f8;
        case 0x1b84fcu: goto label_1b84fc;
        case 0x1b8500u: goto label_1b8500;
        case 0x1b8504u: goto label_1b8504;
        case 0x1b8508u: goto label_1b8508;
        case 0x1b850cu: goto label_1b850c;
        case 0x1b8510u: goto label_1b8510;
        case 0x1b8514u: goto label_1b8514;
        case 0x1b8518u: goto label_1b8518;
        case 0x1b851cu: goto label_1b851c;
        case 0x1b8520u: goto label_1b8520;
        case 0x1b8524u: goto label_1b8524;
        case 0x1b8528u: goto label_1b8528;
        case 0x1b852cu: goto label_1b852c;
        case 0x1b8530u: goto label_1b8530;
        case 0x1b8534u: goto label_1b8534;
        case 0x1b8538u: goto label_1b8538;
        case 0x1b853cu: goto label_1b853c;
        case 0x1b8540u: goto label_1b8540;
        case 0x1b8544u: goto label_1b8544;
        case 0x1b8548u: goto label_1b8548;
        case 0x1b854cu: goto label_1b854c;
        case 0x1b8550u: goto label_1b8550;
        case 0x1b8554u: goto label_1b8554;
        case 0x1b8558u: goto label_1b8558;
        case 0x1b855cu: goto label_1b855c;
        case 0x1b8560u: goto label_1b8560;
        case 0x1b8564u: goto label_1b8564;
        case 0x1b8568u: goto label_1b8568;
        case 0x1b856cu: goto label_1b856c;
        case 0x1b8570u: goto label_1b8570;
        case 0x1b8574u: goto label_1b8574;
        case 0x1b8578u: goto label_1b8578;
        case 0x1b857cu: goto label_1b857c;
        case 0x1b8580u: goto label_1b8580;
        case 0x1b8584u: goto label_1b8584;
        case 0x1b8588u: goto label_1b8588;
        case 0x1b858cu: goto label_1b858c;
        case 0x1b8590u: goto label_1b8590;
        case 0x1b8594u: goto label_1b8594;
        case 0x1b8598u: goto label_1b8598;
        case 0x1b859cu: goto label_1b859c;
        case 0x1b85a0u: goto label_1b85a0;
        case 0x1b85a4u: goto label_1b85a4;
        case 0x1b85a8u: goto label_1b85a8;
        case 0x1b85acu: goto label_1b85ac;
        case 0x1b85b0u: goto label_1b85b0;
        case 0x1b85b4u: goto label_1b85b4;
        case 0x1b85b8u: goto label_1b85b8;
        case 0x1b85bcu: goto label_1b85bc;
        case 0x1b85c0u: goto label_1b85c0;
        case 0x1b85c4u: goto label_1b85c4;
        case 0x1b85c8u: goto label_1b85c8;
        case 0x1b85ccu: goto label_1b85cc;
        case 0x1b85d0u: goto label_1b85d0;
        case 0x1b85d4u: goto label_1b85d4;
        case 0x1b85d8u: goto label_1b85d8;
        case 0x1b85dcu: goto label_1b85dc;
        case 0x1b85e0u: goto label_1b85e0;
        case 0x1b85e4u: goto label_1b85e4;
        case 0x1b85e8u: goto label_1b85e8;
        case 0x1b85ecu: goto label_1b85ec;
        case 0x1b85f0u: goto label_1b85f0;
        case 0x1b85f4u: goto label_1b85f4;
        case 0x1b85f8u: goto label_1b85f8;
        case 0x1b85fcu: goto label_1b85fc;
        case 0x1b8600u: goto label_1b8600;
        case 0x1b8604u: goto label_1b8604;
        case 0x1b8608u: goto label_1b8608;
        case 0x1b860cu: goto label_1b860c;
        case 0x1b8610u: goto label_1b8610;
        case 0x1b8614u: goto label_1b8614;
        case 0x1b8618u: goto label_1b8618;
        case 0x1b861cu: goto label_1b861c;
        case 0x1b8620u: goto label_1b8620;
        case 0x1b8624u: goto label_1b8624;
        case 0x1b8628u: goto label_1b8628;
        case 0x1b862cu: goto label_1b862c;
        case 0x1b8630u: goto label_1b8630;
        case 0x1b8634u: goto label_1b8634;
        case 0x1b8638u: goto label_1b8638;
        case 0x1b863cu: goto label_1b863c;
        case 0x1b8640u: goto label_1b8640;
        case 0x1b8644u: goto label_1b8644;
        case 0x1b8648u: goto label_1b8648;
        case 0x1b864cu: goto label_1b864c;
        case 0x1b8650u: goto label_1b8650;
        case 0x1b8654u: goto label_1b8654;
        case 0x1b8658u: goto label_1b8658;
        case 0x1b865cu: goto label_1b865c;
        case 0x1b8660u: goto label_1b8660;
        case 0x1b8664u: goto label_1b8664;
        case 0x1b8668u: goto label_1b8668;
        case 0x1b866cu: goto label_1b866c;
        case 0x1b8670u: goto label_1b8670;
        case 0x1b8674u: goto label_1b8674;
        case 0x1b8678u: goto label_1b8678;
        case 0x1b867cu: goto label_1b867c;
        case 0x1b8680u: goto label_1b8680;
        case 0x1b8684u: goto label_1b8684;
        case 0x1b8688u: goto label_1b8688;
        case 0x1b868cu: goto label_1b868c;
        case 0x1b8690u: goto label_1b8690;
        case 0x1b8694u: goto label_1b8694;
        case 0x1b8698u: goto label_1b8698;
        case 0x1b869cu: goto label_1b869c;
        case 0x1b86a0u: goto label_1b86a0;
        case 0x1b86a4u: goto label_1b86a4;
        case 0x1b86a8u: goto label_1b86a8;
        case 0x1b86acu: goto label_1b86ac;
        case 0x1b86b0u: goto label_1b86b0;
        case 0x1b86b4u: goto label_1b86b4;
        case 0x1b86b8u: goto label_1b86b8;
        case 0x1b86bcu: goto label_1b86bc;
        case 0x1b86c0u: goto label_1b86c0;
        case 0x1b86c4u: goto label_1b86c4;
        case 0x1b86c8u: goto label_1b86c8;
        case 0x1b86ccu: goto label_1b86cc;
        case 0x1b86d0u: goto label_1b86d0;
        case 0x1b86d4u: goto label_1b86d4;
        case 0x1b86d8u: goto label_1b86d8;
        case 0x1b86dcu: goto label_1b86dc;
        case 0x1b86e0u: goto label_1b86e0;
        case 0x1b86e4u: goto label_1b86e4;
        case 0x1b86e8u: goto label_1b86e8;
        case 0x1b86ecu: goto label_1b86ec;
        case 0x1b86f0u: goto label_1b86f0;
        case 0x1b86f4u: goto label_1b86f4;
        case 0x1b86f8u: goto label_1b86f8;
        case 0x1b86fcu: goto label_1b86fc;
        case 0x1b8700u: goto label_1b8700;
        case 0x1b8704u: goto label_1b8704;
        case 0x1b8708u: goto label_1b8708;
        case 0x1b870cu: goto label_1b870c;
        case 0x1b8710u: goto label_1b8710;
        case 0x1b8714u: goto label_1b8714;
        case 0x1b8718u: goto label_1b8718;
        case 0x1b871cu: goto label_1b871c;
        case 0x1b8720u: goto label_1b8720;
        case 0x1b8724u: goto label_1b8724;
        case 0x1b8728u: goto label_1b8728;
        case 0x1b872cu: goto label_1b872c;
        case 0x1b8730u: goto label_1b8730;
        case 0x1b8734u: goto label_1b8734;
        case 0x1b8738u: goto label_1b8738;
        case 0x1b873cu: goto label_1b873c;
        case 0x1b8740u: goto label_1b8740;
        case 0x1b8744u: goto label_1b8744;
        case 0x1b8748u: goto label_1b8748;
        case 0x1b874cu: goto label_1b874c;
        case 0x1b8750u: goto label_1b8750;
        case 0x1b8754u: goto label_1b8754;
        case 0x1b8758u: goto label_1b8758;
        case 0x1b875cu: goto label_1b875c;
        case 0x1b8760u: goto label_1b8760;
        case 0x1b8764u: goto label_1b8764;
        case 0x1b8768u: goto label_1b8768;
        case 0x1b876cu: goto label_1b876c;
        case 0x1b8770u: goto label_1b8770;
        case 0x1b8774u: goto label_1b8774;
        case 0x1b8778u: goto label_1b8778;
        case 0x1b877cu: goto label_1b877c;
        case 0x1b8780u: goto label_1b8780;
        case 0x1b8784u: goto label_1b8784;
        case 0x1b8788u: goto label_1b8788;
        case 0x1b878cu: goto label_1b878c;
        case 0x1b8790u: goto label_1b8790;
        case 0x1b8794u: goto label_1b8794;
        case 0x1b8798u: goto label_1b8798;
        case 0x1b879cu: goto label_1b879c;
        case 0x1b87a0u: goto label_1b87a0;
        case 0x1b87a4u: goto label_1b87a4;
        case 0x1b87a8u: goto label_1b87a8;
        case 0x1b87acu: goto label_1b87ac;
        case 0x1b87b0u: goto label_1b87b0;
        case 0x1b87b4u: goto label_1b87b4;
        case 0x1b87b8u: goto label_1b87b8;
        case 0x1b87bcu: goto label_1b87bc;
        case 0x1b87c0u: goto label_1b87c0;
        case 0x1b87c4u: goto label_1b87c4;
        case 0x1b87c8u: goto label_1b87c8;
        case 0x1b87ccu: goto label_1b87cc;
        case 0x1b87d0u: goto label_1b87d0;
        case 0x1b87d4u: goto label_1b87d4;
        case 0x1b87d8u: goto label_1b87d8;
        case 0x1b87dcu: goto label_1b87dc;
        case 0x1b87e0u: goto label_1b87e0;
        case 0x1b87e4u: goto label_1b87e4;
        case 0x1b87e8u: goto label_1b87e8;
        case 0x1b87ecu: goto label_1b87ec;
        case 0x1b87f0u: goto label_1b87f0;
        case 0x1b87f4u: goto label_1b87f4;
        case 0x1b87f8u: goto label_1b87f8;
        case 0x1b87fcu: goto label_1b87fc;
        case 0x1b8800u: goto label_1b8800;
        case 0x1b8804u: goto label_1b8804;
        case 0x1b8808u: goto label_1b8808;
        case 0x1b880cu: goto label_1b880c;
        case 0x1b8810u: goto label_1b8810;
        case 0x1b8814u: goto label_1b8814;
        case 0x1b8818u: goto label_1b8818;
        case 0x1b881cu: goto label_1b881c;
        case 0x1b8820u: goto label_1b8820;
        case 0x1b8824u: goto label_1b8824;
        case 0x1b8828u: goto label_1b8828;
        case 0x1b882cu: goto label_1b882c;
        case 0x1b8830u: goto label_1b8830;
        case 0x1b8834u: goto label_1b8834;
        case 0x1b8838u: goto label_1b8838;
        case 0x1b883cu: goto label_1b883c;
        case 0x1b8840u: goto label_1b8840;
        case 0x1b8844u: goto label_1b8844;
        case 0x1b8848u: goto label_1b8848;
        case 0x1b884cu: goto label_1b884c;
        case 0x1b8850u: goto label_1b8850;
        case 0x1b8854u: goto label_1b8854;
        case 0x1b8858u: goto label_1b8858;
        case 0x1b885cu: goto label_1b885c;
        case 0x1b8860u: goto label_1b8860;
        case 0x1b8864u: goto label_1b8864;
        case 0x1b8868u: goto label_1b8868;
        case 0x1b886cu: goto label_1b886c;
        case 0x1b8870u: goto label_1b8870;
        case 0x1b8874u: goto label_1b8874;
        case 0x1b8878u: goto label_1b8878;
        case 0x1b887cu: goto label_1b887c;
        case 0x1b8880u: goto label_1b8880;
        case 0x1b8884u: goto label_1b8884;
        case 0x1b8888u: goto label_1b8888;
        case 0x1b888cu: goto label_1b888c;
        case 0x1b8890u: goto label_1b8890;
        case 0x1b8894u: goto label_1b8894;
        case 0x1b8898u: goto label_1b8898;
        case 0x1b889cu: goto label_1b889c;
        case 0x1b88a0u: goto label_1b88a0;
        case 0x1b88a4u: goto label_1b88a4;
        case 0x1b88a8u: goto label_1b88a8;
        case 0x1b88acu: goto label_1b88ac;
        case 0x1b88b0u: goto label_1b88b0;
        case 0x1b88b4u: goto label_1b88b4;
        case 0x1b88b8u: goto label_1b88b8;
        case 0x1b88bcu: goto label_1b88bc;
        case 0x1b88c0u: goto label_1b88c0;
        case 0x1b88c4u: goto label_1b88c4;
        case 0x1b88c8u: goto label_1b88c8;
        case 0x1b88ccu: goto label_1b88cc;
        case 0x1b88d0u: goto label_1b88d0;
        case 0x1b88d4u: goto label_1b88d4;
        case 0x1b88d8u: goto label_1b88d8;
        case 0x1b88dcu: goto label_1b88dc;
        case 0x1b88e0u: goto label_1b88e0;
        case 0x1b88e4u: goto label_1b88e4;
        case 0x1b88e8u: goto label_1b88e8;
        case 0x1b88ecu: goto label_1b88ec;
        case 0x1b88f0u: goto label_1b88f0;
        case 0x1b88f4u: goto label_1b88f4;
        case 0x1b88f8u: goto label_1b88f8;
        case 0x1b88fcu: goto label_1b88fc;
        case 0x1b8900u: goto label_1b8900;
        case 0x1b8904u: goto label_1b8904;
        case 0x1b8908u: goto label_1b8908;
        case 0x1b890cu: goto label_1b890c;
        case 0x1b8910u: goto label_1b8910;
        case 0x1b8914u: goto label_1b8914;
        case 0x1b8918u: goto label_1b8918;
        case 0x1b891cu: goto label_1b891c;
        case 0x1b8920u: goto label_1b8920;
        case 0x1b8924u: goto label_1b8924;
        case 0x1b8928u: goto label_1b8928;
        case 0x1b892cu: goto label_1b892c;
        case 0x1b8930u: goto label_1b8930;
        case 0x1b8934u: goto label_1b8934;
        case 0x1b8938u: goto label_1b8938;
        case 0x1b893cu: goto label_1b893c;
        case 0x1b8940u: goto label_1b8940;
        case 0x1b8944u: goto label_1b8944;
        case 0x1b8948u: goto label_1b8948;
        case 0x1b894cu: goto label_1b894c;
        case 0x1b8950u: goto label_1b8950;
        case 0x1b8954u: goto label_1b8954;
        case 0x1b8958u: goto label_1b8958;
        case 0x1b895cu: goto label_1b895c;
        case 0x1b8960u: goto label_1b8960;
        case 0x1b8964u: goto label_1b8964;
        case 0x1b8968u: goto label_1b8968;
        case 0x1b896cu: goto label_1b896c;
        case 0x1b8970u: goto label_1b8970;
        case 0x1b8974u: goto label_1b8974;
        case 0x1b8978u: goto label_1b8978;
        case 0x1b897cu: goto label_1b897c;
        case 0x1b8980u: goto label_1b8980;
        case 0x1b8984u: goto label_1b8984;
        case 0x1b8988u: goto label_1b8988;
        case 0x1b898cu: goto label_1b898c;
        case 0x1b8990u: goto label_1b8990;
        case 0x1b8994u: goto label_1b8994;
        case 0x1b8998u: goto label_1b8998;
        case 0x1b899cu: goto label_1b899c;
        case 0x1b89a0u: goto label_1b89a0;
        case 0x1b89a4u: goto label_1b89a4;
        case 0x1b89a8u: goto label_1b89a8;
        case 0x1b89acu: goto label_1b89ac;
        case 0x1b89b0u: goto label_1b89b0;
        case 0x1b89b4u: goto label_1b89b4;
        case 0x1b89b8u: goto label_1b89b8;
        case 0x1b89bcu: goto label_1b89bc;
        case 0x1b89c0u: goto label_1b89c0;
        case 0x1b89c4u: goto label_1b89c4;
        case 0x1b89c8u: goto label_1b89c8;
        case 0x1b89ccu: goto label_1b89cc;
        case 0x1b89d0u: goto label_1b89d0;
        case 0x1b89d4u: goto label_1b89d4;
        case 0x1b89d8u: goto label_1b89d8;
        case 0x1b89dcu: goto label_1b89dc;
        case 0x1b89e0u: goto label_1b89e0;
        case 0x1b89e4u: goto label_1b89e4;
        case 0x1b89e8u: goto label_1b89e8;
        case 0x1b89ecu: goto label_1b89ec;
        case 0x1b89f0u: goto label_1b89f0;
        case 0x1b89f4u: goto label_1b89f4;
        case 0x1b89f8u: goto label_1b89f8;
        case 0x1b89fcu: goto label_1b89fc;
        case 0x1b8a00u: goto label_1b8a00;
        case 0x1b8a04u: goto label_1b8a04;
        case 0x1b8a08u: goto label_1b8a08;
        case 0x1b8a0cu: goto label_1b8a0c;
        case 0x1b8a10u: goto label_1b8a10;
        case 0x1b8a14u: goto label_1b8a14;
        case 0x1b8a18u: goto label_1b8a18;
        case 0x1b8a1cu: goto label_1b8a1c;
        case 0x1b8a20u: goto label_1b8a20;
        case 0x1b8a24u: goto label_1b8a24;
        case 0x1b8a28u: goto label_1b8a28;
        case 0x1b8a2cu: goto label_1b8a2c;
        case 0x1b8a30u: goto label_1b8a30;
        case 0x1b8a34u: goto label_1b8a34;
        case 0x1b8a38u: goto label_1b8a38;
        case 0x1b8a3cu: goto label_1b8a3c;
        case 0x1b8a40u: goto label_1b8a40;
        case 0x1b8a44u: goto label_1b8a44;
        case 0x1b8a48u: goto label_1b8a48;
        case 0x1b8a4cu: goto label_1b8a4c;
        case 0x1b8a50u: goto label_1b8a50;
        case 0x1b8a54u: goto label_1b8a54;
        case 0x1b8a58u: goto label_1b8a58;
        case 0x1b8a5cu: goto label_1b8a5c;
        case 0x1b8a60u: goto label_1b8a60;
        case 0x1b8a64u: goto label_1b8a64;
        case 0x1b8a68u: goto label_1b8a68;
        case 0x1b8a6cu: goto label_1b8a6c;
        case 0x1b8a70u: goto label_1b8a70;
        case 0x1b8a74u: goto label_1b8a74;
        case 0x1b8a78u: goto label_1b8a78;
        case 0x1b8a7cu: goto label_1b8a7c;
        case 0x1b8a80u: goto label_1b8a80;
        case 0x1b8a84u: goto label_1b8a84;
        case 0x1b8a88u: goto label_1b8a88;
        case 0x1b8a8cu: goto label_1b8a8c;
        case 0x1b8a90u: goto label_1b8a90;
        case 0x1b8a94u: goto label_1b8a94;
        case 0x1b8a98u: goto label_1b8a98;
        case 0x1b8a9cu: goto label_1b8a9c;
        case 0x1b8aa0u: goto label_1b8aa0;
        case 0x1b8aa4u: goto label_1b8aa4;
        case 0x1b8aa8u: goto label_1b8aa8;
        case 0x1b8aacu: goto label_1b8aac;
        case 0x1b8ab0u: goto label_1b8ab0;
        case 0x1b8ab4u: goto label_1b8ab4;
        case 0x1b8ab8u: goto label_1b8ab8;
        case 0x1b8abcu: goto label_1b8abc;
        case 0x1b8ac0u: goto label_1b8ac0;
        case 0x1b8ac4u: goto label_1b8ac4;
        case 0x1b8ac8u: goto label_1b8ac8;
        case 0x1b8accu: goto label_1b8acc;
        case 0x1b8ad0u: goto label_1b8ad0;
        case 0x1b8ad4u: goto label_1b8ad4;
        case 0x1b8ad8u: goto label_1b8ad8;
        case 0x1b8adcu: goto label_1b8adc;
        case 0x1b8ae0u: goto label_1b8ae0;
        case 0x1b8ae4u: goto label_1b8ae4;
        case 0x1b8ae8u: goto label_1b8ae8;
        case 0x1b8aecu: goto label_1b8aec;
        case 0x1b8af0u: goto label_1b8af0;
        case 0x1b8af4u: goto label_1b8af4;
        case 0x1b8af8u: goto label_1b8af8;
        case 0x1b8afcu: goto label_1b8afc;
        case 0x1b8b00u: goto label_1b8b00;
        case 0x1b8b04u: goto label_1b8b04;
        case 0x1b8b08u: goto label_1b8b08;
        case 0x1b8b0cu: goto label_1b8b0c;
        case 0x1b8b10u: goto label_1b8b10;
        case 0x1b8b14u: goto label_1b8b14;
        case 0x1b8b18u: goto label_1b8b18;
        case 0x1b8b1cu: goto label_1b8b1c;
        case 0x1b8b20u: goto label_1b8b20;
        case 0x1b8b24u: goto label_1b8b24;
        case 0x1b8b28u: goto label_1b8b28;
        case 0x1b8b2cu: goto label_1b8b2c;
        case 0x1b8b30u: goto label_1b8b30;
        case 0x1b8b34u: goto label_1b8b34;
        case 0x1b8b38u: goto label_1b8b38;
        case 0x1b8b3cu: goto label_1b8b3c;
        case 0x1b8b40u: goto label_1b8b40;
        case 0x1b8b44u: goto label_1b8b44;
        case 0x1b8b48u: goto label_1b8b48;
        case 0x1b8b4cu: goto label_1b8b4c;
        case 0x1b8b50u: goto label_1b8b50;
        case 0x1b8b54u: goto label_1b8b54;
        case 0x1b8b58u: goto label_1b8b58;
        case 0x1b8b5cu: goto label_1b8b5c;
        case 0x1b8b60u: goto label_1b8b60;
        case 0x1b8b64u: goto label_1b8b64;
        case 0x1b8b68u: goto label_1b8b68;
        case 0x1b8b6cu: goto label_1b8b6c;
        case 0x1b8b70u: goto label_1b8b70;
        case 0x1b8b74u: goto label_1b8b74;
        case 0x1b8b78u: goto label_1b8b78;
        case 0x1b8b7cu: goto label_1b8b7c;
        case 0x1b8b80u: goto label_1b8b80;
        case 0x1b8b84u: goto label_1b8b84;
        case 0x1b8b88u: goto label_1b8b88;
        case 0x1b8b8cu: goto label_1b8b8c;
        case 0x1b8b90u: goto label_1b8b90;
        case 0x1b8b94u: goto label_1b8b94;
        case 0x1b8b98u: goto label_1b8b98;
        case 0x1b8b9cu: goto label_1b8b9c;
        case 0x1b8ba0u: goto label_1b8ba0;
        case 0x1b8ba4u: goto label_1b8ba4;
        case 0x1b8ba8u: goto label_1b8ba8;
        case 0x1b8bacu: goto label_1b8bac;
        case 0x1b8bb0u: goto label_1b8bb0;
        case 0x1b8bb4u: goto label_1b8bb4;
        case 0x1b8bb8u: goto label_1b8bb8;
        case 0x1b8bbcu: goto label_1b8bbc;
        case 0x1b8bc0u: goto label_1b8bc0;
        case 0x1b8bc4u: goto label_1b8bc4;
        case 0x1b8bc8u: goto label_1b8bc8;
        case 0x1b8bccu: goto label_1b8bcc;
        case 0x1b8bd0u: goto label_1b8bd0;
        case 0x1b8bd4u: goto label_1b8bd4;
        case 0x1b8bd8u: goto label_1b8bd8;
        case 0x1b8bdcu: goto label_1b8bdc;
        case 0x1b8be0u: goto label_1b8be0;
        case 0x1b8be4u: goto label_1b8be4;
        case 0x1b8be8u: goto label_1b8be8;
        case 0x1b8becu: goto label_1b8bec;
        case 0x1b8bf0u: goto label_1b8bf0;
        case 0x1b8bf4u: goto label_1b8bf4;
        case 0x1b8bf8u: goto label_1b8bf8;
        case 0x1b8bfcu: goto label_1b8bfc;
        case 0x1b8c00u: goto label_1b8c00;
        case 0x1b8c04u: goto label_1b8c04;
        case 0x1b8c08u: goto label_1b8c08;
        case 0x1b8c0cu: goto label_1b8c0c;
        case 0x1b8c10u: goto label_1b8c10;
        case 0x1b8c14u: goto label_1b8c14;
        case 0x1b8c18u: goto label_1b8c18;
        case 0x1b8c1cu: goto label_1b8c1c;
        case 0x1b8c20u: goto label_1b8c20;
        case 0x1b8c24u: goto label_1b8c24;
        case 0x1b8c28u: goto label_1b8c28;
        case 0x1b8c2cu: goto label_1b8c2c;
        case 0x1b8c30u: goto label_1b8c30;
        case 0x1b8c34u: goto label_1b8c34;
        case 0x1b8c38u: goto label_1b8c38;
        case 0x1b8c3cu: goto label_1b8c3c;
        case 0x1b8c40u: goto label_1b8c40;
        case 0x1b8c44u: goto label_1b8c44;
        case 0x1b8c48u: goto label_1b8c48;
        case 0x1b8c4cu: goto label_1b8c4c;
        case 0x1b8c50u: goto label_1b8c50;
        case 0x1b8c54u: goto label_1b8c54;
        case 0x1b8c58u: goto label_1b8c58;
        case 0x1b8c5cu: goto label_1b8c5c;
        case 0x1b8c60u: goto label_1b8c60;
        case 0x1b8c64u: goto label_1b8c64;
        case 0x1b8c68u: goto label_1b8c68;
        case 0x1b8c6cu: goto label_1b8c6c;
        case 0x1b8c70u: goto label_1b8c70;
        case 0x1b8c74u: goto label_1b8c74;
        case 0x1b8c78u: goto label_1b8c78;
        case 0x1b8c7cu: goto label_1b8c7c;
        case 0x1b8c80u: goto label_1b8c80;
        case 0x1b8c84u: goto label_1b8c84;
        case 0x1b8c88u: goto label_1b8c88;
        case 0x1b8c8cu: goto label_1b8c8c;
        case 0x1b8c90u: goto label_1b8c90;
        case 0x1b8c94u: goto label_1b8c94;
        case 0x1b8c98u: goto label_1b8c98;
        case 0x1b8c9cu: goto label_1b8c9c;
        case 0x1b8ca0u: goto label_1b8ca0;
        case 0x1b8ca4u: goto label_1b8ca4;
        case 0x1b8ca8u: goto label_1b8ca8;
        case 0x1b8cacu: goto label_1b8cac;
        case 0x1b8cb0u: goto label_1b8cb0;
        case 0x1b8cb4u: goto label_1b8cb4;
        case 0x1b8cb8u: goto label_1b8cb8;
        case 0x1b8cbcu: goto label_1b8cbc;
        case 0x1b8cc0u: goto label_1b8cc0;
        case 0x1b8cc4u: goto label_1b8cc4;
        case 0x1b8cc8u: goto label_1b8cc8;
        case 0x1b8cccu: goto label_1b8ccc;
        case 0x1b8cd0u: goto label_1b8cd0;
        case 0x1b8cd4u: goto label_1b8cd4;
        case 0x1b8cd8u: goto label_1b8cd8;
        case 0x1b8cdcu: goto label_1b8cdc;
        case 0x1b8ce0u: goto label_1b8ce0;
        case 0x1b8ce4u: goto label_1b8ce4;
        case 0x1b8ce8u: goto label_1b8ce8;
        case 0x1b8cecu: goto label_1b8cec;
        case 0x1b8cf0u: goto label_1b8cf0;
        case 0x1b8cf4u: goto label_1b8cf4;
        case 0x1b8cf8u: goto label_1b8cf8;
        case 0x1b8cfcu: goto label_1b8cfc;
        case 0x1b8d00u: goto label_1b8d00;
        case 0x1b8d04u: goto label_1b8d04;
        case 0x1b8d08u: goto label_1b8d08;
        case 0x1b8d0cu: goto label_1b8d0c;
        case 0x1b8d10u: goto label_1b8d10;
        case 0x1b8d14u: goto label_1b8d14;
        case 0x1b8d18u: goto label_1b8d18;
        case 0x1b8d1cu: goto label_1b8d1c;
        case 0x1b8d20u: goto label_1b8d20;
        case 0x1b8d24u: goto label_1b8d24;
        case 0x1b8d28u: goto label_1b8d28;
        case 0x1b8d2cu: goto label_1b8d2c;
        case 0x1b8d30u: goto label_1b8d30;
        case 0x1b8d34u: goto label_1b8d34;
        case 0x1b8d38u: goto label_1b8d38;
        case 0x1b8d3cu: goto label_1b8d3c;
        case 0x1b8d40u: goto label_1b8d40;
        case 0x1b8d44u: goto label_1b8d44;
        case 0x1b8d48u: goto label_1b8d48;
        case 0x1b8d4cu: goto label_1b8d4c;
        case 0x1b8d50u: goto label_1b8d50;
        case 0x1b8d54u: goto label_1b8d54;
        case 0x1b8d58u: goto label_1b8d58;
        case 0x1b8d5cu: goto label_1b8d5c;
        case 0x1b8d60u: goto label_1b8d60;
        case 0x1b8d64u: goto label_1b8d64;
        case 0x1b8d68u: goto label_1b8d68;
        case 0x1b8d6cu: goto label_1b8d6c;
        case 0x1b8d70u: goto label_1b8d70;
        case 0x1b8d74u: goto label_1b8d74;
        case 0x1b8d78u: goto label_1b8d78;
        case 0x1b8d7cu: goto label_1b8d7c;
        case 0x1b8d80u: goto label_1b8d80;
        case 0x1b8d84u: goto label_1b8d84;
        case 0x1b8d88u: goto label_1b8d88;
        case 0x1b8d8cu: goto label_1b8d8c;
        case 0x1b8d90u: goto label_1b8d90;
        case 0x1b8d94u: goto label_1b8d94;
        case 0x1b8d98u: goto label_1b8d98;
        case 0x1b8d9cu: goto label_1b8d9c;
        case 0x1b8da0u: goto label_1b8da0;
        case 0x1b8da4u: goto label_1b8da4;
        case 0x1b8da8u: goto label_1b8da8;
        case 0x1b8dacu: goto label_1b8dac;
        case 0x1b8db0u: goto label_1b8db0;
        case 0x1b8db4u: goto label_1b8db4;
        case 0x1b8db8u: goto label_1b8db8;
        case 0x1b8dbcu: goto label_1b8dbc;
        case 0x1b8dc0u: goto label_1b8dc0;
        case 0x1b8dc4u: goto label_1b8dc4;
        case 0x1b8dc8u: goto label_1b8dc8;
        case 0x1b8dccu: goto label_1b8dcc;
        case 0x1b8dd0u: goto label_1b8dd0;
        case 0x1b8dd4u: goto label_1b8dd4;
        case 0x1b8dd8u: goto label_1b8dd8;
        case 0x1b8ddcu: goto label_1b8ddc;
        case 0x1b8de0u: goto label_1b8de0;
        case 0x1b8de4u: goto label_1b8de4;
        case 0x1b8de8u: goto label_1b8de8;
        case 0x1b8decu: goto label_1b8dec;
        case 0x1b8df0u: goto label_1b8df0;
        case 0x1b8df4u: goto label_1b8df4;
        case 0x1b8df8u: goto label_1b8df8;
        case 0x1b8dfcu: goto label_1b8dfc;
        case 0x1b8e00u: goto label_1b8e00;
        case 0x1b8e04u: goto label_1b8e04;
        case 0x1b8e08u: goto label_1b8e08;
        case 0x1b8e0cu: goto label_1b8e0c;
        case 0x1b8e10u: goto label_1b8e10;
        case 0x1b8e14u: goto label_1b8e14;
        case 0x1b8e18u: goto label_1b8e18;
        case 0x1b8e1cu: goto label_1b8e1c;
        case 0x1b8e20u: goto label_1b8e20;
        case 0x1b8e24u: goto label_1b8e24;
        case 0x1b8e28u: goto label_1b8e28;
        case 0x1b8e2cu: goto label_1b8e2c;
        case 0x1b8e30u: goto label_1b8e30;
        case 0x1b8e34u: goto label_1b8e34;
        case 0x1b8e38u: goto label_1b8e38;
        case 0x1b8e3cu: goto label_1b8e3c;
        case 0x1b8e40u: goto label_1b8e40;
        case 0x1b8e44u: goto label_1b8e44;
        case 0x1b8e48u: goto label_1b8e48;
        case 0x1b8e4cu: goto label_1b8e4c;
        case 0x1b8e50u: goto label_1b8e50;
        case 0x1b8e54u: goto label_1b8e54;
        case 0x1b8e58u: goto label_1b8e58;
        case 0x1b8e5cu: goto label_1b8e5c;
        case 0x1b8e60u: goto label_1b8e60;
        case 0x1b8e64u: goto label_1b8e64;
        case 0x1b8e68u: goto label_1b8e68;
        case 0x1b8e6cu: goto label_1b8e6c;
        case 0x1b8e70u: goto label_1b8e70;
        case 0x1b8e74u: goto label_1b8e74;
        case 0x1b8e78u: goto label_1b8e78;
        case 0x1b8e7cu: goto label_1b8e7c;
        case 0x1b8e80u: goto label_1b8e80;
        case 0x1b8e84u: goto label_1b8e84;
        case 0x1b8e88u: goto label_1b8e88;
        case 0x1b8e8cu: goto label_1b8e8c;
        case 0x1b8e90u: goto label_1b8e90;
        case 0x1b8e94u: goto label_1b8e94;
        case 0x1b8e98u: goto label_1b8e98;
        case 0x1b8e9cu: goto label_1b8e9c;
        case 0x1b8ea0u: goto label_1b8ea0;
        case 0x1b8ea4u: goto label_1b8ea4;
        case 0x1b8ea8u: goto label_1b8ea8;
        case 0x1b8eacu: goto label_1b8eac;
        case 0x1b8eb0u: goto label_1b8eb0;
        case 0x1b8eb4u: goto label_1b8eb4;
        case 0x1b8eb8u: goto label_1b8eb8;
        case 0x1b8ebcu: goto label_1b8ebc;
        case 0x1b8ec0u: goto label_1b8ec0;
        case 0x1b8ec4u: goto label_1b8ec4;
        case 0x1b8ec8u: goto label_1b8ec8;
        case 0x1b8eccu: goto label_1b8ecc;
        case 0x1b8ed0u: goto label_1b8ed0;
        case 0x1b8ed4u: goto label_1b8ed4;
        case 0x1b8ed8u: goto label_1b8ed8;
        case 0x1b8edcu: goto label_1b8edc;
        case 0x1b8ee0u: goto label_1b8ee0;
        case 0x1b8ee4u: goto label_1b8ee4;
        case 0x1b8ee8u: goto label_1b8ee8;
        case 0x1b8eecu: goto label_1b8eec;
        case 0x1b8ef0u: goto label_1b8ef0;
        case 0x1b8ef4u: goto label_1b8ef4;
        case 0x1b8ef8u: goto label_1b8ef8;
        case 0x1b8efcu: goto label_1b8efc;
        case 0x1b8f00u: goto label_1b8f00;
        case 0x1b8f04u: goto label_1b8f04;
        case 0x1b8f08u: goto label_1b8f08;
        case 0x1b8f0cu: goto label_1b8f0c;
        case 0x1b8f10u: goto label_1b8f10;
        case 0x1b8f14u: goto label_1b8f14;
        case 0x1b8f18u: goto label_1b8f18;
        case 0x1b8f1cu: goto label_1b8f1c;
        case 0x1b8f20u: goto label_1b8f20;
        case 0x1b8f24u: goto label_1b8f24;
        case 0x1b8f28u: goto label_1b8f28;
        case 0x1b8f2cu: goto label_1b8f2c;
        case 0x1b8f30u: goto label_1b8f30;
        case 0x1b8f34u: goto label_1b8f34;
        case 0x1b8f38u: goto label_1b8f38;
        case 0x1b8f3cu: goto label_1b8f3c;
        case 0x1b8f40u: goto label_1b8f40;
        case 0x1b8f44u: goto label_1b8f44;
        case 0x1b8f48u: goto label_1b8f48;
        case 0x1b8f4cu: goto label_1b8f4c;
        case 0x1b8f50u: goto label_1b8f50;
        case 0x1b8f54u: goto label_1b8f54;
        case 0x1b8f58u: goto label_1b8f58;
        case 0x1b8f5cu: goto label_1b8f5c;
        case 0x1b8f60u: goto label_1b8f60;
        case 0x1b8f64u: goto label_1b8f64;
        case 0x1b8f68u: goto label_1b8f68;
        case 0x1b8f6cu: goto label_1b8f6c;
        case 0x1b8f70u: goto label_1b8f70;
        case 0x1b8f74u: goto label_1b8f74;
        case 0x1b8f78u: goto label_1b8f78;
        case 0x1b8f7cu: goto label_1b8f7c;
        case 0x1b8f80u: goto label_1b8f80;
        case 0x1b8f84u: goto label_1b8f84;
        case 0x1b8f88u: goto label_1b8f88;
        case 0x1b8f8cu: goto label_1b8f8c;
        case 0x1b8f90u: goto label_1b8f90;
        case 0x1b8f94u: goto label_1b8f94;
        case 0x1b8f98u: goto label_1b8f98;
        case 0x1b8f9cu: goto label_1b8f9c;
        case 0x1b8fa0u: goto label_1b8fa0;
        case 0x1b8fa4u: goto label_1b8fa4;
        case 0x1b8fa8u: goto label_1b8fa8;
        case 0x1b8facu: goto label_1b8fac;
        case 0x1b8fb0u: goto label_1b8fb0;
        case 0x1b8fb4u: goto label_1b8fb4;
        case 0x1b8fb8u: goto label_1b8fb8;
        case 0x1b8fbcu: goto label_1b8fbc;
        case 0x1b8fc0u: goto label_1b8fc0;
        case 0x1b8fc4u: goto label_1b8fc4;
        case 0x1b8fc8u: goto label_1b8fc8;
        case 0x1b8fccu: goto label_1b8fcc;
        case 0x1b8fd0u: goto label_1b8fd0;
        case 0x1b8fd4u: goto label_1b8fd4;
        case 0x1b8fd8u: goto label_1b8fd8;
        case 0x1b8fdcu: goto label_1b8fdc;
        case 0x1b8fe0u: goto label_1b8fe0;
        case 0x1b8fe4u: goto label_1b8fe4;
        case 0x1b8fe8u: goto label_1b8fe8;
        case 0x1b8fecu: goto label_1b8fec;
        case 0x1b8ff0u: goto label_1b8ff0;
        case 0x1b8ff4u: goto label_1b8ff4;
        case 0x1b8ff8u: goto label_1b8ff8;
        case 0x1b8ffcu: goto label_1b8ffc;
        case 0x1b9000u: goto label_1b9000;
        case 0x1b9004u: goto label_1b9004;
        case 0x1b9008u: goto label_1b9008;
        case 0x1b900cu: goto label_1b900c;
        case 0x1b9010u: goto label_1b9010;
        case 0x1b9014u: goto label_1b9014;
        case 0x1b9018u: goto label_1b9018;
        case 0x1b901cu: goto label_1b901c;
        case 0x1b9020u: goto label_1b9020;
        case 0x1b9024u: goto label_1b9024;
        case 0x1b9028u: goto label_1b9028;
        case 0x1b902cu: goto label_1b902c;
        case 0x1b9030u: goto label_1b9030;
        case 0x1b9034u: goto label_1b9034;
        case 0x1b9038u: goto label_1b9038;
        case 0x1b903cu: goto label_1b903c;
        case 0x1b9040u: goto label_1b9040;
        case 0x1b9044u: goto label_1b9044;
        case 0x1b9048u: goto label_1b9048;
        case 0x1b904cu: goto label_1b904c;
        case 0x1b9050u: goto label_1b9050;
        case 0x1b9054u: goto label_1b9054;
        case 0x1b9058u: goto label_1b9058;
        case 0x1b905cu: goto label_1b905c;
        case 0x1b9060u: goto label_1b9060;
        case 0x1b9064u: goto label_1b9064;
        case 0x1b9068u: goto label_1b9068;
        case 0x1b906cu: goto label_1b906c;
        case 0x1b9070u: goto label_1b9070;
        case 0x1b9074u: goto label_1b9074;
        case 0x1b9078u: goto label_1b9078;
        case 0x1b907cu: goto label_1b907c;
        case 0x1b9080u: goto label_1b9080;
        case 0x1b9084u: goto label_1b9084;
        case 0x1b9088u: goto label_1b9088;
        case 0x1b908cu: goto label_1b908c;
        case 0x1b9090u: goto label_1b9090;
        case 0x1b9094u: goto label_1b9094;
        case 0x1b9098u: goto label_1b9098;
        case 0x1b909cu: goto label_1b909c;
        case 0x1b90a0u: goto label_1b90a0;
        case 0x1b90a4u: goto label_1b90a4;
        case 0x1b90a8u: goto label_1b90a8;
        case 0x1b90acu: goto label_1b90ac;
        case 0x1b90b0u: goto label_1b90b0;
        case 0x1b90b4u: goto label_1b90b4;
        case 0x1b90b8u: goto label_1b90b8;
        case 0x1b90bcu: goto label_1b90bc;
        case 0x1b90c0u: goto label_1b90c0;
        case 0x1b90c4u: goto label_1b90c4;
        case 0x1b90c8u: goto label_1b90c8;
        default: break;
    }

    ctx->pc = 0x1b8270u;

label_1b8270:
    // 0x1b8270: 0x27bdfce0  addiu       $sp, $sp, -0x320
    ctx->pc = 0x1b8270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966496));
label_1b8274:
    // 0x1b8274: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b8274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1b8278:
    // 0x1b8278: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b8278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b827c:
    // 0x1b827c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b827cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b8280:
    // 0x1b8280: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b8280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b8284:
    // 0x1b8284: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x1b8284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_1b8288:
    // 0x1b8288: 0x1060038a  beqz        $v1, . + 4 + (0x38A << 2)
label_1b828c:
    if (ctx->pc == 0x1B828Cu) {
        ctx->pc = 0x1B828Cu;
            // 0x1b828c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8290u;
        goto label_1b8290;
    }
    ctx->pc = 0x1B8288u;
    {
        const bool branch_taken_0x1b8288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B828Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8288u;
            // 0x1b828c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8288) {
            ctx->pc = 0x1B90B4u;
            goto label_1b90b4;
        }
    }
    ctx->pc = 0x1B8290u;
label_1b8290:
    // 0x1b8290: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1b8290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1b8294:
    // 0x1b8294: 0xc0a0ed8  jal         func_283B60
label_1b8298:
    if (ctx->pc == 0x1B8298u) {
        ctx->pc = 0x1B8298u;
            // 0x1b8298: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B829Cu;
        goto label_1b829c;
    }
    ctx->pc = 0x1B8294u;
    SET_GPR_U32(ctx, 31, 0x1B829Cu);
    ctx->pc = 0x1B8298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8294u;
            // 0x1b8298: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B829Cu; }
        if (ctx->pc != 0x1B829Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B829Cu; }
        if (ctx->pc != 0x1B829Cu) { return; }
    }
    ctx->pc = 0x1B829Cu;
label_1b829c:
    // 0x1b829c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b829cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b82a0:
    // 0x1b82a0: 0x12000384  beqz        $s0, . + 4 + (0x384 << 2)
label_1b82a4:
    if (ctx->pc == 0x1B82A4u) {
        ctx->pc = 0x1B82A8u;
        goto label_1b82a8;
    }
    ctx->pc = 0x1B82A0u;
    {
        const bool branch_taken_0x1b82a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b82a0) {
            ctx->pc = 0x1B90B4u;
            goto label_1b90b4;
        }
    }
    ctx->pc = 0x1B82A8u;
label_1b82a8:
    // 0x1b82a8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1b82a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b82ac:
    // 0x1b82ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b82acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b82b0:
    // 0x1b82b0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b82b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b82b4:
    // 0x1b82b4: 0x320f809  jalr        $t9
label_1b82b8:
    if (ctx->pc == 0x1B82B8u) {
        ctx->pc = 0x1B82B8u;
            // 0x1b82b8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1B82BCu;
        goto label_1b82bc;
    }
    ctx->pc = 0x1B82B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B82BCu);
        ctx->pc = 0x1B82B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B82B4u;
            // 0x1b82b8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B82BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B82BCu; }
            if (ctx->pc != 0x1B82BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1B82BCu;
label_1b82bc:
    // 0x1b82bc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1b82bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b82c0:
    // 0x1b82c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b82c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b82c4:
    // 0x1b82c4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b82c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b82c8:
    // 0x1b82c8: 0x320f809  jalr        $t9
label_1b82cc:
    if (ctx->pc == 0x1B82CCu) {
        ctx->pc = 0x1B82CCu;
            // 0x1b82cc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1B82D0u;
        goto label_1b82d0;
    }
    ctx->pc = 0x1B82C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B82D0u);
        ctx->pc = 0x1B82CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B82C8u;
            // 0x1b82cc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B82D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B82D0u; }
            if (ctx->pc != 0x1B82D0u) { return; }
        }
        }
    }
    ctx->pc = 0x1B82D0u;
label_1b82d0:
    // 0x1b82d0: 0xc6010110  lwc1        $f1, 0x110($s0)
    ctx->pc = 0x1b82d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b82d4:
    // 0x1b82d4: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1b82d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b82d8:
    // 0x1b82d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b82d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b82dc:
    // 0x1b82dc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1b82dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1b82e0:
    // 0x1b82e0: 0x82440060  lb          $a0, 0x60($s2)
    ctx->pc = 0x1b82e0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 96)));
label_1b82e4:
    // 0x1b82e4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1b82e8:
    if (ctx->pc == 0x1B82E8u) {
        ctx->pc = 0x1B82E8u;
            // 0x1b82e8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B82ECu;
        goto label_1b82ec;
    }
    ctx->pc = 0x1B82E4u;
    {
        const bool branch_taken_0x1b82e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B82E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B82E4u;
            // 0x1b82e8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b82e4) {
            ctx->pc = 0x1B82F4u;
            goto label_1b82f4;
        }
    }
    ctx->pc = 0x1B82ECu;
label_1b82ec:
    // 0x1b82ec: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
label_1b82f0:
    if (ctx->pc == 0x1B82F0u) {
        ctx->pc = 0x1B82F4u;
        goto label_1b82f4;
    }
    ctx->pc = 0x1B82ECu;
    {
        const bool branch_taken_0x1b82ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b82ec) {
            ctx->pc = 0x1B8314u;
            goto label_1b8314;
        }
    }
    ctx->pc = 0x1B82F4u;
label_1b82f4:
    // 0x1b82f4: 0x86430044  lh          $v1, 0x44($s2)
    ctx->pc = 0x1b82f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 68)));
label_1b82f8:
    // 0x1b82f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b82f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b82fc:
    // 0x1b82fc: 0xa6430044  sh          $v1, 0x44($s2)
    ctx->pc = 0x1b82fcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 68), (uint16_t)GPR_U32(ctx, 3));
label_1b8300:
    // 0x1b8300: 0x86430044  lh          $v1, 0x44($s2)
    ctx->pc = 0x1b8300u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 68)));
label_1b8304:
    // 0x1b8304: 0x28630010  slti        $v1, $v1, 0x10
    ctx->pc = 0x1b8304u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
label_1b8308:
    // 0x1b8308: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1b830c:
    if (ctx->pc == 0x1B830Cu) {
        ctx->pc = 0x1B8310u;
        goto label_1b8310;
    }
    ctx->pc = 0x1B8308u;
    {
        const bool branch_taken_0x1b8308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8308) {
            ctx->pc = 0x1B8314u;
            goto label_1b8314;
        }
    }
    ctx->pc = 0x1B8310u;
label_1b8310:
    // 0x1b8310: 0xa6400044  sh          $zero, 0x44($s2)
    ctx->pc = 0x1b8310u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 68), (uint16_t)GPR_U32(ctx, 0));
label_1b8314:
    // 0x1b8314: 0x86430050  lh          $v1, 0x50($s2)
    ctx->pc = 0x1b8314u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 80)));
label_1b8318:
    // 0x1b8318: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1b831c:
    if (ctx->pc == 0x1B831Cu) {
        ctx->pc = 0x1B8320u;
        goto label_1b8320;
    }
    ctx->pc = 0x1B8318u;
    {
        const bool branch_taken_0x1b8318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8318) {
            ctx->pc = 0x1B8334u;
            goto label_1b8334;
        }
    }
    ctx->pc = 0x1B8320u;
label_1b8320:
    // 0x1b8320: 0x86430052  lh          $v1, 0x52($s2)
    ctx->pc = 0x1b8320u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 82)));
label_1b8324:
    // 0x1b8324: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_1b8328:
    if (ctx->pc == 0x1B8328u) {
        ctx->pc = 0x1B832Cu;
        goto label_1b832c;
    }
    ctx->pc = 0x1B8324u;
    {
        const bool branch_taken_0x1b8324 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1b8324) {
            ctx->pc = 0x1B8334u;
            goto label_1b8334;
        }
    }
    ctx->pc = 0x1B832Cu;
label_1b832c:
    // 0x1b832c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b832cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1b8330:
    // 0x1b8330: 0xa6430052  sh          $v1, 0x52($s2)
    ctx->pc = 0x1b8330u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 82), (uint16_t)GPR_U32(ctx, 3));
label_1b8334:
    // 0x1b8334: 0x8e44007c  lw          $a0, 0x7C($s2)
    ctx->pc = 0x1b8334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_1b8338:
    // 0x1b8338: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b8338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b833c:
    // 0x1b833c: 0x14830099  bne         $a0, $v1, . + 4 + (0x99 << 2)
label_1b8340:
    if (ctx->pc == 0x1B8340u) {
        ctx->pc = 0x1B8344u;
        goto label_1b8344;
    }
    ctx->pc = 0x1B833Cu;
    {
        const bool branch_taken_0x1b833c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b833c) {
            ctx->pc = 0x1B85A4u;
            goto label_1b85a4;
        }
    }
    ctx->pc = 0x1B8344u;
label_1b8344:
    // 0x1b8344: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1b8344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8348:
    // 0x1b8348: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1b8348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_1b834c:
    // 0x1b834c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b834cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b8350:
    // 0x1b8350: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1b8350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1b8354:
    // 0x1b8354: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1b8354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1b8358:
    // 0x1b8358: 0x2484f3b0  addiu       $a0, $a0, -0xC50
    ctx->pc = 0x1b8358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964144));
label_1b835c:
    // 0x1b835c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b835cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b8360:
    // 0x1b8360: 0x24050281  addiu       $a1, $zero, 0x281
    ctx->pc = 0x1b8360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 641));
label_1b8364:
    // 0x1b8364: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b8364u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b8368:
    // 0x1b8368: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1b8368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1b836c:
    // 0x1b836c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1b836cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8370:
    // 0x1b8370: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b8370u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b8374:
    // 0x1b8374: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1b8374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1b8378:
    // 0x1b8378: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1b8378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b837c:
    // 0x1b837c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b837cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b8380:
    // 0x1b8380: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1b8380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1b8384:
    // 0x1b8384: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1b8384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8388:
    // 0x1b8388: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b8388u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b838c:
    // 0x1b838c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1b838cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1b8390:
    // 0x1b8390: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1b8390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8394:
    // 0x1b8394: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b8394u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b8398:
    // 0x1b8398: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1b8398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1b839c:
    // 0x1b839c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1b839cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b83a0:
    // 0x1b83a0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b83a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b83a4:
    // 0x1b83a4: 0xac20f3d4  sw          $zero, -0xC2C($at)
    ctx->pc = 0x1b83a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964180), GPR_U32(ctx, 0));
label_1b83a8:
    // 0x1b83a8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1b83a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1b83ac:
    // 0x1b83ac: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x1b83acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_1b83b0:
    // 0x1b83b0: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x1b83b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_1b83b4:
    // 0x1b83b4: 0xac20f3cc  sw          $zero, -0xC34($at)
    ctx->pc = 0x1b83b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964172), GPR_U32(ctx, 0));
label_1b83b8:
    // 0x1b83b8: 0xc04e704  jal         func_139C10
label_1b83bc:
    if (ctx->pc == 0x1B83BCu) {
        ctx->pc = 0x1B83BCu;
            // 0x1b83bc: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->pc = 0x1B83C0u;
        goto label_1b83c0;
    }
    ctx->pc = 0x1B83B8u;
    SET_GPR_U32(ctx, 31, 0x1B83C0u);
    ctx->pc = 0x1B83BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B83B8u;
            // 0x1b83bc: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B83C0u; }
        if (ctx->pc != 0x1B83C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B83C0u; }
        if (ctx->pc != 0x1B83C0u) { return; }
    }
    ctx->pc = 0x1B83C0u;
label_1b83c0:
    // 0x1b83c0: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1b83c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1b83c4:
    // 0x1b83c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b83c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b83c8:
    // 0x1b83c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b83c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b83cc:
    // 0x1b83cc: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1b83ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1b83d0:
    // 0x1b83d0: 0xc0b1ed4  jal         func_2C7B50
label_1b83d4:
    if (ctx->pc == 0x1B83D4u) {
        ctx->pc = 0x1B83D4u;
            // 0x1b83d4: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x1B83D8u;
        goto label_1b83d8;
    }
    ctx->pc = 0x1B83D0u;
    SET_GPR_U32(ctx, 31, 0x1B83D8u);
    ctx->pc = 0x1B83D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B83D0u;
            // 0x1b83d4: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7B50u;
    if (runtime->hasFunction(0x2C7B50u)) {
        auto targetFn = runtime->lookupFunction(0x2C7B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B83D8u; }
        if (ctx->pc != 0x1B83D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColPoly__6CSceneFP6CCPolyR9mgVu0FBOXi_0x2c7b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B83D8u; }
        if (ctx->pc != 0x1B83D8u) { return; }
    }
    ctx->pc = 0x1B83D8u;
label_1b83d8:
    // 0x1b83d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b83d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b83dc:
    // 0x1b83dc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b83dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b83e0:
    // 0x1b83e0: 0xc041c5c  jal         func_107170
label_1b83e4:
    if (ctx->pc == 0x1B83E4u) {
        ctx->pc = 0x1B83E4u;
            // 0x1b83e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B83E8u;
        goto label_1b83e8;
    }
    ctx->pc = 0x1B83E0u;
    SET_GPR_U32(ctx, 31, 0x1B83E8u);
    ctx->pc = 0x1B83E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B83E0u;
            // 0x1b83e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B83E8u; }
        if (ctx->pc != 0x1B83E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B83E8u; }
        if (ctx->pc != 0x1B83E8u) { return; }
    }
    ctx->pc = 0x1B83E8u;
label_1b83e8:
    // 0x1b83e8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1b83e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1b83ec:
    // 0x1b83ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b83ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b83f0:
    // 0x1b83f0: 0xc041c38  jal         func_1070E0
label_1b83f4:
    if (ctx->pc == 0x1B83F4u) {
        ctx->pc = 0x1B83F4u;
            // 0x1b83f4: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x1B83F8u;
        goto label_1b83f8;
    }
    ctx->pc = 0x1B83F0u;
    SET_GPR_U32(ctx, 31, 0x1B83F8u);
    ctx->pc = 0x1B83F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B83F0u;
            // 0x1b83f4: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B83F8u; }
        if (ctx->pc != 0x1B83F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B83F8u; }
        if (ctx->pc != 0x1B83F8u) { return; }
    }
    ctx->pc = 0x1B83F8u;
label_1b83f8:
    // 0x1b83f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b83f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b83fc:
    // 0x1b83fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b83fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b8400:
    // 0x1b8400: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1b8400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b8404:
    // 0x1b8404: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x1b8404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1b8408:
    // 0x1b8408: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x1b8408u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1b840c:
    // 0x1b840c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1b840cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8410:
    // 0x1b8410: 0xc053794  jal         func_14DE50
label_1b8414:
    if (ctx->pc == 0x1B8414u) {
        ctx->pc = 0x1B8414u;
            // 0x1b8414: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1B8418u;
        goto label_1b8418;
    }
    ctx->pc = 0x1B8410u;
    SET_GPR_U32(ctx, 31, 0x1B8418u);
    ctx->pc = 0x1B8414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8410u;
            // 0x1b8414: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8418u; }
        if (ctx->pc != 0x1B8418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8418u; }
        if (ctx->pc != 0x1B8418u) { return; }
    }
    ctx->pc = 0x1B8418u;
label_1b8418:
    // 0x1b8418: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_1b841c:
    if (ctx->pc == 0x1B841Cu) {
        ctx->pc = 0x1B841Cu;
            // 0x1b841c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8420u;
        goto label_1b8420;
    }
    ctx->pc = 0x1B8418u;
    {
        const bool branch_taken_0x1b8418 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B841Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8418u;
            // 0x1b841c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8418) {
            ctx->pc = 0x1B8458u;
            goto label_1b8458;
        }
    }
    ctx->pc = 0x1B8420u;
label_1b8420:
    // 0x1b8420: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1b8420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8424:
    // 0x1b8424: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x1b8424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
label_1b8428:
    // 0x1b8428: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b8428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1b842c:
    // 0x1b842c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b842cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b8430:
    // 0x1b8430: 0x0  nop
    ctx->pc = 0x1b8430u;
    // NOP
label_1b8434:
    // 0x1b8434: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1b8434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1b8438:
    // 0x1b8438: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1b8438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b843c:
    // 0x1b843c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1b843cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1b8440:
    // 0x1b8440: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x1b8440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8444:
    // 0x1b8444: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b8444u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b8448:
    // 0x1b8448: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x1b8448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_1b844c:
    // 0x1b844c: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x1b844cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8450:
    // 0x1b8450: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b8450u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b8454:
    // 0x1b8454: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x1b8454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_1b8458:
    // 0x1b8458: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b8458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b845c:
    // 0x1b845c: 0xc041c38  jal         func_1070E0
label_1b8460:
    if (ctx->pc == 0x1B8460u) {
        ctx->pc = 0x1B8460u;
            // 0x1b8460: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x1B8464u;
        goto label_1b8464;
    }
    ctx->pc = 0x1B845Cu;
    SET_GPR_U32(ctx, 31, 0x1B8464u);
    ctx->pc = 0x1B8460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B845Cu;
            // 0x1b8460: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8464u; }
        if (ctx->pc != 0x1B8464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8464u; }
        if (ctx->pc != 0x1B8464u) { return; }
    }
    ctx->pc = 0x1B8464u;
label_1b8464:
    // 0x1b8464: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x1b8464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8468:
    // 0x1b8468: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1b8468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
label_1b846c:
    // 0x1b846c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b846cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8470:
    // 0x1b8470: 0x0  nop
    ctx->pc = 0x1b8470u;
    // NOP
label_1b8474:
    // 0x1b8474: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b8474u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8478:
    // 0x1b8478: 0x0  nop
    ctx->pc = 0x1b8478u;
    // NOP
label_1b847c:
    // 0x1b847c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1b8480:
    if (ctx->pc == 0x1B8480u) {
        ctx->pc = 0x1B8480u;
            // 0x1b8480: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1B8484u;
        goto label_1b8484;
    }
    ctx->pc = 0x1B847Cu;
    {
        const bool branch_taken_0x1b847c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B847Cu;
            // 0x1b8480: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b847c) {
            ctx->pc = 0x1B849Cu;
            goto label_1b849c;
        }
    }
    ctx->pc = 0x1B8484u;
label_1b8484:
    // 0x1b8484: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1b8484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_1b8488:
    // 0x1b8488: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b8488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1b848c:
    // 0x1b848c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b848cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8490:
    // 0x1b8490: 0x0  nop
    ctx->pc = 0x1b8490u;
    // NOP
label_1b8494:
    // 0x1b8494: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b8494u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b8498:
    // 0x1b8498: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x1b8498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_1b849c:
    // 0x1b849c: 0xc041c5c  jal         func_107170
label_1b84a0:
    if (ctx->pc == 0x1B84A0u) {
        ctx->pc = 0x1B84A0u;
            // 0x1b84a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B84A4u;
        goto label_1b84a4;
    }
    ctx->pc = 0x1B849Cu;
    SET_GPR_U32(ctx, 31, 0x1B84A4u);
    ctx->pc = 0x1B84A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B849Cu;
            // 0x1b84a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B84A4u; }
        if (ctx->pc != 0x1B84A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B84A4u; }
        if (ctx->pc != 0x1B84A4u) { return; }
    }
    ctx->pc = 0x1B84A4u;
label_1b84a4:
    // 0x1b84a4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1b84a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1b84a8:
    // 0x1b84a8: 0xc041c5c  jal         func_107170
label_1b84ac:
    if (ctx->pc == 0x1B84ACu) {
        ctx->pc = 0x1B84ACu;
            // 0x1b84ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B84B0u;
        goto label_1b84b0;
    }
    ctx->pc = 0x1B84A8u;
    SET_GPR_U32(ctx, 31, 0x1B84B0u);
    ctx->pc = 0x1B84ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B84A8u;
            // 0x1b84ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B84B0u; }
        if (ctx->pc != 0x1B84B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B84B0u; }
        if (ctx->pc != 0x1B84B0u) { return; }
    }
    ctx->pc = 0x1B84B0u;
label_1b84b0:
    // 0x1b84b0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1b84b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1b84b4:
    // 0x1b84b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b84b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b84b8:
    // 0x1b84b8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b84b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b84bc:
    // 0x1b84bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b84bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b84c0:
    // 0x1b84c0: 0xc7a30064  lwc1        $f3, 0x64($sp)
    ctx->pc = 0x1b84c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b84c4:
    // 0x1b84c4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1b84c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b84c8:
    // 0x1b84c8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1b84c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1b84cc:
    // 0x1b84cc: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x1b84ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1b84d0:
    // 0x1b84d0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1b84d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b84d4:
    // 0x1b84d4: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x1b84d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1b84d8:
    // 0x1b84d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b84d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b84dc:
    // 0x1b84dc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1b84dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b84e0:
    // 0x1b84e0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b84e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b84e4:
    // 0x1b84e4: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1b84e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1b84e8:
    // 0x1b84e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b84e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b84ec:
    // 0x1b84ec: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x1b84ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1b84f0:
    // 0x1b84f0: 0xc053794  jal         func_14DE50
label_1b84f4:
    if (ctx->pc == 0x1B84F4u) {
        ctx->pc = 0x1B84F4u;
            // 0x1b84f4: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->pc = 0x1B84F8u;
        goto label_1b84f8;
    }
    ctx->pc = 0x1B84F0u;
    SET_GPR_U32(ctx, 31, 0x1B84F8u);
    ctx->pc = 0x1B84F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B84F0u;
            // 0x1b84f4: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B84F8u; }
        if (ctx->pc != 0x1B84F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B84F8u; }
        if (ctx->pc != 0x1B84F8u) { return; }
    }
    ctx->pc = 0x1B84F8u;
label_1b84f8:
    // 0x1b84f8: 0x4400021  bltz        $v0, . + 4 + (0x21 << 2)
label_1b84fc:
    if (ctx->pc == 0x1B84FCu) {
        ctx->pc = 0x1B84FCu;
            // 0x1b84fc: 0x27a50084  addiu       $a1, $sp, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
        ctx->pc = 0x1B8500u;
        goto label_1b8500;
    }
    ctx->pc = 0x1B84F8u;
    {
        const bool branch_taken_0x1b84f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B84FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B84F8u;
            // 0x1b84fc: 0x27a50084  addiu       $a1, $sp, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b84f8) {
            ctx->pc = 0x1B8580u;
            goto label_1b8580;
        }
    }
    ctx->pc = 0x1B8500u;
label_1b8500:
    // 0x1b8500: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b8500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1b8504:
    // 0x1b8504: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x1b8504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b8508:
    // 0x1b8508: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1b8508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b850c:
    // 0x1b850c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b850cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8510:
    // 0x1b8510: 0x0  nop
    ctx->pc = 0x1b8510u;
    // NOP
label_1b8514:
    // 0x1b8514: 0x460110c1  sub.s       $f3, $f2, $f1
    ctx->pc = 0x1b8514u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1b8518:
    // 0x1b8518: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1b8518u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b851c:
    // 0x1b851c: 0x0  nop
    ctx->pc = 0x1b851cu;
    // NOP
label_1b8520:
    // 0x1b8520: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_1b8524:
    if (ctx->pc == 0x1B8524u) {
        ctx->pc = 0x1B8524u;
            // 0x1b8524: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B8528u;
        goto label_1b8528;
    }
    ctx->pc = 0x1B8520u;
    {
        const bool branch_taken_0x1b8520 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8520u;
            // 0x1b8524: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8520) {
            ctx->pc = 0x1B8580u;
            goto label_1b8580;
        }
    }
    ctx->pc = 0x1B8528u;
label_1b8528:
    // 0x1b8528: 0x3c03bf19  lui         $v1, 0xBF19
    ctx->pc = 0x1b8528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48921 << 16));
label_1b852c:
    // 0x1b852c: 0xa6440050  sh          $a0, 0x50($s2)
    ctx->pc = 0x1b852cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 80), (uint16_t)GPR_U32(ctx, 4));
label_1b8530:
    // 0x1b8530: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b8530u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8534:
    // 0x1b8534: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x1b8534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8538:
    // 0x1b8538: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1b8538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_1b853c:
    // 0x1b853c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b853cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b8540:
    // 0x1b8540: 0x0  nop
    ctx->pc = 0x1b8540u;
    // NOP
label_1b8544:
    // 0x1b8544: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1b8544u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8548:
    // 0x1b8548: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x1b8548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1b854c:
    // 0x1b854c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1b8550:
    if (ctx->pc == 0x1B8550u) {
        ctx->pc = 0x1B8550u;
            // 0x1b8550: 0xe6400014  swc1        $f0, 0x14($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
        ctx->pc = 0x1B8554u;
        goto label_1b8554;
    }
    ctx->pc = 0x1B854Cu;
    {
        const bool branch_taken_0x1b854c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B854Cu;
            // 0x1b8550: 0xe6400014  swc1        $f0, 0x14($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b854c) {
            ctx->pc = 0x1B855Cu;
            goto label_1b855c;
        }
    }
    ctx->pc = 0x1B8554u;
label_1b8554:
    // 0x1b8554: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1b8554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8558:
    // 0x1b8558: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1b8558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1b855c:
    // 0x1b855c: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x1b855cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8560:
    // 0x1b8560: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b8560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1b8564:
    // 0x1b8564: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b8564u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8568:
    // 0x1b8568: 0x0  nop
    ctx->pc = 0x1b8568u;
    // NOP
label_1b856c:
    // 0x1b856c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b856cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8570:
    // 0x1b8570: 0x0  nop
    ctx->pc = 0x1b8570u;
    // NOP
label_1b8574:
    // 0x1b8574: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b8578:
    if (ctx->pc == 0x1B8578u) {
        ctx->pc = 0x1B8578u;
            // 0x1b8578: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1B857Cu;
        goto label_1b857c;
    }
    ctx->pc = 0x1B8574u;
    {
        const bool branch_taken_0x1b8574 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8574u;
            // 0x1b8578: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8574) {
            ctx->pc = 0x1B8580u;
            goto label_1b8580;
        }
    }
    ctx->pc = 0x1B857Cu;
label_1b857c:
    // 0x1b857c: 0xae43007c  sw          $v1, 0x7C($s2)
    ctx->pc = 0x1b857cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 3));
label_1b8580:
    // 0x1b8580: 0x86430040  lh          $v1, 0x40($s2)
    ctx->pc = 0x1b8580u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
label_1b8584:
    // 0x1b8584: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b8584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1b8588:
    // 0x1b8588: 0xa6430040  sh          $v1, 0x40($s2)
    ctx->pc = 0x1b8588u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 64), (uint16_t)GPR_U32(ctx, 3));
label_1b858c:
    // 0x1b858c: 0x86430040  lh          $v1, 0x40($s2)
    ctx->pc = 0x1b858cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
label_1b8590:
    // 0x1b8590: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
label_1b8594:
    if (ctx->pc == 0x1B8594u) {
        ctx->pc = 0x1B8594u;
            // 0x1b8594: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1B8598u;
        goto label_1b8598;
    }
    ctx->pc = 0x1B8590u;
    {
        const bool branch_taken_0x1b8590 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1B8594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8590u;
            // 0x1b8594: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8590) {
            ctx->pc = 0x1B85A4u;
            goto label_1b85a4;
        }
    }
    ctx->pc = 0x1B8598u;
label_1b8598:
    // 0x1b8598: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1b8598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b859c:
    // 0x1b859c: 0xae44007c  sw          $a0, 0x7C($s2)
    ctx->pc = 0x1b859cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 4));
label_1b85a0:
    // 0x1b85a0: 0xa6430042  sh          $v1, 0x42($s2)
    ctx->pc = 0x1b85a0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 66), (uint16_t)GPR_U32(ctx, 3));
label_1b85a4:
    // 0x1b85a4: 0x8e44007c  lw          $a0, 0x7C($s2)
    ctx->pc = 0x1b85a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_1b85a8:
    // 0x1b85a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b85a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b85ac:
    // 0x1b85ac: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
label_1b85b0:
    if (ctx->pc == 0x1B85B0u) {
        ctx->pc = 0x1B85B4u;
        goto label_1b85b4;
    }
    ctx->pc = 0x1B85ACu;
    {
        const bool branch_taken_0x1b85ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b85ac) {
            ctx->pc = 0x1B85E0u;
            goto label_1b85e0;
        }
    }
    ctx->pc = 0x1B85B4u;
label_1b85b4:
    // 0x1b85b4: 0x86430042  lh          $v1, 0x42($s2)
    ctx->pc = 0x1b85b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 66)));
label_1b85b8:
    // 0x1b85b8: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_1b85bc:
    if (ctx->pc == 0x1B85BCu) {
        ctx->pc = 0x1B85C0u;
        goto label_1b85c0;
    }
    ctx->pc = 0x1B85B8u;
    {
        const bool branch_taken_0x1b85b8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1b85b8) {
            ctx->pc = 0x1B85C8u;
            goto label_1b85c8;
        }
    }
    ctx->pc = 0x1B85C0u;
label_1b85c0:
    // 0x1b85c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b85c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1b85c4:
    // 0x1b85c4: 0xa6430042  sh          $v1, 0x42($s2)
    ctx->pc = 0x1b85c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 66), (uint16_t)GPR_U32(ctx, 3));
label_1b85c8:
    // 0x1b85c8: 0x86430042  lh          $v1, 0x42($s2)
    ctx->pc = 0x1b85c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 66)));
label_1b85cc:
    // 0x1b85cc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1b85d0:
    if (ctx->pc == 0x1B85D0u) {
        ctx->pc = 0x1B85D0u;
            // 0x1b85d0: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x1B85D4u;
        goto label_1b85d4;
    }
    ctx->pc = 0x1B85CCu;
    {
        const bool branch_taken_0x1b85cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B85D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B85CCu;
            // 0x1b85d0: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b85cc) {
            ctx->pc = 0x1B85E0u;
            goto label_1b85e0;
        }
    }
    ctx->pc = 0x1B85D4u;
label_1b85d4:
    // 0x1b85d4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1b85d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b85d8:
    // 0x1b85d8: 0xa6440042  sh          $a0, 0x42($s2)
    ctx->pc = 0x1b85d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 66), (uint16_t)GPR_U32(ctx, 4));
label_1b85dc:
    // 0x1b85dc: 0xae43007c  sw          $v1, 0x7C($s2)
    ctx->pc = 0x1b85dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 3));
label_1b85e0:
    // 0x1b85e0: 0x8e44007c  lw          $a0, 0x7C($s2)
    ctx->pc = 0x1b85e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_1b85e4:
    // 0x1b85e4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1b85e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b85e8:
    // 0x1b85e8: 0x1483001a  bne         $a0, $v1, . + 4 + (0x1A << 2)
label_1b85ec:
    if (ctx->pc == 0x1B85ECu) {
        ctx->pc = 0x1B85F0u;
        goto label_1b85f0;
    }
    ctx->pc = 0x1B85E8u;
    {
        const bool branch_taken_0x1b85e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b85e8) {
            ctx->pc = 0x1B8654u;
            goto label_1b8654;
        }
    }
    ctx->pc = 0x1B85F0u;
label_1b85f0:
    // 0x1b85f0: 0x86440042  lh          $a0, 0x42($s2)
    ctx->pc = 0x1b85f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 66)));
label_1b85f4:
    // 0x1b85f4: 0x3c034088  lui         $v1, 0x4088
    ctx->pc = 0x1b85f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16520 << 16));
label_1b85f8:
    // 0x1b85f8: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x1b85f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_1b85fc:
    // 0x1b85fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b85fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8600:
    // 0x1b8600: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1b8600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1b8604:
    // 0x1b8604: 0xa6430042  sh          $v1, 0x42($s2)
    ctx->pc = 0x1b8604u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 66), (uint16_t)GPR_U32(ctx, 3));
label_1b8608:
    // 0x1b8608: 0xc6410070  lwc1        $f1, 0x70($s2)
    ctx->pc = 0x1b8608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b860c:
    // 0x1b860c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b860cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b8610:
    // 0x1b8610: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x1b8610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
label_1b8614:
    // 0x1b8614: 0x86430042  lh          $v1, 0x42($s2)
    ctx->pc = 0x1b8614u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 66)));
label_1b8618:
    // 0x1b8618: 0x1c60000e  bgtz        $v1, . + 4 + (0xE << 2)
label_1b861c:
    if (ctx->pc == 0x1B861Cu) {
        ctx->pc = 0x1B8620u;
        goto label_1b8620;
    }
    ctx->pc = 0x1B8618u;
    {
        const bool branch_taken_0x1b8618 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1b8618) {
            ctx->pc = 0x1B8654u;
            goto label_1b8654;
        }
    }
    ctx->pc = 0x1B8620u;
label_1b8620:
    // 0x1b8620: 0xae40007c  sw          $zero, 0x7C($s2)
    ctx->pc = 0x1b8620u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
label_1b8624:
    // 0x1b8624: 0x82440074  lb          $a0, 0x74($s2)
    ctx->pc = 0x1b8624u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_1b8628:
    // 0x1b8628: 0x480000a  bltz        $a0, . + 4 + (0xA << 2)
label_1b862c:
    if (ctx->pc == 0x1B862Cu) {
        ctx->pc = 0x1B862Cu;
            // 0x1b862c: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->pc = 0x1B8630u;
        goto label_1b8630;
    }
    ctx->pc = 0x1B8628u;
    {
        const bool branch_taken_0x1b8628 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1B862Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8628u;
            // 0x1b862c: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8628) {
            ctx->pc = 0x1B8654u;
            goto label_1b8654;
        }
    }
    ctx->pc = 0x1B8630u;
label_1b8630:
    // 0x1b8630: 0x3c0201eb  lui         $v0, 0x1EB
    ctx->pc = 0x1b8630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)491 << 16));
label_1b8634:
    // 0x1b8634: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b8634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b8638:
    // 0x1b8638: 0x2442e190  addiu       $v0, $v0, -0x1E70
    ctx->pc = 0x1b8638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959504));
label_1b863c:
    // 0x1b863c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1b863cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1b8640:
    // 0x1b8640: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8644:
    // 0x1b8644: 0xc0708f0  jal         func_1C23C0
label_1b8648:
    if (ctx->pc == 0x1B8648u) {
        ctx->pc = 0x1B8648u;
            // 0x1b8648: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1B864Cu;
        goto label_1b864c;
    }
    ctx->pc = 0x1B8644u;
    SET_GPR_U32(ctx, 31, 0x1B864Cu);
    ctx->pc = 0x1B8648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8644u;
            // 0x1b8648: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C23C0u;
    if (runtime->hasFunction(0x1C23C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C23C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B864Cu; }
        if (ctx->pc != 0x1B864Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMode__10CAfterWireFi_0x1c23c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B864Cu; }
        if (ctx->pc != 0x1B864Cu) { return; }
    }
    ctx->pc = 0x1B864Cu;
label_1b864c:
    // 0x1b864c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b864cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b8650:
    // 0x1b8650: 0xa2430074  sb          $v1, 0x74($s2)
    ctx->pc = 0x1b8650u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 3));
label_1b8654:
    // 0x1b8654: 0x8e44007c  lw          $a0, 0x7C($s2)
    ctx->pc = 0x1b8654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_1b8658:
    // 0x1b8658: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1b8658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b865c:
    // 0x1b865c: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
label_1b8660:
    if (ctx->pc == 0x1B8660u) {
        ctx->pc = 0x1B8660u;
            // 0x1b8660: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8664u;
        goto label_1b8664;
    }
    ctx->pc = 0x1B865Cu;
    {
        const bool branch_taken_0x1b865c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B8660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B865Cu;
            // 0x1b8660: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b865c) {
            ctx->pc = 0x1B86C0u;
            goto label_1b86c0;
        }
    }
    ctx->pc = 0x1B8664u;
label_1b8664:
    // 0x1b8664: 0xc041c5c  jal         func_107170
label_1b8668:
    if (ctx->pc == 0x1B8668u) {
        ctx->pc = 0x1B8668u;
            // 0x1b8668: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1B866Cu;
        goto label_1b866c;
    }
    ctx->pc = 0x1B8664u;
    SET_GPR_U32(ctx, 31, 0x1B866Cu);
    ctx->pc = 0x1B8668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8664u;
            // 0x1b8668: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B866Cu; }
        if (ctx->pc != 0x1B866Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B866Cu; }
        if (ctx->pc != 0x1B866Cu) { return; }
    }
    ctx->pc = 0x1B866Cu;
label_1b866c:
    // 0x1b866c: 0x86430052  lh          $v1, 0x52($s2)
    ctx->pc = 0x1b866cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 82)));
label_1b8670:
    // 0x1b8670: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b8670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1b8674:
    // 0x1b8674: 0xa6430052  sh          $v1, 0x52($s2)
    ctx->pc = 0x1b8674u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 82), (uint16_t)GPR_U32(ctx, 3));
label_1b8678:
    // 0x1b8678: 0x86430052  lh          $v1, 0x52($s2)
    ctx->pc = 0x1b8678u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 82)));
label_1b867c:
    // 0x1b867c: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
label_1b8680:
    if (ctx->pc == 0x1B8680u) {
        ctx->pc = 0x1B8684u;
        goto label_1b8684;
    }
    ctx->pc = 0x1B867Cu;
    {
        const bool branch_taken_0x1b867c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1b867c) {
            ctx->pc = 0x1B8688u;
            goto label_1b8688;
        }
    }
    ctx->pc = 0x1B8684u;
label_1b8684:
    // 0x1b8684: 0xae40007c  sw          $zero, 0x7C($s2)
    ctx->pc = 0x1b8684u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
label_1b8688:
    // 0x1b8688: 0xc6410048  lwc1        $f1, 0x48($s2)
    ctx->pc = 0x1b8688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b868c:
    // 0x1b868c: 0x3c034016  lui         $v1, 0x4016
    ctx->pc = 0x1b868cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16406 << 16));
label_1b8690:
    // 0x1b8690: 0x3463cbe4  ori         $v1, $v1, 0xCBE4
    ctx->pc = 0x1b8690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52196);
label_1b8694:
    // 0x1b8694: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b8694u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8698:
    // 0x1b8698: 0x0  nop
    ctx->pc = 0x1b8698u;
    // NOP
label_1b869c:
    // 0x1b869c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b869cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b86a0:
    // 0x1b86a0: 0x0  nop
    ctx->pc = 0x1b86a0u;
    // NOP
label_1b86a4:
    // 0x1b86a4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1b86a8:
    if (ctx->pc == 0x1B86A8u) {
        ctx->pc = 0x1B86A8u;
            // 0x1b86a8: 0x3c033e06  lui         $v1, 0x3E06 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15878 << 16));
        ctx->pc = 0x1B86ACu;
        goto label_1b86ac;
    }
    ctx->pc = 0x1B86A4u;
    {
        const bool branch_taken_0x1b86a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B86A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B86A4u;
            // 0x1b86a8: 0x3c033e06  lui         $v1, 0x3E06 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15878 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b86a4) {
            ctx->pc = 0x1B86C0u;
            goto label_1b86c0;
        }
    }
    ctx->pc = 0x1B86ACu;
label_1b86ac:
    // 0x1b86ac: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x1b86acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
label_1b86b0:
    // 0x1b86b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b86b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b86b4:
    // 0x1b86b4: 0x0  nop
    ctx->pc = 0x1b86b4u;
    // NOP
label_1b86b8:
    // 0x1b86b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b86b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b86bc:
    // 0x1b86bc: 0xe6400048  swc1        $f0, 0x48($s2)
    ctx->pc = 0x1b86bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
label_1b86c0:
    // 0x1b86c0: 0x8e44007c  lw          $a0, 0x7C($s2)
    ctx->pc = 0x1b86c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_1b86c4:
    // 0x1b86c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b86c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b86c8:
    // 0x1b86c8: 0x1483001c  bne         $a0, $v1, . + 4 + (0x1C << 2)
label_1b86cc:
    if (ctx->pc == 0x1B86CCu) {
        ctx->pc = 0x1B86D0u;
        goto label_1b86d0;
    }
    ctx->pc = 0x1B86C8u;
    {
        const bool branch_taken_0x1b86c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b86c8) {
            ctx->pc = 0x1B873Cu;
            goto label_1b873c;
        }
    }
    ctx->pc = 0x1B86D0u;
label_1b86d0:
    // 0x1b86d0: 0x86430052  lh          $v1, 0x52($s2)
    ctx->pc = 0x1b86d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 82)));
label_1b86d4:
    // 0x1b86d4: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
label_1b86d8:
    if (ctx->pc == 0x1B86D8u) {
        ctx->pc = 0x1B86D8u;
            // 0x1b86d8: 0x2464ffff  addiu       $a0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->pc = 0x1B86DCu;
        goto label_1b86dc;
    }
    ctx->pc = 0x1B86D4u;
    {
        const bool branch_taken_0x1b86d4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1B86D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B86D4u;
            // 0x1b86d8: 0x2464ffff  addiu       $a0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b86d4) {
            ctx->pc = 0x1B8730u;
            goto label_1b8730;
        }
    }
    ctx->pc = 0x1B86DCu;
label_1b86dc:
    // 0x1b86dc: 0xa6440052  sh          $a0, 0x52($s2)
    ctx->pc = 0x1b86dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 82), (uint16_t)GPR_U32(ctx, 4));
label_1b86e0:
    // 0x1b86e0: 0x3c033e56  lui         $v1, 0x3E56
    ctx->pc = 0x1b86e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15958 << 16));
label_1b86e4:
    // 0x1b86e4: 0xc6420048  lwc1        $f2, 0x48($s2)
    ctx->pc = 0x1b86e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b86e8:
    // 0x1b86e8: 0x34637750  ori         $v1, $v1, 0x7750
    ctx->pc = 0x1b86e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30544);
label_1b86ec:
    // 0x1b86ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b86ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b86f0:
    // 0x1b86f0: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1b86f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_1b86f4:
    // 0x1b86f4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1b86f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1b86f8:
    // 0x1b86f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b86f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b86fc:
    // 0x1b86fc: 0x0  nop
    ctx->pc = 0x1b86fcu;
    // NOP
label_1b8700:
    // 0x1b8700: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1b8700u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1b8704:
    // 0x1b8704: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b8704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8708:
    // 0x1b8708: 0x0  nop
    ctx->pc = 0x1b8708u;
    // NOP
label_1b870c:
    // 0x1b870c: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_1b8710:
    if (ctx->pc == 0x1B8710u) {
        ctx->pc = 0x1B8710u;
            // 0x1b8710: 0xe6410048  swc1        $f1, 0x48($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
        ctx->pc = 0x1B8714u;
        goto label_1b8714;
    }
    ctx->pc = 0x1B870Cu;
    {
        const bool branch_taken_0x1b870c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B870Cu;
            // 0x1b8710: 0xe6410048  swc1        $f1, 0x48($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b870c) {
            ctx->pc = 0x1B873Cu;
            goto label_1b873c;
        }
    }
    ctx->pc = 0x1B8714u;
label_1b8714:
    // 0x1b8714: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1b8714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_1b8718:
    // 0x1b8718: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1b8718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1b871c:
    // 0x1b871c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b871cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8720:
    // 0x1b8720: 0x0  nop
    ctx->pc = 0x1b8720u;
    // NOP
label_1b8724:
    // 0x1b8724: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b8724u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b8728:
    // 0x1b8728: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b872c:
    if (ctx->pc == 0x1B872Cu) {
        ctx->pc = 0x1B872Cu;
            // 0x1b872c: 0xe6400048  swc1        $f0, 0x48($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
        ctx->pc = 0x1B8730u;
        goto label_1b8730;
    }
    ctx->pc = 0x1B8728u;
    {
        const bool branch_taken_0x1b8728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B872Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8728u;
            // 0x1b872c: 0xe6400048  swc1        $f0, 0x48($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8728) {
            ctx->pc = 0x1B873Cu;
            goto label_1b873c;
        }
    }
    ctx->pc = 0x1B8730u;
label_1b8730:
    // 0x1b8730: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b8730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8734:
    // 0x1b8734: 0xa6430050  sh          $v1, 0x50($s2)
    ctx->pc = 0x1b8734u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 80), (uint16_t)GPR_U32(ctx, 3));
label_1b8738:
    // 0x1b8738: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x1b8738u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
label_1b873c:
    // 0x1b873c: 0x8e44007c  lw          $a0, 0x7C($s2)
    ctx->pc = 0x1b873cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_1b8740:
    // 0x1b8740: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1b8740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b8744:
    // 0x1b8744: 0x14830250  bne         $a0, $v1, . + 4 + (0x250 << 2)
label_1b8748:
    if (ctx->pc == 0x1B8748u) {
        ctx->pc = 0x1B874Cu;
        goto label_1b874c;
    }
    ctx->pc = 0x1B8744u;
    {
        const bool branch_taken_0x1b8744 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b8744) {
            ctx->pc = 0x1B9088u;
            goto label_1b9088;
        }
    }
    ctx->pc = 0x1B874Cu;
label_1b874c:
    // 0x1b874c: 0x82440060  lb          $a0, 0x60($s2)
    ctx->pc = 0x1b874cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 96)));
label_1b8750:
    // 0x1b8750: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1b8754:
    if (ctx->pc == 0x1B8754u) {
        ctx->pc = 0x1B8754u;
            // 0x1b8754: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1B8758u;
        goto label_1b8758;
    }
    ctx->pc = 0x1B8750u;
    {
        const bool branch_taken_0x1b8750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8750u;
            // 0x1b8754: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8750) {
            ctx->pc = 0x1B8760u;
            goto label_1b8760;
        }
    }
    ctx->pc = 0x1B8758u;
label_1b8758:
    // 0x1b8758: 0x14830034  bne         $a0, $v1, . + 4 + (0x34 << 2)
label_1b875c:
    if (ctx->pc == 0x1B875Cu) {
        ctx->pc = 0x1B8760u;
        goto label_1b8760;
    }
    ctx->pc = 0x1B8758u;
    {
        const bool branch_taken_0x1b8758 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b8758) {
            ctx->pc = 0x1B882Cu;
            goto label_1b882c;
        }
    }
    ctx->pc = 0x1B8760u;
label_1b8760:
    // 0x1b8760: 0xc6410048  lwc1        $f1, 0x48($s2)
    ctx->pc = 0x1b8760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8764:
    // 0x1b8764: 0x3c023e20  lui         $v0, 0x3E20
    ctx->pc = 0x1b8764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15904 << 16));
label_1b8768:
    // 0x1b8768: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x1b8768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
label_1b876c:
    // 0x1b876c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b876cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b8770:
    // 0x1b8770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8774:
    // 0x1b8774: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1b8774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1b8778:
    // 0x1b8778: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b8778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b877c:
    // 0x1b877c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b877cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b8780:
    // 0x1b8780: 0xc041c3e  jal         func_1070F8
label_1b8784:
    if (ctx->pc == 0x1B8784u) {
        ctx->pc = 0x1B8784u;
            // 0x1b8784: 0xe6400048  swc1        $f0, 0x48($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
        ctx->pc = 0x1B8788u;
        goto label_1b8788;
    }
    ctx->pc = 0x1B8780u;
    SET_GPR_U32(ctx, 31, 0x1B8788u);
    ctx->pc = 0x1B8784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8780u;
            // 0x1b8784: 0xe6400048  swc1        $f0, 0x48($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8788u; }
        if (ctx->pc != 0x1B8788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8788u; }
        if (ctx->pc != 0x1B8788u) { return; }
    }
    ctx->pc = 0x1B8788u;
label_1b8788:
    // 0x1b8788: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b8788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b878c:
    // 0x1b878c: 0xc041be0  jal         func_106F80
label_1b8790:
    if (ctx->pc == 0x1B8790u) {
        ctx->pc = 0x1B8790u;
            // 0x1b8790: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8794u;
        goto label_1b8794;
    }
    ctx->pc = 0x1B878Cu;
    SET_GPR_U32(ctx, 31, 0x1B8794u);
    ctx->pc = 0x1B8790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B878Cu;
            // 0x1b8790: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8794u; }
        if (ctx->pc != 0x1B8794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8794u; }
        if (ctx->pc != 0x1B8794u) { return; }
    }
    ctx->pc = 0x1B8794u;
label_1b8794:
    // 0x1b8794: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x1b8794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_1b8798:
    // 0x1b8798: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b8798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1b879c:
    // 0x1b879c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b879cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b87a0:
    // 0x1b87a0: 0xc041e96  jal         func_107A58
label_1b87a4:
    if (ctx->pc == 0x1B87A4u) {
        ctx->pc = 0x1B87A4u;
            // 0x1b87a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B87A8u;
        goto label_1b87a8;
    }
    ctx->pc = 0x1B87A0u;
    SET_GPR_U32(ctx, 31, 0x1B87A8u);
    ctx->pc = 0x1B87A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B87A0u;
            // 0x1b87a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B87A8u; }
        if (ctx->pc != 0x1B87A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B87A8u; }
        if (ctx->pc != 0x1B87A8u) { return; }
    }
    ctx->pc = 0x1B87A8u;
label_1b87a8:
    // 0x1b87a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b87a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b87ac:
    // 0x1b87ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b87acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b87b0:
    // 0x1b87b0: 0xc041c38  jal         func_1070E0
label_1b87b4:
    if (ctx->pc == 0x1B87B4u) {
        ctx->pc = 0x1B87B4u;
            // 0x1b87b4: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1B87B8u;
        goto label_1b87b8;
    }
    ctx->pc = 0x1B87B0u;
    SET_GPR_U32(ctx, 31, 0x1B87B8u);
    ctx->pc = 0x1B87B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B87B0u;
            // 0x1b87b4: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B87B8u; }
        if (ctx->pc != 0x1B87B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B87B8u; }
        if (ctx->pc != 0x1B87B8u) { return; }
    }
    ctx->pc = 0x1B87B8u;
label_1b87b8:
    // 0x1b87b8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b87b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1b87bc:
    // 0x1b87bc: 0xc04c018  jal         func_130060
label_1b87c0:
    if (ctx->pc == 0x1B87C0u) {
        ctx->pc = 0x1B87C0u;
            // 0x1b87c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B87C4u;
        goto label_1b87c4;
    }
    ctx->pc = 0x1B87BCu;
    SET_GPR_U32(ctx, 31, 0x1B87C4u);
    ctx->pc = 0x1B87C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B87BCu;
            // 0x1b87c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B87C4u; }
        if (ctx->pc != 0x1B87C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B87C4u; }
        if (ctx->pc != 0x1B87C4u) { return; }
    }
    ctx->pc = 0x1B87C4u;
label_1b87c4:
    // 0x1b87c4: 0xc6420048  lwc1        $f2, 0x48($s2)
    ctx->pc = 0x1b87c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b87c8:
    // 0x1b87c8: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1b87c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_1b87cc:
    // 0x1b87cc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1b87ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1b87d0:
    // 0x1b87d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b87d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b87d4:
    // 0x1b87d4: 0x0  nop
    ctx->pc = 0x1b87d4u;
    // NOP
label_1b87d8:
    // 0x1b87d8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1b87d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b87dc:
    // 0x1b87dc: 0x0  nop
    ctx->pc = 0x1b87dcu;
    // NOP
label_1b87e0:
    // 0x1b87e0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1b87e4:
    if (ctx->pc == 0x1B87E4u) {
        ctx->pc = 0x1B87E4u;
            // 0x1b87e4: 0x3c0340a0  lui         $v1, 0x40A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
        ctx->pc = 0x1B87E8u;
        goto label_1b87e8;
    }
    ctx->pc = 0x1B87E0u;
    {
        const bool branch_taken_0x1b87e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B87E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B87E0u;
            // 0x1b87e4: 0x3c0340a0  lui         $v1, 0x40A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b87e0) {
            ctx->pc = 0x1B8800u;
            goto label_1b8800;
        }
    }
    ctx->pc = 0x1B87E8u;
label_1b87e8:
    // 0x1b87e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b87e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b87ec:
    // 0x1b87ec: 0x0  nop
    ctx->pc = 0x1b87ecu;
    // NOP
label_1b87f0:
    // 0x1b87f0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b87f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b87f4:
    // 0x1b87f4: 0x0  nop
    ctx->pc = 0x1b87f4u;
    // NOP
label_1b87f8:
    // 0x1b87f8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_1b87fc:
    if (ctx->pc == 0x1B87FCu) {
        ctx->pc = 0x1B8800u;
        goto label_1b8800;
    }
    ctx->pc = 0x1B87F8u;
    {
        const bool branch_taken_0x1b87f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b87f8) {
            ctx->pc = 0x1B882Cu;
            goto label_1b882c;
        }
    }
    ctx->pc = 0x1B8800u;
label_1b8800:
    // 0x1b8800: 0x8f848da0  lw          $a0, -0x7260($gp)
    ctx->pc = 0x1b8800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
label_1b8804:
    // 0x1b8804: 0xc067abc  jal         func_19EAF0
label_1b8808:
    if (ctx->pc == 0x1B8808u) {
        ctx->pc = 0x1B8808u;
            // 0x1b8808: 0x8645006c  lh          $a1, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->pc = 0x1B880Cu;
        goto label_1b880c;
    }
    ctx->pc = 0x1B8804u;
    SET_GPR_U32(ctx, 31, 0x1B880Cu);
    ctx->pc = 0x1B8808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8804u;
            // 0x1b8808: 0x8645006c  lh          $a1, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EAF0u;
    if (runtime->hasFunction(0x19EAF0u)) {
        auto targetFn = runtime->lookupFunction(0x19EAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B880Cu; }
        if (ctx->pc != 0x1B880Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMoney__16CUserDataManagerFi_0x19eaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B880Cu; }
        if (ctx->pc != 0x1B880Cu) { return; }
    }
    ctx->pc = 0x1B880Cu;
label_1b880c:
    // 0x1b880c: 0xae40007c  sw          $zero, 0x7C($s2)
    ctx->pc = 0x1b880cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
label_1b8810:
    // 0x1b8810: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1b8810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1b8814:
    // 0x1b8814: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x1b8814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1b8818:
    // 0x1b8818: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b8818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b881c:
    // 0x1b881c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1b881cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1b8820:
    // 0x1b8820: 0x8c24c4d0  lw          $a0, -0x3B30($at)
    ctx->pc = 0x1b8820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952144)));
label_1b8824:
    // 0x1b8824: 0xc063818  jal         func_18E060
label_1b8828:
    if (ctx->pc == 0x1B8828u) {
        ctx->pc = 0x1B8828u;
            // 0x1b8828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B882Cu;
        goto label_1b882c;
    }
    ctx->pc = 0x1B8824u;
    SET_GPR_U32(ctx, 31, 0x1B882Cu);
    ctx->pc = 0x1B8828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8824u;
            // 0x1b8828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B882Cu; }
        if (ctx->pc != 0x1B882Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B882Cu; }
        if (ctx->pc != 0x1B882Cu) { return; }
    }
    ctx->pc = 0x1B882Cu;
label_1b882c:
    // 0x1b882c: 0x82440060  lb          $a0, 0x60($s2)
    ctx->pc = 0x1b882cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 96)));
label_1b8830:
    // 0x1b8830: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1b8830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b8834:
    // 0x1b8834: 0x14830073  bne         $a0, $v1, . + 4 + (0x73 << 2)
label_1b8838:
    if (ctx->pc == 0x1B8838u) {
        ctx->pc = 0x1B883Cu;
        goto label_1b883c;
    }
    ctx->pc = 0x1B8834u;
    {
        const bool branch_taken_0x1b8834 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b8834) {
            ctx->pc = 0x1B8A04u;
            goto label_1b8a04;
        }
    }
    ctx->pc = 0x1B883Cu;
label_1b883c:
    // 0x1b883c: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x1b883cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_1b8840:
    // 0x1b8840: 0x27828110  addiu       $v0, $gp, -0x7EF0
    ctx->pc = 0x1b8840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934800));
label_1b8844:
    // 0x1b8844: 0x8f848da0  lw          $a0, -0x7260($gp)
    ctx->pc = 0x1b8844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
label_1b8848:
    // 0x1b8848: 0x8645006c  lh          $a1, 0x6C($s2)
    ctx->pc = 0x1b8848u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
label_1b884c:
    // 0x1b884c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b884cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1b8850:
    // 0x1b8850: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1b8850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b8854:
    // 0x1b8854: 0x24844eb0  addiu       $a0, $a0, 0x4EB0
    ctx->pc = 0x1b8854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20144));
label_1b8858:
    // 0x1b8858: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1b8858u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1b885c:
    // 0x1b885c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1b885cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1b8860:
    // 0x1b8860: 0xc066b4c  jal         func_19AD30
label_1b8864:
    if (ctx->pc == 0x1B8864u) {
        ctx->pc = 0x1B8864u;
            // 0x1b8864: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B8868u;
        goto label_1b8868;
    }
    ctx->pc = 0x1B8860u;
    SET_GPR_U32(ctx, 31, 0x1B8868u);
    ctx->pc = 0x1B8864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8860u;
            // 0x1b8864: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AD30u;
    if (runtime->hasFunction(0x19AD30u)) {
        auto targetFn = runtime->lookupFunction(0x19AD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8868u; }
        if (ctx->pc != 0x1B8868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsChange__11CMonsterBoxFi_0x19ad30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8868u; }
        if (ctx->pc != 0x1B8868u) { return; }
    }
    ctx->pc = 0x1B8868u;
label_1b8868:
    // 0x1b8868: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1b886c:
    if (ctx->pc == 0x1B886Cu) {
        ctx->pc = 0x1B8870u;
        goto label_1b8870;
    }
    ctx->pc = 0x1B8868u;
    {
        const bool branch_taken_0x1b8868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8868) {
            ctx->pc = 0x1B88D8u;
            goto label_1b88d8;
        }
    }
    ctx->pc = 0x1B8870u;
label_1b8870:
    // 0x1b8870: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x1b8870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_1b8874:
    // 0x1b8874: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1b8878:
    if (ctx->pc == 0x1B8878u) {
        ctx->pc = 0x1B887Cu;
        goto label_1b887c;
    }
    ctx->pc = 0x1B8874u;
    {
        const bool branch_taken_0x1b8874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8874) {
            ctx->pc = 0x1B8890u;
            goto label_1b8890;
        }
    }
    ctx->pc = 0x1B887Cu;
label_1b887c:
    // 0x1b887c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1b887cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b8880:
    // 0x1b8880: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1b8880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1b8884:
    // 0x1b8884: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1b8884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1b8888:
    // 0x1b8888: 0xc04a234  jal         func_1288D0
label_1b888c:
    if (ctx->pc == 0x1B888Cu) {
        ctx->pc = 0x1B888Cu;
            // 0x1b888c: 0x24a56770  addiu       $a1, $a1, 0x6770 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26480));
        ctx->pc = 0x1B8890u;
        goto label_1b8890;
    }
    ctx->pc = 0x1B8888u;
    SET_GPR_U32(ctx, 31, 0x1B8890u);
    ctx->pc = 0x1B888Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8888u;
            // 0x1b888c: 0x24a56770  addiu       $a1, $a1, 0x6770 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8890u; }
        if (ctx->pc != 0x1B8890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8890u; }
        if (ctx->pc != 0x1B8890u) { return; }
    }
    ctx->pc = 0x1B8890u;
label_1b8890:
    // 0x1b8890: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x1b8890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_1b8894:
    // 0x1b8894: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8898:
    // 0x1b8898: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1b889c:
    if (ctx->pc == 0x1B889Cu) {
        ctx->pc = 0x1B88A0u;
        goto label_1b88a0;
    }
    ctx->pc = 0x1B8898u;
    {
        const bool branch_taken_0x1b8898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b8898) {
            ctx->pc = 0x1B88B4u;
            goto label_1b88b4;
        }
    }
    ctx->pc = 0x1B88A0u;
label_1b88a0:
    // 0x1b88a0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1b88a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b88a4:
    // 0x1b88a4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1b88a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1b88a8:
    // 0x1b88a8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1b88a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1b88ac:
    // 0x1b88ac: 0xc04a234  jal         func_1288D0
label_1b88b0:
    if (ctx->pc == 0x1B88B0u) {
        ctx->pc = 0x1B88B0u;
            // 0x1b88b0: 0x24a567c0  addiu       $a1, $a1, 0x67C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26560));
        ctx->pc = 0x1B88B4u;
        goto label_1b88b4;
    }
    ctx->pc = 0x1B88ACu;
    SET_GPR_U32(ctx, 31, 0x1B88B4u);
    ctx->pc = 0x1B88B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B88ACu;
            // 0x1b88b0: 0x24a567c0  addiu       $a1, $a1, 0x67C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B88B4u; }
        if (ctx->pc != 0x1B88B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B88B4u; }
        if (ctx->pc != 0x1B88B4u) { return; }
    }
    ctx->pc = 0x1B88B4u;
label_1b88b4:
    // 0x1b88b4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1b88b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1b88b8:
    // 0x1b88b8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1b88b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1b88bc:
    // 0x1b88bc: 0x2484ff90  addiu       $a0, $a0, -0x70
    ctx->pc = 0x1b88bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
label_1b88c0:
    // 0x1b88c0: 0x2406005a  addiu       $a2, $zero, 0x5A
    ctx->pc = 0x1b88c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1b88c4:
    // 0x1b88c4: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1b88c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1b88c8:
    // 0x1b88c8: 0xc0a2dcc  jal         func_28B730
label_1b88cc:
    if (ctx->pc == 0x1B88CCu) {
        ctx->pc = 0x1B88CCu;
            // 0x1b88cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B88D0u;
        goto label_1b88d0;
    }
    ctx->pc = 0x1B88C8u;
    SET_GPR_U32(ctx, 31, 0x1B88D0u);
    ctx->pc = 0x1B88CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B88C8u;
            // 0x1b88cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B730u;
    if (runtime->hasFunction(0x28B730u)) {
        auto targetFn = runtime->lookupFunction(0x28B730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B88D0u; }
        if (ctx->pc != 0x1B88D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Print__18MessageTaskManagerFPciii_0x28b730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B88D0u; }
        if (ctx->pc != 0x1B88D0u) { return; }
    }
    ctx->pc = 0x1B88D0u;
label_1b88d0:
    // 0x1b88d0: 0x1000004c  b           . + 4 + (0x4C << 2)
label_1b88d4:
    if (ctx->pc == 0x1B88D4u) {
        ctx->pc = 0x1B88D4u;
            // 0x1b88d4: 0xae40007c  sw          $zero, 0x7C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x1B88D8u;
        goto label_1b88d8;
    }
    ctx->pc = 0x1B88D0u;
    {
        const bool branch_taken_0x1b88d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B88D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B88D0u;
            // 0x1b88d4: 0xae40007c  sw          $zero, 0x7C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b88d0) {
            ctx->pc = 0x1B8A04u;
            goto label_1b8a04;
        }
    }
    ctx->pc = 0x1B88D8u;
label_1b88d8:
    // 0x1b88d8: 0xc6420048  lwc1        $f2, 0x48($s2)
    ctx->pc = 0x1b88d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b88dc:
    // 0x1b88dc: 0x3c023e20  lui         $v0, 0x3E20
    ctx->pc = 0x1b88dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15904 << 16));
label_1b88e0:
    // 0x1b88e0: 0x3443d97c  ori         $v1, $v0, 0xD97C
    ctx->pc = 0x1b88e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
label_1b88e4:
    // 0x1b88e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b88e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b88e8:
    // 0x1b88e8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b88e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1b88ec:
    // 0x1b88ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b88ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1b88f0:
    // 0x1b88f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b88f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b88f4:
    // 0x1b88f4: 0x0  nop
    ctx->pc = 0x1b88f4u;
    // NOP
label_1b88f8:
    // 0x1b88f8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1b88f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1b88fc:
    // 0x1b88fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b88fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8900:
    // 0x1b8900: 0x0  nop
    ctx->pc = 0x1b8900u;
    // NOP
label_1b8904:
    // 0x1b8904: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_1b8908:
    if (ctx->pc == 0x1B8908u) {
        ctx->pc = 0x1B8908u;
            // 0x1b8908: 0xe6410048  swc1        $f1, 0x48($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
        ctx->pc = 0x1B890Cu;
        goto label_1b890c;
    }
    ctx->pc = 0x1B8904u;
    {
        const bool branch_taken_0x1b8904 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8904u;
            // 0x1b8908: 0xe6410048  swc1        $f1, 0x48($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8904) {
            ctx->pc = 0x1B8980u;
            goto label_1b8980;
        }
    }
    ctx->pc = 0x1B890Cu;
label_1b890c:
    // 0x1b890c: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x1b890cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_1b8910:
    // 0x1b8910: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1b8914:
    if (ctx->pc == 0x1B8914u) {
        ctx->pc = 0x1B8918u;
        goto label_1b8918;
    }
    ctx->pc = 0x1B8910u;
    {
        const bool branch_taken_0x1b8910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8910) {
            ctx->pc = 0x1B892Cu;
            goto label_1b892c;
        }
    }
    ctx->pc = 0x1B8918u;
label_1b8918:
    // 0x1b8918: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1b8918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b891c:
    // 0x1b891c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1b891cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1b8920:
    // 0x1b8920: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1b8920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1b8924:
    // 0x1b8924: 0xc04a234  jal         func_1288D0
label_1b8928:
    if (ctx->pc == 0x1B8928u) {
        ctx->pc = 0x1B8928u;
            // 0x1b8928: 0x24a56810  addiu       $a1, $a1, 0x6810 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26640));
        ctx->pc = 0x1B892Cu;
        goto label_1b892c;
    }
    ctx->pc = 0x1B8924u;
    SET_GPR_U32(ctx, 31, 0x1B892Cu);
    ctx->pc = 0x1B8928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8924u;
            // 0x1b8928: 0x24a56810  addiu       $a1, $a1, 0x6810 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B892Cu; }
        if (ctx->pc != 0x1B892Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B892Cu; }
        if (ctx->pc != 0x1B892Cu) { return; }
    }
    ctx->pc = 0x1B892Cu;
label_1b892c:
    // 0x1b892c: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x1b892cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_1b8930:
    // 0x1b8930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8934:
    // 0x1b8934: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1b8938:
    if (ctx->pc == 0x1B8938u) {
        ctx->pc = 0x1B893Cu;
        goto label_1b893c;
    }
    ctx->pc = 0x1B8934u;
    {
        const bool branch_taken_0x1b8934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b8934) {
            ctx->pc = 0x1B8950u;
            goto label_1b8950;
        }
    }
    ctx->pc = 0x1B893Cu;
label_1b893c:
    // 0x1b893c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1b893cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b8940:
    // 0x1b8940: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1b8940u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1b8944:
    // 0x1b8944: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1b8944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1b8948:
    // 0x1b8948: 0xc04a234  jal         func_1288D0
label_1b894c:
    if (ctx->pc == 0x1B894Cu) {
        ctx->pc = 0x1B894Cu;
            // 0x1b894c: 0x24a56840  addiu       $a1, $a1, 0x6840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26688));
        ctx->pc = 0x1B8950u;
        goto label_1b8950;
    }
    ctx->pc = 0x1B8948u;
    SET_GPR_U32(ctx, 31, 0x1B8950u);
    ctx->pc = 0x1B894Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8948u;
            // 0x1b894c: 0x24a56840  addiu       $a1, $a1, 0x6840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8950u; }
        if (ctx->pc != 0x1B8950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8950u; }
        if (ctx->pc != 0x1B8950u) { return; }
    }
    ctx->pc = 0x1B8950u;
label_1b8950:
    // 0x1b8950: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1b8950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1b8954:
    // 0x1b8954: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1b8954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1b8958:
    // 0x1b8958: 0x2484ff90  addiu       $a0, $a0, -0x70
    ctx->pc = 0x1b8958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
label_1b895c:
    // 0x1b895c: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x1b895cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1b8960:
    // 0x1b8960: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1b8960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1b8964:
    // 0x1b8964: 0xc0a2dcc  jal         func_28B730
label_1b8968:
    if (ctx->pc == 0x1B8968u) {
        ctx->pc = 0x1B8968u;
            // 0x1b8968: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B896Cu;
        goto label_1b896c;
    }
    ctx->pc = 0x1B8964u;
    SET_GPR_U32(ctx, 31, 0x1B896Cu);
    ctx->pc = 0x1B8968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8964u;
            // 0x1b8968: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B730u;
    if (runtime->hasFunction(0x28B730u)) {
        auto targetFn = runtime->lookupFunction(0x28B730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B896Cu; }
        if (ctx->pc != 0x1B896Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Print__18MessageTaskManagerFPciii_0x28b730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B896Cu; }
        if (ctx->pc != 0x1B896Cu) { return; }
    }
    ctx->pc = 0x1B896Cu;
label_1b896c:
    // 0x1b896c: 0x8f828da0  lw          $v0, -0x7260($gp)
    ctx->pc = 0x1b896cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
label_1b8970:
    // 0x1b8970: 0x8645006c  lh          $a1, 0x6C($s2)
    ctx->pc = 0x1b8970u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
label_1b8974:
    // 0x1b8974: 0xc066b30  jal         func_19ACC0
label_1b8978:
    if (ctx->pc == 0x1B8978u) {
        ctx->pc = 0x1B8978u;
            // 0x1b8978: 0x24444eb0  addiu       $a0, $v0, 0x4EB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20144));
        ctx->pc = 0x1B897Cu;
        goto label_1b897c;
    }
    ctx->pc = 0x1B8974u;
    SET_GPR_U32(ctx, 31, 0x1B897Cu);
    ctx->pc = 0x1B8978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8974u;
            // 0x1b8978: 0x24444eb0  addiu       $a0, $v0, 0x4EB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19ACC0u;
    if (runtime->hasFunction(0x19ACC0u)) {
        auto targetFn = runtime->lookupFunction(0x19ACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B897Cu; }
        if (ctx->pc != 0x1B897Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableChange__11CMonsterBoxFi_0x19acc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B897Cu; }
        if (ctx->pc != 0x1B897Cu) { return; }
    }
    ctx->pc = 0x1B897Cu;
label_1b897c:
    // 0x1b897c: 0xae40007c  sw          $zero, 0x7C($s2)
    ctx->pc = 0x1b897cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
label_1b8980:
    // 0x1b8980: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1b8980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1b8984:
    // 0x1b8984: 0xc041c5c  jal         func_107170
label_1b8988:
    if (ctx->pc == 0x1B8988u) {
        ctx->pc = 0x1B8988u;
            // 0x1b8988: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x1B898Cu;
        goto label_1b898c;
    }
    ctx->pc = 0x1B8984u;
    SET_GPR_U32(ctx, 31, 0x1B898Cu);
    ctx->pc = 0x1B8988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8984u;
            // 0x1b8988: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B898Cu; }
        if (ctx->pc != 0x1B898Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B898Cu; }
        if (ctx->pc != 0x1B898Cu) { return; }
    }
    ctx->pc = 0x1B898Cu;
label_1b898c:
    // 0x1b898c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1b898cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1b8990:
    // 0x1b8990: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b8990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b8994:
    // 0x1b8994: 0xc0724bc  jal         func_1C92F0
label_1b8998:
    if (ctx->pc == 0x1B8998u) {
        ctx->pc = 0x1B899Cu;
        goto label_1b899c;
    }
    ctx->pc = 0x1B8994u;
    SET_GPR_U32(ctx, 31, 0x1B899Cu);
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B899Cu; }
        if (ctx->pc != 0x1B899Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B899Cu; }
        if (ctx->pc != 0x1B899Cu) { return; }
    }
    ctx->pc = 0x1B899Cu;
label_1b899c:
    // 0x1b899c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1b899cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1b89a0:
    // 0x1b89a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b89a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b89a4:
    // 0x1b89a4: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x1b89a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b89a8:
    // 0x1b89a8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b89a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1b89ac:
    // 0x1b89ac: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1b89acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1b89b0:
    // 0x1b89b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b89b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b89b4:
    // 0x1b89b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b89b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b89b8:
    // 0x1b89b8: 0xc0724bc  jal         func_1C92F0
label_1b89bc:
    if (ctx->pc == 0x1B89BCu) {
        ctx->pc = 0x1B89BCu;
            // 0x1b89bc: 0xe7a00140  swc1        $f0, 0x140($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
        ctx->pc = 0x1B89C0u;
        goto label_1b89c0;
    }
    ctx->pc = 0x1B89B8u;
    SET_GPR_U32(ctx, 31, 0x1B89C0u);
    ctx->pc = 0x1B89BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B89B8u;
            // 0x1b89bc: 0xe7a00140  swc1        $f0, 0x140($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89C0u; }
        if (ctx->pc != 0x1B89C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89C0u; }
        if (ctx->pc != 0x1B89C0u) { return; }
    }
    ctx->pc = 0x1B89C0u;
label_1b89c0:
    // 0x1b89c0: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x1b89c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b89c4:
    // 0x1b89c4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1b89c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1b89c8:
    // 0x1b89c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b89c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b89cc:
    // 0x1b89cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b89ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b89d0:
    // 0x1b89d0: 0xc0724bc  jal         func_1C92F0
label_1b89d4:
    if (ctx->pc == 0x1B89D4u) {
        ctx->pc = 0x1B89D4u;
            // 0x1b89d4: 0xe7a00144  swc1        $f0, 0x144($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
        ctx->pc = 0x1B89D8u;
        goto label_1b89d8;
    }
    ctx->pc = 0x1B89D0u;
    SET_GPR_U32(ctx, 31, 0x1B89D8u);
    ctx->pc = 0x1B89D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B89D0u;
            // 0x1b89d4: 0xe7a00144  swc1        $f0, 0x144($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89D8u; }
        if (ctx->pc != 0x1B89D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89D8u; }
        if (ctx->pc != 0x1B89D8u) { return; }
    }
    ctx->pc = 0x1B89D8u;
label_1b89d8:
    // 0x1b89d8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1b89d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1b89dc:
    // 0x1b89dc: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1b89dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1b89e0:
    // 0x1b89e0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b89e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b89e4:
    // 0x1b89e4: 0x24845f40  addiu       $a0, $a0, 0x5F40
    ctx->pc = 0x1b89e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24384));
label_1b89e8:
    // 0x1b89e8: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x1b89e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b89ec:
    // 0x1b89ec: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1b89ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1b89f0:
    // 0x1b89f0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b89f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1b89f4:
    // 0x1b89f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b89f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b89f8:
    // 0x1b89f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b89f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b89fc:
    // 0x1b89fc: 0xc070400  jal         func_1C1000
label_1b8a00:
    if (ctx->pc == 0x1B8A00u) {
        ctx->pc = 0x1B8A00u;
            // 0x1b8a00: 0xe7a00148  swc1        $f0, 0x148($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
        ctx->pc = 0x1B8A04u;
        goto label_1b8a04;
    }
    ctx->pc = 0x1B89FCu;
    SET_GPR_U32(ctx, 31, 0x1B8A04u);
    ctx->pc = 0x1B8A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B89FCu;
            // 0x1b8a00: 0xe7a00148  swc1        $f0, 0x148($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1000u;
    if (runtime->hasFunction(0x1C1000u)) {
        auto targetFn = runtime->lookupFunction(0x1C1000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A04u; }
        if (ctx->pc != 0x1B8A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatPrim__15CMiniEffPrimManFPfi_0x1c1000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A04u; }
        if (ctx->pc != 0x1B8A04u) { return; }
    }
    ctx->pc = 0x1B8A04u;
label_1b8a04:
    // 0x1b8a04: 0x82440060  lb          $a0, 0x60($s2)
    ctx->pc = 0x1b8a04u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 96)));
label_1b8a08:
    // 0x1b8a08: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1b8a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b8a0c:
    // 0x1b8a0c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1b8a10:
    if (ctx->pc == 0x1B8A10u) {
        ctx->pc = 0x1B8A10u;
            // 0x1b8a10: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1B8A14u;
        goto label_1b8a14;
    }
    ctx->pc = 0x1B8A0Cu;
    {
        const bool branch_taken_0x1b8a0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B8A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A0Cu;
            // 0x1b8a10: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a0c) {
            ctx->pc = 0x1B8A1Cu;
            goto label_1b8a1c;
        }
    }
    ctx->pc = 0x1B8A14u;
label_1b8a14:
    // 0x1b8a14: 0x148300b1  bne         $a0, $v1, . + 4 + (0xB1 << 2)
label_1b8a18:
    if (ctx->pc == 0x1B8A18u) {
        ctx->pc = 0x1B8A1Cu;
        goto label_1b8a1c;
    }
    ctx->pc = 0x1B8A14u;
    {
        const bool branch_taken_0x1b8a14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b8a14) {
            ctx->pc = 0x1B8CDCu;
            goto label_1b8cdc;
        }
    }
    ctx->pc = 0x1B8A1Cu;
label_1b8a1c:
    // 0x1b8a1c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1b8a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1b8a20:
    // 0x1b8a20: 0xc04c018  jal         func_130060
label_1b8a24:
    if (ctx->pc == 0x1B8A24u) {
        ctx->pc = 0x1B8A24u;
            // 0x1b8a24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A28u;
        goto label_1b8a28;
    }
    ctx->pc = 0x1B8A20u;
    SET_GPR_U32(ctx, 31, 0x1B8A28u);
    ctx->pc = 0x1B8A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A20u;
            // 0x1b8a24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A28u; }
        if (ctx->pc != 0x1B8A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A28u; }
        if (ctx->pc != 0x1B8A28u) { return; }
    }
    ctx->pc = 0x1B8A28u;
label_1b8a28:
    // 0x1b8a28: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1b8a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1b8a2c:
    // 0x1b8a2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b8a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b8a30:
    // 0x1b8a30: 0x0  nop
    ctx->pc = 0x1b8a30u;
    // NOP
label_1b8a34:
    // 0x1b8a34: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b8a34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8a38:
    // 0x1b8a38: 0x0  nop
    ctx->pc = 0x1b8a38u;
    // NOP
label_1b8a3c:
    // 0x1b8a3c: 0x45010018  bc1t        . + 4 + (0x18 << 2)
label_1b8a40:
    if (ctx->pc == 0x1B8A40u) {
        ctx->pc = 0x1B8A40u;
            // 0x1b8a40: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x1B8A44u;
        goto label_1b8a44;
    }
    ctx->pc = 0x1B8A3Cu;
    {
        const bool branch_taken_0x1b8a3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A3Cu;
            // 0x1b8a40: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a3c) {
            ctx->pc = 0x1B8AA0u;
            goto label_1b8aa0;
        }
    }
    ctx->pc = 0x1B8A44u;
label_1b8a44:
    // 0x1b8a44: 0xc6410048  lwc1        $f1, 0x48($s2)
    ctx->pc = 0x1b8a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8a48:
    // 0x1b8a48: 0x3c023e20  lui         $v0, 0x3E20
    ctx->pc = 0x1b8a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15904 << 16));
label_1b8a4c:
    // 0x1b8a4c: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x1b8a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
label_1b8a50:
    // 0x1b8a50: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1b8a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1b8a54:
    // 0x1b8a54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8a54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8a58:
    // 0x1b8a58: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1b8a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1b8a5c:
    // 0x1b8a5c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b8a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b8a60:
    // 0x1b8a60: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b8a60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b8a64:
    // 0x1b8a64: 0xc041c3e  jal         func_1070F8
label_1b8a68:
    if (ctx->pc == 0x1B8A68u) {
        ctx->pc = 0x1B8A68u;
            // 0x1b8a68: 0xe6400048  swc1        $f0, 0x48($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
        ctx->pc = 0x1B8A6Cu;
        goto label_1b8a6c;
    }
    ctx->pc = 0x1B8A64u;
    SET_GPR_U32(ctx, 31, 0x1B8A6Cu);
    ctx->pc = 0x1B8A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A64u;
            // 0x1b8a68: 0xe6400048  swc1        $f0, 0x48($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A6Cu; }
        if (ctx->pc != 0x1B8A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A6Cu; }
        if (ctx->pc != 0x1B8A6Cu) { return; }
    }
    ctx->pc = 0x1B8A6Cu;
label_1b8a6c:
    // 0x1b8a6c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1b8a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1b8a70:
    // 0x1b8a70: 0xc041be0  jal         func_106F80
label_1b8a74:
    if (ctx->pc == 0x1B8A74u) {
        ctx->pc = 0x1B8A74u;
            // 0x1b8a74: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A78u;
        goto label_1b8a78;
    }
    ctx->pc = 0x1B8A70u;
    SET_GPR_U32(ctx, 31, 0x1B8A78u);
    ctx->pc = 0x1B8A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A70u;
            // 0x1b8a74: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A78u; }
        if (ctx->pc != 0x1B8A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A78u; }
        if (ctx->pc != 0x1B8A78u) { return; }
    }
    ctx->pc = 0x1B8A78u;
label_1b8a78:
    // 0x1b8a78: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x1b8a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_1b8a7c:
    // 0x1b8a7c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1b8a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1b8a80:
    // 0x1b8a80: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b8a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b8a84:
    // 0x1b8a84: 0xc041e96  jal         func_107A58
label_1b8a88:
    if (ctx->pc == 0x1B8A88u) {
        ctx->pc = 0x1B8A88u;
            // 0x1b8a88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A8Cu;
        goto label_1b8a8c;
    }
    ctx->pc = 0x1B8A84u;
    SET_GPR_U32(ctx, 31, 0x1B8A8Cu);
    ctx->pc = 0x1B8A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A84u;
            // 0x1b8a88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A8Cu; }
        if (ctx->pc != 0x1B8A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A8Cu; }
        if (ctx->pc != 0x1B8A8Cu) { return; }
    }
    ctx->pc = 0x1B8A8Cu;
label_1b8a8c:
    // 0x1b8a8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b8a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b8a90:
    // 0x1b8a90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b8a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b8a94:
    // 0x1b8a94: 0xc041c38  jal         func_1070E0
label_1b8a98:
    if (ctx->pc == 0x1B8A98u) {
        ctx->pc = 0x1B8A98u;
            // 0x1b8a98: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x1B8A9Cu;
        goto label_1b8a9c;
    }
    ctx->pc = 0x1B8A94u;
    SET_GPR_U32(ctx, 31, 0x1B8A9Cu);
    ctx->pc = 0x1B8A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A94u;
            // 0x1b8a98: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A9Cu; }
        if (ctx->pc != 0x1B8A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A9Cu; }
        if (ctx->pc != 0x1B8A9Cu) { return; }
    }
    ctx->pc = 0x1B8A9Cu;
label_1b8a9c:
    // 0x1b8a9c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1b8a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_1b8aa0:
    // 0x1b8aa0: 0xc041c5c  jal         func_107170
label_1b8aa4:
    if (ctx->pc == 0x1B8AA4u) {
        ctx->pc = 0x1B8AA4u;
            // 0x1b8aa4: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x1B8AA8u;
        goto label_1b8aa8;
    }
    ctx->pc = 0x1B8AA0u;
    SET_GPR_U32(ctx, 31, 0x1B8AA8u);
    ctx->pc = 0x1B8AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8AA0u;
            // 0x1b8aa4: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8AA8u; }
        if (ctx->pc != 0x1B8AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8AA8u; }
        if (ctx->pc != 0x1B8AA8u) { return; }
    }
    ctx->pc = 0x1B8AA8u;
label_1b8aa8:
    // 0x1b8aa8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1b8aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1b8aac:
    // 0x1b8aac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b8aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b8ab0:
    // 0x1b8ab0: 0xc0724bc  jal         func_1C92F0
label_1b8ab4:
    if (ctx->pc == 0x1B8AB4u) {
        ctx->pc = 0x1B8AB8u;
        goto label_1b8ab8;
    }
    ctx->pc = 0x1B8AB0u;
    SET_GPR_U32(ctx, 31, 0x1B8AB8u);
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8AB8u; }
        if (ctx->pc != 0x1B8AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8AB8u; }
        if (ctx->pc != 0x1B8AB8u) { return; }
    }
    ctx->pc = 0x1B8AB8u;
label_1b8ab8:
    // 0x1b8ab8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1b8ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1b8abc:
    // 0x1b8abc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b8abcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b8ac0:
    // 0x1b8ac0: 0xc7a10160  lwc1        $f1, 0x160($sp)
    ctx->pc = 0x1b8ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8ac4:
    // 0x1b8ac4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b8ac4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1b8ac8:
    // 0x1b8ac8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1b8ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1b8acc:
    // 0x1b8acc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b8accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b8ad0:
    // 0x1b8ad0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b8ad0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b8ad4:
    // 0x1b8ad4: 0xc0724bc  jal         func_1C92F0
label_1b8ad8:
    if (ctx->pc == 0x1B8AD8u) {
        ctx->pc = 0x1B8AD8u;
            // 0x1b8ad8: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->pc = 0x1B8ADCu;
        goto label_1b8adc;
    }
    ctx->pc = 0x1B8AD4u;
    SET_GPR_U32(ctx, 31, 0x1B8ADCu);
    ctx->pc = 0x1B8AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8AD4u;
            // 0x1b8ad8: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8ADCu; }
        if (ctx->pc != 0x1B8ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8ADCu; }
        if (ctx->pc != 0x1B8ADCu) { return; }
    }
    ctx->pc = 0x1B8ADCu;
label_1b8adc:
    // 0x1b8adc: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x1b8adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8ae0:
    // 0x1b8ae0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1b8ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1b8ae4:
    // 0x1b8ae4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b8ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b8ae8:
    // 0x1b8ae8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b8ae8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b8aec:
    // 0x1b8aec: 0xc0724bc  jal         func_1C92F0
label_1b8af0:
    if (ctx->pc == 0x1B8AF0u) {
        ctx->pc = 0x1B8AF0u;
            // 0x1b8af0: 0xe7a00164  swc1        $f0, 0x164($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
        ctx->pc = 0x1B8AF4u;
        goto label_1b8af4;
    }
    ctx->pc = 0x1B8AECu;
    SET_GPR_U32(ctx, 31, 0x1B8AF4u);
    ctx->pc = 0x1B8AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8AECu;
            // 0x1b8af0: 0xe7a00164  swc1        $f0, 0x164($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8AF4u; }
        if (ctx->pc != 0x1B8AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8AF4u; }
        if (ctx->pc != 0x1B8AF4u) { return; }
    }
    ctx->pc = 0x1B8AF4u;
label_1b8af4:
    // 0x1b8af4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1b8af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1b8af8:
    // 0x1b8af8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1b8af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1b8afc:
    // 0x1b8afc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b8afcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b8b00:
    // 0x1b8b00: 0x24845f40  addiu       $a0, $a0, 0x5F40
    ctx->pc = 0x1b8b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24384));
label_1b8b04:
    // 0x1b8b04: 0xc7a10168  lwc1        $f1, 0x168($sp)
    ctx->pc = 0x1b8b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8b08:
    // 0x1b8b08: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1b8b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_1b8b0c:
    // 0x1b8b0c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b8b0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1b8b10:
    // 0x1b8b10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b8b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8b14:
    // 0x1b8b14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b8b14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b8b18:
    // 0x1b8b18: 0xc070400  jal         func_1C1000
label_1b8b1c:
    if (ctx->pc == 0x1B8B1Cu) {
        ctx->pc = 0x1B8B1Cu;
            // 0x1b8b1c: 0xe7a00168  swc1        $f0, 0x168($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
        ctx->pc = 0x1B8B20u;
        goto label_1b8b20;
    }
    ctx->pc = 0x1B8B18u;
    SET_GPR_U32(ctx, 31, 0x1B8B20u);
    ctx->pc = 0x1B8B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B18u;
            // 0x1b8b1c: 0xe7a00168  swc1        $f0, 0x168($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1000u;
    if (runtime->hasFunction(0x1C1000u)) {
        auto targetFn = runtime->lookupFunction(0x1C1000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B20u; }
        if (ctx->pc != 0x1B8B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatPrim__15CMiniEffPrimManFPfi_0x1c1000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B20u; }
        if (ctx->pc != 0x1B8B20u) { return; }
    }
    ctx->pc = 0x1B8B20u;
label_1b8b20:
    // 0x1b8b20: 0xc6410048  lwc1        $f1, 0x48($s2)
    ctx->pc = 0x1b8b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8b24:
    // 0x1b8b24: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1b8b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_1b8b28:
    // 0x1b8b28: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1b8b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1b8b2c:
    // 0x1b8b2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b8b2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8b30:
    // 0x1b8b30: 0x0  nop
    ctx->pc = 0x1b8b30u;
    // NOP
label_1b8b34:
    // 0x1b8b34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b8b34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8b38:
    // 0x1b8b38: 0x0  nop
    ctx->pc = 0x1b8b38u;
    // NOP
label_1b8b3c:
    // 0x1b8b3c: 0x45010067  bc1t        . + 4 + (0x67 << 2)
label_1b8b40:
    if (ctx->pc == 0x1B8B40u) {
        ctx->pc = 0x1B8B44u;
        goto label_1b8b44;
    }
    ctx->pc = 0x1B8B3Cu;
    {
        const bool branch_taken_0x1b8b3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8b3c) {
            ctx->pc = 0x1B8CDCu;
            goto label_1b8cdc;
        }
    }
    ctx->pc = 0x1B8B44u;
label_1b8b44:
    // 0x1b8b44: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x1b8b44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
label_1b8b48:
    // 0x1b8b48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8b4c:
    // 0x1b8b4c: 0xa6420068  sh          $v0, 0x68($s2)
    ctx->pc = 0x1b8b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 104), (uint16_t)GPR_U32(ctx, 2));
label_1b8b50:
    // 0x1b8b50: 0x86450068  lh          $a1, 0x68($s2)
    ctx->pc = 0x1b8b50u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 104)));
label_1b8b54:
    // 0x1b8b54: 0xc068524  jal         func_1A1490
label_1b8b58:
    if (ctx->pc == 0x1B8B58u) {
        ctx->pc = 0x1B8B58u;
            // 0x1b8b58: 0x8644006c  lh          $a0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->pc = 0x1B8B5Cu;
        goto label_1b8b5c;
    }
    ctx->pc = 0x1B8B54u;
    SET_GPR_U32(ctx, 31, 0x1B8B5Cu);
    ctx->pc = 0x1B8B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B54u;
            // 0x1b8b58: 0x8644006c  lh          $a0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1490u;
    if (runtime->hasFunction(0x1A1490u)) {
        auto targetFn = runtime->lookupFunction(0x1A1490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B5Cu; }
        if (ctx->pc != 0x1B8B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckGetItemLimmitOver__Fii_0x1a1490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B5Cu; }
        if (ctx->pc != 0x1B8B5Cu) { return; }
    }
    ctx->pc = 0x1B8B5Cu;
label_1b8b5c:
    // 0x1b8b5c: 0x86500068  lh          $s0, 0x68($s2)
    ctx->pc = 0x1b8b5cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 104)));
label_1b8b60:
    // 0x1b8b60: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x1b8b60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1b8b64:
    // 0x1b8b64: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
label_1b8b68:
    if (ctx->pc == 0x1B8B68u) {
        ctx->pc = 0x1B8B6Cu;
        goto label_1b8b6c;
    }
    ctx->pc = 0x1B8B64u;
    {
        const bool branch_taken_0x1b8b64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8b64) {
            ctx->pc = 0x1B8C2Cu;
            goto label_1b8c2c;
        }
    }
    ctx->pc = 0x1B8B6Cu;
label_1b8b6c:
    // 0x1b8b6c: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x1b8b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_1b8b70:
    // 0x1b8b70: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1b8b74:
    if (ctx->pc == 0x1B8B74u) {
        ctx->pc = 0x1B8B74u;
            // 0x1b8b74: 0x2a010002  slti        $at, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->pc = 0x1B8B78u;
        goto label_1b8b78;
    }
    ctx->pc = 0x1B8B70u;
    {
        const bool branch_taken_0x1b8b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B70u;
            // 0x1b8b74: 0x2a010002  slti        $at, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8b70) {
            ctx->pc = 0x1B8BA0u;
            goto label_1b8ba0;
        }
    }
    ctx->pc = 0x1B8B78u;
label_1b8b78:
    // 0x1b8b78: 0xc065810  jal         func_196040
label_1b8b7c:
    if (ctx->pc == 0x1B8B7Cu) {
        ctx->pc = 0x1B8B7Cu;
            // 0x1b8b7c: 0x8644006c  lh          $a0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->pc = 0x1B8B80u;
        goto label_1b8b80;
    }
    ctx->pc = 0x1B8B78u;
    SET_GPR_U32(ctx, 31, 0x1B8B80u);
    ctx->pc = 0x1B8B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B78u;
            // 0x1b8b7c: 0x8644006c  lh          $a0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B80u; }
        if (ctx->pc != 0x1B8B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B80u; }
        if (ctx->pc != 0x1B8B80u) { return; }
    }
    ctx->pc = 0x1B8B80u;
label_1b8b80:
    // 0x1b8b80: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1b8b80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1b8b84:
    // 0x1b8b84: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b8b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b8b88:
    // 0x1b8b88: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b8b88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b8b8c:
    // 0x1b8b8c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1b8b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1b8b90:
    // 0x1b8b90: 0xc04a234  jal         func_1288D0
label_1b8b94:
    if (ctx->pc == 0x1B8B94u) {
        ctx->pc = 0x1B8B94u;
            // 0x1b8b94: 0x24a56870  addiu       $a1, $a1, 0x6870 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26736));
        ctx->pc = 0x1B8B98u;
        goto label_1b8b98;
    }
    ctx->pc = 0x1B8B90u;
    SET_GPR_U32(ctx, 31, 0x1B8B98u);
    ctx->pc = 0x1B8B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B90u;
            // 0x1b8b94: 0x24a56870  addiu       $a1, $a1, 0x6870 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B98u; }
        if (ctx->pc != 0x1B8B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B98u; }
        if (ctx->pc != 0x1B8B98u) { return; }
    }
    ctx->pc = 0x1B8B98u;
label_1b8b98:
    // 0x1b8b98: 0x10000014  b           . + 4 + (0x14 << 2)
label_1b8b9c:
    if (ctx->pc == 0x1B8B9Cu) {
        ctx->pc = 0x1B8BA0u;
        goto label_1b8ba0;
    }
    ctx->pc = 0x1B8B98u;
    {
        const bool branch_taken_0x1b8b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8b98) {
            ctx->pc = 0x1B8BECu;
            goto label_1b8bec;
        }
    }
    ctx->pc = 0x1B8BA0u;
label_1b8ba0:
    // 0x1b8ba0: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1b8ba4:
    if (ctx->pc == 0x1B8BA4u) {
        ctx->pc = 0x1B8BA8u;
        goto label_1b8ba8;
    }
    ctx->pc = 0x1B8BA0u;
    {
        const bool branch_taken_0x1b8ba0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8ba0) {
            ctx->pc = 0x1B8BCCu;
            goto label_1b8bcc;
        }
    }
    ctx->pc = 0x1B8BA8u;
label_1b8ba8:
    // 0x1b8ba8: 0xc065810  jal         func_196040
label_1b8bac:
    if (ctx->pc == 0x1B8BACu) {
        ctx->pc = 0x1B8BACu;
            // 0x1b8bac: 0x8644006c  lh          $a0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->pc = 0x1B8BB0u;
        goto label_1b8bb0;
    }
    ctx->pc = 0x1B8BA8u;
    SET_GPR_U32(ctx, 31, 0x1B8BB0u);
    ctx->pc = 0x1B8BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8BA8u;
            // 0x1b8bac: 0x8644006c  lh          $a0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8BB0u; }
        if (ctx->pc != 0x1B8BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8BB0u; }
        if (ctx->pc != 0x1B8BB0u) { return; }
    }
    ctx->pc = 0x1B8BB0u;
label_1b8bb0:
    // 0x1b8bb0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1b8bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1b8bb4:
    // 0x1b8bb4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b8bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b8bb8:
    // 0x1b8bb8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1b8bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1b8bbc:
    // 0x1b8bbc: 0xc04a234  jal         func_1288D0
label_1b8bc0:
    if (ctx->pc == 0x1B8BC0u) {
        ctx->pc = 0x1B8BC0u;
            // 0x1b8bc0: 0x24a568c0  addiu       $a1, $a1, 0x68C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26816));
        ctx->pc = 0x1B8BC4u;
        goto label_1b8bc4;
    }
    ctx->pc = 0x1B8BBCu;
    SET_GPR_U32(ctx, 31, 0x1B8BC4u);
    ctx->pc = 0x1B8BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8BBCu;
            // 0x1b8bc0: 0x24a568c0  addiu       $a1, $a1, 0x68C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8BC4u; }
        if (ctx->pc != 0x1B8BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8BC4u; }
        if (ctx->pc != 0x1B8BC4u) { return; }
    }
    ctx->pc = 0x1B8BC4u;
label_1b8bc4:
    // 0x1b8bc4: 0x10000009  b           . + 4 + (0x9 << 2)
label_1b8bc8:
    if (ctx->pc == 0x1B8BC8u) {
        ctx->pc = 0x1B8BCCu;
        goto label_1b8bcc;
    }
    ctx->pc = 0x1B8BC4u;
    {
        const bool branch_taken_0x1b8bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8bc4) {
            ctx->pc = 0x1B8BECu;
            goto label_1b8bec;
        }
    }
    ctx->pc = 0x1B8BCCu;
label_1b8bcc:
    // 0x1b8bcc: 0xc065810  jal         func_196040
label_1b8bd0:
    if (ctx->pc == 0x1B8BD0u) {
        ctx->pc = 0x1B8BD0u;
            // 0x1b8bd0: 0x8644006c  lh          $a0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->pc = 0x1B8BD4u;
        goto label_1b8bd4;
    }
    ctx->pc = 0x1B8BCCu;
    SET_GPR_U32(ctx, 31, 0x1B8BD4u);
    ctx->pc = 0x1B8BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8BCCu;
            // 0x1b8bd0: 0x8644006c  lh          $a0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8BD4u; }
        if (ctx->pc != 0x1B8BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8BD4u; }
        if (ctx->pc != 0x1B8BD4u) { return; }
    }
    ctx->pc = 0x1B8BD4u;
label_1b8bd4:
    // 0x1b8bd4: 0x86460068  lh          $a2, 0x68($s2)
    ctx->pc = 0x1b8bd4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 104)));
label_1b8bd8:
    // 0x1b8bd8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1b8bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1b8bdc:
    // 0x1b8bdc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b8bdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b8be0:
    // 0x1b8be0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1b8be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1b8be4:
    // 0x1b8be4: 0xc04a234  jal         func_1288D0
label_1b8be8:
    if (ctx->pc == 0x1B8BE8u) {
        ctx->pc = 0x1B8BE8u;
            // 0x1b8be8: 0x24a56900  addiu       $a1, $a1, 0x6900 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26880));
        ctx->pc = 0x1B8BECu;
        goto label_1b8bec;
    }
    ctx->pc = 0x1B8BE4u;
    SET_GPR_U32(ctx, 31, 0x1B8BECu);
    ctx->pc = 0x1B8BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8BE4u;
            // 0x1b8be8: 0x24a56900  addiu       $a1, $a1, 0x6900 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8BECu; }
        if (ctx->pc != 0x1B8BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8BECu; }
        if (ctx->pc != 0x1B8BECu) { return; }
    }
    ctx->pc = 0x1B8BECu;
label_1b8bec:
    // 0x1b8bec: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1b8becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1b8bf0:
    // 0x1b8bf0: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1b8bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1b8bf4:
    // 0x1b8bf4: 0x2484ff90  addiu       $a0, $a0, -0x70
    ctx->pc = 0x1b8bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
label_1b8bf8:
    // 0x1b8bf8: 0x2406005a  addiu       $a2, $zero, 0x5A
    ctx->pc = 0x1b8bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1b8bfc:
    // 0x1b8bfc: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1b8bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1b8c00:
    // 0x1b8c00: 0xc0a2dcc  jal         func_28B730
label_1b8c04:
    if (ctx->pc == 0x1B8C04u) {
        ctx->pc = 0x1B8C04u;
            // 0x1b8c04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8C08u;
        goto label_1b8c08;
    }
    ctx->pc = 0x1B8C00u;
    SET_GPR_U32(ctx, 31, 0x1B8C08u);
    ctx->pc = 0x1B8C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8C00u;
            // 0x1b8c04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B730u;
    if (runtime->hasFunction(0x28B730u)) {
        auto targetFn = runtime->lookupFunction(0x28B730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C08u; }
        if (ctx->pc != 0x1B8C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Print__18MessageTaskManagerFPciii_0x28b730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C08u; }
        if (ctx->pc != 0x1B8C08u) { return; }
    }
    ctx->pc = 0x1B8C08u;
label_1b8c08:
    // 0x1b8c08: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b8c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b8c0c:
    // 0x1b8c0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b8c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8c10:
    // 0x1b8c10: 0xae44007c  sw          $a0, 0x7C($s2)
    ctx->pc = 0x1b8c10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 4));
label_1b8c14:
    // 0x1b8c14: 0xa6430050  sh          $v1, 0x50($s2)
    ctx->pc = 0x1b8c14u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 80), (uint16_t)GPR_U32(ctx, 3));
label_1b8c18:
    // 0x1b8c18: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1b8c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1b8c1c:
    // 0x1b8c1c: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x1b8c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_1b8c20:
    // 0x1b8c20: 0xa6440052  sh          $a0, 0x52($s2)
    ctx->pc = 0x1b8c20u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 82), (uint16_t)GPR_U32(ctx, 4));
label_1b8c24:
    // 0x1b8c24: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1b8c28:
    if (ctx->pc == 0x1B8C28u) {
        ctx->pc = 0x1B8C28u;
            // 0x1b8c28: 0xa6430042  sh          $v1, 0x42($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 66), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1B8C2Cu;
        goto label_1b8c2c;
    }
    ctx->pc = 0x1B8C24u;
    {
        const bool branch_taken_0x1b8c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8C24u;
            // 0x1b8c28: 0xa6430042  sh          $v1, 0x42($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 66), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8c24) {
            ctx->pc = 0x1B8CDCu;
            goto label_1b8cdc;
        }
    }
    ctx->pc = 0x1B8C2Cu;
label_1b8c2c:
    // 0x1b8c2c: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x1b8c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_1b8c30:
    // 0x1b8c30: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1b8c34:
    if (ctx->pc == 0x1B8C34u) {
        ctx->pc = 0x1B8C34u;
            // 0x1b8c34: 0x2a010002  slti        $at, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->pc = 0x1B8C38u;
        goto label_1b8c38;
    }
    ctx->pc = 0x1B8C30u;
    {
        const bool branch_taken_0x1b8c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8C30u;
            // 0x1b8c34: 0x2a010002  slti        $at, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8c30) {
            ctx->pc = 0x1B8C60u;
            goto label_1b8c60;
        }
    }
    ctx->pc = 0x1B8C38u;
label_1b8c38:
    // 0x1b8c38: 0xc065810  jal         func_196040
label_1b8c3c:
    if (ctx->pc == 0x1B8C3Cu) {
        ctx->pc = 0x1B8C3Cu;
            // 0x1b8c3c: 0x8644006c  lh          $a0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->pc = 0x1B8C40u;
        goto label_1b8c40;
    }
    ctx->pc = 0x1B8C38u;
    SET_GPR_U32(ctx, 31, 0x1B8C40u);
    ctx->pc = 0x1B8C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8C38u;
            // 0x1b8c3c: 0x8644006c  lh          $a0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C40u; }
        if (ctx->pc != 0x1B8C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C40u; }
        if (ctx->pc != 0x1B8C40u) { return; }
    }
    ctx->pc = 0x1B8C40u;
label_1b8c40:
    // 0x1b8c40: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1b8c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1b8c44:
    // 0x1b8c44: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b8c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b8c48:
    // 0x1b8c48: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b8c48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b8c4c:
    // 0x1b8c4c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1b8c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1b8c50:
    // 0x1b8c50: 0xc04a234  jal         func_1288D0
label_1b8c54:
    if (ctx->pc == 0x1B8C54u) {
        ctx->pc = 0x1B8C54u;
            // 0x1b8c54: 0x24a56940  addiu       $a1, $a1, 0x6940 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26944));
        ctx->pc = 0x1B8C58u;
        goto label_1b8c58;
    }
    ctx->pc = 0x1B8C50u;
    SET_GPR_U32(ctx, 31, 0x1B8C58u);
    ctx->pc = 0x1B8C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8C50u;
            // 0x1b8c54: 0x24a56940  addiu       $a1, $a1, 0x6940 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C58u; }
        if (ctx->pc != 0x1B8C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C58u; }
        if (ctx->pc != 0x1B8C58u) { return; }
    }
    ctx->pc = 0x1B8C58u;
label_1b8c58:
    // 0x1b8c58: 0x10000014  b           . + 4 + (0x14 << 2)
label_1b8c5c:
    if (ctx->pc == 0x1B8C5Cu) {
        ctx->pc = 0x1B8C60u;
        goto label_1b8c60;
    }
    ctx->pc = 0x1B8C58u;
    {
        const bool branch_taken_0x1b8c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8c58) {
            ctx->pc = 0x1B8CACu;
            goto label_1b8cac;
        }
    }
    ctx->pc = 0x1B8C60u;
label_1b8c60:
    // 0x1b8c60: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1b8c64:
    if (ctx->pc == 0x1B8C64u) {
        ctx->pc = 0x1B8C68u;
        goto label_1b8c68;
    }
    ctx->pc = 0x1B8C60u;
    {
        const bool branch_taken_0x1b8c60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8c60) {
            ctx->pc = 0x1B8C8Cu;
            goto label_1b8c8c;
        }
    }
    ctx->pc = 0x1B8C68u;
label_1b8c68:
    // 0x1b8c68: 0xc065810  jal         func_196040
label_1b8c6c:
    if (ctx->pc == 0x1B8C6Cu) {
        ctx->pc = 0x1B8C6Cu;
            // 0x1b8c6c: 0x8644006c  lh          $a0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->pc = 0x1B8C70u;
        goto label_1b8c70;
    }
    ctx->pc = 0x1B8C68u;
    SET_GPR_U32(ctx, 31, 0x1B8C70u);
    ctx->pc = 0x1B8C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8C68u;
            // 0x1b8c6c: 0x8644006c  lh          $a0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C70u; }
        if (ctx->pc != 0x1B8C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C70u; }
        if (ctx->pc != 0x1B8C70u) { return; }
    }
    ctx->pc = 0x1B8C70u;
label_1b8c70:
    // 0x1b8c70: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1b8c70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1b8c74:
    // 0x1b8c74: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b8c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b8c78:
    // 0x1b8c78: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1b8c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1b8c7c:
    // 0x1b8c7c: 0xc04a234  jal         func_1288D0
label_1b8c80:
    if (ctx->pc == 0x1B8C80u) {
        ctx->pc = 0x1B8C80u;
            // 0x1b8c80: 0x24a56960  addiu       $a1, $a1, 0x6960 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26976));
        ctx->pc = 0x1B8C84u;
        goto label_1b8c84;
    }
    ctx->pc = 0x1B8C7Cu;
    SET_GPR_U32(ctx, 31, 0x1B8C84u);
    ctx->pc = 0x1B8C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8C7Cu;
            // 0x1b8c80: 0x24a56960  addiu       $a1, $a1, 0x6960 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C84u; }
        if (ctx->pc != 0x1B8C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C84u; }
        if (ctx->pc != 0x1B8C84u) { return; }
    }
    ctx->pc = 0x1B8C84u;
label_1b8c84:
    // 0x1b8c84: 0x10000009  b           . + 4 + (0x9 << 2)
label_1b8c88:
    if (ctx->pc == 0x1B8C88u) {
        ctx->pc = 0x1B8C8Cu;
        goto label_1b8c8c;
    }
    ctx->pc = 0x1B8C84u;
    {
        const bool branch_taken_0x1b8c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8c84) {
            ctx->pc = 0x1B8CACu;
            goto label_1b8cac;
        }
    }
    ctx->pc = 0x1B8C8Cu;
label_1b8c8c:
    // 0x1b8c8c: 0xc065810  jal         func_196040
label_1b8c90:
    if (ctx->pc == 0x1B8C90u) {
        ctx->pc = 0x1B8C90u;
            // 0x1b8c90: 0x8644006c  lh          $a0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->pc = 0x1B8C94u;
        goto label_1b8c94;
    }
    ctx->pc = 0x1B8C8Cu;
    SET_GPR_U32(ctx, 31, 0x1B8C94u);
    ctx->pc = 0x1B8C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8C8Cu;
            // 0x1b8c90: 0x8644006c  lh          $a0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C94u; }
        if (ctx->pc != 0x1B8C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8C94u; }
        if (ctx->pc != 0x1B8C94u) { return; }
    }
    ctx->pc = 0x1B8C94u;
label_1b8c94:
    // 0x1b8c94: 0x86460068  lh          $a2, 0x68($s2)
    ctx->pc = 0x1b8c94u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 104)));
label_1b8c98:
    // 0x1b8c98: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1b8c98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1b8c9c:
    // 0x1b8c9c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b8c9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b8ca0:
    // 0x1b8ca0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1b8ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1b8ca4:
    // 0x1b8ca4: 0xc04a234  jal         func_1288D0
label_1b8ca8:
    if (ctx->pc == 0x1B8CA8u) {
        ctx->pc = 0x1B8CA8u;
            // 0x1b8ca8: 0x24a56970  addiu       $a1, $a1, 0x6970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26992));
        ctx->pc = 0x1B8CACu;
        goto label_1b8cac;
    }
    ctx->pc = 0x1B8CA4u;
    SET_GPR_U32(ctx, 31, 0x1B8CACu);
    ctx->pc = 0x1B8CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8CA4u;
            // 0x1b8ca8: 0x24a56970  addiu       $a1, $a1, 0x6970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CACu; }
        if (ctx->pc != 0x1B8CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CACu; }
        if (ctx->pc != 0x1B8CACu) { return; }
    }
    ctx->pc = 0x1B8CACu;
label_1b8cac:
    // 0x1b8cac: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1b8cacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1b8cb0:
    // 0x1b8cb0: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1b8cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1b8cb4:
    // 0x1b8cb4: 0x2484ff90  addiu       $a0, $a0, -0x70
    ctx->pc = 0x1b8cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
label_1b8cb8:
    // 0x1b8cb8: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x1b8cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1b8cbc:
    // 0x1b8cbc: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1b8cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1b8cc0:
    // 0x1b8cc0: 0xc0a2dcc  jal         func_28B730
label_1b8cc4:
    if (ctx->pc == 0x1B8CC4u) {
        ctx->pc = 0x1B8CC4u;
            // 0x1b8cc4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8CC8u;
        goto label_1b8cc8;
    }
    ctx->pc = 0x1B8CC0u;
    SET_GPR_U32(ctx, 31, 0x1B8CC8u);
    ctx->pc = 0x1B8CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8CC0u;
            // 0x1b8cc4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B730u;
    if (runtime->hasFunction(0x28B730u)) {
        auto targetFn = runtime->lookupFunction(0x28B730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CC8u; }
        if (ctx->pc != 0x1B8CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Print__18MessageTaskManagerFPciii_0x28b730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CC8u; }
        if (ctx->pc != 0x1B8CC8u) { return; }
    }
    ctx->pc = 0x1B8CC8u;
label_1b8cc8:
    // 0x1b8cc8: 0x8645006c  lh          $a1, 0x6C($s2)
    ctx->pc = 0x1b8cc8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
label_1b8ccc:
    // 0x1b8ccc: 0x8f848da0  lw          $a0, -0x7260($gp)
    ctx->pc = 0x1b8cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
label_1b8cd0:
    // 0x1b8cd0: 0xc0677fc  jal         func_19DFF0
label_1b8cd4:
    if (ctx->pc == 0x1B8CD4u) {
        ctx->pc = 0x1B8CD4u;
            // 0x1b8cd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B8CD8u;
        goto label_1b8cd8;
    }
    ctx->pc = 0x1B8CD0u;
    SET_GPR_U32(ctx, 31, 0x1B8CD8u);
    ctx->pc = 0x1B8CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8CD0u;
            // 0x1b8cd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DFF0u;
    if (runtime->hasFunction(0x19DFF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CD8u; }
        if (ctx->pc != 0x1B8CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItem__16CUserDataManagerFii_0x19dff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CD8u; }
        if (ctx->pc != 0x1B8CD8u) { return; }
    }
    ctx->pc = 0x1B8CD8u;
label_1b8cd8:
    // 0x1b8cd8: 0xae40007c  sw          $zero, 0x7C($s2)
    ctx->pc = 0x1b8cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
label_1b8cdc:
    // 0x1b8cdc: 0x82440060  lb          $a0, 0x60($s2)
    ctx->pc = 0x1b8cdcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 96)));
label_1b8ce0:
    // 0x1b8ce0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b8ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b8ce4:
    // 0x1b8ce4: 0x14830050  bne         $a0, $v1, . + 4 + (0x50 << 2)
label_1b8ce8:
    if (ctx->pc == 0x1B8CE8u) {
        ctx->pc = 0x1B8CE8u;
            // 0x1b8ce8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1B8CECu;
        goto label_1b8cec;
    }
    ctx->pc = 0x1B8CE4u;
    {
        const bool branch_taken_0x1b8ce4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B8CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8CE4u;
            // 0x1b8ce8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ce4) {
            ctx->pc = 0x1B8E28u;
            goto label_1b8e28;
        }
    }
    ctx->pc = 0x1B8CECu;
label_1b8cec:
    // 0x1b8cec: 0xc04c018  jal         func_130060
label_1b8cf0:
    if (ctx->pc == 0x1B8CF0u) {
        ctx->pc = 0x1B8CF0u;
            // 0x1b8cf0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8CF4u;
        goto label_1b8cf4;
    }
    ctx->pc = 0x1B8CECu;
    SET_GPR_U32(ctx, 31, 0x1B8CF4u);
    ctx->pc = 0x1B8CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8CECu;
            // 0x1b8cf0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CF4u; }
        if (ctx->pc != 0x1B8CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8CF4u; }
        if (ctx->pc != 0x1B8CF4u) { return; }
    }
    ctx->pc = 0x1B8CF4u;
label_1b8cf4:
    // 0x1b8cf4: 0xc6420054  lwc1        $f2, 0x54($s2)
    ctx->pc = 0x1b8cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b8cf8:
    // 0x1b8cf8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1b8cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1b8cfc:
    // 0x1b8cfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b8cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b8d00:
    // 0x1b8d00: 0x0  nop
    ctx->pc = 0x1b8d00u;
    // NOP
label_1b8d04:
    // 0x1b8d04: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b8d04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b8d08:
    // 0x1b8d08: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b8d08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8d0c:
    // 0x1b8d0c: 0x0  nop
    ctx->pc = 0x1b8d0cu;
    // NOP
label_1b8d10:
    // 0x1b8d10: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
label_1b8d14:
    if (ctx->pc == 0x1B8D14u) {
        ctx->pc = 0x1B8D18u;
        goto label_1b8d18;
    }
    ctx->pc = 0x1B8D10u;
    {
        const bool branch_taken_0x1b8d10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8d10) {
            ctx->pc = 0x1B8D90u;
            goto label_1b8d90;
        }
    }
    ctx->pc = 0x1B8D18u;
label_1b8d18:
    // 0x1b8d18: 0xc6410058  lwc1        $f1, 0x58($s2)
    ctx->pc = 0x1b8d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8d1c:
    // 0x1b8d1c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1b8d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_1b8d20:
    // 0x1b8d20: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b8d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1b8d24:
    // 0x1b8d24: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x1b8d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_1b8d28:
    // 0x1b8d28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8d2c:
    // 0x1b8d2c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1b8d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1b8d30:
    // 0x1b8d30: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b8d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b8d34:
    // 0x1b8d34: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1b8d34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1b8d38:
    // 0x1b8d38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b8d38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b8d3c:
    // 0x1b8d3c: 0xe6410054  swc1        $f1, 0x54($s2)
    ctx->pc = 0x1b8d3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
label_1b8d40:
    // 0x1b8d40: 0xc041c3e  jal         func_1070F8
label_1b8d44:
    if (ctx->pc == 0x1B8D44u) {
        ctx->pc = 0x1B8D44u;
            // 0x1b8d44: 0xe6400054  swc1        $f0, 0x54($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
        ctx->pc = 0x1B8D48u;
        goto label_1b8d48;
    }
    ctx->pc = 0x1B8D40u;
    SET_GPR_U32(ctx, 31, 0x1B8D48u);
    ctx->pc = 0x1B8D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D40u;
            // 0x1b8d44: 0xe6400054  swc1        $f0, 0x54($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D48u; }
        if (ctx->pc != 0x1B8D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D48u; }
        if (ctx->pc != 0x1B8D48u) { return; }
    }
    ctx->pc = 0x1B8D48u;
label_1b8d48:
    // 0x1b8d48: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x1b8d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_1b8d4c:
    // 0x1b8d4c: 0xc041be0  jal         func_106F80
label_1b8d50:
    if (ctx->pc == 0x1B8D50u) {
        ctx->pc = 0x1B8D50u;
            // 0x1b8d50: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8D54u;
        goto label_1b8d54;
    }
    ctx->pc = 0x1B8D4Cu;
    SET_GPR_U32(ctx, 31, 0x1B8D54u);
    ctx->pc = 0x1B8D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D4Cu;
            // 0x1b8d50: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D54u; }
        if (ctx->pc != 0x1B8D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D54u; }
        if (ctx->pc != 0x1B8D54u) { return; }
    }
    ctx->pc = 0x1B8D54u;
label_1b8d54:
    // 0x1b8d54: 0xc64c0054  lwc1        $f12, 0x54($s2)
    ctx->pc = 0x1b8d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b8d58:
    // 0x1b8d58: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x1b8d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_1b8d5c:
    // 0x1b8d5c: 0xc041e96  jal         func_107A58
label_1b8d60:
    if (ctx->pc == 0x1B8D60u) {
        ctx->pc = 0x1B8D60u;
            // 0x1b8d60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8D64u;
        goto label_1b8d64;
    }
    ctx->pc = 0x1B8D5Cu;
    SET_GPR_U32(ctx, 31, 0x1B8D64u);
    ctx->pc = 0x1B8D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D5Cu;
            // 0x1b8d60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D64u; }
        if (ctx->pc != 0x1B8D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D64u; }
        if (ctx->pc != 0x1B8D64u) { return; }
    }
    ctx->pc = 0x1B8D64u;
label_1b8d64:
    // 0x1b8d64: 0xc7a10274  lwc1        $f1, 0x274($sp)
    ctx->pc = 0x1b8d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8d68:
    // 0x1b8d68: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x1b8d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_1b8d6c:
    // 0x1b8d6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8d70:
    // 0x1b8d70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b8d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b8d74:
    // 0x1b8d74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b8d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b8d78:
    // 0x1b8d78: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x1b8d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_1b8d7c:
    // 0x1b8d7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b8d7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b8d80:
    // 0x1b8d80: 0xc041c38  jal         func_1070E0
label_1b8d84:
    if (ctx->pc == 0x1B8D84u) {
        ctx->pc = 0x1B8D84u;
            // 0x1b8d84: 0xe7a00274  swc1        $f0, 0x274($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
        ctx->pc = 0x1B8D88u;
        goto label_1b8d88;
    }
    ctx->pc = 0x1B8D80u;
    SET_GPR_U32(ctx, 31, 0x1B8D88u);
    ctx->pc = 0x1B8D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D80u;
            // 0x1b8d84: 0xe7a00274  swc1        $f0, 0x274($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D88u; }
        if (ctx->pc != 0x1B8D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D88u; }
        if (ctx->pc != 0x1B8D88u) { return; }
    }
    ctx->pc = 0x1B8D88u;
label_1b8d88:
    // 0x1b8d88: 0x10000028  b           . + 4 + (0x28 << 2)
label_1b8d8c:
    if (ctx->pc == 0x1B8D8Cu) {
        ctx->pc = 0x1B8D8Cu;
            // 0x1b8d8c: 0x82440060  lb          $a0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->pc = 0x1B8D90u;
        goto label_1b8d90;
    }
    ctx->pc = 0x1B8D88u;
    {
        const bool branch_taken_0x1b8d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D88u;
            // 0x1b8d8c: 0x82440060  lb          $a0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8d88) {
            ctx->pc = 0x1B8E2Cu;
            goto label_1b8e2c;
        }
    }
    ctx->pc = 0x1B8D90u;
label_1b8d90:
    // 0x1b8d90: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x1b8d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_1b8d94:
    // 0x1b8d94: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1b8d98:
    if (ctx->pc == 0x1B8D98u) {
        ctx->pc = 0x1B8D9Cu;
        goto label_1b8d9c;
    }
    ctx->pc = 0x1B8D94u;
    {
        const bool branch_taken_0x1b8d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8d94) {
            ctx->pc = 0x1B8DB8u;
            goto label_1b8db8;
        }
    }
    ctx->pc = 0x1B8D9Cu;
label_1b8d9c:
    // 0x1b8d9c: 0xc065810  jal         func_196040
label_1b8da0:
    if (ctx->pc == 0x1B8DA0u) {
        ctx->pc = 0x1B8DA0u;
            // 0x1b8da0: 0x8644006c  lh          $a0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->pc = 0x1B8DA4u;
        goto label_1b8da4;
    }
    ctx->pc = 0x1B8D9Cu;
    SET_GPR_U32(ctx, 31, 0x1B8DA4u);
    ctx->pc = 0x1B8DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D9Cu;
            // 0x1b8da0: 0x8644006c  lh          $a0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8DA4u; }
        if (ctx->pc != 0x1B8DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8DA4u; }
        if (ctx->pc != 0x1B8DA4u) { return; }
    }
    ctx->pc = 0x1B8DA4u;
label_1b8da4:
    // 0x1b8da4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1b8da4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1b8da8:
    // 0x1b8da8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b8da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b8dac:
    // 0x1b8dac: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x1b8dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_1b8db0:
    // 0x1b8db0: 0xc04a234  jal         func_1288D0
label_1b8db4:
    if (ctx->pc == 0x1B8DB4u) {
        ctx->pc = 0x1B8DB4u;
            // 0x1b8db4: 0x24a56990  addiu       $a1, $a1, 0x6990 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27024));
        ctx->pc = 0x1B8DB8u;
        goto label_1b8db8;
    }
    ctx->pc = 0x1B8DB0u;
    SET_GPR_U32(ctx, 31, 0x1B8DB8u);
    ctx->pc = 0x1B8DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8DB0u;
            // 0x1b8db4: 0x24a56990  addiu       $a1, $a1, 0x6990 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8DB8u; }
        if (ctx->pc != 0x1B8DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8DB8u; }
        if (ctx->pc != 0x1B8DB8u) { return; }
    }
    ctx->pc = 0x1B8DB8u;
label_1b8db8:
    // 0x1b8db8: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x1b8db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_1b8dbc:
    // 0x1b8dbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8dc0:
    // 0x1b8dc0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1b8dc4:
    if (ctx->pc == 0x1B8DC4u) {
        ctx->pc = 0x1B8DC8u;
        goto label_1b8dc8;
    }
    ctx->pc = 0x1B8DC0u;
    {
        const bool branch_taken_0x1b8dc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b8dc0) {
            ctx->pc = 0x1B8DE4u;
            goto label_1b8de4;
        }
    }
    ctx->pc = 0x1B8DC8u;
label_1b8dc8:
    // 0x1b8dc8: 0xc065810  jal         func_196040
label_1b8dcc:
    if (ctx->pc == 0x1B8DCCu) {
        ctx->pc = 0x1B8DCCu;
            // 0x1b8dcc: 0x8644006c  lh          $a0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->pc = 0x1B8DD0u;
        goto label_1b8dd0;
    }
    ctx->pc = 0x1B8DC8u;
    SET_GPR_U32(ctx, 31, 0x1B8DD0u);
    ctx->pc = 0x1B8DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8DC8u;
            // 0x1b8dcc: 0x8644006c  lh          $a0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8DD0u; }
        if (ctx->pc != 0x1B8DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8DD0u; }
        if (ctx->pc != 0x1B8DD0u) { return; }
    }
    ctx->pc = 0x1B8DD0u;
label_1b8dd0:
    // 0x1b8dd0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1b8dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1b8dd4:
    // 0x1b8dd4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b8dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b8dd8:
    // 0x1b8dd8: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x1b8dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_1b8ddc:
    // 0x1b8ddc: 0xc04a234  jal         func_1288D0
label_1b8de0:
    if (ctx->pc == 0x1B8DE0u) {
        ctx->pc = 0x1B8DE0u;
            // 0x1b8de0: 0x24a569b0  addiu       $a1, $a1, 0x69B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27056));
        ctx->pc = 0x1B8DE4u;
        goto label_1b8de4;
    }
    ctx->pc = 0x1B8DDCu;
    SET_GPR_U32(ctx, 31, 0x1B8DE4u);
    ctx->pc = 0x1B8DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8DDCu;
            // 0x1b8de0: 0x24a569b0  addiu       $a1, $a1, 0x69B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8DE4u; }
        if (ctx->pc != 0x1B8DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8DE4u; }
        if (ctx->pc != 0x1B8DE4u) { return; }
    }
    ctx->pc = 0x1B8DE4u;
label_1b8de4:
    // 0x1b8de4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1b8de4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1b8de8:
    // 0x1b8de8: 0x27a50280  addiu       $a1, $sp, 0x280
    ctx->pc = 0x1b8de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_1b8dec:
    // 0x1b8dec: 0x2484ff90  addiu       $a0, $a0, -0x70
    ctx->pc = 0x1b8decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
label_1b8df0:
    // 0x1b8df0: 0x2406005a  addiu       $a2, $zero, 0x5A
    ctx->pc = 0x1b8df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1b8df4:
    // 0x1b8df4: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1b8df4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1b8df8:
    // 0x1b8df8: 0xc0a2dcc  jal         func_28B730
label_1b8dfc:
    if (ctx->pc == 0x1B8DFCu) {
        ctx->pc = 0x1B8DFCu;
            // 0x1b8dfc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8E00u;
        goto label_1b8e00;
    }
    ctx->pc = 0x1B8DF8u;
    SET_GPR_U32(ctx, 31, 0x1B8E00u);
    ctx->pc = 0x1B8DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8DF8u;
            // 0x1b8dfc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B730u;
    if (runtime->hasFunction(0x28B730u)) {
        auto targetFn = runtime->lookupFunction(0x28B730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E00u; }
        if (ctx->pc != 0x1B8E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Print__18MessageTaskManagerFPciii_0x28b730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E00u; }
        if (ctx->pc != 0x1B8E00u) { return; }
    }
    ctx->pc = 0x1B8E00u;
label_1b8e00:
    // 0x1b8e00: 0x8645006c  lh          $a1, 0x6C($s2)
    ctx->pc = 0x1b8e00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
label_1b8e04:
    // 0x1b8e04: 0x8f848da0  lw          $a0, -0x7260($gp)
    ctx->pc = 0x1b8e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
label_1b8e08:
    // 0x1b8e08: 0xc0677fc  jal         func_19DFF0
label_1b8e0c:
    if (ctx->pc == 0x1B8E0Cu) {
        ctx->pc = 0x1B8E0Cu;
            // 0x1b8e0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B8E10u;
        goto label_1b8e10;
    }
    ctx->pc = 0x1B8E08u;
    SET_GPR_U32(ctx, 31, 0x1B8E10u);
    ctx->pc = 0x1B8E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8E08u;
            // 0x1b8e0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DFF0u;
    if (runtime->hasFunction(0x19DFF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E10u; }
        if (ctx->pc != 0x1B8E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItem__16CUserDataManagerFii_0x19dff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E10u; }
        if (ctx->pc != 0x1B8E10u) { return; }
    }
    ctx->pc = 0x1B8E10u;
label_1b8e10:
    // 0x1b8e10: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1b8e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b8e14:
    // 0x1b8e14: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1b8e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1b8e18:
    // 0x1b8e18: 0xae43007c  sw          $v1, 0x7C($s2)
    ctx->pc = 0x1b8e18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 3));
label_1b8e1c:
    // 0x1b8e1c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x1b8e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_1b8e20:
    // 0x1b8e20: 0xa6440052  sh          $a0, 0x52($s2)
    ctx->pc = 0x1b8e20u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 82), (uint16_t)GPR_U32(ctx, 4));
label_1b8e24:
    // 0x1b8e24: 0xae43004c  sw          $v1, 0x4C($s2)
    ctx->pc = 0x1b8e24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 3));
label_1b8e28:
    // 0x1b8e28: 0x82440060  lb          $a0, 0x60($s2)
    ctx->pc = 0x1b8e28u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 96)));
label_1b8e2c:
    // 0x1b8e2c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1b8e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1b8e30:
    // 0x1b8e30: 0x14830050  bne         $a0, $v1, . + 4 + (0x50 << 2)
label_1b8e34:
    if (ctx->pc == 0x1B8E34u) {
        ctx->pc = 0x1B8E34u;
            // 0x1b8e34: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1B8E38u;
        goto label_1b8e38;
    }
    ctx->pc = 0x1B8E30u;
    {
        const bool branch_taken_0x1b8e30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B8E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8E30u;
            // 0x1b8e34: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8e30) {
            ctx->pc = 0x1B8F74u;
            goto label_1b8f74;
        }
    }
    ctx->pc = 0x1B8E38u;
label_1b8e38:
    // 0x1b8e38: 0xc04c018  jal         func_130060
label_1b8e3c:
    if (ctx->pc == 0x1B8E3Cu) {
        ctx->pc = 0x1B8E3Cu;
            // 0x1b8e3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8E40u;
        goto label_1b8e40;
    }
    ctx->pc = 0x1B8E38u;
    SET_GPR_U32(ctx, 31, 0x1B8E40u);
    ctx->pc = 0x1B8E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8E38u;
            // 0x1b8e3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E40u; }
        if (ctx->pc != 0x1B8E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E40u; }
        if (ctx->pc != 0x1B8E40u) { return; }
    }
    ctx->pc = 0x1B8E40u;
label_1b8e40:
    // 0x1b8e40: 0xc6420054  lwc1        $f2, 0x54($s2)
    ctx->pc = 0x1b8e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b8e44:
    // 0x1b8e44: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1b8e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1b8e48:
    // 0x1b8e48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b8e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b8e4c:
    // 0x1b8e4c: 0x0  nop
    ctx->pc = 0x1b8e4cu;
    // NOP
label_1b8e50:
    // 0x1b8e50: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b8e50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b8e54:
    // 0x1b8e54: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b8e54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8e58:
    // 0x1b8e58: 0x0  nop
    ctx->pc = 0x1b8e58u;
    // NOP
label_1b8e5c:
    // 0x1b8e5c: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
label_1b8e60:
    if (ctx->pc == 0x1B8E60u) {
        ctx->pc = 0x1B8E64u;
        goto label_1b8e64;
    }
    ctx->pc = 0x1B8E5Cu;
    {
        const bool branch_taken_0x1b8e5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8e5c) {
            ctx->pc = 0x1B8EDCu;
            goto label_1b8edc;
        }
    }
    ctx->pc = 0x1B8E64u;
label_1b8e64:
    // 0x1b8e64: 0xc6410058  lwc1        $f1, 0x58($s2)
    ctx->pc = 0x1b8e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8e68:
    // 0x1b8e68: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1b8e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_1b8e6c:
    // 0x1b8e6c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b8e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1b8e70:
    // 0x1b8e70: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x1b8e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_1b8e74:
    // 0x1b8e74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8e78:
    // 0x1b8e78: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1b8e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1b8e7c:
    // 0x1b8e7c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b8e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b8e80:
    // 0x1b8e80: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1b8e80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1b8e84:
    // 0x1b8e84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b8e84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b8e88:
    // 0x1b8e88: 0xe6410054  swc1        $f1, 0x54($s2)
    ctx->pc = 0x1b8e88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
label_1b8e8c:
    // 0x1b8e8c: 0xc041c3e  jal         func_1070F8
label_1b8e90:
    if (ctx->pc == 0x1B8E90u) {
        ctx->pc = 0x1B8E90u;
            // 0x1b8e90: 0xe6400054  swc1        $f0, 0x54($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
        ctx->pc = 0x1B8E94u;
        goto label_1b8e94;
    }
    ctx->pc = 0x1B8E8Cu;
    SET_GPR_U32(ctx, 31, 0x1B8E94u);
    ctx->pc = 0x1B8E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8E8Cu;
            // 0x1b8e90: 0xe6400054  swc1        $f0, 0x54($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E94u; }
        if (ctx->pc != 0x1B8E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E94u; }
        if (ctx->pc != 0x1B8E94u) { return; }
    }
    ctx->pc = 0x1B8E94u;
label_1b8e94:
    // 0x1b8e94: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x1b8e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_1b8e98:
    // 0x1b8e98: 0xc041be0  jal         func_106F80
label_1b8e9c:
    if (ctx->pc == 0x1B8E9Cu) {
        ctx->pc = 0x1B8E9Cu;
            // 0x1b8e9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8EA0u;
        goto label_1b8ea0;
    }
    ctx->pc = 0x1B8E98u;
    SET_GPR_U32(ctx, 31, 0x1B8EA0u);
    ctx->pc = 0x1B8E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8E98u;
            // 0x1b8e9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8EA0u; }
        if (ctx->pc != 0x1B8EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8EA0u; }
        if (ctx->pc != 0x1B8EA0u) { return; }
    }
    ctx->pc = 0x1B8EA0u;
label_1b8ea0:
    // 0x1b8ea0: 0xc64c0054  lwc1        $f12, 0x54($s2)
    ctx->pc = 0x1b8ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b8ea4:
    // 0x1b8ea4: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x1b8ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_1b8ea8:
    // 0x1b8ea8: 0xc041e96  jal         func_107A58
label_1b8eac:
    if (ctx->pc == 0x1B8EACu) {
        ctx->pc = 0x1B8EACu;
            // 0x1b8eac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8EB0u;
        goto label_1b8eb0;
    }
    ctx->pc = 0x1B8EA8u;
    SET_GPR_U32(ctx, 31, 0x1B8EB0u);
    ctx->pc = 0x1B8EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8EA8u;
            // 0x1b8eac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8EB0u; }
        if (ctx->pc != 0x1B8EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8EB0u; }
        if (ctx->pc != 0x1B8EB0u) { return; }
    }
    ctx->pc = 0x1B8EB0u;
label_1b8eb0:
    // 0x1b8eb0: 0xc7a102c4  lwc1        $f1, 0x2C4($sp)
    ctx->pc = 0x1b8eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8eb4:
    // 0x1b8eb4: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x1b8eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_1b8eb8:
    // 0x1b8eb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8ebc:
    // 0x1b8ebc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b8ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b8ec0:
    // 0x1b8ec0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b8ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b8ec4:
    // 0x1b8ec4: 0x27a602c0  addiu       $a2, $sp, 0x2C0
    ctx->pc = 0x1b8ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_1b8ec8:
    // 0x1b8ec8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b8ec8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b8ecc:
    // 0x1b8ecc: 0xc041c38  jal         func_1070E0
label_1b8ed0:
    if (ctx->pc == 0x1B8ED0u) {
        ctx->pc = 0x1B8ED0u;
            // 0x1b8ed0: 0xe7a002c4  swc1        $f0, 0x2C4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 708), bits); }
        ctx->pc = 0x1B8ED4u;
        goto label_1b8ed4;
    }
    ctx->pc = 0x1B8ECCu;
    SET_GPR_U32(ctx, 31, 0x1B8ED4u);
    ctx->pc = 0x1B8ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8ECCu;
            // 0x1b8ed0: 0xe7a002c4  swc1        $f0, 0x2C4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 708), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8ED4u; }
        if (ctx->pc != 0x1B8ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8ED4u; }
        if (ctx->pc != 0x1B8ED4u) { return; }
    }
    ctx->pc = 0x1B8ED4u;
label_1b8ed4:
    // 0x1b8ed4: 0x10000028  b           . + 4 + (0x28 << 2)
label_1b8ed8:
    if (ctx->pc == 0x1B8ED8u) {
        ctx->pc = 0x1B8ED8u;
            // 0x1b8ed8: 0x82440060  lb          $a0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->pc = 0x1B8EDCu;
        goto label_1b8edc;
    }
    ctx->pc = 0x1B8ED4u;
    {
        const bool branch_taken_0x1b8ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8ED4u;
            // 0x1b8ed8: 0x82440060  lb          $a0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ed4) {
            ctx->pc = 0x1B8F78u;
            goto label_1b8f78;
        }
    }
    ctx->pc = 0x1B8EDCu;
label_1b8edc:
    // 0x1b8edc: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x1b8edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_1b8ee0:
    // 0x1b8ee0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1b8ee4:
    if (ctx->pc == 0x1B8EE4u) {
        ctx->pc = 0x1B8EE8u;
        goto label_1b8ee8;
    }
    ctx->pc = 0x1B8EE0u;
    {
        const bool branch_taken_0x1b8ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8ee0) {
            ctx->pc = 0x1B8F04u;
            goto label_1b8f04;
        }
    }
    ctx->pc = 0x1B8EE8u;
label_1b8ee8:
    // 0x1b8ee8: 0xc065810  jal         func_196040
label_1b8eec:
    if (ctx->pc == 0x1B8EECu) {
        ctx->pc = 0x1B8EECu;
            // 0x1b8eec: 0x8644006c  lh          $a0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->pc = 0x1B8EF0u;
        goto label_1b8ef0;
    }
    ctx->pc = 0x1B8EE8u;
    SET_GPR_U32(ctx, 31, 0x1B8EF0u);
    ctx->pc = 0x1B8EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8EE8u;
            // 0x1b8eec: 0x8644006c  lh          $a0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8EF0u; }
        if (ctx->pc != 0x1B8EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8EF0u; }
        if (ctx->pc != 0x1B8EF0u) { return; }
    }
    ctx->pc = 0x1B8EF0u;
label_1b8ef0:
    // 0x1b8ef0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1b8ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1b8ef4:
    // 0x1b8ef4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b8ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b8ef8:
    // 0x1b8ef8: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x1b8ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_1b8efc:
    // 0x1b8efc: 0xc04a234  jal         func_1288D0
label_1b8f00:
    if (ctx->pc == 0x1B8F00u) {
        ctx->pc = 0x1B8F00u;
            // 0x1b8f00: 0x24a569d0  addiu       $a1, $a1, 0x69D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27088));
        ctx->pc = 0x1B8F04u;
        goto label_1b8f04;
    }
    ctx->pc = 0x1B8EFCu;
    SET_GPR_U32(ctx, 31, 0x1B8F04u);
    ctx->pc = 0x1B8F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8EFCu;
            // 0x1b8f00: 0x24a569d0  addiu       $a1, $a1, 0x69D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F04u; }
        if (ctx->pc != 0x1B8F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F04u; }
        if (ctx->pc != 0x1B8F04u) { return; }
    }
    ctx->pc = 0x1B8F04u;
label_1b8f04:
    // 0x1b8f04: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x1b8f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_1b8f08:
    // 0x1b8f08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8f0c:
    // 0x1b8f0c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1b8f10:
    if (ctx->pc == 0x1B8F10u) {
        ctx->pc = 0x1B8F14u;
        goto label_1b8f14;
    }
    ctx->pc = 0x1B8F0Cu;
    {
        const bool branch_taken_0x1b8f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b8f0c) {
            ctx->pc = 0x1B8F30u;
            goto label_1b8f30;
        }
    }
    ctx->pc = 0x1B8F14u;
label_1b8f14:
    // 0x1b8f14: 0xc065810  jal         func_196040
label_1b8f18:
    if (ctx->pc == 0x1B8F18u) {
        ctx->pc = 0x1B8F18u;
            // 0x1b8f18: 0x8644006c  lh          $a0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->pc = 0x1B8F1Cu;
        goto label_1b8f1c;
    }
    ctx->pc = 0x1B8F14u;
    SET_GPR_U32(ctx, 31, 0x1B8F1Cu);
    ctx->pc = 0x1B8F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8F14u;
            // 0x1b8f18: 0x8644006c  lh          $a0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F1Cu; }
        if (ctx->pc != 0x1B8F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F1Cu; }
        if (ctx->pc != 0x1B8F1Cu) { return; }
    }
    ctx->pc = 0x1B8F1Cu;
label_1b8f1c:
    // 0x1b8f1c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1b8f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1b8f20:
    // 0x1b8f20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b8f20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b8f24:
    // 0x1b8f24: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x1b8f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_1b8f28:
    // 0x1b8f28: 0xc04a234  jal         func_1288D0
label_1b8f2c:
    if (ctx->pc == 0x1B8F2Cu) {
        ctx->pc = 0x1B8F2Cu;
            // 0x1b8f2c: 0x24a569f0  addiu       $a1, $a1, 0x69F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27120));
        ctx->pc = 0x1B8F30u;
        goto label_1b8f30;
    }
    ctx->pc = 0x1B8F28u;
    SET_GPR_U32(ctx, 31, 0x1B8F30u);
    ctx->pc = 0x1B8F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8F28u;
            // 0x1b8f2c: 0x24a569f0  addiu       $a1, $a1, 0x69F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F30u; }
        if (ctx->pc != 0x1B8F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F30u; }
        if (ctx->pc != 0x1B8F30u) { return; }
    }
    ctx->pc = 0x1B8F30u;
label_1b8f30:
    // 0x1b8f30: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1b8f30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1b8f34:
    // 0x1b8f34: 0x27a502d0  addiu       $a1, $sp, 0x2D0
    ctx->pc = 0x1b8f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_1b8f38:
    // 0x1b8f38: 0x2484ff90  addiu       $a0, $a0, -0x70
    ctx->pc = 0x1b8f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
label_1b8f3c:
    // 0x1b8f3c: 0x2406005a  addiu       $a2, $zero, 0x5A
    ctx->pc = 0x1b8f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1b8f40:
    // 0x1b8f40: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1b8f40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1b8f44:
    // 0x1b8f44: 0xc0a2dcc  jal         func_28B730
label_1b8f48:
    if (ctx->pc == 0x1B8F48u) {
        ctx->pc = 0x1B8F48u;
            // 0x1b8f48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8F4Cu;
        goto label_1b8f4c;
    }
    ctx->pc = 0x1B8F44u;
    SET_GPR_U32(ctx, 31, 0x1B8F4Cu);
    ctx->pc = 0x1B8F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8F44u;
            // 0x1b8f48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B730u;
    if (runtime->hasFunction(0x28B730u)) {
        auto targetFn = runtime->lookupFunction(0x28B730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F4Cu; }
        if (ctx->pc != 0x1B8F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Print__18MessageTaskManagerFPciii_0x28b730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F4Cu; }
        if (ctx->pc != 0x1B8F4Cu) { return; }
    }
    ctx->pc = 0x1B8F4Cu;
label_1b8f4c:
    // 0x1b8f4c: 0x8645006c  lh          $a1, 0x6C($s2)
    ctx->pc = 0x1b8f4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
label_1b8f50:
    // 0x1b8f50: 0x8f848da0  lw          $a0, -0x7260($gp)
    ctx->pc = 0x1b8f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
label_1b8f54:
    // 0x1b8f54: 0xc0677fc  jal         func_19DFF0
label_1b8f58:
    if (ctx->pc == 0x1B8F58u) {
        ctx->pc = 0x1B8F58u;
            // 0x1b8f58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B8F5Cu;
        goto label_1b8f5c;
    }
    ctx->pc = 0x1B8F54u;
    SET_GPR_U32(ctx, 31, 0x1B8F5Cu);
    ctx->pc = 0x1B8F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8F54u;
            // 0x1b8f58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DFF0u;
    if (runtime->hasFunction(0x19DFF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F5Cu; }
        if (ctx->pc != 0x1B8F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItem__16CUserDataManagerFii_0x19dff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F5Cu; }
        if (ctx->pc != 0x1B8F5Cu) { return; }
    }
    ctx->pc = 0x1B8F5Cu;
label_1b8f5c:
    // 0x1b8f5c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1b8f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b8f60:
    // 0x1b8f60: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1b8f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1b8f64:
    // 0x1b8f64: 0xae43007c  sw          $v1, 0x7C($s2)
    ctx->pc = 0x1b8f64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 3));
label_1b8f68:
    // 0x1b8f68: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x1b8f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_1b8f6c:
    // 0x1b8f6c: 0xa6440052  sh          $a0, 0x52($s2)
    ctx->pc = 0x1b8f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 82), (uint16_t)GPR_U32(ctx, 4));
label_1b8f70:
    // 0x1b8f70: 0xae43004c  sw          $v1, 0x4C($s2)
    ctx->pc = 0x1b8f70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 3));
label_1b8f74:
    // 0x1b8f74: 0x82440060  lb          $a0, 0x60($s2)
    ctx->pc = 0x1b8f74u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 96)));
label_1b8f78:
    // 0x1b8f78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b8f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8f7c:
    // 0x1b8f7c: 0x14830042  bne         $a0, $v1, . + 4 + (0x42 << 2)
label_1b8f80:
    if (ctx->pc == 0x1B8F80u) {
        ctx->pc = 0x1B8F80u;
            // 0x1b8f80: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1B8F84u;
        goto label_1b8f84;
    }
    ctx->pc = 0x1B8F7Cu;
    {
        const bool branch_taken_0x1b8f7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B8F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8F7Cu;
            // 0x1b8f80: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f7c) {
            ctx->pc = 0x1B9088u;
            goto label_1b9088;
        }
    }
    ctx->pc = 0x1B8F84u;
label_1b8f84:
    // 0x1b8f84: 0xc04c018  jal         func_130060
label_1b8f88:
    if (ctx->pc == 0x1B8F88u) {
        ctx->pc = 0x1B8F88u;
            // 0x1b8f88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8F8Cu;
        goto label_1b8f8c;
    }
    ctx->pc = 0x1B8F84u;
    SET_GPR_U32(ctx, 31, 0x1B8F8Cu);
    ctx->pc = 0x1B8F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8F84u;
            // 0x1b8f88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F8Cu; }
        if (ctx->pc != 0x1B8F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8F8Cu; }
        if (ctx->pc != 0x1B8F8Cu) { return; }
    }
    ctx->pc = 0x1B8F8Cu;
label_1b8f8c:
    // 0x1b8f8c: 0xc6420054  lwc1        $f2, 0x54($s2)
    ctx->pc = 0x1b8f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b8f90:
    // 0x1b8f90: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1b8f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1b8f94:
    // 0x1b8f94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b8f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b8f98:
    // 0x1b8f98: 0x0  nop
    ctx->pc = 0x1b8f98u;
    // NOP
label_1b8f9c:
    // 0x1b8f9c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b8f9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b8fa0:
    // 0x1b8fa0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b8fa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8fa4:
    // 0x1b8fa4: 0x0  nop
    ctx->pc = 0x1b8fa4u;
    // NOP
label_1b8fa8:
    // 0x1b8fa8: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
label_1b8fac:
    if (ctx->pc == 0x1B8FACu) {
        ctx->pc = 0x1B8FB0u;
        goto label_1b8fb0;
    }
    ctx->pc = 0x1B8FA8u;
    {
        const bool branch_taken_0x1b8fa8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8fa8) {
            ctx->pc = 0x1B9028u;
            goto label_1b9028;
        }
    }
    ctx->pc = 0x1B8FB0u;
label_1b8fb0:
    // 0x1b8fb0: 0xc6410058  lwc1        $f1, 0x58($s2)
    ctx->pc = 0x1b8fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8fb4:
    // 0x1b8fb4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1b8fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_1b8fb8:
    // 0x1b8fb8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b8fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1b8fbc:
    // 0x1b8fbc: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x1b8fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_1b8fc0:
    // 0x1b8fc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8fc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b8fc4:
    // 0x1b8fc4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1b8fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1b8fc8:
    // 0x1b8fc8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b8fc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b8fcc:
    // 0x1b8fcc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1b8fccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1b8fd0:
    // 0x1b8fd0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b8fd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b8fd4:
    // 0x1b8fd4: 0xe6410054  swc1        $f1, 0x54($s2)
    ctx->pc = 0x1b8fd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
label_1b8fd8:
    // 0x1b8fd8: 0xc041c3e  jal         func_1070F8
label_1b8fdc:
    if (ctx->pc == 0x1B8FDCu) {
        ctx->pc = 0x1B8FDCu;
            // 0x1b8fdc: 0xe6400054  swc1        $f0, 0x54($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
        ctx->pc = 0x1B8FE0u;
        goto label_1b8fe0;
    }
    ctx->pc = 0x1B8FD8u;
    SET_GPR_U32(ctx, 31, 0x1B8FE0u);
    ctx->pc = 0x1B8FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8FD8u;
            // 0x1b8fdc: 0xe6400054  swc1        $f0, 0x54($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8FE0u; }
        if (ctx->pc != 0x1B8FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8FE0u; }
        if (ctx->pc != 0x1B8FE0u) { return; }
    }
    ctx->pc = 0x1B8FE0u;
label_1b8fe0:
    // 0x1b8fe0: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x1b8fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_1b8fe4:
    // 0x1b8fe4: 0xc041be0  jal         func_106F80
label_1b8fe8:
    if (ctx->pc == 0x1B8FE8u) {
        ctx->pc = 0x1B8FE8u;
            // 0x1b8fe8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8FECu;
        goto label_1b8fec;
    }
    ctx->pc = 0x1B8FE4u;
    SET_GPR_U32(ctx, 31, 0x1B8FECu);
    ctx->pc = 0x1B8FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8FE4u;
            // 0x1b8fe8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8FECu; }
        if (ctx->pc != 0x1B8FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8FECu; }
        if (ctx->pc != 0x1B8FECu) { return; }
    }
    ctx->pc = 0x1B8FECu;
label_1b8fec:
    // 0x1b8fec: 0xc64c0054  lwc1        $f12, 0x54($s2)
    ctx->pc = 0x1b8fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b8ff0:
    // 0x1b8ff0: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x1b8ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_1b8ff4:
    // 0x1b8ff4: 0xc041e96  jal         func_107A58
label_1b8ff8:
    if (ctx->pc == 0x1B8FF8u) {
        ctx->pc = 0x1B8FF8u;
            // 0x1b8ff8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8FFCu;
        goto label_1b8ffc;
    }
    ctx->pc = 0x1B8FF4u;
    SET_GPR_U32(ctx, 31, 0x1B8FFCu);
    ctx->pc = 0x1B8FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8FF4u;
            // 0x1b8ff8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8FFCu; }
        if (ctx->pc != 0x1B8FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8FFCu; }
        if (ctx->pc != 0x1B8FFCu) { return; }
    }
    ctx->pc = 0x1B8FFCu;
label_1b8ffc:
    // 0x1b8ffc: 0xc7a10314  lwc1        $f1, 0x314($sp)
    ctx->pc = 0x1b8ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9000:
    // 0x1b9000: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x1b9000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_1b9004:
    // 0x1b9004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9008:
    // 0x1b9008: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b9008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b900c:
    // 0x1b900c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b900cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b9010:
    // 0x1b9010: 0x27a60310  addiu       $a2, $sp, 0x310
    ctx->pc = 0x1b9010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_1b9014:
    // 0x1b9014: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b9014u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b9018:
    // 0x1b9018: 0xc041c38  jal         func_1070E0
label_1b901c:
    if (ctx->pc == 0x1B901Cu) {
        ctx->pc = 0x1B901Cu;
            // 0x1b901c: 0xe7a00314  swc1        $f0, 0x314($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 788), bits); }
        ctx->pc = 0x1B9020u;
        goto label_1b9020;
    }
    ctx->pc = 0x1B9018u;
    SET_GPR_U32(ctx, 31, 0x1B9020u);
    ctx->pc = 0x1B901Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9018u;
            // 0x1b901c: 0xe7a00314  swc1        $f0, 0x314($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 788), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9020u; }
        if (ctx->pc != 0x1B9020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9020u; }
        if (ctx->pc != 0x1B9020u) { return; }
    }
    ctx->pc = 0x1B9020u;
label_1b9020:
    // 0x1b9020: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1b9024:
    if (ctx->pc == 0x1B9024u) {
        ctx->pc = 0x1B9024u;
            // 0x1b9024: 0x82430074  lb          $v1, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->pc = 0x1B9028u;
        goto label_1b9028;
    }
    ctx->pc = 0x1B9020u;
    {
        const bool branch_taken_0x1b9020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9020u;
            // 0x1b9024: 0x82430074  lb          $v1, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9020) {
            ctx->pc = 0x1B908Cu;
            goto label_1b908c;
        }
    }
    ctx->pc = 0x1B9028u;
label_1b9028:
    // 0x1b9028: 0xc64c0064  lwc1        $f12, 0x64($s2)
    ctx->pc = 0x1b9028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b902c:
    // 0x1b902c: 0x8645006c  lh          $a1, 0x6C($s2)
    ctx->pc = 0x1b902cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
label_1b9030:
    // 0x1b9030: 0xc07a2b8  jal         func_1E8AE0
label_1b9034:
    if (ctx->pc == 0x1B9034u) {
        ctx->pc = 0x1B9034u;
            // 0x1b9034: 0x8644006a  lh          $a0, 0x6A($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 106)));
        ctx->pc = 0x1B9038u;
        goto label_1b9038;
    }
    ctx->pc = 0x1B9030u;
    SET_GPR_U32(ctx, 31, 0x1B9038u);
    ctx->pc = 0x1B9034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9030u;
            // 0x1b9034: 0x8644006a  lh          $a0, 0x6A($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 106)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8AE0u;
    if (runtime->hasFunction(0x1E8AE0u)) {
        auto targetFn = runtime->lookupFunction(0x1E8AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9038u; }
        if (ctx->pc != 0x1B9038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddExpWeaponParam__Ffii_0x1e8ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9038u; }
        if (ctx->pc != 0x1B9038u) { return; }
    }
    ctx->pc = 0x1B9038u;
label_1b9038:
    // 0x1b9038: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x1b9038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1b903c:
    // 0x1b903c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1b903cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1b9040:
    // 0x1b9040: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b9040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b9044:
    // 0x1b9044: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1b9044u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1b9048:
    // 0x1b9048: 0x8c24c4d0  lw          $a0, -0x3B30($at)
    ctx->pc = 0x1b9048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952144)));
label_1b904c:
    // 0x1b904c: 0xc063818  jal         func_18E060
label_1b9050:
    if (ctx->pc == 0x1B9050u) {
        ctx->pc = 0x1B9050u;
            // 0x1b9050: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B9054u;
        goto label_1b9054;
    }
    ctx->pc = 0x1B904Cu;
    SET_GPR_U32(ctx, 31, 0x1B9054u);
    ctx->pc = 0x1B9050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B904Cu;
            // 0x1b9050: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9054u; }
        if (ctx->pc != 0x1B9054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9054u; }
        if (ctx->pc != 0x1B9054u) { return; }
    }
    ctx->pc = 0x1B9054u;
label_1b9054:
    // 0x1b9054: 0xae40007c  sw          $zero, 0x7C($s2)
    ctx->pc = 0x1b9054u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
label_1b9058:
    // 0x1b9058: 0x82440074  lb          $a0, 0x74($s2)
    ctx->pc = 0x1b9058u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_1b905c:
    // 0x1b905c: 0x480000a  bltz        $a0, . + 4 + (0xA << 2)
label_1b9060:
    if (ctx->pc == 0x1B9060u) {
        ctx->pc = 0x1B9060u;
            // 0x1b9060: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->pc = 0x1B9064u;
        goto label_1b9064;
    }
    ctx->pc = 0x1B905Cu;
    {
        const bool branch_taken_0x1b905c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1B9060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B905Cu;
            // 0x1b9060: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b905c) {
            ctx->pc = 0x1B9088u;
            goto label_1b9088;
        }
    }
    ctx->pc = 0x1B9064u;
label_1b9064:
    // 0x1b9064: 0x3c0201eb  lui         $v0, 0x1EB
    ctx->pc = 0x1b9064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)491 << 16));
label_1b9068:
    // 0x1b9068: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b9068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b906c:
    // 0x1b906c: 0x2442e190  addiu       $v0, $v0, -0x1E70
    ctx->pc = 0x1b906cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959504));
label_1b9070:
    // 0x1b9070: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1b9070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1b9074:
    // 0x1b9074: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b9074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9078:
    // 0x1b9078: 0xc0708f0  jal         func_1C23C0
label_1b907c:
    if (ctx->pc == 0x1B907Cu) {
        ctx->pc = 0x1B907Cu;
            // 0x1b907c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1B9080u;
        goto label_1b9080;
    }
    ctx->pc = 0x1B9078u;
    SET_GPR_U32(ctx, 31, 0x1B9080u);
    ctx->pc = 0x1B907Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9078u;
            // 0x1b907c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C23C0u;
    if (runtime->hasFunction(0x1C23C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C23C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9080u; }
        if (ctx->pc != 0x1B9080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMode__10CAfterWireFi_0x1c23c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9080u; }
        if (ctx->pc != 0x1B9080u) { return; }
    }
    ctx->pc = 0x1B9080u;
label_1b9080:
    // 0x1b9080: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b9080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b9084:
    // 0x1b9084: 0xa2430074  sb          $v1, 0x74($s2)
    ctx->pc = 0x1b9084u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 3));
label_1b9088:
    // 0x1b9088: 0x82430074  lb          $v1, 0x74($s2)
    ctx->pc = 0x1b9088u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_1b908c:
    // 0x1b908c: 0x4600009  bltz        $v1, . + 4 + (0x9 << 2)
label_1b9090:
    if (ctx->pc == 0x1B9090u) {
        ctx->pc = 0x1B9094u;
        goto label_1b9094;
    }
    ctx->pc = 0x1B908Cu;
    {
        const bool branch_taken_0x1b908c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1b908c) {
            ctx->pc = 0x1B90B4u;
            goto label_1b90b4;
        }
    }
    ctx->pc = 0x1B9094u;
label_1b9094:
    // 0x1b9094: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1b9094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1b9098:
    // 0x1b9098: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b9098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b909c:
    // 0x1b909c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1b909cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b90a0:
    // 0x1b90a0: 0x3c0201eb  lui         $v0, 0x1EB
    ctx->pc = 0x1b90a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)491 << 16));
label_1b90a4:
    // 0x1b90a4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1b90a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1b90a8:
    // 0x1b90a8: 0x2442e190  addiu       $v0, $v0, -0x1E70
    ctx->pc = 0x1b90a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959504));
label_1b90ac:
    // 0x1b90ac: 0xc0708f8  jal         func_1C23E0
label_1b90b0:
    if (ctx->pc == 0x1B90B0u) {
        ctx->pc = 0x1B90B0u;
            // 0x1b90b0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1B90B4u;
        goto label_1b90b4;
    }
    ctx->pc = 0x1B90ACu;
    SET_GPR_U32(ctx, 31, 0x1B90B4u);
    ctx->pc = 0x1B90B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B90ACu;
            // 0x1b90b0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C23E0u;
    if (runtime->hasFunction(0x1C23E0u)) {
        auto targetFn = runtime->lookupFunction(0x1C23E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B90B4u; }
        if (ctx->pc != 0x1B90B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__10CAfterWireFPf_0x1c23e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B90B4u; }
        if (ctx->pc != 0x1B90B4u) { return; }
    }
    ctx->pc = 0x1B90B4u;
label_1b90b4:
    // 0x1b90b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b90b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b90b8:
    // 0x1b90b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b90b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b90bc:
    // 0x1b90bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b90bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b90c0:
    // 0x1b90c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b90c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b90c4:
    // 0x1b90c4: 0x3e00008  jr          $ra
label_1b90c8:
    if (ctx->pc == 0x1B90C8u) {
        ctx->pc = 0x1B90C8u;
            // 0x1b90c8: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->pc = 0x1B90CCu;
        goto label_fallthrough_0x1b90c4;
    }
    ctx->pc = 0x1B90C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B90C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B90C4u;
            // 0x1b90c8: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b90c4:
    ctx->pc = 0x1B90CCu;
}
