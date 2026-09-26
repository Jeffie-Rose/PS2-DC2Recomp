#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: OutPutFile__Fv
// Address: 0x27dd00 - 0x27e510
void OutPutFile__Fv_0x27dd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("OutPutFile__Fv_0x27dd00");
#endif

    switch (ctx->pc) {
        case 0x27dd00u: goto label_27dd00;
        case 0x27dd04u: goto label_27dd04;
        case 0x27dd08u: goto label_27dd08;
        case 0x27dd0cu: goto label_27dd0c;
        case 0x27dd10u: goto label_27dd10;
        case 0x27dd14u: goto label_27dd14;
        case 0x27dd18u: goto label_27dd18;
        case 0x27dd1cu: goto label_27dd1c;
        case 0x27dd20u: goto label_27dd20;
        case 0x27dd24u: goto label_27dd24;
        case 0x27dd28u: goto label_27dd28;
        case 0x27dd2cu: goto label_27dd2c;
        case 0x27dd30u: goto label_27dd30;
        case 0x27dd34u: goto label_27dd34;
        case 0x27dd38u: goto label_27dd38;
        case 0x27dd3cu: goto label_27dd3c;
        case 0x27dd40u: goto label_27dd40;
        case 0x27dd44u: goto label_27dd44;
        case 0x27dd48u: goto label_27dd48;
        case 0x27dd4cu: goto label_27dd4c;
        case 0x27dd50u: goto label_27dd50;
        case 0x27dd54u: goto label_27dd54;
        case 0x27dd58u: goto label_27dd58;
        case 0x27dd5cu: goto label_27dd5c;
        case 0x27dd60u: goto label_27dd60;
        case 0x27dd64u: goto label_27dd64;
        case 0x27dd68u: goto label_27dd68;
        case 0x27dd6cu: goto label_27dd6c;
        case 0x27dd70u: goto label_27dd70;
        case 0x27dd74u: goto label_27dd74;
        case 0x27dd78u: goto label_27dd78;
        case 0x27dd7cu: goto label_27dd7c;
        case 0x27dd80u: goto label_27dd80;
        case 0x27dd84u: goto label_27dd84;
        case 0x27dd88u: goto label_27dd88;
        case 0x27dd8cu: goto label_27dd8c;
        case 0x27dd90u: goto label_27dd90;
        case 0x27dd94u: goto label_27dd94;
        case 0x27dd98u: goto label_27dd98;
        case 0x27dd9cu: goto label_27dd9c;
        case 0x27dda0u: goto label_27dda0;
        case 0x27dda4u: goto label_27dda4;
        case 0x27dda8u: goto label_27dda8;
        case 0x27ddacu: goto label_27ddac;
        case 0x27ddb0u: goto label_27ddb0;
        case 0x27ddb4u: goto label_27ddb4;
        case 0x27ddb8u: goto label_27ddb8;
        case 0x27ddbcu: goto label_27ddbc;
        case 0x27ddc0u: goto label_27ddc0;
        case 0x27ddc4u: goto label_27ddc4;
        case 0x27ddc8u: goto label_27ddc8;
        case 0x27ddccu: goto label_27ddcc;
        case 0x27ddd0u: goto label_27ddd0;
        case 0x27ddd4u: goto label_27ddd4;
        case 0x27ddd8u: goto label_27ddd8;
        case 0x27dddcu: goto label_27dddc;
        case 0x27dde0u: goto label_27dde0;
        case 0x27dde4u: goto label_27dde4;
        case 0x27dde8u: goto label_27dde8;
        case 0x27ddecu: goto label_27ddec;
        case 0x27ddf0u: goto label_27ddf0;
        case 0x27ddf4u: goto label_27ddf4;
        case 0x27ddf8u: goto label_27ddf8;
        case 0x27ddfcu: goto label_27ddfc;
        case 0x27de00u: goto label_27de00;
        case 0x27de04u: goto label_27de04;
        case 0x27de08u: goto label_27de08;
        case 0x27de0cu: goto label_27de0c;
        case 0x27de10u: goto label_27de10;
        case 0x27de14u: goto label_27de14;
        case 0x27de18u: goto label_27de18;
        case 0x27de1cu: goto label_27de1c;
        case 0x27de20u: goto label_27de20;
        case 0x27de24u: goto label_27de24;
        case 0x27de28u: goto label_27de28;
        case 0x27de2cu: goto label_27de2c;
        case 0x27de30u: goto label_27de30;
        case 0x27de34u: goto label_27de34;
        case 0x27de38u: goto label_27de38;
        case 0x27de3cu: goto label_27de3c;
        case 0x27de40u: goto label_27de40;
        case 0x27de44u: goto label_27de44;
        case 0x27de48u: goto label_27de48;
        case 0x27de4cu: goto label_27de4c;
        case 0x27de50u: goto label_27de50;
        case 0x27de54u: goto label_27de54;
        case 0x27de58u: goto label_27de58;
        case 0x27de5cu: goto label_27de5c;
        case 0x27de60u: goto label_27de60;
        case 0x27de64u: goto label_27de64;
        case 0x27de68u: goto label_27de68;
        case 0x27de6cu: goto label_27de6c;
        case 0x27de70u: goto label_27de70;
        case 0x27de74u: goto label_27de74;
        case 0x27de78u: goto label_27de78;
        case 0x27de7cu: goto label_27de7c;
        case 0x27de80u: goto label_27de80;
        case 0x27de84u: goto label_27de84;
        case 0x27de88u: goto label_27de88;
        case 0x27de8cu: goto label_27de8c;
        case 0x27de90u: goto label_27de90;
        case 0x27de94u: goto label_27de94;
        case 0x27de98u: goto label_27de98;
        case 0x27de9cu: goto label_27de9c;
        case 0x27dea0u: goto label_27dea0;
        case 0x27dea4u: goto label_27dea4;
        case 0x27dea8u: goto label_27dea8;
        case 0x27deacu: goto label_27deac;
        case 0x27deb0u: goto label_27deb0;
        case 0x27deb4u: goto label_27deb4;
        case 0x27deb8u: goto label_27deb8;
        case 0x27debcu: goto label_27debc;
        case 0x27dec0u: goto label_27dec0;
        case 0x27dec4u: goto label_27dec4;
        case 0x27dec8u: goto label_27dec8;
        case 0x27deccu: goto label_27decc;
        case 0x27ded0u: goto label_27ded0;
        case 0x27ded4u: goto label_27ded4;
        case 0x27ded8u: goto label_27ded8;
        case 0x27dedcu: goto label_27dedc;
        case 0x27dee0u: goto label_27dee0;
        case 0x27dee4u: goto label_27dee4;
        case 0x27dee8u: goto label_27dee8;
        case 0x27deecu: goto label_27deec;
        case 0x27def0u: goto label_27def0;
        case 0x27def4u: goto label_27def4;
        case 0x27def8u: goto label_27def8;
        case 0x27defcu: goto label_27defc;
        case 0x27df00u: goto label_27df00;
        case 0x27df04u: goto label_27df04;
        case 0x27df08u: goto label_27df08;
        case 0x27df0cu: goto label_27df0c;
        case 0x27df10u: goto label_27df10;
        case 0x27df14u: goto label_27df14;
        case 0x27df18u: goto label_27df18;
        case 0x27df1cu: goto label_27df1c;
        case 0x27df20u: goto label_27df20;
        case 0x27df24u: goto label_27df24;
        case 0x27df28u: goto label_27df28;
        case 0x27df2cu: goto label_27df2c;
        case 0x27df30u: goto label_27df30;
        case 0x27df34u: goto label_27df34;
        case 0x27df38u: goto label_27df38;
        case 0x27df3cu: goto label_27df3c;
        case 0x27df40u: goto label_27df40;
        case 0x27df44u: goto label_27df44;
        case 0x27df48u: goto label_27df48;
        case 0x27df4cu: goto label_27df4c;
        case 0x27df50u: goto label_27df50;
        case 0x27df54u: goto label_27df54;
        case 0x27df58u: goto label_27df58;
        case 0x27df5cu: goto label_27df5c;
        case 0x27df60u: goto label_27df60;
        case 0x27df64u: goto label_27df64;
        case 0x27df68u: goto label_27df68;
        case 0x27df6cu: goto label_27df6c;
        case 0x27df70u: goto label_27df70;
        case 0x27df74u: goto label_27df74;
        case 0x27df78u: goto label_27df78;
        case 0x27df7cu: goto label_27df7c;
        case 0x27df80u: goto label_27df80;
        case 0x27df84u: goto label_27df84;
        case 0x27df88u: goto label_27df88;
        case 0x27df8cu: goto label_27df8c;
        case 0x27df90u: goto label_27df90;
        case 0x27df94u: goto label_27df94;
        case 0x27df98u: goto label_27df98;
        case 0x27df9cu: goto label_27df9c;
        case 0x27dfa0u: goto label_27dfa0;
        case 0x27dfa4u: goto label_27dfa4;
        case 0x27dfa8u: goto label_27dfa8;
        case 0x27dfacu: goto label_27dfac;
        case 0x27dfb0u: goto label_27dfb0;
        case 0x27dfb4u: goto label_27dfb4;
        case 0x27dfb8u: goto label_27dfb8;
        case 0x27dfbcu: goto label_27dfbc;
        case 0x27dfc0u: goto label_27dfc0;
        case 0x27dfc4u: goto label_27dfc4;
        case 0x27dfc8u: goto label_27dfc8;
        case 0x27dfccu: goto label_27dfcc;
        case 0x27dfd0u: goto label_27dfd0;
        case 0x27dfd4u: goto label_27dfd4;
        case 0x27dfd8u: goto label_27dfd8;
        case 0x27dfdcu: goto label_27dfdc;
        case 0x27dfe0u: goto label_27dfe0;
        case 0x27dfe4u: goto label_27dfe4;
        case 0x27dfe8u: goto label_27dfe8;
        case 0x27dfecu: goto label_27dfec;
        case 0x27dff0u: goto label_27dff0;
        case 0x27dff4u: goto label_27dff4;
        case 0x27dff8u: goto label_27dff8;
        case 0x27dffcu: goto label_27dffc;
        case 0x27e000u: goto label_27e000;
        case 0x27e004u: goto label_27e004;
        case 0x27e008u: goto label_27e008;
        case 0x27e00cu: goto label_27e00c;
        case 0x27e010u: goto label_27e010;
        case 0x27e014u: goto label_27e014;
        case 0x27e018u: goto label_27e018;
        case 0x27e01cu: goto label_27e01c;
        case 0x27e020u: goto label_27e020;
        case 0x27e024u: goto label_27e024;
        case 0x27e028u: goto label_27e028;
        case 0x27e02cu: goto label_27e02c;
        case 0x27e030u: goto label_27e030;
        case 0x27e034u: goto label_27e034;
        case 0x27e038u: goto label_27e038;
        case 0x27e03cu: goto label_27e03c;
        case 0x27e040u: goto label_27e040;
        case 0x27e044u: goto label_27e044;
        case 0x27e048u: goto label_27e048;
        case 0x27e04cu: goto label_27e04c;
        case 0x27e050u: goto label_27e050;
        case 0x27e054u: goto label_27e054;
        case 0x27e058u: goto label_27e058;
        case 0x27e05cu: goto label_27e05c;
        case 0x27e060u: goto label_27e060;
        case 0x27e064u: goto label_27e064;
        case 0x27e068u: goto label_27e068;
        case 0x27e06cu: goto label_27e06c;
        case 0x27e070u: goto label_27e070;
        case 0x27e074u: goto label_27e074;
        case 0x27e078u: goto label_27e078;
        case 0x27e07cu: goto label_27e07c;
        case 0x27e080u: goto label_27e080;
        case 0x27e084u: goto label_27e084;
        case 0x27e088u: goto label_27e088;
        case 0x27e08cu: goto label_27e08c;
        case 0x27e090u: goto label_27e090;
        case 0x27e094u: goto label_27e094;
        case 0x27e098u: goto label_27e098;
        case 0x27e09cu: goto label_27e09c;
        case 0x27e0a0u: goto label_27e0a0;
        case 0x27e0a4u: goto label_27e0a4;
        case 0x27e0a8u: goto label_27e0a8;
        case 0x27e0acu: goto label_27e0ac;
        case 0x27e0b0u: goto label_27e0b0;
        case 0x27e0b4u: goto label_27e0b4;
        case 0x27e0b8u: goto label_27e0b8;
        case 0x27e0bcu: goto label_27e0bc;
        case 0x27e0c0u: goto label_27e0c0;
        case 0x27e0c4u: goto label_27e0c4;
        case 0x27e0c8u: goto label_27e0c8;
        case 0x27e0ccu: goto label_27e0cc;
        case 0x27e0d0u: goto label_27e0d0;
        case 0x27e0d4u: goto label_27e0d4;
        case 0x27e0d8u: goto label_27e0d8;
        case 0x27e0dcu: goto label_27e0dc;
        case 0x27e0e0u: goto label_27e0e0;
        case 0x27e0e4u: goto label_27e0e4;
        case 0x27e0e8u: goto label_27e0e8;
        case 0x27e0ecu: goto label_27e0ec;
        case 0x27e0f0u: goto label_27e0f0;
        case 0x27e0f4u: goto label_27e0f4;
        case 0x27e0f8u: goto label_27e0f8;
        case 0x27e0fcu: goto label_27e0fc;
        case 0x27e100u: goto label_27e100;
        case 0x27e104u: goto label_27e104;
        case 0x27e108u: goto label_27e108;
        case 0x27e10cu: goto label_27e10c;
        case 0x27e110u: goto label_27e110;
        case 0x27e114u: goto label_27e114;
        case 0x27e118u: goto label_27e118;
        case 0x27e11cu: goto label_27e11c;
        case 0x27e120u: goto label_27e120;
        case 0x27e124u: goto label_27e124;
        case 0x27e128u: goto label_27e128;
        case 0x27e12cu: goto label_27e12c;
        case 0x27e130u: goto label_27e130;
        case 0x27e134u: goto label_27e134;
        case 0x27e138u: goto label_27e138;
        case 0x27e13cu: goto label_27e13c;
        case 0x27e140u: goto label_27e140;
        case 0x27e144u: goto label_27e144;
        case 0x27e148u: goto label_27e148;
        case 0x27e14cu: goto label_27e14c;
        case 0x27e150u: goto label_27e150;
        case 0x27e154u: goto label_27e154;
        case 0x27e158u: goto label_27e158;
        case 0x27e15cu: goto label_27e15c;
        case 0x27e160u: goto label_27e160;
        case 0x27e164u: goto label_27e164;
        case 0x27e168u: goto label_27e168;
        case 0x27e16cu: goto label_27e16c;
        case 0x27e170u: goto label_27e170;
        case 0x27e174u: goto label_27e174;
        case 0x27e178u: goto label_27e178;
        case 0x27e17cu: goto label_27e17c;
        case 0x27e180u: goto label_27e180;
        case 0x27e184u: goto label_27e184;
        case 0x27e188u: goto label_27e188;
        case 0x27e18cu: goto label_27e18c;
        case 0x27e190u: goto label_27e190;
        case 0x27e194u: goto label_27e194;
        case 0x27e198u: goto label_27e198;
        case 0x27e19cu: goto label_27e19c;
        case 0x27e1a0u: goto label_27e1a0;
        case 0x27e1a4u: goto label_27e1a4;
        case 0x27e1a8u: goto label_27e1a8;
        case 0x27e1acu: goto label_27e1ac;
        case 0x27e1b0u: goto label_27e1b0;
        case 0x27e1b4u: goto label_27e1b4;
        case 0x27e1b8u: goto label_27e1b8;
        case 0x27e1bcu: goto label_27e1bc;
        case 0x27e1c0u: goto label_27e1c0;
        case 0x27e1c4u: goto label_27e1c4;
        case 0x27e1c8u: goto label_27e1c8;
        case 0x27e1ccu: goto label_27e1cc;
        case 0x27e1d0u: goto label_27e1d0;
        case 0x27e1d4u: goto label_27e1d4;
        case 0x27e1d8u: goto label_27e1d8;
        case 0x27e1dcu: goto label_27e1dc;
        case 0x27e1e0u: goto label_27e1e0;
        case 0x27e1e4u: goto label_27e1e4;
        case 0x27e1e8u: goto label_27e1e8;
        case 0x27e1ecu: goto label_27e1ec;
        case 0x27e1f0u: goto label_27e1f0;
        case 0x27e1f4u: goto label_27e1f4;
        case 0x27e1f8u: goto label_27e1f8;
        case 0x27e1fcu: goto label_27e1fc;
        case 0x27e200u: goto label_27e200;
        case 0x27e204u: goto label_27e204;
        case 0x27e208u: goto label_27e208;
        case 0x27e20cu: goto label_27e20c;
        case 0x27e210u: goto label_27e210;
        case 0x27e214u: goto label_27e214;
        case 0x27e218u: goto label_27e218;
        case 0x27e21cu: goto label_27e21c;
        case 0x27e220u: goto label_27e220;
        case 0x27e224u: goto label_27e224;
        case 0x27e228u: goto label_27e228;
        case 0x27e22cu: goto label_27e22c;
        case 0x27e230u: goto label_27e230;
        case 0x27e234u: goto label_27e234;
        case 0x27e238u: goto label_27e238;
        case 0x27e23cu: goto label_27e23c;
        case 0x27e240u: goto label_27e240;
        case 0x27e244u: goto label_27e244;
        case 0x27e248u: goto label_27e248;
        case 0x27e24cu: goto label_27e24c;
        case 0x27e250u: goto label_27e250;
        case 0x27e254u: goto label_27e254;
        case 0x27e258u: goto label_27e258;
        case 0x27e25cu: goto label_27e25c;
        case 0x27e260u: goto label_27e260;
        case 0x27e264u: goto label_27e264;
        case 0x27e268u: goto label_27e268;
        case 0x27e26cu: goto label_27e26c;
        case 0x27e270u: goto label_27e270;
        case 0x27e274u: goto label_27e274;
        case 0x27e278u: goto label_27e278;
        case 0x27e27cu: goto label_27e27c;
        case 0x27e280u: goto label_27e280;
        case 0x27e284u: goto label_27e284;
        case 0x27e288u: goto label_27e288;
        case 0x27e28cu: goto label_27e28c;
        case 0x27e290u: goto label_27e290;
        case 0x27e294u: goto label_27e294;
        case 0x27e298u: goto label_27e298;
        case 0x27e29cu: goto label_27e29c;
        case 0x27e2a0u: goto label_27e2a0;
        case 0x27e2a4u: goto label_27e2a4;
        case 0x27e2a8u: goto label_27e2a8;
        case 0x27e2acu: goto label_27e2ac;
        case 0x27e2b0u: goto label_27e2b0;
        case 0x27e2b4u: goto label_27e2b4;
        case 0x27e2b8u: goto label_27e2b8;
        case 0x27e2bcu: goto label_27e2bc;
        case 0x27e2c0u: goto label_27e2c0;
        case 0x27e2c4u: goto label_27e2c4;
        case 0x27e2c8u: goto label_27e2c8;
        case 0x27e2ccu: goto label_27e2cc;
        case 0x27e2d0u: goto label_27e2d0;
        case 0x27e2d4u: goto label_27e2d4;
        case 0x27e2d8u: goto label_27e2d8;
        case 0x27e2dcu: goto label_27e2dc;
        case 0x27e2e0u: goto label_27e2e0;
        case 0x27e2e4u: goto label_27e2e4;
        case 0x27e2e8u: goto label_27e2e8;
        case 0x27e2ecu: goto label_27e2ec;
        case 0x27e2f0u: goto label_27e2f0;
        case 0x27e2f4u: goto label_27e2f4;
        case 0x27e2f8u: goto label_27e2f8;
        case 0x27e2fcu: goto label_27e2fc;
        case 0x27e300u: goto label_27e300;
        case 0x27e304u: goto label_27e304;
        case 0x27e308u: goto label_27e308;
        case 0x27e30cu: goto label_27e30c;
        case 0x27e310u: goto label_27e310;
        case 0x27e314u: goto label_27e314;
        case 0x27e318u: goto label_27e318;
        case 0x27e31cu: goto label_27e31c;
        case 0x27e320u: goto label_27e320;
        case 0x27e324u: goto label_27e324;
        case 0x27e328u: goto label_27e328;
        case 0x27e32cu: goto label_27e32c;
        case 0x27e330u: goto label_27e330;
        case 0x27e334u: goto label_27e334;
        case 0x27e338u: goto label_27e338;
        case 0x27e33cu: goto label_27e33c;
        case 0x27e340u: goto label_27e340;
        case 0x27e344u: goto label_27e344;
        case 0x27e348u: goto label_27e348;
        case 0x27e34cu: goto label_27e34c;
        case 0x27e350u: goto label_27e350;
        case 0x27e354u: goto label_27e354;
        case 0x27e358u: goto label_27e358;
        case 0x27e35cu: goto label_27e35c;
        case 0x27e360u: goto label_27e360;
        case 0x27e364u: goto label_27e364;
        case 0x27e368u: goto label_27e368;
        case 0x27e36cu: goto label_27e36c;
        case 0x27e370u: goto label_27e370;
        case 0x27e374u: goto label_27e374;
        case 0x27e378u: goto label_27e378;
        case 0x27e37cu: goto label_27e37c;
        case 0x27e380u: goto label_27e380;
        case 0x27e384u: goto label_27e384;
        case 0x27e388u: goto label_27e388;
        case 0x27e38cu: goto label_27e38c;
        case 0x27e390u: goto label_27e390;
        case 0x27e394u: goto label_27e394;
        case 0x27e398u: goto label_27e398;
        case 0x27e39cu: goto label_27e39c;
        case 0x27e3a0u: goto label_27e3a0;
        case 0x27e3a4u: goto label_27e3a4;
        case 0x27e3a8u: goto label_27e3a8;
        case 0x27e3acu: goto label_27e3ac;
        case 0x27e3b0u: goto label_27e3b0;
        case 0x27e3b4u: goto label_27e3b4;
        case 0x27e3b8u: goto label_27e3b8;
        case 0x27e3bcu: goto label_27e3bc;
        case 0x27e3c0u: goto label_27e3c0;
        case 0x27e3c4u: goto label_27e3c4;
        case 0x27e3c8u: goto label_27e3c8;
        case 0x27e3ccu: goto label_27e3cc;
        case 0x27e3d0u: goto label_27e3d0;
        case 0x27e3d4u: goto label_27e3d4;
        case 0x27e3d8u: goto label_27e3d8;
        case 0x27e3dcu: goto label_27e3dc;
        case 0x27e3e0u: goto label_27e3e0;
        case 0x27e3e4u: goto label_27e3e4;
        case 0x27e3e8u: goto label_27e3e8;
        case 0x27e3ecu: goto label_27e3ec;
        case 0x27e3f0u: goto label_27e3f0;
        case 0x27e3f4u: goto label_27e3f4;
        case 0x27e3f8u: goto label_27e3f8;
        case 0x27e3fcu: goto label_27e3fc;
        case 0x27e400u: goto label_27e400;
        case 0x27e404u: goto label_27e404;
        case 0x27e408u: goto label_27e408;
        case 0x27e40cu: goto label_27e40c;
        case 0x27e410u: goto label_27e410;
        case 0x27e414u: goto label_27e414;
        case 0x27e418u: goto label_27e418;
        case 0x27e41cu: goto label_27e41c;
        case 0x27e420u: goto label_27e420;
        case 0x27e424u: goto label_27e424;
        case 0x27e428u: goto label_27e428;
        case 0x27e42cu: goto label_27e42c;
        case 0x27e430u: goto label_27e430;
        case 0x27e434u: goto label_27e434;
        case 0x27e438u: goto label_27e438;
        case 0x27e43cu: goto label_27e43c;
        case 0x27e440u: goto label_27e440;
        case 0x27e444u: goto label_27e444;
        case 0x27e448u: goto label_27e448;
        case 0x27e44cu: goto label_27e44c;
        case 0x27e450u: goto label_27e450;
        case 0x27e454u: goto label_27e454;
        case 0x27e458u: goto label_27e458;
        case 0x27e45cu: goto label_27e45c;
        case 0x27e460u: goto label_27e460;
        case 0x27e464u: goto label_27e464;
        case 0x27e468u: goto label_27e468;
        case 0x27e46cu: goto label_27e46c;
        case 0x27e470u: goto label_27e470;
        case 0x27e474u: goto label_27e474;
        case 0x27e478u: goto label_27e478;
        case 0x27e47cu: goto label_27e47c;
        case 0x27e480u: goto label_27e480;
        case 0x27e484u: goto label_27e484;
        case 0x27e488u: goto label_27e488;
        case 0x27e48cu: goto label_27e48c;
        case 0x27e490u: goto label_27e490;
        case 0x27e494u: goto label_27e494;
        case 0x27e498u: goto label_27e498;
        case 0x27e49cu: goto label_27e49c;
        case 0x27e4a0u: goto label_27e4a0;
        case 0x27e4a4u: goto label_27e4a4;
        case 0x27e4a8u: goto label_27e4a8;
        case 0x27e4acu: goto label_27e4ac;
        case 0x27e4b0u: goto label_27e4b0;
        case 0x27e4b4u: goto label_27e4b4;
        case 0x27e4b8u: goto label_27e4b8;
        case 0x27e4bcu: goto label_27e4bc;
        case 0x27e4c0u: goto label_27e4c0;
        case 0x27e4c4u: goto label_27e4c4;
        case 0x27e4c8u: goto label_27e4c8;
        case 0x27e4ccu: goto label_27e4cc;
        case 0x27e4d0u: goto label_27e4d0;
        case 0x27e4d4u: goto label_27e4d4;
        case 0x27e4d8u: goto label_27e4d8;
        case 0x27e4dcu: goto label_27e4dc;
        case 0x27e4e0u: goto label_27e4e0;
        case 0x27e4e4u: goto label_27e4e4;
        case 0x27e4e8u: goto label_27e4e8;
        case 0x27e4ecu: goto label_27e4ec;
        case 0x27e4f0u: goto label_27e4f0;
        case 0x27e4f4u: goto label_27e4f4;
        case 0x27e4f8u: goto label_27e4f8;
        case 0x27e4fcu: goto label_27e4fc;
        case 0x27e500u: goto label_27e500;
        case 0x27e504u: goto label_27e504;
        case 0x27e508u: goto label_27e508;
        case 0x27e50cu: goto label_27e50c;
        default: break;
    }

    ctx->pc = 0x27dd00u;

