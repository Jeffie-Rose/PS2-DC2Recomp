#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: KeyStep__15CMenuCostumeSelFv
// Address: 0x2bcc60 - 0x2bd63c
void KeyStep__15CMenuCostumeSelFv_0x2bcc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KeyStep__15CMenuCostumeSelFv_0x2bcc60");
#endif

    switch (ctx->pc) {
        case 0x2bcc60u: goto label_2bcc60;
        case 0x2bcc64u: goto label_2bcc64;
        case 0x2bcc68u: goto label_2bcc68;
        case 0x2bcc6cu: goto label_2bcc6c;
        case 0x2bcc70u: goto label_2bcc70;
        case 0x2bcc74u: goto label_2bcc74;
        case 0x2bcc78u: goto label_2bcc78;
        case 0x2bcc7cu: goto label_2bcc7c;
        case 0x2bcc80u: goto label_2bcc80;
        case 0x2bcc84u: goto label_2bcc84;
        case 0x2bcc88u: goto label_2bcc88;
        case 0x2bcc8cu: goto label_2bcc8c;
        case 0x2bcc90u: goto label_2bcc90;
        case 0x2bcc94u: goto label_2bcc94;
        case 0x2bcc98u: goto label_2bcc98;
        case 0x2bcc9cu: goto label_2bcc9c;
        case 0x2bcca0u: goto label_2bcca0;
        case 0x2bcca4u: goto label_2bcca4;
        case 0x2bcca8u: goto label_2bcca8;
        case 0x2bccacu: goto label_2bccac;
        case 0x2bccb0u: goto label_2bccb0;
        case 0x2bccb4u: goto label_2bccb4;
        case 0x2bccb8u: goto label_2bccb8;
        case 0x2bccbcu: goto label_2bccbc;
        case 0x2bccc0u: goto label_2bccc0;
        case 0x2bccc4u: goto label_2bccc4;
        case 0x2bccc8u: goto label_2bccc8;
        case 0x2bccccu: goto label_2bcccc;
        case 0x2bccd0u: goto label_2bccd0;
        case 0x2bccd4u: goto label_2bccd4;
        case 0x2bccd8u: goto label_2bccd8;
        case 0x2bccdcu: goto label_2bccdc;
        case 0x2bcce0u: goto label_2bcce0;
        case 0x2bcce4u: goto label_2bcce4;
        case 0x2bcce8u: goto label_2bcce8;
        case 0x2bccecu: goto label_2bccec;
        case 0x2bccf0u: goto label_2bccf0;
        case 0x2bccf4u: goto label_2bccf4;
        case 0x2bccf8u: goto label_2bccf8;
        case 0x2bccfcu: goto label_2bccfc;
        case 0x2bcd00u: goto label_2bcd00;
        case 0x2bcd04u: goto label_2bcd04;
        case 0x2bcd08u: goto label_2bcd08;
        case 0x2bcd0cu: goto label_2bcd0c;
        case 0x2bcd10u: goto label_2bcd10;
        case 0x2bcd14u: goto label_2bcd14;
        case 0x2bcd18u: goto label_2bcd18;
        case 0x2bcd1cu: goto label_2bcd1c;
        case 0x2bcd20u: goto label_2bcd20;
        case 0x2bcd24u: goto label_2bcd24;
        case 0x2bcd28u: goto label_2bcd28;
        case 0x2bcd2cu: goto label_2bcd2c;
        case 0x2bcd30u: goto label_2bcd30;
        case 0x2bcd34u: goto label_2bcd34;
        case 0x2bcd38u: goto label_2bcd38;
        case 0x2bcd3cu: goto label_2bcd3c;
        case 0x2bcd40u: goto label_2bcd40;
        case 0x2bcd44u: goto label_2bcd44;
        case 0x2bcd48u: goto label_2bcd48;
        case 0x2bcd4cu: goto label_2bcd4c;
        case 0x2bcd50u: goto label_2bcd50;
        case 0x2bcd54u: goto label_2bcd54;
        case 0x2bcd58u: goto label_2bcd58;
        case 0x2bcd5cu: goto label_2bcd5c;
        case 0x2bcd60u: goto label_2bcd60;
        case 0x2bcd64u: goto label_2bcd64;
        case 0x2bcd68u: goto label_2bcd68;
        case 0x2bcd6cu: goto label_2bcd6c;
        case 0x2bcd70u: goto label_2bcd70;
        case 0x2bcd74u: goto label_2bcd74;
        case 0x2bcd78u: goto label_2bcd78;
        case 0x2bcd7cu: goto label_2bcd7c;
        case 0x2bcd80u: goto label_2bcd80;
        case 0x2bcd84u: goto label_2bcd84;
        case 0x2bcd88u: goto label_2bcd88;
        case 0x2bcd8cu: goto label_2bcd8c;
        case 0x2bcd90u: goto label_2bcd90;
        case 0x2bcd94u: goto label_2bcd94;
        case 0x2bcd98u: goto label_2bcd98;
        case 0x2bcd9cu: goto label_2bcd9c;
        case 0x2bcda0u: goto label_2bcda0;
        case 0x2bcda4u: goto label_2bcda4;
        case 0x2bcda8u: goto label_2bcda8;
        case 0x2bcdacu: goto label_2bcdac;
        case 0x2bcdb0u: goto label_2bcdb0;
        case 0x2bcdb4u: goto label_2bcdb4;
        case 0x2bcdb8u: goto label_2bcdb8;
        case 0x2bcdbcu: goto label_2bcdbc;
        case 0x2bcdc0u: goto label_2bcdc0;
        case 0x2bcdc4u: goto label_2bcdc4;
        case 0x2bcdc8u: goto label_2bcdc8;
        case 0x2bcdccu: goto label_2bcdcc;
        case 0x2bcdd0u: goto label_2bcdd0;
        case 0x2bcdd4u: goto label_2bcdd4;
        case 0x2bcdd8u: goto label_2bcdd8;
        case 0x2bcddcu: goto label_2bcddc;
        case 0x2bcde0u: goto label_2bcde0;
        case 0x2bcde4u: goto label_2bcde4;
        case 0x2bcde8u: goto label_2bcde8;
        case 0x2bcdecu: goto label_2bcdec;
        case 0x2bcdf0u: goto label_2bcdf0;
        case 0x2bcdf4u: goto label_2bcdf4;
        case 0x2bcdf8u: goto label_2bcdf8;
        case 0x2bcdfcu: goto label_2bcdfc;
        case 0x2bce00u: goto label_2bce00;
        case 0x2bce04u: goto label_2bce04;
        case 0x2bce08u: goto label_2bce08;
        case 0x2bce0cu: goto label_2bce0c;
        case 0x2bce10u: goto label_2bce10;
        case 0x2bce14u: goto label_2bce14;
        case 0x2bce18u: goto label_2bce18;
        case 0x2bce1cu: goto label_2bce1c;
        case 0x2bce20u: goto label_2bce20;
        case 0x2bce24u: goto label_2bce24;
        case 0x2bce28u: goto label_2bce28;
        case 0x2bce2cu: goto label_2bce2c;
        case 0x2bce30u: goto label_2bce30;
        case 0x2bce34u: goto label_2bce34;
        case 0x2bce38u: goto label_2bce38;
        case 0x2bce3cu: goto label_2bce3c;
        case 0x2bce40u: goto label_2bce40;
        case 0x2bce44u: goto label_2bce44;
        case 0x2bce48u: goto label_2bce48;
        case 0x2bce4cu: goto label_2bce4c;
        case 0x2bce50u: goto label_2bce50;
        case 0x2bce54u: goto label_2bce54;
        case 0x2bce58u: goto label_2bce58;
        case 0x2bce5cu: goto label_2bce5c;
        case 0x2bce60u: goto label_2bce60;
        case 0x2bce64u: goto label_2bce64;
        case 0x2bce68u: goto label_2bce68;
        case 0x2bce6cu: goto label_2bce6c;
        case 0x2bce70u: goto label_2bce70;
        case 0x2bce74u: goto label_2bce74;
        case 0x2bce78u: goto label_2bce78;
        case 0x2bce7cu: goto label_2bce7c;
        case 0x2bce80u: goto label_2bce80;
        case 0x2bce84u: goto label_2bce84;
        case 0x2bce88u: goto label_2bce88;
        case 0x2bce8cu: goto label_2bce8c;
        case 0x2bce90u: goto label_2bce90;
        case 0x2bce94u: goto label_2bce94;
        case 0x2bce98u: goto label_2bce98;
        case 0x2bce9cu: goto label_2bce9c;
        case 0x2bcea0u: goto label_2bcea0;
        case 0x2bcea4u: goto label_2bcea4;
        case 0x2bcea8u: goto label_2bcea8;
        case 0x2bceacu: goto label_2bceac;
        case 0x2bceb0u: goto label_2bceb0;
        case 0x2bceb4u: goto label_2bceb4;
        case 0x2bceb8u: goto label_2bceb8;
        case 0x2bcebcu: goto label_2bcebc;
        case 0x2bcec0u: goto label_2bcec0;
        case 0x2bcec4u: goto label_2bcec4;
        case 0x2bcec8u: goto label_2bcec8;
        case 0x2bceccu: goto label_2bcecc;
        case 0x2bced0u: goto label_2bced0;
        case 0x2bced4u: goto label_2bced4;
        case 0x2bced8u: goto label_2bced8;
        case 0x2bcedcu: goto label_2bcedc;
        case 0x2bcee0u: goto label_2bcee0;
        case 0x2bcee4u: goto label_2bcee4;
        case 0x2bcee8u: goto label_2bcee8;
        case 0x2bceecu: goto label_2bceec;
        case 0x2bcef0u: goto label_2bcef0;
        case 0x2bcef4u: goto label_2bcef4;
        case 0x2bcef8u: goto label_2bcef8;
        case 0x2bcefcu: goto label_2bcefc;
        case 0x2bcf00u: goto label_2bcf00;
        case 0x2bcf04u: goto label_2bcf04;
        case 0x2bcf08u: goto label_2bcf08;
        case 0x2bcf0cu: goto label_2bcf0c;
        case 0x2bcf10u: goto label_2bcf10;
        case 0x2bcf14u: goto label_2bcf14;
        case 0x2bcf18u: goto label_2bcf18;
        case 0x2bcf1cu: goto label_2bcf1c;
        case 0x2bcf20u: goto label_2bcf20;
        case 0x2bcf24u: goto label_2bcf24;
        case 0x2bcf28u: goto label_2bcf28;
        case 0x2bcf2cu: goto label_2bcf2c;
        case 0x2bcf30u: goto label_2bcf30;
        case 0x2bcf34u: goto label_2bcf34;
        case 0x2bcf38u: goto label_2bcf38;
        case 0x2bcf3cu: goto label_2bcf3c;
        case 0x2bcf40u: goto label_2bcf40;
        case 0x2bcf44u: goto label_2bcf44;
        case 0x2bcf48u: goto label_2bcf48;
        case 0x2bcf4cu: goto label_2bcf4c;
        case 0x2bcf50u: goto label_2bcf50;
        case 0x2bcf54u: goto label_2bcf54;
        case 0x2bcf58u: goto label_2bcf58;
        case 0x2bcf5cu: goto label_2bcf5c;
        case 0x2bcf60u: goto label_2bcf60;
        case 0x2bcf64u: goto label_2bcf64;
        case 0x2bcf68u: goto label_2bcf68;
        case 0x2bcf6cu: goto label_2bcf6c;
        case 0x2bcf70u: goto label_2bcf70;
        case 0x2bcf74u: goto label_2bcf74;
        case 0x2bcf78u: goto label_2bcf78;
        case 0x2bcf7cu: goto label_2bcf7c;
        case 0x2bcf80u: goto label_2bcf80;
        case 0x2bcf84u: goto label_2bcf84;
        case 0x2bcf88u: goto label_2bcf88;
        case 0x2bcf8cu: goto label_2bcf8c;
        case 0x2bcf90u: goto label_2bcf90;
        case 0x2bcf94u: goto label_2bcf94;
        case 0x2bcf98u: goto label_2bcf98;
        case 0x2bcf9cu: goto label_2bcf9c;
        case 0x2bcfa0u: goto label_2bcfa0;
        case 0x2bcfa4u: goto label_2bcfa4;
        case 0x2bcfa8u: goto label_2bcfa8;
        case 0x2bcfacu: goto label_2bcfac;
        case 0x2bcfb0u: goto label_2bcfb0;
        case 0x2bcfb4u: goto label_2bcfb4;
        case 0x2bcfb8u: goto label_2bcfb8;
        case 0x2bcfbcu: goto label_2bcfbc;
        case 0x2bcfc0u: goto label_2bcfc0;
        case 0x2bcfc4u: goto label_2bcfc4;
        case 0x2bcfc8u: goto label_2bcfc8;
        case 0x2bcfccu: goto label_2bcfcc;
        case 0x2bcfd0u: goto label_2bcfd0;
        case 0x2bcfd4u: goto label_2bcfd4;
        case 0x2bcfd8u: goto label_2bcfd8;
        case 0x2bcfdcu: goto label_2bcfdc;
        case 0x2bcfe0u: goto label_2bcfe0;
        case 0x2bcfe4u: goto label_2bcfe4;
        case 0x2bcfe8u: goto label_2bcfe8;
        case 0x2bcfecu: goto label_2bcfec;
        case 0x2bcff0u: goto label_2bcff0;
        case 0x2bcff4u: goto label_2bcff4;
        case 0x2bcff8u: goto label_2bcff8;
        case 0x2bcffcu: goto label_2bcffc;
        case 0x2bd000u: goto label_2bd000;
        case 0x2bd004u: goto label_2bd004;
        case 0x2bd008u: goto label_2bd008;
        case 0x2bd00cu: goto label_2bd00c;
        case 0x2bd010u: goto label_2bd010;
        case 0x2bd014u: goto label_2bd014;
        case 0x2bd018u: goto label_2bd018;
        case 0x2bd01cu: goto label_2bd01c;
        case 0x2bd020u: goto label_2bd020;
        case 0x2bd024u: goto label_2bd024;
        case 0x2bd028u: goto label_2bd028;
        case 0x2bd02cu: goto label_2bd02c;
        case 0x2bd030u: goto label_2bd030;
        case 0x2bd034u: goto label_2bd034;
        case 0x2bd038u: goto label_2bd038;
        case 0x2bd03cu: goto label_2bd03c;
        case 0x2bd040u: goto label_2bd040;
        case 0x2bd044u: goto label_2bd044;
        case 0x2bd048u: goto label_2bd048;
        case 0x2bd04cu: goto label_2bd04c;
        case 0x2bd050u: goto label_2bd050;
        case 0x2bd054u: goto label_2bd054;
        case 0x2bd058u: goto label_2bd058;
        case 0x2bd05cu: goto label_2bd05c;
        case 0x2bd060u: goto label_2bd060;
        case 0x2bd064u: goto label_2bd064;
        case 0x2bd068u: goto label_2bd068;
        case 0x2bd06cu: goto label_2bd06c;
        case 0x2bd070u: goto label_2bd070;
        case 0x2bd074u: goto label_2bd074;
        case 0x2bd078u: goto label_2bd078;
        case 0x2bd07cu: goto label_2bd07c;
        case 0x2bd080u: goto label_2bd080;
        case 0x2bd084u: goto label_2bd084;
        case 0x2bd088u: goto label_2bd088;
        case 0x2bd08cu: goto label_2bd08c;
        case 0x2bd090u: goto label_2bd090;
        case 0x2bd094u: goto label_2bd094;
        case 0x2bd098u: goto label_2bd098;
        case 0x2bd09cu: goto label_2bd09c;
        case 0x2bd0a0u: goto label_2bd0a0;
        case 0x2bd0a4u: goto label_2bd0a4;
        case 0x2bd0a8u: goto label_2bd0a8;
        case 0x2bd0acu: goto label_2bd0ac;
        case 0x2bd0b0u: goto label_2bd0b0;
        case 0x2bd0b4u: goto label_2bd0b4;
        case 0x2bd0b8u: goto label_2bd0b8;
        case 0x2bd0bcu: goto label_2bd0bc;
        case 0x2bd0c0u: goto label_2bd0c0;
        case 0x2bd0c4u: goto label_2bd0c4;
        case 0x2bd0c8u: goto label_2bd0c8;
        case 0x2bd0ccu: goto label_2bd0cc;
        case 0x2bd0d0u: goto label_2bd0d0;
        case 0x2bd0d4u: goto label_2bd0d4;
        case 0x2bd0d8u: goto label_2bd0d8;
        case 0x2bd0dcu: goto label_2bd0dc;
        case 0x2bd0e0u: goto label_2bd0e0;
        case 0x2bd0e4u: goto label_2bd0e4;
        case 0x2bd0e8u: goto label_2bd0e8;
        case 0x2bd0ecu: goto label_2bd0ec;
        case 0x2bd0f0u: goto label_2bd0f0;
        case 0x2bd0f4u: goto label_2bd0f4;
        case 0x2bd0f8u: goto label_2bd0f8;
        case 0x2bd0fcu: goto label_2bd0fc;
        case 0x2bd100u: goto label_2bd100;
        case 0x2bd104u: goto label_2bd104;
        case 0x2bd108u: goto label_2bd108;
        case 0x2bd10cu: goto label_2bd10c;
        case 0x2bd110u: goto label_2bd110;
        case 0x2bd114u: goto label_2bd114;
        case 0x2bd118u: goto label_2bd118;
        case 0x2bd11cu: goto label_2bd11c;
        case 0x2bd120u: goto label_2bd120;
        case 0x2bd124u: goto label_2bd124;
        case 0x2bd128u: goto label_2bd128;
        case 0x2bd12cu: goto label_2bd12c;
        case 0x2bd130u: goto label_2bd130;
        case 0x2bd134u: goto label_2bd134;
        case 0x2bd138u: goto label_2bd138;
        case 0x2bd13cu: goto label_2bd13c;
        case 0x2bd140u: goto label_2bd140;
        case 0x2bd144u: goto label_2bd144;
        case 0x2bd148u: goto label_2bd148;
        case 0x2bd14cu: goto label_2bd14c;
        case 0x2bd150u: goto label_2bd150;
        case 0x2bd154u: goto label_2bd154;
        case 0x2bd158u: goto label_2bd158;
        case 0x2bd15cu: goto label_2bd15c;
        case 0x2bd160u: goto label_2bd160;
        case 0x2bd164u: goto label_2bd164;
        case 0x2bd168u: goto label_2bd168;
        case 0x2bd16cu: goto label_2bd16c;
        case 0x2bd170u: goto label_2bd170;
        case 0x2bd174u: goto label_2bd174;
        case 0x2bd178u: goto label_2bd178;
        case 0x2bd17cu: goto label_2bd17c;
        case 0x2bd180u: goto label_2bd180;
        case 0x2bd184u: goto label_2bd184;
        case 0x2bd188u: goto label_2bd188;
        case 0x2bd18cu: goto label_2bd18c;
        case 0x2bd190u: goto label_2bd190;
        case 0x2bd194u: goto label_2bd194;
        case 0x2bd198u: goto label_2bd198;
        case 0x2bd19cu: goto label_2bd19c;
        case 0x2bd1a0u: goto label_2bd1a0;
        case 0x2bd1a4u: goto label_2bd1a4;
        case 0x2bd1a8u: goto label_2bd1a8;
        case 0x2bd1acu: goto label_2bd1ac;
        case 0x2bd1b0u: goto label_2bd1b0;
        case 0x2bd1b4u: goto label_2bd1b4;
        case 0x2bd1b8u: goto label_2bd1b8;
        case 0x2bd1bcu: goto label_2bd1bc;
        case 0x2bd1c0u: goto label_2bd1c0;
        case 0x2bd1c4u: goto label_2bd1c4;
        case 0x2bd1c8u: goto label_2bd1c8;
        case 0x2bd1ccu: goto label_2bd1cc;
        case 0x2bd1d0u: goto label_2bd1d0;
        case 0x2bd1d4u: goto label_2bd1d4;
        case 0x2bd1d8u: goto label_2bd1d8;
        case 0x2bd1dcu: goto label_2bd1dc;
        case 0x2bd1e0u: goto label_2bd1e0;
        case 0x2bd1e4u: goto label_2bd1e4;
        case 0x2bd1e8u: goto label_2bd1e8;
        case 0x2bd1ecu: goto label_2bd1ec;
        case 0x2bd1f0u: goto label_2bd1f0;
        case 0x2bd1f4u: goto label_2bd1f4;
        case 0x2bd1f8u: goto label_2bd1f8;
        case 0x2bd1fcu: goto label_2bd1fc;
        case 0x2bd200u: goto label_2bd200;
        case 0x2bd204u: goto label_2bd204;
        case 0x2bd208u: goto label_2bd208;
        case 0x2bd20cu: goto label_2bd20c;
        case 0x2bd210u: goto label_2bd210;
        case 0x2bd214u: goto label_2bd214;
        case 0x2bd218u: goto label_2bd218;
        case 0x2bd21cu: goto label_2bd21c;
        case 0x2bd220u: goto label_2bd220;
        case 0x2bd224u: goto label_2bd224;
        case 0x2bd228u: goto label_2bd228;
        case 0x2bd22cu: goto label_2bd22c;
        case 0x2bd230u: goto label_2bd230;
        case 0x2bd234u: goto label_2bd234;
        case 0x2bd238u: goto label_2bd238;
        case 0x2bd23cu: goto label_2bd23c;
        case 0x2bd240u: goto label_2bd240;
        case 0x2bd244u: goto label_2bd244;
        case 0x2bd248u: goto label_2bd248;
        case 0x2bd24cu: goto label_2bd24c;
        case 0x2bd250u: goto label_2bd250;
        case 0x2bd254u: goto label_2bd254;
        case 0x2bd258u: goto label_2bd258;
        case 0x2bd25cu: goto label_2bd25c;
        case 0x2bd260u: goto label_2bd260;
        case 0x2bd264u: goto label_2bd264;
        case 0x2bd268u: goto label_2bd268;
        case 0x2bd26cu: goto label_2bd26c;
        case 0x2bd270u: goto label_2bd270;
        case 0x2bd274u: goto label_2bd274;
        case 0x2bd278u: goto label_2bd278;
        case 0x2bd27cu: goto label_2bd27c;
        case 0x2bd280u: goto label_2bd280;
        case 0x2bd284u: goto label_2bd284;
        case 0x2bd288u: goto label_2bd288;
        case 0x2bd28cu: goto label_2bd28c;
        case 0x2bd290u: goto label_2bd290;
        case 0x2bd294u: goto label_2bd294;
        case 0x2bd298u: goto label_2bd298;
        case 0x2bd29cu: goto label_2bd29c;
        case 0x2bd2a0u: goto label_2bd2a0;
        case 0x2bd2a4u: goto label_2bd2a4;
        case 0x2bd2a8u: goto label_2bd2a8;
        case 0x2bd2acu: goto label_2bd2ac;
        case 0x2bd2b0u: goto label_2bd2b0;
        case 0x2bd2b4u: goto label_2bd2b4;
        case 0x2bd2b8u: goto label_2bd2b8;
        case 0x2bd2bcu: goto label_2bd2bc;
        case 0x2bd2c0u: goto label_2bd2c0;
        case 0x2bd2c4u: goto label_2bd2c4;
        case 0x2bd2c8u: goto label_2bd2c8;
        case 0x2bd2ccu: goto label_2bd2cc;
        case 0x2bd2d0u: goto label_2bd2d0;
        case 0x2bd2d4u: goto label_2bd2d4;
        case 0x2bd2d8u: goto label_2bd2d8;
        case 0x2bd2dcu: goto label_2bd2dc;
        case 0x2bd2e0u: goto label_2bd2e0;
        case 0x2bd2e4u: goto label_2bd2e4;
        case 0x2bd2e8u: goto label_2bd2e8;
        case 0x2bd2ecu: goto label_2bd2ec;
        case 0x2bd2f0u: goto label_2bd2f0;
        case 0x2bd2f4u: goto label_2bd2f4;
        case 0x2bd2f8u: goto label_2bd2f8;
        case 0x2bd2fcu: goto label_2bd2fc;
        case 0x2bd300u: goto label_2bd300;
        case 0x2bd304u: goto label_2bd304;
        case 0x2bd308u: goto label_2bd308;
        case 0x2bd30cu: goto label_2bd30c;
        case 0x2bd310u: goto label_2bd310;
        case 0x2bd314u: goto label_2bd314;
        case 0x2bd318u: goto label_2bd318;
        case 0x2bd31cu: goto label_2bd31c;
        case 0x2bd320u: goto label_2bd320;
        case 0x2bd324u: goto label_2bd324;
        case 0x2bd328u: goto label_2bd328;
        case 0x2bd32cu: goto label_2bd32c;
        case 0x2bd330u: goto label_2bd330;
        case 0x2bd334u: goto label_2bd334;
        case 0x2bd338u: goto label_2bd338;
        case 0x2bd33cu: goto label_2bd33c;
        case 0x2bd340u: goto label_2bd340;
        case 0x2bd344u: goto label_2bd344;
        case 0x2bd348u: goto label_2bd348;
        case 0x2bd34cu: goto label_2bd34c;
        case 0x2bd350u: goto label_2bd350;
        case 0x2bd354u: goto label_2bd354;
        case 0x2bd358u: goto label_2bd358;
        case 0x2bd35cu: goto label_2bd35c;
        case 0x2bd360u: goto label_2bd360;
        case 0x2bd364u: goto label_2bd364;
        case 0x2bd368u: goto label_2bd368;
        case 0x2bd36cu: goto label_2bd36c;
        case 0x2bd370u: goto label_2bd370;
        case 0x2bd374u: goto label_2bd374;
        case 0x2bd378u: goto label_2bd378;
        case 0x2bd37cu: goto label_2bd37c;
        case 0x2bd380u: goto label_2bd380;
        case 0x2bd384u: goto label_2bd384;
        case 0x2bd388u: goto label_2bd388;
        case 0x2bd38cu: goto label_2bd38c;
        case 0x2bd390u: goto label_2bd390;
        case 0x2bd394u: goto label_2bd394;
        case 0x2bd398u: goto label_2bd398;
        case 0x2bd39cu: goto label_2bd39c;
        case 0x2bd3a0u: goto label_2bd3a0;
        case 0x2bd3a4u: goto label_2bd3a4;
        case 0x2bd3a8u: goto label_2bd3a8;
        case 0x2bd3acu: goto label_2bd3ac;
        case 0x2bd3b0u: goto label_2bd3b0;
        case 0x2bd3b4u: goto label_2bd3b4;
        case 0x2bd3b8u: goto label_2bd3b8;
        case 0x2bd3bcu: goto label_2bd3bc;
        case 0x2bd3c0u: goto label_2bd3c0;
        case 0x2bd3c4u: goto label_2bd3c4;
        case 0x2bd3c8u: goto label_2bd3c8;
        case 0x2bd3ccu: goto label_2bd3cc;
        case 0x2bd3d0u: goto label_2bd3d0;
        case 0x2bd3d4u: goto label_2bd3d4;
        case 0x2bd3d8u: goto label_2bd3d8;
        case 0x2bd3dcu: goto label_2bd3dc;
        case 0x2bd3e0u: goto label_2bd3e0;
        case 0x2bd3e4u: goto label_2bd3e4;
        case 0x2bd3e8u: goto label_2bd3e8;
        case 0x2bd3ecu: goto label_2bd3ec;
        case 0x2bd3f0u: goto label_2bd3f0;
        case 0x2bd3f4u: goto label_2bd3f4;
        case 0x2bd3f8u: goto label_2bd3f8;
        case 0x2bd3fcu: goto label_2bd3fc;
        case 0x2bd400u: goto label_2bd400;
        case 0x2bd404u: goto label_2bd404;
        case 0x2bd408u: goto label_2bd408;
        case 0x2bd40cu: goto label_2bd40c;
        case 0x2bd410u: goto label_2bd410;
        case 0x2bd414u: goto label_2bd414;
        case 0x2bd418u: goto label_2bd418;
        case 0x2bd41cu: goto label_2bd41c;
        case 0x2bd420u: goto label_2bd420;
        case 0x2bd424u: goto label_2bd424;
        case 0x2bd428u: goto label_2bd428;
        case 0x2bd42cu: goto label_2bd42c;
        case 0x2bd430u: goto label_2bd430;
        case 0x2bd434u: goto label_2bd434;
        case 0x2bd438u: goto label_2bd438;
        case 0x2bd43cu: goto label_2bd43c;
        case 0x2bd440u: goto label_2bd440;
        case 0x2bd444u: goto label_2bd444;
        case 0x2bd448u: goto label_2bd448;
        case 0x2bd44cu: goto label_2bd44c;
        case 0x2bd450u: goto label_2bd450;
        case 0x2bd454u: goto label_2bd454;
        case 0x2bd458u: goto label_2bd458;
        case 0x2bd45cu: goto label_2bd45c;
        case 0x2bd460u: goto label_2bd460;
        case 0x2bd464u: goto label_2bd464;
        case 0x2bd468u: goto label_2bd468;
        case 0x2bd46cu: goto label_2bd46c;
        case 0x2bd470u: goto label_2bd470;
        case 0x2bd474u: goto label_2bd474;
        case 0x2bd478u: goto label_2bd478;
        case 0x2bd47cu: goto label_2bd47c;
        case 0x2bd480u: goto label_2bd480;
        case 0x2bd484u: goto label_2bd484;
        case 0x2bd488u: goto label_2bd488;
        case 0x2bd48cu: goto label_2bd48c;
        case 0x2bd490u: goto label_2bd490;
        case 0x2bd494u: goto label_2bd494;
        case 0x2bd498u: goto label_2bd498;
        case 0x2bd49cu: goto label_2bd49c;
        case 0x2bd4a0u: goto label_2bd4a0;
        case 0x2bd4a4u: goto label_2bd4a4;
        case 0x2bd4a8u: goto label_2bd4a8;
        case 0x2bd4acu: goto label_2bd4ac;
        case 0x2bd4b0u: goto label_2bd4b0;
        case 0x2bd4b4u: goto label_2bd4b4;
        case 0x2bd4b8u: goto label_2bd4b8;
        case 0x2bd4bcu: goto label_2bd4bc;
        case 0x2bd4c0u: goto label_2bd4c0;
        case 0x2bd4c4u: goto label_2bd4c4;
        case 0x2bd4c8u: goto label_2bd4c8;
        case 0x2bd4ccu: goto label_2bd4cc;
        case 0x2bd4d0u: goto label_2bd4d0;
        case 0x2bd4d4u: goto label_2bd4d4;
        case 0x2bd4d8u: goto label_2bd4d8;
        case 0x2bd4dcu: goto label_2bd4dc;
        case 0x2bd4e0u: goto label_2bd4e0;
        case 0x2bd4e4u: goto label_2bd4e4;
        case 0x2bd4e8u: goto label_2bd4e8;
        case 0x2bd4ecu: goto label_2bd4ec;
        case 0x2bd4f0u: goto label_2bd4f0;
        case 0x2bd4f4u: goto label_2bd4f4;
        case 0x2bd4f8u: goto label_2bd4f8;
        case 0x2bd4fcu: goto label_2bd4fc;
        case 0x2bd500u: goto label_2bd500;
        case 0x2bd504u: goto label_2bd504;
        case 0x2bd508u: goto label_2bd508;
        case 0x2bd50cu: goto label_2bd50c;
        case 0x2bd510u: goto label_2bd510;
        case 0x2bd514u: goto label_2bd514;
        case 0x2bd518u: goto label_2bd518;
        case 0x2bd51cu: goto label_2bd51c;
        case 0x2bd520u: goto label_2bd520;
        case 0x2bd524u: goto label_2bd524;
        case 0x2bd528u: goto label_2bd528;
        case 0x2bd52cu: goto label_2bd52c;
        case 0x2bd530u: goto label_2bd530;
        case 0x2bd534u: goto label_2bd534;
        case 0x2bd538u: goto label_2bd538;
        case 0x2bd53cu: goto label_2bd53c;
        case 0x2bd540u: goto label_2bd540;
        case 0x2bd544u: goto label_2bd544;
        case 0x2bd548u: goto label_2bd548;
        case 0x2bd54cu: goto label_2bd54c;
        case 0x2bd550u: goto label_2bd550;
        case 0x2bd554u: goto label_2bd554;
        case 0x2bd558u: goto label_2bd558;
        case 0x2bd55cu: goto label_2bd55c;
        case 0x2bd560u: goto label_2bd560;
        case 0x2bd564u: goto label_2bd564;
        case 0x2bd568u: goto label_2bd568;
        case 0x2bd56cu: goto label_2bd56c;
        case 0x2bd570u: goto label_2bd570;
        case 0x2bd574u: goto label_2bd574;
        case 0x2bd578u: goto label_2bd578;
        case 0x2bd57cu: goto label_2bd57c;
        case 0x2bd580u: goto label_2bd580;
        case 0x2bd584u: goto label_2bd584;
        case 0x2bd588u: goto label_2bd588;
        case 0x2bd58cu: goto label_2bd58c;
        case 0x2bd590u: goto label_2bd590;
        case 0x2bd594u: goto label_2bd594;
        case 0x2bd598u: goto label_2bd598;
        case 0x2bd59cu: goto label_2bd59c;
        case 0x2bd5a0u: goto label_2bd5a0;
        case 0x2bd5a4u: goto label_2bd5a4;
        case 0x2bd5a8u: goto label_2bd5a8;
        case 0x2bd5acu: goto label_2bd5ac;
        case 0x2bd5b0u: goto label_2bd5b0;
        case 0x2bd5b4u: goto label_2bd5b4;
        case 0x2bd5b8u: goto label_2bd5b8;
        case 0x2bd5bcu: goto label_2bd5bc;
        case 0x2bd5c0u: goto label_2bd5c0;
        case 0x2bd5c4u: goto label_2bd5c4;
        case 0x2bd5c8u: goto label_2bd5c8;
        case 0x2bd5ccu: goto label_2bd5cc;
        case 0x2bd5d0u: goto label_2bd5d0;
        case 0x2bd5d4u: goto label_2bd5d4;
        case 0x2bd5d8u: goto label_2bd5d8;
        case 0x2bd5dcu: goto label_2bd5dc;
        case 0x2bd5e0u: goto label_2bd5e0;
        case 0x2bd5e4u: goto label_2bd5e4;
        case 0x2bd5e8u: goto label_2bd5e8;
        case 0x2bd5ecu: goto label_2bd5ec;
        case 0x2bd5f0u: goto label_2bd5f0;
        case 0x2bd5f4u: goto label_2bd5f4;
        case 0x2bd5f8u: goto label_2bd5f8;
        case 0x2bd5fcu: goto label_2bd5fc;
        case 0x2bd600u: goto label_2bd600;
        case 0x2bd604u: goto label_2bd604;
        case 0x2bd608u: goto label_2bd608;
        case 0x2bd60cu: goto label_2bd60c;
        case 0x2bd610u: goto label_2bd610;
        case 0x2bd614u: goto label_2bd614;
        case 0x2bd618u: goto label_2bd618;
        case 0x2bd61cu: goto label_2bd61c;
        case 0x2bd620u: goto label_2bd620;
        case 0x2bd624u: goto label_2bd624;
        case 0x2bd628u: goto label_2bd628;
        case 0x2bd62cu: goto label_2bd62c;
        case 0x2bd630u: goto label_2bd630;
        case 0x2bd634u: goto label_2bd634;
        case 0x2bd638u: goto label_2bd638;
        default: break;
    }

    ctx->pc = 0x2bcc60u;

