#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__9CLaserGunFv
// Address: 0x1b7110 - 0x1b77a0
void Step__9CLaserGunFv_0x1b7110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__9CLaserGunFv_0x1b7110");
#endif

    switch (ctx->pc) {
        case 0x1b7110u: goto label_1b7110;
        case 0x1b7114u: goto label_1b7114;
        case 0x1b7118u: goto label_1b7118;
        case 0x1b711cu: goto label_1b711c;
        case 0x1b7120u: goto label_1b7120;
        case 0x1b7124u: goto label_1b7124;
        case 0x1b7128u: goto label_1b7128;
        case 0x1b712cu: goto label_1b712c;
        case 0x1b7130u: goto label_1b7130;
        case 0x1b7134u: goto label_1b7134;
        case 0x1b7138u: goto label_1b7138;
        case 0x1b713cu: goto label_1b713c;
        case 0x1b7140u: goto label_1b7140;
        case 0x1b7144u: goto label_1b7144;
        case 0x1b7148u: goto label_1b7148;
        case 0x1b714cu: goto label_1b714c;
        case 0x1b7150u: goto label_1b7150;
        case 0x1b7154u: goto label_1b7154;
        case 0x1b7158u: goto label_1b7158;
        case 0x1b715cu: goto label_1b715c;
        case 0x1b7160u: goto label_1b7160;
        case 0x1b7164u: goto label_1b7164;
        case 0x1b7168u: goto label_1b7168;
        case 0x1b716cu: goto label_1b716c;
        case 0x1b7170u: goto label_1b7170;
        case 0x1b7174u: goto label_1b7174;
        case 0x1b7178u: goto label_1b7178;
        case 0x1b717cu: goto label_1b717c;
        case 0x1b7180u: goto label_1b7180;
        case 0x1b7184u: goto label_1b7184;
        case 0x1b7188u: goto label_1b7188;
        case 0x1b718cu: goto label_1b718c;
        case 0x1b7190u: goto label_1b7190;
        case 0x1b7194u: goto label_1b7194;
        case 0x1b7198u: goto label_1b7198;
        case 0x1b719cu: goto label_1b719c;
        case 0x1b71a0u: goto label_1b71a0;
        case 0x1b71a4u: goto label_1b71a4;
        case 0x1b71a8u: goto label_1b71a8;
        case 0x1b71acu: goto label_1b71ac;
        case 0x1b71b0u: goto label_1b71b0;
        case 0x1b71b4u: goto label_1b71b4;
        case 0x1b71b8u: goto label_1b71b8;
        case 0x1b71bcu: goto label_1b71bc;
        case 0x1b71c0u: goto label_1b71c0;
        case 0x1b71c4u: goto label_1b71c4;
        case 0x1b71c8u: goto label_1b71c8;
        case 0x1b71ccu: goto label_1b71cc;
        case 0x1b71d0u: goto label_1b71d0;
        case 0x1b71d4u: goto label_1b71d4;
        case 0x1b71d8u: goto label_1b71d8;
        case 0x1b71dcu: goto label_1b71dc;
        case 0x1b71e0u: goto label_1b71e0;
        case 0x1b71e4u: goto label_1b71e4;
        case 0x1b71e8u: goto label_1b71e8;
        case 0x1b71ecu: goto label_1b71ec;
        case 0x1b71f0u: goto label_1b71f0;
        case 0x1b71f4u: goto label_1b71f4;
        case 0x1b71f8u: goto label_1b71f8;
        case 0x1b71fcu: goto label_1b71fc;
        case 0x1b7200u: goto label_1b7200;
        case 0x1b7204u: goto label_1b7204;
        case 0x1b7208u: goto label_1b7208;
        case 0x1b720cu: goto label_1b720c;
        case 0x1b7210u: goto label_1b7210;
        case 0x1b7214u: goto label_1b7214;
        case 0x1b7218u: goto label_1b7218;
        case 0x1b721cu: goto label_1b721c;
        case 0x1b7220u: goto label_1b7220;
        case 0x1b7224u: goto label_1b7224;
        case 0x1b7228u: goto label_1b7228;
        case 0x1b722cu: goto label_1b722c;
        case 0x1b7230u: goto label_1b7230;
        case 0x1b7234u: goto label_1b7234;
        case 0x1b7238u: goto label_1b7238;
        case 0x1b723cu: goto label_1b723c;
        case 0x1b7240u: goto label_1b7240;
        case 0x1b7244u: goto label_1b7244;
        case 0x1b7248u: goto label_1b7248;
        case 0x1b724cu: goto label_1b724c;
        case 0x1b7250u: goto label_1b7250;
        case 0x1b7254u: goto label_1b7254;
        case 0x1b7258u: goto label_1b7258;
        case 0x1b725cu: goto label_1b725c;
        case 0x1b7260u: goto label_1b7260;
        case 0x1b7264u: goto label_1b7264;
        case 0x1b7268u: goto label_1b7268;
        case 0x1b726cu: goto label_1b726c;
        case 0x1b7270u: goto label_1b7270;
        case 0x1b7274u: goto label_1b7274;
        case 0x1b7278u: goto label_1b7278;
        case 0x1b727cu: goto label_1b727c;
        case 0x1b7280u: goto label_1b7280;
        case 0x1b7284u: goto label_1b7284;
        case 0x1b7288u: goto label_1b7288;
        case 0x1b728cu: goto label_1b728c;
        case 0x1b7290u: goto label_1b7290;
        case 0x1b7294u: goto label_1b7294;
        case 0x1b7298u: goto label_1b7298;
        case 0x1b729cu: goto label_1b729c;
        case 0x1b72a0u: goto label_1b72a0;
        case 0x1b72a4u: goto label_1b72a4;
        case 0x1b72a8u: goto label_1b72a8;
        case 0x1b72acu: goto label_1b72ac;
        case 0x1b72b0u: goto label_1b72b0;
        case 0x1b72b4u: goto label_1b72b4;
        case 0x1b72b8u: goto label_1b72b8;
        case 0x1b72bcu: goto label_1b72bc;
        case 0x1b72c0u: goto label_1b72c0;
        case 0x1b72c4u: goto label_1b72c4;
        case 0x1b72c8u: goto label_1b72c8;
        case 0x1b72ccu: goto label_1b72cc;
        case 0x1b72d0u: goto label_1b72d0;
        case 0x1b72d4u: goto label_1b72d4;
        case 0x1b72d8u: goto label_1b72d8;
        case 0x1b72dcu: goto label_1b72dc;
        case 0x1b72e0u: goto label_1b72e0;
        case 0x1b72e4u: goto label_1b72e4;
        case 0x1b72e8u: goto label_1b72e8;
        case 0x1b72ecu: goto label_1b72ec;
        case 0x1b72f0u: goto label_1b72f0;
        case 0x1b72f4u: goto label_1b72f4;
        case 0x1b72f8u: goto label_1b72f8;
        case 0x1b72fcu: goto label_1b72fc;
        case 0x1b7300u: goto label_1b7300;
        case 0x1b7304u: goto label_1b7304;
        case 0x1b7308u: goto label_1b7308;
        case 0x1b730cu: goto label_1b730c;
        case 0x1b7310u: goto label_1b7310;
        case 0x1b7314u: goto label_1b7314;
        case 0x1b7318u: goto label_1b7318;
        case 0x1b731cu: goto label_1b731c;
        case 0x1b7320u: goto label_1b7320;
        case 0x1b7324u: goto label_1b7324;
        case 0x1b7328u: goto label_1b7328;
        case 0x1b732cu: goto label_1b732c;
        case 0x1b7330u: goto label_1b7330;
        case 0x1b7334u: goto label_1b7334;
        case 0x1b7338u: goto label_1b7338;
        case 0x1b733cu: goto label_1b733c;
        case 0x1b7340u: goto label_1b7340;
        case 0x1b7344u: goto label_1b7344;
        case 0x1b7348u: goto label_1b7348;
        case 0x1b734cu: goto label_1b734c;
        case 0x1b7350u: goto label_1b7350;
        case 0x1b7354u: goto label_1b7354;
        case 0x1b7358u: goto label_1b7358;
        case 0x1b735cu: goto label_1b735c;
        case 0x1b7360u: goto label_1b7360;
        case 0x1b7364u: goto label_1b7364;
        case 0x1b7368u: goto label_1b7368;
        case 0x1b736cu: goto label_1b736c;
        case 0x1b7370u: goto label_1b7370;
        case 0x1b7374u: goto label_1b7374;
        case 0x1b7378u: goto label_1b7378;
        case 0x1b737cu: goto label_1b737c;
        case 0x1b7380u: goto label_1b7380;
        case 0x1b7384u: goto label_1b7384;
        case 0x1b7388u: goto label_1b7388;
        case 0x1b738cu: goto label_1b738c;
        case 0x1b7390u: goto label_1b7390;
        case 0x1b7394u: goto label_1b7394;
        case 0x1b7398u: goto label_1b7398;
        case 0x1b739cu: goto label_1b739c;
        case 0x1b73a0u: goto label_1b73a0;
        case 0x1b73a4u: goto label_1b73a4;
        case 0x1b73a8u: goto label_1b73a8;
        case 0x1b73acu: goto label_1b73ac;
        case 0x1b73b0u: goto label_1b73b0;
        case 0x1b73b4u: goto label_1b73b4;
        case 0x1b73b8u: goto label_1b73b8;
        case 0x1b73bcu: goto label_1b73bc;
        case 0x1b73c0u: goto label_1b73c0;
        case 0x1b73c4u: goto label_1b73c4;
        case 0x1b73c8u: goto label_1b73c8;
        case 0x1b73ccu: goto label_1b73cc;
        case 0x1b73d0u: goto label_1b73d0;
        case 0x1b73d4u: goto label_1b73d4;
        case 0x1b73d8u: goto label_1b73d8;
        case 0x1b73dcu: goto label_1b73dc;
        case 0x1b73e0u: goto label_1b73e0;
        case 0x1b73e4u: goto label_1b73e4;
        case 0x1b73e8u: goto label_1b73e8;
        case 0x1b73ecu: goto label_1b73ec;
        case 0x1b73f0u: goto label_1b73f0;
        case 0x1b73f4u: goto label_1b73f4;
        case 0x1b73f8u: goto label_1b73f8;
        case 0x1b73fcu: goto label_1b73fc;
        case 0x1b7400u: goto label_1b7400;
        case 0x1b7404u: goto label_1b7404;
        case 0x1b7408u: goto label_1b7408;
        case 0x1b740cu: goto label_1b740c;
        case 0x1b7410u: goto label_1b7410;
        case 0x1b7414u: goto label_1b7414;
        case 0x1b7418u: goto label_1b7418;
        case 0x1b741cu: goto label_1b741c;
        case 0x1b7420u: goto label_1b7420;
        case 0x1b7424u: goto label_1b7424;
        case 0x1b7428u: goto label_1b7428;
        case 0x1b742cu: goto label_1b742c;
        case 0x1b7430u: goto label_1b7430;
        case 0x1b7434u: goto label_1b7434;
        case 0x1b7438u: goto label_1b7438;
        case 0x1b743cu: goto label_1b743c;
        case 0x1b7440u: goto label_1b7440;
        case 0x1b7444u: goto label_1b7444;
        case 0x1b7448u: goto label_1b7448;
        case 0x1b744cu: goto label_1b744c;
        case 0x1b7450u: goto label_1b7450;
        case 0x1b7454u: goto label_1b7454;
        case 0x1b7458u: goto label_1b7458;
        case 0x1b745cu: goto label_1b745c;
        case 0x1b7460u: goto label_1b7460;
        case 0x1b7464u: goto label_1b7464;
        case 0x1b7468u: goto label_1b7468;
        case 0x1b746cu: goto label_1b746c;
        case 0x1b7470u: goto label_1b7470;
        case 0x1b7474u: goto label_1b7474;
        case 0x1b7478u: goto label_1b7478;
        case 0x1b747cu: goto label_1b747c;
        case 0x1b7480u: goto label_1b7480;
        case 0x1b7484u: goto label_1b7484;
        case 0x1b7488u: goto label_1b7488;
        case 0x1b748cu: goto label_1b748c;
        case 0x1b7490u: goto label_1b7490;
        case 0x1b7494u: goto label_1b7494;
        case 0x1b7498u: goto label_1b7498;
        case 0x1b749cu: goto label_1b749c;
        case 0x1b74a0u: goto label_1b74a0;
        case 0x1b74a4u: goto label_1b74a4;
        case 0x1b74a8u: goto label_1b74a8;
        case 0x1b74acu: goto label_1b74ac;
        case 0x1b74b0u: goto label_1b74b0;
        case 0x1b74b4u: goto label_1b74b4;
        case 0x1b74b8u: goto label_1b74b8;
        case 0x1b74bcu: goto label_1b74bc;
        case 0x1b74c0u: goto label_1b74c0;
        case 0x1b74c4u: goto label_1b74c4;
        case 0x1b74c8u: goto label_1b74c8;
        case 0x1b74ccu: goto label_1b74cc;
        case 0x1b74d0u: goto label_1b74d0;
        case 0x1b74d4u: goto label_1b74d4;
        case 0x1b74d8u: goto label_1b74d8;
        case 0x1b74dcu: goto label_1b74dc;
        case 0x1b74e0u: goto label_1b74e0;
        case 0x1b74e4u: goto label_1b74e4;
        case 0x1b74e8u: goto label_1b74e8;
        case 0x1b74ecu: goto label_1b74ec;
        case 0x1b74f0u: goto label_1b74f0;
        case 0x1b74f4u: goto label_1b74f4;
        case 0x1b74f8u: goto label_1b74f8;
        case 0x1b74fcu: goto label_1b74fc;
        case 0x1b7500u: goto label_1b7500;
        case 0x1b7504u: goto label_1b7504;
        case 0x1b7508u: goto label_1b7508;
        case 0x1b750cu: goto label_1b750c;
        case 0x1b7510u: goto label_1b7510;
        case 0x1b7514u: goto label_1b7514;
        case 0x1b7518u: goto label_1b7518;
        case 0x1b751cu: goto label_1b751c;
        case 0x1b7520u: goto label_1b7520;
        case 0x1b7524u: goto label_1b7524;
        case 0x1b7528u: goto label_1b7528;
        case 0x1b752cu: goto label_1b752c;
        case 0x1b7530u: goto label_1b7530;
        case 0x1b7534u: goto label_1b7534;
        case 0x1b7538u: goto label_1b7538;
        case 0x1b753cu: goto label_1b753c;
        case 0x1b7540u: goto label_1b7540;
        case 0x1b7544u: goto label_1b7544;
        case 0x1b7548u: goto label_1b7548;
        case 0x1b754cu: goto label_1b754c;
        case 0x1b7550u: goto label_1b7550;
        case 0x1b7554u: goto label_1b7554;
        case 0x1b7558u: goto label_1b7558;
        case 0x1b755cu: goto label_1b755c;
        case 0x1b7560u: goto label_1b7560;
        case 0x1b7564u: goto label_1b7564;
        case 0x1b7568u: goto label_1b7568;
        case 0x1b756cu: goto label_1b756c;
        case 0x1b7570u: goto label_1b7570;
        case 0x1b7574u: goto label_1b7574;
        case 0x1b7578u: goto label_1b7578;
        case 0x1b757cu: goto label_1b757c;
        case 0x1b7580u: goto label_1b7580;
        case 0x1b7584u: goto label_1b7584;
        case 0x1b7588u: goto label_1b7588;
        case 0x1b758cu: goto label_1b758c;
        case 0x1b7590u: goto label_1b7590;
        case 0x1b7594u: goto label_1b7594;
        case 0x1b7598u: goto label_1b7598;
        case 0x1b759cu: goto label_1b759c;
        case 0x1b75a0u: goto label_1b75a0;
        case 0x1b75a4u: goto label_1b75a4;
        case 0x1b75a8u: goto label_1b75a8;
        case 0x1b75acu: goto label_1b75ac;
        case 0x1b75b0u: goto label_1b75b0;
        case 0x1b75b4u: goto label_1b75b4;
        case 0x1b75b8u: goto label_1b75b8;
        case 0x1b75bcu: goto label_1b75bc;
        case 0x1b75c0u: goto label_1b75c0;
        case 0x1b75c4u: goto label_1b75c4;
        case 0x1b75c8u: goto label_1b75c8;
        case 0x1b75ccu: goto label_1b75cc;
        case 0x1b75d0u: goto label_1b75d0;
        case 0x1b75d4u: goto label_1b75d4;
        case 0x1b75d8u: goto label_1b75d8;
        case 0x1b75dcu: goto label_1b75dc;
        case 0x1b75e0u: goto label_1b75e0;
        case 0x1b75e4u: goto label_1b75e4;
        case 0x1b75e8u: goto label_1b75e8;
        case 0x1b75ecu: goto label_1b75ec;
        case 0x1b75f0u: goto label_1b75f0;
        case 0x1b75f4u: goto label_1b75f4;
        case 0x1b75f8u: goto label_1b75f8;
        case 0x1b75fcu: goto label_1b75fc;
        case 0x1b7600u: goto label_1b7600;
        case 0x1b7604u: goto label_1b7604;
        case 0x1b7608u: goto label_1b7608;
        case 0x1b760cu: goto label_1b760c;
        case 0x1b7610u: goto label_1b7610;
        case 0x1b7614u: goto label_1b7614;
        case 0x1b7618u: goto label_1b7618;
        case 0x1b761cu: goto label_1b761c;
        case 0x1b7620u: goto label_1b7620;
        case 0x1b7624u: goto label_1b7624;
        case 0x1b7628u: goto label_1b7628;
        case 0x1b762cu: goto label_1b762c;
        case 0x1b7630u: goto label_1b7630;
        case 0x1b7634u: goto label_1b7634;
        case 0x1b7638u: goto label_1b7638;
        case 0x1b763cu: goto label_1b763c;
        case 0x1b7640u: goto label_1b7640;
        case 0x1b7644u: goto label_1b7644;
        case 0x1b7648u: goto label_1b7648;
        case 0x1b764cu: goto label_1b764c;
        case 0x1b7650u: goto label_1b7650;
        case 0x1b7654u: goto label_1b7654;
        case 0x1b7658u: goto label_1b7658;
        case 0x1b765cu: goto label_1b765c;
        case 0x1b7660u: goto label_1b7660;
        case 0x1b7664u: goto label_1b7664;
        case 0x1b7668u: goto label_1b7668;
        case 0x1b766cu: goto label_1b766c;
        case 0x1b7670u: goto label_1b7670;
        case 0x1b7674u: goto label_1b7674;
        case 0x1b7678u: goto label_1b7678;
        case 0x1b767cu: goto label_1b767c;
        case 0x1b7680u: goto label_1b7680;
        case 0x1b7684u: goto label_1b7684;
        case 0x1b7688u: goto label_1b7688;
        case 0x1b768cu: goto label_1b768c;
        case 0x1b7690u: goto label_1b7690;
        case 0x1b7694u: goto label_1b7694;
        case 0x1b7698u: goto label_1b7698;
        case 0x1b769cu: goto label_1b769c;
        case 0x1b76a0u: goto label_1b76a0;
        case 0x1b76a4u: goto label_1b76a4;
        case 0x1b76a8u: goto label_1b76a8;
        case 0x1b76acu: goto label_1b76ac;
        case 0x1b76b0u: goto label_1b76b0;
        case 0x1b76b4u: goto label_1b76b4;
        case 0x1b76b8u: goto label_1b76b8;
        case 0x1b76bcu: goto label_1b76bc;
        case 0x1b76c0u: goto label_1b76c0;
        case 0x1b76c4u: goto label_1b76c4;
        case 0x1b76c8u: goto label_1b76c8;
        case 0x1b76ccu: goto label_1b76cc;
        case 0x1b76d0u: goto label_1b76d0;
        case 0x1b76d4u: goto label_1b76d4;
        case 0x1b76d8u: goto label_1b76d8;
        case 0x1b76dcu: goto label_1b76dc;
        case 0x1b76e0u: goto label_1b76e0;
        case 0x1b76e4u: goto label_1b76e4;
        case 0x1b76e8u: goto label_1b76e8;
        case 0x1b76ecu: goto label_1b76ec;
        case 0x1b76f0u: goto label_1b76f0;
        case 0x1b76f4u: goto label_1b76f4;
        case 0x1b76f8u: goto label_1b76f8;
        case 0x1b76fcu: goto label_1b76fc;
        case 0x1b7700u: goto label_1b7700;
        case 0x1b7704u: goto label_1b7704;
        case 0x1b7708u: goto label_1b7708;
        case 0x1b770cu: goto label_1b770c;
        case 0x1b7710u: goto label_1b7710;
        case 0x1b7714u: goto label_1b7714;
        case 0x1b7718u: goto label_1b7718;
        case 0x1b771cu: goto label_1b771c;
        case 0x1b7720u: goto label_1b7720;
        case 0x1b7724u: goto label_1b7724;
        case 0x1b7728u: goto label_1b7728;
        case 0x1b772cu: goto label_1b772c;
        case 0x1b7730u: goto label_1b7730;
        case 0x1b7734u: goto label_1b7734;
        case 0x1b7738u: goto label_1b7738;
        case 0x1b773cu: goto label_1b773c;
        case 0x1b7740u: goto label_1b7740;
        case 0x1b7744u: goto label_1b7744;
        case 0x1b7748u: goto label_1b7748;
        case 0x1b774cu: goto label_1b774c;
        case 0x1b7750u: goto label_1b7750;
        case 0x1b7754u: goto label_1b7754;
        case 0x1b7758u: goto label_1b7758;
        case 0x1b775cu: goto label_1b775c;
        case 0x1b7760u: goto label_1b7760;
        case 0x1b7764u: goto label_1b7764;
        case 0x1b7768u: goto label_1b7768;
        case 0x1b776cu: goto label_1b776c;
        case 0x1b7770u: goto label_1b7770;
        case 0x1b7774u: goto label_1b7774;
        case 0x1b7778u: goto label_1b7778;
        case 0x1b777cu: goto label_1b777c;
        case 0x1b7780u: goto label_1b7780;
        case 0x1b7784u: goto label_1b7784;
        case 0x1b7788u: goto label_1b7788;
        case 0x1b778cu: goto label_1b778c;
        case 0x1b7790u: goto label_1b7790;
        case 0x1b7794u: goto label_1b7794;
        case 0x1b7798u: goto label_1b7798;
        case 0x1b779cu: goto label_1b779c;
        default: break;
    }

    ctx->pc = 0x1b7110u;