label_27dd00:
    // 0x27dd00: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x27dd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
label_27dd04:
    // 0x27dd04: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x27dd04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_27dd08:
    // 0x27dd08: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x27dd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_27dd0c:
    // 0x27dd0c: 0x2484cc70  addiu       $a0, $a0, -0x3390
    ctx->pc = 0x27dd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954096));
label_27dd10:
    // 0x27dd10: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x27dd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_27dd14:
    // 0x27dd14: 0x24050602  addiu       $a1, $zero, 0x602
    ctx->pc = 0x27dd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1538));
label_27dd18:
    // 0x27dd18: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x27dd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_27dd1c:
    // 0x27dd1c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x27dd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_27dd20:
    // 0x27dd20: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x27dd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_27dd24:
    // 0x27dd24: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x27dd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_27dd28:
    // 0x27dd28: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x27dd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_27dd2c:
    // 0x27dd2c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27dd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_27dd30:
    // 0x27dd30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27dd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_27dd34:
    // 0x27dd34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27dd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_27dd38:
    // 0x27dd38: 0xc0450a6  jal         func_114298
label_27dd3c:
    if (ctx->pc == 0x27DD3Cu) {
        ctx->pc = 0x27DD3Cu;
            // 0x27dd3c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x27DD40u;
        goto label_27dd40;
    }
    ctx->pc = 0x27DD38u;
    SET_GPR_U32(ctx, 31, 0x27DD40u);
    ctx->pc = 0x27DD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DD38u;
            // 0x27dd3c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x114298u;
    if (runtime->hasFunction(0x114298u)) {
        auto targetFn = runtime->lookupFunction(0x114298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DD40u; }
        if (ctx->pc != 0x27DD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x114298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DD40u; }
        if (ctx->pc != 0x27DD40u) { return; }
    }
    ctx->pc = 0x27DD40u;
label_27dd40:
    // 0x27dd40: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x27dd40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27dd44:
    // 0x27dd44: 0x6a001e5  bltz        $s5, . + 4 + (0x1E5 << 2)
label_27dd48:
    if (ctx->pc == 0x27DD48u) {
        ctx->pc = 0x27DD48u;
            // 0x27dd48: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x27DD4Cu;
        goto label_27dd4c;
    }
    ctx->pc = 0x27DD44u;
    {
        const bool branch_taken_0x27dd44 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x27DD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DD44u;
            // 0x27dd48: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd44) {
            ctx->pc = 0x27E4DCu;
            goto label_27e4dc;
        }
    }
    ctx->pc = 0x27DD4Cu;
label_27dd4c:
    // 0x27dd4c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x27dd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27dd50:
    // 0x27dd50: 0xc04a234  jal         func_1288D0
label_27dd54:
    if (ctx->pc == 0x27DD54u) {
        ctx->pc = 0x27DD54u;
            // 0x27dd54: 0x24a5cc80  addiu       $a1, $a1, -0x3380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954112));
        ctx->pc = 0x27DD58u;
        goto label_27dd58;
    }
    ctx->pc = 0x27DD50u;
    SET_GPR_U32(ctx, 31, 0x27DD58u);
    ctx->pc = 0x27DD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DD50u;
            // 0x27dd54: 0x24a5cc80  addiu       $a1, $a1, -0x3380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DD58u; }
        if (ctx->pc != 0x27DD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DD58u; }
        if (ctx->pc != 0x27DD58u) { return; }
    }
    ctx->pc = 0x27DD58u;
label_27dd58:
    // 0x27dd58: 0xc04a422  jal         func_129088
label_27dd5c:
    if (ctx->pc == 0x27DD5Cu) {
        ctx->pc = 0x27DD5Cu;
            // 0x27dd5c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x27DD60u;
        goto label_27dd60;
    }
    ctx->pc = 0x27DD58u;
    SET_GPR_U32(ctx, 31, 0x27DD60u);
    ctx->pc = 0x27DD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DD58u;
            // 0x27dd5c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DD60u; }
        if (ctx->pc != 0x27DD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DD60u; }
        if (ctx->pc != 0x27DD60u) { return; }
    }
    ctx->pc = 0x27DD60u;
label_27dd60:
    // 0x27dd60: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27dd60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27dd64:
    // 0x27dd64: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x27dd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27dd68:
    // 0x27dd68: 0xc0452d2  jal         func_114B48
label_27dd6c:
    if (ctx->pc == 0x27DD6Cu) {
        ctx->pc = 0x27DD6Cu;
            // 0x27dd6c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27DD70u;
        goto label_27dd70;
    }
    ctx->pc = 0x27DD68u;
    SET_GPR_U32(ctx, 31, 0x27DD70u);
    ctx->pc = 0x27DD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DD68u;
            // 0x27dd6c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DD70u; }
        if (ctx->pc != 0x27DD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DD70u; }
        if (ctx->pc != 0x27DD70u) { return; }
    }
    ctx->pc = 0x27DD70u;
label_27dd70:
    // 0x27dd70: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27dd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27dd74:
    // 0x27dd74: 0xc0956d4  jal         func_255B50
label_27dd78:
    if (ctx->pc == 0x27DD78u) {
        ctx->pc = 0x27DD78u;
            // 0x27dd78: 0x8c245014  lw          $a0, 0x5014($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20500)));
        ctx->pc = 0x27DD7Cu;
        goto label_27dd7c;
    }
    ctx->pc = 0x27DD74u;
    SET_GPR_U32(ctx, 31, 0x27DD7Cu);
    ctx->pc = 0x27DD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DD74u;
            // 0x27dd78: 0x8c245014  lw          $a0, 0x5014($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20500)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DD7Cu; }
        if (ctx->pc != 0x27DD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DD7Cu; }
        if (ctx->pc != 0x27DD7Cu) { return; }
    }
    ctx->pc = 0x27DD7Cu;
label_27dd7c:
    // 0x27dd7c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27dd7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27dd80:
    // 0x27dd80: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x27dd80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_27dd84:
    // 0x27dd84: 0x8c265014  lw          $a2, 0x5014($at)
    ctx->pc = 0x27dd84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20500)));
label_27dd88:
    // 0x27dd88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27dd88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27dd8c:
    // 0x27dd8c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x27dd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27dd90:
    // 0x27dd90: 0xc04a234  jal         func_1288D0
label_27dd94:
    if (ctx->pc == 0x27DD94u) {
        ctx->pc = 0x27DD94u;
            // 0x27dd94: 0x24a5cc90  addiu       $a1, $a1, -0x3370 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954128));
        ctx->pc = 0x27DD98u;
        goto label_27dd98;
    }
    ctx->pc = 0x27DD90u;
    SET_GPR_U32(ctx, 31, 0x27DD98u);
    ctx->pc = 0x27DD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DD90u;
            // 0x27dd94: 0x24a5cc90  addiu       $a1, $a1, -0x3370 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DD98u; }
        if (ctx->pc != 0x27DD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DD98u; }
        if (ctx->pc != 0x27DD98u) { return; }
    }
    ctx->pc = 0x27DD98u;