label_2bcc60:
    // 0x2bcc60: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2bcc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2bcc64:
    // 0x2bcc64: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2bcc64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2bcc68:
    // 0x2bcc68: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2bcc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2bcc6c:
    // 0x2bcc6c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2bcc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2bcc70:
    // 0x2bcc70: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2bcc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2bcc74:
    // 0x2bcc74: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2bcc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2bcc78:
    // 0x2bcc78: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2bcc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2bcc7c:
    // 0x2bcc7c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2bcc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2bcc80:
    // 0x2bcc80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2bcc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2bcc84:
    // 0x2bcc84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2bcc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2bcc88:
    // 0x2bcc88: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2bcc88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2bcc8c:
    // 0x2bcc8c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2bcc8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2bcc90:
    // 0x2bcc90: 0x8c30caa0  lw          $s0, -0x3560($at)
    ctx->pc = 0x2bcc90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953632)));
label_2bcc94:
    // 0x2bcc94: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bcc94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bcc98:
    // 0x2bcc98: 0x8c31ca5c  lw          $s1, -0x35A4($at)
    ctx->pc = 0x2bcc98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
label_2bcc9c:
    // 0x2bcc9c: 0xc08e8a8  jal         func_23A2A0
label_2bcca0:
    if (ctx->pc == 0x2BCCA0u) {
        ctx->pc = 0x2BCCA0u;
            // 0x2bcca0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BCCA4u;
        goto label_2bcca4;
    }
    ctx->pc = 0x2BCC9Cu;
    SET_GPR_U32(ctx, 31, 0x2BCCA4u);
    ctx->pc = 0x2BCCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCC9Cu;
            // 0x2bcca0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A2A0u;
    if (runtime->hasFunction(0x23A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCCA4u; }
        if (ctx->pc != 0x2BCCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCCA4u; }
        if (ctx->pc != 0x2BCCA4u) { return; }
    }
    ctx->pc = 0x2BCCA4u;
label_2bcca4:
    // 0x2bcca4: 0x86850000  lh          $a1, 0x0($s4)
    ctx->pc = 0x2bcca4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_2bcca8:
    // 0x2bcca8: 0x10a0004d  beqz        $a1, . + 4 + (0x4D << 2)
label_2bccac:
    if (ctx->pc == 0x2BCCACu) {
        ctx->pc = 0x2BCCACu;
            // 0x2bccac: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2BCCB0u;
        goto label_2bccb0;
    }
    ctx->pc = 0x2BCCA8u;
    {
        const bool branch_taken_0x2bcca8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCCA8u;
            // 0x2bccac: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcca8) {
            ctx->pc = 0x2BCDE0u;
            goto label_2bcde0;
        }
    }
    ctx->pc = 0x2BCCB0u;
label_2bccb0:
    // 0x2bccb0: 0x10a3001b  beq         $a1, $v1, . + 4 + (0x1B << 2)