label_1b7110:
    // 0x1b7110: 0x27bdd710  addiu       $sp, $sp, -0x28F0
    ctx->pc = 0x1b7110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294956816));
label_1b7114:
    // 0x1b7114: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b7114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1b7118:
    // 0x1b7118: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b7118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b711c:
    // 0x1b711c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b711cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b7120:
    // 0x1b7120: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b7120u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b7124:
    // 0x1b7124: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b7124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b7128:
    // 0x1b7128: 0x8c840120  lw          $a0, 0x120($a0)
    ctx->pc = 0x1b7128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
label_1b712c:
    // 0x1b712c: 0x10800196  beqz        $a0, . + 4 + (0x196 << 2)
label_1b7130:
    if (ctx->pc == 0x1B7130u) {
        ctx->pc = 0x1B7130u;
            // 0x1b7130: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B7134u;
        goto label_1b7134;
    }
    ctx->pc = 0x1B712Cu;
    {
        const bool branch_taken_0x1b712c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B712Cu;
            // 0x1b7130: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b712c) {
            ctx->pc = 0x1B7788u;
            goto label_1b7788;
        }
    }
    ctx->pc = 0x1B7134u;
label_1b7134:
    // 0x1b7134: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_1b7138:
    if (ctx->pc == 0x1B7138u) {
        ctx->pc = 0x1B7138u;
            // 0x1b7138: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1B713Cu;
        goto label_1b713c;
    }
    ctx->pc = 0x1B7134u;
    {
        const bool branch_taken_0x1b7134 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B7138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7134u;
            // 0x1b7138: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7134) {
            ctx->pc = 0x1B7140u;
            goto label_1b7140;
        }
    }
    ctx->pc = 0x1B713Cu;