label_27dd98:
    // 0x27dd98: 0xc04a422  jal         func_129088
label_27dd9c:
    if (ctx->pc == 0x27DD9Cu) {
        ctx->pc = 0x27DD9Cu;
            // 0x27dd9c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x27DDA0u;
        goto label_27dda0;
    }
    ctx->pc = 0x27DD98u;
    SET_GPR_U32(ctx, 31, 0x27DDA0u);
    ctx->pc = 0x27DD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DD98u;
            // 0x27dd9c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DDA0u; }
        if (ctx->pc != 0x27DDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DDA0u; }
        if (ctx->pc != 0x27DDA0u) { return; }
    }
    ctx->pc = 0x27DDA0u;
label_27dda0:
    // 0x27dda0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27dda0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27dda4:
    // 0x27dda4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x27dda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27dda8:
    // 0x27dda8: 0xc0452d2  jal         func_114B48
label_27ddac:
    if (ctx->pc == 0x27DDACu) {
        ctx->pc = 0x27DDACu;
            // 0x27ddac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27DDB0u;
        goto label_27ddb0;
    }
    ctx->pc = 0x27DDA8u;
    SET_GPR_U32(ctx, 31, 0x27DDB0u);
    ctx->pc = 0x27DDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DDA8u;
            // 0x27ddac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DDB0u; }
        if (ctx->pc != 0x27DDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DDB0u; }
        if (ctx->pc != 0x27DDB0u) { return; }
    }
    ctx->pc = 0x27DDB0u;
label_27ddb0:
    // 0x27ddb0: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27ddb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27ddb4:
    // 0x27ddb4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x27ddb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_27ddb8:
    // 0x27ddb8: 0x8c265018  lw          $a2, 0x5018($at)
    ctx->pc = 0x27ddb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20504)));
label_27ddbc:
    // 0x27ddbc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x27ddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27ddc0:
    // 0x27ddc0: 0xc04a234  jal         func_1288D0
label_27ddc4:
    if (ctx->pc == 0x27DDC4u) {
        ctx->pc = 0x27DDC4u;
            // 0x27ddc4: 0x24a5cca8  addiu       $a1, $a1, -0x3358 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954152));
        ctx->pc = 0x27DDC8u;
        goto label_27ddc8;
    }
    ctx->pc = 0x27DDC0u;
    SET_GPR_U32(ctx, 31, 0x27DDC8u);
    ctx->pc = 0x27DDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DDC0u;
            // 0x27ddc4: 0x24a5cca8  addiu       $a1, $a1, -0x3358 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DDC8u; }
        if (ctx->pc != 0x27DDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DDC8u; }
        if (ctx->pc != 0x27DDC8u) { return; }
    }
    ctx->pc = 0x27DDC8u;
label_27ddc8:
    // 0x27ddc8: 0xc04a422  jal         func_129088
label_27ddcc:
    if (ctx->pc == 0x27DDCCu) {
        ctx->pc = 0x27DDCCu;
            // 0x27ddcc: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x27DDD0u;
        goto label_27ddd0;
    }
    ctx->pc = 0x27DDC8u;
    SET_GPR_U32(ctx, 31, 0x27DDD0u);
    ctx->pc = 0x27DDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DDC8u;
            // 0x27ddcc: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DDD0u; }
        if (ctx->pc != 0x27DDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DDD0u; }
        if (ctx->pc != 0x27DDD0u) { return; }
    }
    ctx->pc = 0x27DDD0u;
label_27ddd0:
    // 0x27ddd0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27ddd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27ddd4:
    // 0x27ddd4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x27ddd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27ddd8:
    // 0x27ddd8: 0xc0452d2  jal         func_114B48
label_27dddc:
    if (ctx->pc == 0x27DDDCu) {
        ctx->pc = 0x27DDDCu;
            // 0x27dddc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27DDE0u;
        goto label_27dde0;
    }
    ctx->pc = 0x27DDD8u;
    SET_GPR_U32(ctx, 31, 0x27DDE0u);
    ctx->pc = 0x27DDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DDD8u;
            // 0x27dddc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DDE0u; }
        if (ctx->pc != 0x27DDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DDE0u; }
        if (ctx->pc != 0x27DDE0u) { return; }
    }
    ctx->pc = 0x27DDE0u;
label_27dde0:
    // 0x27dde0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x27dde0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27dde4:
    // 0x27dde4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27dde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27dde8:
    // 0x27dde8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x27dde8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_27ddec:
    // 0x27ddec: 0x320f809  jalr        $t9
label_27ddf0:
    if (ctx->pc == 0x27DDF0u) {
        ctx->pc = 0x27DDF0u;
            // 0x27ddf0: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x27DDF4u;
        goto label_27ddf4;
    }
    ctx->pc = 0x27DDECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27DDF4u);
        ctx->pc = 0x27DDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DDECu;
            // 0x27ddf0: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27DDF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27DDF4u; }
            if (ctx->pc != 0x27DDF4u) { return; }
        }
        }
    }
    ctx->pc = 0x27DDF4u;
label_27ddf4:
    // 0x27ddf4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x27ddf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27ddf8:
    // 0x27ddf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ddf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27ddfc:
    // 0x27ddfc: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x27ddfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_27de00:
    // 0x27de00: 0x320f809  jalr        $t9
label_27de04:
    if (ctx->pc == 0x27DE04u) {
        ctx->pc = 0x27DE04u;
            // 0x27de04: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x27DE08u;
        goto label_27de08;
    }
    ctx->pc = 0x27DE00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27DE08u);
        ctx->pc = 0x27DE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DE00u;
            // 0x27de04: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27DE08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27DE08u; }
            if (ctx->pc != 0x27DE08u) { return; }
        }
        }
    }
    ctx->pc = 0x27DE08u;
label_27de08:
    // 0x27de08: 0xc0975d8  jal         func_25D760
label_27de0c:
    if (ctx->pc == 0x27DE0Cu) {
        ctx->pc = 0x27DE0Cu;
            // 0x27de0c: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x27DE10u;
        goto label_27de10;
    }
    ctx->pc = 0x27DE08u;
    SET_GPR_U32(ctx, 31, 0x27DE10u);
    ctx->pc = 0x27DE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DE08u;
            // 0x27de0c: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D760u;
    if (runtime->hasFunction(0x25D760u)) {
        auto targetFn = runtime->lookupFunction(0x25D760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DE10u; }
        if (ctx->pc != 0x27DE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoordGyaku__FPf_0x25d760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DE10u; }
        if (ctx->pc != 0x27DE10u) { return; }
    }
    ctx->pc = 0x27DE10u;
label_27de10:
    // 0x27de10: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x27de10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_27de14:
    // 0x27de14: 0x27b201c4  addiu       $s2, $sp, 0x1C4
    ctx->pc = 0x27de14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
label_27de18:
    // 0x27de18: 0xc421e440  lwc1        $f1, -0x1BC0($at)
    ctx->pc = 0x27de18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27de1c:
    // 0x27de1c: 0x27b101c8  addiu       $s1, $sp, 0x1C8
    ctx->pc = 0x27de1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_27de20:
    // 0x27de20: 0xc7a201c0  lwc1        $f2, 0x1C0($sp)
    ctx->pc = 0x27de20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27de24:
    // 0x27de24: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x27de24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_27de28:
    // 0x27de28: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x27de28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_27de2c:
    // 0x27de2c: 0xe7a101c0  swc1        $f1, 0x1C0($sp)
    ctx->pc = 0x27de2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_27de30:
    // 0x27de30: 0xc420e444  lwc1        $f0, -0x1BBC($at)
    ctx->pc = 0x27de30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27de34:
    // 0x27de34: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x27de34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27de38:
    // 0x27de38: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x27de38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_27de3c:
    // 0x27de3c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27de3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27de40:
    // 0x27de40: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x27de40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_27de44:
    // 0x27de44: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x27de44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27de48:
    // 0x27de48: 0xc420e448  lwc1        $f0, -0x1BB8($at)
    ctx->pc = 0x27de48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27de4c:
    // 0x27de4c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27de4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27de50:
    // 0x27de50: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x27de50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_27de54:
    // 0x27de54: 0xc0a24f0  jal         func_2893C0
label_27de58:
    if (ctx->pc == 0x27DE58u) {
        ctx->pc = 0x27DE58u;
            // 0x27de58: 0xc7ac01b0  lwc1        $f12, 0x1B0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x27DE5Cu;
        goto label_27de5c;
    }
    ctx->pc = 0x27DE54u;
    SET_GPR_U32(ctx, 31, 0x27DE5Cu);
    ctx->pc = 0x27DE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DE54u;
            // 0x27de58: 0xc7ac01b0  lwc1        $f12, 0x1B0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DE5Cu; }
        if (ctx->pc != 0x27DE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DE5Cu; }
        if (ctx->pc != 0x27DE5Cu) { return; }
    }
    ctx->pc = 0x27DE5Cu;
label_27de5c:
    // 0x27de5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27de5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27de60:
    // 0x27de60: 0x27a201b4  addiu       $v0, $sp, 0x1B4
    ctx->pc = 0x27de60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
label_27de64:
    // 0x27de64: 0xc0a24f0  jal         func_2893C0
label_27de68:
    if (ctx->pc == 0x27DE68u) {
        ctx->pc = 0x27DE68u;
            // 0x27de68: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x27DE6Cu;
        goto label_27de6c;
    }
    ctx->pc = 0x27DE64u;
    SET_GPR_U32(ctx, 31, 0x27DE6Cu);
    ctx->pc = 0x27DE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DE64u;
            // 0x27de68: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DE6Cu; }
        if (ctx->pc != 0x27DE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DE6Cu; }
        if (ctx->pc != 0x27DE6Cu) { return; }
    }
    ctx->pc = 0x27DE6Cu;
label_27de6c:
    // 0x27de6c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27de6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27de70:
    // 0x27de70: 0x27a201b8  addiu       $v0, $sp, 0x1B8
    ctx->pc = 0x27de70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_27de74:
    // 0x27de74: 0xc0a24f0  jal         func_2893C0
label_27de78:
    if (ctx->pc == 0x27DE78u) {
        ctx->pc = 0x27DE78u;
            // 0x27de78: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x27DE7Cu;
        goto label_27de7c;
    }
    ctx->pc = 0x27DE74u;
    SET_GPR_U32(ctx, 31, 0x27DE7Cu);
    ctx->pc = 0x27DE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DE74u;
            // 0x27de78: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DE7Cu; }
        if (ctx->pc != 0x27DE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DE7Cu; }
        if (ctx->pc != 0x27DE7Cu) { return; }
    }
    ctx->pc = 0x27DE7Cu;
label_27de7c:
    // 0x27de7c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x27de7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_27de80:
    // 0x27de80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27de80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27de84:
    // 0x27de84: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x27de84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27de88:
    // 0x27de88: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x27de88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27de8c:
    // 0x27de8c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x27de8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27de90:
    // 0x27de90: 0xc04a234  jal         func_1288D0
label_27de94:
    if (ctx->pc == 0x27DE94u) {
        ctx->pc = 0x27DE94u;
            // 0x27de94: 0x24a5ccc0  addiu       $a1, $a1, -0x3340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954176));
        ctx->pc = 0x27DE98u;
        goto label_27de98;
    }
    ctx->pc = 0x27DE90u;
    SET_GPR_U32(ctx, 31, 0x27DE98u);
    ctx->pc = 0x27DE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DE90u;
            // 0x27de94: 0x24a5ccc0  addiu       $a1, $a1, -0x3340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DE98u; }
        if (ctx->pc != 0x27DE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DE98u; }
        if (ctx->pc != 0x27DE98u) { return; }
    }
    ctx->pc = 0x27DE98u;
label_27de98:
    // 0x27de98: 0xc04a422  jal         func_129088
label_27de9c:
    if (ctx->pc == 0x27DE9Cu) {
        ctx->pc = 0x27DE9Cu;
            // 0x27de9c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x27DEA0u;
        goto label_27dea0;
    }
    ctx->pc = 0x27DE98u;
    SET_GPR_U32(ctx, 31, 0x27DEA0u);
    ctx->pc = 0x27DE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DE98u;
            // 0x27de9c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DEA0u; }
        if (ctx->pc != 0x27DEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DEA0u; }
        if (ctx->pc != 0x27DEA0u) { return; }
    }
    ctx->pc = 0x27DEA0u;
label_27dea0:
    // 0x27dea0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27dea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27dea4:
    // 0x27dea4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x27dea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27dea8:
    // 0x27dea8: 0xc0452d2  jal         func_114B48
label_27deac:
    if (ctx->pc == 0x27DEACu) {
        ctx->pc = 0x27DEACu;
            // 0x27deac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27DEB0u;
        goto label_27deb0;
    }
    ctx->pc = 0x27DEA8u;
    SET_GPR_U32(ctx, 31, 0x27DEB0u);
    ctx->pc = 0x27DEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DEA8u;
            // 0x27deac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DEB0u; }
        if (ctx->pc != 0x27DEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DEB0u; }
        if (ctx->pc != 0x27DEB0u) { return; }
    }
    ctx->pc = 0x27DEB0u;
label_27deb0:
    // 0x27deb0: 0xc0a24f0  jal         func_2893C0
label_27deb4:
    if (ctx->pc == 0x27DEB4u) {
        ctx->pc = 0x27DEB4u;
            // 0x27deb4: 0xc7ac01c0  lwc1        $f12, 0x1C0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x27DEB8u;
        goto label_27deb8;
    }
    ctx->pc = 0x27DEB0u;
    SET_GPR_U32(ctx, 31, 0x27DEB8u);
    ctx->pc = 0x27DEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DEB0u;
            // 0x27deb4: 0xc7ac01c0  lwc1        $f12, 0x1C0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DEB8u; }
        if (ctx->pc != 0x27DEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DEB8u; }
        if (ctx->pc != 0x27DEB8u) { return; }
    }
    ctx->pc = 0x27DEB8u;
label_27deb8:
    // 0x27deb8: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x27deb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27debc:
    // 0x27debc: 0xc0a24f0  jal         func_2893C0
label_27dec0:
    if (ctx->pc == 0x27DEC0u) {
        ctx->pc = 0x27DEC0u;
            // 0x27dec0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27DEC4u;
        goto label_27dec4;
    }
    ctx->pc = 0x27DEBCu;
    SET_GPR_U32(ctx, 31, 0x27DEC4u);
    ctx->pc = 0x27DEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DEBCu;
            // 0x27dec0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DEC4u; }
        if (ctx->pc != 0x27DEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DEC4u; }
        if (ctx->pc != 0x27DEC4u) { return; }
    }
    ctx->pc = 0x27DEC4u;
label_27dec4:
    // 0x27dec4: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x27dec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27dec8:
    // 0x27dec8: 0xc0a24f0  jal         func_2893C0
label_27decc:
    if (ctx->pc == 0x27DECCu) {
        ctx->pc = 0x27DECCu;
            // 0x27decc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27DED0u;
        goto label_27ded0;
    }
    ctx->pc = 0x27DEC8u;
    SET_GPR_U32(ctx, 31, 0x27DED0u);
    ctx->pc = 0x27DECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DEC8u;
            // 0x27decc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DED0u; }
        if (ctx->pc != 0x27DED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DED0u; }
        if (ctx->pc != 0x27DED0u) { return; }
    }
    ctx->pc = 0x27DED0u;
label_27ded0:
    // 0x27ded0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x27ded0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_27ded4:
    // 0x27ded4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27ded4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27ded8:
    // 0x27ded8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27ded8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27dedc:
    // 0x27dedc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x27dedcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27dee0:
    // 0x27dee0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x27dee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27dee4:
    // 0x27dee4: 0xc04a234  jal         func_1288D0
label_27dee8:
    if (ctx->pc == 0x27DEE8u) {
        ctx->pc = 0x27DEE8u;
            // 0x27dee8: 0x24a5cce0  addiu       $a1, $a1, -0x3320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954208));
        ctx->pc = 0x27DEECu;
        goto label_27deec;
    }
    ctx->pc = 0x27DEE4u;
    SET_GPR_U32(ctx, 31, 0x27DEECu);
    ctx->pc = 0x27DEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DEE4u;
            // 0x27dee8: 0x24a5cce0  addiu       $a1, $a1, -0x3320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DEECu; }
        if (ctx->pc != 0x27DEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DEECu; }
        if (ctx->pc != 0x27DEECu) { return; }
    }
    ctx->pc = 0x27DEECu;
label_27deec:
    // 0x27deec: 0xc04a422  jal         func_129088
label_27def0:
    if (ctx->pc == 0x27DEF0u) {
        ctx->pc = 0x27DEF0u;
            // 0x27def0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x27DEF4u;
        goto label_27def4;
    }
    ctx->pc = 0x27DEECu;
    SET_GPR_U32(ctx, 31, 0x27DEF4u);
    ctx->pc = 0x27DEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DEECu;
            // 0x27def0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DEF4u; }
        if (ctx->pc != 0x27DEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DEF4u; }
        if (ctx->pc != 0x27DEF4u) { return; }
    }
    ctx->pc = 0x27DEF4u;