label_2bccb4:
    if (ctx->pc == 0x2BCCB4u) {
        ctx->pc = 0x2BCCB4u;
            // 0x2bccb4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BCCB8u;
        goto label_2bccb8;
    }
    ctx->pc = 0x2BCCB0u;
    {
        const bool branch_taken_0x2bccb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BCCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCCB0u;
            // 0x2bccb4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bccb0) {
            ctx->pc = 0x2BCD20u;
            goto label_2bcd20;
        }
    }
    ctx->pc = 0x2BCCB8u;
label_2bccb8:
    // 0x2bccb8: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
label_2bccbc:
    if (ctx->pc == 0x2BCCBCu) {
        ctx->pc = 0x2BCCC0u;
        goto label_2bccc0;
    }
    ctx->pc = 0x2BCCB8u;
    {
        const bool branch_taken_0x2bccb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2bccb8) {
            ctx->pc = 0x2BCCC8u;
            goto label_2bccc8;
        }
    }
    ctx->pc = 0x2BCCC0u;
label_2bccc0:
    // 0x2bccc0: 0x100001dd  b           . + 4 + (0x1DD << 2)
label_2bccc4:
    if (ctx->pc == 0x2BCCC4u) {
        ctx->pc = 0x2BCCC4u;
            // 0x2bccc4: 0x8e990170  lw          $t9, 0x170($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 368)));
        ctx->pc = 0x2BCCC8u;
        goto label_2bccc8;
    }
    ctx->pc = 0x2BCCC0u;
    {
        const bool branch_taken_0x2bccc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCCC0u;
            // 0x2bccc4: 0x8e990170  lw          $t9, 0x170($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bccc0) {
            ctx->pc = 0x2BD438u;
            goto label_2bd438;
        }
    }
    ctx->pc = 0x2BCCC8u;
label_2bccc8:
    // 0x2bccc8: 0x104001da  beqz        $v0, . + 4 + (0x1DA << 2)
label_2bcccc:
    if (ctx->pc == 0x2BCCCCu) {
        ctx->pc = 0x2BCCD0u;
        goto label_2bccd0;
    }
    ctx->pc = 0x2BCCC8u;
    {
        const bool branch_taken_0x2bccc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bccc8) {
            ctx->pc = 0x2BD434u;
            goto label_2bd434;
        }
    }
    ctx->pc = 0x2BCCD0u;
label_2bccd0:
    // 0x2bccd0: 0x8e8202a8  lw          $v0, 0x2A8($s4)
    ctx->pc = 0x2bccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 680)));
label_2bccd4:
    // 0x2bccd4: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x2bccd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_2bccd8:
    // 0x2bccd8: 0x142001d6  bnez        $at, . + 4 + (0x1D6 << 2)
label_2bccdc:
    if (ctx->pc == 0x2BCCDCu) {
        ctx->pc = 0x2BCCE0u;
        goto label_2bcce0;
    }
    ctx->pc = 0x2BCCD8u;
    {
        const bool branch_taken_0x2bccd8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bccd8) {
            ctx->pc = 0x2BD434u;
            goto label_2bd434;
        }
    }
    ctx->pc = 0x2BCCE0u;
label_2bcce0:
    // 0x2bcce0: 0x87829c24  lh          $v0, -0x63DC($gp)
    ctx->pc = 0x2bcce0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941732)));
label_2bcce4:
    // 0x2bcce4: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x2bcce4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_2bcce8:
    // 0x2bcce8: 0x144001d2  bnez        $v0, . + 4 + (0x1D2 << 2)
label_2bccec:
    if (ctx->pc == 0x2BCCECu) {
        ctx->pc = 0x2BCCF0u;
        goto label_2bccf0;
    }
    ctx->pc = 0x2BCCE8u;
    {
        const bool branch_taken_0x2bcce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bcce8) {
            ctx->pc = 0x2BD434u;
            goto label_2bd434;
        }
    }
    ctx->pc = 0x2BCCF0u;
label_2bccf0:
    // 0x2bccf0: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x2bccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2bccf4:
    // 0x2bccf4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2bccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bccf8:
    // 0x2bccf8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bccf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bccfc:
    // 0x2bccfc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2bccfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_2bcd00:
    // 0x2bcd00: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x2bcd00u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
label_2bcd04:
    // 0x2bcd04: 0xa6820002  sh          $v0, 0x2($s4)
    ctx->pc = 0x2bcd04u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
label_2bcd08:
    // 0x2bcd08: 0xae8402ac  sw          $a0, 0x2AC($s4)
    ctx->pc = 0x2bcd08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 684), GPR_U32(ctx, 4));
label_2bcd0c:
    // 0x2bcd0c: 0x8c24ca40  lw          $a0, -0x35C0($at)
    ctx->pc = 0x2bcd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
label_2bcd10:
    // 0x2bcd10: 0xc0877e0  jal         func_21DF80
label_2bcd14:
    if (ctx->pc == 0x2BCD14u) {
        ctx->pc = 0x2BCD14u;
            // 0x2bcd14: 0x240511f9  addiu       $a1, $zero, 0x11F9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4601));
        ctx->pc = 0x2BCD18u;
        goto label_2bcd18;
    }
    ctx->pc = 0x2BCD10u;
    SET_GPR_U32(ctx, 31, 0x2BCD18u);
    ctx->pc = 0x2BCD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCD10u;
            // 0x2bcd14: 0x240511f9  addiu       $a1, $zero, 0x11F9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4601));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCD18u; }
        if (ctx->pc != 0x2BCD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCD18u; }
        if (ctx->pc != 0x2BCD18u) { return; }
    }
    ctx->pc = 0x2BCD18u;
label_2bcd18:
    // 0x2bcd18: 0x100001c6  b           . + 4 + (0x1C6 << 2)
label_2bcd1c:
    if (ctx->pc == 0x2BCD1Cu) {
        ctx->pc = 0x2BCD20u;
        goto label_2bcd20;
    }
    ctx->pc = 0x2BCD18u;
    {
        const bool branch_taken_0x2bcd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcd18) {
            ctx->pc = 0x2BD434u;
            goto label_2bd434;
        }
    }
    ctx->pc = 0x2BCD20u;
label_2bcd20:
    // 0x2bcd20: 0x104001c4  beqz        $v0, . + 4 + (0x1C4 << 2)
label_2bcd24:
    if (ctx->pc == 0x2BCD24u) {
        ctx->pc = 0x2BCD24u;
            // 0x2bcd24: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x2BCD28u;
        goto label_2bcd28;
    }
    ctx->pc = 0x2BCD20u;
    {
        const bool branch_taken_0x2bcd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCD20u;
            // 0x2bcd24: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcd20) {
            ctx->pc = 0x2BD434u;
            goto label_2bd434;
        }
    }
    ctx->pc = 0x2BCD28u;
label_2bcd28:
    // 0x2bcd28: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2bcd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2bcd2c:
    // 0x2bcd2c: 0x8c23d62c  lw          $v1, -0x29D4($at)
    ctx->pc = 0x2bcd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956588)));
label_2bcd30:
    // 0x2bcd30: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
label_2bcd34:
    if (ctx->pc == 0x2BCD34u) {
        ctx->pc = 0x2BCD34u;
            // 0x2bcd34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BCD38u;
        goto label_2bcd38;
    }
    ctx->pc = 0x2BCD30u;
    {
        const bool branch_taken_0x2bcd30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BCD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCD30u;
            // 0x2bcd34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcd30) {
            ctx->pc = 0x2BCDD8u;
            goto label_2bcdd8;
        }
    }
    ctx->pc = 0x2BCD38u;
label_2bcd38:
    // 0x2bcd38: 0x868201de  lh          $v0, 0x1DE($s4)
    ctx->pc = 0x2bcd38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 478)));
label_2bcd3c:
    // 0x2bcd3c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bcd3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bcd40:
    // 0x2bcd40: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2bcd40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2bcd44:
    // 0x2bcd44: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2bcd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2bcd48:
    // 0x2bcd48: 0x844201f4  lh          $v0, 0x1F4($v0)
    ctx->pc = 0x2bcd48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 500)));
label_2bcd4c:
    // 0x2bcd4c: 0xac22d630  sw          $v0, -0x29D0($at)
    ctx->pc = 0x2bcd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 2));
label_2bcd50:
    // 0x2bcd50: 0x868201e0  lh          $v0, 0x1E0($s4)
    ctx->pc = 0x2bcd50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 480)));
label_2bcd54:
    // 0x2bcd54: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bcd54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bcd58:
    // 0x2bcd58: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2bcd58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2bcd5c:
    // 0x2bcd5c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2bcd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2bcd60:
    // 0x2bcd60: 0x844201e4  lh          $v0, 0x1E4($v0)
    ctx->pc = 0x2bcd60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 484)));
label_2bcd64:
    // 0x2bcd64: 0xac22d634  sw          $v0, -0x29CC($at)
    ctx->pc = 0x2bcd64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956596), GPR_U32(ctx, 2));
label_2bcd68:
    // 0x2bcd68: 0x868201e2  lh          $v0, 0x1E2($s4)
    ctx->pc = 0x2bcd68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 482)));
label_2bcd6c:
    // 0x2bcd6c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bcd6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bcd70:
    // 0x2bcd70: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2bcd70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2bcd74:
    // 0x2bcd74: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2bcd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2bcd78:
    // 0x2bcd78: 0x84420204  lh          $v0, 0x204($v0)
    ctx->pc = 0x2bcd78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 516)));
label_2bcd7c:
    // 0x2bcd7c: 0xac22d638  sw          $v0, -0x29C8($at)
    ctx->pc = 0x2bcd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956600), GPR_U32(ctx, 2));
label_2bcd80:
    // 0x2bcd80: 0x8e820298  lw          $v0, 0x298($s4)
    ctx->pc = 0x2bcd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 664)));
label_2bcd84:
    // 0x2bcd84: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2bcd88:
    if (ctx->pc == 0x2BCD88u) {
        ctx->pc = 0x2BCD8Cu;
        goto label_2bcd8c;
    }
    ctx->pc = 0x2BCD84u;
    {
        const bool branch_taken_0x2bcd84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcd84) {
            ctx->pc = 0x2BCDD4u;
            goto label_2bcdd4;
        }
    }
    ctx->pc = 0x2BCD8Cu;
label_2bcd8c:
    // 0x2bcd8c: 0xc065af8  jal         func_196BE0
label_2bcd90:
    if (ctx->pc == 0x2BCD90u) {
        ctx->pc = 0x2BCD94u;
        goto label_2bcd94;
    }
    ctx->pc = 0x2BCD8Cu;
    SET_GPR_U32(ctx, 31, 0x2BCD94u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCD94u; }
        if (ctx->pc != 0x2BCD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCD94u; }
        if (ctx->pc != 0x2BCD94u) { return; }
    }
    ctx->pc = 0x2BCD94u;
label_2bcd94:
    // 0x2bcd94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bcd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bcd98:
    // 0x2bcd98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2bcd98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bcd9c:
    // 0x2bcd9c: 0xc067558  jal         func_19D560
label_2bcda0:
    if (ctx->pc == 0x2BCDA0u) {
        ctx->pc = 0x2BCDA0u;
            // 0x2bcda0: 0x2406007f  addiu       $a2, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->pc = 0x2BCDA4u;
        goto label_2bcda4;
    }
    ctx->pc = 0x2BCD9Cu;
    SET_GPR_U32(ctx, 31, 0x2BCDA4u);
    ctx->pc = 0x2BCDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCD9Cu;
            // 0x2bcda0: 0x2406007f  addiu       $a2, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D560u;
    if (runtime->hasFunction(0x19D560u)) {
        auto targetFn = runtime->lookupFunction(0x19D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCDA4u; }
        if (ctx->pc != 0x2BCDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquipDirect__16CUserDataManagerFii_0x19d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCDA4u; }
        if (ctx->pc != 0x2BCDA4u) { return; }
    }
    ctx->pc = 0x2BCDA4u;
label_2bcda4:
    // 0x2bcda4: 0xc065af8  jal         func_196BE0
label_2bcda8:
    if (ctx->pc == 0x2BCDA8u) {
        ctx->pc = 0x2BCDACu;
        goto label_2bcdac;
    }
    ctx->pc = 0x2BCDA4u;
    SET_GPR_U32(ctx, 31, 0x2BCDACu);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCDACu; }
        if (ctx->pc != 0x2BCDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCDACu; }
        if (ctx->pc != 0x2BCDACu) { return; }
    }
    ctx->pc = 0x2BCDACu;
label_2bcdac:
    // 0x2bcdac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bcdacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bcdb0:
    // 0x2bcdb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2bcdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bcdb4:
    // 0x2bcdb4: 0xc067558  jal         func_19D560
label_2bcdb8:
    if (ctx->pc == 0x2BCDB8u) {
        ctx->pc = 0x2BCDB8u;
            // 0x2bcdb8: 0x24060085  addiu       $a2, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->pc = 0x2BCDBCu;
        goto label_2bcdbc;
    }
    ctx->pc = 0x2BCDB4u;
    SET_GPR_U32(ctx, 31, 0x2BCDBCu);
    ctx->pc = 0x2BCDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCDB4u;
            // 0x2bcdb8: 0x24060085  addiu       $a2, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D560u;
    if (runtime->hasFunction(0x19D560u)) {
        auto targetFn = runtime->lookupFunction(0x19D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCDBCu; }
        if (ctx->pc != 0x2BCDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquipDirect__16CUserDataManagerFii_0x19d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCDBCu; }
        if (ctx->pc != 0x2BCDBCu) { return; }
    }
    ctx->pc = 0x2BCDBCu;
label_2bcdbc:
    // 0x2bcdbc: 0xc065af8  jal         func_196BE0
label_2bcdc0:
    if (ctx->pc == 0x2BCDC0u) {
        ctx->pc = 0x2BCDC4u;
        goto label_2bcdc4;
    }
    ctx->pc = 0x2BCDBCu;
    SET_GPR_U32(ctx, 31, 0x2BCDC4u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCDC4u; }
        if (ctx->pc != 0x2BCDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCDC4u; }
        if (ctx->pc != 0x2BCDC4u) { return; }
    }
    ctx->pc = 0x2BCDC4u;
label_2bcdc4:
    // 0x2bcdc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bcdc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bcdc8:
    // 0x2bcdc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2bcdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bcdcc:
    // 0x2bcdcc: 0xc067558  jal         func_19D560
label_2bcdd0:
    if (ctx->pc == 0x2BCDD0u) {
        ctx->pc = 0x2BCDD0u;
            // 0x2bcdd0: 0x2406010a  addiu       $a2, $zero, 0x10A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
        ctx->pc = 0x2BCDD4u;
        goto label_2bcdd4;
    }
    ctx->pc = 0x2BCDCCu;
    SET_GPR_U32(ctx, 31, 0x2BCDD4u);
    ctx->pc = 0x2BCDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCDCCu;
            // 0x2bcdd0: 0x2406010a  addiu       $a2, $zero, 0x10A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D560u;
    if (runtime->hasFunction(0x19D560u)) {
        auto targetFn = runtime->lookupFunction(0x19D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCDD4u; }
        if (ctx->pc != 0x2BCDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquipDirect__16CUserDataManagerFii_0x19d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCDD4u; }
        if (ctx->pc != 0x2BCDD4u) { return; }
    }
    ctx->pc = 0x2BCDD4u;
label_2bcdd4:
    // 0x2bcdd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bcdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bcdd8:
    // 0x2bcdd8: 0x1000020d  b           . + 4 + (0x20D << 2)
label_2bcddc:
    if (ctx->pc == 0x2BCDDCu) {
        ctx->pc = 0x2BCDDCu;
            // 0x2bcddc: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x2BCDE0u;
        goto label_2bcde0;
    }
    ctx->pc = 0x2BCDD8u;
    {
        const bool branch_taken_0x2bcdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCDD8u;
            // 0x2bcddc: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcdd8) {
            ctx->pc = 0x2BD610u;
            goto label_2bd610;
        }
    }
    ctx->pc = 0x2BCDE0u;
label_2bcde0:
    // 0x2bcde0: 0xc08f80c  jal         func_23E030
label_2bcde4:
    if (ctx->pc == 0x2BCDE4u) {
        ctx->pc = 0x2BCDE4u;
            // 0x2bcde4: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->pc = 0x2BCDE8u;
        goto label_2bcde8;
    }
    ctx->pc = 0x2BCDE0u;
    SET_GPR_U32(ctx, 31, 0x2BCDE8u);
    ctx->pc = 0x2BCDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCDE0u;
            // 0x2bcde4: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E030u;
    if (runtime->hasFunction(0x23E030u)) {
        auto targetFn = runtime->lookupFunction(0x23E030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCDE8u; }
        if (ctx->pc != 0x2BCDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSelectKey__12CMenuKeyFuncFv_0x23e030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCDE8u; }
        if (ctx->pc != 0x2BCDE8u) { return; }
    }
    ctx->pc = 0x2BCDE8u;
label_2bcde8:
    // 0x2bcde8: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2bcde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2bcdec:
    // 0x2bcdec: 0xc08f8c8  jal         func_23E320
label_2bcdf0:
    if (ctx->pc == 0x2BCDF0u) {
        ctx->pc = 0x2BCDF0u;
            // 0x2bcdf0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BCDF4u;
        goto label_2bcdf4;
    }
    ctx->pc = 0x2BCDECu;
    SET_GPR_U32(ctx, 31, 0x2BCDF4u);
    ctx->pc = 0x2BCDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCDECu;
            // 0x2bcdf0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCDF4u; }
        if (ctx->pc != 0x2BCDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPushButton__12CMenuKeyFuncFv_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCDF4u; }
        if (ctx->pc != 0x2BCDF4u) { return; }
    }
    ctx->pc = 0x2BCDF4u;
label_2bcdf4:
    // 0x2bcdf4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2bcdf4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bcdf8:
    // 0x2bcdf8: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x2bcdf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_2bcdfc:
    // 0x2bcdfc: 0x20420001  addi        $v0, $v0, 0x1
    ctx->pc = 0x2bcdfcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
label_2bce00:
    // 0x2bce00: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x2bce00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2bce04:
    // 0x2bce04: 0x1020018b  beqz        $at, . + 4 + (0x18B << 2)
label_2bce08:
    if (ctx->pc == 0x2BCE08u) {
        ctx->pc = 0x2BCE08u;
            // 0x2bce08: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2BCE0Cu;
        goto label_2bce0c;
    }
    ctx->pc = 0x2BCE04u;
    {
        const bool branch_taken_0x2bce04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCE04u;
            // 0x2bce08: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bce04) {
            ctx->pc = 0x2BD434u;
            goto label_2bd434;
        }
    }
    ctx->pc = 0x2BCE0Cu;
label_2bce0c:
    // 0x2bce0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2bce10:
    // 0x2bce10: 0x2463f5d0  addiu       $v1, $v1, -0xA30
    ctx->pc = 0x2bce10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964688));
label_2bce14:
    // 0x2bce14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bce14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bce18:
    // 0x2bce18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bce18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2bce1c:
    // 0x2bce1c: 0x400008  jr          $v0
label_2bce20:
    if (ctx->pc == 0x2BCE20u) {
        ctx->pc = 0x2BCE24u;
        goto label_2bce24;
    }
    ctx->pc = 0x2BCE1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BCE24u: goto label_2bce24;
            case 0x2BCE54u: goto label_2bce54;
            case 0x2BD28Cu: goto label_2bd28c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BCE24u;
label_2bce24:
    // 0x2bce24: 0x12c00183  beqz        $s6, . + 4 + (0x183 << 2)