label_1b713c:
    // 0x1b713c: 0xae430120  sw          $v1, 0x120($s2)
    ctx->pc = 0x1b713cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 3));
label_1b7140:
    // 0x1b7140: 0x8e440120  lw          $a0, 0x120($s2)
    ctx->pc = 0x1b7140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 288)));
label_1b7144:
    // 0x1b7144: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b7144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b7148:
    // 0x1b7148: 0x14830183  bne         $a0, $v1, . + 4 + (0x183 << 2)
label_1b714c:
    if (ctx->pc == 0x1B714Cu) {
        ctx->pc = 0x1B7150u;
        goto label_1b7150;
    }
    ctx->pc = 0x1B7148u;
    {
        const bool branch_taken_0x1b7148 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b7148) {
            ctx->pc = 0x1B7758u;
            goto label_1b7758;
        }
    }
    ctx->pc = 0x1B7150u;
label_1b7150:
    // 0x1b7150: 0x8e4500e8  lw          $a1, 0xE8($s2)
    ctx->pc = 0x1b7150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
label_1b7154:
    // 0x1b7154: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1b7154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1b7158:
    // 0x1b7158: 0xc06e9d4  jal         func_1BA750
label_1b715c:
    if (ctx->pc == 0x1B715Cu) {
        ctx->pc = 0x1B715Cu;
            // 0x1b715c: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->pc = 0x1B7160u;
        goto label_1b7160;
    }
    ctx->pc = 0x1B7158u;
    SET_GPR_U32(ctx, 31, 0x1B7160u);
    ctx->pc = 0x1B715Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7158u;
            // 0x1b715c: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA750u;
    if (runtime->hasFunction(0x1BA750u)) {
        auto targetFn = runtime->lookupFunction(0x1BA750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7160u; }
        if (ctx->pc != 0x1B7160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetID2Prim__11CColPrimManFi_0x1ba750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7160u; }
        if (ctx->pc != 0x1B7160u) { return; }
    }
    ctx->pc = 0x1B7160u;
label_1b7160:
    // 0x1b7160: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b7160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b7164:
    // 0x1b7164: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x1b7164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_1b7168:
    // 0x1b7168: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1b716c:
    if (ctx->pc == 0x1B716Cu) {
        ctx->pc = 0x1B7170u;
        goto label_1b7170;
    }
    ctx->pc = 0x1B7168u;
    {
        const bool branch_taken_0x1b7168 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b7168) {
            ctx->pc = 0x1B7178u;
            goto label_1b7178;
        }
    }
    ctx->pc = 0x1B7170u;
label_1b7170:
    // 0x1b7170: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b7170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b7174:
    // 0x1b7174: 0xae4200f0  sw          $v0, 0xF0($s2)
    ctx->pc = 0x1b7174u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 2));
label_1b7178:
    // 0x1b7178: 0x8e4200f4  lw          $v0, 0xF4($s2)
    ctx->pc = 0x1b7178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
label_1b717c:
    // 0x1b717c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1b7180:
    if (ctx->pc == 0x1B7180u) {
        ctx->pc = 0x1B7184u;
        goto label_1b7184;
    }
    ctx->pc = 0x1B717Cu;
    {
        const bool branch_taken_0x1b717c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b717c) {
            ctx->pc = 0x1B718Cu;
            goto label_1b718c;
        }
    }
    ctx->pc = 0x1B7184u;
label_1b7184:
    // 0x1b7184: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b7184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b7188:
    // 0x1b7188: 0xae4200f4  sw          $v0, 0xF4($s2)
    ctx->pc = 0x1b7188u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 2));
label_1b718c:
    // 0x1b718c: 0x8e4200f8  lw          $v0, 0xF8($s2)
    ctx->pc = 0x1b718cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
label_1b7190:
    // 0x1b7190: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b7190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b7194:
    // 0x1b7194: 0xae4200f8  sw          $v0, 0xF8($s2)
    ctx->pc = 0x1b7194u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 2));
label_1b7198:
    // 0x1b7198: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x1b7198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_1b719c:
    // 0x1b719c: 0x1c400020  bgtz        $v0, . + 4 + (0x20 << 2)
label_1b71a0:
    if (ctx->pc == 0x1B71A0u) {
        ctx->pc = 0x1B71A0u;
            // 0x1b71a0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1B71A4u;
        goto label_1b71a4;
    }
    ctx->pc = 0x1B719Cu;
    {
        const bool branch_taken_0x1b719c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1B71A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B719Cu;
            // 0x1b71a0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b719c) {
            ctx->pc = 0x1B7220u;
            goto label_1b7220;
        }
    }
    ctx->pc = 0x1B71A4u;
label_1b71a4:
    // 0x1b71a4: 0x8e4200f4  lw          $v0, 0xF4($s2)
    ctx->pc = 0x1b71a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
label_1b71a8:
    // 0x1b71a8: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
label_1b71ac:
    if (ctx->pc == 0x1B71ACu) {
        ctx->pc = 0x1B71B0u;
        goto label_1b71b0;
    }
    ctx->pc = 0x1B71A8u;
    {
        const bool branch_taken_0x1b71a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b71a8) {
            ctx->pc = 0x1B721Cu;
            goto label_1b721c;
        }
    }
    ctx->pc = 0x1B71B0u;
label_1b71b0:
    // 0x1b71b0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1b71b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b71b4:
    // 0x1b71b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b71b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b71b8:
    // 0x1b71b8: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
label_1b71bc:
    if (ctx->pc == 0x1B71BCu) {
        ctx->pc = 0x1B71BCu;
            // 0x1b71bc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1B71C0u;
        goto label_1b71c0;
    }
    ctx->pc = 0x1B71B8u;
    {
        const bool branch_taken_0x1b71b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B71BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B71B8u;
            // 0x1b71bc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b71b8) {
            ctx->pc = 0x1B71E4u;
            goto label_1b71e4;
        }
    }
    ctx->pc = 0x1B71C0u;
label_1b71c0:
    // 0x1b71c0: 0xc0a0ed8  jal         func_283B60
label_1b71c4:
    if (ctx->pc == 0x1B71C4u) {
        ctx->pc = 0x1B71C4u;
            // 0x1b71c4: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->pc = 0x1B71C8u;
        goto label_1b71c8;
    }
    ctx->pc = 0x1B71C0u;
    SET_GPR_U32(ctx, 31, 0x1B71C8u);
    ctx->pc = 0x1B71C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B71C0u;
            // 0x1b71c4: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B71C8u; }
        if (ctx->pc != 0x1B71C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B71C8u; }
        if (ctx->pc != 0x1B71C8u) { return; }
    }
    ctx->pc = 0x1B71C8u;
label_1b71c8:
    // 0x1b71c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b71cc:
    if (ctx->pc == 0x1B71CCu) {
        ctx->pc = 0x1B71CCu;
            // 0x1b71cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B71D0u;
        goto label_1b71d0;
    }
    ctx->pc = 0x1B71C8u;
    {
        const bool branch_taken_0x1b71c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B71CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B71C8u;
            // 0x1b71cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b71c8) {
            ctx->pc = 0x1B71E0u;
            goto label_1b71e0;
        }
    }
    ctx->pc = 0x1B71D0u;
label_1b71d0:
    // 0x1b71d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b71d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b71d4:
    // 0x1b71d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b71d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b71d8:
    // 0x1b71d8: 0xc05d420  jal         func_175080
label_1b71dc:
    if (ctx->pc == 0x1B71DCu) {
        ctx->pc = 0x1B71DCu;
            // 0x1b71dc: 0x26470030  addiu       $a3, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x1B71E0u;
        goto label_1b71e0;
    }
    ctx->pc = 0x1B71D8u;
    SET_GPR_U32(ctx, 31, 0x1B71E0u);
    ctx->pc = 0x1B71DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B71D8u;
            // 0x1b71dc: 0x26470030  addiu       $a3, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B71E0u; }
        if (ctx->pc != 0x1B71E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B71E0u; }
        if (ctx->pc != 0x1B71E0u) { return; }
    }
    ctx->pc = 0x1B71E0u;
label_1b71e0:
    // 0x1b71e0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b71e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b71e4:
    // 0x1b71e4: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x1b71e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_1b71e8:
    // 0x1b71e8: 0xc041c3e  jal         func_1070F8
label_1b71ec:
    if (ctx->pc == 0x1B71ECu) {
        ctx->pc = 0x1B71ECu;
            // 0x1b71ec: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x1B71F0u;
        goto label_1b71f0;
    }
    ctx->pc = 0x1B71E8u;
    SET_GPR_U32(ctx, 31, 0x1B71F0u);
    ctx->pc = 0x1B71ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B71E8u;
            // 0x1b71ec: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B71F0u; }
        if (ctx->pc != 0x1B71F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B71F0u; }
        if (ctx->pc != 0x1B71F0u) { return; }
    }
    ctx->pc = 0x1B71F0u;
label_1b71f0:
    // 0x1b71f0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b71f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b71f4:
    // 0x1b71f4: 0xc041be0  jal         func_106F80
label_1b71f8:
    if (ctx->pc == 0x1B71F8u) {
        ctx->pc = 0x1B71F8u;
            // 0x1b71f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B71FCu;
        goto label_1b71fc;
    }
    ctx->pc = 0x1B71F4u;
    SET_GPR_U32(ctx, 31, 0x1B71FCu);
    ctx->pc = 0x1B71F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B71F4u;
            // 0x1b71f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B71FCu; }
        if (ctx->pc != 0x1B71FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B71FCu; }
        if (ctx->pc != 0x1B71FCu) { return; }
    }
    ctx->pc = 0x1B71FCu;
label_1b71fc:
    // 0x1b71fc: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x1b71fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
label_1b7200:
    // 0x1b7200: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1b7200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_1b7204:
    // 0x1b7204: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x1b7204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_1b7208:
    // 0x1b7208: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b7208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b720c:
    // 0x1b720c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b720cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b7210:
    // 0x1b7210: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1b7210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b7214:
    // 0x1b7214: 0xc04c294  jal         func_130A50