label_27def4:
    // 0x27def4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27def4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27def8:
    // 0x27def8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x27def8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27defc:
    // 0x27defc: 0xc0452d2  jal         func_114B48
label_27df00:
    if (ctx->pc == 0x27DF00u) {
        ctx->pc = 0x27DF00u;
            // 0x27df00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27DF04u;
        goto label_27df04;
    }
    ctx->pc = 0x27DEFCu;
    SET_GPR_U32(ctx, 31, 0x27DF04u);
    ctx->pc = 0x27DF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DEFCu;
            // 0x27df00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DF04u; }
        if (ctx->pc != 0x27DF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DF04u; }
        if (ctx->pc != 0x27DF04u) { return; }
    }
    ctx->pc = 0x27DF04u;
label_27df04:
    // 0x27df04: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x27df04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_27df08:
    // 0x27df08: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x27df08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27df0c:
    // 0x27df0c: 0xc04a234  jal         func_1288D0
label_27df10:
    if (ctx->pc == 0x27DF10u) {
        ctx->pc = 0x27DF10u;
            // 0x27df10: 0x24a5cd00  addiu       $a1, $a1, -0x3300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954240));
        ctx->pc = 0x27DF14u;
        goto label_27df14;
    }
    ctx->pc = 0x27DF0Cu;
    SET_GPR_U32(ctx, 31, 0x27DF14u);
    ctx->pc = 0x27DF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DF0Cu;
            // 0x27df10: 0x24a5cd00  addiu       $a1, $a1, -0x3300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DF14u; }
        if (ctx->pc != 0x27DF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DF14u; }
        if (ctx->pc != 0x27DF14u) { return; }
    }
    ctx->pc = 0x27DF14u;
label_27df14:
    // 0x27df14: 0xc04a422  jal         func_129088
label_27df18:
    if (ctx->pc == 0x27DF18u) {
        ctx->pc = 0x27DF18u;
            // 0x27df18: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x27DF1Cu;
        goto label_27df1c;
    }
    ctx->pc = 0x27DF14u;
    SET_GPR_U32(ctx, 31, 0x27DF1Cu);
    ctx->pc = 0x27DF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DF14u;
            // 0x27df18: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DF1Cu; }
        if (ctx->pc != 0x27DF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DF1Cu; }
        if (ctx->pc != 0x27DF1Cu) { return; }
    }
    ctx->pc = 0x27DF1Cu;
label_27df1c:
    // 0x27df1c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27df1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27df20:
    // 0x27df20: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x27df20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27df24:
    // 0x27df24: 0xc0452d2  jal         func_114B48
label_27df28:
    if (ctx->pc == 0x27DF28u) {
        ctx->pc = 0x27DF28u;
            // 0x27df28: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27DF2Cu;
        goto label_27df2c;
    }
    ctx->pc = 0x27DF24u;
    SET_GPR_U32(ctx, 31, 0x27DF2Cu);
    ctx->pc = 0x27DF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DF24u;
            // 0x27df28: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DF2Cu; }
        if (ctx->pc != 0x27DF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DF2Cu; }
        if (ctx->pc != 0x27DF2Cu) { return; }
    }
    ctx->pc = 0x27DF2Cu;
label_27df2c:
    // 0x27df2c: 0xc0956c8  jal         func_255B20
label_27df30:
    if (ctx->pc == 0x27DF30u) {
        ctx->pc = 0x27DF34u;
        goto label_27df34;
    }
    ctx->pc = 0x27DF2Cu;
    SET_GPR_U32(ctx, 31, 0x27DF34u);
    ctx->pc = 0x255B20u;
    if (runtime->hasFunction(0x255B20u)) {
        auto targetFn = runtime->lookupFunction(0x255B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DF34u; }
        if (ctx->pc != 0x27DF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveCamera__Fv_0x255b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DF34u; }
        if (ctx->pc != 0x27DF34u) { return; }
    }
    ctx->pc = 0x27DF34u;
label_27df34:
    // 0x27df34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27df34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27df38:
    // 0x27df38: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x27df38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_27df3c:
    // 0x27df3c: 0xc04c574  jal         func_1315D0
label_27df40:
    if (ctx->pc == 0x27DF40u) {
        ctx->pc = 0x27DF40u;
            // 0x27df40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27DF44u;
        goto label_27df44;
    }
    ctx->pc = 0x27DF3Cu;
    SET_GPR_U32(ctx, 31, 0x27DF44u);
    ctx->pc = 0x27DF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DF3Cu;
            // 0x27df40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DF44u; }
        if (ctx->pc != 0x27DF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DF44u; }
        if (ctx->pc != 0x27DF44u) { return; }
    }
    ctx->pc = 0x27DF44u;
label_27df44:
    // 0x27df44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27df44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27df48:
    // 0x27df48: 0xc04c578  jal         func_1315E0
label_27df4c:
    if (ctx->pc == 0x27DF4Cu) {
        ctx->pc = 0x27DF4Cu;
            // 0x27df4c: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x27DF50u;
        goto label_27df50;
    }
    ctx->pc = 0x27DF48u;
    SET_GPR_U32(ctx, 31, 0x27DF50u);
    ctx->pc = 0x27DF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DF48u;
            // 0x27df4c: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315E0u;
    if (runtime->hasFunction(0x1315E0u)) {
        auto targetFn = runtime->lookupFunction(0x1315E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DF50u; }
        if (ctx->pc != 0x27DF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRef__9mgCCameraFPf_0x1315e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DF50u; }
        if (ctx->pc != 0x27DF50u) { return; }
    }
    ctx->pc = 0x27DF50u;
label_27df50:
    // 0x27df50: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x27df50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_27df54:
    // 0x27df54: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x27df54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_27df58:
    // 0x27df58: 0xc041c3e  jal         func_1070F8
label_27df5c:
    if (ctx->pc == 0x27DF5Cu) {
        ctx->pc = 0x27DF5Cu;
            // 0x27df5c: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x27DF60u;
        goto label_27df60;
    }
    ctx->pc = 0x27DF58u;
    SET_GPR_U32(ctx, 31, 0x27DF60u);
    ctx->pc = 0x27DF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DF58u;
            // 0x27df5c: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DF60u; }
        if (ctx->pc != 0x27DF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DF60u; }
        if (ctx->pc != 0x27DF60u) { return; }
    }
    ctx->pc = 0x27DF60u;
label_27df60:
    // 0x27df60: 0xc7a101f0  lwc1        $f1, 0x1F0($sp)
    ctx->pc = 0x27df60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27df64:
    // 0x27df64: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x27df64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_27df68:
    // 0x27df68: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x27df68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27df6c:
    // 0x27df6c: 0xafa00204  sw          $zero, 0x204($sp)
    ctx->pc = 0x27df6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 0));
label_27df70:
    // 0x27df70: 0x27b00208  addiu       $s0, $sp, 0x208
    ctx->pc = 0x27df70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
label_27df74:
    // 0x27df74: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x27df74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27df78:
    // 0x27df78: 0xe7a10200  swc1        $f1, 0x200($sp)
    ctx->pc = 0x27df78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_27df7c:
    // 0x27df7c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x27df7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_27df80:
    // 0x27df80: 0xc041be0  jal         func_106F80
label_27df84:
    if (ctx->pc == 0x27DF84u) {
        ctx->pc = 0x27DF84u;
            // 0x27df84: 0xafa0020c  sw          $zero, 0x20C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 0));
        ctx->pc = 0x27DF88u;
        goto label_27df88;
    }
    ctx->pc = 0x27DF80u;
    SET_GPR_U32(ctx, 31, 0x27DF88u);
    ctx->pc = 0x27DF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DF80u;
            // 0x27df84: 0xafa0020c  sw          $zero, 0x20C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DF88u; }
        if (ctx->pc != 0x27DF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DF88u; }
        if (ctx->pc != 0x27DF88u) { return; }
    }
    ctx->pc = 0x27DF88u;
label_27df88:
    // 0x27df88: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x27df88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27df8c:
    // 0x27df8c: 0xc7a10200  lwc1        $f1, 0x200($sp)
    ctx->pc = 0x27df8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27df90:
    // 0x27df90: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x27df90u;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
label_27df94:
    // 0x27df94: 0xc047c76  jal         func_11F1D8
label_27df98:
    if (ctx->pc == 0x27DF98u) {
        ctx->pc = 0x27DF98u;
            // 0x27df98: 0x46000b07  neg.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[1]);
        ctx->pc = 0x27DF9Cu;
        goto label_27df9c;
    }
    ctx->pc = 0x27DF94u;
    SET_GPR_U32(ctx, 31, 0x27DF9Cu);
    ctx->pc = 0x27DF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DF94u;
            // 0x27df98: 0x46000b07  neg.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DF9Cu; }
        if (ctx->pc != 0x27DF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DF9Cu; }
        if (ctx->pc != 0x27DF9Cu) { return; }
    }
    ctx->pc = 0x27DF9Cu;
label_27df9c:
    // 0x27df9c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27df9cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_27dfa0:
    // 0x27dfa0: 0xc0975d8  jal         func_25D760
label_27dfa4:
    if (ctx->pc == 0x27DFA4u) {
        ctx->pc = 0x27DFA4u;
            // 0x27dfa4: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x27DFA8u;
        goto label_27dfa8;
    }
    ctx->pc = 0x27DFA0u;
    SET_GPR_U32(ctx, 31, 0x27DFA8u);
    ctx->pc = 0x27DFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DFA0u;
            // 0x27dfa4: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D760u;
    if (runtime->hasFunction(0x25D760u)) {
        auto targetFn = runtime->lookupFunction(0x25D760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DFA8u; }
        if (ctx->pc != 0x27DFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoordGyaku__FPf_0x25d760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DFA8u; }
        if (ctx->pc != 0x27DFA8u) { return; }
    }
    ctx->pc = 0x27DFA8u;
label_27dfa8:
    // 0x27dfa8: 0xc0975d8  jal         func_25D760
label_27dfac:
    if (ctx->pc == 0x27DFACu) {
        ctx->pc = 0x27DFACu;
            // 0x27dfac: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x27DFB0u;
        goto label_27dfb0;
    }
    ctx->pc = 0x27DFA8u;
    SET_GPR_U32(ctx, 31, 0x27DFB0u);
    ctx->pc = 0x27DFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DFA8u;
            // 0x27dfac: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D760u;
    if (runtime->hasFunction(0x25D760u)) {
        auto targetFn = runtime->lookupFunction(0x25D760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DFB0u; }
        if (ctx->pc != 0x27DFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoordGyaku__FPf_0x25d760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DFB0u; }
        if (ctx->pc != 0x27DFB0u) { return; }
    }
    ctx->pc = 0x27DFB0u;
label_27dfb0:
    // 0x27dfb0: 0xc0a24f0  jal         func_2893C0
label_27dfb4:
    if (ctx->pc == 0x27DFB4u) {
        ctx->pc = 0x27DFB4u;
            // 0x27dfb4: 0xc7ac01d0  lwc1        $f12, 0x1D0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x27DFB8u;
        goto label_27dfb8;
    }
    ctx->pc = 0x27DFB0u;
    SET_GPR_U32(ctx, 31, 0x27DFB8u);
    ctx->pc = 0x27DFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DFB0u;
            // 0x27dfb4: 0xc7ac01d0  lwc1        $f12, 0x1D0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DFB8u; }
        if (ctx->pc != 0x27DFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DFB8u; }
        if (ctx->pc != 0x27DFB8u) { return; }
    }
    ctx->pc = 0x27DFB8u;
label_27dfb8:
    // 0x27dfb8: 0x27b701d4  addiu       $s7, $sp, 0x1D4
    ctx->pc = 0x27dfb8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
label_27dfbc:
    // 0x27dfbc: 0xc6ec0000  lwc1        $f12, 0x0($s7)
    ctx->pc = 0x27dfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27dfc0:
    // 0x27dfc0: 0xc0a24f0  jal         func_2893C0
label_27dfc4:
    if (ctx->pc == 0x27DFC4u) {
        ctx->pc = 0x27DFC4u;
            // 0x27dfc4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27DFC8u;
        goto label_27dfc8;
    }
    ctx->pc = 0x27DFC0u;
    SET_GPR_U32(ctx, 31, 0x27DFC8u);
    ctx->pc = 0x27DFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DFC0u;
            // 0x27dfc4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DFC8u; }
        if (ctx->pc != 0x27DFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DFC8u; }
        if (ctx->pc != 0x27DFC8u) { return; }
    }
    ctx->pc = 0x27DFC8u;
label_27dfc8:
    // 0x27dfc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27dfc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27dfcc:
    // 0x27dfcc: 0x27a201d8  addiu       $v0, $sp, 0x1D8
    ctx->pc = 0x27dfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_27dfd0:
    // 0x27dfd0: 0xc0a24f0  jal         func_2893C0
label_27dfd4:
    if (ctx->pc == 0x27DFD4u) {
        ctx->pc = 0x27DFD4u;
            // 0x27dfd4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x27DFD8u;
        goto label_27dfd8;
    }
    ctx->pc = 0x27DFD0u;
    SET_GPR_U32(ctx, 31, 0x27DFD8u);
    ctx->pc = 0x27DFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DFD0u;
            // 0x27dfd4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DFD8u; }
        if (ctx->pc != 0x27DFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DFD8u; }
        if (ctx->pc != 0x27DFD8u) { return; }
    }
    ctx->pc = 0x27DFD8u;
label_27dfd8:
    // 0x27dfd8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x27dfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_27dfdc:
    // 0x27dfdc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27dfdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27dfe0:
    // 0x27dfe0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27dfe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27dfe4:
    // 0x27dfe4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x27dfe4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27dfe8:
    // 0x27dfe8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x27dfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27dfec:
    // 0x27dfec: 0xc04a234  jal         func_1288D0
label_27dff0:
    if (ctx->pc == 0x27DFF0u) {
        ctx->pc = 0x27DFF0u;
            // 0x27dff0: 0x24a5cd10  addiu       $a1, $a1, -0x32F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954256));
        ctx->pc = 0x27DFF4u;
        goto label_27dff4;
    }
    ctx->pc = 0x27DFECu;
    SET_GPR_U32(ctx, 31, 0x27DFF4u);
    ctx->pc = 0x27DFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DFECu;
            // 0x27dff0: 0x24a5cd10  addiu       $a1, $a1, -0x32F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DFF4u; }
        if (ctx->pc != 0x27DFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DFF4u; }
        if (ctx->pc != 0x27DFF4u) { return; }
    }
    ctx->pc = 0x27DFF4u;
label_27dff4:
    // 0x27dff4: 0xc04a422  jal         func_129088
label_27dff8:
    if (ctx->pc == 0x27DFF8u) {
        ctx->pc = 0x27DFF8u;
            // 0x27dff8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x27DFFCu;
        goto label_27dffc;
    }
    ctx->pc = 0x27DFF4u;
    SET_GPR_U32(ctx, 31, 0x27DFFCu);
    ctx->pc = 0x27DFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DFF4u;
            // 0x27dff8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DFFCu; }
        if (ctx->pc != 0x27DFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DFFCu; }
        if (ctx->pc != 0x27DFFCu) { return; }
    }
    ctx->pc = 0x27DFFCu;
label_27dffc:
    // 0x27dffc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27dffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e000:
    // 0x27e000: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x27e000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27e004:
    // 0x27e004: 0xc0452d2  jal         func_114B48
label_27e008:
    if (ctx->pc == 0x27E008u) {
        ctx->pc = 0x27E008u;
            // 0x27e008: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E00Cu;
        goto label_27e00c;
    }
    ctx->pc = 0x27E004u;
    SET_GPR_U32(ctx, 31, 0x27E00Cu);
    ctx->pc = 0x27E008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E004u;
            // 0x27e008: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E00Cu; }
        if (ctx->pc != 0x27E00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E00Cu; }
        if (ctx->pc != 0x27E00Cu) { return; }
    }
    ctx->pc = 0x27E00Cu;
label_27e00c:
    // 0x27e00c: 0xc0a24f0  jal         func_2893C0
label_27e010:
    if (ctx->pc == 0x27E010u) {
        ctx->pc = 0x27E010u;
            // 0x27e010: 0xc7ac01e0  lwc1        $f12, 0x1E0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x27E014u;
        goto label_27e014;
    }
    ctx->pc = 0x27E00Cu;
    SET_GPR_U32(ctx, 31, 0x27E014u);
    ctx->pc = 0x27E010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E00Cu;
            // 0x27e010: 0xc7ac01e0  lwc1        $f12, 0x1E0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E014u; }
        if (ctx->pc != 0x27E014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E014u; }
        if (ctx->pc != 0x27E014u) { return; }
    }
    ctx->pc = 0x27E014u;