label_2bce28:
    if (ctx->pc == 0x2BCE28u) {
        ctx->pc = 0x2BCE2Cu;
        goto label_2bce2c;
    }
    ctx->pc = 0x2BCE24u;
    {
        const bool branch_taken_0x2bce24 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bce24) {
            ctx->pc = 0x2BD434u;
            goto label_2bd434;
        }
    }
    ctx->pc = 0x2BCE2Cu;
label_2bce2c:
    // 0x2bce2c: 0xae8002ac  sw          $zero, 0x2AC($s4)
    ctx->pc = 0x2bce2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 684), GPR_U32(ctx, 0));
label_2bce30:
    // 0x2bce30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bce30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bce34:
    // 0x2bce34: 0xae8402b4  sw          $a0, 0x2B4($s4)
    ctx->pc = 0x2bce34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 692), GPR_U32(ctx, 4));
label_2bce38:
    // 0x2bce38: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x2bce38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_2bce3c:
    // 0x2bce3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bce3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bce40:
    // 0x2bce40: 0xa6820002  sh          $v0, 0x2($s4)
    ctx->pc = 0x2bce40u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
label_2bce44:
    // 0x2bce44: 0xc094274  jal         func_2509D0
label_2bce48:
    if (ctx->pc == 0x2BCE48u) {
        ctx->pc = 0x2BCE48u;
            // 0x2bce48: 0xae840294  sw          $a0, 0x294($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 660), GPR_U32(ctx, 4));
        ctx->pc = 0x2BCE4Cu;
        goto label_2bce4c;
    }
    ctx->pc = 0x2BCE44u;
    SET_GPR_U32(ctx, 31, 0x2BCE4Cu);
    ctx->pc = 0x2BCE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCE44u;
            // 0x2bce48: 0xae840294  sw          $a0, 0x294($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 660), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCE4Cu; }
        if (ctx->pc != 0x2BCE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCE4Cu; }
        if (ctx->pc != 0x2BCE4Cu) { return; }
    }
    ctx->pc = 0x2BCE4Cu;
label_2bce4c:
    // 0x2bce4c: 0x10000179  b           . + 4 + (0x179 << 2)
label_2bce50:
    if (ctx->pc == 0x2BCE50u) {
        ctx->pc = 0x2BCE54u;
        goto label_2bce54;
    }
    ctx->pc = 0x2BCE4Cu;
    {
        const bool branch_taken_0x2bce4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bce4c) {
            ctx->pc = 0x2BD434u;
            goto label_2bd434;
        }
    }
    ctx->pc = 0x2BCE54u;
label_2bce54:
    // 0x2bce54: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x2bce54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_2bce58:
    // 0x2bce58: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2bce58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bce5c:
    // 0x2bce5c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2bce60:
    if (ctx->pc == 0x2BCE60u) {
        ctx->pc = 0x2BCE60u;
            // 0x2bce60: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BCE64u;
        goto label_2bce64;
    }
    ctx->pc = 0x2BCE5Cu;
    {
        const bool branch_taken_0x2bce5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCE5Cu;
            // 0x2bce60: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bce5c) {
            ctx->pc = 0x2BCE68u;
            goto label_2bce68;
        }
    }
    ctx->pc = 0x2BCE64u;
label_2bce64:
    // 0x2bce64: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2bce64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2bce68:
    // 0x2bce68: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x2bce68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
label_2bce6c:
    // 0x2bce6c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2bce70:
    if (ctx->pc == 0x2BCE70u) {
        ctx->pc = 0x2BCE70u;
            // 0x2bce70: 0x32a20004  andi        $v0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x2BCE74u;
        goto label_2bce74;
    }
    ctx->pc = 0x2BCE6Cu;
    {
        const bool branch_taken_0x2bce6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCE6Cu;
            // 0x2bce70: 0x32a20004  andi        $v0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bce6c) {
            ctx->pc = 0x2BCE78u;
            goto label_2bce78;
        }
    }
    ctx->pc = 0x2BCE74u;
label_2bce74:
    // 0x2bce74: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2bce74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2bce78:
    // 0x2bce78: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2bce7c:
    if (ctx->pc == 0x2BCE7Cu) {
        ctx->pc = 0x2BCE7Cu;
            // 0x2bce7c: 0x32a20008  andi        $v0, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x2BCE80u;
        goto label_2bce80;
    }
    ctx->pc = 0x2BCE78u;
    {
        const bool branch_taken_0x2bce78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCE78u;
            // 0x2bce7c: 0x32a20008  andi        $v0, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bce78) {
            ctx->pc = 0x2BCE84u;
            goto label_2bce84;
        }
    }
    ctx->pc = 0x2BCE80u;
label_2bce80:
    // 0x2bce80: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2bce80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_2bce84:
    // 0x2bce84: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2bce88:
    if (ctx->pc == 0x2BCE88u) {
        ctx->pc = 0x2BCE8Cu;
        goto label_2bce8c;
    }
    ctx->pc = 0x2BCE84u;
    {
        const bool branch_taken_0x2bce84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bce84) {
            ctx->pc = 0x2BCE90u;
            goto label_2bce90;
        }
    }
    ctx->pc = 0x2BCE8Cu;
label_2bce8c:
    // 0x2bce8c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2bce8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2bce90:
    // 0x2bce90: 0x87839c24  lh          $v1, -0x63DC($gp)
    ctx->pc = 0x2bce90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941732)));
label_2bce94:
    // 0x2bce94: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2bce94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2bce98:
    // 0x2bce98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2bce98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2bce9c:
    // 0x2bce9c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_2bcea0:
    if (ctx->pc == 0x2BCEA0u) {
        ctx->pc = 0x2BCEA0u;
            // 0x2bcea0: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x2BCEA4u;
        goto label_2bcea4;
    }
    ctx->pc = 0x2BCE9Cu;
    {
        const bool branch_taken_0x2bce9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BCEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCE9Cu;
            // 0x2bcea0: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bce9c) {
            ctx->pc = 0x2BCEC4u;
            goto label_2bcec4;
        }
    }
    ctx->pc = 0x2BCEA4u;
label_2bcea4:
    // 0x2bcea4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2bcea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2bcea8:
    // 0x2bcea8: 0xc052ca0  jal         func_14B280
label_2bceac:
    if (ctx->pc == 0x2BCEACu) {
        ctx->pc = 0x2BCEACu;
            // 0x2bceac: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x2BCEB0u;
        goto label_2bceb0;
    }
    ctx->pc = 0x2BCEA8u;
    SET_GPR_U32(ctx, 31, 0x2BCEB0u);
    ctx->pc = 0x2BCEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCEA8u;
            // 0x2bceac: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B280u;
    if (runtime->hasFunction(0x14B280u)) {
        auto targetFn = runtime->lookupFunction(0x14B280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCEB0u; }
        if (ctx->pc != 0x2BCEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRXf__8CGamePadFv_0x14b280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCEB0u; }
        if (ctx->pc != 0x2BCEB0u) { return; }
    }
    ctx->pc = 0x2BCEB0u;
label_2bceb0:
    // 0x2bceb0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2bceb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2bceb4:
    // 0x2bceb4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2bceb4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2bceb8:
    // 0x2bceb8: 0xc052cb0  jal         func_14B2C0
label_2bcebc:
    if (ctx->pc == 0x2BCEBCu) {
        ctx->pc = 0x2BCEBCu;
            // 0x2bcebc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x2BCEC0u;
        goto label_2bcec0;
    }
    ctx->pc = 0x2BCEB8u;
    SET_GPR_U32(ctx, 31, 0x2BCEC0u);
    ctx->pc = 0x2BCEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCEB8u;
            // 0x2bcebc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B2C0u;
    if (runtime->hasFunction(0x14B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCEC0u; }
        if (ctx->pc != 0x2BCEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRYf__8CGamePadFv_0x14b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCEC0u; }
        if (ctx->pc != 0x2BCEC0u) { return; }
    }
    ctx->pc = 0x2BCEC0u;
label_2bcec0:
    // 0x2bcec0: 0x46000547  neg.s       $f21, $f0
    ctx->pc = 0x2bcec0u;
    ctx->f[21] = FPU_NEG_S(ctx->f[0]);
label_2bcec4:
    // 0x2bcec4: 0x87829c24  lh          $v0, -0x63DC($gp)
    ctx->pc = 0x2bcec4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941732)));
label_2bcec8:
    // 0x2bcec8: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x2bcec8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_2bcecc:
    // 0x2bcecc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_2bced0:
    if (ctx->pc == 0x2BCED0u) {
        ctx->pc = 0x2BCED4u;
        goto label_2bced4;
    }
    ctx->pc = 0x2BCECCu;
    {
        const bool branch_taken_0x2bcecc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcecc) {
            ctx->pc = 0x2BCED8u;
            goto label_2bced8;
        }
    }
    ctx->pc = 0x2BCED4u;
label_2bced4:
    // 0x2bced4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2bced4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bced8:
    // 0x2bced8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2bced8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2bcedc:
    // 0x2bcedc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bcedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bcee0:
    // 0x2bcee0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2bcee0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2bcee4:
    // 0x2bcee4: 0x320f809  jalr        $t9
label_2bcee8:
    if (ctx->pc == 0x2BCEE8u) {
        ctx->pc = 0x2BCEE8u;
            // 0x2bcee8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2BCEECu;
        goto label_2bceec;
    }
    ctx->pc = 0x2BCEE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BCEECu);
        ctx->pc = 0x2BCEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCEE4u;
            // 0x2bcee8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BCEECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BCEECu; }
            if (ctx->pc != 0x2BCEECu) { return; }
        }
        }
    }
    ctx->pc = 0x2BCEECu;
label_2bceec:
    // 0x2bceec: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2bceecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_2bcef0:
    // 0x2bcef0: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2bcef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_2bcef4:
    // 0x2bcef4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2bcef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_2bcef8:
    // 0x2bcef8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2bcef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_2bcefc:
    // 0x2bcefc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2bcefcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2bcf00:
    // 0x2bcf00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bcf00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bcf04:
    // 0x2bcf04: 0x27a30098  addiu       $v1, $sp, 0x98
    ctx->pc = 0x2bcf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_2bcf08:
    // 0x2bcf08: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2bcf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bcf0c:
    // 0x2bcf0c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2bcf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_2bcf10:
    // 0x2bcf10: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x2bcf10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_2bcf14:
    // 0x2bcf14: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2bcf14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2bcf18:
    // 0x2bcf18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bcf18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bcf1c:
    // 0x2bcf1c: 0x0  nop
    ctx->pc = 0x2bcf1cu;
    // NOP
label_2bcf20:
    // 0x2bcf20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bcf20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bcf24:
    // 0x2bcf24: 0x0  nop
    ctx->pc = 0x2bcf24u;
    // NOP
label_2bcf28:
    // 0x2bcf28: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_2bcf2c:
    if (ctx->pc == 0x2BCF2Cu) {
        ctx->pc = 0x2BCF2Cu;
            // 0x2bcf2c: 0x46151082  mul.s       $f2, $f2, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
        ctx->pc = 0x2BCF30u;
        goto label_2bcf30;
    }
    ctx->pc = 0x2BCF28u;
    {
        const bool branch_taken_0x2bcf28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BCF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCF28u;
            // 0x2bcf2c: 0x46151082  mul.s       $f2, $f2, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcf28) {
            ctx->pc = 0x2BCF5Cu;
            goto label_2bcf5c;
        }
    }
    ctx->pc = 0x2BCF30u;
label_2bcf30:
    // 0x2bcf30: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2bcf30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_2bcf34:
    // 0x2bcf34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bcf34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bcf38:
    // 0x2bcf38: 0x0  nop
    ctx->pc = 0x2bcf38u;
    // NOP
label_2bcf3c:
    // 0x2bcf3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bcf3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bcf40:
    // 0x2bcf40: 0x0  nop
    ctx->pc = 0x2bcf40u;
    // NOP
label_2bcf44:
    // 0x2bcf44: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2bcf48:
    if (ctx->pc == 0x2BCF48u) {
        ctx->pc = 0x2BCF4Cu;
        goto label_2bcf4c;
    }
    ctx->pc = 0x2BCF44u;
    {
        const bool branch_taken_0x2bcf44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bcf44) {
            ctx->pc = 0x2BCF5Cu;
            goto label_2bcf5c;
        }
    }
    ctx->pc = 0x2BCF4Cu;
label_2bcf4c:
    // 0x2bcf4c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2bcf4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2bcf50:
    // 0x2bcf50: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2bcf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bcf54:
    // 0x2bcf54: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2bcf54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2bcf58:
    // 0x2bcf58: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2bcf58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2bcf5c:
    // 0x2bcf5c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2bcf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bcf60:
    // 0x2bcf60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bcf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bcf64:
    // 0x2bcf64: 0xe6800260  swc1        $f0, 0x260($s4)
    ctx->pc = 0x2bcf64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 608), bits); }
label_2bcf68:
    // 0x2bcf68: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2bcf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bcf6c:
    // 0x2bcf6c: 0xe6800268  swc1        $f0, 0x268($s4)
    ctx->pc = 0x2bcf6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 616), bits); }
label_2bcf70:
    // 0x2bcf70: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2bcf70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2bcf74:
    // 0x2bcf74: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2bcf74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2bcf78:
    // 0x2bcf78: 0x320f809  jalr        $t9
label_2bcf7c:
    if (ctx->pc == 0x2BCF7Cu) {
        ctx->pc = 0x2BCF7Cu;
            // 0x2bcf7c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2BCF80u;
        goto label_2bcf80;
    }
    ctx->pc = 0x2BCF78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BCF80u);
        ctx->pc = 0x2BCF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCF78u;
            // 0x2bcf7c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BCF80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BCF80u; }
            if (ctx->pc != 0x2BCF80u) { return; }
        }
        }
    }
    ctx->pc = 0x2BCF80u;
label_2bcf80:
    // 0x2bcf80: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x2bcf80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_2bcf84:
    // 0x2bcf84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bcf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bcf88:
    // 0x2bcf88: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2bcf88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2bcf8c:
    // 0x2bcf8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bcf8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bcf90:
    // 0x2bcf90: 0xc094254  jal         func_250950
label_2bcf94:
    if (ctx->pc == 0x2BCF94u) {
        ctx->pc = 0x2BCF94u;
            // 0x2bcf94: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x2BCF98u;
        goto label_2bcf98;
    }
    ctx->pc = 0x2BCF90u;
    SET_GPR_U32(ctx, 31, 0x2BCF98u);
    ctx->pc = 0x2BCF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCF90u;
            // 0x2bcf94: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x250950u;
    if (runtime->hasFunction(0x250950u)) {
        auto targetFn = runtime->lookupFunction(0x250950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCF98u; }
        if (ctx->pc != 0x2BCF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddRotationCharaY__FP11CCharacter2f_0x250950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCF98u; }
        if (ctx->pc != 0x2BCF98u) { return; }
    }
    ctx->pc = 0x2BCF98u;
label_2bcf98:
    // 0x2bcf98: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
label_2bcf9c:
    if (ctx->pc == 0x2BCF9Cu) {
        ctx->pc = 0x2BCFA0u;
        goto label_2bcfa0;
    }
    ctx->pc = 0x2BCF98u;
    {
        const bool branch_taken_0x2bcf98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcf98) {
            ctx->pc = 0x2BD010u;
            goto label_2bd010;
        }
    }
    ctx->pc = 0x2BCFA0u;
label_2bcfa0:
    // 0x2bcfa0: 0x8e8201d0  lw          $v0, 0x1D0($s4)
    ctx->pc = 0x2bcfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 464)));
label_2bcfa4:
    // 0x2bcfa4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2bcfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2bcfa8:
    // 0x2bcfa8: 0xae8201d0  sw          $v0, 0x1D0($s4)
    ctx->pc = 0x2bcfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 464), GPR_U32(ctx, 2));
label_2bcfac:
    // 0x2bcfac: 0x86820258  lh          $v0, 0x258($s4)
    ctx->pc = 0x2bcfacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 600)));
label_2bcfb0:
    // 0x2bcfb0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2bcfb4:
    if (ctx->pc == 0x2BCFB4u) {
        ctx->pc = 0x2BCFB8u;
        goto label_2bcfb8;
    }
    ctx->pc = 0x2BCFB0u;
    {
        const bool branch_taken_0x2bcfb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bcfb0) {
            ctx->pc = 0x2BCFDCu;
            goto label_2bcfdc;
        }
    }
    ctx->pc = 0x2BCFB8u;
label_2bcfb8:
    // 0x2bcfb8: 0x8e8201d0  lw          $v0, 0x1D0($s4)
    ctx->pc = 0x2bcfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 464)));
label_2bcfbc:
    // 0x2bcfbc: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_2bcfc0:
    if (ctx->pc == 0x2BCFC0u) {
        ctx->pc = 0x2BCFC0u;
            // 0x2bcfc0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2BCFC4u;
        goto label_2bcfc4;
    }
    ctx->pc = 0x2BCFBCu;
    {
        const bool branch_taken_0x2bcfbc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2BCFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCFBCu;
            // 0x2bcfc0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcfbc) {
            ctx->pc = 0x2BCFC8u;
            goto label_2bcfc8;
        }
    }
    ctx->pc = 0x2BCFC4u;
label_2bcfc4:
    // 0x2bcfc4: 0xae8201d0  sw          $v0, 0x1D0($s4)
    ctx->pc = 0x2bcfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 464), GPR_U32(ctx, 2));
label_2bcfc8:
    // 0x2bcfc8: 0x8e8201d0  lw          $v0, 0x1D0($s4)
    ctx->pc = 0x2bcfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 464)));
label_2bcfcc:
    // 0x2bcfcc: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x2bcfccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_2bcfd0:
    // 0x2bcfd0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2bcfd4:
    if (ctx->pc == 0x2BCFD4u) {
        ctx->pc = 0x2BCFD8u;
        goto label_2bcfd8;
    }
    ctx->pc = 0x2BCFD0u;
    {
        const bool branch_taken_0x2bcfd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bcfd0) {
            ctx->pc = 0x2BCFDCu;
            goto label_2bcfdc;
        }
    }
    ctx->pc = 0x2BCFD8u;
label_2bcfd8:
    // 0x2bcfd8: 0xae8001d0  sw          $zero, 0x1D0($s4)
    ctx->pc = 0x2bcfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 464), GPR_U32(ctx, 0));
label_2bcfdc:
    // 0x2bcfdc: 0x86830258  lh          $v1, 0x258($s4)
    ctx->pc = 0x2bcfdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 600)));
label_2bcfe0:
    // 0x2bcfe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bcfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bcfe4:
    // 0x2bcfe4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_2bcfe8:
    if (ctx->pc == 0x2BCFE8u) {
        ctx->pc = 0x2BCFECu;
        goto label_2bcfec;
    }
    ctx->pc = 0x2BCFE4u;
    {
        const bool branch_taken_0x2bcfe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bcfe4) {
            ctx->pc = 0x2BD010u;
            goto label_2bd010;
        }
    }
    ctx->pc = 0x2BCFECu;
label_2bcfec:
    // 0x2bcfec: 0x8e8201d0  lw          $v0, 0x1D0($s4)
    ctx->pc = 0x2bcfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 464)));