label_1b7218:
    if (ctx->pc == 0x1B7218u) {
        ctx->pc = 0x1B7218u;
            // 0x1b7218: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B721Cu;
        goto label_1b721c;
    }
    ctx->pc = 0x1B7214u;
    SET_GPR_U32(ctx, 31, 0x1B721Cu);
    ctx->pc = 0x1B7218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7214u;
            // 0x1b7218: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130A50u;
    if (runtime->hasFunction(0x130A50u)) {
        auto targetFn = runtime->lookupFunction(0x130A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B721Cu; }
        if (ctx->pc != 0x1B721Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorInterpolate__FPfPfPffi_0x130a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B721Cu; }
        if (ctx->pc != 0x1B721Cu) { return; }
    }
    ctx->pc = 0x1B721Cu;
label_1b721c:
    // 0x1b721c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b721cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1b7220:
    // 0x1b7220: 0xc041c5c  jal         func_107170
label_1b7224:
    if (ctx->pc == 0x1B7224u) {
        ctx->pc = 0x1B7224u;
            // 0x1b7224: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x1B7228u;
        goto label_1b7228;
    }
    ctx->pc = 0x1B7220u;
    SET_GPR_U32(ctx, 31, 0x1B7228u);
    ctx->pc = 0x1B7224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7220u;
            // 0x1b7224: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7228u; }
        if (ctx->pc != 0x1B7228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7228u; }
        if (ctx->pc != 0x1B7228u) { return; }
    }
    ctx->pc = 0x1B7228u;
label_1b7228:
    // 0x1b7228: 0xc64c00dc  lwc1        $f12, 0xDC($s2)
    ctx->pc = 0x1b7228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b722c:
    // 0x1b722c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1b722cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1b7230:
    // 0x1b7230: 0xc041c4a  jal         func_107128
label_1b7234:
    if (ctx->pc == 0x1B7234u) {
        ctx->pc = 0x1B7234u;
            // 0x1b7234: 0x26450040  addiu       $a1, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->pc = 0x1B7238u;
        goto label_1b7238;
    }
    ctx->pc = 0x1B7230u;
    SET_GPR_U32(ctx, 31, 0x1B7238u);
    ctx->pc = 0x1B7234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7230u;
            // 0x1b7234: 0x26450040  addiu       $a1, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7238u; }
        if (ctx->pc != 0x1B7238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7238u; }
        if (ctx->pc != 0x1B7238u) { return; }
    }
    ctx->pc = 0x1B7238u;
label_1b7238:
    // 0x1b7238: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1b7238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1b723c:
    // 0x1b723c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1b723cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1b7240:
    // 0x1b7240: 0xc041c38  jal         func_1070E0
label_1b7244:
    if (ctx->pc == 0x1B7244u) {
        ctx->pc = 0x1B7244u;
            // 0x1b7244: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B7248u;
        goto label_1b7248;
    }
    ctx->pc = 0x1B7240u;
    SET_GPR_U32(ctx, 31, 0x1B7248u);
    ctx->pc = 0x1B7244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7240u;
            // 0x1b7244: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7248u; }
        if (ctx->pc != 0x1B7248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7248u; }
        if (ctx->pc != 0x1B7248u) { return; }
    }
    ctx->pc = 0x1B7248u;
label_1b7248:
    // 0x1b7248: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_1b724c:
    if (ctx->pc == 0x1B724Cu) {
        ctx->pc = 0x1B724Cu;
            // 0x1b724c: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x1B7250u;
        goto label_1b7250;
    }
    ctx->pc = 0x1B7248u;
    {
        const bool branch_taken_0x1b7248 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B724Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7248u;
            // 0x1b724c: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7248) {
            ctx->pc = 0x1B7268u;
            goto label_1b7268;
        }
    }
    ctx->pc = 0x1B7250u;
label_1b7250:
    // 0x1b7250: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1b7250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1b7254:
    // 0x1b7254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b7258:
    // 0x1b7258: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b7258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b725c:
    // 0x1b725c: 0xc06e760  jal         func_1B9D80
label_1b7260:
    if (ctx->pc == 0x1B7260u) {
        ctx->pc = 0x1B7260u;
            // 0x1b7260: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x1B7264u;
        goto label_1b7264;
    }
    ctx->pc = 0x1B725Cu;
    SET_GPR_U32(ctx, 31, 0x1B7264u);
    ctx->pc = 0x1B7260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B725Cu;
            // 0x1b7260: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D80u;
    if (runtime->hasFunction(0x1B9D80u)) {
        auto targetFn = runtime->lookupFunction(0x1B9D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7264u; }
        if (ctx->pc != 0x1B7264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCoord__8CColPrimFPff_0x1b9d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7264u; }
        if (ctx->pc != 0x1B7264u) { return; }
    }
    ctx->pc = 0x1B7264u;
label_1b7264:
    // 0x1b7264: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b7264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1b7268:
    // 0x1b7268: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1b7268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1b726c:
    // 0x1b726c: 0xafa3287c  sw          $v1, 0x287C($sp)
    ctx->pc = 0x1b726cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10364), GPR_U32(ctx, 3));
label_1b7270:
    // 0x1b7270: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b7270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b7274:
    // 0x1b7274: 0xafa3288c  sw          $v1, 0x288C($sp)
    ctx->pc = 0x1b7274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10380), GPR_U32(ctx, 3));
label_1b7278:
    // 0x1b7278: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1b7278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1b727c:
    // 0x1b727c: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x1b727cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7280:
    // 0x1b7280: 0x8f848db4  lw          $a0, -0x724C($gp)
    ctx->pc = 0x1b7280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938036)));
label_1b7284:
    // 0x1b7284: 0xc64000dc  lwc1        $f0, 0xDC($s2)
    ctx->pc = 0x1b7284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b7288:
    // 0x1b7288: 0x27a62870  addiu       $a2, $sp, 0x2870
    ctx->pc = 0x1b7288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 10352));
label_1b728c:
    // 0x1b728c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b728cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b7290:
    // 0x1b7290: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1b7290u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1b7294:
    // 0x1b7294: 0xe7a02870  swc1        $f0, 0x2870($sp)
    ctx->pc = 0x1b7294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10352), bits); }
label_1b7298:
    // 0x1b7298: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x1b7298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b729c:
    // 0x1b729c: 0xc64000dc  lwc1        $f0, 0xDC($s2)
    ctx->pc = 0x1b729cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b72a0:
    // 0x1b72a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b72a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b72a4:
    // 0x1b72a4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b72a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1b72a8:
    // 0x1b72a8: 0xe7a02880  swc1        $f0, 0x2880($sp)
    ctx->pc = 0x1b72a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10368), bits); }
label_1b72ac:
    // 0x1b72ac: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x1b72acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b72b0:
    // 0x1b72b0: 0xc64000dc  lwc1        $f0, 0xDC($s2)
    ctx->pc = 0x1b72b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b72b4:
    // 0x1b72b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b72b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b72b8:
    // 0x1b72b8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1b72b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1b72bc:
    // 0x1b72bc: 0xe7a02874  swc1        $f0, 0x2874($sp)
    ctx->pc = 0x1b72bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10356), bits); }
label_1b72c0:
    // 0x1b72c0: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x1b72c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b72c4:
    // 0x1b72c4: 0xc64000dc  lwc1        $f0, 0xDC($s2)
    ctx->pc = 0x1b72c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b72c8:
    // 0x1b72c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b72c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b72cc:
    // 0x1b72cc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b72ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1b72d0:
    // 0x1b72d0: 0xe7a02884  swc1        $f0, 0x2884($sp)
    ctx->pc = 0x1b72d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10372), bits); }
label_1b72d4:
    // 0x1b72d4: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x1b72d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b72d8:
    // 0x1b72d8: 0xc64000dc  lwc1        $f0, 0xDC($s2)
    ctx->pc = 0x1b72d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b72dc:
    // 0x1b72dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b72dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b72e0:
    // 0x1b72e0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1b72e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1b72e4:
    // 0x1b72e4: 0xe7a02878  swc1        $f0, 0x2878($sp)
    ctx->pc = 0x1b72e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10360), bits); }
label_1b72e8:
    // 0x1b72e8: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x1b72e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b72ec:
    // 0x1b72ec: 0xc64000dc  lwc1        $f0, 0xDC($s2)
    ctx->pc = 0x1b72ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b72f0:
    // 0x1b72f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b72f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b72f4:
    // 0x1b72f4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b72f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1b72f8:
    // 0x1b72f8: 0xe7a02888  swc1        $f0, 0x2888($sp)
    ctx->pc = 0x1b72f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10376), bits); }
label_1b72fc:
    // 0x1b72fc: 0x8c990d00  lw          $t9, 0xD00($a0)
    ctx->pc = 0x1b72fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3328)));
label_1b7300:
    // 0x1b7300: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1b7300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1b7304:
    // 0x1b7304: 0x320f809  jalr        $t9
label_1b7308:
    if (ctx->pc == 0x1B7308u) {
        ctx->pc = 0x1B7308u;
            // 0x1b7308: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x1B730Cu;
        goto label_1b730c;
    }
    ctx->pc = 0x1B7304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B730Cu);
        ctx->pc = 0x1B7308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7304u;
            // 0x1b7308: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B730Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B730Cu; }
            if (ctx->pc != 0x1B730Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1B730Cu;
label_1b730c:
    // 0x1b730c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1b730cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1b7310:
    // 0x1b7310: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b7310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b7314:
    // 0x1b7314: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x1b7314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1b7318:
    // 0x1b7318: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x1b7318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1b731c:
    // 0x1b731c: 0x27a82890  addiu       $t0, $sp, 0x2890
    ctx->pc = 0x1b731cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 10384));
label_1b7320:
    // 0x1b7320: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1b7320u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7324:
    // 0x1b7324: 0xc053794  jal         func_14DE50
label_1b7328:
    if (ctx->pc == 0x1B7328u) {
        ctx->pc = 0x1B7328u;
            // 0x1b7328: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1B732Cu;
        goto label_1b732c;
    }
    ctx->pc = 0x1B7324u;
    SET_GPR_U32(ctx, 31, 0x1B732Cu);
    ctx->pc = 0x1B7328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7324u;
            // 0x1b7328: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B732Cu; }
        if (ctx->pc != 0x1B732Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B732Cu; }
        if (ctx->pc != 0x1B732Cu) { return; }
    }
    ctx->pc = 0x1B732Cu;
label_1b732c:
    // 0x1b732c: 0x440004d  bltz        $v0, . + 4 + (0x4D << 2)
label_1b7330:
    if (ctx->pc == 0x1B7330u) {
        ctx->pc = 0x1B7330u;
            // 0x1b7330: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1B7334u;
        goto label_1b7334;
    }
    ctx->pc = 0x1B732Cu;
    {
        const bool branch_taken_0x1b732c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B7330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B732Cu;
            // 0x1b7330: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b732c) {
            ctx->pc = 0x1B7464u;
            goto label_1b7464;
        }
    }
    ctx->pc = 0x1B7334u;
label_1b7334:
    // 0x1b7334: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1b7334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1b7338:
    // 0x1b7338: 0xae430120  sw          $v1, 0x120($s2)
    ctx->pc = 0x1b7338u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 3));
label_1b733c:
    // 0x1b733c: 0x8e4300ec  lw          $v1, 0xEC($s2)
    ctx->pc = 0x1b733cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 236)));
label_1b7340:
    // 0x1b7340: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b7340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1b7344:
    // 0x1b7344: 0xae4200ec  sw          $v0, 0xEC($s2)
    ctx->pc = 0x1b7344u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 2));
label_1b7348:
    // 0x1b7348: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1b7348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1b734c:
    // 0x1b734c: 0xc0a0e30  jal         func_2838C0
