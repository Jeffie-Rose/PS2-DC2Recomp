#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: KeyStep__14CMenuMosSelectFv
// Address: 0x2b7320 - 0x2b8cf4
void KeyStep__14CMenuMosSelectFv_0x2b7320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KeyStep__14CMenuMosSelectFv_0x2b7320");
#endif

    switch (ctx->pc) {
        case 0x2b7320u: goto label_2b7320;
        case 0x2b7324u: goto label_2b7324;
        case 0x2b7328u: goto label_2b7328;
        case 0x2b732cu: goto label_2b732c;
        case 0x2b7330u: goto label_2b7330;
        case 0x2b7334u: goto label_2b7334;
        case 0x2b7338u: goto label_2b7338;
        case 0x2b733cu: goto label_2b733c;
        case 0x2b7340u: goto label_2b7340;
        case 0x2b7344u: goto label_2b7344;
        case 0x2b7348u: goto label_2b7348;
        case 0x2b734cu: goto label_2b734c;
        case 0x2b7350u: goto label_2b7350;
        case 0x2b7354u: goto label_2b7354;
        case 0x2b7358u: goto label_2b7358;
        case 0x2b735cu: goto label_2b735c;
        case 0x2b7360u: goto label_2b7360;
        case 0x2b7364u: goto label_2b7364;
        case 0x2b7368u: goto label_2b7368;
        case 0x2b736cu: goto label_2b736c;
        case 0x2b7370u: goto label_2b7370;
        case 0x2b7374u: goto label_2b7374;
        case 0x2b7378u: goto label_2b7378;
        case 0x2b737cu: goto label_2b737c;
        case 0x2b7380u: goto label_2b7380;
        case 0x2b7384u: goto label_2b7384;
        case 0x2b7388u: goto label_2b7388;
        case 0x2b738cu: goto label_2b738c;
        case 0x2b7390u: goto label_2b7390;
        case 0x2b7394u: goto label_2b7394;
        case 0x2b7398u: goto label_2b7398;
        case 0x2b739cu: goto label_2b739c;
        case 0x2b73a0u: goto label_2b73a0;
        case 0x2b73a4u: goto label_2b73a4;
        case 0x2b73a8u: goto label_2b73a8;
        case 0x2b73acu: goto label_2b73ac;
        case 0x2b73b0u: goto label_2b73b0;
        case 0x2b73b4u: goto label_2b73b4;
        case 0x2b73b8u: goto label_2b73b8;
        case 0x2b73bcu: goto label_2b73bc;
        case 0x2b73c0u: goto label_2b73c0;
        case 0x2b73c4u: goto label_2b73c4;
        case 0x2b73c8u: goto label_2b73c8;
        case 0x2b73ccu: goto label_2b73cc;
        case 0x2b73d0u: goto label_2b73d0;
        case 0x2b73d4u: goto label_2b73d4;
        case 0x2b73d8u: goto label_2b73d8;
        case 0x2b73dcu: goto label_2b73dc;
        case 0x2b73e0u: goto label_2b73e0;
        case 0x2b73e4u: goto label_2b73e4;
        case 0x2b73e8u: goto label_2b73e8;
        case 0x2b73ecu: goto label_2b73ec;
        case 0x2b73f0u: goto label_2b73f0;
        case 0x2b73f4u: goto label_2b73f4;
        case 0x2b73f8u: goto label_2b73f8;
        case 0x2b73fcu: goto label_2b73fc;
        case 0x2b7400u: goto label_2b7400;
        case 0x2b7404u: goto label_2b7404;
        case 0x2b7408u: goto label_2b7408;
        case 0x2b740cu: goto label_2b740c;
        case 0x2b7410u: goto label_2b7410;
        case 0x2b7414u: goto label_2b7414;
        case 0x2b7418u: goto label_2b7418;
        case 0x2b741cu: goto label_2b741c;
        case 0x2b7420u: goto label_2b7420;
        case 0x2b7424u: goto label_2b7424;
        case 0x2b7428u: goto label_2b7428;
        case 0x2b742cu: goto label_2b742c;
        case 0x2b7430u: goto label_2b7430;
        case 0x2b7434u: goto label_2b7434;
        case 0x2b7438u: goto label_2b7438;
        case 0x2b743cu: goto label_2b743c;
        case 0x2b7440u: goto label_2b7440;
        case 0x2b7444u: goto label_2b7444;
        case 0x2b7448u: goto label_2b7448;
        case 0x2b744cu: goto label_2b744c;
        case 0x2b7450u: goto label_2b7450;
        case 0x2b7454u: goto label_2b7454;
        case 0x2b7458u: goto label_2b7458;
        case 0x2b745cu: goto label_2b745c;
        case 0x2b7460u: goto label_2b7460;
        case 0x2b7464u: goto label_2b7464;
        case 0x2b7468u: goto label_2b7468;
        case 0x2b746cu: goto label_2b746c;
        case 0x2b7470u: goto label_2b7470;
        case 0x2b7474u: goto label_2b7474;
        case 0x2b7478u: goto label_2b7478;
        case 0x2b747cu: goto label_2b747c;
        case 0x2b7480u: goto label_2b7480;
        case 0x2b7484u: goto label_2b7484;
        case 0x2b7488u: goto label_2b7488;
        case 0x2b748cu: goto label_2b748c;
        case 0x2b7490u: goto label_2b7490;
        case 0x2b7494u: goto label_2b7494;
        case 0x2b7498u: goto label_2b7498;
        case 0x2b749cu: goto label_2b749c;
        case 0x2b74a0u: goto label_2b74a0;
        case 0x2b74a4u: goto label_2b74a4;
        case 0x2b74a8u: goto label_2b74a8;
        case 0x2b74acu: goto label_2b74ac;
        case 0x2b74b0u: goto label_2b74b0;
        case 0x2b74b4u: goto label_2b74b4;
        case 0x2b74b8u: goto label_2b74b8;
        case 0x2b74bcu: goto label_2b74bc;
        case 0x2b74c0u: goto label_2b74c0;
        case 0x2b74c4u: goto label_2b74c4;
        case 0x2b74c8u: goto label_2b74c8;
        case 0x2b74ccu: goto label_2b74cc;
        case 0x2b74d0u: goto label_2b74d0;
        case 0x2b74d4u: goto label_2b74d4;
        case 0x2b74d8u: goto label_2b74d8;
        case 0x2b74dcu: goto label_2b74dc;
        case 0x2b74e0u: goto label_2b74e0;
        case 0x2b74e4u: goto label_2b74e4;
        case 0x2b74e8u: goto label_2b74e8;
        case 0x2b74ecu: goto label_2b74ec;
        case 0x2b74f0u: goto label_2b74f0;
        case 0x2b74f4u: goto label_2b74f4;
        case 0x2b74f8u: goto label_2b74f8;
        case 0x2b74fcu: goto label_2b74fc;
        case 0x2b7500u: goto label_2b7500;
        case 0x2b7504u: goto label_2b7504;
        case 0x2b7508u: goto label_2b7508;
        case 0x2b750cu: goto label_2b750c;
        case 0x2b7510u: goto label_2b7510;
        case 0x2b7514u: goto label_2b7514;
        case 0x2b7518u: goto label_2b7518;
        case 0x2b751cu: goto label_2b751c;
        case 0x2b7520u: goto label_2b7520;
        case 0x2b7524u: goto label_2b7524;
        case 0x2b7528u: goto label_2b7528;
        case 0x2b752cu: goto label_2b752c;
        case 0x2b7530u: goto label_2b7530;
        case 0x2b7534u: goto label_2b7534;
        case 0x2b7538u: goto label_2b7538;
        case 0x2b753cu: goto label_2b753c;
        case 0x2b7540u: goto label_2b7540;
        case 0x2b7544u: goto label_2b7544;
        case 0x2b7548u: goto label_2b7548;
        case 0x2b754cu: goto label_2b754c;
        case 0x2b7550u: goto label_2b7550;
        case 0x2b7554u: goto label_2b7554;
        case 0x2b7558u: goto label_2b7558;
        case 0x2b755cu: goto label_2b755c;
        case 0x2b7560u: goto label_2b7560;
        case 0x2b7564u: goto label_2b7564;
        case 0x2b7568u: goto label_2b7568;
        case 0x2b756cu: goto label_2b756c;
        case 0x2b7570u: goto label_2b7570;
        case 0x2b7574u: goto label_2b7574;
        case 0x2b7578u: goto label_2b7578;
        case 0x2b757cu: goto label_2b757c;
        case 0x2b7580u: goto label_2b7580;
        case 0x2b7584u: goto label_2b7584;
        case 0x2b7588u: goto label_2b7588;
        case 0x2b758cu: goto label_2b758c;
        case 0x2b7590u: goto label_2b7590;
        case 0x2b7594u: goto label_2b7594;
        case 0x2b7598u: goto label_2b7598;
        case 0x2b759cu: goto label_2b759c;
        case 0x2b75a0u: goto label_2b75a0;
        case 0x2b75a4u: goto label_2b75a4;
        case 0x2b75a8u: goto label_2b75a8;
        case 0x2b75acu: goto label_2b75ac;
        case 0x2b75b0u: goto label_2b75b0;
        case 0x2b75b4u: goto label_2b75b4;
        case 0x2b75b8u: goto label_2b75b8;
        case 0x2b75bcu: goto label_2b75bc;
        case 0x2b75c0u: goto label_2b75c0;
        case 0x2b75c4u: goto label_2b75c4;
        case 0x2b75c8u: goto label_2b75c8;
        case 0x2b75ccu: goto label_2b75cc;
        case 0x2b75d0u: goto label_2b75d0;
        case 0x2b75d4u: goto label_2b75d4;
        case 0x2b75d8u: goto label_2b75d8;
        case 0x2b75dcu: goto label_2b75dc;
        case 0x2b75e0u: goto label_2b75e0;
        case 0x2b75e4u: goto label_2b75e4;
        case 0x2b75e8u: goto label_2b75e8;
        case 0x2b75ecu: goto label_2b75ec;
        case 0x2b75f0u: goto label_2b75f0;
        case 0x2b75f4u: goto label_2b75f4;
        case 0x2b75f8u: goto label_2b75f8;
        case 0x2b75fcu: goto label_2b75fc;
        case 0x2b7600u: goto label_2b7600;
        case 0x2b7604u: goto label_2b7604;
        case 0x2b7608u: goto label_2b7608;
        case 0x2b760cu: goto label_2b760c;
        case 0x2b7610u: goto label_2b7610;
        case 0x2b7614u: goto label_2b7614;
        case 0x2b7618u: goto label_2b7618;
        case 0x2b761cu: goto label_2b761c;
        case 0x2b7620u: goto label_2b7620;
        case 0x2b7624u: goto label_2b7624;
        case 0x2b7628u: goto label_2b7628;
        case 0x2b762cu: goto label_2b762c;
        case 0x2b7630u: goto label_2b7630;
        case 0x2b7634u: goto label_2b7634;
        case 0x2b7638u: goto label_2b7638;
        case 0x2b763cu: goto label_2b763c;
        case 0x2b7640u: goto label_2b7640;
        case 0x2b7644u: goto label_2b7644;
        case 0x2b7648u: goto label_2b7648;
        case 0x2b764cu: goto label_2b764c;
        case 0x2b7650u: goto label_2b7650;
        case 0x2b7654u: goto label_2b7654;
        case 0x2b7658u: goto label_2b7658;
        case 0x2b765cu: goto label_2b765c;
        case 0x2b7660u: goto label_2b7660;
        case 0x2b7664u: goto label_2b7664;
        case 0x2b7668u: goto label_2b7668;
        case 0x2b766cu: goto label_2b766c;
        case 0x2b7670u: goto label_2b7670;
        case 0x2b7674u: goto label_2b7674;
        case 0x2b7678u: goto label_2b7678;
        case 0x2b767cu: goto label_2b767c;
        case 0x2b7680u: goto label_2b7680;
        case 0x2b7684u: goto label_2b7684;
        case 0x2b7688u: goto label_2b7688;
        case 0x2b768cu: goto label_2b768c;
        case 0x2b7690u: goto label_2b7690;
        case 0x2b7694u: goto label_2b7694;
        case 0x2b7698u: goto label_2b7698;
        case 0x2b769cu: goto label_2b769c;
        case 0x2b76a0u: goto label_2b76a0;
        case 0x2b76a4u: goto label_2b76a4;
        case 0x2b76a8u: goto label_2b76a8;
        case 0x2b76acu: goto label_2b76ac;
        case 0x2b76b0u: goto label_2b76b0;
        case 0x2b76b4u: goto label_2b76b4;
        case 0x2b76b8u: goto label_2b76b8;
        case 0x2b76bcu: goto label_2b76bc;
        case 0x2b76c0u: goto label_2b76c0;
        case 0x2b76c4u: goto label_2b76c4;
        case 0x2b76c8u: goto label_2b76c8;
        case 0x2b76ccu: goto label_2b76cc;
        case 0x2b76d0u: goto label_2b76d0;
        case 0x2b76d4u: goto label_2b76d4;
        case 0x2b76d8u: goto label_2b76d8;
        case 0x2b76dcu: goto label_2b76dc;
        case 0x2b76e0u: goto label_2b76e0;
        case 0x2b76e4u: goto label_2b76e4;
        case 0x2b76e8u: goto label_2b76e8;
        case 0x2b76ecu: goto label_2b76ec;
        case 0x2b76f0u: goto label_2b76f0;
        case 0x2b76f4u: goto label_2b76f4;
        case 0x2b76f8u: goto label_2b76f8;
        case 0x2b76fcu: goto label_2b76fc;
        case 0x2b7700u: goto label_2b7700;
        case 0x2b7704u: goto label_2b7704;
        case 0x2b7708u: goto label_2b7708;
        case 0x2b770cu: goto label_2b770c;
        case 0x2b7710u: goto label_2b7710;
        case 0x2b7714u: goto label_2b7714;
        case 0x2b7718u: goto label_2b7718;
        case 0x2b771cu: goto label_2b771c;
        case 0x2b7720u: goto label_2b7720;
        case 0x2b7724u: goto label_2b7724;
        case 0x2b7728u: goto label_2b7728;
        case 0x2b772cu: goto label_2b772c;
        case 0x2b7730u: goto label_2b7730;
        case 0x2b7734u: goto label_2b7734;
        case 0x2b7738u: goto label_2b7738;
        case 0x2b773cu: goto label_2b773c;
        case 0x2b7740u: goto label_2b7740;
        case 0x2b7744u: goto label_2b7744;
        case 0x2b7748u: goto label_2b7748;
        case 0x2b774cu: goto label_2b774c;
        case 0x2b7750u: goto label_2b7750;
        case 0x2b7754u: goto label_2b7754;
        case 0x2b7758u: goto label_2b7758;
        case 0x2b775cu: goto label_2b775c;
        case 0x2b7760u: goto label_2b7760;
        case 0x2b7764u: goto label_2b7764;
        case 0x2b7768u: goto label_2b7768;
        case 0x2b776cu: goto label_2b776c;
        case 0x2b7770u: goto label_2b7770;
        case 0x2b7774u: goto label_2b7774;
        case 0x2b7778u: goto label_2b7778;
        case 0x2b777cu: goto label_2b777c;
        case 0x2b7780u: goto label_2b7780;
        case 0x2b7784u: goto label_2b7784;
        case 0x2b7788u: goto label_2b7788;
        case 0x2b778cu: goto label_2b778c;
        case 0x2b7790u: goto label_2b7790;
        case 0x2b7794u: goto label_2b7794;
        case 0x2b7798u: goto label_2b7798;
        case 0x2b779cu: goto label_2b779c;
        case 0x2b77a0u: goto label_2b77a0;
        case 0x2b77a4u: goto label_2b77a4;
        case 0x2b77a8u: goto label_2b77a8;
        case 0x2b77acu: goto label_2b77ac;
        case 0x2b77b0u: goto label_2b77b0;
        case 0x2b77b4u: goto label_2b77b4;
        case 0x2b77b8u: goto label_2b77b8;
        case 0x2b77bcu: goto label_2b77bc;
        case 0x2b77c0u: goto label_2b77c0;
        case 0x2b77c4u: goto label_2b77c4;
        case 0x2b77c8u: goto label_2b77c8;
        case 0x2b77ccu: goto label_2b77cc;
        case 0x2b77d0u: goto label_2b77d0;
        case 0x2b77d4u: goto label_2b77d4;
        case 0x2b77d8u: goto label_2b77d8;
        case 0x2b77dcu: goto label_2b77dc;
        case 0x2b77e0u: goto label_2b77e0;
        case 0x2b77e4u: goto label_2b77e4;
        case 0x2b77e8u: goto label_2b77e8;
        case 0x2b77ecu: goto label_2b77ec;
        case 0x2b77f0u: goto label_2b77f0;
        case 0x2b77f4u: goto label_2b77f4;
        case 0x2b77f8u: goto label_2b77f8;
        case 0x2b77fcu: goto label_2b77fc;
        case 0x2b7800u: goto label_2b7800;
        case 0x2b7804u: goto label_2b7804;
        case 0x2b7808u: goto label_2b7808;
        case 0x2b780cu: goto label_2b780c;
        case 0x2b7810u: goto label_2b7810;
        case 0x2b7814u: goto label_2b7814;
        case 0x2b7818u: goto label_2b7818;
        case 0x2b781cu: goto label_2b781c;
        case 0x2b7820u: goto label_2b7820;
        case 0x2b7824u: goto label_2b7824;
        case 0x2b7828u: goto label_2b7828;
        case 0x2b782cu: goto label_2b782c;
        case 0x2b7830u: goto label_2b7830;
        case 0x2b7834u: goto label_2b7834;
        case 0x2b7838u: goto label_2b7838;
        case 0x2b783cu: goto label_2b783c;
        case 0x2b7840u: goto label_2b7840;
        case 0x2b7844u: goto label_2b7844;
        case 0x2b7848u: goto label_2b7848;
        case 0x2b784cu: goto label_2b784c;
        case 0x2b7850u: goto label_2b7850;
        case 0x2b7854u: goto label_2b7854;
        case 0x2b7858u: goto label_2b7858;
        case 0x2b785cu: goto label_2b785c;
        case 0x2b7860u: goto label_2b7860;
        case 0x2b7864u: goto label_2b7864;
        case 0x2b7868u: goto label_2b7868;
        case 0x2b786cu: goto label_2b786c;
        case 0x2b7870u: goto label_2b7870;
        case 0x2b7874u: goto label_2b7874;
        case 0x2b7878u: goto label_2b7878;
        case 0x2b787cu: goto label_2b787c;
        case 0x2b7880u: goto label_2b7880;
        case 0x2b7884u: goto label_2b7884;
        case 0x2b7888u: goto label_2b7888;
        case 0x2b788cu: goto label_2b788c;
        case 0x2b7890u: goto label_2b7890;
        case 0x2b7894u: goto label_2b7894;
        case 0x2b7898u: goto label_2b7898;
        case 0x2b789cu: goto label_2b789c;
        case 0x2b78a0u: goto label_2b78a0;
        case 0x2b78a4u: goto label_2b78a4;
        case 0x2b78a8u: goto label_2b78a8;
        case 0x2b78acu: goto label_2b78ac;
        case 0x2b78b0u: goto label_2b78b0;
        case 0x2b78b4u: goto label_2b78b4;
        case 0x2b78b8u: goto label_2b78b8;
        case 0x2b78bcu: goto label_2b78bc;
        case 0x2b78c0u: goto label_2b78c0;
        case 0x2b78c4u: goto label_2b78c4;
        case 0x2b78c8u: goto label_2b78c8;
        case 0x2b78ccu: goto label_2b78cc;
        case 0x2b78d0u: goto label_2b78d0;
        case 0x2b78d4u: goto label_2b78d4;
        case 0x2b78d8u: goto label_2b78d8;
        case 0x2b78dcu: goto label_2b78dc;
        case 0x2b78e0u: goto label_2b78e0;
        case 0x2b78e4u: goto label_2b78e4;
        case 0x2b78e8u: goto label_2b78e8;
        case 0x2b78ecu: goto label_2b78ec;
        case 0x2b78f0u: goto label_2b78f0;
        case 0x2b78f4u: goto label_2b78f4;
        case 0x2b78f8u: goto label_2b78f8;
        case 0x2b78fcu: goto label_2b78fc;
        case 0x2b7900u: goto label_2b7900;
        case 0x2b7904u: goto label_2b7904;
        case 0x2b7908u: goto label_2b7908;
        case 0x2b790cu: goto label_2b790c;
        case 0x2b7910u: goto label_2b7910;
        case 0x2b7914u: goto label_2b7914;
        case 0x2b7918u: goto label_2b7918;
        case 0x2b791cu: goto label_2b791c;
        case 0x2b7920u: goto label_2b7920;
        case 0x2b7924u: goto label_2b7924;
        case 0x2b7928u: goto label_2b7928;
        case 0x2b792cu: goto label_2b792c;
        case 0x2b7930u: goto label_2b7930;
        case 0x2b7934u: goto label_2b7934;
        case 0x2b7938u: goto label_2b7938;
        case 0x2b793cu: goto label_2b793c;
        case 0x2b7940u: goto label_2b7940;
        case 0x2b7944u: goto label_2b7944;
        case 0x2b7948u: goto label_2b7948;
        case 0x2b794cu: goto label_2b794c;
        case 0x2b7950u: goto label_2b7950;
        case 0x2b7954u: goto label_2b7954;
        case 0x2b7958u: goto label_2b7958;
        case 0x2b795cu: goto label_2b795c;
        case 0x2b7960u: goto label_2b7960;
        case 0x2b7964u: goto label_2b7964;
        case 0x2b7968u: goto label_2b7968;
        case 0x2b796cu: goto label_2b796c;
        case 0x2b7970u: goto label_2b7970;
        case 0x2b7974u: goto label_2b7974;
        case 0x2b7978u: goto label_2b7978;
        case 0x2b797cu: goto label_2b797c;
        case 0x2b7980u: goto label_2b7980;
        case 0x2b7984u: goto label_2b7984;
        case 0x2b7988u: goto label_2b7988;
        case 0x2b798cu: goto label_2b798c;
        case 0x2b7990u: goto label_2b7990;
        case 0x2b7994u: goto label_2b7994;
        case 0x2b7998u: goto label_2b7998;
        case 0x2b799cu: goto label_2b799c;
        case 0x2b79a0u: goto label_2b79a0;
        case 0x2b79a4u: goto label_2b79a4;
        case 0x2b79a8u: goto label_2b79a8;
        case 0x2b79acu: goto label_2b79ac;
        case 0x2b79b0u: goto label_2b79b0;
        case 0x2b79b4u: goto label_2b79b4;
        case 0x2b79b8u: goto label_2b79b8;
        case 0x2b79bcu: goto label_2b79bc;
        case 0x2b79c0u: goto label_2b79c0;
        case 0x2b79c4u: goto label_2b79c4;
        case 0x2b79c8u: goto label_2b79c8;
        case 0x2b79ccu: goto label_2b79cc;
        case 0x2b79d0u: goto label_2b79d0;
        case 0x2b79d4u: goto label_2b79d4;
        case 0x2b79d8u: goto label_2b79d8;
        case 0x2b79dcu: goto label_2b79dc;
        case 0x2b79e0u: goto label_2b79e0;
        case 0x2b79e4u: goto label_2b79e4;
        case 0x2b79e8u: goto label_2b79e8;
        case 0x2b79ecu: goto label_2b79ec;
        case 0x2b79f0u: goto label_2b79f0;
        case 0x2b79f4u: goto label_2b79f4;
        case 0x2b79f8u: goto label_2b79f8;
        case 0x2b79fcu: goto label_2b79fc;
        case 0x2b7a00u: goto label_2b7a00;
        case 0x2b7a04u: goto label_2b7a04;
        case 0x2b7a08u: goto label_2b7a08;
        case 0x2b7a0cu: goto label_2b7a0c;
        case 0x2b7a10u: goto label_2b7a10;
        case 0x2b7a14u: goto label_2b7a14;
        case 0x2b7a18u: goto label_2b7a18;
        case 0x2b7a1cu: goto label_2b7a1c;
        case 0x2b7a20u: goto label_2b7a20;
        case 0x2b7a24u: goto label_2b7a24;
        case 0x2b7a28u: goto label_2b7a28;
        case 0x2b7a2cu: goto label_2b7a2c;
        case 0x2b7a30u: goto label_2b7a30;
        case 0x2b7a34u: goto label_2b7a34;
        case 0x2b7a38u: goto label_2b7a38;
        case 0x2b7a3cu: goto label_2b7a3c;
        case 0x2b7a40u: goto label_2b7a40;
        case 0x2b7a44u: goto label_2b7a44;
        case 0x2b7a48u: goto label_2b7a48;
        case 0x2b7a4cu: goto label_2b7a4c;
        case 0x2b7a50u: goto label_2b7a50;
        case 0x2b7a54u: goto label_2b7a54;
        case 0x2b7a58u: goto label_2b7a58;
        case 0x2b7a5cu: goto label_2b7a5c;
        case 0x2b7a60u: goto label_2b7a60;
        case 0x2b7a64u: goto label_2b7a64;
        case 0x2b7a68u: goto label_2b7a68;
        case 0x2b7a6cu: goto label_2b7a6c;
        case 0x2b7a70u: goto label_2b7a70;
        case 0x2b7a74u: goto label_2b7a74;
        case 0x2b7a78u: goto label_2b7a78;
        case 0x2b7a7cu: goto label_2b7a7c;
        case 0x2b7a80u: goto label_2b7a80;
        case 0x2b7a84u: goto label_2b7a84;
        case 0x2b7a88u: goto label_2b7a88;
        case 0x2b7a8cu: goto label_2b7a8c;
        case 0x2b7a90u: goto label_2b7a90;
        case 0x2b7a94u: goto label_2b7a94;
        case 0x2b7a98u: goto label_2b7a98;
        case 0x2b7a9cu: goto label_2b7a9c;
        case 0x2b7aa0u: goto label_2b7aa0;
        case 0x2b7aa4u: goto label_2b7aa4;
        case 0x2b7aa8u: goto label_2b7aa8;
        case 0x2b7aacu: goto label_2b7aac;
        case 0x2b7ab0u: goto label_2b7ab0;
        case 0x2b7ab4u: goto label_2b7ab4;
        case 0x2b7ab8u: goto label_2b7ab8;
        case 0x2b7abcu: goto label_2b7abc;
        case 0x2b7ac0u: goto label_2b7ac0;
        case 0x2b7ac4u: goto label_2b7ac4;
        case 0x2b7ac8u: goto label_2b7ac8;
        case 0x2b7accu: goto label_2b7acc;
        case 0x2b7ad0u: goto label_2b7ad0;
        case 0x2b7ad4u: goto label_2b7ad4;
        case 0x2b7ad8u: goto label_2b7ad8;
        case 0x2b7adcu: goto label_2b7adc;
        case 0x2b7ae0u: goto label_2b7ae0;
        case 0x2b7ae4u: goto label_2b7ae4;
        case 0x2b7ae8u: goto label_2b7ae8;
        case 0x2b7aecu: goto label_2b7aec;
        case 0x2b7af0u: goto label_2b7af0;
        case 0x2b7af4u: goto label_2b7af4;
        case 0x2b7af8u: goto label_2b7af8;
        case 0x2b7afcu: goto label_2b7afc;
        case 0x2b7b00u: goto label_2b7b00;
        case 0x2b7b04u: goto label_2b7b04;
        case 0x2b7b08u: goto label_2b7b08;
        case 0x2b7b0cu: goto label_2b7b0c;
        case 0x2b7b10u: goto label_2b7b10;
        case 0x2b7b14u: goto label_2b7b14;
        case 0x2b7b18u: goto label_2b7b18;
        case 0x2b7b1cu: goto label_2b7b1c;
        case 0x2b7b20u: goto label_2b7b20;
        case 0x2b7b24u: goto label_2b7b24;
        case 0x2b7b28u: goto label_2b7b28;
        case 0x2b7b2cu: goto label_2b7b2c;
        case 0x2b7b30u: goto label_2b7b30;
        case 0x2b7b34u: goto label_2b7b34;
        case 0x2b7b38u: goto label_2b7b38;
        case 0x2b7b3cu: goto label_2b7b3c;
        case 0x2b7b40u: goto label_2b7b40;
        case 0x2b7b44u: goto label_2b7b44;
        case 0x2b7b48u: goto label_2b7b48;
        case 0x2b7b4cu: goto label_2b7b4c;
        case 0x2b7b50u: goto label_2b7b50;
        case 0x2b7b54u: goto label_2b7b54;
        case 0x2b7b58u: goto label_2b7b58;
        case 0x2b7b5cu: goto label_2b7b5c;
        case 0x2b7b60u: goto label_2b7b60;
        case 0x2b7b64u: goto label_2b7b64;
        case 0x2b7b68u: goto label_2b7b68;
        case 0x2b7b6cu: goto label_2b7b6c;
        case 0x2b7b70u: goto label_2b7b70;
        case 0x2b7b74u: goto label_2b7b74;
        case 0x2b7b78u: goto label_2b7b78;
        case 0x2b7b7cu: goto label_2b7b7c;
        case 0x2b7b80u: goto label_2b7b80;
        case 0x2b7b84u: goto label_2b7b84;
        case 0x2b7b88u: goto label_2b7b88;
        case 0x2b7b8cu: goto label_2b7b8c;
        case 0x2b7b90u: goto label_2b7b90;
        case 0x2b7b94u: goto label_2b7b94;
        case 0x2b7b98u: goto label_2b7b98;
        case 0x2b7b9cu: goto label_2b7b9c;
        case 0x2b7ba0u: goto label_2b7ba0;
        case 0x2b7ba4u: goto label_2b7ba4;
        case 0x2b7ba8u: goto label_2b7ba8;
        case 0x2b7bacu: goto label_2b7bac;
        case 0x2b7bb0u: goto label_2b7bb0;
        case 0x2b7bb4u: goto label_2b7bb4;
        case 0x2b7bb8u: goto label_2b7bb8;
        case 0x2b7bbcu: goto label_2b7bbc;
        case 0x2b7bc0u: goto label_2b7bc0;
        case 0x2b7bc4u: goto label_2b7bc4;
        case 0x2b7bc8u: goto label_2b7bc8;
        case 0x2b7bccu: goto label_2b7bcc;
        case 0x2b7bd0u: goto label_2b7bd0;
        case 0x2b7bd4u: goto label_2b7bd4;
        case 0x2b7bd8u: goto label_2b7bd8;
        case 0x2b7bdcu: goto label_2b7bdc;
        case 0x2b7be0u: goto label_2b7be0;
        case 0x2b7be4u: goto label_2b7be4;
        case 0x2b7be8u: goto label_2b7be8;
        case 0x2b7becu: goto label_2b7bec;
        case 0x2b7bf0u: goto label_2b7bf0;
        case 0x2b7bf4u: goto label_2b7bf4;
        case 0x2b7bf8u: goto label_2b7bf8;
        case 0x2b7bfcu: goto label_2b7bfc;
        case 0x2b7c00u: goto label_2b7c00;
        case 0x2b7c04u: goto label_2b7c04;
        case 0x2b7c08u: goto label_2b7c08;
        case 0x2b7c0cu: goto label_2b7c0c;
        case 0x2b7c10u: goto label_2b7c10;
        case 0x2b7c14u: goto label_2b7c14;
        case 0x2b7c18u: goto label_2b7c18;
        case 0x2b7c1cu: goto label_2b7c1c;
        case 0x2b7c20u: goto label_2b7c20;
        case 0x2b7c24u: goto label_2b7c24;
        case 0x2b7c28u: goto label_2b7c28;
        case 0x2b7c2cu: goto label_2b7c2c;
        case 0x2b7c30u: goto label_2b7c30;
        case 0x2b7c34u: goto label_2b7c34;
        case 0x2b7c38u: goto label_2b7c38;
        case 0x2b7c3cu: goto label_2b7c3c;
        case 0x2b7c40u: goto label_2b7c40;
        case 0x2b7c44u: goto label_2b7c44;
        case 0x2b7c48u: goto label_2b7c48;
        case 0x2b7c4cu: goto label_2b7c4c;
        case 0x2b7c50u: goto label_2b7c50;
        case 0x2b7c54u: goto label_2b7c54;
        case 0x2b7c58u: goto label_2b7c58;
        case 0x2b7c5cu: goto label_2b7c5c;
        case 0x2b7c60u: goto label_2b7c60;
        case 0x2b7c64u: goto label_2b7c64;
        case 0x2b7c68u: goto label_2b7c68;
        case 0x2b7c6cu: goto label_2b7c6c;
        case 0x2b7c70u: goto label_2b7c70;
        case 0x2b7c74u: goto label_2b7c74;
        case 0x2b7c78u: goto label_2b7c78;
        case 0x2b7c7cu: goto label_2b7c7c;
        case 0x2b7c80u: goto label_2b7c80;
        case 0x2b7c84u: goto label_2b7c84;
        case 0x2b7c88u: goto label_2b7c88;
        case 0x2b7c8cu: goto label_2b7c8c;
        case 0x2b7c90u: goto label_2b7c90;
        case 0x2b7c94u: goto label_2b7c94;
        case 0x2b7c98u: goto label_2b7c98;
        case 0x2b7c9cu: goto label_2b7c9c;
        case 0x2b7ca0u: goto label_2b7ca0;
        case 0x2b7ca4u: goto label_2b7ca4;
        case 0x2b7ca8u: goto label_2b7ca8;
        case 0x2b7cacu: goto label_2b7cac;
        case 0x2b7cb0u: goto label_2b7cb0;
        case 0x2b7cb4u: goto label_2b7cb4;
        case 0x2b7cb8u: goto label_2b7cb8;
        case 0x2b7cbcu: goto label_2b7cbc;
        case 0x2b7cc0u: goto label_2b7cc0;
        case 0x2b7cc4u: goto label_2b7cc4;
        case 0x2b7cc8u: goto label_2b7cc8;
        case 0x2b7cccu: goto label_2b7ccc;
        case 0x2b7cd0u: goto label_2b7cd0;
        case 0x2b7cd4u: goto label_2b7cd4;
        case 0x2b7cd8u: goto label_2b7cd8;
        case 0x2b7cdcu: goto label_2b7cdc;
        case 0x2b7ce0u: goto label_2b7ce0;
        case 0x2b7ce4u: goto label_2b7ce4;
        case 0x2b7ce8u: goto label_2b7ce8;
        case 0x2b7cecu: goto label_2b7cec;
        case 0x2b7cf0u: goto label_2b7cf0;
        case 0x2b7cf4u: goto label_2b7cf4;
        case 0x2b7cf8u: goto label_2b7cf8;
        case 0x2b7cfcu: goto label_2b7cfc;
        case 0x2b7d00u: goto label_2b7d00;
        case 0x2b7d04u: goto label_2b7d04;
        case 0x2b7d08u: goto label_2b7d08;
        case 0x2b7d0cu: goto label_2b7d0c;
        case 0x2b7d10u: goto label_2b7d10;
        case 0x2b7d14u: goto label_2b7d14;
        case 0x2b7d18u: goto label_2b7d18;
        case 0x2b7d1cu: goto label_2b7d1c;
        case 0x2b7d20u: goto label_2b7d20;
        case 0x2b7d24u: goto label_2b7d24;
        case 0x2b7d28u: goto label_2b7d28;
        case 0x2b7d2cu: goto label_2b7d2c;
        case 0x2b7d30u: goto label_2b7d30;
        case 0x2b7d34u: goto label_2b7d34;
        case 0x2b7d38u: goto label_2b7d38;
        case 0x2b7d3cu: goto label_2b7d3c;
        case 0x2b7d40u: goto label_2b7d40;
        case 0x2b7d44u: goto label_2b7d44;
        case 0x2b7d48u: goto label_2b7d48;
        case 0x2b7d4cu: goto label_2b7d4c;
        case 0x2b7d50u: goto label_2b7d50;
        case 0x2b7d54u: goto label_2b7d54;
        case 0x2b7d58u: goto label_2b7d58;
        case 0x2b7d5cu: goto label_2b7d5c;
        case 0x2b7d60u: goto label_2b7d60;
        case 0x2b7d64u: goto label_2b7d64;
        case 0x2b7d68u: goto label_2b7d68;
        case 0x2b7d6cu: goto label_2b7d6c;
        case 0x2b7d70u: goto label_2b7d70;
        case 0x2b7d74u: goto label_2b7d74;
        case 0x2b7d78u: goto label_2b7d78;
        case 0x2b7d7cu: goto label_2b7d7c;
        case 0x2b7d80u: goto label_2b7d80;
        case 0x2b7d84u: goto label_2b7d84;
        case 0x2b7d88u: goto label_2b7d88;
        case 0x2b7d8cu: goto label_2b7d8c;
        case 0x2b7d90u: goto label_2b7d90;
        case 0x2b7d94u: goto label_2b7d94;
        case 0x2b7d98u: goto label_2b7d98;
        case 0x2b7d9cu: goto label_2b7d9c;
        case 0x2b7da0u: goto label_2b7da0;
        case 0x2b7da4u: goto label_2b7da4;
        case 0x2b7da8u: goto label_2b7da8;
        case 0x2b7dacu: goto label_2b7dac;
        case 0x2b7db0u: goto label_2b7db0;
        case 0x2b7db4u: goto label_2b7db4;
        case 0x2b7db8u: goto label_2b7db8;
        case 0x2b7dbcu: goto label_2b7dbc;
        case 0x2b7dc0u: goto label_2b7dc0;
        case 0x2b7dc4u: goto label_2b7dc4;
        case 0x2b7dc8u: goto label_2b7dc8;
        case 0x2b7dccu: goto label_2b7dcc;
        case 0x2b7dd0u: goto label_2b7dd0;
        case 0x2b7dd4u: goto label_2b7dd4;
        case 0x2b7dd8u: goto label_2b7dd8;
        case 0x2b7ddcu: goto label_2b7ddc;
        case 0x2b7de0u: goto label_2b7de0;
        case 0x2b7de4u: goto label_2b7de4;
        case 0x2b7de8u: goto label_2b7de8;
        case 0x2b7decu: goto label_2b7dec;
        case 0x2b7df0u: goto label_2b7df0;
        case 0x2b7df4u: goto label_2b7df4;
        case 0x2b7df8u: goto label_2b7df8;
        case 0x2b7dfcu: goto label_2b7dfc;
        case 0x2b7e00u: goto label_2b7e00;
        case 0x2b7e04u: goto label_2b7e04;
        case 0x2b7e08u: goto label_2b7e08;
        case 0x2b7e0cu: goto label_2b7e0c;
        case 0x2b7e10u: goto label_2b7e10;
        case 0x2b7e14u: goto label_2b7e14;
        case 0x2b7e18u: goto label_2b7e18;
        case 0x2b7e1cu: goto label_2b7e1c;
        case 0x2b7e20u: goto label_2b7e20;
        case 0x2b7e24u: goto label_2b7e24;
        case 0x2b7e28u: goto label_2b7e28;
        case 0x2b7e2cu: goto label_2b7e2c;
        case 0x2b7e30u: goto label_2b7e30;
        case 0x2b7e34u: goto label_2b7e34;
        case 0x2b7e38u: goto label_2b7e38;
        case 0x2b7e3cu: goto label_2b7e3c;
        case 0x2b7e40u: goto label_2b7e40;
        case 0x2b7e44u: goto label_2b7e44;
        case 0x2b7e48u: goto label_2b7e48;
        case 0x2b7e4cu: goto label_2b7e4c;
        case 0x2b7e50u: goto label_2b7e50;
        case 0x2b7e54u: goto label_2b7e54;
        case 0x2b7e58u: goto label_2b7e58;
        case 0x2b7e5cu: goto label_2b7e5c;
        case 0x2b7e60u: goto label_2b7e60;
        case 0x2b7e64u: goto label_2b7e64;
        case 0x2b7e68u: goto label_2b7e68;
        case 0x2b7e6cu: goto label_2b7e6c;
        case 0x2b7e70u: goto label_2b7e70;
        case 0x2b7e74u: goto label_2b7e74;
        case 0x2b7e78u: goto label_2b7e78;
        case 0x2b7e7cu: goto label_2b7e7c;
        case 0x2b7e80u: goto label_2b7e80;
        case 0x2b7e84u: goto label_2b7e84;
        case 0x2b7e88u: goto label_2b7e88;
        case 0x2b7e8cu: goto label_2b7e8c;
        case 0x2b7e90u: goto label_2b7e90;
        case 0x2b7e94u: goto label_2b7e94;
        case 0x2b7e98u: goto label_2b7e98;
        case 0x2b7e9cu: goto label_2b7e9c;
        case 0x2b7ea0u: goto label_2b7ea0;
        case 0x2b7ea4u: goto label_2b7ea4;
        case 0x2b7ea8u: goto label_2b7ea8;
        case 0x2b7eacu: goto label_2b7eac;
        case 0x2b7eb0u: goto label_2b7eb0;
        case 0x2b7eb4u: goto label_2b7eb4;
        case 0x2b7eb8u: goto label_2b7eb8;
        case 0x2b7ebcu: goto label_2b7ebc;
        case 0x2b7ec0u: goto label_2b7ec0;
        case 0x2b7ec4u: goto label_2b7ec4;
        case 0x2b7ec8u: goto label_2b7ec8;
        case 0x2b7eccu: goto label_2b7ecc;
        case 0x2b7ed0u: goto label_2b7ed0;
        case 0x2b7ed4u: goto label_2b7ed4;
        case 0x2b7ed8u: goto label_2b7ed8;
        case 0x2b7edcu: goto label_2b7edc;
        case 0x2b7ee0u: goto label_2b7ee0;
        case 0x2b7ee4u: goto label_2b7ee4;
        case 0x2b7ee8u: goto label_2b7ee8;
        case 0x2b7eecu: goto label_2b7eec;
        case 0x2b7ef0u: goto label_2b7ef0;
        case 0x2b7ef4u: goto label_2b7ef4;
        case 0x2b7ef8u: goto label_2b7ef8;
        case 0x2b7efcu: goto label_2b7efc;
        case 0x2b7f00u: goto label_2b7f00;
        case 0x2b7f04u: goto label_2b7f04;
        case 0x2b7f08u: goto label_2b7f08;
        case 0x2b7f0cu: goto label_2b7f0c;
        case 0x2b7f10u: goto label_2b7f10;
        case 0x2b7f14u: goto label_2b7f14;
        case 0x2b7f18u: goto label_2b7f18;
        case 0x2b7f1cu: goto label_2b7f1c;
        case 0x2b7f20u: goto label_2b7f20;
        case 0x2b7f24u: goto label_2b7f24;
        case 0x2b7f28u: goto label_2b7f28;
        case 0x2b7f2cu: goto label_2b7f2c;
        case 0x2b7f30u: goto label_2b7f30;
        case 0x2b7f34u: goto label_2b7f34;
        case 0x2b7f38u: goto label_2b7f38;
        case 0x2b7f3cu: goto label_2b7f3c;
        case 0x2b7f40u: goto label_2b7f40;
        case 0x2b7f44u: goto label_2b7f44;
        case 0x2b7f48u: goto label_2b7f48;
        case 0x2b7f4cu: goto label_2b7f4c;
        case 0x2b7f50u: goto label_2b7f50;
        case 0x2b7f54u: goto label_2b7f54;
        case 0x2b7f58u: goto label_2b7f58;
        case 0x2b7f5cu: goto label_2b7f5c;
        case 0x2b7f60u: goto label_2b7f60;
        case 0x2b7f64u: goto label_2b7f64;
        case 0x2b7f68u: goto label_2b7f68;
        case 0x2b7f6cu: goto label_2b7f6c;
        case 0x2b7f70u: goto label_2b7f70;
        case 0x2b7f74u: goto label_2b7f74;
        case 0x2b7f78u: goto label_2b7f78;
        case 0x2b7f7cu: goto label_2b7f7c;
        case 0x2b7f80u: goto label_2b7f80;
        case 0x2b7f84u: goto label_2b7f84;
        case 0x2b7f88u: goto label_2b7f88;
        case 0x2b7f8cu: goto label_2b7f8c;
        case 0x2b7f90u: goto label_2b7f90;
        case 0x2b7f94u: goto label_2b7f94;
        case 0x2b7f98u: goto label_2b7f98;
        case 0x2b7f9cu: goto label_2b7f9c;
        case 0x2b7fa0u: goto label_2b7fa0;
        case 0x2b7fa4u: goto label_2b7fa4;
        case 0x2b7fa8u: goto label_2b7fa8;
        case 0x2b7facu: goto label_2b7fac;
        case 0x2b7fb0u: goto label_2b7fb0;
        case 0x2b7fb4u: goto label_2b7fb4;
        case 0x2b7fb8u: goto label_2b7fb8;
        case 0x2b7fbcu: goto label_2b7fbc;
        case 0x2b7fc0u: goto label_2b7fc0;
        case 0x2b7fc4u: goto label_2b7fc4;
        case 0x2b7fc8u: goto label_2b7fc8;
        case 0x2b7fccu: goto label_2b7fcc;
        case 0x2b7fd0u: goto label_2b7fd0;
        case 0x2b7fd4u: goto label_2b7fd4;
        case 0x2b7fd8u: goto label_2b7fd8;
        case 0x2b7fdcu: goto label_2b7fdc;
        case 0x2b7fe0u: goto label_2b7fe0;
        case 0x2b7fe4u: goto label_2b7fe4;
        case 0x2b7fe8u: goto label_2b7fe8;
        case 0x2b7fecu: goto label_2b7fec;
        case 0x2b7ff0u: goto label_2b7ff0;
        case 0x2b7ff4u: goto label_2b7ff4;
        case 0x2b7ff8u: goto label_2b7ff8;
        case 0x2b7ffcu: goto label_2b7ffc;
        case 0x2b8000u: goto label_2b8000;
        case 0x2b8004u: goto label_2b8004;
        case 0x2b8008u: goto label_2b8008;
        case 0x2b800cu: goto label_2b800c;
        case 0x2b8010u: goto label_2b8010;
        case 0x2b8014u: goto label_2b8014;
        case 0x2b8018u: goto label_2b8018;
        case 0x2b801cu: goto label_2b801c;
        case 0x2b8020u: goto label_2b8020;
        case 0x2b8024u: goto label_2b8024;
        case 0x2b8028u: goto label_2b8028;
        case 0x2b802cu: goto label_2b802c;
        case 0x2b8030u: goto label_2b8030;
        case 0x2b8034u: goto label_2b8034;
        case 0x2b8038u: goto label_2b8038;
        case 0x2b803cu: goto label_2b803c;
        case 0x2b8040u: goto label_2b8040;
        case 0x2b8044u: goto label_2b8044;
        case 0x2b8048u: goto label_2b8048;
        case 0x2b804cu: goto label_2b804c;
        case 0x2b8050u: goto label_2b8050;
        case 0x2b8054u: goto label_2b8054;
        case 0x2b8058u: goto label_2b8058;
        case 0x2b805cu: goto label_2b805c;
        case 0x2b8060u: goto label_2b8060;
        case 0x2b8064u: goto label_2b8064;
        case 0x2b8068u: goto label_2b8068;
        case 0x2b806cu: goto label_2b806c;
        case 0x2b8070u: goto label_2b8070;
        case 0x2b8074u: goto label_2b8074;
        case 0x2b8078u: goto label_2b8078;
        case 0x2b807cu: goto label_2b807c;
        case 0x2b8080u: goto label_2b8080;
        case 0x2b8084u: goto label_2b8084;
        case 0x2b8088u: goto label_2b8088;
        case 0x2b808cu: goto label_2b808c;
        case 0x2b8090u: goto label_2b8090;
        case 0x2b8094u: goto label_2b8094;
        case 0x2b8098u: goto label_2b8098;
        case 0x2b809cu: goto label_2b809c;
        case 0x2b80a0u: goto label_2b80a0;
        case 0x2b80a4u: goto label_2b80a4;
        case 0x2b80a8u: goto label_2b80a8;
        case 0x2b80acu: goto label_2b80ac;
        case 0x2b80b0u: goto label_2b80b0;
        case 0x2b80b4u: goto label_2b80b4;
        case 0x2b80b8u: goto label_2b80b8;
        case 0x2b80bcu: goto label_2b80bc;
        case 0x2b80c0u: goto label_2b80c0;
        case 0x2b80c4u: goto label_2b80c4;
        case 0x2b80c8u: goto label_2b80c8;
        case 0x2b80ccu: goto label_2b80cc;
        case 0x2b80d0u: goto label_2b80d0;
        case 0x2b80d4u: goto label_2b80d4;
        case 0x2b80d8u: goto label_2b80d8;
        case 0x2b80dcu: goto label_2b80dc;
        case 0x2b80e0u: goto label_2b80e0;
        case 0x2b80e4u: goto label_2b80e4;
        case 0x2b80e8u: goto label_2b80e8;
        case 0x2b80ecu: goto label_2b80ec;
        case 0x2b80f0u: goto label_2b80f0;
        case 0x2b80f4u: goto label_2b80f4;
        case 0x2b80f8u: goto label_2b80f8;
        case 0x2b80fcu: goto label_2b80fc;
        case 0x2b8100u: goto label_2b8100;
        case 0x2b8104u: goto label_2b8104;
        case 0x2b8108u: goto label_2b8108;
        case 0x2b810cu: goto label_2b810c;
        case 0x2b8110u: goto label_2b8110;
        case 0x2b8114u: goto label_2b8114;
        case 0x2b8118u: goto label_2b8118;
        case 0x2b811cu: goto label_2b811c;
        case 0x2b8120u: goto label_2b8120;
        case 0x2b8124u: goto label_2b8124;
        case 0x2b8128u: goto label_2b8128;
        case 0x2b812cu: goto label_2b812c;
        case 0x2b8130u: goto label_2b8130;
        case 0x2b8134u: goto label_2b8134;
        case 0x2b8138u: goto label_2b8138;
        case 0x2b813cu: goto label_2b813c;
        case 0x2b8140u: goto label_2b8140;
        case 0x2b8144u: goto label_2b8144;
        case 0x2b8148u: goto label_2b8148;
        case 0x2b814cu: goto label_2b814c;
        case 0x2b8150u: goto label_2b8150;
        case 0x2b8154u: goto label_2b8154;
        case 0x2b8158u: goto label_2b8158;
        case 0x2b815cu: goto label_2b815c;
        case 0x2b8160u: goto label_2b8160;
        case 0x2b8164u: goto label_2b8164;
        case 0x2b8168u: goto label_2b8168;
        case 0x2b816cu: goto label_2b816c;
        case 0x2b8170u: goto label_2b8170;
        case 0x2b8174u: goto label_2b8174;
        case 0x2b8178u: goto label_2b8178;
        case 0x2b817cu: goto label_2b817c;
        case 0x2b8180u: goto label_2b8180;
        case 0x2b8184u: goto label_2b8184;
        case 0x2b8188u: goto label_2b8188;
        case 0x2b818cu: goto label_2b818c;
        case 0x2b8190u: goto label_2b8190;
        case 0x2b8194u: goto label_2b8194;
        case 0x2b8198u: goto label_2b8198;
        case 0x2b819cu: goto label_2b819c;
        case 0x2b81a0u: goto label_2b81a0;
        case 0x2b81a4u: goto label_2b81a4;
        case 0x2b81a8u: goto label_2b81a8;
        case 0x2b81acu: goto label_2b81ac;
        case 0x2b81b0u: goto label_2b81b0;
        case 0x2b81b4u: goto label_2b81b4;
        case 0x2b81b8u: goto label_2b81b8;
        case 0x2b81bcu: goto label_2b81bc;
        case 0x2b81c0u: goto label_2b81c0;
        case 0x2b81c4u: goto label_2b81c4;
        case 0x2b81c8u: goto label_2b81c8;
        case 0x2b81ccu: goto label_2b81cc;
        case 0x2b81d0u: goto label_2b81d0;
        case 0x2b81d4u: goto label_2b81d4;
        case 0x2b81d8u: goto label_2b81d8;
        case 0x2b81dcu: goto label_2b81dc;
        case 0x2b81e0u: goto label_2b81e0;
        case 0x2b81e4u: goto label_2b81e4;
        case 0x2b81e8u: goto label_2b81e8;
        case 0x2b81ecu: goto label_2b81ec;
        case 0x2b81f0u: goto label_2b81f0;
        case 0x2b81f4u: goto label_2b81f4;
        case 0x2b81f8u: goto label_2b81f8;
        case 0x2b81fcu: goto label_2b81fc;
        case 0x2b8200u: goto label_2b8200;
        case 0x2b8204u: goto label_2b8204;
        case 0x2b8208u: goto label_2b8208;
        case 0x2b820cu: goto label_2b820c;
        case 0x2b8210u: goto label_2b8210;
        case 0x2b8214u: goto label_2b8214;
        case 0x2b8218u: goto label_2b8218;
        case 0x2b821cu: goto label_2b821c;
        case 0x2b8220u: goto label_2b8220;
        case 0x2b8224u: goto label_2b8224;
        case 0x2b8228u: goto label_2b8228;
        case 0x2b822cu: goto label_2b822c;
        case 0x2b8230u: goto label_2b8230;
        case 0x2b8234u: goto label_2b8234;
        case 0x2b8238u: goto label_2b8238;
        case 0x2b823cu: goto label_2b823c;
        case 0x2b8240u: goto label_2b8240;
        case 0x2b8244u: goto label_2b8244;
        case 0x2b8248u: goto label_2b8248;
        case 0x2b824cu: goto label_2b824c;
        case 0x2b8250u: goto label_2b8250;
        case 0x2b8254u: goto label_2b8254;
        case 0x2b8258u: goto label_2b8258;
        case 0x2b825cu: goto label_2b825c;
        case 0x2b8260u: goto label_2b8260;
        case 0x2b8264u: goto label_2b8264;
        case 0x2b8268u: goto label_2b8268;
        case 0x2b826cu: goto label_2b826c;
        case 0x2b8270u: goto label_2b8270;
        case 0x2b8274u: goto label_2b8274;
        case 0x2b8278u: goto label_2b8278;
        case 0x2b827cu: goto label_2b827c;
        case 0x2b8280u: goto label_2b8280;
        case 0x2b8284u: goto label_2b8284;
        case 0x2b8288u: goto label_2b8288;
        case 0x2b828cu: goto label_2b828c;
        case 0x2b8290u: goto label_2b8290;
        case 0x2b8294u: goto label_2b8294;
        case 0x2b8298u: goto label_2b8298;
        case 0x2b829cu: goto label_2b829c;
        case 0x2b82a0u: goto label_2b82a0;
        case 0x2b82a4u: goto label_2b82a4;
        case 0x2b82a8u: goto label_2b82a8;
        case 0x2b82acu: goto label_2b82ac;
        case 0x2b82b0u: goto label_2b82b0;
        case 0x2b82b4u: goto label_2b82b4;
        case 0x2b82b8u: goto label_2b82b8;
        case 0x2b82bcu: goto label_2b82bc;
        case 0x2b82c0u: goto label_2b82c0;
        case 0x2b82c4u: goto label_2b82c4;
        case 0x2b82c8u: goto label_2b82c8;
        case 0x2b82ccu: goto label_2b82cc;
        case 0x2b82d0u: goto label_2b82d0;
        case 0x2b82d4u: goto label_2b82d4;
        case 0x2b82d8u: goto label_2b82d8;
        case 0x2b82dcu: goto label_2b82dc;
        case 0x2b82e0u: goto label_2b82e0;
        case 0x2b82e4u: goto label_2b82e4;
        case 0x2b82e8u: goto label_2b82e8;
        case 0x2b82ecu: goto label_2b82ec;
        case 0x2b82f0u: goto label_2b82f0;
        case 0x2b82f4u: goto label_2b82f4;
        case 0x2b82f8u: goto label_2b82f8;
        case 0x2b82fcu: goto label_2b82fc;
        case 0x2b8300u: goto label_2b8300;
        case 0x2b8304u: goto label_2b8304;
        case 0x2b8308u: goto label_2b8308;
        case 0x2b830cu: goto label_2b830c;
        case 0x2b8310u: goto label_2b8310;
        case 0x2b8314u: goto label_2b8314;
        case 0x2b8318u: goto label_2b8318;
        case 0x2b831cu: goto label_2b831c;
        case 0x2b8320u: goto label_2b8320;
        case 0x2b8324u: goto label_2b8324;
        case 0x2b8328u: goto label_2b8328;
        case 0x2b832cu: goto label_2b832c;
        case 0x2b8330u: goto label_2b8330;
        case 0x2b8334u: goto label_2b8334;
        case 0x2b8338u: goto label_2b8338;
        case 0x2b833cu: goto label_2b833c;
        case 0x2b8340u: goto label_2b8340;
        case 0x2b8344u: goto label_2b8344;
        case 0x2b8348u: goto label_2b8348;
        case 0x2b834cu: goto label_2b834c;
        case 0x2b8350u: goto label_2b8350;
        case 0x2b8354u: goto label_2b8354;
        case 0x2b8358u: goto label_2b8358;
        case 0x2b835cu: goto label_2b835c;
        case 0x2b8360u: goto label_2b8360;
        case 0x2b8364u: goto label_2b8364;
        case 0x2b8368u: goto label_2b8368;
        case 0x2b836cu: goto label_2b836c;
        case 0x2b8370u: goto label_2b8370;
        case 0x2b8374u: goto label_2b8374;
        case 0x2b8378u: goto label_2b8378;
        case 0x2b837cu: goto label_2b837c;
        case 0x2b8380u: goto label_2b8380;
        case 0x2b8384u: goto label_2b8384;
        case 0x2b8388u: goto label_2b8388;
        case 0x2b838cu: goto label_2b838c;
        case 0x2b8390u: goto label_2b8390;
        case 0x2b8394u: goto label_2b8394;
        case 0x2b8398u: goto label_2b8398;
        case 0x2b839cu: goto label_2b839c;
        case 0x2b83a0u: goto label_2b83a0;
        case 0x2b83a4u: goto label_2b83a4;
        case 0x2b83a8u: goto label_2b83a8;
        case 0x2b83acu: goto label_2b83ac;
        case 0x2b83b0u: goto label_2b83b0;
        case 0x2b83b4u: goto label_2b83b4;
        case 0x2b83b8u: goto label_2b83b8;
        case 0x2b83bcu: goto label_2b83bc;
        case 0x2b83c0u: goto label_2b83c0;
        case 0x2b83c4u: goto label_2b83c4;
        case 0x2b83c8u: goto label_2b83c8;
        case 0x2b83ccu: goto label_2b83cc;
        case 0x2b83d0u: goto label_2b83d0;
        case 0x2b83d4u: goto label_2b83d4;
        case 0x2b83d8u: goto label_2b83d8;
        case 0x2b83dcu: goto label_2b83dc;
        case 0x2b83e0u: goto label_2b83e0;
        case 0x2b83e4u: goto label_2b83e4;
        case 0x2b83e8u: goto label_2b83e8;
        case 0x2b83ecu: goto label_2b83ec;
        case 0x2b83f0u: goto label_2b83f0;
        case 0x2b83f4u: goto label_2b83f4;
        case 0x2b83f8u: goto label_2b83f8;
        case 0x2b83fcu: goto label_2b83fc;
        case 0x2b8400u: goto label_2b8400;
        case 0x2b8404u: goto label_2b8404;
        case 0x2b8408u: goto label_2b8408;
        case 0x2b840cu: goto label_2b840c;
        case 0x2b8410u: goto label_2b8410;
        case 0x2b8414u: goto label_2b8414;
        case 0x2b8418u: goto label_2b8418;
        case 0x2b841cu: goto label_2b841c;
        case 0x2b8420u: goto label_2b8420;
        case 0x2b8424u: goto label_2b8424;
        case 0x2b8428u: goto label_2b8428;
        case 0x2b842cu: goto label_2b842c;
        case 0x2b8430u: goto label_2b8430;
        case 0x2b8434u: goto label_2b8434;
        case 0x2b8438u: goto label_2b8438;
        case 0x2b843cu: goto label_2b843c;
        case 0x2b8440u: goto label_2b8440;
        case 0x2b8444u: goto label_2b8444;
        case 0x2b8448u: goto label_2b8448;
        case 0x2b844cu: goto label_2b844c;
        case 0x2b8450u: goto label_2b8450;
        case 0x2b8454u: goto label_2b8454;
        case 0x2b8458u: goto label_2b8458;
        case 0x2b845cu: goto label_2b845c;
        case 0x2b8460u: goto label_2b8460;
        case 0x2b8464u: goto label_2b8464;
        case 0x2b8468u: goto label_2b8468;
        case 0x2b846cu: goto label_2b846c;
        case 0x2b8470u: goto label_2b8470;
        case 0x2b8474u: goto label_2b8474;
        case 0x2b8478u: goto label_2b8478;
        case 0x2b847cu: goto label_2b847c;
        case 0x2b8480u: goto label_2b8480;
        case 0x2b8484u: goto label_2b8484;
        case 0x2b8488u: goto label_2b8488;
        case 0x2b848cu: goto label_2b848c;
        case 0x2b8490u: goto label_2b8490;
        case 0x2b8494u: goto label_2b8494;
        case 0x2b8498u: goto label_2b8498;
        case 0x2b849cu: goto label_2b849c;
        case 0x2b84a0u: goto label_2b84a0;
        case 0x2b84a4u: goto label_2b84a4;
        case 0x2b84a8u: goto label_2b84a8;
        case 0x2b84acu: goto label_2b84ac;
        case 0x2b84b0u: goto label_2b84b0;
        case 0x2b84b4u: goto label_2b84b4;
        case 0x2b84b8u: goto label_2b84b8;
        case 0x2b84bcu: goto label_2b84bc;
        case 0x2b84c0u: goto label_2b84c0;
        case 0x2b84c4u: goto label_2b84c4;
        case 0x2b84c8u: goto label_2b84c8;
        case 0x2b84ccu: goto label_2b84cc;
        case 0x2b84d0u: goto label_2b84d0;
        case 0x2b84d4u: goto label_2b84d4;
        case 0x2b84d8u: goto label_2b84d8;
        case 0x2b84dcu: goto label_2b84dc;
        case 0x2b84e0u: goto label_2b84e0;
        case 0x2b84e4u: goto label_2b84e4;
        case 0x2b84e8u: goto label_2b84e8;
        case 0x2b84ecu: goto label_2b84ec;
        case 0x2b84f0u: goto label_2b84f0;
        case 0x2b84f4u: goto label_2b84f4;
        case 0x2b84f8u: goto label_2b84f8;
        case 0x2b84fcu: goto label_2b84fc;
        case 0x2b8500u: goto label_2b8500;
        case 0x2b8504u: goto label_2b8504;
        case 0x2b8508u: goto label_2b8508;
        case 0x2b850cu: goto label_2b850c;
        case 0x2b8510u: goto label_2b8510;
        case 0x2b8514u: goto label_2b8514;
        case 0x2b8518u: goto label_2b8518;
        case 0x2b851cu: goto label_2b851c;
        case 0x2b8520u: goto label_2b8520;
        case 0x2b8524u: goto label_2b8524;
        case 0x2b8528u: goto label_2b8528;
        case 0x2b852cu: goto label_2b852c;
        case 0x2b8530u: goto label_2b8530;
        case 0x2b8534u: goto label_2b8534;
        case 0x2b8538u: goto label_2b8538;
        case 0x2b853cu: goto label_2b853c;
        case 0x2b8540u: goto label_2b8540;
        case 0x2b8544u: goto label_2b8544;
        case 0x2b8548u: goto label_2b8548;
        case 0x2b854cu: goto label_2b854c;
        case 0x2b8550u: goto label_2b8550;
        case 0x2b8554u: goto label_2b8554;
        case 0x2b8558u: goto label_2b8558;
        case 0x2b855cu: goto label_2b855c;
        case 0x2b8560u: goto label_2b8560;
        case 0x2b8564u: goto label_2b8564;
        case 0x2b8568u: goto label_2b8568;
        case 0x2b856cu: goto label_2b856c;
        case 0x2b8570u: goto label_2b8570;
        case 0x2b8574u: goto label_2b8574;
        case 0x2b8578u: goto label_2b8578;
        case 0x2b857cu: goto label_2b857c;
        case 0x2b8580u: goto label_2b8580;
        case 0x2b8584u: goto label_2b8584;
        case 0x2b8588u: goto label_2b8588;
        case 0x2b858cu: goto label_2b858c;
        case 0x2b8590u: goto label_2b8590;
        case 0x2b8594u: goto label_2b8594;
        case 0x2b8598u: goto label_2b8598;
        case 0x2b859cu: goto label_2b859c;
        case 0x2b85a0u: goto label_2b85a0;
        case 0x2b85a4u: goto label_2b85a4;
        case 0x2b85a8u: goto label_2b85a8;
        case 0x2b85acu: goto label_2b85ac;
        case 0x2b85b0u: goto label_2b85b0;
        case 0x2b85b4u: goto label_2b85b4;
        case 0x2b85b8u: goto label_2b85b8;
        case 0x2b85bcu: goto label_2b85bc;
        case 0x2b85c0u: goto label_2b85c0;
        case 0x2b85c4u: goto label_2b85c4;
        case 0x2b85c8u: goto label_2b85c8;
        case 0x2b85ccu: goto label_2b85cc;
        case 0x2b85d0u: goto label_2b85d0;
        case 0x2b85d4u: goto label_2b85d4;
        case 0x2b85d8u: goto label_2b85d8;
        case 0x2b85dcu: goto label_2b85dc;
        case 0x2b85e0u: goto label_2b85e0;
        case 0x2b85e4u: goto label_2b85e4;
        case 0x2b85e8u: goto label_2b85e8;
        case 0x2b85ecu: goto label_2b85ec;
        case 0x2b85f0u: goto label_2b85f0;
        case 0x2b85f4u: goto label_2b85f4;
        case 0x2b85f8u: goto label_2b85f8;
        case 0x2b85fcu: goto label_2b85fc;
        case 0x2b8600u: goto label_2b8600;
        case 0x2b8604u: goto label_2b8604;
        case 0x2b8608u: goto label_2b8608;
        case 0x2b860cu: goto label_2b860c;
        case 0x2b8610u: goto label_2b8610;
        case 0x2b8614u: goto label_2b8614;
        case 0x2b8618u: goto label_2b8618;
        case 0x2b861cu: goto label_2b861c;
        case 0x2b8620u: goto label_2b8620;
        case 0x2b8624u: goto label_2b8624;
        case 0x2b8628u: goto label_2b8628;
        case 0x2b862cu: goto label_2b862c;
        case 0x2b8630u: goto label_2b8630;
        case 0x2b8634u: goto label_2b8634;
        case 0x2b8638u: goto label_2b8638;
        case 0x2b863cu: goto label_2b863c;
        case 0x2b8640u: goto label_2b8640;
        case 0x2b8644u: goto label_2b8644;
        case 0x2b8648u: goto label_2b8648;
        case 0x2b864cu: goto label_2b864c;
        case 0x2b8650u: goto label_2b8650;
        case 0x2b8654u: goto label_2b8654;
        case 0x2b8658u: goto label_2b8658;
        case 0x2b865cu: goto label_2b865c;
        case 0x2b8660u: goto label_2b8660;
        case 0x2b8664u: goto label_2b8664;
        case 0x2b8668u: goto label_2b8668;
        case 0x2b866cu: goto label_2b866c;
        case 0x2b8670u: goto label_2b8670;
        case 0x2b8674u: goto label_2b8674;
        case 0x2b8678u: goto label_2b8678;
        case 0x2b867cu: goto label_2b867c;
        case 0x2b8680u: goto label_2b8680;
        case 0x2b8684u: goto label_2b8684;
        case 0x2b8688u: goto label_2b8688;
        case 0x2b868cu: goto label_2b868c;
        case 0x2b8690u: goto label_2b8690;
        case 0x2b8694u: goto label_2b8694;
        case 0x2b8698u: goto label_2b8698;
        case 0x2b869cu: goto label_2b869c;
        case 0x2b86a0u: goto label_2b86a0;
        case 0x2b86a4u: goto label_2b86a4;
        case 0x2b86a8u: goto label_2b86a8;
        case 0x2b86acu: goto label_2b86ac;
        case 0x2b86b0u: goto label_2b86b0;
        case 0x2b86b4u: goto label_2b86b4;
        case 0x2b86b8u: goto label_2b86b8;
        case 0x2b86bcu: goto label_2b86bc;
        case 0x2b86c0u: goto label_2b86c0;
        case 0x2b86c4u: goto label_2b86c4;
        case 0x2b86c8u: goto label_2b86c8;
        case 0x2b86ccu: goto label_2b86cc;
        case 0x2b86d0u: goto label_2b86d0;
        case 0x2b86d4u: goto label_2b86d4;
        case 0x2b86d8u: goto label_2b86d8;
        case 0x2b86dcu: goto label_2b86dc;
        case 0x2b86e0u: goto label_2b86e0;
        case 0x2b86e4u: goto label_2b86e4;
        case 0x2b86e8u: goto label_2b86e8;
        case 0x2b86ecu: goto label_2b86ec;
        case 0x2b86f0u: goto label_2b86f0;
        case 0x2b86f4u: goto label_2b86f4;
        case 0x2b86f8u: goto label_2b86f8;
        case 0x2b86fcu: goto label_2b86fc;
        case 0x2b8700u: goto label_2b8700;
        case 0x2b8704u: goto label_2b8704;
        case 0x2b8708u: goto label_2b8708;
        case 0x2b870cu: goto label_2b870c;
        case 0x2b8710u: goto label_2b8710;
        case 0x2b8714u: goto label_2b8714;
        case 0x2b8718u: goto label_2b8718;
        case 0x2b871cu: goto label_2b871c;
        case 0x2b8720u: goto label_2b8720;
        case 0x2b8724u: goto label_2b8724;
        case 0x2b8728u: goto label_2b8728;
        case 0x2b872cu: goto label_2b872c;
        case 0x2b8730u: goto label_2b8730;
        case 0x2b8734u: goto label_2b8734;
        case 0x2b8738u: goto label_2b8738;
        case 0x2b873cu: goto label_2b873c;
        case 0x2b8740u: goto label_2b8740;
        case 0x2b8744u: goto label_2b8744;
        case 0x2b8748u: goto label_2b8748;
        case 0x2b874cu: goto label_2b874c;
        case 0x2b8750u: goto label_2b8750;
        case 0x2b8754u: goto label_2b8754;
        case 0x2b8758u: goto label_2b8758;
        case 0x2b875cu: goto label_2b875c;
        case 0x2b8760u: goto label_2b8760;
        case 0x2b8764u: goto label_2b8764;
        case 0x2b8768u: goto label_2b8768;
        case 0x2b876cu: goto label_2b876c;
        case 0x2b8770u: goto label_2b8770;
        case 0x2b8774u: goto label_2b8774;
        case 0x2b8778u: goto label_2b8778;
        case 0x2b877cu: goto label_2b877c;
        case 0x2b8780u: goto label_2b8780;
        case 0x2b8784u: goto label_2b8784;
        case 0x2b8788u: goto label_2b8788;
        case 0x2b878cu: goto label_2b878c;
        case 0x2b8790u: goto label_2b8790;
        case 0x2b8794u: goto label_2b8794;
        case 0x2b8798u: goto label_2b8798;
        case 0x2b879cu: goto label_2b879c;
        case 0x2b87a0u: goto label_2b87a0;
        case 0x2b87a4u: goto label_2b87a4;
        case 0x2b87a8u: goto label_2b87a8;
        case 0x2b87acu: goto label_2b87ac;
        case 0x2b87b0u: goto label_2b87b0;
        case 0x2b87b4u: goto label_2b87b4;
        case 0x2b87b8u: goto label_2b87b8;
        case 0x2b87bcu: goto label_2b87bc;
        case 0x2b87c0u: goto label_2b87c0;
        case 0x2b87c4u: goto label_2b87c4;
        case 0x2b87c8u: goto label_2b87c8;
        case 0x2b87ccu: goto label_2b87cc;
        case 0x2b87d0u: goto label_2b87d0;
        case 0x2b87d4u: goto label_2b87d4;
        case 0x2b87d8u: goto label_2b87d8;
        case 0x2b87dcu: goto label_2b87dc;
        case 0x2b87e0u: goto label_2b87e0;
        case 0x2b87e4u: goto label_2b87e4;
        case 0x2b87e8u: goto label_2b87e8;
        case 0x2b87ecu: goto label_2b87ec;
        case 0x2b87f0u: goto label_2b87f0;
        case 0x2b87f4u: goto label_2b87f4;
        case 0x2b87f8u: goto label_2b87f8;
        case 0x2b87fcu: goto label_2b87fc;
        case 0x2b8800u: goto label_2b8800;
        case 0x2b8804u: goto label_2b8804;
        case 0x2b8808u: goto label_2b8808;
        case 0x2b880cu: goto label_2b880c;
        case 0x2b8810u: goto label_2b8810;
        case 0x2b8814u: goto label_2b8814;
        case 0x2b8818u: goto label_2b8818;
        case 0x2b881cu: goto label_2b881c;
        case 0x2b8820u: goto label_2b8820;
        case 0x2b8824u: goto label_2b8824;
        case 0x2b8828u: goto label_2b8828;
        case 0x2b882cu: goto label_2b882c;
        case 0x2b8830u: goto label_2b8830;
        case 0x2b8834u: goto label_2b8834;
        case 0x2b8838u: goto label_2b8838;
        case 0x2b883cu: goto label_2b883c;
        case 0x2b8840u: goto label_2b8840;
        case 0x2b8844u: goto label_2b8844;
        case 0x2b8848u: goto label_2b8848;
        case 0x2b884cu: goto label_2b884c;
        case 0x2b8850u: goto label_2b8850;
        case 0x2b8854u: goto label_2b8854;
        case 0x2b8858u: goto label_2b8858;
        case 0x2b885cu: goto label_2b885c;
        case 0x2b8860u: goto label_2b8860;
        case 0x2b8864u: goto label_2b8864;
        case 0x2b8868u: goto label_2b8868;
        case 0x2b886cu: goto label_2b886c;
        case 0x2b8870u: goto label_2b8870;
        case 0x2b8874u: goto label_2b8874;
        case 0x2b8878u: goto label_2b8878;
        case 0x2b887cu: goto label_2b887c;
        case 0x2b8880u: goto label_2b8880;
        case 0x2b8884u: goto label_2b8884;
        case 0x2b8888u: goto label_2b8888;
        case 0x2b888cu: goto label_2b888c;
        case 0x2b8890u: goto label_2b8890;
        case 0x2b8894u: goto label_2b8894;
        case 0x2b8898u: goto label_2b8898;
        case 0x2b889cu: goto label_2b889c;
        case 0x2b88a0u: goto label_2b88a0;
        case 0x2b88a4u: goto label_2b88a4;
        case 0x2b88a8u: goto label_2b88a8;
        case 0x2b88acu: goto label_2b88ac;
        case 0x2b88b0u: goto label_2b88b0;
        case 0x2b88b4u: goto label_2b88b4;
        case 0x2b88b8u: goto label_2b88b8;
        case 0x2b88bcu: goto label_2b88bc;
        case 0x2b88c0u: goto label_2b88c0;
        case 0x2b88c4u: goto label_2b88c4;
        case 0x2b88c8u: goto label_2b88c8;
        case 0x2b88ccu: goto label_2b88cc;
        case 0x2b88d0u: goto label_2b88d0;
        case 0x2b88d4u: goto label_2b88d4;
        case 0x2b88d8u: goto label_2b88d8;
        case 0x2b88dcu: goto label_2b88dc;
        case 0x2b88e0u: goto label_2b88e0;
        case 0x2b88e4u: goto label_2b88e4;
        case 0x2b88e8u: goto label_2b88e8;
        case 0x2b88ecu: goto label_2b88ec;
        case 0x2b88f0u: goto label_2b88f0;
        case 0x2b88f4u: goto label_2b88f4;
        case 0x2b88f8u: goto label_2b88f8;
        case 0x2b88fcu: goto label_2b88fc;
        case 0x2b8900u: goto label_2b8900;
        case 0x2b8904u: goto label_2b8904;
        case 0x2b8908u: goto label_2b8908;
        case 0x2b890cu: goto label_2b890c;
        case 0x2b8910u: goto label_2b8910;
        case 0x2b8914u: goto label_2b8914;
        case 0x2b8918u: goto label_2b8918;
        case 0x2b891cu: goto label_2b891c;
        case 0x2b8920u: goto label_2b8920;
        case 0x2b8924u: goto label_2b8924;
        case 0x2b8928u: goto label_2b8928;
        case 0x2b892cu: goto label_2b892c;
        case 0x2b8930u: goto label_2b8930;
        case 0x2b8934u: goto label_2b8934;
        case 0x2b8938u: goto label_2b8938;
        case 0x2b893cu: goto label_2b893c;
        case 0x2b8940u: goto label_2b8940;
        case 0x2b8944u: goto label_2b8944;
        case 0x2b8948u: goto label_2b8948;
        case 0x2b894cu: goto label_2b894c;
        case 0x2b8950u: goto label_2b8950;
        case 0x2b8954u: goto label_2b8954;
        case 0x2b8958u: goto label_2b8958;
        case 0x2b895cu: goto label_2b895c;
        case 0x2b8960u: goto label_2b8960;
        case 0x2b8964u: goto label_2b8964;
        case 0x2b8968u: goto label_2b8968;
        case 0x2b896cu: goto label_2b896c;
        case 0x2b8970u: goto label_2b8970;
        case 0x2b8974u: goto label_2b8974;
        case 0x2b8978u: goto label_2b8978;
        case 0x2b897cu: goto label_2b897c;
        case 0x2b8980u: goto label_2b8980;
        case 0x2b8984u: goto label_2b8984;
        case 0x2b8988u: goto label_2b8988;
        case 0x2b898cu: goto label_2b898c;
        case 0x2b8990u: goto label_2b8990;
        case 0x2b8994u: goto label_2b8994;
        case 0x2b8998u: goto label_2b8998;
        case 0x2b899cu: goto label_2b899c;
        case 0x2b89a0u: goto label_2b89a0;
        case 0x2b89a4u: goto label_2b89a4;
        case 0x2b89a8u: goto label_2b89a8;
        case 0x2b89acu: goto label_2b89ac;
        case 0x2b89b0u: goto label_2b89b0;
        case 0x2b89b4u: goto label_2b89b4;
        case 0x2b89b8u: goto label_2b89b8;
        case 0x2b89bcu: goto label_2b89bc;
        case 0x2b89c0u: goto label_2b89c0;
        case 0x2b89c4u: goto label_2b89c4;
        case 0x2b89c8u: goto label_2b89c8;
        case 0x2b89ccu: goto label_2b89cc;
        case 0x2b89d0u: goto label_2b89d0;
        case 0x2b89d4u: goto label_2b89d4;
        case 0x2b89d8u: goto label_2b89d8;
        case 0x2b89dcu: goto label_2b89dc;
        case 0x2b89e0u: goto label_2b89e0;
        case 0x2b89e4u: goto label_2b89e4;
        case 0x2b89e8u: goto label_2b89e8;
        case 0x2b89ecu: goto label_2b89ec;
        case 0x2b89f0u: goto label_2b89f0;
        case 0x2b89f4u: goto label_2b89f4;
        case 0x2b89f8u: goto label_2b89f8;
        case 0x2b89fcu: goto label_2b89fc;
        case 0x2b8a00u: goto label_2b8a00;
        case 0x2b8a04u: goto label_2b8a04;
        case 0x2b8a08u: goto label_2b8a08;
        case 0x2b8a0cu: goto label_2b8a0c;
        case 0x2b8a10u: goto label_2b8a10;
        case 0x2b8a14u: goto label_2b8a14;
        case 0x2b8a18u: goto label_2b8a18;
        case 0x2b8a1cu: goto label_2b8a1c;
        case 0x2b8a20u: goto label_2b8a20;
        case 0x2b8a24u: goto label_2b8a24;
        case 0x2b8a28u: goto label_2b8a28;
        case 0x2b8a2cu: goto label_2b8a2c;
        case 0x2b8a30u: goto label_2b8a30;
        case 0x2b8a34u: goto label_2b8a34;
        case 0x2b8a38u: goto label_2b8a38;
        case 0x2b8a3cu: goto label_2b8a3c;
        case 0x2b8a40u: goto label_2b8a40;
        case 0x2b8a44u: goto label_2b8a44;
        case 0x2b8a48u: goto label_2b8a48;
        case 0x2b8a4cu: goto label_2b8a4c;
        case 0x2b8a50u: goto label_2b8a50;
        case 0x2b8a54u: goto label_2b8a54;
        case 0x2b8a58u: goto label_2b8a58;
        case 0x2b8a5cu: goto label_2b8a5c;
        case 0x2b8a60u: goto label_2b8a60;
        case 0x2b8a64u: goto label_2b8a64;
        case 0x2b8a68u: goto label_2b8a68;
        case 0x2b8a6cu: goto label_2b8a6c;
        case 0x2b8a70u: goto label_2b8a70;
        case 0x2b8a74u: goto label_2b8a74;
        case 0x2b8a78u: goto label_2b8a78;
        case 0x2b8a7cu: goto label_2b8a7c;
        case 0x2b8a80u: goto label_2b8a80;
        case 0x2b8a84u: goto label_2b8a84;
        case 0x2b8a88u: goto label_2b8a88;
        case 0x2b8a8cu: goto label_2b8a8c;
        case 0x2b8a90u: goto label_2b8a90;
        case 0x2b8a94u: goto label_2b8a94;
        case 0x2b8a98u: goto label_2b8a98;
        case 0x2b8a9cu: goto label_2b8a9c;
        case 0x2b8aa0u: goto label_2b8aa0;
        case 0x2b8aa4u: goto label_2b8aa4;
        case 0x2b8aa8u: goto label_2b8aa8;
        case 0x2b8aacu: goto label_2b8aac;
        case 0x2b8ab0u: goto label_2b8ab0;
        case 0x2b8ab4u: goto label_2b8ab4;
        case 0x2b8ab8u: goto label_2b8ab8;
        case 0x2b8abcu: goto label_2b8abc;
        case 0x2b8ac0u: goto label_2b8ac0;
        case 0x2b8ac4u: goto label_2b8ac4;
        case 0x2b8ac8u: goto label_2b8ac8;
        case 0x2b8accu: goto label_2b8acc;
        case 0x2b8ad0u: goto label_2b8ad0;
        case 0x2b8ad4u: goto label_2b8ad4;
        case 0x2b8ad8u: goto label_2b8ad8;
        case 0x2b8adcu: goto label_2b8adc;
        case 0x2b8ae0u: goto label_2b8ae0;
        case 0x2b8ae4u: goto label_2b8ae4;
        case 0x2b8ae8u: goto label_2b8ae8;
        case 0x2b8aecu: goto label_2b8aec;
        case 0x2b8af0u: goto label_2b8af0;
        case 0x2b8af4u: goto label_2b8af4;
        case 0x2b8af8u: goto label_2b8af8;
        case 0x2b8afcu: goto label_2b8afc;
        case 0x2b8b00u: goto label_2b8b00;
        case 0x2b8b04u: goto label_2b8b04;
        case 0x2b8b08u: goto label_2b8b08;
        case 0x2b8b0cu: goto label_2b8b0c;
        case 0x2b8b10u: goto label_2b8b10;
        case 0x2b8b14u: goto label_2b8b14;
        case 0x2b8b18u: goto label_2b8b18;
        case 0x2b8b1cu: goto label_2b8b1c;
        case 0x2b8b20u: goto label_2b8b20;
        case 0x2b8b24u: goto label_2b8b24;
        case 0x2b8b28u: goto label_2b8b28;
        case 0x2b8b2cu: goto label_2b8b2c;
        case 0x2b8b30u: goto label_2b8b30;
        case 0x2b8b34u: goto label_2b8b34;
        case 0x2b8b38u: goto label_2b8b38;
        case 0x2b8b3cu: goto label_2b8b3c;
        case 0x2b8b40u: goto label_2b8b40;
        case 0x2b8b44u: goto label_2b8b44;
        case 0x2b8b48u: goto label_2b8b48;
        case 0x2b8b4cu: goto label_2b8b4c;
        case 0x2b8b50u: goto label_2b8b50;
        case 0x2b8b54u: goto label_2b8b54;
        case 0x2b8b58u: goto label_2b8b58;
        case 0x2b8b5cu: goto label_2b8b5c;
        case 0x2b8b60u: goto label_2b8b60;
        case 0x2b8b64u: goto label_2b8b64;
        case 0x2b8b68u: goto label_2b8b68;
        case 0x2b8b6cu: goto label_2b8b6c;
        case 0x2b8b70u: goto label_2b8b70;
        case 0x2b8b74u: goto label_2b8b74;
        case 0x2b8b78u: goto label_2b8b78;
        case 0x2b8b7cu: goto label_2b8b7c;
        case 0x2b8b80u: goto label_2b8b80;
        case 0x2b8b84u: goto label_2b8b84;
        case 0x2b8b88u: goto label_2b8b88;
        case 0x2b8b8cu: goto label_2b8b8c;
        case 0x2b8b90u: goto label_2b8b90;
        case 0x2b8b94u: goto label_2b8b94;
        case 0x2b8b98u: goto label_2b8b98;
        case 0x2b8b9cu: goto label_2b8b9c;
        case 0x2b8ba0u: goto label_2b8ba0;
        case 0x2b8ba4u: goto label_2b8ba4;
        case 0x2b8ba8u: goto label_2b8ba8;
        case 0x2b8bacu: goto label_2b8bac;
        case 0x2b8bb0u: goto label_2b8bb0;
        case 0x2b8bb4u: goto label_2b8bb4;
        case 0x2b8bb8u: goto label_2b8bb8;
        case 0x2b8bbcu: goto label_2b8bbc;
        case 0x2b8bc0u: goto label_2b8bc0;
        case 0x2b8bc4u: goto label_2b8bc4;
        case 0x2b8bc8u: goto label_2b8bc8;
        case 0x2b8bccu: goto label_2b8bcc;
        case 0x2b8bd0u: goto label_2b8bd0;
        case 0x2b8bd4u: goto label_2b8bd4;
        case 0x2b8bd8u: goto label_2b8bd8;
        case 0x2b8bdcu: goto label_2b8bdc;
        case 0x2b8be0u: goto label_2b8be0;
        case 0x2b8be4u: goto label_2b8be4;
        case 0x2b8be8u: goto label_2b8be8;
        case 0x2b8becu: goto label_2b8bec;
        case 0x2b8bf0u: goto label_2b8bf0;
        case 0x2b8bf4u: goto label_2b8bf4;
        case 0x2b8bf8u: goto label_2b8bf8;
        case 0x2b8bfcu: goto label_2b8bfc;
        case 0x2b8c00u: goto label_2b8c00;
        case 0x2b8c04u: goto label_2b8c04;
        case 0x2b8c08u: goto label_2b8c08;
        case 0x2b8c0cu: goto label_2b8c0c;
        case 0x2b8c10u: goto label_2b8c10;
        case 0x2b8c14u: goto label_2b8c14;
        case 0x2b8c18u: goto label_2b8c18;
        case 0x2b8c1cu: goto label_2b8c1c;
        case 0x2b8c20u: goto label_2b8c20;
        case 0x2b8c24u: goto label_2b8c24;
        case 0x2b8c28u: goto label_2b8c28;
        case 0x2b8c2cu: goto label_2b8c2c;
        case 0x2b8c30u: goto label_2b8c30;
        case 0x2b8c34u: goto label_2b8c34;
        case 0x2b8c38u: goto label_2b8c38;
        case 0x2b8c3cu: goto label_2b8c3c;
        case 0x2b8c40u: goto label_2b8c40;
        case 0x2b8c44u: goto label_2b8c44;
        case 0x2b8c48u: goto label_2b8c48;
        case 0x2b8c4cu: goto label_2b8c4c;
        case 0x2b8c50u: goto label_2b8c50;
        case 0x2b8c54u: goto label_2b8c54;
        case 0x2b8c58u: goto label_2b8c58;
        case 0x2b8c5cu: goto label_2b8c5c;
        case 0x2b8c60u: goto label_2b8c60;
        case 0x2b8c64u: goto label_2b8c64;
        case 0x2b8c68u: goto label_2b8c68;
        case 0x2b8c6cu: goto label_2b8c6c;
        case 0x2b8c70u: goto label_2b8c70;
        case 0x2b8c74u: goto label_2b8c74;
        case 0x2b8c78u: goto label_2b8c78;
        case 0x2b8c7cu: goto label_2b8c7c;
        case 0x2b8c80u: goto label_2b8c80;
        case 0x2b8c84u: goto label_2b8c84;
        case 0x2b8c88u: goto label_2b8c88;
        case 0x2b8c8cu: goto label_2b8c8c;
        case 0x2b8c90u: goto label_2b8c90;
        case 0x2b8c94u: goto label_2b8c94;
        case 0x2b8c98u: goto label_2b8c98;
        case 0x2b8c9cu: goto label_2b8c9c;
        case 0x2b8ca0u: goto label_2b8ca0;
        case 0x2b8ca4u: goto label_2b8ca4;
        case 0x2b8ca8u: goto label_2b8ca8;
        case 0x2b8cacu: goto label_2b8cac;
        case 0x2b8cb0u: goto label_2b8cb0;
        case 0x2b8cb4u: goto label_2b8cb4;
        case 0x2b8cb8u: goto label_2b8cb8;
        case 0x2b8cbcu: goto label_2b8cbc;
        case 0x2b8cc0u: goto label_2b8cc0;
        case 0x2b8cc4u: goto label_2b8cc4;
        case 0x2b8cc8u: goto label_2b8cc8;
        case 0x2b8cccu: goto label_2b8ccc;
        case 0x2b8cd0u: goto label_2b8cd0;
        case 0x2b8cd4u: goto label_2b8cd4;
        case 0x2b8cd8u: goto label_2b8cd8;
        case 0x2b8cdcu: goto label_2b8cdc;
        case 0x2b8ce0u: goto label_2b8ce0;
        case 0x2b8ce4u: goto label_2b8ce4;
        case 0x2b8ce8u: goto label_2b8ce8;
        case 0x2b8cecu: goto label_2b8cec;
        case 0x2b8cf0u: goto label_2b8cf0;
        default: break;
    }

    ctx->pc = 0x2b7320u;

label_2b7320:
    // 0x2b7320: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x2b7320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_2b7324:
    // 0x2b7324: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2b7324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2b7328:
    // 0x2b7328: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2b7328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2b732c:
    // 0x2b732c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2b732cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2b7330:
    // 0x2b7330: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2b7330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2b7334:
    // 0x2b7334: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2b7334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2b7338:
    // 0x2b7338: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2b7338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2b733c:
    // 0x2b733c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2b733cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b7340:
    // 0x2b7340: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2b7340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2b7344:
    // 0x2b7344: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b7344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2b7348:
    // 0x2b7348: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b7348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2b734c:
    // 0x2b734c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2b734cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2b7350:
    // 0x2b7350: 0xc08f80c  jal         func_23E030
label_2b7354:
    if (ctx->pc == 0x2B7354u) {
        ctx->pc = 0x2B7354u;
            // 0x2b7354: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->pc = 0x2B7358u;
        goto label_2b7358;
    }
    ctx->pc = 0x2B7350u;
    SET_GPR_U32(ctx, 31, 0x2B7358u);
    ctx->pc = 0x2B7354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7350u;
            // 0x2b7354: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E030u;
    if (runtime->hasFunction(0x23E030u)) {
        auto targetFn = runtime->lookupFunction(0x23E030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7358u; }
        if (ctx->pc != 0x2B7358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSelectKey__12CMenuKeyFuncFv_0x23e030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7358u; }
        if (ctx->pc != 0x2B7358u) { return; }
    }
    ctx->pc = 0x2B7358u;
label_2b7358:
    // 0x2b7358: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2b7358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2b735c:
    // 0x2b735c: 0xc08f840  jal         func_23E100
label_2b7360:
    if (ctx->pc == 0x2B7360u) {
        ctx->pc = 0x2B7360u;
            // 0x2b7360: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B7364u;
        goto label_2b7364;
    }
    ctx->pc = 0x2B735Cu;
    SET_GPR_U32(ctx, 31, 0x2B7364u);
    ctx->pc = 0x2B7360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B735Cu;
            // 0x2b7360: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E100u;
    if (runtime->hasFunction(0x23E100u)) {
        auto targetFn = runtime->lookupFunction(0x23E100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7364u; }
        if (ctx->pc != 0x2B7364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLRKey__12CMenuKeyFuncFv_0x23e100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7364u; }
        if (ctx->pc != 0x2B7364u) { return; }
    }
    ctx->pc = 0x2B7364u;
label_2b7364:
    // 0x2b7364: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2b7364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2b7368:
    // 0x2b7368: 0xc08f8c8  jal         func_23E320
label_2b736c:
    if (ctx->pc == 0x2B736Cu) {
        ctx->pc = 0x2B736Cu;
            // 0x2b736c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B7370u;
        goto label_2b7370;
    }
    ctx->pc = 0x2B7368u;
    SET_GPR_U32(ctx, 31, 0x2B7370u);
    ctx->pc = 0x2B736Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7368u;
            // 0x2b736c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7370u; }
        if (ctx->pc != 0x2B7370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPushButton__12CMenuKeyFuncFv_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7370u; }
        if (ctx->pc != 0x2B7370u) { return; }
    }
    ctx->pc = 0x2B7370u;
label_2b7370:
    // 0x2b7370: 0x8f849be8  lw          $a0, -0x6418($gp)
    ctx->pc = 0x2b7370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941672)));
label_2b7374:
    // 0x2b7374: 0xc08e8a8  jal         func_23A2A0
label_2b7378:
    if (ctx->pc == 0x2B7378u) {
        ctx->pc = 0x2B7378u;
            // 0x2b7378: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B737Cu;
        goto label_2b737c;
    }
    ctx->pc = 0x2B7374u;
    SET_GPR_U32(ctx, 31, 0x2B737Cu);
    ctx->pc = 0x2B7378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7374u;
            // 0x2b7378: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A2A0u;
    if (runtime->hasFunction(0x23A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B737Cu; }
        if (ctx->pc != 0x2B737Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B737Cu; }
        if (ctx->pc != 0x2B737Cu) { return; }
    }
    ctx->pc = 0x2B737Cu;
label_2b737c:
    // 0x2b737c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b737cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b7380:
    // 0x2b7380: 0x86840000  lh          $a0, 0x0($s4)
    ctx->pc = 0x2b7380u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_2b7384:
    // 0x2b7384: 0x8c31ca54  lw          $s1, -0x35AC($at)
    ctx->pc = 0x2b7384u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953556)));
label_2b7388:
    // 0x2b7388: 0x10800052  beqz        $a0, . + 4 + (0x52 << 2)
label_2b738c:
    if (ctx->pc == 0x2B738Cu) {
        ctx->pc = 0x2B738Cu;
            // 0x2b738c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B7390u;
        goto label_2b7390;
    }
    ctx->pc = 0x2B7388u;
    {
        const bool branch_taken_0x2b7388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B738Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7388u;
            // 0x2b738c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7388) {
            ctx->pc = 0x2B74D4u;
            goto label_2b74d4;
        }
    }
    ctx->pc = 0x2B7390u;
label_2b7390:
    // 0x2b7390: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b7390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b7394:
    // 0x2b7394: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_2b7398:
    if (ctx->pc == 0x2B7398u) {
        ctx->pc = 0x2B739Cu;
        goto label_2b739c;
    }
    ctx->pc = 0x2B7394u;
    {
        const bool branch_taken_0x2b7394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b7394) {
            ctx->pc = 0x2B73C4u;
            goto label_2b73c4;
        }
    }
    ctx->pc = 0x2B739Cu;
label_2b739c:
    // 0x2b739c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b739cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b73a0:
    // 0x2b73a0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_2b73a4:
    if (ctx->pc == 0x2B73A4u) {
        ctx->pc = 0x2B73A8u;
        goto label_2b73a8;
    }
    ctx->pc = 0x2B73A0u;
    {
        const bool branch_taken_0x2b73a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b73a0) {
            ctx->pc = 0x2B73B0u;
            goto label_2b73b0;
        }
    }
    ctx->pc = 0x2B73A8u;
label_2b73a8:
    // 0x2b73a8: 0x10000578  b           . + 4 + (0x578 << 2)
label_2b73ac:
    if (ctx->pc == 0x2B73ACu) {
        ctx->pc = 0x2B73ACu;
            // 0x2b73ac: 0x8e834660  lw          $v1, 0x4660($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18016)));
        ctx->pc = 0x2B73B0u;
        goto label_2b73b0;
    }
    ctx->pc = 0x2B73A8u;
    {
        const bool branch_taken_0x2b73a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B73ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B73A8u;
            // 0x2b73ac: 0x8e834660  lw          $v1, 0x4660($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b73a8) {
            ctx->pc = 0x2B898Cu;
            goto label_2b898c;
        }
    }
    ctx->pc = 0x2B73B0u;
label_2b73b0:
    // 0x2b73b0: 0x10400575  beqz        $v0, . + 4 + (0x575 << 2)
label_2b73b4:
    if (ctx->pc == 0x2B73B4u) {
        ctx->pc = 0x2B73B8u;
        goto label_2b73b8;
    }
    ctx->pc = 0x2B73B0u;
    {
        const bool branch_taken_0x2b73b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b73b0) {
            ctx->pc = 0x2B8988u;
            goto label_2b8988;
        }
    }
    ctx->pc = 0x2B73B8u;
label_2b73b8:
    // 0x2b73b8: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x2b73b8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
label_2b73bc:
    // 0x2b73bc: 0x10000572  b           . + 4 + (0x572 << 2)
label_2b73c0:
    if (ctx->pc == 0x2B73C0u) {
        ctx->pc = 0x2B73C0u;
            // 0x2b73c0: 0xae800144  sw          $zero, 0x144($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 324), GPR_U32(ctx, 0));
        ctx->pc = 0x2B73C4u;
        goto label_2b73c4;
    }
    ctx->pc = 0x2B73BCu;
    {
        const bool branch_taken_0x2b73bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B73C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B73BCu;
            // 0x2b73c0: 0xae800144  sw          $zero, 0x144($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b73bc) {
            ctx->pc = 0x2B8988u;
            goto label_2b8988;
        }
    }
    ctx->pc = 0x2B73C4u;
label_2b73c4:
    // 0x2b73c4: 0x10400570  beqz        $v0, . + 4 + (0x570 << 2)
label_2b73c8:
    if (ctx->pc == 0x2B73C8u) {
        ctx->pc = 0x2B73CCu;
        goto label_2b73cc;
    }
    ctx->pc = 0x2B73C4u;
    {
        const bool branch_taken_0x2b73c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b73c4) {
            ctx->pc = 0x2B8988u;
            goto label_2b8988;
        }
    }
    ctx->pc = 0x2B73CCu;
label_2b73cc:
    // 0x2b73cc: 0x8e840130  lw          $a0, 0x130($s4)
    ctx->pc = 0x2b73ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
label_2b73d0:
    // 0x2b73d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b73d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b73d4:
    // 0x2b73d4: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_2b73d8:
    if (ctx->pc == 0x2B73D8u) {
        ctx->pc = 0x2B73D8u;
            // 0x2b73d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B73DCu;
        goto label_2b73dc;
    }
    ctx->pc = 0x2B73D4u;
    {
        const bool branch_taken_0x2b73d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B73D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B73D4u;
            // 0x2b73d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b73d4) {
            ctx->pc = 0x2B73F8u;
            goto label_2b73f8;
        }
    }
    ctx->pc = 0x2B73DCu;
label_2b73dc:
    // 0x2b73dc: 0x1483056a  bne         $a0, $v1, . + 4 + (0x56A << 2)
label_2b73e0:
    if (ctx->pc == 0x2B73E0u) {
        ctx->pc = 0x2B73E4u;
        goto label_2b73e4;
    }
    ctx->pc = 0x2B73DCu;
    {
        const bool branch_taken_0x2b73dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b73dc) {
            ctx->pc = 0x2B8988u;
            goto label_2b8988;
        }
    }
    ctx->pc = 0x2B73E4u;
label_2b73e4:
    // 0x2b73e4: 0x86836762  lh          $v1, 0x6762($s4)
    ctx->pc = 0x2b73e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 26466)));
label_2b73e8:
    // 0x2b73e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b73e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b73ec:
    // 0x2b73ec: 0x14620566  bne         $v1, $v0, . + 4 + (0x566 << 2)
label_2b73f0:
    if (ctx->pc == 0x2B73F0u) {
        ctx->pc = 0x2B73F4u;
        goto label_2b73f4;
    }
    ctx->pc = 0x2B73ECu;
    {
        const bool branch_taken_0x2b73ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b73ec) {
            ctx->pc = 0x2B8988u;
            goto label_2b8988;
        }
    }
    ctx->pc = 0x2B73F4u;
label_2b73f4:
    // 0x2b73f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b73f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b73f8:
    // 0x2b73f8: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
label_2b73fc:
    if (ctx->pc == 0x2B73FCu) {
        ctx->pc = 0x2B7400u;
        goto label_2b7400;
    }
    ctx->pc = 0x2B73F8u;
    {
        const bool branch_taken_0x2b73f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b73f8) {
            ctx->pc = 0x2B743Cu;
            goto label_2b743c;
        }
    }
    ctx->pc = 0x2B7400u;
label_2b7400:
    // 0x2b7400: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2b7400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2b7404:
    // 0x2b7404: 0xc0a0ed8  jal         func_283B60
label_2b7408:
    if (ctx->pc == 0x2B7408u) {
        ctx->pc = 0x2B7408u;
            // 0x2b7408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B740Cu;
        goto label_2b740c;
    }
    ctx->pc = 0x2B7404u;
    SET_GPR_U32(ctx, 31, 0x2B740Cu);
    ctx->pc = 0x2B7408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7404u;
            // 0x2b7408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B740Cu; }
        if (ctx->pc != 0x2B740Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B740Cu; }
        if (ctx->pc != 0x2B740Cu) { return; }
    }
    ctx->pc = 0x2B740Cu;
label_2b740c:
    // 0x2b740c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b7410:
    if (ctx->pc == 0x2B7410u) {
        ctx->pc = 0x2B7410u;
            // 0x2b7410: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B7414u;
        goto label_2b7414;
    }
    ctx->pc = 0x2B740Cu;
    {
        const bool branch_taken_0x2b740c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B740Cu;
            // 0x2b7410: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b740c) {
            ctx->pc = 0x2B7428u;
            goto label_2b7428;
        }
    }
    ctx->pc = 0x2B7414u;
label_2b7414:
    // 0x2b7414: 0x8f838ddc  lw          $v1, -0x7224($gp)
    ctx->pc = 0x2b7414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_2b7418:
    // 0x2b7418: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b7418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b741c:
    // 0x2b741c: 0xc05c458  jal         func_171160
label_2b7420:
    if (ctx->pc == 0x2B7420u) {
        ctx->pc = 0x2B7420u;
            // 0x2b7420: 0xac4307dc  sw          $v1, 0x7DC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2012), GPR_U32(ctx, 3));
        ctx->pc = 0x2B7424u;
        goto label_2b7424;
    }
    ctx->pc = 0x2B741Cu;
    SET_GPR_U32(ctx, 31, 0x2B7424u);
    ctx->pc = 0x2B7420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B741Cu;
            // 0x2b7420: 0xac4307dc  sw          $v1, 0x7DC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2012), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171160u;
    if (runtime->hasFunction(0x171160u)) {
        auto targetFn = runtime->lookupFunction(0x171160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7424u; }
        if (ctx->pc != 0x2B7424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitScript__12CActionCharaFv_0x171160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7424u; }
        if (ctx->pc != 0x2B7424u) { return; }
    }
    ctx->pc = 0x2B7424u;
label_2b7424:
    // 0x2b7424: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b7424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b7428:
    // 0x2b7428: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b7428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b742c:
    // 0x2b742c: 0xac23d62c  sw          $v1, -0x29D4($at)
    ctx->pc = 0x2b742cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 3));
label_2b7430:
    // 0x2b7430: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b7430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b7434:
    // 0x2b7434: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b7434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b7438:
    // 0x2b7438: 0xac22d630  sw          $v0, -0x29D0($at)
    ctx->pc = 0x2b7438u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 2));
label_2b743c:
    // 0x2b743c: 0x8f8494f4  lw          $a0, -0x6B0C($gp)
    ctx->pc = 0x2b743cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
label_2b7440:
    // 0x2b7440: 0xc04c504  jal         func_131410
label_2b7444:
    if (ctx->pc == 0x2B7444u) {
        ctx->pc = 0x2B7444u;
            // 0x2b7444: 0x26850110  addiu       $a1, $s4, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
        ctx->pc = 0x2B7448u;
        goto label_2b7448;
    }
    ctx->pc = 0x2B7440u;
    SET_GPR_U32(ctx, 31, 0x2B7448u);
    ctx->pc = 0x2B7444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7440u;
            // 0x2b7444: 0x26850110  addiu       $a1, $s4, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131410u;
    if (runtime->hasFunction(0x131410u)) {
        auto targetFn = runtime->lookupFunction(0x131410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7448u; }
        if (ctx->pc != 0x2B7448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFPf_0x131410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7448u; }
        if (ctx->pc != 0x2B7448u) { return; }
    }
    ctx->pc = 0x2B7448u;
label_2b7448:
    // 0x2b7448: 0x8f8494f4  lw          $a0, -0x6B0C($gp)
    ctx->pc = 0x2b7448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
label_2b744c:
    // 0x2b744c: 0xc04c518  jal         func_131460
label_2b7450:
    if (ctx->pc == 0x2B7450u) {
        ctx->pc = 0x2B7450u;
            // 0x2b7450: 0x26850120  addiu       $a1, $s4, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 288));
        ctx->pc = 0x2B7454u;
        goto label_2b7454;
    }
    ctx->pc = 0x2B744Cu;
    SET_GPR_U32(ctx, 31, 0x2B7454u);
    ctx->pc = 0x2B7450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B744Cu;
            // 0x2b7450: 0x26850120  addiu       $a1, $s4, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7454u; }
        if (ctx->pc != 0x2B7454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFPf_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7454u; }
        if (ctx->pc != 0x2B7454u) { return; }
    }
    ctx->pc = 0x2B7454u;
label_2b7454:
    // 0x2b7454: 0x8f8294f4  lw          $v0, -0x6B0C($gp)
    ctx->pc = 0x2b7454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
label_2b7458:
    // 0x2b7458: 0xc6830110  lwc1        $f3, 0x110($s4)
    ctx->pc = 0x2b7458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2b745c:
    // 0x2b745c: 0xc6820114  lwc1        $f2, 0x114($s4)
    ctx->pc = 0x2b745cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b7460:
    // 0x2b7460: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b7460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b7464:
    // 0x2b7464: 0xc6810118  lwc1        $f1, 0x118($s4)
    ctx->pc = 0x2b7464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b7468:
    // 0x2b7468: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b7468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b746c:
    // 0x2b746c: 0xc680011c  lwc1        $f0, 0x11C($s4)
    ctx->pc = 0x2b746cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b7470:
    // 0x2b7470: 0x24a5ed38  addiu       $a1, $a1, -0x12C8
    ctx->pc = 0x2b7470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962488));
label_2b7474:
    // 0x2b7474: 0xe4430090  swc1        $f3, 0x90($v0)
    ctx->pc = 0x2b7474u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
label_2b7478:
    // 0x2b7478: 0xe4420094  swc1        $f2, 0x94($v0)
    ctx->pc = 0x2b7478u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
label_2b747c:
    // 0x2b747c: 0xe4410098  swc1        $f1, 0x98($v0)
    ctx->pc = 0x2b747cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
label_2b7480:
    // 0x2b7480: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b7480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
label_2b7484:
    // 0x2b7484: 0x8f8294f4  lw          $v0, -0x6B0C($gp)
    ctx->pc = 0x2b7484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
label_2b7488:
    // 0x2b7488: 0xc6830120  lwc1        $f3, 0x120($s4)
    ctx->pc = 0x2b7488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2b748c:
    // 0x2b748c: 0xc6820124  lwc1        $f2, 0x124($s4)
    ctx->pc = 0x2b748cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b7490:
    // 0x2b7490: 0xc6810128  lwc1        $f1, 0x128($s4)
    ctx->pc = 0x2b7490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b7494:
    // 0x2b7494: 0xc680012c  lwc1        $f0, 0x12C($s4)
    ctx->pc = 0x2b7494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b7498:
    // 0x2b7498: 0xe4430080  swc1        $f3, 0x80($v0)
    ctx->pc = 0x2b7498u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
label_2b749c:
    // 0x2b749c: 0xe4420084  swc1        $f2, 0x84($v0)
    ctx->pc = 0x2b749cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
label_2b74a0:
    // 0x2b74a0: 0xe4410088  swc1        $f1, 0x88($v0)
    ctx->pc = 0x2b74a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
label_2b74a4:
    // 0x2b74a4: 0xc08e7cc  jal         func_239F30
label_2b74a8:
    if (ctx->pc == 0x2B74A8u) {
        ctx->pc = 0x2B74A8u;
            // 0x2b74a8: 0xe440008c  swc1        $f0, 0x8C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 140), bits); }
        ctx->pc = 0x2B74ACu;
        goto label_2b74ac;
    }
    ctx->pc = 0x2B74A4u;
    SET_GPR_U32(ctx, 31, 0x2B74ACu);
    ctx->pc = 0x2B74A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B74A4u;
            // 0x2b74a8: 0xe440008c  swc1        $f0, 0x8C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 140), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B74ACu; }
        if (ctx->pc != 0x2B74ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B74ACu; }
        if (ctx->pc != 0x2B74ACu) { return; }
    }
    ctx->pc = 0x2B74ACu;
label_2b74ac:
    // 0x2b74ac: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2b74acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_2b74b0:
    // 0x2b74b0: 0x240500aa  addiu       $a1, $zero, 0xAA
    ctx->pc = 0x2b74b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
label_2b74b4:
    // 0x2b74b4: 0xc08aa38  jal         func_22A8E0
label_2b74b8:
    if (ctx->pc == 0x2B74B8u) {
        ctx->pc = 0x2B74B8u;
            // 0x2b74b8: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x2B74BCu;
        goto label_2b74bc;
    }
    ctx->pc = 0x2B74B4u;
    SET_GPR_U32(ctx, 31, 0x2B74BCu);
    ctx->pc = 0x2B74B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B74B4u;
            // 0x2b74b8: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A8E0u;
    if (runtime->hasFunction(0x22A8E0u)) {
        auto targetFn = runtime->lookupFunction(0x22A8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B74BCu; }
        if (ctx->pc != 0x2B74BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TexGetInfoClear__14CPosDataManageFii_0x22a8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B74BCu; }
        if (ctx->pc != 0x2B74BCu) { return; }
    }
    ctx->pc = 0x2B74BCu;
label_2b74bc:
    // 0x2b74bc: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2b74bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_2b74c0:
    // 0x2b74c0: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2b74c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_2b74c4:
    // 0x2b74c4: 0xc08abcc  jal         func_22AF30
label_2b74c8:
    if (ctx->pc == 0x2B74C8u) {
        ctx->pc = 0x2B74C8u;
            // 0x2b74c8: 0x2406004f  addiu       $a2, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->pc = 0x2B74CCu;
        goto label_2b74cc;
    }
    ctx->pc = 0x2B74C4u;
    SET_GPR_U32(ctx, 31, 0x2B74CCu);
    ctx->pc = 0x2B74C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B74C4u;
            // 0x2b74c8: 0x2406004f  addiu       $a2, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AF30u;
    if (runtime->hasFunction(0x22AF30u)) {
        auto targetFn = runtime->lookupFunction(0x22AF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B74CCu; }
        if (ctx->pc != 0x2B74CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormInfoClear__14CPosDataManageFii_0x22af30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B74CCu; }
        if (ctx->pc != 0x2B74CCu) { return; }
    }
    ctx->pc = 0x2B74CCu;
label_2b74cc:
    // 0x2b74cc: 0x100005fd  b           . + 4 + (0x5FD << 2)
label_2b74d0:
    if (ctx->pc == 0x2B74D0u) {
        ctx->pc = 0x2B74D0u;
            // 0x2b74d0: 0x8e820130  lw          $v0, 0x130($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
        ctx->pc = 0x2B74D4u;
        goto label_2b74d4;
    }
    ctx->pc = 0x2B74CCu;
    {
        const bool branch_taken_0x2b74cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B74D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B74CCu;
            // 0x2b74d0: 0x8e820130  lw          $v0, 0x130($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b74cc) {
            ctx->pc = 0x2B8CC4u;
            goto label_2b8cc4;
        }
    }
    ctx->pc = 0x2B74D4u;
label_2b74d4:
    // 0x2b74d4: 0x8f829520  lw          $v0, -0x6AE0($gp)
    ctx->pc = 0x2b74d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
label_2b74d8:
    // 0x2b74d8: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
label_2b74dc:
    if (ctx->pc == 0x2B74DCu) {
        ctx->pc = 0x2B74DCu;
            // 0x2b74dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B74E0u;
        goto label_2b74e0;
    }
    ctx->pc = 0x2B74D8u;
    {
        const bool branch_taken_0x2b74d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B74DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B74D8u;
            // 0x2b74dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b74d8) {
            ctx->pc = 0x2B7660u;
            goto label_2b7660;
        }
    }
    ctx->pc = 0x2B74E0u;
label_2b74e0:
    // 0x2b74e0: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x2b74e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_2b74e4:
    // 0x2b74e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b74e8:
    if (ctx->pc == 0x2B74E8u) {
        ctx->pc = 0x2B74E8u;
            // 0x2b74e8: 0x32c20002  andi        $v0, $s6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x2B74ECu;
        goto label_2b74ec;
    }
    ctx->pc = 0x2B74E4u;
    {
        const bool branch_taken_0x2b74e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B74E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B74E4u;
            // 0x2b74e8: 0x32c20002  andi        $v0, $s6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b74e4) {
            ctx->pc = 0x2B74FCu;
            goto label_2b74fc;
        }
    }
    ctx->pc = 0x2B74ECu;
label_2b74ec:
    // 0x2b74ec: 0x8f829bec  lw          $v0, -0x6414($gp)
    ctx->pc = 0x2b74ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941676)));
label_2b74f0:
    // 0x2b74f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b74f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2b74f4:
    // 0x2b74f4: 0xaf829bec  sw          $v0, -0x6414($gp)
    ctx->pc = 0x2b74f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
label_2b74f8:
    // 0x2b74f8: 0x32c20002  andi        $v0, $s6, 0x2
    ctx->pc = 0x2b74f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
label_2b74fc:
    // 0x2b74fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b7500:
    if (ctx->pc == 0x2B7500u) {
        ctx->pc = 0x2B7504u;
        goto label_2b7504;
    }
    ctx->pc = 0x2B74FCu;
    {
        const bool branch_taken_0x2b74fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b74fc) {
            ctx->pc = 0x2B7510u;
            goto label_2b7510;
        }
    }
    ctx->pc = 0x2B7504u;
label_2b7504:
    // 0x2b7504: 0x8f829bec  lw          $v0, -0x6414($gp)
    ctx->pc = 0x2b7504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941676)));
label_2b7508:
    // 0x2b7508: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b7508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b750c:
    // 0x2b750c: 0xaf829bec  sw          $v0, -0x6414($gp)
    ctx->pc = 0x2b750cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
label_2b7510:
    // 0x2b7510: 0x8f829bec  lw          $v0, -0x6414($gp)
    ctx->pc = 0x2b7510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941676)));
label_2b7514:
    // 0x2b7514: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_2b7518:
    if (ctx->pc == 0x2B7518u) {
        ctx->pc = 0x2B7518u;
            // 0x2b7518: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x2B751Cu;
        goto label_2b751c;
    }
    ctx->pc = 0x2B7514u;
    {
        const bool branch_taken_0x2b7514 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2B7518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7514u;
            // 0x2b7518: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7514) {
            ctx->pc = 0x2B7520u;
            goto label_2b7520;
        }
    }
    ctx->pc = 0x2B751Cu;
label_2b751c:
    // 0x2b751c: 0xaf829bec  sw          $v0, -0x6414($gp)
    ctx->pc = 0x2b751cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 2));
label_2b7520:
    // 0x2b7520: 0x8f829bec  lw          $v0, -0x6414($gp)
    ctx->pc = 0x2b7520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941676)));
label_2b7524:
    // 0x2b7524: 0x2842000c  slti        $v0, $v0, 0xC
    ctx->pc = 0x2b7524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
label_2b7528:
    // 0x2b7528: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2b752c:
    if (ctx->pc == 0x2B752Cu) {
        ctx->pc = 0x2B7530u;
        goto label_2b7530;
    }
    ctx->pc = 0x2B7528u;
    {
        const bool branch_taken_0x2b7528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7528) {
            ctx->pc = 0x2B7534u;
            goto label_2b7534;
        }
    }
    ctx->pc = 0x2B7530u;
label_2b7530:
    // 0x2b7530: 0xaf809bec  sw          $zero, -0x6414($gp)
    ctx->pc = 0x2b7530u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941676), GPR_U32(ctx, 0));
label_2b7534:
    // 0x2b7534: 0x8f849bec  lw          $a0, -0x6414($gp)
    ctx->pc = 0x2b7534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941676)));
label_2b7538:
    // 0x2b7538: 0x8e820140  lw          $v0, 0x140($s4)
    ctx->pc = 0x2b7538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
label_2b753c:
    // 0x2b753c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2b753cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2b7540:
    // 0x2b7540: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b7540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2b7544:
    // 0x2b7544: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2b7544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2b7548:
    // 0x2b7548: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2b7548u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2b754c:
    // 0x2b754c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b754cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2b7550:
    // 0x2b7550: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2b7550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b7554:
    // 0x2b7554: 0x12200040  beqz        $s1, . + 4 + (0x40 << 2)
label_2b7558:
    if (ctx->pc == 0x2B7558u) {
        ctx->pc = 0x2B7558u;
            // 0x2b7558: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x2B755Cu;
        goto label_2b755c;
    }
    ctx->pc = 0x2B7554u;
    {
        const bool branch_taken_0x2b7554 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7554u;
            // 0x2b7558: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7554) {
            ctx->pc = 0x2B7658u;
            goto label_2b7658;
        }
    }
    ctx->pc = 0x2B755Cu;
label_2b755c:
    // 0x2b755c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2b755cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2b7560:
    // 0x2b7560: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x2b7560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_2b7564:
    // 0x2b7564: 0xc052cf0  jal         func_14B3C0
label_2b7568:
    if (ctx->pc == 0x2B7568u) {
        ctx->pc = 0x2B7568u;
            // 0x2b7568: 0x2632000c  addiu       $s2, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->pc = 0x2B756Cu;
        goto label_2b756c;
    }
    ctx->pc = 0x2B7564u;
    SET_GPR_U32(ctx, 31, 0x2B756Cu);
    ctx->pc = 0x2B7568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7564u;
            // 0x2b7568: 0x2632000c  addiu       $s2, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B756Cu; }
        if (ctx->pc != 0x2B756Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B756Cu; }
        if (ctx->pc != 0x2B756Cu) { return; }
    }
    ctx->pc = 0x2B756Cu;
label_2b756c:
    // 0x2b756c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2b7570:
    if (ctx->pc == 0x2B7570u) {
        ctx->pc = 0x2B7570u;
            // 0x2b7570: 0x32c20008  andi        $v0, $s6, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x2B7574u;
        goto label_2b7574;
    }
    ctx->pc = 0x2B756Cu;
    {
        const bool branch_taken_0x2b756c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B756Cu;
            // 0x2b7570: 0x32c20008  andi        $v0, $s6, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b756c) {
            ctx->pc = 0x2B7578u;
            goto label_2b7578;
        }
    }
    ctx->pc = 0x2B7574u;
label_2b7574:
    // 0x2b7574: 0x26320014  addiu       $s2, $s1, 0x14
    ctx->pc = 0x2b7574u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_2b7578:
    // 0x2b7578: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b757c:
    if (ctx->pc == 0x2B757Cu) {
        ctx->pc = 0x2B757Cu;
            // 0x2b757c: 0x32c20004  andi        $v0, $s6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x2B7580u;
        goto label_2b7580;
    }
    ctx->pc = 0x2B7578u;
    {
        const bool branch_taken_0x2b7578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B757Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7578u;
            // 0x2b757c: 0x32c20004  andi        $v0, $s6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7578) {
            ctx->pc = 0x2B7598u;
            goto label_2b7598;
        }
    }
    ctx->pc = 0x2B7580u;
label_2b7580:
    // 0x2b7580: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b7580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b7584:
    // 0x2b7584: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b7584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b7588:
    // 0x2b7588: 0xc065b44  jal         func_196D10
label_2b758c:
    if (ctx->pc == 0x2B758Cu) {
        ctx->pc = 0x2B758Cu;
            // 0x2b758c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B7590u;
        goto label_2b7590;
    }
    ctx->pc = 0x2B7588u;
    SET_GPR_U32(ctx, 31, 0x2B7590u);
    ctx->pc = 0x2B758Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7588u;
            // 0x2b758c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D10u;
    if (runtime->hasFunction(0x196D10u)) {
        auto targetFn = runtime->lookupFunction(0x196D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7590u; }
        if (ctx->pc != 0x2B7590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPoint__11COMMON_GAGEFf_0x196d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7590u; }
        if (ctx->pc != 0x2B7590u) { return; }
    }
    ctx->pc = 0x2B7590u;
label_2b7590:
    // 0x2b7590: 0x10000007  b           . + 4 + (0x7 << 2)
label_2b7594:
    if (ctx->pc == 0x2B7594u) {
        ctx->pc = 0x2B7594u;
            // 0x2b7594: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x2B7598u;
        goto label_2b7598;
    }
    ctx->pc = 0x2B7590u;
    {
        const bool branch_taken_0x2b7590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7590u;
            // 0x2b7594: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7590) {
            ctx->pc = 0x2B75B0u;
            goto label_2b75b0;
        }
    }
    ctx->pc = 0x2B7598u;
label_2b7598:
    // 0x2b7598: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b759c:
    if (ctx->pc == 0x2B759Cu) {
        ctx->pc = 0x2B759Cu;
            // 0x2b759c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->pc = 0x2B75A0u;
        goto label_2b75a0;
    }
    ctx->pc = 0x2B7598u;
    {
        const bool branch_taken_0x2b7598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B759Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7598u;
            // 0x2b759c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7598) {
            ctx->pc = 0x2B75ACu;
            goto label_2b75ac;
        }
    }
    ctx->pc = 0x2B75A0u;
label_2b75a0:
    // 0x2b75a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b75a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b75a4:
    // 0x2b75a4: 0xc065b44  jal         func_196D10
label_2b75a8:
    if (ctx->pc == 0x2B75A8u) {
        ctx->pc = 0x2B75A8u;
            // 0x2b75a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B75ACu;
        goto label_2b75ac;
    }
    ctx->pc = 0x2B75A4u;
    SET_GPR_U32(ctx, 31, 0x2B75ACu);
    ctx->pc = 0x2B75A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B75A4u;
            // 0x2b75a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D10u;
    if (runtime->hasFunction(0x196D10u)) {
        auto targetFn = runtime->lookupFunction(0x196D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B75ACu; }
        if (ctx->pc != 0x2B75ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPoint__11COMMON_GAGEFf_0x196d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B75ACu; }
        if (ctx->pc != 0x2B75ACu) { return; }
    }
    ctx->pc = 0x2B75ACu;
label_2b75ac:
    // 0x2b75ac: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2b75acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_2b75b0:
    // 0x2b75b0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2b75b4:
    if (ctx->pc == 0x2B75B4u) {
        ctx->pc = 0x2B75B4u;
            // 0x2b75b4: 0x32020004  andi        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x2B75B8u;
        goto label_2b75b8;
    }
    ctx->pc = 0x2B75B0u;
    {
        const bool branch_taken_0x2b75b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B75B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B75B0u;
            // 0x2b75b4: 0x32020004  andi        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b75b0) {
            ctx->pc = 0x2B75F0u;
            goto label_2b75f0;
        }
    }
    ctx->pc = 0x2B75B8u;
label_2b75b8:
    // 0x2b75b8: 0x9222000a  lbu         $v0, 0xA($s1)
    ctx->pc = 0x2b75b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
label_2b75bc:
    // 0x2b75bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2b75c0:
    if (ctx->pc == 0x2B75C0u) {
        ctx->pc = 0x2B75C4u;
        goto label_2b75c4;
    }
    ctx->pc = 0x2B75BCu;
    {
        const bool branch_taken_0x2b75bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b75bc) {
            ctx->pc = 0x2B75CCu;
            goto label_2b75cc;
        }
    }
    ctx->pc = 0x2B75C4u;
label_2b75c4:
    // 0x2b75c4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2b75c8:
    if (ctx->pc == 0x2B75C8u) {
        ctx->pc = 0x2B75C8u;
            // 0x2b75c8: 0xa220000a  sb          $zero, 0xA($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2B75CCu;
        goto label_2b75cc;
    }
    ctx->pc = 0x2B75C4u;
    {
        const bool branch_taken_0x2b75c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B75C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B75C4u;
            // 0x2b75c8: 0xa220000a  sb          $zero, 0xA($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b75c4) {
            ctx->pc = 0x2B75E4u;
            goto label_2b75e4;
        }
    }
    ctx->pc = 0x2B75CCu;
label_2b75cc:
    // 0x2b75cc: 0xc065af8  jal         func_196BE0
label_2b75d0:
    if (ctx->pc == 0x2B75D0u) {
        ctx->pc = 0x2B75D4u;
        goto label_2b75d4;
    }
    ctx->pc = 0x2B75CCu;
    SET_GPR_U32(ctx, 31, 0x2B75D4u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B75D4u; }
        if (ctx->pc != 0x2B75D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B75D4u; }
        if (ctx->pc != 0x2B75D4u) { return; }
    }
    ctx->pc = 0x2B75D4u;
label_2b75d4:
    // 0x2b75d4: 0x24444eb0  addiu       $a0, $v0, 0x4EB0
    ctx->pc = 0x2b75d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20144));
label_2b75d8:
    // 0x2b75d8: 0x8f829bec  lw          $v0, -0x6414($gp)
    ctx->pc = 0x2b75d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941676)));
label_2b75dc:
    // 0x2b75dc: 0xc066b30  jal         func_19ACC0
label_2b75e0:
    if (ctx->pc == 0x2B75E0u) {
        ctx->pc = 0x2B75E0u;
            // 0x2b75e0: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2B75E4u;
        goto label_2b75e4;
    }
    ctx->pc = 0x2B75DCu;
    SET_GPR_U32(ctx, 31, 0x2B75E4u);
    ctx->pc = 0x2B75E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B75DCu;
            // 0x2b75e0: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19ACC0u;
    if (runtime->hasFunction(0x19ACC0u)) {
        auto targetFn = runtime->lookupFunction(0x19ACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B75E4u; }
        if (ctx->pc != 0x2B75E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableChange__11CMonsterBoxFi_0x19acc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B75E4u; }
        if (ctx->pc != 0x2B75E4u) { return; }
    }
    ctx->pc = 0x2B75E4u;
label_2b75e4:
    // 0x2b75e4: 0xc094274  jal         func_2509D0
label_2b75e8:
    if (ctx->pc == 0x2B75E8u) {
        ctx->pc = 0x2B75E8u;
            // 0x2b75e8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B75ECu;
        goto label_2b75ec;
    }
    ctx->pc = 0x2B75E4u;
    SET_GPR_U32(ctx, 31, 0x2B75ECu);
    ctx->pc = 0x2B75E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B75E4u;
            // 0x2b75e8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B75ECu; }
        if (ctx->pc != 0x2B75ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B75ECu; }
        if (ctx->pc != 0x2B75ECu) { return; }
    }
    ctx->pc = 0x2B75ECu;
label_2b75ec:
    // 0x2b75ec: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x2b75ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_2b75f0:
    // 0x2b75f0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2b75f4:
    if (ctx->pc == 0x2B75F4u) {
        ctx->pc = 0x2B75F4u;
            // 0x2b75f4: 0x32020002  andi        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x2B75F8u;
        goto label_2b75f8;
    }
    ctx->pc = 0x2B75F0u;
    {
        const bool branch_taken_0x2b75f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B75F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B75F0u;
            // 0x2b75f4: 0x32020002  andi        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b75f0) {
            ctx->pc = 0x2B761Cu;
            goto label_2b761c;
        }
    }
    ctx->pc = 0x2B75F8u;
label_2b75f8:
    // 0x2b75f8: 0x9222000a  lbu         $v0, 0xA($s1)
    ctx->pc = 0x2b75f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
label_2b75fc:
    // 0x2b75fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b7600:
    if (ctx->pc == 0x2B7600u) {
        ctx->pc = 0x2B7600u;
            // 0x2b7600: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x2B7604u;
        goto label_2b7604;
    }
    ctx->pc = 0x2B75FCu;
    {
        const bool branch_taken_0x2b75fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B75FCu;
            // 0x2b7600: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b75fc) {
            ctx->pc = 0x2B7618u;
            goto label_2b7618;
        }
    }
    ctx->pc = 0x2B7604u;
label_2b7604:
    // 0x2b7604: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b7604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b7608:
    // 0x2b7608: 0xc065b40  jal         func_196D00
label_2b760c:
    if (ctx->pc == 0x2B760Cu) {
        ctx->pc = 0x2B760Cu;
            // 0x2b760c: 0x26240014  addiu       $a0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->pc = 0x2B7610u;
        goto label_2b7610;
    }
    ctx->pc = 0x2B7608u;
    SET_GPR_U32(ctx, 31, 0x2B7610u);
    ctx->pc = 0x2B760Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7608u;
            // 0x2b760c: 0x26240014  addiu       $a0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D00u;
    if (runtime->hasFunction(0x196D00u)) {
        auto targetFn = runtime->lookupFunction(0x196D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7610u; }
        if (ctx->pc != 0x2B7610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFillRate__11COMMON_GAGEFf_0x196d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7610u; }
        if (ctx->pc != 0x2B7610u) { return; }
    }
    ctx->pc = 0x2B7610u;
label_2b7610:
    // 0x2b7610: 0xc066aa8  jal         func_19AAA0
label_2b7614:
    if (ctx->pc == 0x2B7614u) {
        ctx->pc = 0x2B7614u;
            // 0x2b7614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B7618u;
        goto label_2b7618;
    }
    ctx->pc = 0x2B7610u;
    SET_GPR_U32(ctx, 31, 0x2B7618u);
    ctx->pc = 0x2B7614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7610u;
            // 0x2b7614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AAA0u;
    if (runtime->hasFunction(0x19AAA0u)) {
        auto targetFn = runtime->lookupFunction(0x19AAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7618u; }
        if (ctx->pc != 0x2B7618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LevelUp__16MOS_CHANGE_PARAMFv_0x19aaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7618u; }
        if (ctx->pc != 0x2B7618u) { return; }
    }
    ctx->pc = 0x2B7618u;
label_2b7618:
    // 0x2b7618: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x2b7618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_2b761c:
    // 0x2b761c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2b7620:
    if (ctx->pc == 0x2B7620u) {
        ctx->pc = 0x2B7620u;
            // 0x2b7620: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B7624u;
        goto label_2b7624;
    }
    ctx->pc = 0x2B761Cu;
    {
        const bool branch_taken_0x2b761c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B761Cu;
            // 0x2b7620: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b761c) {
            ctx->pc = 0x2B7658u;
            goto label_2b7658;
        }
    }
    ctx->pc = 0x2B7624u;
label_2b7624:
    // 0x2b7624: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b7624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7628:
    // 0x2b7628: 0x8e820140  lw          $v0, 0x140($s4)
    ctx->pc = 0x2b7628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
label_2b762c:
    // 0x2b762c: 0xc065af8  jal         func_196BE0
label_2b7630:
    if (ctx->pc == 0x2B7630u) {
        ctx->pc = 0x2B7630u;
            // 0x2b7630: 0x528821  addu        $s1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->pc = 0x2B7634u;
        goto label_2b7634;
    }
    ctx->pc = 0x2B762Cu;
    SET_GPR_U32(ctx, 31, 0x2B7634u);
    ctx->pc = 0x2B7630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B762Cu;
            // 0x2b7630: 0x528821  addu        $s1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7634u; }
        if (ctx->pc != 0x2B7634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7634u; }
        if (ctx->pc != 0x2B7634u) { return; }
    }
    ctx->pc = 0x2B7634u;
label_2b7634:
    // 0x2b7634: 0x24444eb0  addiu       $a0, $v0, 0x4EB0
    ctx->pc = 0x2b7634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20144));
label_2b7638:
    // 0x2b7638: 0xc066b30  jal         func_19ACC0
label_2b763c:
    if (ctx->pc == 0x2B763Cu) {
        ctx->pc = 0x2B763Cu;
            // 0x2b763c: 0x26050001  addiu       $a1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x2B7640u;
        goto label_2b7640;
    }
    ctx->pc = 0x2B7638u;
    SET_GPR_U32(ctx, 31, 0x2B7640u);
    ctx->pc = 0x2B763Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7638u;
            // 0x2b763c: 0x26050001  addiu       $a1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19ACC0u;
    if (runtime->hasFunction(0x19ACC0u)) {
        auto targetFn = runtime->lookupFunction(0x19ACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7640u; }
        if (ctx->pc != 0x2B7640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableChange__11CMonsterBoxFi_0x19acc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7640u; }
        if (ctx->pc != 0x2B7640u) { return; }
    }
    ctx->pc = 0x2B7640u;
label_2b7640:
    // 0x2b7640: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x2b7640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_2b7644:
    // 0x2b7644: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b7644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b7648:
    // 0x2b7648: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x2b7648u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
label_2b764c:
    // 0x2b764c: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x2b764cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
label_2b7650:
    // 0x2b7650: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_2b7654:
    if (ctx->pc == 0x2B7654u) {
        ctx->pc = 0x2B7654u;
            // 0x2b7654: 0x265200bc  addiu       $s2, $s2, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 188));
        ctx->pc = 0x2B7658u;
        goto label_2b7658;
    }
    ctx->pc = 0x2B7650u;
    {
        const bool branch_taken_0x2b7650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7650u;
            // 0x2b7654: 0x265200bc  addiu       $s2, $s2, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7650) {
            ctx->pc = 0x2B7628u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b7628;
        }
    }
    ctx->pc = 0x2B7658u;
label_2b7658:
    // 0x2b7658: 0x1000059a  b           . + 4 + (0x59A << 2)
label_2b765c:
    if (ctx->pc == 0x2B765Cu) {
        ctx->pc = 0x2B765Cu;
            // 0x2b765c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B7660u;
        goto label_2b7660;
    }
    ctx->pc = 0x2B7658u;
    {
        const bool branch_taken_0x2b7658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B765Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7658u;
            // 0x2b765c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7658) {
            ctx->pc = 0x2B8CC4u;
            goto label_2b8cc4;
        }
    }
    ctx->pc = 0x2B7660u;
label_2b7660:
    // 0x2b7660: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b7660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b7664:
    // 0x2b7664: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x2b7664u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
label_2b7668:
    // 0x2b7668: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b7668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b766c:
    // 0x2b766c: 0x106202c5  beq         $v1, $v0, . + 4 + (0x2C5 << 2)
label_2b7670:
    if (ctx->pc == 0x2B7670u) {
        ctx->pc = 0x2B7670u;
            // 0x2b7670: 0x8c33ca58  lw          $s3, -0x35A8($at) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
        ctx->pc = 0x2B7674u;
        goto label_2b7674;
    }
    ctx->pc = 0x2B766Cu;
    {
        const bool branch_taken_0x2b766c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B7670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B766Cu;
            // 0x2b7670: 0x8c33ca58  lw          $s3, -0x35A8($at) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b766c) {
            ctx->pc = 0x2B8184u;
            goto label_2b8184;
        }
    }
    ctx->pc = 0x2B7674u;
label_2b7674:
    // 0x2b7674: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b7674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b7678:
    // 0x2b7678: 0x10670032  beq         $v1, $a3, . + 4 + (0x32 << 2)
label_2b767c:
    if (ctx->pc == 0x2B767Cu) {
        ctx->pc = 0x2B7680u;
        goto label_2b7680;
    }
    ctx->pc = 0x2B7678u;
    {
        const bool branch_taken_0x2b7678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x2b7678) {
            ctx->pc = 0x2B7744u;
            goto label_2b7744;
        }
    }
    ctx->pc = 0x2B7680u;
label_2b7680:
    // 0x2b7680: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2b7684:
    if (ctx->pc == 0x2B7684u) {
        ctx->pc = 0x2B7684u;
            // 0x2b7684: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B7688u;
        goto label_2b7688;
    }
    ctx->pc = 0x2B7680u;
    {
        const bool branch_taken_0x2b7680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7680u;
            // 0x2b7684: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7680) {
            ctx->pc = 0x2B7690u;
            goto label_2b7690;
        }
    }
    ctx->pc = 0x2B7688u;
label_2b7688:
    // 0x2b7688: 0x1000030b  b           . + 4 + (0x30B << 2)
label_2b768c:
    if (ctx->pc == 0x2B768Cu) {
        ctx->pc = 0x2B768Cu;
            // 0x2b768c: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x2B7690u;
        goto label_2b7690;
    }
    ctx->pc = 0x2B7688u;
    {
        const bool branch_taken_0x2b7688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B768Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7688u;
            // 0x2b768c: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7688) {
            ctx->pc = 0x2B82B8u;
            goto label_2b82b8;
        }
    }
    ctx->pc = 0x2B7690u;
label_2b7690:
    // 0x2b7690: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2b7690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b7694:
    // 0x2b7694: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b7694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b7698:
    // 0x2b7698: 0xc0adb84  jal         func_2B6E10
label_2b769c:
    if (ctx->pc == 0x2B769Cu) {
        ctx->pc = 0x2B769Cu;
            // 0x2b769c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B76A0u;
        goto label_2b76a0;
    }
    ctx->pc = 0x2B7698u;
    SET_GPR_U32(ctx, 31, 0x2B76A0u);
    ctx->pc = 0x2B769Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7698u;
            // 0x2b769c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6E10u;
    if (runtime->hasFunction(0x2B6E10u)) {
        auto targetFn = runtime->lookupFunction(0x2B6E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B76A0u; }
        if (ctx->pc != 0x2B76A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeyNormalMode__14CMenuMosSelectFiii_0x2b6e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B76A0u; }
        if (ctx->pc != 0x2B76A0u) { return; }
    }
    ctx->pc = 0x2B76A0u;
label_2b76a0:
    // 0x2b76a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b76a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b76a4:
    // 0x2b76a4: 0x12020024  beq         $s0, $v0, . + 4 + (0x24 << 2)
label_2b76a8:
    if (ctx->pc == 0x2B76A8u) {
        ctx->pc = 0x2B76A8u;
            // 0x2b76a8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2B76ACu;
        goto label_2b76ac;
    }
    ctx->pc = 0x2B76A4u;
    {
        const bool branch_taken_0x2b76a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B76A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B76A4u;
            // 0x2b76a8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b76a4) {
            ctx->pc = 0x2B7738u;
            goto label_2b7738;
        }
    }
    ctx->pc = 0x2B76ACu;
label_2b76ac:
    // 0x2b76ac: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_2b76b0:
    if (ctx->pc == 0x2B76B0u) {
        ctx->pc = 0x2B76B0u;
            // 0x2b76b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B76B4u;
        goto label_2b76b4;
    }
    ctx->pc = 0x2B76ACu;
    {
        const bool branch_taken_0x2b76ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B76B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B76ACu;
            // 0x2b76b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b76ac) {
            ctx->pc = 0x2B76C4u;
            goto label_2b76c4;
        }
    }
    ctx->pc = 0x2B76B4u;
label_2b76b4:
    // 0x2b76b4: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_2b76b8:
    if (ctx->pc == 0x2B76B8u) {
        ctx->pc = 0x2B76BCu;
        goto label_2b76bc;
    }
    ctx->pc = 0x2B76B4u;
    {
        const bool branch_taken_0x2b76b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b76b4) {
            ctx->pc = 0x2B76C4u;
            goto label_2b76c4;
        }
    }
    ctx->pc = 0x2B76BCu;
label_2b76bc:
    // 0x2b76bc: 0x100002fd  b           . + 4 + (0x2FD << 2)
label_2b76c0:
    if (ctx->pc == 0x2B76C0u) {
        ctx->pc = 0x2B76C4u;
        goto label_2b76c4;
    }
    ctx->pc = 0x2B76BCu;
    {
        const bool branch_taken_0x2b76bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b76bc) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B76C4u;
label_2b76c4:
    // 0x2b76c4: 0x8e840138  lw          $a0, 0x138($s4)
    ctx->pc = 0x2b76c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
label_2b76c8:
    // 0x2b76c8: 0x2881000a  slti        $at, $a0, 0xA
    ctx->pc = 0x2b76c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
label_2b76cc:
    // 0x2b76cc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2b76d0:
    if (ctx->pc == 0x2B76D0u) {
        ctx->pc = 0x2B76D4u;
        goto label_2b76d4;
    }
    ctx->pc = 0x2B76CCu;
    {
        const bool branch_taken_0x2b76cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b76cc) {
            ctx->pc = 0x2B76DCu;
            goto label_2b76dc;
        }
    }
    ctx->pc = 0x2B76D4u;
label_2b76d4:
    // 0x2b76d4: 0x100002f7  b           . + 4 + (0x2F7 << 2)
label_2b76d8:
    if (ctx->pc == 0x2B76D8u) {
        ctx->pc = 0x2B76D8u;
            // 0x2b76d8: 0x24120005  addiu       $s2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B76DCu;
        goto label_2b76dc;
    }
    ctx->pc = 0x2B76D4u;
    {
        const bool branch_taken_0x2b76d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B76D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B76D4u;
            // 0x2b76d8: 0x24120005  addiu       $s2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b76d4) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B76DCu;
label_2b76dc:
    // 0x2b76dc: 0x8e820140  lw          $v0, 0x140($s4)
    ctx->pc = 0x2b76dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
label_2b76e0:
    // 0x2b76e0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2b76e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2b76e4:
    // 0x2b76e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b76e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2b76e8:
    // 0x2b76e8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2b76e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2b76ec:
    // 0x2b76ec: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2b76ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2b76f0:
    // 0x2b76f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b76f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2b76f4:
    // 0x2b76f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b76f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b76f8:
    // 0x2b76f8: 0xae820144  sw          $v0, 0x144($s4)
    ctx->pc = 0x2b76f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 324), GPR_U32(ctx, 2));
label_2b76fc:
    // 0x2b76fc: 0x8e820144  lw          $v0, 0x144($s4)
    ctx->pc = 0x2b76fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b7700:
    // 0x2b7700: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b7704:
    if (ctx->pc == 0x2B7704u) {
        ctx->pc = 0x2B7704u;
            // 0x2b7704: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B7708u;
        goto label_2b7708;
    }
    ctx->pc = 0x2B7700u;
    {
        const bool branch_taken_0x2b7700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7700u;
            // 0x2b7704: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7700) {
            ctx->pc = 0x2B7720u;
            goto label_2b7720;
        }
    }
    ctx->pc = 0x2B7708u;
label_2b7708:
    // 0x2b7708: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2b770c:
    if (ctx->pc == 0x2B770Cu) {
        ctx->pc = 0x2B7710u;
        goto label_2b7710;
    }
    ctx->pc = 0x2B7708u;
    {
        const bool branch_taken_0x2b7708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7708) {
            ctx->pc = 0x2B7730u;
            goto label_2b7730;
        }
    }
    ctx->pc = 0x2B7710u;
label_2b7710:
    // 0x2b7710: 0x9042000a  lbu         $v0, 0xA($v0)
    ctx->pc = 0x2b7710u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
label_2b7714:
    // 0x2b7714: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2b7718:
    if (ctx->pc == 0x2B7718u) {
        ctx->pc = 0x2B771Cu;
        goto label_2b771c;
    }
    ctx->pc = 0x2B7714u;
    {
        const bool branch_taken_0x2b7714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7714) {
            ctx->pc = 0x2B7730u;
            goto label_2b7730;
        }
    }
    ctx->pc = 0x2B771Cu;
label_2b771c:
    // 0x2b771c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2b771cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2b7720:
    // 0x2b7720: 0xc094274  jal         func_2509D0
label_2b7724:
    if (ctx->pc == 0x2B7724u) {
        ctx->pc = 0x2B7728u;
        goto label_2b7728;
    }
    ctx->pc = 0x2B7720u;
    SET_GPR_U32(ctx, 31, 0x2B7728u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7728u; }
        if (ctx->pc != 0x2B7728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7728u; }
        if (ctx->pc != 0x2B7728u) { return; }
    }
    ctx->pc = 0x2B7728u;
label_2b7728:
    // 0x2b7728: 0x100002e2  b           . + 4 + (0x2E2 << 2)
label_2b772c:
    if (ctx->pc == 0x2B772Cu) {
        ctx->pc = 0x2B772Cu;
            // 0x2b772c: 0xae800144  sw          $zero, 0x144($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 324), GPR_U32(ctx, 0));
        ctx->pc = 0x2B7730u;
        goto label_2b7730;
    }
    ctx->pc = 0x2B7728u;
    {
        const bool branch_taken_0x2b7728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B772Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7728u;
            // 0x2b772c: 0xae800144  sw          $zero, 0x144($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7728) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B7730u;
label_2b7730:
    // 0x2b7730: 0x100002e0  b           . + 4 + (0x2E0 << 2)
label_2b7734:
    if (ctx->pc == 0x2B7734u) {
        ctx->pc = 0x2B7734u;
            // 0x2b7734: 0x24120258  addiu       $s2, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->pc = 0x2B7738u;
        goto label_2b7738;
    }
    ctx->pc = 0x2B7730u;
    {
        const bool branch_taken_0x2b7730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7730u;
            // 0x2b7734: 0x24120258  addiu       $s2, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7730) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B7738u;
label_2b7738:
    // 0x2b7738: 0xae800144  sw          $zero, 0x144($s4)
    ctx->pc = 0x2b7738u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 324), GPR_U32(ctx, 0));
label_2b773c:
    // 0x2b773c: 0x100002dd  b           . + 4 + (0x2DD << 2)
label_2b7740:
    if (ctx->pc == 0x2B7740u) {
        ctx->pc = 0x2B7740u;
            // 0x2b7740: 0x241203e8  addiu       $s2, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->pc = 0x2B7744u;
        goto label_2b7744;
    }
    ctx->pc = 0x2B773Cu;
    {
        const bool branch_taken_0x2b773c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B773Cu;
            // 0x2b7740: 0x241203e8  addiu       $s2, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b773c) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B7744u;
label_2b7744:
    // 0x2b7744: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x2b7744u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_2b7748:
    // 0x2b7748: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2b7748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b774c:
    // 0x2b774c: 0x1062025d  beq         $v1, $v0, . + 4 + (0x25D << 2)
label_2b7750:
    if (ctx->pc == 0x2B7750u) {
        ctx->pc = 0x2B7750u;
            // 0x2b7750: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x2B7754u;
        goto label_2b7754;
    }
    ctx->pc = 0x2B774Cu;
    {
        const bool branch_taken_0x2b774c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B7750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B774Cu;
            // 0x2b7750: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b774c) {
            ctx->pc = 0x2B80C4u;
            goto label_2b80c4;
        }
    }
    ctx->pc = 0x2B7754u;
label_2b7754:
    // 0x2b7754: 0x106201aa  beq         $v1, $v0, . + 4 + (0x1AA << 2)
label_2b7758:
    if (ctx->pc == 0x2B7758u) {
        ctx->pc = 0x2B7758u;
            // 0x2b7758: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x2B775Cu;
        goto label_2b775c;
    }
    ctx->pc = 0x2B7754u;
    {
        const bool branch_taken_0x2b7754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B7758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7754u;
            // 0x2b7758: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7754) {
            ctx->pc = 0x2B7E00u;
            goto label_2b7e00;
        }
    }
    ctx->pc = 0x2B775Cu;
label_2b775c:
    // 0x2b775c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2b775cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2b7760:
    // 0x2b7760: 0x106201a6  beq         $v1, $v0, . + 4 + (0x1A6 << 2)
label_2b7764:
    if (ctx->pc == 0x2B7764u) {
        ctx->pc = 0x2B7764u;
            // 0x2b7764: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x2B7768u;
        goto label_2b7768;
    }
    ctx->pc = 0x2B7760u;
    {
        const bool branch_taken_0x2b7760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B7764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7760u;
            // 0x2b7764: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7760) {
            ctx->pc = 0x2B7DFCu;
            goto label_2b7dfc;
        }
    }
    ctx->pc = 0x2B7768u;
label_2b7768:
    // 0x2b7768: 0x106201a4  beq         $v1, $v0, . + 4 + (0x1A4 << 2)
label_2b776c:
    if (ctx->pc == 0x2B776Cu) {
        ctx->pc = 0x2B776Cu;
            // 0x2b776c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x2B7770u;
        goto label_2b7770;
    }
    ctx->pc = 0x2B7768u;
    {
        const bool branch_taken_0x2b7768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B776Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7768u;
            // 0x2b776c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7768) {
            ctx->pc = 0x2B7DFCu;
            goto label_2b7dfc;
        }
    }
    ctx->pc = 0x2B7770u;
label_2b7770:
    // 0x2b7770: 0x106200df  beq         $v1, $v0, . + 4 + (0xDF << 2)
label_2b7774:
    if (ctx->pc == 0x2B7774u) {
        ctx->pc = 0x2B7774u;
            // 0x2b7774: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x2B7778u;
        goto label_2b7778;
    }
    ctx->pc = 0x2B7770u;
    {
        const bool branch_taken_0x2b7770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B7774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7770u;
            // 0x2b7774: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7770) {
            ctx->pc = 0x2B7AF0u;
            goto label_2b7af0;
        }
    }
    ctx->pc = 0x2B7778u;
label_2b7778:
    // 0x2b7778: 0x10620090  beq         $v1, $v0, . + 4 + (0x90 << 2)
label_2b777c:
    if (ctx->pc == 0x2B777Cu) {
        ctx->pc = 0x2B777Cu;
            // 0x2b777c: 0x26840150  addiu       $a0, $s4, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
        ctx->pc = 0x2B7780u;
        goto label_2b7780;
    }
    ctx->pc = 0x2B7778u;
    {
        const bool branch_taken_0x2b7778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B777Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7778u;
            // 0x2b777c: 0x26840150  addiu       $a0, $s4, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7778) {
            ctx->pc = 0x2B79BCu;
            goto label_2b79bc;
        }
    }
    ctx->pc = 0x2B7780u;
label_2b7780:
    // 0x2b7780: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2b7780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2b7784:
    // 0x2b7784: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
label_2b7788:
    if (ctx->pc == 0x2B7788u) {
        ctx->pc = 0x2B778Cu;
        goto label_2b778c;
    }
    ctx->pc = 0x2B7784u;
    {
        const bool branch_taken_0x2b7784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b7784) {
            ctx->pc = 0x2B784Cu;
            goto label_2b784c;
        }
    }
    ctx->pc = 0x2B778Cu;
label_2b778c:
    // 0x2b778c: 0x10670028  beq         $v1, $a3, . + 4 + (0x28 << 2)
label_2b7790:
    if (ctx->pc == 0x2B7790u) {
        ctx->pc = 0x2B7794u;
        goto label_2b7794;
    }
    ctx->pc = 0x2B778Cu;
    {
        const bool branch_taken_0x2b778c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x2b778c) {
            ctx->pc = 0x2B7830u;
            goto label_2b7830;
        }
    }
    ctx->pc = 0x2B7794u;
label_2b7794:
    // 0x2b7794: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2b7798:
    if (ctx->pc == 0x2B7798u) {
        ctx->pc = 0x2B7798u;
            // 0x2b7798: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B779Cu;
        goto label_2b779c;
    }
    ctx->pc = 0x2B7794u;
    {
        const bool branch_taken_0x2b7794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7794u;
            // 0x2b7798: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7794) {
            ctx->pc = 0x2B77A4u;
            goto label_2b77a4;
        }
    }
    ctx->pc = 0x2B779Cu;
label_2b779c:
    // 0x2b779c: 0x100002c5  b           . + 4 + (0x2C5 << 2)
label_2b77a0:
    if (ctx->pc == 0x2B77A0u) {
        ctx->pc = 0x2B77A4u;
        goto label_2b77a4;
    }
    ctx->pc = 0x2B779Cu;
    {
        const bool branch_taken_0x2b779c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b779c) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B77A4u;
label_2b77a4:
    // 0x2b77a4: 0xc0875fc  jal         func_21D7F0
label_2b77a8:
    if (ctx->pc == 0x2B77A8u) {
        ctx->pc = 0x2B77ACu;
        goto label_2b77ac;
    }
    ctx->pc = 0x2B77A4u;
    SET_GPR_U32(ctx, 31, 0x2B77ACu);
    ctx->pc = 0x21D7F0u;
    if (runtime->hasFunction(0x21D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x21D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B77ACu; }
        if (ctx->pc != 0x2B77ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CommandMsgCursor__7CDC2MesFv_0x21d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B77ACu; }
        if (ctx->pc != 0x2B77ACu) { return; }
    }
    ctx->pc = 0x2B77ACu;
label_2b77ac:
    // 0x2b77ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b77acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b77b0:
    // 0x2b77b0: 0x1203001d  beq         $s0, $v1, . + 4 + (0x1D << 2)
label_2b77b4:
    if (ctx->pc == 0x2B77B4u) {
        ctx->pc = 0x2B77B4u;
            // 0x2b77b4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2B77B8u;
        goto label_2b77b8;
    }
    ctx->pc = 0x2B77B0u;
    {
        const bool branch_taken_0x2b77b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B77B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B77B0u;
            // 0x2b77b4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b77b0) {
            ctx->pc = 0x2B7828u;
            goto label_2b7828;
        }
    }
    ctx->pc = 0x2B77B8u;
label_2b77b8:
    // 0x2b77b8: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
label_2b77bc:
    if (ctx->pc == 0x2B77BCu) {
        ctx->pc = 0x2B77BCu;
            // 0x2b77bc: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x2B77C0u;
        goto label_2b77c0;
    }
    ctx->pc = 0x2B77B8u;
    {
        const bool branch_taken_0x2b77b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B77BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B77B8u;
            // 0x2b77bc: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b77b8) {
            ctx->pc = 0x2B77D4u;
            goto label_2b77d4;
        }
    }
    ctx->pc = 0x2B77C0u;
label_2b77c0:
    // 0x2b77c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b77c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b77c4:
    // 0x2b77c4: 0x12030004  beq         $s0, $v1, . + 4 + (0x4 << 2)
label_2b77c8:
    if (ctx->pc == 0x2B77C8u) {
        ctx->pc = 0x2B77C8u;
            // 0x2b77c8: 0x911821  addu        $v1, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->pc = 0x2B77CCu;
        goto label_2b77cc;
    }
    ctx->pc = 0x2B77C4u;
    {
        const bool branch_taken_0x2b77c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B77C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B77C4u;
            // 0x2b77c8: 0x911821  addu        $v1, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b77c4) {
            ctx->pc = 0x2B77D8u;
            goto label_2b77d8;
        }
    }
    ctx->pc = 0x2B77CCu;
label_2b77cc:
    // 0x2b77cc: 0x100002b9  b           . + 4 + (0x2B9 << 2)
label_2b77d0:
    if (ctx->pc == 0x2B77D0u) {
        ctx->pc = 0x2B77D4u;
        goto label_2b77d4;
    }
    ctx->pc = 0x2B77CCu;
    {
        const bool branch_taken_0x2b77cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b77cc) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B77D4u;
label_2b77d4:
    // 0x2b77d4: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x2b77d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_2b77d8:
    // 0x2b77d8: 0x240214b7  addiu       $v0, $zero, 0x14B7
    ctx->pc = 0x2b77d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5303));
label_2b77dc:
    // 0x2b77dc: 0x8c631a04  lw          $v1, 0x1A04($v1)
    ctx->pc = 0x2b77dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6660)));
label_2b77e0:
    // 0x2b77e0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2b77e4:
    if (ctx->pc == 0x2B77E4u) {
        ctx->pc = 0x2B77E4u;
            // 0x2b77e4: 0x240214b6  addiu       $v0, $zero, 0x14B6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5302));
        ctx->pc = 0x2B77E8u;
        goto label_2b77e8;
    }
    ctx->pc = 0x2B77E0u;
    {
        const bool branch_taken_0x2b77e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B77E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B77E0u;
            // 0x2b77e4: 0x240214b6  addiu       $v0, $zero, 0x14B6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5302));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b77e0) {
            ctx->pc = 0x2B77ECu;
            goto label_2b77ec;
        }
    }
    ctx->pc = 0x2B77E8u;
label_2b77e8:
    // 0x2b77e8: 0x24120014  addiu       $s2, $zero, 0x14
    ctx->pc = 0x2b77e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b77ec:
    // 0x2b77ec: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2b77f0:
    if (ctx->pc == 0x2B77F0u) {
        ctx->pc = 0x2B77F0u;
            // 0x2b77f0: 0x240214b8  addiu       $v0, $zero, 0x14B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5304));
        ctx->pc = 0x2B77F4u;
        goto label_2b77f4;
    }
    ctx->pc = 0x2B77ECu;
    {
        const bool branch_taken_0x2b77ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B77F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B77ECu;
            // 0x2b77f0: 0x240214b8  addiu       $v0, $zero, 0x14B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b77ec) {
            ctx->pc = 0x2B77F8u;
            goto label_2b77f8;
        }
    }
    ctx->pc = 0x2B77F4u;
label_2b77f4:
    // 0x2b77f4: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x2b77f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2b77f8:
    // 0x2b77f8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2b77fc:
    if (ctx->pc == 0x2B77FCu) {
        ctx->pc = 0x2B77FCu;
            // 0x2b77fc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x2B7800u;
        goto label_2b7800;
    }
    ctx->pc = 0x2B77F8u;
    {
        const bool branch_taken_0x2b77f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B77FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B77F8u;
            // 0x2b77fc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b77f8) {
            ctx->pc = 0x2B7804u;
            goto label_2b7804;
        }
    }
    ctx->pc = 0x2B7800u;
label_2b7800:
    // 0x2b7800: 0x2412001e  addiu       $s2, $zero, 0x1E
    ctx->pc = 0x2b7800u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2b7804:
    // 0x2b7804: 0x164202ab  bne         $s2, $v0, . + 4 + (0x2AB << 2)
label_2b7808:
    if (ctx->pc == 0x2B7808u) {
        ctx->pc = 0x2B7808u;
            // 0x2b7808: 0x911821  addu        $v1, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->pc = 0x2B780Cu;
        goto label_2b780c;
    }
    ctx->pc = 0x2B7804u;
    {
        const bool branch_taken_0x2b7804 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B7808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7804u;
            // 0x2b7808: 0x911821  addu        $v1, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7804) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B780Cu;
label_2b780c:
    // 0x2b780c: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x2b780cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
label_2b7810:
    // 0x2b7810: 0x8c631cd4  lw          $v1, 0x1CD4($v1)
    ctx->pc = 0x2b7810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7380)));
label_2b7814:
    // 0x2b7814: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x2b7814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
label_2b7818:
    // 0x2b7818: 0x146202a6  bne         $v1, $v0, . + 4 + (0x2A6 << 2)
label_2b781c:
    if (ctx->pc == 0x2B781Cu) {
        ctx->pc = 0x2B7820u;
        goto label_2b7820;
    }
    ctx->pc = 0x2B7818u;
    {
        const bool branch_taken_0x2b7818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b7818) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B7820u;
label_2b7820:
    // 0x2b7820: 0x100002a4  b           . + 4 + (0x2A4 << 2)
label_2b7824:
    if (ctx->pc == 0x2B7824u) {
        ctx->pc = 0x2B7824u;
            // 0x2b7824: 0x24120005  addiu       $s2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B7828u;
        goto label_2b7828;
    }
    ctx->pc = 0x2B7820u;
    {
        const bool branch_taken_0x2b7820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7820u;
            // 0x2b7824: 0x24120005  addiu       $s2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7820) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B7828u;
label_2b7828:
    // 0x2b7828: 0x100002a2  b           . + 4 + (0x2A2 << 2)
label_2b782c:
    if (ctx->pc == 0x2B782Cu) {
        ctx->pc = 0x2B782Cu;
            // 0x2b782c: 0x241201f4  addiu       $s2, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->pc = 0x2B7830u;
        goto label_2b7830;
    }
    ctx->pc = 0x2B7828u;
    {
        const bool branch_taken_0x2b7828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B782Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7828u;
            // 0x2b782c: 0x241201f4  addiu       $s2, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7828) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B7830u;
label_2b7830:
    // 0x2b7830: 0x120002a0  beqz        $s0, . + 4 + (0x2A0 << 2)
label_2b7834:
    if (ctx->pc == 0x2B7834u) {
        ctx->pc = 0x2B7834u;
            // 0x2b7834: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2B7838u;
        goto label_2b7838;
    }
    ctx->pc = 0x2B7830u;
    {
        const bool branch_taken_0x2b7830 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7830u;
            // 0x2b7834: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7830) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B7838u;
label_2b7838:
    // 0x2b7838: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b7838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b783c:
    // 0x2b783c: 0xc08e7cc  jal         func_239F30
label_2b7840:
    if (ctx->pc == 0x2B7840u) {
        ctx->pc = 0x2B7840u;
            // 0x2b7840: 0x24a5f0c0  addiu       $a1, $a1, -0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963392));
        ctx->pc = 0x2B7844u;
        goto label_2b7844;
    }
    ctx->pc = 0x2B783Cu;
    SET_GPR_U32(ctx, 31, 0x2B7844u);
    ctx->pc = 0x2B7840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B783Cu;
            // 0x2b7840: 0x24a5f0c0  addiu       $a1, $a1, -0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7844u; }
        if (ctx->pc != 0x2B7844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7844u; }
        if (ctx->pc != 0x2B7844u) { return; }
    }
    ctx->pc = 0x2B7844u;
label_2b7844:
    // 0x2b7844: 0x1000029b  b           . + 4 + (0x29B << 2)
label_2b7848:
    if (ctx->pc == 0x2B7848u) {
        ctx->pc = 0x2B7848u;
            // 0x2b7848: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2B784Cu;
        goto label_2b784c;
    }
    ctx->pc = 0x2B7844u;
    {
        const bool branch_taken_0x2b7844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7844u;
            // 0x2b7848: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7844) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B784Cu;
label_2b784c:
    // 0x2b784c: 0x83829bf4  lb          $v0, -0x640C($gp)
    ctx->pc = 0x2b784cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941684)));
label_2b7850:
    // 0x2b7850: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2b7854:
    if (ctx->pc == 0x2B7854u) {
        ctx->pc = 0x2B7854u;
            // 0x2b7854: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x2B7858u;
        goto label_2b7858;
    }
    ctx->pc = 0x2B7850u;
    {
        const bool branch_taken_0x2b7850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7850u;
            // 0x2b7854: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7850) {
            ctx->pc = 0x2B7860u;
            goto label_2b7860;
        }
    }
    ctx->pc = 0x2B7858u;
label_2b7858:
    // 0x2b7858: 0xa3879bf4  sb          $a3, -0x640C($gp)
    ctx->pc = 0x2b7858u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941684), (uint8_t)GPR_U32(ctx, 7));
label_2b785c:
    // 0x2b785c: 0xaf809bf0  sw          $zero, -0x6410($gp)
    ctx->pc = 0x2b785cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941680), GPR_U32(ctx, 0));
label_2b7860:
    // 0x2b7860: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x2b7860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_2b7864:
    // 0x2b7864: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b7868:
    if (ctx->pc == 0x2B7868u) {
        ctx->pc = 0x2B7868u;
            // 0x2b7868: 0x8023dc23  lb          $v1, -0x23DD($at) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294958115)));
        ctx->pc = 0x2B786Cu;
        goto label_2b786c;
    }
    ctx->pc = 0x2B7864u;
    {
        const bool branch_taken_0x2b7864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7864u;
            // 0x2b7868: 0x8023dc23  lb          $v1, -0x23DD($at) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294958115)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7864) {
            ctx->pc = 0x2B7878u;
            goto label_2b7878;
        }
    }
    ctx->pc = 0x2B786Cu;
label_2b786c:
    // 0x2b786c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2b786cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2b7870:
    // 0x2b7870: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b7870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b7874:
    // 0x2b7874: 0xa022dc23  sb          $v0, -0x23DD($at)
    ctx->pc = 0x2b7874u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294958115), (uint8_t)GPR_U32(ctx, 2));
label_2b7878:
    // 0x2b7878: 0x32c20002  andi        $v0, $s6, 0x2
    ctx->pc = 0x2b7878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
label_2b787c:
    // 0x2b787c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b7880:
    if (ctx->pc == 0x2B7880u) {
        ctx->pc = 0x2B7884u;
        goto label_2b7884;
    }
    ctx->pc = 0x2B787Cu;
    {
        const bool branch_taken_0x2b787c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b787c) {
            ctx->pc = 0x2B7898u;
            goto label_2b7898;
        }
    }
    ctx->pc = 0x2B7884u;
label_2b7884:
    // 0x2b7884: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b7884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b7888:
    // 0x2b7888: 0x8022dc23  lb          $v0, -0x23DD($at)
    ctx->pc = 0x2b7888u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294958115)));
label_2b788c:
    // 0x2b788c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b788cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b7890:
    // 0x2b7890: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b7890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b7894:
    // 0x2b7894: 0xa022dc23  sb          $v0, -0x23DD($at)
    ctx->pc = 0x2b7894u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294958115), (uint8_t)GPR_U32(ctx, 2));
label_2b7898:
    // 0x2b7898: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b7898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b789c:
    // 0x2b789c: 0x8022dc23  lb          $v0, -0x23DD($at)
    ctx->pc = 0x2b789cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294958115)));
label_2b78a0:
    // 0x2b78a0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_2b78a4:
    if (ctx->pc == 0x2B78A4u) {
        ctx->pc = 0x2B78A8u;
        goto label_2b78a8;
    }
    ctx->pc = 0x2B78A0u;
    {
        const bool branch_taken_0x2b78a0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2b78a0) {
            ctx->pc = 0x2B78B0u;
            goto label_2b78b0;
        }
    }
    ctx->pc = 0x2B78A8u;
label_2b78a8:
    // 0x2b78a8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b78a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b78ac:
    // 0x2b78ac: 0xa020dc23  sb          $zero, -0x23DD($at)
    ctx->pc = 0x2b78acu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294958115), (uint8_t)GPR_U32(ctx, 0));
label_2b78b0:
    // 0x2b78b0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b78b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b78b4:
    // 0x2b78b4: 0x8c24dc28  lw          $a0, -0x23D8($at)
    ctx->pc = 0x2b78b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958120)));
label_2b78b8:
    // 0x2b78b8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b78b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b78bc:
    // 0x2b78bc: 0x8022dc23  lb          $v0, -0x23DD($at)
    ctx->pc = 0x2b78bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294958115)));
label_2b78c0:
    // 0x2b78c0: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x2b78c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2b78c4:
    // 0x2b78c4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_2b78c8:
    if (ctx->pc == 0x2B78C8u) {
        ctx->pc = 0x2B78CCu;
        goto label_2b78cc;
    }
    ctx->pc = 0x2B78C4u;
    {
        const bool branch_taken_0x2b78c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b78c4) {
            ctx->pc = 0x2B78D8u;
            goto label_2b78d8;
        }
    }
    ctx->pc = 0x2B78CCu;
label_2b78cc:
    // 0x2b78cc: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x2b78ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2b78d0:
    // 0x2b78d0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b78d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b78d4:
    // 0x2b78d4: 0xa022dc23  sb          $v0, -0x23DD($at)
    ctx->pc = 0x2b78d4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294958115), (uint8_t)GPR_U32(ctx, 2));
label_2b78d8:
    // 0x2b78d8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b78d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b78dc:
    // 0x2b78dc: 0x8022dc23  lb          $v0, -0x23DD($at)
    ctx->pc = 0x2b78dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294958115)));
label_2b78e0:
    // 0x2b78e0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2b78e4:
    if (ctx->pc == 0x2B78E4u) {
        ctx->pc = 0x2B78E4u;
            // 0x2b78e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B78E8u;
        goto label_2b78e8;
    }
    ctx->pc = 0x2B78E0u;
    {
        const bool branch_taken_0x2b78e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B78E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B78E0u;
            // 0x2b78e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b78e0) {
            ctx->pc = 0x2B78F4u;
            goto label_2b78f4;
        }
    }
    ctx->pc = 0x2B78E8u;
label_2b78e8:
    // 0x2b78e8: 0xc094274  jal         func_2509D0
label_2b78ec:
    if (ctx->pc == 0x2B78ECu) {
        ctx->pc = 0x2B78ECu;
            // 0x2b78ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B78F0u;
        goto label_2b78f0;
    }
    ctx->pc = 0x2B78E8u;
    SET_GPR_U32(ctx, 31, 0x2B78F0u);
    ctx->pc = 0x2B78ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B78E8u;
            // 0x2b78ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B78F0u; }
        if (ctx->pc != 0x2B78F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B78F0u; }
        if (ctx->pc != 0x2B78F0u) { return; }
    }
    ctx->pc = 0x2B78F0u;
label_2b78f0:
    // 0x2b78f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b78f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b78f4:
    // 0x2b78f4: 0x12020028  beq         $s0, $v0, . + 4 + (0x28 << 2)
label_2b78f8:
    if (ctx->pc == 0x2B78F8u) {
        ctx->pc = 0x2B78F8u;
            // 0x2b78f8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2B78FCu;
        goto label_2b78fc;
    }
    ctx->pc = 0x2B78F4u;
    {
        const bool branch_taken_0x2b78f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B78F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B78F4u;
            // 0x2b78f8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b78f4) {
            ctx->pc = 0x2B7998u;
            goto label_2b7998;
        }
    }
    ctx->pc = 0x2B78FCu;
label_2b78fc:
    // 0x2b78fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b78fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b7900:
    // 0x2b7900: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_2b7904:
    if (ctx->pc == 0x2B7904u) {
        ctx->pc = 0x2B7904u;
            // 0x2b7904: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x2B7908u;
        goto label_2b7908;
    }
    ctx->pc = 0x2B7900u;
    {
        const bool branch_taken_0x2b7900 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B7904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7900u;
            // 0x2b7904: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7900) {
            ctx->pc = 0x2B7910u;
            goto label_2b7910;
        }
    }
    ctx->pc = 0x2B7908u;
label_2b7908:
    // 0x2b7908: 0x1000026a  b           . + 4 + (0x26A << 2)
label_2b790c:
    if (ctx->pc == 0x2B790Cu) {
        ctx->pc = 0x2B7910u;
        goto label_2b7910;
    }
    ctx->pc = 0x2B7908u;
    {
        const bool branch_taken_0x2b7908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7908) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B7910u;
label_2b7910:
    // 0x2b7910: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b7910u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b7914:
    // 0x2b7914: 0x8023dc23  lb          $v1, -0x23DD($at)
    ctx->pc = 0x2b7914u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294958115)));
label_2b7918:
    // 0x2b7918: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2b7918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2b791c:
    // 0x2b791c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b791cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b7920:
    // 0x2b7920: 0x24a5f0d0  addiu       $a1, $a1, -0xF30
    ctx->pc = 0x2b7920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963408));
label_2b7924:
    // 0x2b7924: 0xaf839bf0  sw          $v1, -0x6410($gp)
    ctx->pc = 0x2b7924u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941680), GPR_U32(ctx, 3));
label_2b7928:
    // 0x2b7928: 0xc08e7cc  jal         func_239F30
label_2b792c:
    if (ctx->pc == 0x2B792Cu) {
        ctx->pc = 0x2B792Cu;
            // 0x2b792c: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2B7930u;
        goto label_2b7930;
    }
    ctx->pc = 0x2B7928u;
    SET_GPR_U32(ctx, 31, 0x2B7930u);
    ctx->pc = 0x2B792Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7928u;
            // 0x2b792c: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7930u; }
        if (ctx->pc != 0x2B7930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7930u; }
        if (ctx->pc != 0x2B7930u) { return; }
    }
    ctx->pc = 0x2B7930u;
label_2b7930:
    // 0x2b7930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b7930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b7934:
    // 0x2b7934: 0x26840150  addiu       $a0, $s4, 0x150
    ctx->pc = 0x2b7934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
label_2b7938:
    // 0x2b7938: 0xae822420  sw          $v0, 0x2420($s4)
    ctx->pc = 0x2b7938u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 9248), GPR_U32(ctx, 2));
label_2b793c:
    // 0x2b793c: 0xc0874e8  jal         func_21D3A0
label_2b7940:
    if (ctx->pc == 0x2B7940u) {
        ctx->pc = 0x2B7940u;
            // 0x2b7940: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x2B7944u;
        goto label_2b7944;
    }
    ctx->pc = 0x2B793Cu;
    SET_GPR_U32(ctx, 31, 0x2B7944u);
    ctx->pc = 0x2B7940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B793Cu;
            // 0x2b7940: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7944u; }
        if (ctx->pc != 0x2B7944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7944u; }
        if (ctx->pc != 0x2B7944u) { return; }
    }
    ctx->pc = 0x2B7944u;
label_2b7944:
    // 0x2b7944: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b7944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b7948:
    // 0x2b7948: 0xae821934  sw          $v0, 0x1934($s4)
    ctx->pc = 0x2b7948u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6452), GPR_U32(ctx, 2));
label_2b794c:
    // 0x2b794c: 0x8f829bf0  lw          $v0, -0x6410($gp)
    ctx->pc = 0x2b794cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941680)));
label_2b7950:
    // 0x2b7950: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b7950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2b7954:
    // 0x2b7954: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2b7954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2b7958:
    // 0x2b7958: 0xc0ad6c4  jal         func_2B5B10
label_2b795c:
    if (ctx->pc == 0x2B795Cu) {
        ctx->pc = 0x2B795Cu;
            // 0x2b795c: 0x8c444618  lw          $a0, 0x4618($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17944)));
        ctx->pc = 0x2B7960u;
        goto label_2b7960;
    }
    ctx->pc = 0x2B7958u;
    SET_GPR_U32(ctx, 31, 0x2B7960u);
    ctx->pc = 0x2B795Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7958u;
            // 0x2b795c: 0x8c444618  lw          $a0, 0x4618($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17944)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7960u; }
        if (ctx->pc != 0x2B7960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterName__Fi_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7960u; }
        if (ctx->pc != 0x2B7960u) { return; }
    }
    ctx->pc = 0x2B7960u;
label_2b7960:
    // 0x2b7960: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2b7964:
    if (ctx->pc == 0x2B7964u) {
        ctx->pc = 0x2B7964u;
            // 0x2b7964: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B7968u;
        goto label_2b7968;
    }
    ctx->pc = 0x2B7960u;
    {
        const bool branch_taken_0x2b7960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7960u;
            // 0x2b7964: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7960) {
            ctx->pc = 0x2B7970u;
            goto label_2b7970;
        }
    }
    ctx->pc = 0x2B7968u;
label_2b7968:
    // 0x2b7968: 0xc04a3dc  jal         func_128F70
label_2b796c:
    if (ctx->pc == 0x2B796Cu) {
        ctx->pc = 0x2B796Cu;
            // 0x2b796c: 0x26841951  addiu       $a0, $s4, 0x1951 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 6481));
        ctx->pc = 0x2B7970u;
        goto label_2b7970;
    }
    ctx->pc = 0x2B7968u;
    SET_GPR_U32(ctx, 31, 0x2B7970u);
    ctx->pc = 0x2B796Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7968u;
            // 0x2b796c: 0x26841951  addiu       $a0, $s4, 0x1951 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 6481));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7970u; }
        if (ctx->pc != 0x2B7970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7970u; }
        if (ctx->pc != 0x2B7970u) { return; }
    }
    ctx->pc = 0x2B7970u;
label_2b7970:
    // 0x2b7970: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2b7970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2b7974:
    // 0x2b7974: 0x26840150  addiu       $a0, $s4, 0x150
    ctx->pc = 0x2b7974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
label_2b7978:
    // 0x2b7978: 0xae82029c  sw          $v0, 0x29C($s4)
    ctx->pc = 0x2b7978u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 668), GPR_U32(ctx, 2));
label_2b797c:
    // 0x2b797c: 0xc0877e0  jal         func_21DF80
label_2b7980:
    if (ctx->pc == 0x2B7980u) {
        ctx->pc = 0x2B7980u;
            // 0x2b7980: 0x240501d8  addiu       $a1, $zero, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 472));
        ctx->pc = 0x2B7984u;
        goto label_2b7984;
    }
    ctx->pc = 0x2B797Cu;
    SET_GPR_U32(ctx, 31, 0x2B7984u);
    ctx->pc = 0x2B7980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B797Cu;
            // 0x2b7980: 0x240501d8  addiu       $a1, $zero, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7984u; }
        if (ctx->pc != 0x2B7984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7984u; }
        if (ctx->pc != 0x2B7984u) { return; }
    }
    ctx->pc = 0x2B7984u;
label_2b7984:
    // 0x2b7984: 0x26840150  addiu       $a0, $s4, 0x150
    ctx->pc = 0x2b7984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
label_2b7988:
    // 0x2b7988: 0xc0875b0  jal         func_21D6C0
label_2b798c:
    if (ctx->pc == 0x2B798Cu) {
        ctx->pc = 0x2B798Cu;
            // 0x2b798c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B7990u;
        goto label_2b7990;
    }
    ctx->pc = 0x2B7988u;
    SET_GPR_U32(ctx, 31, 0x2B7990u);
    ctx->pc = 0x2B798Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7988u;
            // 0x2b798c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7990u; }
        if (ctx->pc != 0x2B7990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7990u; }
        if (ctx->pc != 0x2B7990u) { return; }
    }
    ctx->pc = 0x2B7990u;
label_2b7990:
    // 0x2b7990: 0x10000248  b           . + 4 + (0x248 << 2)
label_2b7994:
    if (ctx->pc == 0x2B7994u) {
        ctx->pc = 0x2B7998u;
        goto label_2b7998;
    }
    ctx->pc = 0x2B7990u;
    {
        const bool branch_taken_0x2b7990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7990) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B7998u;
label_2b7998:
    // 0x2b7998: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b7998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b799c:
    // 0x2b799c: 0x24a5f0f0  addiu       $a1, $a1, -0xF10
    ctx->pc = 0x2b799cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963440));
label_2b79a0:
    // 0x2b79a0: 0xc08e7cc  jal         func_239F30
label_2b79a4:
    if (ctx->pc == 0x2B79A4u) {
        ctx->pc = 0x2B79A4u;
            // 0x2b79a4: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2B79A8u;
        goto label_2b79a8;
    }
    ctx->pc = 0x2B79A0u;
    SET_GPR_U32(ctx, 31, 0x2B79A8u);
    ctx->pc = 0x2B79A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B79A0u;
            // 0x2b79a4: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B79A8u; }
        if (ctx->pc != 0x2B79A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B79A8u; }
        if (ctx->pc != 0x2B79A8u) { return; }
    }
    ctx->pc = 0x2B79A8u;
label_2b79a8:
    // 0x2b79a8: 0xc094274  jal         func_2509D0
label_2b79ac:
    if (ctx->pc == 0x2B79ACu) {
        ctx->pc = 0x2B79ACu;
            // 0x2b79ac: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B79B0u;
        goto label_2b79b0;
    }
    ctx->pc = 0x2B79A8u;
    SET_GPR_U32(ctx, 31, 0x2B79B0u);
    ctx->pc = 0x2B79ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B79A8u;
            // 0x2b79ac: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B79B0u; }
        if (ctx->pc != 0x2B79B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B79B0u; }
        if (ctx->pc != 0x2B79B0u) { return; }
    }
    ctx->pc = 0x2B79B0u;
label_2b79b0:
    // 0x2b79b0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b79b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b79b4:
    // 0x2b79b4: 0x1000023f  b           . + 4 + (0x23F << 2)
label_2b79b8:
    if (ctx->pc == 0x2B79B8u) {
        ctx->pc = 0x2B79B8u;
            // 0x2b79b8: 0xa020dc22  sb          $zero, -0x23DE($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294958114), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2B79BCu;
        goto label_2b79bc;
    }
    ctx->pc = 0x2B79B4u;
    {
        const bool branch_taken_0x2b79b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B79B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B79B4u;
            // 0x2b79b8: 0xa020dc22  sb          $zero, -0x23DE($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294958114), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b79b4) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B79BCu;
label_2b79bc:
    // 0x2b79bc: 0xc087654  jal         func_21D950
label_2b79c0:
    if (ctx->pc == 0x2B79C0u) {
        ctx->pc = 0x2B79C0u;
            // 0x2b79c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B79C4u;
        goto label_2b79c4;
    }
    ctx->pc = 0x2B79BCu;
    SET_GPR_U32(ctx, 31, 0x2B79C4u);
    ctx->pc = 0x2B79C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B79BCu;
            // 0x2b79c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B79C4u; }
        if (ctx->pc != 0x2B79C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B79C4u; }
        if (ctx->pc != 0x2B79C4u) { return; }
    }
    ctx->pc = 0x2B79C4u;
label_2b79c4:
    // 0x2b79c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b79c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b79c8:
    // 0x2b79c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b79c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b79cc:
    // 0x2b79cc: 0x1602003a  bne         $s0, $v0, . + 4 + (0x3A << 2)
label_2b79d0:
    if (ctx->pc == 0x2B79D0u) {
        ctx->pc = 0x2B79D0u;
            // 0x2b79d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B79D4u;
        goto label_2b79d4;
    }
    ctx->pc = 0x2B79CCu;
    {
        const bool branch_taken_0x2b79cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B79D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B79CCu;
            // 0x2b79d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b79cc) {
            ctx->pc = 0x2B7AB8u;
            goto label_2b7ab8;
        }
    }
    ctx->pc = 0x2B79D4u;
label_2b79d4:
    // 0x2b79d4: 0xc05239c  jal         func_148E70
label_2b79d8:
    if (ctx->pc == 0x2B79D8u) {
        ctx->pc = 0x2B79DCu;
        goto label_2b79dc;
    }
    ctx->pc = 0x2B79D4u;
    SET_GPR_U32(ctx, 31, 0x2B79DCu);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B79DCu; }
        if (ctx->pc != 0x2B79DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B79DCu; }
        if (ctx->pc != 0x2B79DCu) { return; }
    }
    ctx->pc = 0x2B79DCu;
label_2b79dc:
    // 0x2b79dc: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_2b79e0:
    if (ctx->pc == 0x2B79E0u) {
        ctx->pc = 0x2B79E4u;
        goto label_2b79e4;
    }
    ctx->pc = 0x2B79DCu;
    {
        const bool branch_taken_0x2b79dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b79dc) {
            ctx->pc = 0x2B7AB4u;
            goto label_2b7ab4;
        }
    }
    ctx->pc = 0x2B79E4u;
label_2b79e4:
    // 0x2b79e4: 0xae802420  sw          $zero, 0x2420($s4)
    ctx->pc = 0x2b79e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 9248), GPR_U32(ctx, 0));
label_2b79e8:
    // 0x2b79e8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b79e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b79ec:
    // 0x2b79ec: 0xa020dc22  sb          $zero, -0x23DE($at)
    ctx->pc = 0x2b79ecu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294958114), (uint8_t)GPR_U32(ctx, 0));
label_2b79f0:
    // 0x2b79f0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b79f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b79f4:
    // 0x2b79f4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2b79f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2b79f8:
    // 0x2b79f8: 0xae804658  sw          $zero, 0x4658($s4)
    ctx->pc = 0x2b79f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 18008), GPR_U32(ctx, 0));
label_2b79fc:
    // 0x2b79fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b79fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b7a00:
    // 0x2b7a00: 0x24a5f110  addiu       $a1, $a1, -0xEF0
    ctx->pc = 0x2b7a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963472));
label_2b7a04:
    // 0x2b7a04: 0xc08e7cc  jal         func_239F30
label_2b7a08:
    if (ctx->pc == 0x2B7A08u) {
        ctx->pc = 0x2B7A08u;
            // 0x2b7a08: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2B7A0Cu;
        goto label_2b7a0c;
    }
    ctx->pc = 0x2B7A04u;
    SET_GPR_U32(ctx, 31, 0x2B7A0Cu);
    ctx->pc = 0x2B7A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7A04u;
            // 0x2b7a08: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A0Cu; }
        if (ctx->pc != 0x2B7A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A0Cu; }
        if (ctx->pc != 0x2B7A0Cu) { return; }
    }
    ctx->pc = 0x2B7A0Cu;
label_2b7a0c:
    // 0x2b7a0c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2b7a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2b7a10:
    // 0x2b7a10: 0x268456c0  addiu       $a0, $s4, 0x56C0
    ctx->pc = 0x2b7a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 22208));
label_2b7a14:
    // 0x2b7a14: 0xac20cec4  sw          $zero, -0x313C($at)
    ctx->pc = 0x2b7a14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954692), GPR_U32(ctx, 0));
label_2b7a18:
    // 0x2b7a18: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2b7a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2b7a1c:
    // 0x2b7a1c: 0xac20cebc  sw          $zero, -0x3144($at)
    ctx->pc = 0x2b7a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 0));
label_2b7a20:
    // 0x2b7a20: 0x8e9956c0  lw          $t9, 0x56C0($s4)
    ctx->pc = 0x2b7a20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 22208)));
label_2b7a24:
    // 0x2b7a24: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x2b7a24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_2b7a28:
    // 0x2b7a28: 0x320f809  jalr        $t9
label_2b7a2c:
    if (ctx->pc == 0x2B7A2Cu) {
        ctx->pc = 0x2B7A2Cu;
            // 0x2b7a2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B7A30u;
        goto label_2b7a30;
    }
    ctx->pc = 0x2B7A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B7A30u);
        ctx->pc = 0x2B7A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7A28u;
            // 0x2b7a2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B7A30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A30u; }
            if (ctx->pc != 0x2B7A30u) { return; }
        }
        }
    }
    ctx->pc = 0x2B7A30u;
label_2b7a30:
    // 0x2b7a30: 0xa6806758  sh          $zero, 0x6758($s4)
    ctx->pc = 0x2b7a30u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 26456), (uint16_t)GPR_U32(ctx, 0));
label_2b7a34:
    // 0x2b7a34: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2b7a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2b7a38:
    // 0x2b7a38: 0x8c22cec0  lw          $v0, -0x3140($at)
    ctx->pc = 0x2b7a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
label_2b7a3c:
    // 0x2b7a3c: 0x268466f0  addiu       $a0, $s4, 0x66F0
    ctx->pc = 0x2b7a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 26352));
label_2b7a40:
    // 0x2b7a40: 0x24063980  addiu       $a2, $zero, 0x3980
    ctx->pc = 0x2b7a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14720));
label_2b7a44:
    // 0x2b7a44: 0xae826750  sw          $v0, 0x6750($s4)
    ctx->pc = 0x2b7a44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 26448), GPR_U32(ctx, 2));
label_2b7a48:
    // 0x2b7a48: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x2b7a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
label_2b7a4c:
    // 0x2b7a4c: 0x8e826750  lw          $v0, 0x6750($s4)
    ctx->pc = 0x2b7a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 26448)));
label_2b7a50:
    // 0x2b7a50: 0x34219800  ori         $at, $at, 0x9800
    ctx->pc = 0x2b7a50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38912);
label_2b7a54:
    // 0x2b7a54: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x2b7a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2b7a58:
    // 0x2b7a58: 0xae826754  sw          $v0, 0x6754($s4)
    ctx->pc = 0x2b7a58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 26452), GPR_U32(ctx, 2));
label_2b7a5c:
    // 0x2b7a5c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2b7a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2b7a60:
    // 0x2b7a60: 0x8c23cec8  lw          $v1, -0x3138($at)
    ctx->pc = 0x2b7a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954696)));
label_2b7a64:
    // 0x2b7a64: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2b7a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2b7a68:
    // 0x2b7a68: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2b7a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2b7a6c:
    // 0x2b7a6c: 0x8c22cec0  lw          $v0, -0x3140($at)
    ctx->pc = 0x2b7a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
label_2b7a70:
    // 0x2b7a70: 0x3c01fffc  lui         $at, 0xFFFC
    ctx->pc = 0x2b7a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65532 << 16));
label_2b7a74:
    // 0x2b7a74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b7a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b7a78:
    // 0x2b7a78: 0x34214800  ori         $at, $at, 0x4800
    ctx->pc = 0x2b7a78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18432);
label_2b7a7c:
    // 0x2b7a7c: 0xc04e79c  jal         func_139E70
label_2b7a80:
    if (ctx->pc == 0x2B7A80u) {
        ctx->pc = 0x2B7A80u;
            // 0x2b7a80: 0x412821  addu        $a1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->pc = 0x2B7A84u;
        goto label_2b7a84;
    }
    ctx->pc = 0x2B7A7Cu;
    SET_GPR_U32(ctx, 31, 0x2B7A84u);
    ctx->pc = 0x2B7A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7A7Cu;
            // 0x2b7a80: 0x412821  addu        $a1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A84u; }
        if (ctx->pc != 0x2B7A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A84u; }
        if (ctx->pc != 0x2B7A84u) { return; }
    }
    ctx->pc = 0x2B7A84u;
label_2b7a84:
    // 0x2b7a84: 0xc052330  jal         func_148CC0
label_2b7a88:
    if (ctx->pc == 0x2B7A88u) {
        ctx->pc = 0x2B7A8Cu;
        goto label_2b7a8c;
    }
    ctx->pc = 0x2B7A84u;
    SET_GPR_U32(ctx, 31, 0x2B7A8Cu);
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A8Cu; }
        if (ctx->pc != 0x2B7A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A8Cu; }
        if (ctx->pc != 0x2B7A8Cu) { return; }
    }
    ctx->pc = 0x2B7A8Cu;
label_2b7a8c:
    // 0x2b7a8c: 0x8e856754  lw          $a1, 0x6754($s4)
    ctx->pc = 0x2b7a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 26452)));
label_2b7a90:
    // 0x2b7a90: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2b7a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2b7a94:
    // 0x2b7a94: 0x2484f130  addiu       $a0, $a0, -0xED0
    ctx->pc = 0x2b7a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963504));
label_2b7a98:
    // 0x2b7a98: 0xc05224c  jal         func_148930
label_2b7a9c:
    if (ctx->pc == 0x2B7A9Cu) {
        ctx->pc = 0x2B7A9Cu;
            // 0x2b7a9c: 0x27a601cc  addiu       $a2, $sp, 0x1CC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
        ctx->pc = 0x2B7AA0u;
        goto label_2b7aa0;
    }
    ctx->pc = 0x2B7A98u;
    SET_GPR_U32(ctx, 31, 0x2B7AA0u);
    ctx->pc = 0x2B7A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7A98u;
            // 0x2b7a9c: 0x27a601cc  addiu       $a2, $sp, 0x1CC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7AA0u; }
        if (ctx->pc != 0x2B7AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7AA0u; }
        if (ctx->pc != 0x2B7AA0u) { return; }
    }
    ctx->pc = 0x2B7AA0u;
label_2b7aa0:
    // 0x2b7aa0: 0x8e856750  lw          $a1, 0x6750($s4)
    ctx->pc = 0x2b7aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 26448)));
label_2b7aa4:
    // 0x2b7aa4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2b7aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2b7aa8:
    // 0x2b7aa8: 0x2484f150  addiu       $a0, $a0, -0xEB0
    ctx->pc = 0x2b7aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963536));
label_2b7aac:
    // 0x2b7aac: 0xc05224c  jal         func_148930
label_2b7ab0:
    if (ctx->pc == 0x2B7AB0u) {
        ctx->pc = 0x2B7AB0u;
            // 0x2b7ab0: 0x27a601cc  addiu       $a2, $sp, 0x1CC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
        ctx->pc = 0x2B7AB4u;
        goto label_2b7ab4;
    }
    ctx->pc = 0x2B7AACu;
    SET_GPR_U32(ctx, 31, 0x2B7AB4u);
    ctx->pc = 0x2B7AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7AACu;
            // 0x2b7ab0: 0x27a601cc  addiu       $a2, $sp, 0x1CC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7AB4u; }
        if (ctx->pc != 0x2B7AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7AB4u; }
        if (ctx->pc != 0x2B7AB4u) { return; }
    }
    ctx->pc = 0x2B7AB4u;
label_2b7ab4:
    // 0x2b7ab4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b7ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b7ab8:
    // 0x2b7ab8: 0x160201fe  bne         $s0, $v0, . + 4 + (0x1FE << 2)
label_2b7abc:
    if (ctx->pc == 0x2B7ABCu) {
        ctx->pc = 0x2B7AC0u;
        goto label_2b7ac0;
    }
    ctx->pc = 0x2B7AB8u;
    {
        const bool branch_taken_0x2b7ab8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b7ab8) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B7AC0u;
label_2b7ac0:
    // 0x2b7ac0: 0xae802420  sw          $zero, 0x2420($s4)
    ctx->pc = 0x2b7ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 9248), GPR_U32(ctx, 0));
label_2b7ac4:
    // 0x2b7ac4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b7ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b7ac8:
    // 0x2b7ac8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b7ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b7acc:
    // 0x2b7acc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b7accu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b7ad0:
    // 0x2b7ad0: 0xa022dc22  sb          $v0, -0x23DE($at)
    ctx->pc = 0x2b7ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294958114), (uint8_t)GPR_U32(ctx, 2));
label_2b7ad4:
    // 0x2b7ad4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b7ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b7ad8:
    // 0x2b7ad8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2b7ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2b7adc:
    // 0x2b7adc: 0x24a5f170  addiu       $a1, $a1, -0xE90
    ctx->pc = 0x2b7adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963568));
label_2b7ae0:
    // 0x2b7ae0: 0xc08e7cc  jal         func_239F30
label_2b7ae4:
    if (ctx->pc == 0x2B7AE4u) {
        ctx->pc = 0x2B7AE4u;
            // 0x2b7ae4: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2B7AE8u;
        goto label_2b7ae8;
    }
    ctx->pc = 0x2B7AE0u;
    SET_GPR_U32(ctx, 31, 0x2B7AE8u);
    ctx->pc = 0x2B7AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7AE0u;
            // 0x2b7ae4: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7AE8u; }
        if (ctx->pc != 0x2B7AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7AE8u; }
        if (ctx->pc != 0x2B7AE8u) { return; }
    }
    ctx->pc = 0x2B7AE8u;
label_2b7ae8:
    // 0x2b7ae8: 0x100001f2  b           . + 4 + (0x1F2 << 2)
label_2b7aec:
    if (ctx->pc == 0x2B7AECu) {
        ctx->pc = 0x2B7AF0u;
        goto label_2b7af0;
    }
    ctx->pc = 0x2B7AE8u;
    {
        const bool branch_taken_0x2b7ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7ae8) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B7AF0u;
label_2b7af0:
    // 0x2b7af0: 0x8e824658  lw          $v0, 0x4658($s4)
    ctx->pc = 0x2b7af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18008)));
label_2b7af4:
    // 0x2b7af4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b7af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b7af8:
    // 0x2b7af8: 0xc05239c  jal         func_148E70
label_2b7afc:
    if (ctx->pc == 0x2B7AFCu) {
        ctx->pc = 0x2B7AFCu;
            // 0x2b7afc: 0xae824658  sw          $v0, 0x4658($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 18008), GPR_U32(ctx, 2));
        ctx->pc = 0x2B7B00u;
        goto label_2b7b00;
    }
    ctx->pc = 0x2B7AF8u;
    SET_GPR_U32(ctx, 31, 0x2B7B00u);
    ctx->pc = 0x2B7AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7AF8u;
            // 0x2b7afc: 0xae824658  sw          $v0, 0x4658($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 18008), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7B00u; }
        if (ctx->pc != 0x2B7B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7B00u; }
        if (ctx->pc != 0x2B7B00u) { return; }
    }
    ctx->pc = 0x2B7B00u;
label_2b7b00:
    // 0x2b7b00: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
label_2b7b04:
    if (ctx->pc == 0x2B7B04u) {
        ctx->pc = 0x2B7B08u;
        goto label_2b7b08;
    }
    ctx->pc = 0x2B7B00u;
    {
        const bool branch_taken_0x2b7b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7b00) {
            ctx->pc = 0x2B7C7Cu;
            goto label_2b7c7c;
        }
    }
    ctx->pc = 0x2B7B08u;
label_2b7b08:
    // 0x2b7b08: 0x86826758  lh          $v0, 0x6758($s4)
    ctx->pc = 0x2b7b08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 26456)));
label_2b7b0c:
    // 0x2b7b0c: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
label_2b7b10:
    if (ctx->pc == 0x2B7B10u) {
        ctx->pc = 0x2B7B14u;
        goto label_2b7b14;
    }
    ctx->pc = 0x2B7B0Cu;
    {
        const bool branch_taken_0x2b7b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7b0c) {
            ctx->pc = 0x2B7C7Cu;
            goto label_2b7c7c;
        }
    }
    ctx->pc = 0x2B7B14u;
label_2b7b14:
    // 0x2b7b14: 0x8e826754  lw          $v0, 0x6754($s4)
    ctx->pc = 0x2b7b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 26452)));
label_2b7b18:
    // 0x2b7b18: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2b7b1c:
    if (ctx->pc == 0x2B7B1Cu) {
        ctx->pc = 0x2B7B1Cu;
            // 0x2b7b1c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2B7B20u;
        goto label_2b7b20;
    }
    ctx->pc = 0x2B7B18u;
    {
        const bool branch_taken_0x2b7b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7B18u;
            // 0x2b7b1c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7b18) {
            ctx->pc = 0x2B7B60u;
            goto label_2b7b60;
        }
    }
    ctx->pc = 0x2B7B20u;
label_2b7b20:
    // 0x2b7b20: 0xc04e640  jal         func_139900
label_2b7b24:
    if (ctx->pc == 0x2B7B24u) {
        ctx->pc = 0x2B7B28u;
        goto label_2b7b28;
    }
    ctx->pc = 0x2B7B20u;
    SET_GPR_U32(ctx, 31, 0x2B7B28u);
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7B28u; }
        if (ctx->pc != 0x2B7B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7B28u; }
        if (ctx->pc != 0x2B7B28u) { return; }
    }
    ctx->pc = 0x2B7B28u;
label_2b7b28:
    // 0x2b7b28: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2b7b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2b7b2c:
    // 0x2b7b2c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2b7b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2b7b30:
    // 0x2b7b30: 0x8c23cec8  lw          $v1, -0x3138($at)
    ctx->pc = 0x2b7b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954696)));
label_2b7b34:
    // 0x2b7b34: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x2b7b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_2b7b38:
    // 0x2b7b38: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2b7b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2b7b3c:
    // 0x2b7b3c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2b7b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2b7b40:
    // 0x2b7b40: 0x8c22cec0  lw          $v0, -0x3140($at)
    ctx->pc = 0x2b7b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
label_2b7b44:
    // 0x2b7b44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b7b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b7b48:
    // 0x2b7b48: 0xc04e79c  jal         func_139E70
label_2b7b4c:
    if (ctx->pc == 0x2B7B4Cu) {
        ctx->pc = 0x2B7B4Cu;
            // 0x2b7b4c: 0x2445e000  addiu       $a1, $v0, -0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
        ctx->pc = 0x2B7B50u;
        goto label_2b7b50;
    }
    ctx->pc = 0x2B7B48u;
    SET_GPR_U32(ctx, 31, 0x2B7B50u);
    ctx->pc = 0x2B7B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7B48u;
            // 0x2b7b4c: 0x2445e000  addiu       $a1, $v0, -0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7B50u; }
        if (ctx->pc != 0x2B7B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7B50u; }
        if (ctx->pc != 0x2B7B50u) { return; }
    }
    ctx->pc = 0x2B7B50u;
label_2b7b50:
    // 0x2b7b50: 0x8e856754  lw          $a1, 0x6754($s4)
    ctx->pc = 0x2b7b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 26452)));
label_2b7b54:
    // 0x2b7b54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b7b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7b58:
    // 0x2b7b58: 0xc094288  jal         func_250A20
label_2b7b5c:
    if (ctx->pc == 0x2B7B5Cu) {
        ctx->pc = 0x2B7B5Cu;
            // 0x2b7b5c: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2B7B60u;
        goto label_2b7b60;
    }
    ctx->pc = 0x2B7B58u;
    SET_GPR_U32(ctx, 31, 0x2B7B60u);
    ctx->pc = 0x2B7B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7B58u;
            // 0x2b7b5c: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250A20u;
    if (runtime->hasFunction(0x250A20u)) {
        auto targetFn = runtime->lookupFunction(0x250A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7B60u; }
        if (ctx->pc != 0x2B7B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__FiPUiP9mgCMemory_0x250a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7B60u; }
        if (ctx->pc != 0x2B7B60u) { return; }
    }
    ctx->pc = 0x2B7B60u;
label_2b7b60:
    // 0x2b7b60: 0x8e850020  lw          $a1, 0x20($s4)
    ctx->pc = 0x2b7b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_2b7b64:
    // 0x2b7b64: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2b7b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_2b7b68:
    // 0x2b7b68: 0xc04b950  jal         func_12E540
label_2b7b6c:
    if (ctx->pc == 0x2B7B6Cu) {
        ctx->pc = 0x2B7B6Cu;
            // 0x2b7b6c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->pc = 0x2B7B70u;
        goto label_2b7b70;
    }
    ctx->pc = 0x2B7B68u;
    SET_GPR_U32(ctx, 31, 0x2B7B70u);
    ctx->pc = 0x2B7B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7B68u;
            // 0x2b7b6c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7B70u; }
        if (ctx->pc != 0x2B7B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7B70u; }
        if (ctx->pc != 0x2B7B70u) { return; }
    }
    ctx->pc = 0x2B7B70u;
label_2b7b70:
    // 0x2b7b70: 0x8e9956c0  lw          $t9, 0x56C0($s4)
    ctx->pc = 0x2b7b70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 22208)));
label_2b7b74:
    // 0x2b7b74: 0x268456c0  addiu       $a0, $s4, 0x56C0
    ctx->pc = 0x2b7b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 22208));
label_2b7b78:
    // 0x2b7b78: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x2b7b78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_2b7b7c:
    // 0x2b7b7c: 0x320f809  jalr        $t9
label_2b7b80:
    if (ctx->pc == 0x2B7B80u) {
        ctx->pc = 0x2B7B80u;
            // 0x2b7b80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B7B84u;
        goto label_2b7b84;
    }
    ctx->pc = 0x2B7B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B7B84u);
        ctx->pc = 0x2B7B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7B7Cu;
            // 0x2b7b80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B7B84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B7B84u; }
            if (ctx->pc != 0x2B7B84u) { return; }
        }
        }
    }
    ctx->pc = 0x2B7B84u;
label_2b7b84:
    // 0x2b7b84: 0x8e9956c0  lw          $t9, 0x56C0($s4)
    ctx->pc = 0x2b7b84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 22208)));
label_2b7b88:
    // 0x2b7b88: 0x268766f0  addiu       $a3, $s4, 0x66F0
    ctx->pc = 0x2b7b88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 26352));
label_2b7b8c:
    // 0x2b7b8c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2b7b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_2b7b90:
    // 0x2b7b90: 0x8e856750  lw          $a1, 0x6750($s4)
    ctx->pc = 0x2b7b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 26448)));
label_2b7b94:
    // 0x2b7b94: 0x8e8a0020  lw          $t2, 0x20($s4)
    ctx->pc = 0x2b7b94u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_2b7b98:
    // 0x2b7b98: 0x268456c0  addiu       $a0, $s4, 0x56C0
    ctx->pc = 0x2b7b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 22208));
label_2b7b9c:
    // 0x2b7b9c: 0x24c6f188  addiu       $a2, $a2, -0xE78
    ctx->pc = 0x2b7b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963592));
label_2b7ba0:
    // 0x2b7ba0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2b7ba0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b7ba4:
    // 0x2b7ba4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2b7ba4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b7ba8:
    // 0x2b7ba8: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x2b7ba8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_2b7bac:
    // 0x2b7bac: 0x320f809  jalr        $t9
label_2b7bb0:
    if (ctx->pc == 0x2B7BB0u) {
        ctx->pc = 0x2B7BB0u;
            // 0x2b7bb0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B7BB4u;
        goto label_2b7bb4;
    }
    ctx->pc = 0x2B7BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B7BB4u);
        ctx->pc = 0x2B7BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7BACu;
            // 0x2b7bb0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B7BB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B7BB4u; }
            if (ctx->pc != 0x2B7BB4u) { return; }
        }
        }
    }
    ctx->pc = 0x2B7BB4u;
label_2b7bb4:
    // 0x2b7bb4: 0x8e9956c0  lw          $t9, 0x56C0($s4)
    ctx->pc = 0x2b7bb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 22208)));
label_2b7bb8:
    // 0x2b7bb8: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x2b7bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_2b7bbc:
    // 0x2b7bbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b7bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b7bc0:
    // 0x2b7bc0: 0x268456c0  addiu       $a0, $s4, 0x56C0
    ctx->pc = 0x2b7bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 22208));
label_2b7bc4:
    // 0x2b7bc4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b7bc4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2b7bc8:
    // 0x2b7bc8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2b7bc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2b7bcc:
    // 0x2b7bcc: 0x320f809  jalr        $t9
label_2b7bd0:
    if (ctx->pc == 0x2B7BD0u) {
        ctx->pc = 0x2B7BD0u;
            // 0x2b7bd0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2B7BD4u;
        goto label_2b7bd4;
    }
    ctx->pc = 0x2B7BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B7BD4u);
        ctx->pc = 0x2B7BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7BCCu;
            // 0x2b7bd0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B7BD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B7BD4u; }
            if (ctx->pc != 0x2B7BD4u) { return; }
        }
        }
    }
    ctx->pc = 0x2B7BD4u;
label_2b7bd4:
    // 0x2b7bd4: 0x8e994690  lw          $t9, 0x4690($s4)
    ctx->pc = 0x2b7bd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18064)));
label_2b7bd8:
    // 0x2b7bd8: 0x26844690  addiu       $a0, $s4, 0x4690
    ctx->pc = 0x2b7bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 18064));
label_2b7bdc:
    // 0x2b7bdc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2b7bdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2b7be0:
    // 0x2b7be0: 0x320f809  jalr        $t9
label_2b7be4:
    if (ctx->pc == 0x2B7BE4u) {
        ctx->pc = 0x2B7BE4u;
            // 0x2b7be4: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x2B7BE8u;
        goto label_2b7be8;
    }
    ctx->pc = 0x2B7BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B7BE8u);
        ctx->pc = 0x2B7BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7BE0u;
            // 0x2b7be4: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B7BE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B7BE8u; }
            if (ctx->pc != 0x2B7BE8u) { return; }
        }
        }
    }
    ctx->pc = 0x2B7BE8u;
label_2b7be8:
    // 0x2b7be8: 0x3c024123  lui         $v0, 0x4123
    ctx->pc = 0x2b7be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16675 << 16));
label_2b7bec:
    // 0x2b7bec: 0x268456c0  addiu       $a0, $s4, 0x56C0
    ctx->pc = 0x2b7becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 22208));
label_2b7bf0:
    // 0x2b7bf0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2b7bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_2b7bf4:
    // 0x2b7bf4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2b7bf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2b7bf8:
    // 0x2b7bf8: 0xc7a500d4  lwc1        $f5, 0xD4($sp)
    ctx->pc = 0x2b7bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2b7bfc:
    // 0x2b7bfc: 0x3c024059  lui         $v0, 0x4059
    ctx->pc = 0x2b7bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16473 << 16));
label_2b7c00:
    // 0x2b7c00: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2b7c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_2b7c04:
    // 0x2b7c04: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2b7c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2b7c08:
    // 0x2b7c08: 0xc7a300d0  lwc1        $f3, 0xD0($sp)
    ctx->pc = 0x2b7c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2b7c0c:
    // 0x2b7c0c: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x2b7c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
label_2b7c10:
    // 0x2b7c10: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x2b7c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b7c14:
    // 0x2b7c14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b7c18:
    // 0x2b7c18: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x2b7c18u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
label_2b7c1c:
    // 0x2b7c1c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x2b7c1cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_2b7c20:
    // 0x2b7c20: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2b7c20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b7c24:
    // 0x2b7c24: 0xe7a400d4  swc1        $f4, 0xD4($sp)
    ctx->pc = 0x2b7c24u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_2b7c28:
    // 0x2b7c28: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x2b7c28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2b7c2c:
    // 0x2b7c2c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2b7c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_2b7c30:
    // 0x2b7c30: 0x8e9956c0  lw          $t9, 0x56C0($s4)
    ctx->pc = 0x2b7c30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 22208)));
label_2b7c34:
    // 0x2b7c34: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2b7c34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2b7c38:
    // 0x2b7c38: 0x320f809  jalr        $t9
label_2b7c3c:
    if (ctx->pc == 0x2B7C3Cu) {
        ctx->pc = 0x2B7C3Cu;
            // 0x2b7c3c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x2B7C40u;
        goto label_2b7c40;
    }
    ctx->pc = 0x2B7C38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B7C40u);
        ctx->pc = 0x2B7C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7C38u;
            // 0x2b7c3c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B7C40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B7C40u; }
            if (ctx->pc != 0x2B7C40u) { return; }
        }
        }
    }
    ctx->pc = 0x2B7C40u;
label_2b7c40:
    // 0x2b7c40: 0x8e9956c0  lw          $t9, 0x56C0($s4)
    ctx->pc = 0x2b7c40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 22208)));
label_2b7c44:
    // 0x2b7c44: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b7c44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b7c48:
    // 0x2b7c48: 0x268456c0  addiu       $a0, $s4, 0x56C0
    ctx->pc = 0x2b7c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 22208));
label_2b7c4c:
    // 0x2b7c4c: 0x24a5f198  addiu       $a1, $a1, -0xE68
    ctx->pc = 0x2b7c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963608));
label_2b7c50:
    // 0x2b7c50: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2b7c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2b7c54:
    // 0x2b7c54: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x2b7c54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_2b7c58:
    // 0x2b7c58: 0x320f809  jalr        $t9
label_2b7c5c:
    if (ctx->pc == 0x2B7C5Cu) {
        ctx->pc = 0x2B7C5Cu;
            // 0x2b7c5c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B7C60u;
        goto label_2b7c60;
    }
    ctx->pc = 0x2B7C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B7C60u);
        ctx->pc = 0x2B7C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7C58u;
            // 0x2b7c5c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B7C60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B7C60u; }
            if (ctx->pc != 0x2B7C60u) { return; }
        }
        }
    }
    ctx->pc = 0x2B7C60u;
label_2b7c60:
    // 0x2b7c60: 0x8e9956c0  lw          $t9, 0x56C0($s4)
    ctx->pc = 0x2b7c60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 22208)));
label_2b7c64:
    // 0x2b7c64: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x2b7c64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_2b7c68:
    // 0x2b7c68: 0x320f809  jalr        $t9
label_2b7c6c:
    if (ctx->pc == 0x2B7C6Cu) {
        ctx->pc = 0x2B7C6Cu;
            // 0x2b7c6c: 0x268456c0  addiu       $a0, $s4, 0x56C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 22208));
        ctx->pc = 0x2B7C70u;
        goto label_2b7c70;
    }
    ctx->pc = 0x2B7C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B7C70u);
        ctx->pc = 0x2B7C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7C68u;
            // 0x2b7c6c: 0x268456c0  addiu       $a0, $s4, 0x56C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 22208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B7C70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B7C70u; }
            if (ctx->pc != 0x2B7C70u) { return; }
        }
        }
    }
    ctx->pc = 0x2B7C70u;
label_2b7c70:
    // 0x2b7c70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b7c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b7c74:
    // 0x2b7c74: 0xa6826758  sh          $v0, 0x6758($s4)
    ctx->pc = 0x2b7c74u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 26456), (uint16_t)GPR_U32(ctx, 2));
label_2b7c78:
    // 0x2b7c78: 0xa680675a  sh          $zero, 0x675A($s4)
    ctx->pc = 0x2b7c78u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 26458), (uint16_t)GPR_U32(ctx, 0));
label_2b7c7c:
    // 0x2b7c7c: 0x86826758  lh          $v0, 0x6758($s4)
    ctx->pc = 0x2b7c7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 26456)));
label_2b7c80:
    // 0x2b7c80: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_2b7c84:
    if (ctx->pc == 0x2B7C84u) {
        ctx->pc = 0x2B7C88u;
        goto label_2b7c88;
    }
    ctx->pc = 0x2B7C80u;
    {
        const bool branch_taken_0x2b7c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7c80) {
            ctx->pc = 0x2B7D14u;
            goto label_2b7d14;
        }
    }
    ctx->pc = 0x2B7C88u;
label_2b7c88:
    // 0x2b7c88: 0x8682675a  lh          $v0, 0x675A($s4)
    ctx->pc = 0x2b7c88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 26458)));
label_2b7c8c:
    // 0x2b7c8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b7c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b7c90:
    // 0x2b7c90: 0xa682675a  sh          $v0, 0x675A($s4)
    ctx->pc = 0x2b7c90u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 26458), (uint16_t)GPR_U32(ctx, 2));
label_2b7c94:
    // 0x2b7c94: 0x8682675a  lh          $v0, 0x675A($s4)
    ctx->pc = 0x2b7c94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 26458)));
label_2b7c98:
    // 0x2b7c98: 0x28420014  slti        $v0, $v0, 0x14
    ctx->pc = 0x2b7c98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
label_2b7c9c:
    // 0x2b7c9c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2b7ca0:
    if (ctx->pc == 0x2B7CA0u) {
        ctx->pc = 0x2B7CA4u;
        goto label_2b7ca4;
    }
    ctx->pc = 0x2B7C9Cu;
    {
        const bool branch_taken_0x2b7c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7c9c) {
            ctx->pc = 0x2B7CB4u;
            goto label_2b7cb4;
        }
    }
    ctx->pc = 0x2B7CA4u;
label_2b7ca4:
    // 0x2b7ca4: 0x8e9956c0  lw          $t9, 0x56C0($s4)
    ctx->pc = 0x2b7ca4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 22208)));
label_2b7ca8:
    // 0x2b7ca8: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x2b7ca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_2b7cac:
    // 0x2b7cac: 0x320f809  jalr        $t9
label_2b7cb0:
    if (ctx->pc == 0x2B7CB0u) {
        ctx->pc = 0x2B7CB0u;
            // 0x2b7cb0: 0x268456c0  addiu       $a0, $s4, 0x56C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 22208));
        ctx->pc = 0x2B7CB4u;
        goto label_2b7cb4;
    }
    ctx->pc = 0x2B7CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B7CB4u);
        ctx->pc = 0x2B7CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7CACu;
            // 0x2b7cb0: 0x268456c0  addiu       $a0, $s4, 0x56C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 22208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B7CB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B7CB4u; }
            if (ctx->pc != 0x2B7CB4u) { return; }
        }
        }
    }
    ctx->pc = 0x2B7CB4u;
label_2b7cb4:
    // 0x2b7cb4: 0x8683675a  lh          $v1, 0x675A($s4)
    ctx->pc = 0x2b7cb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 26458)));
label_2b7cb8:
    // 0x2b7cb8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2b7cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2b7cbc:
    // 0x2b7cbc: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
label_2b7cc0:
    if (ctx->pc == 0x2B7CC0u) {
        ctx->pc = 0x2B7CC4u;
        goto label_2b7cc4;
    }
    ctx->pc = 0x2B7CBCu;
    {
        const bool branch_taken_0x2b7cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b7cbc) {
            ctx->pc = 0x2B7D14u;
            goto label_2b7d14;
        }
    }
    ctx->pc = 0x2B7CC4u;
label_2b7cc4:
    // 0x2b7cc4: 0xa6806762  sh          $zero, 0x6762($s4)
    ctx->pc = 0x2b7cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 26466), (uint16_t)GPR_U32(ctx, 0));
label_2b7cc8:
    // 0x2b7cc8: 0x8e830144  lw          $v1, 0x144($s4)
    ctx->pc = 0x2b7cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b7ccc:
    // 0x2b7ccc: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x2b7cccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_2b7cd0:
    // 0x2b7cd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b7cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b7cd4:
    // 0x2b7cd4: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x2b7cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
label_2b7cd8:
    // 0x2b7cd8: 0x8f839bf0  lw          $v1, -0x6410($gp)
    ctx->pc = 0x2b7cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941680)));
label_2b7cdc:
    // 0x2b7cdc: 0x8e820144  lw          $v0, 0x144($s4)
    ctx->pc = 0x2b7cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b7ce0:
    // 0x2b7ce0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b7ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2b7ce4:
    // 0x2b7ce4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2b7ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2b7ce8:
    // 0x2b7ce8: 0x84634618  lh          $v1, 0x4618($v1)
    ctx->pc = 0x2b7ce8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 17944)));
label_2b7cec:
    // 0x2b7cec: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x2b7cecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
label_2b7cf0:
    // 0x2b7cf0: 0x8e820144  lw          $v0, 0x144($s4)
    ctx->pc = 0x2b7cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b7cf4:
    // 0x2b7cf4: 0x84420008  lh          $v0, 0x8($v0)
    ctx->pc = 0x2b7cf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_2b7cf8:
    // 0x2b7cf8: 0xae82465c  sw          $v0, 0x465C($s4)
    ctx->pc = 0x2b7cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 18012), GPR_U32(ctx, 2));
label_2b7cfc:
    // 0x2b7cfc: 0x8e820144  lw          $v0, 0x144($s4)
    ctx->pc = 0x2b7cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b7d00:
    // 0x2b7d00: 0x84450008  lh          $a1, 0x8($v0)
    ctx->pc = 0x2b7d00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_2b7d04:
    // 0x2b7d04: 0xc0ad6f4  jal         func_2B5BD0
label_2b7d08:
    if (ctx->pc == 0x2B7D08u) {
        ctx->pc = 0x2B7D08u;
            // 0x2b7d08: 0x84440004  lh          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x2B7D0Cu;
        goto label_2b7d0c;
    }
    ctx->pc = 0x2B7D04u;
    SET_GPR_U32(ctx, 31, 0x2B7D0Cu);
    ctx->pc = 0x2B7D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7D04u;
            // 0x2b7d08: 0x84440004  lh          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5BD0u;
    if (runtime->hasFunction(0x2B5BD0u)) {
        auto targetFn = runtime->lookupFunction(0x2B5BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7D0Cu; }
        if (ctx->pc != 0x2B7D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterProgressTableNo__Fii_0x2b5bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7D0Cu; }
        if (ctx->pc != 0x2B7D0Cu) { return; }
    }
    ctx->pc = 0x2B7D0Cu;
label_2b7d0c:
    // 0x2b7d0c: 0x8e830144  lw          $v1, 0x144($s4)
    ctx->pc = 0x2b7d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b7d10:
    // 0x2b7d10: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2b7d10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
label_2b7d14:
    // 0x2b7d14: 0x8e824658  lw          $v0, 0x4658($s4)
    ctx->pc = 0x2b7d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18008)));
label_2b7d18:
    // 0x2b7d18: 0x28410078  slti        $at, $v0, 0x78
    ctx->pc = 0x2b7d18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)120) ? 1 : 0);
label_2b7d1c:
    // 0x2b7d1c: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_2b7d20:
    if (ctx->pc == 0x2B7D20u) {
        ctx->pc = 0x2B7D24u;
        goto label_2b7d24;
    }
    ctx->pc = 0x2B7D1Cu;
    {
        const bool branch_taken_0x2b7d1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7d1c) {
            ctx->pc = 0x2B7D3Cu;
            goto label_2b7d3c;
        }
    }
    ctx->pc = 0x2B7D24u;
label_2b7d24:
    // 0x2b7d24: 0x86826758  lh          $v0, 0x6758($s4)
    ctx->pc = 0x2b7d24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 26456)));
label_2b7d28:
    // 0x2b7d28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b7d2c:
    if (ctx->pc == 0x2B7D2Cu) {
        ctx->pc = 0x2B7D30u;
        goto label_2b7d30;
    }
    ctx->pc = 0x2B7D28u;
    {
        const bool branch_taken_0x2b7d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7d28) {
            ctx->pc = 0x2B7D3Cu;
            goto label_2b7d3c;
        }
    }
    ctx->pc = 0x2B7D30u;
label_2b7d30:
    // 0x2b7d30: 0x8e824678  lw          $v0, 0x4678($s4)
    ctx->pc = 0x2b7d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18040)));
label_2b7d34:
    // 0x2b7d34: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2b7d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2b7d38:
    // 0x2b7d38: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x2b7d38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_2b7d3c:
    // 0x2b7d3c: 0x8e9956c0  lw          $t9, 0x56C0($s4)
    ctx->pc = 0x2b7d3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 22208)));
label_2b7d40:
    // 0x2b7d40: 0x268456c0  addiu       $a0, $s4, 0x56C0
    ctx->pc = 0x2b7d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 22208));
label_2b7d44:
    // 0x2b7d44: 0x8f390108  lw          $t9, 0x108($t9)
    ctx->pc = 0x2b7d44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 264)));
label_2b7d48:
    // 0x2b7d48: 0x320f809  jalr        $t9
label_2b7d4c:
    if (ctx->pc == 0x2B7D4Cu) {
        ctx->pc = 0x2B7D4Cu;
            // 0x2b7d4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B7D50u;
        goto label_2b7d50;
    }
    ctx->pc = 0x2B7D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B7D50u);
        ctx->pc = 0x2B7D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7D48u;
            // 0x2b7d4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B7D50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B7D50u; }
            if (ctx->pc != 0x2B7D50u) { return; }
        }
        }
    }
    ctx->pc = 0x2B7D50u;
label_2b7d50:
    // 0x2b7d50: 0x8e824658  lw          $v0, 0x4658($s4)
    ctx->pc = 0x2b7d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18008)));
label_2b7d54:
    // 0x2b7d54: 0x28410439  slti        $at, $v0, 0x439
    ctx->pc = 0x2b7d54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1081) ? 1 : 0);
label_2b7d58:
    // 0x2b7d58: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_2b7d5c:
    if (ctx->pc == 0x2B7D5Cu) {
        ctx->pc = 0x2B7D60u;
        goto label_2b7d60;
    }
    ctx->pc = 0x2B7D58u;
    {
        const bool branch_taken_0x2b7d58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7d58) {
            ctx->pc = 0x2B7D88u;
            goto label_2b7d88;
        }
    }
    ctx->pc = 0x2B7D60u;
label_2b7d60:
    // 0x2b7d60: 0x86826758  lh          $v0, 0x6758($s4)
    ctx->pc = 0x2b7d60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 26456)));
label_2b7d64:
    // 0x2b7d64: 0x10400153  beqz        $v0, . + 4 + (0x153 << 2)
label_2b7d68:
    if (ctx->pc == 0x2B7D68u) {
        ctx->pc = 0x2B7D6Cu;
        goto label_2b7d6c;
    }
    ctx->pc = 0x2B7D64u;
    {
        const bool branch_taken_0x2b7d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7d64) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B7D6Cu;
label_2b7d6c:
    // 0x2b7d6c: 0x8e9956c0  lw          $t9, 0x56C0($s4)
    ctx->pc = 0x2b7d6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 22208)));
label_2b7d70:
    // 0x2b7d70: 0x268456c0  addiu       $a0, $s4, 0x56C0
    ctx->pc = 0x2b7d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 22208));
label_2b7d74:
    // 0x2b7d74: 0x8f39010c  lw          $t9, 0x10C($t9)
    ctx->pc = 0x2b7d74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 268)));
label_2b7d78:
    // 0x2b7d78: 0x320f809  jalr        $t9
label_2b7d7c:
    if (ctx->pc == 0x2B7D7Cu) {
        ctx->pc = 0x2B7D7Cu;
            // 0x2b7d7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B7D80u;
        goto label_2b7d80;
    }
    ctx->pc = 0x2B7D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B7D80u);
        ctx->pc = 0x2B7D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7D78u;
            // 0x2b7d7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B7D80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B7D80u; }
            if (ctx->pc != 0x2B7D80u) { return; }
        }
        }
    }
    ctx->pc = 0x2B7D80u;
label_2b7d80:
    // 0x2b7d80: 0x1040014c  beqz        $v0, . + 4 + (0x14C << 2)
label_2b7d84:
    if (ctx->pc == 0x2B7D84u) {
        ctx->pc = 0x2B7D88u;
        goto label_2b7d88;
    }
    ctx->pc = 0x2B7D80u;
    {
        const bool branch_taken_0x2b7d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7d80) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B7D88u;
label_2b7d88:
    // 0x2b7d88: 0xa6806758  sh          $zero, 0x6758($s4)
    ctx->pc = 0x2b7d88u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 26456), (uint16_t)GPR_U32(ctx, 0));
label_2b7d8c:
    // 0x2b7d8c: 0x268456c0  addiu       $a0, $s4, 0x56C0
    ctx->pc = 0x2b7d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 22208));
label_2b7d90:
    // 0x2b7d90: 0x8e9956c0  lw          $t9, 0x56C0($s4)
    ctx->pc = 0x2b7d90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 22208)));
label_2b7d94:
    // 0x2b7d94: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x2b7d94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_2b7d98:
    // 0x2b7d98: 0x320f809  jalr        $t9
label_2b7d9c:
    if (ctx->pc == 0x2B7D9Cu) {
        ctx->pc = 0x2B7D9Cu;
            // 0x2b7d9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B7DA0u;
        goto label_2b7da0;
    }
    ctx->pc = 0x2B7D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B7DA0u);
        ctx->pc = 0x2B7D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7D98u;
            // 0x2b7d9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B7DA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B7DA0u; }
            if (ctx->pc != 0x2B7DA0u) { return; }
        }
        }
    }
    ctx->pc = 0x2B7DA0u;
label_2b7da0:
    // 0x2b7da0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2b7da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2b7da4:
    // 0x2b7da4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b7da4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b7da8:
    // 0x2b7da8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b7da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b7dac:
    // 0x2b7dac: 0xa6820002  sh          $v0, 0x2($s4)
    ctx->pc = 0x2b7dacu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
label_2b7db0:
    // 0x2b7db0: 0xc08e7cc  jal         func_239F30
label_2b7db4:
    if (ctx->pc == 0x2B7DB4u) {
        ctx->pc = 0x2B7DB4u;
            // 0x2b7db4: 0x24a5f1b0  addiu       $a1, $a1, -0xE50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963632));
        ctx->pc = 0x2B7DB8u;
        goto label_2b7db8;
    }
    ctx->pc = 0x2B7DB0u;
    SET_GPR_U32(ctx, 31, 0x2B7DB8u);
    ctx->pc = 0x2B7DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7DB0u;
            // 0x2b7db4: 0x24a5f1b0  addiu       $a1, $a1, -0xE50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7DB8u; }
        if (ctx->pc != 0x2B7DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7DB8u; }
        if (ctx->pc != 0x2B7DB8u) { return; }
    }
    ctx->pc = 0x2B7DB8u;
label_2b7db8:
    // 0x2b7db8: 0xc094274  jal         func_2509D0
label_2b7dbc:
    if (ctx->pc == 0x2B7DBCu) {
        ctx->pc = 0x2B7DBCu;
            // 0x2b7dbc: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x2B7DC0u;
        goto label_2b7dc0;
    }
    ctx->pc = 0x2B7DB8u;
    SET_GPR_U32(ctx, 31, 0x2B7DC0u);
    ctx->pc = 0x2B7DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7DB8u;
            // 0x2b7dbc: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7DC0u; }
        if (ctx->pc != 0x2B7DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7DC0u; }
        if (ctx->pc != 0x2B7DC0u) { return; }
    }
    ctx->pc = 0x2B7DC0u;
label_2b7dc0:
    // 0x2b7dc0: 0xc7809bf8  lwc1        $f0, -0x6408($gp)
    ctx->pc = 0x2b7dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b7dc4:
    // 0x2b7dc4: 0x27a201d0  addiu       $v0, $sp, 0x1D0
    ctx->pc = 0x2b7dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_2b7dc8:
    // 0x2b7dc8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2b7dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2b7dcc:
    // 0x2b7dcc: 0x8f829bf0  lw          $v0, -0x6410($gp)
    ctx->pc = 0x2b7dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941680)));
label_2b7dd0:
    // 0x2b7dd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b7dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2b7dd4:
    // 0x2b7dd4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2b7dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2b7dd8:
    // 0x2b7dd8: 0xc0ad6c4  jal         func_2B5B10
label_2b7ddc:
    if (ctx->pc == 0x2B7DDCu) {
        ctx->pc = 0x2B7DDCu;
            // 0x2b7ddc: 0x8c444618  lw          $a0, 0x4618($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17944)));
        ctx->pc = 0x2B7DE0u;
        goto label_2b7de0;
    }
    ctx->pc = 0x2B7DD8u;
    SET_GPR_U32(ctx, 31, 0x2B7DE0u);
    ctx->pc = 0x2B7DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7DD8u;
            // 0x2b7ddc: 0x8c444618  lw          $a0, 0x4618($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17944)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7DE0u; }
        if (ctx->pc != 0x2B7DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterName__Fi_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7DE0u; }
        if (ctx->pc != 0x2B7DE0u) { return; }
    }
    ctx->pc = 0x2B7DE0u;
label_2b7de0:
    // 0x2b7de0: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x2b7de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
label_2b7de4:
    // 0x2b7de4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b7de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b7de8:
    // 0x2b7de8: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x2b7de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_2b7dec:
    // 0x2b7dec: 0xc087720  jal         func_21DC80
label_2b7df0:
    if (ctx->pc == 0x2B7DF0u) {
        ctx->pc = 0x2B7DF0u;
            // 0x2b7df0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B7DF4u;
        goto label_2b7df4;
    }
    ctx->pc = 0x2B7DECu;
    SET_GPR_U32(ctx, 31, 0x2B7DF4u);
    ctx->pc = 0x2B7DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7DECu;
            // 0x2b7df0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7DF4u; }
        if (ctx->pc != 0x2B7DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7DF4u; }
        if (ctx->pc != 0x2B7DF4u) { return; }
    }
    ctx->pc = 0x2B7DF4u;
label_2b7df4:
    // 0x2b7df4: 0x1000012f  b           . + 4 + (0x12F << 2)
label_2b7df8:
    if (ctx->pc == 0x2B7DF8u) {
        ctx->pc = 0x2B7DFCu;
        goto label_2b7dfc;
    }
    ctx->pc = 0x2B7DF4u;
    {
        const bool branch_taken_0x2b7df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7df4) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B7DFCu;
label_2b7dfc:
    // 0x2b7dfc: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2b7dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_2b7e00:
    // 0x2b7e00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2b7e04:
    if (ctx->pc == 0x2B7E04u) {
        ctx->pc = 0x2B7E04u;
            // 0x2b7e04: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x2B7E08u;
        goto label_2b7e08;
    }
    ctx->pc = 0x2B7E00u;
    {
        const bool branch_taken_0x2b7e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7E00u;
            // 0x2b7e04: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e00) {
            ctx->pc = 0x2B7E18u;
            goto label_2b7e18;
        }
    }
    ctx->pc = 0x2B7E08u;
label_2b7e08:
    // 0x2b7e08: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x2b7e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_2b7e0c:
    // 0x2b7e0c: 0x10400129  beqz        $v0, . + 4 + (0x129 << 2)
label_2b7e10:
    if (ctx->pc == 0x2B7E10u) {
        ctx->pc = 0x2B7E14u;
        goto label_2b7e14;
    }
    ctx->pc = 0x2B7E0Cu;
    {
        const bool branch_taken_0x2b7e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7e0c) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B7E14u;
label_2b7e14:
    // 0x2b7e14: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2b7e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2b7e18:
    // 0x2b7e18: 0x1462006d  bne         $v1, $v0, . + 4 + (0x6D << 2)
label_2b7e1c:
    if (ctx->pc == 0x2B7E1Cu) {
        ctx->pc = 0x2B7E1Cu;
            // 0x2b7e1c: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x2B7E20u;
        goto label_2b7e20;
    }
    ctx->pc = 0x2B7E18u;
    {
        const bool branch_taken_0x2b7e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B7E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7E18u;
            // 0x2b7e1c: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e18) {
            ctx->pc = 0x2B7FD0u;
            goto label_2b7fd0;
        }
    }
    ctx->pc = 0x2B7E20u;
label_2b7e20:
    // 0x2b7e20: 0xae804668  sw          $zero, 0x4668($s4)
    ctx->pc = 0x2b7e20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 18024), GPR_U32(ctx, 0));
label_2b7e24:
    // 0x2b7e24: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2b7e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2b7e28:
    // 0x2b7e28: 0xc065af8  jal         func_196BE0
label_2b7e2c:
    if (ctx->pc == 0x2B7E2Cu) {
        ctx->pc = 0x2B7E2Cu;
            // 0x2b7e2c: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2B7E30u;
        goto label_2b7e30;
    }
    ctx->pc = 0x2B7E28u;
    SET_GPR_U32(ctx, 31, 0x2B7E30u);
    ctx->pc = 0x2B7E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7E28u;
            // 0x2b7e2c: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7E30u; }
        if (ctx->pc != 0x2B7E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7E30u; }
        if (ctx->pc != 0x2B7E30u) { return; }
    }
    ctx->pc = 0x2B7E30u;
label_2b7e30:
    // 0x2b7e30: 0xc067660  jal         func_19D980
label_2b7e34:
    if (ctx->pc == 0x2B7E34u) {
        ctx->pc = 0x2B7E34u;
            // 0x2b7e34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B7E38u;
        goto label_2b7e38;
    }
    ctx->pc = 0x2B7E30u;
    SET_GPR_U32(ctx, 31, 0x2B7E38u);
    ctx->pc = 0x2B7E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7E30u;
            // 0x2b7e34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D980u;
    if (runtime->hasFunction(0x19D980u)) {
        auto targetFn = runtime->lookupFunction(0x19D980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7E38u; }
        if (ctx->pc != 0x2B7E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceUsedDataPtr__16CUserDataManagerFv_0x19d980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7E38u; }
        if (ctx->pc != 0x2B7E38u) { return; }
    }
    ctx->pc = 0x2B7E38u;
label_2b7e38:
    // 0x2b7e38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b7e38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b7e3c:
    // 0x2b7e3c: 0x1200005f  beqz        $s0, . + 4 + (0x5F << 2)
label_2b7e40:
    if (ctx->pc == 0x2B7E40u) {
        ctx->pc = 0x2B7E40u;
            // 0x2b7e40: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2B7E44u;
        goto label_2b7e44;
    }
    ctx->pc = 0x2B7E3Cu;
    {
        const bool branch_taken_0x2b7e3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7E3Cu;
            // 0x2b7e40: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e3c) {
            ctx->pc = 0x2B7FBCu;
            goto label_2b7fbc;
        }
    }
    ctx->pc = 0x2B7E44u;
label_2b7e44:
    // 0x2b7e44: 0xc065c24  jal         func_197090
label_2b7e48:
    if (ctx->pc == 0x2B7E48u) {
        ctx->pc = 0x2B7E48u;
            // 0x2b7e48: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2B7E4Cu;
        goto label_2b7e4c;
    }
    ctx->pc = 0x2B7E44u;
    SET_GPR_U32(ctx, 31, 0x2B7E4Cu);
    ctx->pc = 0x2B7E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7E44u;
            // 0x2b7e48: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7E4Cu; }
        if (ctx->pc != 0x2B7E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7E4Cu; }
        if (ctx->pc != 0x2B7E4Cu) { return; }
    }
    ctx->pc = 0x2B7E4Cu;
label_2b7e4c:
    // 0x2b7e4c: 0xc065c30  jal         func_1970C0
label_2b7e50:
    if (ctx->pc == 0x2B7E50u) {
        ctx->pc = 0x2B7E50u;
            // 0x2b7e50: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2B7E54u;
        goto label_2b7e54;
    }
    ctx->pc = 0x2B7E4Cu;
    SET_GPR_U32(ctx, 31, 0x2B7E54u);
    ctx->pc = 0x2B7E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7E4Cu;
            // 0x2b7e50: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7E54u; }
        if (ctx->pc != 0x2B7E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7E54u; }
        if (ctx->pc != 0x2B7E54u) { return; }
    }
    ctx->pc = 0x2B7E54u;
label_2b7e54:
    // 0x2b7e54: 0x8e820138  lw          $v0, 0x138($s4)
    ctx->pc = 0x2b7e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
label_2b7e58:
    // 0x2b7e58: 0x2407017f  addiu       $a3, $zero, 0x17F
    ctx->pc = 0x2b7e58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 383));
label_2b7e5c:
    // 0x2b7e5c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2b7e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b7e60:
    // 0x2b7e60: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x2b7e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_2b7e64:
    // 0x2b7e64: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b7e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b7e68:
    // 0x2b7e68: 0xa7a700e2  sh          $a3, 0xE2($sp)
    ctx->pc = 0x2b7e68u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 226), (uint16_t)GPR_U32(ctx, 7));
label_2b7e6c:
    // 0x2b7e6c: 0xa7a600e0  sh          $a2, 0xE0($sp)
    ctx->pc = 0x2b7e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 6));
label_2b7e70:
    // 0x2b7e70: 0xa3a500e4  sb          $a1, 0xE4($sp)
    ctx->pc = 0x2b7e70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 228), (uint8_t)GPR_U32(ctx, 5));
label_2b7e74:
    // 0x2b7e74: 0x8e850144  lw          $a1, 0x144($s4)
    ctx->pc = 0x2b7e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b7e78:
    // 0x2b7e78: 0x80a50004  lb          $a1, 0x4($a1)
    ctx->pc = 0x2b7e78u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
label_2b7e7c:
    // 0x2b7e7c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b7e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b7e80:
    // 0x2b7e80: 0xa3a500f1  sb          $a1, 0xF1($sp)
    ctx->pc = 0x2b7e80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 241), (uint8_t)GPR_U32(ctx, 5));
label_2b7e84:
    // 0x2b7e84: 0x8e850144  lw          $a1, 0x144($s4)
    ctx->pc = 0x2b7e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b7e88:
    // 0x2b7e88: 0x84a50004  lh          $a1, 0x4($a1)
    ctx->pc = 0x2b7e88u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_2b7e8c:
    // 0x2b7e8c: 0x14a40003  bne         $a1, $a0, . + 4 + (0x3 << 2)
label_2b7e90:
    if (ctx->pc == 0x2B7E90u) {
        ctx->pc = 0x2B7E90u;
            // 0x2b7e90: 0x27a300f2  addiu       $v1, $sp, 0xF2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 242));
        ctx->pc = 0x2B7E94u;
        goto label_2b7e94;
    }
    ctx->pc = 0x2B7E8Cu;
    {
        const bool branch_taken_0x2b7e8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B7E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7E8Cu;
            // 0x2b7e90: 0x27a300f2  addiu       $v1, $sp, 0xF2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 242));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e8c) {
            ctx->pc = 0x2B7E9Cu;
            goto label_2b7e9c;
        }
    }
    ctx->pc = 0x2B7E94u;
label_2b7e94:
    // 0x2b7e94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b7e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b7e98:
    // 0x2b7e98: 0xae844668  sw          $a0, 0x4668($s4)
    ctx->pc = 0x2b7e98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 18024), GPR_U32(ctx, 4));
label_2b7e9c:
    // 0x2b7e9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b7e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7ea0:
    // 0x2b7ea0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b7ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7ea4:
    // 0x2b7ea4: 0x8e880144  lw          $t0, 0x144($s4)
    ctx->pc = 0x2b7ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b7ea8:
    // 0x2b7ea8: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x2b7ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2b7eac:
    // 0x2b7eac: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2b7eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2b7eb0:
    // 0x2b7eb0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2b7eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_2b7eb4:
    // 0x2b7eb4: 0x28870002  slti        $a3, $a0, 0x2
    ctx->pc = 0x2b7eb4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_2b7eb8:
    // 0x2b7eb8: 0x85080004  lh          $t0, 0x4($t0)
    ctx->pc = 0x2b7eb8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_2b7ebc:
    // 0x2b7ebc: 0x25080003  addiu       $t0, $t0, 0x3
    ctx->pc = 0x2b7ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_2b7ec0:
    // 0x2b7ec0: 0xa4c80000  sh          $t0, 0x0($a2)
    ctx->pc = 0x2b7ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 8));
label_2b7ec4:
    // 0x2b7ec4: 0x8e880144  lw          $t0, 0x144($s4)
    ctx->pc = 0x2b7ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b7ec8:
    // 0x2b7ec8: 0x85080004  lh          $t0, 0x4($t0)
    ctx->pc = 0x2b7ec8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_2b7ecc:
    // 0x2b7ecc: 0x25080003  addiu       $t0, $t0, 0x3
    ctx->pc = 0x2b7eccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_2b7ed0:
    // 0x2b7ed0: 0xa4c80002  sh          $t0, 0x2($a2)
    ctx->pc = 0x2b7ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 8));
label_2b7ed4:
    // 0x2b7ed4: 0x8e880144  lw          $t0, 0x144($s4)
    ctx->pc = 0x2b7ed4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b7ed8:
    // 0x2b7ed8: 0x85080004  lh          $t0, 0x4($t0)
    ctx->pc = 0x2b7ed8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_2b7edc:
    // 0x2b7edc: 0x25080003  addiu       $t0, $t0, 0x3
    ctx->pc = 0x2b7edcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_2b7ee0:
    // 0x2b7ee0: 0xa4c80004  sh          $t0, 0x4($a2)
    ctx->pc = 0x2b7ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 8));
label_2b7ee4:
    // 0x2b7ee4: 0x8e880144  lw          $t0, 0x144($s4)
    ctx->pc = 0x2b7ee4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b7ee8:
    // 0x2b7ee8: 0x85080004  lh          $t0, 0x4($t0)
    ctx->pc = 0x2b7ee8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_2b7eec:
    // 0x2b7eec: 0x25080003  addiu       $t0, $t0, 0x3
    ctx->pc = 0x2b7eecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_2b7ef0:
    // 0x2b7ef0: 0xa4c80006  sh          $t0, 0x6($a2)
    ctx->pc = 0x2b7ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 8));
label_2b7ef4:
    // 0x2b7ef4: 0x8e880144  lw          $t0, 0x144($s4)
    ctx->pc = 0x2b7ef4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b7ef8:
    // 0x2b7ef8: 0x85080004  lh          $t0, 0x4($t0)
    ctx->pc = 0x2b7ef8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_2b7efc:
    // 0x2b7efc: 0x25080003  addiu       $t0, $t0, 0x3
    ctx->pc = 0x2b7efcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_2b7f00:
    // 0x2b7f00: 0xa4c80008  sh          $t0, 0x8($a2)
    ctx->pc = 0x2b7f00u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 8));
label_2b7f04:
    // 0x2b7f04: 0x8e880144  lw          $t0, 0x144($s4)
    ctx->pc = 0x2b7f04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b7f08:
    // 0x2b7f08: 0x85080004  lh          $t0, 0x4($t0)
    ctx->pc = 0x2b7f08u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_2b7f0c:
    // 0x2b7f0c: 0x25080003  addiu       $t0, $t0, 0x3
    ctx->pc = 0x2b7f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_2b7f10:
    // 0x2b7f10: 0xa4c8000a  sh          $t0, 0xA($a2)
    ctx->pc = 0x2b7f10u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 8));
label_2b7f14:
    // 0x2b7f14: 0x8e880144  lw          $t0, 0x144($s4)
    ctx->pc = 0x2b7f14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b7f18:
    // 0x2b7f18: 0x85080004  lh          $t0, 0x4($t0)
    ctx->pc = 0x2b7f18u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_2b7f1c:
    // 0x2b7f1c: 0x25080003  addiu       $t0, $t0, 0x3
    ctx->pc = 0x2b7f1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_2b7f20:
    // 0x2b7f20: 0xa4c8000c  sh          $t0, 0xC($a2)
    ctx->pc = 0x2b7f20u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 8));
label_2b7f24:
    // 0x2b7f24: 0x8e880144  lw          $t0, 0x144($s4)
    ctx->pc = 0x2b7f24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b7f28:
    // 0x2b7f28: 0x85080004  lh          $t0, 0x4($t0)
    ctx->pc = 0x2b7f28u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_2b7f2c:
    // 0x2b7f2c: 0x25080003  addiu       $t0, $t0, 0x3
    ctx->pc = 0x2b7f2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_2b7f30:
    // 0x2b7f30: 0x14e0ffdc  bnez        $a3, . + 4 + (-0x24 << 2)
label_2b7f34:
    if (ctx->pc == 0x2B7F34u) {
        ctx->pc = 0x2B7F34u;
            // 0x2b7f34: 0xa4c8000e  sh          $t0, 0xE($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 8));
        ctx->pc = 0x2B7F38u;
        goto label_2b7f38;
    }
    ctx->pc = 0x2B7F30u;
    {
        const bool branch_taken_0x2b7f30 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7F30u;
            // 0x2b7f34: 0xa4c8000e  sh          $t0, 0xE($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7f30) {
            ctx->pc = 0x2B7EA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b7ea4;
        }
    }
    ctx->pc = 0x2B7F38u;
label_2b7f38:
    // 0x2b7f38: 0x2881000a  slti        $at, $a0, 0xA
    ctx->pc = 0x2b7f38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
label_2b7f3c:
    // 0x2b7f3c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_2b7f40:
    if (ctx->pc == 0x2B7F40u) {
        ctx->pc = 0x2B7F40u;
            // 0x2b7f40: 0x44040  sll         $t0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x2B7F44u;
        goto label_2b7f44;
    }
    ctx->pc = 0x2B7F3Cu;
    {
        const bool branch_taken_0x2b7f3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7F3Cu;
            // 0x2b7f40: 0x44040  sll         $t0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7f3c) {
            ctx->pc = 0x2B7F68u;
            goto label_2b7f68;
        }
    }
    ctx->pc = 0x2B7F44u;
label_2b7f44:
    // 0x2b7f44: 0x8e870144  lw          $a3, 0x144($s4)
    ctx->pc = 0x2b7f44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b7f48:
    // 0x2b7f48: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2b7f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2b7f4c:
    // 0x2b7f4c: 0x683021  addu        $a2, $v1, $t0
    ctx->pc = 0x2b7f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_2b7f50:
    // 0x2b7f50: 0x2885000a  slti        $a1, $a0, 0xA
    ctx->pc = 0x2b7f50u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
label_2b7f54:
    // 0x2b7f54: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x2b7f54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_2b7f58:
    // 0x2b7f58: 0x84e70004  lh          $a3, 0x4($a3)
    ctx->pc = 0x2b7f58u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
label_2b7f5c:
    // 0x2b7f5c: 0x24e70003  addiu       $a3, $a3, 0x3
    ctx->pc = 0x2b7f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
label_2b7f60:
    // 0x2b7f60: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
label_2b7f64:
    if (ctx->pc == 0x2B7F64u) {
        ctx->pc = 0x2B7F64u;
            // 0x2b7f64: 0xa4c70000  sh          $a3, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 7));
        ctx->pc = 0x2B7F68u;
        goto label_2b7f68;
    }
    ctx->pc = 0x2B7F60u;
    {
        const bool branch_taken_0x2b7f60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7F60u;
            // 0x2b7f64: 0xa4c70000  sh          $a3, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7f60) {
            ctx->pc = 0x2B7F44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b7f44;
        }
    }
    ctx->pc = 0x2B7F68u;
label_2b7f68:
    // 0x2b7f68: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x2b7f68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
label_2b7f6c:
    // 0x2b7f6c: 0x24a54b90  addiu       $a1, $a1, 0x4B90
    ctx->pc = 0x2b7f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19344));
label_2b7f70:
    // 0x2b7f70: 0x8e860144  lw          $a2, 0x144($s4)
    ctx->pc = 0x2b7f70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b7f74:
    // 0x2b7f74: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2b7f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2b7f78:
    // 0x2b7f78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b7f7c:
    // 0x2b7f7c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2b7f7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2b7f80:
    // 0x2b7f80: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2b7f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2b7f84:
    // 0x2b7f84: 0x84c60004  lh          $a2, 0x4($a2)
    ctx->pc = 0x2b7f84u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_2b7f88:
    // 0x2b7f88: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2b7f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2b7f8c:
    // 0x2b7f8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b7f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b7f90:
    // 0x2b7f90: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x2b7f90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2b7f94:
    // 0x2b7f94: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x2b7f94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_2b7f98:
    // 0x2b7f98: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2b7f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2b7f9c:
    // 0x2b7f9c: 0xc06666c  jal         func_1999B0
label_2b7fa0:
    if (ctx->pc == 0x2B7FA0u) {
        ctx->pc = 0x2B7FA0u;
            // 0x2b7fa0: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2B7FA4u;
        goto label_2b7fa4;
    }
    ctx->pc = 0x2B7F9Cu;
    SET_GPR_U32(ctx, 31, 0x2B7FA4u);
    ctx->pc = 0x2B7FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7F9Cu;
            // 0x2b7fa0: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7FA4u; }
        if (ctx->pc != 0x2B7FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7FA4u; }
        if (ctx->pc != 0x2B7FA4u) { return; }
    }
    ctx->pc = 0x2B7FA4u;
label_2b7fa4:
    // 0x2b7fa4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b7fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b7fa8:
    // 0x2b7fa8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b7fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b7fac:
    // 0x2b7fac: 0xc08e7cc  jal         func_239F30
label_2b7fb0:
    if (ctx->pc == 0x2B7FB0u) {
        ctx->pc = 0x2B7FB0u;
            // 0x2b7fb0: 0x24a5f1d0  addiu       $a1, $a1, -0xE30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963664));
        ctx->pc = 0x2B7FB4u;
        goto label_2b7fb4;
    }
    ctx->pc = 0x2B7FACu;
    SET_GPR_U32(ctx, 31, 0x2B7FB4u);
    ctx->pc = 0x2B7FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7FACu;
            // 0x2b7fb0: 0x24a5f1d0  addiu       $a1, $a1, -0xE30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7FB4u; }
        if (ctx->pc != 0x2B7FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7FB4u; }
        if (ctx->pc != 0x2B7FB4u) { return; }
    }
    ctx->pc = 0x2B7FB4u;
label_2b7fb4:
    // 0x2b7fb4: 0x100000bf  b           . + 4 + (0xBF << 2)
label_2b7fb8:
    if (ctx->pc == 0x2B7FB8u) {
        ctx->pc = 0x2B7FBCu;
        goto label_2b7fbc;
    }
    ctx->pc = 0x2B7FB4u;
    {
        const bool branch_taken_0x2b7fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7fb4) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B7FBCu;
label_2b7fbc:
    // 0x2b7fbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b7fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b7fc0:
    // 0x2b7fc0: 0xc08e7cc  jal         func_239F30
label_2b7fc4:
    if (ctx->pc == 0x2B7FC4u) {
        ctx->pc = 0x2B7FC4u;
            // 0x2b7fc4: 0x24a5f1f0  addiu       $a1, $a1, -0xE10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963696));
        ctx->pc = 0x2B7FC8u;
        goto label_2b7fc8;
    }
    ctx->pc = 0x2B7FC0u;
    SET_GPR_U32(ctx, 31, 0x2B7FC8u);
    ctx->pc = 0x2B7FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7FC0u;
            // 0x2b7fc4: 0x24a5f1f0  addiu       $a1, $a1, -0xE10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7FC8u; }
        if (ctx->pc != 0x2B7FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7FC8u; }
        if (ctx->pc != 0x2B7FC8u) { return; }
    }
    ctx->pc = 0x2B7FC8u;
label_2b7fc8:
    // 0x2b7fc8: 0x100000ba  b           . + 4 + (0xBA << 2)
label_2b7fcc:
    if (ctx->pc == 0x2B7FCCu) {
        ctx->pc = 0x2B7FD0u;
        goto label_2b7fd0;
    }
    ctx->pc = 0x2B7FC8u;
    {
        const bool branch_taken_0x2b7fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7fc8) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B7FD0u;
label_2b7fd0:
    // 0x2b7fd0: 0x14620038  bne         $v1, $v0, . + 4 + (0x38 << 2)
label_2b7fd4:
    if (ctx->pc == 0x2B7FD4u) {
        ctx->pc = 0x2B7FD4u;
            // 0x2b7fd4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x2B7FD8u;
        goto label_2b7fd8;
    }
    ctx->pc = 0x2B7FD0u;
    {
        const bool branch_taken_0x2b7fd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B7FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7FD0u;
            // 0x2b7fd4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7fd0) {
            ctx->pc = 0x2B80B4u;
            goto label_2b80b4;
        }
    }
    ctx->pc = 0x2B7FD8u;
label_2b7fd8:
    // 0x2b7fd8: 0x8e824668  lw          $v0, 0x4668($s4)
    ctx->pc = 0x2b7fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18024)));
label_2b7fdc:
    // 0x2b7fdc: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_2b7fe0:
    if (ctx->pc == 0x2B7FE0u) {
        ctx->pc = 0x2B7FE0u;
            // 0x2b7fe0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2B7FE4u;
        goto label_2b7fe4;
    }
    ctx->pc = 0x2B7FDCu;
    {
        const bool branch_taken_0x2b7fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7FDCu;
            // 0x2b7fe0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7fdc) {
            ctx->pc = 0x2B80A0u;
            goto label_2b80a0;
        }
    }
    ctx->pc = 0x2B7FE4u;
label_2b7fe4:
    // 0x2b7fe4: 0x8e830138  lw          $v1, 0x138($s4)
    ctx->pc = 0x2b7fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
label_2b7fe8:
    // 0x2b7fe8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2b7fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_2b7fec:
    // 0x2b7fec: 0x24424ba0  addiu       $v0, $v0, 0x4BA0
    ctx->pc = 0x2b7fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19360));
label_2b7ff0:
    // 0x2b7ff0: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b7ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b7ff4:
    // 0x2b7ff4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2b7ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2b7ff8:
    // 0x2b7ff8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b7ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b7ffc:
    // 0x2b7ffc: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x2b7ffcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2b8000:
    // 0x2b8000: 0xc0677fc  jal         func_19DFF0
label_2b8004:
    if (ctx->pc == 0x2B8004u) {
        ctx->pc = 0x2B8004u;
            // 0x2b8004: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B8008u;
        goto label_2b8008;
    }
    ctx->pc = 0x2B8000u;
    SET_GPR_U32(ctx, 31, 0x2B8008u);
    ctx->pc = 0x2B8004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8000u;
            // 0x2b8004: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DFF0u;
    if (runtime->hasFunction(0x19DFF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8008u; }
        if (ctx->pc != 0x2B8008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItem__16CUserDataManagerFii_0x19dff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8008u; }
        if (ctx->pc != 0x2B8008u) { return; }
    }
    ctx->pc = 0x2B8008u;
label_2b8008:
    // 0x2b8008: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b8008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b800c:
    // 0x2b800c: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x2b800cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2b8010:
    // 0x2b8010: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_2b8014:
    if (ctx->pc == 0x2B8014u) {
        ctx->pc = 0x2B8014u;
            // 0x2b8014: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2B8018u;
        goto label_2b8018;
    }
    ctx->pc = 0x2B8010u;
    {
        const bool branch_taken_0x2b8010 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8010u;
            // 0x2b8014: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8010) {
            ctx->pc = 0x2B8080u;
            goto label_2b8080;
        }
    }
    ctx->pc = 0x2B8018u;
label_2b8018:
    // 0x2b8018: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b8018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b801c:
    // 0x2b801c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b801cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b8020:
    // 0x2b8020: 0xc08e7cc  jal         func_239F30
label_2b8024:
    if (ctx->pc == 0x2B8024u) {
        ctx->pc = 0x2B8024u;
            // 0x2b8024: 0x24a5f208  addiu       $a1, $a1, -0xDF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963720));
        ctx->pc = 0x2B8028u;
        goto label_2b8028;
    }
    ctx->pc = 0x2B8020u;
    SET_GPR_U32(ctx, 31, 0x2B8028u);
    ctx->pc = 0x2B8024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8020u;
            // 0x2b8024: 0x24a5f208  addiu       $a1, $a1, -0xDF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8028u; }
        if (ctx->pc != 0x2B8028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8028u; }
        if (ctx->pc != 0x2B8028u) { return; }
    }
    ctx->pc = 0x2B8028u;
label_2b8028:
    // 0x2b8028: 0xc7809bfc  lwc1        $f0, -0x6404($gp)
    ctx->pc = 0x2b8028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b802c:
    // 0x2b802c: 0x27a301d4  addiu       $v1, $sp, 0x1D4
    ctx->pc = 0x2b802cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
label_2b8030:
    // 0x2b8030: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2b8030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_2b8034:
    // 0x2b8034: 0x24424ba0  addiu       $v0, $v0, 0x4BA0
    ctx->pc = 0x2b8034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19360));
label_2b8038:
    // 0x2b8038: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2b8038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2b803c:
    // 0x2b803c: 0x8e830138  lw          $v1, 0x138($s4)
    ctx->pc = 0x2b803cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
label_2b8040:
    // 0x2b8040: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2b8040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2b8044:
    // 0x2b8044: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b8044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b8048:
    // 0x2b8048: 0xc065810  jal         func_196040
label_2b804c:
    if (ctx->pc == 0x2B804Cu) {
        ctx->pc = 0x2B804Cu;
            // 0x2b804c: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x2B8050u;
        goto label_2b8050;
    }
    ctx->pc = 0x2B8048u;
    SET_GPR_U32(ctx, 31, 0x2B8050u);
    ctx->pc = 0x2B804Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8048u;
            // 0x2b804c: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8050u; }
        if (ctx->pc != 0x2B8050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8050u; }
        if (ctx->pc != 0x2B8050u) { return; }
    }
    ctx->pc = 0x2B8050u;
label_2b8050:
    // 0x2b8050: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b8050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b8054:
    // 0x2b8054: 0xafa201d4  sw          $v0, 0x1D4($sp)
    ctx->pc = 0x2b8054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
label_2b8058:
    // 0x2b8058: 0x8c24ca58  lw          $a0, -0x35A8($at)
    ctx->pc = 0x2b8058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
label_2b805c:
    // 0x2b805c: 0x27a501d4  addiu       $a1, $sp, 0x1D4
    ctx->pc = 0x2b805cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
label_2b8060:
    // 0x2b8060: 0xc087720  jal         func_21DC80
label_2b8064:
    if (ctx->pc == 0x2B8064u) {
        ctx->pc = 0x2B8064u;
            // 0x2b8064: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B8068u;
        goto label_2b8068;
    }
    ctx->pc = 0x2B8060u;
    SET_GPR_U32(ctx, 31, 0x2B8068u);
    ctx->pc = 0x2B8064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8060u;
            // 0x2b8064: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8068u; }
        if (ctx->pc != 0x2B8068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8068u; }
        if (ctx->pc != 0x2B8068u) { return; }
    }
    ctx->pc = 0x2B8068u;
label_2b8068:
    // 0x2b8068: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b8068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b806c:
    // 0x2b806c: 0x8c24ca58  lw          $a0, -0x35A8($at)
    ctx->pc = 0x2b806cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
label_2b8070:
    // 0x2b8070: 0xc0877b8  jal         func_21DEE0
label_2b8074:
    if (ctx->pc == 0x2B8074u) {
        ctx->pc = 0x2B8074u;
            // 0x2b8074: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8078u;
        goto label_2b8078;
    }
    ctx->pc = 0x2B8070u;
    SET_GPR_U32(ctx, 31, 0x2B8078u);
    ctx->pc = 0x2B8074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8070u;
            // 0x2b8074: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8078u; }
        if (ctx->pc != 0x2B8078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8078u; }
        if (ctx->pc != 0x2B8078u) { return; }
    }
    ctx->pc = 0x2B8078u;
label_2b8078:
    // 0x2b8078: 0x10000006  b           . + 4 + (0x6 << 2)
label_2b807c:
    if (ctx->pc == 0x2B807Cu) {
        ctx->pc = 0x2B807Cu;
            // 0x2b807c: 0x86820002  lh          $v0, 0x2($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
        ctx->pc = 0x2B8080u;
        goto label_2b8080;
    }
    ctx->pc = 0x2B8078u;
    {
        const bool branch_taken_0x2b8078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B807Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8078u;
            // 0x2b807c: 0x86820002  lh          $v0, 0x2($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8078) {
            ctx->pc = 0x2B8094u;
            goto label_2b8094;
        }
    }
    ctx->pc = 0x2B8080u;
label_2b8080:
    // 0x2b8080: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b8080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b8084:
    // 0x2b8084: 0xc08e7cc  jal         func_239F30
label_2b8088:
    if (ctx->pc == 0x2B8088u) {
        ctx->pc = 0x2B8088u;
            // 0x2b8088: 0x24a5f220  addiu       $a1, $a1, -0xDE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963744));
        ctx->pc = 0x2B808Cu;
        goto label_2b808c;
    }
    ctx->pc = 0x2B8084u;
    SET_GPR_U32(ctx, 31, 0x2B808Cu);
    ctx->pc = 0x2B8088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8084u;
            // 0x2b8088: 0x24a5f220  addiu       $a1, $a1, -0xDE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B808Cu; }
        if (ctx->pc != 0x2B808Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B808Cu; }
        if (ctx->pc != 0x2B808Cu) { return; }
    }
    ctx->pc = 0x2B808Cu;
label_2b808c:
    // 0x2b808c: 0x241201f4  addiu       $s2, $zero, 0x1F4
    ctx->pc = 0x2b808cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_2b8090:
    // 0x2b8090: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x2b8090u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_2b8094:
    // 0x2b8094: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b8094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b8098:
    // 0x2b8098: 0x10000086  b           . + 4 + (0x86 << 2)
label_2b809c:
    if (ctx->pc == 0x2B809Cu) {
        ctx->pc = 0x2B809Cu;
            // 0x2b809c: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2B80A0u;
        goto label_2b80a0;
    }
    ctx->pc = 0x2B8098u;
    {
        const bool branch_taken_0x2b8098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B809Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8098u;
            // 0x2b809c: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8098) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B80A0u;
label_2b80a0:
    // 0x2b80a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b80a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b80a4:
    // 0x2b80a4: 0xc08e7cc  jal         func_239F30
label_2b80a8:
    if (ctx->pc == 0x2B80A8u) {
        ctx->pc = 0x2B80A8u;
            // 0x2b80a8: 0x24a5f220  addiu       $a1, $a1, -0xDE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963744));
        ctx->pc = 0x2B80ACu;
        goto label_2b80ac;
    }
    ctx->pc = 0x2B80A4u;
    SET_GPR_U32(ctx, 31, 0x2B80ACu);
    ctx->pc = 0x2B80A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B80A4u;
            // 0x2b80a8: 0x24a5f220  addiu       $a1, $a1, -0xDE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B80ACu; }
        if (ctx->pc != 0x2B80ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B80ACu; }
        if (ctx->pc != 0x2B80ACu) { return; }
    }
    ctx->pc = 0x2B80ACu;
label_2b80ac:
    // 0x2b80ac: 0x10000081  b           . + 4 + (0x81 << 2)
label_2b80b0:
    if (ctx->pc == 0x2B80B0u) {
        ctx->pc = 0x2B80B0u;
            // 0x2b80b0: 0x241201f4  addiu       $s2, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->pc = 0x2B80B4u;
        goto label_2b80b4;
    }
    ctx->pc = 0x2B80ACu;
    {
        const bool branch_taken_0x2b80ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B80B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B80ACu;
            // 0x2b80b0: 0x241201f4  addiu       $s2, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b80ac) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B80B4u;
label_2b80b4:
    // 0x2b80b4: 0x1462007f  bne         $v1, $v0, . + 4 + (0x7F << 2)
label_2b80b8:
    if (ctx->pc == 0x2B80B8u) {
        ctx->pc = 0x2B80BCu;
        goto label_2b80bc;
    }
    ctx->pc = 0x2B80B4u;
    {
        const bool branch_taken_0x2b80b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b80b4) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B80BCu;
label_2b80bc:
    // 0x2b80bc: 0x1000007d  b           . + 4 + (0x7D << 2)
label_2b80c0:
    if (ctx->pc == 0x2B80C0u) {
        ctx->pc = 0x2B80C0u;
            // 0x2b80c0: 0x241201f4  addiu       $s2, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->pc = 0x2B80C4u;
        goto label_2b80c4;
    }
    ctx->pc = 0x2B80BCu;
    {
        const bool branch_taken_0x2b80bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B80C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B80BCu;
            // 0x2b80c0: 0x241201f4  addiu       $s2, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b80bc) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B80C4u;
label_2b80c4:
    // 0x2b80c4: 0x8e820144  lw          $v0, 0x144($s4)
    ctx->pc = 0x2b80c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b80c8:
    // 0x2b80c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b80c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b80cc:
    // 0x2b80cc: 0x84460004  lh          $a2, 0x4($v0)
    ctx->pc = 0x2b80ccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_2b80d0:
    // 0x2b80d0: 0xc0875b4  jal         func_21D6D0
label_2b80d4:
    if (ctx->pc == 0x2B80D4u) {
        ctx->pc = 0x2B80D4u;
            // 0x2b80d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B80D8u;
        goto label_2b80d8;
    }
    ctx->pc = 0x2B80D0u;
    SET_GPR_U32(ctx, 31, 0x2B80D8u);
    ctx->pc = 0x2B80D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B80D0u;
            // 0x2b80d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6D0u;
    if (runtime->hasFunction(0x21D6D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B80D8u; }
        if (ctx->pc != 0x2B80D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMsgCursor2__7CDC2MesFiii_0x21d6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B80D8u; }
        if (ctx->pc != 0x2B80D8u) { return; }
    }
    ctx->pc = 0x2B80D8u;
label_2b80d8:
    // 0x2b80d8: 0x8e850144  lw          $a1, 0x144($s4)
    ctx->pc = 0x2b80d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b80dc:
    // 0x2b80dc: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x2b80dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_2b80e0:
    // 0x2b80e0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2b80e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2b80e4:
    // 0x2b80e4: 0x24844642  addiu       $a0, $a0, 0x4642
    ctx->pc = 0x2b80e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17986));
label_2b80e8:
    // 0x2b80e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b80e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b80ec:
    // 0x2b80ec: 0x84a60006  lh          $a2, 0x6($a1)
    ctx->pc = 0x2b80ecu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_2b80f0:
    // 0x2b80f0: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x2b80f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2b80f4:
    // 0x2b80f4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2b80f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2b80f8:
    // 0x2b80f8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x2b80f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2b80fc:
    // 0x2b80fc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2b80fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2b8100:
    // 0x2b8100: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b8100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2b8104:
    // 0x2b8104: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x2b8104u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2b8108:
    // 0x2b8108: 0x1202001c  beq         $s0, $v0, . + 4 + (0x1C << 2)
label_2b810c:
    if (ctx->pc == 0x2B810Cu) {
        ctx->pc = 0x2B810Cu;
            // 0x2b810c: 0xae83465c  sw          $v1, 0x465C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 18012), GPR_U32(ctx, 3));
        ctx->pc = 0x2B8110u;
        goto label_2b8110;
    }
    ctx->pc = 0x2B8108u;
    {
        const bool branch_taken_0x2b8108 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B810Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8108u;
            // 0x2b810c: 0xae83465c  sw          $v1, 0x465C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 18012), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8108) {
            ctx->pc = 0x2B817Cu;
            goto label_2b817c;
        }
    }
    ctx->pc = 0x2B8110u;
label_2b8110:
    // 0x2b8110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b8110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b8114:
    // 0x2b8114: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_2b8118:
    if (ctx->pc == 0x2B8118u) {
        ctx->pc = 0x2B811Cu;
        goto label_2b811c;
    }
    ctx->pc = 0x2B8114u;
    {
        const bool branch_taken_0x2b8114 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b8114) {
            ctx->pc = 0x2B8124u;
            goto label_2b8124;
        }
    }
    ctx->pc = 0x2B811Cu;
label_2b811c:
    // 0x2b811c: 0x10000065  b           . + 4 + (0x65 << 2)
label_2b8120:
    if (ctx->pc == 0x2B8120u) {
        ctx->pc = 0x2B8124u;
        goto label_2b8124;
    }
    ctx->pc = 0x2B811Cu;
    {
        const bool branch_taken_0x2b811c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b811c) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B8124u;
label_2b8124:
    // 0x2b8124: 0xc065af8  jal         func_196BE0
label_2b8128:
    if (ctx->pc == 0x2B8128u) {
        ctx->pc = 0x2B812Cu;
        goto label_2b812c;
    }
    ctx->pc = 0x2B8124u;
    SET_GPR_U32(ctx, 31, 0x2B812Cu);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B812Cu; }
        if (ctx->pc != 0x2B812Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B812Cu; }
        if (ctx->pc != 0x2B812Cu) { return; }
    }
    ctx->pc = 0x2B812Cu;
label_2b812c:
    // 0x2b812c: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x2b812cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_2b8130:
    // 0x2b8130: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2b8130u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2b8134:
    // 0x2b8134: 0x84234d96  lh          $v1, 0x4D96($at)
    ctx->pc = 0x2b8134u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
label_2b8138:
    // 0x2b8138: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b8138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b813c:
    // 0x2b813c: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_2b8140:
    if (ctx->pc == 0x2B8140u) {
        ctx->pc = 0x2B8144u;
        goto label_2b8144;
    }
    ctx->pc = 0x2B813Cu;
    {
        const bool branch_taken_0x2b813c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b813c) {
            ctx->pc = 0x2B8174u;
            goto label_2b8174;
        }
    }
    ctx->pc = 0x2B8144u;
label_2b8144:
    // 0x2b8144: 0xc065af8  jal         func_196BE0
label_2b8148:
    if (ctx->pc == 0x2B8148u) {
        ctx->pc = 0x2B814Cu;
        goto label_2b814c;
    }
    ctx->pc = 0x2B8144u;
    SET_GPR_U32(ctx, 31, 0x2B814Cu);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B814Cu; }
        if (ctx->pc != 0x2B814Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B814Cu; }
        if (ctx->pc != 0x2B814Cu) { return; }
    }
    ctx->pc = 0x2B814Cu;
label_2b814c:
    // 0x2b814c: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x2b814cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_2b8150:
    // 0x2b8150: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2b8150u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2b8154:
    // 0x2b8154: 0x84234d98  lh          $v1, 0x4D98($at)
    ctx->pc = 0x2b8154u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19864)));
label_2b8158:
    // 0x2b8158: 0x8e82465c  lw          $v0, 0x465C($s4)
    ctx->pc = 0x2b8158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18012)));
label_2b815c:
    // 0x2b815c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_2b8160:
    if (ctx->pc == 0x2B8160u) {
        ctx->pc = 0x2B8160u;
            // 0x2b8160: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B8164u;
        goto label_2b8164;
    }
    ctx->pc = 0x2B815Cu;
    {
        const bool branch_taken_0x2b815c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B8160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B815Cu;
            // 0x2b8160: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b815c) {
            ctx->pc = 0x2B8174u;
            goto label_2b8174;
        }
    }
    ctx->pc = 0x2B8164u;
label_2b8164:
    // 0x2b8164: 0xc094274  jal         func_2509D0
label_2b8168:
    if (ctx->pc == 0x2B8168u) {
        ctx->pc = 0x2B816Cu;
        goto label_2b816c;
    }
    ctx->pc = 0x2B8164u;
    SET_GPR_U32(ctx, 31, 0x2B816Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B816Cu; }
        if (ctx->pc != 0x2B816Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B816Cu; }
        if (ctx->pc != 0x2B816Cu) { return; }
    }
    ctx->pc = 0x2B816Cu;
label_2b816c:
    // 0x2b816c: 0x10000051  b           . + 4 + (0x51 << 2)
label_2b8170:
    if (ctx->pc == 0x2B8170u) {
        ctx->pc = 0x2B8174u;
        goto label_2b8174;
    }
    ctx->pc = 0x2B816Cu;
    {
        const bool branch_taken_0x2b816c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b816c) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B8174u;
label_2b8174:
    // 0x2b8174: 0x1000004f  b           . + 4 + (0x4F << 2)
label_2b8178:
    if (ctx->pc == 0x2B8178u) {
        ctx->pc = 0x2B8178u;
            // 0x2b8178: 0x2412000a  addiu       $s2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2B817Cu;
        goto label_2b817c;
    }
    ctx->pc = 0x2B8174u;
    {
        const bool branch_taken_0x2b8174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8174u;
            // 0x2b8178: 0x2412000a  addiu       $s2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8174) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B817Cu;
label_2b817c:
    // 0x2b817c: 0x1000004d  b           . + 4 + (0x4D << 2)
label_2b8180:
    if (ctx->pc == 0x2B8180u) {
        ctx->pc = 0x2B8180u;
            // 0x2b8180: 0x24120258  addiu       $s2, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->pc = 0x2B8184u;
        goto label_2b8184;
    }
    ctx->pc = 0x2B817Cu;
    {
        const bool branch_taken_0x2b817c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B817Cu;
            // 0x2b8180: 0x24120258  addiu       $s2, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b817c) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B8184u;
label_2b8184:
    // 0x2b8184: 0x8e830144  lw          $v1, 0x144($s4)
    ctx->pc = 0x2b8184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b8188:
    // 0x2b8188: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x2b8188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
label_2b818c:
    // 0x2b818c: 0x24a54640  addiu       $a1, $a1, 0x4640
    ctx->pc = 0x2b818cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17984));
label_2b8190:
    // 0x2b8190: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b8190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b8194:
    // 0x2b8194: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b8194u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8198:
    // 0x2b8198: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2b8198u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b819c:
    // 0x2b819c: 0x84660006  lh          $a2, 0x6($v1)
    ctx->pc = 0x2b819cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_2b81a0:
    // 0x2b81a0: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x2b81a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_2b81a4:
    // 0x2b81a4: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x2b81a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2b81a8:
    // 0x2b81a8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2b81a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2b81ac:
    // 0x2b81ac: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2b81acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2b81b0:
    // 0x2b81b0: 0xa44021  addu        $t0, $a1, $a0
    ctx->pc = 0x2b81b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2b81b4:
    // 0x2b81b4: 0x10000009  b           . + 4 + (0x9 << 2)
label_2b81b8:
    if (ctx->pc == 0x2B81B8u) {
        ctx->pc = 0x2B81B8u;
            // 0x2b81b8: 0x24660001  addiu       $a2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x2B81BCu;
        goto label_2b81bc;
    }
    ctx->pc = 0x2B81B4u;
    {
        const bool branch_taken_0x2b81b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B81B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B81B4u;
            // 0x2b81b8: 0x24660001  addiu       $a2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b81b4) {
            ctx->pc = 0x2B81DCu;
            goto label_2b81dc;
        }
    }
    ctx->pc = 0x2B81BCu;
label_2b81bc:
    // 0x2b81bc: 0x8e87465c  lw          $a3, 0x465C($s4)
    ctx->pc = 0x2b81bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18012)));
label_2b81c0:
    // 0x2b81c0: 0x84a50002  lh          $a1, 0x2($a1)
    ctx->pc = 0x2b81c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_2b81c4:
    // 0x2b81c4: 0x14e50003  bne         $a3, $a1, . + 4 + (0x3 << 2)
label_2b81c8:
    if (ctx->pc == 0x2B81C8u) {
        ctx->pc = 0x2B81CCu;
        goto label_2b81cc;
    }
    ctx->pc = 0x2B81C4u;
    {
        const bool branch_taken_0x2b81c4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x2b81c4) {
            ctx->pc = 0x2B81D4u;
            goto label_2b81d4;
        }
    }
    ctx->pc = 0x2B81CCu;
label_2b81cc:
    // 0x2b81cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_2b81d0:
    if (ctx->pc == 0x2B81D0u) {
        ctx->pc = 0x2B81D0u;
            // 0x2b81d0: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B81D4u;
        goto label_2b81d4;
    }
    ctx->pc = 0x2B81CCu;
    {
        const bool branch_taken_0x2b81cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B81D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B81CCu;
            // 0x2b81d0: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b81cc) {
            ctx->pc = 0x2B81ECu;
            goto label_2b81ec;
        }
    }
    ctx->pc = 0x2B81D4u;
label_2b81d4:
    // 0x2b81d4: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x2b81d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
label_2b81d8:
    // 0x2b81d8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2b81d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_2b81dc:
    // 0x2b81dc: 0x0  nop
    ctx->pc = 0x2b81dcu;
    // NOP
label_2b81e0:
    // 0x2b81e0: 0x126282a  slt         $a1, $t1, $a2
    ctx->pc = 0x2b81e0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_2b81e4:
    // 0x2b81e4: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
label_2b81e8:
    if (ctx->pc == 0x2B81E8u) {
        ctx->pc = 0x2B81E8u;
            // 0x2b81e8: 0x10a2821  addu        $a1, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->pc = 0x2B81ECu;
        goto label_2b81ec;
    }
    ctx->pc = 0x2B81E4u;
    {
        const bool branch_taken_0x2b81e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B81E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B81E4u;
            // 0x2b81e8: 0x10a2821  addu        $a1, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b81e4) {
            ctx->pc = 0x2B81BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b81bc;
        }
    }
    ctx->pc = 0x2B81ECu;
label_2b81ec:
    // 0x2b81ec: 0x0  nop
    ctx->pc = 0x2b81ecu;
    // NOP
label_2b81f0:
    // 0x2b81f0: 0x32a50020  andi        $a1, $s5, 0x20
    ctx->pc = 0x2b81f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_2b81f4:
    // 0x2b81f4: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_2b81f8:
    if (ctx->pc == 0x2B81F8u) {
        ctx->pc = 0x2B81F8u;
            // 0x2b81f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B81FCu;
        goto label_2b81fc;
    }
    ctx->pc = 0x2B81F4u;
    {
        const bool branch_taken_0x2b81f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B81F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B81F4u;
            // 0x2b81f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b81f4) {
            ctx->pc = 0x2B8208u;
            goto label_2b8208;
        }
    }
    ctx->pc = 0x2B81FCu;
label_2b81fc:
    // 0x2b81fc: 0x32a50080  andi        $a1, $s5, 0x80
    ctx->pc = 0x2b81fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
label_2b8200:
    // 0x2b8200: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_2b8204:
    if (ctx->pc == 0x2B8204u) {
        ctx->pc = 0x2B8204u;
            // 0x2b8204: 0x32a50010  andi        $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
        ctx->pc = 0x2B8208u;
        goto label_2b8208;
    }
    ctx->pc = 0x2B8200u;
    {
        const bool branch_taken_0x2b8200 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8200u;
            // 0x2b8204: 0x32a50010  andi        $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8200) {
            ctx->pc = 0x2B8210u;
            goto label_2b8210;
        }
    }
    ctx->pc = 0x2B8208u;
label_2b8208:
    // 0x2b8208: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b8208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b820c:
    // 0x2b820c: 0x32a50010  andi        $a1, $s5, 0x10
    ctx->pc = 0x2b820cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_2b8210:
    // 0x2b8210: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_2b8214:
    if (ctx->pc == 0x2B8214u) {
        ctx->pc = 0x2B8214u;
            // 0x2b8214: 0x32a50040  andi        $a1, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
        ctx->pc = 0x2B8218u;
        goto label_2b8218;
    }
    ctx->pc = 0x2B8210u;
    {
        const bool branch_taken_0x2b8210 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8210u;
            // 0x2b8214: 0x32a50040  andi        $a1, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8210) {
            ctx->pc = 0x2B8220u;
            goto label_2b8220;
        }
    }
    ctx->pc = 0x2B8218u;
label_2b8218:
    // 0x2b8218: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_2b821c:
    if (ctx->pc == 0x2B821Cu) {
        ctx->pc = 0x2B821Cu;
            // 0x2b821c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8220u;
        goto label_2b8220;
    }
    ctx->pc = 0x2B8218u;
    {
        const bool branch_taken_0x2b8218 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B821Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8218u;
            // 0x2b821c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8218) {
            ctx->pc = 0x2B8228u;
            goto label_2b8228;
        }
    }
    ctx->pc = 0x2B8220u;
label_2b8220:
    // 0x2b8220: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2b8220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b8224:
    // 0x2b8224: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b8224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b8228:
    // 0x2b8228: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2b8228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2b822c:
    // 0x2b822c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_2b8230:
    if (ctx->pc == 0x2B8230u) {
        ctx->pc = 0x2B8230u;
            // 0x2b8230: 0x62082a  slt         $at, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x2B8234u;
        goto label_2b8234;
    }
    ctx->pc = 0x2B822Cu;
    {
        const bool branch_taken_0x2b822c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2B8230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B822Cu;
            // 0x2b8230: 0x62082a  slt         $at, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b822c) {
            ctx->pc = 0x2B823Cu;
            goto label_2b823c;
        }
    }
    ctx->pc = 0x2B8234u;
label_2b8234:
    // 0x2b8234: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2b8234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b8238:
    // 0x2b8238: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2b8238u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2b823c:
    // 0x2b823c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_2b8240:
    if (ctx->pc == 0x2B8240u) {
        ctx->pc = 0x2B8244u;
        goto label_2b8244;
    }
    ctx->pc = 0x2B823Cu;
    {
        const bool branch_taken_0x2b823c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b823c) {
            ctx->pc = 0x2B8248u;
            goto label_2b8248;
        }
    }
    ctx->pc = 0x2B8244u;
label_2b8244:
    // 0x2b8244: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b8244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8248:
    // 0x2b8248: 0x1045000e  beq         $v0, $a1, . + 4 + (0xE << 2)
label_2b824c:
    if (ctx->pc == 0x2B824Cu) {
        ctx->pc = 0x2B824Cu;
            // 0x2b824c: 0x3c030035  lui         $v1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
        ctx->pc = 0x2B8250u;
        goto label_2b8250;
    }
    ctx->pc = 0x2B8248u;
    {
        const bool branch_taken_0x2b8248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B824Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8248u;
            // 0x2b824c: 0x3c030035  lui         $v1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8248) {
            ctx->pc = 0x2B8284u;
            goto label_2b8284;
        }
    }
    ctx->pc = 0x2B8250u;
label_2b8250:
    // 0x2b8250: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2b8250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2b8254:
    // 0x2b8254: 0x24634642  addiu       $v1, $v1, 0x4642
    ctx->pc = 0x2b8254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17986));
label_2b8258:
    // 0x2b8258: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2b8258u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b825c:
    // 0x2b825c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b825cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2b8260:
    // 0x2b8260: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b8260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b8264:
    // 0x2b8264: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b8264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8268:
    // 0x2b8268: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2b8268u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2b826c:
    // 0x2b826c: 0xae82465c  sw          $v0, 0x465C($s4)
    ctx->pc = 0x2b826cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 18012), GPR_U32(ctx, 2));
label_2b8270:
    // 0x2b8270: 0x8e82465c  lw          $v0, 0x465C($s4)
    ctx->pc = 0x2b8270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18012)));
label_2b8274:
    // 0x2b8274: 0xae824660  sw          $v0, 0x4660($s4)
    ctx->pc = 0x2b8274u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 18016), GPR_U32(ctx, 2));
label_2b8278:
    // 0x2b8278: 0xa6806760  sh          $zero, 0x6760($s4)
    ctx->pc = 0x2b8278u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 26464), (uint16_t)GPR_U32(ctx, 0));
label_2b827c:
    // 0x2b827c: 0xc094274  jal         func_2509D0
label_2b8280:
    if (ctx->pc == 0x2B8280u) {
        ctx->pc = 0x2B8280u;
            // 0x2b8280: 0xa6806762  sh          $zero, 0x6762($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 26466), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2B8284u;
        goto label_2b8284;
    }
    ctx->pc = 0x2B827Cu;
    SET_GPR_U32(ctx, 31, 0x2B8284u);
    ctx->pc = 0x2B8280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B827Cu;
            // 0x2b8280: 0xa6806762  sh          $zero, 0x6762($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 26466), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8284u; }
        if (ctx->pc != 0x2B8284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8284u; }
        if (ctx->pc != 0x2B8284u) { return; }
    }
    ctx->pc = 0x2B8284u;
label_2b8284:
    // 0x2b8284: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b8284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b8288:
    // 0x2b8288: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
label_2b828c:
    if (ctx->pc == 0x2B828Cu) {
        ctx->pc = 0x2B828Cu;
            // 0x2b828c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2B8290u;
        goto label_2b8290;
    }
    ctx->pc = 0x2B8288u;
    {
        const bool branch_taken_0x2b8288 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B828Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8288u;
            // 0x2b828c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8288) {
            ctx->pc = 0x2B82B0u;
            goto label_2b82b0;
        }
    }
    ctx->pc = 0x2B8290u;
label_2b8290:
    // 0x2b8290: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_2b8294:
    if (ctx->pc == 0x2B8294u) {
        ctx->pc = 0x2B8294u;
            // 0x2b8294: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B8298u;
        goto label_2b8298;
    }
    ctx->pc = 0x2B8290u;
    {
        const bool branch_taken_0x2b8290 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B8294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8290u;
            // 0x2b8294: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8290) {
            ctx->pc = 0x2B82A8u;
            goto label_2b82a8;
        }
    }
    ctx->pc = 0x2B8298u;
label_2b8298:
    // 0x2b8298: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_2b829c:
    if (ctx->pc == 0x2B829Cu) {
        ctx->pc = 0x2B82A0u;
        goto label_2b82a0;
    }
    ctx->pc = 0x2B8298u;
    {
        const bool branch_taken_0x2b8298 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b8298) {
            ctx->pc = 0x2B82A8u;
            goto label_2b82a8;
        }
    }
    ctx->pc = 0x2B82A0u;
label_2b82a0:
    // 0x2b82a0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2b82a4:
    if (ctx->pc == 0x2B82A4u) {
        ctx->pc = 0x2B82A8u;
        goto label_2b82a8;
    }
    ctx->pc = 0x2B82A0u;
    {
        const bool branch_taken_0x2b82a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b82a0) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B82A8u;
label_2b82a8:
    // 0x2b82a8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b82ac:
    if (ctx->pc == 0x2B82ACu) {
        ctx->pc = 0x2B82ACu;
            // 0x2b82ac: 0x24120005  addiu       $s2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B82B0u;
        goto label_2b82b0;
    }
    ctx->pc = 0x2B82A8u;
    {
        const bool branch_taken_0x2b82a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B82ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B82A8u;
            // 0x2b82ac: 0x24120005  addiu       $s2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b82a8) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B82B0u;
label_2b82b0:
    // 0x2b82b0: 0x241201f4  addiu       $s2, $zero, 0x1F4
    ctx->pc = 0x2b82b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_2b82b4:
    // 0x2b82b4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2b82b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2b82b8:
    // 0x2b82b8: 0x1242016c  beq         $s2, $v0, . + 4 + (0x16C << 2)
label_2b82bc:
    if (ctx->pc == 0x2B82BCu) {
        ctx->pc = 0x2B82BCu;
            // 0x2b82bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B82C0u;
        goto label_2b82c0;
    }
    ctx->pc = 0x2B82B8u;
    {
        const bool branch_taken_0x2b82b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B82BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B82B8u;
            // 0x2b82bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b82b8) {
            ctx->pc = 0x2B886Cu;
            goto label_2b886c;
        }
    }
    ctx->pc = 0x2B82C0u;
label_2b82c0:
    // 0x2b82c0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2b82c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b82c4:
    // 0x2b82c4: 0x12430158  beq         $s2, $v1, . + 4 + (0x158 << 2)
label_2b82c8:
    if (ctx->pc == 0x2B82C8u) {
        ctx->pc = 0x2B82C8u;
            // 0x2b82c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B82CCu;
        goto label_2b82cc;
    }
    ctx->pc = 0x2B82C4u;
    {
        const bool branch_taken_0x2b82c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B82C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B82C4u;
            // 0x2b82c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b82c4) {
            ctx->pc = 0x2B8828u;
            goto label_2b8828;
        }
    }
    ctx->pc = 0x2B82CCu;
label_2b82cc:
    // 0x2b82cc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2b82ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2b82d0:
    // 0x2b82d0: 0x1242014f  beq         $s2, $v0, . + 4 + (0x14F << 2)
label_2b82d4:
    if (ctx->pc == 0x2B82D4u) {
        ctx->pc = 0x2B82D4u;
            // 0x2b82d4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2B82D8u;
        goto label_2b82d8;
    }
    ctx->pc = 0x2B82D0u;
    {
        const bool branch_taken_0x2b82d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B82D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B82D0u;
            // 0x2b82d4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b82d0) {
            ctx->pc = 0x2B8810u;
            goto label_2b8810;
        }
    }
    ctx->pc = 0x2B82D8u;
label_2b82d8:
    // 0x2b82d8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2b82d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2b82dc:
    // 0x2b82dc: 0x1242010a  beq         $s2, $v0, . + 4 + (0x10A << 2)
label_2b82e0:
    if (ctx->pc == 0x2B82E0u) {
        ctx->pc = 0x2B82E0u;
            // 0x2b82e0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x2B82E4u;
        goto label_2b82e4;
    }
    ctx->pc = 0x2B82DCu;
    {
        const bool branch_taken_0x2b82dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B82E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B82DCu;
            // 0x2b82e0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b82dc) {
            ctx->pc = 0x2B8708u;
            goto label_2b8708;
        }
    }
    ctx->pc = 0x2B82E4u;
label_2b82e4:
    // 0x2b82e4: 0x124200b3  beq         $s2, $v0, . + 4 + (0xB3 << 2)
label_2b82e8:
    if (ctx->pc == 0x2B82E8u) {
        ctx->pc = 0x2B82E8u;
            // 0x2b82e8: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->pc = 0x2B82ECu;
        goto label_2b82ec;
    }
    ctx->pc = 0x2B82E4u;
    {
        const bool branch_taken_0x2b82e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B82E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B82E4u;
            // 0x2b82e8: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b82e4) {
            ctx->pc = 0x2B85B4u;
            goto label_2b85b4;
        }
    }
    ctx->pc = 0x2B82ECu;
label_2b82ec:
    // 0x2b82ec: 0x124200a6  beq         $s2, $v0, . + 4 + (0xA6 << 2)
label_2b82f0:
    if (ctx->pc == 0x2B82F0u) {
        ctx->pc = 0x2B82F0u;
            // 0x2b82f0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B82F4u;
        goto label_2b82f4;
    }
    ctx->pc = 0x2B82ECu;
    {
        const bool branch_taken_0x2b82ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B82F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B82ECu;
            // 0x2b82f0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b82ec) {
            ctx->pc = 0x2B8588u;
            goto label_2b8588;
        }
    }
    ctx->pc = 0x2B82F4u;
label_2b82f4:
    // 0x2b82f4: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x2b82f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
label_2b82f8:
    // 0x2b82f8: 0x12420013  beq         $s2, $v0, . + 4 + (0x13 << 2)
label_2b82fc:
    if (ctx->pc == 0x2B82FCu) {
        ctx->pc = 0x2B82FCu;
            // 0x2b82fc: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2B8300u;
        goto label_2b8300;
    }
    ctx->pc = 0x2B82F8u;
    {
        const bool branch_taken_0x2b82f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B82FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B82F8u;
            // 0x2b82fc: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b82f8) {
            ctx->pc = 0x2B8348u;
            goto label_2b8348;
        }
    }
    ctx->pc = 0x2B8300u;
label_2b8300:
    // 0x2b8300: 0x240201f4  addiu       $v0, $zero, 0x1F4
    ctx->pc = 0x2b8300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_2b8304:
    // 0x2b8304: 0x1242000a  beq         $s2, $v0, . + 4 + (0xA << 2)
label_2b8308:
    if (ctx->pc == 0x2B8308u) {
        ctx->pc = 0x2B8308u;
            // 0x2b8308: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2B830Cu;
        goto label_2b830c;
    }
    ctx->pc = 0x2B8304u;
    {
        const bool branch_taken_0x2b8304 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B8308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8304u;
            // 0x2b8308: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8304) {
            ctx->pc = 0x2B8330u;
            goto label_2b8330;
        }
    }
    ctx->pc = 0x2B830Cu;
label_2b830c:
    // 0x2b830c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2b830cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2b8310:
    // 0x2b8310: 0x12440003  beq         $s2, $a0, . + 4 + (0x3 << 2)
label_2b8314:
    if (ctx->pc == 0x2B8314u) {
        ctx->pc = 0x2B8318u;
        goto label_2b8318;
    }
    ctx->pc = 0x2B8310u;
    {
        const bool branch_taken_0x2b8310 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b8310) {
            ctx->pc = 0x2B8320u;
            goto label_2b8320;
        }
    }
    ctx->pc = 0x2B8318u;
label_2b8318:
    // 0x2b8318: 0x1000019b  b           . + 4 + (0x19B << 2)
label_2b831c:
    if (ctx->pc == 0x2B831Cu) {
        ctx->pc = 0x2B8320u;
        goto label_2b8320;
    }
    ctx->pc = 0x2B8318u;
    {
        const bool branch_taken_0x2b8318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8318) {
            ctx->pc = 0x2B8988u;
            goto label_2b8988;
        }
    }
    ctx->pc = 0x2B8320u;
label_2b8320:
    // 0x2b8320: 0xc094274  jal         func_2509D0
label_2b8324:
    if (ctx->pc == 0x2B8324u) {
        ctx->pc = 0x2B8328u;
        goto label_2b8328;
    }
    ctx->pc = 0x2B8320u;
    SET_GPR_U32(ctx, 31, 0x2B8328u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8328u; }
        if (ctx->pc != 0x2B8328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8328u; }
        if (ctx->pc != 0x2B8328u) { return; }
    }
    ctx->pc = 0x2B8328u;
label_2b8328:
    // 0x2b8328: 0x10000197  b           . + 4 + (0x197 << 2)
label_2b832c:
    if (ctx->pc == 0x2B832Cu) {
        ctx->pc = 0x2B8330u;
        goto label_2b8330;
    }
    ctx->pc = 0x2B8328u;
    {
        const bool branch_taken_0x2b8328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8328) {
            ctx->pc = 0x2B8988u;
            goto label_2b8988;
        }
    }
    ctx->pc = 0x2B8330u;
label_2b8330:
    // 0x2b8330: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b8330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b8334:
    // 0x2b8334: 0xc08e7cc  jal         func_239F30
label_2b8338:
    if (ctx->pc == 0x2B8338u) {
        ctx->pc = 0x2B8338u;
            // 0x2b8338: 0x24a5f240  addiu       $a1, $a1, -0xDC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963776));
        ctx->pc = 0x2B833Cu;
        goto label_2b833c;
    }
    ctx->pc = 0x2B8334u;
    SET_GPR_U32(ctx, 31, 0x2B833Cu);
    ctx->pc = 0x2B8338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8334u;
            // 0x2b8338: 0x24a5f240  addiu       $a1, $a1, -0xDC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B833Cu; }
        if (ctx->pc != 0x2B833Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B833Cu; }
        if (ctx->pc != 0x2B833Cu) { return; }
    }
    ctx->pc = 0x2B833Cu;
label_2b833c:
    // 0x2b833c: 0xa280467c  sb          $zero, 0x467C($s4)
    ctx->pc = 0x2b833cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 18044), (uint8_t)GPR_U32(ctx, 0));
label_2b8340:
    // 0x2b8340: 0x10000191  b           . + 4 + (0x191 << 2)
label_2b8344:
    if (ctx->pc == 0x2B8344u) {
        ctx->pc = 0x2B8344u;
            // 0x2b8344: 0xa6800014  sh          $zero, 0x14($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2B8348u;
        goto label_2b8348;
    }
    ctx->pc = 0x2B8340u;
    {
        const bool branch_taken_0x2b8340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8340u;
            // 0x2b8344: 0xa6800014  sh          $zero, 0x14($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8340) {
            ctx->pc = 0x2B8988u;
            goto label_2b8988;
        }
    }
    ctx->pc = 0x2B8348u;
label_2b8348:
    // 0x2b8348: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b8348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b834c:
    // 0x2b834c: 0xc08e7cc  jal         func_239F30
label_2b8350:
    if (ctx->pc == 0x2B8350u) {
        ctx->pc = 0x2B8350u;
            // 0x2b8350: 0x24a5f258  addiu       $a1, $a1, -0xDA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963800));
        ctx->pc = 0x2B8354u;
        goto label_2b8354;
    }
    ctx->pc = 0x2B834Cu;
    SET_GPR_U32(ctx, 31, 0x2B8354u);
    ctx->pc = 0x2B8350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B834Cu;
            // 0x2b8350: 0x24a5f258  addiu       $a1, $a1, -0xDA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8354u; }
        if (ctx->pc != 0x2B8354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8354u; }
        if (ctx->pc != 0x2B8354u) { return; }
    }
    ctx->pc = 0x2B8354u;
label_2b8354:
    // 0x2b8354: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b8354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b8358:
    // 0x2b8358: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2b8358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_2b835c:
    // 0x2b835c: 0x24424bc0  addiu       $v0, $v0, 0x4BC0
    ctx->pc = 0x2b835cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19392));
label_2b8360:
    // 0x2b8360: 0xafa301d8  sw          $v1, 0x1D8($sp)
    ctx->pc = 0x2b8360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 3));
label_2b8364:
    // 0x2b8364: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2b8364u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2b8368:
    // 0x2b8368: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2b8368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2b836c:
    // 0x2b836c: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x2b836cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2b8370:
    // 0x2b8370: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2b8370u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_2b8374:
    // 0x2b8374: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x2b8374u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_2b8378:
    // 0x2b8378: 0x1000006a  b           . + 4 + (0x6A << 2)
label_2b837c:
    if (ctx->pc == 0x2B837Cu) {
        ctx->pc = 0x2B837Cu;
            // 0x2b837c: 0xafa001dc  sw          $zero, 0x1DC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 0));
        ctx->pc = 0x2B8380u;
        goto label_2b8380;
    }
    ctx->pc = 0x2B8378u;
    {
        const bool branch_taken_0x2b8378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B837Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8378u;
            // 0x2b837c: 0xafa001dc  sw          $zero, 0x1DC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8378) {
            ctx->pc = 0x2B8524u;
            goto label_2b8524;
        }
    }
    ctx->pc = 0x2B8380u;
label_2b8380:
    // 0x2b8380: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b8380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2b8384:
    // 0x2b8384: 0x240214b6  addiu       $v0, $zero, 0x14B6
    ctx->pc = 0x2b8384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5302));
label_2b8388:
    // 0x2b8388: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2b8388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_2b838c:
    // 0x2b838c: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x2b838cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_2b8390:
    // 0x2b8390: 0x1462004f  bne         $v1, $v0, . + 4 + (0x4F << 2)
label_2b8394:
    if (ctx->pc == 0x2B8394u) {
        ctx->pc = 0x2B8398u;
        goto label_2b8398;
    }
    ctx->pc = 0x2B8390u;
    {
        const bool branch_taken_0x2b8390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b8390) {
            ctx->pc = 0x2B84D0u;
            goto label_2b84d0;
        }
    }
    ctx->pc = 0x2B8398u;
label_2b8398:
    // 0x2b8398: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x2b8398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2b839c:
    // 0x2b839c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b839cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b83a0:
    // 0x2b83a0: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x2b83a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2b83a4:
    // 0x2b83a4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2b83a8:
    if (ctx->pc == 0x2B83A8u) {
        ctx->pc = 0x2B83ACu;
        goto label_2b83ac;
    }
    ctx->pc = 0x2B83A4u;
    {
        const bool branch_taken_0x2b83a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b83a4) {
            ctx->pc = 0x2B83BCu;
            goto label_2b83bc;
        }
    }
    ctx->pc = 0x2B83ACu;
label_2b83ac:
    // 0x2b83ac: 0xc08ca88  jal         func_232A20
label_2b83b0:
    if (ctx->pc == 0x2B83B0u) {
        ctx->pc = 0x2B83B4u;
        goto label_2b83b4;
    }
    ctx->pc = 0x2B83ACu;
    SET_GPR_U32(ctx, 31, 0x2B83B4u);
    ctx->pc = 0x232A20u;
    if (runtime->hasFunction(0x232A20u)) {
        auto targetFn = runtime->lookupFunction(0x232A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B83B4u; }
        if (ctx->pc != 0x2B83B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuLoopType__Fv_0x232a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B83B4u; }
        if (ctx->pc != 0x2B83B4u) { return; }
    }
    ctx->pc = 0x2B83B4u;
label_2b83b4:
    // 0x2b83b4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2b83b8:
    if (ctx->pc == 0x2B83B8u) {
        ctx->pc = 0x2B83BCu;
        goto label_2b83bc;
    }
    ctx->pc = 0x2B83B4u;
    {
        const bool branch_taken_0x2b83b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b83b4) {
            ctx->pc = 0x2B83D8u;
            goto label_2b83d8;
        }
    }
    ctx->pc = 0x2B83BCu;
label_2b83bc:
    // 0x2b83bc: 0x0  nop
    ctx->pc = 0x2b83bcu;
    // NOP
label_2b83c0:
    // 0x2b83c0: 0x27a401dc  addiu       $a0, $sp, 0x1DC
    ctx->pc = 0x2b83c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
label_2b83c4:
    // 0x2b83c4: 0x27a501d8  addiu       $a1, $sp, 0x1D8
    ctx->pc = 0x2b83c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_2b83c8:
    // 0x2b83c8: 0xc094400  jal         func_251000
label_2b83cc:
    if (ctx->pc == 0x2B83CCu) {
        ctx->pc = 0x2B83CCu;
            // 0x2b83cc: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x2B83D0u;
        goto label_2b83d0;
    }
    ctx->pc = 0x2B83C8u;
    SET_GPR_U32(ctx, 31, 0x2B83D0u);
    ctx->pc = 0x2B83CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B83C8u;
            // 0x2b83cc: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B83D0u; }
        if (ctx->pc != 0x2B83D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B83D0u; }
        if (ctx->pc != 0x2B83D0u) { return; }
    }
    ctx->pc = 0x2B83D0u;
label_2b83d0:
    // 0x2b83d0: 0x1000003f  b           . + 4 + (0x3F << 2)
label_2b83d4:
    if (ctx->pc == 0x2B83D4u) {
        ctx->pc = 0x2B83D8u;
        goto label_2b83d8;
    }
    ctx->pc = 0x2B83D0u;
    {
        const bool branch_taken_0x2b83d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b83d0) {
            ctx->pc = 0x2B84D0u;
            goto label_2b84d0;
        }
    }
    ctx->pc = 0x2B83D8u;
label_2b83d8:
    // 0x2b83d8: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b83d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b83dc:
    // 0x2b83dc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2b83dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b83e0:
    // 0x2b83e0: 0xc066ed0  jal         func_19BB40
label_2b83e4:
    if (ctx->pc == 0x2B83E4u) {
        ctx->pc = 0x2B83E4u;
            // 0x2b83e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B83E8u;
        goto label_2b83e8;
    }
    ctx->pc = 0x2B83E0u;
    SET_GPR_U32(ctx, 31, 0x2B83E8u);
    ctx->pc = 0x2B83E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B83E0u;
            // 0x2b83e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BB40u;
    if (runtime->hasFunction(0x19BB40u)) {
        auto targetFn = runtime->lookupFunction(0x19BB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B83E8u; }
        if (ctx->pc != 0x2B83E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEnableCharaChange__16CUserDataManagerFiPi_0x19bb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B83E8u; }
        if (ctx->pc != 0x2B83E8u) { return; }
    }
    ctx->pc = 0x2B83E8u;
label_2b83e8:
    // 0x2b83e8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2b83ec:
    if (ctx->pc == 0x2B83ECu) {
        ctx->pc = 0x2B83F0u;
        goto label_2b83f0;
    }
    ctx->pc = 0x2B83E8u;
    {
        const bool branch_taken_0x2b83e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b83e8) {
            ctx->pc = 0x2B8418u;
            goto label_2b8418;
        }
    }
    ctx->pc = 0x2B83F0u;
label_2b83f0:
    // 0x2b83f0: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x2b83f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_2b83f4:
    // 0x2b83f4: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_2b83f8:
    if (ctx->pc == 0x2B83F8u) {
        ctx->pc = 0x2B83F8u;
            // 0x2b83f8: 0x28410014  slti        $at, $v0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->pc = 0x2B83FCu;
        goto label_2b83fc;
    }
    ctx->pc = 0x2B83F4u;
    {
        const bool branch_taken_0x2b83f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B83F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B83F4u;
            // 0x2b83f8: 0x28410014  slti        $at, $v0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b83f4) {
            ctx->pc = 0x2B8418u;
            goto label_2b8418;
        }
    }
    ctx->pc = 0x2B83FCu;
label_2b83fc:
    // 0x2b83fc: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_2b8400:
    if (ctx->pc == 0x2B8400u) {
        ctx->pc = 0x2B8404u;
        goto label_2b8404;
    }
    ctx->pc = 0x2B83FCu;
    {
        const bool branch_taken_0x2b83fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b83fc) {
            ctx->pc = 0x2B8418u;
            goto label_2b8418;
        }
    }
    ctx->pc = 0x2B8404u;
label_2b8404:
    // 0x2b8404: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b8404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2b8408:
    // 0x2b8408: 0x3c038020  lui         $v1, 0x8020
    ctx->pc = 0x2b8408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
label_2b840c:
    // 0x2b840c: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x2b840cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
label_2b8410:
    // 0x2b8410: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2b8410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2b8414:
    // 0x2b8414: 0xac431cd4  sw          $v1, 0x1CD4($v0)
    ctx->pc = 0x2b8414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7380), GPR_U32(ctx, 3));
label_2b8418:
    // 0x2b8418: 0x8e820144  lw          $v0, 0x144($s4)
    ctx->pc = 0x2b8418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b841c:
    // 0x2b841c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_2b8420:
    if (ctx->pc == 0x2B8420u) {
        ctx->pc = 0x2B8420u;
            // 0x2b8420: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x2B8424u;
        goto label_2b8424;
    }
    ctx->pc = 0x2B841Cu;
    {
        const bool branch_taken_0x2b841c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B841Cu;
            // 0x2b8420: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b841c) {
            ctx->pc = 0x2B84D0u;
            goto label_2b84d0;
        }
    }
    ctx->pc = 0x2B8424u;
label_2b8424:
    // 0x2b8424: 0xc065b30  jal         func_196CC0
label_2b8428:
    if (ctx->pc == 0x2B8428u) {
        ctx->pc = 0x2B842Cu;
        goto label_2b842c;
    }
    ctx->pc = 0x2B8424u;
    SET_GPR_U32(ctx, 31, 0x2B842Cu);
    ctx->pc = 0x196CC0u;
    if (runtime->hasFunction(0x196CC0u)) {
        auto targetFn = runtime->lookupFunction(0x196CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B842Cu; }
        if (ctx->pc != 0x2B842Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRate__11COMMON_GAGEFv_0x196cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B842Cu; }
        if (ctx->pc != 0x2B842Cu) { return; }
    }
    ctx->pc = 0x2B842Cu;
label_2b842c:
    // 0x2b842c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b842cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b8430:
    // 0x2b8430: 0x0  nop
    ctx->pc = 0x2b8430u;
    // NOP
label_2b8434:
    // 0x2b8434: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b8434u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b8438:
    // 0x2b8438: 0x0  nop
    ctx->pc = 0x2b8438u;
    // NOP
label_2b843c:
    // 0x2b843c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_2b8440:
    if (ctx->pc == 0x2B8440u) {
        ctx->pc = 0x2B8444u;
        goto label_2b8444;
    }
    ctx->pc = 0x2B843Cu;
    {
        const bool branch_taken_0x2b843c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b843c) {
            ctx->pc = 0x2B846Cu;
            goto label_2b846c;
        }
    }
    ctx->pc = 0x2B8444u;
label_2b8444:
    // 0x2b8444: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x2b8444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_2b8448:
    // 0x2b8448: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_2b844c:
    if (ctx->pc == 0x2B844Cu) {
        ctx->pc = 0x2B844Cu;
            // 0x2b844c: 0x28410014  slti        $at, $v0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->pc = 0x2B8450u;
        goto label_2b8450;
    }
    ctx->pc = 0x2B8448u;
    {
        const bool branch_taken_0x2b8448 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B844Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8448u;
            // 0x2b844c: 0x28410014  slti        $at, $v0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8448) {
            ctx->pc = 0x2B846Cu;
            goto label_2b846c;
        }
    }
    ctx->pc = 0x2B8450u;
label_2b8450:
    // 0x2b8450: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_2b8454:
    if (ctx->pc == 0x2B8454u) {
        ctx->pc = 0x2B8458u;
        goto label_2b8458;
    }
    ctx->pc = 0x2B8450u;
    {
        const bool branch_taken_0x2b8450 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8450) {
            ctx->pc = 0x2B846Cu;
            goto label_2b846c;
        }
    }
    ctx->pc = 0x2B8458u;
label_2b8458:
    // 0x2b8458: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b8458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2b845c:
    // 0x2b845c: 0x3c038020  lui         $v1, 0x8020
    ctx->pc = 0x2b845cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
label_2b8460:
    // 0x2b8460: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x2b8460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
label_2b8464:
    // 0x2b8464: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2b8464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2b8468:
    // 0x2b8468: 0xac431cd4  sw          $v1, 0x1CD4($v0)
    ctx->pc = 0x2b8468u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7380), GPR_U32(ctx, 3));
label_2b846c:
    // 0x2b846c: 0x0  nop
    ctx->pc = 0x2b846cu;
    // NOP
label_2b8470:
    // 0x2b8470: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b8470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b8474:
    // 0x2b8474: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x2b8474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_2b8478:
    // 0x2b8478: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2b8478u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_2b847c:
    // 0x2b847c: 0xc0670b0  jal         func_19C2C0
label_2b8480:
    if (ctx->pc == 0x2B8480u) {
        ctx->pc = 0x2B8480u;
            // 0x2b8480: 0x84254d96  lh          $a1, 0x4D96($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
        ctx->pc = 0x2B8484u;
        goto label_2b8484;
    }
    ctx->pc = 0x2B847Cu;
    SET_GPR_U32(ctx, 31, 0x2B8484u);
    ctx->pc = 0x2B8480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B847Cu;
            // 0x2b8480: 0x84254d96  lh          $a1, 0x4D96($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C2C0u;
    if (runtime->hasFunction(0x19C2C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8484u; }
        if (ctx->pc != 0x2B8484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaStatusAttirbute__16CUserDataManagerFi_0x19c2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8484u; }
        if (ctx->pc != 0x2B8484u) { return; }
    }
    ctx->pc = 0x2B8484u;
label_2b8484:
    // 0x2b8484: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x2b8484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2b8488:
    // 0x2b8488: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_2b848c:
    if (ctx->pc == 0x2B848Cu) {
        ctx->pc = 0x2B848Cu;
            // 0x2b848c: 0x30430008  andi        $v1, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x2B8490u;
        goto label_2b8490;
    }
    ctx->pc = 0x2B8488u;
    {
        const bool branch_taken_0x2b8488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B848Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8488u;
            // 0x2b848c: 0x30430008  andi        $v1, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8488) {
            ctx->pc = 0x2B84A4u;
            goto label_2b84a4;
        }
    }
    ctx->pc = 0x2B8490u;
label_2b8490:
    // 0x2b8490: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_2b8494:
    if (ctx->pc == 0x2B8494u) {
        ctx->pc = 0x2B8498u;
        goto label_2b8498;
    }
    ctx->pc = 0x2B8490u;
    {
        const bool branch_taken_0x2b8490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8490) {
            ctx->pc = 0x2B84A4u;
            goto label_2b84a4;
        }
    }
    ctx->pc = 0x2B8498u;
label_2b8498:
    // 0x2b8498: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2b8498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_2b849c:
    // 0x2b849c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2b84a0:
    if (ctx->pc == 0x2B84A0u) {
        ctx->pc = 0x2B84A4u;
        goto label_2b84a4;
    }
    ctx->pc = 0x2B849Cu;
    {
        const bool branch_taken_0x2b849c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b849c) {
            ctx->pc = 0x2B84D0u;
            goto label_2b84d0;
        }
    }
    ctx->pc = 0x2B84A4u;
label_2b84a4:
    // 0x2b84a4: 0x0  nop
    ctx->pc = 0x2b84a4u;
    // NOP
label_2b84a8:
    // 0x2b84a8: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x2b84a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_2b84ac:
    // 0x2b84ac: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_2b84b0:
    if (ctx->pc == 0x2B84B0u) {
        ctx->pc = 0x2B84B0u;
            // 0x2b84b0: 0x28410014  slti        $at, $v0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->pc = 0x2B84B4u;
        goto label_2b84b4;
    }
    ctx->pc = 0x2B84ACu;
    {
        const bool branch_taken_0x2b84ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B84B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B84ACu;
            // 0x2b84b0: 0x28410014  slti        $at, $v0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b84ac) {
            ctx->pc = 0x2B84D0u;
            goto label_2b84d0;
        }
    }
    ctx->pc = 0x2B84B4u;
label_2b84b4:
    // 0x2b84b4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_2b84b8:
    if (ctx->pc == 0x2B84B8u) {
        ctx->pc = 0x2B84BCu;
        goto label_2b84bc;
    }
    ctx->pc = 0x2B84B4u;
    {
        const bool branch_taken_0x2b84b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b84b4) {
            ctx->pc = 0x2B84D0u;
            goto label_2b84d0;
        }
    }
    ctx->pc = 0x2B84BCu;
label_2b84bc:
    // 0x2b84bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b84bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2b84c0:
    // 0x2b84c0: 0x3c038020  lui         $v1, 0x8020
    ctx->pc = 0x2b84c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
label_2b84c4:
    // 0x2b84c4: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x2b84c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
label_2b84c8:
    // 0x2b84c8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2b84c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2b84cc:
    // 0x2b84cc: 0xac431cd4  sw          $v1, 0x1CD4($v0)
    ctx->pc = 0x2b84ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7380), GPR_U32(ctx, 3));
label_2b84d0:
    // 0x2b84d0: 0x8fa301dc  lw          $v1, 0x1DC($sp)
    ctx->pc = 0x2b84d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_2b84d4:
    // 0x2b84d4: 0x240214b8  addiu       $v0, $zero, 0x14B8
    ctx->pc = 0x2b84d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5304));
label_2b84d8:
    // 0x2b84d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b84d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2b84dc:
    // 0x2b84dc: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2b84dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_2b84e0:
    // 0x2b84e0: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x2b84e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_2b84e4:
    // 0x2b84e4: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_2b84e8:
    if (ctx->pc == 0x2B84E8u) {
        ctx->pc = 0x2B84ECu;
        goto label_2b84ec;
    }
    ctx->pc = 0x2B84E4u;
    {
        const bool branch_taken_0x2b84e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b84e4) {
            ctx->pc = 0x2B8514u;
            goto label_2b8514;
        }
    }
    ctx->pc = 0x2B84ECu;
label_2b84ec:
    // 0x2b84ec: 0x8e840144  lw          $a0, 0x144($s4)
    ctx->pc = 0x2b84ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b84f0:
    // 0x2b84f0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2b84f4:
    if (ctx->pc == 0x2B84F4u) {
        ctx->pc = 0x2B84F8u;
        goto label_2b84f8;
    }
    ctx->pc = 0x2B84F0u;
    {
        const bool branch_taken_0x2b84f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b84f0) {
            ctx->pc = 0x2B8514u;
            goto label_2b8514;
        }
    }
    ctx->pc = 0x2B84F8u;
label_2b84f8:
    // 0x2b84f8: 0xc066a84  jal         func_19AA10
label_2b84fc:
    if (ctx->pc == 0x2B84FCu) {
        ctx->pc = 0x2B8500u;
        goto label_2b8500;
    }
    ctx->pc = 0x2B84F8u;
    SET_GPR_U32(ctx, 31, 0x2B8500u);
    ctx->pc = 0x19AA10u;
    if (runtime->hasFunction(0x19AA10u)) {
        auto targetFn = runtime->lookupFunction(0x19AA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8500u; }
        if (ctx->pc != 0x2B8500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckClassChange__16MOS_CHANGE_PARAMFv_0x19aa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8500u; }
        if (ctx->pc != 0x2B8500u) { return; }
    }
    ctx->pc = 0x2B8500u;
label_2b8500:
    // 0x2b8500: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2b8504:
    if (ctx->pc == 0x2B8504u) {
        ctx->pc = 0x2B8504u;
            // 0x2b8504: 0x27a401dc  addiu       $a0, $sp, 0x1DC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
        ctx->pc = 0x2B8508u;
        goto label_2b8508;
    }
    ctx->pc = 0x2B8500u;
    {
        const bool branch_taken_0x2b8500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8500u;
            // 0x2b8504: 0x27a401dc  addiu       $a0, $sp, 0x1DC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8500) {
            ctx->pc = 0x2B8514u;
            goto label_2b8514;
        }
    }
    ctx->pc = 0x2B8508u;
label_2b8508:
    // 0x2b8508: 0x27a501d8  addiu       $a1, $sp, 0x1D8
    ctx->pc = 0x2b8508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_2b850c:
    // 0x2b850c: 0xc094400  jal         func_251000
label_2b8510:
    if (ctx->pc == 0x2B8510u) {
        ctx->pc = 0x2B8510u;
            // 0x2b8510: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x2B8514u;
        goto label_2b8514;
    }
    ctx->pc = 0x2B850Cu;
    SET_GPR_U32(ctx, 31, 0x2B8514u);
    ctx->pc = 0x2B8510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B850Cu;
            // 0x2b8510: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8514u; }
        if (ctx->pc != 0x2B8514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8514u; }
        if (ctx->pc != 0x2B8514u) { return; }
    }
    ctx->pc = 0x2B8514u;
label_2b8514:
    // 0x2b8514: 0x0  nop
    ctx->pc = 0x2b8514u;
    // NOP
label_2b8518:
    // 0x2b8518: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x2b8518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_2b851c:
    // 0x2b851c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b851cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b8520:
    // 0x2b8520: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x2b8520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
label_2b8524:
    // 0x2b8524: 0x0  nop
    ctx->pc = 0x2b8524u;
    // NOP
label_2b8528:
    // 0x2b8528: 0x8fa301dc  lw          $v1, 0x1DC($sp)
    ctx->pc = 0x2b8528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_2b852c:
    // 0x2b852c: 0x8fa501d8  lw          $a1, 0x1D8($sp)
    ctx->pc = 0x2b852cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_2b8530:
    // 0x2b8530: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x2b8530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2b8534:
    // 0x2b8534: 0x1440ff92  bnez        $v0, . + 4 + (-0x6E << 2)
label_2b8538:
    if (ctx->pc == 0x2B8538u) {
        ctx->pc = 0x2B8538u;
            // 0x2b8538: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B853Cu;
        goto label_2b853c;
    }
    ctx->pc = 0x2B8534u;
    {
        const bool branch_taken_0x2b8534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8534u;
            // 0x2b8538: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8534) {
            ctx->pc = 0x2B8380u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b8380;
        }
    }
    ctx->pc = 0x2B853Cu;
label_2b853c:
    // 0x2b853c: 0xc0877e0  jal         func_21DF80
label_2b8540:
    if (ctx->pc == 0x2B8540u) {
        ctx->pc = 0x2B8544u;
        goto label_2b8544;
    }
    ctx->pc = 0x2B853Cu;
    SET_GPR_U32(ctx, 31, 0x2B8544u);
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8544u; }
        if (ctx->pc != 0x2B8544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8544u; }
        if (ctx->pc != 0x2B8544u) { return; }
    }
    ctx->pc = 0x2B8544u;
label_2b8544:
    // 0x2b8544: 0x8fa601d8  lw          $a2, 0x1D8($sp)
    ctx->pc = 0x2b8544u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_2b8548:
    // 0x2b8548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b8548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b854c:
    // 0x2b854c: 0xc0876ec  jal         func_21DBB0
label_2b8550:
    if (ctx->pc == 0x2B8550u) {
        ctx->pc = 0x2B8550u;
            // 0x2b8550: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x2B8554u;
        goto label_2b8554;
    }
    ctx->pc = 0x2B854Cu;
    SET_GPR_U32(ctx, 31, 0x2B8554u);
    ctx->pc = 0x2B8550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B854Cu;
            // 0x2b8550: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DBB0u;
    if (runtime->hasFunction(0x21DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x21DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8554u; }
        if (ctx->pc != 0x2B8554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPii_0x21dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8554u; }
        if (ctx->pc != 0x2B8554u) { return; }
    }
    ctx->pc = 0x2B8554u;
label_2b8554:
    // 0x2b8554: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b8554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b8558:
    // 0x2b8558: 0xc0875b0  jal         func_21D6C0
label_2b855c:
    if (ctx->pc == 0x2B855Cu) {
        ctx->pc = 0x2B855Cu;
            // 0x2b855c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8560u;
        goto label_2b8560;
    }
    ctx->pc = 0x2B8558u;
    SET_GPR_U32(ctx, 31, 0x2B8560u);
    ctx->pc = 0x2B855Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8558u;
            // 0x2b855c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8560u; }
        if (ctx->pc != 0x2B8560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8560u; }
        if (ctx->pc != 0x2B8560u) { return; }
    }
    ctx->pc = 0x2B8560u;
label_2b8560:
    // 0x2b8560: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b8560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b8564:
    // 0x2b8564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b8564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b8568:
    // 0x2b8568: 0x8c23cb48  lw          $v1, -0x34B8($at)
    ctx->pc = 0x2b8568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953800)));
label_2b856c:
    // 0x2b856c: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x2b856cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2b8570:
    // 0x2b8570: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2b8570u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_2b8574:
    // 0x2b8574: 0xa6800002  sh          $zero, 0x2($s4)
    ctx->pc = 0x2b8574u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
label_2b8578:
    // 0x2b8578: 0xc094274  jal         func_2509D0
label_2b857c:
    if (ctx->pc == 0x2B857Cu) {
        ctx->pc = 0x2B857Cu;
            // 0x2b857c: 0xa6820014  sh          $v0, 0x14($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2B8580u;
        goto label_2b8580;
    }
    ctx->pc = 0x2B8578u;
    SET_GPR_U32(ctx, 31, 0x2B8580u);
    ctx->pc = 0x2B857Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8578u;
            // 0x2b857c: 0xa6820014  sh          $v0, 0x14($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8580u; }
        if (ctx->pc != 0x2B8580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8580u; }
        if (ctx->pc != 0x2B8580u) { return; }
    }
    ctx->pc = 0x2B8580u;
label_2b8580:
    // 0x2b8580: 0x10000101  b           . + 4 + (0x101 << 2)
label_2b8584:
    if (ctx->pc == 0x2B8584u) {
        ctx->pc = 0x2B8588u;
        goto label_2b8588;
    }
    ctx->pc = 0x2B8580u;
    {
        const bool branch_taken_0x2b8580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8580) {
            ctx->pc = 0x2B8988u;
            goto label_2b8988;
        }
    }
    ctx->pc = 0x2B8588u;
label_2b8588:
    // 0x2b8588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b8588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b858c:
    // 0x2b858c: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x2b858cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
label_2b8590:
    // 0x2b8590: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b8590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b8594:
    // 0x2b8594: 0xae820130  sw          $v0, 0x130($s4)
    ctx->pc = 0x2b8594u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 2));
label_2b8598:
    // 0x2b8598: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b8598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b859c:
    // 0x2b859c: 0xc08e898  jal         func_23A260
label_2b85a0:
    if (ctx->pc == 0x2B85A0u) {
        ctx->pc = 0x2B85A0u;
            // 0x2b85a0: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x2B85A4u;
        goto label_2b85a4;
    }
    ctx->pc = 0x2B859Cu;
    SET_GPR_U32(ctx, 31, 0x2B85A4u);
    ctx->pc = 0x2B85A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B859Cu;
            // 0x2b85a0: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B85A4u; }
        if (ctx->pc != 0x2B85A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B85A4u; }
        if (ctx->pc != 0x2B85A4u) { return; }
    }
    ctx->pc = 0x2B85A4u;
label_2b85a4:
    // 0x2b85a4: 0xc094274  jal         func_2509D0
label_2b85a8:
    if (ctx->pc == 0x2B85A8u) {
        ctx->pc = 0x2B85A8u;
            // 0x2b85a8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B85ACu;
        goto label_2b85ac;
    }
    ctx->pc = 0x2B85A4u;
    SET_GPR_U32(ctx, 31, 0x2B85ACu);
    ctx->pc = 0x2B85A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B85A4u;
            // 0x2b85a8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B85ACu; }
        if (ctx->pc != 0x2B85ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B85ACu; }
        if (ctx->pc != 0x2B85ACu) { return; }
    }
    ctx->pc = 0x2B85ACu;
label_2b85ac:
    // 0x2b85ac: 0x100000f6  b           . + 4 + (0xF6 << 2)
label_2b85b0:
    if (ctx->pc == 0x2B85B0u) {
        ctx->pc = 0x2B85B4u;
        goto label_2b85b4;
    }
    ctx->pc = 0x2B85ACu;
    {
        const bool branch_taken_0x2b85ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b85ac) {
            ctx->pc = 0x2B8988u;
            goto label_2b8988;
        }
    }
    ctx->pc = 0x2B85B4u;
label_2b85b4:
    // 0x2b85b4: 0xa6830002  sh          $v1, 0x2($s4)
    ctx->pc = 0x2b85b4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 3));
label_2b85b8:
    // 0x2b85b8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b85b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b85bc:
    // 0x2b85bc: 0x8c22cb48  lw          $v0, -0x34B8($at)
    ctx->pc = 0x2b85bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953800)));
label_2b85c0:
    // 0x2b85c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b85c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b85c4:
    // 0x2b85c4: 0xc094274  jal         func_2509D0
label_2b85c8:
    if (ctx->pc == 0x2B85C8u) {
        ctx->pc = 0x2B85C8u;
            // 0x2b85c8: 0xa0440001  sb          $a0, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x2B85CCu;
        goto label_2b85cc;
    }
    ctx->pc = 0x2B85C4u;
    SET_GPR_U32(ctx, 31, 0x2B85CCu);
    ctx->pc = 0x2B85C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B85C4u;
            // 0x2b85c8: 0xa0440001  sb          $a0, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B85CCu; }
        if (ctx->pc != 0x2B85CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B85CCu; }
        if (ctx->pc != 0x2B85CCu) { return; }
    }
    ctx->pc = 0x2B85CCu;
label_2b85cc:
    // 0x2b85cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b85ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b85d0:
    // 0x2b85d0: 0xc0874e8  jal         func_21D3A0
label_2b85d4:
    if (ctx->pc == 0x2B85D4u) {
        ctx->pc = 0x2B85D4u;
            // 0x2b85d4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2B85D8u;
        goto label_2b85d8;
    }
    ctx->pc = 0x2B85D0u;
    SET_GPR_U32(ctx, 31, 0x2B85D8u);
    ctx->pc = 0x2B85D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B85D0u;
            // 0x2b85d4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B85D8u; }
        if (ctx->pc != 0x2B85D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B85D8u; }
        if (ctx->pc != 0x2B85D8u) { return; }
    }
    ctx->pc = 0x2B85D8u;
label_2b85d8:
    // 0x2b85d8: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2b85d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
label_2b85dc:
    // 0x2b85dc: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2b85dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_2b85e0:
    // 0x2b85e0: 0x2442cfb0  addiu       $v0, $v0, -0x3050
    ctx->pc = 0x2b85e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954928));
label_2b85e4:
    // 0x2b85e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b85e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b85e8:
    // 0x2b85e8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2b85e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2b85ec:
    // 0x2b85ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b85ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b85f0:
    // 0x2b85f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b85f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b85f4:
    // 0x2b85f4: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x2b85f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2b85f8:
    // 0x2b85f8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2b85f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_2b85fc:
    // 0x2b85fc: 0x1000002f  b           . + 4 + (0x2F << 2)
label_2b8600:
    if (ctx->pc == 0x2B8600u) {
        ctx->pc = 0x2B8600u;
            // 0x2b8600: 0x7c820010  sq          $v0, 0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
        ctx->pc = 0x2B8604u;
        goto label_2b8604;
    }
    ctx->pc = 0x2B85FCu;
    {
        const bool branch_taken_0x2b85fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B85FCu;
            // 0x2b8600: 0x7c820010  sq          $v0, 0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b85fc) {
            ctx->pc = 0x2B86BCu;
            goto label_2b86bc;
        }
    }
    ctx->pc = 0x2B8604u;
label_2b8604:
    // 0x2b8604: 0x84640006  lh          $a0, 0x6($v1)
    ctx->pc = 0x2b8604u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_2b8608:
    // 0x2b8608: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2b8608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_2b860c:
    // 0x2b860c: 0x24424640  addiu       $v0, $v0, 0x4640
    ctx->pc = 0x2b860cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17984));
label_2b8610:
    // 0x2b8610: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b8610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2b8614:
    // 0x2b8614: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b8614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2b8618:
    // 0x2b8618: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2b8618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2b861c:
    // 0x2b861c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b861cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b8620:
    // 0x2b8620: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2b8620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2b8624:
    // 0x2b8624: 0xc0ad6c4  jal         func_2B5B10
label_2b8628:
    if (ctx->pc == 0x2B8628u) {
        ctx->pc = 0x2B8628u;
            // 0x2b8628: 0x84440002  lh          $a0, 0x2($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->pc = 0x2B862Cu;
        goto label_2b862c;
    }
    ctx->pc = 0x2B8624u;
    SET_GPR_U32(ctx, 31, 0x2B862Cu);
    ctx->pc = 0x2B8628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8624u;
            // 0x2b8628: 0x84440002  lh          $a0, 0x2($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B862Cu; }
        if (ctx->pc != 0x2B862Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterName__Fi_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B862Cu; }
        if (ctx->pc != 0x2B862Cu) { return; }
    }
    ctx->pc = 0x2B862Cu;
label_2b862c:
    // 0x2b862c: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x2b862cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
label_2b8630:
    // 0x2b8630: 0xc065af8  jal         func_196BE0
label_2b8634:
    if (ctx->pc == 0x2B8634u) {
        ctx->pc = 0x2B8634u;
            // 0x2b8634: 0xac620170  sw          $v0, 0x170($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 368), GPR_U32(ctx, 2));
        ctx->pc = 0x2B8638u;
        goto label_2b8638;
    }
    ctx->pc = 0x2B8630u;
    SET_GPR_U32(ctx, 31, 0x2B8638u);
    ctx->pc = 0x2B8634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8630u;
            // 0x2b8634: 0xac620170  sw          $v0, 0x170($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8638u; }
        if (ctx->pc != 0x2B8638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8638u; }
        if (ctx->pc != 0x2B8638u) { return; }
    }
    ctx->pc = 0x2B8638u;
label_2b8638:
    // 0x2b8638: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x2b8638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_2b863c:
    // 0x2b863c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2b863cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2b8640:
    // 0x2b8640: 0x84234d96  lh          $v1, 0x4D96($at)
    ctx->pc = 0x2b8640u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
label_2b8644:
    // 0x2b8644: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b8644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b8648:
    // 0x2b8648: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_2b864c:
    if (ctx->pc == 0x2B864Cu) {
        ctx->pc = 0x2B8650u;
        goto label_2b8650;
    }
    ctx->pc = 0x2B8648u;
    {
        const bool branch_taken_0x2b8648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b8648) {
            ctx->pc = 0x2B86B0u;
            goto label_2b86b0;
        }
    }
    ctx->pc = 0x2B8650u;
label_2b8650:
    // 0x2b8650: 0xc065af8  jal         func_196BE0
label_2b8654:
    if (ctx->pc == 0x2B8654u) {
        ctx->pc = 0x2B8658u;
        goto label_2b8658;
    }
    ctx->pc = 0x2B8650u;
    SET_GPR_U32(ctx, 31, 0x2B8658u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8658u; }
        if (ctx->pc != 0x2B8658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8658u; }
        if (ctx->pc != 0x2B8658u) { return; }
    }
    ctx->pc = 0x2B8658u;
label_2b8658:
    // 0x2b8658: 0x8e830144  lw          $v1, 0x144($s4)
    ctx->pc = 0x2b8658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b865c:
    // 0x2b865c: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x2b865cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_2b8660:
    // 0x2b8660: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2b8660u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2b8664:
    // 0x2b8664: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2b8664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_2b8668:
    // 0x2b8668: 0x84254d98  lh          $a1, 0x4D98($at)
    ctx->pc = 0x2b8668u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19864)));
label_2b866c:
    // 0x2b866c: 0x24424640  addiu       $v0, $v0, 0x4640
    ctx->pc = 0x2b866cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17984));
label_2b8670:
    // 0x2b8670: 0x84640006  lh          $a0, 0x6($v1)
    ctx->pc = 0x2b8670u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_2b8674:
    // 0x2b8674: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b8674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2b8678:
    // 0x2b8678: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b8678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2b867c:
    // 0x2b867c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2b867cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2b8680:
    // 0x2b8680: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b8680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b8684:
    // 0x2b8684: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2b8684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2b8688:
    // 0x2b8688: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x2b8688u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2b868c:
    // 0x2b868c: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
label_2b8690:
    if (ctx->pc == 0x2B8690u) {
        ctx->pc = 0x2B8694u;
        goto label_2b8694;
    }
    ctx->pc = 0x2B868Cu;
    {
        const bool branch_taken_0x2b868c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2b868c) {
            ctx->pc = 0x2B86B0u;
            goto label_2b86b0;
        }
    }
    ctx->pc = 0x2B8694u;
label_2b8694:
    // 0x2b8694: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_2b8698:
    if (ctx->pc == 0x2B8698u) {
        ctx->pc = 0x2B8698u;
            // 0x2b8698: 0x2a010014  slti        $at, $s0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->pc = 0x2B869Cu;
        goto label_2b869c;
    }
    ctx->pc = 0x2B8694u;
    {
        const bool branch_taken_0x2b8694 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2B8698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8694u;
            // 0x2b8698: 0x2a010014  slti        $at, $s0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8694) {
            ctx->pc = 0x2B86B0u;
            goto label_2b86b0;
        }
    }
    ctx->pc = 0x2B869Cu;
label_2b869c:
    // 0x2b869c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_2b86a0:
    if (ctx->pc == 0x2B86A0u) {
        ctx->pc = 0x2B86A0u;
            // 0x2b86a0: 0x3c038020  lui         $v1, 0x8020 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
        ctx->pc = 0x2B86A4u;
        goto label_2b86a4;
    }
    ctx->pc = 0x2B869Cu;
    {
        const bool branch_taken_0x2b869c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B86A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B869Cu;
            // 0x2b86a0: 0x3c038020  lui         $v1, 0x8020 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b869c) {
            ctx->pc = 0x2B86B0u;
            goto label_2b86b0;
        }
    }
    ctx->pc = 0x2B86A4u;
label_2b86a4:
    // 0x2b86a4: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x2b86a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_2b86a8:
    // 0x2b86a8: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x2b86a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
label_2b86ac:
    // 0x2b86ac: 0xac431cd4  sw          $v1, 0x1CD4($v0)
    ctx->pc = 0x2b86acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7380), GPR_U32(ctx, 3));
label_2b86b0:
    // 0x2b86b0: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x2b86b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_2b86b4:
    // 0x2b86b4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2b86b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2b86b8:
    // 0x2b86b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b86b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b86bc:
    // 0x2b86bc: 0x0  nop
    ctx->pc = 0x2b86bcu;
    // NOP
label_2b86c0:
    // 0x2b86c0: 0x8e830144  lw          $v1, 0x144($s4)
    ctx->pc = 0x2b86c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b86c4:
    // 0x2b86c4: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x2b86c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_2b86c8:
    // 0x2b86c8: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x2b86c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b86cc:
    // 0x2b86cc: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x2b86ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_2b86d0:
    // 0x2b86d0: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
label_2b86d4:
    if (ctx->pc == 0x2B86D4u) {
        ctx->pc = 0x2B86D4u;
            // 0x2b86d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B86D8u;
        goto label_2b86d8;
    }
    ctx->pc = 0x2B86D0u;
    {
        const bool branch_taken_0x2b86d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B86D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B86D0u;
            // 0x2b86d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b86d0) {
            ctx->pc = 0x2B8604u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b8604;
        }
    }
    ctx->pc = 0x2B86D8u;
label_2b86d8:
    // 0x2b86d8: 0xc087720  jal         func_21DC80
label_2b86dc:
    if (ctx->pc == 0x2B86DCu) {
        ctx->pc = 0x2B86DCu;
            // 0x2b86dc: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x2B86E0u;
        goto label_2b86e0;
    }
    ctx->pc = 0x2B86D8u;
    SET_GPR_U32(ctx, 31, 0x2B86E0u);
    ctx->pc = 0x2B86DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B86D8u;
            // 0x2b86dc: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B86E0u; }
        if (ctx->pc != 0x2B86E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B86E0u; }
        if (ctx->pc != 0x2B86E0u) { return; }
    }
    ctx->pc = 0x2B86E0u;
label_2b86e0:
    // 0x2b86e0: 0x8e820144  lw          $v0, 0x144($s4)
    ctx->pc = 0x2b86e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b86e4:
    // 0x2b86e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b86e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b86e8:
    // 0x2b86e8: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x2b86e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_2b86ec:
    // 0x2b86ec: 0xc0877e0  jal         func_21DF80
label_2b86f0:
    if (ctx->pc == 0x2B86F0u) {
        ctx->pc = 0x2B86F0u;
            // 0x2b86f0: 0x24450032  addiu       $a1, $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
        ctx->pc = 0x2B86F4u;
        goto label_2b86f4;
    }
    ctx->pc = 0x2B86ECu;
    SET_GPR_U32(ctx, 31, 0x2B86F4u);
    ctx->pc = 0x2B86F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B86ECu;
            // 0x2b86f0: 0x24450032  addiu       $a1, $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B86F4u; }
        if (ctx->pc != 0x2B86F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B86F4u; }
        if (ctx->pc != 0x2B86F4u) { return; }
    }
    ctx->pc = 0x2B86F4u;
label_2b86f4:
    // 0x2b86f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b86f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b86f8:
    // 0x2b86f8: 0xc0875b0  jal         func_21D6C0
label_2b86fc:
    if (ctx->pc == 0x2B86FCu) {
        ctx->pc = 0x2B86FCu;
            // 0x2b86fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8700u;
        goto label_2b8700;
    }
    ctx->pc = 0x2B86F8u;
    SET_GPR_U32(ctx, 31, 0x2B8700u);
    ctx->pc = 0x2B86FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B86F8u;
            // 0x2b86fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8700u; }
        if (ctx->pc != 0x2B8700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8700u; }
        if (ctx->pc != 0x2B8700u) { return; }
    }
    ctx->pc = 0x2B8700u;
label_2b8700:
    // 0x2b8700: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_2b8704:
    if (ctx->pc == 0x2B8704u) {
        ctx->pc = 0x2B8708u;
        goto label_2b8708;
    }
    ctx->pc = 0x2B8700u;
    {
        const bool branch_taken_0x2b8700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8700) {
            ctx->pc = 0x2B8988u;
            goto label_2b8988;
        }
    }
    ctx->pc = 0x2B8708u;
label_2b8708:
    // 0x2b8708: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b8708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b870c:
    // 0x2b870c: 0xa3839b77  sb          $v1, -0x6489($gp)
    ctx->pc = 0x2b870cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941559), (uint8_t)GPR_U32(ctx, 3));
label_2b8710:
    // 0x2b8710: 0x83829b77  lb          $v0, -0x6489($gp)
    ctx->pc = 0x2b8710u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941559)));
label_2b8714:
    // 0x2b8714: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_2b8718:
    if (ctx->pc == 0x2B8718u) {
        ctx->pc = 0x2B871Cu;
        goto label_2b871c;
    }
    ctx->pc = 0x2B8714u;
    {
        const bool branch_taken_0x2b8714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b8714) {
            ctx->pc = 0x2B8730u;
            goto label_2b8730;
        }
    }
    ctx->pc = 0x2B871Cu;
label_2b871c:
    // 0x2b871c: 0x8f828ddc  lw          $v0, -0x7224($gp)
    ctx->pc = 0x2b871cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_2b8720:
    // 0x2b8720: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2b8724:
    if (ctx->pc == 0x2B8724u) {
        ctx->pc = 0x2B8728u;
        goto label_2b8728;
    }
    ctx->pc = 0x2B8720u;
    {
        const bool branch_taken_0x2b8720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8720) {
            ctx->pc = 0x2B8730u;
            goto label_2b8730;
        }
    }
    ctx->pc = 0x2B8728u;
label_2b8728:
    // 0x2b8728: 0xc0ac064  jal         func_2B0190
label_2b872c:
    if (ctx->pc == 0x2B872Cu) {
        ctx->pc = 0x2B8730u;
        goto label_2b8730;
    }
    ctx->pc = 0x2B8728u;
    SET_GPR_U32(ctx, 31, 0x2B8730u);
    ctx->pc = 0x2B0190u;
    if (runtime->hasFunction(0x2B0190u)) {
        auto targetFn = runtime->lookupFunction(0x2B0190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8730u; }
        if (ctx->pc != 0x2B8730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteMonsterEffect__Fv_0x2b0190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8730u; }
        if (ctx->pc != 0x2B8730u) { return; }
    }
    ctx->pc = 0x2B8730u;
label_2b8730:
    // 0x2b8730: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b8730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b8734:
    // 0x2b8734: 0x8f859b6c  lw          $a1, -0x6494($gp)
    ctx->pc = 0x2b8734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941548)));
label_2b8738:
    // 0x2b8738: 0x8c24d5f4  lw          $a0, -0x2A0C($at)
    ctx->pc = 0x2b8738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956532)));
label_2b873c:
    // 0x2b873c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2b873cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b8740:
    // 0x2b8740: 0xc07a6f8  jal         func_1E9BE0
label_2b8744:
    if (ctx->pc == 0x2B8744u) {
        ctx->pc = 0x2B8744u;
            // 0x2b8744: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8748u;
        goto label_2b8748;
    }
    ctx->pc = 0x2B8740u;
    SET_GPR_U32(ctx, 31, 0x2B8748u);
    ctx->pc = 0x2B8744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8740u;
            // 0x2b8744: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9BE0u;
    if (runtime->hasFunction(0x1E9BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1E9BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8748u; }
        if (ctx->pc != 0x2B8748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaMemAllocPtr__FP9mgCMemoryP9mgCMemoryii_0x1e9be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8748u; }
        if (ctx->pc != 0x2B8748u) { return; }
    }
    ctx->pc = 0x2B8748u;
label_2b8748:
    // 0x2b8748: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2b8748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2b874c:
    // 0x2b874c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b874cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b8750:
    // 0x2b8750: 0xac20cf24  sw          $zero, -0x30DC($at)
    ctx->pc = 0x2b8750u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954788), GPR_U32(ctx, 0));
label_2b8754:
    // 0x2b8754: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b8754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b8758:
    // 0x2b8758: 0xa3839b70  sb          $v1, -0x6490($gp)
    ctx->pc = 0x2b8758u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941552), (uint8_t)GPR_U32(ctx, 3));
label_2b875c:
    // 0x2b875c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2b875cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2b8760:
    // 0x2b8760: 0xa3829b77  sb          $v0, -0x6489($gp)
    ctx->pc = 0x2b8760u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941559), (uint8_t)GPR_U32(ctx, 2));
label_2b8764:
    // 0x2b8764: 0x26844690  addiu       $a0, $s4, 0x4690
    ctx->pc = 0x2b8764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 18064));
label_2b8768:
    // 0x2b8768: 0xac20cf1c  sw          $zero, -0x30E4($at)
    ctx->pc = 0x2b8768u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954780), GPR_U32(ctx, 0));
label_2b876c:
    // 0x2b876c: 0xae830130  sw          $v1, 0x130($s4)
    ctx->pc = 0x2b876cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 3));
label_2b8770:
    // 0x2b8770: 0x8e994690  lw          $t9, 0x4690($s4)
    ctx->pc = 0x2b8770u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18064)));
label_2b8774:
    // 0x2b8774: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x2b8774u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_2b8778:
    // 0x2b8778: 0x320f809  jalr        $t9
label_2b877c:
    if (ctx->pc == 0x2B877Cu) {
        ctx->pc = 0x2B877Cu;
            // 0x2b877c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8780u;
        goto label_2b8780;
    }
    ctx->pc = 0x2B8778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B8780u);
        ctx->pc = 0x2B877Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8778u;
            // 0x2b877c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B8780u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B8780u; }
            if (ctx->pc != 0x2B8780u) { return; }
        }
        }
    }
    ctx->pc = 0x2B8780u;
label_2b8780:
    // 0x2b8780: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b8780u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b8784:
    // 0x2b8784: 0xa6806760  sh          $zero, 0x6760($s4)
    ctx->pc = 0x2b8784u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 26464), (uint16_t)GPR_U32(ctx, 0));
label_2b8788:
    // 0x2b8788: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b8788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b878c:
    // 0x2b878c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2b878cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2b8790:
    // 0x2b8790: 0xc08e898  jal         func_23A260
label_2b8794:
    if (ctx->pc == 0x2B8794u) {
        ctx->pc = 0x2B8794u;
            // 0x2b8794: 0xa6806762  sh          $zero, 0x6762($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 26466), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2B8798u;
        goto label_2b8798;
    }
    ctx->pc = 0x2B8790u;
    SET_GPR_U32(ctx, 31, 0x2B8798u);
    ctx->pc = 0x2B8794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8790u;
            // 0x2b8794: 0xa6806762  sh          $zero, 0x6762($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 26466), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8798u; }
        if (ctx->pc != 0x2B8798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8798u; }
        if (ctx->pc != 0x2B8798u) { return; }
    }
    ctx->pc = 0x2B8798u;
label_2b8798:
    // 0x2b8798: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b8798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b879c:
    // 0x2b879c: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x2b879cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_2b87a0:
    // 0x2b87a0: 0x8e900144  lw          $s0, 0x144($s4)
    ctx->pc = 0x2b87a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b87a4:
    // 0x2b87a4: 0xc087690  jal         func_21DA40
label_2b87a8:
    if (ctx->pc == 0x2B87A8u) {
        ctx->pc = 0x2B87A8u;
            // 0x2b87a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B87ACu;
        goto label_2b87ac;
    }
    ctx->pc = 0x2B87A4u;
    SET_GPR_U32(ctx, 31, 0x2B87ACu);
    ctx->pc = 0x2B87A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B87A4u;
            // 0x2b87a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DA40u;
    if (runtime->hasFunction(0x21DA40u)) {
        auto targetFn = runtime->lookupFunction(0x21DA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B87ACu; }
        if (ctx->pc != 0x2B87ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMsgCursor__7CDC2MesFv_0x21da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B87ACu; }
        if (ctx->pc != 0x2B87ACu) { return; }
    }
    ctx->pc = 0x2B87ACu;
label_2b87ac:
    // 0x2b87ac: 0x86060006  lh          $a2, 0x6($s0)
    ctx->pc = 0x2b87acu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_2b87b0:
    // 0x2b87b0: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2b87b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_2b87b4:
    // 0x2b87b4: 0x23840  sll         $a3, $v0, 1
    ctx->pc = 0x2b87b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2b87b8:
    // 0x2b87b8: 0x24634642  addiu       $v1, $v1, 0x4642
    ctx->pc = 0x2b87b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17986));
label_2b87bc:
    // 0x2b87bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b87bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b87c0:
    // 0x2b87c0: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x2b87c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2b87c4:
    // 0x2b87c4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2b87c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2b87c8:
    // 0x2b87c8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2b87c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2b87cc:
    // 0x2b87cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b87ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2b87d0:
    // 0x2b87d0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2b87d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_2b87d4:
    // 0x2b87d4: 0x84710000  lh          $s1, 0x0($v1)
    ctx->pc = 0x2b87d4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2b87d8:
    // 0x2b87d8: 0xa6110008  sh          $s1, 0x8($s0)
    ctx->pc = 0x2b87d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 17));
label_2b87dc:
    // 0x2b87dc: 0xae91465c  sw          $s1, 0x465C($s4)
    ctx->pc = 0x2b87dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 18012), GPR_U32(ctx, 17));
label_2b87e0:
    // 0x2b87e0: 0xae824664  sw          $v0, 0x4664($s4)
    ctx->pc = 0x2b87e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 18020), GPR_U32(ctx, 2));
label_2b87e4:
    // 0x2b87e4: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2b87e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b87e8:
    // 0x2b87e8: 0xc0670f4  jal         func_19C3D0
label_2b87ec:
    if (ctx->pc == 0x2B87ECu) {
        ctx->pc = 0x2B87ECu;
            // 0x2b87ec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2B87F0u;
        goto label_2b87f0;
    }
    ctx->pc = 0x2B87E8u;
    SET_GPR_U32(ctx, 31, 0x2B87F0u);
    ctx->pc = 0x2B87ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B87E8u;
            // 0x2b87ec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C3D0u;
    if (runtime->hasFunction(0x19C3D0u)) {
        auto targetFn = runtime->lookupFunction(0x19C3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B87F0u; }
        if (ctx->pc != 0x2B87F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActiveChrNo__16CUserDataManagerFi_0x19c3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B87F0u; }
        if (ctx->pc != 0x2B87F0u) { return; }
    }
    ctx->pc = 0x2B87F0u;
label_2b87f0:
    // 0x2b87f0: 0x8f8294ac  lw          $v0, -0x6B54($gp)
    ctx->pc = 0x2b87f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2b87f4:
    // 0x2b87f4: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x2b87f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_2b87f8:
    // 0x2b87f8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2b87f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2b87fc:
    // 0x2b87fc: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2b87fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2b8800:
    // 0x2b8800: 0xc094274  jal         func_2509D0
label_2b8804:
    if (ctx->pc == 0x2B8804u) {
        ctx->pc = 0x2B8804u;
            // 0x2b8804: 0xa4314d98  sh          $s1, 0x4D98($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 19864), (uint16_t)GPR_U32(ctx, 17));
        ctx->pc = 0x2B8808u;
        goto label_2b8808;
    }
    ctx->pc = 0x2B8800u;
    SET_GPR_U32(ctx, 31, 0x2B8808u);
    ctx->pc = 0x2B8804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8800u;
            // 0x2b8804: 0xa4314d98  sh          $s1, 0x4D98($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 19864), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8808u; }
        if (ctx->pc != 0x2B8808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8808u; }
        if (ctx->pc != 0x2B8808u) { return; }
    }
    ctx->pc = 0x2B8808u;
label_2b8808:
    // 0x2b8808: 0x1000005f  b           . + 4 + (0x5F << 2)
label_2b880c:
    if (ctx->pc == 0x2B880Cu) {
        ctx->pc = 0x2B8810u;
        goto label_2b8810;
    }
    ctx->pc = 0x2B8808u;
    {
        const bool branch_taken_0x2b8808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8808) {
            ctx->pc = 0x2B8988u;
            goto label_2b8988;
        }
    }
    ctx->pc = 0x2B8810u;
label_2b8810:
    // 0x2b8810: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b8810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b8814:
    // 0x2b8814: 0xc08e7cc  jal         func_239F30
label_2b8818:
    if (ctx->pc == 0x2B8818u) {
        ctx->pc = 0x2B8818u;
            // 0x2b8818: 0x24a5f268  addiu       $a1, $a1, -0xD98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963816));
        ctx->pc = 0x2B881Cu;
        goto label_2b881c;
    }
    ctx->pc = 0x2B8814u;
    SET_GPR_U32(ctx, 31, 0x2B881Cu);
    ctx->pc = 0x2B8818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8814u;
            // 0x2b8818: 0x24a5f268  addiu       $a1, $a1, -0xD98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B881Cu; }
        if (ctx->pc != 0x2B881Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B881Cu; }
        if (ctx->pc != 0x2B881Cu) { return; }
    }
    ctx->pc = 0x2B881Cu;
label_2b881c:
    // 0x2b881c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b881cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b8820:
    // 0x2b8820: 0x10000059  b           . + 4 + (0x59 << 2)
label_2b8824:
    if (ctx->pc == 0x2B8824u) {
        ctx->pc = 0x2B8824u;
            // 0x2b8824: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2B8828u;
        goto label_2b8828;
    }
    ctx->pc = 0x2B8820u;
    {
        const bool branch_taken_0x2b8820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8820u;
            // 0x2b8824: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8820) {
            ctx->pc = 0x2B8988u;
            goto label_2b8988;
        }
    }
    ctx->pc = 0x2B8828u;
label_2b8828:
    // 0x2b8828: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b8828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b882c:
    // 0x2b882c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b882cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b8830:
    // 0x2b8830: 0xa6820014  sh          $v0, 0x14($s4)
    ctx->pc = 0x2b8830u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 2));
label_2b8834:
    // 0x2b8834: 0xc08e7cc  jal         func_239F30
label_2b8838:
    if (ctx->pc == 0x2B8838u) {
        ctx->pc = 0x2B8838u;
            // 0x2b8838: 0x24a5f280  addiu       $a1, $a1, -0xD80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963840));
        ctx->pc = 0x2B883Cu;
        goto label_2b883c;
    }
    ctx->pc = 0x2B8834u;
    SET_GPR_U32(ctx, 31, 0x2B883Cu);
    ctx->pc = 0x2B8838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8834u;
            // 0x2b8838: 0x24a5f280  addiu       $a1, $a1, -0xD80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B883Cu; }
        if (ctx->pc != 0x2B883Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B883Cu; }
        if (ctx->pc != 0x2B883Cu) { return; }
    }
    ctx->pc = 0x2B883Cu;
label_2b883c:
    // 0x2b883c: 0x8e820144  lw          $v0, 0x144($s4)
    ctx->pc = 0x2b883cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b8840:
    // 0x2b8840: 0x84420008  lh          $v0, 0x8($v0)
    ctx->pc = 0x2b8840u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_2b8844:
    // 0x2b8844: 0xae82465c  sw          $v0, 0x465C($s4)
    ctx->pc = 0x2b8844u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 18012), GPR_U32(ctx, 2));
label_2b8848:
    // 0x2b8848: 0x8e820144  lw          $v0, 0x144($s4)
    ctx->pc = 0x2b8848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b884c:
    // 0x2b884c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2b8850:
    if (ctx->pc == 0x2B8850u) {
        ctx->pc = 0x2B8850u;
            // 0x2b8850: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B8854u;
        goto label_2b8854;
    }
    ctx->pc = 0x2B884Cu;
    {
        const bool branch_taken_0x2b884c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B884Cu;
            // 0x2b8850: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b884c) {
            ctx->pc = 0x2B8858u;
            goto label_2b8858;
        }
    }
    ctx->pc = 0x2B8854u;
label_2b8854:
    // 0x2b8854: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2b8854u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b8858:
    // 0x2b8858: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b8858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b885c:
    // 0x2b885c: 0xc094274  jal         func_2509D0
label_2b8860:
    if (ctx->pc == 0x2B8860u) {
        ctx->pc = 0x2B8860u;
            // 0x2b8860: 0xa282467c  sb          $v0, 0x467C($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 18044), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2B8864u;
        goto label_2b8864;
    }
    ctx->pc = 0x2B885Cu;
    SET_GPR_U32(ctx, 31, 0x2B8864u);
    ctx->pc = 0x2B8860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B885Cu;
            // 0x2b8860: 0xa282467c  sb          $v0, 0x467C($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 18044), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8864u; }
        if (ctx->pc != 0x2B8864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8864u; }
        if (ctx->pc != 0x2B8864u) { return; }
    }
    ctx->pc = 0x2B8864u;
label_2b8864:
    // 0x2b8864: 0x10000048  b           . + 4 + (0x48 << 2)
label_2b8868:
    if (ctx->pc == 0x2B8868u) {
        ctx->pc = 0x2B886Cu;
        goto label_2b886c;
    }
    ctx->pc = 0x2B8864u;
    {
        const bool branch_taken_0x2b8864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8864) {
            ctx->pc = 0x2B8988u;
            goto label_2b8988;
        }
    }
    ctx->pc = 0x2B886Cu;
label_2b886c:
    // 0x2b886c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b886cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b8870:
    // 0x2b8870: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2b8870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2b8874:
    // 0x2b8874: 0xa423dc20  sh          $v1, -0x23E0($at)
    ctx->pc = 0x2b8874u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294958112), (uint16_t)GPR_U32(ctx, 3));
label_2b8878:
    // 0x2b8878: 0xa6820002  sh          $v0, 0x2($s4)
    ctx->pc = 0x2b8878u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
label_2b887c:
    // 0x2b887c: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2b887cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2b8880:
    // 0x2b8880: 0x8e820144  lw          $v0, 0x144($s4)
    ctx->pc = 0x2b8880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b8884:
    // 0x2b8884: 0x24c64642  addiu       $a2, $a2, 0x4642
    ctx->pc = 0x2b8884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17986));
label_2b8888:
    // 0x2b8888: 0x8e850138  lw          $a1, 0x138($s4)
    ctx->pc = 0x2b8888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
label_2b888c:
    // 0x2b888c: 0x26844618  addiu       $a0, $s4, 0x4618
    ctx->pc = 0x2b888cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 17944));
label_2b8890:
    // 0x2b8890: 0x84470006  lh          $a3, 0x6($v0)
    ctx->pc = 0x2b8890u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_2b8894:
    // 0x2b8894: 0x84430004  lh          $v1, 0x4($v0)
    ctx->pc = 0x2b8894u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_2b8898:
    // 0x2b8898: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2b8898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2b889c:
    // 0x2b889c: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x2b889cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2b88a0:
    // 0x2b88a0: 0x74040  sll         $t0, $a3, 1
    ctx->pc = 0x2b88a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2b88a4:
    // 0x2b88a4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2b88a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2b88a8:
    // 0x2b88a8: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x2b88a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2b88ac:
    // 0x2b88ac: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x2b88acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_2b88b0:
    // 0x2b88b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b88b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b88b4:
    // 0x2b88b4: 0x84500000  lh          $s0, 0x0($v0)
    ctx->pc = 0x2b88b4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2b88b8:
    // 0x2b88b8: 0xc0ad708  jal         func_2B5C20
label_2b88bc:
    if (ctx->pc == 0x2B88BCu) {
        ctx->pc = 0x2B88BCu;
            // 0x2b88bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B88C0u;
        goto label_2b88c0;
    }
    ctx->pc = 0x2B88B8u;
    SET_GPR_U32(ctx, 31, 0x2B88C0u);
    ctx->pc = 0x2B88BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B88B8u;
            // 0x2b88bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5C20u;
    if (runtime->hasFunction(0x2B5C20u)) {
        auto targetFn = runtime->lookupFunction(0x2B5C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B88C0u; }
        if (ctx->pc != 0x2B88C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        get_monster_tbl_bajjilevel__FPiiii_0x2b5c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B88C0u; }
        if (ctx->pc != 0x2B88C0u) { return; }
    }
    ctx->pc = 0x2B88C0u;
label_2b88c0:
    // 0x2b88c0: 0xae824614  sw          $v0, 0x4614($s4)
    ctx->pc = 0x2b88c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 17940), GPR_U32(ctx, 2));
label_2b88c4:
    // 0x2b88c4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b88c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b88c8:
    // 0x2b88c8: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2b88c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
label_2b88cc:
    // 0x2b88cc: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x2b88ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2b88d0:
    // 0x2b88d0: 0x2442cfd0  addiu       $v0, $v0, -0x3030
    ctx->pc = 0x2b88d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954960));
label_2b88d4:
    // 0x2b88d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b88d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b88d8:
    // 0x2b88d8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2b88d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2b88dc:
    // 0x2b88dc: 0x24a5f2a0  addiu       $a1, $a1, -0xD60
    ctx->pc = 0x2b88dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963872));
label_2b88e0:
    // 0x2b88e0: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x2b88e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2b88e4:
    // 0x2b88e4: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x2b88e4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
label_2b88e8:
    // 0x2b88e8: 0xc08e7cc  jal         func_239F30
label_2b88ec:
    if (ctx->pc == 0x2B88ECu) {
        ctx->pc = 0x2B88ECu;
            // 0x2b88ec: 0x7cc20010  sq          $v0, 0x10($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
        ctx->pc = 0x2B88F0u;
        goto label_2b88f0;
    }
    ctx->pc = 0x2B88E8u;
    SET_GPR_U32(ctx, 31, 0x2B88F0u);
    ctx->pc = 0x2B88ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B88E8u;
            // 0x2b88ec: 0x7cc20010  sq          $v0, 0x10($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B88F0u; }
        if (ctx->pc != 0x2B88F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B88F0u; }
        if (ctx->pc != 0x2B88F0u) { return; }
    }
    ctx->pc = 0x2B88F0u;
label_2b88f0:
    // 0x2b88f0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2b88f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2b88f4:
    // 0x2b88f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b88f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b88f8:
    // 0x2b88f8: 0x2442f2b0  addiu       $v0, $v0, -0xD50
    ctx->pc = 0x2b88f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963888));
label_2b88fc:
    // 0x2b88fc: 0xc0ad6c4  jal         func_2B5B10
label_2b8900:
    if (ctx->pc == 0x2B8900u) {
        ctx->pc = 0x2B8900u;
            // 0x2b8900: 0xafa20190  sw          $v0, 0x190($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
        ctx->pc = 0x2B8904u;
        goto label_2b8904;
    }
    ctx->pc = 0x2B88FCu;
    SET_GPR_U32(ctx, 31, 0x2B8904u);
    ctx->pc = 0x2B8900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B88FCu;
            // 0x2b8900: 0xafa20190  sw          $v0, 0x190($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8904u; }
        if (ctx->pc != 0x2B8904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterName__Fi_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8904u; }
        if (ctx->pc != 0x2B8904u) { return; }
    }
    ctx->pc = 0x2B8904u;
label_2b8904:
    // 0x2b8904: 0xafa20194  sw          $v0, 0x194($sp)
    ctx->pc = 0x2b8904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
label_2b8908:
    // 0x2b8908: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b8908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b890c:
    // 0x2b890c: 0x10000007  b           . + 4 + (0x7 << 2)
label_2b8910:
    if (ctx->pc == 0x2B8910u) {
        ctx->pc = 0x2B8910u;
            // 0x2b8910: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8914u;
        goto label_2b8914;
    }
    ctx->pc = 0x2B890Cu;
    {
        const bool branch_taken_0x2b890c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B890Cu;
            // 0x2b8910: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b890c) {
            ctx->pc = 0x2B892Cu;
            goto label_2b892c;
        }
    }
    ctx->pc = 0x2B8914u;
label_2b8914:
    // 0x2b8914: 0xc0ad6c4  jal         func_2B5B10
label_2b8918:
    if (ctx->pc == 0x2B8918u) {
        ctx->pc = 0x2B8918u;
            // 0x2b8918: 0x8c444618  lw          $a0, 0x4618($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17944)));
        ctx->pc = 0x2B891Cu;
        goto label_2b891c;
    }
    ctx->pc = 0x2B8914u;
    SET_GPR_U32(ctx, 31, 0x2B891Cu);
    ctx->pc = 0x2B8918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8914u;
            // 0x2b8918: 0x8c444618  lw          $a0, 0x4618($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17944)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B891Cu; }
        if (ctx->pc != 0x2B891Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterName__Fi_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B891Cu; }
        if (ctx->pc != 0x2B891Cu) { return; }
    }
    ctx->pc = 0x2B891Cu;
label_2b891c:
    // 0x2b891c: 0x23d1821  addu        $v1, $s1, $sp
    ctx->pc = 0x2b891cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
label_2b8920:
    // 0x2b8920: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b8920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b8924:
    // 0x2b8924: 0xac620198  sw          $v0, 0x198($v1)
    ctx->pc = 0x2b8924u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 408), GPR_U32(ctx, 2));
label_2b8928:
    // 0x2b8928: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b8928u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2b892c:
    // 0x2b892c: 0x0  nop
    ctx->pc = 0x2b892cu;
    // NOP
label_2b8930:
    // 0x2b8930: 0x8e834614  lw          $v1, 0x4614($s4)
    ctx->pc = 0x2b8930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 17940)));
label_2b8934:
    // 0x2b8934: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x2b8934u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2b8938:
    // 0x2b8938: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_2b893c:
    if (ctx->pc == 0x2B893Cu) {
        ctx->pc = 0x2B893Cu;
            // 0x2b893c: 0x2911021  addu        $v0, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->pc = 0x2B8940u;
        goto label_2b8940;
    }
    ctx->pc = 0x2B8938u;
    {
        const bool branch_taken_0x2b8938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B893Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8938u;
            // 0x2b893c: 0x2911021  addu        $v0, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8938) {
            ctx->pc = 0x2B8914u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b8914;
        }
    }
    ctx->pc = 0x2B8940u;
label_2b8940:
    // 0x2b8940: 0x24650033  addiu       $a1, $v1, 0x33
    ctx->pc = 0x2b8940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 51));
label_2b8944:
    // 0x2b8944: 0xc0877e0  jal         func_21DF80
label_2b8948:
    if (ctx->pc == 0x2B8948u) {
        ctx->pc = 0x2B8948u;
            // 0x2b8948: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B894Cu;
        goto label_2b894c;
    }
    ctx->pc = 0x2B8944u;
    SET_GPR_U32(ctx, 31, 0x2B894Cu);
    ctx->pc = 0x2B8948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8944u;
            // 0x2b8948: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B894Cu; }
        if (ctx->pc != 0x2B894Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B894Cu; }
        if (ctx->pc != 0x2B894Cu) { return; }
    }
    ctx->pc = 0x2B894Cu;
label_2b894c:
    // 0x2b894c: 0x8e824614  lw          $v0, 0x4614($s4)
    ctx->pc = 0x2b894cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 17940)));
label_2b8950:
    // 0x2b8950: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b8950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b8954:
    // 0x2b8954: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2b8954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2b8958:
    // 0x2b8958: 0xc087720  jal         func_21DC80
label_2b895c:
    if (ctx->pc == 0x2B895Cu) {
        ctx->pc = 0x2B895Cu;
            // 0x2b895c: 0x24460002  addiu       $a2, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x2B8960u;
        goto label_2b8960;
    }
    ctx->pc = 0x2B8958u;
    SET_GPR_U32(ctx, 31, 0x2B8960u);
    ctx->pc = 0x2B895Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8958u;
            // 0x2b895c: 0x24460002  addiu       $a2, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8960u; }
        if (ctx->pc != 0x2B8960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8960u; }
        if (ctx->pc != 0x2B8960u) { return; }
    }
    ctx->pc = 0x2B8960u;
label_2b8960:
    // 0x2b8960: 0xc087898  jal         func_21E260
label_2b8964:
    if (ctx->pc == 0x2B8964u) {
        ctx->pc = 0x2B8964u;
            // 0x2b8964: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8968u;
        goto label_2b8968;
    }
    ctx->pc = 0x2B8960u;
    SET_GPR_U32(ctx, 31, 0x2B8968u);
    ctx->pc = 0x2B8964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8960u;
            // 0x2b8964: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8968u; }
        if (ctx->pc != 0x2B8968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8968u; }
        if (ctx->pc != 0x2B8968u) { return; }
    }
    ctx->pc = 0x2B8968u;
label_2b8968:
    // 0x2b8968: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b8968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b896c:
    // 0x2b896c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b896cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b8970:
    // 0x2b8970: 0xa020dc23  sb          $zero, -0x23DD($at)
    ctx->pc = 0x2b8970u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294958115), (uint8_t)GPR_U32(ctx, 0));
label_2b8974:
    // 0x2b8974: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b8974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b8978:
    // 0x2b8978: 0xa022dc22  sb          $v0, -0x23DE($at)
    ctx->pc = 0x2b8978u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294958114), (uint8_t)GPR_U32(ctx, 2));
label_2b897c:
    // 0x2b897c: 0x8e824614  lw          $v0, 0x4614($s4)
    ctx->pc = 0x2b897cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 17940)));
label_2b8980:
    // 0x2b8980: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b8980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b8984:
    // 0x2b8984: 0xac22dc28  sw          $v0, -0x23D8($at)
    ctx->pc = 0x2b8984u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958120), GPR_U32(ctx, 2));
label_2b8988:
    // 0x2b8988: 0x8e834660  lw          $v1, 0x4660($s4)
    ctx->pc = 0x2b8988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18016)));
label_2b898c:
    // 0x2b898c: 0x8e82465c  lw          $v0, 0x465C($s4)
    ctx->pc = 0x2b898cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18012)));
label_2b8990:
    // 0x2b8990: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2b8994:
    if (ctx->pc == 0x2B8994u) {
        ctx->pc = 0x2B8994u;
            // 0x2b8994: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->pc = 0x2B8998u;
        goto label_2b8998;
    }
    ctx->pc = 0x2B8990u;
    {
        const bool branch_taken_0x2b8990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B8994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8990u;
            // 0x2b8994: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8990) {
            ctx->pc = 0x2B89A8u;
            goto label_2b89a8;
        }
    }
    ctx->pc = 0x2B8998u;
label_2b8998:
    // 0x2b8998: 0xa6826760  sh          $v0, 0x6760($s4)
    ctx->pc = 0x2b8998u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 26464), (uint16_t)GPR_U32(ctx, 2));
label_2b899c:
    // 0x2b899c: 0xa6806762  sh          $zero, 0x6762($s4)
    ctx->pc = 0x2b899cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 26466), (uint16_t)GPR_U32(ctx, 0));
label_2b89a0:
    // 0x2b89a0: 0x8e82465c  lw          $v0, 0x465C($s4)
    ctx->pc = 0x2b89a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18012)));
label_2b89a4:
    // 0x2b89a4: 0xae824660  sw          $v0, 0x4660($s4)
    ctx->pc = 0x2b89a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 18016), GPR_U32(ctx, 2));
label_2b89a8:
    // 0x2b89a8: 0x8e840144  lw          $a0, 0x144($s4)
    ctx->pc = 0x2b89a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b89ac:
    // 0x2b89ac: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
label_2b89b0:
    if (ctx->pc == 0x2B89B0u) {
        ctx->pc = 0x2B89B4u;
        goto label_2b89b4;
    }
    ctx->pc = 0x2B89ACu;
    {
        const bool branch_taken_0x2b89ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b89ac) {
            ctx->pc = 0x2B8A24u;
            goto label_2b8a24;
        }
    }
    ctx->pc = 0x2B89B4u;
label_2b89b4:
    // 0x2b89b4: 0x9083000a  lbu         $v1, 0xA($a0)
    ctx->pc = 0x2b89b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
label_2b89b8:
    // 0x2b89b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b89b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b89bc:
    // 0x2b89bc: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
label_2b89c0:
    if (ctx->pc == 0x2B89C0u) {
        ctx->pc = 0x2B89C4u;
        goto label_2b89c4;
    }
    ctx->pc = 0x2B89BCu;
    {
        const bool branch_taken_0x2b89bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b89bc) {
            ctx->pc = 0x2B8A20u;
            goto label_2b8a20;
        }
    }
    ctx->pc = 0x2B89C4u;
label_2b89c4:
    // 0x2b89c4: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x2b89c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_2b89c8:
    // 0x2b89c8: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
label_2b89cc:
    if (ctx->pc == 0x2B89CCu) {
        ctx->pc = 0x2B89D0u;
        goto label_2b89d0;
    }
    ctx->pc = 0x2B89C8u;
    {
        const bool branch_taken_0x2b89c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b89c8) {
            ctx->pc = 0x2B8A20u;
            goto label_2b8a20;
        }
    }
    ctx->pc = 0x2B89D0u;
label_2b89d0:
    // 0x2b89d0: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x2b89d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
label_2b89d4:
    // 0x2b89d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b89d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b89d8:
    // 0x2b89d8: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_2b89dc:
    if (ctx->pc == 0x2B89DCu) {
        ctx->pc = 0x2B89E0u;
        goto label_2b89e0;
    }
    ctx->pc = 0x2B89D8u;
    {
        const bool branch_taken_0x2b89d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b89d8) {
            ctx->pc = 0x2B8A04u;
            goto label_2b8a04;
        }
    }
    ctx->pc = 0x2B89E0u;
label_2b89e0:
    // 0x2b89e0: 0x92823c28  lbu         $v0, 0x3C28($s4)
    ctx->pc = 0x2b89e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 15400)));
label_2b89e4:
    // 0x2b89e4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2b89e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2b89e8:
    // 0x2b89e8: 0xa2823c28  sb          $v0, 0x3C28($s4)
    ctx->pc = 0x2b89e8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 15400), (uint8_t)GPR_U32(ctx, 2));
label_2b89ec:
    // 0x2b89ec: 0x92823c28  lbu         $v0, 0x3C28($s4)
    ctx->pc = 0x2b89ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 15400)));
label_2b89f0:
    // 0x2b89f0: 0x28410081  slti        $at, $v0, 0x81
    ctx->pc = 0x2b89f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)129) ? 1 : 0);
label_2b89f4:
    // 0x2b89f4: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
label_2b89f8:
    if (ctx->pc == 0x2B89F8u) {
        ctx->pc = 0x2B89F8u;
            // 0x2b89f8: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2B89FCu;
        goto label_2b89fc;
    }
    ctx->pc = 0x2B89F4u;
    {
        const bool branch_taken_0x2b89f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B89F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B89F4u;
            // 0x2b89f8: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b89f4) {
            ctx->pc = 0x2B8A24u;
            goto label_2b8a24;
        }
    }
    ctx->pc = 0x2B89FCu;
label_2b89fc:
    // 0x2b89fc: 0x10000009  b           . + 4 + (0x9 << 2)
label_2b8a00:
    if (ctx->pc == 0x2B8A00u) {
        ctx->pc = 0x2B8A00u;
            // 0x2b8a00: 0xa2823c28  sb          $v0, 0x3C28($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 15400), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2B8A04u;
        goto label_2b8a04;
    }
    ctx->pc = 0x2B89FCu;
    {
        const bool branch_taken_0x2b89fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B89FCu;
            // 0x2b8a00: 0xa2823c28  sb          $v0, 0x3C28($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 15400), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b89fc) {
            ctx->pc = 0x2B8A24u;
            goto label_2b8a24;
        }
    }
    ctx->pc = 0x2B8A04u;
label_2b8a04:
    // 0x2b8a04: 0x92823c28  lbu         $v0, 0x3C28($s4)
    ctx->pc = 0x2b8a04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 15400)));
label_2b8a08:
    // 0x2b8a08: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x2b8a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_2b8a0c:
    // 0x2b8a0c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_2b8a10:
    if (ctx->pc == 0x2B8A10u) {
        ctx->pc = 0x2B8A14u;
        goto label_2b8a14;
    }
    ctx->pc = 0x2B8A0Cu;
    {
        const bool branch_taken_0x2b8a0c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2b8a0c) {
            ctx->pc = 0x2B8A18u;
            goto label_2b8a18;
        }
    }
    ctx->pc = 0x2B8A14u;
label_2b8a14:
    // 0x2b8a14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b8a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8a18:
    // 0x2b8a18: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b8a1c:
    if (ctx->pc == 0x2B8A1Cu) {
        ctx->pc = 0x2B8A1Cu;
            // 0x2b8a1c: 0xa2823c28  sb          $v0, 0x3C28($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 15400), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2B8A20u;
        goto label_2b8a20;
    }
    ctx->pc = 0x2B8A18u;
    {
        const bool branch_taken_0x2b8a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8A18u;
            // 0x2b8a1c: 0xa2823c28  sb          $v0, 0x3C28($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 15400), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8a18) {
            ctx->pc = 0x2B8A24u;
            goto label_2b8a24;
        }
    }
    ctx->pc = 0x2B8A20u;
label_2b8a20:
    // 0x2b8a20: 0xa2803c28  sb          $zero, 0x3C28($s4)
    ctx->pc = 0x2b8a20u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 15400), (uint8_t)GPR_U32(ctx, 0));
label_2b8a24:
    // 0x2b8a24: 0x12e0009e  beqz        $s7, . + 4 + (0x9E << 2)
label_2b8a28:
    if (ctx->pc == 0x2B8A28u) {
        ctx->pc = 0x2B8A28u;
            // 0x2b8a28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8A2Cu;
        goto label_2b8a2c;
    }
    ctx->pc = 0x2B8A24u;
    {
        const bool branch_taken_0x2b8a24 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8A24u;
            // 0x2b8a28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8a24) {
            ctx->pc = 0x2B8CA0u;
            goto label_2b8ca0;
        }
    }
    ctx->pc = 0x2B8A2Cu;
label_2b8a2c:
    // 0x2b8a2c: 0x8e820144  lw          $v0, 0x144($s4)
    ctx->pc = 0x2b8a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b8a30:
    // 0x2b8a30: 0x1040009a  beqz        $v0, . + 4 + (0x9A << 2)
label_2b8a34:
    if (ctx->pc == 0x2B8A34u) {
        ctx->pc = 0x2B8A34u;
            // 0x2b8a34: 0x3c0201f1  lui         $v0, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x2B8A38u;
        goto label_2b8a38;
    }
    ctx->pc = 0x2B8A30u;
    {
        const bool branch_taken_0x2b8a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8A30u;
            // 0x2b8a34: 0x3c0201f1  lui         $v0, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8a30) {
            ctx->pc = 0x2B8C9Cu;
            goto label_2b8c9c;
        }
    }
    ctx->pc = 0x2B8A38u;
label_2b8a38:
    // 0x2b8a38: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x2b8a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2b8a3c:
    // 0x2b8a3c: 0x2442cff0  addiu       $v0, $v0, -0x3010
    ctx->pc = 0x2b8a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954992));
label_2b8a40:
    // 0x2b8a40: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2b8a40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2b8a44:
    // 0x2b8a44: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x2b8a44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
label_2b8a48:
    // 0x2b8a48: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2b8a48u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_2b8a4c:
    // 0x2b8a4c: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x2b8a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
label_2b8a50:
    // 0x2b8a50: 0x8e83465c  lw          $v1, 0x465C($s4)
    ctx->pc = 0x2b8a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18012)));
label_2b8a54:
    // 0x2b8a54: 0x8e840144  lw          $a0, 0x144($s4)
    ctx->pc = 0x2b8a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b8a58:
    // 0x2b8a58: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b8a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2b8a5c:
    // 0x2b8a5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b8a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b8a60:
    // 0x2b8a60: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2b8a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2b8a64:
    // 0x2b8a64: 0xc066a98  jal         func_19AA60
label_2b8a68:
    if (ctx->pc == 0x2B8A68u) {
        ctx->pc = 0x2B8A68u;
            // 0x2b8a68: 0x24502710  addiu       $s0, $v0, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 10000));
        ctx->pc = 0x2B8A6Cu;
        goto label_2b8a6c;
    }
    ctx->pc = 0x2B8A64u;
    SET_GPR_U32(ctx, 31, 0x2B8A6Cu);
    ctx->pc = 0x2B8A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8A64u;
            // 0x2b8a68: 0x24502710  addiu       $s0, $v0, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AA60u;
    if (runtime->hasFunction(0x19AA60u)) {
        auto targetFn = runtime->lookupFunction(0x19AA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8A6Cu; }
        if (ctx->pc != 0x2B8A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDegreeLevel__16MOS_CHANGE_PARAMFv_0x19aa60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8A6Cu; }
        if (ctx->pc != 0x2B8A6Cu) { return; }
    }
    ctx->pc = 0x2B8A6Cu;
label_2b8a6c:
    // 0x2b8a6c: 0x8e880138  lw          $t0, 0x138($s4)
    ctx->pc = 0x2b8a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
label_2b8a70:
    // 0x2b8a70: 0x2607000a  addiu       $a3, $s0, 0xA
    ctx->pc = 0x2b8a70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
label_2b8a74:
    // 0x2b8a74: 0x2604000b  addiu       $a0, $s0, 0xB
    ctx->pc = 0x2b8a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11));
label_2b8a78:
    // 0x2b8a78: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b8a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b8a7c:
    // 0x2b8a7c: 0x24490001  addiu       $t1, $v0, 0x1
    ctx->pc = 0x2b8a7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b8a80:
    // 0x2b8a80: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b8a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b8a84:
    // 0x2b8a84: 0x8c30ca5c  lw          $s0, -0x35A4($at)
    ctx->pc = 0x2b8a84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
label_2b8a88:
    // 0x2b8a88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b8a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b8a8c:
    // 0x2b8a8c: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x2b8a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2b8a90:
    // 0x2b8a90: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2b8a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b8a94:
    // 0x2b8a94: 0xafa701b8  sw          $a3, 0x1B8($sp)
    ctx->pc = 0x2b8a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 7));
label_2b8a98:
    // 0x2b8a98: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x2b8a98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_2b8a9c:
    // 0x2b8a9c: 0xafa401bc  sw          $a0, 0x1BC($sp)
    ctx->pc = 0x2b8a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 4));
label_2b8aa0:
    // 0x2b8aa0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2b8aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2b8aa4:
    // 0x2b8aa4: 0xafa301c0  sw          $v1, 0x1C0($sp)
    ctx->pc = 0x2b8aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 3));
label_2b8aa8:
    // 0x2b8aa8: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x2b8aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2b8aac:
    // 0x2b8aac: 0x893821  addu        $a3, $a0, $t1
    ctx->pc = 0x2b8aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_2b8ab0:
    // 0x2b8ab0: 0xafa701b4  sw          $a3, 0x1B4($sp)
    ctx->pc = 0x2b8ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 7));
label_2b8ab4:
    // 0x2b8ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b8ab8:
    // 0x2b8ab8: 0xae0317e4  sw          $v1, 0x17E4($s0)
    ctx->pc = 0x2b8ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6116), GPR_U32(ctx, 3));
label_2b8abc:
    // 0x2b8abc: 0xae021acc  sw          $v0, 0x1ACC($s0)
    ctx->pc = 0x2b8abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6860), GPR_U32(ctx, 2));
label_2b8ac0:
    // 0x2b8ac0: 0xc0876ec  jal         func_21DBB0
label_2b8ac4:
    if (ctx->pc == 0x2B8AC4u) {
        ctx->pc = 0x2B8AC4u;
            // 0x2b8ac4: 0xae001ad0  sw          $zero, 0x1AD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6864), GPR_U32(ctx, 0));
        ctx->pc = 0x2B8AC8u;
        goto label_2b8ac8;
    }
    ctx->pc = 0x2B8AC0u;
    SET_GPR_U32(ctx, 31, 0x2B8AC8u);
    ctx->pc = 0x2B8AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8AC0u;
            // 0x2b8ac4: 0xae001ad0  sw          $zero, 0x1AD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DBB0u;
    if (runtime->hasFunction(0x21DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x21DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8AC8u; }
        if (ctx->pc != 0x2B8AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPii_0x21dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8AC8u; }
        if (ctx->pc != 0x2B8AC8u) { return; }
    }
    ctx->pc = 0x2B8AC8u;
label_2b8ac8:
    // 0x2b8ac8: 0x8e820144  lw          $v0, 0x144($s4)
    ctx->pc = 0x2b8ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 324)));
label_2b8acc:
    // 0x2b8acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b8ad0:
    // 0x2b8ad0: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x2b8ad0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2b8ad4:
    // 0x2b8ad4: 0xc0877b8  jal         func_21DEE0
label_2b8ad8:
    if (ctx->pc == 0x2B8AD8u) {
        ctx->pc = 0x2B8AD8u;
            // 0x2b8ad8: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2B8ADCu;
        goto label_2b8adc;
    }
    ctx->pc = 0x2B8AD4u;
    SET_GPR_U32(ctx, 31, 0x2B8ADCu);
    ctx->pc = 0x2B8AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8AD4u;
            // 0x2b8ad8: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8ADCu; }
        if (ctx->pc != 0x2B8ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8ADCu; }
        if (ctx->pc != 0x2B8ADCu) { return; }
    }
    ctx->pc = 0x2B8ADCu;
label_2b8adc:
    // 0x2b8adc: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x2b8adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_2b8ae0:
    // 0x2b8ae0: 0xae021ad4  sw          $v0, 0x1AD4($s0)
    ctx->pc = 0x2b8ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6868), GPR_U32(ctx, 2));
label_2b8ae4:
    // 0x2b8ae4: 0xc0ad6c4  jal         func_2B5B10
label_2b8ae8:
    if (ctx->pc == 0x2B8AE8u) {
        ctx->pc = 0x2B8AE8u;
            // 0x2b8ae8: 0x8e84465c  lw          $a0, 0x465C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18012)));
        ctx->pc = 0x2B8AECu;
        goto label_2b8aec;
    }
    ctx->pc = 0x2B8AE4u;
    SET_GPR_U32(ctx, 31, 0x2B8AECu);
    ctx->pc = 0x2B8AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8AE4u;
            // 0x2b8ae8: 0x8e84465c  lw          $a0, 0x465C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18012)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8AECu; }
        if (ctx->pc != 0x2B8AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterName__Fi_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8AECu; }
        if (ctx->pc != 0x2B8AECu) { return; }
    }
    ctx->pc = 0x2B8AECu;
label_2b8aec:
    // 0x2b8aec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b8af0:
    if (ctx->pc == 0x2B8AF0u) {
        ctx->pc = 0x2B8AF0u;
            // 0x2b8af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8AF4u;
        goto label_2b8af4;
    }
    ctx->pc = 0x2B8AECu;
    {
        const bool branch_taken_0x2b8aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8AECu;
            // 0x2b8af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8aec) {
            ctx->pc = 0x2B8B04u;
            goto label_2b8b04;
        }
    }
    ctx->pc = 0x2B8AF4u;
label_2b8af4:
    // 0x2b8af4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b8af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b8af8:
    // 0x2b8af8: 0xc04a3dc  jal         func_128F70
label_2b8afc:
    if (ctx->pc == 0x2B8AFCu) {
        ctx->pc = 0x2B8AFCu;
            // 0x2b8afc: 0x26041801  addiu       $a0, $s0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6145));
        ctx->pc = 0x2B8B00u;
        goto label_2b8b00;
    }
    ctx->pc = 0x2B8AF8u;
    SET_GPR_U32(ctx, 31, 0x2B8B00u);
    ctx->pc = 0x2B8AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8AF8u;
            // 0x2b8afc: 0x26041801  addiu       $a0, $s0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8B00u; }
        if (ctx->pc != 0x2B8B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8B00u; }
        if (ctx->pc != 0x2B8B00u) { return; }
    }
    ctx->pc = 0x2B8B00u;
label_2b8b00:
    // 0x2b8b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b8b04:
    // 0x2b8b04: 0xc0877e0  jal         func_21DF80
label_2b8b08:
    if (ctx->pc == 0x2B8B08u) {
        ctx->pc = 0x2B8B08u;
            // 0x2b8b08: 0x240504b0  addiu       $a1, $zero, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
        ctx->pc = 0x2B8B0Cu;
        goto label_2b8b0c;
    }
    ctx->pc = 0x2B8B04u;
    SET_GPR_U32(ctx, 31, 0x2B8B0Cu);
    ctx->pc = 0x2B8B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8B04u;
            // 0x2b8b08: 0x240504b0  addiu       $a1, $zero, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8B0Cu; }
        if (ctx->pc != 0x2B8B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8B0Cu; }
        if (ctx->pc != 0x2B8B0Cu) { return; }
    }
    ctx->pc = 0x2B8B0Cu;
label_2b8b0c:
    // 0x2b8b0c: 0xc087898  jal         func_21E260
label_2b8b10:
    if (ctx->pc == 0x2B8B10u) {
        ctx->pc = 0x2B8B10u;
            // 0x2b8b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8B14u;
        goto label_2b8b14;
    }
    ctx->pc = 0x2B8B0Cu;
    SET_GPR_U32(ctx, 31, 0x2B8B14u);
    ctx->pc = 0x2B8B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8B0Cu;
            // 0x2b8b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8B14u; }
        if (ctx->pc != 0x2B8B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8B14u; }
        if (ctx->pc != 0x2B8B14u) { return; }
    }
    ctx->pc = 0x2B8B14u;
label_2b8b14:
    // 0x2b8b14: 0x8e850138  lw          $a1, 0x138($s4)
    ctx->pc = 0x2b8b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
label_2b8b18:
    // 0x2b8b18: 0x8e820140  lw          $v0, 0x140($s4)
    ctx->pc = 0x2b8b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
label_2b8b1c:
    // 0x2b8b1c: 0x8e844674  lw          $a0, 0x4674($s4)
    ctx->pc = 0x2b8b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18036)));
label_2b8b20:
    // 0x2b8b20: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2b8b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2b8b24:
    // 0x2b8b24: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2b8b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2b8b28:
    // 0x2b8b28: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2b8b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2b8b2c:
    // 0x2b8b2c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2b8b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2b8b30:
    // 0x2b8b30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b8b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2b8b34:
    // 0x2b8b34: 0x10800059  beqz        $a0, . + 4 + (0x59 << 2)
label_2b8b38:
    if (ctx->pc == 0x2B8B38u) {
        ctx->pc = 0x2B8B38u;
            // 0x2b8b38: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2B8B3Cu;
        goto label_2b8b3c;
    }
    ctx->pc = 0x2B8B34u;
    {
        const bool branch_taken_0x2b8b34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8B34u;
            // 0x2b8b38: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b34) {
            ctx->pc = 0x2B8C9Cu;
            goto label_2b8c9c;
        }
    }
    ctx->pc = 0x2B8B3Cu;
label_2b8b3c:
    // 0x2b8b3c: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
label_2b8b40:
    if (ctx->pc == 0x2B8B40u) {
        ctx->pc = 0x2B8B40u;
            // 0x2b8b40: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2B8B44u;
        goto label_2b8b44;
    }
    ctx->pc = 0x2B8B3Cu;
    {
        const bool branch_taken_0x2b8b3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8B3Cu;
            // 0x2b8b40: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b3c) {
            ctx->pc = 0x2B8C68u;
            goto label_2b8c68;
        }
    }
    ctx->pc = 0x2B8B44u;
label_2b8b44:
    // 0x2b8b44: 0xc0945c8  jal         func_251720
label_2b8b48:
    if (ctx->pc == 0x2B8B48u) {
        ctx->pc = 0x2B8B48u;
            // 0x2b8b48: 0xc60c0010  lwc1        $f12, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2B8B4Cu;
        goto label_2b8b4c;
    }
    ctx->pc = 0x2B8B44u;
    SET_GPR_U32(ctx, 31, 0x2B8B4Cu);
    ctx->pc = 0x2B8B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8B44u;
            // 0x2b8b48: 0xc60c0010  lwc1        $f12, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x251720u;
    if (runtime->hasFunction(0x251720u)) {
        auto targetFn = runtime->lookupFunction(0x251720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8B4Cu; }
        if (ctx->pc != 0x2B8B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDispVolumeForFloat__Ff_0x251720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8B4Cu; }
        if (ctx->pc != 0x2B8B4Cu) { return; }
    }
    ctx->pc = 0x2B8B4Cu;
label_2b8b4c:
    // 0x2b8b4c: 0x8e844674  lw          $a0, 0x4674($s4)
    ctx->pc = 0x2b8b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18036)));
label_2b8b50:
    // 0x2b8b50: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b8b50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b8b54:
    // 0x2b8b54: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b8b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b8b58:
    // 0x2b8b58: 0xc089728  jal         func_225CA0
label_2b8b5c:
    if (ctx->pc == 0x2B8B5Cu) {
        ctx->pc = 0x2B8B5Cu;
            // 0x2b8b5c: 0x24a5f2b8  addiu       $a1, $a1, -0xD48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963896));
        ctx->pc = 0x2B8B60u;
        goto label_2b8b60;
    }
    ctx->pc = 0x2B8B58u;
    SET_GPR_U32(ctx, 31, 0x2B8B60u);
    ctx->pc = 0x2B8B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8B58u;
            // 0x2b8b5c: 0x24a5f2b8  addiu       $a1, $a1, -0xD48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8B60u; }
        if (ctx->pc != 0x2B8B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8B60u; }
        if (ctx->pc != 0x2B8B60u) { return; }
    }
    ctx->pc = 0x2B8B60u;
label_2b8b60:
    // 0x2b8b60: 0xc0945c8  jal         func_251720
label_2b8b64:
    if (ctx->pc == 0x2B8B64u) {
        ctx->pc = 0x2B8B64u;
            // 0x2b8b64: 0xc60c000c  lwc1        $f12, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2B8B68u;
        goto label_2b8b68;
    }
    ctx->pc = 0x2B8B60u;
    SET_GPR_U32(ctx, 31, 0x2B8B68u);
    ctx->pc = 0x2B8B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8B60u;
            // 0x2b8b64: 0xc60c000c  lwc1        $f12, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x251720u;
    if (runtime->hasFunction(0x251720u)) {
        auto targetFn = runtime->lookupFunction(0x251720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8B68u; }
        if (ctx->pc != 0x2B8B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDispVolumeForFloat__Ff_0x251720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8B68u; }
        if (ctx->pc != 0x2B8B68u) { return; }
    }
    ctx->pc = 0x2B8B68u;
label_2b8b68:
    // 0x2b8b68: 0x8e844674  lw          $a0, 0x4674($s4)
    ctx->pc = 0x2b8b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18036)));
label_2b8b6c:
    // 0x2b8b6c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b8b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b8b70:
    // 0x2b8b70: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b8b70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b8b74:
    // 0x2b8b74: 0xc089728  jal         func_225CA0
label_2b8b78:
    if (ctx->pc == 0x2B8B78u) {
        ctx->pc = 0x2B8B78u;
            // 0x2b8b78: 0x24a5f2c8  addiu       $a1, $a1, -0xD38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963912));
        ctx->pc = 0x2B8B7Cu;
        goto label_2b8b7c;
    }
    ctx->pc = 0x2B8B74u;
    SET_GPR_U32(ctx, 31, 0x2B8B7Cu);
    ctx->pc = 0x2B8B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8B74u;
            // 0x2b8b78: 0x24a5f2c8  addiu       $a1, $a1, -0xD38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8B7Cu; }
        if (ctx->pc != 0x2B8B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8B7Cu; }
        if (ctx->pc != 0x2B8B7Cu) { return; }
    }
    ctx->pc = 0x2B8B7Cu;
label_2b8b7c:
    // 0x2b8b7c: 0xc065b30  jal         func_196CC0
label_2b8b80:
    if (ctx->pc == 0x2B8B80u) {
        ctx->pc = 0x2B8B80u;
            // 0x2b8b80: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->pc = 0x2B8B84u;
        goto label_2b8b84;
    }
    ctx->pc = 0x2B8B7Cu;
    SET_GPR_U32(ctx, 31, 0x2B8B84u);
    ctx->pc = 0x2B8B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8B7Cu;
            // 0x2b8b80: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196CC0u;
    if (runtime->hasFunction(0x196CC0u)) {
        auto targetFn = runtime->lookupFunction(0x196CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8B84u; }
        if (ctx->pc != 0x2B8B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRate__11COMMON_GAGEFv_0x196cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8B84u; }
        if (ctx->pc != 0x2B8B84u) { return; }
    }
    ctx->pc = 0x2B8B84u;
label_2b8b84:
    // 0x2b8b84: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b8b84u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2b8b88:
    // 0x2b8b88: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2b8b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2b8b8c:
    // 0x2b8b8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b8b8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b8b90:
    // 0x2b8b90: 0xc0945c8  jal         func_251720
label_2b8b94:
    if (ctx->pc == 0x2B8B94u) {
        ctx->pc = 0x2B8B94u;
            // 0x2b8b94: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x2B8B98u;
        goto label_2b8b98;
    }
    ctx->pc = 0x2B8B90u;
    SET_GPR_U32(ctx, 31, 0x2B8B98u);
    ctx->pc = 0x2B8B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8B90u;
            // 0x2b8b94: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x251720u;
    if (runtime->hasFunction(0x251720u)) {
        auto targetFn = runtime->lookupFunction(0x251720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8B98u; }
        if (ctx->pc != 0x2B8B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDispVolumeForFloat__Ff_0x251720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8B98u; }
        if (ctx->pc != 0x2B8B98u) { return; }
    }
    ctx->pc = 0x2B8B98u;
label_2b8b98:
    // 0x2b8b98: 0x8e844674  lw          $a0, 0x4674($s4)
    ctx->pc = 0x2b8b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18036)));
label_2b8b9c:
    // 0x2b8b9c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b8b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b8ba0:
    // 0x2b8ba0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b8ba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b8ba4:
    // 0x2b8ba4: 0xc089728  jal         func_225CA0
label_2b8ba8:
    if (ctx->pc == 0x2B8BA8u) {
        ctx->pc = 0x2B8BA8u;
            // 0x2b8ba8: 0x24a5f2d8  addiu       $a1, $a1, -0xD28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963928));
        ctx->pc = 0x2B8BACu;
        goto label_2b8bac;
    }
    ctx->pc = 0x2B8BA4u;
    SET_GPR_U32(ctx, 31, 0x2B8BACu);
    ctx->pc = 0x2B8BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8BA4u;
            // 0x2b8ba8: 0x24a5f2d8  addiu       $a1, $a1, -0xD28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8BACu; }
        if (ctx->pc != 0x2B8BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8BACu; }
        if (ctx->pc != 0x2B8BACu) { return; }
    }
    ctx->pc = 0x2B8BACu;
label_2b8bac:
    // 0x2b8bac: 0x8e844674  lw          $a0, 0x4674($s4)
    ctx->pc = 0x2b8bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18036)));
label_2b8bb0:
    // 0x2b8bb0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b8bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b8bb4:
    // 0x2b8bb4: 0x24a5f2e0  addiu       $a1, $a1, -0xD20
    ctx->pc = 0x2b8bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963936));
label_2b8bb8:
    // 0x2b8bb8: 0xc089728  jal         func_225CA0
label_2b8bbc:
    if (ctx->pc == 0x2B8BBCu) {
        ctx->pc = 0x2B8BBCu;
            // 0x2b8bbc: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x2B8BC0u;
        goto label_2b8bc0;
    }
    ctx->pc = 0x2B8BB8u;
    SET_GPR_U32(ctx, 31, 0x2B8BC0u);
    ctx->pc = 0x2B8BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8BB8u;
            // 0x2b8bbc: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8BC0u; }
        if (ctx->pc != 0x2B8BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8BC0u; }
        if (ctx->pc != 0x2B8BC0u) { return; }
    }
    ctx->pc = 0x2B8BC0u;
label_2b8bc0:
    // 0x2b8bc0: 0x8e844674  lw          $a0, 0x4674($s4)
    ctx->pc = 0x2b8bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18036)));
label_2b8bc4:
    // 0x2b8bc4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b8bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b8bc8:
    // 0x2b8bc8: 0xc089664  jal         func_225990
label_2b8bcc:
    if (ctx->pc == 0x2B8BCCu) {
        ctx->pc = 0x2B8BCCu;
            // 0x2b8bcc: 0x24a5f2f0  addiu       $a1, $a1, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963952));
        ctx->pc = 0x2B8BD0u;
        goto label_2b8bd0;
    }
    ctx->pc = 0x2B8BC8u;
    SET_GPR_U32(ctx, 31, 0x2B8BD0u);
    ctx->pc = 0x2B8BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8BC8u;
            // 0x2b8bcc: 0x24a5f2f0  addiu       $a1, $a1, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8BD0u; }
        if (ctx->pc != 0x2B8BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8BD0u; }
        if (ctx->pc != 0x2B8BD0u) { return; }
    }
    ctx->pc = 0x2B8BD0u;
label_2b8bd0:
    // 0x2b8bd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b8bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b8bd4:
    // 0x2b8bd4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2b8bd8:
    if (ctx->pc == 0x2B8BD8u) {
        ctx->pc = 0x2B8BD8u;
            // 0x2b8bd8: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = 0x2B8BDCu;
        goto label_2b8bdc;
    }
    ctx->pc = 0x2B8BD4u;
    {
        const bool branch_taken_0x2b8bd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8BD4u;
            // 0x2b8bd8: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8bd4) {
            ctx->pc = 0x2B8BF8u;
            goto label_2b8bf8;
        }
    }
    ctx->pc = 0x2B8BDCu;
label_2b8bdc:
    // 0x2b8bdc: 0xc065b30  jal         func_196CC0
label_2b8be0:
    if (ctx->pc == 0x2B8BE0u) {
        ctx->pc = 0x2B8BE4u;
        goto label_2b8be4;
    }
    ctx->pc = 0x2B8BDCu;
    SET_GPR_U32(ctx, 31, 0x2B8BE4u);
    ctx->pc = 0x196CC0u;
    if (runtime->hasFunction(0x196CC0u)) {
        auto targetFn = runtime->lookupFunction(0x196CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8BE4u; }
        if (ctx->pc != 0x2B8BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRate__11COMMON_GAGEFv_0x196cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8BE4u; }
        if (ctx->pc != 0x2B8BE4u) { return; }
    }
    ctx->pc = 0x2B8BE4u;
label_2b8be4:
    // 0x2b8be4: 0x3c024328  lui         $v0, 0x4328
    ctx->pc = 0x2b8be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17192 << 16));
label_2b8be8:
    // 0x2b8be8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b8be8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b8bec:
    // 0x2b8bec: 0x0  nop
    ctx->pc = 0x2b8becu;
    // NOP
label_2b8bf0:
    // 0x2b8bf0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b8bf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b8bf4:
    // 0x2b8bf4: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x2b8bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_2b8bf8:
    // 0x2b8bf8: 0x8e844674  lw          $a0, 0x4674($s4)
    ctx->pc = 0x2b8bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18036)));
label_2b8bfc:
    // 0x2b8bfc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b8bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b8c00:
    // 0x2b8c00: 0xc089664  jal         func_225990
label_2b8c04:
    if (ctx->pc == 0x2B8C04u) {
        ctx->pc = 0x2B8C04u;
            // 0x2b8c04: 0x24a5f2f8  addiu       $a1, $a1, -0xD08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963960));
        ctx->pc = 0x2B8C08u;
        goto label_2b8c08;
    }
    ctx->pc = 0x2B8C00u;
    SET_GPR_U32(ctx, 31, 0x2B8C08u);
    ctx->pc = 0x2B8C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8C00u;
            // 0x2b8c04: 0x24a5f2f8  addiu       $a1, $a1, -0xD08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8C08u; }
        if (ctx->pc != 0x2B8C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8C08u; }
        if (ctx->pc != 0x2B8C08u) { return; }
    }
    ctx->pc = 0x2B8C08u;
label_2b8c08:
    // 0x2b8c08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b8c0c:
    if (ctx->pc == 0x2B8C0Cu) {
        ctx->pc = 0x2B8C0Cu;
            // 0x2b8c0c: 0x3c034328  lui         $v1, 0x4328 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17192 << 16));
        ctx->pc = 0x2B8C10u;
        goto label_2b8c10;
    }
    ctx->pc = 0x2B8C08u;
    {
        const bool branch_taken_0x2b8c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8C08u;
            // 0x2b8c0c: 0x3c034328  lui         $v1, 0x4328 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c08) {
            ctx->pc = 0x2B8C20u;
            goto label_2b8c20;
        }
    }
    ctx->pc = 0x2B8C10u;
label_2b8c10:
    // 0x2b8c10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8c10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b8c14:
    // 0x2b8c14: 0x0  nop
    ctx->pc = 0x2b8c14u;
    // NOP
label_2b8c18:
    // 0x2b8c18: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2b8c18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2b8c1c:
    // 0x2b8c1c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2b8c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_2b8c20:
    // 0x2b8c20: 0x8e85465c  lw          $a1, 0x465C($s4)
    ctx->pc = 0x2b8c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18012)));
label_2b8c24:
    // 0x2b8c24: 0xc066a38  jal         func_19A8E0
label_2b8c28:
    if (ctx->pc == 0x2B8C28u) {
        ctx->pc = 0x2B8C28u;
            // 0x2b8c28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8C2Cu;
        goto label_2b8c2c;
    }
    ctx->pc = 0x2B8C24u;
    SET_GPR_U32(ctx, 31, 0x2B8C2Cu);
    ctx->pc = 0x2B8C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8C24u;
            // 0x2b8c28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A8E0u;
    if (runtime->hasFunction(0x19A8E0u)) {
        auto targetFn = runtime->lookupFunction(0x19A8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8C2Cu; }
        if (ctx->pc != 0x2B8C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAttackVol__16MOS_CHANGE_PARAMFi_0x19a8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8C2Cu; }
        if (ctx->pc != 0x2B8C2Cu) { return; }
    }
    ctx->pc = 0x2B8C2Cu;
label_2b8c2c:
    // 0x2b8c2c: 0x8e844674  lw          $a0, 0x4674($s4)
    ctx->pc = 0x2b8c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18036)));
label_2b8c30:
    // 0x2b8c30: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b8c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b8c34:
    // 0x2b8c34: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b8c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b8c38:
    // 0x2b8c38: 0xc089728  jal         func_225CA0
label_2b8c3c:
    if (ctx->pc == 0x2B8C3Cu) {
        ctx->pc = 0x2B8C3Cu;
            // 0x2b8c3c: 0x24a5f300  addiu       $a1, $a1, -0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963968));
        ctx->pc = 0x2B8C40u;
        goto label_2b8c40;
    }
    ctx->pc = 0x2B8C38u;
    SET_GPR_U32(ctx, 31, 0x2B8C40u);
    ctx->pc = 0x2B8C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8C38u;
            // 0x2b8c3c: 0x24a5f300  addiu       $a1, $a1, -0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8C40u; }
        if (ctx->pc != 0x2B8C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8C40u; }
        if (ctx->pc != 0x2B8C40u) { return; }
    }
    ctx->pc = 0x2B8C40u;
label_2b8c40:
    // 0x2b8c40: 0x8e85465c  lw          $a1, 0x465C($s4)
    ctx->pc = 0x2b8c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18012)));
label_2b8c44:
    // 0x2b8c44: 0xc066a60  jal         func_19A980
label_2b8c48:
    if (ctx->pc == 0x2B8C48u) {
        ctx->pc = 0x2B8C48u;
            // 0x2b8c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8C4Cu;
        goto label_2b8c4c;
    }
    ctx->pc = 0x2B8C44u;
    SET_GPR_U32(ctx, 31, 0x2B8C4Cu);
    ctx->pc = 0x2B8C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8C44u;
            // 0x2b8c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A980u;
    if (runtime->hasFunction(0x19A980u)) {
        auto targetFn = runtime->lookupFunction(0x19A980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8C4Cu; }
        if (ctx->pc != 0x2B8C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDefenceVol__16MOS_CHANGE_PARAMFi_0x19a980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8C4Cu; }
        if (ctx->pc != 0x2B8C4Cu) { return; }
    }
    ctx->pc = 0x2B8C4Cu;
label_2b8c4c:
    // 0x2b8c4c: 0x8e844674  lw          $a0, 0x4674($s4)
    ctx->pc = 0x2b8c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18036)));
label_2b8c50:
    // 0x2b8c50: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b8c50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b8c54:
    // 0x2b8c54: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b8c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b8c58:
    // 0x2b8c58: 0xc089728  jal         func_225CA0
label_2b8c5c:
    if (ctx->pc == 0x2B8C5Cu) {
        ctx->pc = 0x2B8C5Cu;
            // 0x2b8c5c: 0x24a5f308  addiu       $a1, $a1, -0xCF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963976));
        ctx->pc = 0x2B8C60u;
        goto label_2b8c60;
    }
    ctx->pc = 0x2B8C58u;
    SET_GPR_U32(ctx, 31, 0x2B8C60u);
    ctx->pc = 0x2B8C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8C58u;
            // 0x2b8c5c: 0x24a5f308  addiu       $a1, $a1, -0xCF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8C60u; }
        if (ctx->pc != 0x2B8C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8C60u; }
        if (ctx->pc != 0x2B8C60u) { return; }
    }
    ctx->pc = 0x2B8C60u;
label_2b8c60:
    // 0x2b8c60: 0x1000000e  b           . + 4 + (0xE << 2)
label_2b8c64:
    if (ctx->pc == 0x2B8C64u) {
        ctx->pc = 0x2B8C68u;
        goto label_2b8c68;
    }
    ctx->pc = 0x2B8C60u;
    {
        const bool branch_taken_0x2b8c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8c60) {
            ctx->pc = 0x2B8C9Cu;
            goto label_2b8c9c;
        }
    }
    ctx->pc = 0x2B8C68u;
label_2b8c68:
    // 0x2b8c68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b8c68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8c6c:
    // 0x2b8c6c: 0xc089728  jal         func_225CA0
label_2b8c70:
    if (ctx->pc == 0x2B8C70u) {
        ctx->pc = 0x2B8C70u;
            // 0x2b8c70: 0x24a5f2b8  addiu       $a1, $a1, -0xD48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963896));
        ctx->pc = 0x2B8C74u;
        goto label_2b8c74;
    }
    ctx->pc = 0x2B8C6Cu;
    SET_GPR_U32(ctx, 31, 0x2B8C74u);
    ctx->pc = 0x2B8C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8C6Cu;
            // 0x2b8c70: 0x24a5f2b8  addiu       $a1, $a1, -0xD48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8C74u; }
        if (ctx->pc != 0x2B8C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8C74u; }
        if (ctx->pc != 0x2B8C74u) { return; }
    }
    ctx->pc = 0x2B8C74u;
label_2b8c74:
    // 0x2b8c74: 0x8e844674  lw          $a0, 0x4674($s4)
    ctx->pc = 0x2b8c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18036)));
label_2b8c78:
    // 0x2b8c78: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b8c78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b8c7c:
    // 0x2b8c7c: 0x24a5f2d8  addiu       $a1, $a1, -0xD28
    ctx->pc = 0x2b8c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963928));
label_2b8c80:
    // 0x2b8c80: 0xc089728  jal         func_225CA0
label_2b8c84:
    if (ctx->pc == 0x2B8C84u) {
        ctx->pc = 0x2B8C84u;
            // 0x2b8c84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8C88u;
        goto label_2b8c88;
    }
    ctx->pc = 0x2B8C80u;
    SET_GPR_U32(ctx, 31, 0x2B8C88u);
    ctx->pc = 0x2B8C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8C80u;
            // 0x2b8c84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8C88u; }
        if (ctx->pc != 0x2B8C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8C88u; }
        if (ctx->pc != 0x2B8C88u) { return; }
    }
    ctx->pc = 0x2B8C88u;
label_2b8c88:
    // 0x2b8c88: 0x8e844674  lw          $a0, 0x4674($s4)
    ctx->pc = 0x2b8c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18036)));
label_2b8c8c:
    // 0x2b8c8c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b8c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b8c90:
    // 0x2b8c90: 0x24a5f2e0  addiu       $a1, $a1, -0xD20
    ctx->pc = 0x2b8c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963936));
label_2b8c94:
    // 0x2b8c94: 0xc089728  jal         func_225CA0
label_2b8c98:
    if (ctx->pc == 0x2B8C98u) {
        ctx->pc = 0x2B8C98u;
            // 0x2b8c98: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x2B8C9Cu;
        goto label_2b8c9c;
    }
    ctx->pc = 0x2B8C94u;
    SET_GPR_U32(ctx, 31, 0x2B8C9Cu);
    ctx->pc = 0x2B8C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8C94u;
            // 0x2b8c98: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8C9Cu; }
        if (ctx->pc != 0x2B8C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8C9Cu; }
        if (ctx->pc != 0x2B8C9Cu) { return; }
    }
    ctx->pc = 0x2B8C9Cu;
label_2b8c9c:
    // 0x2b8c9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b8c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b8ca0:
    // 0x2b8ca0: 0xc0ad99c  jal         func_2B6670
label_2b8ca4:
    if (ctx->pc == 0x2B8CA4u) {
        ctx->pc = 0x2B8CA8u;
        goto label_2b8ca8;
    }
    ctx->pc = 0x2B8CA0u;
    SET_GPR_U32(ctx, 31, 0x2B8CA8u);
    ctx->pc = 0x2B6670u;
    if (runtime->hasFunction(0x2B6670u)) {
        auto targetFn = runtime->lookupFunction(0x2B6670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8CA8u; }
        if (ctx->pc != 0x2B8CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadBGMonster__14CMenuMosSelectFv_0x2b6670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8CA8u; }
        if (ctx->pc != 0x2B8CA8u) { return; }
    }
    ctx->pc = 0x2B8CA8u;
label_2b8ca8:
    // 0x2b8ca8: 0xc08acc8  jal         func_22B320
label_2b8cac:
    if (ctx->pc == 0x2B8CACu) {
        ctx->pc = 0x2B8CACu;
            // 0x2b8cac: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->pc = 0x2B8CB0u;
        goto label_2b8cb0;
    }
    ctx->pc = 0x2B8CA8u;
    SET_GPR_U32(ctx, 31, 0x2B8CB0u);
    ctx->pc = 0x2B8CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8CA8u;
            // 0x2b8cac: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B320u;
    if (runtime->hasFunction(0x22B320u)) {
        auto targetFn = runtime->lookupFunction(0x22B320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8CB0u; }
        if (ctx->pc != 0x2B8CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormStep__14CPosDataManageFv_0x22b320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8CB0u; }
        if (ctx->pc != 0x2B8CB0u) { return; }
    }
    ctx->pc = 0x2B8CB0u;
label_2b8cb0:
    // 0x2b8cb0: 0xc0adaec  jal         func_2B6BB0
label_2b8cb4:
    if (ctx->pc == 0x2B8CB4u) {
        ctx->pc = 0x2B8CB4u;
            // 0x2b8cb4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8CB8u;
        goto label_2b8cb8;
    }
    ctx->pc = 0x2B8CB0u;
    SET_GPR_U32(ctx, 31, 0x2B8CB8u);
    ctx->pc = 0x2B8CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8CB0u;
            // 0x2b8cb4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6BB0u;
    if (runtime->hasFunction(0x2B6BB0u)) {
        auto targetFn = runtime->lookupFunction(0x2B6BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8CB8u; }
        if (ctx->pc != 0x2B8CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcTex__14CMenuMosSelectFv_0x2b6bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8CB8u; }
        if (ctx->pc != 0x2B8CB8u) { return; }
    }
    ctx->pc = 0x2B8CB8u;
label_2b8cb8:
    // 0x2b8cb8: 0xc0adab8  jal         func_2B6AE0
label_2b8cbc:
    if (ctx->pc == 0x2B8CBCu) {
        ctx->pc = 0x2B8CBCu;
            // 0x2b8cbc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8CC0u;
        goto label_2b8cc0;
    }
    ctx->pc = 0x2B8CB8u;
    SET_GPR_U32(ctx, 31, 0x2B8CC0u);
    ctx->pc = 0x2B8CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8CB8u;
            // 0x2b8cbc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6AE0u;
    if (runtime->hasFunction(0x2B6AE0u)) {
        auto targetFn = runtime->lookupFunction(0x2B6AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8CC0u; }
        if (ctx->pc != 0x2B8CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcCursorPosition__14CMenuMosSelectFv_0x2b6ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8CC0u; }
        if (ctx->pc != 0x2B8CC0u) { return; }
    }
    ctx->pc = 0x2B8CC0u;
label_2b8cc0:
    // 0x2b8cc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b8cc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8cc4:
    // 0x2b8cc4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2b8cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2b8cc8:
    // 0x2b8cc8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2b8cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2b8ccc:
    // 0x2b8ccc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2b8cccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2b8cd0:
    // 0x2b8cd0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2b8cd0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2b8cd4:
    // 0x2b8cd4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2b8cd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2b8cd8:
    // 0x2b8cd8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2b8cd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2b8cdc:
    // 0x2b8cdc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2b8cdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b8ce0:
    // 0x2b8ce0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2b8ce0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b8ce4:
    // 0x2b8ce4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b8ce4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b8ce8:
    // 0x2b8ce8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b8ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b8cec:
    // 0x2b8cec: 0x3e00008  jr          $ra
label_2b8cf0:
    if (ctx->pc == 0x2B8CF0u) {
        ctx->pc = 0x2B8CF0u;
            // 0x2b8cf0: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x2B8CF4u;
        goto label_fallthrough_0x2b8cec;
    }
    ctx->pc = 0x2B8CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8CECu;
            // 0x2b8cf0: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2b8cec:
    ctx->pc = 0x2B8CF4u;
}