label_2bcff0:
    // 0x2bcff0: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_2bcff4:
    if (ctx->pc == 0x2BCFF4u) {
        ctx->pc = 0x2BCFF4u;
            // 0x2bcff4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2BCFF8u;
        goto label_2bcff8;
    }
    ctx->pc = 0x2BCFF0u;
    {
        const bool branch_taken_0x2bcff0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2BCFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCFF0u;
            // 0x2bcff4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcff0) {
            ctx->pc = 0x2BCFFCu;
            goto label_2bcffc;
        }
    }
    ctx->pc = 0x2BCFF8u;
label_2bcff8:
    // 0x2bcff8: 0xae8201d0  sw          $v0, 0x1D0($s4)
    ctx->pc = 0x2bcff8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 464), GPR_U32(ctx, 2));
label_2bcffc:
    // 0x2bcffc: 0x8e8201d0  lw          $v0, 0x1D0($s4)
    ctx->pc = 0x2bcffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 464)));
label_2bd000:
    // 0x2bd000: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x2bd000u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_2bd004:
    // 0x2bd004: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2bd008:
    if (ctx->pc == 0x2BD008u) {
        ctx->pc = 0x2BD00Cu;
        goto label_2bd00c;
    }
    ctx->pc = 0x2BD004u;
    {
        const bool branch_taken_0x2bd004 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd004) {
            ctx->pc = 0x2BD010u;
            goto label_2bd010;
        }
    }
    ctx->pc = 0x2BD00Cu;
label_2bd00c:
    // 0x2bd00c: 0xae8001d0  sw          $zero, 0x1D0($s4)
    ctx->pc = 0x2bd00cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 464), GPR_U32(ctx, 0));
label_2bd010:
    // 0x2bd010: 0x1260003e  beqz        $s3, . + 4 + (0x3E << 2)
label_2bd014:
    if (ctx->pc == 0x2BD014u) {
        ctx->pc = 0x2BD018u;
        goto label_2bd018;
    }
    ctx->pc = 0x2BD010u;
    {
        const bool branch_taken_0x2bd010 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd010) {
            ctx->pc = 0x2BD10Cu;
            goto label_2bd10c;
        }
    }
    ctx->pc = 0x2BD018u;
label_2bd018:
    // 0x2bd018: 0x8e8201d0  lw          $v0, 0x1D0($s4)
    ctx->pc = 0x2bd018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 464)));
label_2bd01c:
    // 0x2bd01c: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x2bd01cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_2bd020:
    // 0x2bd020: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
label_2bd024:
    if (ctx->pc == 0x2BD024u) {
        ctx->pc = 0x2BD028u;
        goto label_2bd028;
    }
    ctx->pc = 0x2BD020u;
    {
        const bool branch_taken_0x2bd020 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd020) {
            ctx->pc = 0x2BD108u;
            goto label_2bd108;
        }
    }
    ctx->pc = 0x2BD028u;
label_2bd028:
    // 0x2bd028: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2bd028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2bd02c:
    // 0x2bd02c: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x2bd02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2bd030:
    // 0x2bd030: 0x846201de  lh          $v0, 0x1DE($v1)
    ctx->pc = 0x2bd030u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 478)));
label_2bd034:
    // 0x2bd034: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2bd034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2bd038:
    // 0x2bd038: 0xa46201de  sh          $v0, 0x1DE($v1)
    ctx->pc = 0x2bd038u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 478), (uint16_t)GPR_U32(ctx, 2));
label_2bd03c:
    // 0x2bd03c: 0x8e8201d0  lw          $v0, 0x1D0($s4)
    ctx->pc = 0x2bd03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 464)));
label_2bd040:
    // 0x2bd040: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2bd040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2bd044:
    // 0x2bd044: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x2bd044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2bd048:
    // 0x2bd048: 0x846201de  lh          $v0, 0x1DE($v1)
    ctx->pc = 0x2bd048u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 478)));
label_2bd04c:
    // 0x2bd04c: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_2bd050:
    if (ctx->pc == 0x2BD050u) {
        ctx->pc = 0x2BD050u;
            // 0x2bd050: 0x246401de  addiu       $a0, $v1, 0x1DE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 478));
        ctx->pc = 0x2BD054u;
        goto label_2bd054;
    }
    ctx->pc = 0x2BD04Cu;
    {
        const bool branch_taken_0x2bd04c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2BD050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD04Cu;
            // 0x2bd050: 0x246401de  addiu       $a0, $v1, 0x1DE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 478));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd04c) {
            ctx->pc = 0x2BD080u;
            goto label_2bd080;
        }
    }
    ctx->pc = 0x2BD054u;
label_2bd054:
    // 0x2bd054: 0x846201d8  lh          $v0, 0x1D8($v1)
    ctx->pc = 0x2bd054u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 472)));
label_2bd058:
    // 0x2bd058: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2bd058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2bd05c:
    // 0x2bd05c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x2bd05cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_2bd060:
    // 0x2bd060: 0x8e8201d0  lw          $v0, 0x1D0($s4)
    ctx->pc = 0x2bd060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 464)));
label_2bd064:
    // 0x2bd064: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2bd064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2bd068:
    // 0x2bd068: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2bd068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2bd06c:
    // 0x2bd06c: 0x244301de  addiu       $v1, $v0, 0x1DE
    ctx->pc = 0x2bd06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 478));
label_2bd070:
    // 0x2bd070: 0x844201de  lh          $v0, 0x1DE($v0)
    ctx->pc = 0x2bd070u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 478)));
label_2bd074:
    // 0x2bd074: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_2bd078:
    if (ctx->pc == 0x2BD078u) {
        ctx->pc = 0x2BD07Cu;
        goto label_2bd07c;
    }
    ctx->pc = 0x2BD074u;
    {
        const bool branch_taken_0x2bd074 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2bd074) {
            ctx->pc = 0x2BD080u;
            goto label_2bd080;
        }
    }
    ctx->pc = 0x2BD07Cu;
label_2bd07c:
    // 0x2bd07c: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x2bd07cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
label_2bd080:
    // 0x2bd080: 0x8e8201d0  lw          $v0, 0x1D0($s4)
    ctx->pc = 0x2bd080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 464)));
label_2bd084:
    // 0x2bd084: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2bd084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2bd088:
    // 0x2bd088: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2bd088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2bd08c:
    // 0x2bd08c: 0x844301de  lh          $v1, 0x1DE($v0)
    ctx->pc = 0x2bd08cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 478)));
label_2bd090:
    // 0x2bd090: 0x244401de  addiu       $a0, $v0, 0x1DE
    ctx->pc = 0x2bd090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 478));
label_2bd094:
    // 0x2bd094: 0x844201d8  lh          $v0, 0x1D8($v0)
    ctx->pc = 0x2bd094u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 472)));
label_2bd098:
    // 0x2bd098: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2bd098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2bd09c:
    // 0x2bd09c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2bd09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2bd0a0:
    // 0x2bd0a0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2bd0a4:
    if (ctx->pc == 0x2BD0A4u) {
        ctx->pc = 0x2BD0A8u;
        goto label_2bd0a8;
    }
    ctx->pc = 0x2BD0A0u;
    {
        const bool branch_taken_0x2bd0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd0a0) {
            ctx->pc = 0x2BD0ACu;
            goto label_2bd0ac;
        }
    }
    ctx->pc = 0x2BD0A8u;
label_2bd0a8:
    // 0x2bd0a8: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x2bd0a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
label_2bd0ac:
    // 0x2bd0ac: 0xc065af8  jal         func_196BE0
label_2bd0b0:
    if (ctx->pc == 0x2BD0B0u) {
        ctx->pc = 0x2BD0B4u;
        goto label_2bd0b4;
    }
    ctx->pc = 0x2BD0ACu;
    SET_GPR_U32(ctx, 31, 0x2BD0B4u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD0B4u; }
        if (ctx->pc != 0x2BD0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD0B4u; }
        if (ctx->pc != 0x2BD0B4u) { return; }
    }
    ctx->pc = 0x2BD0B4u;
label_2bd0b4:
    // 0x2bd0b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bd0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bd0b8:
    // 0x2bd0b8: 0x8e8201d0  lw          $v0, 0x1D0($s4)
    ctx->pc = 0x2bd0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 464)));
label_2bd0bc:
    // 0x2bd0bc: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2bd0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2bd0c0:
    // 0x2bd0c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bd0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2bd0c4:
    // 0x2bd0c4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2bd0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2bd0c8:
    // 0x2bd0c8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2bd0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2bd0cc:
    // 0x2bd0cc: 0x846301de  lh          $v1, 0x1DE($v1)
    ctx->pc = 0x2bd0ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 478)));
label_2bd0d0:
    // 0x2bd0d0: 0x8c420214  lw          $v0, 0x214($v0)
    ctx->pc = 0x2bd0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_2bd0d4:
    // 0x2bd0d4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2bd0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2bd0d8:
    // 0x2bd0d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bd0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bd0dc:
    // 0x2bd0dc: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x2bd0dcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2bd0e0:
    // 0x2bd0e0: 0xc067558  jal         func_19D560
label_2bd0e4:
    if (ctx->pc == 0x2BD0E4u) {
        ctx->pc = 0x2BD0E4u;
            // 0x2bd0e4: 0x86850258  lh          $a1, 0x258($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 600)));
        ctx->pc = 0x2BD0E8u;
        goto label_2bd0e8;
    }
    ctx->pc = 0x2BD0E0u;
    SET_GPR_U32(ctx, 31, 0x2BD0E8u);
    ctx->pc = 0x2BD0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD0E0u;
            // 0x2bd0e4: 0x86850258  lh          $a1, 0x258($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 600)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D560u;
    if (runtime->hasFunction(0x19D560u)) {
        auto targetFn = runtime->lookupFunction(0x19D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD0E8u; }
        if (ctx->pc != 0x2BD0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquipDirect__16CUserDataManagerFii_0x19d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD0E8u; }
        if (ctx->pc != 0x2BD0E8u) { return; }
    }
    ctx->pc = 0x2BD0E8u;
label_2bd0e8:
    // 0x2bd0e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bd0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bd0ec:
    // 0x2bd0ec: 0x278284f4  addiu       $v0, $gp, -0x7B0C
    ctx->pc = 0x2bd0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935796));
label_2bd0f0:
    // 0x2bd0f0: 0xa7839c24  sh          $v1, -0x63DC($gp)
    ctx->pc = 0x2bd0f0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941732), (uint16_t)GPR_U32(ctx, 3));
label_2bd0f4:
    // 0x2bd0f4: 0x8e8301d0  lw          $v1, 0x1D0($s4)
    ctx->pc = 0x2bd0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 464)));
label_2bd0f8:
    // 0x2bd0f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bd0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bd0fc:
    // 0x2bd0fc: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2bd0fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2bd100:
    // 0x2bd100: 0x10000002  b           . + 4 + (0x2 << 2)
label_2bd104:
    if (ctx->pc == 0x2BD104u) {
        ctx->pc = 0x2BD104u;
            // 0x2bd104: 0xa3829b75  sb          $v0, -0x648B($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2BD108u;
        goto label_2bd108;
    }
    ctx->pc = 0x2BD100u;
    {
        const bool branch_taken_0x2bd100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD100u;
            // 0x2bd104: 0xa3829b75  sb          $v0, -0x648B($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd100) {
            ctx->pc = 0x2BD10Cu;
            goto label_2bd10c;
        }
    }
    ctx->pc = 0x2BD108u;
label_2bd108:
    // 0x2bd108: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2bd108u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd10c:
    // 0x2bd10c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_2bd110:
    if (ctx->pc == 0x2BD110u) {
        ctx->pc = 0x2BD110u;
            // 0x2bd110: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BD114u;
        goto label_2bd114;
    }
    ctx->pc = 0x2BD10Cu;
    {
        const bool branch_taken_0x2bd10c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD10Cu;
            // 0x2bd110: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd10c) {
            ctx->pc = 0x2BD11Cu;
            goto label_2bd11c;
        }
    }
    ctx->pc = 0x2BD114u;
label_2bd114:
    // 0x2bd114: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_2bd118:
    if (ctx->pc == 0x2BD118u) {
        ctx->pc = 0x2BD118u;
            // 0x2bd118: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BD11Cu;
        goto label_2bd11c;
    }
    ctx->pc = 0x2BD114u;
    {
        const bool branch_taken_0x2bd114 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD114u;
            // 0x2bd118: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd114) {
            ctx->pc = 0x2BD128u;
            goto label_2bd128;
        }
    }
    ctx->pc = 0x2BD11Cu;
label_2bd11c:
    // 0x2bd11c: 0xc094274  jal         func_2509D0
label_2bd120:
    if (ctx->pc == 0x2BD120u) {
        ctx->pc = 0x2BD124u;
        goto label_2bd124;
    }
    ctx->pc = 0x2BD11Cu;
    SET_GPR_U32(ctx, 31, 0x2BD124u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD124u; }
        if (ctx->pc != 0x2BD124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD124u; }
        if (ctx->pc != 0x2BD124u) { return; }
    }
    ctx->pc = 0x2BD124u;
label_2bd124:
    // 0x2bd124: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2bd124u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd128:
    // 0x2bd128: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2bd128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd12c:
    // 0x2bd12c: 0x3c023da0  lui         $v0, 0x3DA0
    ctx->pc = 0x2bd12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15776 << 16));
label_2bd130:
    // 0x2bd130: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x2bd130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
label_2bd134:
    // 0x2bd134: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bd134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bd138:
    // 0x2bd138: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x2bd138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_2bd13c:
    // 0x2bd13c: 0xc440029c  lwc1        $f0, 0x29C($v0)
    ctx->pc = 0x2bd13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bd140:
    // 0x2bd140: 0x2445029c  addiu       $a1, $v0, 0x29C
    ctx->pc = 0x2bd140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 668));
label_2bd144:
    // 0x2bd144: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bd144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2bd148:
    // 0x2bd148: 0xe440029c  swc1        $f0, 0x29C($v0)
    ctx->pc = 0x2bd148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 668), bits); }
label_2bd14c:
    // 0x2bd14c: 0x8e8201d0  lw          $v0, 0x1D0($s4)
    ctx->pc = 0x2bd14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 464)));
label_2bd150:
    // 0x2bd150: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_2bd154:
    if (ctx->pc == 0x2BD154u) {
        ctx->pc = 0x2BD158u;
        goto label_2bd158;
    }
    ctx->pc = 0x2BD150u;
    {
        const bool branch_taken_0x2bd150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bd150) {
            ctx->pc = 0x2BD15Cu;
            goto label_2bd15c;
        }
    }
    ctx->pc = 0x2BD158u;
label_2bd158:
    // 0x2bd158: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2bd158u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2bd15c:
    // 0x2bd15c: 0x0  nop
    ctx->pc = 0x2bd15cu;
    // NOP
label_2bd160:
    // 0x2bd160: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2bd160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2bd164:
    // 0x2bd164: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2bd164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_2bd168:
    // 0x2bd168: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_2bd16c:
    if (ctx->pc == 0x2BD16Cu) {
        ctx->pc = 0x2BD16Cu;
            // 0x2bd16c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x2BD170u;
        goto label_2bd170;
    }
    ctx->pc = 0x2BD168u;
    {
        const bool branch_taken_0x2bd168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD168u;
            // 0x2bd16c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd168) {
            ctx->pc = 0x2BD138u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bd138;
        }
    }
    ctx->pc = 0x2BD170u;
label_2bd170:
    // 0x2bd170: 0x32c20002  andi        $v0, $s6, 0x2
    ctx->pc = 0x2bd170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
label_2bd174:
    // 0x2bd174: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2bd178:
    if (ctx->pc == 0x2BD178u) {
        ctx->pc = 0x2BD178u;
            // 0x2bd178: 0x32c20001  andi        $v0, $s6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x2BD17Cu;
        goto label_2bd17c;
    }
    ctx->pc = 0x2BD174u;
    {
        const bool branch_taken_0x2bd174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD174u;
            // 0x2bd178: 0x32c20001  andi        $v0, $s6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd174) {
            ctx->pc = 0x2BD1B8u;
            goto label_2bd1b8;
        }
    }
    ctx->pc = 0x2BD17Cu;
label_2bd17c:
    // 0x2bd17c: 0xae8002b0  sw          $zero, 0x2B0($s4)
    ctx->pc = 0x2bd17cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 688), GPR_U32(ctx, 0));
label_2bd180:
    // 0x2bd180: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2bd180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2bd184:
    // 0x2bd184: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x2bd184u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_2bd188:
    // 0x2bd188: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bd188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bd18c:
    // 0x2bd18c: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2bd18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2bd190:
    // 0x2bd190: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bd190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bd194:
    // 0x2bd194: 0xac20d62c  sw          $zero, -0x29D4($at)
    ctx->pc = 0x2bd194u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 0));
label_2bd198:
    // 0x2bd198: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bd198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bd19c:
    // 0x2bd19c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2bd19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2bd1a0:
    // 0x2bd1a0: 0xc08e898  jal         func_23A260
label_2bd1a4:
    if (ctx->pc == 0x2BD1A4u) {
        ctx->pc = 0x2BD1A4u;
            // 0x2bd1a4: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2BD1A8u;
        goto label_2bd1a8;
    }
    ctx->pc = 0x2BD1A0u;
    SET_GPR_U32(ctx, 31, 0x2BD1A8u);
    ctx->pc = 0x2BD1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD1A0u;
            // 0x2bd1a4: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD1A8u; }
        if (ctx->pc != 0x2BD1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD1A8u; }
        if (ctx->pc != 0x2BD1A8u) { return; }
    }
    ctx->pc = 0x2BD1A8u;
label_2bd1a8:
    // 0x2bd1a8: 0xc094274  jal         func_2509D0
label_2bd1ac:
    if (ctx->pc == 0x2BD1ACu) {
        ctx->pc = 0x2BD1ACu;
            // 0x2bd1ac: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2BD1B0u;
        goto label_2bd1b0;
    }
    ctx->pc = 0x2BD1A8u;
    SET_GPR_U32(ctx, 31, 0x2BD1B0u);
    ctx->pc = 0x2BD1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD1A8u;
            // 0x2bd1ac: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD1B0u; }
        if (ctx->pc != 0x2BD1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD1B0u; }
        if (ctx->pc != 0x2BD1B0u) { return; }
    }
    ctx->pc = 0x2BD1B0u;
label_2bd1b0:
    // 0x2bd1b0: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_2bd1b4:
    if (ctx->pc == 0x2BD1B4u) {
        ctx->pc = 0x2BD1B8u;
        goto label_2bd1b8;
    }
    ctx->pc = 0x2BD1B0u;
    {
        const bool branch_taken_0x2bd1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd1b0) {
            ctx->pc = 0x2BD434u;
            goto label_2bd434;
        }
    }
    ctx->pc = 0x2BD1B8u;
label_2bd1b8:
    // 0x2bd1b8: 0x1040009e  beqz        $v0, . + 4 + (0x9E << 2)
label_2bd1bc:
    if (ctx->pc == 0x2BD1BCu) {
        ctx->pc = 0x2BD1C0u;
        goto label_2bd1c0;
    }
    ctx->pc = 0x2BD1B8u;
    {
        const bool branch_taken_0x2bd1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd1b8) {
            ctx->pc = 0x2BD434u;
            goto label_2bd434;
        }
    }
    ctx->pc = 0x2BD1C0u;
label_2bd1c0:
    // 0x2bd1c0: 0x8e8301d0  lw          $v1, 0x1D0($s4)
    ctx->pc = 0x2bd1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 464)));