label_1b7350:
    if (ctx->pc == 0x1B7350u) {
        ctx->pc = 0x1B7350u;
            // 0x1b7350: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->pc = 0x1B7354u;
        goto label_1b7354;
    }
    ctx->pc = 0x1B734Cu;
    SET_GPR_U32(ctx, 31, 0x1B7354u);
    ctx->pc = 0x1B7350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B734Cu;
            // 0x1b7350: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7354u; }
        if (ctx->pc != 0x1B7354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7354u; }
        if (ctx->pc != 0x1B7354u) { return; }
    }
    ctx->pc = 0x1B7354u;
label_1b7354:
    // 0x1b7354: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1b7358:
    if (ctx->pc == 0x1B7358u) {
        ctx->pc = 0x1B7358u;
            // 0x1b7358: 0x27a428b0  addiu       $a0, $sp, 0x28B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10416));
        ctx->pc = 0x1B735Cu;
        goto label_1b735c;
    }
    ctx->pc = 0x1B7354u;
    {
        const bool branch_taken_0x1b7354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7354u;
            // 0x1b7358: 0x27a428b0  addiu       $a0, $sp, 0x28B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7354) {
            ctx->pc = 0x1B73ACu;
            goto label_1b73ac;
        }
    }
    ctx->pc = 0x1B735Cu;
label_1b735c:
    // 0x1b735c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b735cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b7360:
    // 0x1b7360: 0xc04c574  jal         func_1315D0
label_1b7364:
    if (ctx->pc == 0x1B7364u) {
        ctx->pc = 0x1B7364u;
            // 0x1b7364: 0x27a528a0  addiu       $a1, $sp, 0x28A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10400));
        ctx->pc = 0x1B7368u;
        goto label_1b7368;
    }
    ctx->pc = 0x1B7360u;
    SET_GPR_U32(ctx, 31, 0x1B7368u);
    ctx->pc = 0x1B7364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7360u;
            // 0x1b7364: 0x27a528a0  addiu       $a1, $sp, 0x28A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7368u; }
        if (ctx->pc != 0x1B7368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7368u; }
        if (ctx->pc != 0x1B7368u) { return; }
    }
    ctx->pc = 0x1B7368u;
label_1b7368:
    // 0x1b7368: 0x27a428a0  addiu       $a0, $sp, 0x28A0
    ctx->pc = 0x1b7368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10400));
label_1b736c:
    // 0x1b736c: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x1b736cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1b7370:
    // 0x1b7370: 0xc041c3e  jal         func_1070F8
label_1b7374:
    if (ctx->pc == 0x1B7374u) {
        ctx->pc = 0x1B7374u;
            // 0x1b7374: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B7378u;
        goto label_1b7378;
    }
    ctx->pc = 0x1B7370u;
    SET_GPR_U32(ctx, 31, 0x1B7378u);
    ctx->pc = 0x1B7374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7370u;
            // 0x1b7374: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7378u; }
        if (ctx->pc != 0x1B7378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7378u; }
        if (ctx->pc != 0x1B7378u) { return; }
    }
    ctx->pc = 0x1B7378u;
label_1b7378:
    // 0x1b7378: 0x27a428a0  addiu       $a0, $sp, 0x28A0
    ctx->pc = 0x1b7378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10400));
label_1b737c:
    // 0x1b737c: 0xc041be0  jal         func_106F80
label_1b7380:
    if (ctx->pc == 0x1B7380u) {
        ctx->pc = 0x1B7380u;
            // 0x1b7380: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B7384u;
        goto label_1b7384;
    }
    ctx->pc = 0x1B737Cu;
    SET_GPR_U32(ctx, 31, 0x1B7384u);
    ctx->pc = 0x1B7380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B737Cu;
            // 0x1b7380: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7384u; }
        if (ctx->pc != 0x1B7384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7384u; }
        if (ctx->pc != 0x1B7384u) { return; }
    }
    ctx->pc = 0x1B7384u;
label_1b7384:
    // 0x1b7384: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1b7384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1b7388:
    // 0x1b7388: 0x27a428a0  addiu       $a0, $sp, 0x28A0
    ctx->pc = 0x1b7388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10400));
label_1b738c:
    // 0x1b738c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b738cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b7390:
    // 0x1b7390: 0xc041c4a  jal         func_107128
label_1b7394:
    if (ctx->pc == 0x1B7394u) {
        ctx->pc = 0x1B7394u;
            // 0x1b7394: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B7398u;
        goto label_1b7398;
    }
    ctx->pc = 0x1B7390u;
    SET_GPR_U32(ctx, 31, 0x1B7398u);
    ctx->pc = 0x1B7394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7390u;
            // 0x1b7394: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7398u; }
        if (ctx->pc != 0x1B7398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7398u; }
        if (ctx->pc != 0x1B7398u) { return; }
    }
    ctx->pc = 0x1B7398u;
label_1b7398:
    // 0x1b7398: 0x27a428a0  addiu       $a0, $sp, 0x28A0
    ctx->pc = 0x1b7398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10400));
label_1b739c:
    // 0x1b739c: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x1b739cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1b73a0:
    // 0x1b73a0: 0xc041c38  jal         func_1070E0
label_1b73a4:
    if (ctx->pc == 0x1B73A4u) {
        ctx->pc = 0x1B73A4u;
            // 0x1b73a4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B73A8u;
        goto label_1b73a8;
    }
    ctx->pc = 0x1B73A0u;
    SET_GPR_U32(ctx, 31, 0x1B73A8u);
    ctx->pc = 0x1B73A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B73A0u;
            // 0x1b73a4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B73A8u; }
        if (ctx->pc != 0x1B73A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B73A8u; }
        if (ctx->pc != 0x1B73A8u) { return; }
    }
    ctx->pc = 0x1B73A8u;
label_1b73a8:
    // 0x1b73a8: 0x27a428b0  addiu       $a0, $sp, 0x28B0
    ctx->pc = 0x1b73a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10416));
label_1b73ac:
    // 0x1b73ac: 0xc041c5c  jal         func_107170
label_1b73b0:
    if (ctx->pc == 0x1B73B0u) {
        ctx->pc = 0x1B73B0u;
            // 0x1b73b0: 0x26450110  addiu       $a1, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->pc = 0x1B73B4u;
        goto label_1b73b4;
    }
    ctx->pc = 0x1B73ACu;
    SET_GPR_U32(ctx, 31, 0x1B73B4u);
    ctx->pc = 0x1B73B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B73ACu;
            // 0x1b73b0: 0x26450110  addiu       $a1, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B73B4u; }
        if (ctx->pc != 0x1B73B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B73B4u; }
        if (ctx->pc != 0x1B73B4u) { return; }
    }
    ctx->pc = 0x1B73B4u;
label_1b73b4:
    // 0x1b73b4: 0x27a328bc  addiu       $v1, $sp, 0x28BC
    ctx->pc = 0x1b73b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 10428));
label_1b73b8:
    // 0x1b73b8: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x1b73b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_1b73bc:
    // 0x1b73bc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1b73bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b73c0:
    // 0x1b73c0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b73c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1b73c4:
    // 0x1b73c4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b73c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b73c8:
    // 0x1b73c8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1b73c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1b73cc:
    // 0x1b73cc: 0x24a56680  addiu       $a1, $a1, 0x6680
    ctx->pc = 0x1b73ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26240));
label_1b73d0:
    // 0x1b73d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b73d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b73d4:
    // 0x1b73d4: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1b73d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
label_1b73d8:
    // 0x1b73d8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b73d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1b73dc:
    // 0x1b73dc: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x1b73dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1b73e0:
    // 0x1b73e0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1b73e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1b73e4:
    // 0x1b73e4: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x1b73e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1b73e8:
    // 0x1b73e8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x1b73e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1b73ec:
    // 0x1b73ec: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1b73ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1b73f0:
    // 0x1b73f0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b73f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1b73f4:
    // 0x1b73f4: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1b73f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1b73f8:
    // 0x1b73f8: 0xc0b8498  jal         func_2E1260
label_1b73fc:
    if (ctx->pc == 0x1B73FCu) {
        ctx->pc = 0x1B73FCu;
            // 0x1b73fc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1B7400u;
        goto label_1b7400;
    }
    ctx->pc = 0x1B73F8u;
    SET_GPR_U32(ctx, 31, 0x1B7400u);
    ctx->pc = 0x1B73FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B73F8u;
            // 0x1b73fc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7400u; }
        if (ctx->pc != 0x1B7400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7400u; }
        if (ctx->pc != 0x1B7400u) { return; }
    }
    ctx->pc = 0x1B7400u;
label_1b7400:
    // 0x1b7400: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1b7400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1b7404:
    // 0x1b7404: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1b7404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b7408:
    // 0x1b7408: 0x27a528a0  addiu       $a1, $sp, 0x28A0
    ctx->pc = 0x1b7408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10400));
label_1b740c:
    // 0x1b740c: 0xc0b8894  jal         func_2E2250
label_1b7410:
    if (ctx->pc == 0x1B7410u) {
        ctx->pc = 0x1B7410u;
            // 0x1b7410: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B7414u;
        goto label_1b7414;
    }
    ctx->pc = 0x1B740Cu;
    SET_GPR_U32(ctx, 31, 0x1B7414u);
    ctx->pc = 0x1B7410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B740Cu;
            // 0x1b7410: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7414u; }
        if (ctx->pc != 0x1B7414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7414u; }
        if (ctx->pc != 0x1B7414u) { return; }
    }
    ctx->pc = 0x1B7414u;
label_1b7414:
    // 0x1b7414: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1b7414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1b7418:
    // 0x1b7418: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1b7418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b741c:
    // 0x1b741c: 0x26450110  addiu       $a1, $s2, 0x110
    ctx->pc = 0x1b741cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
label_1b7420:
    // 0x1b7420: 0xc0b88d8  jal         func_2E2360
label_1b7424:
    if (ctx->pc == 0x1B7424u) {
        ctx->pc = 0x1B7424u;
            // 0x1b7424: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B7428u;
        goto label_1b7428;
    }
    ctx->pc = 0x1B7420u;
    SET_GPR_U32(ctx, 31, 0x1B7428u);
    ctx->pc = 0x1B7424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7420u;
            // 0x1b7424: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2360u;
    if (runtime->hasFunction(0x2E2360u)) {
        auto targetFn = runtime->lookupFunction(0x2E2360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7428u; }
        if (ctx->pc != 0x1B7428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect2__16CEffectScriptManFPfii_0x2e2360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7428u; }
        if (ctx->pc != 0x1B7428u) { return; }
    }
    ctx->pc = 0x1B7428u;
label_1b7428:
    // 0x1b7428: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1b7428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1b742c:
    // 0x1b742c: 0x3c023fe6  lui         $v0, 0x3FE6
    ctx->pc = 0x1b742cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16358 << 16));
label_1b7430:
    // 0x1b7430: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1b7430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_1b7434:
    // 0x1b7434: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1b7434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b7438:
    // 0x1b7438: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b7438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b743c:
    // 0x1b743c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b743cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7440:
    // 0x1b7440: 0xc0b89f0  jal         func_2E27C0
label_1b7444:
    if (ctx->pc == 0x1B7444u) {
        ctx->pc = 0x1B7444u;
            // 0x1b7444: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B7448u;
        goto label_1b7448;
    }
    ctx->pc = 0x1B7440u;
    SET_GPR_U32(ctx, 31, 0x1B7448u);
    ctx->pc = 0x1B7444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7440u;
            // 0x1b7444: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E27C0u;
    if (runtime->hasFunction(0x2E27C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E27C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7448u; }
        if (ctx->pc != 0x1B7448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFifii_0x2e27c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7448u; }
        if (ctx->pc != 0x1B7448u) { return; }
    }
    ctx->pc = 0x1B7448u;