label_27e014:
    // 0x27e014: 0x27be01e4  addiu       $fp, $sp, 0x1E4
    ctx->pc = 0x27e014u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
label_27e018:
    // 0x27e018: 0xc7cc0000  lwc1        $f12, 0x0($fp)
    ctx->pc = 0x27e018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27e01c:
    // 0x27e01c: 0xc0a24f0  jal         func_2893C0
label_27e020:
    if (ctx->pc == 0x27E020u) {
        ctx->pc = 0x27E020u;
            // 0x27e020: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E024u;
        goto label_27e024;
    }
    ctx->pc = 0x27E01Cu;
    SET_GPR_U32(ctx, 31, 0x27E024u);
    ctx->pc = 0x27E020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E01Cu;
            // 0x27e020: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E024u; }
        if (ctx->pc != 0x27E024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E024u; }
        if (ctx->pc != 0x27E024u) { return; }
    }
    ctx->pc = 0x27E024u;
label_27e024:
    // 0x27e024: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27e024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e028:
    // 0x27e028: 0x27a201e8  addiu       $v0, $sp, 0x1E8
    ctx->pc = 0x27e028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
label_27e02c:
    // 0x27e02c: 0xc0a24f0  jal         func_2893C0
label_27e030:
    if (ctx->pc == 0x27E030u) {
        ctx->pc = 0x27E030u;
            // 0x27e030: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x27E034u;
        goto label_27e034;
    }
    ctx->pc = 0x27E02Cu;
    SET_GPR_U32(ctx, 31, 0x27E034u);
    ctx->pc = 0x27E030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E02Cu;
            // 0x27e030: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E034u; }
        if (ctx->pc != 0x27E034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E034u; }
        if (ctx->pc != 0x27E034u) { return; }
    }
    ctx->pc = 0x27E034u;
label_27e034:
    // 0x27e034: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x27e034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_27e038:
    // 0x27e038: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27e038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27e03c:
    // 0x27e03c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27e03cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27e040:
    // 0x27e040: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x27e040u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e044:
    // 0x27e044: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x27e044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27e048:
    // 0x27e048: 0xc04a234  jal         func_1288D0
label_27e04c:
    if (ctx->pc == 0x27E04Cu) {
        ctx->pc = 0x27E04Cu;
            // 0x27e04c: 0x24a5cd40  addiu       $a1, $a1, -0x32C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954304));
        ctx->pc = 0x27E050u;
        goto label_27e050;
    }
    ctx->pc = 0x27E048u;
    SET_GPR_U32(ctx, 31, 0x27E050u);
    ctx->pc = 0x27E04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E048u;
            // 0x27e04c: 0x24a5cd40  addiu       $a1, $a1, -0x32C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E050u; }
        if (ctx->pc != 0x27E050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E050u; }
        if (ctx->pc != 0x27E050u) { return; }
    }
    ctx->pc = 0x27E050u;
label_27e050:
    // 0x27e050: 0xc04a422  jal         func_129088
label_27e054:
    if (ctx->pc == 0x27E054u) {
        ctx->pc = 0x27E054u;
            // 0x27e054: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x27E058u;
        goto label_27e058;
    }
    ctx->pc = 0x27E050u;
    SET_GPR_U32(ctx, 31, 0x27E058u);
    ctx->pc = 0x27E054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E050u;
            // 0x27e054: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E058u; }
        if (ctx->pc != 0x27E058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E058u; }
        if (ctx->pc != 0x27E058u) { return; }
    }
    ctx->pc = 0x27E058u;
label_27e058:
    // 0x27e058: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27e058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e05c:
    // 0x27e05c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x27e05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27e060:
    // 0x27e060: 0xc0452d2  jal         func_114B48
label_27e064:
    if (ctx->pc == 0x27E064u) {
        ctx->pc = 0x27E064u;
            // 0x27e064: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E068u;
        goto label_27e068;
    }
    ctx->pc = 0x27E060u;
    SET_GPR_U32(ctx, 31, 0x27E068u);
    ctx->pc = 0x27E064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E060u;
            // 0x27e064: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E068u; }
        if (ctx->pc != 0x27E068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E068u; }
        if (ctx->pc != 0x27E068u) { return; }
    }
    ctx->pc = 0x27E068u;
label_27e068:
    // 0x27e068: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x27e068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_27e06c:
    // 0x27e06c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x27e06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_27e070:
    // 0x27e070: 0xc421e444  lwc1        $f1, -0x1BBC($at)
    ctx->pc = 0x27e070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27e074:
    // 0x27e074: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x27e074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_27e078:
    // 0x27e078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27e078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27e07c:
    // 0x27e07c: 0x0  nop
    ctx->pc = 0x27e07cu;
    // NOP
label_27e080:
    // 0x27e080: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x27e080u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_27e084:
    // 0x27e084: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x27e084u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27e088:
    // 0x27e088: 0x0  nop
    ctx->pc = 0x27e088u;
    // NOP
label_27e08c:
    // 0x27e08c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_27e090:
    if (ctx->pc == 0x27E090u) {
        ctx->pc = 0x27E090u;
            // 0x27e090: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->pc = 0x27E094u;
        goto label_27e094;
    }
    ctx->pc = 0x27E08Cu;
    {
        const bool branch_taken_0x27e08c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27E090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E08Cu;
            // 0x27e090: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e08c) {
            ctx->pc = 0x27E0A8u;
            goto label_27e0a8;
        }
    }
    ctx->pc = 0x27E094u;
label_27e094:
    // 0x27e094: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x27e094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_27e098:
    // 0x27e098: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x27e098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_27e09c:
    // 0x27e09c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27e09cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27e0a0:
    // 0x27e0a0: 0x1000000d  b           . + 4 + (0xD << 2)
label_27e0a4:
    if (ctx->pc == 0x27E0A4u) {
        ctx->pc = 0x27E0A4u;
            // 0x27e0a4: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x27E0A8u;
        goto label_27e0a8;
    }
    ctx->pc = 0x27E0A0u;
    {
        const bool branch_taken_0x27e0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E0A0u;
            // 0x27e0a4: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0a0) {
            ctx->pc = 0x27E0D8u;
            goto label_27e0d8;
        }
    }
    ctx->pc = 0x27E0A8u;
label_27e0a8:
    // 0x27e0a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x27e0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_27e0ac:
    // 0x27e0ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27e0acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27e0b0:
    // 0x27e0b0: 0x0  nop
    ctx->pc = 0x27e0b0u;
    // NOP
label_27e0b4:
    // 0x27e0b4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x27e0b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27e0b8:
    // 0x27e0b8: 0x0  nop
    ctx->pc = 0x27e0b8u;
    // NOP
label_27e0bc:
    // 0x27e0bc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_27e0c0:
    if (ctx->pc == 0x27E0C0u) {
        ctx->pc = 0x27E0C0u;
            // 0x27e0c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x27E0C4u;
        goto label_27e0c4;
    }
    ctx->pc = 0x27E0BCu;
    {
        const bool branch_taken_0x27e0bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27E0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E0BCu;
            // 0x27e0c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0bc) {
            ctx->pc = 0x27E0DCu;
            goto label_27e0dc;
        }
    }
    ctx->pc = 0x27E0C4u;
label_27e0c4:
    // 0x27e0c4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x27e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_27e0c8:
    // 0x27e0c8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x27e0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_27e0cc:
    // 0x27e0cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27e0ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27e0d0:
    // 0x27e0d0: 0x0  nop
    ctx->pc = 0x27e0d0u;
    // NOP
label_27e0d4:
    // 0x27e0d4: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x27e0d4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_27e0d8:
    // 0x27e0d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27e0d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_27e0dc:
    // 0x27e0dc: 0xc0a24f0  jal         func_2893C0
label_27e0e0:
    if (ctx->pc == 0x27E0E0u) {
        ctx->pc = 0x27E0E4u;
        goto label_27e0e4;
    }
    ctx->pc = 0x27E0DCu;
    SET_GPR_U32(ctx, 31, 0x27E0E4u);
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E0E4u; }
        if (ctx->pc != 0x27E0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E0E4u; }
        if (ctx->pc != 0x27E0E4u) { return; }
    }
    ctx->pc = 0x27E0E4u;
label_27e0e4:
    // 0x27e0e4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x27e0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_27e0e8:
    // 0x27e0e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27e0e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e0ec:
    // 0x27e0ec: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x27e0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27e0f0:
    // 0x27e0f0: 0xc04a234  jal         func_1288D0
label_27e0f4:
    if (ctx->pc == 0x27E0F4u) {
        ctx->pc = 0x27E0F4u;
            // 0x27e0f4: 0x24a5cd68  addiu       $a1, $a1, -0x3298 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954344));
        ctx->pc = 0x27E0F8u;
        goto label_27e0f8;
    }
    ctx->pc = 0x27E0F0u;
    SET_GPR_U32(ctx, 31, 0x27E0F8u);
    ctx->pc = 0x27E0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E0F0u;
            // 0x27e0f4: 0x24a5cd68  addiu       $a1, $a1, -0x3298 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E0F8u; }
        if (ctx->pc != 0x27E0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E0F8u; }
        if (ctx->pc != 0x27E0F8u) { return; }
    }
    ctx->pc = 0x27E0F8u;
label_27e0f8:
    // 0x27e0f8: 0xc04a422  jal         func_129088
label_27e0fc:
    if (ctx->pc == 0x27E0FCu) {
        ctx->pc = 0x27E0FCu;
            // 0x27e0fc: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x27E100u;
        goto label_27e100;
    }
    ctx->pc = 0x27E0F8u;
    SET_GPR_U32(ctx, 31, 0x27E100u);
    ctx->pc = 0x27E0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E0F8u;
            // 0x27e0fc: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E100u; }
        if (ctx->pc != 0x27E100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E100u; }
        if (ctx->pc != 0x27E100u) { return; }
    }
    ctx->pc = 0x27E100u;
label_27e100:
    // 0x27e100: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27e100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e104:
    // 0x27e104: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x27e104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27e108:
    // 0x27e108: 0xc0452d2  jal         func_114B48
label_27e10c:
    if (ctx->pc == 0x27E10Cu) {
        ctx->pc = 0x27E10Cu;
            // 0x27e10c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E110u;
        goto label_27e110;
    }
    ctx->pc = 0x27E108u;
    SET_GPR_U32(ctx, 31, 0x27E110u);
    ctx->pc = 0x27E10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E108u;
            // 0x27e10c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E110u; }
        if (ctx->pc != 0x27E110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E110u; }
        if (ctx->pc != 0x27E110u) { return; }
    }
    ctx->pc = 0x27E110u;
label_27e110:
    // 0x27e110: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x27e110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27e114:
    // 0x27e114: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x27e114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27e118:
    // 0x27e118: 0xc0a24f0  jal         func_2893C0
label_27e11c:
    if (ctx->pc == 0x27E11Cu) {
        ctx->pc = 0x27E11Cu;
            // 0x27e11c: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x27E120u;
        goto label_27e120;
    }
    ctx->pc = 0x27E118u;
    SET_GPR_U32(ctx, 31, 0x27E120u);
    ctx->pc = 0x27E11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E118u;
            // 0x27e11c: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E120u; }
        if (ctx->pc != 0x27E120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E120u; }
        if (ctx->pc != 0x27E120u) { return; }
    }
    ctx->pc = 0x27E120u;
label_27e120:
    // 0x27e120: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x27e120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_27e124:
    // 0x27e124: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27e124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e128:
    // 0x27e128: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x27e128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27e12c:
    // 0x27e12c: 0xc04a234  jal         func_1288D0
label_27e130:
    if (ctx->pc == 0x27E130u) {
        ctx->pc = 0x27E130u;
            // 0x27e130: 0x24a5cd80  addiu       $a1, $a1, -0x3280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954368));
        ctx->pc = 0x27E134u;
        goto label_27e134;
    }
    ctx->pc = 0x27E12Cu;
    SET_GPR_U32(ctx, 31, 0x27E134u);
    ctx->pc = 0x27E130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E12Cu;
            // 0x27e130: 0x24a5cd80  addiu       $a1, $a1, -0x3280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E134u; }
        if (ctx->pc != 0x27E134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E134u; }
        if (ctx->pc != 0x27E134u) { return; }
    }
    ctx->pc = 0x27E134u;
label_27e134:
    // 0x27e134: 0xc04a422  jal         func_129088
label_27e138:
    if (ctx->pc == 0x27E138u) {
        ctx->pc = 0x27E138u;
            // 0x27e138: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x27E13Cu;
        goto label_27e13c;
    }
    ctx->pc = 0x27E134u;
    SET_GPR_U32(ctx, 31, 0x27E13Cu);
    ctx->pc = 0x27E138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E134u;
            // 0x27e138: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E13Cu; }
        if (ctx->pc != 0x27E13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E13Cu; }
        if (ctx->pc != 0x27E13Cu) { return; }
    }
    ctx->pc = 0x27E13Cu;
label_27e13c:
    // 0x27e13c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27e13cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e140:
    // 0x27e140: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x27e140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27e144:
    // 0x27e144: 0xc0452d2  jal         func_114B48
label_27e148:
    if (ctx->pc == 0x27E148u) {
        ctx->pc = 0x27E148u;
            // 0x27e148: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E14Cu;
        goto label_27e14c;
    }
    ctx->pc = 0x27E144u;
    SET_GPR_U32(ctx, 31, 0x27E14Cu);
    ctx->pc = 0x27E148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E144u;
            // 0x27e148: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E14Cu; }
        if (ctx->pc != 0x27E14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E14Cu; }
        if (ctx->pc != 0x27E14Cu) { return; }
    }
    ctx->pc = 0x27E14Cu;
label_27e14c:
    // 0x27e14c: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x27e14cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
label_27e150:
    // 0x27e150: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x27e150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_27e154:
    // 0x27e154: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x27e154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_27e158:
    // 0x27e158: 0xc04c018  jal         func_130060
label_27e15c:
    if (ctx->pc == 0x27E15Cu) {
        ctx->pc = 0x27E15Cu;
            // 0x27e15c: 0xafc00000  sw          $zero, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x27E160u;
        goto label_27e160;
    }
    ctx->pc = 0x27E158u;
    SET_GPR_U32(ctx, 31, 0x27E160u);
    ctx->pc = 0x27E15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E158u;
            // 0x27e15c: 0xafc00000  sw          $zero, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E160u; }
        if (ctx->pc != 0x27E160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E160u; }
        if (ctx->pc != 0x27E160u) { return; }
    }
    ctx->pc = 0x27E160u;
label_27e160:
    // 0x27e160: 0xc0a24f0  jal         func_2893C0
label_27e164:
    if (ctx->pc == 0x27E164u) {
        ctx->pc = 0x27E164u;
            // 0x27e164: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x27E168u;
        goto label_27e168;
    }
    ctx->pc = 0x27E160u;
    SET_GPR_U32(ctx, 31, 0x27E168u);
    ctx->pc = 0x27E164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E160u;
            // 0x27e164: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E168u; }
        if (ctx->pc != 0x27E168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E168u; }
        if (ctx->pc != 0x27E168u) { return; }
    }
    ctx->pc = 0x27E168u;
label_27e168:
    // 0x27e168: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x27e168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_27e16c:
    // 0x27e16c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27e16cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e170:
    // 0x27e170: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x27e170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27e174:
    // 0x27e174: 0xc04a234  jal         func_1288D0
label_27e178:
    if (ctx->pc == 0x27E178u) {
        ctx->pc = 0x27E178u;
            // 0x27e178: 0x24a5cd90  addiu       $a1, $a1, -0x3270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954384));
        ctx->pc = 0x27E17Cu;
        goto label_27e17c;
    }
    ctx->pc = 0x27E174u;
    SET_GPR_U32(ctx, 31, 0x27E17Cu);
    ctx->pc = 0x27E178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E174u;
            // 0x27e178: 0x24a5cd90  addiu       $a1, $a1, -0x3270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E17Cu; }
        if (ctx->pc != 0x27E17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E17Cu; }
        if (ctx->pc != 0x27E17Cu) { return; }
    }
    ctx->pc = 0x27E17Cu;
label_27e17c:
    // 0x27e17c: 0xc04a422  jal         func_129088
label_27e180:
    if (ctx->pc == 0x27E180u) {
        ctx->pc = 0x27E180u;
            // 0x27e180: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x27E184u;
        goto label_27e184;
    }
    ctx->pc = 0x27E17Cu;
    SET_GPR_U32(ctx, 31, 0x27E184u);
    ctx->pc = 0x27E180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E17Cu;
            // 0x27e180: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E184u; }
        if (ctx->pc != 0x27E184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E184u; }
        if (ctx->pc != 0x27E184u) { return; }
    }
    ctx->pc = 0x27E184u;