label_2bd1c4:
    // 0x2bd1c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2bd1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2bd1c8:
    // 0x2bd1c8: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
label_2bd1cc:
    if (ctx->pc == 0x2BD1CCu) {
        ctx->pc = 0x2BD1D0u;
        goto label_2bd1d0;
    }
    ctx->pc = 0x2BD1C8u;
    {
        const bool branch_taken_0x2bd1c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bd1c8) {
            ctx->pc = 0x2BD234u;
            goto label_2bd234;
        }
    }
    ctx->pc = 0x2BD1D0u;
label_2bd1d0:
    // 0x2bd1d0: 0x86840002  lh          $a0, 0x2($s4)
    ctx->pc = 0x2bd1d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_2bd1d4:
    // 0x2bd1d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bd1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bd1d8:
    // 0x2bd1d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2bd1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bd1dc:
    // 0x2bd1dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2bd1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2bd1e0:
    // 0x2bd1e0: 0xa6840002  sh          $a0, 0x2($s4)
    ctx->pc = 0x2bd1e0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 4));
label_2bd1e4:
    // 0x2bd1e4: 0xae8302b0  sw          $v1, 0x2B0($s4)
    ctx->pc = 0x2bd1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 688), GPR_U32(ctx, 3));
label_2bd1e8:
    // 0x2bd1e8: 0xae800294  sw          $zero, 0x294($s4)
    ctx->pc = 0x2bd1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 660), GPR_U32(ctx, 0));
label_2bd1ec:
    // 0x2bd1ec: 0xae2217e4  sw          $v0, 0x17E4($s1)
    ctx->pc = 0x2bd1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6116), GPR_U32(ctx, 2));
label_2bd1f0:
    // 0x2bd1f0: 0x86820258  lh          $v0, 0x258($s4)
    ctx->pc = 0x2bd1f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 600)));
label_2bd1f4:
    // 0x2bd1f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2bd1f8:
    if (ctx->pc == 0x2BD1F8u) {
        ctx->pc = 0x2BD1F8u;
            // 0x2bd1f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BD1FCu;
        goto label_2bd1fc;
    }
    ctx->pc = 0x2BD1F4u;
    {
        const bool branch_taken_0x2bd1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD1F4u;
            // 0x2bd1f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd1f4) {
            ctx->pc = 0x2BD204u;
            goto label_2bd204;
        }
    }
    ctx->pc = 0x2BD1FCu;
label_2bd1fc:
    // 0x2bd1fc: 0xc0877e0  jal         func_21DF80
label_2bd200:
    if (ctx->pc == 0x2BD200u) {
        ctx->pc = 0x2BD200u;
            // 0x2bd200: 0x240511f8  addiu       $a1, $zero, 0x11F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4600));
        ctx->pc = 0x2BD204u;
        goto label_2bd204;
    }
    ctx->pc = 0x2BD1FCu;
    SET_GPR_U32(ctx, 31, 0x2BD204u);
    ctx->pc = 0x2BD200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD1FCu;
            // 0x2bd200: 0x240511f8  addiu       $a1, $zero, 0x11F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD204u; }
        if (ctx->pc != 0x2BD204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD204u; }
        if (ctx->pc != 0x2BD204u) { return; }
    }
    ctx->pc = 0x2BD204u;
label_2bd204:
    // 0x2bd204: 0x86830258  lh          $v1, 0x258($s4)
    ctx->pc = 0x2bd204u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 600)));
label_2bd208:
    // 0x2bd208: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bd208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bd20c:
    // 0x2bd20c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_2bd210:
    if (ctx->pc == 0x2BD210u) {
        ctx->pc = 0x2BD210u;
            // 0x2bd210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BD214u;
        goto label_2bd214;
    }
    ctx->pc = 0x2BD20Cu;
    {
        const bool branch_taken_0x2bd20c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BD210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD20Cu;
            // 0x2bd210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd20c) {
            ctx->pc = 0x2BD224u;
            goto label_2bd224;
        }
    }
    ctx->pc = 0x2BD214u;
label_2bd214:
    // 0x2bd214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bd218:
    // 0x2bd218: 0xc0877e0  jal         func_21DF80
label_2bd21c:
    if (ctx->pc == 0x2BD21Cu) {
        ctx->pc = 0x2BD21Cu;
            // 0x2bd21c: 0x240511fb  addiu       $a1, $zero, 0x11FB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4603));
        ctx->pc = 0x2BD220u;
        goto label_2bd220;
    }
    ctx->pc = 0x2BD218u;
    SET_GPR_U32(ctx, 31, 0x2BD220u);
    ctx->pc = 0x2BD21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD218u;
            // 0x2bd21c: 0x240511fb  addiu       $a1, $zero, 0x11FB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4603));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD220u; }
        if (ctx->pc != 0x2BD220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD220u; }
        if (ctx->pc != 0x2BD220u) { return; }
    }
    ctx->pc = 0x2BD220u;
label_2bd220:
    // 0x2bd220: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bd224:
    // 0x2bd224: 0xc0875b0  jal         func_21D6C0
label_2bd228:
    if (ctx->pc == 0x2BD228u) {
        ctx->pc = 0x2BD228u;
            // 0x2bd228: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BD22Cu;
        goto label_2bd22c;
    }
    ctx->pc = 0x2BD224u;
    SET_GPR_U32(ctx, 31, 0x2BD22Cu);
    ctx->pc = 0x2BD228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD224u;
            // 0x2bd228: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD22Cu; }
        if (ctx->pc != 0x2BD22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD22Cu; }
        if (ctx->pc != 0x2BD22Cu) { return; }
    }
    ctx->pc = 0x2BD22Cu;
label_2bd22c:
    // 0x2bd22c: 0xc094274  jal         func_2509D0
label_2bd230:
    if (ctx->pc == 0x2BD230u) {
        ctx->pc = 0x2BD230u;
            // 0x2bd230: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BD234u;
        goto label_2bd234;
    }
    ctx->pc = 0x2BD22Cu;
    SET_GPR_U32(ctx, 31, 0x2BD234u);
    ctx->pc = 0x2BD230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD22Cu;
            // 0x2bd230: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD234u; }
        if (ctx->pc != 0x2BD234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD234u; }
        if (ctx->pc != 0x2BD234u) { return; }
    }
    ctx->pc = 0x2BD234u;
label_2bd234:
    // 0x2bd234: 0x8e8301d0  lw          $v1, 0x1D0($s4)
    ctx->pc = 0x2bd234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 464)));
label_2bd238:
    // 0x2bd238: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2bd238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2bd23c:
    // 0x2bd23c: 0x1462007d  bne         $v1, $v0, . + 4 + (0x7D << 2)
label_2bd240:
    if (ctx->pc == 0x2BD240u) {
        ctx->pc = 0x2BD244u;
        goto label_2bd244;
    }
    ctx->pc = 0x2BD23Cu;
    {
        const bool branch_taken_0x2bd23c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bd23c) {
            ctx->pc = 0x2BD434u;
            goto label_2bd434;
        }
    }
    ctx->pc = 0x2BD244u;
label_2bd244:
    // 0x2bd244: 0x86860002  lh          $a2, 0x2($s4)
    ctx->pc = 0x2bd244u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_2bd248:
    // 0x2bd248: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bd248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bd24c:
    // 0x2bd24c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2bd24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bd250:
    // 0x2bd250: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bd254:
    // 0x2bd254: 0x240511fd  addiu       $a1, $zero, 0x11FD
    ctx->pc = 0x2bd254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4605));
label_2bd258:
    // 0x2bd258: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2bd258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2bd25c:
    // 0x2bd25c: 0xa6860002  sh          $a2, 0x2($s4)
    ctx->pc = 0x2bd25cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 6));
label_2bd260:
    // 0x2bd260: 0xae8302b0  sw          $v1, 0x2B0($s4)
    ctx->pc = 0x2bd260u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 688), GPR_U32(ctx, 3));
label_2bd264:
    // 0x2bd264: 0xae800294  sw          $zero, 0x294($s4)
    ctx->pc = 0x2bd264u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 660), GPR_U32(ctx, 0));
label_2bd268:
    // 0x2bd268: 0xc0877e0  jal         func_21DF80
label_2bd26c:
    if (ctx->pc == 0x2BD26Cu) {
        ctx->pc = 0x2BD26Cu;
            // 0x2bd26c: 0xae2217e4  sw          $v0, 0x17E4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6116), GPR_U32(ctx, 2));
        ctx->pc = 0x2BD270u;
        goto label_2bd270;
    }
    ctx->pc = 0x2BD268u;
    SET_GPR_U32(ctx, 31, 0x2BD270u);
    ctx->pc = 0x2BD26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD268u;
            // 0x2bd26c: 0xae2217e4  sw          $v0, 0x17E4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD270u; }
        if (ctx->pc != 0x2BD270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD270u; }
        if (ctx->pc != 0x2BD270u) { return; }
    }
    ctx->pc = 0x2BD270u;
label_2bd270:
    // 0x2bd270: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bd274:
    // 0x2bd274: 0xc0875b0  jal         func_21D6C0
label_2bd278:
    if (ctx->pc == 0x2BD278u) {
        ctx->pc = 0x2BD278u;
            // 0x2bd278: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BD27Cu;
        goto label_2bd27c;
    }
    ctx->pc = 0x2BD274u;
    SET_GPR_U32(ctx, 31, 0x2BD27Cu);
    ctx->pc = 0x2BD278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD274u;
            // 0x2bd278: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD27Cu; }
        if (ctx->pc != 0x2BD27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD27Cu; }
        if (ctx->pc != 0x2BD27Cu) { return; }
    }
    ctx->pc = 0x2BD27Cu;
label_2bd27c:
    // 0x2bd27c: 0xc094274  jal         func_2509D0
label_2bd280:
    if (ctx->pc == 0x2BD280u) {
        ctx->pc = 0x2BD280u;
            // 0x2bd280: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BD284u;
        goto label_2bd284;
    }
    ctx->pc = 0x2BD27Cu;
    SET_GPR_U32(ctx, 31, 0x2BD284u);
    ctx->pc = 0x2BD280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD27Cu;
            // 0x2bd280: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD284u; }
        if (ctx->pc != 0x2BD284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD284u; }
        if (ctx->pc != 0x2BD284u) { return; }
    }
    ctx->pc = 0x2BD284u;
label_2bd284:
    // 0x2bd284: 0x1000006b  b           . + 4 + (0x6B << 2)
label_2bd288:
    if (ctx->pc == 0x2BD288u) {
        ctx->pc = 0x2BD28Cu;
        goto label_2bd28c;
    }
    ctx->pc = 0x2BD284u;
    {
        const bool branch_taken_0x2bd284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd284) {
            ctx->pc = 0x2BD434u;
            goto label_2bd434;
        }
    }
    ctx->pc = 0x2BD28Cu;
label_2bd28c:
    // 0x2bd28c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bd290:
    // 0x2bd290: 0xc087654  jal         func_21D950
label_2bd294:
    if (ctx->pc == 0x2BD294u) {
        ctx->pc = 0x2BD294u;
            // 0x2bd294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BD298u;
        goto label_2bd298;
    }
    ctx->pc = 0x2BD290u;
    SET_GPR_U32(ctx, 31, 0x2BD298u);
    ctx->pc = 0x2BD294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD290u;
            // 0x2bd294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD298u; }
        if (ctx->pc != 0x2BD298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD298u; }
        if (ctx->pc != 0x2BD298u) { return; }
    }
    ctx->pc = 0x2BD298u;
label_2bd298:
    // 0x2bd298: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bd298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bd29c:
    // 0x2bd29c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bd29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bd2a0:
    // 0x2bd2a0: 0x1624005c  bne         $s1, $a0, . + 4 + (0x5C << 2)
label_2bd2a4:
    if (ctx->pc == 0x2BD2A4u) {
        ctx->pc = 0x2BD2A4u;
            // 0x2bd2a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2BD2A8u;
        goto label_2bd2a8;
    }
    ctx->pc = 0x2BD2A0u;
    {
        const bool branch_taken_0x2bd2a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        ctx->pc = 0x2BD2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD2A0u;
            // 0x2bd2a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd2a0) {
            ctx->pc = 0x2BD414u;
            goto label_2bd414;
        }
    }
    ctx->pc = 0x2BD2A8u;
label_2bd2a8:
    // 0x2bd2a8: 0x8e8301d0  lw          $v1, 0x1D0($s4)
    ctx->pc = 0x2bd2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 464)));
label_2bd2ac:
    // 0x2bd2ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2bd2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2bd2b0:
    // 0x2bd2b0: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_2bd2b4:
    if (ctx->pc == 0x2BD2B4u) {
        ctx->pc = 0x2BD2B8u;
        goto label_2bd2b8;
    }
    ctx->pc = 0x2BD2B0u;
    {
        const bool branch_taken_0x2bd2b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bd2b0) {
            ctx->pc = 0x2BD318u;
            goto label_2bd318;
        }
    }
    ctx->pc = 0x2BD2B8u;
label_2bd2b8:
    // 0x2bd2b8: 0xc065af8  jal         func_196BE0
label_2bd2bc:
    if (ctx->pc == 0x2BD2BCu) {
        ctx->pc = 0x2BD2C0u;
        goto label_2bd2c0;
    }
    ctx->pc = 0x2BD2B8u;
    SET_GPR_U32(ctx, 31, 0x2BD2C0u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD2C0u; }
        if (ctx->pc != 0x2BD2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD2C0u; }
        if (ctx->pc != 0x2BD2C0u) { return; }
    }
    ctx->pc = 0x2BD2C0u;
label_2bd2c0:
    // 0x2bd2c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bd2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bd2c4:
    // 0x2bd2c4: 0xc066d24  jal         func_19B490
label_2bd2c8:
    if (ctx->pc == 0x2BD2C8u) {
        ctx->pc = 0x2BD2C8u;
            // 0x2bd2c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BD2CCu;
        goto label_2bd2cc;
    }
    ctx->pc = 0x2BD2C4u;
    SET_GPR_U32(ctx, 31, 0x2BD2CCu);
    ctx->pc = 0x2BD2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD2C4u;
            // 0x2bd2c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD2CCu; }
        if (ctx->pc != 0x2BD2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD2CCu; }
        if (ctx->pc != 0x2BD2CCu) { return; }
    }
    ctx->pc = 0x2BD2CCu;
label_2bd2cc:
    // 0x2bd2cc: 0xa040002b  sb          $zero, 0x2B($v0)
    ctx->pc = 0x2bd2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 0));
label_2bd2d0:
    // 0x2bd2d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2bd2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2bd2d4:
    // 0x2bd2d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bd2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bd2d8:
    // 0x2bd2d8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bd2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bd2dc:
    // 0x2bd2dc: 0xae820298  sw          $v0, 0x298($s4)
    ctx->pc = 0x2bd2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 664), GPR_U32(ctx, 2));
label_2bd2e0:
    // 0x2bd2e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bd2e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bd2e4:
    // 0x2bd2e4: 0xae8002b0  sw          $zero, 0x2B0($s4)
    ctx->pc = 0x2bd2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 688), GPR_U32(ctx, 0));
label_2bd2e8:
    // 0x2bd2e8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2bd2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2bd2ec:
    // 0x2bd2ec: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x2bd2ecu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
label_2bd2f0:
    // 0x2bd2f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bd2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bd2f4:
    // 0x2bd2f4: 0xac22d62c  sw          $v0, -0x29D4($at)
    ctx->pc = 0x2bd2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 2));
label_2bd2f8:
    // 0x2bd2f8: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2bd2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2bd2fc:
    // 0x2bd2fc: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2bd2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2bd300:
    // 0x2bd300: 0xc08e898  jal         func_23A260
label_2bd304:
    if (ctx->pc == 0x2BD304u) {
        ctx->pc = 0x2BD304u;
            // 0x2bd304: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2BD308u;
        goto label_2bd308;
    }
    ctx->pc = 0x2BD300u;
    SET_GPR_U32(ctx, 31, 0x2BD308u);
    ctx->pc = 0x2BD304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD300u;
            // 0x2bd304: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD308u; }
        if (ctx->pc != 0x2BD308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD308u; }
        if (ctx->pc != 0x2BD308u) { return; }
    }
    ctx->pc = 0x2BD308u;
label_2bd308:
    // 0x2bd308: 0xc094274  jal         func_2509D0
label_2bd30c:
    if (ctx->pc == 0x2BD30Cu) {
        ctx->pc = 0x2BD30Cu;
            // 0x2bd30c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BD310u;
        goto label_2bd310;
    }
    ctx->pc = 0x2BD308u;
    SET_GPR_U32(ctx, 31, 0x2BD310u);
    ctx->pc = 0x2BD30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD308u;
            // 0x2bd30c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD310u; }
        if (ctx->pc != 0x2BD310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD310u; }
        if (ctx->pc != 0x2BD310u) { return; }
    }
    ctx->pc = 0x2BD310u;
label_2bd310:
    // 0x2bd310: 0x10000048  b           . + 4 + (0x48 << 2)
label_2bd314:
    if (ctx->pc == 0x2BD314u) {
        ctx->pc = 0x2BD318u;
        goto label_2bd318;
    }
    ctx->pc = 0x2BD310u;
    {
        const bool branch_taken_0x2bd310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd310) {
            ctx->pc = 0x2BD434u;
            goto label_2bd434;
        }
    }
    ctx->pc = 0x2BD318u;
label_2bd318:
    // 0x2bd318: 0x8e82025c  lw          $v0, 0x25C($s4)
    ctx->pc = 0x2bd318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 604)));
label_2bd31c:
    // 0x2bd31c: 0x1444002e  bne         $v0, $a0, . + 4 + (0x2E << 2)
label_2bd320:
    if (ctx->pc == 0x2BD320u) {
        ctx->pc = 0x2BD324u;
        goto label_2bd324;
    }
    ctx->pc = 0x2BD31Cu;
    {
        const bool branch_taken_0x2bd31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2bd31c) {
            ctx->pc = 0x2BD3D8u;
            goto label_2bd3d8;
        }
    }
    ctx->pc = 0x2BD324u;
label_2bd324:
    // 0x2bd324: 0x86820258  lh          $v0, 0x258($s4)
    ctx->pc = 0x2bd324u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 600)));
label_2bd328:
    // 0x2bd328: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_2bd32c:
    if (ctx->pc == 0x2BD32Cu) {
        ctx->pc = 0x2BD330u;
        goto label_2bd330;
    }
    ctx->pc = 0x2BD328u;
    {
        const bool branch_taken_0x2bd328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd328) {
            ctx->pc = 0x2BD3D8u;
            goto label_2bd3d8;
        }
    }
    ctx->pc = 0x2BD330u;
label_2bd330:
    // 0x2bd330: 0xa6840258  sh          $a0, 0x258($s4)
    ctx->pc = 0x2bd330u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 600), (uint16_t)GPR_U32(ctx, 4));
label_2bd334:
    // 0x2bd334: 0xc065af8  jal         func_196BE0
label_2bd338:
    if (ctx->pc == 0x2BD338u) {
        ctx->pc = 0x2BD338u;
            // 0x2bd338: 0xa3849b73  sb          $a0, -0x648D($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941555), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x2BD33Cu;
        goto label_2bd33c;
    }
    ctx->pc = 0x2BD334u;
    SET_GPR_U32(ctx, 31, 0x2BD33Cu);
    ctx->pc = 0x2BD338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD334u;
            // 0x2bd338: 0xa3849b73  sb          $a0, -0x648D($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941555), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD33Cu; }
        if (ctx->pc != 0x2BD33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD33Cu; }
        if (ctx->pc != 0x2BD33Cu) { return; }
    }
    ctx->pc = 0x2BD33Cu;