label_1b7448:
    // 0x1b7448: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x1b7448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1b744c:
    // 0x1b744c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1b744cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1b7450:
    // 0x1b7450: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1b7450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1b7454:
    // 0x1b7454: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1b7454u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1b7458:
    // 0x1b7458: 0x8c24c4d0  lw          $a0, -0x3B30($at)
    ctx->pc = 0x1b7458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952144)));
label_1b745c:
    // 0x1b745c: 0xc063818  jal         func_18E060
label_1b7460:
    if (ctx->pc == 0x1B7460u) {
        ctx->pc = 0x1B7460u;
            // 0x1b7460: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B7464u;
        goto label_1b7464;
    }
    ctx->pc = 0x1B745Cu;
    SET_GPR_U32(ctx, 31, 0x1B7464u);
    ctx->pc = 0x1B7460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B745Cu;
            // 0x1b7460: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7464u; }
        if (ctx->pc != 0x1B7464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7464u; }
        if (ctx->pc != 0x1B7464u) { return; }
    }
    ctx->pc = 0x1B7464u;
label_1b7464:
    // 0x1b7464: 0x12000050  beqz        $s0, . + 4 + (0x50 << 2)
label_1b7468:
    if (ctx->pc == 0x1B7468u) {
        ctx->pc = 0x1B746Cu;
        goto label_1b746c;
    }
    ctx->pc = 0x1B7464u;
    {
        const bool branch_taken_0x1b7464 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7464) {
            ctx->pc = 0x1B75A8u;
            goto label_1b75a8;
        }
    }
    ctx->pc = 0x1B746Cu;
label_1b746c:
    // 0x1b746c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1b746cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1b7470:
    // 0x1b7470: 0x1860004d  blez        $v1, . + 4 + (0x4D << 2)
label_1b7474:
    if (ctx->pc == 0x1B7474u) {
        ctx->pc = 0x1B7474u;
            // 0x1b7474: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1B7478u;
        goto label_1b7478;
    }
    ctx->pc = 0x1B7470u;
    {
        const bool branch_taken_0x1b7470 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1B7474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7470u;
            // 0x1b7474: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7470) {
            ctx->pc = 0x1B75A8u;
            goto label_1b75a8;
        }
    }
    ctx->pc = 0x1B7478u;
label_1b7478:
    // 0x1b7478: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1b7478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1b747c:
    // 0x1b747c: 0xae430120  sw          $v1, 0x120($s2)
    ctx->pc = 0x1b747cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 3));
label_1b7480:
    // 0x1b7480: 0x8e4300ec  lw          $v1, 0xEC($s2)
    ctx->pc = 0x1b7480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 236)));
label_1b7484:
    // 0x1b7484: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b7484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1b7488:
    // 0x1b7488: 0xae4200ec  sw          $v0, 0xEC($s2)
    ctx->pc = 0x1b7488u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 2));
label_1b748c:
    // 0x1b748c: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1b748cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1b7490:
    // 0x1b7490: 0xc0a0e30  jal         func_2838C0
label_1b7494:
    if (ctx->pc == 0x1B7494u) {
        ctx->pc = 0x1B7494u;
            // 0x1b7494: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->pc = 0x1B7498u;
        goto label_1b7498;
    }
    ctx->pc = 0x1B7490u;
    SET_GPR_U32(ctx, 31, 0x1B7498u);
    ctx->pc = 0x1B7494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7490u;
            // 0x1b7494: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7498u; }
        if (ctx->pc != 0x1B7498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7498u; }
        if (ctx->pc != 0x1B7498u) { return; }
    }
    ctx->pc = 0x1B7498u;
label_1b7498:
    // 0x1b7498: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1b749c:
    if (ctx->pc == 0x1B749Cu) {
        ctx->pc = 0x1B749Cu;
            // 0x1b749c: 0x27a428d0  addiu       $a0, $sp, 0x28D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10448));
        ctx->pc = 0x1B74A0u;
        goto label_1b74a0;
    }
    ctx->pc = 0x1B7498u;
    {
        const bool branch_taken_0x1b7498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B749Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7498u;
            // 0x1b749c: 0x27a428d0  addiu       $a0, $sp, 0x28D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7498) {
            ctx->pc = 0x1B74F0u;
            goto label_1b74f0;
        }
    }
    ctx->pc = 0x1B74A0u;
label_1b74a0:
    // 0x1b74a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b74a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b74a4:
    // 0x1b74a4: 0xc04c574  jal         func_1315D0
label_1b74a8:
    if (ctx->pc == 0x1B74A8u) {
        ctx->pc = 0x1B74A8u;
            // 0x1b74a8: 0x27a528c0  addiu       $a1, $sp, 0x28C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
        ctx->pc = 0x1B74ACu;
        goto label_1b74ac;
    }
    ctx->pc = 0x1B74A4u;
    SET_GPR_U32(ctx, 31, 0x1B74ACu);
    ctx->pc = 0x1B74A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B74A4u;
            // 0x1b74a8: 0x27a528c0  addiu       $a1, $sp, 0x28C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B74ACu; }
        if (ctx->pc != 0x1B74ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B74ACu; }
        if (ctx->pc != 0x1B74ACu) { return; }
    }
    ctx->pc = 0x1B74ACu;
label_1b74ac:
    // 0x1b74ac: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x1b74acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
label_1b74b0:
    // 0x1b74b0: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x1b74b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1b74b4:
    // 0x1b74b4: 0xc041c3e  jal         func_1070F8
label_1b74b8:
    if (ctx->pc == 0x1B74B8u) {
        ctx->pc = 0x1B74B8u;
            // 0x1b74b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B74BCu;
        goto label_1b74bc;
    }
    ctx->pc = 0x1B74B4u;
    SET_GPR_U32(ctx, 31, 0x1B74BCu);
    ctx->pc = 0x1B74B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B74B4u;
            // 0x1b74b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B74BCu; }
        if (ctx->pc != 0x1B74BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B74BCu; }
        if (ctx->pc != 0x1B74BCu) { return; }
    }
    ctx->pc = 0x1B74BCu;
label_1b74bc:
    // 0x1b74bc: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x1b74bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
label_1b74c0:
    // 0x1b74c0: 0xc041be0  jal         func_106F80
label_1b74c4:
    if (ctx->pc == 0x1B74C4u) {
        ctx->pc = 0x1B74C4u;
            // 0x1b74c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B74C8u;
        goto label_1b74c8;
    }
    ctx->pc = 0x1B74C0u;
    SET_GPR_U32(ctx, 31, 0x1B74C8u);
    ctx->pc = 0x1B74C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B74C0u;
            // 0x1b74c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B74C8u; }
        if (ctx->pc != 0x1B74C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B74C8u; }
        if (ctx->pc != 0x1B74C8u) { return; }
    }
    ctx->pc = 0x1B74C8u;
label_1b74c8:
    // 0x1b74c8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1b74c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1b74cc:
    // 0x1b74cc: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x1b74ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
label_1b74d0:
    // 0x1b74d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b74d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b74d4:
    // 0x1b74d4: 0xc041c4a  jal         func_107128
label_1b74d8:
    if (ctx->pc == 0x1B74D8u) {
        ctx->pc = 0x1B74D8u;
            // 0x1b74d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B74DCu;
        goto label_1b74dc;
    }
    ctx->pc = 0x1B74D4u;
    SET_GPR_U32(ctx, 31, 0x1B74DCu);
    ctx->pc = 0x1B74D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B74D4u;
            // 0x1b74d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B74DCu; }
        if (ctx->pc != 0x1B74DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B74DCu; }
        if (ctx->pc != 0x1B74DCu) { return; }
    }
    ctx->pc = 0x1B74DCu;
label_1b74dc:
    // 0x1b74dc: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x1b74dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
label_1b74e0:
    // 0x1b74e0: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x1b74e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1b74e4:
    // 0x1b74e4: 0xc041c38  jal         func_1070E0
label_1b74e8:
    if (ctx->pc == 0x1B74E8u) {
        ctx->pc = 0x1B74E8u;
            // 0x1b74e8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B74ECu;
        goto label_1b74ec;
    }
    ctx->pc = 0x1B74E4u;
    SET_GPR_U32(ctx, 31, 0x1B74ECu);
    ctx->pc = 0x1B74E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B74E4u;
            // 0x1b74e8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B74ECu; }
        if (ctx->pc != 0x1B74ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B74ECu; }
        if (ctx->pc != 0x1B74ECu) { return; }
    }
    ctx->pc = 0x1B74ECu;
label_1b74ec:
    // 0x1b74ec: 0x27a428d0  addiu       $a0, $sp, 0x28D0
    ctx->pc = 0x1b74ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10448));
label_1b74f0:
    // 0x1b74f0: 0xc041c5c  jal         func_107170
label_1b74f4:
    if (ctx->pc == 0x1B74F4u) {
        ctx->pc = 0x1B74F4u;
            // 0x1b74f4: 0x26450110  addiu       $a1, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->pc = 0x1B74F8u;
        goto label_1b74f8;
    }
    ctx->pc = 0x1B74F0u;
    SET_GPR_U32(ctx, 31, 0x1B74F8u);
    ctx->pc = 0x1B74F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B74F0u;
            // 0x1b74f4: 0x26450110  addiu       $a1, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B74F8u; }
        if (ctx->pc != 0x1B74F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B74F8u; }
        if (ctx->pc != 0x1B74F8u) { return; }
    }
    ctx->pc = 0x1B74F8u;
label_1b74f8:
    // 0x1b74f8: 0x27a328dc  addiu       $v1, $sp, 0x28DC
    ctx->pc = 0x1b74f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 10460));
label_1b74fc:
    // 0x1b74fc: 0x3c023fb3  lui         $v0, 0x3FB3
    ctx->pc = 0x1b74fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16307 << 16));
label_1b7500:
    // 0x1b7500: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1b7500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b7504:
    // 0x1b7504: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1b7504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_1b7508:
    // 0x1b7508: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b7508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b750c:
    // 0x1b750c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1b750cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1b7510:
    // 0x1b7510: 0x24a56680  addiu       $a1, $a1, 0x6680
    ctx->pc = 0x1b7510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26240));
label_1b7514:
    // 0x1b7514: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b7514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7518:
    // 0x1b7518: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1b7518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
label_1b751c:
    // 0x1b751c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b751cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1b7520:
    // 0x1b7520: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x1b7520u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1b7524:
    // 0x1b7524: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1b7524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1b7528:
    // 0x1b7528: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x1b7528u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1b752c:
    // 0x1b752c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x1b752cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1b7530:
    // 0x1b7530: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1b7530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1b7534:
    // 0x1b7534: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b7534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1b7538:
    // 0x1b7538: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1b7538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1b753c:
    // 0x1b753c: 0xc0b8498  jal         func_2E1260
label_1b7540:
    if (ctx->pc == 0x1B7540u) {
        ctx->pc = 0x1B7540u;
            // 0x1b7540: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1B7544u;
        goto label_1b7544;
    }
    ctx->pc = 0x1B753Cu;
    SET_GPR_U32(ctx, 31, 0x1B7544u);
    ctx->pc = 0x1B7540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B753Cu;
            // 0x1b7540: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7544u; }
        if (ctx->pc != 0x1B7544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7544u; }
        if (ctx->pc != 0x1B7544u) { return; }
    }
    ctx->pc = 0x1B7544u;
label_1b7544:
    // 0x1b7544: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1b7544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1b7548:
    // 0x1b7548: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1b7548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b754c:
    // 0x1b754c: 0x27a528c0  addiu       $a1, $sp, 0x28C0
    ctx->pc = 0x1b754cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