label_27e184:
    // 0x27e184: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27e184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e188:
    // 0x27e188: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x27e188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27e18c:
    // 0x27e18c: 0xc0452d2  jal         func_114B48
label_27e190:
    if (ctx->pc == 0x27E190u) {
        ctx->pc = 0x27E190u;
            // 0x27e190: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E194u;
        goto label_27e194;
    }
    ctx->pc = 0x27E18Cu;
    SET_GPR_U32(ctx, 31, 0x27E194u);
    ctx->pc = 0x27E190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E18Cu;
            // 0x27e190: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E194u; }
        if (ctx->pc != 0x27E194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E194u; }
        if (ctx->pc != 0x27E194u) { return; }
    }
    ctx->pc = 0x27E194u;
label_27e194:
    // 0x27e194: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x27e194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_27e198:
    // 0x27e198: 0xc0a24f0  jal         func_2893C0
label_27e19c:
    if (ctx->pc == 0x27E19Cu) {
        ctx->pc = 0x27E19Cu;
            // 0x27e19c: 0xc42ce450  lwc1        $f12, -0x1BB0($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x27E1A0u;
        goto label_27e1a0;
    }
    ctx->pc = 0x27E198u;
    SET_GPR_U32(ctx, 31, 0x27E1A0u);
    ctx->pc = 0x27E19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E198u;
            // 0x27e19c: 0xc42ce450  lwc1        $f12, -0x1BB0($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E1A0u; }
        if (ctx->pc != 0x27E1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E1A0u; }
        if (ctx->pc != 0x27E1A0u) { return; }
    }
    ctx->pc = 0x27E1A0u;
label_27e1a0:
    // 0x27e1a0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x27e1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_27e1a4:
    // 0x27e1a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27e1a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e1a8:
    // 0x27e1a8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x27e1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27e1ac:
    // 0x27e1ac: 0xc04a234  jal         func_1288D0
label_27e1b0:
    if (ctx->pc == 0x27E1B0u) {
        ctx->pc = 0x27E1B0u;
            // 0x27e1b0: 0x24a5cdb0  addiu       $a1, $a1, -0x3250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954416));
        ctx->pc = 0x27E1B4u;
        goto label_27e1b4;
    }
    ctx->pc = 0x27E1ACu;
    SET_GPR_U32(ctx, 31, 0x27E1B4u);
    ctx->pc = 0x27E1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E1ACu;
            // 0x27e1b0: 0x24a5cdb0  addiu       $a1, $a1, -0x3250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E1B4u; }
        if (ctx->pc != 0x27E1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E1B4u; }
        if (ctx->pc != 0x27E1B4u) { return; }
    }
    ctx->pc = 0x27E1B4u;
label_27e1b4:
    // 0x27e1b4: 0xc04a422  jal         func_129088
label_27e1b8:
    if (ctx->pc == 0x27E1B8u) {
        ctx->pc = 0x27E1B8u;
            // 0x27e1b8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x27E1BCu;
        goto label_27e1bc;
    }
    ctx->pc = 0x27E1B4u;
    SET_GPR_U32(ctx, 31, 0x27E1BCu);
    ctx->pc = 0x27E1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E1B4u;
            // 0x27e1b8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E1BCu; }
        if (ctx->pc != 0x27E1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E1BCu; }
        if (ctx->pc != 0x27E1BCu) { return; }
    }
    ctx->pc = 0x27E1BCu;
label_27e1bc:
    // 0x27e1bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27e1bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e1c0:
    // 0x27e1c0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x27e1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27e1c4:
    // 0x27e1c4: 0xc0452d2  jal         func_114B48
label_27e1c8:
    if (ctx->pc == 0x27E1C8u) {
        ctx->pc = 0x27E1C8u;
            // 0x27e1c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E1CCu;
        goto label_27e1cc;
    }
    ctx->pc = 0x27E1C4u;
    SET_GPR_U32(ctx, 31, 0x27E1CCu);
    ctx->pc = 0x27E1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E1C4u;
            // 0x27e1c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E1CCu; }
        if (ctx->pc != 0x27E1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E1CCu; }
        if (ctx->pc != 0x27E1CCu) { return; }
    }
    ctx->pc = 0x27E1CCu;
label_27e1cc:
    // 0x27e1cc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x27e1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_27e1d0:
    // 0x27e1d0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x27e1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27e1d4:
    // 0x27e1d4: 0xc04a234  jal         func_1288D0
label_27e1d8:
    if (ctx->pc == 0x27E1D8u) {
        ctx->pc = 0x27E1D8u;
            // 0x27e1d8: 0x24a5cdc8  addiu       $a1, $a1, -0x3238 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954440));
        ctx->pc = 0x27E1DCu;
        goto label_27e1dc;
    }
    ctx->pc = 0x27E1D4u;
    SET_GPR_U32(ctx, 31, 0x27E1DCu);
    ctx->pc = 0x27E1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E1D4u;
            // 0x27e1d8: 0x24a5cdc8  addiu       $a1, $a1, -0x3238 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E1DCu; }
        if (ctx->pc != 0x27E1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E1DCu; }
        if (ctx->pc != 0x27E1DCu) { return; }
    }
    ctx->pc = 0x27E1DCu;
label_27e1dc:
    // 0x27e1dc: 0xc04a422  jal         func_129088
label_27e1e0:
    if (ctx->pc == 0x27E1E0u) {
        ctx->pc = 0x27E1E0u;
            // 0x27e1e0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x27E1E4u;
        goto label_27e1e4;
    }
    ctx->pc = 0x27E1DCu;
    SET_GPR_U32(ctx, 31, 0x27E1E4u);
    ctx->pc = 0x27E1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E1DCu;
            // 0x27e1e0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E1E4u; }
        if (ctx->pc != 0x27E1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E1E4u; }
        if (ctx->pc != 0x27E1E4u) { return; }
    }
    ctx->pc = 0x27E1E4u;
label_27e1e4:
    // 0x27e1e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27e1e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e1e8:
    // 0x27e1e8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x27e1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27e1ec:
    // 0x27e1ec: 0xc0452d2  jal         func_114B48
label_27e1f0:
    if (ctx->pc == 0x27E1F0u) {
        ctx->pc = 0x27E1F0u;
            // 0x27e1f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E1F4u;
        goto label_27e1f4;
    }
    ctx->pc = 0x27E1ECu;
    SET_GPR_U32(ctx, 31, 0x27E1F4u);
    ctx->pc = 0x27E1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E1ECu;
            // 0x27e1f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E1F4u; }
        if (ctx->pc != 0x27E1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E1F4u; }
        if (ctx->pc != 0x27E1F4u) { return; }
    }
    ctx->pc = 0x27E1F4u;
label_27e1f4:
    // 0x27e1f4: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27e1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27e1f8:
    // 0x27e1f8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x27e1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_27e1fc:
    // 0x27e1fc: 0x8c264400  lw          $a2, 0x4400($at)
    ctx->pc = 0x27e1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 17408)));
label_27e200:
    // 0x27e200: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x27e200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27e204:
    // 0x27e204: 0xc04a234  jal         func_1288D0
label_27e208:
    if (ctx->pc == 0x27E208u) {
        ctx->pc = 0x27E208u;
            // 0x27e208: 0x24a5cdd8  addiu       $a1, $a1, -0x3228 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954456));
        ctx->pc = 0x27E20Cu;
        goto label_27e20c;
    }
    ctx->pc = 0x27E204u;
    SET_GPR_U32(ctx, 31, 0x27E20Cu);
    ctx->pc = 0x27E208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E204u;
            // 0x27e208: 0x24a5cdd8  addiu       $a1, $a1, -0x3228 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E20Cu; }
        if (ctx->pc != 0x27E20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E20Cu; }
        if (ctx->pc != 0x27E20Cu) { return; }
    }
    ctx->pc = 0x27E20Cu;
label_27e20c:
    // 0x27e20c: 0xc04a422  jal         func_129088
label_27e210:
    if (ctx->pc == 0x27E210u) {
        ctx->pc = 0x27E210u;
            // 0x27e210: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x27E214u;
        goto label_27e214;
    }
    ctx->pc = 0x27E20Cu;
    SET_GPR_U32(ctx, 31, 0x27E214u);
    ctx->pc = 0x27E210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E20Cu;
            // 0x27e210: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E214u; }
        if (ctx->pc != 0x27E214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E214u; }
        if (ctx->pc != 0x27E214u) { return; }
    }
    ctx->pc = 0x27E214u;
label_27e214:
    // 0x27e214: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27e214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e218:
    // 0x27e218: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x27e218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27e21c:
    // 0x27e21c: 0xc0452d2  jal         func_114B48
label_27e220:
    if (ctx->pc == 0x27E220u) {
        ctx->pc = 0x27E220u;
            // 0x27e220: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E224u;
        goto label_27e224;
    }
    ctx->pc = 0x27E21Cu;
    SET_GPR_U32(ctx, 31, 0x27E224u);
    ctx->pc = 0x27E220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E21Cu;
            // 0x27e220: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E224u; }
        if (ctx->pc != 0x27E224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E224u; }
        if (ctx->pc != 0x27E224u) { return; }
    }
    ctx->pc = 0x27E224u;
label_27e224:
    // 0x27e224: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x27e224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_27e228:
    // 0x27e228: 0xc04a422  jal         func_129088
label_27e22c:
    if (ctx->pc == 0x27E22Cu) {
        ctx->pc = 0x27E22Cu;
            // 0x27e22c: 0x2484cdf0  addiu       $a0, $a0, -0x3210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954480));
        ctx->pc = 0x27E230u;
        goto label_27e230;
    }
    ctx->pc = 0x27E228u;
    SET_GPR_U32(ctx, 31, 0x27E230u);
    ctx->pc = 0x27E22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E228u;
            // 0x27e22c: 0x2484cdf0  addiu       $a0, $a0, -0x3210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E230u; }
        if (ctx->pc != 0x27E230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E230u; }
        if (ctx->pc != 0x27E230u) { return; }
    }
    ctx->pc = 0x27E230u;
label_27e230:
    // 0x27e230: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x27e230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_27e234:
    // 0x27e234: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27e234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e238:
    // 0x27e238: 0x24a5cdf0  addiu       $a1, $a1, -0x3210
    ctx->pc = 0x27e238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954480));
label_27e23c:
    // 0x27e23c: 0xc0452d2  jal         func_114B48
label_27e240:
    if (ctx->pc == 0x27E240u) {
        ctx->pc = 0x27E240u;
            // 0x27e240: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E244u;
        goto label_27e244;
    }
    ctx->pc = 0x27E23Cu;
    SET_GPR_U32(ctx, 31, 0x27E244u);
    ctx->pc = 0x27E240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E23Cu;
            // 0x27e240: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E244u; }
        if (ctx->pc != 0x27E244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E244u; }
        if (ctx->pc != 0x27E244u) { return; }
    }
    ctx->pc = 0x27E244u;
label_27e244:
    // 0x27e244: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27e244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_27e248:
    // 0x27e248: 0xc0959c0  jal         func_256700
label_27e24c:
    if (ctx->pc == 0x27E24Cu) {
        ctx->pc = 0x27E24Cu;
            // 0x27e24c: 0x24844200  addiu       $a0, $a0, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
        ctx->pc = 0x27E250u;
        goto label_27e250;
    }
    ctx->pc = 0x27E248u;
    SET_GPR_U32(ctx, 31, 0x27E250u);
    ctx->pc = 0x27E24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E248u;
            // 0x27e24c: 0x24844200  addiu       $a0, $a0, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256700u;
    if (runtime->hasFunction(0x256700u)) {
        auto targetFn = runtime->lookupFunction(0x256700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E250u; }
        if (ctx->pc != 0x27E250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__10CCameraPasFv_0x256700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E250u; }
        if (ctx->pc != 0x27E250u) { return; }
    }
    ctx->pc = 0x27E250u;
label_27e250:
    // 0x27e250: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x27e250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_27e254:
    // 0x27e254: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27e254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e258:
    // 0x27e258: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x27e258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27e25c:
    // 0x27e25c: 0xc04a234  jal         func_1288D0
label_27e260:
    if (ctx->pc == 0x27E260u) {
        ctx->pc = 0x27E260u;
            // 0x27e260: 0x24a5ce00  addiu       $a1, $a1, -0x3200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954496));
        ctx->pc = 0x27E264u;
        goto label_27e264;
    }
    ctx->pc = 0x27E25Cu;
    SET_GPR_U32(ctx, 31, 0x27E264u);
    ctx->pc = 0x27E260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E25Cu;
            // 0x27e260: 0x24a5ce00  addiu       $a1, $a1, -0x3200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E264u; }
        if (ctx->pc != 0x27E264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E264u; }
        if (ctx->pc != 0x27E264u) { return; }
    }
    ctx->pc = 0x27E264u;
label_27e264:
    // 0x27e264: 0xc04a422  jal         func_129088
label_27e268:
    if (ctx->pc == 0x27E268u) {
        ctx->pc = 0x27E268u;
            // 0x27e268: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x27E26Cu;
        goto label_27e26c;
    }
    ctx->pc = 0x27E264u;
    SET_GPR_U32(ctx, 31, 0x27E26Cu);
    ctx->pc = 0x27E268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E264u;
            // 0x27e268: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E26Cu; }
        if (ctx->pc != 0x27E26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E26Cu; }
        if (ctx->pc != 0x27E26Cu) { return; }
    }
    ctx->pc = 0x27E26Cu;
label_27e26c:
    // 0x27e26c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27e26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e270:
    // 0x27e270: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x27e270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27e274:
    // 0x27e274: 0xc0452d2  jal         func_114B48
label_27e278:
    if (ctx->pc == 0x27E278u) {
        ctx->pc = 0x27E278u;
            // 0x27e278: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E27Cu;
        goto label_27e27c;
    }
    ctx->pc = 0x27E274u;
    SET_GPR_U32(ctx, 31, 0x27E27Cu);
    ctx->pc = 0x27E278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E274u;
            // 0x27e278: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E27Cu; }
        if (ctx->pc != 0x27E27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E27Cu; }
        if (ctx->pc != 0x27E27Cu) { return; }
    }
    ctx->pc = 0x27E27Cu;
label_27e27c:
    // 0x27e27c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_27e280:
    if (ctx->pc == 0x27E280u) {
        ctx->pc = 0x27E280u;
            // 0x27e280: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E284u;
        goto label_27e284;
    }
    ctx->pc = 0x27E27Cu;
    {
        const bool branch_taken_0x27e27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E27Cu;
            // 0x27e280: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e27c) {
            ctx->pc = 0x27E338u;
            goto label_27e338;
        }
    }
    ctx->pc = 0x27E284u;
label_27e284:
    // 0x27e284: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27e284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27e288:
    // 0x27e288: 0x24844200  addiu       $a0, $a0, 0x4200
    ctx->pc = 0x27e288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
label_27e28c:
    // 0x27e28c: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x27e28cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_27e290:
    // 0x27e290: 0xc09596c  jal         func_2565B0
label_27e294:
    if (ctx->pc == 0x27E294u) {
        ctx->pc = 0x27E294u;
            // 0x27e294: 0x27a701e0  addiu       $a3, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x27E298u;
        goto label_27e298;
    }
    ctx->pc = 0x27E290u;
    SET_GPR_U32(ctx, 31, 0x27E298u);
    ctx->pc = 0x27E294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E290u;
            // 0x27e294: 0x27a701e0  addiu       $a3, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2565B0u;
    if (runtime->hasFunction(0x2565B0u)) {
        auto targetFn = runtime->lookupFunction(0x2565B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E298u; }
        if (ctx->pc != 0x27E298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCameraPas__10CCameraPasFiPfPf_0x2565b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E298u; }
        if (ctx->pc != 0x27E298u) { return; }
    }
    ctx->pc = 0x27E298u;
label_27e298:
    // 0x27e298: 0xc0975d8  jal         func_25D760
label_27e29c:
    if (ctx->pc == 0x27E29Cu) {
        ctx->pc = 0x27E29Cu;
            // 0x27e29c: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x27E2A0u;
        goto label_27e2a0;
    }
    ctx->pc = 0x27E298u;
    SET_GPR_U32(ctx, 31, 0x27E2A0u);
    ctx->pc = 0x27E29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E298u;
            // 0x27e29c: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D760u;
    if (runtime->hasFunction(0x25D760u)) {
        auto targetFn = runtime->lookupFunction(0x25D760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E2A0u; }
        if (ctx->pc != 0x27E2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoordGyaku__FPf_0x25d760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E2A0u; }
        if (ctx->pc != 0x27E2A0u) { return; }
    }
    ctx->pc = 0x27E2A0u;
label_27e2a0:
    // 0x27e2a0: 0xc0975d8  jal         func_25D760