label_2bd33c:
    // 0x2bd33c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bd33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bd340:
    // 0x2bd340: 0xc066d24  jal         func_19B490
label_2bd344:
    if (ctx->pc == 0x2BD344u) {
        ctx->pc = 0x2BD344u;
            // 0x2bd344: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BD348u;
        goto label_2bd348;
    }
    ctx->pc = 0x2BD340u;
    SET_GPR_U32(ctx, 31, 0x2BD348u);
    ctx->pc = 0x2BD344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD340u;
            // 0x2bd344: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD348u; }
        if (ctx->pc != 0x2BD348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD348u; }
        if (ctx->pc != 0x2BD348u) { return; }
    }
    ctx->pc = 0x2BD348u;
label_2bd348:
    // 0x2bd348: 0xae8202d0  sw          $v0, 0x2D0($s4)
    ctx->pc = 0x2bd348u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 720), GPR_U32(ctx, 2));
label_2bd34c:
    // 0x2bd34c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2bd34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bd350:
    // 0x2bd350: 0x8e8202d0  lw          $v0, 0x2D0($s4)
    ctx->pc = 0x2bd350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 720)));
label_2bd354:
    // 0x2bd354: 0xa045002b  sb          $a1, 0x2B($v0)
    ctx->pc = 0x2bd354u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 5));
label_2bd358:
    // 0x2bd358: 0xdf869c28  ld          $a2, -0x63D8($gp)
    ctx->pc = 0x2bd358u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294941736)));
label_2bd35c:
    // 0x2bd35c: 0xc0af1bc  jal         func_2BC6F0
label_2bd360:
    if (ctx->pc == 0x2BD360u) {
        ctx->pc = 0x2BD360u;
            // 0x2bd360: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BD364u;
        goto label_2bd364;
    }
    ctx->pc = 0x2BD35Cu;
    SET_GPR_U32(ctx, 31, 0x2BD364u);
    ctx->pc = 0x2BD360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD35Cu;
            // 0x2bd360: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC6F0u;
    if (runtime->hasFunction(0x2BC6F0u)) {
        auto targetFn = runtime->lookupFunction(0x2BC6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD364u; }
        if (ctx->pc != 0x2BD364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateCostumeList__15CMenuCostumeSelFiUl_0x2bc6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD364u; }
        if (ctx->pc != 0x2BD364u) { return; }
    }
    ctx->pc = 0x2BD364u;
label_2bd364:
    // 0x2bd364: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x2bd364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_2bd368:
    // 0x2bd368: 0xc0af224  jal         func_2BC890
label_2bd36c:
    if (ctx->pc == 0x2BD36Cu) {
        ctx->pc = 0x2BD36Cu;
            // 0x2bd36c: 0x268501f4  addiu       $a1, $s4, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 500));
        ctx->pc = 0x2BD370u;
        goto label_2bd370;
    }
    ctx->pc = 0x2BD368u;
    SET_GPR_U32(ctx, 31, 0x2BD370u);
    ctx->pc = 0x2BD36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD368u;
            // 0x2bd36c: 0x268501f4  addiu       $a1, $s4, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 500));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC890u;
    if (runtime->hasFunction(0x2BC890u)) {
        auto targetFn = runtime->lookupFunction(0x2BC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD370u; }
        if (ctx->pc != 0x2BD370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CosutmeSelDefaultSet__FiPs_0x2bc890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD370u; }
        if (ctx->pc != 0x2BD370u) { return; }
    }
    ctx->pc = 0x2BD370u;
label_2bd370:
    // 0x2bd370: 0xa68201de  sh          $v0, 0x1DE($s4)
    ctx->pc = 0x2bd370u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 478), (uint16_t)GPR_U32(ctx, 2));
label_2bd374:
    // 0x2bd374: 0x2404010a  addiu       $a0, $zero, 0x10A
    ctx->pc = 0x2bd374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
label_2bd378:
    // 0x2bd378: 0xc0af224  jal         func_2BC890
label_2bd37c:
    if (ctx->pc == 0x2BD37Cu) {
        ctx->pc = 0x2BD37Cu;
            // 0x2bd37c: 0x268501e4  addiu       $a1, $s4, 0x1E4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 484));
        ctx->pc = 0x2BD380u;
        goto label_2bd380;
    }
    ctx->pc = 0x2BD378u;
    SET_GPR_U32(ctx, 31, 0x2BD380u);
    ctx->pc = 0x2BD37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD378u;
            // 0x2bd37c: 0x268501e4  addiu       $a1, $s4, 0x1E4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 484));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC890u;
    if (runtime->hasFunction(0x2BC890u)) {
        auto targetFn = runtime->lookupFunction(0x2BC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD380u; }
        if (ctx->pc != 0x2BD380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CosutmeSelDefaultSet__FiPs_0x2bc890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD380u; }
        if (ctx->pc != 0x2BD380u) { return; }
    }
    ctx->pc = 0x2BD380u;
label_2bd380:
    // 0x2bd380: 0xa68201e0  sh          $v0, 0x1E0($s4)
    ctx->pc = 0x2bd380u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 480), (uint16_t)GPR_U32(ctx, 2));
label_2bd384:
    // 0x2bd384: 0x24040085  addiu       $a0, $zero, 0x85
    ctx->pc = 0x2bd384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_2bd388:
    // 0x2bd388: 0xc0af224  jal         func_2BC890
label_2bd38c:
    if (ctx->pc == 0x2BD38Cu) {
        ctx->pc = 0x2BD38Cu;
            // 0x2bd38c: 0x26850204  addiu       $a1, $s4, 0x204 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 516));
        ctx->pc = 0x2BD390u;
        goto label_2bd390;
    }
    ctx->pc = 0x2BD388u;
    SET_GPR_U32(ctx, 31, 0x2BD390u);
    ctx->pc = 0x2BD38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD388u;
            // 0x2bd38c: 0x26850204  addiu       $a1, $s4, 0x204 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 516));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC890u;
    if (runtime->hasFunction(0x2BC890u)) {
        auto targetFn = runtime->lookupFunction(0x2BC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD390u; }
        if (ctx->pc != 0x2BD390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CosutmeSelDefaultSet__FiPs_0x2bc890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD390u; }
        if (ctx->pc != 0x2BD390u) { return; }
    }
    ctx->pc = 0x2BD390u;
label_2bd390:
    // 0x2bd390: 0xa68201e2  sh          $v0, 0x1E2($s4)
    ctx->pc = 0x2bd390u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 482), (uint16_t)GPR_U32(ctx, 2));
label_2bd394:
    // 0x2bd394: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bd394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bd398:
    // 0x2bd398: 0xa3809b70  sb          $zero, -0x6490($gp)
    ctx->pc = 0x2bd398u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941552), (uint8_t)GPR_U32(ctx, 0));
label_2bd39c:
    // 0x2bd39c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2bd39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bd3a0:
    // 0x2bd3a0: 0xa3849b72  sb          $a0, -0x648E($gp)
    ctx->pc = 0x2bd3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941554), (uint8_t)GPR_U32(ctx, 4));
label_2bd3a4:
    // 0x2bd3a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2bd3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2bd3a8:
    // 0x2bd3a8: 0xa3809b75  sb          $zero, -0x648B($gp)
    ctx->pc = 0x2bd3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 0));
label_2bd3ac:
    // 0x2bd3ac: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bd3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bd3b0:
    // 0x2bd3b0: 0xa3839b74  sb          $v1, -0x648C($gp)
    ctx->pc = 0x2bd3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941556), (uint8_t)GPR_U32(ctx, 3));
label_2bd3b4:
    // 0x2bd3b4: 0xae8402ac  sw          $a0, 0x2AC($s4)
    ctx->pc = 0x2bd3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 684), GPR_U32(ctx, 4));
label_2bd3b8:
    // 0x2bd3b8: 0xae8002b0  sw          $zero, 0x2B0($s4)
    ctx->pc = 0x2bd3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 688), GPR_U32(ctx, 0));
label_2bd3bc:
    // 0x2bd3bc: 0xa7849c24  sh          $a0, -0x63DC($gp)
    ctx->pc = 0x2bd3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941732), (uint16_t)GPR_U32(ctx, 4));
label_2bd3c0:
    // 0x2bd3c0: 0xa6820002  sh          $v0, 0x2($s4)
    ctx->pc = 0x2bd3c0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
label_2bd3c4:
    // 0x2bd3c4: 0x8c24ca40  lw          $a0, -0x35C0($at)
    ctx->pc = 0x2bd3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
label_2bd3c8:
    // 0x2bd3c8: 0xc0877e0  jal         func_21DF80
label_2bd3cc:
    if (ctx->pc == 0x2BD3CCu) {
        ctx->pc = 0x2BD3CCu;
            // 0x2bd3cc: 0x240511fc  addiu       $a1, $zero, 0x11FC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4604));
        ctx->pc = 0x2BD3D0u;
        goto label_2bd3d0;
    }
    ctx->pc = 0x2BD3C8u;
    SET_GPR_U32(ctx, 31, 0x2BD3D0u);
    ctx->pc = 0x2BD3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD3C8u;
            // 0x2bd3cc: 0x240511fc  addiu       $a1, $zero, 0x11FC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4604));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD3D0u; }
        if (ctx->pc != 0x2BD3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD3D0u; }
        if (ctx->pc != 0x2BD3D0u) { return; }
    }
    ctx->pc = 0x2BD3D0u;
label_2bd3d0:
    // 0x2bd3d0: 0x1000000f  b           . + 4 + (0xF << 2)
label_2bd3d4:
    if (ctx->pc == 0x2BD3D4u) {
        ctx->pc = 0x2BD3D8u;
        goto label_2bd3d8;
    }
    ctx->pc = 0x2BD3D0u;
    {
        const bool branch_taken_0x2bd3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd3d0) {
            ctx->pc = 0x2BD410u;
            goto label_2bd410;
        }
    }
    ctx->pc = 0x2BD3D8u;
label_2bd3d8:
    // 0x2bd3d8: 0xae8002b0  sw          $zero, 0x2B0($s4)
    ctx->pc = 0x2bd3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 688), GPR_U32(ctx, 0));
label_2bd3dc:
    // 0x2bd3dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2bd3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2bd3e0:
    // 0x2bd3e0: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x2bd3e0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_2bd3e4:
    // 0x2bd3e4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bd3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bd3e8:
    // 0x2bd3e8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2bd3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2bd3ec:
    // 0x2bd3ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bd3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bd3f0:
    // 0x2bd3f0: 0xac22d62c  sw          $v0, -0x29D4($at)
    ctx->pc = 0x2bd3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 2));
label_2bd3f4:
    // 0x2bd3f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bd3f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bd3f8:
    // 0x2bd3f8: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2bd3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2bd3fc:
    // 0x2bd3fc: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2bd3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2bd400:
    // 0x2bd400: 0xc08e898  jal         func_23A260
label_2bd404:
    if (ctx->pc == 0x2BD404u) {
        ctx->pc = 0x2BD404u;
            // 0x2bd404: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2BD408u;
        goto label_2bd408;
    }
    ctx->pc = 0x2BD400u;
    SET_GPR_U32(ctx, 31, 0x2BD408u);
    ctx->pc = 0x2BD404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD400u;
            // 0x2bd404: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD408u; }
        if (ctx->pc != 0x2BD408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD408u; }
        if (ctx->pc != 0x2BD408u) { return; }
    }
    ctx->pc = 0x2BD408u;
label_2bd408:
    // 0x2bd408: 0xc094274  jal         func_2509D0
label_2bd40c:
    if (ctx->pc == 0x2BD40Cu) {
        ctx->pc = 0x2BD40Cu;
            // 0x2bd40c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BD410u;
        goto label_2bd410;
    }
    ctx->pc = 0x2BD408u;
    SET_GPR_U32(ctx, 31, 0x2BD410u);
    ctx->pc = 0x2BD40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD408u;
            // 0x2bd40c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD410u; }
        if (ctx->pc != 0x2BD410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD410u; }
        if (ctx->pc != 0x2BD410u) { return; }
    }
    ctx->pc = 0x2BD410u;
label_2bd410:
    // 0x2bd410: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2bd410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2bd414:
    // 0x2bd414: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
label_2bd418:
    if (ctx->pc == 0x2BD418u) {
        ctx->pc = 0x2BD41Cu;
        goto label_2bd41c;
    }
    ctx->pc = 0x2BD414u;
    {
        const bool branch_taken_0x2bd414 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bd414) {
            ctx->pc = 0x2BD434u;
            goto label_2bd434;
        }
    }
    ctx->pc = 0x2BD41Cu;
label_2bd41c:
    // 0x2bd41c: 0xa6800002  sh          $zero, 0x2($s4)
    ctx->pc = 0x2bd41cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
label_2bd420:
    // 0x2bd420: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bd420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bd424:
    // 0x2bd424: 0xae8002b0  sw          $zero, 0x2B0($s4)
    ctx->pc = 0x2bd424u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 688), GPR_U32(ctx, 0));
label_2bd428:
    // 0x2bd428: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2bd428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2bd42c:
    // 0x2bd42c: 0xc094274  jal         func_2509D0
label_2bd430:
    if (ctx->pc == 0x2BD430u) {
        ctx->pc = 0x2BD430u;
            // 0x2bd430: 0xae820294  sw          $v0, 0x294($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 660), GPR_U32(ctx, 2));
        ctx->pc = 0x2BD434u;
        goto label_2bd434;
    }
    ctx->pc = 0x2BD42Cu;
    SET_GPR_U32(ctx, 31, 0x2BD434u);
    ctx->pc = 0x2BD430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD42Cu;
            // 0x2bd430: 0xae820294  sw          $v0, 0x294($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 660), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD434u; }
        if (ctx->pc != 0x2BD434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD434u; }
        if (ctx->pc != 0x2BD434u) { return; }
    }
    ctx->pc = 0x2BD434u;
label_2bd434:
    // 0x2bd434: 0x8e990170  lw          $t9, 0x170($s4)
    ctx->pc = 0x2bd434u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 368)));
label_2bd438:
    // 0x2bd438: 0x26840110  addiu       $a0, $s4, 0x110
    ctx->pc = 0x2bd438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
label_2bd43c:
    // 0x2bd43c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bd43cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bd440:
    // 0x2bd440: 0x320f809  jalr        $t9
label_2bd444:
    if (ctx->pc == 0x2BD444u) {
        ctx->pc = 0x2BD444u;
            // 0x2bd444: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BD448u;
        goto label_2bd448;
    }
    ctx->pc = 0x2BD440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BD448u);
        ctx->pc = 0x2BD444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD440u;
            // 0x2bd444: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BD448u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BD448u; }
            if (ctx->pc != 0x2BD448u) { return; }
        }
        }
    }
    ctx->pc = 0x2BD448u;
label_2bd448:
    // 0x2bd448: 0x87839c24  lh          $v1, -0x63DC($gp)
    ctx->pc = 0x2bd448u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941732)));
label_2bd44c:
    // 0x2bd44c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2bd44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2bd450:
    // 0x2bd450: 0x1062005d  beq         $v1, $v0, . + 4 + (0x5D << 2)
label_2bd454:
    if (ctx->pc == 0x2BD454u) {
        ctx->pc = 0x2BD454u;
            // 0x2bd454: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2BD458u;
        goto label_2bd458;
    }
    ctx->pc = 0x2BD450u;
    {
        const bool branch_taken_0x2bd450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BD454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD450u;
            // 0x2bd454: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd450) {
            ctx->pc = 0x2BD5C8u;
            goto label_2bd5c8;
        }
    }
    ctx->pc = 0x2BD458u;
label_2bd458:
    // 0x2bd458: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
label_2bd45c:
    if (ctx->pc == 0x2BD45Cu) {
        ctx->pc = 0x2BD45Cu;
            // 0x2bd45c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2BD460u;
        goto label_2bd460;
    }
    ctx->pc = 0x2BD458u;
    {
        const bool branch_taken_0x2bd458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BD45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD458u;
            // 0x2bd45c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd458) {
            ctx->pc = 0x2BD570u;
            goto label_2bd570;
        }
    }
    ctx->pc = 0x2BD460u;
label_2bd460:
    // 0x2bd460: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_2bd464:
    if (ctx->pc == 0x2BD464u) {
        ctx->pc = 0x2BD464u;
            // 0x2bd464: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BD468u;
        goto label_2bd468;
    }
    ctx->pc = 0x2BD460u;
    {
        const bool branch_taken_0x2bd460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BD464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD460u;
            // 0x2bd464: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd460) {
            ctx->pc = 0x2BD4D8u;
            goto label_2bd4d8;
        }
    }
    ctx->pc = 0x2BD468u;
label_2bd468:
    // 0x2bd468: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2bd46c:
    if (ctx->pc == 0x2BD46Cu) {
        ctx->pc = 0x2BD470u;
        goto label_2bd470;
    }
    ctx->pc = 0x2BD468u;
    {
        const bool branch_taken_0x2bd468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bd468) {
            ctx->pc = 0x2BD480u;
            goto label_2bd480;
        }
    }
    ctx->pc = 0x2BD470u;
label_2bd470:
    // 0x2bd470: 0x10600059  beqz        $v1, . + 4 + (0x59 << 2)
label_2bd474:
    if (ctx->pc == 0x2BD474u) {
        ctx->pc = 0x2BD478u;
        goto label_2bd478;
    }
    ctx->pc = 0x2BD470u;
    {
        const bool branch_taken_0x2bd470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd470) {
            ctx->pc = 0x2BD5D8u;
            goto label_2bd5d8;
        }
    }
    ctx->pc = 0x2BD478u;
label_2bd478:
    // 0x2bd478: 0x10000058  b           . + 4 + (0x58 << 2)
label_2bd47c:
    if (ctx->pc == 0x2BD47Cu) {
        ctx->pc = 0x2BD47Cu;
            // 0x2bd47c: 0xc6820224  lwc1        $f2, 0x224($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x2BD480u;
        goto label_2bd480;
    }
    ctx->pc = 0x2BD478u;
    {
        const bool branch_taken_0x2bd478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD478u;
            // 0x2bd47c: 0xc6820224  lwc1        $f2, 0x224($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd478) {
            ctx->pc = 0x2BD5DCu;
            goto label_2bd5dc;
        }
    }
    ctx->pc = 0x2BD480u;
label_2bd480:
    // 0x2bd480: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2bd480u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2bd484:
    // 0x2bd484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bd488:
    // 0x2bd488: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2bd488u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2bd48c:
    // 0x2bd48c: 0x320f809  jalr        $t9
label_2bd490:
    if (ctx->pc == 0x2BD490u) {
        ctx->pc = 0x2BD490u;
            // 0x2bd490: 0x26850270  addiu       $a1, $s4, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 624));
        ctx->pc = 0x2BD494u;
        goto label_2bd494;
    }
    ctx->pc = 0x2BD48Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BD494u);
        ctx->pc = 0x2BD490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD48Cu;
            // 0x2bd490: 0x26850270  addiu       $a1, $s4, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 624));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BD494u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BD494u; }
            if (ctx->pc != 0x2BD494u) { return; }
        }
        }
    }
    ctx->pc = 0x2BD494u;