label_1b7550:
    // 0x1b7550: 0xc0b8894  jal         func_2E2250
label_1b7554:
    if (ctx->pc == 0x1B7554u) {
        ctx->pc = 0x1B7554u;
            // 0x1b7554: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B7558u;
        goto label_1b7558;
    }
    ctx->pc = 0x1B7550u;
    SET_GPR_U32(ctx, 31, 0x1B7558u);
    ctx->pc = 0x1B7554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7550u;
            // 0x1b7554: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7558u; }
        if (ctx->pc != 0x1B7558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7558u; }
        if (ctx->pc != 0x1B7558u) { return; }
    }
    ctx->pc = 0x1B7558u;
label_1b7558:
    // 0x1b7558: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1b7558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1b755c:
    // 0x1b755c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1b755cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b7560:
    // 0x1b7560: 0x26450110  addiu       $a1, $s2, 0x110
    ctx->pc = 0x1b7560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
label_1b7564:
    // 0x1b7564: 0xc0b88d8  jal         func_2E2360
label_1b7568:
    if (ctx->pc == 0x1B7568u) {
        ctx->pc = 0x1B7568u;
            // 0x1b7568: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B756Cu;
        goto label_1b756c;
    }
    ctx->pc = 0x1B7564u;
    SET_GPR_U32(ctx, 31, 0x1B756Cu);
    ctx->pc = 0x1B7568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7564u;
            // 0x1b7568: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2360u;
    if (runtime->hasFunction(0x2E2360u)) {
        auto targetFn = runtime->lookupFunction(0x2E2360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B756Cu; }
        if (ctx->pc != 0x1B756Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect2__16CEffectScriptManFPfii_0x2e2360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B756Cu; }
        if (ctx->pc != 0x1B756Cu) { return; }
    }
    ctx->pc = 0x1B756Cu;
label_1b756c:
    // 0x1b756c: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1b756cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1b7570:
    // 0x1b7570: 0x3c023fe6  lui         $v0, 0x3FE6
    ctx->pc = 0x1b7570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16358 << 16));
label_1b7574:
    // 0x1b7574: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1b7574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_1b7578:
    // 0x1b7578: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1b7578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b757c:
    // 0x1b757c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b757cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b7580:
    // 0x1b7580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b7580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7584:
    // 0x1b7584: 0xc0b89f0  jal         func_2E27C0
label_1b7588:
    if (ctx->pc == 0x1B7588u) {
        ctx->pc = 0x1B7588u;
            // 0x1b7588: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B758Cu;
        goto label_1b758c;
    }
    ctx->pc = 0x1B7584u;
    SET_GPR_U32(ctx, 31, 0x1B758Cu);
    ctx->pc = 0x1B7588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7584u;
            // 0x1b7588: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E27C0u;
    if (runtime->hasFunction(0x2E27C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E27C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B758Cu; }
        if (ctx->pc != 0x1B758Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFifii_0x2e27c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B758Cu; }
        if (ctx->pc != 0x1B758Cu) { return; }
    }
    ctx->pc = 0x1B758Cu;
label_1b758c:
    // 0x1b758c: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x1b758cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1b7590:
    // 0x1b7590: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1b7590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1b7594:
    // 0x1b7594: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1b7594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1b7598:
    // 0x1b7598: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1b7598u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1b759c:
    // 0x1b759c: 0x8c24c4d0  lw          $a0, -0x3B30($at)
    ctx->pc = 0x1b759cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952144)));
label_1b75a0:
    // 0x1b75a0: 0xc063818  jal         func_18E060
label_1b75a4:
    if (ctx->pc == 0x1B75A4u) {
        ctx->pc = 0x1B75A4u;
            // 0x1b75a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B75A8u;
        goto label_1b75a8;
    }
    ctx->pc = 0x1B75A0u;
    SET_GPR_U32(ctx, 31, 0x1B75A8u);
    ctx->pc = 0x1B75A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B75A0u;
            // 0x1b75a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B75A8u; }
        if (ctx->pc != 0x1B75A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B75A8u; }
        if (ctx->pc != 0x1B75A8u) { return; }
    }
    ctx->pc = 0x1B75A8u;
label_1b75a8:
    // 0x1b75a8: 0xc64100e0  lwc1        $f1, 0xE0($s2)
    ctx->pc = 0x1b75a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b75ac:
    // 0x1b75ac: 0xc64000dc  lwc1        $f0, 0xDC($s2)
    ctx->pc = 0x1b75acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b75b0:
    // 0x1b75b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b75b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b75b4:
    // 0x1b75b4: 0xe64000dc  swc1        $f0, 0xDC($s2)
    ctx->pc = 0x1b75b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 220), bits); }
label_1b75b8:
    // 0x1b75b8: 0xc64100e4  lwc1        $f1, 0xE4($s2)
    ctx->pc = 0x1b75b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b75bc:
    // 0x1b75bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b75bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b75c0:
    // 0x1b75c0: 0x0  nop
    ctx->pc = 0x1b75c0u;
    // NOP
label_1b75c4:
    // 0x1b75c4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1b75c8:
    if (ctx->pc == 0x1B75C8u) {
        ctx->pc = 0x1B75CCu;
        goto label_1b75cc;
    }
    ctx->pc = 0x1B75C4u;
    {
        const bool branch_taken_0x1b75c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b75c4) {
            ctx->pc = 0x1B75D0u;
            goto label_1b75d0;
        }
    }
    ctx->pc = 0x1B75CCu;
label_1b75cc:
    // 0x1b75cc: 0xe64100dc  swc1        $f1, 0xDC($s2)
    ctx->pc = 0x1b75ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 220), bits); }
label_1b75d0:
    // 0x1b75d0: 0xc6410100  lwc1        $f1, 0x100($s2)
    ctx->pc = 0x1b75d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b75d4:
    // 0x1b75d4: 0xc64000fc  lwc1        $f0, 0xFC($s2)
    ctx->pc = 0x1b75d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b75d8:
    // 0x1b75d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b75d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b75dc:
    // 0x1b75dc: 0xe64000fc  swc1        $f0, 0xFC($s2)
    ctx->pc = 0x1b75dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
label_1b75e0:
    // 0x1b75e0: 0xc6410104  lwc1        $f1, 0x104($s2)
    ctx->pc = 0x1b75e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b75e4:
    // 0x1b75e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b75e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b75e8:
    // 0x1b75e8: 0x0  nop
    ctx->pc = 0x1b75e8u;
    // NOP
label_1b75ec:
    // 0x1b75ec: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1b75f0:
    if (ctx->pc == 0x1B75F0u) {
        ctx->pc = 0x1B75F4u;
        goto label_1b75f4;
    }
    ctx->pc = 0x1B75ECu;
    {
        const bool branch_taken_0x1b75ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b75ec) {
            ctx->pc = 0x1B75F8u;
            goto label_1b75f8;
        }
    }
    ctx->pc = 0x1B75F4u;
label_1b75f4:
    // 0x1b75f4: 0xe64100fc  swc1        $f1, 0xFC($s2)
    ctx->pc = 0x1b75f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
label_1b75f8:
    // 0x1b75f8: 0x8e4300f8  lw          $v1, 0xF8($s2)
    ctx->pc = 0x1b75f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
label_1b75fc:
    // 0x1b75fc: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
label_1b7600:
    if (ctx->pc == 0x1B7600u) {
        ctx->pc = 0x1B7600u;
            // 0x1b7600: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1B7604u;
        goto label_1b7604;
    }
    ctx->pc = 0x1B75FCu;
    {
        const bool branch_taken_0x1b75fc = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1B7600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B75FCu;
            // 0x1b7600: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b75fc) {
            ctx->pc = 0x1B7618u;
            goto label_1b7618;
        }
    }
    ctx->pc = 0x1B7604u;
label_1b7604:
    // 0x1b7604: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1b7604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1b7608:
    // 0x1b7608: 0xae440120  sw          $a0, 0x120($s2)
    ctx->pc = 0x1b7608u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 4));
label_1b760c:
    // 0x1b760c: 0x8e4400ec  lw          $a0, 0xEC($s2)
    ctx->pc = 0x1b760cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 236)));
label_1b7610:
    // 0x1b7610: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b7610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1b7614:
    // 0x1b7614: 0xae4300ec  sw          $v1, 0xEC($s2)
    ctx->pc = 0x1b7614u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 3));
label_1b7618:
    // 0x1b7618: 0x8e440120  lw          $a0, 0x120($s2)
    ctx->pc = 0x1b7618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 288)));
label_1b761c:
    // 0x1b761c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b761cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b7620:
    // 0x1b7620: 0x14830034  bne         $a0, $v1, . + 4 + (0x34 << 2)
label_1b7624:
    if (ctx->pc == 0x1B7624u) {
        ctx->pc = 0x1B7628u;
        goto label_1b7628;
    }
    ctx->pc = 0x1B7620u;
    {
        const bool branch_taken_0x1b7620 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b7620) {
            ctx->pc = 0x1B76F4u;
            goto label_1b76f4;
        }
    }
    ctx->pc = 0x1B7628u;
label_1b7628:
    // 0x1b7628: 0x8e4300f8  lw          $v1, 0xF8($s2)
    ctx->pc = 0x1b7628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
label_1b762c:
    // 0x1b762c: 0x1860002d  blez        $v1, . + 4 + (0x2D << 2)
label_1b7630:
    if (ctx->pc == 0x1B7630u) {
        ctx->pc = 0x1B7630u;
            // 0x1b7630: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->pc = 0x1B7634u;
        goto label_1b7634;
    }
    ctx->pc = 0x1B762Cu;
    {
        const bool branch_taken_0x1b762c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1B7630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B762Cu;
            // 0x1b7630: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b762c) {
            ctx->pc = 0x1B76E4u;
            goto label_1b76e4;
        }
    }
    ctx->pc = 0x1B7634u;
label_1b7634:
    // 0x1b7634: 0x27a428e0  addiu       $a0, $sp, 0x28E0
    ctx->pc = 0x1b7634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10464));
label_1b7638:
    // 0x1b7638: 0x24636a80  addiu       $v1, $v1, 0x6A80
    ctx->pc = 0x1b7638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27264));
label_1b763c:
    // 0x1b763c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1b763cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1b7640:
    // 0x1b7640: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1b7640u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1b7644:
    // 0x1b7644: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1b7644u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_1b7648:
    // 0x1b7648: 0x8c270324  lw          $a3, 0x324($at)
    ctx->pc = 0x1b7648u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 804)));
label_1b764c:
    // 0x1b764c: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_1b7650:
    if (ctx->pc == 0x1B7650u) {
        ctx->pc = 0x1B7650u;
            // 0x1b7650: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1B7654u;
        goto label_1b7654;
    }
    ctx->pc = 0x1B764Cu;
    {
        const bool branch_taken_0x1b764c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B764Cu;
            // 0x1b7650: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b764c) {
            ctx->pc = 0x1B765Cu;
            goto label_1b765c;
        }
    }
    ctx->pc = 0x1B7654u;
label_1b7654:
    // 0x1b7654: 0x10000011  b           . + 4 + (0x11 << 2)
label_1b7658:
    if (ctx->pc == 0x1B7658u) {
        ctx->pc = 0x1B7658u;
            // 0x1b7658: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B765Cu;
        goto label_1b765c;
    }
    ctx->pc = 0x1B7654u;
    {
        const bool branch_taken_0x1b7654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7654u;
            // 0x1b7658: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7654) {
            ctx->pc = 0x1B769Cu;
            goto label_1b769c;
        }
    }
    ctx->pc = 0x1B765Cu;
