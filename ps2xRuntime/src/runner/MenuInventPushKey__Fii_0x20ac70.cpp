#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuInventPushKey__Fii
// Address: 0x20ac70 - 0x20c194
void MenuInventPushKey__Fii_0x20ac70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuInventPushKey__Fii_0x20ac70");
#endif

    switch (ctx->pc) {
        case 0x20ac70u: goto label_20ac70;
        case 0x20ac74u: goto label_20ac74;
        case 0x20ac78u: goto label_20ac78;
        case 0x20ac7cu: goto label_20ac7c;
        case 0x20ac80u: goto label_20ac80;
        case 0x20ac84u: goto label_20ac84;
        case 0x20ac88u: goto label_20ac88;
        case 0x20ac8cu: goto label_20ac8c;
        case 0x20ac90u: goto label_20ac90;
        case 0x20ac94u: goto label_20ac94;
        case 0x20ac98u: goto label_20ac98;
        case 0x20ac9cu: goto label_20ac9c;
        case 0x20aca0u: goto label_20aca0;
        case 0x20aca4u: goto label_20aca4;
        case 0x20aca8u: goto label_20aca8;
        case 0x20acacu: goto label_20acac;
        case 0x20acb0u: goto label_20acb0;
        case 0x20acb4u: goto label_20acb4;
        case 0x20acb8u: goto label_20acb8;
        case 0x20acbcu: goto label_20acbc;
        case 0x20acc0u: goto label_20acc0;
        case 0x20acc4u: goto label_20acc4;
        case 0x20acc8u: goto label_20acc8;
        case 0x20acccu: goto label_20accc;
        case 0x20acd0u: goto label_20acd0;
        case 0x20acd4u: goto label_20acd4;
        case 0x20acd8u: goto label_20acd8;
        case 0x20acdcu: goto label_20acdc;
        case 0x20ace0u: goto label_20ace0;
        case 0x20ace4u: goto label_20ace4;
        case 0x20ace8u: goto label_20ace8;
        case 0x20acecu: goto label_20acec;
        case 0x20acf0u: goto label_20acf0;
        case 0x20acf4u: goto label_20acf4;
        case 0x20acf8u: goto label_20acf8;
        case 0x20acfcu: goto label_20acfc;
        case 0x20ad00u: goto label_20ad00;
        case 0x20ad04u: goto label_20ad04;
        case 0x20ad08u: goto label_20ad08;
        case 0x20ad0cu: goto label_20ad0c;
        case 0x20ad10u: goto label_20ad10;
        case 0x20ad14u: goto label_20ad14;
        case 0x20ad18u: goto label_20ad18;
        case 0x20ad1cu: goto label_20ad1c;
        case 0x20ad20u: goto label_20ad20;
        case 0x20ad24u: goto label_20ad24;
        case 0x20ad28u: goto label_20ad28;
        case 0x20ad2cu: goto label_20ad2c;
        case 0x20ad30u: goto label_20ad30;
        case 0x20ad34u: goto label_20ad34;
        case 0x20ad38u: goto label_20ad38;
        case 0x20ad3cu: goto label_20ad3c;
        case 0x20ad40u: goto label_20ad40;
        case 0x20ad44u: goto label_20ad44;
        case 0x20ad48u: goto label_20ad48;
        case 0x20ad4cu: goto label_20ad4c;
        case 0x20ad50u: goto label_20ad50;
        case 0x20ad54u: goto label_20ad54;
        case 0x20ad58u: goto label_20ad58;
        case 0x20ad5cu: goto label_20ad5c;
        case 0x20ad60u: goto label_20ad60;
        case 0x20ad64u: goto label_20ad64;
        case 0x20ad68u: goto label_20ad68;
        case 0x20ad6cu: goto label_20ad6c;
        case 0x20ad70u: goto label_20ad70;
        case 0x20ad74u: goto label_20ad74;
        case 0x20ad78u: goto label_20ad78;
        case 0x20ad7cu: goto label_20ad7c;
        case 0x20ad80u: goto label_20ad80;
        case 0x20ad84u: goto label_20ad84;
        case 0x20ad88u: goto label_20ad88;
        case 0x20ad8cu: goto label_20ad8c;
        case 0x20ad90u: goto label_20ad90;
        case 0x20ad94u: goto label_20ad94;
        case 0x20ad98u: goto label_20ad98;
        case 0x20ad9cu: goto label_20ad9c;
        case 0x20ada0u: goto label_20ada0;
        case 0x20ada4u: goto label_20ada4;
        case 0x20ada8u: goto label_20ada8;
        case 0x20adacu: goto label_20adac;
        case 0x20adb0u: goto label_20adb0;
        case 0x20adb4u: goto label_20adb4;
        case 0x20adb8u: goto label_20adb8;
        case 0x20adbcu: goto label_20adbc;
        case 0x20adc0u: goto label_20adc0;
        case 0x20adc4u: goto label_20adc4;
        case 0x20adc8u: goto label_20adc8;
        case 0x20adccu: goto label_20adcc;
        case 0x20add0u: goto label_20add0;
        case 0x20add4u: goto label_20add4;
        case 0x20add8u: goto label_20add8;
        case 0x20addcu: goto label_20addc;
        case 0x20ade0u: goto label_20ade0;
        case 0x20ade4u: goto label_20ade4;
        case 0x20ade8u: goto label_20ade8;
        case 0x20adecu: goto label_20adec;
        case 0x20adf0u: goto label_20adf0;
        case 0x20adf4u: goto label_20adf4;
        case 0x20adf8u: goto label_20adf8;
        case 0x20adfcu: goto label_20adfc;
        case 0x20ae00u: goto label_20ae00;
        case 0x20ae04u: goto label_20ae04;
        case 0x20ae08u: goto label_20ae08;
        case 0x20ae0cu: goto label_20ae0c;
        case 0x20ae10u: goto label_20ae10;
        case 0x20ae14u: goto label_20ae14;
        case 0x20ae18u: goto label_20ae18;
        case 0x20ae1cu: goto label_20ae1c;
        case 0x20ae20u: goto label_20ae20;
        case 0x20ae24u: goto label_20ae24;
        case 0x20ae28u: goto label_20ae28;
        case 0x20ae2cu: goto label_20ae2c;
        case 0x20ae30u: goto label_20ae30;
        case 0x20ae34u: goto label_20ae34;
        case 0x20ae38u: goto label_20ae38;
        case 0x20ae3cu: goto label_20ae3c;
        case 0x20ae40u: goto label_20ae40;
        case 0x20ae44u: goto label_20ae44;
        case 0x20ae48u: goto label_20ae48;
        case 0x20ae4cu: goto label_20ae4c;
        case 0x20ae50u: goto label_20ae50;
        case 0x20ae54u: goto label_20ae54;
        case 0x20ae58u: goto label_20ae58;
        case 0x20ae5cu: goto label_20ae5c;
        case 0x20ae60u: goto label_20ae60;
        case 0x20ae64u: goto label_20ae64;
        case 0x20ae68u: goto label_20ae68;
        case 0x20ae6cu: goto label_20ae6c;
        case 0x20ae70u: goto label_20ae70;
        case 0x20ae74u: goto label_20ae74;
        case 0x20ae78u: goto label_20ae78;
        case 0x20ae7cu: goto label_20ae7c;
        case 0x20ae80u: goto label_20ae80;
        case 0x20ae84u: goto label_20ae84;
        case 0x20ae88u: goto label_20ae88;
        case 0x20ae8cu: goto label_20ae8c;
        case 0x20ae90u: goto label_20ae90;
        case 0x20ae94u: goto label_20ae94;
        case 0x20ae98u: goto label_20ae98;
        case 0x20ae9cu: goto label_20ae9c;
        case 0x20aea0u: goto label_20aea0;
        case 0x20aea4u: goto label_20aea4;
        case 0x20aea8u: goto label_20aea8;
        case 0x20aeacu: goto label_20aeac;
        case 0x20aeb0u: goto label_20aeb0;
        case 0x20aeb4u: goto label_20aeb4;
        case 0x20aeb8u: goto label_20aeb8;
        case 0x20aebcu: goto label_20aebc;
        case 0x20aec0u: goto label_20aec0;
        case 0x20aec4u: goto label_20aec4;
        case 0x20aec8u: goto label_20aec8;
        case 0x20aeccu: goto label_20aecc;
        case 0x20aed0u: goto label_20aed0;
        case 0x20aed4u: goto label_20aed4;
        case 0x20aed8u: goto label_20aed8;
        case 0x20aedcu: goto label_20aedc;
        case 0x20aee0u: goto label_20aee0;
        case 0x20aee4u: goto label_20aee4;
        case 0x20aee8u: goto label_20aee8;
        case 0x20aeecu: goto label_20aeec;
        case 0x20aef0u: goto label_20aef0;
        case 0x20aef4u: goto label_20aef4;
        case 0x20aef8u: goto label_20aef8;
        case 0x20aefcu: goto label_20aefc;
        case 0x20af00u: goto label_20af00;
        case 0x20af04u: goto label_20af04;
        case 0x20af08u: goto label_20af08;
        case 0x20af0cu: goto label_20af0c;
        case 0x20af10u: goto label_20af10;
        case 0x20af14u: goto label_20af14;
        case 0x20af18u: goto label_20af18;
        case 0x20af1cu: goto label_20af1c;
        case 0x20af20u: goto label_20af20;
        case 0x20af24u: goto label_20af24;
        case 0x20af28u: goto label_20af28;
        case 0x20af2cu: goto label_20af2c;
        case 0x20af30u: goto label_20af30;
        case 0x20af34u: goto label_20af34;
        case 0x20af38u: goto label_20af38;
        case 0x20af3cu: goto label_20af3c;
        case 0x20af40u: goto label_20af40;
        case 0x20af44u: goto label_20af44;
        case 0x20af48u: goto label_20af48;
        case 0x20af4cu: goto label_20af4c;
        case 0x20af50u: goto label_20af50;
        case 0x20af54u: goto label_20af54;
        case 0x20af58u: goto label_20af58;
        case 0x20af5cu: goto label_20af5c;
        case 0x20af60u: goto label_20af60;
        case 0x20af64u: goto label_20af64;
        case 0x20af68u: goto label_20af68;
        case 0x20af6cu: goto label_20af6c;
        case 0x20af70u: goto label_20af70;
        case 0x20af74u: goto label_20af74;
        case 0x20af78u: goto label_20af78;
        case 0x20af7cu: goto label_20af7c;
        case 0x20af80u: goto label_20af80;
        case 0x20af84u: goto label_20af84;
        case 0x20af88u: goto label_20af88;
        case 0x20af8cu: goto label_20af8c;
        case 0x20af90u: goto label_20af90;
        case 0x20af94u: goto label_20af94;
        case 0x20af98u: goto label_20af98;
        case 0x20af9cu: goto label_20af9c;
        case 0x20afa0u: goto label_20afa0;
        case 0x20afa4u: goto label_20afa4;
        case 0x20afa8u: goto label_20afa8;
        case 0x20afacu: goto label_20afac;
        case 0x20afb0u: goto label_20afb0;
        case 0x20afb4u: goto label_20afb4;
        case 0x20afb8u: goto label_20afb8;
        case 0x20afbcu: goto label_20afbc;
        case 0x20afc0u: goto label_20afc0;
        case 0x20afc4u: goto label_20afc4;
        case 0x20afc8u: goto label_20afc8;
        case 0x20afccu: goto label_20afcc;
        case 0x20afd0u: goto label_20afd0;
        case 0x20afd4u: goto label_20afd4;
        case 0x20afd8u: goto label_20afd8;
        case 0x20afdcu: goto label_20afdc;
        case 0x20afe0u: goto label_20afe0;
        case 0x20afe4u: goto label_20afe4;
        case 0x20afe8u: goto label_20afe8;
        case 0x20afecu: goto label_20afec;
        case 0x20aff0u: goto label_20aff0;
        case 0x20aff4u: goto label_20aff4;
        case 0x20aff8u: goto label_20aff8;
        case 0x20affcu: goto label_20affc;
        case 0x20b000u: goto label_20b000;
        case 0x20b004u: goto label_20b004;
        case 0x20b008u: goto label_20b008;
        case 0x20b00cu: goto label_20b00c;
        case 0x20b010u: goto label_20b010;
        case 0x20b014u: goto label_20b014;
        case 0x20b018u: goto label_20b018;
        case 0x20b01cu: goto label_20b01c;
        case 0x20b020u: goto label_20b020;
        case 0x20b024u: goto label_20b024;
        case 0x20b028u: goto label_20b028;
        case 0x20b02cu: goto label_20b02c;
        case 0x20b030u: goto label_20b030;
        case 0x20b034u: goto label_20b034;
        case 0x20b038u: goto label_20b038;
        case 0x20b03cu: goto label_20b03c;
        case 0x20b040u: goto label_20b040;
        case 0x20b044u: goto label_20b044;
        case 0x20b048u: goto label_20b048;
        case 0x20b04cu: goto label_20b04c;
        case 0x20b050u: goto label_20b050;
        case 0x20b054u: goto label_20b054;
        case 0x20b058u: goto label_20b058;
        case 0x20b05cu: goto label_20b05c;
        case 0x20b060u: goto label_20b060;
        case 0x20b064u: goto label_20b064;
        case 0x20b068u: goto label_20b068;
        case 0x20b06cu: goto label_20b06c;
        case 0x20b070u: goto label_20b070;
        case 0x20b074u: goto label_20b074;
        case 0x20b078u: goto label_20b078;
        case 0x20b07cu: goto label_20b07c;
        case 0x20b080u: goto label_20b080;
        case 0x20b084u: goto label_20b084;
        case 0x20b088u: goto label_20b088;
        case 0x20b08cu: goto label_20b08c;
        case 0x20b090u: goto label_20b090;
        case 0x20b094u: goto label_20b094;
        case 0x20b098u: goto label_20b098;
        case 0x20b09cu: goto label_20b09c;
        case 0x20b0a0u: goto label_20b0a0;
        case 0x20b0a4u: goto label_20b0a4;
        case 0x20b0a8u: goto label_20b0a8;
        case 0x20b0acu: goto label_20b0ac;
        case 0x20b0b0u: goto label_20b0b0;
        case 0x20b0b4u: goto label_20b0b4;
        case 0x20b0b8u: goto label_20b0b8;
        case 0x20b0bcu: goto label_20b0bc;
        case 0x20b0c0u: goto label_20b0c0;
        case 0x20b0c4u: goto label_20b0c4;
        case 0x20b0c8u: goto label_20b0c8;
        case 0x20b0ccu: goto label_20b0cc;
        case 0x20b0d0u: goto label_20b0d0;
        case 0x20b0d4u: goto label_20b0d4;
        case 0x20b0d8u: goto label_20b0d8;
        case 0x20b0dcu: goto label_20b0dc;
        case 0x20b0e0u: goto label_20b0e0;
        case 0x20b0e4u: goto label_20b0e4;
        case 0x20b0e8u: goto label_20b0e8;
        case 0x20b0ecu: goto label_20b0ec;
        case 0x20b0f0u: goto label_20b0f0;
        case 0x20b0f4u: goto label_20b0f4;
        case 0x20b0f8u: goto label_20b0f8;
        case 0x20b0fcu: goto label_20b0fc;
        case 0x20b100u: goto label_20b100;
        case 0x20b104u: goto label_20b104;
        case 0x20b108u: goto label_20b108;
        case 0x20b10cu: goto label_20b10c;
        case 0x20b110u: goto label_20b110;
        case 0x20b114u: goto label_20b114;
        case 0x20b118u: goto label_20b118;
        case 0x20b11cu: goto label_20b11c;
        case 0x20b120u: goto label_20b120;
        case 0x20b124u: goto label_20b124;
        case 0x20b128u: goto label_20b128;
        case 0x20b12cu: goto label_20b12c;
        case 0x20b130u: goto label_20b130;
        case 0x20b134u: goto label_20b134;
        case 0x20b138u: goto label_20b138;
        case 0x20b13cu: goto label_20b13c;
        case 0x20b140u: goto label_20b140;
        case 0x20b144u: goto label_20b144;
        case 0x20b148u: goto label_20b148;
        case 0x20b14cu: goto label_20b14c;
        case 0x20b150u: goto label_20b150;
        case 0x20b154u: goto label_20b154;
        case 0x20b158u: goto label_20b158;
        case 0x20b15cu: goto label_20b15c;
        case 0x20b160u: goto label_20b160;
        case 0x20b164u: goto label_20b164;
        case 0x20b168u: goto label_20b168;
        case 0x20b16cu: goto label_20b16c;
        case 0x20b170u: goto label_20b170;
        case 0x20b174u: goto label_20b174;
        case 0x20b178u: goto label_20b178;
        case 0x20b17cu: goto label_20b17c;
        case 0x20b180u: goto label_20b180;
        case 0x20b184u: goto label_20b184;
        case 0x20b188u: goto label_20b188;
        case 0x20b18cu: goto label_20b18c;
        case 0x20b190u: goto label_20b190;
        case 0x20b194u: goto label_20b194;
        case 0x20b198u: goto label_20b198;
        case 0x20b19cu: goto label_20b19c;
        case 0x20b1a0u: goto label_20b1a0;
        case 0x20b1a4u: goto label_20b1a4;
        case 0x20b1a8u: goto label_20b1a8;
        case 0x20b1acu: goto label_20b1ac;
        case 0x20b1b0u: goto label_20b1b0;
        case 0x20b1b4u: goto label_20b1b4;
        case 0x20b1b8u: goto label_20b1b8;
        case 0x20b1bcu: goto label_20b1bc;
        case 0x20b1c0u: goto label_20b1c0;
        case 0x20b1c4u: goto label_20b1c4;
        case 0x20b1c8u: goto label_20b1c8;
        case 0x20b1ccu: goto label_20b1cc;
        case 0x20b1d0u: goto label_20b1d0;
        case 0x20b1d4u: goto label_20b1d4;
        case 0x20b1d8u: goto label_20b1d8;
        case 0x20b1dcu: goto label_20b1dc;
        case 0x20b1e0u: goto label_20b1e0;
        case 0x20b1e4u: goto label_20b1e4;
        case 0x20b1e8u: goto label_20b1e8;
        case 0x20b1ecu: goto label_20b1ec;
        case 0x20b1f0u: goto label_20b1f0;
        case 0x20b1f4u: goto label_20b1f4;
        case 0x20b1f8u: goto label_20b1f8;
        case 0x20b1fcu: goto label_20b1fc;
        case 0x20b200u: goto label_20b200;
        case 0x20b204u: goto label_20b204;
        case 0x20b208u: goto label_20b208;
        case 0x20b20cu: goto label_20b20c;
        case 0x20b210u: goto label_20b210;
        case 0x20b214u: goto label_20b214;
        case 0x20b218u: goto label_20b218;
        case 0x20b21cu: goto label_20b21c;
        case 0x20b220u: goto label_20b220;
        case 0x20b224u: goto label_20b224;
        case 0x20b228u: goto label_20b228;
        case 0x20b22cu: goto label_20b22c;
        case 0x20b230u: goto label_20b230;
        case 0x20b234u: goto label_20b234;
        case 0x20b238u: goto label_20b238;
        case 0x20b23cu: goto label_20b23c;
        case 0x20b240u: goto label_20b240;
        case 0x20b244u: goto label_20b244;
        case 0x20b248u: goto label_20b248;
        case 0x20b24cu: goto label_20b24c;
        case 0x20b250u: goto label_20b250;
        case 0x20b254u: goto label_20b254;
        case 0x20b258u: goto label_20b258;
        case 0x20b25cu: goto label_20b25c;
        case 0x20b260u: goto label_20b260;
        case 0x20b264u: goto label_20b264;
        case 0x20b268u: goto label_20b268;
        case 0x20b26cu: goto label_20b26c;
        case 0x20b270u: goto label_20b270;
        case 0x20b274u: goto label_20b274;
        case 0x20b278u: goto label_20b278;
        case 0x20b27cu: goto label_20b27c;
        case 0x20b280u: goto label_20b280;
        case 0x20b284u: goto label_20b284;
        case 0x20b288u: goto label_20b288;
        case 0x20b28cu: goto label_20b28c;
        case 0x20b290u: goto label_20b290;
        case 0x20b294u: goto label_20b294;
        case 0x20b298u: goto label_20b298;
        case 0x20b29cu: goto label_20b29c;
        case 0x20b2a0u: goto label_20b2a0;
        case 0x20b2a4u: goto label_20b2a4;
        case 0x20b2a8u: goto label_20b2a8;
        case 0x20b2acu: goto label_20b2ac;
        case 0x20b2b0u: goto label_20b2b0;
        case 0x20b2b4u: goto label_20b2b4;
        case 0x20b2b8u: goto label_20b2b8;
        case 0x20b2bcu: goto label_20b2bc;
        case 0x20b2c0u: goto label_20b2c0;
        case 0x20b2c4u: goto label_20b2c4;
        case 0x20b2c8u: goto label_20b2c8;
        case 0x20b2ccu: goto label_20b2cc;
        case 0x20b2d0u: goto label_20b2d0;
        case 0x20b2d4u: goto label_20b2d4;
        case 0x20b2d8u: goto label_20b2d8;
        case 0x20b2dcu: goto label_20b2dc;
        case 0x20b2e0u: goto label_20b2e0;
        case 0x20b2e4u: goto label_20b2e4;
        case 0x20b2e8u: goto label_20b2e8;
        case 0x20b2ecu: goto label_20b2ec;
        case 0x20b2f0u: goto label_20b2f0;
        case 0x20b2f4u: goto label_20b2f4;
        case 0x20b2f8u: goto label_20b2f8;
        case 0x20b2fcu: goto label_20b2fc;
        case 0x20b300u: goto label_20b300;
        case 0x20b304u: goto label_20b304;
        case 0x20b308u: goto label_20b308;
        case 0x20b30cu: goto label_20b30c;
        case 0x20b310u: goto label_20b310;
        case 0x20b314u: goto label_20b314;
        case 0x20b318u: goto label_20b318;
        case 0x20b31cu: goto label_20b31c;
        case 0x20b320u: goto label_20b320;
        case 0x20b324u: goto label_20b324;
        case 0x20b328u: goto label_20b328;
        case 0x20b32cu: goto label_20b32c;
        case 0x20b330u: goto label_20b330;
        case 0x20b334u: goto label_20b334;
        case 0x20b338u: goto label_20b338;
        case 0x20b33cu: goto label_20b33c;
        case 0x20b340u: goto label_20b340;
        case 0x20b344u: goto label_20b344;
        case 0x20b348u: goto label_20b348;
        case 0x20b34cu: goto label_20b34c;
        case 0x20b350u: goto label_20b350;
        case 0x20b354u: goto label_20b354;
        case 0x20b358u: goto label_20b358;
        case 0x20b35cu: goto label_20b35c;
        case 0x20b360u: goto label_20b360;
        case 0x20b364u: goto label_20b364;
        case 0x20b368u: goto label_20b368;
        case 0x20b36cu: goto label_20b36c;
        case 0x20b370u: goto label_20b370;
        case 0x20b374u: goto label_20b374;
        case 0x20b378u: goto label_20b378;
        case 0x20b37cu: goto label_20b37c;
        case 0x20b380u: goto label_20b380;
        case 0x20b384u: goto label_20b384;
        case 0x20b388u: goto label_20b388;
        case 0x20b38cu: goto label_20b38c;
        case 0x20b390u: goto label_20b390;
        case 0x20b394u: goto label_20b394;
        case 0x20b398u: goto label_20b398;
        case 0x20b39cu: goto label_20b39c;
        case 0x20b3a0u: goto label_20b3a0;
        case 0x20b3a4u: goto label_20b3a4;
        case 0x20b3a8u: goto label_20b3a8;
        case 0x20b3acu: goto label_20b3ac;
        case 0x20b3b0u: goto label_20b3b0;
        case 0x20b3b4u: goto label_20b3b4;
        case 0x20b3b8u: goto label_20b3b8;
        case 0x20b3bcu: goto label_20b3bc;
        case 0x20b3c0u: goto label_20b3c0;
        case 0x20b3c4u: goto label_20b3c4;
        case 0x20b3c8u: goto label_20b3c8;
        case 0x20b3ccu: goto label_20b3cc;
        case 0x20b3d0u: goto label_20b3d0;
        case 0x20b3d4u: goto label_20b3d4;
        case 0x20b3d8u: goto label_20b3d8;
        case 0x20b3dcu: goto label_20b3dc;
        case 0x20b3e0u: goto label_20b3e0;
        case 0x20b3e4u: goto label_20b3e4;
        case 0x20b3e8u: goto label_20b3e8;
        case 0x20b3ecu: goto label_20b3ec;
        case 0x20b3f0u: goto label_20b3f0;
        case 0x20b3f4u: goto label_20b3f4;
        case 0x20b3f8u: goto label_20b3f8;
        case 0x20b3fcu: goto label_20b3fc;
        case 0x20b400u: goto label_20b400;
        case 0x20b404u: goto label_20b404;
        case 0x20b408u: goto label_20b408;
        case 0x20b40cu: goto label_20b40c;
        case 0x20b410u: goto label_20b410;
        case 0x20b414u: goto label_20b414;
        case 0x20b418u: goto label_20b418;
        case 0x20b41cu: goto label_20b41c;
        case 0x20b420u: goto label_20b420;
        case 0x20b424u: goto label_20b424;
        case 0x20b428u: goto label_20b428;
        case 0x20b42cu: goto label_20b42c;
        case 0x20b430u: goto label_20b430;
        case 0x20b434u: goto label_20b434;
        case 0x20b438u: goto label_20b438;
        case 0x20b43cu: goto label_20b43c;
        case 0x20b440u: goto label_20b440;
        case 0x20b444u: goto label_20b444;
        case 0x20b448u: goto label_20b448;
        case 0x20b44cu: goto label_20b44c;
        case 0x20b450u: goto label_20b450;
        case 0x20b454u: goto label_20b454;
        case 0x20b458u: goto label_20b458;
        case 0x20b45cu: goto label_20b45c;
        case 0x20b460u: goto label_20b460;
        case 0x20b464u: goto label_20b464;
        case 0x20b468u: goto label_20b468;
        case 0x20b46cu: goto label_20b46c;
        case 0x20b470u: goto label_20b470;
        case 0x20b474u: goto label_20b474;
        case 0x20b478u: goto label_20b478;
        case 0x20b47cu: goto label_20b47c;
        case 0x20b480u: goto label_20b480;
        case 0x20b484u: goto label_20b484;
        case 0x20b488u: goto label_20b488;
        case 0x20b48cu: goto label_20b48c;
        case 0x20b490u: goto label_20b490;
        case 0x20b494u: goto label_20b494;
        case 0x20b498u: goto label_20b498;
        case 0x20b49cu: goto label_20b49c;
        case 0x20b4a0u: goto label_20b4a0;
        case 0x20b4a4u: goto label_20b4a4;
        case 0x20b4a8u: goto label_20b4a8;
        case 0x20b4acu: goto label_20b4ac;
        case 0x20b4b0u: goto label_20b4b0;
        case 0x20b4b4u: goto label_20b4b4;
        case 0x20b4b8u: goto label_20b4b8;
        case 0x20b4bcu: goto label_20b4bc;
        case 0x20b4c0u: goto label_20b4c0;
        case 0x20b4c4u: goto label_20b4c4;
        case 0x20b4c8u: goto label_20b4c8;
        case 0x20b4ccu: goto label_20b4cc;
        case 0x20b4d0u: goto label_20b4d0;
        case 0x20b4d4u: goto label_20b4d4;
        case 0x20b4d8u: goto label_20b4d8;
        case 0x20b4dcu: goto label_20b4dc;
        case 0x20b4e0u: goto label_20b4e0;
        case 0x20b4e4u: goto label_20b4e4;
        case 0x20b4e8u: goto label_20b4e8;
        case 0x20b4ecu: goto label_20b4ec;
        case 0x20b4f0u: goto label_20b4f0;
        case 0x20b4f4u: goto label_20b4f4;
        case 0x20b4f8u: goto label_20b4f8;
        case 0x20b4fcu: goto label_20b4fc;
        case 0x20b500u: goto label_20b500;
        case 0x20b504u: goto label_20b504;
        case 0x20b508u: goto label_20b508;
        case 0x20b50cu: goto label_20b50c;
        case 0x20b510u: goto label_20b510;
        case 0x20b514u: goto label_20b514;
        case 0x20b518u: goto label_20b518;
        case 0x20b51cu: goto label_20b51c;
        case 0x20b520u: goto label_20b520;
        case 0x20b524u: goto label_20b524;
        case 0x20b528u: goto label_20b528;
        case 0x20b52cu: goto label_20b52c;
        case 0x20b530u: goto label_20b530;
        case 0x20b534u: goto label_20b534;
        case 0x20b538u: goto label_20b538;
        case 0x20b53cu: goto label_20b53c;
        case 0x20b540u: goto label_20b540;
        case 0x20b544u: goto label_20b544;
        case 0x20b548u: goto label_20b548;
        case 0x20b54cu: goto label_20b54c;
        case 0x20b550u: goto label_20b550;
        case 0x20b554u: goto label_20b554;
        case 0x20b558u: goto label_20b558;
        case 0x20b55cu: goto label_20b55c;
        case 0x20b560u: goto label_20b560;
        case 0x20b564u: goto label_20b564;
        case 0x20b568u: goto label_20b568;
        case 0x20b56cu: goto label_20b56c;
        case 0x20b570u: goto label_20b570;
        case 0x20b574u: goto label_20b574;
        case 0x20b578u: goto label_20b578;
        case 0x20b57cu: goto label_20b57c;
        case 0x20b580u: goto label_20b580;
        case 0x20b584u: goto label_20b584;
        case 0x20b588u: goto label_20b588;
        case 0x20b58cu: goto label_20b58c;
        case 0x20b590u: goto label_20b590;
        case 0x20b594u: goto label_20b594;
        case 0x20b598u: goto label_20b598;
        case 0x20b59cu: goto label_20b59c;
        case 0x20b5a0u: goto label_20b5a0;
        case 0x20b5a4u: goto label_20b5a4;
        case 0x20b5a8u: goto label_20b5a8;
        case 0x20b5acu: goto label_20b5ac;
        case 0x20b5b0u: goto label_20b5b0;
        case 0x20b5b4u: goto label_20b5b4;
        case 0x20b5b8u: goto label_20b5b8;
        case 0x20b5bcu: goto label_20b5bc;
        case 0x20b5c0u: goto label_20b5c0;
        case 0x20b5c4u: goto label_20b5c4;
        case 0x20b5c8u: goto label_20b5c8;
        case 0x20b5ccu: goto label_20b5cc;
        case 0x20b5d0u: goto label_20b5d0;
        case 0x20b5d4u: goto label_20b5d4;
        case 0x20b5d8u: goto label_20b5d8;
        case 0x20b5dcu: goto label_20b5dc;
        case 0x20b5e0u: goto label_20b5e0;
        case 0x20b5e4u: goto label_20b5e4;
        case 0x20b5e8u: goto label_20b5e8;
        case 0x20b5ecu: goto label_20b5ec;
        case 0x20b5f0u: goto label_20b5f0;
        case 0x20b5f4u: goto label_20b5f4;
        case 0x20b5f8u: goto label_20b5f8;
        case 0x20b5fcu: goto label_20b5fc;
        case 0x20b600u: goto label_20b600;
        case 0x20b604u: goto label_20b604;
        case 0x20b608u: goto label_20b608;
        case 0x20b60cu: goto label_20b60c;
        case 0x20b610u: goto label_20b610;
        case 0x20b614u: goto label_20b614;
        case 0x20b618u: goto label_20b618;
        case 0x20b61cu: goto label_20b61c;
        case 0x20b620u: goto label_20b620;
        case 0x20b624u: goto label_20b624;
        case 0x20b628u: goto label_20b628;
        case 0x20b62cu: goto label_20b62c;
        case 0x20b630u: goto label_20b630;
        case 0x20b634u: goto label_20b634;
        case 0x20b638u: goto label_20b638;
        case 0x20b63cu: goto label_20b63c;
        case 0x20b640u: goto label_20b640;
        case 0x20b644u: goto label_20b644;
        case 0x20b648u: goto label_20b648;
        case 0x20b64cu: goto label_20b64c;
        case 0x20b650u: goto label_20b650;
        case 0x20b654u: goto label_20b654;
        case 0x20b658u: goto label_20b658;
        case 0x20b65cu: goto label_20b65c;
        case 0x20b660u: goto label_20b660;
        case 0x20b664u: goto label_20b664;
        case 0x20b668u: goto label_20b668;
        case 0x20b66cu: goto label_20b66c;
        case 0x20b670u: goto label_20b670;
        case 0x20b674u: goto label_20b674;
        case 0x20b678u: goto label_20b678;
        case 0x20b67cu: goto label_20b67c;
        case 0x20b680u: goto label_20b680;
        case 0x20b684u: goto label_20b684;
        case 0x20b688u: goto label_20b688;
        case 0x20b68cu: goto label_20b68c;
        case 0x20b690u: goto label_20b690;
        case 0x20b694u: goto label_20b694;
        case 0x20b698u: goto label_20b698;
        case 0x20b69cu: goto label_20b69c;
        case 0x20b6a0u: goto label_20b6a0;
        case 0x20b6a4u: goto label_20b6a4;
        case 0x20b6a8u: goto label_20b6a8;
        case 0x20b6acu: goto label_20b6ac;
        case 0x20b6b0u: goto label_20b6b0;
        case 0x20b6b4u: goto label_20b6b4;
        case 0x20b6b8u: goto label_20b6b8;
        case 0x20b6bcu: goto label_20b6bc;
        case 0x20b6c0u: goto label_20b6c0;
        case 0x20b6c4u: goto label_20b6c4;
        case 0x20b6c8u: goto label_20b6c8;
        case 0x20b6ccu: goto label_20b6cc;
        case 0x20b6d0u: goto label_20b6d0;
        case 0x20b6d4u: goto label_20b6d4;
        case 0x20b6d8u: goto label_20b6d8;
        case 0x20b6dcu: goto label_20b6dc;
        case 0x20b6e0u: goto label_20b6e0;
        case 0x20b6e4u: goto label_20b6e4;
        case 0x20b6e8u: goto label_20b6e8;
        case 0x20b6ecu: goto label_20b6ec;
        case 0x20b6f0u: goto label_20b6f0;
        case 0x20b6f4u: goto label_20b6f4;
        case 0x20b6f8u: goto label_20b6f8;
        case 0x20b6fcu: goto label_20b6fc;
        case 0x20b700u: goto label_20b700;
        case 0x20b704u: goto label_20b704;
        case 0x20b708u: goto label_20b708;
        case 0x20b70cu: goto label_20b70c;
        case 0x20b710u: goto label_20b710;
        case 0x20b714u: goto label_20b714;
        case 0x20b718u: goto label_20b718;
        case 0x20b71cu: goto label_20b71c;
        case 0x20b720u: goto label_20b720;
        case 0x20b724u: goto label_20b724;
        case 0x20b728u: goto label_20b728;
        case 0x20b72cu: goto label_20b72c;
        case 0x20b730u: goto label_20b730;
        case 0x20b734u: goto label_20b734;
        case 0x20b738u: goto label_20b738;
        case 0x20b73cu: goto label_20b73c;
        case 0x20b740u: goto label_20b740;
        case 0x20b744u: goto label_20b744;
        case 0x20b748u: goto label_20b748;
        case 0x20b74cu: goto label_20b74c;
        case 0x20b750u: goto label_20b750;
        case 0x20b754u: goto label_20b754;
        case 0x20b758u: goto label_20b758;
        case 0x20b75cu: goto label_20b75c;
        case 0x20b760u: goto label_20b760;
        case 0x20b764u: goto label_20b764;
        case 0x20b768u: goto label_20b768;
        case 0x20b76cu: goto label_20b76c;
        case 0x20b770u: goto label_20b770;
        case 0x20b774u: goto label_20b774;
        case 0x20b778u: goto label_20b778;
        case 0x20b77cu: goto label_20b77c;
        case 0x20b780u: goto label_20b780;
        case 0x20b784u: goto label_20b784;
        case 0x20b788u: goto label_20b788;
        case 0x20b78cu: goto label_20b78c;
        case 0x20b790u: goto label_20b790;
        case 0x20b794u: goto label_20b794;
        case 0x20b798u: goto label_20b798;
        case 0x20b79cu: goto label_20b79c;
        case 0x20b7a0u: goto label_20b7a0;
        case 0x20b7a4u: goto label_20b7a4;
        case 0x20b7a8u: goto label_20b7a8;
        case 0x20b7acu: goto label_20b7ac;
        case 0x20b7b0u: goto label_20b7b0;
        case 0x20b7b4u: goto label_20b7b4;
        case 0x20b7b8u: goto label_20b7b8;
        case 0x20b7bcu: goto label_20b7bc;
        case 0x20b7c0u: goto label_20b7c0;
        case 0x20b7c4u: goto label_20b7c4;
        case 0x20b7c8u: goto label_20b7c8;
        case 0x20b7ccu: goto label_20b7cc;
        case 0x20b7d0u: goto label_20b7d0;
        case 0x20b7d4u: goto label_20b7d4;
        case 0x20b7d8u: goto label_20b7d8;
        case 0x20b7dcu: goto label_20b7dc;
        case 0x20b7e0u: goto label_20b7e0;
        case 0x20b7e4u: goto label_20b7e4;
        case 0x20b7e8u: goto label_20b7e8;
        case 0x20b7ecu: goto label_20b7ec;
        case 0x20b7f0u: goto label_20b7f0;
        case 0x20b7f4u: goto label_20b7f4;
        case 0x20b7f8u: goto label_20b7f8;
        case 0x20b7fcu: goto label_20b7fc;
        case 0x20b800u: goto label_20b800;
        case 0x20b804u: goto label_20b804;
        case 0x20b808u: goto label_20b808;
        case 0x20b80cu: goto label_20b80c;
        case 0x20b810u: goto label_20b810;
        case 0x20b814u: goto label_20b814;
        case 0x20b818u: goto label_20b818;
        case 0x20b81cu: goto label_20b81c;
        case 0x20b820u: goto label_20b820;
        case 0x20b824u: goto label_20b824;
        case 0x20b828u: goto label_20b828;
        case 0x20b82cu: goto label_20b82c;
        case 0x20b830u: goto label_20b830;
        case 0x20b834u: goto label_20b834;
        case 0x20b838u: goto label_20b838;
        case 0x20b83cu: goto label_20b83c;
        case 0x20b840u: goto label_20b840;
        case 0x20b844u: goto label_20b844;
        case 0x20b848u: goto label_20b848;
        case 0x20b84cu: goto label_20b84c;
        case 0x20b850u: goto label_20b850;
        case 0x20b854u: goto label_20b854;
        case 0x20b858u: goto label_20b858;
        case 0x20b85cu: goto label_20b85c;
        case 0x20b860u: goto label_20b860;
        case 0x20b864u: goto label_20b864;
        case 0x20b868u: goto label_20b868;
        case 0x20b86cu: goto label_20b86c;
        case 0x20b870u: goto label_20b870;
        case 0x20b874u: goto label_20b874;
        case 0x20b878u: goto label_20b878;
        case 0x20b87cu: goto label_20b87c;
        case 0x20b880u: goto label_20b880;
        case 0x20b884u: goto label_20b884;
        case 0x20b888u: goto label_20b888;
        case 0x20b88cu: goto label_20b88c;
        case 0x20b890u: goto label_20b890;
        case 0x20b894u: goto label_20b894;
        case 0x20b898u: goto label_20b898;
        case 0x20b89cu: goto label_20b89c;
        case 0x20b8a0u: goto label_20b8a0;
        case 0x20b8a4u: goto label_20b8a4;
        case 0x20b8a8u: goto label_20b8a8;
        case 0x20b8acu: goto label_20b8ac;
        case 0x20b8b0u: goto label_20b8b0;
        case 0x20b8b4u: goto label_20b8b4;
        case 0x20b8b8u: goto label_20b8b8;
        case 0x20b8bcu: goto label_20b8bc;
        case 0x20b8c0u: goto label_20b8c0;
        case 0x20b8c4u: goto label_20b8c4;
        case 0x20b8c8u: goto label_20b8c8;
        case 0x20b8ccu: goto label_20b8cc;
        case 0x20b8d0u: goto label_20b8d0;
        case 0x20b8d4u: goto label_20b8d4;
        case 0x20b8d8u: goto label_20b8d8;
        case 0x20b8dcu: goto label_20b8dc;
        case 0x20b8e0u: goto label_20b8e0;
        case 0x20b8e4u: goto label_20b8e4;
        case 0x20b8e8u: goto label_20b8e8;
        case 0x20b8ecu: goto label_20b8ec;
        case 0x20b8f0u: goto label_20b8f0;
        case 0x20b8f4u: goto label_20b8f4;
        case 0x20b8f8u: goto label_20b8f8;
        case 0x20b8fcu: goto label_20b8fc;
        case 0x20b900u: goto label_20b900;
        case 0x20b904u: goto label_20b904;
        case 0x20b908u: goto label_20b908;
        case 0x20b90cu: goto label_20b90c;
        case 0x20b910u: goto label_20b910;
        case 0x20b914u: goto label_20b914;
        case 0x20b918u: goto label_20b918;
        case 0x20b91cu: goto label_20b91c;
        case 0x20b920u: goto label_20b920;
        case 0x20b924u: goto label_20b924;
        case 0x20b928u: goto label_20b928;
        case 0x20b92cu: goto label_20b92c;
        case 0x20b930u: goto label_20b930;
        case 0x20b934u: goto label_20b934;
        case 0x20b938u: goto label_20b938;
        case 0x20b93cu: goto label_20b93c;
        case 0x20b940u: goto label_20b940;
        case 0x20b944u: goto label_20b944;
        case 0x20b948u: goto label_20b948;
        case 0x20b94cu: goto label_20b94c;
        case 0x20b950u: goto label_20b950;
        case 0x20b954u: goto label_20b954;
        case 0x20b958u: goto label_20b958;
        case 0x20b95cu: goto label_20b95c;
        case 0x20b960u: goto label_20b960;
        case 0x20b964u: goto label_20b964;
        case 0x20b968u: goto label_20b968;
        case 0x20b96cu: goto label_20b96c;
        case 0x20b970u: goto label_20b970;
        case 0x20b974u: goto label_20b974;
        case 0x20b978u: goto label_20b978;
        case 0x20b97cu: goto label_20b97c;
        case 0x20b980u: goto label_20b980;
        case 0x20b984u: goto label_20b984;
        case 0x20b988u: goto label_20b988;
        case 0x20b98cu: goto label_20b98c;
        case 0x20b990u: goto label_20b990;
        case 0x20b994u: goto label_20b994;
        case 0x20b998u: goto label_20b998;
        case 0x20b99cu: goto label_20b99c;
        case 0x20b9a0u: goto label_20b9a0;
        case 0x20b9a4u: goto label_20b9a4;
        case 0x20b9a8u: goto label_20b9a8;
        case 0x20b9acu: goto label_20b9ac;
        case 0x20b9b0u: goto label_20b9b0;
        case 0x20b9b4u: goto label_20b9b4;
        case 0x20b9b8u: goto label_20b9b8;
        case 0x20b9bcu: goto label_20b9bc;
        case 0x20b9c0u: goto label_20b9c0;
        case 0x20b9c4u: goto label_20b9c4;
        case 0x20b9c8u: goto label_20b9c8;
        case 0x20b9ccu: goto label_20b9cc;
        case 0x20b9d0u: goto label_20b9d0;
        case 0x20b9d4u: goto label_20b9d4;
        case 0x20b9d8u: goto label_20b9d8;
        case 0x20b9dcu: goto label_20b9dc;
        case 0x20b9e0u: goto label_20b9e0;
        case 0x20b9e4u: goto label_20b9e4;
        case 0x20b9e8u: goto label_20b9e8;
        case 0x20b9ecu: goto label_20b9ec;
        case 0x20b9f0u: goto label_20b9f0;
        case 0x20b9f4u: goto label_20b9f4;
        case 0x20b9f8u: goto label_20b9f8;
        case 0x20b9fcu: goto label_20b9fc;
        case 0x20ba00u: goto label_20ba00;
        case 0x20ba04u: goto label_20ba04;
        case 0x20ba08u: goto label_20ba08;
        case 0x20ba0cu: goto label_20ba0c;
        case 0x20ba10u: goto label_20ba10;
        case 0x20ba14u: goto label_20ba14;
        case 0x20ba18u: goto label_20ba18;
        case 0x20ba1cu: goto label_20ba1c;
        case 0x20ba20u: goto label_20ba20;
        case 0x20ba24u: goto label_20ba24;
        case 0x20ba28u: goto label_20ba28;
        case 0x20ba2cu: goto label_20ba2c;
        case 0x20ba30u: goto label_20ba30;
        case 0x20ba34u: goto label_20ba34;
        case 0x20ba38u: goto label_20ba38;
        case 0x20ba3cu: goto label_20ba3c;
        case 0x20ba40u: goto label_20ba40;
        case 0x20ba44u: goto label_20ba44;
        case 0x20ba48u: goto label_20ba48;
        case 0x20ba4cu: goto label_20ba4c;
        case 0x20ba50u: goto label_20ba50;
        case 0x20ba54u: goto label_20ba54;
        case 0x20ba58u: goto label_20ba58;
        case 0x20ba5cu: goto label_20ba5c;
        case 0x20ba60u: goto label_20ba60;
        case 0x20ba64u: goto label_20ba64;
        case 0x20ba68u: goto label_20ba68;
        case 0x20ba6cu: goto label_20ba6c;
        case 0x20ba70u: goto label_20ba70;
        case 0x20ba74u: goto label_20ba74;
        case 0x20ba78u: goto label_20ba78;
        case 0x20ba7cu: goto label_20ba7c;
        case 0x20ba80u: goto label_20ba80;
        case 0x20ba84u: goto label_20ba84;
        case 0x20ba88u: goto label_20ba88;
        case 0x20ba8cu: goto label_20ba8c;
        case 0x20ba90u: goto label_20ba90;
        case 0x20ba94u: goto label_20ba94;
        case 0x20ba98u: goto label_20ba98;
        case 0x20ba9cu: goto label_20ba9c;
        case 0x20baa0u: goto label_20baa0;
        case 0x20baa4u: goto label_20baa4;
        case 0x20baa8u: goto label_20baa8;
        case 0x20baacu: goto label_20baac;
        case 0x20bab0u: goto label_20bab0;
        case 0x20bab4u: goto label_20bab4;
        case 0x20bab8u: goto label_20bab8;
        case 0x20babcu: goto label_20babc;
        case 0x20bac0u: goto label_20bac0;
        case 0x20bac4u: goto label_20bac4;
        case 0x20bac8u: goto label_20bac8;
        case 0x20baccu: goto label_20bacc;
        case 0x20bad0u: goto label_20bad0;
        case 0x20bad4u: goto label_20bad4;
        case 0x20bad8u: goto label_20bad8;
        case 0x20badcu: goto label_20badc;
        case 0x20bae0u: goto label_20bae0;
        case 0x20bae4u: goto label_20bae4;
        case 0x20bae8u: goto label_20bae8;
        case 0x20baecu: goto label_20baec;
        case 0x20baf0u: goto label_20baf0;
        case 0x20baf4u: goto label_20baf4;
        case 0x20baf8u: goto label_20baf8;
        case 0x20bafcu: goto label_20bafc;
        case 0x20bb00u: goto label_20bb00;
        case 0x20bb04u: goto label_20bb04;
        case 0x20bb08u: goto label_20bb08;
        case 0x20bb0cu: goto label_20bb0c;
        case 0x20bb10u: goto label_20bb10;
        case 0x20bb14u: goto label_20bb14;
        case 0x20bb18u: goto label_20bb18;
        case 0x20bb1cu: goto label_20bb1c;
        case 0x20bb20u: goto label_20bb20;
        case 0x20bb24u: goto label_20bb24;
        case 0x20bb28u: goto label_20bb28;
        case 0x20bb2cu: goto label_20bb2c;
        case 0x20bb30u: goto label_20bb30;
        case 0x20bb34u: goto label_20bb34;
        case 0x20bb38u: goto label_20bb38;
        case 0x20bb3cu: goto label_20bb3c;
        case 0x20bb40u: goto label_20bb40;
        case 0x20bb44u: goto label_20bb44;
        case 0x20bb48u: goto label_20bb48;
        case 0x20bb4cu: goto label_20bb4c;
        case 0x20bb50u: goto label_20bb50;
        case 0x20bb54u: goto label_20bb54;
        case 0x20bb58u: goto label_20bb58;
        case 0x20bb5cu: goto label_20bb5c;
        case 0x20bb60u: goto label_20bb60;
        case 0x20bb64u: goto label_20bb64;
        case 0x20bb68u: goto label_20bb68;
        case 0x20bb6cu: goto label_20bb6c;
        case 0x20bb70u: goto label_20bb70;
        case 0x20bb74u: goto label_20bb74;
        case 0x20bb78u: goto label_20bb78;
        case 0x20bb7cu: goto label_20bb7c;
        case 0x20bb80u: goto label_20bb80;
        case 0x20bb84u: goto label_20bb84;
        case 0x20bb88u: goto label_20bb88;
        case 0x20bb8cu: goto label_20bb8c;
        case 0x20bb90u: goto label_20bb90;
        case 0x20bb94u: goto label_20bb94;
        case 0x20bb98u: goto label_20bb98;
        case 0x20bb9cu: goto label_20bb9c;
        case 0x20bba0u: goto label_20bba0;
        case 0x20bba4u: goto label_20bba4;
        case 0x20bba8u: goto label_20bba8;
        case 0x20bbacu: goto label_20bbac;
        case 0x20bbb0u: goto label_20bbb0;
        case 0x20bbb4u: goto label_20bbb4;
        case 0x20bbb8u: goto label_20bbb8;
        case 0x20bbbcu: goto label_20bbbc;
        case 0x20bbc0u: goto label_20bbc0;
        case 0x20bbc4u: goto label_20bbc4;
        case 0x20bbc8u: goto label_20bbc8;
        case 0x20bbccu: goto label_20bbcc;
        case 0x20bbd0u: goto label_20bbd0;
        case 0x20bbd4u: goto label_20bbd4;
        case 0x20bbd8u: goto label_20bbd8;
        case 0x20bbdcu: goto label_20bbdc;
        case 0x20bbe0u: goto label_20bbe0;
        case 0x20bbe4u: goto label_20bbe4;
        case 0x20bbe8u: goto label_20bbe8;
        case 0x20bbecu: goto label_20bbec;
        case 0x20bbf0u: goto label_20bbf0;
        case 0x20bbf4u: goto label_20bbf4;
        case 0x20bbf8u: goto label_20bbf8;
        case 0x20bbfcu: goto label_20bbfc;
        case 0x20bc00u: goto label_20bc00;
        case 0x20bc04u: goto label_20bc04;
        case 0x20bc08u: goto label_20bc08;
        case 0x20bc0cu: goto label_20bc0c;
        case 0x20bc10u: goto label_20bc10;
        case 0x20bc14u: goto label_20bc14;
        case 0x20bc18u: goto label_20bc18;
        case 0x20bc1cu: goto label_20bc1c;
        case 0x20bc20u: goto label_20bc20;
        case 0x20bc24u: goto label_20bc24;
        case 0x20bc28u: goto label_20bc28;
        case 0x20bc2cu: goto label_20bc2c;
        case 0x20bc30u: goto label_20bc30;
        case 0x20bc34u: goto label_20bc34;
        case 0x20bc38u: goto label_20bc38;
        case 0x20bc3cu: goto label_20bc3c;
        case 0x20bc40u: goto label_20bc40;
        case 0x20bc44u: goto label_20bc44;
        case 0x20bc48u: goto label_20bc48;
        case 0x20bc4cu: goto label_20bc4c;
        case 0x20bc50u: goto label_20bc50;
        case 0x20bc54u: goto label_20bc54;
        case 0x20bc58u: goto label_20bc58;
        case 0x20bc5cu: goto label_20bc5c;
        case 0x20bc60u: goto label_20bc60;
        case 0x20bc64u: goto label_20bc64;
        case 0x20bc68u: goto label_20bc68;
        case 0x20bc6cu: goto label_20bc6c;
        case 0x20bc70u: goto label_20bc70;
        case 0x20bc74u: goto label_20bc74;
        case 0x20bc78u: goto label_20bc78;
        case 0x20bc7cu: goto label_20bc7c;
        case 0x20bc80u: goto label_20bc80;
        case 0x20bc84u: goto label_20bc84;
        case 0x20bc88u: goto label_20bc88;
        case 0x20bc8cu: goto label_20bc8c;
        case 0x20bc90u: goto label_20bc90;
        case 0x20bc94u: goto label_20bc94;
        case 0x20bc98u: goto label_20bc98;
        case 0x20bc9cu: goto label_20bc9c;
        case 0x20bca0u: goto label_20bca0;
        case 0x20bca4u: goto label_20bca4;
        case 0x20bca8u: goto label_20bca8;
        case 0x20bcacu: goto label_20bcac;
        case 0x20bcb0u: goto label_20bcb0;
        case 0x20bcb4u: goto label_20bcb4;
        case 0x20bcb8u: goto label_20bcb8;
        case 0x20bcbcu: goto label_20bcbc;
        case 0x20bcc0u: goto label_20bcc0;
        case 0x20bcc4u: goto label_20bcc4;
        case 0x20bcc8u: goto label_20bcc8;
        case 0x20bcccu: goto label_20bccc;
        case 0x20bcd0u: goto label_20bcd0;
        case 0x20bcd4u: goto label_20bcd4;
        case 0x20bcd8u: goto label_20bcd8;
        case 0x20bcdcu: goto label_20bcdc;
        case 0x20bce0u: goto label_20bce0;
        case 0x20bce4u: goto label_20bce4;
        case 0x20bce8u: goto label_20bce8;
        case 0x20bcecu: goto label_20bcec;
        case 0x20bcf0u: goto label_20bcf0;
        case 0x20bcf4u: goto label_20bcf4;
        case 0x20bcf8u: goto label_20bcf8;
        case 0x20bcfcu: goto label_20bcfc;
        case 0x20bd00u: goto label_20bd00;
        case 0x20bd04u: goto label_20bd04;
        case 0x20bd08u: goto label_20bd08;
        case 0x20bd0cu: goto label_20bd0c;
        case 0x20bd10u: goto label_20bd10;
        case 0x20bd14u: goto label_20bd14;
        case 0x20bd18u: goto label_20bd18;
        case 0x20bd1cu: goto label_20bd1c;
        case 0x20bd20u: goto label_20bd20;
        case 0x20bd24u: goto label_20bd24;
        case 0x20bd28u: goto label_20bd28;
        case 0x20bd2cu: goto label_20bd2c;
        case 0x20bd30u: goto label_20bd30;
        case 0x20bd34u: goto label_20bd34;
        case 0x20bd38u: goto label_20bd38;
        case 0x20bd3cu: goto label_20bd3c;
        case 0x20bd40u: goto label_20bd40;
        case 0x20bd44u: goto label_20bd44;
        case 0x20bd48u: goto label_20bd48;
        case 0x20bd4cu: goto label_20bd4c;
        case 0x20bd50u: goto label_20bd50;
        case 0x20bd54u: goto label_20bd54;
        case 0x20bd58u: goto label_20bd58;
        case 0x20bd5cu: goto label_20bd5c;
        case 0x20bd60u: goto label_20bd60;
        case 0x20bd64u: goto label_20bd64;
        case 0x20bd68u: goto label_20bd68;
        case 0x20bd6cu: goto label_20bd6c;
        case 0x20bd70u: goto label_20bd70;
        case 0x20bd74u: goto label_20bd74;
        case 0x20bd78u: goto label_20bd78;
        case 0x20bd7cu: goto label_20bd7c;
        case 0x20bd80u: goto label_20bd80;
        case 0x20bd84u: goto label_20bd84;
        case 0x20bd88u: goto label_20bd88;
        case 0x20bd8cu: goto label_20bd8c;
        case 0x20bd90u: goto label_20bd90;
        case 0x20bd94u: goto label_20bd94;
        case 0x20bd98u: goto label_20bd98;
        case 0x20bd9cu: goto label_20bd9c;
        case 0x20bda0u: goto label_20bda0;
        case 0x20bda4u: goto label_20bda4;
        case 0x20bda8u: goto label_20bda8;
        case 0x20bdacu: goto label_20bdac;
        case 0x20bdb0u: goto label_20bdb0;
        case 0x20bdb4u: goto label_20bdb4;
        case 0x20bdb8u: goto label_20bdb8;
        case 0x20bdbcu: goto label_20bdbc;
        case 0x20bdc0u: goto label_20bdc0;
        case 0x20bdc4u: goto label_20bdc4;
        case 0x20bdc8u: goto label_20bdc8;
        case 0x20bdccu: goto label_20bdcc;
        case 0x20bdd0u: goto label_20bdd0;
        case 0x20bdd4u: goto label_20bdd4;
        case 0x20bdd8u: goto label_20bdd8;
        case 0x20bddcu: goto label_20bddc;
        case 0x20bde0u: goto label_20bde0;
        case 0x20bde4u: goto label_20bde4;
        case 0x20bde8u: goto label_20bde8;
        case 0x20bdecu: goto label_20bdec;
        case 0x20bdf0u: goto label_20bdf0;
        case 0x20bdf4u: goto label_20bdf4;
        case 0x20bdf8u: goto label_20bdf8;
        case 0x20bdfcu: goto label_20bdfc;
        case 0x20be00u: goto label_20be00;
        case 0x20be04u: goto label_20be04;
        case 0x20be08u: goto label_20be08;
        case 0x20be0cu: goto label_20be0c;
        case 0x20be10u: goto label_20be10;
        case 0x20be14u: goto label_20be14;
        case 0x20be18u: goto label_20be18;
        case 0x20be1cu: goto label_20be1c;
        case 0x20be20u: goto label_20be20;
        case 0x20be24u: goto label_20be24;
        case 0x20be28u: goto label_20be28;
        case 0x20be2cu: goto label_20be2c;
        case 0x20be30u: goto label_20be30;
        case 0x20be34u: goto label_20be34;
        case 0x20be38u: goto label_20be38;
        case 0x20be3cu: goto label_20be3c;
        case 0x20be40u: goto label_20be40;
        case 0x20be44u: goto label_20be44;
        case 0x20be48u: goto label_20be48;
        case 0x20be4cu: goto label_20be4c;
        case 0x20be50u: goto label_20be50;
        case 0x20be54u: goto label_20be54;
        case 0x20be58u: goto label_20be58;
        case 0x20be5cu: goto label_20be5c;
        case 0x20be60u: goto label_20be60;
        case 0x20be64u: goto label_20be64;
        case 0x20be68u: goto label_20be68;
        case 0x20be6cu: goto label_20be6c;
        case 0x20be70u: goto label_20be70;
        case 0x20be74u: goto label_20be74;
        case 0x20be78u: goto label_20be78;
        case 0x20be7cu: goto label_20be7c;
        case 0x20be80u: goto label_20be80;
        case 0x20be84u: goto label_20be84;
        case 0x20be88u: goto label_20be88;
        case 0x20be8cu: goto label_20be8c;
        case 0x20be90u: goto label_20be90;
        case 0x20be94u: goto label_20be94;
        case 0x20be98u: goto label_20be98;
        case 0x20be9cu: goto label_20be9c;
        case 0x20bea0u: goto label_20bea0;
        case 0x20bea4u: goto label_20bea4;
        case 0x20bea8u: goto label_20bea8;
        case 0x20beacu: goto label_20beac;
        case 0x20beb0u: goto label_20beb0;
        case 0x20beb4u: goto label_20beb4;
        case 0x20beb8u: goto label_20beb8;
        case 0x20bebcu: goto label_20bebc;
        case 0x20bec0u: goto label_20bec0;
        case 0x20bec4u: goto label_20bec4;
        case 0x20bec8u: goto label_20bec8;
        case 0x20beccu: goto label_20becc;
        case 0x20bed0u: goto label_20bed0;
        case 0x20bed4u: goto label_20bed4;
        case 0x20bed8u: goto label_20bed8;
        case 0x20bedcu: goto label_20bedc;
        case 0x20bee0u: goto label_20bee0;
        case 0x20bee4u: goto label_20bee4;
        case 0x20bee8u: goto label_20bee8;
        case 0x20beecu: goto label_20beec;
        case 0x20bef0u: goto label_20bef0;
        case 0x20bef4u: goto label_20bef4;
        case 0x20bef8u: goto label_20bef8;
        case 0x20befcu: goto label_20befc;
        case 0x20bf00u: goto label_20bf00;
        case 0x20bf04u: goto label_20bf04;
        case 0x20bf08u: goto label_20bf08;
        case 0x20bf0cu: goto label_20bf0c;
        case 0x20bf10u: goto label_20bf10;
        case 0x20bf14u: goto label_20bf14;
        case 0x20bf18u: goto label_20bf18;
        case 0x20bf1cu: goto label_20bf1c;
        case 0x20bf20u: goto label_20bf20;
        case 0x20bf24u: goto label_20bf24;
        case 0x20bf28u: goto label_20bf28;
        case 0x20bf2cu: goto label_20bf2c;
        case 0x20bf30u: goto label_20bf30;
        case 0x20bf34u: goto label_20bf34;
        case 0x20bf38u: goto label_20bf38;
        case 0x20bf3cu: goto label_20bf3c;
        case 0x20bf40u: goto label_20bf40;
        case 0x20bf44u: goto label_20bf44;
        case 0x20bf48u: goto label_20bf48;
        case 0x20bf4cu: goto label_20bf4c;
        case 0x20bf50u: goto label_20bf50;
        case 0x20bf54u: goto label_20bf54;
        case 0x20bf58u: goto label_20bf58;
        case 0x20bf5cu: goto label_20bf5c;
        case 0x20bf60u: goto label_20bf60;
        case 0x20bf64u: goto label_20bf64;
        case 0x20bf68u: goto label_20bf68;
        case 0x20bf6cu: goto label_20bf6c;
        case 0x20bf70u: goto label_20bf70;
        case 0x20bf74u: goto label_20bf74;
        case 0x20bf78u: goto label_20bf78;
        case 0x20bf7cu: goto label_20bf7c;
        case 0x20bf80u: goto label_20bf80;
        case 0x20bf84u: goto label_20bf84;
        case 0x20bf88u: goto label_20bf88;
        case 0x20bf8cu: goto label_20bf8c;
        case 0x20bf90u: goto label_20bf90;
        case 0x20bf94u: goto label_20bf94;
        case 0x20bf98u: goto label_20bf98;
        case 0x20bf9cu: goto label_20bf9c;
        case 0x20bfa0u: goto label_20bfa0;
        case 0x20bfa4u: goto label_20bfa4;
        case 0x20bfa8u: goto label_20bfa8;
        case 0x20bfacu: goto label_20bfac;
        case 0x20bfb0u: goto label_20bfb0;
        case 0x20bfb4u: goto label_20bfb4;
        case 0x20bfb8u: goto label_20bfb8;
        case 0x20bfbcu: goto label_20bfbc;
        case 0x20bfc0u: goto label_20bfc0;
        case 0x20bfc4u: goto label_20bfc4;
        case 0x20bfc8u: goto label_20bfc8;
        case 0x20bfccu: goto label_20bfcc;
        case 0x20bfd0u: goto label_20bfd0;
        case 0x20bfd4u: goto label_20bfd4;
        case 0x20bfd8u: goto label_20bfd8;
        case 0x20bfdcu: goto label_20bfdc;
        case 0x20bfe0u: goto label_20bfe0;
        case 0x20bfe4u: goto label_20bfe4;
        case 0x20bfe8u: goto label_20bfe8;
        case 0x20bfecu: goto label_20bfec;
        case 0x20bff0u: goto label_20bff0;
        case 0x20bff4u: goto label_20bff4;
        case 0x20bff8u: goto label_20bff8;
        case 0x20bffcu: goto label_20bffc;
        case 0x20c000u: goto label_20c000;
        case 0x20c004u: goto label_20c004;
        case 0x20c008u: goto label_20c008;
        case 0x20c00cu: goto label_20c00c;
        case 0x20c010u: goto label_20c010;
        case 0x20c014u: goto label_20c014;
        case 0x20c018u: goto label_20c018;
        case 0x20c01cu: goto label_20c01c;
        case 0x20c020u: goto label_20c020;
        case 0x20c024u: goto label_20c024;
        case 0x20c028u: goto label_20c028;
        case 0x20c02cu: goto label_20c02c;
        case 0x20c030u: goto label_20c030;
        case 0x20c034u: goto label_20c034;
        case 0x20c038u: goto label_20c038;
        case 0x20c03cu: goto label_20c03c;
        case 0x20c040u: goto label_20c040;
        case 0x20c044u: goto label_20c044;
        case 0x20c048u: goto label_20c048;
        case 0x20c04cu: goto label_20c04c;
        case 0x20c050u: goto label_20c050;
        case 0x20c054u: goto label_20c054;
        case 0x20c058u: goto label_20c058;
        case 0x20c05cu: goto label_20c05c;
        case 0x20c060u: goto label_20c060;
        case 0x20c064u: goto label_20c064;
        case 0x20c068u: goto label_20c068;
        case 0x20c06cu: goto label_20c06c;
        case 0x20c070u: goto label_20c070;
        case 0x20c074u: goto label_20c074;
        case 0x20c078u: goto label_20c078;
        case 0x20c07cu: goto label_20c07c;
        case 0x20c080u: goto label_20c080;
        case 0x20c084u: goto label_20c084;
        case 0x20c088u: goto label_20c088;
        case 0x20c08cu: goto label_20c08c;
        case 0x20c090u: goto label_20c090;
        case 0x20c094u: goto label_20c094;
        case 0x20c098u: goto label_20c098;
        case 0x20c09cu: goto label_20c09c;
        case 0x20c0a0u: goto label_20c0a0;
        case 0x20c0a4u: goto label_20c0a4;
        case 0x20c0a8u: goto label_20c0a8;
        case 0x20c0acu: goto label_20c0ac;
        case 0x20c0b0u: goto label_20c0b0;
        case 0x20c0b4u: goto label_20c0b4;
        case 0x20c0b8u: goto label_20c0b8;
        case 0x20c0bcu: goto label_20c0bc;
        case 0x20c0c0u: goto label_20c0c0;
        case 0x20c0c4u: goto label_20c0c4;
        case 0x20c0c8u: goto label_20c0c8;
        case 0x20c0ccu: goto label_20c0cc;
        case 0x20c0d0u: goto label_20c0d0;
        case 0x20c0d4u: goto label_20c0d4;
        case 0x20c0d8u: goto label_20c0d8;
        case 0x20c0dcu: goto label_20c0dc;
        case 0x20c0e0u: goto label_20c0e0;
        case 0x20c0e4u: goto label_20c0e4;
        case 0x20c0e8u: goto label_20c0e8;
        case 0x20c0ecu: goto label_20c0ec;
        case 0x20c0f0u: goto label_20c0f0;
        case 0x20c0f4u: goto label_20c0f4;
        case 0x20c0f8u: goto label_20c0f8;
        case 0x20c0fcu: goto label_20c0fc;
        case 0x20c100u: goto label_20c100;
        case 0x20c104u: goto label_20c104;
        case 0x20c108u: goto label_20c108;
        case 0x20c10cu: goto label_20c10c;
        case 0x20c110u: goto label_20c110;
        case 0x20c114u: goto label_20c114;
        case 0x20c118u: goto label_20c118;
        case 0x20c11cu: goto label_20c11c;
        case 0x20c120u: goto label_20c120;
        case 0x20c124u: goto label_20c124;
        case 0x20c128u: goto label_20c128;
        case 0x20c12cu: goto label_20c12c;
        case 0x20c130u: goto label_20c130;
        case 0x20c134u: goto label_20c134;
        case 0x20c138u: goto label_20c138;
        case 0x20c13cu: goto label_20c13c;
        case 0x20c140u: goto label_20c140;
        case 0x20c144u: goto label_20c144;
        case 0x20c148u: goto label_20c148;
        case 0x20c14cu: goto label_20c14c;
        case 0x20c150u: goto label_20c150;
        case 0x20c154u: goto label_20c154;
        case 0x20c158u: goto label_20c158;
        case 0x20c15cu: goto label_20c15c;
        case 0x20c160u: goto label_20c160;
        case 0x20c164u: goto label_20c164;
        case 0x20c168u: goto label_20c168;
        case 0x20c16cu: goto label_20c16c;
        case 0x20c170u: goto label_20c170;
        case 0x20c174u: goto label_20c174;
        case 0x20c178u: goto label_20c178;
        case 0x20c17cu: goto label_20c17c;
        case 0x20c180u: goto label_20c180;
        case 0x20c184u: goto label_20c184;
        case 0x20c188u: goto label_20c188;
        case 0x20c18cu: goto label_20c18c;
        case 0x20c190u: goto label_20c190;
        default: break;
    }

    ctx->pc = 0x20ac70u;

label_20ac70:
    // 0x20ac70: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x20ac70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
label_20ac74:
    // 0x20ac74: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x20ac74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_20ac78:
    // 0x20ac78: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x20ac78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_20ac7c:
    // 0x20ac7c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x20ac7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_20ac80:
    // 0x20ac80: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20ac80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_20ac84:
    // 0x20ac84: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20ac84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_20ac88:
    // 0x20ac88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20ac88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_20ac8c:
    // 0x20ac8c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x20ac8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20ac90:
    // 0x20ac90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20ac90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20ac94:
    // 0x20ac94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20ac94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20ac98:
    // 0x20ac98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20ac98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20ac9c:
    // 0x20ac9c: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20ac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20aca0:
    // 0x20aca0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x20aca0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_20aca4:
    // 0x20aca4: 0x84550014  lh          $s5, 0x14($v0)
    ctx->pc = 0x20aca4u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
label_20aca8:
    // 0x20aca8: 0x1c60052e  bgtz        $v1, . + 4 + (0x52E << 2)
label_20acac:
    if (ctx->pc == 0x20ACACu) {
        ctx->pc = 0x20ACACu;
            // 0x20acac: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20ACB0u;
        goto label_20acb0;
    }
    ctx->pc = 0x20ACA8u;
    {
        const bool branch_taken_0x20aca8 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x20ACACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ACA8u;
            // 0x20acac: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aca8) {
            ctx->pc = 0x20C164u;
            goto label_20c164;
        }
    }
    ctx->pc = 0x20ACB0u;
label_20acb0:
    // 0x20acb0: 0x8f839520  lw          $v1, -0x6AE0($gp)
    ctx->pc = 0x20acb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
label_20acb4:
    // 0x20acb4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_20acb8:
    if (ctx->pc == 0x20ACB8u) {
        ctx->pc = 0x20ACBCu;
        goto label_20acbc;
    }
    ctx->pc = 0x20ACB4u;
    {
        const bool branch_taken_0x20acb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20acb4) {
            ctx->pc = 0x20ACCCu;
            goto label_20accc;
        }
    }
    ctx->pc = 0x20ACBCu;
label_20acbc:
    // 0x20acbc: 0xc0829f0  jal         func_20A7C0
label_20acc0:
    if (ctx->pc == 0x20ACC0u) {
        ctx->pc = 0x20ACC4u;
        goto label_20acc4;
    }
    ctx->pc = 0x20ACBCu;
    SET_GPR_U32(ctx, 31, 0x20ACC4u);
    ctx->pc = 0x20A7C0u;
    if (runtime->hasFunction(0x20A7C0u)) {
        auto targetFn = runtime->lookupFunction(0x20A7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ACC4u; }
        if (ctx->pc != 0x20ACC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuInventDebugKey__Fv_0x20a7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ACC4u; }
        if (ctx->pc != 0x20ACC4u) { return; }
    }
    ctx->pc = 0x20ACC4u;
label_20acc4:
    // 0x20acc4: 0x10000528  b           . + 4 + (0x528 << 2)
label_20acc8:
    if (ctx->pc == 0x20ACC8u) {
        ctx->pc = 0x20ACC8u;
            // 0x20acc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20ACCCu;
        goto label_20accc;
    }
    ctx->pc = 0x20ACC4u;
    {
        const bool branch_taken_0x20acc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ACC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ACC4u;
            // 0x20acc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20acc4) {
            ctx->pc = 0x20C168u;
            goto label_20c168;
        }
    }
    ctx->pc = 0x20ACCCu;
label_20accc:
    // 0x20accc: 0x80440634  lb          $a0, 0x634($v0)
    ctx->pc = 0x20acccu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1588)));
label_20acd0:
    // 0x20acd0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x20acd0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20acd4:
    // 0x20acd4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_20acd8:
    if (ctx->pc == 0x20ACD8u) {
        ctx->pc = 0x20ACD8u;
            // 0x20acd8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20ACDCu;
        goto label_20acdc;
    }
    ctx->pc = 0x20ACD4u;
    {
        const bool branch_taken_0x20acd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ACD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ACD4u;
            // 0x20acd8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20acd4) {
            ctx->pc = 0x20ACE8u;
            goto label_20ace8;
        }
    }
    ctx->pc = 0x20ACDCu;
label_20acdc:
    // 0x20acdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20acdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ace0:
    // 0x20ace0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_20ace4:
    if (ctx->pc == 0x20ACE4u) {
        ctx->pc = 0x20ACE4u;
            // 0x20ace4: 0x2ea1000c  sltiu       $at, $s5, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->pc = 0x20ACE8u;
        goto label_20ace8;
    }
    ctx->pc = 0x20ACE0u;
    {
        const bool branch_taken_0x20ace0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x20ACE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ACE0u;
            // 0x20ace4: 0x2ea1000c  sltiu       $at, $s5, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ace0) {
            ctx->pc = 0x20ACF0u;
            goto label_20acf0;
        }
    }
    ctx->pc = 0x20ACE8u;
label_20ace8:
    // 0x20ace8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20ace8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20acec:
    // 0x20acec: 0x2ea1000c  sltiu       $at, $s5, 0xC
    ctx->pc = 0x20acecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_20acf0:
    // 0x20acf0: 0x1020013d  beqz        $at, . + 4 + (0x13D << 2)
label_20acf4:
    if (ctx->pc == 0x20ACF4u) {
        ctx->pc = 0x20ACF4u;
            // 0x20acf4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20ACF8u;
        goto label_20acf8;
    }
    ctx->pc = 0x20ACF0u;
    {
        const bool branch_taken_0x20acf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ACF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ACF0u;
            // 0x20acf4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20acf0) {
            ctx->pc = 0x20B1E8u;
            goto label_20b1e8;
        }
    }
    ctx->pc = 0x20ACF8u;
label_20acf8:
    // 0x20acf8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x20acf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_20acfc:
    // 0x20acfc: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x20acfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_20ad00:
    // 0x20ad00: 0x24849d20  addiu       $a0, $a0, -0x62E0
    ctx->pc = 0x20ad00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941984));
label_20ad04:
    // 0x20ad04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20ad04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20ad08:
    // 0x20ad08: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20ad08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20ad0c:
    // 0x20ad0c: 0x600008  jr          $v1
label_20ad10:
    if (ctx->pc == 0x20AD10u) {
        ctx->pc = 0x20AD14u;
        goto label_20ad14;
    }
    ctx->pc = 0x20AD0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20AD14u: goto label_20ad14;
            case 0x20ADE8u: goto label_20ade8;
            case 0x20AE34u: goto label_20ae34;
            case 0x20AFA4u: goto label_20afa4;
            case 0x20AFDCu: goto label_20afdc;
            case 0x20B044u: goto label_20b044;
            case 0x20B0A8u: goto label_20b0a8;
            case 0x20B0C8u: goto label_20b0c8;
            case 0x20B0E8u: goto label_20b0e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20AD14u;
label_20ad14:
    // 0x20ad14: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x20ad14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_20ad18:
    // 0x20ad18: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x20ad18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_20ad1c:
    // 0x20ad1c: 0x2463f0f0  addiu       $v1, $v1, -0xF10
    ctx->pc = 0x20ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963440));
label_20ad20:
    // 0x20ad20: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x20ad20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_20ad24:
    // 0x20ad24: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x20ad24u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_20ad28:
    // 0x20ad28: 0x90430258  lbu         $v1, 0x258($v0)
    ctx->pc = 0x20ad28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 600)));
label_20ad2c:
    // 0x20ad2c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_20ad30:
    if (ctx->pc == 0x20AD30u) {
        ctx->pc = 0x20AD34u;
        goto label_20ad34;
    }
    ctx->pc = 0x20AD2Cu;
    {
        const bool branch_taken_0x20ad2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ad2c) {
            ctx->pc = 0x20AD38u;
            goto label_20ad38;
        }
    }
    ctx->pc = 0x20AD34u;
label_20ad34:
    // 0x20ad34: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x20ad34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_20ad38:
    // 0x20ad38: 0x8c520124  lw          $s2, 0x124($v0)
    ctx->pc = 0x20ad38u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
label_20ad3c:
    // 0x20ad3c: 0x32830001  andi        $v1, $s4, 0x1
    ctx->pc = 0x20ad3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_20ad40:
    // 0x20ad40: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_20ad44:
    if (ctx->pc == 0x20AD44u) {
        ctx->pc = 0x20AD44u;
            // 0x20ad44: 0x24450124  addiu       $a1, $v0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
        ctx->pc = 0x20AD48u;
        goto label_20ad48;
    }
    ctx->pc = 0x20AD40u;
    {
        const bool branch_taken_0x20ad40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AD40u;
            // 0x20ad44: 0x24450124  addiu       $a1, $v0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad40) {
            ctx->pc = 0x20AD78u;
            goto label_20ad78;
        }
    }
    ctx->pc = 0x20AD48u;
label_20ad48:
    // 0x20ad48: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
label_20ad4c:
    if (ctx->pc == 0x20AD4Cu) {
        ctx->pc = 0x20AD4Cu;
            // 0x20ad4c: 0x121843  sra         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
        ctx->pc = 0x20AD50u;
        goto label_20ad50;
    }
    ctx->pc = 0x20AD48u;
    {
        const bool branch_taken_0x20ad48 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x20AD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AD48u;
            // 0x20ad4c: 0x121843  sra         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad48) {
            ctx->pc = 0x20AD58u;
            goto label_20ad58;
        }
    }
    ctx->pc = 0x20AD50u;
label_20ad50:
    // 0x20ad50: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x20ad50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_20ad54:
    // 0x20ad54: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x20ad54u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_20ad58:
    // 0x20ad58: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_20ad5c:
    if (ctx->pc == 0x20AD5Cu) {
        ctx->pc = 0x20AD5Cu;
            // 0x20ad5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20AD60u;
        goto label_20ad60;
    }
    ctx->pc = 0x20AD58u;
    {
        const bool branch_taken_0x20ad58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AD58u;
            // 0x20ad5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad58) {
            ctx->pc = 0x20AD7Cu;
            goto label_20ad7c;
        }
    }
    ctx->pc = 0x20AD60u;
label_20ad60:
    // 0x20ad60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20ad60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ad64:
    // 0x20ad64: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x20ad64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_20ad68:
    // 0x20ad68: 0xc082998  jal         func_20A660
label_20ad6c:
    if (ctx->pc == 0x20AD6Cu) {
        ctx->pc = 0x20AD6Cu;
            // 0x20ad6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20AD70u;
        goto label_20ad70;
    }
    ctx->pc = 0x20AD68u;
    SET_GPR_U32(ctx, 31, 0x20AD70u);
    ctx->pc = 0x20AD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AD68u;
            // 0x20ad6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (runtime->hasFunction(0x20A660u)) {
        auto targetFn = runtime->lookupFunction(0x20A660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AD70u; }
        if (ctx->pc != 0x20AD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextDifferentMode__11CMenuInventFii_0x20a660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AD70u; }
        if (ctx->pc != 0x20AD70u) { return; }
    }
    ctx->pc = 0x20AD70u;
label_20ad70:
    // 0x20ad70: 0x1000011e  b           . + 4 + (0x11E << 2)
label_20ad74:
    if (ctx->pc == 0x20AD74u) {
        ctx->pc = 0x20AD74u;
            // 0x20ad74: 0x8f849178  lw          $a0, -0x6E88($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
        ctx->pc = 0x20AD78u;
        goto label_20ad78;
    }
    ctx->pc = 0x20AD70u;
    {
        const bool branch_taken_0x20ad70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AD70u;
            // 0x20ad74: 0x8f849178  lw          $a0, -0x6E88($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad70) {
            ctx->pc = 0x20B1ECu;
            goto label_20b1ec;
        }
    }
    ctx->pc = 0x20AD78u;
label_20ad78:
    // 0x20ad78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20ad78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20ad7c:
    // 0x20ad7c: 0x24460128  addiu       $a2, $v0, 0x128
    ctx->pc = 0x20ad7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
label_20ad80:
    // 0x20ad80: 0x27878210  addiu       $a3, $gp, -0x7DF0
    ctx->pc = 0x20ad80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935056));
label_20ad84:
    // 0x20ad84: 0x27888218  addiu       $t0, $gp, -0x7DE8
    ctx->pc = 0x20ad84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935064));
label_20ad88:
    // 0x20ad88: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x20ad88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_20ad8c:
    // 0x20ad8c: 0xc08ed0c  jal         func_23B430
label_20ad90:
    if (ctx->pc == 0x20AD90u) {
        ctx->pc = 0x20AD90u;
            // 0x20ad90: 0x240a001e  addiu       $t2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x20AD94u;
        goto label_20ad94;
    }
    ctx->pc = 0x20AD8Cu;
    SET_GPR_U32(ctx, 31, 0x20AD94u);
    ctx->pc = 0x20AD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AD8Cu;
            // 0x20ad90: 0x240a001e  addiu       $t2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B430u;
    if (runtime->hasFunction(0x23B430u)) {
        auto targetFn = runtime->lookupFunction(0x23B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AD94u; }
        if (ctx->pc != 0x20AD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuGlidKeyCheck__FiPiPiPiPiPii_0x23b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AD94u; }
        if (ctx->pc != 0x20AD94u) { return; }
    }
    ctx->pc = 0x20AD94u;
label_20ad94:
    // 0x20ad94: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x20ad94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ad98:
    // 0x20ad98: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20ad98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20ad9c:
    // 0x20ad9c: 0x8c420124  lw          $v0, 0x124($v0)
    ctx->pc = 0x20ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
label_20ada0:
    // 0x20ada0: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
label_20ada4:
    if (ctx->pc == 0x20ADA4u) {
        ctx->pc = 0x20ADA4u;
            // 0x20ada4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x20ADA8u;
        goto label_20ada8;
    }
    ctx->pc = 0x20ADA0u;
    {
        const bool branch_taken_0x20ada0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x20ADA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ADA0u;
            // 0x20ada4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ada0) {
            ctx->pc = 0x20ADB4u;
            goto label_20adb4;
        }
    }
    ctx->pc = 0x20ADA8u;
label_20ada8:
    // 0x20ada8: 0xc094274  jal         func_2509D0
label_20adac:
    if (ctx->pc == 0x20ADACu) {
        ctx->pc = 0x20ADACu;
            // 0x20adac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20ADB0u;
        goto label_20adb0;
    }
    ctx->pc = 0x20ADA8u;
    SET_GPR_U32(ctx, 31, 0x20ADB0u);
    ctx->pc = 0x20ADACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20ADA8u;
            // 0x20adac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ADB0u; }
        if (ctx->pc != 0x20ADB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ADB0u; }
        if (ctx->pc != 0x20ADB0u) { return; }
    }
    ctx->pc = 0x20ADB0u;
label_20adb0:
    // 0x20adb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20adb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20adb4:
    // 0x20adb4: 0x1682010c  bne         $s4, $v0, . + 4 + (0x10C << 2)
label_20adb8:
    if (ctx->pc == 0x20ADB8u) {
        ctx->pc = 0x20ADBCu;
        goto label_20adbc;
    }
    ctx->pc = 0x20ADB4u;
    {
        const bool branch_taken_0x20adb4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x20adb4) {
            ctx->pc = 0x20B1E8u;
            goto label_20b1e8;
        }
    }
    ctx->pc = 0x20ADBCu;
label_20adbc:
    // 0x20adbc: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20adbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20adc0:
    // 0x20adc0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x20adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_20adc4:
    // 0x20adc4: 0x2442f100  addiu       $v0, $v0, -0xF00
    ctx->pc = 0x20adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963456));
label_20adc8:
    // 0x20adc8: 0x84830014  lh          $v1, 0x14($a0)
    ctx->pc = 0x20adc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
label_20adcc:
    // 0x20adcc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x20adccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_20add0:
    // 0x20add0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20add0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20add4:
    // 0x20add4: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x20add4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_20add8:
    // 0x20add8: 0xc082998  jal         func_20A660
label_20addc:
    if (ctx->pc == 0x20ADDCu) {
        ctx->pc = 0x20ADDCu;
            // 0x20addc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20ADE0u;
        goto label_20ade0;
    }
    ctx->pc = 0x20ADD8u;
    SET_GPR_U32(ctx, 31, 0x20ADE0u);
    ctx->pc = 0x20ADDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20ADD8u;
            // 0x20addc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (runtime->hasFunction(0x20A660u)) {
        auto targetFn = runtime->lookupFunction(0x20A660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ADE0u; }
        if (ctx->pc != 0x20ADE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextDifferentMode__11CMenuInventFii_0x20a660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ADE0u; }
        if (ctx->pc != 0x20ADE0u) { return; }
    }
    ctx->pc = 0x20ADE0u;
label_20ade0:
    // 0x20ade0: 0x10000101  b           . + 4 + (0x101 << 2)
label_20ade4:
    if (ctx->pc == 0x20ADE4u) {
        ctx->pc = 0x20ADE4u;
            // 0x20ade4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20ADE8u;
        goto label_20ade8;
    }
    ctx->pc = 0x20ADE0u;
    {
        const bool branch_taken_0x20ade0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ADE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ADE0u;
            // 0x20ade4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ade0) {
            ctx->pc = 0x20B1E8u;
            goto label_20b1e8;
        }
    }
    ctx->pc = 0x20ADE8u;
label_20ade8:
    // 0x20ade8: 0x32830004  andi        $v1, $s4, 0x4
    ctx->pc = 0x20ade8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
label_20adec:
    // 0x20adec: 0x106000fe  beqz        $v1, . + 4 + (0xFE << 2)
label_20adf0:
    if (ctx->pc == 0x20ADF0u) {
        ctx->pc = 0x20ADF4u;
        goto label_20adf4;
    }
    ctx->pc = 0x20ADECu;
    {
        const bool branch_taken_0x20adec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20adec) {
            ctx->pc = 0x20B1E8u;
            goto label_20b1e8;
        }
    }
    ctx->pc = 0x20ADF4u;
label_20adf4:
    // 0x20adf4: 0x84440110  lh          $a0, 0x110($v0)
    ctx->pc = 0x20adf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 272)));
label_20adf8:
    // 0x20adf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20adf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20adfc:
    // 0x20adfc: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_20ae00:
    if (ctx->pc == 0x20AE00u) {
        ctx->pc = 0x20AE00u;
            // 0x20ae00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20AE04u;
        goto label_20ae04;
    }
    ctx->pc = 0x20ADFCu;
    {
        const bool branch_taken_0x20adfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x20AE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ADFCu;
            // 0x20ae00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20adfc) {
            ctx->pc = 0x20AE1Cu;
            goto label_20ae1c;
        }
    }
    ctx->pc = 0x20AE04u;
label_20ae04:
    // 0x20ae04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20ae04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ae08:
    // 0x20ae08: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x20ae08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_20ae0c:
    // 0x20ae0c: 0xc082998  jal         func_20A660
label_20ae10:
    if (ctx->pc == 0x20AE10u) {
        ctx->pc = 0x20AE10u;
            // 0x20ae10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20AE14u;
        goto label_20ae14;
    }
    ctx->pc = 0x20AE0Cu;
    SET_GPR_U32(ctx, 31, 0x20AE14u);
    ctx->pc = 0x20AE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AE0Cu;
            // 0x20ae10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (runtime->hasFunction(0x20A660u)) {
        auto targetFn = runtime->lookupFunction(0x20A660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AE14u; }
        if (ctx->pc != 0x20AE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextDifferentMode__11CMenuInventFii_0x20a660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AE14u; }
        if (ctx->pc != 0x20AE14u) { return; }
    }
    ctx->pc = 0x20AE14u;
label_20ae14:
    // 0x20ae14: 0x10000005  b           . + 4 + (0x5 << 2)
label_20ae18:
    if (ctx->pc == 0x20AE18u) {
        ctx->pc = 0x20AE18u;
            // 0x20ae18: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20AE1Cu;
        goto label_20ae1c;
    }
    ctx->pc = 0x20AE14u;
    {
        const bool branch_taken_0x20ae14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AE14u;
            // 0x20ae18: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae14) {
            ctx->pc = 0x20AE2Cu;
            goto label_20ae2c;
        }
    }
    ctx->pc = 0x20AE1Cu;
label_20ae1c:
    // 0x20ae1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20ae1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ae20:
    // 0x20ae20: 0xc082998  jal         func_20A660
label_20ae24:
    if (ctx->pc == 0x20AE24u) {
        ctx->pc = 0x20AE24u;
            // 0x20ae24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20AE28u;
        goto label_20ae28;
    }
    ctx->pc = 0x20AE20u;
    SET_GPR_U32(ctx, 31, 0x20AE28u);
    ctx->pc = 0x20AE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AE20u;
            // 0x20ae24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (runtime->hasFunction(0x20A660u)) {
        auto targetFn = runtime->lookupFunction(0x20A660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AE28u; }
        if (ctx->pc != 0x20AE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextDifferentMode__11CMenuInventFii_0x20a660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AE28u; }
        if (ctx->pc != 0x20AE28u) { return; }
    }
    ctx->pc = 0x20AE28u;
label_20ae28:
    // 0x20ae28: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x20ae28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ae2c:
    // 0x20ae2c: 0x100000ee  b           . + 4 + (0xEE << 2)
label_20ae30:
    if (ctx->pc == 0x20AE30u) {
        ctx->pc = 0x20AE34u;
        goto label_20ae34;
    }
    ctx->pc = 0x20AE2Cu;
    {
        const bool branch_taken_0x20ae2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ae2c) {
            ctx->pc = 0x20B1E8u;
            goto label_20b1e8;
        }
    }
    ctx->pc = 0x20AE34u;
label_20ae34:
    // 0x20ae34: 0x8c520118  lw          $s2, 0x118($v0)
    ctx->pc = 0x20ae34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 280)));
label_20ae38:
    // 0x20ae38: 0x8c570114  lw          $s7, 0x114($v0)
    ctx->pc = 0x20ae38u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
label_20ae3c:
    // 0x20ae3c: 0xc081108  jal         func_204420
label_20ae40:
    if (ctx->pc == 0x20AE40u) {
        ctx->pc = 0x20AE40u;
            // 0x20ae40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20AE44u;
        goto label_20ae44;
    }
    ctx->pc = 0x20AE3Cu;
    SET_GPR_U32(ctx, 31, 0x20AE44u);
    ctx->pc = 0x20AE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AE3Cu;
            // 0x20ae40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204420u;
    if (runtime->hasFunction(0x204420u)) {
        auto targetFn = runtime->lookupFunction(0x204420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AE44u; }
        if (ctx->pc != 0x20AE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableSelectMaxCardList__11CMenuInventFv_0x204420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AE44u; }
        if (ctx->pc != 0x20AE44u) { return; }
    }
    ctx->pc = 0x20AE44u;
label_20ae44:
    // 0x20ae44: 0x32830010  andi        $v1, $s4, 0x10
    ctx->pc = 0x20ae44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)16);
label_20ae48:
    // 0x20ae48: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_20ae4c:
    if (ctx->pc == 0x20AE4Cu) {
        ctx->pc = 0x20AE4Cu;
            // 0x20ae4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20AE50u;
        goto label_20ae50;
    }
    ctx->pc = 0x20AE48u;
    {
        const bool branch_taken_0x20ae48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AE48u;
            // 0x20ae4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae48) {
            ctx->pc = 0x20AE5Cu;
            goto label_20ae5c;
        }
    }
    ctx->pc = 0x20AE50u;
label_20ae50:
    // 0x20ae50: 0x32830040  andi        $v1, $s4, 0x40
    ctx->pc = 0x20ae50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)64);
label_20ae54:
    // 0x20ae54: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_20ae58:
    if (ctx->pc == 0x20AE58u) {
        ctx->pc = 0x20AE58u;
            // 0x20ae58: 0x32830020  andi        $v1, $s4, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
        ctx->pc = 0x20AE5Cu;
        goto label_20ae5c;
    }
    ctx->pc = 0x20AE54u;
    {
        const bool branch_taken_0x20ae54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AE54u;
            // 0x20ae58: 0x32830020  andi        $v1, $s4, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae54) {
            ctx->pc = 0x20AE64u;
            goto label_20ae64;
        }
    }
    ctx->pc = 0x20AE5Cu;
label_20ae5c:
    // 0x20ae5c: 0x10000006  b           . + 4 + (0x6 << 2)
label_20ae60:
    if (ctx->pc == 0x20AE60u) {
        ctx->pc = 0x20AE60u;
            // 0x20ae60: 0x2405fff8  addiu       $a1, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->pc = 0x20AE64u;
        goto label_20ae64;
    }
    ctx->pc = 0x20AE5Cu;
    {
        const bool branch_taken_0x20ae5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AE5Cu;
            // 0x20ae60: 0x2405fff8  addiu       $a1, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae5c) {
            ctx->pc = 0x20AE78u;
            goto label_20ae78;
        }
    }
    ctx->pc = 0x20AE64u;
label_20ae64:
    // 0x20ae64: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_20ae68:
    if (ctx->pc == 0x20AE68u) {
        ctx->pc = 0x20AE68u;
            // 0x20ae68: 0x32830080  andi        $v1, $s4, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
        ctx->pc = 0x20AE6Cu;
        goto label_20ae6c;
    }
    ctx->pc = 0x20AE64u;
    {
        const bool branch_taken_0x20ae64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AE64u;
            // 0x20ae68: 0x32830080  andi        $v1, $s4, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae64) {
            ctx->pc = 0x20AE74u;
            goto label_20ae74;
        }
    }
    ctx->pc = 0x20AE6Cu;
label_20ae6c:
    // 0x20ae6c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_20ae70:
    if (ctx->pc == 0x20AE70u) {
        ctx->pc = 0x20AE74u;
        goto label_20ae74;
    }
    ctx->pc = 0x20AE6Cu;
    {
        const bool branch_taken_0x20ae6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ae6c) {
            ctx->pc = 0x20AE78u;
            goto label_20ae78;
        }
    }
    ctx->pc = 0x20AE74u;
label_20ae74:
    // 0x20ae74: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x20ae74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20ae78:
    // 0x20ae78: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
label_20ae7c:
    if (ctx->pc == 0x20AE7Cu) {
        ctx->pc = 0x20AE7Cu;
            // 0x20ae7c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20AE80u;
        goto label_20ae80;
    }
    ctx->pc = 0x20AE78u;
    {
        const bool branch_taken_0x20ae78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AE78u;
            // 0x20ae7c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae78) {
            ctx->pc = 0x20AEE0u;
            goto label_20aee0;
        }
    }
    ctx->pc = 0x20AE80u;
label_20ae80:
    // 0x20ae80: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20ae80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20ae84:
    // 0x20ae84: 0x8c830114  lw          $v1, 0x114($a0)
    ctx->pc = 0x20ae84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
label_20ae88:
    // 0x20ae88: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20ae88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_20ae8c:
    // 0x20ae8c: 0xac830114  sw          $v1, 0x114($a0)
    ctx->pc = 0x20ae8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 3));
label_20ae90:
    // 0x20ae90: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x20ae90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20ae94:
    // 0x20ae94: 0x24640114  addiu       $a0, $v1, 0x114
    ctx->pc = 0x20ae94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
label_20ae98:
    // 0x20ae98: 0x8c630114  lw          $v1, 0x114($v1)
    ctx->pc = 0x20ae98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
label_20ae9c:
    // 0x20ae9c: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
label_20aea0:
    if (ctx->pc == 0x20AEA0u) {
        ctx->pc = 0x20AEA0u;
            // 0x20aea0: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x20AEA4u;
        goto label_20aea4;
    }
    ctx->pc = 0x20AE9Cu;
    {
        const bool branch_taken_0x20ae9c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20AEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AE9Cu;
            // 0x20aea0: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae9c) {
            ctx->pc = 0x20AEA8u;
            goto label_20aea8;
        }
    }
    ctx->pc = 0x20AEA4u;
label_20aea4:
    // 0x20aea4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x20aea4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_20aea8:
    // 0x20aea8: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20aeac:
    // 0x20aeac: 0x24440114  addiu       $a0, $v0, 0x114
    ctx->pc = 0x20aeacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
label_20aeb0:
    // 0x20aeb0: 0x8c420114  lw          $v0, 0x114($v0)
    ctx->pc = 0x20aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
label_20aeb4:
    // 0x20aeb4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x20aeb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20aeb8:
    // 0x20aeb8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_20aebc:
    if (ctx->pc == 0x20AEBCu) {
        ctx->pc = 0x20AEC0u;
        goto label_20aec0;
    }
    ctx->pc = 0x20AEB8u;
    {
        const bool branch_taken_0x20aeb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20aeb8) {
            ctx->pc = 0x20AEC4u;
            goto label_20aec4;
        }
    }
    ctx->pc = 0x20AEC0u;
label_20aec0:
    // 0x20aec0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x20aec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_20aec4:
    // 0x20aec4: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20aec8:
    // 0x20aec8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x20aec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20aecc:
    // 0x20aecc: 0x8c450114  lw          $a1, 0x114($v0)
    ctx->pc = 0x20aeccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
label_20aed0:
    // 0x20aed0: 0xc08ec58  jal         func_23B160
label_20aed4:
    if (ctx->pc == 0x20AED4u) {
        ctx->pc = 0x20AED4u;
            // 0x20aed4: 0x24440118  addiu       $a0, $v0, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
        ctx->pc = 0x20AED8u;
        goto label_20aed8;
    }
    ctx->pc = 0x20AED0u;
    SET_GPR_U32(ctx, 31, 0x20AED8u);
    ctx->pc = 0x20AED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AED0u;
            // 0x20aed4: 0x24440118  addiu       $a0, $v0, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B160u;
    if (runtime->hasFunction(0x23B160u)) {
        auto targetFn = runtime->lookupFunction(0x23B160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AED8u; }
        if (ctx->pc != 0x20AED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCheckLine__FPiii_0x23b160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AED8u; }
        if (ctx->pc != 0x20AED8u) { return; }
    }
    ctx->pc = 0x20AED8u;
label_20aed8:
    // 0x20aed8: 0x10000012  b           . + 4 + (0x12 << 2)
label_20aedc:
    if (ctx->pc == 0x20AEDCu) {
        ctx->pc = 0x20AEDCu;
            // 0x20aedc: 0x8f829178  lw          $v0, -0x6E88($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
        ctx->pc = 0x20AEE0u;
        goto label_20aee0;
    }
    ctx->pc = 0x20AED8u;
    {
        const bool branch_taken_0x20aed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AED8u;
            // 0x20aedc: 0x8f829178  lw          $v0, -0x6E88($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aed8) {
            ctx->pc = 0x20AF24u;
            goto label_20af24;
        }
    }
    ctx->pc = 0x20AEE0u;
label_20aee0:
    // 0x20aee0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20aee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20aee4:
    // 0x20aee4: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20aee8:
    // 0x20aee8: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x20aee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20aeec:
    // 0x20aeec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20aeecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20aef0:
    // 0x20aef0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20aef0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20aef4:
    // 0x20aef4: 0x24450114  addiu       $a1, $v0, 0x114
    ctx->pc = 0x20aef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
label_20aef8:
    // 0x20aef8: 0xc08eccc  jal         func_23B330
label_20aefc:
    if (ctx->pc == 0x20AEFCu) {
        ctx->pc = 0x20AEFCu;
            // 0x20aefc: 0x24460118  addiu       $a2, $v0, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
        ctx->pc = 0x20AF00u;
        goto label_20af00;
    }
    ctx->pc = 0x20AEF8u;
    SET_GPR_U32(ctx, 31, 0x20AF00u);
    ctx->pc = 0x20AEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AEF8u;
            // 0x20aefc: 0x24460118  addiu       $a2, $v0, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B330u;
    if (runtime->hasFunction(0x23B330u)) {
        auto targetFn = runtime->lookupFunction(0x23B330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AF00u; }
        if (ctx->pc != 0x20AF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuListKeyCheck__FiPiPiiiii_0x23b330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AF00u; }
        if (ctx->pc != 0x20AF00u) { return; }
    }
    ctx->pc = 0x20AF00u;
label_20af00:
    // 0x20af00: 0x32820008  andi        $v0, $s4, 0x8
    ctx->pc = 0x20af00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_20af04:
    // 0x20af04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_20af08:
    if (ctx->pc == 0x20AF08u) {
        ctx->pc = 0x20AF0Cu;
        goto label_20af0c;
    }
    ctx->pc = 0x20AF04u;
    {
        const bool branch_taken_0x20af04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20af04) {
            ctx->pc = 0x20AF20u;
            goto label_20af20;
        }
    }
    ctx->pc = 0x20AF0Cu;
label_20af0c:
    // 0x20af0c: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20af0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20af10:
    // 0x20af10: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x20af10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20af14:
    // 0x20af14: 0xc082998  jal         func_20A660
label_20af18:
    if (ctx->pc == 0x20AF18u) {
        ctx->pc = 0x20AF18u;
            // 0x20af18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20AF1Cu;
        goto label_20af1c;
    }
    ctx->pc = 0x20AF14u;
    SET_GPR_U32(ctx, 31, 0x20AF1Cu);
    ctx->pc = 0x20AF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AF14u;
            // 0x20af18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (runtime->hasFunction(0x20A660u)) {
        auto targetFn = runtime->lookupFunction(0x20A660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AF1Cu; }
        if (ctx->pc != 0x20AF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextDifferentMode__11CMenuInventFii_0x20a660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AF1Cu; }
        if (ctx->pc != 0x20AF1Cu) { return; }
    }
    ctx->pc = 0x20AF1Cu;
label_20af1c:
    // 0x20af1c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x20af1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20af20:
    // 0x20af20: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20af20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20af24:
    // 0x20af24: 0x8c420114  lw          $v0, 0x114($v0)
    ctx->pc = 0x20af24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
label_20af28:
    // 0x20af28: 0x12e20003  beq         $s7, $v0, . + 4 + (0x3 << 2)
label_20af2c:
    if (ctx->pc == 0x20AF2Cu) {
        ctx->pc = 0x20AF2Cu;
            // 0x20af2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20AF30u;
        goto label_20af30;
    }
    ctx->pc = 0x20AF28u;
    {
        const bool branch_taken_0x20af28 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x20AF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AF28u;
            // 0x20af2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af28) {
            ctx->pc = 0x20AF38u;
            goto label_20af38;
        }
    }
    ctx->pc = 0x20AF30u;
label_20af30:
    // 0x20af30: 0xc094274  jal         func_2509D0
label_20af34:
    if (ctx->pc == 0x20AF34u) {
        ctx->pc = 0x20AF38u;
        goto label_20af38;
    }
    ctx->pc = 0x20AF30u;
    SET_GPR_U32(ctx, 31, 0x20AF38u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AF38u; }
        if (ctx->pc != 0x20AF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AF38u; }
        if (ctx->pc != 0x20AF38u) { return; }
    }
    ctx->pc = 0x20AF38u;
label_20af38:
    // 0x20af38: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x20af38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20af3c:
    // 0x20af3c: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x20af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_20af40:
    // 0x20af40: 0x12420006  beq         $s2, $v0, . + 4 + (0x6 << 2)
label_20af44:
    if (ctx->pc == 0x20AF44u) {
        ctx->pc = 0x20AF44u;
            // 0x20af44: 0x242082a  slt         $at, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x20AF48u;
        goto label_20af48;
    }
    ctx->pc = 0x20AF40u;
    {
        const bool branch_taken_0x20af40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x20AF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AF40u;
            // 0x20af44: 0x242082a  slt         $at, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af40) {
            ctx->pc = 0x20AF5Cu;
            goto label_20af5c;
        }
    }
    ctx->pc = 0x20AF48u;
label_20af48:
    // 0x20af48: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_20af4c:
    if (ctx->pc == 0x20AF4Cu) {
        ctx->pc = 0x20AF4Cu;
            // 0x20af4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20AF50u;
        goto label_20af50;
    }
    ctx->pc = 0x20AF48u;
    {
        const bool branch_taken_0x20af48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AF48u;
            // 0x20af4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af48) {
            ctx->pc = 0x20AF58u;
            goto label_20af58;
        }
    }
    ctx->pc = 0x20AF50u;
label_20af50:
    // 0x20af50: 0x10000002  b           . + 4 + (0x2 << 2)
label_20af54:
    if (ctx->pc == 0x20AF54u) {
        ctx->pc = 0x20AF54u;
            // 0x20af54: 0xa062024c  sb          $v0, 0x24C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 588), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x20AF58u;
        goto label_20af58;
    }
    ctx->pc = 0x20AF50u;
    {
        const bool branch_taken_0x20af50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AF50u;
            // 0x20af54: 0xa062024c  sb          $v0, 0x24C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 588), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af50) {
            ctx->pc = 0x20AF5Cu;
            goto label_20af5c;
        }
    }
    ctx->pc = 0x20AF58u;
label_20af58:
    // 0x20af58: 0xa060024c  sb          $zero, 0x24C($v1)
    ctx->pc = 0x20af58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 588), (uint8_t)GPR_U32(ctx, 0));
label_20af5c:
    // 0x20af5c: 0x8f829520  lw          $v0, -0x6AE0($gp)
    ctx->pc = 0x20af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
label_20af60:
    // 0x20af60: 0x104000a1  beqz        $v0, . + 4 + (0xA1 << 2)
label_20af64:
    if (ctx->pc == 0x20AF64u) {
        ctx->pc = 0x20AF68u;
        goto label_20af68;
    }
    ctx->pc = 0x20AF60u;
    {
        const bool branch_taken_0x20af60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20af60) {
            ctx->pc = 0x20B1E8u;
            goto label_20b1e8;
        }
    }
    ctx->pc = 0x20AF68u;
label_20af68:
    // 0x20af68: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x20af68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_20af6c:
    // 0x20af6c: 0x27a501f4  addiu       $a1, $sp, 0x1F4
    ctx->pc = 0x20af6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_20af70:
    // 0x20af70: 0xc08f928  jal         func_23E4A0
label_20af74:
    if (ctx->pc == 0x20AF74u) {
        ctx->pc = 0x20AF74u;
            // 0x20af74: 0x27a601f0  addiu       $a2, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x20AF78u;
        goto label_20af78;
    }
    ctx->pc = 0x20AF70u;
    SET_GPR_U32(ctx, 31, 0x20AF78u);
    ctx->pc = 0x20AF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AF70u;
            // 0x20af74: 0x27a601f0  addiu       $a2, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E4A0u;
    if (runtime->hasFunction(0x23E4A0u)) {
        auto targetFn = runtime->lookupFunction(0x23E4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AF78u; }
        if (ctx->pc != 0x20AF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDebugInputKey__12CMenuKeyFuncFRiRi_0x23e4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AF78u; }
        if (ctx->pc != 0x20AF78u) { return; }
    }
    ctx->pc = 0x20AF78u;
label_20af78:
    // 0x20af78: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x20af78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_20af7c:
    // 0x20af7c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x20af7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_20af80:
    // 0x20af80: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
label_20af84:
    if (ctx->pc == 0x20AF84u) {
        ctx->pc = 0x20AF88u;
        goto label_20af88;
    }
    ctx->pc = 0x20AF80u;
    {
        const bool branch_taken_0x20af80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20af80) {
            ctx->pc = 0x20B1E8u;
            goto label_20b1e8;
        }
    }
    ctx->pc = 0x20AF88u;
label_20af88:
    // 0x20af88: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20af88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20af8c:
    // 0x20af8c: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x20af8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
label_20af90:
    // 0x20af90: 0x8c450114  lw          $a1, 0x114($v0)
    ctx->pc = 0x20af90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
label_20af94:
    // 0x20af94: 0xc07fc1c  jal         func_1FF070
label_20af98:
    if (ctx->pc == 0x20AF98u) {
        ctx->pc = 0x20AF98u;
            // 0x20af98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20AF9Cu;
        goto label_20af9c;
    }
    ctx->pc = 0x20AF94u;
    SET_GPR_U32(ctx, 31, 0x20AF9Cu);
    ctx->pc = 0x20AF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AF94u;
            // 0x20af98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF070u;
    if (runtime->hasFunction(0x1FF070u)) {
        auto targetFn = runtime->lookupFunction(0x1FF070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AF9Cu; }
        if (ctx->pc != 0x20AF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCreateItemFlag__15CInventUserDataFii_0x1ff070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AF9Cu; }
        if (ctx->pc != 0x20AF9Cu) { return; }
    }
    ctx->pc = 0x20AF9Cu;
label_20af9c:
    // 0x20af9c: 0x10000472  b           . + 4 + (0x472 << 2)
label_20afa0:
    if (ctx->pc == 0x20AFA0u) {
        ctx->pc = 0x20AFA0u;
            // 0x20afa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20AFA4u;
        goto label_20afa4;
    }
    ctx->pc = 0x20AF9Cu;
    {
        const bool branch_taken_0x20af9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AF9Cu;
            // 0x20afa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af9c) {
            ctx->pc = 0x20C168u;
            goto label_20c168;
        }
    }
    ctx->pc = 0x20AFA4u;
label_20afa4:
    // 0x20afa4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20afa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20afa8:
    // 0x20afa8: 0x2445011c  addiu       $a1, $v0, 0x11C
    ctx->pc = 0x20afa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
label_20afac:
    // 0x20afac: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x20afacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_20afb0:
    // 0x20afb0: 0xc08ede0  jal         func_23B780
label_20afb4:
    if (ctx->pc == 0x20AFB4u) {
        ctx->pc = 0x20AFB4u;
            // 0x20afb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20AFB8u;
        goto label_20afb8;
    }
    ctx->pc = 0x20AFB0u;
    SET_GPR_U32(ctx, 31, 0x20AFB8u);
    ctx->pc = 0x20AFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AFB0u;
            // 0x20afb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B780u;
    if (runtime->hasFunction(0x23B780u)) {
        auto targetFn = runtime->lookupFunction(0x23B780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AFB8u; }
        if (ctx->pc != 0x20AFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemBrdKey__FiPiPii_0x23b780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AFB8u; }
        if (ctx->pc != 0x20AFB8u) { return; }
    }
    ctx->pc = 0x20AFB8u;
label_20afb8:
    // 0x20afb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20afbc:
    // 0x20afbc: 0x1443008a  bne         $v0, $v1, . + 4 + (0x8A << 2)
label_20afc0:
    if (ctx->pc == 0x20AFC0u) {
        ctx->pc = 0x20AFC4u;
        goto label_20afc4;
    }
    ctx->pc = 0x20AFBCu;
    {
        const bool branch_taken_0x20afbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20afbc) {
            ctx->pc = 0x20B1E8u;
            goto label_20b1e8;
        }
    }
    ctx->pc = 0x20AFC4u;
label_20afc4:
    // 0x20afc4: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20afc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20afc8:
    // 0x20afc8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x20afc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20afcc:
    // 0x20afcc: 0xc082998  jal         func_20A660
label_20afd0:
    if (ctx->pc == 0x20AFD0u) {
        ctx->pc = 0x20AFD0u;
            // 0x20afd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20AFD4u;
        goto label_20afd4;
    }
    ctx->pc = 0x20AFCCu;
    SET_GPR_U32(ctx, 31, 0x20AFD4u);
    ctx->pc = 0x20AFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AFCCu;
            // 0x20afd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (runtime->hasFunction(0x20A660u)) {
        auto targetFn = runtime->lookupFunction(0x20A660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AFD4u; }
        if (ctx->pc != 0x20AFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextDifferentMode__11CMenuInventFii_0x20a660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AFD4u; }
        if (ctx->pc != 0x20AFD4u) { return; }
    }
    ctx->pc = 0x20AFD4u;
label_20afd4:
    // 0x20afd4: 0x10000084  b           . + 4 + (0x84 << 2)
label_20afd8:
    if (ctx->pc == 0x20AFD8u) {
        ctx->pc = 0x20AFD8u;
            // 0x20afd8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20AFDCu;
        goto label_20afdc;
    }
    ctx->pc = 0x20AFD4u;
    {
        const bool branch_taken_0x20afd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AFD4u;
            // 0x20afd8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20afd4) {
            ctx->pc = 0x20B1E8u;
            goto label_20b1e8;
        }
    }
    ctx->pc = 0x20AFDCu;
label_20afdc:
    // 0x20afdc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20afdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20afe0:
    // 0x20afe0: 0x3c090035  lui         $t1, 0x35
    ctx->pc = 0x20afe0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)53 << 16));
label_20afe4:
    // 0x20afe4: 0x8c54012c  lw          $s4, 0x12C($v0)
    ctx->pc = 0x20afe4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_20afe8:
    // 0x20afe8: 0x2445012c  addiu       $a1, $v0, 0x12C
    ctx->pc = 0x20afe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
label_20afec:
    // 0x20afec: 0x24460130  addiu       $a2, $v0, 0x130
    ctx->pc = 0x20afecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
label_20aff0:
    // 0x20aff0: 0x27878220  addiu       $a3, $gp, -0x7DE0
    ctx->pc = 0x20aff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935072));
label_20aff4:
    // 0x20aff4: 0x27888228  addiu       $t0, $gp, -0x7DD8
    ctx->pc = 0x20aff4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935080));
label_20aff8:
    // 0x20aff8: 0x2529f120  addiu       $t1, $t1, -0xEE0
    ctx->pc = 0x20aff8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963488));
label_20affc:
    // 0x20affc: 0xc08ed0c  jal         func_23B430
label_20b000:
    if (ctx->pc == 0x20B000u) {
        ctx->pc = 0x20B000u;
            // 0x20b000: 0x240a0032  addiu       $t2, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x20B004u;
        goto label_20b004;
    }
    ctx->pc = 0x20AFFCu;
    SET_GPR_U32(ctx, 31, 0x20B004u);
    ctx->pc = 0x20B000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AFFCu;
            // 0x20b000: 0x240a0032  addiu       $t2, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B430u;
    if (runtime->hasFunction(0x23B430u)) {
        auto targetFn = runtime->lookupFunction(0x23B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B004u; }
        if (ctx->pc != 0x20B004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuGlidKeyCheck__FiPiPiPiPiPii_0x23b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B004u; }
        if (ctx->pc != 0x20B004u) { return; }
    }
    ctx->pc = 0x20B004u;
label_20b004:
    // 0x20b004: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x20b004u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20b008:
    // 0x20b008: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20b008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b00c:
    // 0x20b00c: 0x8c42012c  lw          $v0, 0x12C($v0)
    ctx->pc = 0x20b00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_20b010:
    // 0x20b010: 0x12820004  beq         $s4, $v0, . + 4 + (0x4 << 2)
label_20b014:
    if (ctx->pc == 0x20B014u) {
        ctx->pc = 0x20B014u;
            // 0x20b014: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x20B018u;
        goto label_20b018;
    }
    ctx->pc = 0x20B010u;
    {
        const bool branch_taken_0x20b010 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B010u;
            // 0x20b014: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b010) {
            ctx->pc = 0x20B024u;
            goto label_20b024;
        }
    }
    ctx->pc = 0x20B018u;
label_20b018:
    // 0x20b018: 0xc094274  jal         func_2509D0
label_20b01c:
    if (ctx->pc == 0x20B01Cu) {
        ctx->pc = 0x20B01Cu;
            // 0x20b01c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20B020u;
        goto label_20b020;
    }
    ctx->pc = 0x20B018u;
    SET_GPR_U32(ctx, 31, 0x20B020u);
    ctx->pc = 0x20B01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B018u;
            // 0x20b01c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B020u; }
        if (ctx->pc != 0x20B020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B020u; }
        if (ctx->pc != 0x20B020u) { return; }
    }
    ctx->pc = 0x20B020u;
label_20b020:
    // 0x20b020: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20b020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20b024:
    // 0x20b024: 0x16420070  bne         $s2, $v0, . + 4 + (0x70 << 2)
label_20b028:
    if (ctx->pc == 0x20B028u) {
        ctx->pc = 0x20B02Cu;
        goto label_20b02c;
    }
    ctx->pc = 0x20B024u;
    {
        const bool branch_taken_0x20b024 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x20b024) {
            ctx->pc = 0x20B1E8u;
            goto label_20b1e8;
        }
    }
    ctx->pc = 0x20B02Cu;
label_20b02c:
    // 0x20b02c: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20b02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b030:
    // 0x20b030: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20b030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20b034:
    // 0x20b034: 0xc082998  jal         func_20A660
label_20b038:
    if (ctx->pc == 0x20B038u) {
        ctx->pc = 0x20B038u;
            // 0x20b038: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20B03Cu;
        goto label_20b03c;
    }
    ctx->pc = 0x20B034u;
    SET_GPR_U32(ctx, 31, 0x20B03Cu);
    ctx->pc = 0x20B038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B034u;
            // 0x20b038: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (runtime->hasFunction(0x20A660u)) {
        auto targetFn = runtime->lookupFunction(0x20A660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B03Cu; }
        if (ctx->pc != 0x20B03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextDifferentMode__11CMenuInventFii_0x20a660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B03Cu; }
        if (ctx->pc != 0x20B03Cu) { return; }
    }
    ctx->pc = 0x20B03Cu;
label_20b03c:
    // 0x20b03c: 0x1000006a  b           . + 4 + (0x6A << 2)
label_20b040:
    if (ctx->pc == 0x20B040u) {
        ctx->pc = 0x20B040u;
            // 0x20b040: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20B044u;
        goto label_20b044;
    }
    ctx->pc = 0x20B03Cu;
    {
        const bool branch_taken_0x20b03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B03Cu;
            // 0x20b040: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b03c) {
            ctx->pc = 0x20B1E8u;
            goto label_20b1e8;
        }
    }
    ctx->pc = 0x20B044u;
label_20b044:
    // 0x20b044: 0x32830001  andi        $v1, $s4, 0x1
    ctx->pc = 0x20b044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_20b048:
    // 0x20b048: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_20b04c:
    if (ctx->pc == 0x20B04Cu) {
        ctx->pc = 0x20B04Cu;
            // 0x20b04c: 0x32830002  andi        $v1, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x20B050u;
        goto label_20b050;
    }
    ctx->pc = 0x20B048u;
    {
        const bool branch_taken_0x20b048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B048u;
            // 0x20b04c: 0x32830002  andi        $v1, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b048) {
            ctx->pc = 0x20B068u;
            goto label_20b068;
        }
    }
    ctx->pc = 0x20B050u;
label_20b050:
    // 0x20b050: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20b050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20b054:
    // 0x20b054: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x20b054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20b058:
    // 0x20b058: 0xc082998  jal         func_20A660
label_20b05c:
    if (ctx->pc == 0x20B05Cu) {
        ctx->pc = 0x20B05Cu;
            // 0x20b05c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20B060u;
        goto label_20b060;
    }
    ctx->pc = 0x20B058u;
    SET_GPR_U32(ctx, 31, 0x20B060u);
    ctx->pc = 0x20B05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B058u;
            // 0x20b05c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (runtime->hasFunction(0x20A660u)) {
        auto targetFn = runtime->lookupFunction(0x20A660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B060u; }
        if (ctx->pc != 0x20B060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextDifferentMode__11CMenuInventFii_0x20a660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B060u; }
        if (ctx->pc != 0x20B060u) { return; }
    }
    ctx->pc = 0x20B060u;
label_20b060:
    // 0x20b060: 0x10000061  b           . + 4 + (0x61 << 2)
label_20b064:
    if (ctx->pc == 0x20B064u) {
        ctx->pc = 0x20B068u;
        goto label_20b068;
    }
    ctx->pc = 0x20B060u;
    {
        const bool branch_taken_0x20b060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b060) {
            ctx->pc = 0x20B1E8u;
            goto label_20b1e8;
        }
    }
    ctx->pc = 0x20B068u;
label_20b068:
    // 0x20b068: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
label_20b06c:
    if (ctx->pc == 0x20B06Cu) {
        ctx->pc = 0x20B070u;
        goto label_20b070;
    }
    ctx->pc = 0x20B068u;
    {
        const bool branch_taken_0x20b068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b068) {
            ctx->pc = 0x20B1E8u;
            goto label_20b1e8;
        }
    }
    ctx->pc = 0x20B070u;
label_20b070:
    // 0x20b070: 0x84440110  lh          $a0, 0x110($v0)
    ctx->pc = 0x20b070u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 272)));
label_20b074:
    // 0x20b074: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20b074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b078:
    // 0x20b078: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_20b07c:
    if (ctx->pc == 0x20B07Cu) {
        ctx->pc = 0x20B07Cu;
            // 0x20b07c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20B080u;
        goto label_20b080;
    }
    ctx->pc = 0x20B078u;
    {
        const bool branch_taken_0x20b078 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x20B07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B078u;
            // 0x20b07c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b078) {
            ctx->pc = 0x20B084u;
            goto label_20b084;
        }
    }
    ctx->pc = 0x20B080u;
label_20b080:
    // 0x20b080: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x20b080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_20b084:
    // 0x20b084: 0x84440112  lh          $a0, 0x112($v0)
    ctx->pc = 0x20b084u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 274)));
label_20b088:
    // 0x20b088: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20b088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b08c:
    // 0x20b08c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_20b090:
    if (ctx->pc == 0x20B090u) {
        ctx->pc = 0x20B090u;
            // 0x20b090: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20B094u;
        goto label_20b094;
    }
    ctx->pc = 0x20B08Cu;
    {
        const bool branch_taken_0x20b08c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x20B090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B08Cu;
            // 0x20b090: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b08c) {
            ctx->pc = 0x20B098u;
            goto label_20b098;
        }
    }
    ctx->pc = 0x20B094u;
label_20b094:
    // 0x20b094: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20b094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20b098:
    // 0x20b098: 0xc082998  jal         func_20A660
label_20b09c:
    if (ctx->pc == 0x20B09Cu) {
        ctx->pc = 0x20B09Cu;
            // 0x20b09c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20B0A0u;
        goto label_20b0a0;
    }
    ctx->pc = 0x20B098u;
    SET_GPR_U32(ctx, 31, 0x20B0A0u);
    ctx->pc = 0x20B09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B098u;
            // 0x20b09c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (runtime->hasFunction(0x20A660u)) {
        auto targetFn = runtime->lookupFunction(0x20A660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B0A0u; }
        if (ctx->pc != 0x20B0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextDifferentMode__11CMenuInventFii_0x20a660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B0A0u; }
        if (ctx->pc != 0x20B0A0u) { return; }
    }
    ctx->pc = 0x20B0A0u;
label_20b0a0:
    // 0x20b0a0: 0x10000051  b           . + 4 + (0x51 << 2)
label_20b0a4:
    if (ctx->pc == 0x20B0A4u) {
        ctx->pc = 0x20B0A4u;
            // 0x20b0a4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20B0A8u;
        goto label_20b0a8;
    }
    ctx->pc = 0x20B0A0u;
    {
        const bool branch_taken_0x20b0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B0A0u;
            // 0x20b0a4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b0a0) {
            ctx->pc = 0x20B1E8u;
            goto label_20b1e8;
        }
    }
    ctx->pc = 0x20B0A8u;
label_20b0a8:
    // 0x20b0a8: 0x32830002  andi        $v1, $s4, 0x2
    ctx->pc = 0x20b0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
label_20b0ac:
    // 0x20b0ac: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
label_20b0b0:
    if (ctx->pc == 0x20B0B0u) {
        ctx->pc = 0x20B0B0u;
            // 0x20b0b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20B0B4u;
        goto label_20b0b4;
    }
    ctx->pc = 0x20B0ACu;
    {
        const bool branch_taken_0x20b0ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B0ACu;
            // 0x20b0b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b0ac) {
            ctx->pc = 0x20B1E8u;
            goto label_20b1e8;
        }
    }
    ctx->pc = 0x20B0B4u;
label_20b0b4:
    // 0x20b0b4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x20b0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_20b0b8:
    // 0x20b0b8: 0xc082998  jal         func_20A660
label_20b0bc:
    if (ctx->pc == 0x20B0BCu) {
        ctx->pc = 0x20B0BCu;
            // 0x20b0bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20B0C0u;
        goto label_20b0c0;
    }
    ctx->pc = 0x20B0B8u;
    SET_GPR_U32(ctx, 31, 0x20B0C0u);
    ctx->pc = 0x20B0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B0B8u;
            // 0x20b0bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (runtime->hasFunction(0x20A660u)) {
        auto targetFn = runtime->lookupFunction(0x20A660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B0C0u; }
        if (ctx->pc != 0x20B0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextDifferentMode__11CMenuInventFii_0x20a660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B0C0u; }
        if (ctx->pc != 0x20B0C0u) { return; }
    }
    ctx->pc = 0x20B0C0u;
label_20b0c0:
    // 0x20b0c0: 0x10000049  b           . + 4 + (0x49 << 2)
label_20b0c4:
    if (ctx->pc == 0x20B0C4u) {
        ctx->pc = 0x20B0C8u;
        goto label_20b0c8;
    }
    ctx->pc = 0x20B0C0u;
    {
        const bool branch_taken_0x20b0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b0c0) {
            ctx->pc = 0x20B1E8u;
            goto label_20b1e8;
        }
    }
    ctx->pc = 0x20B0C8u;
label_20b0c8:
    // 0x20b0c8: 0x32830002  andi        $v1, $s4, 0x2
    ctx->pc = 0x20b0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
label_20b0cc:
    // 0x20b0cc: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
label_20b0d0:
    if (ctx->pc == 0x20B0D0u) {
        ctx->pc = 0x20B0D0u;
            // 0x20b0d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20B0D4u;
        goto label_20b0d4;
    }
    ctx->pc = 0x20B0CCu;
    {
        const bool branch_taken_0x20b0cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B0CCu;
            // 0x20b0d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b0cc) {
            ctx->pc = 0x20B1E8u;
            goto label_20b1e8;
        }
    }
    ctx->pc = 0x20B0D4u;
label_20b0d4:
    // 0x20b0d4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x20b0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_20b0d8:
    // 0x20b0d8: 0xc082998  jal         func_20A660
label_20b0dc:
    if (ctx->pc == 0x20B0DCu) {
        ctx->pc = 0x20B0DCu;
            // 0x20b0dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20B0E0u;
        goto label_20b0e0;
    }
    ctx->pc = 0x20B0D8u;
    SET_GPR_U32(ctx, 31, 0x20B0E0u);
    ctx->pc = 0x20B0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B0D8u;
            // 0x20b0dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (runtime->hasFunction(0x20A660u)) {
        auto targetFn = runtime->lookupFunction(0x20A660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B0E0u; }
        if (ctx->pc != 0x20B0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextDifferentMode__11CMenuInventFii_0x20a660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B0E0u; }
        if (ctx->pc != 0x20B0E0u) { return; }
    }
    ctx->pc = 0x20B0E0u;
label_20b0e0:
    // 0x20b0e0: 0x10000041  b           . + 4 + (0x41 << 2)
label_20b0e4:
    if (ctx->pc == 0x20B0E4u) {
        ctx->pc = 0x20B0E8u;
        goto label_20b0e8;
    }
    ctx->pc = 0x20B0E0u;
    {
        const bool branch_taken_0x20b0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b0e0) {
            ctx->pc = 0x20B1E8u;
            goto label_20b1e8;
        }
    }
    ctx->pc = 0x20B0E8u;
label_20b0e8:
    // 0x20b0e8: 0x32830001  andi        $v1, $s4, 0x1
    ctx->pc = 0x20b0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_20b0ec:
    // 0x20b0ec: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_20b0f0:
    if (ctx->pc == 0x20B0F0u) {
        ctx->pc = 0x20B0F0u;
            // 0x20b0f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20B0F4u;
        goto label_20b0f4;
    }
    ctx->pc = 0x20B0ECu;
    {
        const bool branch_taken_0x20b0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B0ECu;
            // 0x20b0f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b0ec) {
            ctx->pc = 0x20B0F8u;
            goto label_20b0f8;
        }
    }
    ctx->pc = 0x20B0F4u;
label_20b0f4:
    // 0x20b0f4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x20b0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_20b0f8:
    // 0x20b0f8: 0x32830002  andi        $v1, $s4, 0x2
    ctx->pc = 0x20b0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
label_20b0fc:
    // 0x20b0fc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_20b100:
    if (ctx->pc == 0x20B100u) {
        ctx->pc = 0x20B100u;
            // 0x20b100: 0x32830010  andi        $v1, $s4, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)16);
        ctx->pc = 0x20B104u;
        goto label_20b104;
    }
    ctx->pc = 0x20B0FCu;
    {
        const bool branch_taken_0x20b0fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B0FCu;
            // 0x20b100: 0x32830010  andi        $v1, $s4, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b0fc) {
            ctx->pc = 0x20B108u;
            goto label_20b108;
        }
    }
    ctx->pc = 0x20B104u;
label_20b104:
    // 0x20b104: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20b104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_20b108:
    // 0x20b108: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_20b10c:
    if (ctx->pc == 0x20B10Cu) {
        ctx->pc = 0x20B10Cu;
            // 0x20b10c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20B110u;
        goto label_20b110;
    }
    ctx->pc = 0x20B108u;
    {
        const bool branch_taken_0x20b108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B108u;
            // 0x20b10c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b108) {
            ctx->pc = 0x20B120u;
            goto label_20b120;
        }
    }
    ctx->pc = 0x20B110u;
label_20b110:
    // 0x20b110: 0x32830040  andi        $v1, $s4, 0x40
    ctx->pc = 0x20b110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)64);
label_20b114:
    // 0x20b114: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_20b118:
    if (ctx->pc == 0x20B118u) {
        ctx->pc = 0x20B11Cu;
        goto label_20b11c;
    }
    ctx->pc = 0x20B114u;
    {
        const bool branch_taken_0x20b114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b114) {
            ctx->pc = 0x20B128u;
            goto label_20b128;
        }
    }
    ctx->pc = 0x20B11Cu;
label_20b11c:
    // 0x20b11c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20b11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b120:
    // 0x20b120: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x20b120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
label_20b124:
    // 0x20b124: 0xa0430354  sb          $v1, 0x354($v0)
    ctx->pc = 0x20b124u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 852), (uint8_t)GPR_U32(ctx, 3));
label_20b128:
    // 0x20b128: 0x32820020  andi        $v0, $s4, 0x20
    ctx->pc = 0x20b128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
label_20b12c:
    // 0x20b12c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_20b130:
    if (ctx->pc == 0x20B130u) {
        ctx->pc = 0x20B130u;
            // 0x20b130: 0x32820080  andi        $v0, $s4, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
        ctx->pc = 0x20B134u;
        goto label_20b134;
    }
    ctx->pc = 0x20B12Cu;
    {
        const bool branch_taken_0x20b12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B12Cu;
            // 0x20b130: 0x32820080  andi        $v0, $s4, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b12c) {
            ctx->pc = 0x20B13Cu;
            goto label_20b13c;
        }
    }
    ctx->pc = 0x20B134u;
label_20b134:
    // 0x20b134: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_20b138:
    if (ctx->pc == 0x20B138u) {
        ctx->pc = 0x20B13Cu;
        goto label_20b13c;
    }
    ctx->pc = 0x20B134u;
    {
        const bool branch_taken_0x20b134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b134) {
            ctx->pc = 0x20B14Cu;
            goto label_20b14c;
        }
    }
    ctx->pc = 0x20B13Cu;
label_20b13c:
    // 0x20b13c: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b140:
    // 0x20b140: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20b140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b144:
    // 0x20b144: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x20b144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_20b148:
    // 0x20b148: 0xa0430354  sb          $v1, 0x354($v0)
    ctx->pc = 0x20b148u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 852), (uint8_t)GPR_U32(ctx, 3));
label_20b14c:
    // 0x20b14c: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x20b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b150:
    // 0x20b150: 0x8c720134  lw          $s2, 0x134($v1)
    ctx->pc = 0x20b150u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
label_20b154:
    // 0x20b154: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x20b154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_20b158:
    // 0x20b158: 0xac620134  sw          $v0, 0x134($v1)
    ctx->pc = 0x20b158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 2));
label_20b15c:
    // 0x20b15c: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b160:
    // 0x20b160: 0x24430134  addiu       $v1, $v0, 0x134
    ctx->pc = 0x20b160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
label_20b164:
    // 0x20b164: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x20b164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_20b168:
    // 0x20b168: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_20b16c:
    if (ctx->pc == 0x20B16Cu) {
        ctx->pc = 0x20B16Cu;
            // 0x20b16c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20B170u;
        goto label_20b170;
    }
    ctx->pc = 0x20B168u;
    {
        const bool branch_taken_0x20b168 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20B16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B168u;
            // 0x20b16c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b168) {
            ctx->pc = 0x20B178u;
            goto label_20b178;
        }
    }
    ctx->pc = 0x20B170u;
label_20b170:
    // 0x20b170: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x20b170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_20b174:
    // 0x20b174: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x20b174u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b178:
    // 0x20b178: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20b178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b17c:
    // 0x20b17c: 0x878390f4  lh          $v1, -0x6F0C($gp)
    ctx->pc = 0x20b17cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938868)));
label_20b180:
    // 0x20b180: 0x24440134  addiu       $a0, $v0, 0x134
    ctx->pc = 0x20b180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
label_20b184:
    // 0x20b184: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x20b184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_20b188:
    // 0x20b188: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20b188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_20b18c:
    // 0x20b18c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x20b18cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20b190:
    // 0x20b190: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_20b194:
    if (ctx->pc == 0x20B194u) {
        ctx->pc = 0x20B198u;
        goto label_20b198;
    }
    ctx->pc = 0x20B190u;
    {
        const bool branch_taken_0x20b190 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b190) {
            ctx->pc = 0x20B19Cu;
            goto label_20b19c;
        }
    }
    ctx->pc = 0x20B198u;
label_20b198:
    // 0x20b198: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x20b198u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_20b19c:
    // 0x20b19c: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b1a0:
    // 0x20b1a0: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x20b1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_20b1a4:
    // 0x20b1a4: 0x8c450134  lw          $a1, 0x134($v0)
    ctx->pc = 0x20b1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_20b1a8:
    // 0x20b1a8: 0xc08ec58  jal         func_23B160
label_20b1ac:
    if (ctx->pc == 0x20B1ACu) {
        ctx->pc = 0x20B1ACu;
            // 0x20b1ac: 0x24440138  addiu       $a0, $v0, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 312));
        ctx->pc = 0x20B1B0u;
        goto label_20b1b0;
    }
    ctx->pc = 0x20B1A8u;
    SET_GPR_U32(ctx, 31, 0x20B1B0u);
    ctx->pc = 0x20B1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B1A8u;
            // 0x20b1ac: 0x24440138  addiu       $a0, $v0, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B160u;
    if (runtime->hasFunction(0x23B160u)) {
        auto targetFn = runtime->lookupFunction(0x23B160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B1B0u; }
        if (ctx->pc != 0x20B1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCheckLine__FPiii_0x23b160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B1B0u; }
        if (ctx->pc != 0x20B1B0u) { return; }
    }
    ctx->pc = 0x20B1B0u;
label_20b1b0:
    // 0x20b1b0: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_20b1b4:
    if (ctx->pc == 0x20B1B4u) {
        ctx->pc = 0x20B1B8u;
        goto label_20b1b8;
    }
    ctx->pc = 0x20B1B0u;
    {
        const bool branch_taken_0x20b1b0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b1b0) {
            ctx->pc = 0x20B1D0u;
            goto label_20b1d0;
        }
    }
    ctx->pc = 0x20B1B8u;
label_20b1b8:
    // 0x20b1b8: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20b1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b1bc:
    // 0x20b1bc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x20b1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20b1c0:
    // 0x20b1c0: 0xc082998  jal         func_20A660
label_20b1c4:
    if (ctx->pc == 0x20B1C4u) {
        ctx->pc = 0x20B1C4u;
            // 0x20b1c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20B1C8u;
        goto label_20b1c8;
    }
    ctx->pc = 0x20B1C0u;
    SET_GPR_U32(ctx, 31, 0x20B1C8u);
    ctx->pc = 0x20B1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B1C0u;
            // 0x20b1c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (runtime->hasFunction(0x20A660u)) {
        auto targetFn = runtime->lookupFunction(0x20A660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B1C8u; }
        if (ctx->pc != 0x20B1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextDifferentMode__11CMenuInventFii_0x20a660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B1C8u; }
        if (ctx->pc != 0x20B1C8u) { return; }
    }
    ctx->pc = 0x20B1C8u;
label_20b1c8:
    // 0x20b1c8: 0x10000007  b           . + 4 + (0x7 << 2)
label_20b1cc:
    if (ctx->pc == 0x20B1CCu) {
        ctx->pc = 0x20B1D0u;
        goto label_20b1d0;
    }
    ctx->pc = 0x20B1C8u;
    {
        const bool branch_taken_0x20b1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b1c8) {
            ctx->pc = 0x20B1E8u;
            goto label_20b1e8;
        }
    }
    ctx->pc = 0x20B1D0u;
label_20b1d0:
    // 0x20b1d0: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20b1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b1d4:
    // 0x20b1d4: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x20b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_20b1d8:
    // 0x20b1d8: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
label_20b1dc:
    if (ctx->pc == 0x20B1DCu) {
        ctx->pc = 0x20B1DCu;
            // 0x20b1dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20B1E0u;
        goto label_20b1e0;
    }
    ctx->pc = 0x20B1D8u;
    {
        const bool branch_taken_0x20b1d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B1D8u;
            // 0x20b1dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b1d8) {
            ctx->pc = 0x20B1E8u;
            goto label_20b1e8;
        }
    }
    ctx->pc = 0x20B1E0u;
label_20b1e0:
    // 0x20b1e0: 0xc094274  jal         func_2509D0
label_20b1e4:
    if (ctx->pc == 0x20B1E4u) {
        ctx->pc = 0x20B1E8u;
        goto label_20b1e8;
    }
    ctx->pc = 0x20B1E0u;
    SET_GPR_U32(ctx, 31, 0x20B1E8u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B1E8u; }
        if (ctx->pc != 0x20B1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B1E8u; }
        if (ctx->pc != 0x20B1E8u) { return; }
    }
    ctx->pc = 0x20B1E8u;
label_20b1e8:
    // 0x20b1e8: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20b1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b1ec:
    // 0x20b1ec: 0x84820014  lh          $v0, 0x14($a0)
    ctx->pc = 0x20b1ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
label_20b1f0:
    // 0x20b1f0: 0x12a20002  beq         $s5, $v0, . + 4 + (0x2 << 2)
label_20b1f4:
    if (ctx->pc == 0x20B1F4u) {
        ctx->pc = 0x20B1F4u;
            // 0x20b1f4: 0x24880014  addiu       $t0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->pc = 0x20B1F8u;
        goto label_20b1f8;
    }
    ctx->pc = 0x20B1F0u;
    {
        const bool branch_taken_0x20b1f0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B1F0u;
            // 0x20b1f4: 0x24880014  addiu       $t0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b1f0) {
            ctx->pc = 0x20B1FCu;
            goto label_20b1fc;
        }
    }
    ctx->pc = 0x20B1F8u;
label_20b1f8:
    // 0x20b1f8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x20b1f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b1fc:
    // 0x20b1fc: 0x8c87011c  lw          $a3, 0x11C($a0)
    ctx->pc = 0x20b1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_20b200:
    // 0x20b200: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x20b200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_20b204:
    // 0x20b204: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20b204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20b208:
    // 0x20b208: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x20b208u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20b20c:
    // 0x20b20c: 0x8c23d8d0  lw          $v1, -0x2730($at)
    ctx->pc = 0x20b20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957264)));
label_20b210:
    // 0x20b210: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x20b210u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_20b214:
    // 0x20b214: 0xa7a201ba  sh          $v0, 0x1BA($sp)
    ctx->pc = 0x20b214u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 442), (uint16_t)GPR_U32(ctx, 2));
label_20b218:
    // 0x20b218: 0xa73021  addu        $a2, $a1, $a3
    ctx->pc = 0x20b218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_20b21c:
    // 0x20b21c: 0xa7a701bc  sh          $a3, 0x1BC($sp)
    ctx->pc = 0x20b21cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 444), (uint16_t)GPR_U32(ctx, 7));
label_20b220:
    // 0x20b220: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x20b220u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_20b224:
    // 0x20b224: 0xa7b401be  sh          $s4, 0x1BE($sp)
    ctx->pc = 0x20b224u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 446), (uint16_t)GPR_U32(ctx, 20));
label_20b228:
    // 0x20b228: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x20b228u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_20b22c:
    // 0x20b22c: 0xa7a001b8  sh          $zero, 0x1B8($sp)
    ctx->pc = 0x20b22cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 440), (uint16_t)GPR_U32(ctx, 0));
label_20b230:
    // 0x20b230: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x20b230u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_20b234:
    // 0x20b234: 0x1620011a  bnez        $s1, . + 4 + (0x11A << 2)
label_20b238:
    if (ctx->pc == 0x20B238u) {
        ctx->pc = 0x20B238u;
            // 0x20b238: 0x659021  addu        $s2, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->pc = 0x20B23Cu;
        goto label_20b23c;
    }
    ctx->pc = 0x20B234u;
    {
        const bool branch_taken_0x20b234 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B234u;
            // 0x20b238: 0x659021  addu        $s2, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b234) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B23Cu;
label_20b23c:
    // 0x20b23c: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x20b23cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_20b240:
    // 0x20b240: 0x2c61000c  sltiu       $at, $v1, 0xC
    ctx->pc = 0x20b240u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_20b244:
    // 0x20b244: 0x10200116  beqz        $at, . + 4 + (0x116 << 2)
label_20b248:
    if (ctx->pc == 0x20B248u) {
        ctx->pc = 0x20B24Cu;
        goto label_20b24c;
    }
    ctx->pc = 0x20B244u;
    {
        const bool branch_taken_0x20b244 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b244) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B24Cu;
label_20b24c:
    // 0x20b24c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20b24cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_20b250:
    // 0x20b250: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20b250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20b254:
    // 0x20b254: 0x24a59cf0  addiu       $a1, $a1, -0x6310
    ctx->pc = 0x20b254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941936));
label_20b258:
    // 0x20b258: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20b258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_20b25c:
    // 0x20b25c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20b25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20b260:
    // 0x20b260: 0x600008  jr          $v1
label_20b264:
    if (ctx->pc == 0x20B264u) {
        ctx->pc = 0x20B268u;
        goto label_20b268;
    }
    ctx->pc = 0x20B260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20B268u: goto label_20b268;
            case 0x20B34Cu: goto label_20b34c;
            case 0x20B3BCu: goto label_20b3bc;
            case 0x20B410u: goto label_20b410;
            case 0x20B45Cu: goto label_20b45c;
            case 0x20B498u: goto label_20b498;
            case 0x20B4F4u: goto label_20b4f4;
            case 0x20B548u: goto label_20b548;
            case 0x20B5E0u: goto label_20b5e0;
            case 0x20B61Cu: goto label_20b61c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20B268u;
label_20b268:
    // 0x20b268: 0x8c850124  lw          $a1, 0x124($a0)
    ctx->pc = 0x20b268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
label_20b26c:
    // 0x20b26c: 0xc07faac  jal         func_1FEAB0
label_20b270:
    if (ctx->pc == 0x20B270u) {
        ctx->pc = 0x20B270u;
            // 0x20b270: 0x8f8490d4  lw          $a0, -0x6F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
        ctx->pc = 0x20B274u;
        goto label_20b274;
    }
    ctx->pc = 0x20B26Cu;
    SET_GPR_U32(ctx, 31, 0x20B274u);
    ctx->pc = 0x20B270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B26Cu;
            // 0x20b270: 0x8f8490d4  lw          $a0, -0x6F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAB0u;
    if (runtime->hasFunction(0x1FEAB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B274u; }
        if (ctx->pc != 0x20B274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoInfo__15CInventUserDataFi_0x1feab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B274u; }
        if (ctx->pc != 0x20B274u) { return; }
    }
    ctx->pc = 0x20B274u;
label_20b274:
    // 0x20b274: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20b274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20b278:
    // 0x20b278: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x20b278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_20b27c:
    // 0x20b27c: 0x12620031  beq         $s3, $v0, . + 4 + (0x31 << 2)
label_20b280:
    if (ctx->pc == 0x20B280u) {
        ctx->pc = 0x20B280u;
            // 0x20b280: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20B284u;
        goto label_20b284;
    }
    ctx->pc = 0x20B27Cu;
    {
        const bool branch_taken_0x20b27c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B27Cu;
            // 0x20b280: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b27c) {
            ctx->pc = 0x20B344u;
            goto label_20b344;
        }
    }
    ctx->pc = 0x20B284u;
label_20b284:
    // 0x20b284: 0x12630023  beq         $s3, $v1, . + 4 + (0x23 << 2)
label_20b288:
    if (ctx->pc == 0x20B288u) {
        ctx->pc = 0x20B288u;
            // 0x20b288: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x20B28Cu;
        goto label_20b28c;
    }
    ctx->pc = 0x20B284u;
    {
        const bool branch_taken_0x20b284 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x20B288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B284u;
            // 0x20b288: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b284) {
            ctx->pc = 0x20B314u;
            goto label_20b314;
        }
    }
    ctx->pc = 0x20B28Cu;
label_20b28c:
    // 0x20b28c: 0x12620015  beq         $s3, $v0, . + 4 + (0x15 << 2)
label_20b290:
    if (ctx->pc == 0x20B290u) {
        ctx->pc = 0x20B290u;
            // 0x20b290: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x20B294u;
        goto label_20b294;
    }
    ctx->pc = 0x20B28Cu;
    {
        const bool branch_taken_0x20b28c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B28Cu;
            // 0x20b290: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b28c) {
            ctx->pc = 0x20B2E4u;
            goto label_20b2e4;
        }
    }
    ctx->pc = 0x20B294u;
label_20b294:
    // 0x20b294: 0x1262000c  beq         $s3, $v0, . + 4 + (0xC << 2)
label_20b298:
    if (ctx->pc == 0x20B298u) {
        ctx->pc = 0x20B29Cu;
        goto label_20b29c;
    }
    ctx->pc = 0x20B294u;
    {
        const bool branch_taken_0x20b294 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x20b294) {
            ctx->pc = 0x20B2C8u;
            goto label_20b2c8;
        }
    }
    ctx->pc = 0x20B29Cu;
label_20b29c:
    // 0x20b29c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20b2a0:
    // 0x20b2a0: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_20b2a4:
    if (ctx->pc == 0x20B2A4u) {
        ctx->pc = 0x20B2A8u;
        goto label_20b2a8;
    }
    ctx->pc = 0x20B2A0u;
    {
        const bool branch_taken_0x20b2a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x20b2a0) {
            ctx->pc = 0x20B2B0u;
            goto label_20b2b0;
        }
    }
    ctx->pc = 0x20B2A8u;
label_20b2a8:
    // 0x20b2a8: 0x100000fd  b           . + 4 + (0xFD << 2)
label_20b2ac:
    if (ctx->pc == 0x20B2ACu) {
        ctx->pc = 0x20B2B0u;
        goto label_20b2b0;
    }
    ctx->pc = 0x20B2A8u;
    {
        const bool branch_taken_0x20b2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b2a8) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B2B0u;
label_20b2b0:
    // 0x20b2b0: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b2b4:
    // 0x20b2b4: 0x84420110  lh          $v0, 0x110($v0)
    ctx->pc = 0x20b2b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 272)));
label_20b2b8:
    // 0x20b2b8: 0x144300f9  bne         $v0, $v1, . + 4 + (0xF9 << 2)
label_20b2bc:
    if (ctx->pc == 0x20B2BCu) {
        ctx->pc = 0x20B2BCu;
            // 0x20b2bc: 0x2410003c  addiu       $s0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x20B2C0u;
        goto label_20b2c0;
    }
    ctx->pc = 0x20B2B8u;
    {
        const bool branch_taken_0x20b2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20B2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B2B8u;
            // 0x20b2bc: 0x2410003c  addiu       $s0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b2b8) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B2C0u;
label_20b2c0:
    // 0x20b2c0: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_20b2c4:
    if (ctx->pc == 0x20B2C4u) {
        ctx->pc = 0x20B2C4u;
            // 0x20b2c4: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20B2C8u;
        goto label_20b2c8;
    }
    ctx->pc = 0x20B2C0u;
    {
        const bool branch_taken_0x20b2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B2C0u;
            // 0x20b2c4: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b2c0) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B2C8u;
label_20b2c8:
    // 0x20b2c8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x20b2c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20b2cc:
    // 0x20b2cc: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b2d0:
    // 0x20b2d0: 0x84420110  lh          $v0, 0x110($v0)
    ctx->pc = 0x20b2d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 272)));
label_20b2d4:
    // 0x20b2d4: 0x144300f2  bne         $v0, $v1, . + 4 + (0xF2 << 2)
label_20b2d8:
    if (ctx->pc == 0x20B2D8u) {
        ctx->pc = 0x20B2D8u;
            // 0x20b2d8: 0x24100041  addiu       $s0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->pc = 0x20B2DCu;
        goto label_20b2dc;
    }
    ctx->pc = 0x20B2D4u;
    {
        const bool branch_taken_0x20b2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20B2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B2D4u;
            // 0x20b2d8: 0x24100041  addiu       $s0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b2d4) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B2DCu;
label_20b2dc:
    // 0x20b2dc: 0x100000f0  b           . + 4 + (0xF0 << 2)
label_20b2e0:
    if (ctx->pc == 0x20B2E0u) {
        ctx->pc = 0x20B2E0u;
            // 0x20b2e0: 0x24100036  addiu       $s0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->pc = 0x20B2E4u;
        goto label_20b2e4;
    }
    ctx->pc = 0x20B2DCu;
    {
        const bool branch_taken_0x20b2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B2DCu;
            // 0x20b2e0: 0x24100036  addiu       $s0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b2dc) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B2E4u;
label_20b2e4:
    // 0x20b2e4: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x20b2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b2e8:
    // 0x20b2e8: 0x8462060c  lh          $v0, 0x60C($v1)
    ctx->pc = 0x20b2e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1548)));
label_20b2ec:
    // 0x20b2ec: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x20b2ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_20b2f0:
    // 0x20b2f0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_20b2f4:
    if (ctx->pc == 0x20B2F4u) {
        ctx->pc = 0x20B2F4u;
            // 0x20b2f4: 0x24100046  addiu       $s0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x20B2F8u;
        goto label_20b2f8;
    }
    ctx->pc = 0x20B2F0u;
    {
        const bool branch_taken_0x20b2f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B2F0u;
            // 0x20b2f4: 0x24100046  addiu       $s0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b2f0) {
            ctx->pc = 0x20B2FCu;
            goto label_20b2fc;
        }
    }
    ctx->pc = 0x20B2F8u;
label_20b2f8:
    // 0x20b2f8: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x20b2f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20b2fc:
    // 0x20b2fc: 0x84630110  lh          $v1, 0x110($v1)
    ctx->pc = 0x20b2fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 272)));
label_20b300:
    // 0x20b300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b304:
    // 0x20b304: 0x146200e6  bne         $v1, $v0, . + 4 + (0xE6 << 2)
label_20b308:
    if (ctx->pc == 0x20B308u) {
        ctx->pc = 0x20B30Cu;
        goto label_20b30c;
    }
    ctx->pc = 0x20B304u;
    {
        const bool branch_taken_0x20b304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20b304) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B30Cu;
label_20b30c:
    // 0x20b30c: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_20b310:
    if (ctx->pc == 0x20B310u) {
        ctx->pc = 0x20B310u;
            // 0x20b310: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x20B314u;
        goto label_20b314;
    }
    ctx->pc = 0x20B30Cu;
    {
        const bool branch_taken_0x20b30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B30Cu;
            // 0x20b310: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b30c) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B314u;
label_20b314:
    // 0x20b314: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20b314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b318:
    // 0x20b318: 0xc080780  jal         func_201E00
label_20b31c:
    if (ctx->pc == 0x20B31Cu) {
        ctx->pc = 0x20B31Cu;
            // 0x20b31c: 0x8c850124  lw          $a1, 0x124($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
        ctx->pc = 0x20B320u;
        goto label_20b320;
    }
    ctx->pc = 0x20B318u;
    SET_GPR_U32(ctx, 31, 0x20B320u);
    ctx->pc = 0x20B31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B318u;
            // 0x20b31c: 0x8c850124  lw          $a1, 0x124($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201E00u;
    if (runtime->hasFunction(0x201E00u)) {
        auto targetFn = runtime->lookupFunction(0x201E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B320u; }
        if (ctx->pc != 0x20B320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelectedNetaPhotoAlready__11CMenuInventFi_0x201e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B320u; }
        if (ctx->pc != 0x20B320u) { return; }
    }
    ctx->pc = 0x20B320u;
label_20b320:
    // 0x20b320: 0x144000df  bnez        $v0, . + 4 + (0xDF << 2)
label_20b324:
    if (ctx->pc == 0x20B324u) {
        ctx->pc = 0x20B328u;
        goto label_20b328;
    }
    ctx->pc = 0x20B320u;
    {
        const bool branch_taken_0x20b320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b320) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B328u;
label_20b328:
    // 0x20b328: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x20b328u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_20b32c:
    // 0x20b32c: 0x104000dc  beqz        $v0, . + 4 + (0xDC << 2)
label_20b330:
    if (ctx->pc == 0x20B330u) {
        ctx->pc = 0x20B334u;
        goto label_20b334;
    }
    ctx->pc = 0x20B32Cu;
    {
        const bool branch_taken_0x20b32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b32c) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B334u;
label_20b334:
    // 0x20b334: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20b334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20b338:
    // 0x20b338: 0x2410005a  addiu       $s0, $zero, 0x5A
    ctx->pc = 0x20b338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_20b33c:
    // 0x20b33c: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_20b340:
    if (ctx->pc == 0x20B340u) {
        ctx->pc = 0x20B340u;
            // 0x20b340: 0xa78295ec  sh          $v0, -0x6A14($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294940140), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x20B344u;
        goto label_20b344;
    }
    ctx->pc = 0x20B33Cu;
    {
        const bool branch_taken_0x20b33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B33Cu;
            // 0x20b340: 0xa78295ec  sh          $v0, -0x6A14($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294940140), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b33c) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B344u;
label_20b344:
    // 0x20b344: 0x100000d6  b           . + 4 + (0xD6 << 2)
label_20b348:
    if (ctx->pc == 0x20B348u) {
        ctx->pc = 0x20B348u;
            // 0x20b348: 0x24100028  addiu       $s0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x20B34Cu;
        goto label_20b34c;
    }
    ctx->pc = 0x20B344u;
    {
        const bool branch_taken_0x20b344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B344u;
            // 0x20b348: 0x24100028  addiu       $s0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b344) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B34Cu;
label_20b34c:
    // 0x20b34c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20b350:
    // 0x20b350: 0x12620013  beq         $s3, $v0, . + 4 + (0x13 << 2)
label_20b354:
    if (ctx->pc == 0x20B354u) {
        ctx->pc = 0x20B358u;
        goto label_20b358;
    }
    ctx->pc = 0x20B350u;
    {
        const bool branch_taken_0x20b350 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x20b350) {
            ctx->pc = 0x20B3A0u;
            goto label_20b3a0;
        }
    }
    ctx->pc = 0x20B358u;
label_20b358:
    // 0x20b358: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b35c:
    // 0x20b35c: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_20b360:
    if (ctx->pc == 0x20B360u) {
        ctx->pc = 0x20B360u;
            // 0x20b360: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x20B364u;
        goto label_20b364;
    }
    ctx->pc = 0x20B35Cu;
    {
        const bool branch_taken_0x20b35c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B35Cu;
            // 0x20b360: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b35c) {
            ctx->pc = 0x20B36Cu;
            goto label_20b36c;
        }
    }
    ctx->pc = 0x20B364u;
label_20b364:
    // 0x20b364: 0x100000ce  b           . + 4 + (0xCE << 2)
label_20b368:
    if (ctx->pc == 0x20B368u) {
        ctx->pc = 0x20B36Cu;
        goto label_20b36c;
    }
    ctx->pc = 0x20B364u;
    {
        const bool branch_taken_0x20b364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b364) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B36Cu;
label_20b36c:
    // 0x20b36c: 0xc08e7cc  jal         func_239F30
label_20b370:
    if (ctx->pc == 0x20B370u) {
        ctx->pc = 0x20B370u;
            // 0x20b370: 0x24a59b40  addiu       $a1, $a1, -0x64C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941504));
        ctx->pc = 0x20B374u;
        goto label_20b374;
    }
    ctx->pc = 0x20B36Cu;
    SET_GPR_U32(ctx, 31, 0x20B374u);
    ctx->pc = 0x20B370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B36Cu;
            // 0x20b370: 0x24a59b40  addiu       $a1, $a1, -0x64C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B374u; }
        if (ctx->pc != 0x20B374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B374u; }
        if (ctx->pc != 0x20B374u) { return; }
    }
    ctx->pc = 0x20B374u;
label_20b374:
    // 0x20b374: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20b374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b378:
    // 0x20b378: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x20b378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_20b37c:
    // 0x20b37c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20b37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b380:
    // 0x20b380: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x20b380u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_20b384:
    // 0x20b384: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20b384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b388:
    // 0x20b388: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x20b388u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
label_20b38c:
    // 0x20b38c: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20b38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b390:
    // 0x20b390: 0xac400d7c  sw          $zero, 0xD7C($v0)
    ctx->pc = 0x20b390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3452), GPR_U32(ctx, 0));
label_20b394:
    // 0x20b394: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20b394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b398:
    // 0x20b398: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_20b39c:
    if (ctx->pc == 0x20B39Cu) {
        ctx->pc = 0x20B39Cu;
            // 0x20b39c: 0xa4430112  sh          $v1, 0x112($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 274), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x20B3A0u;
        goto label_20b3a0;
    }
    ctx->pc = 0x20B398u;
    {
        const bool branch_taken_0x20b398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B398u;
            // 0x20b39c: 0xa4430112  sh          $v1, 0x112($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 274), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b398) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B3A0u;
label_20b3a0:
    // 0x20b3a0: 0x84830110  lh          $v1, 0x110($a0)
    ctx->pc = 0x20b3a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 272)));
label_20b3a4:
    // 0x20b3a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x20b3a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20b3a8:
    // 0x20b3a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b3ac:
    // 0x20b3ac: 0x146200bc  bne         $v1, $v0, . + 4 + (0xBC << 2)
label_20b3b0:
    if (ctx->pc == 0x20B3B0u) {
        ctx->pc = 0x20B3B0u;
            // 0x20b3b0: 0x24100041  addiu       $s0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->pc = 0x20B3B4u;
        goto label_20b3b4;
    }
    ctx->pc = 0x20B3ACu;
    {
        const bool branch_taken_0x20b3ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20B3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B3ACu;
            // 0x20b3b0: 0x24100041  addiu       $s0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b3ac) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B3B4u;
label_20b3b4:
    // 0x20b3b4: 0x100000ba  b           . + 4 + (0xBA << 2)
label_20b3b8:
    if (ctx->pc == 0x20B3B8u) {
        ctx->pc = 0x20B3B8u;
            // 0x20b3b8: 0x24100036  addiu       $s0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->pc = 0x20B3BCu;
        goto label_20b3bc;
    }
    ctx->pc = 0x20B3B4u;
    {
        const bool branch_taken_0x20b3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B3B4u;
            // 0x20b3b8: 0x24100036  addiu       $s0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b3b4) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B3BCu;
label_20b3bc:
    // 0x20b3bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20b3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20b3c0:
    // 0x20b3c0: 0x12630011  beq         $s3, $v1, . + 4 + (0x11 << 2)
label_20b3c4:
    if (ctx->pc == 0x20B3C4u) {
        ctx->pc = 0x20B3C4u;
            // 0x20b3c4: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x20B3C8u;
        goto label_20b3c8;
    }
    ctx->pc = 0x20B3C0u;
    {
        const bool branch_taken_0x20b3c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x20B3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B3C0u;
            // 0x20b3c4: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b3c0) {
            ctx->pc = 0x20B408u;
            goto label_20b408;
        }
    }
    ctx->pc = 0x20B3C8u;
label_20b3c8:
    // 0x20b3c8: 0x12630007  beq         $s3, $v1, . + 4 + (0x7 << 2)
label_20b3cc:
    if (ctx->pc == 0x20B3CCu) {
        ctx->pc = 0x20B3D0u;
        goto label_20b3d0;
    }
    ctx->pc = 0x20B3C8u;
    {
        const bool branch_taken_0x20b3c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x20b3c8) {
            ctx->pc = 0x20B3E8u;
            goto label_20b3e8;
        }
    }
    ctx->pc = 0x20B3D0u;
label_20b3d0:
    // 0x20b3d0: 0x12620005  beq         $s3, $v0, . + 4 + (0x5 << 2)
label_20b3d4:
    if (ctx->pc == 0x20B3D4u) {
        ctx->pc = 0x20B3D4u;
            // 0x20b3d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20B3D8u;
        goto label_20b3d8;
    }
    ctx->pc = 0x20B3D0u;
    {
        const bool branch_taken_0x20b3d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B3D0u;
            // 0x20b3d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b3d0) {
            ctx->pc = 0x20B3E8u;
            goto label_20b3e8;
        }
    }
    ctx->pc = 0x20B3D8u;
label_20b3d8:
    // 0x20b3d8: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_20b3dc:
    if (ctx->pc == 0x20B3DCu) {
        ctx->pc = 0x20B3E0u;
        goto label_20b3e0;
    }
    ctx->pc = 0x20B3D8u;
    {
        const bool branch_taken_0x20b3d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x20b3d8) {
            ctx->pc = 0x20B3E8u;
            goto label_20b3e8;
        }
    }
    ctx->pc = 0x20B3E0u;
label_20b3e0:
    // 0x20b3e0: 0x100000af  b           . + 4 + (0xAF << 2)
label_20b3e4:
    if (ctx->pc == 0x20B3E4u) {
        ctx->pc = 0x20B3E8u;
        goto label_20b3e8;
    }
    ctx->pc = 0x20B3E0u;
    {
        const bool branch_taken_0x20b3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b3e0) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B3E8u;
label_20b3e8:
    // 0x20b3e8: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x20b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_20b3ec:
    // 0x20b3ec: 0x844200c2  lh          $v0, 0xC2($v0)
    ctx->pc = 0x20b3ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 194)));
label_20b3f0:
    // 0x20b3f0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_20b3f4:
    if (ctx->pc == 0x20B3F4u) {
        ctx->pc = 0x20B3F4u;
            // 0x20b3f4: 0x24100050  addiu       $s0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x20B3F8u;
        goto label_20b3f8;
    }
    ctx->pc = 0x20B3F0u;
    {
        const bool branch_taken_0x20b3f0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20B3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B3F0u;
            // 0x20b3f4: 0x24100050  addiu       $s0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b3f0) {
            ctx->pc = 0x20B400u;
            goto label_20b400;
        }
    }
    ctx->pc = 0x20B3F8u;
label_20b3f8:
    // 0x20b3f8: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_20b3fc:
    if (ctx->pc == 0x20B3FCu) {
        ctx->pc = 0x20B3FCu;
            // 0x20b3fc: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x20B400u;
        goto label_20b400;
    }
    ctx->pc = 0x20B3F8u;
    {
        const bool branch_taken_0x20b3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B3F8u;
            // 0x20b3fc: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b3f8) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B400u;
label_20b400:
    // 0x20b400: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_20b404:
    if (ctx->pc == 0x20B404u) {
        ctx->pc = 0x20B408u;
        goto label_20b408;
    }
    ctx->pc = 0x20B400u;
    {
        const bool branch_taken_0x20b400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b400) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B408u;
label_20b408:
    // 0x20b408: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_20b40c:
    if (ctx->pc == 0x20B40Cu) {
        ctx->pc = 0x20B40Cu;
            // 0x20b40c: 0x24100036  addiu       $s0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->pc = 0x20B410u;
        goto label_20b410;
    }
    ctx->pc = 0x20B408u;
    {
        const bool branch_taken_0x20b408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B408u;
            // 0x20b40c: 0x24100036  addiu       $s0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b408) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B410u;
label_20b410:
    // 0x20b410: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x20b410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20b414:
    // 0x20b414: 0x1263000f  beq         $s3, $v1, . + 4 + (0xF << 2)
label_20b418:
    if (ctx->pc == 0x20B418u) {
        ctx->pc = 0x20B418u;
            // 0x20b418: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20B41Cu;
        goto label_20b41c;
    }
    ctx->pc = 0x20B414u;
    {
        const bool branch_taken_0x20b414 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x20B418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B414u;
            // 0x20b418: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b414) {
            ctx->pc = 0x20B454u;
            goto label_20b454;
        }
    }
    ctx->pc = 0x20B41Cu;
label_20b41c:
    // 0x20b41c: 0x1263000b  beq         $s3, $v1, . + 4 + (0xB << 2)
label_20b420:
    if (ctx->pc == 0x20B420u) {
        ctx->pc = 0x20B420u;
            // 0x20b420: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x20B424u;
        goto label_20b424;
    }
    ctx->pc = 0x20B41Cu;
    {
        const bool branch_taken_0x20b41c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x20B420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B41Cu;
            // 0x20b420: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b41c) {
            ctx->pc = 0x20B44Cu;
            goto label_20b44c;
        }
    }
    ctx->pc = 0x20B424u;
label_20b424:
    // 0x20b424: 0x12630007  beq         $s3, $v1, . + 4 + (0x7 << 2)
label_20b428:
    if (ctx->pc == 0x20B428u) {
        ctx->pc = 0x20B42Cu;
        goto label_20b42c;
    }
    ctx->pc = 0x20B424u;
    {
        const bool branch_taken_0x20b424 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x20b424) {
            ctx->pc = 0x20B444u;
            goto label_20b444;
        }
    }
    ctx->pc = 0x20B42Cu;
label_20b42c:
    // 0x20b42c: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_20b430:
    if (ctx->pc == 0x20B430u) {
        ctx->pc = 0x20B434u;
        goto label_20b434;
    }
    ctx->pc = 0x20B42Cu;
    {
        const bool branch_taken_0x20b42c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x20b42c) {
            ctx->pc = 0x20B43Cu;
            goto label_20b43c;
        }
    }
    ctx->pc = 0x20B434u;
label_20b434:
    // 0x20b434: 0x1000009a  b           . + 4 + (0x9A << 2)
label_20b438:
    if (ctx->pc == 0x20B438u) {
        ctx->pc = 0x20B43Cu;
        goto label_20b43c;
    }
    ctx->pc = 0x20B434u;
    {
        const bool branch_taken_0x20b434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b434) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B43Cu;
label_20b43c:
    // 0x20b43c: 0x10000098  b           . + 4 + (0x98 << 2)
label_20b440:
    if (ctx->pc == 0x20B440u) {
        ctx->pc = 0x20B440u;
            // 0x20b440: 0x24100014  addiu       $s0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x20B444u;
        goto label_20b444;
    }
    ctx->pc = 0x20B43Cu;
    {
        const bool branch_taken_0x20b43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B43Cu;
            // 0x20b440: 0x24100014  addiu       $s0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b43c) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B444u;
label_20b444:
    // 0x20b444: 0x10000096  b           . + 4 + (0x96 << 2)
label_20b448:
    if (ctx->pc == 0x20B448u) {
        ctx->pc = 0x20B448u;
            // 0x20b448: 0x24100034  addiu       $s0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->pc = 0x20B44Cu;
        goto label_20b44c;
    }
    ctx->pc = 0x20B444u;
    {
        const bool branch_taken_0x20b444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B444u;
            // 0x20b448: 0x24100034  addiu       $s0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b444) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B44Cu;
label_20b44c:
    // 0x20b44c: 0x10000094  b           . + 4 + (0x94 << 2)
label_20b450:
    if (ctx->pc == 0x20B450u) {
        ctx->pc = 0x20B450u;
            // 0x20b450: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x20B454u;
        goto label_20b454;
    }
    ctx->pc = 0x20B44Cu;
    {
        const bool branch_taken_0x20b44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B44Cu;
            // 0x20b450: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b44c) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B454u;
label_20b454:
    // 0x20b454: 0x10000092  b           . + 4 + (0x92 << 2)
label_20b458:
    if (ctx->pc == 0x20B458u) {
        ctx->pc = 0x20B458u;
            // 0x20b458: 0x2410001e  addiu       $s0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x20B45Cu;
        goto label_20b45c;
    }
    ctx->pc = 0x20B454u;
    {
        const bool branch_taken_0x20b454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B454u;
            // 0x20b458: 0x2410001e  addiu       $s0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b454) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B45Cu;
label_20b45c:
    // 0x20b45c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20b45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b460:
    // 0x20b460: 0x12630009  beq         $s3, $v1, . + 4 + (0x9 << 2)
label_20b464:
    if (ctx->pc == 0x20B464u) {
        ctx->pc = 0x20B464u;
            // 0x20b464: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x20B468u;
        goto label_20b468;
    }
    ctx->pc = 0x20B460u;
    {
        const bool branch_taken_0x20b460 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x20B464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B460u;
            // 0x20b464: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b460) {
            ctx->pc = 0x20B488u;
            goto label_20b488;
        }
    }
    ctx->pc = 0x20B468u;
label_20b468:
    // 0x20b468: 0x12630005  beq         $s3, $v1, . + 4 + (0x5 << 2)
label_20b46c:
    if (ctx->pc == 0x20B46Cu) {
        ctx->pc = 0x20B470u;
        goto label_20b470;
    }
    ctx->pc = 0x20B468u;
    {
        const bool branch_taken_0x20b468 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x20b468) {
            ctx->pc = 0x20B480u;
            goto label_20b480;
        }
    }
    ctx->pc = 0x20B470u;
label_20b470:
    // 0x20b470: 0x1262008b  beq         $s3, $v0, . + 4 + (0x8B << 2)
label_20b474:
    if (ctx->pc == 0x20B474u) {
        ctx->pc = 0x20B478u;
        goto label_20b478;
    }
    ctx->pc = 0x20B470u;
    {
        const bool branch_taken_0x20b470 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x20b470) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B478u;
label_20b478:
    // 0x20b478: 0x10000089  b           . + 4 + (0x89 << 2)
label_20b47c:
    if (ctx->pc == 0x20B47Cu) {
        ctx->pc = 0x20B480u;
        goto label_20b480;
    }
    ctx->pc = 0x20B478u;
    {
        const bool branch_taken_0x20b478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b478) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B480u;
label_20b480:
    // 0x20b480: 0x10000087  b           . + 4 + (0x87 << 2)
label_20b484:
    if (ctx->pc == 0x20B484u) {
        ctx->pc = 0x20B484u;
            // 0x20b484: 0x2410006e  addiu       $s0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->pc = 0x20B488u;
        goto label_20b488;
    }
    ctx->pc = 0x20B480u;
    {
        const bool branch_taken_0x20b480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B480u;
            // 0x20b484: 0x2410006e  addiu       $s0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b480) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B488u;
label_20b488:
    // 0x20b488: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20b488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20b48c:
    // 0x20b48c: 0x2410005a  addiu       $s0, $zero, 0x5A
    ctx->pc = 0x20b48cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_20b490:
    // 0x20b490: 0x10000083  b           . + 4 + (0x83 << 2)
label_20b494:
    if (ctx->pc == 0x20B494u) {
        ctx->pc = 0x20B494u;
            // 0x20b494: 0xa78295ec  sh          $v0, -0x6A14($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294940140), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x20B498u;
        goto label_20b498;
    }
    ctx->pc = 0x20B490u;
    {
        const bool branch_taken_0x20b490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B490u;
            // 0x20b494: 0xa78295ec  sh          $v0, -0x6A14($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294940140), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b490) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B498u;
label_20b498:
    // 0x20b498: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x20b498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_20b49c:
    // 0x20b49c: 0x12630013  beq         $s3, $v1, . + 4 + (0x13 << 2)
label_20b4a0:
    if (ctx->pc == 0x20B4A0u) {
        ctx->pc = 0x20B4A0u;
            // 0x20b4a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20B4A4u;
        goto label_20b4a4;
    }
    ctx->pc = 0x20B49Cu;
    {
        const bool branch_taken_0x20b49c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x20B4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B49Cu;
            // 0x20b4a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b49c) {
            ctx->pc = 0x20B4ECu;
            goto label_20b4ec;
        }
    }
    ctx->pc = 0x20B4A4u;
label_20b4a4:
    // 0x20b4a4: 0x1263000d  beq         $s3, $v1, . + 4 + (0xD << 2)
label_20b4a8:
    if (ctx->pc == 0x20B4A8u) {
        ctx->pc = 0x20B4A8u;
            // 0x20b4a8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x20B4ACu;
        goto label_20b4ac;
    }
    ctx->pc = 0x20B4A4u;
    {
        const bool branch_taken_0x20b4a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x20B4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B4A4u;
            // 0x20b4a8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b4a4) {
            ctx->pc = 0x20B4DCu;
            goto label_20b4dc;
        }
    }
    ctx->pc = 0x20B4ACu;
label_20b4ac:
    // 0x20b4ac: 0x12630009  beq         $s3, $v1, . + 4 + (0x9 << 2)
label_20b4b0:
    if (ctx->pc == 0x20B4B0u) {
        ctx->pc = 0x20B4B0u;
            // 0x20b4b0: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x20B4B4u;
        goto label_20b4b4;
    }
    ctx->pc = 0x20B4ACu;
    {
        const bool branch_taken_0x20b4ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x20B4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B4ACu;
            // 0x20b4b0: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b4ac) {
            ctx->pc = 0x20B4D4u;
            goto label_20b4d4;
        }
    }
    ctx->pc = 0x20B4B4u;
label_20b4b4:
    // 0x20b4b4: 0x12630005  beq         $s3, $v1, . + 4 + (0x5 << 2)
label_20b4b8:
    if (ctx->pc == 0x20B4B8u) {
        ctx->pc = 0x20B4BCu;
        goto label_20b4bc;
    }
    ctx->pc = 0x20B4B4u;
    {
        const bool branch_taken_0x20b4b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x20b4b4) {
            ctx->pc = 0x20B4CCu;
            goto label_20b4cc;
        }
    }
    ctx->pc = 0x20B4BCu;
label_20b4bc:
    // 0x20b4bc: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_20b4c0:
    if (ctx->pc == 0x20B4C0u) {
        ctx->pc = 0x20B4C4u;
        goto label_20b4c4;
    }
    ctx->pc = 0x20B4BCu;
    {
        const bool branch_taken_0x20b4bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x20b4bc) {
            ctx->pc = 0x20B4CCu;
            goto label_20b4cc;
        }
    }
    ctx->pc = 0x20B4C4u;
label_20b4c4:
    // 0x20b4c4: 0x10000076  b           . + 4 + (0x76 << 2)
label_20b4c8:
    if (ctx->pc == 0x20B4C8u) {
        ctx->pc = 0x20B4CCu;
        goto label_20b4cc;
    }
    ctx->pc = 0x20B4C4u;
    {
        const bool branch_taken_0x20b4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b4c4) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B4CCu;
label_20b4cc:
    // 0x20b4cc: 0x10000074  b           . + 4 + (0x74 << 2)
label_20b4d0:
    if (ctx->pc == 0x20B4D0u) {
        ctx->pc = 0x20B4D0u;
            // 0x20b4d0: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x20B4D4u;
        goto label_20b4d4;
    }
    ctx->pc = 0x20B4CCu;
    {
        const bool branch_taken_0x20b4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B4CCu;
            // 0x20b4d0: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b4cc) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B4D4u;
label_20b4d4:
    // 0x20b4d4: 0x10000072  b           . + 4 + (0x72 << 2)
label_20b4d8:
    if (ctx->pc == 0x20B4D8u) {
        ctx->pc = 0x20B4D8u;
            // 0x20b4d8: 0x2410006e  addiu       $s0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->pc = 0x20B4DCu;
        goto label_20b4dc;
    }
    ctx->pc = 0x20B4D4u;
    {
        const bool branch_taken_0x20b4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B4D4u;
            // 0x20b4d8: 0x2410006e  addiu       $s0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b4d4) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B4DCu;
label_20b4dc:
    // 0x20b4dc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x20b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_20b4e0:
    // 0x20b4e0: 0x2410005a  addiu       $s0, $zero, 0x5A
    ctx->pc = 0x20b4e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_20b4e4:
    // 0x20b4e4: 0x1000006e  b           . + 4 + (0x6E << 2)
label_20b4e8:
    if (ctx->pc == 0x20B4E8u) {
        ctx->pc = 0x20B4E8u;
            // 0x20b4e8: 0xa78295ec  sh          $v0, -0x6A14($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294940140), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x20B4ECu;
        goto label_20b4ec;
    }
    ctx->pc = 0x20B4E4u;
    {
        const bool branch_taken_0x20b4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B4E4u;
            // 0x20b4e8: 0xa78295ec  sh          $v0, -0x6A14($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294940140), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b4e4) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B4ECu;
label_20b4ec:
    // 0x20b4ec: 0x1000006c  b           . + 4 + (0x6C << 2)
label_20b4f0:
    if (ctx->pc == 0x20B4F0u) {
        ctx->pc = 0x20B4F0u;
            // 0x20b4f0: 0x24100028  addiu       $s0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x20B4F4u;
        goto label_20b4f4;
    }
    ctx->pc = 0x20B4ECu;
    {
        const bool branch_taken_0x20b4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B4ECu;
            // 0x20b4f0: 0x24100028  addiu       $s0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b4ec) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B4F4u;
label_20b4f4:
    // 0x20b4f4: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x20b4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_20b4f8:
    // 0x20b4f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_20b4fc:
    if (ctx->pc == 0x20B4FCu) {
        ctx->pc = 0x20B4FCu;
            // 0x20b4fc: 0x32620004  andi        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x20B500u;
        goto label_20b500;
    }
    ctx->pc = 0x20B4F8u;
    {
        const bool branch_taken_0x20b4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B4F8u;
            // 0x20b4fc: 0x32620004  andi        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b4f8) {
            ctx->pc = 0x20B508u;
            goto label_20b508;
        }
    }
    ctx->pc = 0x20B500u;
label_20b500:
    // 0x20b500: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_20b504:
    if (ctx->pc == 0x20B504u) {
        ctx->pc = 0x20B504u;
            // 0x20b504: 0x32620002  andi        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x20B508u;
        goto label_20b508;
    }
    ctx->pc = 0x20B500u;
    {
        const bool branch_taken_0x20b500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B500u;
            // 0x20b504: 0x32620002  andi        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b500) {
            ctx->pc = 0x20B510u;
            goto label_20b510;
        }
    }
    ctx->pc = 0x20B508u;
label_20b508:
    // 0x20b508: 0x10000065  b           . + 4 + (0x65 << 2)
label_20b50c:
    if (ctx->pc == 0x20B50Cu) {
        ctx->pc = 0x20B50Cu;
            // 0x20b50c: 0x2410005b  addiu       $s0, $zero, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
        ctx->pc = 0x20B510u;
        goto label_20b510;
    }
    ctx->pc = 0x20B508u;
    {
        const bool branch_taken_0x20b508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B508u;
            // 0x20b50c: 0x2410005b  addiu       $s0, $zero, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b508) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B510u;
label_20b510:
    // 0x20b510: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
label_20b514:
    if (ctx->pc == 0x20B514u) {
        ctx->pc = 0x20B518u;
        goto label_20b518;
    }
    ctx->pc = 0x20B510u;
    {
        const bool branch_taken_0x20b510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b510) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B518u;
label_20b518:
    // 0x20b518: 0x84830110  lh          $v1, 0x110($a0)
    ctx->pc = 0x20b518u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 272)));
label_20b51c:
    // 0x20b51c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b520:
    // 0x20b520: 0x24100041  addiu       $s0, $zero, 0x41
    ctx->pc = 0x20b520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_20b524:
    // 0x20b524: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_20b528:
    if (ctx->pc == 0x20B528u) {
        ctx->pc = 0x20B528u;
            // 0x20b528: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x20B52Cu;
        goto label_20b52c;
    }
    ctx->pc = 0x20B524u;
    {
        const bool branch_taken_0x20b524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20B528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B524u;
            // 0x20b528: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b524) {
            ctx->pc = 0x20B530u;
            goto label_20b530;
        }
    }
    ctx->pc = 0x20B52Cu;
label_20b52c:
    // 0x20b52c: 0x24100036  addiu       $s0, $zero, 0x36
    ctx->pc = 0x20b52cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_20b530:
    // 0x20b530: 0x84830112  lh          $v1, 0x112($a0)
    ctx->pc = 0x20b530u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 274)));
label_20b534:
    // 0x20b534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b538:
    // 0x20b538: 0x14620059  bne         $v1, $v0, . + 4 + (0x59 << 2)
label_20b53c:
    if (ctx->pc == 0x20B53Cu) {
        ctx->pc = 0x20B540u;
        goto label_20b540;
    }
    ctx->pc = 0x20B538u;
    {
        const bool branch_taken_0x20b538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20b538) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B540u;
label_20b540:
    // 0x20b540: 0x10000057  b           . + 4 + (0x57 << 2)
label_20b544:
    if (ctx->pc == 0x20B544u) {
        ctx->pc = 0x20B544u;
            // 0x20b544: 0x2410006e  addiu       $s0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->pc = 0x20B548u;
        goto label_20b548;
    }
    ctx->pc = 0x20B540u;
    {
        const bool branch_taken_0x20b540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B540u;
            // 0x20b544: 0x2410006e  addiu       $s0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b540) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B548u;
label_20b548:
    // 0x20b548: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20b548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20b54c:
    // 0x20b54c: 0x1263000c  beq         $s3, $v1, . + 4 + (0xC << 2)
label_20b550:
    if (ctx->pc == 0x20B550u) {
        ctx->pc = 0x20B554u;
        goto label_20b554;
    }
    ctx->pc = 0x20B54Cu;
    {
        const bool branch_taken_0x20b54c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x20b54c) {
            ctx->pc = 0x20B580u;
            goto label_20b580;
        }
    }
    ctx->pc = 0x20B554u;
label_20b554:
    // 0x20b554: 0x12620006  beq         $s3, $v0, . + 4 + (0x6 << 2)
label_20b558:
    if (ctx->pc == 0x20B558u) {
        ctx->pc = 0x20B558u;
            // 0x20b558: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20B55Cu;
        goto label_20b55c;
    }
    ctx->pc = 0x20B554u;
    {
        const bool branch_taken_0x20b554 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B554u;
            // 0x20b558: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b554) {
            ctx->pc = 0x20B570u;
            goto label_20b570;
        }
    }
    ctx->pc = 0x20B55Cu;
label_20b55c:
    // 0x20b55c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b560:
    // 0x20b560: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_20b564:
    if (ctx->pc == 0x20B564u) {
        ctx->pc = 0x20B568u;
        goto label_20b568;
    }
    ctx->pc = 0x20B560u;
    {
        const bool branch_taken_0x20b560 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x20b560) {
            ctx->pc = 0x20B570u;
            goto label_20b570;
        }
    }
    ctx->pc = 0x20B568u;
label_20b568:
    // 0x20b568: 0x1000004d  b           . + 4 + (0x4D << 2)
label_20b56c:
    if (ctx->pc == 0x20B56Cu) {
        ctx->pc = 0x20B570u;
        goto label_20b570;
    }
    ctx->pc = 0x20B568u;
    {
        const bool branch_taken_0x20b568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b568) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B570u;
label_20b570:
    // 0x20b570: 0xc094274  jal         func_2509D0
label_20b574:
    if (ctx->pc == 0x20B574u) {
        ctx->pc = 0x20B574u;
            // 0x20b574: 0x24100064  addiu       $s0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x20B578u;
        goto label_20b578;
    }
    ctx->pc = 0x20B570u;
    SET_GPR_U32(ctx, 31, 0x20B578u);
    ctx->pc = 0x20B574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B570u;
            // 0x20b574: 0x24100064  addiu       $s0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B578u; }
        if (ctx->pc != 0x20B578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B578u; }
        if (ctx->pc != 0x20B578u) { return; }
    }
    ctx->pc = 0x20B578u;
label_20b578:
    // 0x20b578: 0x10000049  b           . + 4 + (0x49 << 2)
label_20b57c:
    if (ctx->pc == 0x20B57Cu) {
        ctx->pc = 0x20B580u;
        goto label_20b580;
    }
    ctx->pc = 0x20B578u;
    {
        const bool branch_taken_0x20b578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b578) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B580u;
label_20b580:
    // 0x20b580: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x20b580u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20b584:
    // 0x20b584: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b588:
    // 0x20b588: 0x84830110  lh          $v1, 0x110($a0)
    ctx->pc = 0x20b588u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 272)));
label_20b58c:
    // 0x20b58c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_20b590:
    if (ctx->pc == 0x20B590u) {
        ctx->pc = 0x20B590u;
            // 0x20b590: 0x24100041  addiu       $s0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->pc = 0x20B594u;
        goto label_20b594;
    }
    ctx->pc = 0x20B58Cu;
    {
        const bool branch_taken_0x20b58c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20B590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B58Cu;
            // 0x20b590: 0x24100041  addiu       $s0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b58c) {
            ctx->pc = 0x20B598u;
            goto label_20b598;
        }
    }
    ctx->pc = 0x20B594u;
label_20b594:
    // 0x20b594: 0x24100036  addiu       $s0, $zero, 0x36
    ctx->pc = 0x20b594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_20b598:
    // 0x20b598: 0x84820112  lh          $v0, 0x112($a0)
    ctx->pc = 0x20b598u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 274)));
label_20b59c:
    // 0x20b59c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20b59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b5a0:
    // 0x20b5a0: 0x1446003f  bne         $v0, $a2, . + 4 + (0x3F << 2)
label_20b5a4:
    if (ctx->pc == 0x20B5A4u) {
        ctx->pc = 0x20B5A8u;
        goto label_20b5a8;
    }
    ctx->pc = 0x20B5A0u;
    {
        const bool branch_taken_0x20b5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x20b5a0) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B5A8u;
label_20b5a8:
    // 0x20b5a8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x20b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_20b5ac:
    // 0x20b5ac: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20b5acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_20b5b0:
    // 0x20b5b0: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x20b5b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_20b5b4:
    // 0x20b5b4: 0x240300c9  addiu       $v1, $zero, 0xC9
    ctx->pc = 0x20b5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
label_20b5b8:
    // 0x20b5b8: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b5bc:
    // 0x20b5bc: 0x24a59c48  addiu       $a1, $a1, -0x63B8
    ctx->pc = 0x20b5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941768));
label_20b5c0:
    // 0x20b5c0: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x20b5c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
label_20b5c4:
    // 0x20b5c4: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b5c8:
    // 0x20b5c8: 0xac460d7c  sw          $a2, 0xD7C($v0)
    ctx->pc = 0x20b5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3452), GPR_U32(ctx, 6));
label_20b5cc:
    // 0x20b5cc: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20b5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b5d0:
    // 0x20b5d0: 0xc08e7cc  jal         func_239F30
label_20b5d4:
    if (ctx->pc == 0x20B5D4u) {
        ctx->pc = 0x20B5D4u;
            // 0x20b5d4: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x20B5D8u;
        goto label_20b5d8;
    }
    ctx->pc = 0x20B5D0u;
    SET_GPR_U32(ctx, 31, 0x20B5D8u);
    ctx->pc = 0x20B5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B5D0u;
            // 0x20b5d4: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B5D8u; }
        if (ctx->pc != 0x20B5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B5D8u; }
        if (ctx->pc != 0x20B5D8u) { return; }
    }
    ctx->pc = 0x20B5D8u;
label_20b5d8:
    // 0x20b5d8: 0x10000031  b           . + 4 + (0x31 << 2)
label_20b5dc:
    if (ctx->pc == 0x20B5DCu) {
        ctx->pc = 0x20B5E0u;
        goto label_20b5e0;
    }
    ctx->pc = 0x20B5D8u;
    {
        const bool branch_taken_0x20b5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b5d8) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B5E0u;
label_20b5e0:
    // 0x20b5e0: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x20b5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_20b5e4:
    // 0x20b5e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_20b5e8:
    if (ctx->pc == 0x20B5E8u) {
        ctx->pc = 0x20B5E8u;
            // 0x20b5e8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20B5ECu;
        goto label_20b5ec;
    }
    ctx->pc = 0x20B5E4u;
    {
        const bool branch_taken_0x20b5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B5E4u;
            // 0x20b5e8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b5e4) {
            ctx->pc = 0x20B5F8u;
            goto label_20b5f8;
        }
    }
    ctx->pc = 0x20B5ECu;
label_20b5ec:
    // 0x20b5ec: 0x32620004  andi        $v0, $s3, 0x4
    ctx->pc = 0x20b5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
label_20b5f0:
    // 0x20b5f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_20b5f4:
    if (ctx->pc == 0x20B5F4u) {
        ctx->pc = 0x20B5F4u;
            // 0x20b5f4: 0x32620002  andi        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x20B5F8u;
        goto label_20b5f8;
    }
    ctx->pc = 0x20B5F0u;
    {
        const bool branch_taken_0x20b5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B5F0u;
            // 0x20b5f4: 0x32620002  andi        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b5f0) {
            ctx->pc = 0x20B608u;
            goto label_20b608;
        }
    }
    ctx->pc = 0x20B5F8u;
label_20b5f8:
    // 0x20b5f8: 0xc094274  jal         func_2509D0
label_20b5fc:
    if (ctx->pc == 0x20B5FCu) {
        ctx->pc = 0x20B5FCu;
            // 0x20b5fc: 0x24100069  addiu       $s0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->pc = 0x20B600u;
        goto label_20b600;
    }
    ctx->pc = 0x20B5F8u;
    SET_GPR_U32(ctx, 31, 0x20B600u);
    ctx->pc = 0x20B5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B5F8u;
            // 0x20b5fc: 0x24100069  addiu       $s0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B600u; }
        if (ctx->pc != 0x20B600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B600u; }
        if (ctx->pc != 0x20B600u) { return; }
    }
    ctx->pc = 0x20B600u;
label_20b600:
    // 0x20b600: 0x10000027  b           . + 4 + (0x27 << 2)
label_20b604:
    if (ctx->pc == 0x20B604u) {
        ctx->pc = 0x20B608u;
        goto label_20b608;
    }
    ctx->pc = 0x20B600u;
    {
        const bool branch_taken_0x20b600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b600) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B608u;
label_20b608:
    // 0x20b608: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_20b60c:
    if (ctx->pc == 0x20B60Cu) {
        ctx->pc = 0x20B610u;
        goto label_20b610;
    }
    ctx->pc = 0x20B608u;
    {
        const bool branch_taken_0x20b608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b608) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B610u;
label_20b610:
    // 0x20b610: 0x24100042  addiu       $s0, $zero, 0x42
    ctx->pc = 0x20b610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_20b614:
    // 0x20b614: 0x10000022  b           . + 4 + (0x22 << 2)
label_20b618:
    if (ctx->pc == 0x20B618u) {
        ctx->pc = 0x20B618u;
            // 0x20b618: 0x24140008  addiu       $s4, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x20B61Cu;
        goto label_20b61c;
    }
    ctx->pc = 0x20B614u;
    {
        const bool branch_taken_0x20b614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B614u;
            // 0x20b618: 0x24140008  addiu       $s4, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b614) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B61Cu;
label_20b61c:
    // 0x20b61c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20b61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20b620:
    // 0x20b620: 0x1263001d  beq         $s3, $v1, . + 4 + (0x1D << 2)
label_20b624:
    if (ctx->pc == 0x20B624u) {
        ctx->pc = 0x20B624u;
            // 0x20b624: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x20B628u;
        goto label_20b628;
    }
    ctx->pc = 0x20B620u;
    {
        const bool branch_taken_0x20b620 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x20B624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B620u;
            // 0x20b624: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b620) {
            ctx->pc = 0x20B698u;
            goto label_20b698;
        }
    }
    ctx->pc = 0x20B628u;
label_20b628:
    // 0x20b628: 0x12630010  beq         $s3, $v1, . + 4 + (0x10 << 2)
label_20b62c:
    if (ctx->pc == 0x20B62Cu) {
        ctx->pc = 0x20B630u;
        goto label_20b630;
    }
    ctx->pc = 0x20B628u;
    {
        const bool branch_taken_0x20b628 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x20b628) {
            ctx->pc = 0x20B66Cu;
            goto label_20b66c;
        }
    }
    ctx->pc = 0x20B630u;
label_20b630:
    // 0x20b630: 0x12620005  beq         $s3, $v0, . + 4 + (0x5 << 2)
label_20b634:
    if (ctx->pc == 0x20B634u) {
        ctx->pc = 0x20B634u;
            // 0x20b634: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20B638u;
        goto label_20b638;
    }
    ctx->pc = 0x20B630u;
    {
        const bool branch_taken_0x20b630 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B630u;
            // 0x20b634: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b630) {
            ctx->pc = 0x20B648u;
            goto label_20b648;
        }
    }
    ctx->pc = 0x20B638u;
label_20b638:
    // 0x20b638: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_20b63c:
    if (ctx->pc == 0x20B63Cu) {
        ctx->pc = 0x20B640u;
        goto label_20b640;
    }
    ctx->pc = 0x20B638u;
    {
        const bool branch_taken_0x20b638 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x20b638) {
            ctx->pc = 0x20B648u;
            goto label_20b648;
        }
    }
    ctx->pc = 0x20B640u;
label_20b640:
    // 0x20b640: 0x10000017  b           . + 4 + (0x17 << 2)
label_20b644:
    if (ctx->pc == 0x20B644u) {
        ctx->pc = 0x20B648u;
        goto label_20b648;
    }
    ctx->pc = 0x20B640u;
    {
        const bool branch_taken_0x20b640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b640) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B648u;
label_20b648:
    // 0x20b648: 0x84820110  lh          $v0, 0x110($a0)
    ctx->pc = 0x20b648u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 272)));
label_20b64c:
    // 0x20b64c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20b64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b650:
    // 0x20b650: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_20b654:
    if (ctx->pc == 0x20B654u) {
        ctx->pc = 0x20B654u;
            // 0x20b654: 0x2410003c  addiu       $s0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x20B658u;
        goto label_20b658;
    }
    ctx->pc = 0x20B650u;
    {
        const bool branch_taken_0x20b650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20B654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B650u;
            // 0x20b654: 0x2410003c  addiu       $s0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b650) {
            ctx->pc = 0x20B664u;
            goto label_20b664;
        }
    }
    ctx->pc = 0x20B658u;
label_20b658:
    // 0x20b658: 0x84820112  lh          $v0, 0x112($a0)
    ctx->pc = 0x20b658u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 274)));
label_20b65c:
    // 0x20b65c: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
label_20b660:
    if (ctx->pc == 0x20B660u) {
        ctx->pc = 0x20B664u;
        goto label_20b664;
    }
    ctx->pc = 0x20B65Cu;
    {
        const bool branch_taken_0x20b65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20b65c) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B664u;
label_20b664:
    // 0x20b664: 0x1000000e  b           . + 4 + (0xE << 2)
label_20b668:
    if (ctx->pc == 0x20B668u) {
        ctx->pc = 0x20B668u;
            // 0x20b668: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x20B66Cu;
        goto label_20b66c;
    }
    ctx->pc = 0x20B664u;
    {
        const bool branch_taken_0x20b664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B664u;
            // 0x20b668: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b664) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B66Cu;
label_20b66c:
    // 0x20b66c: 0x8482060c  lh          $v0, 0x60C($a0)
    ctx->pc = 0x20b66cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1548)));
label_20b670:
    // 0x20b670: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x20b670u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_20b674:
    // 0x20b674: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_20b678:
    if (ctx->pc == 0x20B678u) {
        ctx->pc = 0x20B678u;
            // 0x20b678: 0x24100046  addiu       $s0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x20B67Cu;
        goto label_20b67c;
    }
    ctx->pc = 0x20B674u;
    {
        const bool branch_taken_0x20b674 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B674u;
            // 0x20b678: 0x24100046  addiu       $s0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b674) {
            ctx->pc = 0x20B680u;
            goto label_20b680;
        }
    }
    ctx->pc = 0x20B67Cu;
label_20b67c:
    // 0x20b67c: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x20b67cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20b680:
    // 0x20b680: 0x84830110  lh          $v1, 0x110($a0)
    ctx->pc = 0x20b680u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 272)));
label_20b684:
    // 0x20b684: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b688:
    // 0x20b688: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_20b68c:
    if (ctx->pc == 0x20B68Cu) {
        ctx->pc = 0x20B690u;
        goto label_20b690;
    }
    ctx->pc = 0x20B688u;
    {
        const bool branch_taken_0x20b688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20b688) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B690u;
label_20b690:
    // 0x20b690: 0x10000003  b           . + 4 + (0x3 << 2)
label_20b694:
    if (ctx->pc == 0x20B694u) {
        ctx->pc = 0x20B694u;
            // 0x20b694: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x20B698u;
        goto label_20b698;
    }
    ctx->pc = 0x20B690u;
    {
        const bool branch_taken_0x20b690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B690u;
            // 0x20b694: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b690) {
            ctx->pc = 0x20B6A0u;
            goto label_20b6a0;
        }
    }
    ctx->pc = 0x20B698u;
label_20b698:
    // 0x20b698: 0x24100042  addiu       $s0, $zero, 0x42
    ctx->pc = 0x20b698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_20b69c:
    // 0x20b69c: 0x24140008  addiu       $s4, $zero, 0x8
    ctx->pc = 0x20b69cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20b6a0:
    // 0x20b6a0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x20b6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_20b6a4:
    // 0x20b6a4: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x20b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_20b6a8:
    // 0x20b6a8: 0x12020261  beq         $s0, $v0, . + 4 + (0x261 << 2)
label_20b6ac:
    if (ctx->pc == 0x20B6ACu) {
        ctx->pc = 0x20B6ACu;
            // 0x20b6ac: 0x8c31ca50  lw          $s1, -0x35B0($at) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953552)));
        ctx->pc = 0x20B6B0u;
        goto label_20b6b0;
    }
    ctx->pc = 0x20B6A8u;
    {
        const bool branch_taken_0x20b6a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B6A8u;
            // 0x20b6ac: 0x8c31ca50  lw          $s1, -0x35B0($at) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b6a8) {
            ctx->pc = 0x20C030u;
            goto label_20c030;
        }
    }
    ctx->pc = 0x20B6B0u;
label_20b6b0:
    // 0x20b6b0: 0x24020069  addiu       $v0, $zero, 0x69
    ctx->pc = 0x20b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_20b6b4:
    // 0x20b6b4: 0x12020256  beq         $s0, $v0, . + 4 + (0x256 << 2)
label_20b6b8:
    if (ctx->pc == 0x20B6B8u) {
        ctx->pc = 0x20B6B8u;
            // 0x20b6b8: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x20B6BCu;
        goto label_20b6bc;
    }
    ctx->pc = 0x20B6B4u;
    {
        const bool branch_taken_0x20b6b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B6B4u;
            // 0x20b6b8: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b6b4) {
            ctx->pc = 0x20C010u;
            goto label_20c010;
        }
    }
    ctx->pc = 0x20B6BCu;
label_20b6bc:
    // 0x20b6bc: 0x1202024a  beq         $s0, $v0, . + 4 + (0x24A << 2)
label_20b6c0:
    if (ctx->pc == 0x20B6C0u) {
        ctx->pc = 0x20B6C0u;
            // 0x20b6c0: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->pc = 0x20B6C4u;
        goto label_20b6c4;
    }
    ctx->pc = 0x20B6BCu;
    {
        const bool branch_taken_0x20b6bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B6BCu;
            // 0x20b6c0: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b6bc) {
            ctx->pc = 0x20BFE8u;
            goto label_20bfe8;
        }
    }
    ctx->pc = 0x20B6C4u;
label_20b6c4:
    // 0x20b6c4: 0x12020244  beq         $s0, $v0, . + 4 + (0x244 << 2)
label_20b6c8:
    if (ctx->pc == 0x20B6C8u) {
        ctx->pc = 0x20B6C8u;
            // 0x20b6c8: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x20B6CCu;
        goto label_20b6cc;
    }
    ctx->pc = 0x20B6C4u;
    {
        const bool branch_taken_0x20b6c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B6C4u;
            // 0x20b6c8: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b6c4) {
            ctx->pc = 0x20BFD8u;
            goto label_20bfd8;
        }
    }
    ctx->pc = 0x20B6CCu;
label_20b6cc:
    // 0x20b6cc: 0x120201c1  beq         $s0, $v0, . + 4 + (0x1C1 << 2)
label_20b6d0:
    if (ctx->pc == 0x20B6D0u) {
        ctx->pc = 0x20B6D0u;
            // 0x20b6d0: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x20B6D4u;
        goto label_20b6d4;
    }
    ctx->pc = 0x20B6CCu;
    {
        const bool branch_taken_0x20b6cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B6CCu;
            // 0x20b6d0: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b6cc) {
            ctx->pc = 0x20BDD4u;
            goto label_20bdd4;
        }
    }
    ctx->pc = 0x20B6D4u;
label_20b6d4:
    // 0x20b6d4: 0x12020180  beq         $s0, $v0, . + 4 + (0x180 << 2)
label_20b6d8:
    if (ctx->pc == 0x20B6D8u) {
        ctx->pc = 0x20B6D8u;
            // 0x20b6d8: 0x24020036  addiu       $v0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->pc = 0x20B6DCu;
        goto label_20b6dc;
    }
    ctx->pc = 0x20B6D4u;
    {
        const bool branch_taken_0x20b6d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B6D4u;
            // 0x20b6d8: 0x24020036  addiu       $v0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b6d4) {
            ctx->pc = 0x20BCD8u;
            goto label_20bcd8;
        }
    }
    ctx->pc = 0x20B6DCu;
label_20b6dc:
    // 0x20b6dc: 0x1202016b  beq         $s0, $v0, . + 4 + (0x16B << 2)
label_20b6e0:
    if (ctx->pc == 0x20B6E0u) {
        ctx->pc = 0x20B6E0u;
            // 0x20b6e0: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->pc = 0x20B6E4u;
        goto label_20b6e4;
    }
    ctx->pc = 0x20B6DCu;
    {
        const bool branch_taken_0x20b6dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B6DCu;
            // 0x20b6e0: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b6dc) {
            ctx->pc = 0x20BC8Cu;
            goto label_20bc8c;
        }
    }
    ctx->pc = 0x20B6E4u;
label_20b6e4:
    // 0x20b6e4: 0x12020129  beq         $s0, $v0, . + 4 + (0x129 << 2)
label_20b6e8:
    if (ctx->pc == 0x20B6E8u) {
        ctx->pc = 0x20B6E8u;
            // 0x20b6e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x20B6ECu;
        goto label_20b6ec;
    }
    ctx->pc = 0x20B6E4u;
    {
        const bool branch_taken_0x20b6e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B6E4u;
            // 0x20b6e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b6e4) {
            ctx->pc = 0x20BB8Cu;
            goto label_20bb8c;
        }
    }
    ctx->pc = 0x20B6ECu;
label_20b6ec:
    // 0x20b6ec: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x20b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_20b6f0:
    // 0x20b6f0: 0x12020117  beq         $s0, $v0, . + 4 + (0x117 << 2)
label_20b6f4:
    if (ctx->pc == 0x20B6F4u) {
        ctx->pc = 0x20B6F4u;
            // 0x20b6f4: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->pc = 0x20B6F8u;
        goto label_20b6f8;
    }
    ctx->pc = 0x20B6F0u;
    {
        const bool branch_taken_0x20b6f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B6F0u;
            // 0x20b6f4: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b6f0) {
            ctx->pc = 0x20BB50u;
            goto label_20bb50;
        }
    }
    ctx->pc = 0x20B6F8u;
label_20b6f8:
    // 0x20b6f8: 0x120200ff  beq         $s0, $v0, . + 4 + (0xFF << 2)
label_20b6fc:
    if (ctx->pc == 0x20B6FCu) {
        ctx->pc = 0x20B6FCu;
            // 0x20b6fc: 0x2402005b  addiu       $v0, $zero, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
        ctx->pc = 0x20B700u;
        goto label_20b700;
    }
    ctx->pc = 0x20B6F8u;
    {
        const bool branch_taken_0x20b6f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B6F8u;
            // 0x20b6fc: 0x2402005b  addiu       $v0, $zero, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b6f8) {
            ctx->pc = 0x20BAF8u;
            goto label_20baf8;
        }
    }
    ctx->pc = 0x20B700u;
label_20b700:
    // 0x20b700: 0x120200af  beq         $s0, $v0, . + 4 + (0xAF << 2)
label_20b704:
    if (ctx->pc == 0x20B704u) {
        ctx->pc = 0x20B704u;
            // 0x20b704: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x20B708u;
        goto label_20b708;
    }
    ctx->pc = 0x20B700u;
    {
        const bool branch_taken_0x20b700 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B700u;
            // 0x20b704: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b700) {
            ctx->pc = 0x20B9C0u;
            goto label_20b9c0;
        }
    }
    ctx->pc = 0x20B708u;
label_20b708:
    // 0x20b708: 0x12020099  beq         $s0, $v0, . + 4 + (0x99 << 2)
label_20b70c:
    if (ctx->pc == 0x20B70Cu) {
        ctx->pc = 0x20B70Cu;
            // 0x20b70c: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x20B710u;
        goto label_20b710;
    }
    ctx->pc = 0x20B708u;
    {
        const bool branch_taken_0x20b708 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B708u;
            // 0x20b70c: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b708) {
            ctx->pc = 0x20B970u;
            goto label_20b970;
        }
    }
    ctx->pc = 0x20B710u;
label_20b710:
    // 0x20b710: 0x12020256  beq         $s0, $v0, . + 4 + (0x256 << 2)
label_20b714:
    if (ctx->pc == 0x20B714u) {
        ctx->pc = 0x20B714u;
            // 0x20b714: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x20B718u;
        goto label_20b718;
    }
    ctx->pc = 0x20B710u;
    {
        const bool branch_taken_0x20b710 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B710u;
            // 0x20b714: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b710) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20B718u;
label_20b718:
    // 0x20b718: 0x1202005f  beq         $s0, $v0, . + 4 + (0x5F << 2)
label_20b71c:
    if (ctx->pc == 0x20B71Cu) {
        ctx->pc = 0x20B71Cu;
            // 0x20b71c: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x20B720u;
        goto label_20b720;
    }
    ctx->pc = 0x20B718u;
    {
        const bool branch_taken_0x20b718 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B718u;
            // 0x20b71c: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b718) {
            ctx->pc = 0x20B898u;
            goto label_20b898;
        }
    }
    ctx->pc = 0x20B720u;
label_20b720:
    // 0x20b720: 0x12020057  beq         $s0, $v0, . + 4 + (0x57 << 2)
label_20b724:
    if (ctx->pc == 0x20B724u) {
        ctx->pc = 0x20B724u;
            // 0x20b724: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x20B728u;
        goto label_20b728;
    }
    ctx->pc = 0x20B720u;
    {
        const bool branch_taken_0x20b720 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B720u;
            // 0x20b724: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b720) {
            ctx->pc = 0x20B880u;
            goto label_20b880;
        }
    }
    ctx->pc = 0x20B728u;
label_20b728:
    // 0x20b728: 0x12020016  beq         $s0, $v0, . + 4 + (0x16 << 2)
label_20b72c:
    if (ctx->pc == 0x20B72Cu) {
        ctx->pc = 0x20B72Cu;
            // 0x20b72c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x20B730u;
        goto label_20b730;
    }
    ctx->pc = 0x20B728u;
    {
        const bool branch_taken_0x20b728 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B728u;
            // 0x20b72c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b728) {
            ctx->pc = 0x20B784u;
            goto label_20b784;
        }
    }
    ctx->pc = 0x20B730u;
label_20b730:
    // 0x20b730: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x20b730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_20b734:
    // 0x20b734: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
label_20b738:
    if (ctx->pc == 0x20B738u) {
        ctx->pc = 0x20B738u;
            // 0x20b738: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x20B73Cu;
        goto label_20b73c;
    }
    ctx->pc = 0x20B734u;
    {
        const bool branch_taken_0x20b734 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B734u;
            // 0x20b738: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b734) {
            ctx->pc = 0x20B760u;
            goto label_20b760;
        }
    }
    ctx->pc = 0x20B73Cu;
label_20b73c:
    // 0x20b73c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x20b73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20b740:
    // 0x20b740: 0x12040003  beq         $s0, $a0, . + 4 + (0x3 << 2)
label_20b744:
    if (ctx->pc == 0x20B744u) {
        ctx->pc = 0x20B748u;
        goto label_20b748;
    }
    ctx->pc = 0x20B740u;
    {
        const bool branch_taken_0x20b740 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x20b740) {
            ctx->pc = 0x20B750u;
            goto label_20b750;
        }
    }
    ctx->pc = 0x20B748u;
label_20b748:
    // 0x20b748: 0x10000248  b           . + 4 + (0x248 << 2)
label_20b74c:
    if (ctx->pc == 0x20B74Cu) {
        ctx->pc = 0x20B750u;
        goto label_20b750;
    }
    ctx->pc = 0x20B748u;
    {
        const bool branch_taken_0x20b748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b748) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20B750u;
label_20b750:
    // 0x20b750: 0xc094274  jal         func_2509D0
label_20b754:
    if (ctx->pc == 0x20B754u) {
        ctx->pc = 0x20B758u;
        goto label_20b758;
    }
    ctx->pc = 0x20B750u;
    SET_GPR_U32(ctx, 31, 0x20B758u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B758u; }
        if (ctx->pc != 0x20B758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B758u; }
        if (ctx->pc != 0x20B758u) { return; }
    }
    ctx->pc = 0x20B758u;
label_20b758:
    // 0x20b758: 0x10000244  b           . + 4 + (0x244 << 2)
label_20b75c:
    if (ctx->pc == 0x20B75Cu) {
        ctx->pc = 0x20B760u;
        goto label_20b760;
    }
    ctx->pc = 0x20B758u;
    {
        const bool branch_taken_0x20b758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b758) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20B760u;
label_20b760:
    // 0x20b760: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20b760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b764:
    // 0x20b764: 0x8c28cb44  lw          $t0, -0x34BC($at)
    ctx->pc = 0x20b764u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953796)));
label_20b768:
    // 0x20b768: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20b768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20b76c:
    // 0x20b76c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x20b76cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20b770:
    // 0x20b770: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x20b770u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20b774:
    // 0x20b774: 0xc08dca8  jal         func_2372A0
label_20b778:
    if (ctx->pc == 0x20B778u) {
        ctx->pc = 0x20B778u;
            // 0x20b778: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20B77Cu;
        goto label_20b77c;
    }
    ctx->pc = 0x20B774u;
    SET_GPR_U32(ctx, 31, 0x20B77Cu);
    ctx->pc = 0x20B778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B774u;
            // 0x20b778: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2372A0u;
    if (runtime->hasFunction(0x2372A0u)) {
        auto targetFn = runtime->lookupFunction(0x2372A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B77Cu; }
        if (ctx->pc != 0x20B77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemMoveItemCommand__14CBaseMenuClassFP13CGameDataUsediiP16CMenuPosDataFormi_0x2372a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B77Cu; }
        if (ctx->pc != 0x20B77Cu) { return; }
    }
    ctx->pc = 0x20B77Cu;
label_20b77c:
    // 0x20b77c: 0x1000023b  b           . + 4 + (0x23B << 2)
label_20b780:
    if (ctx->pc == 0x20B780u) {
        ctx->pc = 0x20B784u;
        goto label_20b784;
    }
    ctx->pc = 0x20B77Cu;
    {
        const bool branch_taken_0x20b77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b77c) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20B784u;
label_20b784:
    // 0x20b784: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20b784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b788:
    // 0x20b788: 0x8c27cb44  lw          $a3, -0x34BC($at)
    ctx->pc = 0x20b788u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953796)));
label_20b78c:
    // 0x20b78c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20b78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20b790:
    // 0x20b790: 0xc08e31c  jal         func_238C70
label_20b794:
    if (ctx->pc == 0x20B794u) {
        ctx->pc = 0x20B794u;
            // 0x20b794: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x20B798u;
        goto label_20b798;
    }
    ctx->pc = 0x20B790u;
    SET_GPR_U32(ctx, 31, 0x20B798u);
    ctx->pc = 0x20B794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B790u;
            // 0x20b794: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238C70u;
    if (runtime->hasFunction(0x238C70u)) {
        auto targetFn = runtime->lookupFunction(0x238C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B798u; }
        if (ctx->pc != 0x20B798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSpectolFusion__14CBaseMenuClassFP13CGameDataUsediP16CMenuPosDataForm_0x238c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B798u; }
        if (ctx->pc != 0x20B798u) { return; }
    }
    ctx->pc = 0x20B798u;
label_20b798:
    // 0x20b798: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_20b79c:
    if (ctx->pc == 0x20B79Cu) {
        ctx->pc = 0x20B7A0u;
        goto label_20b7a0;
    }
    ctx->pc = 0x20B798u;
    {
        const bool branch_taken_0x20b798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b798) {
            ctx->pc = 0x20B7C4u;
            goto label_20b7c4;
        }
    }
    ctx->pc = 0x20B7A0u;
label_20b7a0:
    // 0x20b7a0: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x20b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_20b7a4:
    // 0x20b7a4: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x20b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_20b7a8:
    // 0x20b7a8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_20b7ac:
    if (ctx->pc == 0x20B7ACu) {
        ctx->pc = 0x20B7ACu;
            // 0x20b7ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20B7B0u;
        goto label_20b7b0;
    }
    ctx->pc = 0x20B7A8u;
    {
        const bool branch_taken_0x20b7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B7A8u;
            // 0x20b7ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b7a8) {
            ctx->pc = 0x20B7B4u;
            goto label_20b7b4;
        }
    }
    ctx->pc = 0x20B7B0u;
label_20b7b0:
    // 0x20b7b0: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x20b7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_20b7b4:
    // 0x20b7b4: 0xc094274  jal         func_2509D0
label_20b7b8:
    if (ctx->pc == 0x20B7B8u) {
        ctx->pc = 0x20B7BCu;
        goto label_20b7bc;
    }
    ctx->pc = 0x20B7B4u;
    SET_GPR_U32(ctx, 31, 0x20B7BCu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B7BCu; }
        if (ctx->pc != 0x20B7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B7BCu; }
        if (ctx->pc != 0x20B7BCu) { return; }
    }
    ctx->pc = 0x20B7BCu;
label_20b7bc:
    // 0x20b7bc: 0x1000022b  b           . + 4 + (0x22B << 2)
label_20b7c0:
    if (ctx->pc == 0x20B7C0u) {
        ctx->pc = 0x20B7C4u;
        goto label_20b7c4;
    }
    ctx->pc = 0x20B7BCu;
    {
        const bool branch_taken_0x20b7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b7bc) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20B7C4u;
label_20b7c4:
    // 0x20b7c4: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x20b7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_20b7c8:
    // 0x20b7c8: 0xc08f0b8  jal         func_23C2E0
label_20b7cc:
    if (ctx->pc == 0x20B7CCu) {
        ctx->pc = 0x20B7CCu;
            // 0x20b7cc: 0x27a501b8  addiu       $a1, $sp, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
        ctx->pc = 0x20B7D0u;
        goto label_20b7d0;
    }
    ctx->pc = 0x20B7C8u;
    SET_GPR_U32(ctx, 31, 0x20B7D0u);
    ctx->pc = 0x20B7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B7C8u;
            // 0x20b7cc: 0x27a501b8  addiu       $a1, $sp, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C2E0u;
    if (runtime->hasFunction(0x23C2E0u)) {
        auto targetFn = runtime->lookupFunction(0x23C2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B7D0u; }
        if (ctx->pc != 0x20B7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableSwapNowPos__12CMenuKeyFuncFP18MENU_SWAPITEM_INFO_0x23c2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B7D0u; }
        if (ctx->pc != 0x20B7D0u) { return; }
    }
    ctx->pc = 0x20B7D0u;
label_20b7d0:
    // 0x20b7d0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20b7d4:
    // 0x20b7d4: 0x1043001e  beq         $v0, $v1, . + 4 + (0x1E << 2)
label_20b7d8:
    if (ctx->pc == 0x20B7D8u) {
        ctx->pc = 0x20B7D8u;
            // 0x20b7d8: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x20B7DCu;
        goto label_20b7dc;
    }
    ctx->pc = 0x20B7D4u;
    {
        const bool branch_taken_0x20b7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20B7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B7D4u;
            // 0x20b7d8: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b7d4) {
            ctx->pc = 0x20B850u;
            goto label_20b850;
        }
    }
    ctx->pc = 0x20B7DCu;
label_20b7dc:
    // 0x20b7dc: 0x10430018  beq         $v0, $v1, . + 4 + (0x18 << 2)
label_20b7e0:
    if (ctx->pc == 0x20B7E0u) {
        ctx->pc = 0x20B7E0u;
            // 0x20b7e0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x20B7E4u;
        goto label_20b7e4;
    }
    ctx->pc = 0x20B7DCu;
    {
        const bool branch_taken_0x20b7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20B7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B7DCu;
            // 0x20b7e0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b7dc) {
            ctx->pc = 0x20B840u;
            goto label_20b840;
        }
    }
    ctx->pc = 0x20B7E4u;
label_20b7e4:
    // 0x20b7e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20b7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20b7e8:
    // 0x20b7e8: 0x10430014  beq         $v0, $v1, . + 4 + (0x14 << 2)
label_20b7ec:
    if (ctx->pc == 0x20B7ECu) {
        ctx->pc = 0x20B7ECu;
            // 0x20b7ec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20B7F0u;
        goto label_20b7f0;
    }
    ctx->pc = 0x20B7E8u;
    {
        const bool branch_taken_0x20b7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20B7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B7E8u;
            // 0x20b7ec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b7e8) {
            ctx->pc = 0x20B83Cu;
            goto label_20b83c;
        }
    }
    ctx->pc = 0x20B7F0u;
label_20b7f0:
    // 0x20b7f0: 0x10470012  beq         $v0, $a3, . + 4 + (0x12 << 2)
label_20b7f4:
    if (ctx->pc == 0x20B7F4u) {
        ctx->pc = 0x20B7F8u;
        goto label_20b7f8;
    }
    ctx->pc = 0x20B7F0u;
    {
        const bool branch_taken_0x20b7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x20b7f0) {
            ctx->pc = 0x20B83Cu;
            goto label_20b83c;
        }
    }
    ctx->pc = 0x20B7F8u;
label_20b7f8:
    // 0x20b7f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_20b7fc:
    if (ctx->pc == 0x20B7FCu) {
        ctx->pc = 0x20B800u;
        goto label_20b800;
    }
    ctx->pc = 0x20B7F8u;
    {
        const bool branch_taken_0x20b7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b7f8) {
            ctx->pc = 0x20B808u;
            goto label_20b808;
        }
    }
    ctx->pc = 0x20B800u;
label_20b800:
    // 0x20b800: 0x1000001b  b           . + 4 + (0x1B << 2)
label_20b804:
    if (ctx->pc == 0x20B804u) {
        ctx->pc = 0x20B804u;
            // 0x20b804: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x20B808u;
        goto label_20b808;
    }
    ctx->pc = 0x20B800u;
    {
        const bool branch_taken_0x20b800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B800u;
            // 0x20b804: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b800) {
            ctx->pc = 0x20B870u;
            goto label_20b870;
        }
    }
    ctx->pc = 0x20B808u;
label_20b808:
    // 0x20b808: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x20b808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_20b80c:
    // 0x20b80c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20b80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20b810:
    // 0x20b810: 0x27a601b8  addiu       $a2, $sp, 0x1B8
    ctx->pc = 0x20b810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_20b814:
    // 0x20b814: 0xc08f9ac  jal         func_23E6B0
label_20b818:
    if (ctx->pc == 0x20B818u) {
        ctx->pc = 0x20B818u;
            // 0x20b818: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20B81Cu;
        goto label_20b81c;
    }
    ctx->pc = 0x20B814u;
    SET_GPR_U32(ctx, 31, 0x20B81Cu);
    ctx->pc = 0x20B818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B814u;
            // 0x20b818: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E6B0u;
    if (runtime->hasFunction(0x23E6B0u)) {
        auto targetFn = runtime->lookupFunction(0x23E6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B81Cu; }
        if (ctx->pc != 0x20B81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSwapItem__12CMenuKeyFuncFP13CGameDataUsedP18MENU_SWAPITEM_INFOib_0x23e6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B81Cu; }
        if (ctx->pc != 0x20B81Cu) { return; }
    }
    ctx->pc = 0x20B81Cu;
label_20b81c:
    // 0x20b81c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x20b81cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_20b820:
    // 0x20b820: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x20b820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_20b824:
    // 0x20b824: 0x24421460  addiu       $v0, $v0, 0x1460
    ctx->pc = 0x20b824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5216));
label_20b828:
    // 0x20b828: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20b828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20b82c:
    // 0x20b82c: 0xc094274  jal         func_2509D0
label_20b830:
    if (ctx->pc == 0x20B830u) {
        ctx->pc = 0x20B830u;
            // 0x20b830: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x20B834u;
        goto label_20b834;
    }
    ctx->pc = 0x20B82Cu;
    SET_GPR_U32(ctx, 31, 0x20B834u);
    ctx->pc = 0x20B830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B82Cu;
            // 0x20b830: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B834u; }
        if (ctx->pc != 0x20B834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B834u; }
        if (ctx->pc != 0x20B834u) { return; }
    }
    ctx->pc = 0x20B834u;
label_20b834:
    // 0x20b834: 0x1000020d  b           . + 4 + (0x20D << 2)
label_20b838:
    if (ctx->pc == 0x20B838u) {
        ctx->pc = 0x20B83Cu;
        goto label_20b83c;
    }
    ctx->pc = 0x20B834u;
    {
        const bool branch_taken_0x20b834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b834) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20B83Cu;
label_20b83c:
    // 0x20b83c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x20b83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20b840:
    // 0x20b840: 0xc094274  jal         func_2509D0
label_20b844:
    if (ctx->pc == 0x20B844u) {
        ctx->pc = 0x20B848u;
        goto label_20b848;
    }
    ctx->pc = 0x20B840u;
    SET_GPR_U32(ctx, 31, 0x20B848u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B848u; }
        if (ctx->pc != 0x20B848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B848u; }
        if (ctx->pc != 0x20B848u) { return; }
    }
    ctx->pc = 0x20B848u;
label_20b848:
    // 0x20b848: 0x10000208  b           . + 4 + (0x208 << 2)
label_20b84c:
    if (ctx->pc == 0x20B84Cu) {
        ctx->pc = 0x20B850u;
        goto label_20b850;
    }
    ctx->pc = 0x20B848u;
    {
        const bool branch_taken_0x20b848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b848) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20B850u;
label_20b850:
    // 0x20b850: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20b850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b854:
    // 0x20b854: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x20b854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20b858:
    // 0x20b858: 0xc08e73c  jal         func_239CF0
label_20b85c:
    if (ctx->pc == 0x20B85Cu) {
        ctx->pc = 0x20B85Cu;
            // 0x20b85c: 0x27a501b8  addiu       $a1, $sp, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
        ctx->pc = 0x20B860u;
        goto label_20b860;
    }
    ctx->pc = 0x20B858u;
    SET_GPR_U32(ctx, 31, 0x20B860u);
    ctx->pc = 0x20B85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B858u;
            // 0x20b85c: 0x27a501b8  addiu       $a1, $sp, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239CF0u;
    if (runtime->hasFunction(0x239CF0u)) {
        auto targetFn = runtime->lookupFunction(0x239CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B860u; }
        if (ctx->pc != 0x20B860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAskHowMuchItemNum__14CBaseMenuClassFP18MENU_SWAPITEM_INFOP13CGameDataUsed_0x239cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B860u; }
        if (ctx->pc != 0x20B860u) { return; }
    }
    ctx->pc = 0x20B860u;
label_20b860:
    // 0x20b860: 0xc094274  jal         func_2509D0
label_20b864:
    if (ctx->pc == 0x20B864u) {
        ctx->pc = 0x20B864u;
            // 0x20b864: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20B868u;
        goto label_20b868;
    }
    ctx->pc = 0x20B860u;
    SET_GPR_U32(ctx, 31, 0x20B868u);
    ctx->pc = 0x20B864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B860u;
            // 0x20b864: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B868u; }
        if (ctx->pc != 0x20B868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B868u; }
        if (ctx->pc != 0x20B868u) { return; }
    }
    ctx->pc = 0x20B868u;
label_20b868:
    // 0x20b868: 0x10000200  b           . + 4 + (0x200 << 2)
label_20b86c:
    if (ctx->pc == 0x20B86Cu) {
        ctx->pc = 0x20B870u;
        goto label_20b870;
    }
    ctx->pc = 0x20B868u;
    {
        const bool branch_taken_0x20b868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b868) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20B870u;
label_20b870:
    // 0x20b870: 0xc094274  jal         func_2509D0
label_20b874:
    if (ctx->pc == 0x20B874u) {
        ctx->pc = 0x20B878u;
        goto label_20b878;
    }
    ctx->pc = 0x20B870u;
    SET_GPR_U32(ctx, 31, 0x20B878u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B878u; }
        if (ctx->pc != 0x20B878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B878u; }
        if (ctx->pc != 0x20B878u) { return; }
    }
    ctx->pc = 0x20B878u;
label_20b878:
    // 0x20b878: 0x100001fc  b           . + 4 + (0x1FC << 2)
label_20b87c:
    if (ctx->pc == 0x20B87Cu) {
        ctx->pc = 0x20B880u;
        goto label_20b880;
    }
    ctx->pc = 0x20B878u;
    {
        const bool branch_taken_0x20b878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b878) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20B880u;
label_20b880:
    // 0x20b880: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x20b880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_20b884:
    // 0x20b884: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20b884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20b888:
    // 0x20b888: 0xc08f244  jal         func_23C910
label_20b88c:
    if (ctx->pc == 0x20B88Cu) {
        ctx->pc = 0x20B88Cu;
            // 0x20b88c: 0x27a601b8  addiu       $a2, $sp, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
        ctx->pc = 0x20B890u;
        goto label_20b890;
    }
    ctx->pc = 0x20B888u;
    SET_GPR_U32(ctx, 31, 0x20B890u);
    ctx->pc = 0x20B88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B888u;
            // 0x20b88c: 0x27a601b8  addiu       $a2, $sp, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C910u;
    if (runtime->hasFunction(0x23C910u)) {
        auto targetFn = runtime->lookupFunction(0x23C910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B890u; }
        if (ctx->pc != 0x20B890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemAll__12CMenuKeyFuncFP13CGameDataUsedP18MENU_SWAPITEM_INFO_0x23c910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B890u; }
        if (ctx->pc != 0x20B890u) { return; }
    }
    ctx->pc = 0x20B890u;
label_20b890:
    // 0x20b890: 0x100001f6  b           . + 4 + (0x1F6 << 2)
label_20b894:
    if (ctx->pc == 0x20B894u) {
        ctx->pc = 0x20B898u;
        goto label_20b898;
    }
    ctx->pc = 0x20B890u;
    {
        const bool branch_taken_0x20b890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b890) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20B898u;
label_20b898:
    // 0x20b898: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x20b898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b89c:
    // 0x20b89c: 0x8462060c  lh          $v0, 0x60C($v1)
    ctx->pc = 0x20b89cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1548)));
label_20b8a0:
    // 0x20b8a0: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x20b8a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20b8a4:
    // 0x20b8a4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_20b8a8:
    if (ctx->pc == 0x20B8A8u) {
        ctx->pc = 0x20B8A8u;
            // 0x20b8a8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x20B8ACu;
        goto label_20b8ac;
    }
    ctx->pc = 0x20B8A4u;
    {
        const bool branch_taken_0x20b8a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B8A4u;
            // 0x20b8a8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b8a4) {
            ctx->pc = 0x20B8BCu;
            goto label_20b8bc;
        }
    }
    ctx->pc = 0x20B8ACu;
label_20b8ac:
    // 0x20b8ac: 0xc094274  jal         func_2509D0
label_20b8b0:
    if (ctx->pc == 0x20B8B0u) {
        ctx->pc = 0x20B8B4u;
        goto label_20b8b4;
    }
    ctx->pc = 0x20B8ACu;
    SET_GPR_U32(ctx, 31, 0x20B8B4u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B8B4u; }
        if (ctx->pc != 0x20B8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B8B4u; }
        if (ctx->pc != 0x20B8B4u) { return; }
    }
    ctx->pc = 0x20B8B4u;
label_20b8b4:
    // 0x20b8b4: 0x100001ed  b           . + 4 + (0x1ED << 2)
label_20b8b8:
    if (ctx->pc == 0x20B8B8u) {
        ctx->pc = 0x20B8BCu;
        goto label_20b8bc;
    }
    ctx->pc = 0x20B8B4u;
    {
        const bool branch_taken_0x20b8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b8b4) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20B8BCu;
label_20b8bc:
    // 0x20b8bc: 0x84630014  lh          $v1, 0x14($v1)
    ctx->pc = 0x20b8bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
label_20b8c0:
    // 0x20b8c0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20b8c4:
    // 0x20b8c4: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_20b8c8:
    if (ctx->pc == 0x20B8C8u) {
        ctx->pc = 0x20B8CCu;
        goto label_20b8cc;
    }
    ctx->pc = 0x20B8C4u;
    {
        const bool branch_taken_0x20b8c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20b8c4) {
            ctx->pc = 0x20B914u;
            goto label_20b914;
        }
    }
    ctx->pc = 0x20B8CCu;
label_20b8cc:
    // 0x20b8cc: 0x8f8490d8  lw          $a0, -0x6F28($gp)
    ctx->pc = 0x20b8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938840)));
label_20b8d0:
    // 0x20b8d0: 0xc07fa10  jal         func_1FE840
label_20b8d4:
    if (ctx->pc == 0x20B8D4u) {
        ctx->pc = 0x20B8D4u;
            // 0x20b8d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20B8D8u;
        goto label_20b8d8;
    }
    ctx->pc = 0x20B8D0u;
    SET_GPR_U32(ctx, 31, 0x20B8D8u);
    ctx->pc = 0x20B8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B8D0u;
            // 0x20b8d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE840u;
    if (runtime->hasFunction(0x1FE840u)) {
        auto targetFn = runtime->lookupFunction(0x1FE840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B8D8u; }
        if (ctx->pc != 0x20B8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAlbumPhotoInfo__13CDC2AlbumDataFi_0x1fe840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B8D8u; }
        if (ctx->pc != 0x20B8D8u) { return; }
    }
    ctx->pc = 0x20B8D8u;
label_20b8d8:
    // 0x20b8d8: 0x8f8590d8  lw          $a1, -0x6F28($gp)
    ctx->pc = 0x20b8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938840)));
label_20b8dc:
    // 0x20b8dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b8dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20b8e0:
    // 0x20b8e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20b8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20b8e4:
    // 0x20b8e4: 0xc07f880  jal         func_1FE200
label_20b8e8:
    if (ctx->pc == 0x20B8E8u) {
        ctx->pc = 0x20B8E8u;
            // 0x20b8e8: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x20B8ECu;
        goto label_20b8ec;
    }
    ctx->pc = 0x20B8E4u;
    SET_GPR_U32(ctx, 31, 0x20B8ECu);
    ctx->pc = 0x20B8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B8E4u;
            // 0x20b8e8: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE200u;
    if (runtime->hasFunction(0x1FE200u)) {
        auto targetFn = runtime->lookupFunction(0x1FE200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B8ECu; }
        if (ctx->pc != 0x20B8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PictureSeiton__FP17USER_PICTURE_INFOPci_0x1fe200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B8ECu; }
        if (ctx->pc != 0x20B8ECu) { return; }
    }
    ctx->pc = 0x20B8ECu;
label_20b8ec:
    // 0x20b8ec: 0xc07f9e4  jal         func_1FE790
label_20b8f0:
    if (ctx->pc == 0x20B8F0u) {
        ctx->pc = 0x20B8F0u;
            // 0x20b8f0: 0x8f8490d8  lw          $a0, -0x6F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938840)));
        ctx->pc = 0x20B8F4u;
        goto label_20b8f4;
    }
    ctx->pc = 0x20B8ECu;
    SET_GPR_U32(ctx, 31, 0x20B8F4u);
    ctx->pc = 0x20B8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B8ECu;
            // 0x20b8f0: 0x8f8490d8  lw          $a0, -0x6F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938840)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE790u;
    if (runtime->hasFunction(0x1FE790u)) {
        auto targetFn = runtime->lookupFunction(0x1FE790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B8F4u; }
        if (ctx->pc != 0x20B8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RelateAlbumPicData__13CDC2AlbumDataFv_0x1fe790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B8F4u; }
        if (ctx->pc != 0x20B8F4u) { return; }
    }
    ctx->pc = 0x20B8F4u;
label_20b8f4:
    // 0x20b8f4: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b8f8:
    // 0x20b8f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20b8f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20b8fc:
    // 0x20b8fc: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x20b8fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_20b900:
    // 0x20b900: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x20b900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_20b904:
    // 0x20b904: 0xc07f958  jal         func_1FE560
label_20b908:
    if (ctx->pc == 0x20B908u) {
        ctx->pc = 0x20B908u;
            // 0x20b908: 0x24450440  addiu       $a1, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->pc = 0x20B90Cu;
        goto label_20b90c;
    }
    ctx->pc = 0x20B904u;
    SET_GPR_U32(ctx, 31, 0x20B90Cu);
    ctx->pc = 0x20B908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B904u;
            // 0x20b908: 0x24450440  addiu       $a1, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE560u;
    if (runtime->hasFunction(0x1FE560u)) {
        auto targetFn = runtime->lookupFunction(0x1FE560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B90Cu; }
        if (ctx->pc != 0x20B90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachPictTex__FiPP10mgCTextureP17USER_PICTURE_INFOi_0x1fe560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B90Cu; }
        if (ctx->pc != 0x20B90Cu) { return; }
    }
    ctx->pc = 0x20B90Cu;
label_20b90c:
    // 0x20b90c: 0x10000014  b           . + 4 + (0x14 << 2)
label_20b910:
    if (ctx->pc == 0x20B910u) {
        ctx->pc = 0x20B910u;
            // 0x20b910: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20B914u;
        goto label_20b914;
    }
    ctx->pc = 0x20B90Cu;
    {
        const bool branch_taken_0x20b90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B90Cu;
            // 0x20b910: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b90c) {
            ctx->pc = 0x20B960u;
            goto label_20b960;
        }
    }
    ctx->pc = 0x20B914u;
label_20b914:
    // 0x20b914: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x20b914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
label_20b918:
    // 0x20b918: 0xc07faac  jal         func_1FEAB0
label_20b91c:
    if (ctx->pc == 0x20B91Cu) {
        ctx->pc = 0x20B91Cu;
            // 0x20b91c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20B920u;
        goto label_20b920;
    }
    ctx->pc = 0x20B918u;
    SET_GPR_U32(ctx, 31, 0x20B920u);
    ctx->pc = 0x20B91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B918u;
            // 0x20b91c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAB0u;
    if (runtime->hasFunction(0x1FEAB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B920u; }
        if (ctx->pc != 0x20B920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoInfo__15CInventUserDataFi_0x1feab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B920u; }
        if (ctx->pc != 0x20B920u) { return; }
    }
    ctx->pc = 0x20B920u;
label_20b920:
    // 0x20b920: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x20b920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
label_20b924:
    // 0x20b924: 0xc07fabc  jal         func_1FEAF0
label_20b928:
    if (ctx->pc == 0x20B928u) {
        ctx->pc = 0x20B928u;
            // 0x20b928: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20B92Cu;
        goto label_20b92c;
    }
    ctx->pc = 0x20B924u;
    SET_GPR_U32(ctx, 31, 0x20B92Cu);
    ctx->pc = 0x20B928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B924u;
            // 0x20b928: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAF0u;
    if (runtime->hasFunction(0x1FEAF0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B92Cu; }
        if (ctx->pc != 0x20B92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhototWorkAdr__15CInventUserDataFv_0x1feaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B92Cu; }
        if (ctx->pc != 0x20B92Cu) { return; }
    }
    ctx->pc = 0x20B92Cu;
label_20b92c:
    // 0x20b92c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20b92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20b930:
    // 0x20b930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20b930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20b934:
    // 0x20b934: 0xc07f880  jal         func_1FE200
label_20b938:
    if (ctx->pc == 0x20B938u) {
        ctx->pc = 0x20B938u;
            // 0x20b938: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x20B93Cu;
        goto label_20b93c;
    }
    ctx->pc = 0x20B934u;
    SET_GPR_U32(ctx, 31, 0x20B93Cu);
    ctx->pc = 0x20B938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B934u;
            // 0x20b938: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE200u;
    if (runtime->hasFunction(0x1FE200u)) {
        auto targetFn = runtime->lookupFunction(0x1FE200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B93Cu; }
        if (ctx->pc != 0x20B93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PictureSeiton__FP17USER_PICTURE_INFOPci_0x1fe200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B93Cu; }
        if (ctx->pc != 0x20B93Cu) { return; }
    }
    ctx->pc = 0x20B93Cu;
label_20b93c:
    // 0x20b93c: 0xc07fa5c  jal         func_1FE970
label_20b940:
    if (ctx->pc == 0x20B940u) {
        ctx->pc = 0x20B940u;
            // 0x20b940: 0x8f8490d4  lw          $a0, -0x6F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
        ctx->pc = 0x20B944u;
        goto label_20b944;
    }
    ctx->pc = 0x20B93Cu;
    SET_GPR_U32(ctx, 31, 0x20B944u);
    ctx->pc = 0x20B940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B93Cu;
            // 0x20b940: 0x8f8490d4  lw          $a0, -0x6F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE970u;
    if (runtime->hasFunction(0x1FE970u)) {
        auto targetFn = runtime->lookupFunction(0x1FE970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B944u; }
        if (ctx->pc != 0x20B944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetAddress__15CInventUserDataFv_0x1fe970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B944u; }
        if (ctx->pc != 0x20B944u) { return; }
    }
    ctx->pc = 0x20B944u;
label_20b944:
    // 0x20b944: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20b944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b948:
    // 0x20b948: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20b948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20b94c:
    // 0x20b94c: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x20b94cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_20b950:
    // 0x20b950: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x20b950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_20b954:
    // 0x20b954: 0xc07f958  jal         func_1FE560
label_20b958:
    if (ctx->pc == 0x20B958u) {
        ctx->pc = 0x20B958u;
            // 0x20b958: 0x244503c8  addiu       $a1, $v0, 0x3C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 968));
        ctx->pc = 0x20B95Cu;
        goto label_20b95c;
    }
    ctx->pc = 0x20B954u;
    SET_GPR_U32(ctx, 31, 0x20B95Cu);
    ctx->pc = 0x20B958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B954u;
            // 0x20b958: 0x244503c8  addiu       $a1, $v0, 0x3C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE560u;
    if (runtime->hasFunction(0x1FE560u)) {
        auto targetFn = runtime->lookupFunction(0x1FE560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B95Cu; }
        if (ctx->pc != 0x20B95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachPictTex__FiPP10mgCTextureP17USER_PICTURE_INFOi_0x1fe560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B95Cu; }
        if (ctx->pc != 0x20B95Cu) { return; }
    }
    ctx->pc = 0x20B95Cu;
label_20b95c:
    // 0x20b95c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20b95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b960:
    // 0x20b960: 0xc094274  jal         func_2509D0
label_20b964:
    if (ctx->pc == 0x20B964u) {
        ctx->pc = 0x20B968u;
        goto label_20b968;
    }
    ctx->pc = 0x20B960u;
    SET_GPR_U32(ctx, 31, 0x20B968u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B968u; }
        if (ctx->pc != 0x20B968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B968u; }
        if (ctx->pc != 0x20B968u) { return; }
    }
    ctx->pc = 0x20B968u;
label_20b968:
    // 0x20b968: 0x100001c0  b           . + 4 + (0x1C0 << 2)
label_20b96c:
    if (ctx->pc == 0x20B96Cu) {
        ctx->pc = 0x20B970u;
        goto label_20b970;
    }
    ctx->pc = 0x20B968u;
    {
        const bool branch_taken_0x20b968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b968) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20B970u;
label_20b970:
    // 0x20b970: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20b970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b974:
    // 0x20b974: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x20b974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_20b978:
    // 0x20b978: 0x84830014  lh          $v1, 0x14($a0)
    ctx->pc = 0x20b978u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
label_20b97c:
    // 0x20b97c: 0x8c860124  lw          $a2, 0x124($a0)
    ctx->pc = 0x20b97cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
label_20b980:
    // 0x20b980: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_20b984:
    if (ctx->pc == 0x20B984u) {
        ctx->pc = 0x20B984u;
            // 0x20b984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20B988u;
        goto label_20b988;
    }
    ctx->pc = 0x20B980u;
    {
        const bool branch_taken_0x20b980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20B984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B980u;
            // 0x20b984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b980) {
            ctx->pc = 0x20B990u;
            goto label_20b990;
        }
    }
    ctx->pc = 0x20B988u;
label_20b988:
    // 0x20b988: 0x8c860134  lw          $a2, 0x134($a0)
    ctx->pc = 0x20b988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 308)));
label_20b98c:
    // 0x20b98c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20b98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b990:
    // 0x20b990: 0xc080624  jal         func_201890
label_20b994:
    if (ctx->pc == 0x20B994u) {
        ctx->pc = 0x20B998u;
        goto label_20b998;
    }
    ctx->pc = 0x20B990u;
    SET_GPR_U32(ctx, 31, 0x20B998u);
    ctx->pc = 0x201890u;
    if (runtime->hasFunction(0x201890u)) {
        auto targetFn = runtime->lookupFunction(0x201890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B998u; }
        if (ctx->pc != 0x20B998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNetaCircle__11CMenuInventFii_0x201890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B998u; }
        if (ctx->pc != 0x20B998u) { return; }
    }
    ctx->pc = 0x20B998u;
label_20b998:
    // 0x20b998: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
label_20b99c:
    if (ctx->pc == 0x20B99Cu) {
        ctx->pc = 0x20B99Cu;
            // 0x20b99c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x20B9A0u;
        goto label_20b9a0;
    }
    ctx->pc = 0x20B998u;
    {
        const bool branch_taken_0x20b998 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x20B99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B998u;
            // 0x20b99c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b998) {
            ctx->pc = 0x20B9B0u;
            goto label_20b9b0;
        }
    }
    ctx->pc = 0x20B9A0u;
label_20b9a0:
    // 0x20b9a0: 0xc094274  jal         func_2509D0
label_20b9a4:
    if (ctx->pc == 0x20B9A4u) {
        ctx->pc = 0x20B9A4u;
            // 0x20b9a4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x20B9A8u;
        goto label_20b9a8;
    }
    ctx->pc = 0x20B9A0u;
    SET_GPR_U32(ctx, 31, 0x20B9A8u);
    ctx->pc = 0x20B9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B9A0u;
            // 0x20b9a4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B9A8u; }
        if (ctx->pc != 0x20B9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B9A8u; }
        if (ctx->pc != 0x20B9A8u) { return; }
    }
    ctx->pc = 0x20B9A8u;
label_20b9a8:
    // 0x20b9a8: 0x100001b0  b           . + 4 + (0x1B0 << 2)
label_20b9ac:
    if (ctx->pc == 0x20B9ACu) {
        ctx->pc = 0x20B9B0u;
        goto label_20b9b0;
    }
    ctx->pc = 0x20B9A8u;
    {
        const bool branch_taken_0x20b9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b9a8) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20B9B0u;
label_20b9b0:
    // 0x20b9b0: 0xc094274  jal         func_2509D0
label_20b9b4:
    if (ctx->pc == 0x20B9B4u) {
        ctx->pc = 0x20B9B8u;
        goto label_20b9b8;
    }
    ctx->pc = 0x20B9B0u;
    SET_GPR_U32(ctx, 31, 0x20B9B8u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B9B8u; }
        if (ctx->pc != 0x20B9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B9B8u; }
        if (ctx->pc != 0x20B9B8u) { return; }
    }
    ctx->pc = 0x20B9B8u;
label_20b9b8:
    // 0x20b9b8: 0x100001ac  b           . + 4 + (0x1AC << 2)
label_20b9bc:
    if (ctx->pc == 0x20B9BCu) {
        ctx->pc = 0x20B9C0u;
        goto label_20b9c0;
    }
    ctx->pc = 0x20B9B8u;
    {
        const bool branch_taken_0x20b9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b9b8) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20B9C0u;
label_20b9c0:
    // 0x20b9c0: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b9c4:
    // 0x20b9c4: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x20b9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_20b9c8:
    // 0x20b9c8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x20b9c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_20b9cc:
    // 0x20b9cc: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20b9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b9d0:
    // 0x20b9d0: 0xc080708  jal         func_201C20
label_20b9d4:
    if (ctx->pc == 0x20B9D4u) {
        ctx->pc = 0x20B9D4u;
            // 0x20b9d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20B9D8u;
        goto label_20b9d8;
    }
    ctx->pc = 0x20B9D0u;
    SET_GPR_U32(ctx, 31, 0x20B9D8u);
    ctx->pc = 0x20B9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B9D0u;
            // 0x20b9d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201C20u;
    if (runtime->hasFunction(0x201C20u)) {
        auto targetFn = runtime->lookupFunction(0x201C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B9D8u; }
        if (ctx->pc != 0x20B9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CancelNetaCircle__11CMenuInventFi_0x201c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B9D8u; }
        if (ctx->pc != 0x20B9D8u) { return; }
    }
    ctx->pc = 0x20B9D8u;
label_20b9d8:
    // 0x20b9d8: 0x0  nop
    ctx->pc = 0x20b9d8u;
    // NOP
label_20b9dc:
    // 0x20b9dc: 0x0  nop
    ctx->pc = 0x20b9dcu;
    // NOP
label_20b9e0:
    // 0x20b9e0: 0x0  nop
    ctx->pc = 0x20b9e0u;
    // NOP
label_20b9e4:
    // 0x20b9e4: 0x441fff9  bgez        $v0, . + 4 + (-0x7 << 2)
label_20b9e8:
    if (ctx->pc == 0x20B9E8u) {
        ctx->pc = 0x20B9ECu;
        goto label_20b9ec;
    }
    ctx->pc = 0x20B9E4u;
    {
        const bool branch_taken_0x20b9e4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x20b9e4) {
            ctx->pc = 0x20B9CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20b9cc;
        }
    }
    ctx->pc = 0x20B9ECu;
label_20b9ec:
    // 0x20b9ec: 0xa3809164  sb          $zero, -0x6E9C($gp)
    ctx->pc = 0x20b9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938980), (uint8_t)GPR_U32(ctx, 0));
label_20b9f0:
    // 0x20b9f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20b9f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b9f4:
    // 0x20b9f4: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20b9f8:
    // 0x20b9f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20b9fc:
    // 0x20b9fc: 0xa04005c4  sb          $zero, 0x5C4($v0)
    ctx->pc = 0x20b9fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1476), (uint8_t)GPR_U32(ctx, 0));
label_20ba00:
    // 0x20ba00: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x20ba00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
label_20ba04:
    // 0x20ba04: 0xc07faac  jal         func_1FEAB0
label_20ba08:
    if (ctx->pc == 0x20BA08u) {
        ctx->pc = 0x20BA08u;
            // 0x20ba08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20BA0Cu;
        goto label_20ba0c;
    }
    ctx->pc = 0x20BA04u;
    SET_GPR_U32(ctx, 31, 0x20BA0Cu);
    ctx->pc = 0x20BA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BA04u;
            // 0x20ba08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAB0u;
    if (runtime->hasFunction(0x1FEAB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BA0Cu; }
        if (ctx->pc != 0x20BA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoInfo__15CInventUserDataFi_0x1feab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BA0Cu; }
        if (ctx->pc != 0x20BA0Cu) { return; }
    }
    ctx->pc = 0x20BA0Cu;
label_20ba0c:
    // 0x20ba0c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x20ba0cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_20ba10:
    // 0x20ba10: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_20ba14:
    if (ctx->pc == 0x20BA14u) {
        ctx->pc = 0x20BA18u;
        goto label_20ba18;
    }
    ctx->pc = 0x20BA10u;
    {
        const bool branch_taken_0x20ba10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ba10) {
            ctx->pc = 0x20BAA0u;
            goto label_20baa0;
        }
    }
    ctx->pc = 0x20BA18u;
label_20ba18:
    // 0x20ba18: 0x8445000a  lh          $a1, 0xA($v0)
    ctx->pc = 0x20ba18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_20ba1c:
    // 0x20ba1c: 0x18a00020  blez        $a1, . + 4 + (0x20 << 2)
label_20ba20:
    if (ctx->pc == 0x20BA20u) {
        ctx->pc = 0x20BA24u;
        goto label_20ba24;
    }
    ctx->pc = 0x20BA1Cu;
    {
        const bool branch_taken_0x20ba1c = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x20ba1c) {
            ctx->pc = 0x20BAA0u;
            goto label_20baa0;
        }
    }
    ctx->pc = 0x20BA24u;
label_20ba24:
    // 0x20ba24: 0xc07faf0  jal         func_1FEBC0
label_20ba28:
    if (ctx->pc == 0x20BA28u) {
        ctx->pc = 0x20BA28u;
            // 0x20ba28: 0x8f8490d4  lw          $a0, -0x6F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
        ctx->pc = 0x20BA2Cu;
        goto label_20ba2c;
    }
    ctx->pc = 0x20BA24u;
    SET_GPR_U32(ctx, 31, 0x20BA2Cu);
    ctx->pc = 0x20BA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BA24u;
            // 0x20ba28: 0x8f8490d4  lw          $a0, -0x6F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEBC0u;
    if (runtime->hasFunction(0x1FEBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BA2Cu; }
        if (ctx->pc != 0x20BA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNetaFlag__15CInventUserDataFi_0x1febc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BA2Cu; }
        if (ctx->pc != 0x20BA2Cu) { return; }
    }
    ctx->pc = 0x20BA2Cu;
label_20ba2c:
    // 0x20ba2c: 0x441001c  bgez        $v0, . + 4 + (0x1C << 2)
label_20ba30:
    if (ctx->pc == 0x20BA30u) {
        ctx->pc = 0x20BA34u;
        goto label_20ba34;
    }
    ctx->pc = 0x20BA2Cu;
    {
        const bool branch_taken_0x20ba2c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x20ba2c) {
            ctx->pc = 0x20BAA0u;
            goto label_20baa0;
        }
    }
    ctx->pc = 0x20BA34u;
label_20ba34:
    // 0x20ba34: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20ba34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20ba38:
    // 0x20ba38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20ba38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ba3c:
    // 0x20ba3c: 0xc082128  jal         func_2084A0
label_20ba40:
    if (ctx->pc == 0x20BA40u) {
        ctx->pc = 0x20BA40u;
            // 0x20ba40: 0x27a601c0  addiu       $a2, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x20BA44u;
        goto label_20ba44;
    }
    ctx->pc = 0x20BA3Cu;
    SET_GPR_U32(ctx, 31, 0x20BA44u);
    ctx->pc = 0x20BA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BA3Cu;
            // 0x20ba40: 0x27a601c0  addiu       $a2, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2084A0u;
    if (runtime->hasFunction(0x2084A0u)) {
        auto targetFn = runtime->lookupFunction(0x2084A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BA44u; }
        if (ctx->pc != 0x20BA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNetaBoardCursorPosition__11CMenuInventFiPi_0x2084a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BA44u; }
        if (ctx->pc != 0x20BA44u) { return; }
    }
    ctx->pc = 0x20BA44u;
label_20ba44:
    // 0x20ba44: 0xc7a001c0  lwc1        $f0, 0x1C0($sp)
    ctx->pc = 0x20ba44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ba48:
    // 0x20ba48: 0x83849164  lb          $a0, -0x6E9C($gp)
    ctx->pc = 0x20ba48u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938980)));
label_20ba4c:
    // 0x20ba4c: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20ba50:
    // 0x20ba50: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x20ba50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20ba54:
    // 0x20ba54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20ba54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ba58:
    // 0x20ba58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20ba58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_20ba5c:
    // 0x20ba5c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x20ba5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_20ba60:
    // 0x20ba60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20ba64:
    // 0x20ba64: 0xe4400d80  swc1        $f0, 0xD80($v0)
    ctx->pc = 0x20ba64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3456), bits); }
label_20ba68:
    // 0x20ba68: 0xc7a001c4  lwc1        $f0, 0x1C4($sp)
    ctx->pc = 0x20ba68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20ba6c:
    // 0x20ba6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20ba6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_20ba70:
    // 0x20ba70: 0xe4400d84  swc1        $f0, 0xD84($v0)
    ctx->pc = 0x20ba70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3460), bits); }
label_20ba74:
    // 0x20ba74: 0x83849164  lb          $a0, -0x6E9C($gp)
    ctx->pc = 0x20ba74u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938980)));
label_20ba78:
    // 0x20ba78: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20ba7c:
    // 0x20ba7c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x20ba7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_20ba80:
    // 0x20ba80: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20ba84:
    // 0x20ba84: 0xa4450e70  sh          $a1, 0xE70($v0)
    ctx->pc = 0x20ba84u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 3696), (uint16_t)GPR_U32(ctx, 5));
label_20ba88:
    // 0x20ba88: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20ba8c:
    // 0x20ba8c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20ba90:
    // 0x20ba90: 0xa04305c4  sb          $v1, 0x5C4($v0)
    ctx->pc = 0x20ba90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1476), (uint8_t)GPR_U32(ctx, 3));
label_20ba94:
    // 0x20ba94: 0x83829164  lb          $v0, -0x6E9C($gp)
    ctx->pc = 0x20ba94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938980)));
label_20ba98:
    // 0x20ba98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20ba9c:
    // 0x20ba9c: 0xa3829164  sb          $v0, -0x6E9C($gp)
    ctx->pc = 0x20ba9cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938980), (uint8_t)GPR_U32(ctx, 2));
label_20baa0:
    // 0x20baa0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20baa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20baa4:
    // 0x20baa4: 0x2a02001e  slti        $v0, $s0, 0x1E
    ctx->pc = 0x20baa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)30) ? 1 : 0);
label_20baa8:
    // 0x20baa8: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_20baac:
    if (ctx->pc == 0x20BAACu) {
        ctx->pc = 0x20BAB0u;
        goto label_20bab0;
    }
    ctx->pc = 0x20BAA8u;
    {
        const bool branch_taken_0x20baa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20baa8) {
            ctx->pc = 0x20B9F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20b9f4;
        }
    }
    ctx->pc = 0x20BAB0u;
label_20bab0:
    // 0x20bab0: 0x83829164  lb          $v0, -0x6E9C($gp)
    ctx->pc = 0x20bab0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938980)));
label_20bab4:
    // 0x20bab4: 0x1c400009  bgtz        $v0, . + 4 + (0x9 << 2)
label_20bab8:
    if (ctx->pc == 0x20BAB8u) {
        ctx->pc = 0x20BABCu;
        goto label_20babc;
    }
    ctx->pc = 0x20BAB4u;
    {
        const bool branch_taken_0x20bab4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x20bab4) {
            ctx->pc = 0x20BADCu;
            goto label_20badc;
        }
    }
    ctx->pc = 0x20BABCu;
label_20babc:
    // 0x20babc: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20babcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20bac0:
    // 0x20bac0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20bac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_20bac4:
    // 0x20bac4: 0xc08e7cc  jal         func_239F30
label_20bac8:
    if (ctx->pc == 0x20BAC8u) {
        ctx->pc = 0x20BAC8u;
            // 0x20bac8: 0x24a59c58  addiu       $a1, $a1, -0x63A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941784));
        ctx->pc = 0x20BACCu;
        goto label_20bacc;
    }
    ctx->pc = 0x20BAC4u;
    SET_GPR_U32(ctx, 31, 0x20BACCu);
    ctx->pc = 0x20BAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BAC4u;
            // 0x20bac8: 0x24a59c58  addiu       $a1, $a1, -0x63A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BACCu; }
        if (ctx->pc != 0x20BACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BACCu; }
        if (ctx->pc != 0x20BACCu) { return; }
    }
    ctx->pc = 0x20BACCu;
label_20bacc:
    // 0x20bacc: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20baccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20bad0:
    // 0x20bad0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x20bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_20bad4:
    // 0x20bad4: 0x10000165  b           . + 4 + (0x165 << 2)
label_20bad8:
    if (ctx->pc == 0x20BAD8u) {
        ctx->pc = 0x20BAD8u;
            // 0x20bad8: 0xa4430002  sh          $v1, 0x2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x20BADCu;
        goto label_20badc;
    }
    ctx->pc = 0x20BAD4u;
    {
        const bool branch_taken_0x20bad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BAD4u;
            // 0x20bad8: 0xa4430002  sh          $v1, 0x2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bad4) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20BADCu;
label_20badc:
    // 0x20badc: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20badcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20bae0:
    // 0x20bae0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20bae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_20bae4:
    // 0x20bae4: 0xc08e7cc  jal         func_239F30
label_20bae8:
    if (ctx->pc == 0x20BAE8u) {
        ctx->pc = 0x20BAE8u;
            // 0x20bae8: 0x24a59c68  addiu       $a1, $a1, -0x6398 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941800));
        ctx->pc = 0x20BAECu;
        goto label_20baec;
    }
    ctx->pc = 0x20BAE4u;
    SET_GPR_U32(ctx, 31, 0x20BAECu);
    ctx->pc = 0x20BAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BAE4u;
            // 0x20bae8: 0x24a59c68  addiu       $a1, $a1, -0x6398 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BAECu; }
        if (ctx->pc != 0x20BAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BAECu; }
        if (ctx->pc != 0x20BAECu) { return; }
    }
    ctx->pc = 0x20BAECu;
label_20baec:
    // 0x20baec: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20baecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20baf0:
    // 0x20baf0: 0x1000015e  b           . + 4 + (0x15E << 2)
label_20baf4:
    if (ctx->pc == 0x20BAF4u) {
        ctx->pc = 0x20BAF4u;
            // 0x20baf4: 0xa4400002  sh          $zero, 0x2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x20BAF8u;
        goto label_20baf8;
    }
    ctx->pc = 0x20BAF0u;
    {
        const bool branch_taken_0x20baf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BAF0u;
            // 0x20baf4: 0xa4400002  sh          $zero, 0x2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20baf0) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20BAF8u;
label_20baf8:
    // 0x20baf8: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20baf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20bafc:
    // 0x20bafc: 0xc080708  jal         func_201C20
label_20bb00:
    if (ctx->pc == 0x20BB00u) {
        ctx->pc = 0x20BB00u;
            // 0x20bb00: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x20BB04u;
        goto label_20bb04;
    }
    ctx->pc = 0x20BAFCu;
    SET_GPR_U32(ctx, 31, 0x20BB04u);
    ctx->pc = 0x20BB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BAFCu;
            // 0x20bb00: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201C20u;
    if (runtime->hasFunction(0x201C20u)) {
        auto targetFn = runtime->lookupFunction(0x201C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BB04u; }
        if (ctx->pc != 0x20BB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CancelNetaCircle__11CMenuInventFi_0x201c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BB04u; }
        if (ctx->pc != 0x20BB04u) { return; }
    }
    ctx->pc = 0x20BB04u;
label_20bb04:
    // 0x20bb04: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
label_20bb08:
    if (ctx->pc == 0x20BB08u) {
        ctx->pc = 0x20BB08u;
            // 0x20bb08: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x20BB0Cu;
        goto label_20bb0c;
    }
    ctx->pc = 0x20BB04u;
    {
        const bool branch_taken_0x20bb04 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20BB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BB04u;
            // 0x20bb08: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb04) {
            ctx->pc = 0x20BB40u;
            goto label_20bb40;
        }
    }
    ctx->pc = 0x20BB0Cu;
label_20bb0c:
    // 0x20bb0c: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20bb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20bb10:
    // 0x20bb10: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x20bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_20bb14:
    // 0x20bb14: 0x84830014  lh          $v1, 0x14($a0)
    ctx->pc = 0x20bb14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
label_20bb18:
    // 0x20bb18: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_20bb1c:
    if (ctx->pc == 0x20BB1Cu) {
        ctx->pc = 0x20BB1Cu;
            // 0x20bb1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20BB20u;
        goto label_20bb20;
    }
    ctx->pc = 0x20BB18u;
    {
        const bool branch_taken_0x20bb18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20BB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BB18u;
            // 0x20bb1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb18) {
            ctx->pc = 0x20BB28u;
            goto label_20bb28;
        }
    }
    ctx->pc = 0x20BB20u;
label_20bb20:
    // 0x20bb20: 0x10000006  b           . + 4 + (0x6 << 2)
label_20bb24:
    if (ctx->pc == 0x20BB24u) {
        ctx->pc = 0x20BB24u;
            // 0x20bb24: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20BB28u;
        goto label_20bb28;
    }
    ctx->pc = 0x20BB20u;
    {
        const bool branch_taken_0x20bb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BB20u;
            // 0x20bb24: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb20) {
            ctx->pc = 0x20BB3Cu;
            goto label_20bb3c;
        }
    }
    ctx->pc = 0x20BB28u;
label_20bb28:
    // 0x20bb28: 0xc0805e8  jal         func_2017A0
label_20bb2c:
    if (ctx->pc == 0x20BB2Cu) {
        ctx->pc = 0x20BB30u;
        goto label_20bb30;
    }
    ctx->pc = 0x20BB28u;
    SET_GPR_U32(ctx, 31, 0x20BB30u);
    ctx->pc = 0x2017A0u;
    if (runtime->hasFunction(0x2017A0u)) {
        auto targetFn = runtime->lookupFunction(0x2017A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BB30u; }
        if (ctx->pc != 0x20BB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitNetaCircle__11CMenuInventFi_0x2017a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BB30u; }
        if (ctx->pc != 0x20BB30u) { return; }
    }
    ctx->pc = 0x20BB30u;
label_20bb30:
    // 0x20bb30: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20bb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20bb34:
    // 0x20bb34: 0xc0807e0  jal         func_201F80
label_20bb38:
    if (ctx->pc == 0x20BB38u) {
        ctx->pc = 0x20BB38u;
            // 0x20bb38: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20BB3Cu;
        goto label_20bb3c;
    }
    ctx->pc = 0x20BB34u;
    SET_GPR_U32(ctx, 31, 0x20BB3Cu);
    ctx->pc = 0x20BB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BB34u;
            // 0x20bb38: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201F80u;
    if (runtime->hasFunction(0x201F80u)) {
        auto targetFn = runtime->lookupFunction(0x201F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BB3Cu; }
        if (ctx->pc != 0x20BB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrepareNextMode__11CMenuInventFi_0x201f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BB3Cu; }
        if (ctx->pc != 0x20BB3Cu) { return; }
    }
    ctx->pc = 0x20BB3Cu;
label_20bb3c:
    // 0x20bb3c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x20bb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20bb40:
    // 0x20bb40: 0xc094274  jal         func_2509D0
label_20bb44:
    if (ctx->pc == 0x20BB44u) {
        ctx->pc = 0x20BB48u;
        goto label_20bb48;
    }
    ctx->pc = 0x20BB40u;
    SET_GPR_U32(ctx, 31, 0x20BB48u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BB48u; }
        if (ctx->pc != 0x20BB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BB48u; }
        if (ctx->pc != 0x20BB48u) { return; }
    }
    ctx->pc = 0x20BB48u;
label_20bb48:
    // 0x20bb48: 0x10000148  b           . + 4 + (0x148 << 2)
label_20bb4c:
    if (ctx->pc == 0x20BB4Cu) {
        ctx->pc = 0x20BB50u;
        goto label_20bb50;
    }
    ctx->pc = 0x20BB48u;
    {
        const bool branch_taken_0x20bb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bb48) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20BB50u;
label_20bb50:
    // 0x20bb50: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20bb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20bb54:
    // 0x20bb54: 0xc080708  jal         func_201C20
label_20bb58:
    if (ctx->pc == 0x20BB58u) {
        ctx->pc = 0x20BB58u;
            // 0x20bb58: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x20BB5Cu;
        goto label_20bb5c;
    }
    ctx->pc = 0x20BB54u;
    SET_GPR_U32(ctx, 31, 0x20BB5Cu);
    ctx->pc = 0x20BB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BB54u;
            // 0x20bb58: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201C20u;
    if (runtime->hasFunction(0x201C20u)) {
        auto targetFn = runtime->lookupFunction(0x201C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BB5Cu; }
        if (ctx->pc != 0x20BB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CancelNetaCircle__11CMenuInventFi_0x201c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BB5Cu; }
        if (ctx->pc != 0x20BB5Cu) { return; }
    }
    ctx->pc = 0x20BB5Cu;
label_20bb5c:
    // 0x20bb5c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_20bb60:
    if (ctx->pc == 0x20BB60u) {
        ctx->pc = 0x20BB60u;
            // 0x20bb60: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x20BB64u;
        goto label_20bb64;
    }
    ctx->pc = 0x20BB5Cu;
    {
        const bool branch_taken_0x20bb5c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20BB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BB5Cu;
            // 0x20bb60: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb5c) {
            ctx->pc = 0x20BB7Cu;
            goto label_20bb7c;
        }
    }
    ctx->pc = 0x20BB64u;
label_20bb64:
    // 0x20bb64: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20bb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20bb68:
    // 0x20bb68: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x20bb68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20bb6c:
    // 0x20bb6c: 0xc082998  jal         func_20A660
label_20bb70:
    if (ctx->pc == 0x20BB70u) {
        ctx->pc = 0x20BB70u;
            // 0x20bb70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20BB74u;
        goto label_20bb74;
    }
    ctx->pc = 0x20BB6Cu;
    SET_GPR_U32(ctx, 31, 0x20BB74u);
    ctx->pc = 0x20BB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BB6Cu;
            // 0x20bb70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (runtime->hasFunction(0x20A660u)) {
        auto targetFn = runtime->lookupFunction(0x20A660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BB74u; }
        if (ctx->pc != 0x20BB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextDifferentMode__11CMenuInventFii_0x20a660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BB74u; }
        if (ctx->pc != 0x20BB74u) { return; }
    }
    ctx->pc = 0x20BB74u;
label_20bb74:
    // 0x20bb74: 0x1000013d  b           . + 4 + (0x13D << 2)
label_20bb78:
    if (ctx->pc == 0x20BB78u) {
        ctx->pc = 0x20BB7Cu;
        goto label_20bb7c;
    }
    ctx->pc = 0x20BB74u;
    {
        const bool branch_taken_0x20bb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bb74) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20BB7Cu;
label_20bb7c:
    // 0x20bb7c: 0xc094274  jal         func_2509D0
label_20bb80:
    if (ctx->pc == 0x20BB80u) {
        ctx->pc = 0x20BB84u;
        goto label_20bb84;
    }
    ctx->pc = 0x20BB7Cu;
    SET_GPR_U32(ctx, 31, 0x20BB84u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BB84u; }
        if (ctx->pc != 0x20BB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BB84u; }
        if (ctx->pc != 0x20BB84u) { return; }
    }
    ctx->pc = 0x20BB84u;
label_20bb84:
    // 0x20bb84: 0x10000139  b           . + 4 + (0x139 << 2)
label_20bb88:
    if (ctx->pc == 0x20BB88u) {
        ctx->pc = 0x20BB8Cu;
        goto label_20bb8c;
    }
    ctx->pc = 0x20BB84u;
    {
        const bool branch_taken_0x20bb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bb84) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20BB8Cu;
label_20bb8c:
    // 0x20bb8c: 0x27a401c8  addiu       $a0, $sp, 0x1C8
    ctx->pc = 0x20bb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_20bb90:
    // 0x20bb90: 0xa7a201ca  sh          $v0, 0x1CA($sp)
    ctx->pc = 0x20bb90u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 458), (uint16_t)GPR_U32(ctx, 2));
label_20bb94:
    // 0x20bb94: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x20bb94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20bb98:
    // 0x20bb98: 0xa7a201ce  sh          $v0, 0x1CE($sp)
    ctx->pc = 0x20bb98u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 462), (uint16_t)GPR_U32(ctx, 2));
label_20bb9c:
    // 0x20bb9c: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x20bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_20bba0:
    // 0x20bba0: 0xa7a001cc  sh          $zero, 0x1CC($sp)
    ctx->pc = 0x20bba0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 460), (uint16_t)GPR_U32(ctx, 0));
label_20bba4:
    // 0x20bba4: 0xa7a001c8  sh          $zero, 0x1C8($sp)
    ctx->pc = 0x20bba4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 456), (uint16_t)GPR_U32(ctx, 0));
label_20bba8:
    // 0x20bba8: 0xc049c18  jal         func_127060
label_20bbac:
    if (ctx->pc == 0x20BBACu) {
        ctx->pc = 0x20BBACu;
            // 0x20bbac: 0x2445012c  addiu       $a1, $v0, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
        ctx->pc = 0x20BBB0u;
        goto label_20bbb0;
    }
    ctx->pc = 0x20BBA8u;
    SET_GPR_U32(ctx, 31, 0x20BBB0u);
    ctx->pc = 0x20BBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BBA8u;
            // 0x20bbac: 0x2445012c  addiu       $a1, $v0, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BBB0u; }
        if (ctx->pc != 0x20BBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BBB0u; }
        if (ctx->pc != 0x20BBB0u) { return; }
    }
    ctx->pc = 0x20BBB0u;
label_20bbb0:
    // 0x20bbb0: 0xc08f9e4  jal         func_23E790
label_20bbb4:
    if (ctx->pc == 0x20BBB4u) {
        ctx->pc = 0x20BBB4u;
            // 0x20bbb4: 0x27a401c8  addiu       $a0, $sp, 0x1C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
        ctx->pc = 0x20BBB8u;
        goto label_20bbb8;
    }
    ctx->pc = 0x20BBB0u;
    SET_GPR_U32(ctx, 31, 0x20BBB8u);
    ctx->pc = 0x20BBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BBB0u;
            // 0x20bbb4: 0x27a401c8  addiu       $a0, $sp, 0x1C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E790u;
    if (runtime->hasFunction(0x23E790u)) {
        auto targetFn = runtime->lookupFunction(0x23E790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BBB8u; }
        if (ctx->pc != 0x20BBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGameDataUsedForSWAPINFO__FP18MENU_SWAPITEM_INFO_0x23e790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BBB8u; }
        if (ctx->pc != 0x20BBB8u) { return; }
    }
    ctx->pc = 0x20BBB8u;
label_20bbb8:
    // 0x20bbb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20bbb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20bbbc:
    // 0x20bbbc: 0xc065c24  jal         func_197090
label_20bbc0:
    if (ctx->pc == 0x20BBC0u) {
        ctx->pc = 0x20BBC0u;
            // 0x20bbc0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x20BBC4u;
        goto label_20bbc4;
    }
    ctx->pc = 0x20BBBCu;
    SET_GPR_U32(ctx, 31, 0x20BBC4u);
    ctx->pc = 0x20BBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BBBCu;
            // 0x20bbc0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BBC4u; }
        if (ctx->pc != 0x20BBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BBC4u; }
        if (ctx->pc != 0x20BBC4u) { return; }
    }
    ctx->pc = 0x20BBC4u;
label_20bbc4:
    // 0x20bbc4: 0xc065c24  jal         func_197090
label_20bbc8:
    if (ctx->pc == 0x20BBC8u) {
        ctx->pc = 0x20BBC8u;
            // 0x20bbc8: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x20BBCCu;
        goto label_20bbcc;
    }
    ctx->pc = 0x20BBC4u;
    SET_GPR_U32(ctx, 31, 0x20BBCCu);
    ctx->pc = 0x20BBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BBC4u;
            // 0x20bbc8: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BBCCu; }
        if (ctx->pc != 0x20BBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BBCCu; }
        if (ctx->pc != 0x20BBCCu) { return; }
    }
    ctx->pc = 0x20BBCCu;
label_20bbcc:
    // 0x20bbcc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x20bbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_20bbd0:
    // 0x20bbd0: 0xc06666c  jal         func_1999B0
label_20bbd4:
    if (ctx->pc == 0x20BBD4u) {
        ctx->pc = 0x20BBD4u;
            // 0x20bbd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20BBD8u;
        goto label_20bbd8;
    }
    ctx->pc = 0x20BBD0u;
    SET_GPR_U32(ctx, 31, 0x20BBD8u);
    ctx->pc = 0x20BBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BBD0u;
            // 0x20bbd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BBD8u; }
        if (ctx->pc != 0x20BBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BBD8u; }
        if (ctx->pc != 0x20BBD8u) { return; }
    }
    ctx->pc = 0x20BBD8u;
label_20bbd8:
    // 0x20bbd8: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x20bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_20bbdc:
    // 0x20bbdc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x20bbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_20bbe0:
    // 0x20bbe0: 0xc06666c  jal         func_1999B0
label_20bbe4:
    if (ctx->pc == 0x20BBE4u) {
        ctx->pc = 0x20BBE4u;
            // 0x20bbe4: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x20BBE8u;
        goto label_20bbe8;
    }
    ctx->pc = 0x20BBE0u;
    SET_GPR_U32(ctx, 31, 0x20BBE8u);
    ctx->pc = 0x20BBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BBE0u;
            // 0x20bbe4: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BBE8u; }
        if (ctx->pc != 0x20BBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BBE8u; }
        if (ctx->pc != 0x20BBE8u) { return; }
    }
    ctx->pc = 0x20BBE8u;
label_20bbe8:
    // 0x20bbe8: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x20bbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_20bbec:
    // 0x20bbec: 0xc08fa24  jal         func_23E890
label_20bbf0:
    if (ctx->pc == 0x20BBF0u) {
        ctx->pc = 0x20BBF0u;
            // 0x20bbf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20BBF4u;
        goto label_20bbf4;
    }
    ctx->pc = 0x20BBECu;
    SET_GPR_U32(ctx, 31, 0x20BBF4u);
    ctx->pc = 0x20BBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BBECu;
            // 0x20bbf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E890u;
    if (runtime->hasFunction(0x23E890u)) {
        auto targetFn = runtime->lookupFunction(0x23E890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BBF4u; }
        if (ctx->pc != 0x20BBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnItemMenu__12CMenuKeyFuncFi_0x23e890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BBF4u; }
        if (ctx->pc != 0x20BBF4u) { return; }
    }
    ctx->pc = 0x20BBF4u;
label_20bbf4:
    // 0x20bbf4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20bbf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20bbf8:
    // 0x20bbf8: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_20bbfc:
    if (ctx->pc == 0x20BBFCu) {
        ctx->pc = 0x20BBFCu;
            // 0x20bbfc: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->pc = 0x20BC00u;
        goto label_20bc00;
    }
    ctx->pc = 0x20BBF8u;
    {
        const bool branch_taken_0x20bbf8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BBF8u;
            // 0x20bbfc: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bbf8) {
            ctx->pc = 0x20BC14u;
            goto label_20bc14;
        }
    }
    ctx->pc = 0x20BC00u;
label_20bc00:
    // 0x20bc00: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x20bc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20bc04:
    // 0x20bc04: 0xc094274  jal         func_2509D0
label_20bc08:
    if (ctx->pc == 0x20BC08u) {
        ctx->pc = 0x20BC08u;
            // 0x20bc08: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20BC0Cu;
        goto label_20bc0c;
    }
    ctx->pc = 0x20BC04u;
    SET_GPR_U32(ctx, 31, 0x20BC0Cu);
    ctx->pc = 0x20BC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BC04u;
            // 0x20bc08: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BC0Cu; }
        if (ctx->pc != 0x20BC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BC0Cu; }
        if (ctx->pc != 0x20BC0Cu) { return; }
    }
    ctx->pc = 0x20BC0Cu;
label_20bc0c:
    // 0x20bc0c: 0x10000117  b           . + 4 + (0x117 << 2)
label_20bc10:
    if (ctx->pc == 0x20BC10u) {
        ctx->pc = 0x20BC14u;
        goto label_20bc14;
    }
    ctx->pc = 0x20BC0Cu;
    {
        const bool branch_taken_0x20bc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bc0c) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20BC14u;
label_20bc14:
    // 0x20bc14: 0x10200115  beqz        $at, . + 4 + (0x115 << 2)
label_20bc18:
    if (ctx->pc == 0x20BC18u) {
        ctx->pc = 0x20BC1Cu;
        goto label_20bc1c;
    }
    ctx->pc = 0x20BC14u;
    {
        const bool branch_taken_0x20bc14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bc14) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20BC1Cu;
label_20bc1c:
    // 0x20bc1c: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x20bc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_20bc20:
    // 0x20bc20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20bc20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bc24:
    // 0x20bc24: 0xc08fa94  jal         func_23EA50
label_20bc28:
    if (ctx->pc == 0x20BC28u) {
        ctx->pc = 0x20BC28u;
            // 0x20bc28: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20BC2Cu;
        goto label_20bc2c;
    }
    ctx->pc = 0x20BC24u;
    SET_GPR_U32(ctx, 31, 0x20BC2Cu);
    ctx->pc = 0x20BC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BC24u;
            // 0x20bc28: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EA50u;
    if (runtime->hasFunction(0x23EA50u)) {
        auto targetFn = runtime->lookupFunction(0x23EA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BC2Cu; }
        if (ctx->pc != 0x20BC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHaveItemInfo__12CMenuKeyFuncFii_0x23ea50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BC2Cu; }
        if (ctx->pc != 0x20BC2Cu) { return; }
    }
    ctx->pc = 0x20BC2Cu;
label_20bc2c:
    // 0x20bc2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bc2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20bc30:
    // 0x20bc30: 0xc06666c  jal         func_1999B0
label_20bc34:
    if (ctx->pc == 0x20BC34u) {
        ctx->pc = 0x20BC34u;
            // 0x20bc34: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x20BC38u;
        goto label_20bc38;
    }
    ctx->pc = 0x20BC30u;
    SET_GPR_U32(ctx, 31, 0x20BC38u);
    ctx->pc = 0x20BC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BC30u;
            // 0x20bc34: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BC38u; }
        if (ctx->pc != 0x20BC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BC38u; }
        if (ctx->pc != 0x20BC38u) { return; }
    }
    ctx->pc = 0x20BC38u;
label_20bc38:
    // 0x20bc38: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x20bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_20bc3c:
    // 0x20bc3c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x20bc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_20bc40:
    // 0x20bc40: 0xc06666c  jal         func_1999B0
label_20bc44:
    if (ctx->pc == 0x20BC44u) {
        ctx->pc = 0x20BC44u;
            // 0x20bc44: 0x244400c0  addiu       $a0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x20BC48u;
        goto label_20bc48;
    }
    ctx->pc = 0x20BC40u;
    SET_GPR_U32(ctx, 31, 0x20BC48u);
    ctx->pc = 0x20BC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BC40u;
            // 0x20bc44: 0x244400c0  addiu       $a0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BC48u; }
        if (ctx->pc != 0x20BC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BC48u; }
        if (ctx->pc != 0x20BC48u) { return; }
    }
    ctx->pc = 0x20BC48u;
label_20bc48:
    // 0x20bc48: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20bc48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20bc4c:
    // 0x20bc4c: 0x27a401c8  addiu       $a0, $sp, 0x1C8
    ctx->pc = 0x20bc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_20bc50:
    // 0x20bc50: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x20bc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_20bc54:
    // 0x20bc54: 0xc08ec14  jal         func_23B050
label_20bc58:
    if (ctx->pc == 0x20BC58u) {
        ctx->pc = 0x20BC58u;
            // 0x20bc58: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20BC5Cu;
        goto label_20bc5c;
    }
    ctx->pc = 0x20BC54u;
    SET_GPR_U32(ctx, 31, 0x20BC5Cu);
    ctx->pc = 0x20BC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BC54u;
            // 0x20bc58: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B050u;
    if (runtime->hasFunction(0x23B050u)) {
        auto targetFn = runtime->lookupFunction(0x23B050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BC5Cu; }
        if (ctx->pc != 0x20BC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExchangeItemInfoMake__FP18MENU_SWAPITEM_INFOPA4_iii_0x23b050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BC5Cu; }
        if (ctx->pc != 0x20BC5Cu) { return; }
    }
    ctx->pc = 0x20BC5Cu;
label_20bc5c:
    // 0x20bc5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_20bc60:
    if (ctx->pc == 0x20BC60u) {
        ctx->pc = 0x20BC64u;
        goto label_20bc64;
    }
    ctx->pc = 0x20BC5Cu;
    {
        const bool branch_taken_0x20bc5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bc5c) {
            ctx->pc = 0x20BC6Cu;
            goto label_20bc6c;
        }
    }
    ctx->pc = 0x20BC64u;
label_20bc64:
    // 0x20bc64: 0xc090adc  jal         func_242B70
label_20bc68:
    if (ctx->pc == 0x20BC68u) {
        ctx->pc = 0x20BC68u;
            // 0x20bc68: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x20BC6Cu;
        goto label_20bc6c;
    }
    ctx->pc = 0x20BC64u;
    SET_GPR_U32(ctx, 31, 0x20BC6Cu);
    ctx->pc = 0x20BC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BC64u;
            // 0x20bc68: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242B70u;
    if (runtime->hasFunction(0x242B70u)) {
        auto targetFn = runtime->lookupFunction(0x242B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BC6Cu; }
        if (ctx->pc != 0x20BC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CommonSetMoveItemClass__FPA4_i_0x242b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BC6Cu; }
        if (ctx->pc != 0x20BC6Cu) { return; }
    }
    ctx->pc = 0x20BC6Cu;
label_20bc6c:
    // 0x20bc6c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x20bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_20bc70:
    // 0x20bc70: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x20bc70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_20bc74:
    // 0x20bc74: 0x24421460  addiu       $v0, $v0, 0x1460
    ctx->pc = 0x20bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5216));
label_20bc78:
    // 0x20bc78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20bc7c:
    // 0x20bc7c: 0xc094274  jal         func_2509D0
label_20bc80:
    if (ctx->pc == 0x20BC80u) {
        ctx->pc = 0x20BC80u;
            // 0x20bc80: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x20BC84u;
        goto label_20bc84;
    }
    ctx->pc = 0x20BC7Cu;
    SET_GPR_U32(ctx, 31, 0x20BC84u);
    ctx->pc = 0x20BC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BC7Cu;
            // 0x20bc80: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BC84u; }
        if (ctx->pc != 0x20BC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BC84u; }
        if (ctx->pc != 0x20BC84u) { return; }
    }
    ctx->pc = 0x20BC84u;
label_20bc84:
    // 0x20bc84: 0x100000f9  b           . + 4 + (0xF9 << 2)
label_20bc88:
    if (ctx->pc == 0x20BC88u) {
        ctx->pc = 0x20BC8Cu;
        goto label_20bc8c;
    }
    ctx->pc = 0x20BC84u;
    {
        const bool branch_taken_0x20bc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bc84) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20BC8Cu;
label_20bc8c:
    // 0x20bc8c: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x20bc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_20bc90:
    // 0x20bc90: 0xc08fa24  jal         func_23E890
label_20bc94:
    if (ctx->pc == 0x20BC94u) {
        ctx->pc = 0x20BC94u;
            // 0x20bc94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20BC98u;
        goto label_20bc98;
    }
    ctx->pc = 0x20BC90u;
    SET_GPR_U32(ctx, 31, 0x20BC98u);
    ctx->pc = 0x20BC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BC90u;
            // 0x20bc94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E890u;
    if (runtime->hasFunction(0x23E890u)) {
        auto targetFn = runtime->lookupFunction(0x23E890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BC98u; }
        if (ctx->pc != 0x20BC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnItemMenu__12CMenuKeyFuncFi_0x23e890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BC98u; }
        if (ctx->pc != 0x20BC98u) { return; }
    }
    ctx->pc = 0x20BC98u;
label_20bc98:
    // 0x20bc98: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_20bc9c:
    if (ctx->pc == 0x20BC9Cu) {
        ctx->pc = 0x20BC9Cu;
            // 0x20bc9c: 0x2082a  slt         $at, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x20BCA0u;
        goto label_20bca0;
    }
    ctx->pc = 0x20BC98u;
    {
        const bool branch_taken_0x20bc98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BC98u;
            // 0x20bc9c: 0x2082a  slt         $at, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bc98) {
            ctx->pc = 0x20BCB4u;
            goto label_20bcb4;
        }
    }
    ctx->pc = 0x20BCA0u;
label_20bca0:
    // 0x20bca0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x20bca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20bca4:
    // 0x20bca4: 0xc094274  jal         func_2509D0
label_20bca8:
    if (ctx->pc == 0x20BCA8u) {
        ctx->pc = 0x20BCA8u;
            // 0x20bca8: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20BCACu;
        goto label_20bcac;
    }
    ctx->pc = 0x20BCA4u;
    SET_GPR_U32(ctx, 31, 0x20BCACu);
    ctx->pc = 0x20BCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BCA4u;
            // 0x20bca8: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BCACu; }
        if (ctx->pc != 0x20BCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BCACu; }
        if (ctx->pc != 0x20BCACu) { return; }
    }
    ctx->pc = 0x20BCACu;
label_20bcac:
    // 0x20bcac: 0x100000ef  b           . + 4 + (0xEF << 2)
label_20bcb0:
    if (ctx->pc == 0x20BCB0u) {
        ctx->pc = 0x20BCB4u;
        goto label_20bcb4;
    }
    ctx->pc = 0x20BCACu;
    {
        const bool branch_taken_0x20bcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bcac) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20BCB4u;
label_20bcb4:
    // 0x20bcb4: 0x102000ed  beqz        $at, . + 4 + (0xED << 2)
label_20bcb8:
    if (ctx->pc == 0x20BCB8u) {
        ctx->pc = 0x20BCB8u;
            // 0x20bcb8: 0x21840  sll         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x20BCBCu;
        goto label_20bcbc;
    }
    ctx->pc = 0x20BCB4u;
    {
        const bool branch_taken_0x20bcb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BCB4u;
            // 0x20bcb8: 0x21840  sll         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bcb4) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20BCBCu;
label_20bcbc:
    // 0x20bcbc: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x20bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_20bcc0:
    // 0x20bcc0: 0x24421460  addiu       $v0, $v0, 0x1460
    ctx->pc = 0x20bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5216));
label_20bcc4:
    // 0x20bcc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20bcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20bcc8:
    // 0x20bcc8: 0xc094274  jal         func_2509D0
label_20bccc:
    if (ctx->pc == 0x20BCCCu) {
        ctx->pc = 0x20BCCCu;
            // 0x20bccc: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x20BCD0u;
        goto label_20bcd0;
    }
    ctx->pc = 0x20BCC8u;
    SET_GPR_U32(ctx, 31, 0x20BCD0u);
    ctx->pc = 0x20BCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BCC8u;
            // 0x20bccc: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BCD0u; }
        if (ctx->pc != 0x20BCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BCD0u; }
        if (ctx->pc != 0x20BCD0u) { return; }
    }
    ctx->pc = 0x20BCD0u;
label_20bcd0:
    // 0x20bcd0: 0x100000e6  b           . + 4 + (0xE6 << 2)
label_20bcd4:
    if (ctx->pc == 0x20BCD4u) {
        ctx->pc = 0x20BCD8u;
        goto label_20bcd8;
    }
    ctx->pc = 0x20BCD0u;
    {
        const bool branch_taken_0x20bcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bcd0) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20BCD8u;
label_20bcd8:
    // 0x20bcd8: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x20bcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
label_20bcdc:
    // 0x20bcdc: 0xc07faac  jal         func_1FEAB0
label_20bce0:
    if (ctx->pc == 0x20BCE0u) {
        ctx->pc = 0x20BCE0u;
            // 0x20bce0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20BCE4u;
        goto label_20bce4;
    }
    ctx->pc = 0x20BCDCu;
    SET_GPR_U32(ctx, 31, 0x20BCE4u);
    ctx->pc = 0x20BCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BCDCu;
            // 0x20bce0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAB0u;
    if (runtime->hasFunction(0x1FEAB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BCE4u; }
        if (ctx->pc != 0x20BCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoInfo__15CInventUserDataFi_0x1feab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BCE4u; }
        if (ctx->pc != 0x20BCE4u) { return; }
    }
    ctx->pc = 0x20BCE4u;
label_20bce4:
    // 0x20bce4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20bce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bce8:
    // 0x20bce8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20bce8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bcec:
    // 0x20bcec: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20bcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20bcf0:
    // 0x20bcf0: 0xc080754  jal         func_201D50
label_20bcf4:
    if (ctx->pc == 0x20BCF4u) {
        ctx->pc = 0x20BCF4u;
            // 0x20bcf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20BCF8u;
        goto label_20bcf8;
    }
    ctx->pc = 0x20BCF0u;
    SET_GPR_U32(ctx, 31, 0x20BCF8u);
    ctx->pc = 0x20BCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BCF0u;
            // 0x20bcf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201D50u;
    if (runtime->hasFunction(0x201D50u)) {
        auto targetFn = runtime->lookupFunction(0x201D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BCF8u; }
        if (ctx->pc != 0x20BCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowSelectNetaID__11CMenuInventFi_0x201d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BCF8u; }
        if (ctx->pc != 0x20BCF8u) { return; }
    }
    ctx->pc = 0x20BCF8u;
label_20bcf8:
    // 0x20bcf8: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x20bcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
label_20bcfc:
    // 0x20bcfc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20bcfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20bd00:
    // 0x20bd00: 0xac6201d0  sw          $v0, 0x1D0($v1)
    ctx->pc = 0x20bd00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 2));
label_20bd04:
    // 0x20bd04: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x20bd04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_20bd08:
    // 0x20bd08: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_20bd0c:
    if (ctx->pc == 0x20BD0Cu) {
        ctx->pc = 0x20BD0Cu;
            // 0x20bd0c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x20BD10u;
        goto label_20bd10;
    }
    ctx->pc = 0x20BD08u;
    {
        const bool branch_taken_0x20bd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BD08u;
            // 0x20bd0c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd08) {
            ctx->pc = 0x20BCECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20bcec;
        }
    }
    ctx->pc = 0x20BD10u;
label_20bd10:
    // 0x20bd10: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20bd14:
    // 0x20bd14: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x20bd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_20bd18:
    // 0x20bd18: 0x8f8490dc  lw          $a0, -0x6F24($gp)
    ctx->pc = 0x20bd18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938844)));
label_20bd1c:
    // 0x20bd1c: 0xc07ff08  jal         func_1FFC20
label_20bd20:
    if (ctx->pc == 0x20BD20u) {
        ctx->pc = 0x20BD20u;
            // 0x20bd20: 0x24460584  addiu       $a2, $v0, 0x584 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1412));
        ctx->pc = 0x20BD24u;
        goto label_20bd24;
    }
    ctx->pc = 0x20BD1Cu;
    SET_GPR_U32(ctx, 31, 0x20BD24u);
    ctx->pc = 0x20BD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BD1Cu;
            // 0x20bd20: 0x24460584  addiu       $a2, $v0, 0x584 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1412));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFC20u;
    if (runtime->hasFunction(0x1FFC20u)) {
        auto targetFn = runtime->lookupFunction(0x1FFC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BD24u; }
        if (ctx->pc != 0x20BD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckInventEnable__17CInventDataManageFPiPi_0x1ffc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BD24u; }
        if (ctx->pc != 0x20BD24u) { return; }
    }
    ctx->pc = 0x20BD24u;
label_20bd24:
    // 0x20bd24: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x20bd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20bd28:
    // 0x20bd28: 0xa4620582  sh          $v0, 0x582($v1)
    ctx->pc = 0x20bd28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1410), (uint16_t)GPR_U32(ctx, 2));
label_20bd2c:
    // 0x20bd2c: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20bd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20bd30:
    // 0x20bd30: 0x84450582  lh          $a1, 0x582($v0)
    ctx->pc = 0x20bd30u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1410)));
label_20bd34:
    // 0x20bd34: 0xc07fef0  jal         func_1FFBC0
label_20bd38:
    if (ctx->pc == 0x20BD38u) {
        ctx->pc = 0x20BD38u;
            // 0x20bd38: 0x8f8490dc  lw          $a0, -0x6F24($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938844)));
        ctx->pc = 0x20BD3Cu;
        goto label_20bd3c;
    }
    ctx->pc = 0x20BD34u;
    SET_GPR_U32(ctx, 31, 0x20BD3Cu);
    ctx->pc = 0x20BD38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BD34u;
            // 0x20bd38: 0x8f8490dc  lw          $a0, -0x6F24($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938844)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBC0u;
    if (runtime->hasFunction(0x1FFBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1FFBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BD3Cu; }
        if (ctx->pc != 0x20BD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInventDataInfoByItemID__17CInventDataManageFi_0x1ffbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BD3Cu; }
        if (ctx->pc != 0x20BD3Cu) { return; }
    }
    ctx->pc = 0x20BD3Cu;
label_20bd3c:
    // 0x20bd3c: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20bd40:
    // 0x20bd40: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x20bd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20bd44:
    // 0x20bd44: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x20bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_20bd48:
    // 0x20bd48: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x20bd48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_20bd4c:
    // 0x20bd4c: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20bd50:
    // 0x20bd50: 0xa04305fc  sb          $v1, 0x5FC($v0)
    ctx->pc = 0x20bd50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1532), (uint8_t)GPR_U32(ctx, 3));
label_20bd54:
    // 0x20bd54: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20bd58:
    // 0x20bd58: 0x84450582  lh          $a1, 0x582($v0)
    ctx->pc = 0x20bd58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1410)));
label_20bd5c:
    // 0x20bd5c: 0xc07fc48  jal         func_1FF120
label_20bd60:
    if (ctx->pc == 0x20BD60u) {
        ctx->pc = 0x20BD60u;
            // 0x20bd60: 0x8f8490d4  lw          $a0, -0x6F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
        ctx->pc = 0x20BD64u;
        goto label_20bd64;
    }
    ctx->pc = 0x20BD5Cu;
    SET_GPR_U32(ctx, 31, 0x20BD64u);
    ctx->pc = 0x20BD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BD5Cu;
            // 0x20bd60: 0x8f8490d4  lw          $a0, -0x6F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF120u;
    if (runtime->hasFunction(0x1FF120u)) {
        auto targetFn = runtime->lookupFunction(0x1FF120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BD64u; }
        if (ctx->pc != 0x20BD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsAlreadyCreatedItem__15CInventUserDataFi_0x1ff120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BD64u; }
        if (ctx->pc != 0x20BD64u) { return; }
    }
    ctx->pc = 0x20BD64u;
label_20bd64:
    // 0x20bd64: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
label_20bd68:
    if (ctx->pc == 0x20BD68u) {
        ctx->pc = 0x20BD6Cu;
        goto label_20bd6c;
    }
    ctx->pc = 0x20BD64u;
    {
        const bool branch_taken_0x20bd64 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20bd64) {
            ctx->pc = 0x20BDBCu;
            goto label_20bdbc;
        }
    }
    ctx->pc = 0x20BD6Cu;
label_20bd6c:
    // 0x20bd6c: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20bd70:
    // 0x20bd70: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20bd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20bd74:
    // 0x20bd74: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20bd74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_20bd78:
    // 0x20bd78: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x20bd78u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
label_20bd7c:
    // 0x20bd7c: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20bd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20bd80:
    // 0x20bd80: 0xc08e7cc  jal         func_239F30
label_20bd84:
    if (ctx->pc == 0x20BD84u) {
        ctx->pc = 0x20BD84u;
            // 0x20bd84: 0x24a59c78  addiu       $a1, $a1, -0x6388 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941816));
        ctx->pc = 0x20BD88u;
        goto label_20bd88;
    }
    ctx->pc = 0x20BD80u;
    SET_GPR_U32(ctx, 31, 0x20BD88u);
    ctx->pc = 0x20BD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BD80u;
            // 0x20bd84: 0x24a59c78  addiu       $a1, $a1, -0x6388 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BD88u; }
        if (ctx->pc != 0x20BD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BD88u; }
        if (ctx->pc != 0x20BD88u) { return; }
    }
    ctx->pc = 0x20BD88u;
label_20bd88:
    // 0x20bd88: 0xc780919c  lwc1        $f0, -0x6E64($gp)
    ctx->pc = 0x20bd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bd8c:
    // 0x20bd8c: 0x27a201f8  addiu       $v0, $sp, 0x1F8
    ctx->pc = 0x20bd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
label_20bd90:
    // 0x20bd90: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x20bd90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_20bd94:
    // 0x20bd94: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20bd98:
    // 0x20bd98: 0xc065810  jal         func_196040
label_20bd9c:
    if (ctx->pc == 0x20BD9Cu) {
        ctx->pc = 0x20BD9Cu;
            // 0x20bd9c: 0x84440582  lh          $a0, 0x582($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1410)));
        ctx->pc = 0x20BDA0u;
        goto label_20bda0;
    }
    ctx->pc = 0x20BD98u;
    SET_GPR_U32(ctx, 31, 0x20BDA0u);
    ctx->pc = 0x20BD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BD98u;
            // 0x20bd9c: 0x84440582  lh          $a0, 0x582($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1410)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BDA0u; }
        if (ctx->pc != 0x20BDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BDA0u; }
        if (ctx->pc != 0x20BDA0u) { return; }
    }
    ctx->pc = 0x20BDA0u;
label_20bda0:
    // 0x20bda0: 0xafa201f8  sw          $v0, 0x1F8($sp)
    ctx->pc = 0x20bda0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 2));
label_20bda4:
    // 0x20bda4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20bda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20bda8:
    // 0x20bda8: 0x27a501f8  addiu       $a1, $sp, 0x1F8
    ctx->pc = 0x20bda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
label_20bdac:
    // 0x20bdac: 0xc087720  jal         func_21DC80
label_20bdb0:
    if (ctx->pc == 0x20BDB0u) {
        ctx->pc = 0x20BDB0u;
            // 0x20bdb0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20BDB4u;
        goto label_20bdb4;
    }
    ctx->pc = 0x20BDACu;
    SET_GPR_U32(ctx, 31, 0x20BDB4u);
    ctx->pc = 0x20BDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BDACu;
            // 0x20bdb0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BDB4u; }
        if (ctx->pc != 0x20BDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BDB4u; }
        if (ctx->pc != 0x20BDB4u) { return; }
    }
    ctx->pc = 0x20BDB4u;
label_20bdb4:
    // 0x20bdb4: 0x100000ad  b           . + 4 + (0xAD << 2)
label_20bdb8:
    if (ctx->pc == 0x20BDB8u) {
        ctx->pc = 0x20BDBCu;
        goto label_20bdbc;
    }
    ctx->pc = 0x20BDB4u;
    {
        const bool branch_taken_0x20bdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bdb4) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20BDBCu;
label_20bdbc:
    // 0x20bdbc: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20bdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20bdc0:
    // 0x20bdc0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20bdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_20bdc4:
    // 0x20bdc4: 0xc08e7cc  jal         func_239F30
label_20bdc8:
    if (ctx->pc == 0x20BDC8u) {
        ctx->pc = 0x20BDC8u;
            // 0x20bdc8: 0x24a59c88  addiu       $a1, $a1, -0x6378 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941832));
        ctx->pc = 0x20BDCCu;
        goto label_20bdcc;
    }
    ctx->pc = 0x20BDC4u;
    SET_GPR_U32(ctx, 31, 0x20BDCCu);
    ctx->pc = 0x20BDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BDC4u;
            // 0x20bdc8: 0x24a59c88  addiu       $a1, $a1, -0x6378 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BDCCu; }
        if (ctx->pc != 0x20BDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BDCCu; }
        if (ctx->pc != 0x20BDCCu) { return; }
    }
    ctx->pc = 0x20BDCCu;
label_20bdcc:
    // 0x20bdcc: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_20bdd0:
    if (ctx->pc == 0x20BDD0u) {
        ctx->pc = 0x20BDD4u;
        goto label_20bdd4;
    }
    ctx->pc = 0x20BDCCu;
    {
        const bool branch_taken_0x20bdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bdcc) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20BDD4u;
label_20bdd4:
    // 0x20bdd4: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20bdd8:
    // 0x20bdd8: 0x8c450114  lw          $a1, 0x114($v0)
    ctx->pc = 0x20bdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
label_20bddc:
    // 0x20bddc: 0xc07fc38  jal         func_1FF0E0
label_20bde0:
    if (ctx->pc == 0x20BDE0u) {
        ctx->pc = 0x20BDE0u;
            // 0x20bde0: 0x8f8490d4  lw          $a0, -0x6F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
        ctx->pc = 0x20BDE4u;
        goto label_20bde4;
    }
    ctx->pc = 0x20BDDCu;
    SET_GPR_U32(ctx, 31, 0x20BDE4u);
    ctx->pc = 0x20BDE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BDDCu;
            // 0x20bde0: 0x8f8490d4  lw          $a0, -0x6F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF0E0u;
    if (runtime->hasFunction(0x1FF0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1FF0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BDE4u; }
        if (ctx->pc != 0x20BDE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCreateItemID__15CInventUserDataFi_0x1ff0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BDE4u; }
        if (ctx->pc != 0x20BDE4u) { return; }
    }
    ctx->pc = 0x20BDE4u;
label_20bde4:
    // 0x20bde4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20bde4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20bde8:
    // 0x20bde8: 0xc094274  jal         func_2509D0
label_20bdec:
    if (ctx->pc == 0x20BDECu) {
        ctx->pc = 0x20BDECu;
            // 0x20bdec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20BDF0u;
        goto label_20bdf0;
    }
    ctx->pc = 0x20BDE8u;
    SET_GPR_U32(ctx, 31, 0x20BDF0u);
    ctx->pc = 0x20BDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BDE8u;
            // 0x20bdec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BDF0u; }
        if (ctx->pc != 0x20BDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BDF0u; }
        if (ctx->pc != 0x20BDF0u) { return; }
    }
    ctx->pc = 0x20BDF0u;
label_20bdf0:
    // 0x20bdf0: 0x1e000006  bgtz        $s0, . + 4 + (0x6 << 2)
label_20bdf4:
    if (ctx->pc == 0x20BDF4u) {
        ctx->pc = 0x20BDF8u;
        goto label_20bdf8;
    }
    ctx->pc = 0x20BDF0u;
    {
        const bool branch_taken_0x20bdf0 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x20bdf0) {
            ctx->pc = 0x20BE0Cu;
            goto label_20be0c;
        }
    }
    ctx->pc = 0x20BDF8u;
label_20bdf8:
    // 0x20bdf8: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20bdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20bdfc:
    // 0x20bdfc: 0xc0807e0  jal         func_201F80
label_20be00:
    if (ctx->pc == 0x20BE00u) {
        ctx->pc = 0x20BE00u;
            // 0x20be00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20BE04u;
        goto label_20be04;
    }
    ctx->pc = 0x20BDFCu;
    SET_GPR_U32(ctx, 31, 0x20BE04u);
    ctx->pc = 0x20BE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BDFCu;
            // 0x20be00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201F80u;
    if (runtime->hasFunction(0x201F80u)) {
        auto targetFn = runtime->lookupFunction(0x201F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BE04u; }
        if (ctx->pc != 0x20BE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrepareNextMode__11CMenuInventFi_0x201f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BE04u; }
        if (ctx->pc != 0x20BE04u) { return; }
    }
    ctx->pc = 0x20BE04u;
label_20be04:
    // 0x20be04: 0x10000099  b           . + 4 + (0x99 << 2)
label_20be08:
    if (ctx->pc == 0x20BE08u) {
        ctx->pc = 0x20BE0Cu;
        goto label_20be0c;
    }
    ctx->pc = 0x20BE04u;
    {
        const bool branch_taken_0x20be04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20be04) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20BE0Cu;
label_20be0c:
    // 0x20be0c: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20be10:
    // 0x20be10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20be10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20be14:
    // 0x20be14: 0xac5000fc  sw          $s0, 0xFC($v0)
    ctx->pc = 0x20be14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 252), GPR_U32(ctx, 16));
label_20be18:
    // 0x20be18: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20be18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20be1c:
    // 0x20be1c: 0xac430100  sw          $v1, 0x100($v0)
    ctx->pc = 0x20be1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 3));
label_20be20:
    // 0x20be20: 0x8f8490dc  lw          $a0, -0x6F24($gp)
    ctx->pc = 0x20be20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938844)));
label_20be24:
    // 0x20be24: 0xc07fef0  jal         func_1FFBC0
label_20be28:
    if (ctx->pc == 0x20BE28u) {
        ctx->pc = 0x20BE28u;
            // 0x20be28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20BE2Cu;
        goto label_20be2c;
    }
    ctx->pc = 0x20BE24u;
    SET_GPR_U32(ctx, 31, 0x20BE2Cu);
    ctx->pc = 0x20BE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BE24u;
            // 0x20be28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBC0u;
    if (runtime->hasFunction(0x1FFBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1FFBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BE2Cu; }
        if (ctx->pc != 0x20BE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInventDataInfoByItemID__17CInventDataManageFi_0x1ffbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BE2Cu; }
        if (ctx->pc != 0x20BE2Cu) { return; }
    }
    ctx->pc = 0x20BE2Cu;
label_20be2c:
    // 0x20be2c: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x20be2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_20be30:
    // 0x20be30: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x20be30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_20be34:
    // 0x20be34: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20be34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20be38:
    // 0x20be38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20be38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20be3c:
    // 0x20be3c: 0xac45057c  sw          $a1, 0x57C($v0)
    ctx->pc = 0x20be3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1404), GPR_U32(ctx, 5));
label_20be40:
    // 0x20be40: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20be40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20be44:
    // 0x20be44: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x20be44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_20be48:
    // 0x20be48: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20be48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20be4c:
    // 0x20be4c: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x20be4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
label_20be50:
    // 0x20be50: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20be50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20be54:
    // 0x20be54: 0xa0430108  sb          $v1, 0x108($v0)
    ctx->pc = 0x20be54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 264), (uint8_t)GPR_U32(ctx, 3));
label_20be58:
    // 0x20be58: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20be58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20be5c:
    // 0x20be5c: 0xc065708  jal         func_195C20
label_20be60:
    if (ctx->pc == 0x20BE60u) {
        ctx->pc = 0x20BE60u;
            // 0x20be60: 0x8c4400fc  lw          $a0, 0xFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
        ctx->pc = 0x20BE64u;
        goto label_20be64;
    }
    ctx->pc = 0x20BE5Cu;
    SET_GPR_U32(ctx, 31, 0x20BE64u);
    ctx->pc = 0x20BE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BE5Cu;
            // 0x20be60: 0x8c4400fc  lw          $a0, 0xFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C20u;
    if (runtime->hasFunction(0x195C20u)) {
        auto targetFn = runtime->lookupFunction(0x195C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BE64u; }
        if (ctx->pc != 0x20BE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonItemData__Fi_0x195c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BE64u; }
        if (ctx->pc != 0x20BE64u) { return; }
    }
    ctx->pc = 0x20BE64u;
label_20be64:
    // 0x20be64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x20be64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20be68:
    // 0x20be68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20be68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20be6c:
    // 0x20be6c: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20be70:
    // 0x20be70: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_20be74:
    if (ctx->pc == 0x20BE74u) {
        ctx->pc = 0x20BE74u;
            // 0x20be74: 0xa443010a  sh          $v1, 0x10A($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 266), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x20BE78u;
        goto label_20be78;
    }
    ctx->pc = 0x20BE70u;
    {
        const bool branch_taken_0x20be70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BE70u;
            // 0x20be74: 0xa443010a  sh          $v1, 0x10A($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 266), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be70) {
            ctx->pc = 0x20BE84u;
            goto label_20be84;
        }
    }
    ctx->pc = 0x20BE78u;
label_20be78:
    // 0x20be78: 0x9643000a  lhu         $v1, 0xA($s2)
    ctx->pc = 0x20be78u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
label_20be7c:
    // 0x20be7c: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20be7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20be80:
    // 0x20be80: 0xa443010a  sh          $v1, 0x10A($v0)
    ctx->pc = 0x20be80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 266), (uint16_t)GPR_U32(ctx, 3));
label_20be84:
    // 0x20be84: 0xc065af8  jal         func_196BE0
label_20be88:
    if (ctx->pc == 0x20BE88u) {
        ctx->pc = 0x20BE8Cu;
        goto label_20be8c;
    }
    ctx->pc = 0x20BE84u;
    SET_GPR_U32(ctx, 31, 0x20BE8Cu);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BE8Cu; }
        if (ctx->pc != 0x20BE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BE8Cu; }
        if (ctx->pc != 0x20BE8Cu) { return; }
    }
    ctx->pc = 0x20BE8Cu;
label_20be8c:
    // 0x20be8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20be8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20be90:
    // 0x20be90: 0xc067778  jal         func_19DDE0
label_20be94:
    if (ctx->pc == 0x20BE94u) {
        ctx->pc = 0x20BE94u;
            // 0x20be94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20BE98u;
        goto label_20be98;
    }
    ctx->pc = 0x20BE90u;
    SET_GPR_U32(ctx, 31, 0x20BE98u);
    ctx->pc = 0x20BE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BE90u;
            // 0x20be94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DDE0u;
    if (runtime->hasFunction(0x19DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x19DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BE98u; }
        if (ctx->pc != 0x20BE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumSameItem__16CUserDataManagerFi_0x19dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BE98u; }
        if (ctx->pc != 0x20BE98u) { return; }
    }
    ctx->pc = 0x20BE98u;
label_20be98:
    // 0x20be98: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20be98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20be9c:
    // 0x20be9c: 0x8483010a  lh          $v1, 0x10A($a0)
    ctx->pc = 0x20be9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 266)));
label_20bea0:
    // 0x20bea0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x20bea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20bea4:
    // 0x20bea4: 0xa482010a  sh          $v0, 0x10A($a0)
    ctx->pc = 0x20bea4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 266), (uint16_t)GPR_U32(ctx, 2));
label_20bea8:
    // 0x20bea8: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x20bea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20beac:
    // 0x20beac: 0x8462010a  lh          $v0, 0x10A($v1)
    ctx->pc = 0x20beacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 266)));
label_20beb0:
    // 0x20beb0: 0x1c400019  bgtz        $v0, . + 4 + (0x19 << 2)
label_20beb4:
    if (ctx->pc == 0x20BEB4u) {
        ctx->pc = 0x20BEB4u;
            // 0x20beb4: 0x2464010a  addiu       $a0, $v1, 0x10A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 266));
        ctx->pc = 0x20BEB8u;
        goto label_20beb8;
    }
    ctx->pc = 0x20BEB0u;
    {
        const bool branch_taken_0x20beb0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x20BEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BEB0u;
            // 0x20beb4: 0x2464010a  addiu       $a0, $v1, 0x10A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20beb0) {
            ctx->pc = 0x20BF18u;
            goto label_20bf18;
        }
    }
    ctx->pc = 0x20BEB8u;
label_20beb8:
    // 0x20beb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20bebc:
    // 0x20bebc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20bebcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_20bec0:
    // 0x20bec0: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x20bec0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
label_20bec4:
    // 0x20bec4: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20bec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20bec8:
    // 0x20bec8: 0xc08e7cc  jal         func_239F30
label_20becc:
    if (ctx->pc == 0x20BECCu) {
        ctx->pc = 0x20BECCu;
            // 0x20becc: 0x24a59c98  addiu       $a1, $a1, -0x6368 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941848));
        ctx->pc = 0x20BED0u;
        goto label_20bed0;
    }
    ctx->pc = 0x20BEC8u;
    SET_GPR_U32(ctx, 31, 0x20BED0u);
    ctx->pc = 0x20BECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BEC8u;
            // 0x20becc: 0x24a59c98  addiu       $a1, $a1, -0x6368 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BED0u; }
        if (ctx->pc != 0x20BED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BED0u; }
        if (ctx->pc != 0x20BED0u) { return; }
    }
    ctx->pc = 0x20BED0u;
label_20bed0:
    // 0x20bed0: 0xc78091a0  lwc1        $f0, -0x6E60($gp)
    ctx->pc = 0x20bed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bed4:
    // 0x20bed4: 0x27a201fc  addiu       $v0, $sp, 0x1FC
    ctx->pc = 0x20bed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 508));
label_20bed8:
    // 0x20bed8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x20bed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_20bedc:
    // 0x20bedc: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20bee0:
    // 0x20bee0: 0xc065810  jal         func_196040
label_20bee4:
    if (ctx->pc == 0x20BEE4u) {
        ctx->pc = 0x20BEE4u;
            // 0x20bee4: 0x8c4400fc  lw          $a0, 0xFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
        ctx->pc = 0x20BEE8u;
        goto label_20bee8;
    }
    ctx->pc = 0x20BEE0u;
    SET_GPR_U32(ctx, 31, 0x20BEE8u);
    ctx->pc = 0x20BEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BEE0u;
            // 0x20bee4: 0x8c4400fc  lw          $a0, 0xFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BEE8u; }
        if (ctx->pc != 0x20BEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BEE8u; }
        if (ctx->pc != 0x20BEE8u) { return; }
    }
    ctx->pc = 0x20BEE8u;
label_20bee8:
    // 0x20bee8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x20bee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_20beec:
    // 0x20beec: 0xafa201fc  sw          $v0, 0x1FC($sp)
    ctx->pc = 0x20beecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 2));
label_20bef0:
    // 0x20bef0: 0x8c24ca50  lw          $a0, -0x35B0($at)
    ctx->pc = 0x20bef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953552)));
label_20bef4:
    // 0x20bef4: 0x27a501fc  addiu       $a1, $sp, 0x1FC
    ctx->pc = 0x20bef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 508));
label_20bef8:
    // 0x20bef8: 0xc087720  jal         func_21DC80
label_20befc:
    if (ctx->pc == 0x20BEFCu) {
        ctx->pc = 0x20BEFCu;
            // 0x20befc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20BF00u;
        goto label_20bf00;
    }
    ctx->pc = 0x20BEF8u;
    SET_GPR_U32(ctx, 31, 0x20BF00u);
    ctx->pc = 0x20BEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BEF8u;
            // 0x20befc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BF00u; }
        if (ctx->pc != 0x20BF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BF00u; }
        if (ctx->pc != 0x20BF00u) { return; }
    }
    ctx->pc = 0x20BF00u;
label_20bf00:
    // 0x20bf00: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x20bf00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_20bf04:
    // 0x20bf04: 0x8c24ca50  lw          $a0, -0x35B0($at)
    ctx->pc = 0x20bf04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953552)));
label_20bf08:
    // 0x20bf08: 0xc0877b8  jal         func_21DEE0
label_20bf0c:
    if (ctx->pc == 0x20BF0Cu) {
        ctx->pc = 0x20BF0Cu;
            // 0x20bf0c: 0x9645000a  lhu         $a1, 0xA($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
        ctx->pc = 0x20BF10u;
        goto label_20bf10;
    }
    ctx->pc = 0x20BF08u;
    SET_GPR_U32(ctx, 31, 0x20BF10u);
    ctx->pc = 0x20BF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BF08u;
            // 0x20bf0c: 0x9645000a  lhu         $a1, 0xA($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BF10u; }
        if (ctx->pc != 0x20BF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BF10u; }
        if (ctx->pc != 0x20BF10u) { return; }
    }
    ctx->pc = 0x20BF10u;
label_20bf10:
    // 0x20bf10: 0x10000056  b           . + 4 + (0x56 << 2)
label_20bf14:
    if (ctx->pc == 0x20BF14u) {
        ctx->pc = 0x20BF18u;
        goto label_20bf18;
    }
    ctx->pc = 0x20BF10u;
    {
        const bool branch_taken_0x20bf10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bf10) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20BF18u;
label_20bf18:
    // 0x20bf18: 0x8643001e  lh          $v1, 0x1E($s2)
    ctx->pc = 0x20bf18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
label_20bf1c:
    // 0x20bf1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20bf20:
    // 0x20bf20: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_20bf24:
    if (ctx->pc == 0x20BF24u) {
        ctx->pc = 0x20BF28u;
        goto label_20bf28;
    }
    ctx->pc = 0x20BF20u;
    {
        const bool branch_taken_0x20bf20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20bf20) {
            ctx->pc = 0x20BF2Cu;
            goto label_20bf2c;
        }
    }
    ctx->pc = 0x20BF28u;
label_20bf28:
    // 0x20bf28: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x20bf28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_20bf2c:
    // 0x20bf2c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x20bf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_20bf30:
    // 0x20bf30: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x20bf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_20bf34:
    // 0x20bf34: 0x2484c3e0  addiu       $a0, $a0, -0x3C20
    ctx->pc = 0x20bf34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951904));
label_20bf38:
    // 0x20bf38: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x20bf38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_20bf3c:
    // 0x20bf3c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x20bf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20bf40:
    // 0x20bf40: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x20bf40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_20bf44:
    // 0x20bf44: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x20bf44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_20bf48:
    // 0x20bf48: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20bf4c:
    // 0x20bf4c: 0xc065810  jal         func_196040
label_20bf50:
    if (ctx->pc == 0x20BF50u) {
        ctx->pc = 0x20BF50u;
            // 0x20bf50: 0x8c4400fc  lw          $a0, 0xFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
        ctx->pc = 0x20BF54u;
        goto label_20bf54;
    }
    ctx->pc = 0x20BF4Cu;
    SET_GPR_U32(ctx, 31, 0x20BF54u);
    ctx->pc = 0x20BF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BF4Cu;
            // 0x20bf50: 0x8c4400fc  lw          $a0, 0xFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BF54u; }
        if (ctx->pc != 0x20BF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BF54u; }
        if (ctx->pc != 0x20BF54u) { return; }
    }
    ctx->pc = 0x20BF54u;
label_20bf54:
    // 0x20bf54: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x20bf54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_20bf58:
    // 0x20bf58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20bf58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bf5c:
    // 0x20bf5c: 0x10000009  b           . + 4 + (0x9 << 2)
label_20bf60:
    if (ctx->pc == 0x20BF60u) {
        ctx->pc = 0x20BF60u;
            // 0x20bf60: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20BF64u;
        goto label_20bf64;
    }
    ctx->pc = 0x20BF5Cu;
    {
        const bool branch_taken_0x20bf5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BF5Cu;
            // 0x20bf60: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf5c) {
            ctx->pc = 0x20BF84u;
            goto label_20bf84;
        }
    }
    ctx->pc = 0x20BF64u;
label_20bf64:
    // 0x20bf64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20bf68:
    // 0x20bf68: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x20bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_20bf6c:
    // 0x20bf6c: 0xc065810  jal         func_196040
label_20bf70:
    if (ctx->pc == 0x20BF70u) {
        ctx->pc = 0x20BF70u;
            // 0x20bf70: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x20BF74u;
        goto label_20bf74;
    }
    ctx->pc = 0x20BF6Cu;
    SET_GPR_U32(ctx, 31, 0x20BF74u);
    ctx->pc = 0x20BF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BF6Cu;
            // 0x20bf70: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BF74u; }
        if (ctx->pc != 0x20BF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BF74u; }
        if (ctx->pc != 0x20BF74u) { return; }
    }
    ctx->pc = 0x20BF74u;
label_20bf74:
    // 0x20bf74: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x20bf74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
label_20bf78:
    // 0x20bf78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20bf78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20bf7c:
    // 0x20bf7c: 0xac6201a4  sw          $v0, 0x1A4($v1)
    ctx->pc = 0x20bf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 420), GPR_U32(ctx, 2));
label_20bf80:
    // 0x20bf80: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x20bf80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_20bf84:
    // 0x20bf84: 0x0  nop
    ctx->pc = 0x20bf84u;
    // NOP
label_20bf88:
    // 0x20bf88: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20bf88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20bf8c:
    // 0x20bf8c: 0x8c83057c  lw          $v1, 0x57C($a0)
    ctx->pc = 0x20bf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1404)));
label_20bf90:
    // 0x20bf90: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x20bf90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_20bf94:
    // 0x20bf94: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x20bf94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20bf98:
    // 0x20bf98: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_20bf9c:
    if (ctx->pc == 0x20BF9Cu) {
        ctx->pc = 0x20BF9Cu;
            // 0x20bf9c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x20BFA0u;
        goto label_20bfa0;
    }
    ctx->pc = 0x20BF98u;
    {
        const bool branch_taken_0x20bf98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BF98u;
            // 0x20bf9c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf98) {
            ctx->pc = 0x20BF64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20bf64;
        }
    }
    ctx->pc = 0x20BFA0u;
label_20bfa0:
    // 0x20bfa0: 0xc08e7cc  jal         func_239F30
label_20bfa4:
    if (ctx->pc == 0x20BFA4u) {
        ctx->pc = 0x20BFA4u;
            // 0x20bfa4: 0x24a59ca8  addiu       $a1, $a1, -0x6358 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941864));
        ctx->pc = 0x20BFA8u;
        goto label_20bfa8;
    }
    ctx->pc = 0x20BFA0u;
    SET_GPR_U32(ctx, 31, 0x20BFA8u);
    ctx->pc = 0x20BFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BFA0u;
            // 0x20bfa4: 0x24a59ca8  addiu       $a1, $a1, -0x6358 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BFA8u; }
        if (ctx->pc != 0x20BFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BFA8u; }
        if (ctx->pc != 0x20BFA8u) { return; }
    }
    ctx->pc = 0x20BFA8u;
label_20bfa8:
    // 0x20bfa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20bfa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20bfac:
    // 0x20bfac: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x20bfacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_20bfb0:
    // 0x20bfb0: 0xc087720  jal         func_21DC80
label_20bfb4:
    if (ctx->pc == 0x20BFB4u) {
        ctx->pc = 0x20BFB4u;
            // 0x20bfb4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x20BFB8u;
        goto label_20bfb8;
    }
    ctx->pc = 0x20BFB0u;
    SET_GPR_U32(ctx, 31, 0x20BFB8u);
    ctx->pc = 0x20BFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BFB0u;
            // 0x20bfb4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BFB8u; }
        if (ctx->pc != 0x20BFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BFB8u; }
        if (ctx->pc != 0x20BFB8u) { return; }
    }
    ctx->pc = 0x20BFB8u;
label_20bfb8:
    // 0x20bfb8: 0xc087898  jal         func_21E260
label_20bfbc:
    if (ctx->pc == 0x20BFBCu) {
        ctx->pc = 0x20BFBCu;
            // 0x20bfbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20BFC0u;
        goto label_20bfc0;
    }
    ctx->pc = 0x20BFB8u;
    SET_GPR_U32(ctx, 31, 0x20BFC0u);
    ctx->pc = 0x20BFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BFB8u;
            // 0x20bfbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BFC0u; }
        if (ctx->pc != 0x20BFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BFC0u; }
        if (ctx->pc != 0x20BFC0u) { return; }
    }
    ctx->pc = 0x20BFC0u;
label_20bfc0:
    // 0x20bfc0: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x20bfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_20bfc4:
    // 0x20bfc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20bfc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bfc8:
    // 0x20bfc8: 0xc08f08c  jal         func_23C230
label_20bfcc:
    if (ctx->pc == 0x20BFCCu) {
        ctx->pc = 0x20BFCCu;
            // 0x20bfcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20BFD0u;
        goto label_20bfd0;
    }
    ctx->pc = 0x20BFC8u;
    SET_GPR_U32(ctx, 31, 0x20BFD0u);
    ctx->pc = 0x20BFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BFC8u;
            // 0x20bfcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C230u;
    if (runtime->hasFunction(0x23C230u)) {
        auto targetFn = runtime->lookupFunction(0x23C230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BFD0u; }
        if (ctx->pc != 0x20BFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVibeR__12CMenuKeyFuncFii_0x23c230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BFD0u; }
        if (ctx->pc != 0x20BFD0u) { return; }
    }
    ctx->pc = 0x20BFD0u;
label_20bfd0:
    // 0x20bfd0: 0x10000026  b           . + 4 + (0x26 << 2)
label_20bfd4:
    if (ctx->pc == 0x20BFD4u) {
        ctx->pc = 0x20BFD8u;
        goto label_20bfd8;
    }
    ctx->pc = 0x20BFD0u;
    {
        const bool branch_taken_0x20bfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bfd0) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20BFD8u;
label_20bfd8:
    // 0x20bfd8: 0xc081878  jal         func_2061E0
label_20bfdc:
    if (ctx->pc == 0x20BFDCu) {
        ctx->pc = 0x20BFDCu;
            // 0x20bfdc: 0x8f849178  lw          $a0, -0x6E88($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
        ctx->pc = 0x20BFE0u;
        goto label_20bfe0;
    }
    ctx->pc = 0x20BFD8u;
    SET_GPR_U32(ctx, 31, 0x20BFE0u);
    ctx->pc = 0x20BFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BFD8u;
            // 0x20bfdc: 0x8f849178  lw          $a0, -0x6E88($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2061E0u;
    if (runtime->hasFunction(0x2061E0u)) {
        auto targetFn = runtime->lookupFunction(0x2061E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BFE0u; }
        if (ctx->pc != 0x20BFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BootExtendCommand__11CMenuInventFv_0x2061e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BFE0u; }
        if (ctx->pc != 0x20BFE0u) { return; }
    }
    ctx->pc = 0x20BFE0u;
label_20bfe0:
    // 0x20bfe0: 0x10000022  b           . + 4 + (0x22 << 2)
label_20bfe4:
    if (ctx->pc == 0x20BFE4u) {
        ctx->pc = 0x20BFE8u;
        goto label_20bfe8;
    }
    ctx->pc = 0x20BFE0u;
    {
        const bool branch_taken_0x20bfe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bfe0) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20BFE8u;
label_20bfe8:
    // 0x20bfe8: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20bfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20bfec:
    // 0x20bfec: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20bfecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_20bff0:
    // 0x20bff0: 0xc08e7cc  jal         func_239F30
label_20bff4:
    if (ctx->pc == 0x20BFF4u) {
        ctx->pc = 0x20BFF4u;
            // 0x20bff4: 0x24a59cb0  addiu       $a1, $a1, -0x6350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941872));
        ctx->pc = 0x20BFF8u;
        goto label_20bff8;
    }
    ctx->pc = 0x20BFF0u;
    SET_GPR_U32(ctx, 31, 0x20BFF8u);
    ctx->pc = 0x20BFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BFF0u;
            // 0x20bff4: 0x24a59cb0  addiu       $a1, $a1, -0x6350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BFF8u; }
        if (ctx->pc != 0x20BFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BFF8u; }
        if (ctx->pc != 0x20BFF8u) { return; }
    }
    ctx->pc = 0x20BFF8u;
label_20bff8:
    // 0x20bff8: 0xc0821b8  jal         func_2086E0
label_20bffc:
    if (ctx->pc == 0x20BFFCu) {
        ctx->pc = 0x20BFFCu;
            // 0x20bffc: 0x8f849178  lw          $a0, -0x6E88($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
        ctx->pc = 0x20C000u;
        goto label_20c000;
    }
    ctx->pc = 0x20BFF8u;
    SET_GPR_U32(ctx, 31, 0x20C000u);
    ctx->pc = 0x20BFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20BFF8u;
            // 0x20bffc: 0x8f849178  lw          $a0, -0x6E88($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2086E0u;
    if (runtime->hasFunction(0x2086E0u)) {
        auto targetFn = runtime->lookupFunction(0x2086E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C000u; }
        if (ctx->pc != 0x20C000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdataNetaMemoStr__11CMenuInventFv_0x2086e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C000u; }
        if (ctx->pc != 0x20C000u) { return; }
    }
    ctx->pc = 0x20C000u;
label_20c000:
    // 0x20c000: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20c000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20c004:
    // 0x20c004: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x20c004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20c008:
    // 0x20c008: 0x10000018  b           . + 4 + (0x18 << 2)
label_20c00c:
    if (ctx->pc == 0x20C00Cu) {
        ctx->pc = 0x20C00Cu;
            // 0x20c00c: 0xa4430014  sh          $v1, 0x14($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x20C010u;
        goto label_20c010;
    }
    ctx->pc = 0x20C008u;
    {
        const bool branch_taken_0x20c008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C008u;
            // 0x20c00c: 0xa4430014  sh          $v1, 0x14($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c008) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20C010u;
label_20c010:
    // 0x20c010: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20c010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20c014:
    // 0x20c014: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20c014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_20c018:
    // 0x20c018: 0xc08e7cc  jal         func_239F30
label_20c01c:
    if (ctx->pc == 0x20C01Cu) {
        ctx->pc = 0x20C01Cu;
            // 0x20c01c: 0x24a59bc0  addiu       $a1, $a1, -0x6440 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941632));
        ctx->pc = 0x20C020u;
        goto label_20c020;
    }
    ctx->pc = 0x20C018u;
    SET_GPR_U32(ctx, 31, 0x20C020u);
    ctx->pc = 0x20C01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C018u;
            // 0x20c01c: 0x24a59bc0  addiu       $a1, $a1, -0x6440 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C020u; }
        if (ctx->pc != 0x20C020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C020u; }
        if (ctx->pc != 0x20C020u) { return; }
    }
    ctx->pc = 0x20C020u;
label_20c020:
    // 0x20c020: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20c020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20c024:
    // 0x20c024: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x20c024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20c028:
    // 0x20c028: 0x10000010  b           . + 4 + (0x10 << 2)
label_20c02c:
    if (ctx->pc == 0x20C02Cu) {
        ctx->pc = 0x20C02Cu;
            // 0x20c02c: 0xa4430014  sh          $v1, 0x14($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x20C030u;
        goto label_20c030;
    }
    ctx->pc = 0x20C028u;
    {
        const bool branch_taken_0x20c028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C028u;
            // 0x20c02c: 0xa4430014  sh          $v1, 0x14($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c028) {
            ctx->pc = 0x20C06Cu;
            goto label_20c06c;
        }
    }
    ctx->pc = 0x20C030u;
label_20c030:
    // 0x20c030: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20c030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20c034:
    // 0x20c034: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x20c034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_20c038:
    // 0x20c038: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20c038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_20c03c:
    // 0x20c03c: 0x240400c9  addiu       $a0, $zero, 0xC9
    ctx->pc = 0x20c03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
label_20c040:
    // 0x20c040: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c044:
    // 0x20c044: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x20c044u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
label_20c048:
    // 0x20c048: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20c048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20c04c:
    // 0x20c04c: 0xa4440002  sh          $a0, 0x2($v0)
    ctx->pc = 0x20c04cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 4));
label_20c050:
    // 0x20c050: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20c050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20c054:
    // 0x20c054: 0xac430d7c  sw          $v1, 0xD7C($v0)
    ctx->pc = 0x20c054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3452), GPR_U32(ctx, 3));
label_20c058:
    // 0x20c058: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20c058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20c05c:
    // 0x20c05c: 0xc08e7cc  jal         func_239F30
label_20c060:
    if (ctx->pc == 0x20C060u) {
        ctx->pc = 0x20C060u;
            // 0x20c060: 0x24a59c48  addiu       $a1, $a1, -0x63B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941768));
        ctx->pc = 0x20C064u;
        goto label_20c064;
    }
    ctx->pc = 0x20C05Cu;
    SET_GPR_U32(ctx, 31, 0x20C064u);
    ctx->pc = 0x20C060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C05Cu;
            // 0x20c060: 0x24a59c48  addiu       $a1, $a1, -0x63B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C064u; }
        if (ctx->pc != 0x20C064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C064u; }
        if (ctx->pc != 0x20C064u) { return; }
    }
    ctx->pc = 0x20C064u;
label_20c064:
    // 0x20c064: 0xc094274  jal         func_2509D0
label_20c068:
    if (ctx->pc == 0x20C068u) {
        ctx->pc = 0x20C068u;
            // 0x20c068: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x20C06Cu;
        goto label_20c06c;
    }
    ctx->pc = 0x20C064u;
    SET_GPR_U32(ctx, 31, 0x20C06Cu);
    ctx->pc = 0x20C068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C064u;
            // 0x20c068: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C06Cu; }
        if (ctx->pc != 0x20C06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C06Cu; }
        if (ctx->pc != 0x20C06Cu) { return; }
    }
    ctx->pc = 0x20C06Cu;
label_20c06c:
    // 0x20c06c: 0x12c0003e  beqz        $s6, . + 4 + (0x3E << 2)
label_20c070:
    if (ctx->pc == 0x20C070u) {
        ctx->pc = 0x20C070u;
            // 0x20c070: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20C074u;
        goto label_20c074;
    }
    ctx->pc = 0x20C06Cu;
    {
        const bool branch_taken_0x20c06c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C06Cu;
            // 0x20c070: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c06c) {
            ctx->pc = 0x20C168u;
            goto label_20c168;
        }
    }
    ctx->pc = 0x20C074u;
label_20c074:
    // 0x20c074: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x20c074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20c078:
    // 0x20c078: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20c078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c07c:
    // 0x20c07c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c080:
    // 0x20c080: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x20c080u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_20c084:
    // 0x20c084: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20c084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20c088:
    // 0x20c088: 0x84830110  lh          $v1, 0x110($a0)
    ctx->pc = 0x20c088u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 272)));
label_20c08c:
    // 0x20c08c: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
label_20c090:
    if (ctx->pc == 0x20C090u) {
        ctx->pc = 0x20C090u;
            // 0x20c090: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x20C094u;
        goto label_20c094;
    }
    ctx->pc = 0x20C08Cu;
    {
        const bool branch_taken_0x20c08c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C08Cu;
            // 0x20c090: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c08c) {
            ctx->pc = 0x20C148u;
            goto label_20c148;
        }
    }
    ctx->pc = 0x20C094u;
label_20c094:
    // 0x20c094: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20c094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_20c098:
    // 0x20c098: 0xc08e7cc  jal         func_239F30
label_20c09c:
    if (ctx->pc == 0x20C09Cu) {
        ctx->pc = 0x20C09Cu;
            // 0x20c09c: 0x24a59cc0  addiu       $a1, $a1, -0x6340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941888));
        ctx->pc = 0x20C0A0u;
        goto label_20c0a0;
    }
    ctx->pc = 0x20C098u;
    SET_GPR_U32(ctx, 31, 0x20C0A0u);
    ctx->pc = 0x20C09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C098u;
            // 0x20c09c: 0x24a59cc0  addiu       $a1, $a1, -0x6340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C0A0u; }
        if (ctx->pc != 0x20C0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C0A0u; }
        if (ctx->pc != 0x20C0A0u) { return; }
    }
    ctx->pc = 0x20C0A0u;
label_20c0a0:
    // 0x20c0a0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x20c0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_20c0a4:
    // 0x20c0a4: 0x27a301e0  addiu       $v1, $sp, 0x1E0
    ctx->pc = 0x20c0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_20c0a8:
    // 0x20c0a8: 0x2484c3f8  addiu       $a0, $a0, -0x3C08
    ctx->pc = 0x20c0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951928));
label_20c0ac:
    // 0x20c0ac: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x20c0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_20c0b0:
    // 0x20c0b0: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x20c0b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_20c0b4:
    // 0x20c0b4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x20c0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20c0b8:
    // 0x20c0b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20c0b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c0bc:
    // 0x20c0bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20c0bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c0c0:
    // 0x20c0c0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x20c0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_20c0c4:
    // 0x20c0c4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x20c0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_20c0c8:
    // 0x20c0c8: 0x8c24caa0  lw          $a0, -0x3560($at)
    ctx->pc = 0x20c0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953632)));
label_20c0cc:
    // 0x20c0cc: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20c0d0:
    // 0x20c0d0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x20c0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_20c0d4:
    // 0x20c0d4: 0xafa401e0  sw          $a0, 0x1E0($sp)
    ctx->pc = 0x20c0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 4));
label_20c0d8:
    // 0x20c0d8: 0x8c23caac  lw          $v1, -0x3554($at)
    ctx->pc = 0x20c0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953644)));
label_20c0dc:
    // 0x20c0dc: 0xafa301e4  sw          $v1, 0x1E4($sp)
    ctx->pc = 0x20c0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 3));
label_20c0e0:
    // 0x20c0e0: 0x8c420638  lw          $v0, 0x638($v0)
    ctx->pc = 0x20c0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1592)));
label_20c0e4:
    // 0x20c0e4: 0xafa201e8  sw          $v0, 0x1E8($sp)
    ctx->pc = 0x20c0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
label_20c0e8:
    // 0x20c0e8: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x20c0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
label_20c0ec:
    // 0x20c0ec: 0x8c5201e0  lw          $s2, 0x1E0($v0)
    ctx->pc = 0x20c0ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 480)));
label_20c0f0:
    // 0x20c0f0: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_20c0f4:
    if (ctx->pc == 0x20C0F4u) {
        ctx->pc = 0x20C0F8u;
        goto label_20c0f8;
    }
    ctx->pc = 0x20C0F0u;
    {
        const bool branch_taken_0x20c0f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c0f0) {
            ctx->pc = 0x20C130u;
            goto label_20c130;
        }
    }
    ctx->pc = 0x20C0F8u;
label_20c0f8:
    // 0x20c0f8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x20c0f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20c0fc:
    // 0x20c0fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20c0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20c100:
    // 0x20c100: 0x8f3900c4  lw          $t9, 0xC4($t9)
    ctx->pc = 0x20c100u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 196)));
label_20c104:
    // 0x20c104: 0x320f809  jalr        $t9
label_20c108:
    if (ctx->pc == 0x20C108u) {
        ctx->pc = 0x20C108u;
            // 0x20c108: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20C10Cu;
        goto label_20c10c;
    }
    ctx->pc = 0x20C104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20C10Cu);
        ctx->pc = 0x20C108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C104u;
            // 0x20c108: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20C10Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20C10Cu; }
            if (ctx->pc != 0x20C10Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20C10Cu;
label_20c10c:
    // 0x20c10c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x20c10cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20c110:
    // 0x20c110: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20c110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20c114:
    // 0x20c114: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20c114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c118:
    // 0x20c118: 0x8f3900f8  lw          $t9, 0xF8($t9)
    ctx->pc = 0x20c118u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 248)));
label_20c11c:
    // 0x20c11c: 0x320f809  jalr        $t9
label_20c120:
    if (ctx->pc == 0x20C120u) {
        ctx->pc = 0x20C120u;
            // 0x20c120: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20C124u;
        goto label_20c124;
    }
    ctx->pc = 0x20C11Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20C124u);
        ctx->pc = 0x20C120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C11Cu;
            // 0x20c120: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20C124u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20C124u; }
            if (ctx->pc != 0x20C124u) { return; }
        }
        }
    }
    ctx->pc = 0x20C124u;
label_20c124:
    // 0x20c124: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x20c124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_20c128:
    // 0x20c128: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x20c128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_20c12c:
    // 0x20c12c: 0xae420058  sw          $v0, 0x58($s2)
    ctx->pc = 0x20c12cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
label_20c130:
    // 0x20c130: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20c130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20c134:
    // 0x20c134: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x20c134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_20c138:
    // 0x20c138: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_20c13c:
    if (ctx->pc == 0x20C13Cu) {
        ctx->pc = 0x20C13Cu;
            // 0x20c13c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x20C140u;
        goto label_20c140;
    }
    ctx->pc = 0x20C138u;
    {
        const bool branch_taken_0x20c138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C138u;
            // 0x20c13c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c138) {
            ctx->pc = 0x20C0E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20c0e8;
        }
    }
    ctx->pc = 0x20C140u;
label_20c140:
    // 0x20c140: 0x10000008  b           . + 4 + (0x8 << 2)
label_20c144:
    if (ctx->pc == 0x20C144u) {
        ctx->pc = 0x20C148u;
        goto label_20c148;
    }
    ctx->pc = 0x20C140u;
    {
        const bool branch_taken_0x20c140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c140) {
            ctx->pc = 0x20C164u;
            goto label_20c164;
        }
    }
    ctx->pc = 0x20C148u;
label_20c148:
    // 0x20c148: 0xc08e7cc  jal         func_239F30
label_20c14c:
    if (ctx->pc == 0x20C14Cu) {
        ctx->pc = 0x20C14Cu;
            // 0x20c14c: 0x24a59cd8  addiu       $a1, $a1, -0x6328 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941912));
        ctx->pc = 0x20C150u;
        goto label_20c150;
    }
    ctx->pc = 0x20C148u;
    SET_GPR_U32(ctx, 31, 0x20C150u);
    ctx->pc = 0x20C14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C148u;
            // 0x20c14c: 0x24a59cd8  addiu       $a1, $a1, -0x6328 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C150u; }
        if (ctx->pc != 0x20C150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C150u; }
        if (ctx->pc != 0x20C150u) { return; }
    }
    ctx->pc = 0x20C150u;
label_20c150:
    // 0x20c150: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x20c150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_20c154:
    // 0x20c154: 0xc08900c  jal         func_224030
label_20c158:
    if (ctx->pc == 0x20C158u) {
        ctx->pc = 0x20C158u;
            // 0x20c158: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20C15Cu;
        goto label_20c15c;
    }
    ctx->pc = 0x20C154u;
    SET_GPR_U32(ctx, 31, 0x20C15Cu);
    ctx->pc = 0x20C158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C154u;
            // 0x20c158: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224030u;
    if (runtime->hasFunction(0x224030u)) {
        auto targetFn = runtime->lookupFunction(0x224030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C15Cu; }
        if (ctx->pc != 0x20C15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainFrameModeSet__Fii_0x224030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C15Cu; }
        if (ctx->pc != 0x20C15Cu) { return; }
    }
    ctx->pc = 0x20C15Cu;
label_20c15c:
    // 0x20c15c: 0xc08d220  jal         func_234880
label_20c160:
    if (ctx->pc == 0x20C160u) {
        ctx->pc = 0x20C160u;
            // 0x20c160: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20C164u;
        goto label_20c164;
    }
    ctx->pc = 0x20C15Cu;
    SET_GPR_U32(ctx, 31, 0x20C164u);
    ctx->pc = 0x20C160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C15Cu;
            // 0x20c160: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234880u;
    if (runtime->hasFunction(0x234880u)) {
        auto targetFn = runtime->lookupFunction(0x234880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C164u; }
        if (ctx->pc != 0x20C164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnMenuIntern__Fi_0x234880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C164u; }
        if (ctx->pc != 0x20C164u) { return; }
    }
    ctx->pc = 0x20C164u;
label_20c164:
    // 0x20c164: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c168:
    // 0x20c168: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x20c168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_20c16c:
    // 0x20c16c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x20c16cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20c170:
    // 0x20c170: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x20c170u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20c174:
    // 0x20c174: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x20c174u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20c178:
    // 0x20c178: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20c178u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20c17c:
    // 0x20c17c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20c17cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20c180:
    // 0x20c180: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20c180u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20c184:
    // 0x20c184: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20c184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20c188:
    // 0x20c188: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20c188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20c18c:
    // 0x20c18c: 0x3e00008  jr          $ra
label_20c190:
    if (ctx->pc == 0x20C190u) {
        ctx->pc = 0x20C190u;
            // 0x20c190: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x20C194u;
        goto label_fallthrough_0x20c18c;
    }
    ctx->pc = 0x20C18Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C18Cu;
            // 0x20c190: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x20c18c:
    ctx->pc = 0x20C194u;
}