label_27e2a4:
    if (ctx->pc == 0x27E2A4u) {
        ctx->pc = 0x27E2A4u;
            // 0x27e2a4: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x27E2A8u;
        goto label_27e2a8;
    }
    ctx->pc = 0x27E2A0u;
    SET_GPR_U32(ctx, 31, 0x27E2A8u);
    ctx->pc = 0x27E2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E2A0u;
            // 0x27e2a4: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D760u;
    if (runtime->hasFunction(0x25D760u)) {
        auto targetFn = runtime->lookupFunction(0x25D760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E2A8u; }
        if (ctx->pc != 0x27E2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoordGyaku__FPf_0x25d760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E2A8u; }
        if (ctx->pc != 0x27E2A8u) { return; }
    }
    ctx->pc = 0x27E2A8u;
label_27e2a8:
    // 0x27e2a8: 0xc0a24f0  jal         func_2893C0
label_27e2ac:
    if (ctx->pc == 0x27E2ACu) {
        ctx->pc = 0x27E2ACu;
            // 0x27e2ac: 0xc7ac01d0  lwc1        $f12, 0x1D0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x27E2B0u;
        goto label_27e2b0;
    }
    ctx->pc = 0x27E2A8u;
    SET_GPR_U32(ctx, 31, 0x27E2B0u);
    ctx->pc = 0x27E2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E2A8u;
            // 0x27e2ac: 0xc7ac01d0  lwc1        $f12, 0x1D0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E2B0u; }
        if (ctx->pc != 0x27E2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E2B0u; }
        if (ctx->pc != 0x27E2B0u) { return; }
    }
    ctx->pc = 0x27E2B0u;
label_27e2b0:
    // 0x27e2b0: 0xc6ec0000  lwc1        $f12, 0x0($s7)
    ctx->pc = 0x27e2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27e2b4:
    // 0x27e2b4: 0xc0a24f0  jal         func_2893C0
label_27e2b8:
    if (ctx->pc == 0x27E2B8u) {
        ctx->pc = 0x27E2B8u;
            // 0x27e2b8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E2BCu;
        goto label_27e2bc;
    }
    ctx->pc = 0x27E2B4u;
    SET_GPR_U32(ctx, 31, 0x27E2BCu);
    ctx->pc = 0x27E2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E2B4u;
            // 0x27e2b8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E2BCu; }
        if (ctx->pc != 0x27E2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E2BCu; }
        if (ctx->pc != 0x27E2BCu) { return; }
    }
    ctx->pc = 0x27E2BCu;
label_27e2bc:
    // 0x27e2bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27e2bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e2c0:
    // 0x27e2c0: 0x27a201d8  addiu       $v0, $sp, 0x1D8
    ctx->pc = 0x27e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_27e2c4:
    // 0x27e2c4: 0xc0a24f0  jal         func_2893C0
label_27e2c8:
    if (ctx->pc == 0x27E2C8u) {
        ctx->pc = 0x27E2C8u;
            // 0x27e2c8: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x27E2CCu;
        goto label_27e2cc;
    }
    ctx->pc = 0x27E2C4u;
    SET_GPR_U32(ctx, 31, 0x27E2CCu);
    ctx->pc = 0x27E2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E2C4u;
            // 0x27e2c8: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E2CCu; }
        if (ctx->pc != 0x27E2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E2CCu; }
        if (ctx->pc != 0x27E2CCu) { return; }
    }
    ctx->pc = 0x27E2CCu;
label_27e2cc:
    // 0x27e2cc: 0xc7ac01e0  lwc1        $f12, 0x1E0($sp)
    ctx->pc = 0x27e2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27e2d0:
    // 0x27e2d0: 0xc0a24f0  jal         func_2893C0
label_27e2d4:
    if (ctx->pc == 0x27E2D4u) {
        ctx->pc = 0x27E2D4u;
            // 0x27e2d4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E2D8u;
        goto label_27e2d8;
    }
    ctx->pc = 0x27E2D0u;
    SET_GPR_U32(ctx, 31, 0x27E2D8u);
    ctx->pc = 0x27E2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E2D0u;
            // 0x27e2d4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E2D8u; }
        if (ctx->pc != 0x27E2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E2D8u; }
        if (ctx->pc != 0x27E2D8u) { return; }
    }
    ctx->pc = 0x27E2D8u;
label_27e2d8:
    // 0x27e2d8: 0xc7cc0000  lwc1        $f12, 0x0($fp)
    ctx->pc = 0x27e2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27e2dc:
    // 0x27e2dc: 0xc0a24f0  jal         func_2893C0
label_27e2e0:
    if (ctx->pc == 0x27E2E0u) {
        ctx->pc = 0x27E2E0u;
            // 0x27e2e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E2E4u;
        goto label_27e2e4;
    }
    ctx->pc = 0x27E2DCu;
    SET_GPR_U32(ctx, 31, 0x27E2E4u);
    ctx->pc = 0x27E2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E2DCu;
            // 0x27e2e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E2E4u; }
        if (ctx->pc != 0x27E2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E2E4u; }
        if (ctx->pc != 0x27E2E4u) { return; }
    }
    ctx->pc = 0x27E2E4u;
label_27e2e4:
    // 0x27e2e4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x27e2e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e2e8:
    // 0x27e2e8: 0x27a201e8  addiu       $v0, $sp, 0x1E8
    ctx->pc = 0x27e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
label_27e2ec:
    // 0x27e2ec: 0xc0a24f0  jal         func_2893C0
label_27e2f0:
    if (ctx->pc == 0x27E2F0u) {
        ctx->pc = 0x27E2F0u;
            // 0x27e2f0: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x27E2F4u;
        goto label_27e2f4;
    }
    ctx->pc = 0x27E2ECu;
    SET_GPR_U32(ctx, 31, 0x27E2F4u);
    ctx->pc = 0x27E2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E2ECu;
            // 0x27e2f0: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E2F4u; }
        if (ctx->pc != 0x27E2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E2F4u; }
        if (ctx->pc != 0x27E2F4u) { return; }
    }
    ctx->pc = 0x27E2F4u;
label_27e2f4:
    // 0x27e2f4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x27e2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_27e2f8:
    // 0x27e2f8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x27e2f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27e2fc:
    // 0x27e2fc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x27e2fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27e300:
    // 0x27e300: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x27e300u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27e304:
    // 0x27e304: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x27e304u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27e308:
    // 0x27e308: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x27e308u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_27e30c:
    // 0x27e30c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x27e30cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e310:
    // 0x27e310: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x27e310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27e314:
    // 0x27e314: 0xc04a234  jal         func_1288D0
label_27e318:
    if (ctx->pc == 0x27E318u) {
        ctx->pc = 0x27E318u;
            // 0x27e318: 0x24a5ce20  addiu       $a1, $a1, -0x31E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954528));
        ctx->pc = 0x27E31Cu;
        goto label_27e31c;
    }
    ctx->pc = 0x27E314u;
    SET_GPR_U32(ctx, 31, 0x27E31Cu);
    ctx->pc = 0x27E318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E314u;
            // 0x27e318: 0x24a5ce20  addiu       $a1, $a1, -0x31E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E31Cu; }
        if (ctx->pc != 0x27E31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E31Cu; }
        if (ctx->pc != 0x27E31Cu) { return; }
    }
    ctx->pc = 0x27E31Cu;
label_27e31c:
    // 0x27e31c: 0xc04a422  jal         func_129088
label_27e320:
    if (ctx->pc == 0x27E320u) {
        ctx->pc = 0x27E320u;
            // 0x27e320: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x27E324u;
        goto label_27e324;
    }
    ctx->pc = 0x27E31Cu;
    SET_GPR_U32(ctx, 31, 0x27E324u);
    ctx->pc = 0x27E320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E31Cu;
            // 0x27e320: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E324u; }
        if (ctx->pc != 0x27E324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E324u; }
        if (ctx->pc != 0x27E324u) { return; }
    }
    ctx->pc = 0x27E324u;
label_27e324:
    // 0x27e324: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27e324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e328:
    // 0x27e328: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x27e328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27e32c:
    // 0x27e32c: 0xc0452d2  jal         func_114B48
label_27e330:
    if (ctx->pc == 0x27E330u) {
        ctx->pc = 0x27E330u;
            // 0x27e330: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E334u;
        goto label_27e334;
    }
    ctx->pc = 0x27E32Cu;
    SET_GPR_U32(ctx, 31, 0x27E334u);
    ctx->pc = 0x27E330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E32Cu;
            // 0x27e330: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E334u; }
        if (ctx->pc != 0x27E334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E334u; }
        if (ctx->pc != 0x27E334u) { return; }
    }
    ctx->pc = 0x27E334u;
label_27e334:
    // 0x27e334: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x27e334u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_27e338:
    // 0x27e338: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27e338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27e33c:
    // 0x27e33c: 0x8c224400  lw          $v0, 0x4400($at)
    ctx->pc = 0x27e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 17408)));
label_27e340:
    // 0x27e340: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x27e340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27e344:
    // 0x27e344: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
label_27e348:
    if (ctx->pc == 0x27E348u) {
        ctx->pc = 0x27E348u;
            // 0x27e348: 0x3c0401f0  lui         $a0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
        ctx->pc = 0x27E34Cu;
        goto label_27e34c;
    }
    ctx->pc = 0x27E344u;
    {
        const bool branch_taken_0x27e344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E344u;
            // 0x27e348: 0x3c0401f0  lui         $a0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e344) {
            ctx->pc = 0x27E284u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27e284;
        }
    }
    ctx->pc = 0x27E34Cu;
label_27e34c:
    // 0x27e34c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x27e34cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_27e350:
    // 0x27e350: 0xc04a422  jal         func_129088
label_27e354:
    if (ctx->pc == 0x27E354u) {
        ctx->pc = 0x27E354u;
            // 0x27e354: 0x2484ce60  addiu       $a0, $a0, -0x31A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954592));
        ctx->pc = 0x27E358u;
        goto label_27e358;
    }
    ctx->pc = 0x27E350u;
    SET_GPR_U32(ctx, 31, 0x27E358u);
    ctx->pc = 0x27E354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E350u;
            // 0x27e354: 0x2484ce60  addiu       $a0, $a0, -0x31A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E358u; }
        if (ctx->pc != 0x27E358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E358u; }
        if (ctx->pc != 0x27E358u) { return; }
    }
    ctx->pc = 0x27E358u;
label_27e358:
    // 0x27e358: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x27e358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_27e35c:
    // 0x27e35c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27e35cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e360:
    // 0x27e360: 0x24a5ce60  addiu       $a1, $a1, -0x31A0
    ctx->pc = 0x27e360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954592));
label_27e364:
    // 0x27e364: 0xc0452d2  jal         func_114B48
label_27e368:
    if (ctx->pc == 0x27E368u) {
        ctx->pc = 0x27E368u;
            // 0x27e368: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E36Cu;
        goto label_27e36c;
    }
    ctx->pc = 0x27E364u;
    SET_GPR_U32(ctx, 31, 0x27E36Cu);
    ctx->pc = 0x27E368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E364u;
            // 0x27e368: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E36Cu; }
        if (ctx->pc != 0x27E36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E36Cu; }
        if (ctx->pc != 0x27E36Cu) { return; }
    }
    ctx->pc = 0x27E36Cu;
label_27e36c:
    // 0x27e36c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x27e36cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_27e370:
    // 0x27e370: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x27e370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27e374:
    // 0x27e374: 0xc04a234  jal         func_1288D0
label_27e378:
    if (ctx->pc == 0x27E378u) {
        ctx->pc = 0x27E378u;
            // 0x27e378: 0x24a5ce78  addiu       $a1, $a1, -0x3188 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954616));
        ctx->pc = 0x27E37Cu;
        goto label_27e37c;
    }
    ctx->pc = 0x27E374u;
    SET_GPR_U32(ctx, 31, 0x27E37Cu);
    ctx->pc = 0x27E378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E374u;
            // 0x27e378: 0x24a5ce78  addiu       $a1, $a1, -0x3188 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E37Cu; }
        if (ctx->pc != 0x27E37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E37Cu; }
        if (ctx->pc != 0x27E37Cu) { return; }
    }
    ctx->pc = 0x27E37Cu;
label_27e37c:
    // 0x27e37c: 0xc04a422  jal         func_129088
label_27e380:
    if (ctx->pc == 0x27E380u) {
        ctx->pc = 0x27E380u;
            // 0x27e380: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x27E384u;
        goto label_27e384;
    }
    ctx->pc = 0x27E37Cu;
    SET_GPR_U32(ctx, 31, 0x27E384u);
    ctx->pc = 0x27E380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E37Cu;
            // 0x27e380: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E384u; }
        if (ctx->pc != 0x27E384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E384u; }
        if (ctx->pc != 0x27E384u) { return; }
    }
    ctx->pc = 0x27E384u;
label_27e384:
    // 0x27e384: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27e384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e388:
    // 0x27e388: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x27e388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27e38c:
    // 0x27e38c: 0xc0452d2  jal         func_114B48
label_27e390:
    if (ctx->pc == 0x27E390u) {
        ctx->pc = 0x27E390u;
            // 0x27e390: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E394u;
        goto label_27e394;
    }
    ctx->pc = 0x27E38Cu;
    SET_GPR_U32(ctx, 31, 0x27E394u);
    ctx->pc = 0x27E390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E38Cu;
            // 0x27e390: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E394u; }
        if (ctx->pc != 0x27E394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E394u; }
        if (ctx->pc != 0x27E394u) { return; }
    }
    ctx->pc = 0x27E394u;
label_27e394:
    // 0x27e394: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27e394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27e398:
    // 0x27e398: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x27e398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_27e39c:
    // 0x27e39c: 0x8c264c54  lw          $a2, 0x4C54($at)
    ctx->pc = 0x27e39cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19540)));
label_27e3a0:
    // 0x27e3a0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x27e3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27e3a4:
    // 0x27e3a4: 0xc04a234  jal         func_1288D0
label_27e3a8:
    if (ctx->pc == 0x27E3A8u) {
        ctx->pc = 0x27E3A8u;
            // 0x27e3a8: 0x24a5cdd8  addiu       $a1, $a1, -0x3228 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954456));
        ctx->pc = 0x27E3ACu;
        goto label_27e3ac;
    }
    ctx->pc = 0x27E3A4u;
    SET_GPR_U32(ctx, 31, 0x27E3ACu);
    ctx->pc = 0x27E3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E3A4u;
            // 0x27e3a8: 0x24a5cdd8  addiu       $a1, $a1, -0x3228 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E3ACu; }
        if (ctx->pc != 0x27E3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E3ACu; }
        if (ctx->pc != 0x27E3ACu) { return; }
    }
    ctx->pc = 0x27E3ACu;
label_27e3ac:
    // 0x27e3ac: 0xc04a422  jal         func_129088
label_27e3b0:
    if (ctx->pc == 0x27E3B0u) {
        ctx->pc = 0x27E3B0u;
            // 0x27e3b0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x27E3B4u;
        goto label_27e3b4;
    }
    ctx->pc = 0x27E3ACu;
    SET_GPR_U32(ctx, 31, 0x27E3B4u);
    ctx->pc = 0x27E3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E3ACu;
            // 0x27e3b0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E3B4u; }
        if (ctx->pc != 0x27E3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E3B4u; }
        if (ctx->pc != 0x27E3B4u) { return; }
    }
    ctx->pc = 0x27E3B4u;
label_27e3b4:
    // 0x27e3b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27e3b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e3b8:
    // 0x27e3b8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x27e3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27e3bc:
    // 0x27e3bc: 0xc0452d2  jal         func_114B48
label_27e3c0:
    if (ctx->pc == 0x27E3C0u) {
        ctx->pc = 0x27E3C0u;
            // 0x27e3c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E3C4u;
        goto label_27e3c4;
    }
    ctx->pc = 0x27E3BCu;
    SET_GPR_U32(ctx, 31, 0x27E3C4u);
    ctx->pc = 0x27E3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E3BCu;
            // 0x27e3c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E3C4u; }
        if (ctx->pc != 0x27E3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E3C4u; }
        if (ctx->pc != 0x27E3C4u) { return; }
    }
    ctx->pc = 0x27E3C4u;
label_27e3c4:
    // 0x27e3c4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x27e3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_27e3c8:
    // 0x27e3c8: 0xc04a422  jal         func_129088
label_27e3cc:
    if (ctx->pc == 0x27E3CCu) {
        ctx->pc = 0x27E3CCu;
            // 0x27e3cc: 0x2484ce90  addiu       $a0, $a0, -0x3170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954640));
        ctx->pc = 0x27E3D0u;
        goto label_27e3d0;
    }
    ctx->pc = 0x27E3C8u;
    SET_GPR_U32(ctx, 31, 0x27E3D0u);
    ctx->pc = 0x27E3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E3C8u;
            // 0x27e3cc: 0x2484ce90  addiu       $a0, $a0, -0x3170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E3D0u; }
        if (ctx->pc != 0x27E3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E3D0u; }
        if (ctx->pc != 0x27E3D0u) { return; }
    }
    ctx->pc = 0x27E3D0u;