label_1b765c:
    // 0x1b765c: 0x8c26032c  lw          $a2, 0x32C($at)
    ctx->pc = 0x1b765cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 812)));
label_1b7660:
    // 0x1b7660: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1b7660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1b7664:
    // 0x1b7664: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1b7664u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1b7668:
    // 0x1b7668: 0x8c230328  lw          $v1, 0x328($at)
    ctx->pc = 0x1b7668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 808)));
label_1b766c:
    // 0x1b766c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1b766cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1b7670:
    // 0x1b7670: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1b7670u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1b7674:
    // 0x1b7674: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x1b7674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1b7678:
    // 0x1b7678: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1b7678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1b767c:
    // 0x1b767c: 0xac24032c  sw          $a0, 0x32C($at)
    ctx->pc = 0x1b767cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 812), GPR_U32(ctx, 4));
label_1b7680:
    // 0x1b7680: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1b7680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1b7684:
    // 0x1b7684: 0x8c24032c  lw          $a0, 0x32C($at)
    ctx->pc = 0x1b7684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 812)));
label_1b7688:
    // 0x1b7688: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1b7688u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b768c:
    // 0x1b768c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1b7690:
    if (ctx->pc == 0x1B7690u) {
        ctx->pc = 0x1B7690u;
            // 0x1b7690: 0xe58821  addu        $s1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->pc = 0x1B7694u;
        goto label_1b7694;
    }
    ctx->pc = 0x1B768Cu;
    {
        const bool branch_taken_0x1b768c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B768Cu;
            // 0x1b7690: 0xe58821  addu        $s1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b768c) {
            ctx->pc = 0x1B769Cu;
            goto label_1b769c;
        }
    }
    ctx->pc = 0x1B7694u;
label_1b7694:
    // 0x1b7694: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1b7694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1b7698:
    // 0x1b7698: 0xac20032c  sw          $zero, 0x32C($at)
    ctx->pc = 0x1b7698u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 812), GPR_U32(ctx, 0));
label_1b769c:
    // 0x1b769c: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_1b76a0:
    if (ctx->pc == 0x1B76A0u) {
        ctx->pc = 0x1B76A4u;
        goto label_1b76a4;
    }
    ctx->pc = 0x1B769Cu;
    {
        const bool branch_taken_0x1b769c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b769c) {
            ctx->pc = 0x1B76E4u;
            goto label_1b76e4;
        }
    }
    ctx->pc = 0x1B76A4u;
label_1b76a4:
    // 0x1b76a4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1b76a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_1b76a8:
    // 0x1b76a8: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1b76a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_1b76ac:
    // 0x1b76ac: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b76acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1b76b0:
    // 0x1b76b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b76b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b76b4:
    // 0x1b76b4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1b76b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1b76b8:
    // 0x1b76b8: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x1b76b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1b76bc:
    // 0x1b76bc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1b76bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1b76c0:
    // 0x1b76c0: 0x27a628e0  addiu       $a2, $sp, 0x28E0
    ctx->pc = 0x1b76c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 10464));
label_1b76c4:
    // 0x1b76c4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1b76c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1b76c8:
    // 0x1b76c8: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x1b76c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b76cc:
    // 0x1b76cc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1b76ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b76d0:
    // 0x1b76d0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b76d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b76d4:
    // 0x1b76d4: 0xc07098c  jal         func_1C2630
label_1b76d8:
    if (ctx->pc == 0x1B76D8u) {
        ctx->pc = 0x1B76D8u;
            // 0x1b76d8: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x1B76DCu;
        goto label_1b76dc;
    }
    ctx->pc = 0x1B76D4u;
    SET_GPR_U32(ctx, 31, 0x1B76DCu);
    ctx->pc = 0x1B76D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B76D4u;
            // 0x1b76d8: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2630u;
    if (runtime->hasFunction(0x1C2630u)) {
        auto targetFn = runtime->lookupFunction(0x1C2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B76DCu; }
        if (ctx->pc != 0x1B76DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SethitEffect__15CHitEffectImageFPfPfffffii_0x1c2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B76DCu; }
        if (ctx->pc != 0x1B76DCu) { return; }
    }
    ctx->pc = 0x1B76DCu;
label_1b76dc:
    // 0x1b76dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b76dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b76e0:
    // 0x1b76e0: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x1b76e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
label_1b76e4:
    // 0x1b76e4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1b76e8:
    if (ctx->pc == 0x1B76E8u) {
        ctx->pc = 0x1B76E8u;
            // 0x1b76e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B76ECu;
        goto label_1b76ec;
    }
    ctx->pc = 0x1B76E4u;
    {
        const bool branch_taken_0x1b76e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B76E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B76E4u;
            // 0x1b76e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b76e4) {
            ctx->pc = 0x1B76F4u;
            goto label_1b76f4;
        }
    }
    ctx->pc = 0x1B76ECu;
label_1b76ec:
    // 0x1b76ec: 0xc06e9a0  jal         func_1BA680
label_1b76f0:
    if (ctx->pc == 0x1B76F0u) {
        ctx->pc = 0x1B76F0u;
            // 0x1b76f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1B76F4u;
        goto label_1b76f4;
    }
    ctx->pc = 0x1B76ECu;
    SET_GPR_U32(ctx, 31, 0x1B76F4u);
    ctx->pc = 0x1B76F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B76ECu;
            // 0x1b76f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA680u;
    if (runtime->hasFunction(0x1BA680u)) {
        auto targetFn = runtime->lookupFunction(0x1BA680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B76F4u; }
        if (ctx->pc != 0x1B76F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Delete__8CColPrimFi_0x1ba680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B76F4u; }
        if (ctx->pc != 0x1B76F4u) { return; }
    }
    ctx->pc = 0x1B76F4u;
label_1b76f4:
    // 0x1b76f4: 0x8e4300d8  lw          $v1, 0xD8($s2)
    ctx->pc = 0x1b76f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_1b76f8:
    // 0x1b76f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b76f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b76fc:
    // 0x1b76fc: 0xae4300d8  sw          $v1, 0xD8($s2)
    ctx->pc = 0x1b76fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 3));
label_1b7700:
    // 0x1b7700: 0x8e4300d8  lw          $v1, 0xD8($s2)
    ctx->pc = 0x1b7700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_1b7704:
    // 0x1b7704: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x1b7704u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_1b7708:
    // 0x1b7708: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_1b770c:
    if (ctx->pc == 0x1B770Cu) {
        ctx->pc = 0x1B7710u;
        goto label_1b7710;
    }
    ctx->pc = 0x1B7708u;
    {
        const bool branch_taken_0x1b7708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7708) {
            ctx->pc = 0x1B7758u;
            goto label_1b7758;
        }
    }
    ctx->pc = 0x1B7710u;
label_1b7710:
    // 0x1b7710: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x1b7710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_1b7714:
    // 0x1b7714: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x1b7714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1b7718:
    // 0x1b7718: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b7718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1b771c:
    // 0x1b771c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b771cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1b7720:
    // 0x1b7720: 0xc041c5c  jal         func_107170
label_1b7724:
    if (ctx->pc == 0x1B7724u) {
        ctx->pc = 0x1B7724u;
            // 0x1b7724: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->pc = 0x1B7728u;
        goto label_1b7728;
    }
    ctx->pc = 0x1B7720u;
    SET_GPR_U32(ctx, 31, 0x1B7728u);
    ctx->pc = 0x1B7724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7720u;
            // 0x1b7724: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7728u; }
        if (ctx->pc != 0x1B7728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7728u; }
        if (ctx->pc != 0x1B7728u) { return; }
    }
    ctx->pc = 0x1B7728u;
label_1b7728:
    // 0x1b7728: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x1b7728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_1b772c:
    // 0x1b772c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b772cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b7730:
    // 0x1b7730: 0xae4300d4  sw          $v1, 0xD4($s2)
    ctx->pc = 0x1b7730u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 3));
label_1b7734:
    // 0x1b7734: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x1b7734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_1b7738:
    // 0x1b7738: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x1b7738u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_1b773c:
    // 0x1b773c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1b7740:
    if (ctx->pc == 0x1B7740u) {
        ctx->pc = 0x1B7744u;
        goto label_1b7744;
    }
    ctx->pc = 0x1B773Cu;
    {
        const bool branch_taken_0x1b773c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b773c) {
            ctx->pc = 0x1B7748u;
            goto label_1b7748;
        }
    }
    ctx->pc = 0x1B7744u;
label_1b7744:
    // 0x1b7744: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x1b7744u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
label_1b7748:
    // 0x1b7748: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x1b7748u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
label_1b774c:
    // 0x1b774c: 0x8e4300d0  lw          $v1, 0xD0($s2)
    ctx->pc = 0x1b774cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_1b7750:
    // 0x1b7750: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x1b7750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_1b7754:
    // 0x1b7754: 0xae4300d0  sw          $v1, 0xD0($s2)
    ctx->pc = 0x1b7754u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 3));
label_1b7758:
    // 0x1b7758: 0x8e440120  lw          $a0, 0x120($s2)
    ctx->pc = 0x1b7758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 288)));
label_1b775c:
    // 0x1b775c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b775cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b7760:
    // 0x1b7760: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
label_1b7764:
    if (ctx->pc == 0x1B7764u) {
        ctx->pc = 0x1B7768u;
        goto label_1b7768;
    }
    ctx->pc = 0x1B7760u;
    {
        const bool branch_taken_0x1b7760 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b7760) {
            ctx->pc = 0x1B7788u;
            goto label_1b7788;
        }
    }
    ctx->pc = 0x1B7768u;
label_1b7768:
    // 0x1b7768: 0x8e4300d0  lw          $v1, 0xD0($s2)
    ctx->pc = 0x1b7768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_1b776c:
    // 0x1b776c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b776cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1b7770:
    // 0x1b7770: 0xae4300d0  sw          $v1, 0xD0($s2)
    ctx->pc = 0x1b7770u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 3));
label_1b7774:
    // 0x1b7774: 0x8e4300d0  lw          $v1, 0xD0($s2)
    ctx->pc = 0x1b7774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_1b7778:
    // 0x1b7778: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x1b7778u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_1b777c:
    // 0x1b777c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1b7780:
    if (ctx->pc == 0x1B7780u) {
        ctx->pc = 0x1B7784u;
        goto label_1b7784;
    }
    ctx->pc = 0x1B777Cu;
    {
        const bool branch_taken_0x1b777c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b777c) {
            ctx->pc = 0x1B7788u;
            goto label_1b7788;
        }
    }
    ctx->pc = 0x1B7784u;
label_1b7784:
    // 0x1b7784: 0xae400120  sw          $zero, 0x120($s2)
    ctx->pc = 0x1b7784u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 0));
label_1b7788:
    // 0x1b7788: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b7788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b778c:
    // 0x1b778c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b778cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b7790:
    // 0x1b7790: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b7790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b7794:
    // 0x1b7794: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b7798:
    // 0x1b7798: 0x3e00008  jr          $ra
label_1b779c:
    if (ctx->pc == 0x1B779Cu) {
        ctx->pc = 0x1B779Cu;
            // 0x1b779c: 0x27bd28f0  addiu       $sp, $sp, 0x28F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10480));
        ctx->pc = 0x1B77A0u;
        goto label_fallthrough_0x1b7798;
    }
    ctx->pc = 0x1B7798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B779Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7798u;
            // 0x1b779c: 0x27bd28f0  addiu       $sp, $sp, 0x28F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b7798:
    ctx->pc = 0x1B77A0u;
}