label_2bd494:
    // 0x2bd494: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bd494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bd498:
    // 0x2bd498: 0xac20dc14  sw          $zero, -0x23EC($at)
    ctx->pc = 0x2bd498u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958100), GPR_U32(ctx, 0));
label_2bd49c:
    // 0x2bd49c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bd49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2bd4a0:
    // 0x2bd4a0: 0xac20dc0c  sw          $zero, -0x23F4($at)
    ctx->pc = 0x2bd4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958092), GPR_U32(ctx, 0));
label_2bd4a4:
    // 0x2bd4a4: 0xc0abf6c  jal         func_2AFDB0
label_2bd4a8:
    if (ctx->pc == 0x2BD4A8u) {
        ctx->pc = 0x2BD4A8u;
            // 0x2bd4a8: 0x86840258  lh          $a0, 0x258($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 600)));
        ctx->pc = 0x2BD4ACu;
        goto label_2bd4ac;
    }
    ctx->pc = 0x2BD4A4u;
    SET_GPR_U32(ctx, 31, 0x2BD4ACu);
    ctx->pc = 0x2BD4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD4A4u;
            // 0x2bd4a8: 0x86840258  lh          $a0, 0x258($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 600)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFDB0u;
    if (runtime->hasFunction(0x2AFDB0u)) {
        auto targetFn = runtime->lookupFunction(0x2AFDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD4ACu; }
        if (ctx->pc != 0x2BD4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuLoadItemNo__Fi_0x2afdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD4ACu; }
        if (ctx->pc != 0x2BD4ACu) { return; }
    }
    ctx->pc = 0x2BD4ACu;
label_2bd4ac:
    // 0x2bd4ac: 0x86850258  lh          $a1, 0x258($s4)
    ctx->pc = 0x2bd4acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 600)));
label_2bd4b0:
    // 0x2bd4b0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2bd4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_2bd4b4:
    // 0x2bd4b4: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x2bd4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
label_2bd4b8:
    // 0x2bd4b8: 0x2484dbf0  addiu       $a0, $a0, -0x2410
    ctx->pc = 0x2bd4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
label_2bd4bc:
    // 0x2bd4bc: 0x24c6ca80  addiu       $a2, $a2, -0x3580
    ctx->pc = 0x2bd4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953600));
label_2bd4c0:
    // 0x2bd4c0: 0xc0ae434  jal         func_2B90D0
label_2bd4c4:
    if (ctx->pc == 0x2BD4C4u) {
        ctx->pc = 0x2BD4C4u;
            // 0x2bd4c4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BD4C8u;
        goto label_2bd4c8;
    }
    ctx->pc = 0x2BD4C0u;
    SET_GPR_U32(ctx, 31, 0x2BD4C8u);
    ctx->pc = 0x2BD4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD4C0u;
            // 0x2bd4c4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B90D0u;
    if (runtime->hasFunction(0x2B90D0u)) {
        auto targetFn = runtime->lookupFunction(0x2B90D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD4C8u; }
        if (ctx->pc != 0x2BD4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCharaDataLoad__FP9mgCMemoryiPP17MENU_BGREAD_INFO2i_0x2b90d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD4C8u; }
        if (ctx->pc != 0x2BD4C8u) { return; }
    }
    ctx->pc = 0x2BD4C8u;
label_2bd4c8:
    // 0x2bd4c8: 0x87829c24  lh          $v0, -0x63DC($gp)
    ctx->pc = 0x2bd4c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941732)));
label_2bd4cc:
    // 0x2bd4cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bd4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bd4d0:
    // 0x2bd4d0: 0x10000041  b           . + 4 + (0x41 << 2)
label_2bd4d4:
    if (ctx->pc == 0x2BD4D4u) {
        ctx->pc = 0x2BD4D4u;
            // 0x2bd4d4: 0xa7829c24  sh          $v0, -0x63DC($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941732), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2BD4D8u;
        goto label_2bd4d8;
    }
    ctx->pc = 0x2BD4D0u;
    {
        const bool branch_taken_0x2bd4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD4D0u;
            // 0x2bd4d4: 0xa7829c24  sh          $v0, -0x63DC($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941732), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd4d0) {
            ctx->pc = 0x2BD5D8u;
            goto label_2bd5d8;
        }
    }
    ctx->pc = 0x2BD4D8u;
label_2bd4d8:
    // 0x2bd4d8: 0xc05239c  jal         func_148E70
label_2bd4dc:
    if (ctx->pc == 0x2BD4DCu) {
        ctx->pc = 0x2BD4E0u;
        goto label_2bd4e0;
    }
    ctx->pc = 0x2BD4D8u;
    SET_GPR_U32(ctx, 31, 0x2BD4E0u);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD4E0u; }
        if (ctx->pc != 0x2BD4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD4E0u; }
        if (ctx->pc != 0x2BD4E0u) { return; }
    }
    ctx->pc = 0x2BD4E0u;
label_2bd4e0:
    // 0x2bd4e0: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
label_2bd4e4:
    if (ctx->pc == 0x2BD4E4u) {
        ctx->pc = 0x2BD4E8u;
        goto label_2bd4e8;
    }
    ctx->pc = 0x2BD4E0u;
    {
        const bool branch_taken_0x2bd4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd4e0) {
            ctx->pc = 0x2BD5D8u;
            goto label_2bd5d8;
        }
    }
    ctx->pc = 0x2BD4E8u;
label_2bd4e8:
    // 0x2bd4e8: 0x86870258  lh          $a3, 0x258($s4)
    ctx->pc = 0x2bd4e8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 600)));
label_2bd4ec:
    // 0x2bd4ec: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2bd4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2bd4f0:
    // 0x2bd4f0: 0x8e880024  lw          $t0, 0x24($s4)
    ctx->pc = 0x2bd4f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_2bd4f4:
    // 0x2bd4f4: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x2bd4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_2bd4f8:
    // 0x2bd4f8: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x2bd4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
label_2bd4fc:
    // 0x2bd4fc: 0x2484ca80  addiu       $a0, $a0, -0x3580
    ctx->pc = 0x2bd4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
label_2bd500:
    // 0x2bd500: 0x24a5dbf0  addiu       $a1, $a1, -0x2410
    ctx->pc = 0x2bd500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958064));
label_2bd504:
    // 0x2bd504: 0x24c6caa0  addiu       $a2, $a2, -0x3560
    ctx->pc = 0x2bd504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953632));
label_2bd508:
    // 0x2bd508: 0xc0ae634  jal         func_2B98D0
label_2bd50c:
    if (ctx->pc == 0x2BD50Cu) {
        ctx->pc = 0x2BD50Cu;
            // 0x2bd50c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2BD510u;
        goto label_2bd510;
    }
    ctx->pc = 0x2BD508u;
    SET_GPR_U32(ctx, 31, 0x2BD510u);
    ctx->pc = 0x2BD50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD508u;
            // 0x2bd50c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B98D0u;
    if (runtime->hasFunction(0x2B98D0u)) {
        auto targetFn = runtime->lookupFunction(0x2B98D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD510u; }
        if (ctx->pc != 0x2BD510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCharaDataLoadEndCheck__FPP17MENU_BGREAD_INFO2P9mgCMemoryPP12CActionCharaiii_0x2b98d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD510u; }
        if (ctx->pc != 0x2BD510u) { return; }
    }
    ctx->pc = 0x2BD510u;
label_2bd510:
    // 0x2bd510: 0x86850258  lh          $a1, 0x258($s4)
    ctx->pc = 0x2bd510u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 600)));
label_2bd514:
    // 0x2bd514: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2bd514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2bd518:
    // 0x2bd518: 0xc0aed10  jal         func_2BB440
label_2bd51c:
    if (ctx->pc == 0x2BD51Cu) {
        ctx->pc = 0x2BD51Cu;
            // 0x2bd51c: 0x2484ca80  addiu       $a0, $a0, -0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
        ctx->pc = 0x2BD520u;
        goto label_2bd520;
    }
    ctx->pc = 0x2BD518u;
    SET_GPR_U32(ctx, 31, 0x2BD520u);
    ctx->pc = 0x2BD51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD518u;
            // 0x2bd51c: 0x2484ca80  addiu       $a0, $a0, -0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB440u;
    if (runtime->hasFunction(0x2BB440u)) {
        auto targetFn = runtime->lookupFunction(0x2BB440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD520u; }
        if (ctx->pc != 0x2BD520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCharaDataLoadEndCheckAfter__FPP17MENU_BGREAD_INFO2i_0x2bb440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD520u; }
        if (ctx->pc != 0x2BD520u) { return; }
    }
    ctx->pc = 0x2BD520u;
label_2bd520:
    // 0x2bd520: 0xa3809b72  sb          $zero, -0x648E($gp)
    ctx->pc = 0x2bd520u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941554), (uint8_t)GPR_U32(ctx, 0));
label_2bd524:
    // 0x2bd524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bd528:
    // 0x2bd528: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2bd528u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2bd52c:
    // 0x2bd52c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2bd52cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2bd530:
    // 0x2bd530: 0x320f809  jalr        $t9
label_2bd534:
    if (ctx->pc == 0x2BD534u) {
        ctx->pc = 0x2BD534u;
            // 0x2bd534: 0x26850260  addiu       $a1, $s4, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 608));
        ctx->pc = 0x2BD538u;
        goto label_2bd538;
    }
    ctx->pc = 0x2BD530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BD538u);
        ctx->pc = 0x2BD534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD530u;
            // 0x2bd534: 0x26850260  addiu       $a1, $s4, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 608));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BD538u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BD538u; }
            if (ctx->pc != 0x2BD538u) { return; }
        }
        }
    }
    ctx->pc = 0x2BD538u;
label_2bd538:
    // 0x2bd538: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2bd538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2bd53c:
    // 0x2bd53c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bd540:
    // 0x2bd540: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2bd540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2bd544:
    // 0x2bd544: 0x320f809  jalr        $t9
label_2bd548:
    if (ctx->pc == 0x2BD548u) {
        ctx->pc = 0x2BD548u;
            // 0x2bd548: 0x26850270  addiu       $a1, $s4, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 624));
        ctx->pc = 0x2BD54Cu;
        goto label_2bd54c;
    }
    ctx->pc = 0x2BD544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BD54Cu);
        ctx->pc = 0x2BD548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD544u;
            // 0x2bd548: 0x26850270  addiu       $a1, $s4, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 624));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BD54Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BD54Cu; }
            if (ctx->pc != 0x2BD54Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2BD54Cu;
label_2bd54c:
    // 0x2bd54c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2bd54cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2bd550:
    // 0x2bd550: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x2bd550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_2bd554:
    // 0x2bd554: 0x320f809  jalr        $t9
label_2bd558:
    if (ctx->pc == 0x2BD558u) {
        ctx->pc = 0x2BD558u;
            // 0x2bd558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BD55Cu;
        goto label_2bd55c;
    }
    ctx->pc = 0x2BD554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BD55Cu);
        ctx->pc = 0x2BD558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD554u;
            // 0x2bd558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BD55Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BD55Cu; }
            if (ctx->pc != 0x2BD55Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2BD55Cu;
label_2bd55c:
    // 0x2bd55c: 0x87829c24  lh          $v0, -0x63DC($gp)
    ctx->pc = 0x2bd55cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941732)));
label_2bd560:
    // 0x2bd560: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bd560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bd564:
    // 0x2bd564: 0xa7829c24  sh          $v0, -0x63DC($gp)
    ctx->pc = 0x2bd564u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941732), (uint16_t)GPR_U32(ctx, 2));
label_2bd568:
    // 0x2bd568: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2bd56c:
    if (ctx->pc == 0x2BD56Cu) {
        ctx->pc = 0x2BD56Cu;
            // 0x2bd56c: 0xae8002a8  sw          $zero, 0x2A8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 680), GPR_U32(ctx, 0));
        ctx->pc = 0x2BD570u;
        goto label_2bd570;
    }
    ctx->pc = 0x2BD568u;
    {
        const bool branch_taken_0x2bd568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD568u;
            // 0x2bd56c: 0xae8002a8  sw          $zero, 0x2A8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 680), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd568) {
            ctx->pc = 0x2BD5D8u;
            goto label_2bd5d8;
        }
    }
    ctx->pc = 0x2BD570u;
label_2bd570:
    // 0x2bd570: 0x8e8202a8  lw          $v0, 0x2A8($s4)
    ctx->pc = 0x2bd570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 680)));
label_2bd574:
    // 0x2bd574: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bd574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bd578:
    // 0x2bd578: 0xae8202a8  sw          $v0, 0x2A8($s4)
    ctx->pc = 0x2bd578u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 680), GPR_U32(ctx, 2));
label_2bd57c:
    // 0x2bd57c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2bd57cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2bd580:
    // 0x2bd580: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x2bd580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_2bd584:
    // 0x2bd584: 0x320f809  jalr        $t9
label_2bd588:
    if (ctx->pc == 0x2BD588u) {
        ctx->pc = 0x2BD588u;
            // 0x2bd588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BD58Cu;
        goto label_2bd58c;
    }
    ctx->pc = 0x2BD584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BD58Cu);
        ctx->pc = 0x2BD588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD584u;
            // 0x2bd588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BD58Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BD58Cu; }
            if (ctx->pc != 0x2BD58Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2BD58Cu;
label_2bd58c:
    // 0x2bd58c: 0x8e8202a8  lw          $v0, 0x2A8($s4)
    ctx->pc = 0x2bd58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 680)));
label_2bd590:
    // 0x2bd590: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x2bd590u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_2bd594:
    // 0x2bd594: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
label_2bd598:
    if (ctx->pc == 0x2BD598u) {
        ctx->pc = 0x2BD59Cu;
        goto label_2bd59c;
    }
    ctx->pc = 0x2BD594u;
    {
        const bool branch_taken_0x2bd594 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd594) {
            ctx->pc = 0x2BD5D8u;
            goto label_2bd5d8;
        }
    }
    ctx->pc = 0x2BD59Cu;
label_2bd59c:
    // 0x2bd59c: 0x87829c24  lh          $v0, -0x63DC($gp)
    ctx->pc = 0x2bd59cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941732)));
label_2bd5a0:
    // 0x2bd5a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2bd5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bd5a4:
    // 0x2bd5a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bd5a8:
    // 0x2bd5a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bd5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bd5ac:
    // 0x2bd5ac: 0xa7829c24  sh          $v0, -0x63DC($gp)
    ctx->pc = 0x2bd5acu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941732), (uint16_t)GPR_U32(ctx, 2));
label_2bd5b0:
    // 0x2bd5b0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2bd5b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2bd5b4:
    // 0x2bd5b4: 0x8f3900f8  lw          $t9, 0xF8($t9)
    ctx->pc = 0x2bd5b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 248)));
label_2bd5b8:
    // 0x2bd5b8: 0x320f809  jalr        $t9
label_2bd5bc:
    if (ctx->pc == 0x2BD5BCu) {
        ctx->pc = 0x2BD5BCu;
            // 0x2bd5bc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BD5C0u;
        goto label_2bd5c0;
    }
    ctx->pc = 0x2BD5B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BD5C0u);
        ctx->pc = 0x2BD5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD5B8u;
            // 0x2bd5bc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BD5C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BD5C0u; }
            if (ctx->pc != 0x2BD5C0u) { return; }
        }
        }
    }
    ctx->pc = 0x2BD5C0u;
label_2bd5c0:
    // 0x2bd5c0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2bd5c4:
    if (ctx->pc == 0x2BD5C4u) {
        ctx->pc = 0x2BD5C8u;
        goto label_2bd5c8;
    }
    ctx->pc = 0x2BD5C0u;
    {
        const bool branch_taken_0x2bd5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd5c0) {
            ctx->pc = 0x2BD5D8u;
            goto label_2bd5d8;
        }
    }
    ctx->pc = 0x2BD5C8u;
label_2bd5c8:
    // 0x2bd5c8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2bd5c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2bd5cc:
    // 0x2bd5cc: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x2bd5ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_2bd5d0:
    // 0x2bd5d0: 0x320f809  jalr        $t9
label_2bd5d4:
    if (ctx->pc == 0x2BD5D4u) {
        ctx->pc = 0x2BD5D4u;
            // 0x2bd5d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BD5D8u;
        goto label_2bd5d8;
    }
    ctx->pc = 0x2BD5D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BD5D8u);
        ctx->pc = 0x2BD5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD5D0u;
            // 0x2bd5d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BD5D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BD5D8u; }
            if (ctx->pc != 0x2BD5D8u) { return; }
        }
        }
    }
    ctx->pc = 0x2BD5D8u;
label_2bd5d8:
    // 0x2bd5d8: 0xc6820224  lwc1        $f2, 0x224($s4)
    ctx->pc = 0x2bd5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2bd5dc:
    // 0x2bd5dc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2bd5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2bd5e0:
    // 0x2bd5e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bd5e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bd5e4:
    // 0x2bd5e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bd5e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bd5e8:
    // 0x2bd5e8: 0x0  nop
    ctx->pc = 0x2bd5e8u;
    // NOP
label_2bd5ec:
    // 0x2bd5ec: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2bd5ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2bd5f0:
    // 0x2bd5f0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2bd5f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bd5f4:
    // 0x2bd5f4: 0x0  nop
    ctx->pc = 0x2bd5f4u;
    // NOP
label_2bd5f8:
    // 0x2bd5f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2bd5fc:
    if (ctx->pc == 0x2BD5FCu) {
        ctx->pc = 0x2BD5FCu;
            // 0x2bd5fc: 0xe6810224  swc1        $f1, 0x224($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 548), bits); }
        ctx->pc = 0x2BD600u;
        goto label_2bd600;
    }
    ctx->pc = 0x2BD5F8u;
    {
        const bool branch_taken_0x2bd5f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BD5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD5F8u;
            // 0x2bd5fc: 0xe6810224  swc1        $f1, 0x224($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 548), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd5f8) {
            ctx->pc = 0x2BD608u;
            goto label_2bd608;
        }
    }
    ctx->pc = 0x2BD600u;
label_2bd600:
    // 0x2bd600: 0x3c02c380  lui         $v0, 0xC380
    ctx->pc = 0x2bd600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50048 << 16));
label_2bd604:
    // 0x2bd604: 0xae820224  sw          $v0, 0x224($s4)
    ctx->pc = 0x2bd604u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 548), GPR_U32(ctx, 2));
label_2bd608:
    // 0x2bd608: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bd608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd60c:
    // 0x2bd60c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2bd60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2bd610:
    // 0x2bd610: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2bd610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2bd614:
    // 0x2bd614: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2bd614u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2bd618:
    // 0x2bd618: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2bd618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2bd61c:
    // 0x2bd61c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2bd61cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2bd620:
    // 0x2bd620: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2bd620u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2bd624:
    // 0x2bd624: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2bd624u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2bd628:
    // 0x2bd628: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2bd628u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2bd62c:
    // 0x2bd62c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2bd62cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2bd630:
    // 0x2bd630: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2bd630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bd634:
    // 0x2bd634: 0x3e00008  jr          $ra
label_2bd638:
    if (ctx->pc == 0x2BD638u) {
        ctx->pc = 0x2BD638u;
            // 0x2bd638: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2BD63Cu;
        goto label_fallthrough_0x2bd634;
    }
    ctx->pc = 0x2BD634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD634u;
            // 0x2bd638: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2bd634:
    ctx->pc = 0x2BD63Cu;
}