label_27e3d0:
    // 0x27e3d0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x27e3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_27e3d4:
    // 0x27e3d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27e3d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e3d8:
    // 0x27e3d8: 0x24a5ce90  addiu       $a1, $a1, -0x3170
    ctx->pc = 0x27e3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954640));
label_27e3dc:
    // 0x27e3dc: 0xc0452d2  jal         func_114B48
label_27e3e0:
    if (ctx->pc == 0x27E3E0u) {
        ctx->pc = 0x27E3E0u;
            // 0x27e3e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E3E4u;
        goto label_27e3e4;
    }
    ctx->pc = 0x27E3DCu;
    SET_GPR_U32(ctx, 31, 0x27E3E4u);
    ctx->pc = 0x27E3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E3DCu;
            // 0x27e3e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E3E4u; }
        if (ctx->pc != 0x27E3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E3E4u; }
        if (ctx->pc != 0x27E3E4u) { return; }
    }
    ctx->pc = 0x27E3E4u;
label_27e3e4:
    // 0x27e3e4: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27e3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_27e3e8:
    // 0x27e3e8: 0xc095c58  jal         func_257160
label_27e3ec:
    if (ctx->pc == 0x27E3ECu) {
        ctx->pc = 0x27E3ECu;
            // 0x27e3ec: 0x24844b50  addiu       $a0, $a0, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
        ctx->pc = 0x27E3F0u;
        goto label_27e3f0;
    }
    ctx->pc = 0x27E3E8u;
    SET_GPR_U32(ctx, 31, 0x27E3F0u);
    ctx->pc = 0x27E3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E3E8u;
            // 0x27e3ec: 0x24844b50  addiu       $a0, $a0, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x257160u;
    if (runtime->hasFunction(0x257160u)) {
        auto targetFn = runtime->lookupFunction(0x257160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E3F0u; }
        if (ctx->pc != 0x27E3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__9CCharaPasFv_0x257160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E3F0u; }
        if (ctx->pc != 0x27E3F0u) { return; }
    }
    ctx->pc = 0x27E3F0u;
label_27e3f0:
    // 0x27e3f0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x27e3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_27e3f4:
    // 0x27e3f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27e3f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e3f8:
    // 0x27e3f8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x27e3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27e3fc:
    // 0x27e3fc: 0xc04a234  jal         func_1288D0
label_27e400:
    if (ctx->pc == 0x27E400u) {
        ctx->pc = 0x27E400u;
            // 0x27e400: 0x24a5ceb0  addiu       $a1, $a1, -0x3150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954672));
        ctx->pc = 0x27E404u;
        goto label_27e404;
    }
    ctx->pc = 0x27E3FCu;
    SET_GPR_U32(ctx, 31, 0x27E404u);
    ctx->pc = 0x27E400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E3FCu;
            // 0x27e400: 0x24a5ceb0  addiu       $a1, $a1, -0x3150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E404u; }
        if (ctx->pc != 0x27E404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E404u; }
        if (ctx->pc != 0x27E404u) { return; }
    }
    ctx->pc = 0x27E404u;
label_27e404:
    // 0x27e404: 0xc04a422  jal         func_129088
label_27e408:
    if (ctx->pc == 0x27E408u) {
        ctx->pc = 0x27E408u;
            // 0x27e408: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x27E40Cu;
        goto label_27e40c;
    }
    ctx->pc = 0x27E404u;
    SET_GPR_U32(ctx, 31, 0x27E40Cu);
    ctx->pc = 0x27E408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E404u;
            // 0x27e408: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E40Cu; }
        if (ctx->pc != 0x27E40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E40Cu; }
        if (ctx->pc != 0x27E40Cu) { return; }
    }
    ctx->pc = 0x27E40Cu;
label_27e40c:
    // 0x27e40c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27e40cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e410:
    // 0x27e410: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x27e410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27e414:
    // 0x27e414: 0xc0452d2  jal         func_114B48
label_27e418:
    if (ctx->pc == 0x27E418u) {
        ctx->pc = 0x27E418u;
            // 0x27e418: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E41Cu;
        goto label_27e41c;
    }
    ctx->pc = 0x27E414u;
    SET_GPR_U32(ctx, 31, 0x27E41Cu);
    ctx->pc = 0x27E418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E414u;
            // 0x27e418: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E41Cu; }
        if (ctx->pc != 0x27E41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E41Cu; }
        if (ctx->pc != 0x27E41Cu) { return; }
    }
    ctx->pc = 0x27E41Cu;
label_27e41c:
    // 0x27e41c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_27e420:
    if (ctx->pc == 0x27E420u) {
        ctx->pc = 0x27E420u;
            // 0x27e420: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E424u;
        goto label_27e424;
    }
    ctx->pc = 0x27E41Cu;
    {
        const bool branch_taken_0x27e41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E41Cu;
            // 0x27e420: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e41c) {
            ctx->pc = 0x27E49Cu;
            goto label_27e49c;
        }
    }
    ctx->pc = 0x27E424u;
label_27e424:
    // 0x27e424: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27e424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27e428:
    // 0x27e428: 0x24844b50  addiu       $a0, $a0, 0x4B50
    ctx->pc = 0x27e428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
label_27e42c:
    // 0x27e42c: 0xc095c18  jal         func_257060
label_27e430:
    if (ctx->pc == 0x27E430u) {
        ctx->pc = 0x27E430u;
            // 0x27e430: 0x27a601b0  addiu       $a2, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x27E434u;
        goto label_27e434;
    }
    ctx->pc = 0x27E42Cu;
    SET_GPR_U32(ctx, 31, 0x27E434u);
    ctx->pc = 0x27E430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E42Cu;
            // 0x27e430: 0x27a601b0  addiu       $a2, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x257060u;
    if (runtime->hasFunction(0x257060u)) {
        auto targetFn = runtime->lookupFunction(0x257060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E434u; }
        if (ctx->pc != 0x27E434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaPas__9CCharaPasFiPf_0x257060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E434u; }
        if (ctx->pc != 0x27E434u) { return; }
    }
    ctx->pc = 0x27E434u;
label_27e434:
    // 0x27e434: 0xc0975d8  jal         func_25D760
label_27e438:
    if (ctx->pc == 0x27E438u) {
        ctx->pc = 0x27E438u;
            // 0x27e438: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x27E43Cu;
        goto label_27e43c;
    }
    ctx->pc = 0x27E434u;
    SET_GPR_U32(ctx, 31, 0x27E43Cu);
    ctx->pc = 0x27E438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E434u;
            // 0x27e438: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D760u;
    if (runtime->hasFunction(0x25D760u)) {
        auto targetFn = runtime->lookupFunction(0x25D760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E43Cu; }
        if (ctx->pc != 0x27E43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoordGyaku__FPf_0x25d760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E43Cu; }
        if (ctx->pc != 0x27E43Cu) { return; }
    }
    ctx->pc = 0x27E43Cu;
label_27e43c:
    // 0x27e43c: 0xc0a24f0  jal         func_2893C0
label_27e440:
    if (ctx->pc == 0x27E440u) {
        ctx->pc = 0x27E440u;
            // 0x27e440: 0xc7ac01b0  lwc1        $f12, 0x1B0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x27E444u;
        goto label_27e444;
    }
    ctx->pc = 0x27E43Cu;
    SET_GPR_U32(ctx, 31, 0x27E444u);
    ctx->pc = 0x27E440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E43Cu;
            // 0x27e440: 0xc7ac01b0  lwc1        $f12, 0x1B0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E444u; }
        if (ctx->pc != 0x27E444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E444u; }
        if (ctx->pc != 0x27E444u) { return; }
    }
    ctx->pc = 0x27E444u;
label_27e444:
    // 0x27e444: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27e444u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e448:
    // 0x27e448: 0x27a201b4  addiu       $v0, $sp, 0x1B4
    ctx->pc = 0x27e448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
label_27e44c:
    // 0x27e44c: 0xc0a24f0  jal         func_2893C0
label_27e450:
    if (ctx->pc == 0x27E450u) {
        ctx->pc = 0x27E450u;
            // 0x27e450: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x27E454u;
        goto label_27e454;
    }
    ctx->pc = 0x27E44Cu;
    SET_GPR_U32(ctx, 31, 0x27E454u);
    ctx->pc = 0x27E450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E44Cu;
            // 0x27e450: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E454u; }
        if (ctx->pc != 0x27E454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E454u; }
        if (ctx->pc != 0x27E454u) { return; }
    }
    ctx->pc = 0x27E454u;
label_27e454:
    // 0x27e454: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27e454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e458:
    // 0x27e458: 0x27a201b8  addiu       $v0, $sp, 0x1B8
    ctx->pc = 0x27e458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_27e45c:
    // 0x27e45c: 0xc0a24f0  jal         func_2893C0
label_27e460:
    if (ctx->pc == 0x27E460u) {
        ctx->pc = 0x27E460u;
            // 0x27e460: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x27E464u;
        goto label_27e464;
    }
    ctx->pc = 0x27E45Cu;
    SET_GPR_U32(ctx, 31, 0x27E464u);
    ctx->pc = 0x27E460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E45Cu;
            // 0x27e460: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E464u; }
        if (ctx->pc != 0x27E464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E464u; }
        if (ctx->pc != 0x27E464u) { return; }
    }
    ctx->pc = 0x27E464u;
label_27e464:
    // 0x27e464: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x27e464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_27e468:
    // 0x27e468: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27e468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27e46c:
    // 0x27e46c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x27e46cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27e470:
    // 0x27e470: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x27e470u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e474:
    // 0x27e474: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x27e474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27e478:
    // 0x27e478: 0xc04a234  jal         func_1288D0
label_27e47c:
    if (ctx->pc == 0x27E47Cu) {
        ctx->pc = 0x27E47Cu;
            // 0x27e47c: 0x24a5ced0  addiu       $a1, $a1, -0x3130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954704));
        ctx->pc = 0x27E480u;
        goto label_27e480;
    }
    ctx->pc = 0x27E478u;
    SET_GPR_U32(ctx, 31, 0x27E480u);
    ctx->pc = 0x27E47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E478u;
            // 0x27e47c: 0x24a5ced0  addiu       $a1, $a1, -0x3130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E480u; }
        if (ctx->pc != 0x27E480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E480u; }
        if (ctx->pc != 0x27E480u) { return; }
    }
    ctx->pc = 0x27E480u;
label_27e480:
    // 0x27e480: 0xc04a422  jal         func_129088
label_27e484:
    if (ctx->pc == 0x27E484u) {
        ctx->pc = 0x27E484u;
            // 0x27e484: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x27E488u;
        goto label_27e488;
    }
    ctx->pc = 0x27E480u;
    SET_GPR_U32(ctx, 31, 0x27E488u);
    ctx->pc = 0x27E484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E480u;
            // 0x27e484: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E488u; }
        if (ctx->pc != 0x27E488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E488u; }
        if (ctx->pc != 0x27E488u) { return; }
    }
    ctx->pc = 0x27E488u;
label_27e488:
    // 0x27e488: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27e488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e48c:
    // 0x27e48c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x27e48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27e490:
    // 0x27e490: 0xc0452d2  jal         func_114B48
label_27e494:
    if (ctx->pc == 0x27E494u) {
        ctx->pc = 0x27E494u;
            // 0x27e494: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E498u;
        goto label_27e498;
    }
    ctx->pc = 0x27E490u;
    SET_GPR_U32(ctx, 31, 0x27E498u);
    ctx->pc = 0x27E494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E490u;
            // 0x27e494: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E498u; }
        if (ctx->pc != 0x27E498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E498u; }
        if (ctx->pc != 0x27E498u) { return; }
    }
    ctx->pc = 0x27E498u;
label_27e498:
    // 0x27e498: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27e498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_27e49c:
    // 0x27e49c: 0x0  nop
    ctx->pc = 0x27e49cu;
    // NOP
label_27e4a0:
    // 0x27e4a0: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27e4a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27e4a4:
    // 0x27e4a4: 0x8c224c54  lw          $v0, 0x4C54($at)
    ctx->pc = 0x27e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19540)));
label_27e4a8:
    // 0x27e4a8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x27e4a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27e4ac:
    // 0x27e4ac: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_27e4b0:
    if (ctx->pc == 0x27E4B0u) {
        ctx->pc = 0x27E4B0u;
            // 0x27e4b0: 0x3c0401f0  lui         $a0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
        ctx->pc = 0x27E4B4u;
        goto label_27e4b4;
    }
    ctx->pc = 0x27E4ACu;
    {
        const bool branch_taken_0x27e4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E4ACu;
            // 0x27e4b0: 0x3c0401f0  lui         $a0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e4ac) {
            ctx->pc = 0x27E424u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27e424;
        }
    }
    ctx->pc = 0x27E4B4u;
label_27e4b4:
    // 0x27e4b4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x27e4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_27e4b8:
    // 0x27e4b8: 0xc04a422  jal         func_129088
label_27e4bc:
    if (ctx->pc == 0x27E4BCu) {
        ctx->pc = 0x27E4BCu;
            // 0x27e4bc: 0x2484cf00  addiu       $a0, $a0, -0x3100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954752));
        ctx->pc = 0x27E4C0u;
        goto label_27e4c0;
    }
    ctx->pc = 0x27E4B8u;
    SET_GPR_U32(ctx, 31, 0x27E4C0u);
    ctx->pc = 0x27E4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E4B8u;
            // 0x27e4bc: 0x2484cf00  addiu       $a0, $a0, -0x3100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E4C0u; }
        if (ctx->pc != 0x27E4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E4C0u; }
        if (ctx->pc != 0x27E4C0u) { return; }
    }
    ctx->pc = 0x27E4C0u;
label_27e4c0:
    // 0x27e4c0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x27e4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_27e4c4:
    // 0x27e4c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27e4c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e4c8:
    // 0x27e4c8: 0x24a5cf00  addiu       $a1, $a1, -0x3100
    ctx->pc = 0x27e4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954752));
label_27e4cc:
    // 0x27e4cc: 0xc0452d2  jal         func_114B48
label_27e4d0:
    if (ctx->pc == 0x27E4D0u) {
        ctx->pc = 0x27E4D0u;
            // 0x27e4d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E4D4u;
        goto label_27e4d4;
    }
    ctx->pc = 0x27E4CCu;
    SET_GPR_U32(ctx, 31, 0x27E4D4u);
    ctx->pc = 0x27E4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E4CCu;
            // 0x27e4d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E4D4u; }
        if (ctx->pc != 0x27E4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E4D4u; }
        if (ctx->pc != 0x27E4D4u) { return; }
    }
    ctx->pc = 0x27E4D4u;
label_27e4d4:
    // 0x27e4d4: 0xc045148  jal         func_114520
label_27e4d8:
    if (ctx->pc == 0x27E4D8u) {
        ctx->pc = 0x27E4D8u;
            // 0x27e4d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E4DCu;
        goto label_27e4dc;
    }
    ctx->pc = 0x27E4D4u;
    SET_GPR_U32(ctx, 31, 0x27E4DCu);
    ctx->pc = 0x27E4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E4D4u;
            // 0x27e4d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114520u;
    if (runtime->hasFunction(0x114520u)) {
        auto targetFn = runtime->lookupFunction(0x114520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E4DCu; }
        if (ctx->pc != 0x27E4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x114520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E4DCu; }
        if (ctx->pc != 0x27E4DCu) { return; }
    }
    ctx->pc = 0x27E4DCu;
label_27e4dc:
    // 0x27e4dc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x27e4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_27e4e0:
    // 0x27e4e0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27e4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27e4e4:
    // 0x27e4e4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x27e4e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_27e4e8:
    // 0x27e4e8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x27e4e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27e4ec:
    // 0x27e4ec: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x27e4ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27e4f0:
    // 0x27e4f0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x27e4f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27e4f4:
    // 0x27e4f4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x27e4f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27e4f8:
    // 0x27e4f8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x27e4f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27e4fc:
    // 0x27e4fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27e4fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27e500:
    // 0x27e500: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27e500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27e504:
    // 0x27e504: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27e504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27e508:
    // 0x27e508: 0x3e00008  jr          $ra
label_27e50c:
    if (ctx->pc == 0x27E50Cu) {
        ctx->pc = 0x27E50Cu;
            // 0x27e50c: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = 0x27E510u;
        goto label_fallthrough_0x27e508;
    }
    ctx->pc = 0x27E508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E508u;
            // 0x27e50c: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x27e508:
    ctx->pc = 0x27E510u;
}
