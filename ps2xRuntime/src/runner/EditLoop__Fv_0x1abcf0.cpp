#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditLoop__Fv
// Address: 0x1abcf0 - 0x1adfbc
void EditLoop__Fv_0x1abcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditLoop__Fv_0x1abcf0");
#endif

    switch (ctx->pc) {
        case 0x1abcf0u: goto label_1abcf0;
        case 0x1abcf4u: goto label_1abcf4;
        case 0x1abcf8u: goto label_1abcf8;
        case 0x1abcfcu: goto label_1abcfc;
        case 0x1abd00u: goto label_1abd00;
        case 0x1abd04u: goto label_1abd04;
        case 0x1abd08u: goto label_1abd08;
        case 0x1abd0cu: goto label_1abd0c;
        case 0x1abd10u: goto label_1abd10;
        case 0x1abd14u: goto label_1abd14;
        case 0x1abd18u: goto label_1abd18;
        case 0x1abd1cu: goto label_1abd1c;
        case 0x1abd20u: goto label_1abd20;
        case 0x1abd24u: goto label_1abd24;
        case 0x1abd28u: goto label_1abd28;
        case 0x1abd2cu: goto label_1abd2c;
        case 0x1abd30u: goto label_1abd30;
        case 0x1abd34u: goto label_1abd34;
        case 0x1abd38u: goto label_1abd38;
        case 0x1abd3cu: goto label_1abd3c;
        case 0x1abd40u: goto label_1abd40;
        case 0x1abd44u: goto label_1abd44;
        case 0x1abd48u: goto label_1abd48;
        case 0x1abd4cu: goto label_1abd4c;
        case 0x1abd50u: goto label_1abd50;
        case 0x1abd54u: goto label_1abd54;
        case 0x1abd58u: goto label_1abd58;
        case 0x1abd5cu: goto label_1abd5c;
        case 0x1abd60u: goto label_1abd60;
        case 0x1abd64u: goto label_1abd64;
        case 0x1abd68u: goto label_1abd68;
        case 0x1abd6cu: goto label_1abd6c;
        case 0x1abd70u: goto label_1abd70;
        case 0x1abd74u: goto label_1abd74;
        case 0x1abd78u: goto label_1abd78;
        case 0x1abd7cu: goto label_1abd7c;
        case 0x1abd80u: goto label_1abd80;
        case 0x1abd84u: goto label_1abd84;
        case 0x1abd88u: goto label_1abd88;
        case 0x1abd8cu: goto label_1abd8c;
        case 0x1abd90u: goto label_1abd90;
        case 0x1abd94u: goto label_1abd94;
        case 0x1abd98u: goto label_1abd98;
        case 0x1abd9cu: goto label_1abd9c;
        case 0x1abda0u: goto label_1abda0;
        case 0x1abda4u: goto label_1abda4;
        case 0x1abda8u: goto label_1abda8;
        case 0x1abdacu: goto label_1abdac;
        case 0x1abdb0u: goto label_1abdb0;
        case 0x1abdb4u: goto label_1abdb4;
        case 0x1abdb8u: goto label_1abdb8;
        case 0x1abdbcu: goto label_1abdbc;
        case 0x1abdc0u: goto label_1abdc0;
        case 0x1abdc4u: goto label_1abdc4;
        case 0x1abdc8u: goto label_1abdc8;
        case 0x1abdccu: goto label_1abdcc;
        case 0x1abdd0u: goto label_1abdd0;
        case 0x1abdd4u: goto label_1abdd4;
        case 0x1abdd8u: goto label_1abdd8;
        case 0x1abddcu: goto label_1abddc;
        case 0x1abde0u: goto label_1abde0;
        case 0x1abde4u: goto label_1abde4;
        case 0x1abde8u: goto label_1abde8;
        case 0x1abdecu: goto label_1abdec;
        case 0x1abdf0u: goto label_1abdf0;
        case 0x1abdf4u: goto label_1abdf4;
        case 0x1abdf8u: goto label_1abdf8;
        case 0x1abdfcu: goto label_1abdfc;
        case 0x1abe00u: goto label_1abe00;
        case 0x1abe04u: goto label_1abe04;
        case 0x1abe08u: goto label_1abe08;
        case 0x1abe0cu: goto label_1abe0c;
        case 0x1abe10u: goto label_1abe10;
        case 0x1abe14u: goto label_1abe14;
        case 0x1abe18u: goto label_1abe18;
        case 0x1abe1cu: goto label_1abe1c;
        case 0x1abe20u: goto label_1abe20;
        case 0x1abe24u: goto label_1abe24;
        case 0x1abe28u: goto label_1abe28;
        case 0x1abe2cu: goto label_1abe2c;
        case 0x1abe30u: goto label_1abe30;
        case 0x1abe34u: goto label_1abe34;
        case 0x1abe38u: goto label_1abe38;
        case 0x1abe3cu: goto label_1abe3c;
        case 0x1abe40u: goto label_1abe40;
        case 0x1abe44u: goto label_1abe44;
        case 0x1abe48u: goto label_1abe48;
        case 0x1abe4cu: goto label_1abe4c;
        case 0x1abe50u: goto label_1abe50;
        case 0x1abe54u: goto label_1abe54;
        case 0x1abe58u: goto label_1abe58;
        case 0x1abe5cu: goto label_1abe5c;
        case 0x1abe60u: goto label_1abe60;
        case 0x1abe64u: goto label_1abe64;
        case 0x1abe68u: goto label_1abe68;
        case 0x1abe6cu: goto label_1abe6c;
        case 0x1abe70u: goto label_1abe70;
        case 0x1abe74u: goto label_1abe74;
        case 0x1abe78u: goto label_1abe78;
        case 0x1abe7cu: goto label_1abe7c;
        case 0x1abe80u: goto label_1abe80;
        case 0x1abe84u: goto label_1abe84;
        case 0x1abe88u: goto label_1abe88;
        case 0x1abe8cu: goto label_1abe8c;
        case 0x1abe90u: goto label_1abe90;
        case 0x1abe94u: goto label_1abe94;
        case 0x1abe98u: goto label_1abe98;
        case 0x1abe9cu: goto label_1abe9c;
        case 0x1abea0u: goto label_1abea0;
        case 0x1abea4u: goto label_1abea4;
        case 0x1abea8u: goto label_1abea8;
        case 0x1abeacu: goto label_1abeac;
        case 0x1abeb0u: goto label_1abeb0;
        case 0x1abeb4u: goto label_1abeb4;
        case 0x1abeb8u: goto label_1abeb8;
        case 0x1abebcu: goto label_1abebc;
        case 0x1abec0u: goto label_1abec0;
        case 0x1abec4u: goto label_1abec4;
        case 0x1abec8u: goto label_1abec8;
        case 0x1abeccu: goto label_1abecc;
        case 0x1abed0u: goto label_1abed0;
        case 0x1abed4u: goto label_1abed4;
        case 0x1abed8u: goto label_1abed8;
        case 0x1abedcu: goto label_1abedc;
        case 0x1abee0u: goto label_1abee0;
        case 0x1abee4u: goto label_1abee4;
        case 0x1abee8u: goto label_1abee8;
        case 0x1abeecu: goto label_1abeec;
        case 0x1abef0u: goto label_1abef0;
        case 0x1abef4u: goto label_1abef4;
        case 0x1abef8u: goto label_1abef8;
        case 0x1abefcu: goto label_1abefc;
        case 0x1abf00u: goto label_1abf00;
        case 0x1abf04u: goto label_1abf04;
        case 0x1abf08u: goto label_1abf08;
        case 0x1abf0cu: goto label_1abf0c;
        case 0x1abf10u: goto label_1abf10;
        case 0x1abf14u: goto label_1abf14;
        case 0x1abf18u: goto label_1abf18;
        case 0x1abf1cu: goto label_1abf1c;
        case 0x1abf20u: goto label_1abf20;
        case 0x1abf24u: goto label_1abf24;
        case 0x1abf28u: goto label_1abf28;
        case 0x1abf2cu: goto label_1abf2c;
        case 0x1abf30u: goto label_1abf30;
        case 0x1abf34u: goto label_1abf34;
        case 0x1abf38u: goto label_1abf38;
        case 0x1abf3cu: goto label_1abf3c;
        case 0x1abf40u: goto label_1abf40;
        case 0x1abf44u: goto label_1abf44;
        case 0x1abf48u: goto label_1abf48;
        case 0x1abf4cu: goto label_1abf4c;
        case 0x1abf50u: goto label_1abf50;
        case 0x1abf54u: goto label_1abf54;
        case 0x1abf58u: goto label_1abf58;
        case 0x1abf5cu: goto label_1abf5c;
        case 0x1abf60u: goto label_1abf60;
        case 0x1abf64u: goto label_1abf64;
        case 0x1abf68u: goto label_1abf68;
        case 0x1abf6cu: goto label_1abf6c;
        case 0x1abf70u: goto label_1abf70;
        case 0x1abf74u: goto label_1abf74;
        case 0x1abf78u: goto label_1abf78;
        case 0x1abf7cu: goto label_1abf7c;
        case 0x1abf80u: goto label_1abf80;
        case 0x1abf84u: goto label_1abf84;
        case 0x1abf88u: goto label_1abf88;
        case 0x1abf8cu: goto label_1abf8c;
        case 0x1abf90u: goto label_1abf90;
        case 0x1abf94u: goto label_1abf94;
        case 0x1abf98u: goto label_1abf98;
        case 0x1abf9cu: goto label_1abf9c;
        case 0x1abfa0u: goto label_1abfa0;
        case 0x1abfa4u: goto label_1abfa4;
        case 0x1abfa8u: goto label_1abfa8;
        case 0x1abfacu: goto label_1abfac;
        case 0x1abfb0u: goto label_1abfb0;
        case 0x1abfb4u: goto label_1abfb4;
        case 0x1abfb8u: goto label_1abfb8;
        case 0x1abfbcu: goto label_1abfbc;
        case 0x1abfc0u: goto label_1abfc0;
        case 0x1abfc4u: goto label_1abfc4;
        case 0x1abfc8u: goto label_1abfc8;
        case 0x1abfccu: goto label_1abfcc;
        case 0x1abfd0u: goto label_1abfd0;
        case 0x1abfd4u: goto label_1abfd4;
        case 0x1abfd8u: goto label_1abfd8;
        case 0x1abfdcu: goto label_1abfdc;
        case 0x1abfe0u: goto label_1abfe0;
        case 0x1abfe4u: goto label_1abfe4;
        case 0x1abfe8u: goto label_1abfe8;
        case 0x1abfecu: goto label_1abfec;
        case 0x1abff0u: goto label_1abff0;
        case 0x1abff4u: goto label_1abff4;
        case 0x1abff8u: goto label_1abff8;
        case 0x1abffcu: goto label_1abffc;
        case 0x1ac000u: goto label_1ac000;
        case 0x1ac004u: goto label_1ac004;
        case 0x1ac008u: goto label_1ac008;
        case 0x1ac00cu: goto label_1ac00c;
        case 0x1ac010u: goto label_1ac010;
        case 0x1ac014u: goto label_1ac014;
        case 0x1ac018u: goto label_1ac018;
        case 0x1ac01cu: goto label_1ac01c;
        case 0x1ac020u: goto label_1ac020;
        case 0x1ac024u: goto label_1ac024;
        case 0x1ac028u: goto label_1ac028;
        case 0x1ac02cu: goto label_1ac02c;
        case 0x1ac030u: goto label_1ac030;
        case 0x1ac034u: goto label_1ac034;
        case 0x1ac038u: goto label_1ac038;
        case 0x1ac03cu: goto label_1ac03c;
        case 0x1ac040u: goto label_1ac040;
        case 0x1ac044u: goto label_1ac044;
        case 0x1ac048u: goto label_1ac048;
        case 0x1ac04cu: goto label_1ac04c;
        case 0x1ac050u: goto label_1ac050;
        case 0x1ac054u: goto label_1ac054;
        case 0x1ac058u: goto label_1ac058;
        case 0x1ac05cu: goto label_1ac05c;
        case 0x1ac060u: goto label_1ac060;
        case 0x1ac064u: goto label_1ac064;
        case 0x1ac068u: goto label_1ac068;
        case 0x1ac06cu: goto label_1ac06c;
        case 0x1ac070u: goto label_1ac070;
        case 0x1ac074u: goto label_1ac074;
        case 0x1ac078u: goto label_1ac078;
        case 0x1ac07cu: goto label_1ac07c;
        case 0x1ac080u: goto label_1ac080;
        case 0x1ac084u: goto label_1ac084;
        case 0x1ac088u: goto label_1ac088;
        case 0x1ac08cu: goto label_1ac08c;
        case 0x1ac090u: goto label_1ac090;
        case 0x1ac094u: goto label_1ac094;
        case 0x1ac098u: goto label_1ac098;
        case 0x1ac09cu: goto label_1ac09c;
        case 0x1ac0a0u: goto label_1ac0a0;
        case 0x1ac0a4u: goto label_1ac0a4;
        case 0x1ac0a8u: goto label_1ac0a8;
        case 0x1ac0acu: goto label_1ac0ac;
        case 0x1ac0b0u: goto label_1ac0b0;
        case 0x1ac0b4u: goto label_1ac0b4;
        case 0x1ac0b8u: goto label_1ac0b8;
        case 0x1ac0bcu: goto label_1ac0bc;
        case 0x1ac0c0u: goto label_1ac0c0;
        case 0x1ac0c4u: goto label_1ac0c4;
        case 0x1ac0c8u: goto label_1ac0c8;
        case 0x1ac0ccu: goto label_1ac0cc;
        case 0x1ac0d0u: goto label_1ac0d0;
        case 0x1ac0d4u: goto label_1ac0d4;
        case 0x1ac0d8u: goto label_1ac0d8;
        case 0x1ac0dcu: goto label_1ac0dc;
        case 0x1ac0e0u: goto label_1ac0e0;
        case 0x1ac0e4u: goto label_1ac0e4;
        case 0x1ac0e8u: goto label_1ac0e8;
        case 0x1ac0ecu: goto label_1ac0ec;
        case 0x1ac0f0u: goto label_1ac0f0;
        case 0x1ac0f4u: goto label_1ac0f4;
        case 0x1ac0f8u: goto label_1ac0f8;
        case 0x1ac0fcu: goto label_1ac0fc;
        case 0x1ac100u: goto label_1ac100;
        case 0x1ac104u: goto label_1ac104;
        case 0x1ac108u: goto label_1ac108;
        case 0x1ac10cu: goto label_1ac10c;
        case 0x1ac110u: goto label_1ac110;
        case 0x1ac114u: goto label_1ac114;
        case 0x1ac118u: goto label_1ac118;
        case 0x1ac11cu: goto label_1ac11c;
        case 0x1ac120u: goto label_1ac120;
        case 0x1ac124u: goto label_1ac124;
        case 0x1ac128u: goto label_1ac128;
        case 0x1ac12cu: goto label_1ac12c;
        case 0x1ac130u: goto label_1ac130;
        case 0x1ac134u: goto label_1ac134;
        case 0x1ac138u: goto label_1ac138;
        case 0x1ac13cu: goto label_1ac13c;
        case 0x1ac140u: goto label_1ac140;
        case 0x1ac144u: goto label_1ac144;
        case 0x1ac148u: goto label_1ac148;
        case 0x1ac14cu: goto label_1ac14c;
        case 0x1ac150u: goto label_1ac150;
        case 0x1ac154u: goto label_1ac154;
        case 0x1ac158u: goto label_1ac158;
        case 0x1ac15cu: goto label_1ac15c;
        case 0x1ac160u: goto label_1ac160;
        case 0x1ac164u: goto label_1ac164;
        case 0x1ac168u: goto label_1ac168;
        case 0x1ac16cu: goto label_1ac16c;
        case 0x1ac170u: goto label_1ac170;
        case 0x1ac174u: goto label_1ac174;
        case 0x1ac178u: goto label_1ac178;
        case 0x1ac17cu: goto label_1ac17c;
        case 0x1ac180u: goto label_1ac180;
        case 0x1ac184u: goto label_1ac184;
        case 0x1ac188u: goto label_1ac188;
        case 0x1ac18cu: goto label_1ac18c;
        case 0x1ac190u: goto label_1ac190;
        case 0x1ac194u: goto label_1ac194;
        case 0x1ac198u: goto label_1ac198;
        case 0x1ac19cu: goto label_1ac19c;
        case 0x1ac1a0u: goto label_1ac1a0;
        case 0x1ac1a4u: goto label_1ac1a4;
        case 0x1ac1a8u: goto label_1ac1a8;
        case 0x1ac1acu: goto label_1ac1ac;
        case 0x1ac1b0u: goto label_1ac1b0;
        case 0x1ac1b4u: goto label_1ac1b4;
        case 0x1ac1b8u: goto label_1ac1b8;
        case 0x1ac1bcu: goto label_1ac1bc;
        case 0x1ac1c0u: goto label_1ac1c0;
        case 0x1ac1c4u: goto label_1ac1c4;
        case 0x1ac1c8u: goto label_1ac1c8;
        case 0x1ac1ccu: goto label_1ac1cc;
        case 0x1ac1d0u: goto label_1ac1d0;
        case 0x1ac1d4u: goto label_1ac1d4;
        case 0x1ac1d8u: goto label_1ac1d8;
        case 0x1ac1dcu: goto label_1ac1dc;
        case 0x1ac1e0u: goto label_1ac1e0;
        case 0x1ac1e4u: goto label_1ac1e4;
        case 0x1ac1e8u: goto label_1ac1e8;
        case 0x1ac1ecu: goto label_1ac1ec;
        case 0x1ac1f0u: goto label_1ac1f0;
        case 0x1ac1f4u: goto label_1ac1f4;
        case 0x1ac1f8u: goto label_1ac1f8;
        case 0x1ac1fcu: goto label_1ac1fc;
        case 0x1ac200u: goto label_1ac200;
        case 0x1ac204u: goto label_1ac204;
        case 0x1ac208u: goto label_1ac208;
        case 0x1ac20cu: goto label_1ac20c;
        case 0x1ac210u: goto label_1ac210;
        case 0x1ac214u: goto label_1ac214;
        case 0x1ac218u: goto label_1ac218;
        case 0x1ac21cu: goto label_1ac21c;
        case 0x1ac220u: goto label_1ac220;
        case 0x1ac224u: goto label_1ac224;
        case 0x1ac228u: goto label_1ac228;
        case 0x1ac22cu: goto label_1ac22c;
        case 0x1ac230u: goto label_1ac230;
        case 0x1ac234u: goto label_1ac234;
        case 0x1ac238u: goto label_1ac238;
        case 0x1ac23cu: goto label_1ac23c;
        case 0x1ac240u: goto label_1ac240;
        case 0x1ac244u: goto label_1ac244;
        case 0x1ac248u: goto label_1ac248;
        case 0x1ac24cu: goto label_1ac24c;
        case 0x1ac250u: goto label_1ac250;
        case 0x1ac254u: goto label_1ac254;
        case 0x1ac258u: goto label_1ac258;
        case 0x1ac25cu: goto label_1ac25c;
        case 0x1ac260u: goto label_1ac260;
        case 0x1ac264u: goto label_1ac264;
        case 0x1ac268u: goto label_1ac268;
        case 0x1ac26cu: goto label_1ac26c;
        case 0x1ac270u: goto label_1ac270;
        case 0x1ac274u: goto label_1ac274;
        case 0x1ac278u: goto label_1ac278;
        case 0x1ac27cu: goto label_1ac27c;
        case 0x1ac280u: goto label_1ac280;
        case 0x1ac284u: goto label_1ac284;
        case 0x1ac288u: goto label_1ac288;
        case 0x1ac28cu: goto label_1ac28c;
        case 0x1ac290u: goto label_1ac290;
        case 0x1ac294u: goto label_1ac294;
        case 0x1ac298u: goto label_1ac298;
        case 0x1ac29cu: goto label_1ac29c;
        case 0x1ac2a0u: goto label_1ac2a0;
        case 0x1ac2a4u: goto label_1ac2a4;
        case 0x1ac2a8u: goto label_1ac2a8;
        case 0x1ac2acu: goto label_1ac2ac;
        case 0x1ac2b0u: goto label_1ac2b0;
        case 0x1ac2b4u: goto label_1ac2b4;
        case 0x1ac2b8u: goto label_1ac2b8;
        case 0x1ac2bcu: goto label_1ac2bc;
        case 0x1ac2c0u: goto label_1ac2c0;
        case 0x1ac2c4u: goto label_1ac2c4;
        case 0x1ac2c8u: goto label_1ac2c8;
        case 0x1ac2ccu: goto label_1ac2cc;
        case 0x1ac2d0u: goto label_1ac2d0;
        case 0x1ac2d4u: goto label_1ac2d4;
        case 0x1ac2d8u: goto label_1ac2d8;
        case 0x1ac2dcu: goto label_1ac2dc;
        case 0x1ac2e0u: goto label_1ac2e0;
        case 0x1ac2e4u: goto label_1ac2e4;
        case 0x1ac2e8u: goto label_1ac2e8;
        case 0x1ac2ecu: goto label_1ac2ec;
        case 0x1ac2f0u: goto label_1ac2f0;
        case 0x1ac2f4u: goto label_1ac2f4;
        case 0x1ac2f8u: goto label_1ac2f8;
        case 0x1ac2fcu: goto label_1ac2fc;
        case 0x1ac300u: goto label_1ac300;
        case 0x1ac304u: goto label_1ac304;
        case 0x1ac308u: goto label_1ac308;
        case 0x1ac30cu: goto label_1ac30c;
        case 0x1ac310u: goto label_1ac310;
        case 0x1ac314u: goto label_1ac314;
        case 0x1ac318u: goto label_1ac318;
        case 0x1ac31cu: goto label_1ac31c;
        case 0x1ac320u: goto label_1ac320;
        case 0x1ac324u: goto label_1ac324;
        case 0x1ac328u: goto label_1ac328;
        case 0x1ac32cu: goto label_1ac32c;
        case 0x1ac330u: goto label_1ac330;
        case 0x1ac334u: goto label_1ac334;
        case 0x1ac338u: goto label_1ac338;
        case 0x1ac33cu: goto label_1ac33c;
        case 0x1ac340u: goto label_1ac340;
        case 0x1ac344u: goto label_1ac344;
        case 0x1ac348u: goto label_1ac348;
        case 0x1ac34cu: goto label_1ac34c;
        case 0x1ac350u: goto label_1ac350;
        case 0x1ac354u: goto label_1ac354;
        case 0x1ac358u: goto label_1ac358;
        case 0x1ac35cu: goto label_1ac35c;
        case 0x1ac360u: goto label_1ac360;
        case 0x1ac364u: goto label_1ac364;
        case 0x1ac368u: goto label_1ac368;
        case 0x1ac36cu: goto label_1ac36c;
        case 0x1ac370u: goto label_1ac370;
        case 0x1ac374u: goto label_1ac374;
        case 0x1ac378u: goto label_1ac378;
        case 0x1ac37cu: goto label_1ac37c;
        case 0x1ac380u: goto label_1ac380;
        case 0x1ac384u: goto label_1ac384;
        case 0x1ac388u: goto label_1ac388;
        case 0x1ac38cu: goto label_1ac38c;
        case 0x1ac390u: goto label_1ac390;
        case 0x1ac394u: goto label_1ac394;
        case 0x1ac398u: goto label_1ac398;
        case 0x1ac39cu: goto label_1ac39c;
        case 0x1ac3a0u: goto label_1ac3a0;
        case 0x1ac3a4u: goto label_1ac3a4;
        case 0x1ac3a8u: goto label_1ac3a8;
        case 0x1ac3acu: goto label_1ac3ac;
        case 0x1ac3b0u: goto label_1ac3b0;
        case 0x1ac3b4u: goto label_1ac3b4;
        case 0x1ac3b8u: goto label_1ac3b8;
        case 0x1ac3bcu: goto label_1ac3bc;
        case 0x1ac3c0u: goto label_1ac3c0;
        case 0x1ac3c4u: goto label_1ac3c4;
        case 0x1ac3c8u: goto label_1ac3c8;
        case 0x1ac3ccu: goto label_1ac3cc;
        case 0x1ac3d0u: goto label_1ac3d0;
        case 0x1ac3d4u: goto label_1ac3d4;
        case 0x1ac3d8u: goto label_1ac3d8;
        case 0x1ac3dcu: goto label_1ac3dc;
        case 0x1ac3e0u: goto label_1ac3e0;
        case 0x1ac3e4u: goto label_1ac3e4;
        case 0x1ac3e8u: goto label_1ac3e8;
        case 0x1ac3ecu: goto label_1ac3ec;
        case 0x1ac3f0u: goto label_1ac3f0;
        case 0x1ac3f4u: goto label_1ac3f4;
        case 0x1ac3f8u: goto label_1ac3f8;
        case 0x1ac3fcu: goto label_1ac3fc;
        case 0x1ac400u: goto label_1ac400;
        case 0x1ac404u: goto label_1ac404;
        case 0x1ac408u: goto label_1ac408;
        case 0x1ac40cu: goto label_1ac40c;
        case 0x1ac410u: goto label_1ac410;
        case 0x1ac414u: goto label_1ac414;
        case 0x1ac418u: goto label_1ac418;
        case 0x1ac41cu: goto label_1ac41c;
        case 0x1ac420u: goto label_1ac420;
        case 0x1ac424u: goto label_1ac424;
        case 0x1ac428u: goto label_1ac428;
        case 0x1ac42cu: goto label_1ac42c;
        case 0x1ac430u: goto label_1ac430;
        case 0x1ac434u: goto label_1ac434;
        case 0x1ac438u: goto label_1ac438;
        case 0x1ac43cu: goto label_1ac43c;
        case 0x1ac440u: goto label_1ac440;
        case 0x1ac444u: goto label_1ac444;
        case 0x1ac448u: goto label_1ac448;
        case 0x1ac44cu: goto label_1ac44c;
        case 0x1ac450u: goto label_1ac450;
        case 0x1ac454u: goto label_1ac454;
        case 0x1ac458u: goto label_1ac458;
        case 0x1ac45cu: goto label_1ac45c;
        case 0x1ac460u: goto label_1ac460;
        case 0x1ac464u: goto label_1ac464;
        case 0x1ac468u: goto label_1ac468;
        case 0x1ac46cu: goto label_1ac46c;
        case 0x1ac470u: goto label_1ac470;
        case 0x1ac474u: goto label_1ac474;
        case 0x1ac478u: goto label_1ac478;
        case 0x1ac47cu: goto label_1ac47c;
        case 0x1ac480u: goto label_1ac480;
        case 0x1ac484u: goto label_1ac484;
        case 0x1ac488u: goto label_1ac488;
        case 0x1ac48cu: goto label_1ac48c;
        case 0x1ac490u: goto label_1ac490;
        case 0x1ac494u: goto label_1ac494;
        case 0x1ac498u: goto label_1ac498;
        case 0x1ac49cu: goto label_1ac49c;
        case 0x1ac4a0u: goto label_1ac4a0;
        case 0x1ac4a4u: goto label_1ac4a4;
        case 0x1ac4a8u: goto label_1ac4a8;
        case 0x1ac4acu: goto label_1ac4ac;
        case 0x1ac4b0u: goto label_1ac4b0;
        case 0x1ac4b4u: goto label_1ac4b4;
        case 0x1ac4b8u: goto label_1ac4b8;
        case 0x1ac4bcu: goto label_1ac4bc;
        case 0x1ac4c0u: goto label_1ac4c0;
        case 0x1ac4c4u: goto label_1ac4c4;
        case 0x1ac4c8u: goto label_1ac4c8;
        case 0x1ac4ccu: goto label_1ac4cc;
        case 0x1ac4d0u: goto label_1ac4d0;
        case 0x1ac4d4u: goto label_1ac4d4;
        case 0x1ac4d8u: goto label_1ac4d8;
        case 0x1ac4dcu: goto label_1ac4dc;
        case 0x1ac4e0u: goto label_1ac4e0;
        case 0x1ac4e4u: goto label_1ac4e4;
        case 0x1ac4e8u: goto label_1ac4e8;
        case 0x1ac4ecu: goto label_1ac4ec;
        case 0x1ac4f0u: goto label_1ac4f0;
        case 0x1ac4f4u: goto label_1ac4f4;
        case 0x1ac4f8u: goto label_1ac4f8;
        case 0x1ac4fcu: goto label_1ac4fc;
        case 0x1ac500u: goto label_1ac500;
        case 0x1ac504u: goto label_1ac504;
        case 0x1ac508u: goto label_1ac508;
        case 0x1ac50cu: goto label_1ac50c;
        case 0x1ac510u: goto label_1ac510;
        case 0x1ac514u: goto label_1ac514;
        case 0x1ac518u: goto label_1ac518;
        case 0x1ac51cu: goto label_1ac51c;
        case 0x1ac520u: goto label_1ac520;
        case 0x1ac524u: goto label_1ac524;
        case 0x1ac528u: goto label_1ac528;
        case 0x1ac52cu: goto label_1ac52c;
        case 0x1ac530u: goto label_1ac530;
        case 0x1ac534u: goto label_1ac534;
        case 0x1ac538u: goto label_1ac538;
        case 0x1ac53cu: goto label_1ac53c;
        case 0x1ac540u: goto label_1ac540;
        case 0x1ac544u: goto label_1ac544;
        case 0x1ac548u: goto label_1ac548;
        case 0x1ac54cu: goto label_1ac54c;
        case 0x1ac550u: goto label_1ac550;
        case 0x1ac554u: goto label_1ac554;
        case 0x1ac558u: goto label_1ac558;
        case 0x1ac55cu: goto label_1ac55c;
        case 0x1ac560u: goto label_1ac560;
        case 0x1ac564u: goto label_1ac564;
        case 0x1ac568u: goto label_1ac568;
        case 0x1ac56cu: goto label_1ac56c;
        case 0x1ac570u: goto label_1ac570;
        case 0x1ac574u: goto label_1ac574;
        case 0x1ac578u: goto label_1ac578;
        case 0x1ac57cu: goto label_1ac57c;
        case 0x1ac580u: goto label_1ac580;
        case 0x1ac584u: goto label_1ac584;
        case 0x1ac588u: goto label_1ac588;
        case 0x1ac58cu: goto label_1ac58c;
        case 0x1ac590u: goto label_1ac590;
        case 0x1ac594u: goto label_1ac594;
        case 0x1ac598u: goto label_1ac598;
        case 0x1ac59cu: goto label_1ac59c;
        case 0x1ac5a0u: goto label_1ac5a0;
        case 0x1ac5a4u: goto label_1ac5a4;
        case 0x1ac5a8u: goto label_1ac5a8;
        case 0x1ac5acu: goto label_1ac5ac;
        case 0x1ac5b0u: goto label_1ac5b0;
        case 0x1ac5b4u: goto label_1ac5b4;
        case 0x1ac5b8u: goto label_1ac5b8;
        case 0x1ac5bcu: goto label_1ac5bc;
        case 0x1ac5c0u: goto label_1ac5c0;
        case 0x1ac5c4u: goto label_1ac5c4;
        case 0x1ac5c8u: goto label_1ac5c8;
        case 0x1ac5ccu: goto label_1ac5cc;
        case 0x1ac5d0u: goto label_1ac5d0;
        case 0x1ac5d4u: goto label_1ac5d4;
        case 0x1ac5d8u: goto label_1ac5d8;
        case 0x1ac5dcu: goto label_1ac5dc;
        case 0x1ac5e0u: goto label_1ac5e0;
        case 0x1ac5e4u: goto label_1ac5e4;
        case 0x1ac5e8u: goto label_1ac5e8;
        case 0x1ac5ecu: goto label_1ac5ec;
        case 0x1ac5f0u: goto label_1ac5f0;
        case 0x1ac5f4u: goto label_1ac5f4;
        case 0x1ac5f8u: goto label_1ac5f8;
        case 0x1ac5fcu: goto label_1ac5fc;
        case 0x1ac600u: goto label_1ac600;
        case 0x1ac604u: goto label_1ac604;
        case 0x1ac608u: goto label_1ac608;
        case 0x1ac60cu: goto label_1ac60c;
        case 0x1ac610u: goto label_1ac610;
        case 0x1ac614u: goto label_1ac614;
        case 0x1ac618u: goto label_1ac618;
        case 0x1ac61cu: goto label_1ac61c;
        case 0x1ac620u: goto label_1ac620;
        case 0x1ac624u: goto label_1ac624;
        case 0x1ac628u: goto label_1ac628;
        case 0x1ac62cu: goto label_1ac62c;
        case 0x1ac630u: goto label_1ac630;
        case 0x1ac634u: goto label_1ac634;
        case 0x1ac638u: goto label_1ac638;
        case 0x1ac63cu: goto label_1ac63c;
        case 0x1ac640u: goto label_1ac640;
        case 0x1ac644u: goto label_1ac644;
        case 0x1ac648u: goto label_1ac648;
        case 0x1ac64cu: goto label_1ac64c;
        case 0x1ac650u: goto label_1ac650;
        case 0x1ac654u: goto label_1ac654;
        case 0x1ac658u: goto label_1ac658;
        case 0x1ac65cu: goto label_1ac65c;
        case 0x1ac660u: goto label_1ac660;
        case 0x1ac664u: goto label_1ac664;
        case 0x1ac668u: goto label_1ac668;
        case 0x1ac66cu: goto label_1ac66c;
        case 0x1ac670u: goto label_1ac670;
        case 0x1ac674u: goto label_1ac674;
        case 0x1ac678u: goto label_1ac678;
        case 0x1ac67cu: goto label_1ac67c;
        case 0x1ac680u: goto label_1ac680;
        case 0x1ac684u: goto label_1ac684;
        case 0x1ac688u: goto label_1ac688;
        case 0x1ac68cu: goto label_1ac68c;
        case 0x1ac690u: goto label_1ac690;
        case 0x1ac694u: goto label_1ac694;
        case 0x1ac698u: goto label_1ac698;
        case 0x1ac69cu: goto label_1ac69c;
        case 0x1ac6a0u: goto label_1ac6a0;
        case 0x1ac6a4u: goto label_1ac6a4;
        case 0x1ac6a8u: goto label_1ac6a8;
        case 0x1ac6acu: goto label_1ac6ac;
        case 0x1ac6b0u: goto label_1ac6b0;
        case 0x1ac6b4u: goto label_1ac6b4;
        case 0x1ac6b8u: goto label_1ac6b8;
        case 0x1ac6bcu: goto label_1ac6bc;
        case 0x1ac6c0u: goto label_1ac6c0;
        case 0x1ac6c4u: goto label_1ac6c4;
        case 0x1ac6c8u: goto label_1ac6c8;
        case 0x1ac6ccu: goto label_1ac6cc;
        case 0x1ac6d0u: goto label_1ac6d0;
        case 0x1ac6d4u: goto label_1ac6d4;
        case 0x1ac6d8u: goto label_1ac6d8;
        case 0x1ac6dcu: goto label_1ac6dc;
        case 0x1ac6e0u: goto label_1ac6e0;
        case 0x1ac6e4u: goto label_1ac6e4;
        case 0x1ac6e8u: goto label_1ac6e8;
        case 0x1ac6ecu: goto label_1ac6ec;
        case 0x1ac6f0u: goto label_1ac6f0;
        case 0x1ac6f4u: goto label_1ac6f4;
        case 0x1ac6f8u: goto label_1ac6f8;
        case 0x1ac6fcu: goto label_1ac6fc;
        case 0x1ac700u: goto label_1ac700;
        case 0x1ac704u: goto label_1ac704;
        case 0x1ac708u: goto label_1ac708;
        case 0x1ac70cu: goto label_1ac70c;
        case 0x1ac710u: goto label_1ac710;
        case 0x1ac714u: goto label_1ac714;
        case 0x1ac718u: goto label_1ac718;
        case 0x1ac71cu: goto label_1ac71c;
        case 0x1ac720u: goto label_1ac720;
        case 0x1ac724u: goto label_1ac724;
        case 0x1ac728u: goto label_1ac728;
        case 0x1ac72cu: goto label_1ac72c;
        case 0x1ac730u: goto label_1ac730;
        case 0x1ac734u: goto label_1ac734;
        case 0x1ac738u: goto label_1ac738;
        case 0x1ac73cu: goto label_1ac73c;
        case 0x1ac740u: goto label_1ac740;
        case 0x1ac744u: goto label_1ac744;
        case 0x1ac748u: goto label_1ac748;
        case 0x1ac74cu: goto label_1ac74c;
        case 0x1ac750u: goto label_1ac750;
        case 0x1ac754u: goto label_1ac754;
        case 0x1ac758u: goto label_1ac758;
        case 0x1ac75cu: goto label_1ac75c;
        case 0x1ac760u: goto label_1ac760;
        case 0x1ac764u: goto label_1ac764;
        case 0x1ac768u: goto label_1ac768;
        case 0x1ac76cu: goto label_1ac76c;
        case 0x1ac770u: goto label_1ac770;
        case 0x1ac774u: goto label_1ac774;
        case 0x1ac778u: goto label_1ac778;
        case 0x1ac77cu: goto label_1ac77c;
        case 0x1ac780u: goto label_1ac780;
        case 0x1ac784u: goto label_1ac784;
        case 0x1ac788u: goto label_1ac788;
        case 0x1ac78cu: goto label_1ac78c;
        case 0x1ac790u: goto label_1ac790;
        case 0x1ac794u: goto label_1ac794;
        case 0x1ac798u: goto label_1ac798;
        case 0x1ac79cu: goto label_1ac79c;
        case 0x1ac7a0u: goto label_1ac7a0;
        case 0x1ac7a4u: goto label_1ac7a4;
        case 0x1ac7a8u: goto label_1ac7a8;
        case 0x1ac7acu: goto label_1ac7ac;
        case 0x1ac7b0u: goto label_1ac7b0;
        case 0x1ac7b4u: goto label_1ac7b4;
        case 0x1ac7b8u: goto label_1ac7b8;
        case 0x1ac7bcu: goto label_1ac7bc;
        case 0x1ac7c0u: goto label_1ac7c0;
        case 0x1ac7c4u: goto label_1ac7c4;
        case 0x1ac7c8u: goto label_1ac7c8;
        case 0x1ac7ccu: goto label_1ac7cc;
        case 0x1ac7d0u: goto label_1ac7d0;
        case 0x1ac7d4u: goto label_1ac7d4;
        case 0x1ac7d8u: goto label_1ac7d8;
        case 0x1ac7dcu: goto label_1ac7dc;
        case 0x1ac7e0u: goto label_1ac7e0;
        case 0x1ac7e4u: goto label_1ac7e4;
        case 0x1ac7e8u: goto label_1ac7e8;
        case 0x1ac7ecu: goto label_1ac7ec;
        case 0x1ac7f0u: goto label_1ac7f0;
        case 0x1ac7f4u: goto label_1ac7f4;
        case 0x1ac7f8u: goto label_1ac7f8;
        case 0x1ac7fcu: goto label_1ac7fc;
        case 0x1ac800u: goto label_1ac800;
        case 0x1ac804u: goto label_1ac804;
        case 0x1ac808u: goto label_1ac808;
        case 0x1ac80cu: goto label_1ac80c;
        case 0x1ac810u: goto label_1ac810;
        case 0x1ac814u: goto label_1ac814;
        case 0x1ac818u: goto label_1ac818;
        case 0x1ac81cu: goto label_1ac81c;
        case 0x1ac820u: goto label_1ac820;
        case 0x1ac824u: goto label_1ac824;
        case 0x1ac828u: goto label_1ac828;
        case 0x1ac82cu: goto label_1ac82c;
        case 0x1ac830u: goto label_1ac830;
        case 0x1ac834u: goto label_1ac834;
        case 0x1ac838u: goto label_1ac838;
        case 0x1ac83cu: goto label_1ac83c;
        case 0x1ac840u: goto label_1ac840;
        case 0x1ac844u: goto label_1ac844;
        case 0x1ac848u: goto label_1ac848;
        case 0x1ac84cu: goto label_1ac84c;
        case 0x1ac850u: goto label_1ac850;
        case 0x1ac854u: goto label_1ac854;
        case 0x1ac858u: goto label_1ac858;
        case 0x1ac85cu: goto label_1ac85c;
        case 0x1ac860u: goto label_1ac860;
        case 0x1ac864u: goto label_1ac864;
        case 0x1ac868u: goto label_1ac868;
        case 0x1ac86cu: goto label_1ac86c;
        case 0x1ac870u: goto label_1ac870;
        case 0x1ac874u: goto label_1ac874;
        case 0x1ac878u: goto label_1ac878;
        case 0x1ac87cu: goto label_1ac87c;
        case 0x1ac880u: goto label_1ac880;
        case 0x1ac884u: goto label_1ac884;
        case 0x1ac888u: goto label_1ac888;
        case 0x1ac88cu: goto label_1ac88c;
        case 0x1ac890u: goto label_1ac890;
        case 0x1ac894u: goto label_1ac894;
        case 0x1ac898u: goto label_1ac898;
        case 0x1ac89cu: goto label_1ac89c;
        case 0x1ac8a0u: goto label_1ac8a0;
        case 0x1ac8a4u: goto label_1ac8a4;
        case 0x1ac8a8u: goto label_1ac8a8;
        case 0x1ac8acu: goto label_1ac8ac;
        case 0x1ac8b0u: goto label_1ac8b0;
        case 0x1ac8b4u: goto label_1ac8b4;
        case 0x1ac8b8u: goto label_1ac8b8;
        case 0x1ac8bcu: goto label_1ac8bc;
        case 0x1ac8c0u: goto label_1ac8c0;
        case 0x1ac8c4u: goto label_1ac8c4;
        case 0x1ac8c8u: goto label_1ac8c8;
        case 0x1ac8ccu: goto label_1ac8cc;
        case 0x1ac8d0u: goto label_1ac8d0;
        case 0x1ac8d4u: goto label_1ac8d4;
        case 0x1ac8d8u: goto label_1ac8d8;
        case 0x1ac8dcu: goto label_1ac8dc;
        case 0x1ac8e0u: goto label_1ac8e0;
        case 0x1ac8e4u: goto label_1ac8e4;
        case 0x1ac8e8u: goto label_1ac8e8;
        case 0x1ac8ecu: goto label_1ac8ec;
        case 0x1ac8f0u: goto label_1ac8f0;
        case 0x1ac8f4u: goto label_1ac8f4;
        case 0x1ac8f8u: goto label_1ac8f8;
        case 0x1ac8fcu: goto label_1ac8fc;
        case 0x1ac900u: goto label_1ac900;
        case 0x1ac904u: goto label_1ac904;
        case 0x1ac908u: goto label_1ac908;
        case 0x1ac90cu: goto label_1ac90c;
        case 0x1ac910u: goto label_1ac910;
        case 0x1ac914u: goto label_1ac914;
        case 0x1ac918u: goto label_1ac918;
        case 0x1ac91cu: goto label_1ac91c;
        case 0x1ac920u: goto label_1ac920;
        case 0x1ac924u: goto label_1ac924;
        case 0x1ac928u: goto label_1ac928;
        case 0x1ac92cu: goto label_1ac92c;
        case 0x1ac930u: goto label_1ac930;
        case 0x1ac934u: goto label_1ac934;
        case 0x1ac938u: goto label_1ac938;
        case 0x1ac93cu: goto label_1ac93c;
        case 0x1ac940u: goto label_1ac940;
        case 0x1ac944u: goto label_1ac944;
        case 0x1ac948u: goto label_1ac948;
        case 0x1ac94cu: goto label_1ac94c;
        case 0x1ac950u: goto label_1ac950;
        case 0x1ac954u: goto label_1ac954;
        case 0x1ac958u: goto label_1ac958;
        case 0x1ac95cu: goto label_1ac95c;
        case 0x1ac960u: goto label_1ac960;
        case 0x1ac964u: goto label_1ac964;
        case 0x1ac968u: goto label_1ac968;
        case 0x1ac96cu: goto label_1ac96c;
        case 0x1ac970u: goto label_1ac970;
        case 0x1ac974u: goto label_1ac974;
        case 0x1ac978u: goto label_1ac978;
        case 0x1ac97cu: goto label_1ac97c;
        case 0x1ac980u: goto label_1ac980;
        case 0x1ac984u: goto label_1ac984;
        case 0x1ac988u: goto label_1ac988;
        case 0x1ac98cu: goto label_1ac98c;
        case 0x1ac990u: goto label_1ac990;
        case 0x1ac994u: goto label_1ac994;
        case 0x1ac998u: goto label_1ac998;
        case 0x1ac99cu: goto label_1ac99c;
        case 0x1ac9a0u: goto label_1ac9a0;
        case 0x1ac9a4u: goto label_1ac9a4;
        case 0x1ac9a8u: goto label_1ac9a8;
        case 0x1ac9acu: goto label_1ac9ac;
        case 0x1ac9b0u: goto label_1ac9b0;
        case 0x1ac9b4u: goto label_1ac9b4;
        case 0x1ac9b8u: goto label_1ac9b8;
        case 0x1ac9bcu: goto label_1ac9bc;
        case 0x1ac9c0u: goto label_1ac9c0;
        case 0x1ac9c4u: goto label_1ac9c4;
        case 0x1ac9c8u: goto label_1ac9c8;
        case 0x1ac9ccu: goto label_1ac9cc;
        case 0x1ac9d0u: goto label_1ac9d0;
        case 0x1ac9d4u: goto label_1ac9d4;
        case 0x1ac9d8u: goto label_1ac9d8;
        case 0x1ac9dcu: goto label_1ac9dc;
        case 0x1ac9e0u: goto label_1ac9e0;
        case 0x1ac9e4u: goto label_1ac9e4;
        case 0x1ac9e8u: goto label_1ac9e8;
        case 0x1ac9ecu: goto label_1ac9ec;
        case 0x1ac9f0u: goto label_1ac9f0;
        case 0x1ac9f4u: goto label_1ac9f4;
        case 0x1ac9f8u: goto label_1ac9f8;
        case 0x1ac9fcu: goto label_1ac9fc;
        case 0x1aca00u: goto label_1aca00;
        case 0x1aca04u: goto label_1aca04;
        case 0x1aca08u: goto label_1aca08;
        case 0x1aca0cu: goto label_1aca0c;
        case 0x1aca10u: goto label_1aca10;
        case 0x1aca14u: goto label_1aca14;
        case 0x1aca18u: goto label_1aca18;
        case 0x1aca1cu: goto label_1aca1c;
        case 0x1aca20u: goto label_1aca20;
        case 0x1aca24u: goto label_1aca24;
        case 0x1aca28u: goto label_1aca28;
        case 0x1aca2cu: goto label_1aca2c;
        case 0x1aca30u: goto label_1aca30;
        case 0x1aca34u: goto label_1aca34;
        case 0x1aca38u: goto label_1aca38;
        case 0x1aca3cu: goto label_1aca3c;
        case 0x1aca40u: goto label_1aca40;
        case 0x1aca44u: goto label_1aca44;
        case 0x1aca48u: goto label_1aca48;
        case 0x1aca4cu: goto label_1aca4c;
        case 0x1aca50u: goto label_1aca50;
        case 0x1aca54u: goto label_1aca54;
        case 0x1aca58u: goto label_1aca58;
        case 0x1aca5cu: goto label_1aca5c;
        case 0x1aca60u: goto label_1aca60;
        case 0x1aca64u: goto label_1aca64;
        case 0x1aca68u: goto label_1aca68;
        case 0x1aca6cu: goto label_1aca6c;
        case 0x1aca70u: goto label_1aca70;
        case 0x1aca74u: goto label_1aca74;
        case 0x1aca78u: goto label_1aca78;
        case 0x1aca7cu: goto label_1aca7c;
        case 0x1aca80u: goto label_1aca80;
        case 0x1aca84u: goto label_1aca84;
        case 0x1aca88u: goto label_1aca88;
        case 0x1aca8cu: goto label_1aca8c;
        case 0x1aca90u: goto label_1aca90;
        case 0x1aca94u: goto label_1aca94;
        case 0x1aca98u: goto label_1aca98;
        case 0x1aca9cu: goto label_1aca9c;
        case 0x1acaa0u: goto label_1acaa0;
        case 0x1acaa4u: goto label_1acaa4;
        case 0x1acaa8u: goto label_1acaa8;
        case 0x1acaacu: goto label_1acaac;
        case 0x1acab0u: goto label_1acab0;
        case 0x1acab4u: goto label_1acab4;
        case 0x1acab8u: goto label_1acab8;
        case 0x1acabcu: goto label_1acabc;
        case 0x1acac0u: goto label_1acac0;
        case 0x1acac4u: goto label_1acac4;
        case 0x1acac8u: goto label_1acac8;
        case 0x1acaccu: goto label_1acacc;
        case 0x1acad0u: goto label_1acad0;
        case 0x1acad4u: goto label_1acad4;
        case 0x1acad8u: goto label_1acad8;
        case 0x1acadcu: goto label_1acadc;
        case 0x1acae0u: goto label_1acae0;
        case 0x1acae4u: goto label_1acae4;
        case 0x1acae8u: goto label_1acae8;
        case 0x1acaecu: goto label_1acaec;
        case 0x1acaf0u: goto label_1acaf0;
        case 0x1acaf4u: goto label_1acaf4;
        case 0x1acaf8u: goto label_1acaf8;
        case 0x1acafcu: goto label_1acafc;
        case 0x1acb00u: goto label_1acb00;
        case 0x1acb04u: goto label_1acb04;
        case 0x1acb08u: goto label_1acb08;
        case 0x1acb0cu: goto label_1acb0c;
        case 0x1acb10u: goto label_1acb10;
        case 0x1acb14u: goto label_1acb14;
        case 0x1acb18u: goto label_1acb18;
        case 0x1acb1cu: goto label_1acb1c;
        case 0x1acb20u: goto label_1acb20;
        case 0x1acb24u: goto label_1acb24;
        case 0x1acb28u: goto label_1acb28;
        case 0x1acb2cu: goto label_1acb2c;
        case 0x1acb30u: goto label_1acb30;
        case 0x1acb34u: goto label_1acb34;
        case 0x1acb38u: goto label_1acb38;
        case 0x1acb3cu: goto label_1acb3c;
        case 0x1acb40u: goto label_1acb40;
        case 0x1acb44u: goto label_1acb44;
        case 0x1acb48u: goto label_1acb48;
        case 0x1acb4cu: goto label_1acb4c;
        case 0x1acb50u: goto label_1acb50;
        case 0x1acb54u: goto label_1acb54;
        case 0x1acb58u: goto label_1acb58;
        case 0x1acb5cu: goto label_1acb5c;
        case 0x1acb60u: goto label_1acb60;
        case 0x1acb64u: goto label_1acb64;
        case 0x1acb68u: goto label_1acb68;
        case 0x1acb6cu: goto label_1acb6c;
        case 0x1acb70u: goto label_1acb70;
        case 0x1acb74u: goto label_1acb74;
        case 0x1acb78u: goto label_1acb78;
        case 0x1acb7cu: goto label_1acb7c;
        case 0x1acb80u: goto label_1acb80;
        case 0x1acb84u: goto label_1acb84;
        case 0x1acb88u: goto label_1acb88;
        case 0x1acb8cu: goto label_1acb8c;
        case 0x1acb90u: goto label_1acb90;
        case 0x1acb94u: goto label_1acb94;
        case 0x1acb98u: goto label_1acb98;
        case 0x1acb9cu: goto label_1acb9c;
        case 0x1acba0u: goto label_1acba0;
        case 0x1acba4u: goto label_1acba4;
        case 0x1acba8u: goto label_1acba8;
        case 0x1acbacu: goto label_1acbac;
        case 0x1acbb0u: goto label_1acbb0;
        case 0x1acbb4u: goto label_1acbb4;
        case 0x1acbb8u: goto label_1acbb8;
        case 0x1acbbcu: goto label_1acbbc;
        case 0x1acbc0u: goto label_1acbc0;
        case 0x1acbc4u: goto label_1acbc4;
        case 0x1acbc8u: goto label_1acbc8;
        case 0x1acbccu: goto label_1acbcc;
        case 0x1acbd0u: goto label_1acbd0;
        case 0x1acbd4u: goto label_1acbd4;
        case 0x1acbd8u: goto label_1acbd8;
        case 0x1acbdcu: goto label_1acbdc;
        case 0x1acbe0u: goto label_1acbe0;
        case 0x1acbe4u: goto label_1acbe4;
        case 0x1acbe8u: goto label_1acbe8;
        case 0x1acbecu: goto label_1acbec;
        case 0x1acbf0u: goto label_1acbf0;
        case 0x1acbf4u: goto label_1acbf4;
        case 0x1acbf8u: goto label_1acbf8;
        case 0x1acbfcu: goto label_1acbfc;
        case 0x1acc00u: goto label_1acc00;
        case 0x1acc04u: goto label_1acc04;
        case 0x1acc08u: goto label_1acc08;
        case 0x1acc0cu: goto label_1acc0c;
        case 0x1acc10u: goto label_1acc10;
        case 0x1acc14u: goto label_1acc14;
        case 0x1acc18u: goto label_1acc18;
        case 0x1acc1cu: goto label_1acc1c;
        case 0x1acc20u: goto label_1acc20;
        case 0x1acc24u: goto label_1acc24;
        case 0x1acc28u: goto label_1acc28;
        case 0x1acc2cu: goto label_1acc2c;
        case 0x1acc30u: goto label_1acc30;
        case 0x1acc34u: goto label_1acc34;
        case 0x1acc38u: goto label_1acc38;
        case 0x1acc3cu: goto label_1acc3c;
        case 0x1acc40u: goto label_1acc40;
        case 0x1acc44u: goto label_1acc44;
        case 0x1acc48u: goto label_1acc48;
        case 0x1acc4cu: goto label_1acc4c;
        case 0x1acc50u: goto label_1acc50;
        case 0x1acc54u: goto label_1acc54;
        case 0x1acc58u: goto label_1acc58;
        case 0x1acc5cu: goto label_1acc5c;
        case 0x1acc60u: goto label_1acc60;
        case 0x1acc64u: goto label_1acc64;
        case 0x1acc68u: goto label_1acc68;
        case 0x1acc6cu: goto label_1acc6c;
        case 0x1acc70u: goto label_1acc70;
        case 0x1acc74u: goto label_1acc74;
        case 0x1acc78u: goto label_1acc78;
        case 0x1acc7cu: goto label_1acc7c;
        case 0x1acc80u: goto label_1acc80;
        case 0x1acc84u: goto label_1acc84;
        case 0x1acc88u: goto label_1acc88;
        case 0x1acc8cu: goto label_1acc8c;
        case 0x1acc90u: goto label_1acc90;
        case 0x1acc94u: goto label_1acc94;
        case 0x1acc98u: goto label_1acc98;
        case 0x1acc9cu: goto label_1acc9c;
        case 0x1acca0u: goto label_1acca0;
        case 0x1acca4u: goto label_1acca4;
        case 0x1acca8u: goto label_1acca8;
        case 0x1accacu: goto label_1accac;
        case 0x1accb0u: goto label_1accb0;
        case 0x1accb4u: goto label_1accb4;
        case 0x1accb8u: goto label_1accb8;
        case 0x1accbcu: goto label_1accbc;
        case 0x1accc0u: goto label_1accc0;
        case 0x1accc4u: goto label_1accc4;
        case 0x1accc8u: goto label_1accc8;
        case 0x1accccu: goto label_1acccc;
        case 0x1accd0u: goto label_1accd0;
        case 0x1accd4u: goto label_1accd4;
        case 0x1accd8u: goto label_1accd8;
        case 0x1accdcu: goto label_1accdc;
        case 0x1acce0u: goto label_1acce0;
        case 0x1acce4u: goto label_1acce4;
        case 0x1acce8u: goto label_1acce8;
        case 0x1accecu: goto label_1accec;
        case 0x1accf0u: goto label_1accf0;
        case 0x1accf4u: goto label_1accf4;
        case 0x1accf8u: goto label_1accf8;
        case 0x1accfcu: goto label_1accfc;
        case 0x1acd00u: goto label_1acd00;
        case 0x1acd04u: goto label_1acd04;
        case 0x1acd08u: goto label_1acd08;
        case 0x1acd0cu: goto label_1acd0c;
        case 0x1acd10u: goto label_1acd10;
        case 0x1acd14u: goto label_1acd14;
        case 0x1acd18u: goto label_1acd18;
        case 0x1acd1cu: goto label_1acd1c;
        case 0x1acd20u: goto label_1acd20;
        case 0x1acd24u: goto label_1acd24;
        case 0x1acd28u: goto label_1acd28;
        case 0x1acd2cu: goto label_1acd2c;
        case 0x1acd30u: goto label_1acd30;
        case 0x1acd34u: goto label_1acd34;
        case 0x1acd38u: goto label_1acd38;
        case 0x1acd3cu: goto label_1acd3c;
        case 0x1acd40u: goto label_1acd40;
        case 0x1acd44u: goto label_1acd44;
        case 0x1acd48u: goto label_1acd48;
        case 0x1acd4cu: goto label_1acd4c;
        case 0x1acd50u: goto label_1acd50;
        case 0x1acd54u: goto label_1acd54;
        case 0x1acd58u: goto label_1acd58;
        case 0x1acd5cu: goto label_1acd5c;
        case 0x1acd60u: goto label_1acd60;
        case 0x1acd64u: goto label_1acd64;
        case 0x1acd68u: goto label_1acd68;
        case 0x1acd6cu: goto label_1acd6c;
        case 0x1acd70u: goto label_1acd70;
        case 0x1acd74u: goto label_1acd74;
        case 0x1acd78u: goto label_1acd78;
        case 0x1acd7cu: goto label_1acd7c;
        case 0x1acd80u: goto label_1acd80;
        case 0x1acd84u: goto label_1acd84;
        case 0x1acd88u: goto label_1acd88;
        case 0x1acd8cu: goto label_1acd8c;
        case 0x1acd90u: goto label_1acd90;
        case 0x1acd94u: goto label_1acd94;
        case 0x1acd98u: goto label_1acd98;
        case 0x1acd9cu: goto label_1acd9c;
        case 0x1acda0u: goto label_1acda0;
        case 0x1acda4u: goto label_1acda4;
        case 0x1acda8u: goto label_1acda8;
        case 0x1acdacu: goto label_1acdac;
        case 0x1acdb0u: goto label_1acdb0;
        case 0x1acdb4u: goto label_1acdb4;
        case 0x1acdb8u: goto label_1acdb8;
        case 0x1acdbcu: goto label_1acdbc;
        case 0x1acdc0u: goto label_1acdc0;
        case 0x1acdc4u: goto label_1acdc4;
        case 0x1acdc8u: goto label_1acdc8;
        case 0x1acdccu: goto label_1acdcc;
        case 0x1acdd0u: goto label_1acdd0;
        case 0x1acdd4u: goto label_1acdd4;
        case 0x1acdd8u: goto label_1acdd8;
        case 0x1acddcu: goto label_1acddc;
        case 0x1acde0u: goto label_1acde0;
        case 0x1acde4u: goto label_1acde4;
        case 0x1acde8u: goto label_1acde8;
        case 0x1acdecu: goto label_1acdec;
        case 0x1acdf0u: goto label_1acdf0;
        case 0x1acdf4u: goto label_1acdf4;
        case 0x1acdf8u: goto label_1acdf8;
        case 0x1acdfcu: goto label_1acdfc;
        case 0x1ace00u: goto label_1ace00;
        case 0x1ace04u: goto label_1ace04;
        case 0x1ace08u: goto label_1ace08;
        case 0x1ace0cu: goto label_1ace0c;
        case 0x1ace10u: goto label_1ace10;
        case 0x1ace14u: goto label_1ace14;
        case 0x1ace18u: goto label_1ace18;
        case 0x1ace1cu: goto label_1ace1c;
        case 0x1ace20u: goto label_1ace20;
        case 0x1ace24u: goto label_1ace24;
        case 0x1ace28u: goto label_1ace28;
        case 0x1ace2cu: goto label_1ace2c;
        case 0x1ace30u: goto label_1ace30;
        case 0x1ace34u: goto label_1ace34;
        case 0x1ace38u: goto label_1ace38;
        case 0x1ace3cu: goto label_1ace3c;
        case 0x1ace40u: goto label_1ace40;
        case 0x1ace44u: goto label_1ace44;
        case 0x1ace48u: goto label_1ace48;
        case 0x1ace4cu: goto label_1ace4c;
        case 0x1ace50u: goto label_1ace50;
        case 0x1ace54u: goto label_1ace54;
        case 0x1ace58u: goto label_1ace58;
        case 0x1ace5cu: goto label_1ace5c;
        case 0x1ace60u: goto label_1ace60;
        case 0x1ace64u: goto label_1ace64;
        case 0x1ace68u: goto label_1ace68;
        case 0x1ace6cu: goto label_1ace6c;
        case 0x1ace70u: goto label_1ace70;
        case 0x1ace74u: goto label_1ace74;
        case 0x1ace78u: goto label_1ace78;
        case 0x1ace7cu: goto label_1ace7c;
        case 0x1ace80u: goto label_1ace80;
        case 0x1ace84u: goto label_1ace84;
        case 0x1ace88u: goto label_1ace88;
        case 0x1ace8cu: goto label_1ace8c;
        case 0x1ace90u: goto label_1ace90;
        case 0x1ace94u: goto label_1ace94;
        case 0x1ace98u: goto label_1ace98;
        case 0x1ace9cu: goto label_1ace9c;
        case 0x1acea0u: goto label_1acea0;
        case 0x1acea4u: goto label_1acea4;
        case 0x1acea8u: goto label_1acea8;
        case 0x1aceacu: goto label_1aceac;
        case 0x1aceb0u: goto label_1aceb0;
        case 0x1aceb4u: goto label_1aceb4;
        case 0x1aceb8u: goto label_1aceb8;
        case 0x1acebcu: goto label_1acebc;
        case 0x1acec0u: goto label_1acec0;
        case 0x1acec4u: goto label_1acec4;
        case 0x1acec8u: goto label_1acec8;
        case 0x1aceccu: goto label_1acecc;
        case 0x1aced0u: goto label_1aced0;
        case 0x1aced4u: goto label_1aced4;
        case 0x1aced8u: goto label_1aced8;
        case 0x1acedcu: goto label_1acedc;
        case 0x1acee0u: goto label_1acee0;
        case 0x1acee4u: goto label_1acee4;
        case 0x1acee8u: goto label_1acee8;
        case 0x1aceecu: goto label_1aceec;
        case 0x1acef0u: goto label_1acef0;
        case 0x1acef4u: goto label_1acef4;
        case 0x1acef8u: goto label_1acef8;
        case 0x1acefcu: goto label_1acefc;
        case 0x1acf00u: goto label_1acf00;
        case 0x1acf04u: goto label_1acf04;
        case 0x1acf08u: goto label_1acf08;
        case 0x1acf0cu: goto label_1acf0c;
        case 0x1acf10u: goto label_1acf10;
        case 0x1acf14u: goto label_1acf14;
        case 0x1acf18u: goto label_1acf18;
        case 0x1acf1cu: goto label_1acf1c;
        case 0x1acf20u: goto label_1acf20;
        case 0x1acf24u: goto label_1acf24;
        case 0x1acf28u: goto label_1acf28;
        case 0x1acf2cu: goto label_1acf2c;
        case 0x1acf30u: goto label_1acf30;
        case 0x1acf34u: goto label_1acf34;
        case 0x1acf38u: goto label_1acf38;
        case 0x1acf3cu: goto label_1acf3c;
        case 0x1acf40u: goto label_1acf40;
        case 0x1acf44u: goto label_1acf44;
        case 0x1acf48u: goto label_1acf48;
        case 0x1acf4cu: goto label_1acf4c;
        case 0x1acf50u: goto label_1acf50;
        case 0x1acf54u: goto label_1acf54;
        case 0x1acf58u: goto label_1acf58;
        case 0x1acf5cu: goto label_1acf5c;
        case 0x1acf60u: goto label_1acf60;
        case 0x1acf64u: goto label_1acf64;
        case 0x1acf68u: goto label_1acf68;
        case 0x1acf6cu: goto label_1acf6c;
        case 0x1acf70u: goto label_1acf70;
        case 0x1acf74u: goto label_1acf74;
        case 0x1acf78u: goto label_1acf78;
        case 0x1acf7cu: goto label_1acf7c;
        case 0x1acf80u: goto label_1acf80;
        case 0x1acf84u: goto label_1acf84;
        case 0x1acf88u: goto label_1acf88;
        case 0x1acf8cu: goto label_1acf8c;
        case 0x1acf90u: goto label_1acf90;
        case 0x1acf94u: goto label_1acf94;
        case 0x1acf98u: goto label_1acf98;
        case 0x1acf9cu: goto label_1acf9c;
        case 0x1acfa0u: goto label_1acfa0;
        case 0x1acfa4u: goto label_1acfa4;
        case 0x1acfa8u: goto label_1acfa8;
        case 0x1acfacu: goto label_1acfac;
        case 0x1acfb0u: goto label_1acfb0;
        case 0x1acfb4u: goto label_1acfb4;
        case 0x1acfb8u: goto label_1acfb8;
        case 0x1acfbcu: goto label_1acfbc;
        case 0x1acfc0u: goto label_1acfc0;
        case 0x1acfc4u: goto label_1acfc4;
        case 0x1acfc8u: goto label_1acfc8;
        case 0x1acfccu: goto label_1acfcc;
        case 0x1acfd0u: goto label_1acfd0;
        case 0x1acfd4u: goto label_1acfd4;
        case 0x1acfd8u: goto label_1acfd8;
        case 0x1acfdcu: goto label_1acfdc;
        case 0x1acfe0u: goto label_1acfe0;
        case 0x1acfe4u: goto label_1acfe4;
        case 0x1acfe8u: goto label_1acfe8;
        case 0x1acfecu: goto label_1acfec;
        case 0x1acff0u: goto label_1acff0;
        case 0x1acff4u: goto label_1acff4;
        case 0x1acff8u: goto label_1acff8;
        case 0x1acffcu: goto label_1acffc;
        case 0x1ad000u: goto label_1ad000;
        case 0x1ad004u: goto label_1ad004;
        case 0x1ad008u: goto label_1ad008;
        case 0x1ad00cu: goto label_1ad00c;
        case 0x1ad010u: goto label_1ad010;
        case 0x1ad014u: goto label_1ad014;
        case 0x1ad018u: goto label_1ad018;
        case 0x1ad01cu: goto label_1ad01c;
        case 0x1ad020u: goto label_1ad020;
        case 0x1ad024u: goto label_1ad024;
        case 0x1ad028u: goto label_1ad028;
        case 0x1ad02cu: goto label_1ad02c;
        case 0x1ad030u: goto label_1ad030;
        case 0x1ad034u: goto label_1ad034;
        case 0x1ad038u: goto label_1ad038;
        case 0x1ad03cu: goto label_1ad03c;
        case 0x1ad040u: goto label_1ad040;
        case 0x1ad044u: goto label_1ad044;
        case 0x1ad048u: goto label_1ad048;
        case 0x1ad04cu: goto label_1ad04c;
        case 0x1ad050u: goto label_1ad050;
        case 0x1ad054u: goto label_1ad054;
        case 0x1ad058u: goto label_1ad058;
        case 0x1ad05cu: goto label_1ad05c;
        case 0x1ad060u: goto label_1ad060;
        case 0x1ad064u: goto label_1ad064;
        case 0x1ad068u: goto label_1ad068;
        case 0x1ad06cu: goto label_1ad06c;
        case 0x1ad070u: goto label_1ad070;
        case 0x1ad074u: goto label_1ad074;
        case 0x1ad078u: goto label_1ad078;
        case 0x1ad07cu: goto label_1ad07c;
        case 0x1ad080u: goto label_1ad080;
        case 0x1ad084u: goto label_1ad084;
        case 0x1ad088u: goto label_1ad088;
        case 0x1ad08cu: goto label_1ad08c;
        case 0x1ad090u: goto label_1ad090;
        case 0x1ad094u: goto label_1ad094;
        case 0x1ad098u: goto label_1ad098;
        case 0x1ad09cu: goto label_1ad09c;
        case 0x1ad0a0u: goto label_1ad0a0;
        case 0x1ad0a4u: goto label_1ad0a4;
        case 0x1ad0a8u: goto label_1ad0a8;
        case 0x1ad0acu: goto label_1ad0ac;
        case 0x1ad0b0u: goto label_1ad0b0;
        case 0x1ad0b4u: goto label_1ad0b4;
        case 0x1ad0b8u: goto label_1ad0b8;
        case 0x1ad0bcu: goto label_1ad0bc;
        case 0x1ad0c0u: goto label_1ad0c0;
        case 0x1ad0c4u: goto label_1ad0c4;
        case 0x1ad0c8u: goto label_1ad0c8;
        case 0x1ad0ccu: goto label_1ad0cc;
        case 0x1ad0d0u: goto label_1ad0d0;
        case 0x1ad0d4u: goto label_1ad0d4;
        case 0x1ad0d8u: goto label_1ad0d8;
        case 0x1ad0dcu: goto label_1ad0dc;
        case 0x1ad0e0u: goto label_1ad0e0;
        case 0x1ad0e4u: goto label_1ad0e4;
        case 0x1ad0e8u: goto label_1ad0e8;
        case 0x1ad0ecu: goto label_1ad0ec;
        case 0x1ad0f0u: goto label_1ad0f0;
        case 0x1ad0f4u: goto label_1ad0f4;
        case 0x1ad0f8u: goto label_1ad0f8;
        case 0x1ad0fcu: goto label_1ad0fc;
        case 0x1ad100u: goto label_1ad100;
        case 0x1ad104u: goto label_1ad104;
        case 0x1ad108u: goto label_1ad108;
        case 0x1ad10cu: goto label_1ad10c;
        case 0x1ad110u: goto label_1ad110;
        case 0x1ad114u: goto label_1ad114;
        case 0x1ad118u: goto label_1ad118;
        case 0x1ad11cu: goto label_1ad11c;
        case 0x1ad120u: goto label_1ad120;
        case 0x1ad124u: goto label_1ad124;
        case 0x1ad128u: goto label_1ad128;
        case 0x1ad12cu: goto label_1ad12c;
        case 0x1ad130u: goto label_1ad130;
        case 0x1ad134u: goto label_1ad134;
        case 0x1ad138u: goto label_1ad138;
        case 0x1ad13cu: goto label_1ad13c;
        case 0x1ad140u: goto label_1ad140;
        case 0x1ad144u: goto label_1ad144;
        case 0x1ad148u: goto label_1ad148;
        case 0x1ad14cu: goto label_1ad14c;
        case 0x1ad150u: goto label_1ad150;
        case 0x1ad154u: goto label_1ad154;
        case 0x1ad158u: goto label_1ad158;
        case 0x1ad15cu: goto label_1ad15c;
        case 0x1ad160u: goto label_1ad160;
        case 0x1ad164u: goto label_1ad164;
        case 0x1ad168u: goto label_1ad168;
        case 0x1ad16cu: goto label_1ad16c;
        case 0x1ad170u: goto label_1ad170;
        case 0x1ad174u: goto label_1ad174;
        case 0x1ad178u: goto label_1ad178;
        case 0x1ad17cu: goto label_1ad17c;
        case 0x1ad180u: goto label_1ad180;
        case 0x1ad184u: goto label_1ad184;
        case 0x1ad188u: goto label_1ad188;
        case 0x1ad18cu: goto label_1ad18c;
        case 0x1ad190u: goto label_1ad190;
        case 0x1ad194u: goto label_1ad194;
        case 0x1ad198u: goto label_1ad198;
        case 0x1ad19cu: goto label_1ad19c;
        case 0x1ad1a0u: goto label_1ad1a0;
        case 0x1ad1a4u: goto label_1ad1a4;
        case 0x1ad1a8u: goto label_1ad1a8;
        case 0x1ad1acu: goto label_1ad1ac;
        case 0x1ad1b0u: goto label_1ad1b0;
        case 0x1ad1b4u: goto label_1ad1b4;
        case 0x1ad1b8u: goto label_1ad1b8;
        case 0x1ad1bcu: goto label_1ad1bc;
        case 0x1ad1c0u: goto label_1ad1c0;
        case 0x1ad1c4u: goto label_1ad1c4;
        case 0x1ad1c8u: goto label_1ad1c8;
        case 0x1ad1ccu: goto label_1ad1cc;
        case 0x1ad1d0u: goto label_1ad1d0;
        case 0x1ad1d4u: goto label_1ad1d4;
        case 0x1ad1d8u: goto label_1ad1d8;
        case 0x1ad1dcu: goto label_1ad1dc;
        case 0x1ad1e0u: goto label_1ad1e0;
        case 0x1ad1e4u: goto label_1ad1e4;
        case 0x1ad1e8u: goto label_1ad1e8;
        case 0x1ad1ecu: goto label_1ad1ec;
        case 0x1ad1f0u: goto label_1ad1f0;
        case 0x1ad1f4u: goto label_1ad1f4;
        case 0x1ad1f8u: goto label_1ad1f8;
        case 0x1ad1fcu: goto label_1ad1fc;
        case 0x1ad200u: goto label_1ad200;
        case 0x1ad204u: goto label_1ad204;
        case 0x1ad208u: goto label_1ad208;
        case 0x1ad20cu: goto label_1ad20c;
        case 0x1ad210u: goto label_1ad210;
        case 0x1ad214u: goto label_1ad214;
        case 0x1ad218u: goto label_1ad218;
        case 0x1ad21cu: goto label_1ad21c;
        case 0x1ad220u: goto label_1ad220;
        case 0x1ad224u: goto label_1ad224;
        case 0x1ad228u: goto label_1ad228;
        case 0x1ad22cu: goto label_1ad22c;
        case 0x1ad230u: goto label_1ad230;
        case 0x1ad234u: goto label_1ad234;
        case 0x1ad238u: goto label_1ad238;
        case 0x1ad23cu: goto label_1ad23c;
        case 0x1ad240u: goto label_1ad240;
        case 0x1ad244u: goto label_1ad244;
        case 0x1ad248u: goto label_1ad248;
        case 0x1ad24cu: goto label_1ad24c;
        case 0x1ad250u: goto label_1ad250;
        case 0x1ad254u: goto label_1ad254;
        case 0x1ad258u: goto label_1ad258;
        case 0x1ad25cu: goto label_1ad25c;
        case 0x1ad260u: goto label_1ad260;
        case 0x1ad264u: goto label_1ad264;
        case 0x1ad268u: goto label_1ad268;
        case 0x1ad26cu: goto label_1ad26c;
        case 0x1ad270u: goto label_1ad270;
        case 0x1ad274u: goto label_1ad274;
        case 0x1ad278u: goto label_1ad278;
        case 0x1ad27cu: goto label_1ad27c;
        case 0x1ad280u: goto label_1ad280;
        case 0x1ad284u: goto label_1ad284;
        case 0x1ad288u: goto label_1ad288;
        case 0x1ad28cu: goto label_1ad28c;
        case 0x1ad290u: goto label_1ad290;
        case 0x1ad294u: goto label_1ad294;
        case 0x1ad298u: goto label_1ad298;
        case 0x1ad29cu: goto label_1ad29c;
        case 0x1ad2a0u: goto label_1ad2a0;
        case 0x1ad2a4u: goto label_1ad2a4;
        case 0x1ad2a8u: goto label_1ad2a8;
        case 0x1ad2acu: goto label_1ad2ac;
        case 0x1ad2b0u: goto label_1ad2b0;
        case 0x1ad2b4u: goto label_1ad2b4;
        case 0x1ad2b8u: goto label_1ad2b8;
        case 0x1ad2bcu: goto label_1ad2bc;
        case 0x1ad2c0u: goto label_1ad2c0;
        case 0x1ad2c4u: goto label_1ad2c4;
        case 0x1ad2c8u: goto label_1ad2c8;
        case 0x1ad2ccu: goto label_1ad2cc;
        case 0x1ad2d0u: goto label_1ad2d0;
        case 0x1ad2d4u: goto label_1ad2d4;
        case 0x1ad2d8u: goto label_1ad2d8;
        case 0x1ad2dcu: goto label_1ad2dc;
        case 0x1ad2e0u: goto label_1ad2e0;
        case 0x1ad2e4u: goto label_1ad2e4;
        case 0x1ad2e8u: goto label_1ad2e8;
        case 0x1ad2ecu: goto label_1ad2ec;
        case 0x1ad2f0u: goto label_1ad2f0;
        case 0x1ad2f4u: goto label_1ad2f4;
        case 0x1ad2f8u: goto label_1ad2f8;
        case 0x1ad2fcu: goto label_1ad2fc;
        case 0x1ad300u: goto label_1ad300;
        case 0x1ad304u: goto label_1ad304;
        case 0x1ad308u: goto label_1ad308;
        case 0x1ad30cu: goto label_1ad30c;
        case 0x1ad310u: goto label_1ad310;
        case 0x1ad314u: goto label_1ad314;
        case 0x1ad318u: goto label_1ad318;
        case 0x1ad31cu: goto label_1ad31c;
        case 0x1ad320u: goto label_1ad320;
        case 0x1ad324u: goto label_1ad324;
        case 0x1ad328u: goto label_1ad328;
        case 0x1ad32cu: goto label_1ad32c;
        case 0x1ad330u: goto label_1ad330;
        case 0x1ad334u: goto label_1ad334;
        case 0x1ad338u: goto label_1ad338;
        case 0x1ad33cu: goto label_1ad33c;
        case 0x1ad340u: goto label_1ad340;
        case 0x1ad344u: goto label_1ad344;
        case 0x1ad348u: goto label_1ad348;
        case 0x1ad34cu: goto label_1ad34c;
        case 0x1ad350u: goto label_1ad350;
        case 0x1ad354u: goto label_1ad354;
        case 0x1ad358u: goto label_1ad358;
        case 0x1ad35cu: goto label_1ad35c;
        case 0x1ad360u: goto label_1ad360;
        case 0x1ad364u: goto label_1ad364;
        case 0x1ad368u: goto label_1ad368;
        case 0x1ad36cu: goto label_1ad36c;
        case 0x1ad370u: goto label_1ad370;
        case 0x1ad374u: goto label_1ad374;
        case 0x1ad378u: goto label_1ad378;
        case 0x1ad37cu: goto label_1ad37c;
        case 0x1ad380u: goto label_1ad380;
        case 0x1ad384u: goto label_1ad384;
        case 0x1ad388u: goto label_1ad388;
        case 0x1ad38cu: goto label_1ad38c;
        case 0x1ad390u: goto label_1ad390;
        case 0x1ad394u: goto label_1ad394;
        case 0x1ad398u: goto label_1ad398;
        case 0x1ad39cu: goto label_1ad39c;
        case 0x1ad3a0u: goto label_1ad3a0;
        case 0x1ad3a4u: goto label_1ad3a4;
        case 0x1ad3a8u: goto label_1ad3a8;
        case 0x1ad3acu: goto label_1ad3ac;
        case 0x1ad3b0u: goto label_1ad3b0;
        case 0x1ad3b4u: goto label_1ad3b4;
        case 0x1ad3b8u: goto label_1ad3b8;
        case 0x1ad3bcu: goto label_1ad3bc;
        case 0x1ad3c0u: goto label_1ad3c0;
        case 0x1ad3c4u: goto label_1ad3c4;
        case 0x1ad3c8u: goto label_1ad3c8;
        case 0x1ad3ccu: goto label_1ad3cc;
        case 0x1ad3d0u: goto label_1ad3d0;
        case 0x1ad3d4u: goto label_1ad3d4;
        case 0x1ad3d8u: goto label_1ad3d8;
        case 0x1ad3dcu: goto label_1ad3dc;
        case 0x1ad3e0u: goto label_1ad3e0;
        case 0x1ad3e4u: goto label_1ad3e4;
        case 0x1ad3e8u: goto label_1ad3e8;
        case 0x1ad3ecu: goto label_1ad3ec;
        case 0x1ad3f0u: goto label_1ad3f0;
        case 0x1ad3f4u: goto label_1ad3f4;
        case 0x1ad3f8u: goto label_1ad3f8;
        case 0x1ad3fcu: goto label_1ad3fc;
        case 0x1ad400u: goto label_1ad400;
        case 0x1ad404u: goto label_1ad404;
        case 0x1ad408u: goto label_1ad408;
        case 0x1ad40cu: goto label_1ad40c;
        case 0x1ad410u: goto label_1ad410;
        case 0x1ad414u: goto label_1ad414;
        case 0x1ad418u: goto label_1ad418;
        case 0x1ad41cu: goto label_1ad41c;
        case 0x1ad420u: goto label_1ad420;
        case 0x1ad424u: goto label_1ad424;
        case 0x1ad428u: goto label_1ad428;
        case 0x1ad42cu: goto label_1ad42c;
        case 0x1ad430u: goto label_1ad430;
        case 0x1ad434u: goto label_1ad434;
        case 0x1ad438u: goto label_1ad438;
        case 0x1ad43cu: goto label_1ad43c;
        case 0x1ad440u: goto label_1ad440;
        case 0x1ad444u: goto label_1ad444;
        case 0x1ad448u: goto label_1ad448;
        case 0x1ad44cu: goto label_1ad44c;
        case 0x1ad450u: goto label_1ad450;
        case 0x1ad454u: goto label_1ad454;
        case 0x1ad458u: goto label_1ad458;
        case 0x1ad45cu: goto label_1ad45c;
        case 0x1ad460u: goto label_1ad460;
        case 0x1ad464u: goto label_1ad464;
        case 0x1ad468u: goto label_1ad468;
        case 0x1ad46cu: goto label_1ad46c;
        case 0x1ad470u: goto label_1ad470;
        case 0x1ad474u: goto label_1ad474;
        case 0x1ad478u: goto label_1ad478;
        case 0x1ad47cu: goto label_1ad47c;
        case 0x1ad480u: goto label_1ad480;
        case 0x1ad484u: goto label_1ad484;
        case 0x1ad488u: goto label_1ad488;
        case 0x1ad48cu: goto label_1ad48c;
        case 0x1ad490u: goto label_1ad490;
        case 0x1ad494u: goto label_1ad494;
        case 0x1ad498u: goto label_1ad498;
        case 0x1ad49cu: goto label_1ad49c;
        case 0x1ad4a0u: goto label_1ad4a0;
        case 0x1ad4a4u: goto label_1ad4a4;
        case 0x1ad4a8u: goto label_1ad4a8;
        case 0x1ad4acu: goto label_1ad4ac;
        case 0x1ad4b0u: goto label_1ad4b0;
        case 0x1ad4b4u: goto label_1ad4b4;
        case 0x1ad4b8u: goto label_1ad4b8;
        case 0x1ad4bcu: goto label_1ad4bc;
        case 0x1ad4c0u: goto label_1ad4c0;
        case 0x1ad4c4u: goto label_1ad4c4;
        case 0x1ad4c8u: goto label_1ad4c8;
        case 0x1ad4ccu: goto label_1ad4cc;
        case 0x1ad4d0u: goto label_1ad4d0;
        case 0x1ad4d4u: goto label_1ad4d4;
        case 0x1ad4d8u: goto label_1ad4d8;
        case 0x1ad4dcu: goto label_1ad4dc;
        case 0x1ad4e0u: goto label_1ad4e0;
        case 0x1ad4e4u: goto label_1ad4e4;
        case 0x1ad4e8u: goto label_1ad4e8;
        case 0x1ad4ecu: goto label_1ad4ec;
        case 0x1ad4f0u: goto label_1ad4f0;
        case 0x1ad4f4u: goto label_1ad4f4;
        case 0x1ad4f8u: goto label_1ad4f8;
        case 0x1ad4fcu: goto label_1ad4fc;
        case 0x1ad500u: goto label_1ad500;
        case 0x1ad504u: goto label_1ad504;
        case 0x1ad508u: goto label_1ad508;
        case 0x1ad50cu: goto label_1ad50c;
        case 0x1ad510u: goto label_1ad510;
        case 0x1ad514u: goto label_1ad514;
        case 0x1ad518u: goto label_1ad518;
        case 0x1ad51cu: goto label_1ad51c;
        case 0x1ad520u: goto label_1ad520;
        case 0x1ad524u: goto label_1ad524;
        case 0x1ad528u: goto label_1ad528;
        case 0x1ad52cu: goto label_1ad52c;
        case 0x1ad530u: goto label_1ad530;
        case 0x1ad534u: goto label_1ad534;
        case 0x1ad538u: goto label_1ad538;
        case 0x1ad53cu: goto label_1ad53c;
        case 0x1ad540u: goto label_1ad540;
        case 0x1ad544u: goto label_1ad544;
        case 0x1ad548u: goto label_1ad548;
        case 0x1ad54cu: goto label_1ad54c;
        case 0x1ad550u: goto label_1ad550;
        case 0x1ad554u: goto label_1ad554;
        case 0x1ad558u: goto label_1ad558;
        case 0x1ad55cu: goto label_1ad55c;
        case 0x1ad560u: goto label_1ad560;
        case 0x1ad564u: goto label_1ad564;
        case 0x1ad568u: goto label_1ad568;
        case 0x1ad56cu: goto label_1ad56c;
        case 0x1ad570u: goto label_1ad570;
        case 0x1ad574u: goto label_1ad574;
        case 0x1ad578u: goto label_1ad578;
        case 0x1ad57cu: goto label_1ad57c;
        case 0x1ad580u: goto label_1ad580;
        case 0x1ad584u: goto label_1ad584;
        case 0x1ad588u: goto label_1ad588;
        case 0x1ad58cu: goto label_1ad58c;
        case 0x1ad590u: goto label_1ad590;
        case 0x1ad594u: goto label_1ad594;
        case 0x1ad598u: goto label_1ad598;
        case 0x1ad59cu: goto label_1ad59c;
        case 0x1ad5a0u: goto label_1ad5a0;
        case 0x1ad5a4u: goto label_1ad5a4;
        case 0x1ad5a8u: goto label_1ad5a8;
        case 0x1ad5acu: goto label_1ad5ac;
        case 0x1ad5b0u: goto label_1ad5b0;
        case 0x1ad5b4u: goto label_1ad5b4;
        case 0x1ad5b8u: goto label_1ad5b8;
        case 0x1ad5bcu: goto label_1ad5bc;
        case 0x1ad5c0u: goto label_1ad5c0;
        case 0x1ad5c4u: goto label_1ad5c4;
        case 0x1ad5c8u: goto label_1ad5c8;
        case 0x1ad5ccu: goto label_1ad5cc;
        case 0x1ad5d0u: goto label_1ad5d0;
        case 0x1ad5d4u: goto label_1ad5d4;
        case 0x1ad5d8u: goto label_1ad5d8;
        case 0x1ad5dcu: goto label_1ad5dc;
        case 0x1ad5e0u: goto label_1ad5e0;
        case 0x1ad5e4u: goto label_1ad5e4;
        case 0x1ad5e8u: goto label_1ad5e8;
        case 0x1ad5ecu: goto label_1ad5ec;
        case 0x1ad5f0u: goto label_1ad5f0;
        case 0x1ad5f4u: goto label_1ad5f4;
        case 0x1ad5f8u: goto label_1ad5f8;
        case 0x1ad5fcu: goto label_1ad5fc;
        case 0x1ad600u: goto label_1ad600;
        case 0x1ad604u: goto label_1ad604;
        case 0x1ad608u: goto label_1ad608;
        case 0x1ad60cu: goto label_1ad60c;
        case 0x1ad610u: goto label_1ad610;
        case 0x1ad614u: goto label_1ad614;
        case 0x1ad618u: goto label_1ad618;
        case 0x1ad61cu: goto label_1ad61c;
        case 0x1ad620u: goto label_1ad620;
        case 0x1ad624u: goto label_1ad624;
        case 0x1ad628u: goto label_1ad628;
        case 0x1ad62cu: goto label_1ad62c;
        case 0x1ad630u: goto label_1ad630;
        case 0x1ad634u: goto label_1ad634;
        case 0x1ad638u: goto label_1ad638;
        case 0x1ad63cu: goto label_1ad63c;
        case 0x1ad640u: goto label_1ad640;
        case 0x1ad644u: goto label_1ad644;
        case 0x1ad648u: goto label_1ad648;
        case 0x1ad64cu: goto label_1ad64c;
        case 0x1ad650u: goto label_1ad650;
        case 0x1ad654u: goto label_1ad654;
        case 0x1ad658u: goto label_1ad658;
        case 0x1ad65cu: goto label_1ad65c;
        case 0x1ad660u: goto label_1ad660;
        case 0x1ad664u: goto label_1ad664;
        case 0x1ad668u: goto label_1ad668;
        case 0x1ad66cu: goto label_1ad66c;
        case 0x1ad670u: goto label_1ad670;
        case 0x1ad674u: goto label_1ad674;
        case 0x1ad678u: goto label_1ad678;
        case 0x1ad67cu: goto label_1ad67c;
        case 0x1ad680u: goto label_1ad680;
        case 0x1ad684u: goto label_1ad684;
        case 0x1ad688u: goto label_1ad688;
        case 0x1ad68cu: goto label_1ad68c;
        case 0x1ad690u: goto label_1ad690;
        case 0x1ad694u: goto label_1ad694;
        case 0x1ad698u: goto label_1ad698;
        case 0x1ad69cu: goto label_1ad69c;
        case 0x1ad6a0u: goto label_1ad6a0;
        case 0x1ad6a4u: goto label_1ad6a4;
        case 0x1ad6a8u: goto label_1ad6a8;
        case 0x1ad6acu: goto label_1ad6ac;
        case 0x1ad6b0u: goto label_1ad6b0;
        case 0x1ad6b4u: goto label_1ad6b4;
        case 0x1ad6b8u: goto label_1ad6b8;
        case 0x1ad6bcu: goto label_1ad6bc;
        case 0x1ad6c0u: goto label_1ad6c0;
        case 0x1ad6c4u: goto label_1ad6c4;
        case 0x1ad6c8u: goto label_1ad6c8;
        case 0x1ad6ccu: goto label_1ad6cc;
        case 0x1ad6d0u: goto label_1ad6d0;
        case 0x1ad6d4u: goto label_1ad6d4;
        case 0x1ad6d8u: goto label_1ad6d8;
        case 0x1ad6dcu: goto label_1ad6dc;
        case 0x1ad6e0u: goto label_1ad6e0;
        case 0x1ad6e4u: goto label_1ad6e4;
        case 0x1ad6e8u: goto label_1ad6e8;
        case 0x1ad6ecu: goto label_1ad6ec;
        case 0x1ad6f0u: goto label_1ad6f0;
        case 0x1ad6f4u: goto label_1ad6f4;
        case 0x1ad6f8u: goto label_1ad6f8;
        case 0x1ad6fcu: goto label_1ad6fc;
        case 0x1ad700u: goto label_1ad700;
        case 0x1ad704u: goto label_1ad704;
        case 0x1ad708u: goto label_1ad708;
        case 0x1ad70cu: goto label_1ad70c;
        case 0x1ad710u: goto label_1ad710;
        case 0x1ad714u: goto label_1ad714;
        case 0x1ad718u: goto label_1ad718;
        case 0x1ad71cu: goto label_1ad71c;
        case 0x1ad720u: goto label_1ad720;
        case 0x1ad724u: goto label_1ad724;
        case 0x1ad728u: goto label_1ad728;
        case 0x1ad72cu: goto label_1ad72c;
        case 0x1ad730u: goto label_1ad730;
        case 0x1ad734u: goto label_1ad734;
        case 0x1ad738u: goto label_1ad738;
        case 0x1ad73cu: goto label_1ad73c;
        case 0x1ad740u: goto label_1ad740;
        case 0x1ad744u: goto label_1ad744;
        case 0x1ad748u: goto label_1ad748;
        case 0x1ad74cu: goto label_1ad74c;
        case 0x1ad750u: goto label_1ad750;
        case 0x1ad754u: goto label_1ad754;
        case 0x1ad758u: goto label_1ad758;
        case 0x1ad75cu: goto label_1ad75c;
        case 0x1ad760u: goto label_1ad760;
        case 0x1ad764u: goto label_1ad764;
        case 0x1ad768u: goto label_1ad768;
        case 0x1ad76cu: goto label_1ad76c;
        case 0x1ad770u: goto label_1ad770;
        case 0x1ad774u: goto label_1ad774;
        case 0x1ad778u: goto label_1ad778;
        case 0x1ad77cu: goto label_1ad77c;
        case 0x1ad780u: goto label_1ad780;
        case 0x1ad784u: goto label_1ad784;
        case 0x1ad788u: goto label_1ad788;
        case 0x1ad78cu: goto label_1ad78c;
        case 0x1ad790u: goto label_1ad790;
        case 0x1ad794u: goto label_1ad794;
        case 0x1ad798u: goto label_1ad798;
        case 0x1ad79cu: goto label_1ad79c;
        case 0x1ad7a0u: goto label_1ad7a0;
        case 0x1ad7a4u: goto label_1ad7a4;
        case 0x1ad7a8u: goto label_1ad7a8;
        case 0x1ad7acu: goto label_1ad7ac;
        case 0x1ad7b0u: goto label_1ad7b0;
        case 0x1ad7b4u: goto label_1ad7b4;
        case 0x1ad7b8u: goto label_1ad7b8;
        case 0x1ad7bcu: goto label_1ad7bc;
        case 0x1ad7c0u: goto label_1ad7c0;
        case 0x1ad7c4u: goto label_1ad7c4;
        case 0x1ad7c8u: goto label_1ad7c8;
        case 0x1ad7ccu: goto label_1ad7cc;
        case 0x1ad7d0u: goto label_1ad7d0;
        case 0x1ad7d4u: goto label_1ad7d4;
        case 0x1ad7d8u: goto label_1ad7d8;
        case 0x1ad7dcu: goto label_1ad7dc;
        case 0x1ad7e0u: goto label_1ad7e0;
        case 0x1ad7e4u: goto label_1ad7e4;
        case 0x1ad7e8u: goto label_1ad7e8;
        case 0x1ad7ecu: goto label_1ad7ec;
        case 0x1ad7f0u: goto label_1ad7f0;
        case 0x1ad7f4u: goto label_1ad7f4;
        case 0x1ad7f8u: goto label_1ad7f8;
        case 0x1ad7fcu: goto label_1ad7fc;
        case 0x1ad800u: goto label_1ad800;
        case 0x1ad804u: goto label_1ad804;
        case 0x1ad808u: goto label_1ad808;
        case 0x1ad80cu: goto label_1ad80c;
        case 0x1ad810u: goto label_1ad810;
        case 0x1ad814u: goto label_1ad814;
        case 0x1ad818u: goto label_1ad818;
        case 0x1ad81cu: goto label_1ad81c;
        case 0x1ad820u: goto label_1ad820;
        case 0x1ad824u: goto label_1ad824;
        case 0x1ad828u: goto label_1ad828;
        case 0x1ad82cu: goto label_1ad82c;
        case 0x1ad830u: goto label_1ad830;
        case 0x1ad834u: goto label_1ad834;
        case 0x1ad838u: goto label_1ad838;
        case 0x1ad83cu: goto label_1ad83c;
        case 0x1ad840u: goto label_1ad840;
        case 0x1ad844u: goto label_1ad844;
        case 0x1ad848u: goto label_1ad848;
        case 0x1ad84cu: goto label_1ad84c;
        case 0x1ad850u: goto label_1ad850;
        case 0x1ad854u: goto label_1ad854;
        case 0x1ad858u: goto label_1ad858;
        case 0x1ad85cu: goto label_1ad85c;
        case 0x1ad860u: goto label_1ad860;
        case 0x1ad864u: goto label_1ad864;
        case 0x1ad868u: goto label_1ad868;
        case 0x1ad86cu: goto label_1ad86c;
        case 0x1ad870u: goto label_1ad870;
        case 0x1ad874u: goto label_1ad874;
        case 0x1ad878u: goto label_1ad878;
        case 0x1ad87cu: goto label_1ad87c;
        case 0x1ad880u: goto label_1ad880;
        case 0x1ad884u: goto label_1ad884;
        case 0x1ad888u: goto label_1ad888;
        case 0x1ad88cu: goto label_1ad88c;
        case 0x1ad890u: goto label_1ad890;
        case 0x1ad894u: goto label_1ad894;
        case 0x1ad898u: goto label_1ad898;
        case 0x1ad89cu: goto label_1ad89c;
        case 0x1ad8a0u: goto label_1ad8a0;
        case 0x1ad8a4u: goto label_1ad8a4;
        case 0x1ad8a8u: goto label_1ad8a8;
        case 0x1ad8acu: goto label_1ad8ac;
        case 0x1ad8b0u: goto label_1ad8b0;
        case 0x1ad8b4u: goto label_1ad8b4;
        case 0x1ad8b8u: goto label_1ad8b8;
        case 0x1ad8bcu: goto label_1ad8bc;
        case 0x1ad8c0u: goto label_1ad8c0;
        case 0x1ad8c4u: goto label_1ad8c4;
        case 0x1ad8c8u: goto label_1ad8c8;
        case 0x1ad8ccu: goto label_1ad8cc;
        case 0x1ad8d0u: goto label_1ad8d0;
        case 0x1ad8d4u: goto label_1ad8d4;
        case 0x1ad8d8u: goto label_1ad8d8;
        case 0x1ad8dcu: goto label_1ad8dc;
        case 0x1ad8e0u: goto label_1ad8e0;
        case 0x1ad8e4u: goto label_1ad8e4;
        case 0x1ad8e8u: goto label_1ad8e8;
        case 0x1ad8ecu: goto label_1ad8ec;
        case 0x1ad8f0u: goto label_1ad8f0;
        case 0x1ad8f4u: goto label_1ad8f4;
        case 0x1ad8f8u: goto label_1ad8f8;
        case 0x1ad8fcu: goto label_1ad8fc;
        case 0x1ad900u: goto label_1ad900;
        case 0x1ad904u: goto label_1ad904;
        case 0x1ad908u: goto label_1ad908;
        case 0x1ad90cu: goto label_1ad90c;
        case 0x1ad910u: goto label_1ad910;
        case 0x1ad914u: goto label_1ad914;
        case 0x1ad918u: goto label_1ad918;
        case 0x1ad91cu: goto label_1ad91c;
        case 0x1ad920u: goto label_1ad920;
        case 0x1ad924u: goto label_1ad924;
        case 0x1ad928u: goto label_1ad928;
        case 0x1ad92cu: goto label_1ad92c;
        case 0x1ad930u: goto label_1ad930;
        case 0x1ad934u: goto label_1ad934;
        case 0x1ad938u: goto label_1ad938;
        case 0x1ad93cu: goto label_1ad93c;
        case 0x1ad940u: goto label_1ad940;
        case 0x1ad944u: goto label_1ad944;
        case 0x1ad948u: goto label_1ad948;
        case 0x1ad94cu: goto label_1ad94c;
        case 0x1ad950u: goto label_1ad950;
        case 0x1ad954u: goto label_1ad954;
        case 0x1ad958u: goto label_1ad958;
        case 0x1ad95cu: goto label_1ad95c;
        case 0x1ad960u: goto label_1ad960;
        case 0x1ad964u: goto label_1ad964;
        case 0x1ad968u: goto label_1ad968;
        case 0x1ad96cu: goto label_1ad96c;
        case 0x1ad970u: goto label_1ad970;
        case 0x1ad974u: goto label_1ad974;
        case 0x1ad978u: goto label_1ad978;
        case 0x1ad97cu: goto label_1ad97c;
        case 0x1ad980u: goto label_1ad980;
        case 0x1ad984u: goto label_1ad984;
        case 0x1ad988u: goto label_1ad988;
        case 0x1ad98cu: goto label_1ad98c;
        case 0x1ad990u: goto label_1ad990;
        case 0x1ad994u: goto label_1ad994;
        case 0x1ad998u: goto label_1ad998;
        case 0x1ad99cu: goto label_1ad99c;
        case 0x1ad9a0u: goto label_1ad9a0;
        case 0x1ad9a4u: goto label_1ad9a4;
        case 0x1ad9a8u: goto label_1ad9a8;
        case 0x1ad9acu: goto label_1ad9ac;
        case 0x1ad9b0u: goto label_1ad9b0;
        case 0x1ad9b4u: goto label_1ad9b4;
        case 0x1ad9b8u: goto label_1ad9b8;
        case 0x1ad9bcu: goto label_1ad9bc;
        case 0x1ad9c0u: goto label_1ad9c0;
        case 0x1ad9c4u: goto label_1ad9c4;
        case 0x1ad9c8u: goto label_1ad9c8;
        case 0x1ad9ccu: goto label_1ad9cc;
        case 0x1ad9d0u: goto label_1ad9d0;
        case 0x1ad9d4u: goto label_1ad9d4;
        case 0x1ad9d8u: goto label_1ad9d8;
        case 0x1ad9dcu: goto label_1ad9dc;
        case 0x1ad9e0u: goto label_1ad9e0;
        case 0x1ad9e4u: goto label_1ad9e4;
        case 0x1ad9e8u: goto label_1ad9e8;
        case 0x1ad9ecu: goto label_1ad9ec;
        case 0x1ad9f0u: goto label_1ad9f0;
        case 0x1ad9f4u: goto label_1ad9f4;
        case 0x1ad9f8u: goto label_1ad9f8;
        case 0x1ad9fcu: goto label_1ad9fc;
        case 0x1ada00u: goto label_1ada00;
        case 0x1ada04u: goto label_1ada04;
        case 0x1ada08u: goto label_1ada08;
        case 0x1ada0cu: goto label_1ada0c;
        case 0x1ada10u: goto label_1ada10;
        case 0x1ada14u: goto label_1ada14;
        case 0x1ada18u: goto label_1ada18;
        case 0x1ada1cu: goto label_1ada1c;
        case 0x1ada20u: goto label_1ada20;
        case 0x1ada24u: goto label_1ada24;
        case 0x1ada28u: goto label_1ada28;
        case 0x1ada2cu: goto label_1ada2c;
        case 0x1ada30u: goto label_1ada30;
        case 0x1ada34u: goto label_1ada34;
        case 0x1ada38u: goto label_1ada38;
        case 0x1ada3cu: goto label_1ada3c;
        case 0x1ada40u: goto label_1ada40;
        case 0x1ada44u: goto label_1ada44;
        case 0x1ada48u: goto label_1ada48;
        case 0x1ada4cu: goto label_1ada4c;
        case 0x1ada50u: goto label_1ada50;
        case 0x1ada54u: goto label_1ada54;
        case 0x1ada58u: goto label_1ada58;
        case 0x1ada5cu: goto label_1ada5c;
        case 0x1ada60u: goto label_1ada60;
        case 0x1ada64u: goto label_1ada64;
        case 0x1ada68u: goto label_1ada68;
        case 0x1ada6cu: goto label_1ada6c;
        case 0x1ada70u: goto label_1ada70;
        case 0x1ada74u: goto label_1ada74;
        case 0x1ada78u: goto label_1ada78;
        case 0x1ada7cu: goto label_1ada7c;
        case 0x1ada80u: goto label_1ada80;
        case 0x1ada84u: goto label_1ada84;
        case 0x1ada88u: goto label_1ada88;
        case 0x1ada8cu: goto label_1ada8c;
        case 0x1ada90u: goto label_1ada90;
        case 0x1ada94u: goto label_1ada94;
        case 0x1ada98u: goto label_1ada98;
        case 0x1ada9cu: goto label_1ada9c;
        case 0x1adaa0u: goto label_1adaa0;
        case 0x1adaa4u: goto label_1adaa4;
        case 0x1adaa8u: goto label_1adaa8;
        case 0x1adaacu: goto label_1adaac;
        case 0x1adab0u: goto label_1adab0;
        case 0x1adab4u: goto label_1adab4;
        case 0x1adab8u: goto label_1adab8;
        case 0x1adabcu: goto label_1adabc;
        case 0x1adac0u: goto label_1adac0;
        case 0x1adac4u: goto label_1adac4;
        case 0x1adac8u: goto label_1adac8;
        case 0x1adaccu: goto label_1adacc;
        case 0x1adad0u: goto label_1adad0;
        case 0x1adad4u: goto label_1adad4;
        case 0x1adad8u: goto label_1adad8;
        case 0x1adadcu: goto label_1adadc;
        case 0x1adae0u: goto label_1adae0;
        case 0x1adae4u: goto label_1adae4;
        case 0x1adae8u: goto label_1adae8;
        case 0x1adaecu: goto label_1adaec;
        case 0x1adaf0u: goto label_1adaf0;
        case 0x1adaf4u: goto label_1adaf4;
        case 0x1adaf8u: goto label_1adaf8;
        case 0x1adafcu: goto label_1adafc;
        case 0x1adb00u: goto label_1adb00;
        case 0x1adb04u: goto label_1adb04;
        case 0x1adb08u: goto label_1adb08;
        case 0x1adb0cu: goto label_1adb0c;
        case 0x1adb10u: goto label_1adb10;
        case 0x1adb14u: goto label_1adb14;
        case 0x1adb18u: goto label_1adb18;
        case 0x1adb1cu: goto label_1adb1c;
        case 0x1adb20u: goto label_1adb20;
        case 0x1adb24u: goto label_1adb24;
        case 0x1adb28u: goto label_1adb28;
        case 0x1adb2cu: goto label_1adb2c;
        case 0x1adb30u: goto label_1adb30;
        case 0x1adb34u: goto label_1adb34;
        case 0x1adb38u: goto label_1adb38;
        case 0x1adb3cu: goto label_1adb3c;
        case 0x1adb40u: goto label_1adb40;
        case 0x1adb44u: goto label_1adb44;
        case 0x1adb48u: goto label_1adb48;
        case 0x1adb4cu: goto label_1adb4c;
        case 0x1adb50u: goto label_1adb50;
        case 0x1adb54u: goto label_1adb54;
        case 0x1adb58u: goto label_1adb58;
        case 0x1adb5cu: goto label_1adb5c;
        case 0x1adb60u: goto label_1adb60;
        case 0x1adb64u: goto label_1adb64;
        case 0x1adb68u: goto label_1adb68;
        case 0x1adb6cu: goto label_1adb6c;
        case 0x1adb70u: goto label_1adb70;
        case 0x1adb74u: goto label_1adb74;
        case 0x1adb78u: goto label_1adb78;
        case 0x1adb7cu: goto label_1adb7c;
        case 0x1adb80u: goto label_1adb80;
        case 0x1adb84u: goto label_1adb84;
        case 0x1adb88u: goto label_1adb88;
        case 0x1adb8cu: goto label_1adb8c;
        case 0x1adb90u: goto label_1adb90;
        case 0x1adb94u: goto label_1adb94;
        case 0x1adb98u: goto label_1adb98;
        case 0x1adb9cu: goto label_1adb9c;
        case 0x1adba0u: goto label_1adba0;
        case 0x1adba4u: goto label_1adba4;
        case 0x1adba8u: goto label_1adba8;
        case 0x1adbacu: goto label_1adbac;
        case 0x1adbb0u: goto label_1adbb0;
        case 0x1adbb4u: goto label_1adbb4;
        case 0x1adbb8u: goto label_1adbb8;
        case 0x1adbbcu: goto label_1adbbc;
        case 0x1adbc0u: goto label_1adbc0;
        case 0x1adbc4u: goto label_1adbc4;
        case 0x1adbc8u: goto label_1adbc8;
        case 0x1adbccu: goto label_1adbcc;
        case 0x1adbd0u: goto label_1adbd0;
        case 0x1adbd4u: goto label_1adbd4;
        case 0x1adbd8u: goto label_1adbd8;
        case 0x1adbdcu: goto label_1adbdc;
        case 0x1adbe0u: goto label_1adbe0;
        case 0x1adbe4u: goto label_1adbe4;
        case 0x1adbe8u: goto label_1adbe8;
        case 0x1adbecu: goto label_1adbec;
        case 0x1adbf0u: goto label_1adbf0;
        case 0x1adbf4u: goto label_1adbf4;
        case 0x1adbf8u: goto label_1adbf8;
        case 0x1adbfcu: goto label_1adbfc;
        case 0x1adc00u: goto label_1adc00;
        case 0x1adc04u: goto label_1adc04;
        case 0x1adc08u: goto label_1adc08;
        case 0x1adc0cu: goto label_1adc0c;
        case 0x1adc10u: goto label_1adc10;
        case 0x1adc14u: goto label_1adc14;
        case 0x1adc18u: goto label_1adc18;
        case 0x1adc1cu: goto label_1adc1c;
        case 0x1adc20u: goto label_1adc20;
        case 0x1adc24u: goto label_1adc24;
        case 0x1adc28u: goto label_1adc28;
        case 0x1adc2cu: goto label_1adc2c;
        case 0x1adc30u: goto label_1adc30;
        case 0x1adc34u: goto label_1adc34;
        case 0x1adc38u: goto label_1adc38;
        case 0x1adc3cu: goto label_1adc3c;
        case 0x1adc40u: goto label_1adc40;
        case 0x1adc44u: goto label_1adc44;
        case 0x1adc48u: goto label_1adc48;
        case 0x1adc4cu: goto label_1adc4c;
        case 0x1adc50u: goto label_1adc50;
        case 0x1adc54u: goto label_1adc54;
        case 0x1adc58u: goto label_1adc58;
        case 0x1adc5cu: goto label_1adc5c;
        case 0x1adc60u: goto label_1adc60;
        case 0x1adc64u: goto label_1adc64;
        case 0x1adc68u: goto label_1adc68;
        case 0x1adc6cu: goto label_1adc6c;
        case 0x1adc70u: goto label_1adc70;
        case 0x1adc74u: goto label_1adc74;
        case 0x1adc78u: goto label_1adc78;
        case 0x1adc7cu: goto label_1adc7c;
        case 0x1adc80u: goto label_1adc80;
        case 0x1adc84u: goto label_1adc84;
        case 0x1adc88u: goto label_1adc88;
        case 0x1adc8cu: goto label_1adc8c;
        case 0x1adc90u: goto label_1adc90;
        case 0x1adc94u: goto label_1adc94;
        case 0x1adc98u: goto label_1adc98;
        case 0x1adc9cu: goto label_1adc9c;
        case 0x1adca0u: goto label_1adca0;
        case 0x1adca4u: goto label_1adca4;
        case 0x1adca8u: goto label_1adca8;
        case 0x1adcacu: goto label_1adcac;
        case 0x1adcb0u: goto label_1adcb0;
        case 0x1adcb4u: goto label_1adcb4;
        case 0x1adcb8u: goto label_1adcb8;
        case 0x1adcbcu: goto label_1adcbc;
        case 0x1adcc0u: goto label_1adcc0;
        case 0x1adcc4u: goto label_1adcc4;
        case 0x1adcc8u: goto label_1adcc8;
        case 0x1adcccu: goto label_1adccc;
        case 0x1adcd0u: goto label_1adcd0;
        case 0x1adcd4u: goto label_1adcd4;
        case 0x1adcd8u: goto label_1adcd8;
        case 0x1adcdcu: goto label_1adcdc;
        case 0x1adce0u: goto label_1adce0;
        case 0x1adce4u: goto label_1adce4;
        case 0x1adce8u: goto label_1adce8;
        case 0x1adcecu: goto label_1adcec;
        case 0x1adcf0u: goto label_1adcf0;
        case 0x1adcf4u: goto label_1adcf4;
        case 0x1adcf8u: goto label_1adcf8;
        case 0x1adcfcu: goto label_1adcfc;
        case 0x1add00u: goto label_1add00;
        case 0x1add04u: goto label_1add04;
        case 0x1add08u: goto label_1add08;
        case 0x1add0cu: goto label_1add0c;
        case 0x1add10u: goto label_1add10;
        case 0x1add14u: goto label_1add14;
        case 0x1add18u: goto label_1add18;
        case 0x1add1cu: goto label_1add1c;
        case 0x1add20u: goto label_1add20;
        case 0x1add24u: goto label_1add24;
        case 0x1add28u: goto label_1add28;
        case 0x1add2cu: goto label_1add2c;
        case 0x1add30u: goto label_1add30;
        case 0x1add34u: goto label_1add34;
        case 0x1add38u: goto label_1add38;
        case 0x1add3cu: goto label_1add3c;
        case 0x1add40u: goto label_1add40;
        case 0x1add44u: goto label_1add44;
        case 0x1add48u: goto label_1add48;
        case 0x1add4cu: goto label_1add4c;
        case 0x1add50u: goto label_1add50;
        case 0x1add54u: goto label_1add54;
        case 0x1add58u: goto label_1add58;
        case 0x1add5cu: goto label_1add5c;
        case 0x1add60u: goto label_1add60;
        case 0x1add64u: goto label_1add64;
        case 0x1add68u: goto label_1add68;
        case 0x1add6cu: goto label_1add6c;
        case 0x1add70u: goto label_1add70;
        case 0x1add74u: goto label_1add74;
        case 0x1add78u: goto label_1add78;
        case 0x1add7cu: goto label_1add7c;
        case 0x1add80u: goto label_1add80;
        case 0x1add84u: goto label_1add84;
        case 0x1add88u: goto label_1add88;
        case 0x1add8cu: goto label_1add8c;
        case 0x1add90u: goto label_1add90;
        case 0x1add94u: goto label_1add94;
        case 0x1add98u: goto label_1add98;
        case 0x1add9cu: goto label_1add9c;
        case 0x1adda0u: goto label_1adda0;
        case 0x1adda4u: goto label_1adda4;
        case 0x1adda8u: goto label_1adda8;
        case 0x1addacu: goto label_1addac;
        case 0x1addb0u: goto label_1addb0;
        case 0x1addb4u: goto label_1addb4;
        case 0x1addb8u: goto label_1addb8;
        case 0x1addbcu: goto label_1addbc;
        case 0x1addc0u: goto label_1addc0;
        case 0x1addc4u: goto label_1addc4;
        case 0x1addc8u: goto label_1addc8;
        case 0x1addccu: goto label_1addcc;
        case 0x1addd0u: goto label_1addd0;
        case 0x1addd4u: goto label_1addd4;
        case 0x1addd8u: goto label_1addd8;
        case 0x1adddcu: goto label_1adddc;
        case 0x1adde0u: goto label_1adde0;
        case 0x1adde4u: goto label_1adde4;
        case 0x1adde8u: goto label_1adde8;
        case 0x1addecu: goto label_1addec;
        case 0x1addf0u: goto label_1addf0;
        case 0x1addf4u: goto label_1addf4;
        case 0x1addf8u: goto label_1addf8;
        case 0x1addfcu: goto label_1addfc;
        case 0x1ade00u: goto label_1ade00;
        case 0x1ade04u: goto label_1ade04;
        case 0x1ade08u: goto label_1ade08;
        case 0x1ade0cu: goto label_1ade0c;
        case 0x1ade10u: goto label_1ade10;
        case 0x1ade14u: goto label_1ade14;
        case 0x1ade18u: goto label_1ade18;
        case 0x1ade1cu: goto label_1ade1c;
        case 0x1ade20u: goto label_1ade20;
        case 0x1ade24u: goto label_1ade24;
        case 0x1ade28u: goto label_1ade28;
        case 0x1ade2cu: goto label_1ade2c;
        case 0x1ade30u: goto label_1ade30;
        case 0x1ade34u: goto label_1ade34;
        case 0x1ade38u: goto label_1ade38;
        case 0x1ade3cu: goto label_1ade3c;
        case 0x1ade40u: goto label_1ade40;
        case 0x1ade44u: goto label_1ade44;
        case 0x1ade48u: goto label_1ade48;
        case 0x1ade4cu: goto label_1ade4c;
        case 0x1ade50u: goto label_1ade50;
        case 0x1ade54u: goto label_1ade54;
        case 0x1ade58u: goto label_1ade58;
        case 0x1ade5cu: goto label_1ade5c;
        case 0x1ade60u: goto label_1ade60;
        case 0x1ade64u: goto label_1ade64;
        case 0x1ade68u: goto label_1ade68;
        case 0x1ade6cu: goto label_1ade6c;
        case 0x1ade70u: goto label_1ade70;
        case 0x1ade74u: goto label_1ade74;
        case 0x1ade78u: goto label_1ade78;
        case 0x1ade7cu: goto label_1ade7c;
        case 0x1ade80u: goto label_1ade80;
        case 0x1ade84u: goto label_1ade84;
        case 0x1ade88u: goto label_1ade88;
        case 0x1ade8cu: goto label_1ade8c;
        case 0x1ade90u: goto label_1ade90;
        case 0x1ade94u: goto label_1ade94;
        case 0x1ade98u: goto label_1ade98;
        case 0x1ade9cu: goto label_1ade9c;
        case 0x1adea0u: goto label_1adea0;
        case 0x1adea4u: goto label_1adea4;
        case 0x1adea8u: goto label_1adea8;
        case 0x1adeacu: goto label_1adeac;
        case 0x1adeb0u: goto label_1adeb0;
        case 0x1adeb4u: goto label_1adeb4;
        case 0x1adeb8u: goto label_1adeb8;
        case 0x1adebcu: goto label_1adebc;
        case 0x1adec0u: goto label_1adec0;
        case 0x1adec4u: goto label_1adec4;
        case 0x1adec8u: goto label_1adec8;
        case 0x1adeccu: goto label_1adecc;
        case 0x1aded0u: goto label_1aded0;
        case 0x1aded4u: goto label_1aded4;
        case 0x1aded8u: goto label_1aded8;
        case 0x1adedcu: goto label_1adedc;
        case 0x1adee0u: goto label_1adee0;
        case 0x1adee4u: goto label_1adee4;
        case 0x1adee8u: goto label_1adee8;
        case 0x1adeecu: goto label_1adeec;
        case 0x1adef0u: goto label_1adef0;
        case 0x1adef4u: goto label_1adef4;
        case 0x1adef8u: goto label_1adef8;
        case 0x1adefcu: goto label_1adefc;
        case 0x1adf00u: goto label_1adf00;
        case 0x1adf04u: goto label_1adf04;
        case 0x1adf08u: goto label_1adf08;
        case 0x1adf0cu: goto label_1adf0c;
        case 0x1adf10u: goto label_1adf10;
        case 0x1adf14u: goto label_1adf14;
        case 0x1adf18u: goto label_1adf18;
        case 0x1adf1cu: goto label_1adf1c;
        case 0x1adf20u: goto label_1adf20;
        case 0x1adf24u: goto label_1adf24;
        case 0x1adf28u: goto label_1adf28;
        case 0x1adf2cu: goto label_1adf2c;
        case 0x1adf30u: goto label_1adf30;
        case 0x1adf34u: goto label_1adf34;
        case 0x1adf38u: goto label_1adf38;
        case 0x1adf3cu: goto label_1adf3c;
        case 0x1adf40u: goto label_1adf40;
        case 0x1adf44u: goto label_1adf44;
        case 0x1adf48u: goto label_1adf48;
        case 0x1adf4cu: goto label_1adf4c;
        case 0x1adf50u: goto label_1adf50;
        case 0x1adf54u: goto label_1adf54;
        case 0x1adf58u: goto label_1adf58;
        case 0x1adf5cu: goto label_1adf5c;
        case 0x1adf60u: goto label_1adf60;
        case 0x1adf64u: goto label_1adf64;
        case 0x1adf68u: goto label_1adf68;
        case 0x1adf6cu: goto label_1adf6c;
        case 0x1adf70u: goto label_1adf70;
        case 0x1adf74u: goto label_1adf74;
        case 0x1adf78u: goto label_1adf78;
        case 0x1adf7cu: goto label_1adf7c;
        case 0x1adf80u: goto label_1adf80;
        case 0x1adf84u: goto label_1adf84;
        case 0x1adf88u: goto label_1adf88;
        case 0x1adf8cu: goto label_1adf8c;
        case 0x1adf90u: goto label_1adf90;
        case 0x1adf94u: goto label_1adf94;
        case 0x1adf98u: goto label_1adf98;
        case 0x1adf9cu: goto label_1adf9c;
        case 0x1adfa0u: goto label_1adfa0;
        case 0x1adfa4u: goto label_1adfa4;
        case 0x1adfa8u: goto label_1adfa8;
        case 0x1adfacu: goto label_1adfac;
        case 0x1adfb0u: goto label_1adfb0;
        case 0x1adfb4u: goto label_1adfb4;
        case 0x1adfb8u: goto label_1adfb8;
        default: break;
    }

    ctx->pc = 0x1abcf0u;

label_1abcf0:
    // 0x1abcf0: 0x27bdfac0  addiu       $sp, $sp, -0x540
    ctx->pc = 0x1abcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965952));
label_1abcf4:
    // 0x1abcf4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1abcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1abcf8:
    // 0x1abcf8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1abcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1abcfc:
    // 0x1abcfc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1abcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1abd00:
    // 0x1abd00: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1abd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1abd04:
    // 0x1abd04: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1abd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1abd08:
    // 0x1abd08: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1abd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1abd0c:
    // 0x1abd0c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1abd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1abd10:
    // 0x1abd10: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1abd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1abd14:
    // 0x1abd14: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1abd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1abd18:
    // 0x1abd18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1abd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1abd1c:
    // 0x1abd1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1abd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1abd20:
    // 0x1abd20: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1abd20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1abd24:
    // 0x1abd24: 0xc050e84  jal         func_143A10
label_1abd28:
    if (ctx->pc == 0x1ABD28u) {
        ctx->pc = 0x1ABD28u;
            // 0x1abd28: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ABD2Cu;
        goto label_1abd2c;
    }
    ctx->pc = 0x1ABD24u;
    SET_GPR_U32(ctx, 31, 0x1ABD2Cu);
    ctx->pc = 0x1ABD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABD24u;
            // 0x1abd28: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143A10u;
    if (runtime->hasFunction(0x143A10u)) {
        auto targetFn = runtime->lookupFunction(0x143A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABD2Cu; }
        if (ctx->pc != 0x1ABD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAllScissorFlag__Fi_0x143a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABD2Cu; }
        if (ctx->pc != 0x1ABD2Cu) { return; }
    }
    ctx->pc = 0x1ABD2Cu;
label_1abd2c:
    // 0x1abd2c: 0x8f828c78  lw          $v0, -0x7388($gp)
    ctx->pc = 0x1abd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937720)));
label_1abd30:
    // 0x1abd30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1abd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1abd34:
    // 0x1abd34: 0xaf828c78  sw          $v0, -0x7388($gp)
    ctx->pc = 0x1abd34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937720), GPR_U32(ctx, 2));
label_1abd38:
    // 0x1abd38: 0x8f828c78  lw          $v0, -0x7388($gp)
    ctx->pc = 0x1abd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937720)));
label_1abd3c:
    // 0x1abd3c: 0x28412711  slti        $at, $v0, 0x2711
    ctx->pc = 0x1abd3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10001) ? 1 : 0);
label_1abd40:
    // 0x1abd40: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1abd44:
    if (ctx->pc == 0x1ABD44u) {
        ctx->pc = 0x1ABD44u;
            // 0x1abd44: 0x24022710  addiu       $v0, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->pc = 0x1ABD48u;
        goto label_1abd48;
    }
    ctx->pc = 0x1ABD40u;
    {
        const bool branch_taken_0x1abd40 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABD40u;
            // 0x1abd44: 0x24022710  addiu       $v0, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abd40) {
            ctx->pc = 0x1ABD4Cu;
            goto label_1abd4c;
        }
    }
    ctx->pc = 0x1ABD48u;
label_1abd48:
    // 0x1abd48: 0xaf828c78  sw          $v0, -0x7388($gp)
    ctx->pc = 0x1abd48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937720), GPR_U32(ctx, 2));
label_1abd4c:
    // 0x1abd4c: 0x83828cd4  lb          $v0, -0x732C($gp)
    ctx->pc = 0x1abd4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1abd50:
    // 0x1abd50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1abd54:
    if (ctx->pc == 0x1ABD54u) {
        ctx->pc = 0x1ABD54u;
            // 0x1abd54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1ABD58u;
        goto label_1abd58;
    }
    ctx->pc = 0x1ABD50u;
    {
        const bool branch_taken_0x1abd50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABD50u;
            // 0x1abd54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abd50) {
            ctx->pc = 0x1ABD60u;
            goto label_1abd60;
        }
    }
    ctx->pc = 0x1ABD58u;
label_1abd58:
    // 0x1abd58: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1abd58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1abd5c:
    // 0x1abd5c: 0xa3828cd4  sb          $v0, -0x732C($gp)
    ctx->pc = 0x1abd5cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937812), (uint8_t)GPR_U32(ctx, 2));
label_1abd60:
    // 0x1abd60: 0x83828cdc  lb          $v0, -0x7324($gp)
    ctx->pc = 0x1abd60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937820)));
label_1abd64:
    // 0x1abd64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1abd68:
    if (ctx->pc == 0x1ABD68u) {
        ctx->pc = 0x1ABD68u;
            // 0x1abd68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1ABD6Cu;
        goto label_1abd6c;
    }
    ctx->pc = 0x1ABD64u;
    {
        const bool branch_taken_0x1abd64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABD64u;
            // 0x1abd68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abd64) {
            ctx->pc = 0x1ABD74u;
            goto label_1abd74;
        }
    }
    ctx->pc = 0x1ABD6Cu;
label_1abd6c:
    // 0x1abd6c: 0xaf808cd8  sw          $zero, -0x7328($gp)
    ctx->pc = 0x1abd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937816), GPR_U32(ctx, 0));
label_1abd70:
    // 0x1abd70: 0xa3828cdc  sb          $v0, -0x7324($gp)
    ctx->pc = 0x1abd70u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937820), (uint8_t)GPR_U32(ctx, 2));
label_1abd74:
    // 0x1abd74: 0x8f828c98  lw          $v0, -0x7368($gp)
    ctx->pc = 0x1abd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937752)));
label_1abd78:
    // 0x1abd78: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
label_1abd7c:
    if (ctx->pc == 0x1ABD7Cu) {
        ctx->pc = 0x1ABD80u;
        goto label_1abd80;
    }
    ctx->pc = 0x1ABD78u;
    {
        const bool branch_taken_0x1abd78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abd78) {
            ctx->pc = 0x1ABF98u;
            goto label_1abf98;
        }
    }
    ctx->pc = 0x1ABD80u;
label_1abd80:
    // 0x1abd80: 0xc06a10c  jal         func_1A8430
label_1abd84:
    if (ctx->pc == 0x1ABD84u) {
        ctx->pc = 0x1ABD88u;
        goto label_1abd88;
    }
    ctx->pc = 0x1ABD80u;
    SET_GPR_U32(ctx, 31, 0x1ABD88u);
    ctx->pc = 0x1A8430u;
    if (runtime->hasFunction(0x1A8430u)) {
        auto targetFn = runtime->lookupFunction(0x1A8430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABD88u; }
        if (ctx->pc != 0x1ABD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsLightingEditMode__Fv_0x1a8430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABD88u; }
        if (ctx->pc != 0x1ABD88u) { return; }
    }
    ctx->pc = 0x1ABD88u;
label_1abd88:
    // 0x1abd88: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
label_1abd8c:
    if (ctx->pc == 0x1ABD8Cu) {
        ctx->pc = 0x1ABD90u;
        goto label_1abd90;
    }
    ctx->pc = 0x1ABD88u;
    {
        const bool branch_taken_0x1abd88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abd88) {
            ctx->pc = 0x1ABF98u;
            goto label_1abf98;
        }
    }
    ctx->pc = 0x1ABD90u;
label_1abd90:
    // 0x1abd90: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1abd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1abd94:
    // 0x1abd94: 0xc0a0f58  jal         func_283D60
label_1abd98:
    if (ctx->pc == 0x1ABD98u) {
        ctx->pc = 0x1ABD98u;
            // 0x1abd98: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x1ABD9Cu;
        goto label_1abd9c;
    }
    ctx->pc = 0x1ABD94u;
    SET_GPR_U32(ctx, 31, 0x1ABD9Cu);
    ctx->pc = 0x1ABD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABD94u;
            // 0x1abd98: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABD9Cu; }
        if (ctx->pc != 0x1ABD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABD9Cu; }
        if (ctx->pc != 0x1ABD9Cu) { return; }
    }
    ctx->pc = 0x1ABD9Cu;
label_1abd9c:
    // 0x1abd9c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1abd9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1abda0:
    // 0x1abda0: 0x1260007d  beqz        $s3, . + 4 + (0x7D << 2)
label_1abda4:
    if (ctx->pc == 0x1ABDA4u) {
        ctx->pc = 0x1ABDA8u;
        goto label_1abda8;
    }
    ctx->pc = 0x1ABDA0u;
    {
        const bool branch_taken_0x1abda0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abda0) {
            ctx->pc = 0x1ABF98u;
            goto label_1abf98;
        }
    }
    ctx->pc = 0x1ABDA8u;
label_1abda8:
    // 0x1abda8: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1abda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1abdac:
    // 0x1abdac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1abdacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1abdb0:
    // 0x1abdb0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1abdb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1abdb4:
    // 0x1abdb4: 0xc4402f6c  lwc1        $f0, 0x2F6C($v0)
    ctx->pc = 0x1abdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1abdb8:
    // 0x1abdb8: 0xc058368  jal         func_160DA0
label_1abdbc:
    if (ctx->pc == 0x1ABDBCu) {
        ctx->pc = 0x1ABDBCu;
            // 0x1abdbc: 0xe6600c88  swc1        $f0, 0xC88($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3208), bits); }
        ctx->pc = 0x1ABDC0u;
        goto label_1abdc0;
    }
    ctx->pc = 0x1ABDB8u;
    SET_GPR_U32(ctx, 31, 0x1ABDC0u);
    ctx->pc = 0x1ABDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABDB8u;
            // 0x1abdbc: 0xe6600c88  swc1        $f0, 0xC88($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3208), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x160DA0u;
    if (runtime->hasFunction(0x160DA0u)) {
        auto targetFn = runtime->lookupFunction(0x160DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABDC0u; }
        if (ctx->pc != 0x1ABDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowTimeLightBand__4CMapFv_0x160da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABDC0u; }
        if (ctx->pc != 0x1ABDC0u) { return; }
    }
    ctx->pc = 0x1ABDC0u;
label_1abdc0:
    // 0x1abdc0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1abdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1abdc4:
    // 0x1abdc4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1abdc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1abdc8:
    // 0x1abdc8: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x1abdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_1abdcc:
    // 0x1abdcc: 0xc052cfc  jal         func_14B3F0
label_1abdd0:
    if (ctx->pc == 0x1ABDD0u) {
        ctx->pc = 0x1ABDD0u;
            // 0x1abdd0: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->pc = 0x1ABDD4u;
        goto label_1abdd4;
    }
    ctx->pc = 0x1ABDCCu;
    SET_GPR_U32(ctx, 31, 0x1ABDD4u);
    ctx->pc = 0x1ABDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABDCCu;
            // 0x1abdd0: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3F0u;
    if (runtime->hasFunction(0x14B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABDD4u; }
        if (ctx->pc != 0x1ABDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On2__8CGamePadFi_0x14b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABDD4u; }
        if (ctx->pc != 0x1ABDD4u) { return; }
    }
    ctx->pc = 0x1ABDD4u;
label_1abdd4:
    // 0x1abdd4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1abdd8:
    if (ctx->pc == 0x1ABDD8u) {
        ctx->pc = 0x1ABDDCu;
        goto label_1abddc;
    }
    ctx->pc = 0x1ABDD4u;
    {
        const bool branch_taken_0x1abdd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abdd4) {
            ctx->pc = 0x1ABDF0u;
            goto label_1abdf0;
        }
    }
    ctx->pc = 0x1ABDDCu;
label_1abddc:
    // 0x1abddc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1abddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_1abde0:
    // 0x1abde0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1abde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1abde4:
    // 0x1abde4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1abde4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1abde8:
    // 0x1abde8: 0xc0a1298  jal         func_284A60
label_1abdec:
    if (ctx->pc == 0x1ABDECu) {
        ctx->pc = 0x1ABDECu;
            // 0x1abdec: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1ABDF0u;
        goto label_1abdf0;
    }
    ctx->pc = 0x1ABDE8u;
    SET_GPR_U32(ctx, 31, 0x1ABDF0u);
    ctx->pc = 0x1ABDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABDE8u;
            // 0x1abdec: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284A60u;
    if (runtime->hasFunction(0x284A60u)) {
        auto targetFn = runtime->lookupFunction(0x284A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABDF0u; }
        if (ctx->pc != 0x1ABDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddTime__6CSceneFf_0x284a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABDF0u; }
        if (ctx->pc != 0x1ABDF0u) { return; }
    }
    ctx->pc = 0x1ABDF0u;
label_1abdf0:
    // 0x1abdf0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1abdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1abdf4:
    // 0x1abdf4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1abdf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1abdf8:
    // 0x1abdf8: 0xc052cfc  jal         func_14B3F0
label_1abdfc:
    if (ctx->pc == 0x1ABDFCu) {
        ctx->pc = 0x1ABDFCu;
            // 0x1abdfc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1ABE00u;
        goto label_1abe00;
    }
    ctx->pc = 0x1ABDF8u;
    SET_GPR_U32(ctx, 31, 0x1ABE00u);
    ctx->pc = 0x1ABDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABDF8u;
            // 0x1abdfc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3F0u;
    if (runtime->hasFunction(0x14B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABE00u; }
        if (ctx->pc != 0x1ABE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On2__8CGamePadFi_0x14b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABE00u; }
        if (ctx->pc != 0x1ABE00u) { return; }
    }
    ctx->pc = 0x1ABE00u;
label_1abe00:
    // 0x1abe00: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1abe04:
    if (ctx->pc == 0x1ABE04u) {
        ctx->pc = 0x1ABE08u;
        goto label_1abe08;
    }
    ctx->pc = 0x1ABE00u;
    {
        const bool branch_taken_0x1abe00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abe00) {
            ctx->pc = 0x1ABE1Cu;
            goto label_1abe1c;
        }
    }
    ctx->pc = 0x1ABE08u;
label_1abe08:
    // 0x1abe08: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x1abe08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
label_1abe0c:
    // 0x1abe0c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1abe0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1abe10:
    // 0x1abe10: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1abe10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1abe14:
    // 0x1abe14: 0xc0a1298  jal         func_284A60
label_1abe18:
    if (ctx->pc == 0x1ABE18u) {
        ctx->pc = 0x1ABE18u;
            // 0x1abe18: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1ABE1Cu;
        goto label_1abe1c;
    }
    ctx->pc = 0x1ABE14u;
    SET_GPR_U32(ctx, 31, 0x1ABE1Cu);
    ctx->pc = 0x1ABE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE14u;
            // 0x1abe18: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284A60u;
    if (runtime->hasFunction(0x284A60u)) {
        auto targetFn = runtime->lookupFunction(0x284A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABE1Cu; }
        if (ctx->pc != 0x1ABE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddTime__6CSceneFf_0x284a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABE1Cu; }
        if (ctx->pc != 0x1ABE1Cu) { return; }
    }
    ctx->pc = 0x1ABE1Cu;
label_1abe1c:
    // 0x1abe1c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1abe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1abe20:
    // 0x1abe20: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x1abe20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_1abe24:
    // 0x1abe24: 0xc052d1c  jal         func_14B470
label_1abe28:
    if (ctx->pc == 0x1ABE28u) {
        ctx->pc = 0x1ABE28u;
            // 0x1abe28: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1ABE2Cu;
        goto label_1abe2c;
    }
    ctx->pc = 0x1ABE24u;
    SET_GPR_U32(ctx, 31, 0x1ABE2Cu);
    ctx->pc = 0x1ABE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE24u;
            // 0x1abe28: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABE2Cu; }
        if (ctx->pc != 0x1ABE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABE2Cu; }
        if (ctx->pc != 0x1ABE2Cu) { return; }
    }
    ctx->pc = 0x1ABE2Cu;
label_1abe2c:
    // 0x1abe2c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1abe30:
    if (ctx->pc == 0x1ABE30u) {
        ctx->pc = 0x1ABE34u;
        goto label_1abe34;
    }
    ctx->pc = 0x1ABE2Cu;
    {
        const bool branch_taken_0x1abe2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abe2c) {
            ctx->pc = 0x1ABE68u;
            goto label_1abe68;
        }
    }
    ctx->pc = 0x1ABE34u;
label_1abe34:
    // 0x1abe34: 0x8f948cb0  lw          $s4, -0x7350($gp)
    ctx->pc = 0x1abe34u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1abe38:
    // 0x1abe38: 0xc0a248c  jal         func_289230
label_1abe3c:
    if (ctx->pc == 0x1ABE3Cu) {
        ctx->pc = 0x1ABE3Cu;
            // 0x1abe3c: 0xc68c2f6c  lwc1        $f12, 0x2F6C($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1ABE40u;
        goto label_1abe40;
    }
    ctx->pc = 0x1ABE38u;
    SET_GPR_U32(ctx, 31, 0x1ABE40u);
    ctx->pc = 0x1ABE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE38u;
            // 0x1abe3c: 0xc68c2f6c  lwc1        $f12, 0x2F6C($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABE40u; }
        if (ctx->pc != 0x1ABE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABE40u; }
        if (ctx->pc != 0x1ABE40u) { return; }
    }
    ctx->pc = 0x1ABE40u;
label_1abe40:
    // 0x1abe40: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1abe44:
    if (ctx->pc == 0x1ABE44u) {
        ctx->pc = 0x1ABE44u;
            // 0x1abe44: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->pc = 0x1ABE48u;
        goto label_1abe48;
    }
    ctx->pc = 0x1ABE40u;
    {
        const bool branch_taken_0x1abe40 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1ABE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE40u;
            // 0x1abe44: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abe40) {
            ctx->pc = 0x1ABE50u;
            goto label_1abe50;
        }
    }
    ctx->pc = 0x1ABE48u;
label_1abe48:
    // 0x1abe48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1abe48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1abe4c:
    // 0x1abe4c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x1abe4cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_1abe50:
    // 0x1abe50: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1abe50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1abe54:
    // 0x1abe54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1abe54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1abe58:
    // 0x1abe58: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1abe58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_1abe5c:
    // 0x1abe5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1abe5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1abe60:
    // 0x1abe60: 0xc0a1270  jal         func_2849C0
label_1abe64:
    if (ctx->pc == 0x1ABE64u) {
        ctx->pc = 0x1ABE64u;
            // 0x1abe64: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1ABE68u;
        goto label_1abe68;
    }
    ctx->pc = 0x1ABE60u;
    SET_GPR_U32(ctx, 31, 0x1ABE68u);
    ctx->pc = 0x1ABE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE60u;
            // 0x1abe64: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849C0u;
    if (runtime->hasFunction(0x2849C0u)) {
        auto targetFn = runtime->lookupFunction(0x2849C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABE68u; }
        if (ctx->pc != 0x1ABE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTime__6CSceneFf_0x2849c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABE68u; }
        if (ctx->pc != 0x1ABE68u) { return; }
    }
    ctx->pc = 0x1ABE68u;
label_1abe68:
    // 0x1abe68: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1abe68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1abe6c:
    // 0x1abe6c: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x1abe6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_1abe70:
    // 0x1abe70: 0xc052d1c  jal         func_14B470
label_1abe74:
    if (ctx->pc == 0x1ABE74u) {
        ctx->pc = 0x1ABE74u;
            // 0x1abe74: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1ABE78u;
        goto label_1abe78;
    }
    ctx->pc = 0x1ABE70u;
    SET_GPR_U32(ctx, 31, 0x1ABE78u);
    ctx->pc = 0x1ABE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE70u;
            // 0x1abe74: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABE78u; }
        if (ctx->pc != 0x1ABE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABE78u; }
        if (ctx->pc != 0x1ABE78u) { return; }
    }
    ctx->pc = 0x1ABE78u;
label_1abe78:
    // 0x1abe78: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1abe7c:
    if (ctx->pc == 0x1ABE7Cu) {
        ctx->pc = 0x1ABE80u;
        goto label_1abe80;
    }
    ctx->pc = 0x1ABE78u;
    {
        const bool branch_taken_0x1abe78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abe78) {
            ctx->pc = 0x1ABE9Cu;
            goto label_1abe9c;
        }
    }
    ctx->pc = 0x1ABE80u;
label_1abe80:
    // 0x1abe80: 0x8f838cd0  lw          $v1, -0x7330($gp)
    ctx->pc = 0x1abe80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1abe84:
    // 0x1abe84: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1abe84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1abe88:
    // 0x1abe88: 0xaf828cd8  sw          $v0, -0x7328($gp)
    ctx->pc = 0x1abe88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937816), GPR_U32(ctx, 2));
label_1abe8c:
    // 0x1abe8c: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x1abe8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1abe90:
    // 0x1abe90: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1abe90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1abe94:
    // 0x1abe94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1abe94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1abe98:
    // 0x1abe98: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1abe98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1abe9c:
    // 0x1abe9c: 0x8f838c7c  lw          $v1, -0x7384($gp)
    ctx->pc = 0x1abe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937724)));
label_1abea0:
    // 0x1abea0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1abea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1abea4:
    // 0x1abea4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1abea8:
    if (ctx->pc == 0x1ABEA8u) {
        ctx->pc = 0x1ABEACu;
        goto label_1abeac;
    }
    ctx->pc = 0x1ABEA4u;
    {
        const bool branch_taken_0x1abea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1abea4) {
            ctx->pc = 0x1ABEC4u;
            goto label_1abec4;
        }
    }
    ctx->pc = 0x1ABEACu;
label_1abeac:
    // 0x1abeac: 0xc05239c  jal         func_148E70
label_1abeb0:
    if (ctx->pc == 0x1ABEB0u) {
        ctx->pc = 0x1ABEB4u;
        goto label_1abeb4;
    }
    ctx->pc = 0x1ABEACu;
    SET_GPR_U32(ctx, 31, 0x1ABEB4u);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABEB4u; }
        if (ctx->pc != 0x1ABEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABEB4u; }
        if (ctx->pc != 0x1ABEB4u) { return; }
    }
    ctx->pc = 0x1ABEB4u;
label_1abeb4:
    // 0x1abeb4: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_1abeb8:
    if (ctx->pc == 0x1ABEB8u) {
        ctx->pc = 0x1ABEB8u;
            // 0x1abeb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1ABEBCu;
        goto label_1abebc;
    }
    ctx->pc = 0x1ABEB4u;
    {
        const bool branch_taken_0x1abeb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABEB4u;
            // 0x1abeb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abeb4) {
            ctx->pc = 0x1ABF44u;
            goto label_1abf44;
        }
    }
    ctx->pc = 0x1ABEBCu;
label_1abebc:
    // 0x1abebc: 0x10000021  b           . + 4 + (0x21 << 2)
label_1abec0:
    if (ctx->pc == 0x1ABEC0u) {
        ctx->pc = 0x1ABEC0u;
            // 0x1abec0: 0xaf828c7c  sw          $v0, -0x7384($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937724), GPR_U32(ctx, 2));
        ctx->pc = 0x1ABEC4u;
        goto label_1abec4;
    }
    ctx->pc = 0x1ABEBCu;
    {
        const bool branch_taken_0x1abebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABEBCu;
            // 0x1abec0: 0xaf828c7c  sw          $v0, -0x7384($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937724), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abebc) {
            ctx->pc = 0x1ABF44u;
            goto label_1abf44;
        }
    }
    ctx->pc = 0x1ABEC4u;
label_1abec4:
    // 0x1abec4: 0xc064220  jal         func_190880
label_1abec8:
    if (ctx->pc == 0x1ABEC8u) {
        ctx->pc = 0x1ABECCu;
        goto label_1abecc;
    }
    ctx->pc = 0x1ABEC4u;
    SET_GPR_U32(ctx, 31, 0x1ABECCu);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABECCu; }
        if (ctx->pc != 0x1ABECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABECCu; }
        if (ctx->pc != 0x1ABECCu) { return; }
    }
    ctx->pc = 0x1ABECCu;
label_1abecc:
    // 0x1abecc: 0x8c421a0c  lw          $v0, 0x1A0C($v0)
    ctx->pc = 0x1abeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6668)));
label_1abed0:
    // 0x1abed0: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_1abed4:
    if (ctx->pc == 0x1ABED4u) {
        ctx->pc = 0x1ABED8u;
        goto label_1abed8;
    }
    ctx->pc = 0x1ABED0u;
    {
        const bool branch_taken_0x1abed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abed0) {
            ctx->pc = 0x1ABF44u;
            goto label_1abf44;
        }
    }
    ctx->pc = 0x1ABED8u;
label_1abed8:
    // 0x1abed8: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1abed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1abedc:
    // 0x1abedc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1abee0:
    if (ctx->pc == 0x1ABEE0u) {
        ctx->pc = 0x1ABEE4u;
        goto label_1abee4;
    }
    ctx->pc = 0x1ABEDCu;
    {
        const bool branch_taken_0x1abedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abedc) {
            ctx->pc = 0x1ABF44u;
            goto label_1abf44;
        }
    }
    ctx->pc = 0x1ABEE4u;
label_1abee4:
    // 0x1abee4: 0x8f828c80  lw          $v0, -0x7380($gp)
    ctx->pc = 0x1abee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1abee8:
    // 0x1abee8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1abee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1abeec:
    // 0x1abeec: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
label_1abef0:
    if (ctx->pc == 0x1ABEF0u) {
        ctx->pc = 0x1ABEF4u;
        goto label_1abef4;
    }
    ctx->pc = 0x1ABEECu;
    {
        const bool branch_taken_0x1abeec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1abeec) {
            ctx->pc = 0x1ABF44u;
            goto label_1abf44;
        }
    }
    ctx->pc = 0x1ABEF4u;
label_1abef4:
    // 0x1abef4: 0x8f828c7c  lw          $v0, -0x7384($gp)
    ctx->pc = 0x1abef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937724)));
label_1abef8:
    // 0x1abef8: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
label_1abefc:
    if (ctx->pc == 0x1ABEFCu) {
        ctx->pc = 0x1ABEFCu;
            // 0x1abefc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x1ABF00u;
        goto label_1abf00;
    }
    ctx->pc = 0x1ABEF8u;
    {
        const bool branch_taken_0x1abef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1ABEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABEF8u;
            // 0x1abefc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abef8) {
            ctx->pc = 0x1ABF44u;
            goto label_1abf44;
        }
    }
    ctx->pc = 0x1ABF00u;
label_1abf00:
    // 0x1abf00: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1abf00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1abf04:
    // 0x1abf04: 0xc064220  jal         func_190880
label_1abf08:
    if (ctx->pc == 0x1ABF08u) {
        ctx->pc = 0x1ABF08u;
            // 0x1abf08: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ABF0Cu;
        goto label_1abf0c;
    }
    ctx->pc = 0x1ABF04u;
    SET_GPR_U32(ctx, 31, 0x1ABF0Cu);
    ctx->pc = 0x1ABF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF04u;
            // 0x1abf08: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF0Cu; }
        if (ctx->pc != 0x1ABF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF0Cu; }
        if (ctx->pc != 0x1ABF0Cu) { return; }
    }
    ctx->pc = 0x1ABF0Cu;
label_1abf0c:
    // 0x1abf0c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1abf10:
    if (ctx->pc == 0x1ABF10u) {
        ctx->pc = 0x1ABF14u;
        goto label_1abf14;
    }
    ctx->pc = 0x1ABF0Cu;
    {
        const bool branch_taken_0x1abf0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abf0c) {
            ctx->pc = 0x1ABF38u;
            goto label_1abf38;
        }
    }
    ctx->pc = 0x1ABF14u;
label_1abf14:
    // 0x1abf14: 0xc064220  jal         func_190880
label_1abf18:
    if (ctx->pc == 0x1ABF18u) {
        ctx->pc = 0x1ABF1Cu;
        goto label_1abf1c;
    }
    ctx->pc = 0x1ABF14u;
    SET_GPR_U32(ctx, 31, 0x1ABF1Cu);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF1Cu; }
        if (ctx->pc != 0x1ABF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF1Cu; }
        if (ctx->pc != 0x1ABF1Cu) { return; }
    }
    ctx->pc = 0x1ABF1Cu;
label_1abf1c:
    // 0x1abf1c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1abf1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1abf20:
    // 0x1abf20: 0x3421c574  ori         $at, $at, 0xC574
    ctx->pc = 0x1abf20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50548);
label_1abf24:
    // 0x1abf24: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x1abf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1abf28:
    // 0x1abf28: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1abf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1abf2c:
    // 0x1abf2c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1abf30:
    if (ctx->pc == 0x1ABF30u) {
        ctx->pc = 0x1ABF30u;
            // 0x1abf30: 0x3c023fc0  lui         $v0, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
        ctx->pc = 0x1ABF34u;
        goto label_1abf34;
    }
    ctx->pc = 0x1ABF2Cu;
    {
        const bool branch_taken_0x1abf2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF2Cu;
            // 0x1abf30: 0x3c023fc0  lui         $v0, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf2c) {
            ctx->pc = 0x1ABF38u;
            goto label_1abf38;
        }
    }
    ctx->pc = 0x1ABF34u;
label_1abf34:
    // 0x1abf34: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1abf34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1abf38:
    // 0x1abf38: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1abf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1abf3c:
    // 0x1abf3c: 0xc0a129c  jal         func_284A70
label_1abf40:
    if (ctx->pc == 0x1ABF40u) {
        ctx->pc = 0x1ABF40u;
            // 0x1abf40: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1ABF44u;
        goto label_1abf44;
    }
    ctx->pc = 0x1ABF3Cu;
    SET_GPR_U32(ctx, 31, 0x1ABF44u);
    ctx->pc = 0x1ABF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF3Cu;
            // 0x1abf40: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x284A70u;
    if (runtime->hasFunction(0x284A70u)) {
        auto targetFn = runtime->lookupFunction(0x284A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF44u; }
        if (ctx->pc != 0x1ABF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TimeStep__6CSceneFf_0x284a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF44u; }
        if (ctx->pc != 0x1ABF44u) { return; }
    }
    ctx->pc = 0x1ABF44u;
label_1abf44:
    // 0x1abf44: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1abf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1abf48:
    // 0x1abf48: 0xc4402f6c  lwc1        $f0, 0x2F6C($v0)
    ctx->pc = 0x1abf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1abf4c:
    // 0x1abf4c: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_1abf50:
    if (ctx->pc == 0x1ABF50u) {
        ctx->pc = 0x1ABF50u;
            // 0x1abf50: 0xe6600c88  swc1        $f0, 0xC88($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3208), bits); }
        ctx->pc = 0x1ABF54u;
        goto label_1abf54;
    }
    ctx->pc = 0x1ABF4Cu;
    {
        const bool branch_taken_0x1abf4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF4Cu;
            // 0x1abf50: 0xe6600c88  swc1        $f0, 0xC88($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf4c) {
            ctx->pc = 0x1ABF98u;
            goto label_1abf98;
        }
    }
    ctx->pc = 0x1ABF54u;
label_1abf54:
    // 0x1abf54: 0xc058368  jal         func_160DA0
label_1abf58:
    if (ctx->pc == 0x1ABF58u) {
        ctx->pc = 0x1ABF58u;
            // 0x1abf58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ABF5Cu;
        goto label_1abf5c;
    }
    ctx->pc = 0x1ABF54u;
    SET_GPR_U32(ctx, 31, 0x1ABF5Cu);
    ctx->pc = 0x1ABF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF54u;
            // 0x1abf58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160DA0u;
    if (runtime->hasFunction(0x160DA0u)) {
        auto targetFn = runtime->lookupFunction(0x160DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF5Cu; }
        if (ctx->pc != 0x1ABF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowTimeLightBand__4CMapFv_0x160da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF5Cu; }
        if (ctx->pc != 0x1ABF5Cu) { return; }
    }
    ctx->pc = 0x1ABF5Cu;
label_1abf5c:
    // 0x1abf5c: 0x1242000e  beq         $s2, $v0, . + 4 + (0xE << 2)
label_1abf60:
    if (ctx->pc == 0x1ABF60u) {
        ctx->pc = 0x1ABF64u;
        goto label_1abf64;
    }
    ctx->pc = 0x1ABF5Cu;
    {
        const bool branch_taken_0x1abf5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1abf5c) {
            ctx->pc = 0x1ABF98u;
            goto label_1abf98;
        }
    }
    ctx->pc = 0x1ABF64u;
label_1abf64:
    // 0x1abf64: 0x8e6200a4  lw          $v0, 0xA4($s3)
    ctx->pc = 0x1abf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
label_1abf68:
    // 0x1abf68: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1abf6c:
    if (ctx->pc == 0x1ABF6Cu) {
        ctx->pc = 0x1ABF70u;
        goto label_1abf70;
    }
    ctx->pc = 0x1ABF68u;
    {
        const bool branch_taken_0x1abf68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abf68) {
            ctx->pc = 0x1ABF98u;
            goto label_1abf98;
        }
    }
    ctx->pc = 0x1ABF70u;
label_1abf70:
    // 0x1abf70: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1abf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1abf74:
    // 0x1abf74: 0xc05f69c  jal         func_17DA70
label_1abf78:
    if (ctx->pc == 0x1ABF78u) {
        ctx->pc = 0x1ABF78u;
            // 0x1abf78: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x1ABF7Cu;
        goto label_1abf7c;
    }
    ctx->pc = 0x1ABF74u;
    SET_GPR_U32(ctx, 31, 0x1ABF7Cu);
    ctx->pc = 0x1ABF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF74u;
            // 0x1abf78: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DA70u;
    if (runtime->hasFunction(0x17DA70u)) {
        auto targetFn = runtime->lookupFunction(0x17DA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF7Cu; }
        if (ctx->pc != 0x1ABF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CaptureScreen__10CFadeInOutFv_0x17da70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF7Cu; }
        if (ctx->pc != 0x1ABF7Cu) { return; }
    }
    ctx->pc = 0x1ABF7Cu;
label_1abf7c:
    // 0x1abf7c: 0x8f838cb0  lw          $v1, -0x7350($gp)
    ctx->pc = 0x1abf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1abf80:
    // 0x1abf80: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1abf80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1abf84:
    // 0x1abf84: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1abf84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1abf88:
    // 0x1abf88: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1abf88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1abf8c:
    // 0x1abf8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1abf8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1abf90:
    // 0x1abf90: 0xc05f628  jal         func_17D8A0
label_1abf94:
    if (ctx->pc == 0x1ABF94u) {
        ctx->pc = 0x1ABF94u;
            // 0x1abf94: 0x24642c70  addiu       $a0, $v1, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 11376));
        ctx->pc = 0x1ABF98u;
        goto label_1abf98;
    }
    ctx->pc = 0x1ABF90u;
    SET_GPR_U32(ctx, 31, 0x1ABF98u);
    ctx->pc = 0x1ABF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF90u;
            // 0x1abf94: 0x24642c70  addiu       $a0, $v1, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D8A0u;
    if (runtime->hasFunction(0x17D8A0u)) {
        auto targetFn = runtime->lookupFunction(0x17D8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF98u; }
        if (ctx->pc != 0x1ABF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CrossFade__10CFadeInOutFif_0x17d8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF98u; }
        if (ctx->pc != 0x1ABF98u) { return; }
    }
    ctx->pc = 0x1ABF98u;
label_1abf98:
    // 0x1abf98: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1abf98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1abf9c:
    // 0x1abf9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1abf9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1abfa0:
    // 0x1abfa0: 0x24847b60  addiu       $a0, $a0, 0x7B60
    ctx->pc = 0x1abfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
label_1abfa4:
    // 0x1abfa4: 0xc0bb538  jal         func_2ED4E0
label_1abfa8:
    if (ctx->pc == 0x1ABFA8u) {
        ctx->pc = 0x1ABFA8u;
            // 0x1abfa8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ABFACu;
        goto label_1abfac;
    }
    ctx->pc = 0x1ABFA4u;
    SET_GPR_U32(ctx, 31, 0x1ABFACu);
    ctx->pc = 0x1ABFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABFA4u;
            // 0x1abfa8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABFACu; }
        if (ctx->pc != 0x1ABFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABFACu; }
        if (ctx->pc != 0x1ABFACu) { return; }
    }
    ctx->pc = 0x1ABFACu;
label_1abfac:
    // 0x1abfac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1abfb0:
    if (ctx->pc == 0x1ABFB0u) {
        ctx->pc = 0x1ABFB0u;
            // 0x1abfb0: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1ABFB4u;
        goto label_1abfb4;
    }
    ctx->pc = 0x1ABFACu;
    {
        const bool branch_taken_0x1abfac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABFACu;
            // 0x1abfb0: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abfac) {
            ctx->pc = 0x1ABFC8u;
            goto label_1abfc8;
        }
    }
    ctx->pc = 0x1ABFB4u;
label_1abfb4:
    // 0x1abfb4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1abfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1abfb8:
    // 0x1abfb8: 0xc0bb538  jal         func_2ED4E0
label_1abfbc:
    if (ctx->pc == 0x1ABFBCu) {
        ctx->pc = 0x1ABFBCu;
            // 0x1abfbc: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->pc = 0x1ABFC0u;
        goto label_1abfc0;
    }
    ctx->pc = 0x1ABFB8u;
    SET_GPR_U32(ctx, 31, 0x1ABFC0u);
    ctx->pc = 0x1ABFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABFB8u;
            // 0x1abfbc: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABFC0u; }
        if (ctx->pc != 0x1ABFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABFC0u; }
        if (ctx->pc != 0x1ABFC0u) { return; }
    }
    ctx->pc = 0x1ABFC0u;
label_1abfc0:
    // 0x1abfc0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1abfc4:
    if (ctx->pc == 0x1ABFC4u) {
        ctx->pc = 0x1ABFC8u;
        goto label_1abfc8;
    }
    ctx->pc = 0x1ABFC0u;
    {
        const bool branch_taken_0x1abfc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abfc0) {
            ctx->pc = 0x1ABFCCu;
            goto label_1abfcc;
        }
    }
    ctx->pc = 0x1ABFC8u;
label_1abfc8:
    // 0x1abfc8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1abfc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1abfcc:
    // 0x1abfcc: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1abfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1abfd0:
    // 0x1abfd0: 0xc0a0f24  jal         func_283C90
label_1abfd4:
    if (ctx->pc == 0x1ABFD4u) {
        ctx->pc = 0x1ABFD4u;
            // 0x1abfd4: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x1ABFD8u;
        goto label_1abfd8;
    }
    ctx->pc = 0x1ABFD0u;
    SET_GPR_U32(ctx, 31, 0x1ABFD8u);
    ctx->pc = 0x1ABFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABFD0u;
            // 0x1abfd4: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283C90u;
    if (runtime->hasFunction(0x283C90u)) {
        auto targetFn = runtime->lookupFunction(0x283C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABFD8u; }
        if (ctx->pc != 0x1ABFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapName__6CSceneFi_0x283c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABFD8u; }
        if (ctx->pc != 0x1ABFD8u) { return; }
    }
    ctx->pc = 0x1ABFD8u;
label_1abfd8:
    // 0x1abfd8: 0x100001be  b           . + 4 + (0x1BE << 2)
label_1abfdc:
    if (ctx->pc == 0x1ABFDCu) {
        ctx->pc = 0x1ABFDCu;
            // 0x1abfdc: 0x8f838c78  lw          $v1, -0x7388($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937720)));
        ctx->pc = 0x1ABFE0u;
        goto label_1abfe0;
    }
    ctx->pc = 0x1ABFD8u;
    {
        const bool branch_taken_0x1abfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABFD8u;
            // 0x1abfdc: 0x8f838c78  lw          $v1, -0x7388($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abfd8) {
            ctx->pc = 0x1AC6D4u;
            goto label_1ac6d4;
        }
    }
    ctx->pc = 0x1ABFE0u;
label_1abfe0:
    // 0x1abfe0: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1abfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1abfe4:
    // 0x1abfe4: 0xc0a0ed8  jal         func_283B60
label_1abfe8:
    if (ctx->pc == 0x1ABFE8u) {
        ctx->pc = 0x1ABFE8u;
            // 0x1abfe8: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->pc = 0x1ABFECu;
        goto label_1abfec;
    }
    ctx->pc = 0x1ABFE4u;
    SET_GPR_U32(ctx, 31, 0x1ABFECu);
    ctx->pc = 0x1ABFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABFE4u;
            // 0x1abfe8: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABFECu; }
        if (ctx->pc != 0x1ABFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABFECu; }
        if (ctx->pc != 0x1ABFECu) { return; }
    }
    ctx->pc = 0x1ABFECu;
label_1abfec:
    // 0x1abfec: 0x104001c7  beqz        $v0, . + 4 + (0x1C7 << 2)
label_1abff0:
    if (ctx->pc == 0x1ABFF0u) {
        ctx->pc = 0x1ABFF4u;
        goto label_1abff4;
    }
    ctx->pc = 0x1ABFECu;
    {
        const bool branch_taken_0x1abfec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abfec) {
            ctx->pc = 0x1AC70Cu;
            goto label_1ac70c;
        }
    }
    ctx->pc = 0x1ABFF4u;
label_1abff4:
    // 0x1abff4: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1abff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1abff8:
    // 0x1abff8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1abff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1abffc:
    // 0x1abffc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1abffcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1ac000:
    // 0x1ac000: 0x320f809  jalr        $t9
label_1ac004:
    if (ctx->pc == 0x1AC004u) {
        ctx->pc = 0x1AC004u;
            // 0x1ac004: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1AC008u;
        goto label_1ac008;
    }
    ctx->pc = 0x1AC000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AC008u);
        ctx->pc = 0x1AC004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC000u;
            // 0x1ac004: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AC008u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AC008u; }
            if (ctx->pc != 0x1AC008u) { return; }
        }
        }
    }
    ctx->pc = 0x1AC008u;
label_1ac008:
    // 0x1ac008: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x1ac008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1ac00c:
    // 0x1ac00c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1ac00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1ac010:
    // 0x1ac010: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x1ac010u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1ac014:
    // 0x1ac014: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1ac014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1ac018:
    // 0x1ac018: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x1ac018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1ac01c:
    // 0x1ac01c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ac01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac020:
    // 0x1ac020: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x1ac020u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
label_1ac024:
    // 0x1ac024: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ac024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1ac028:
    // 0x1ac028: 0x24426960  addiu       $v0, $v0, 0x6960
    ctx->pc = 0x1ac028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26976));
label_1ac02c:
    // 0x1ac02c: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x1ac02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
label_1ac030:
    // 0x1ac030: 0xafa400fc  sw          $a0, 0xFC($sp)
    ctx->pc = 0x1ac030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 4));
label_1ac034:
    // 0x1ac034: 0xafa400ec  sw          $a0, 0xEC($sp)
    ctx->pc = 0x1ac034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 4));
label_1ac038:
    // 0x1ac038: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1ac038u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1ac03c:
    // 0x1ac03c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1ac03cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_1ac040:
    // 0x1ac040: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ac040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ac044:
    // 0x1ac044: 0xc0a170c  jal         func_285C30
label_1ac048:
    if (ctx->pc == 0x1AC048u) {
        ctx->pc = 0x1AC048u;
            // 0x1ac048: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1AC04Cu;
        goto label_1ac04c;
    }
    ctx->pc = 0x1AC044u;
    SET_GPR_U32(ctx, 31, 0x1AC04Cu);
    ctx->pc = 0x1AC048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC044u;
            // 0x1ac048: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285C30u;
    if (runtime->hasFunction(0x285C30u)) {
        auto targetFn = runtime->lookupFunction(0x285C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC04Cu; }
        if (ctx->pc != 0x1AC04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadMapBGStep__6CSceneFP17SCN_LOADMAP_INFO2_0x285c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC04Cu; }
        if (ctx->pc != 0x1AC04Cu) { return; }
    }
    ctx->pc = 0x1AC04Cu;
label_1ac04c:
    // 0x1ac04c: 0x1440007e  bnez        $v0, . + 4 + (0x7E << 2)
label_1ac050:
    if (ctx->pc == 0x1AC050u) {
        ctx->pc = 0x1AC050u;
            // 0x1ac050: 0x3c0244a7  lui         $v0, 0x44A7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17575 << 16));
        ctx->pc = 0x1AC054u;
        goto label_1ac054;
    }
    ctx->pc = 0x1AC04Cu;
    {
        const bool branch_taken_0x1ac04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC04Cu;
            // 0x1ac050: 0x3c0244a7  lui         $v0, 0x44A7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17575 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac04c) {
            ctx->pc = 0x1AC248u;
            goto label_1ac248;
        }
    }
    ctx->pc = 0x1AC054u;
label_1ac054:
    // 0x1ac054: 0x3c0244ed  lui         $v0, 0x44ED
    ctx->pc = 0x1ac054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17645 << 16));
label_1ac058:
    // 0x1ac058: 0x27b600e4  addiu       $s6, $sp, 0xE4
    ctx->pc = 0x1ac058u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_1ac05c:
    // 0x1ac05c: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1ac05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1ac060:
    // 0x1ac060: 0x27b500e8  addiu       $s5, $sp, 0xE8
    ctx->pc = 0x1ac060u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_1ac064:
    // 0x1ac064: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x1ac064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_1ac068:
    // 0x1ac068: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x1ac068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
label_1ac06c:
    // 0x1ac06c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1ac06cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_1ac070:
    // 0x1ac070: 0x27b300f4  addiu       $s3, $sp, 0xF4
    ctx->pc = 0x1ac070u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
label_1ac074:
    // 0x1ac074: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1ac074u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1ac078:
    // 0x1ac078: 0x27b400f8  addiu       $s4, $sp, 0xF8
    ctx->pc = 0x1ac078u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_1ac07c:
    // 0x1ac07c: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x1ac07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
label_1ac080:
    // 0x1ac080: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x1ac080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_1ac084:
    // 0x1ac084: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1ac084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1ac088:
    // 0x1ac088: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1ac088u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1ac08c:
    // 0x1ac08c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1ac08cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1ac090:
    // 0x1ac090: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ac090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1ac094:
    // 0x1ac094: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1ac094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1ac098:
    // 0x1ac098: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1ac098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1ac09c:
    // 0x1ac09c: 0xc04bd7c  jal         func_12F5F0
label_1ac0a0:
    if (ctx->pc == 0x1AC0A0u) {
        ctx->pc = 0x1AC0A0u;
            // 0x1ac0a0: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1AC0A4u;
        goto label_1ac0a4;
    }
    ctx->pc = 0x1AC09Cu;
    SET_GPR_U32(ctx, 31, 0x1AC0A4u);
    ctx->pc = 0x1AC0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC09Cu;
            // 0x1ac0a0: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F5F0u;
    if (runtime->hasFunction(0x12F5F0u)) {
        auto targetFn = runtime->lookupFunction(0x12F5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC0A4u; }
        if (ctx->pc != 0x1AC0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistLinePoint__FPfPfPfPf_0x12f5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC0A4u; }
        if (ctx->pc != 0x1AC0A4u) { return; }
    }
    ctx->pc = 0x1AC0A4u;
label_1ac0a4:
    // 0x1ac0a4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1ac0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1ac0a8:
    // 0x1ac0a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ac0a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ac0ac:
    // 0x1ac0ac: 0x0  nop
    ctx->pc = 0x1ac0acu;
    // NOP
label_1ac0b0:
    // 0x1ac0b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ac0b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ac0b4:
    // 0x1ac0b4: 0x0  nop
    ctx->pc = 0x1ac0b4u;
    // NOP
label_1ac0b8:
    // 0x1ac0b8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1ac0bc:
    if (ctx->pc == 0x1AC0BCu) {
        ctx->pc = 0x1AC0BCu;
            // 0x1ac0bc: 0x3c0244d6  lui         $v0, 0x44D6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17622 << 16));
        ctx->pc = 0x1AC0C0u;
        goto label_1ac0c0;
    }
    ctx->pc = 0x1AC0B8u;
    {
        const bool branch_taken_0x1ac0b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AC0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC0B8u;
            // 0x1ac0bc: 0x3c0244d6  lui         $v0, 0x44D6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17622 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac0b8) {
            ctx->pc = 0x1AC0C4u;
            goto label_1ac0c4;
        }
    }
    ctx->pc = 0x1AC0C0u;
label_1ac0c0:
    // 0x1ac0c0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1ac0c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac0c4:
    // 0x1ac0c4: 0x3c04c397  lui         $a0, 0xC397
    ctx->pc = 0x1ac0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50071 << 16));
label_1ac0c8:
    // 0x1ac0c8: 0x34432000  ori         $v1, $v0, 0x2000
    ctx->pc = 0x1ac0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_1ac0cc:
    // 0x1ac0cc: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1ac0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1ac0d0:
    // 0x1ac0d0: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x1ac0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_1ac0d4:
    // 0x1ac0d4: 0x3c0244b1  lui         $v0, 0x44B1
    ctx->pc = 0x1ac0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17585 << 16));
label_1ac0d8:
    // 0x1ac0d8: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1ac0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_1ac0dc:
    // 0x1ac0dc: 0x3443e000  ori         $v1, $v0, 0xE000
    ctx->pc = 0x1ac0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
label_1ac0e0:
    // 0x1ac0e0: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x1ac0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
label_1ac0e4:
    // 0x1ac0e4: 0x3c02c3f3  lui         $v0, 0xC3F3
    ctx->pc = 0x1ac0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50163 << 16));
label_1ac0e8:
    // 0x1ac0e8: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x1ac0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_1ac0ec:
    // 0x1ac0ec: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1ac0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1ac0f0:
    // 0x1ac0f0: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1ac0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1ac0f4:
    // 0x1ac0f4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ac0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1ac0f8:
    // 0x1ac0f8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1ac0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1ac0fc:
    // 0x1ac0fc: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1ac0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1ac100:
    // 0x1ac100: 0xc04bd7c  jal         func_12F5F0
label_1ac104:
    if (ctx->pc == 0x1AC104u) {
        ctx->pc = 0x1AC104u;
            // 0x1ac104: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1AC108u;
        goto label_1ac108;
    }
    ctx->pc = 0x1AC100u;
    SET_GPR_U32(ctx, 31, 0x1AC108u);
    ctx->pc = 0x1AC104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC100u;
            // 0x1ac104: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F5F0u;
    if (runtime->hasFunction(0x12F5F0u)) {
        auto targetFn = runtime->lookupFunction(0x12F5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC108u; }
        if (ctx->pc != 0x1AC108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistLinePoint__FPfPfPfPf_0x12f5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC108u; }
        if (ctx->pc != 0x1AC108u) { return; }
    }
    ctx->pc = 0x1AC108u;
label_1ac108:
    // 0x1ac108: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1ac108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1ac10c:
    // 0x1ac10c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ac10cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ac110:
    // 0x1ac110: 0x0  nop
    ctx->pc = 0x1ac110u;
    // NOP
label_1ac114:
    // 0x1ac114: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ac114u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ac118:
    // 0x1ac118: 0x0  nop
    ctx->pc = 0x1ac118u;
    // NOP
label_1ac11c:
    // 0x1ac11c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1ac120:
    if (ctx->pc == 0x1AC120u) {
        ctx->pc = 0x1AC120u;
            // 0x1ac120: 0x3c02c4ac  lui         $v0, 0xC4AC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50348 << 16));
        ctx->pc = 0x1AC124u;
        goto label_1ac124;
    }
    ctx->pc = 0x1AC11Cu;
    {
        const bool branch_taken_0x1ac11c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AC120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC11Cu;
            // 0x1ac120: 0x3c02c4ac  lui         $v0, 0xC4AC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50348 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac11c) {
            ctx->pc = 0x1AC128u;
            goto label_1ac128;
        }
    }
    ctx->pc = 0x1AC124u;
label_1ac124:
    // 0x1ac124: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1ac124u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac128:
    // 0x1ac128: 0x3c034317  lui         $v1, 0x4317
    ctx->pc = 0x1ac128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17175 << 16));
label_1ac12c:
    // 0x1ac12c: 0x34478000  ori         $a3, $v0, 0x8000
    ctx->pc = 0x1ac12cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1ac130:
    // 0x1ac130: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ac130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1ac134:
    // 0x1ac134: 0xafa700e0  sw          $a3, 0xE0($sp)
    ctx->pc = 0x1ac134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 7));
label_1ac138:
    // 0x1ac138: 0x3c0243de  lui         $v0, 0x43DE
    ctx->pc = 0x1ac138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17374 << 16));
label_1ac13c:
    // 0x1ac13c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1ac13cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_1ac140:
    // 0x1ac140: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1ac140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1ac144:
    // 0x1ac144: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1ac144u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_1ac148:
    // 0x1ac148: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1ac148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1ac14c:
    // 0x1ac14c: 0xafa700f0  sw          $a3, 0xF0($sp)
    ctx->pc = 0x1ac14cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 7));
label_1ac150:
    // 0x1ac150: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1ac150u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1ac154:
    // 0x1ac154: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x1ac154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1ac158:
    // 0x1ac158: 0xc04bd7c  jal         func_12F5F0
label_1ac15c:
    if (ctx->pc == 0x1AC15Cu) {
        ctx->pc = 0x1AC15Cu;
            // 0x1ac15c: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1AC160u;
        goto label_1ac160;
    }
    ctx->pc = 0x1AC158u;
    SET_GPR_U32(ctx, 31, 0x1AC160u);
    ctx->pc = 0x1AC15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC158u;
            // 0x1ac15c: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F5F0u;
    if (runtime->hasFunction(0x12F5F0u)) {
        auto targetFn = runtime->lookupFunction(0x12F5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC160u; }
        if (ctx->pc != 0x1AC160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistLinePoint__FPfPfPfPf_0x12f5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC160u; }
        if (ctx->pc != 0x1AC160u) { return; }
    }
    ctx->pc = 0x1AC160u;
label_1ac160:
    // 0x1ac160: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1ac160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1ac164:
    // 0x1ac164: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ac164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ac168:
    // 0x1ac168: 0x0  nop
    ctx->pc = 0x1ac168u;
    // NOP
label_1ac16c:
    // 0x1ac16c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ac16cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ac170:
    // 0x1ac170: 0x0  nop
    ctx->pc = 0x1ac170u;
    // NOP
label_1ac174:
    // 0x1ac174: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1ac178:
    if (ctx->pc == 0x1AC178u) {
        ctx->pc = 0x1AC178u;
            // 0x1ac178: 0x3c03c54d  lui         $v1, 0xC54D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50509 << 16));
        ctx->pc = 0x1AC17Cu;
        goto label_1ac17c;
    }
    ctx->pc = 0x1AC174u;
    {
        const bool branch_taken_0x1ac174 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AC178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC174u;
            // 0x1ac178: 0x3c03c54d  lui         $v1, 0xC54D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50509 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac174) {
            ctx->pc = 0x1AC180u;
            goto label_1ac180;
        }
    }
    ctx->pc = 0x1AC17Cu;
label_1ac17c:
    // 0x1ac17c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1ac17cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac180:
    // 0x1ac180: 0x3c0244aa  lui         $v0, 0x44AA
    ctx->pc = 0x1ac180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17578 << 16));
label_1ac184:
    // 0x1ac184: 0x34633000  ori         $v1, $v1, 0x3000
    ctx->pc = 0x1ac184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12288);
label_1ac188:
    // 0x1ac188: 0x34444000  ori         $a0, $v0, 0x4000
    ctx->pc = 0x1ac188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1ac18c:
    // 0x1ac18c: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x1ac18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_1ac190:
    // 0x1ac190: 0x3c02c53b  lui         $v0, 0xC53B
    ctx->pc = 0x1ac190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50491 << 16));
label_1ac194:
    // 0x1ac194: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1ac194u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_1ac198:
    // 0x1ac198: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x1ac198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1ac19c:
    // 0x1ac19c: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x1ac19cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
label_1ac1a0:
    // 0x1ac1a0: 0x3c0244ca  lui         $v0, 0x44CA
    ctx->pc = 0x1ac1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17610 << 16));
label_1ac1a4:
    // 0x1ac1a4: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x1ac1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_1ac1a8:
    // 0x1ac1a8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ac1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1ac1ac:
    // 0x1ac1ac: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1ac1acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1ac1b0:
    // 0x1ac1b0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1ac1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1ac1b4:
    // 0x1ac1b4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1ac1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1ac1b8:
    // 0x1ac1b8: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1ac1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1ac1bc:
    // 0x1ac1bc: 0xc04bd7c  jal         func_12F5F0
label_1ac1c0:
    if (ctx->pc == 0x1AC1C0u) {
        ctx->pc = 0x1AC1C0u;
            // 0x1ac1c0: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1AC1C4u;
        goto label_1ac1c4;
    }
    ctx->pc = 0x1AC1BCu;
    SET_GPR_U32(ctx, 31, 0x1AC1C4u);
    ctx->pc = 0x1AC1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC1BCu;
            // 0x1ac1c0: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F5F0u;
    if (runtime->hasFunction(0x12F5F0u)) {
        auto targetFn = runtime->lookupFunction(0x12F5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC1C4u; }
        if (ctx->pc != 0x1AC1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistLinePoint__FPfPfPfPf_0x12f5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC1C4u; }
        if (ctx->pc != 0x1AC1C4u) { return; }
    }
    ctx->pc = 0x1AC1C4u;
label_1ac1c4:
    // 0x1ac1c4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1ac1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1ac1c8:
    // 0x1ac1c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ac1c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ac1cc:
    // 0x1ac1cc: 0x0  nop
    ctx->pc = 0x1ac1ccu;
    // NOP
label_1ac1d0:
    // 0x1ac1d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ac1d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ac1d4:
    // 0x1ac1d4: 0x0  nop
    ctx->pc = 0x1ac1d4u;
    // NOP
label_1ac1d8:
    // 0x1ac1d8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1ac1dc:
    if (ctx->pc == 0x1AC1DCu) {
        ctx->pc = 0x1AC1DCu;
            // 0x1ac1dc: 0x3c02c50a  lui         $v0, 0xC50A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50442 << 16));
        ctx->pc = 0x1AC1E0u;
        goto label_1ac1e0;
    }
    ctx->pc = 0x1AC1D8u;
    {
        const bool branch_taken_0x1ac1d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AC1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC1D8u;
            // 0x1ac1dc: 0x3c02c50a  lui         $v0, 0xC50A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50442 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac1d8) {
            ctx->pc = 0x1AC1E4u;
            goto label_1ac1e4;
        }
    }
    ctx->pc = 0x1AC1E0u;
label_1ac1e0:
    // 0x1ac1e0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1ac1e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac1e4:
    // 0x1ac1e4: 0x3c04441d  lui         $a0, 0x441D
    ctx->pc = 0x1ac1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17437 << 16));
label_1ac1e8:
    // 0x1ac1e8: 0x3443a000  ori         $v1, $v0, 0xA000
    ctx->pc = 0x1ac1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
label_1ac1ec:
    // 0x1ac1ec: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1ac1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1ac1f0:
    // 0x1ac1f0: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x1ac1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_1ac1f4:
    // 0x1ac1f4: 0x3c02c4ff  lui         $v0, 0xC4FF
    ctx->pc = 0x1ac1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50431 << 16));
label_1ac1f8:
    // 0x1ac1f8: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1ac1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_1ac1fc:
    // 0x1ac1fc: 0x34432000  ori         $v1, $v0, 0x2000
    ctx->pc = 0x1ac1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_1ac200:
    // 0x1ac200: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x1ac200u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
label_1ac204:
    // 0x1ac204: 0x3c024425  lui         $v0, 0x4425
    ctx->pc = 0x1ac204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17445 << 16));
label_1ac208:
    // 0x1ac208: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x1ac208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_1ac20c:
    // 0x1ac20c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ac20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1ac210:
    // 0x1ac210: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1ac210u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1ac214:
    // 0x1ac214: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1ac214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1ac218:
    // 0x1ac218: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1ac218u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1ac21c:
    // 0x1ac21c: 0xc04bd7c  jal         func_12F5F0
label_1ac220:
    if (ctx->pc == 0x1AC220u) {
        ctx->pc = 0x1AC220u;
            // 0x1ac220: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1AC224u;
        goto label_1ac224;
    }
    ctx->pc = 0x1AC21Cu;
    SET_GPR_U32(ctx, 31, 0x1AC224u);
    ctx->pc = 0x1AC220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC21Cu;
            // 0x1ac220: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F5F0u;
    if (runtime->hasFunction(0x12F5F0u)) {
        auto targetFn = runtime->lookupFunction(0x12F5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC224u; }
        if (ctx->pc != 0x1AC224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistLinePoint__FPfPfPfPf_0x12f5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC224u; }
        if (ctx->pc != 0x1AC224u) { return; }
    }
    ctx->pc = 0x1AC224u;
label_1ac224:
    // 0x1ac224: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1ac224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1ac228:
    // 0x1ac228: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ac228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ac22c:
    // 0x1ac22c: 0x0  nop
    ctx->pc = 0x1ac22cu;
    // NOP
label_1ac230:
    // 0x1ac230: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ac230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ac234:
    // 0x1ac234: 0x0  nop
    ctx->pc = 0x1ac234u;
    // NOP
label_1ac238:
    // 0x1ac238: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1ac23c:
    if (ctx->pc == 0x1AC23Cu) {
        ctx->pc = 0x1AC240u;
        goto label_1ac240;
    }
    ctx->pc = 0x1AC238u;
    {
        const bool branch_taken_0x1ac238 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ac238) {
            ctx->pc = 0x1AC244u;
            goto label_1ac244;
        }
    }
    ctx->pc = 0x1AC240u;
label_1ac240:
    // 0x1ac240: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1ac240u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac244:
    // 0x1ac244: 0x3c0244a7  lui         $v0, 0x44A7
    ctx->pc = 0x1ac244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17575 << 16));
label_1ac248:
    // 0x1ac248: 0x27b600e4  addiu       $s6, $sp, 0xE4
    ctx->pc = 0x1ac248u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_1ac24c:
    // 0x1ac24c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1ac24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1ac250:
    // 0x1ac250: 0x3c03429e  lui         $v1, 0x429E
    ctx->pc = 0x1ac250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17054 << 16));
label_1ac254:
    // 0x1ac254: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1ac254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1ac258:
    // 0x1ac258: 0x27b500e8  addiu       $s5, $sp, 0xE8
    ctx->pc = 0x1ac258u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_1ac25c:
    // 0x1ac25c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1ac25cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_1ac260:
    // 0x1ac260: 0x3c02448c  lui         $v0, 0x448C
    ctx->pc = 0x1ac260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17548 << 16));
label_1ac264:
    // 0x1ac264: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1ac264u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_1ac268:
    // 0x1ac268: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x1ac268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
label_1ac26c:
    // 0x1ac26c: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x1ac26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_1ac270:
    // 0x1ac270: 0x27b300f4  addiu       $s3, $sp, 0xF4
    ctx->pc = 0x1ac270u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
label_1ac274:
    // 0x1ac274: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1ac274u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1ac278:
    // 0x1ac278: 0x3c03c375  lui         $v1, 0xC375
    ctx->pc = 0x1ac278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50037 << 16));
label_1ac27c:
    // 0x1ac27c: 0x27b400f8  addiu       $s4, $sp, 0xF8
    ctx->pc = 0x1ac27cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_1ac280:
    // 0x1ac280: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1ac280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1ac284:
    // 0x1ac284: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1ac284u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_1ac288:
    // 0x1ac288: 0x8f838c88  lw          $v1, -0x7378($gp)
    ctx->pc = 0x1ac288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1ac28c:
    // 0x1ac28c: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_1ac290:
    if (ctx->pc == 0x1AC290u) {
        ctx->pc = 0x1AC290u;
            // 0x1ac290: 0x3c0244bb  lui         $v0, 0x44BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
        ctx->pc = 0x1AC294u;
        goto label_1ac294;
    }
    ctx->pc = 0x1AC28Cu;
    {
        const bool branch_taken_0x1ac28c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC28Cu;
            // 0x1ac290: 0x3c0244bb  lui         $v0, 0x44BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac28c) {
            ctx->pc = 0x1AC2E8u;
            goto label_1ac2e8;
        }
    }
    ctx->pc = 0x1AC294u;
label_1ac294:
    // 0x1ac294: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ac294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1ac298:
    // 0x1ac298: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1ac298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1ac29c:
    // 0x1ac29c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1ac29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1ac2a0:
    // 0x1ac2a0: 0xc04bd7c  jal         func_12F5F0
label_1ac2a4:
    if (ctx->pc == 0x1AC2A4u) {
        ctx->pc = 0x1AC2A4u;
            // 0x1ac2a4: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1AC2A8u;
        goto label_1ac2a8;
    }
    ctx->pc = 0x1AC2A0u;
    SET_GPR_U32(ctx, 31, 0x1AC2A8u);
    ctx->pc = 0x1AC2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC2A0u;
            // 0x1ac2a4: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F5F0u;
    if (runtime->hasFunction(0x12F5F0u)) {
        auto targetFn = runtime->lookupFunction(0x12F5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC2A8u; }
        if (ctx->pc != 0x1AC2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistLinePoint__FPfPfPfPf_0x12f5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC2A8u; }
        if (ctx->pc != 0x1AC2A8u) { return; }
    }
    ctx->pc = 0x1AC2A8u;
label_1ac2a8:
    // 0x1ac2a8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1ac2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1ac2ac:
    // 0x1ac2ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ac2acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ac2b0:
    // 0x1ac2b0: 0x0  nop
    ctx->pc = 0x1ac2b0u;
    // NOP
label_1ac2b4:
    // 0x1ac2b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ac2b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ac2b8:
    // 0x1ac2b8: 0x0  nop
    ctx->pc = 0x1ac2b8u;
    // NOP
label_1ac2bc:
    // 0x1ac2bc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_1ac2c0:
    if (ctx->pc == 0x1AC2C0u) {
        ctx->pc = 0x1AC2C4u;
        goto label_1ac2c4;
    }
    ctx->pc = 0x1AC2BCu;
    {
        const bool branch_taken_0x1ac2bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ac2bc) {
            ctx->pc = 0x1AC2E4u;
            goto label_1ac2e4;
        }
    }
    ctx->pc = 0x1AC2C4u;
label_1ac2c4:
    // 0x1ac2c4: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ac2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ac2c8:
    // 0x1ac2c8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1ac2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1ac2cc:
    // 0x1ac2cc: 0xc0a0f30  jal         func_283CC0
label_1ac2d0:
    if (ctx->pc == 0x1AC2D0u) {
        ctx->pc = 0x1AC2D0u;
            // 0x1ac2d0: 0x24a56390  addiu       $a1, $a1, 0x6390 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25488));
        ctx->pc = 0x1AC2D4u;
        goto label_1ac2d4;
    }
    ctx->pc = 0x1AC2CCu;
    SET_GPR_U32(ctx, 31, 0x1AC2D4u);
    ctx->pc = 0x1AC2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC2CCu;
            // 0x1ac2d0: 0x24a56390  addiu       $a1, $a1, 0x6390 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283CC0u;
    if (runtime->hasFunction(0x283CC0u)) {
        auto targetFn = runtime->lookupFunction(0x283CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC2D4u; }
        if (ctx->pc != 0x1AC2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapID__6CSceneFPc_0x283cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC2D4u; }
        if (ctx->pc != 0x1AC2D4u) { return; }
    }
    ctx->pc = 0x1AC2D4u;
label_1ac2d4:
    // 0x1ac2d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac2d8:
    // 0x1ac2d8: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
label_1ac2dc:
    if (ctx->pc == 0x1AC2DCu) {
        ctx->pc = 0x1AC2E0u;
        goto label_1ac2e0;
    }
    ctx->pc = 0x1AC2D8u;
    {
        const bool branch_taken_0x1ac2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ac2d8) {
            ctx->pc = 0x1AC2E4u;
            goto label_1ac2e4;
        }
    }
    ctx->pc = 0x1AC2E0u;
label_1ac2e0:
    // 0x1ac2e0: 0x2412000b  addiu       $s2, $zero, 0xB
    ctx->pc = 0x1ac2e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1ac2e4:
    // 0x1ac2e4: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1ac2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_1ac2e8:
    // 0x1ac2e8: 0x3c0344c8  lui         $v1, 0x44C8
    ctx->pc = 0x1ac2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17608 << 16));
label_1ac2ec:
    // 0x1ac2ec: 0x34468000  ori         $a2, $v0, 0x8000
    ctx->pc = 0x1ac2ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1ac2f0:
    // 0x1ac2f0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ac2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1ac2f4:
    // 0x1ac2f4: 0xafa600e0  sw          $a2, 0xE0($sp)
    ctx->pc = 0x1ac2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 6));
label_1ac2f8:
    // 0x1ac2f8: 0x3c024489  lui         $v0, 0x4489
    ctx->pc = 0x1ac2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17545 << 16));
label_1ac2fc:
    // 0x1ac2fc: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1ac2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_1ac300:
    // 0x1ac300: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1ac300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1ac304:
    // 0x1ac304: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1ac304u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_1ac308:
    // 0x1ac308: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1ac308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1ac30c:
    // 0x1ac30c: 0xafa600f0  sw          $a2, 0xF0($sp)
    ctx->pc = 0x1ac30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 6));
label_1ac310:
    // 0x1ac310: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x1ac310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1ac314:
    // 0x1ac314: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1ac314u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1ac318:
    // 0x1ac318: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1ac318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1ac31c:
    // 0x1ac31c: 0xc04bd7c  jal         func_12F5F0
label_1ac320:
    if (ctx->pc == 0x1AC320u) {
        ctx->pc = 0x1AC320u;
            // 0x1ac320: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1AC324u;
        goto label_1ac324;
    }
    ctx->pc = 0x1AC31Cu;
    SET_GPR_U32(ctx, 31, 0x1AC324u);
    ctx->pc = 0x1AC320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC31Cu;
            // 0x1ac320: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F5F0u;
    if (runtime->hasFunction(0x12F5F0u)) {
        auto targetFn = runtime->lookupFunction(0x12F5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC324u; }
        if (ctx->pc != 0x1AC324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistLinePoint__FPfPfPfPf_0x12f5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC324u; }
        if (ctx->pc != 0x1AC324u) { return; }
    }
    ctx->pc = 0x1AC324u;
label_1ac324:
    // 0x1ac324: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1ac324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1ac328:
    // 0x1ac328: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ac328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ac32c:
    // 0x1ac32c: 0x0  nop
    ctx->pc = 0x1ac32cu;
    // NOP
label_1ac330:
    // 0x1ac330: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ac330u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ac334:
    // 0x1ac334: 0x0  nop
    ctx->pc = 0x1ac334u;
    // NOP
label_1ac338:
    // 0x1ac338: 0x45000030  bc1f        . + 4 + (0x30 << 2)
label_1ac33c:
    if (ctx->pc == 0x1AC33Cu) {
        ctx->pc = 0x1AC340u;
        goto label_1ac340;
    }
    ctx->pc = 0x1AC338u;
    {
        const bool branch_taken_0x1ac338 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ac338) {
            ctx->pc = 0x1AC3FCu;
            goto label_1ac3fc;
        }
    }
    ctx->pc = 0x1AC340u;
label_1ac340:
    // 0x1ac340: 0xc0953e0  jal         func_254F80
label_1ac344:
    if (ctx->pc == 0x1AC344u) {
        ctx->pc = 0x1AC348u;
        goto label_1ac348;
    }
    ctx->pc = 0x1AC340u;
    SET_GPR_U32(ctx, 31, 0x1AC348u);
    ctx->pc = 0x254F80u;
    if (runtime->hasFunction(0x254F80u)) {
        auto targetFn = runtime->lookupFunction(0x254F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC348u; }
        if (ctx->pc != 0x1AC348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSquareEvent__Fv_0x254f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC348u; }
        if (ctx->pc != 0x1AC348u) { return; }
    }
    ctx->pc = 0x1AC348u;
label_1ac348:
    // 0x1ac348: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1ac34c:
    if (ctx->pc == 0x1AC34Cu) {
        ctx->pc = 0x1AC350u;
        goto label_1ac350;
    }
    ctx->pc = 0x1AC348u;
    {
        const bool branch_taken_0x1ac348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac348) {
            ctx->pc = 0x1AC3CCu;
            goto label_1ac3cc;
        }
    }
    ctx->pc = 0x1AC350u;
label_1ac350:
    // 0x1ac350: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1ac350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac354:
    // 0x1ac354: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1ac354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_1ac358:
    // 0x1ac358: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1ac358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1ac35c:
    // 0x1ac35c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ac35cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ac360:
    // 0x1ac360: 0x0  nop
    ctx->pc = 0x1ac360u;
    // NOP
label_1ac364:
    // 0x1ac364: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ac364u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ac368:
    // 0x1ac368: 0x0  nop
    ctx->pc = 0x1ac368u;
    // NOP
label_1ac36c:
    // 0x1ac36c: 0x45010023  bc1t        . + 4 + (0x23 << 2)
label_1ac370:
    if (ctx->pc == 0x1AC370u) {
        ctx->pc = 0x1AC370u;
            // 0x1ac370: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1AC374u;
        goto label_1ac374;
    }
    ctx->pc = 0x1AC36Cu;
    {
        const bool branch_taken_0x1ac36c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AC370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC36Cu;
            // 0x1ac370: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac36c) {
            ctx->pc = 0x1AC3FCu;
            goto label_1ac3fc;
        }
    }
    ctx->pc = 0x1AC374u;
label_1ac374:
    // 0x1ac374: 0xc420c650  lwc1        $f0, -0x39B0($at)
    ctx->pc = 0x1ac374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac378:
    // 0x1ac378: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ac378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ac37c:
    // 0x1ac37c: 0x0  nop
    ctx->pc = 0x1ac37cu;
    // NOP
label_1ac380:
    // 0x1ac380: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_1ac384:
    if (ctx->pc == 0x1AC384u) {
        ctx->pc = 0x1AC388u;
        goto label_1ac388;
    }
    ctx->pc = 0x1AC380u;
    {
        const bool branch_taken_0x1ac380 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ac380) {
            ctx->pc = 0x1AC3FCu;
            goto label_1ac3fc;
        }
    }
    ctx->pc = 0x1AC388u;
label_1ac388:
    // 0x1ac388: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ac388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ac38c:
    // 0x1ac38c: 0x240500c9  addiu       $a1, $zero, 0xC9
    ctx->pc = 0x1ac38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
label_1ac390:
    // 0x1ac390: 0xc0b1f3c  jal         func_2C7CF0
label_1ac394:
    if (ctx->pc == 0x1AC394u) {
        ctx->pc = 0x1AC394u;
            // 0x1ac394: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AC398u;
        goto label_1ac398;
    }
    ctx->pc = 0x1AC390u;
    SET_GPR_U32(ctx, 31, 0x1AC398u);
    ctx->pc = 0x1AC394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC390u;
            // 0x1ac394: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7CF0u;
    if (runtime->hasFunction(0x2C7CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2C7CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC398u; }
        if (ctx->pc != 0x1AC398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunEvent__6CSceneFiP15CSceneEventData_0x2c7cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC398u; }
        if (ctx->pc != 0x1AC398u) { return; }
    }
    ctx->pc = 0x1AC398u;
label_1ac398:
    // 0x1ac398: 0xc0c0fc8  jal         func_303F20
label_1ac39c:
    if (ctx->pc == 0x1AC39Cu) {
        ctx->pc = 0x1AC3A0u;
        goto label_1ac3a0;
    }
    ctx->pc = 0x1AC398u;
    SET_GPR_U32(ctx, 31, 0x1AC3A0u);
    ctx->pc = 0x303F20u;
    if (runtime->hasFunction(0x303F20u)) {
        auto targetFn = runtime->lookupFunction(0x303F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC3A0u; }
        if (ctx->pc != 0x1AC3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameRunning__Fv_0x303f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC3A0u; }
        if (ctx->pc != 0x1AC3A0u) { return; }
    }
    ctx->pc = 0x1AC3A0u;
label_1ac3a0:
    // 0x1ac3a0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_1ac3a4:
    if (ctx->pc == 0x1AC3A4u) {
        ctx->pc = 0x1AC3A8u;
        goto label_1ac3a8;
    }
    ctx->pc = 0x1AC3A0u;
    {
        const bool branch_taken_0x1ac3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac3a0) {
            ctx->pc = 0x1AC3FCu;
            goto label_1ac3fc;
        }
    }
    ctx->pc = 0x1AC3A8u;
label_1ac3a8:
    // 0x1ac3a8: 0xc0c0fcc  jal         func_303F30
label_1ac3ac:
    if (ctx->pc == 0x1AC3ACu) {
        ctx->pc = 0x1AC3B0u;
        goto label_1ac3b0;
    }
    ctx->pc = 0x1AC3A8u;
    SET_GPR_U32(ctx, 31, 0x1AC3B0u);
    ctx->pc = 0x303F30u;
    if (runtime->hasFunction(0x303F30u)) {
        auto targetFn = runtime->lookupFunction(0x303F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC3B0u; }
        if (ctx->pc != 0x1AC3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSubGameNo__Fv_0x303f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC3B0u; }
        if (ctx->pc != 0x1AC3B0u) { return; }
    }
    ctx->pc = 0x1AC3B0u;
label_1ac3b0:
    // 0x1ac3b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac3b4:
    // 0x1ac3b4: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
label_1ac3b8:
    if (ctx->pc == 0x1AC3B8u) {
        ctx->pc = 0x1AC3BCu;
        goto label_1ac3bc;
    }
    ctx->pc = 0x1AC3B4u;
    {
        const bool branch_taken_0x1ac3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ac3b4) {
            ctx->pc = 0x1AC3FCu;
            goto label_1ac3fc;
        }
    }
    ctx->pc = 0x1AC3BCu;
label_1ac3bc:
    // 0x1ac3bc: 0xc0c1090  jal         func_304240
label_1ac3c0:
    if (ctx->pc == 0x1AC3C0u) {
        ctx->pc = 0x1AC3C4u;
        goto label_1ac3c4;
    }
    ctx->pc = 0x1AC3BCu;
    SET_GPR_U32(ctx, 31, 0x1AC3C4u);
    ctx->pc = 0x304240u;
    if (runtime->hasFunction(0x304240u)) {
        auto targetFn = runtime->lookupFunction(0x304240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC3C4u; }
        if (ctx->pc != 0x1AC3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgExitSubGame__Fv_0x304240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC3C4u; }
        if (ctx->pc != 0x1AC3C4u) { return; }
    }
    ctx->pc = 0x1AC3C4u;
label_1ac3c4:
    // 0x1ac3c4: 0x1000000d  b           . + 4 + (0xD << 2)
label_1ac3c8:
    if (ctx->pc == 0x1AC3C8u) {
        ctx->pc = 0x1AC3CCu;
        goto label_1ac3cc;
    }
    ctx->pc = 0x1AC3C4u;
    {
        const bool branch_taken_0x1ac3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac3c4) {
            ctx->pc = 0x1AC3FCu;
            goto label_1ac3fc;
        }
    }
    ctx->pc = 0x1AC3CCu;
label_1ac3cc:
    // 0x1ac3cc: 0x8f838c88  lw          $v1, -0x7378($gp)
    ctx->pc = 0x1ac3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1ac3d0:
    // 0x1ac3d0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1ac3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1ac3d4:
    // 0x1ac3d4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_1ac3d8:
    if (ctx->pc == 0x1AC3D8u) {
        ctx->pc = 0x1AC3DCu;
        goto label_1ac3dc;
    }
    ctx->pc = 0x1AC3D4u;
    {
        const bool branch_taken_0x1ac3d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ac3d4) {
            ctx->pc = 0x1AC3FCu;
            goto label_1ac3fc;
        }
    }
    ctx->pc = 0x1AC3DCu;
label_1ac3dc:
    // 0x1ac3dc: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ac3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ac3e0:
    // 0x1ac3e0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1ac3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1ac3e4:
    // 0x1ac3e4: 0xc0a0f30  jal         func_283CC0
label_1ac3e8:
    if (ctx->pc == 0x1AC3E8u) {
        ctx->pc = 0x1AC3E8u;
            // 0x1ac3e8: 0x24a56398  addiu       $a1, $a1, 0x6398 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25496));
        ctx->pc = 0x1AC3ECu;
        goto label_1ac3ec;
    }
    ctx->pc = 0x1AC3E4u;
    SET_GPR_U32(ctx, 31, 0x1AC3ECu);
    ctx->pc = 0x1AC3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC3E4u;
            // 0x1ac3e8: 0x24a56398  addiu       $a1, $a1, 0x6398 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283CC0u;
    if (runtime->hasFunction(0x283CC0u)) {
        auto targetFn = runtime->lookupFunction(0x283CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC3ECu; }
        if (ctx->pc != 0x1AC3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapID__6CSceneFPc_0x283cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC3ECu; }
        if (ctx->pc != 0x1AC3ECu) { return; }
    }
    ctx->pc = 0x1AC3ECu;
label_1ac3ec:
    // 0x1ac3ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac3f0:
    // 0x1ac3f0: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
label_1ac3f4:
    if (ctx->pc == 0x1AC3F4u) {
        ctx->pc = 0x1AC3F8u;
        goto label_1ac3f8;
    }
    ctx->pc = 0x1AC3F0u;
    {
        const bool branch_taken_0x1ac3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ac3f0) {
            ctx->pc = 0x1AC3FCu;
            goto label_1ac3fc;
        }
    }
    ctx->pc = 0x1AC3F8u;
label_1ac3f8:
    // 0x1ac3f8: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x1ac3f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1ac3fc:
    // 0x1ac3fc: 0xc064220  jal         func_190880
label_1ac400:
    if (ctx->pc == 0x1AC400u) {
        ctx->pc = 0x1AC404u;
        goto label_1ac404;
    }
    ctx->pc = 0x1AC3FCu;
    SET_GPR_U32(ctx, 31, 0x1AC404u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC404u; }
        if (ctx->pc != 0x1AC404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC404u; }
        if (ctx->pc != 0x1AC404u) { return; }
    }
    ctx->pc = 0x1AC404u;
label_1ac404:
    // 0x1ac404: 0x8c431a08  lw          $v1, 0x1A08($v0)
    ctx->pc = 0x1ac404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6664)));
label_1ac408:
    // 0x1ac408: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ac408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ac40c:
    // 0x1ac40c: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
label_1ac410:
    if (ctx->pc == 0x1AC410u) {
        ctx->pc = 0x1AC410u;
            // 0x1ac410: 0x3c02c50d  lui         $v0, 0xC50D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50445 << 16));
        ctx->pc = 0x1AC414u;
        goto label_1ac414;
    }
    ctx->pc = 0x1AC40Cu;
    {
        const bool branch_taken_0x1ac40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC40Cu;
            // 0x1ac410: 0x3c02c50d  lui         $v0, 0xC50D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50445 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac40c) {
            ctx->pc = 0x1AC4A4u;
            goto label_1ac4a4;
        }
    }
    ctx->pc = 0x1AC414u;
label_1ac414:
    // 0x1ac414: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ac414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ac418:
    // 0x1ac418: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_1ac41c:
    if (ctx->pc == 0x1AC41Cu) {
        ctx->pc = 0x1AC41Cu;
            // 0x1ac41c: 0x3c03c402  lui         $v1, 0xC402 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50178 << 16));
        ctx->pc = 0x1AC420u;
        goto label_1ac420;
    }
    ctx->pc = 0x1AC418u;
    {
        const bool branch_taken_0x1ac418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC418u;
            // 0x1ac41c: 0x3c03c402  lui         $v1, 0xC402 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50178 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac418) {
            ctx->pc = 0x1AC4A0u;
            goto label_1ac4a0;
        }
    }
    ctx->pc = 0x1AC420u;
label_1ac420:
    // 0x1ac420: 0x3c024373  lui         $v0, 0x4373
    ctx->pc = 0x1ac420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17267 << 16));
label_1ac424:
    // 0x1ac424: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x1ac424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_1ac428:
    // 0x1ac428: 0x3c04c418  lui         $a0, 0xC418
    ctx->pc = 0x1ac428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50200 << 16));
label_1ac42c:
    // 0x1ac42c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1ac42cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_1ac430:
    // 0x1ac430: 0x3c03c33b  lui         $v1, 0xC33B
    ctx->pc = 0x1ac430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49979 << 16));
label_1ac434:
    // 0x1ac434: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1ac434u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1ac438:
    // 0x1ac438: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x1ac438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
label_1ac43c:
    // 0x1ac43c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1ac43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1ac440:
    // 0x1ac440: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1ac440u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1ac444:
    // 0x1ac444: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1ac444u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_1ac448:
    // 0x1ac448: 0x8f838c88  lw          $v1, -0x7378($gp)
    ctx->pc = 0x1ac448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1ac44c:
    // 0x1ac44c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_1ac450:
    if (ctx->pc == 0x1AC450u) {
        ctx->pc = 0x1AC450u;
            // 0x1ac450: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1AC454u;
        goto label_1ac454;
    }
    ctx->pc = 0x1AC44Cu;
    {
        const bool branch_taken_0x1ac44c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC44Cu;
            // 0x1ac450: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac44c) {
            ctx->pc = 0x1AC4A0u;
            goto label_1ac4a0;
        }
    }
    ctx->pc = 0x1AC454u;
label_1ac454:
    // 0x1ac454: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1ac454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1ac458:
    // 0x1ac458: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1ac458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1ac45c:
    // 0x1ac45c: 0xc04bd7c  jal         func_12F5F0
label_1ac460:
    if (ctx->pc == 0x1AC460u) {
        ctx->pc = 0x1AC460u;
            // 0x1ac460: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1AC464u;
        goto label_1ac464;
    }
    ctx->pc = 0x1AC45Cu;
    SET_GPR_U32(ctx, 31, 0x1AC464u);
    ctx->pc = 0x1AC460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC45Cu;
            // 0x1ac460: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F5F0u;
    if (runtime->hasFunction(0x12F5F0u)) {
        auto targetFn = runtime->lookupFunction(0x12F5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC464u; }
        if (ctx->pc != 0x1AC464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistLinePoint__FPfPfPfPf_0x12f5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC464u; }
        if (ctx->pc != 0x1AC464u) { return; }
    }
    ctx->pc = 0x1AC464u;
label_1ac464:
    // 0x1ac464: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1ac464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1ac468:
    // 0x1ac468: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ac468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ac46c:
    // 0x1ac46c: 0x0  nop
    ctx->pc = 0x1ac46cu;
    // NOP
label_1ac470:
    // 0x1ac470: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ac470u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ac474:
    // 0x1ac474: 0x0  nop
    ctx->pc = 0x1ac474u;
    // NOP
label_1ac478:
    // 0x1ac478: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_1ac47c:
    if (ctx->pc == 0x1AC47Cu) {
        ctx->pc = 0x1AC480u;
        goto label_1ac480;
    }
    ctx->pc = 0x1AC478u;
    {
        const bool branch_taken_0x1ac478 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ac478) {
            ctx->pc = 0x1AC4A0u;
            goto label_1ac4a0;
        }
    }
    ctx->pc = 0x1AC480u;
label_1ac480:
    // 0x1ac480: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ac480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ac484:
    // 0x1ac484: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1ac484u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1ac488:
    // 0x1ac488: 0xc0a0f30  jal         func_283CC0
label_1ac48c:
    if (ctx->pc == 0x1AC48Cu) {
        ctx->pc = 0x1AC48Cu;
            // 0x1ac48c: 0x24a563a0  addiu       $a1, $a1, 0x63A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25504));
        ctx->pc = 0x1AC490u;
        goto label_1ac490;
    }
    ctx->pc = 0x1AC488u;
    SET_GPR_U32(ctx, 31, 0x1AC490u);
    ctx->pc = 0x1AC48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC488u;
            // 0x1ac48c: 0x24a563a0  addiu       $a1, $a1, 0x63A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283CC0u;
    if (runtime->hasFunction(0x283CC0u)) {
        auto targetFn = runtime->lookupFunction(0x283CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC490u; }
        if (ctx->pc != 0x1AC490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapID__6CSceneFPc_0x283cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC490u; }
        if (ctx->pc != 0x1AC490u) { return; }
    }
    ctx->pc = 0x1AC490u;
label_1ac490:
    // 0x1ac490: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac494:
    // 0x1ac494: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
label_1ac498:
    if (ctx->pc == 0x1AC498u) {
        ctx->pc = 0x1AC49Cu;
        goto label_1ac49c;
    }
    ctx->pc = 0x1AC494u;
    {
        const bool branch_taken_0x1ac494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ac494) {
            ctx->pc = 0x1AC4A0u;
            goto label_1ac4a0;
        }
    }
    ctx->pc = 0x1AC49Cu;
label_1ac49c:
    // 0x1ac49c: 0x2412000d  addiu       $s2, $zero, 0xD
    ctx->pc = 0x1ac49cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1ac4a0:
    // 0x1ac4a0: 0x3c02c50d  lui         $v0, 0xC50D
    ctx->pc = 0x1ac4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50445 << 16));
label_1ac4a4:
    // 0x1ac4a4: 0x3c034339  lui         $v1, 0x4339
    ctx->pc = 0x1ac4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17209 << 16));
label_1ac4a8:
    // 0x1ac4a8: 0x34423000  ori         $v0, $v0, 0x3000
    ctx->pc = 0x1ac4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
label_1ac4ac:
    // 0x1ac4ac: 0x27be0104  addiu       $fp, $sp, 0x104
    ctx->pc = 0x1ac4acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_1ac4b0:
    // 0x1ac4b0: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x1ac4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_1ac4b4:
    // 0x1ac4b4: 0x27b70108  addiu       $s7, $sp, 0x108
    ctx->pc = 0x1ac4b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_1ac4b8:
    // 0x1ac4b8: 0x3c024454  lui         $v0, 0x4454
    ctx->pc = 0x1ac4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17492 << 16));
label_1ac4bc:
    // 0x1ac4bc: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x1ac4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_1ac4c0:
    // 0x1ac4c0: 0x3443c000  ori         $v1, $v0, 0xC000
    ctx->pc = 0x1ac4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
label_1ac4c4:
    // 0x1ac4c4: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x1ac4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
label_1ac4c8:
    // 0x1ac4c8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1ac4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1ac4cc:
    // 0x1ac4cc: 0x8f838c88  lw          $v1, -0x7378($gp)
    ctx->pc = 0x1ac4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1ac4d0:
    // 0x1ac4d0: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_1ac4d4:
    if (ctx->pc == 0x1AC4D4u) {
        ctx->pc = 0x1AC4D4u;
            // 0x1ac4d4: 0x3c02c528  lui         $v0, 0xC528 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50472 << 16));
        ctx->pc = 0x1AC4D8u;
        goto label_1ac4d8;
    }
    ctx->pc = 0x1AC4D0u;
    {
        const bool branch_taken_0x1ac4d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC4D0u;
            // 0x1ac4d4: 0x3c02c528  lui         $v0, 0xC528 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50472 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac4d0) {
            ctx->pc = 0x1AC524u;
            goto label_1ac524;
        }
    }
    ctx->pc = 0x1AC4D8u;
label_1ac4d8:
    // 0x1ac4d8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ac4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1ac4dc:
    // 0x1ac4dc: 0xc04c028  jal         func_1300A0
label_1ac4e0:
    if (ctx->pc == 0x1AC4E0u) {
        ctx->pc = 0x1AC4E0u;
            // 0x1ac4e0: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x1AC4E4u;
        goto label_1ac4e4;
    }
    ctx->pc = 0x1AC4DCu;
    SET_GPR_U32(ctx, 31, 0x1AC4E4u);
    ctx->pc = 0x1AC4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC4DCu;
            // 0x1ac4e0: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300A0u;
    if (runtime->hasFunction(0x1300A0u)) {
        auto targetFn = runtime->lookupFunction(0x1300A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC4E4u; }
        if (ctx->pc != 0x1AC4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPfPf_0x1300a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC4E4u; }
        if (ctx->pc != 0x1AC4E4u) { return; }
    }
    ctx->pc = 0x1AC4E4u;
label_1ac4e4:
    // 0x1ac4e4: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x1ac4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_1ac4e8:
    // 0x1ac4e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ac4e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ac4ec:
    // 0x1ac4ec: 0x0  nop
    ctx->pc = 0x1ac4ecu;
    // NOP
label_1ac4f0:
    // 0x1ac4f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ac4f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ac4f4:
    // 0x1ac4f4: 0x0  nop
    ctx->pc = 0x1ac4f4u;
    // NOP
label_1ac4f8:
    // 0x1ac4f8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_1ac4fc:
    if (ctx->pc == 0x1AC4FCu) {
        ctx->pc = 0x1AC500u;
        goto label_1ac500;
    }
    ctx->pc = 0x1AC4F8u;
    {
        const bool branch_taken_0x1ac4f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ac4f8) {
            ctx->pc = 0x1AC520u;
            goto label_1ac520;
        }
    }
    ctx->pc = 0x1AC500u;
label_1ac500:
    // 0x1ac500: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ac500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ac504:
    // 0x1ac504: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1ac504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1ac508:
    // 0x1ac508: 0xc0a0f30  jal         func_283CC0
label_1ac50c:
    if (ctx->pc == 0x1AC50Cu) {
        ctx->pc = 0x1AC50Cu;
            // 0x1ac50c: 0x24a563a0  addiu       $a1, $a1, 0x63A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25504));
        ctx->pc = 0x1AC510u;
        goto label_1ac510;
    }
    ctx->pc = 0x1AC508u;
    SET_GPR_U32(ctx, 31, 0x1AC510u);
    ctx->pc = 0x1AC50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC508u;
            // 0x1ac50c: 0x24a563a0  addiu       $a1, $a1, 0x63A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283CC0u;
    if (runtime->hasFunction(0x283CC0u)) {
        auto targetFn = runtime->lookupFunction(0x283CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC510u; }
        if (ctx->pc != 0x1AC510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapID__6CSceneFPc_0x283cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC510u; }
        if (ctx->pc != 0x1AC510u) { return; }
    }
    ctx->pc = 0x1AC510u;
label_1ac510:
    // 0x1ac510: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac514:
    // 0x1ac514: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
label_1ac518:
    if (ctx->pc == 0x1AC518u) {
        ctx->pc = 0x1AC51Cu;
        goto label_1ac51c;
    }
    ctx->pc = 0x1AC514u;
    {
        const bool branch_taken_0x1ac514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ac514) {
            ctx->pc = 0x1AC520u;
            goto label_1ac520;
        }
    }
    ctx->pc = 0x1AC51Cu;
label_1ac51c:
    // 0x1ac51c: 0x2412000d  addiu       $s2, $zero, 0xD
    ctx->pc = 0x1ac51cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1ac520:
    // 0x1ac520: 0x3c02c528  lui         $v0, 0xC528
    ctx->pc = 0x1ac520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50472 << 16));
label_1ac524:
    // 0x1ac524: 0x3c044380  lui         $a0, 0x4380
    ctx->pc = 0x1ac524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17280 << 16));
label_1ac528:
    // 0x1ac528: 0x3443c000  ori         $v1, $v0, 0xC000
    ctx->pc = 0x1ac528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
label_1ac52c:
    // 0x1ac52c: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x1ac52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_1ac530:
    // 0x1ac530: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x1ac530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
label_1ac534:
    // 0x1ac534: 0x3443e000  ori         $v1, $v0, 0xE000
    ctx->pc = 0x1ac534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
label_1ac538:
    // 0x1ac538: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x1ac538u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_1ac53c:
    // 0x1ac53c: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x1ac53cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
label_1ac540:
    // 0x1ac540: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1ac540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1ac544:
    // 0x1ac544: 0x8f838c88  lw          $v1, -0x7378($gp)
    ctx->pc = 0x1ac544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1ac548:
    // 0x1ac548: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_1ac54c:
    if (ctx->pc == 0x1AC54Cu) {
        ctx->pc = 0x1AC54Cu;
            // 0x1ac54c: 0x3c02c506  lui         $v0, 0xC506 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50438 << 16));
        ctx->pc = 0x1AC550u;
        goto label_1ac550;
    }
    ctx->pc = 0x1AC548u;
    {
        const bool branch_taken_0x1ac548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC548u;
            // 0x1ac54c: 0x3c02c506  lui         $v0, 0xC506 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50438 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac548) {
            ctx->pc = 0x1AC59Cu;
            goto label_1ac59c;
        }
    }
    ctx->pc = 0x1AC550u;
label_1ac550:
    // 0x1ac550: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ac550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1ac554:
    // 0x1ac554: 0xc04c028  jal         func_1300A0
label_1ac558:
    if (ctx->pc == 0x1AC558u) {
        ctx->pc = 0x1AC558u;
            // 0x1ac558: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x1AC55Cu;
        goto label_1ac55c;
    }
    ctx->pc = 0x1AC554u;
    SET_GPR_U32(ctx, 31, 0x1AC55Cu);
    ctx->pc = 0x1AC558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC554u;
            // 0x1ac558: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300A0u;
    if (runtime->hasFunction(0x1300A0u)) {
        auto targetFn = runtime->lookupFunction(0x1300A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC55Cu; }
        if (ctx->pc != 0x1AC55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPfPf_0x1300a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC55Cu; }
        if (ctx->pc != 0x1AC55Cu) { return; }
    }
    ctx->pc = 0x1AC55Cu;
label_1ac55c:
    // 0x1ac55c: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x1ac55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_1ac560:
    // 0x1ac560: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ac560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ac564:
    // 0x1ac564: 0x0  nop
    ctx->pc = 0x1ac564u;
    // NOP
label_1ac568:
    // 0x1ac568: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ac568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ac56c:
    // 0x1ac56c: 0x0  nop
    ctx->pc = 0x1ac56cu;
    // NOP
label_1ac570:
    // 0x1ac570: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_1ac574:
    if (ctx->pc == 0x1AC574u) {
        ctx->pc = 0x1AC578u;
        goto label_1ac578;
    }
    ctx->pc = 0x1AC570u;
    {
        const bool branch_taken_0x1ac570 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ac570) {
            ctx->pc = 0x1AC598u;
            goto label_1ac598;
        }
    }
    ctx->pc = 0x1AC578u;
label_1ac578:
    // 0x1ac578: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ac578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ac57c:
    // 0x1ac57c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1ac57cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1ac580:
    // 0x1ac580: 0xc0a0f30  jal         func_283CC0
label_1ac584:
    if (ctx->pc == 0x1AC584u) {
        ctx->pc = 0x1AC584u;
            // 0x1ac584: 0x24a563a8  addiu       $a1, $a1, 0x63A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25512));
        ctx->pc = 0x1AC588u;
        goto label_1ac588;
    }
    ctx->pc = 0x1AC580u;
    SET_GPR_U32(ctx, 31, 0x1AC588u);
    ctx->pc = 0x1AC584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC580u;
            // 0x1ac584: 0x24a563a8  addiu       $a1, $a1, 0x63A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283CC0u;
    if (runtime->hasFunction(0x283CC0u)) {
        auto targetFn = runtime->lookupFunction(0x283CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC588u; }
        if (ctx->pc != 0x1AC588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapID__6CSceneFPc_0x283cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC588u; }
        if (ctx->pc != 0x1AC588u) { return; }
    }
    ctx->pc = 0x1AC588u;
label_1ac588:
    // 0x1ac588: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac58c:
    // 0x1ac58c: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
label_1ac590:
    if (ctx->pc == 0x1AC590u) {
        ctx->pc = 0x1AC594u;
        goto label_1ac594;
    }
    ctx->pc = 0x1AC58Cu;
    {
        const bool branch_taken_0x1ac58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ac58c) {
            ctx->pc = 0x1AC598u;
            goto label_1ac598;
        }
    }
    ctx->pc = 0x1AC594u;
label_1ac594:
    // 0x1ac594: 0x2412000e  addiu       $s2, $zero, 0xE
    ctx->pc = 0x1ac594u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1ac598:
    // 0x1ac598: 0x3c02c506  lui         $v0, 0xC506
    ctx->pc = 0x1ac598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50438 << 16));
label_1ac59c:
    // 0x1ac59c: 0x3c04443d  lui         $a0, 0x443D
    ctx->pc = 0x1ac59cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17469 << 16));
label_1ac5a0:
    // 0x1ac5a0: 0x3443d000  ori         $v1, $v0, 0xD000
    ctx->pc = 0x1ac5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
label_1ac5a4:
    // 0x1ac5a4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1ac5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1ac5a8:
    // 0x1ac5a8: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x1ac5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_1ac5ac:
    // 0x1ac5ac: 0x3c02c53d  lui         $v0, 0xC53D
    ctx->pc = 0x1ac5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50493 << 16));
label_1ac5b0:
    // 0x1ac5b0: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1ac5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_1ac5b4:
    // 0x1ac5b4: 0x3443d000  ori         $v1, $v0, 0xD000
    ctx->pc = 0x1ac5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
label_1ac5b8:
    // 0x1ac5b8: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x1ac5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
label_1ac5bc:
    // 0x1ac5bc: 0x3c0244bf  lui         $v0, 0x44BF
    ctx->pc = 0x1ac5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17599 << 16));
label_1ac5c0:
    // 0x1ac5c0: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x1ac5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_1ac5c4:
    // 0x1ac5c4: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x1ac5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
label_1ac5c8:
    // 0x1ac5c8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1ac5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1ac5cc:
    // 0x1ac5cc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ac5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1ac5d0:
    // 0x1ac5d0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1ac5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1ac5d4:
    // 0x1ac5d4: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1ac5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1ac5d8:
    // 0x1ac5d8: 0xc04bd7c  jal         func_12F5F0
label_1ac5dc:
    if (ctx->pc == 0x1AC5DCu) {
        ctx->pc = 0x1AC5DCu;
            // 0x1ac5dc: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1AC5E0u;
        goto label_1ac5e0;
    }
    ctx->pc = 0x1AC5D8u;
    SET_GPR_U32(ctx, 31, 0x1AC5E0u);
    ctx->pc = 0x1AC5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC5D8u;
            // 0x1ac5dc: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F5F0u;
    if (runtime->hasFunction(0x12F5F0u)) {
        auto targetFn = runtime->lookupFunction(0x12F5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC5E0u; }
        if (ctx->pc != 0x1AC5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistLinePoint__FPfPfPfPf_0x12f5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC5E0u; }
        if (ctx->pc != 0x1AC5E0u) { return; }
    }
    ctx->pc = 0x1AC5E0u;
label_1ac5e0:
    // 0x1ac5e0: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ac5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ac5e4:
    // 0x1ac5e4: 0x8c852e54  lw          $a1, 0x2E54($a0)
    ctx->pc = 0x1ac5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
label_1ac5e8:
    // 0x1ac5e8: 0xc0a0e30  jal         func_2838C0
label_1ac5ec:
    if (ctx->pc == 0x1AC5ECu) {
        ctx->pc = 0x1AC5ECu;
            // 0x1ac5ec: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1AC5F0u;
        goto label_1ac5f0;
    }
    ctx->pc = 0x1AC5E8u;
    SET_GPR_U32(ctx, 31, 0x1AC5F0u);
    ctx->pc = 0x1AC5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC5E8u;
            // 0x1ac5ec: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC5F0u; }
        if (ctx->pc != 0x1AC5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC5F0u; }
        if (ctx->pc != 0x1AC5F0u) { return; }
    }
    ctx->pc = 0x1AC5F0u;
label_1ac5f0:
    // 0x1ac5f0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1ac5f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac5f4:
    // 0x1ac5f4: 0xc0bafe8  jal         func_2EBFA0
label_1ac5f8:
    if (ctx->pc == 0x1AC5F8u) {
        ctx->pc = 0x1AC5F8u;
            // 0x1ac5f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AC5FCu;
        goto label_1ac5fc;
    }
    ctx->pc = 0x1AC5F4u;
    SET_GPR_U32(ctx, 31, 0x1AC5FCu);
    ctx->pc = 0x1AC5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC5F4u;
            // 0x1ac5f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFA0u;
    if (runtime->hasFunction(0x2EBFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC5FCu; }
        if (ctx->pc != 0x1AC5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveParam__14CCameraControlFv_0x2ebfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC5FCu; }
        if (ctx->pc != 0x1AC5FCu) { return; }
    }
    ctx->pc = 0x1AC5FCu;
label_1ac5fc:
    // 0x1ac5fc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ac5fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac600:
    // 0x1ac600: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x1ac600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
label_1ac604:
    // 0x1ac604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ac604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ac608:
    // 0x1ac608: 0x0  nop
    ctx->pc = 0x1ac608u;
    // NOP
label_1ac60c:
    // 0x1ac60c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1ac60cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ac610:
    // 0x1ac610: 0x0  nop
    ctx->pc = 0x1ac610u;
    // NOP
label_1ac614:
    // 0x1ac614: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_1ac618:
    if (ctx->pc == 0x1AC618u) {
        ctx->pc = 0x1AC618u;
            // 0x1ac618: 0x268301a4  addiu       $v1, $s4, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 420));
        ctx->pc = 0x1AC61Cu;
        goto label_1ac61c;
    }
    ctx->pc = 0x1AC614u;
    {
        const bool branch_taken_0x1ac614 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AC618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC614u;
            // 0x1ac618: 0x268301a4  addiu       $v1, $s4, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 420));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac614) {
            ctx->pc = 0x1AC654u;
            goto label_1ac654;
        }
    }
    ctx->pc = 0x1AC61Cu;
label_1ac61c:
    // 0x1ac61c: 0xc0697ec  jal         func_1A5FB0
label_1ac620:
    if (ctx->pc == 0x1AC620u) {
        ctx->pc = 0x1AC624u;
        goto label_1ac624;
    }
    ctx->pc = 0x1AC61Cu;
    SET_GPR_U32(ctx, 31, 0x1AC624u);
    ctx->pc = 0x1A5FB0u;
    if (runtime->hasFunction(0x1A5FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A5FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC624u; }
        if (ctx->pc != 0x1AC624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CancelEyeViewMode__Fv_0x1a5fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC624u; }
        if (ctx->pc != 0x1AC624u) { return; }
    }
    ctx->pc = 0x1AC624u;
label_1ac624:
    // 0x1ac624: 0xc6620018  lwc1        $f2, 0x18($s3)
    ctx->pc = 0x1ac624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ac628:
    // 0x1ac628: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1ac628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1ac62c:
    // 0x1ac62c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ac62cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ac630:
    // 0x1ac630: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1ac630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_1ac634:
    // 0x1ac634: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ac634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ac638:
    // 0x1ac638: 0x0  nop
    ctx->pc = 0x1ac638u;
    // NOP
label_1ac63c:
    // 0x1ac63c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1ac63cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1ac640:
    // 0x1ac640: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ac640u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1ac644:
    // 0x1ac644: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ac644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1ac648:
    // 0x1ac648: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x1ac648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
label_1ac64c:
    // 0x1ac64c: 0x1000000f  b           . + 4 + (0xF << 2)
label_1ac650:
    if (ctx->pc == 0x1AC650u) {
        ctx->pc = 0x1AC650u;
            // 0x1ac650: 0xe6600014  swc1        $f0, 0x14($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
        ctx->pc = 0x1AC654u;
        goto label_1ac654;
    }
    ctx->pc = 0x1AC64Cu;
    {
        const bool branch_taken_0x1ac64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC64Cu;
            // 0x1ac650: 0xe6600014  swc1        $f0, 0x14($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac64c) {
            ctx->pc = 0x1AC68Cu;
            goto label_1ac68c;
        }
    }
    ctx->pc = 0x1AC654u;
label_1ac654:
    // 0x1ac654: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1ac654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac658:
    // 0x1ac658: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1ac658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_1ac65c:
    // 0x1ac65c: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x1ac65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ac660:
    // 0x1ac660: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ac660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ac664:
    // 0x1ac664: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ac664u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1ac668:
    // 0x1ac668: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1ac668u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_1ac66c:
    // 0x1ac66c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ac66cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ac670:
    // 0x1ac670: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x1ac670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
label_1ac674:
    // 0x1ac674: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1ac674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac678:
    // 0x1ac678: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1ac678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ac67c:
    // 0x1ac67c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ac67cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1ac680:
    // 0x1ac680: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1ac680u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_1ac684:
    // 0x1ac684: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ac684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ac688:
    // 0x1ac688: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x1ac688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
label_1ac68c:
    // 0x1ac68c: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x1ac68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1ac690:
    // 0x1ac690: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x1ac690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
label_1ac694:
    // 0x1ac694: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1ac694u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1ac698:
    // 0x1ac698: 0x2442c650  addiu       $v0, $v0, -0x39B0
    ctx->pc = 0x1ac698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952528));
label_1ac69c:
    // 0x1ac69c: 0x1a40001b  blez        $s2, . + 4 + (0x1B << 2)
label_1ac6a0:
    if (ctx->pc == 0x1AC6A0u) {
        ctx->pc = 0x1AC6A0u;
            // 0x1ac6a0: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->pc = 0x1AC6A4u;
        goto label_1ac6a4;
    }
    ctx->pc = 0x1AC69Cu;
    {
        const bool branch_taken_0x1ac69c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1AC6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC69Cu;
            // 0x1ac6a0: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac69c) {
            ctx->pc = 0x1AC70Cu;
            goto label_1ac70c;
        }
    }
    ctx->pc = 0x1AC6A4u;
label_1ac6a4:
    // 0x1ac6a4: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ac6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ac6a8:
    // 0x1ac6a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ac6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ac6ac:
    // 0x1ac6ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ac6acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac6b0:
    // 0x1ac6b0: 0xc0b7c6c  jal         func_2DF1B0
label_1ac6b4:
    if (ctx->pc == 0x1AC6B4u) {
        ctx->pc = 0x1AC6B4u;
            // 0x1ac6b4: 0xaf928c88  sw          $s2, -0x7378($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937736), GPR_U32(ctx, 18));
        ctx->pc = 0x1AC6B8u;
        goto label_1ac6b8;
    }
    ctx->pc = 0x1AC6B0u;
    SET_GPR_U32(ctx, 31, 0x1AC6B8u);
    ctx->pc = 0x1AC6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC6B0u;
            // 0x1ac6b4: 0xaf928c88  sw          $s2, -0x7378($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937736), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1B0u;
    if (runtime->hasFunction(0x2DF1B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC6B8u; }
        if (ctx->pc != 0x1AC6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSubMap__FP6CSceneii_0x2df1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC6B8u; }
        if (ctx->pc != 0x1AC6B8u) { return; }
    }
    ctx->pc = 0x1AC6B8u;
label_1ac6b8:
    // 0x1ac6b8: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ac6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ac6bc:
    // 0x1ac6bc: 0x8f868cbc  lw          $a2, -0x7344($gp)
    ctx->pc = 0x1ac6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937788)));
label_1ac6c0:
    // 0x1ac6c0: 0xc0b2564  jal         func_2C9590
label_1ac6c4:
    if (ctx->pc == 0x1AC6C4u) {
        ctx->pc = 0x1AC6C4u;
            // 0x1ac6c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AC6C8u;
        goto label_1ac6c8;
    }
    ctx->pc = 0x1AC6C0u;
    SET_GPR_U32(ctx, 31, 0x1AC6C8u);
    ctx->pc = 0x1AC6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC6C0u;
            // 0x1ac6c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9590u;
    if (runtime->hasFunction(0x2C9590u)) {
        auto targetFn = runtime->lookupFunction(0x2C9590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC6C8u; }
        if (ctx->pc != 0x1AC6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PreLoadVillager__6CSceneFiP1_0x2c9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC6C8u; }
        if (ctx->pc != 0x1AC6C8u) { return; }
    }
    ctx->pc = 0x1AC6C8u;
label_1ac6c8:
    // 0x1ac6c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac6cc:
    // 0x1ac6cc: 0x1000000f  b           . + 4 + (0xF << 2)
label_1ac6d0:
    if (ctx->pc == 0x1AC6D0u) {
        ctx->pc = 0x1AC6D0u;
            // 0x1ac6d0: 0xaf828c84  sw          $v0, -0x737C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937732), GPR_U32(ctx, 2));
        ctx->pc = 0x1AC6D4u;
        goto label_1ac6d4;
    }
    ctx->pc = 0x1AC6CCu;
    {
        const bool branch_taken_0x1ac6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC6CCu;
            // 0x1ac6d0: 0xaf828c84  sw          $v0, -0x737C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937732), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac6cc) {
            ctx->pc = 0x1AC70Cu;
            goto label_1ac70c;
        }
    }
    ctx->pc = 0x1AC6D4u;
label_1ac6d4:
    // 0x1ac6d4: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x1ac6d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_1ac6d8:
    // 0x1ac6d8: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_1ac6dc:
    if (ctx->pc == 0x1AC6DCu) {
        ctx->pc = 0x1AC6E0u;
        goto label_1ac6e0;
    }
    ctx->pc = 0x1AC6D8u;
    {
        const bool branch_taken_0x1ac6d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac6d8) {
            ctx->pc = 0x1AC70Cu;
            goto label_1ac70c;
        }
    }
    ctx->pc = 0x1AC6E0u;
label_1ac6e0:
    // 0x1ac6e0: 0x8f848c7c  lw          $a0, -0x7384($gp)
    ctx->pc = 0x1ac6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937724)));
label_1ac6e4:
    // 0x1ac6e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac6e8:
    // 0x1ac6e8: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_1ac6ec:
    if (ctx->pc == 0x1AC6ECu) {
        ctx->pc = 0x1AC6F0u;
        goto label_1ac6f0;
    }
    ctx->pc = 0x1AC6E8u;
    {
        const bool branch_taken_0x1ac6e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ac6e8) {
            ctx->pc = 0x1AC70Cu;
            goto label_1ac70c;
        }
    }
    ctx->pc = 0x1AC6F0u;
label_1ac6f0:
    // 0x1ac6f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ac6f4:
    if (ctx->pc == 0x1AC6F4u) {
        ctx->pc = 0x1AC6F4u;
            // 0x1ac6f4: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x1AC6F8u;
        goto label_1ac6f8;
    }
    ctx->pc = 0x1AC6F0u;
    {
        const bool branch_taken_0x1ac6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC6F0u;
            // 0x1ac6f4: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac6f0) {
            ctx->pc = 0x1AC70Cu;
            goto label_1ac70c;
        }
    }
    ctx->pc = 0x1AC6F8u;
label_1ac6f8:
    // 0x1ac6f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ac6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac6fc:
    // 0x1ac6fc: 0xc04a38a  jal         func_128E28
label_1ac700:
    if (ctx->pc == 0x1AC700u) {
        ctx->pc = 0x1AC700u;
            // 0x1ac700: 0x24a563b0  addiu       $a1, $a1, 0x63B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25520));
        ctx->pc = 0x1AC704u;
        goto label_1ac704;
    }
    ctx->pc = 0x1AC6FCu;
    SET_GPR_U32(ctx, 31, 0x1AC704u);
    ctx->pc = 0x1AC700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC6FCu;
            // 0x1ac700: 0x24a563b0  addiu       $a1, $a1, 0x63B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC704u; }
        if (ctx->pc != 0x1AC704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC704u; }
        if (ctx->pc != 0x1AC704u) { return; }
    }
    ctx->pc = 0x1AC704u;
label_1ac704:
    // 0x1ac704: 0x1040fe36  beqz        $v0, . + 4 + (-0x1CA << 2)
label_1ac708:
    if (ctx->pc == 0x1AC708u) {
        ctx->pc = 0x1AC70Cu;
        goto label_1ac70c;
    }
    ctx->pc = 0x1AC704u;
    {
        const bool branch_taken_0x1ac704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac704) {
            ctx->pc = 0x1ABFE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1abfe0;
        }
    }
    ctx->pc = 0x1AC70Cu;
label_1ac70c:
    // 0x1ac70c: 0xc06af10  jal         func_1ABC40
label_1ac710:
    if (ctx->pc == 0x1AC710u) {
        ctx->pc = 0x1AC714u;
        goto label_1ac714;
    }
    ctx->pc = 0x1AC70Cu;
    SET_GPR_U32(ctx, 31, 0x1AC714u);
    ctx->pc = 0x1ABC40u;
    if (runtime->hasFunction(0x1ABC40u)) {
        auto targetFn = runtime->lookupFunction(0x1ABC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC714u; }
        if (ctx->pc != 0x1AC714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubMapLoadStep__Fv_0x1abc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC714u; }
        if (ctx->pc != 0x1AC714u) { return; }
    }
    ctx->pc = 0x1AC714u;
label_1ac714:
    // 0x1ac714: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1ac718:
    if (ctx->pc == 0x1AC718u) {
        ctx->pc = 0x1AC71Cu;
        goto label_1ac71c;
    }
    ctx->pc = 0x1AC714u;
    {
        const bool branch_taken_0x1ac714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac714) {
            ctx->pc = 0x1AC734u;
            goto label_1ac734;
        }
    }
    ctx->pc = 0x1AC71Cu;
label_1ac71c:
    // 0x1ac71c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_1ac720:
    if (ctx->pc == 0x1AC720u) {
        ctx->pc = 0x1AC724u;
        goto label_1ac724;
    }
    ctx->pc = 0x1AC71Cu;
    {
        const bool branch_taken_0x1ac71c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac71c) {
            ctx->pc = 0x1AC734u;
            goto label_1ac734;
        }
    }
    ctx->pc = 0x1AC724u;
label_1ac724:
    // 0x1ac724: 0xc06af10  jal         func_1ABC40
label_1ac728:
    if (ctx->pc == 0x1AC728u) {
        ctx->pc = 0x1AC72Cu;
        goto label_1ac72c;
    }
    ctx->pc = 0x1AC724u;
    SET_GPR_U32(ctx, 31, 0x1AC72Cu);
    ctx->pc = 0x1ABC40u;
    if (runtime->hasFunction(0x1ABC40u)) {
        auto targetFn = runtime->lookupFunction(0x1ABC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC72Cu; }
        if (ctx->pc != 0x1AC72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubMapLoadStep__Fv_0x1abc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC72Cu; }
        if (ctx->pc != 0x1AC72Cu) { return; }
    }
    ctx->pc = 0x1AC72Cu;
label_1ac72c:
    // 0x1ac72c: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_1ac730:
    if (ctx->pc == 0x1AC730u) {
        ctx->pc = 0x1AC734u;
        goto label_1ac734;
    }
    ctx->pc = 0x1AC72Cu;
    {
        const bool branch_taken_0x1ac72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac72c) {
            ctx->pc = 0x1AC71Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ac71c;
        }
    }
    ctx->pc = 0x1AC734u;
label_1ac734:
    // 0x1ac734: 0x0  nop
    ctx->pc = 0x1ac734u;
    // NOP
label_1ac738:
    // 0x1ac738: 0x8f838c7c  lw          $v1, -0x7384($gp)
    ctx->pc = 0x1ac738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937724)));
label_1ac73c:
    // 0x1ac73c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ac73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ac740:
    // 0x1ac740: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1ac744:
    if (ctx->pc == 0x1AC744u) {
        ctx->pc = 0x1AC744u;
            // 0x1ac744: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1AC748u;
        goto label_1ac748;
    }
    ctx->pc = 0x1AC740u;
    {
        const bool branch_taken_0x1ac740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC740u;
            // 0x1ac744: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac740) {
            ctx->pc = 0x1AC750u;
            goto label_1ac750;
        }
    }
    ctx->pc = 0x1AC748u;
label_1ac748:
    // 0x1ac748: 0x146200f2  bne         $v1, $v0, . + 4 + (0xF2 << 2)
label_1ac74c:
    if (ctx->pc == 0x1AC74Cu) {
        ctx->pc = 0x1AC750u;
        goto label_1ac750;
    }
    ctx->pc = 0x1AC748u;
    {
        const bool branch_taken_0x1ac748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ac748) {
            ctx->pc = 0x1ACB14u;
            goto label_1acb14;
        }
    }
    ctx->pc = 0x1AC750u;
label_1ac750:
    // 0x1ac750: 0x27a30534  addiu       $v1, $sp, 0x534
    ctx->pc = 0x1ac750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1332));
label_1ac754:
    // 0x1ac754: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1ac754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1ac758:
    // 0x1ac758: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1ac758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1ac75c:
    // 0x1ac75c: 0x24847b60  addiu       $a0, $a0, 0x7B60
    ctx->pc = 0x1ac75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
label_1ac760:
    // 0x1ac760: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1ac760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ac764:
    // 0x1ac764: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1ac764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1ac768:
    // 0x1ac768: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ac768u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1ac76c:
    // 0x1ac76c: 0xc0bb538  jal         func_2ED4E0
label_1ac770:
    if (ctx->pc == 0x1AC770u) {
        ctx->pc = 0x1AC770u;
            // 0x1ac770: 0xafa00530  sw          $zero, 0x530($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1328), GPR_U32(ctx, 0));
        ctx->pc = 0x1AC774u;
        goto label_1ac774;
    }
    ctx->pc = 0x1AC76Cu;
    SET_GPR_U32(ctx, 31, 0x1AC774u);
    ctx->pc = 0x1AC770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC76Cu;
            // 0x1ac770: 0xafa00530  sw          $zero, 0x530($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1328), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC774u; }
        if (ctx->pc != 0x1AC774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC774u; }
        if (ctx->pc != 0x1AC774u) { return; }
    }
    ctx->pc = 0x1AC774u;
label_1ac774:
    // 0x1ac774: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ac778:
    if (ctx->pc == 0x1AC778u) {
        ctx->pc = 0x1AC778u;
            // 0x1ac778: 0x27a40530  addiu       $a0, $sp, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
        ctx->pc = 0x1AC77Cu;
        goto label_1ac77c;
    }
    ctx->pc = 0x1AC774u;
    {
        const bool branch_taken_0x1ac774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC774u;
            // 0x1ac778: 0x27a40530  addiu       $a0, $sp, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac774) {
            ctx->pc = 0x1AC784u;
            goto label_1ac784;
        }
    }
    ctx->pc = 0x1AC77Cu;
label_1ac77c:
    // 0x1ac77c: 0xc0c2728  jal         func_309CA0
label_1ac780:
    if (ctx->pc == 0x1AC780u) {
        ctx->pc = 0x1AC784u;
        goto label_1ac784;
    }
    ctx->pc = 0x1AC77Cu;
    SET_GPR_U32(ctx, 31, 0x1AC784u);
    ctx->pc = 0x309CA0u;
    if (runtime->hasFunction(0x309CA0u)) {
        auto targetFn = runtime->lookupFunction(0x309CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC784u; }
        if (ctx->pc != 0x1AC784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PauseStart__FP10PAUSE_INFO_0x309ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC784u; }
        if (ctx->pc != 0x1AC784u) { return; }
    }
    ctx->pc = 0x1AC784u;
label_1ac784:
    // 0x1ac784: 0xc08cff0  jal         func_233FC0
label_1ac788:
    if (ctx->pc == 0x1AC788u) {
        ctx->pc = 0x1AC78Cu;
        goto label_1ac78c;
    }
    ctx->pc = 0x1AC784u;
    SET_GPR_U32(ctx, 31, 0x1AC78Cu);
    ctx->pc = 0x233FC0u;
    if (runtime->hasFunction(0x233FC0u)) {
        auto targetFn = runtime->lookupFunction(0x233FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC78Cu; }
        if (ctx->pc != 0x1AC78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainLoop__Fv_0x233fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC78Cu; }
        if (ctx->pc != 0x1AC78Cu) { return; }
    }
    ctx->pc = 0x1AC78Cu;
label_1ac78c:
    // 0x1ac78c: 0x104000cf  beqz        $v0, . + 4 + (0xCF << 2)
label_1ac790:
    if (ctx->pc == 0x1AC790u) {
        ctx->pc = 0x1AC794u;
        goto label_1ac794;
    }
    ctx->pc = 0x1AC78Cu;
    {
        const bool branch_taken_0x1ac78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac78c) {
            ctx->pc = 0x1ACACCu;
            goto label_1acacc;
        }
    }
    ctx->pc = 0x1AC794u;
label_1ac794:
    // 0x1ac794: 0xc08cf24  jal         func_233C90
label_1ac798:
    if (ctx->pc == 0x1AC798u) {
        ctx->pc = 0x1AC79Cu;
        goto label_1ac79c;
    }
    ctx->pc = 0x1AC794u;
    SET_GPR_U32(ctx, 31, 0x1AC79Cu);
    ctx->pc = 0x233C90u;
    if (runtime->hasFunction(0x233C90u)) {
        auto targetFn = runtime->lookupFunction(0x233C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC79Cu; }
        if (ctx->pc != 0x1AC79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainExit__Fv_0x233c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC79Cu; }
        if (ctx->pc != 0x1AC79Cu) { return; }
    }
    ctx->pc = 0x1AC79Cu;
label_1ac79c:
    // 0x1ac79c: 0x8f838c7c  lw          $v1, -0x7384($gp)
    ctx->pc = 0x1ac79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937724)));
label_1ac7a0:
    // 0x1ac7a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ac7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ac7a4:
    // 0x1ac7a4: 0x146200b4  bne         $v1, $v0, . + 4 + (0xB4 << 2)
label_1ac7a8:
    if (ctx->pc == 0x1AC7A8u) {
        ctx->pc = 0x1AC7A8u;
            // 0x1ac7a8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1AC7ACu;
        goto label_1ac7ac;
    }
    ctx->pc = 0x1AC7A4u;
    {
        const bool branch_taken_0x1ac7a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AC7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC7A4u;
            // 0x1ac7a8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac7a4) {
            ctx->pc = 0x1ACA78u;
            goto label_1aca78;
        }
    }
    ctx->pc = 0x1AC7ACu;
label_1ac7ac:
    // 0x1ac7ac: 0x8f8380f0  lw          $v1, -0x7F10($gp)
    ctx->pc = 0x1ac7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1ac7b0:
    // 0x1ac7b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac7b4:
    // 0x1ac7b4: 0xaf828c7c  sw          $v0, -0x7384($gp)
    ctx->pc = 0x1ac7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937724), GPR_U32(ctx, 2));
label_1ac7b8:
    // 0x1ac7b8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1ac7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1ac7bc:
    // 0x1ac7bc: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x1ac7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1ac7c0:
    // 0x1ac7c0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_1ac7c4:
    if (ctx->pc == 0x1AC7C4u) {
        ctx->pc = 0x1AC7C8u;
        goto label_1ac7c8;
    }
    ctx->pc = 0x1AC7C0u;
    {
        const bool branch_taken_0x1ac7c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ac7c0) {
            ctx->pc = 0x1AC7F4u;
            goto label_1ac7f4;
        }
    }
    ctx->pc = 0x1AC7C8u;
label_1ac7c8:
    // 0x1ac7c8: 0xc0c0fc8  jal         func_303F20
label_1ac7cc:
    if (ctx->pc == 0x1AC7CCu) {
        ctx->pc = 0x1AC7D0u;
        goto label_1ac7d0;
    }
    ctx->pc = 0x1AC7C8u;
    SET_GPR_U32(ctx, 31, 0x1AC7D0u);
    ctx->pc = 0x303F20u;
    if (runtime->hasFunction(0x303F20u)) {
        auto targetFn = runtime->lookupFunction(0x303F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC7D0u; }
        if (ctx->pc != 0x1AC7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameRunning__Fv_0x303f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC7D0u; }
        if (ctx->pc != 0x1AC7D0u) { return; }
    }
    ctx->pc = 0x1AC7D0u;
label_1ac7d0:
    // 0x1ac7d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ac7d4:
    if (ctx->pc == 0x1AC7D4u) {
        ctx->pc = 0x1AC7D8u;
        goto label_1ac7d8;
    }
    ctx->pc = 0x1AC7D0u;
    {
        const bool branch_taken_0x1ac7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac7d0) {
            ctx->pc = 0x1AC7F4u;
            goto label_1ac7f4;
        }
    }
    ctx->pc = 0x1AC7D8u;
label_1ac7d8:
    // 0x1ac7d8: 0xc0c0fcc  jal         func_303F30
label_1ac7dc:
    if (ctx->pc == 0x1AC7DCu) {
        ctx->pc = 0x1AC7E0u;
        goto label_1ac7e0;
    }
    ctx->pc = 0x1AC7D8u;
    SET_GPR_U32(ctx, 31, 0x1AC7E0u);
    ctx->pc = 0x303F30u;
    if (runtime->hasFunction(0x303F30u)) {
        auto targetFn = runtime->lookupFunction(0x303F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC7E0u; }
        if (ctx->pc != 0x1AC7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSubGameNo__Fv_0x303f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC7E0u; }
        if (ctx->pc != 0x1AC7E0u) { return; }
    }
    ctx->pc = 0x1AC7E0u;
label_1ac7e0:
    // 0x1ac7e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac7e4:
    // 0x1ac7e4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1ac7e8:
    if (ctx->pc == 0x1AC7E8u) {
        ctx->pc = 0x1AC7ECu;
        goto label_1ac7ec;
    }
    ctx->pc = 0x1AC7E4u;
    {
        const bool branch_taken_0x1ac7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ac7e4) {
            ctx->pc = 0x1AC7F4u;
            goto label_1ac7f4;
        }
    }
    ctx->pc = 0x1AC7ECu;
label_1ac7ec:
    // 0x1ac7ec: 0xc0c1090  jal         func_304240
label_1ac7f0:
    if (ctx->pc == 0x1AC7F0u) {
        ctx->pc = 0x1AC7F4u;
        goto label_1ac7f4;
    }
    ctx->pc = 0x1AC7ECu;
    SET_GPR_U32(ctx, 31, 0x1AC7F4u);
    ctx->pc = 0x304240u;
    if (runtime->hasFunction(0x304240u)) {
        auto targetFn = runtime->lookupFunction(0x304240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC7F4u; }
        if (ctx->pc != 0x1AC7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgExitSubGame__Fv_0x304240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC7F4u; }
        if (ctx->pc != 0x1AC7F4u) { return; }
    }
    ctx->pc = 0x1AC7F4u;
label_1ac7f4:
    // 0x1ac7f4: 0x8f8580f0  lw          $a1, -0x7F10($gp)
    ctx->pc = 0x1ac7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1ac7f8:
    // 0x1ac7f8: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1ac7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1ac7fc:
    // 0x1ac7fc: 0x8ca3003c  lw          $v1, 0x3C($a1)
    ctx->pc = 0x1ac7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_1ac800:
    // 0x1ac800: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1ac804:
    if (ctx->pc == 0x1AC804u) {
        ctx->pc = 0x1AC804u;
            // 0x1ac804: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x1AC808u;
        goto label_1ac808;
    }
    ctx->pc = 0x1AC800u;
    {
        const bool branch_taken_0x1ac800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC800u;
            // 0x1ac804: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac800) {
            ctx->pc = 0x1AC818u;
            goto label_1ac818;
        }
    }
    ctx->pc = 0x1AC808u;
label_1ac808:
    // 0x1ac808: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac80c:
    // 0x1ac80c: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
label_1ac810:
    if (ctx->pc == 0x1AC810u) {
        ctx->pc = 0x1AC810u;
            // 0x1ac810: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x1AC814u;
        goto label_1ac814;
    }
    ctx->pc = 0x1AC80Cu;
    {
        const bool branch_taken_0x1ac80c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AC810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC80Cu;
            // 0x1ac810: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac80c) {
            ctx->pc = 0x1AC89Cu;
            goto label_1ac89c;
        }
    }
    ctx->pc = 0x1AC814u;
label_1ac814:
    // 0x1ac814: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1ac814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1ac818:
    // 0x1ac818: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_1ac81c:
    if (ctx->pc == 0x1AC81Cu) {
        ctx->pc = 0x1AC820u;
        goto label_1ac820;
    }
    ctx->pc = 0x1AC818u;
    {
        const bool branch_taken_0x1ac818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ac818) {
            ctx->pc = 0x1AC844u;
            goto label_1ac844;
        }
    }
    ctx->pc = 0x1AC820u;
label_1ac820:
    // 0x1ac820: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1ac820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ac824:
    // 0x1ac824: 0xc05f69c  jal         func_17DA70
label_1ac828:
    if (ctx->pc == 0x1AC828u) {
        ctx->pc = 0x1AC828u;
            // 0x1ac828: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x1AC82Cu;
        goto label_1ac82c;
    }
    ctx->pc = 0x1AC824u;
    SET_GPR_U32(ctx, 31, 0x1AC82Cu);
    ctx->pc = 0x1AC828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC824u;
            // 0x1ac828: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DA70u;
    if (runtime->hasFunction(0x17DA70u)) {
        auto targetFn = runtime->lookupFunction(0x17DA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC82Cu; }
        if (ctx->pc != 0x1AC82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CaptureScreen__10CFadeInOutFv_0x17da70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC82Cu; }
        if (ctx->pc != 0x1AC82Cu) { return; }
    }
    ctx->pc = 0x1AC82Cu;
label_1ac82c:
    // 0x1ac82c: 0x8f838cb0  lw          $v1, -0x7350($gp)
    ctx->pc = 0x1ac82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ac830:
    // 0x1ac830: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ac830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ac834:
    // 0x1ac834: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ac834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ac838:
    // 0x1ac838: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1ac838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1ac83c:
    // 0x1ac83c: 0xc05f628  jal         func_17D8A0
label_1ac840:
    if (ctx->pc == 0x1AC840u) {
        ctx->pc = 0x1AC840u;
            // 0x1ac840: 0x24642c70  addiu       $a0, $v1, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 11376));
        ctx->pc = 0x1AC844u;
        goto label_1ac844;
    }
    ctx->pc = 0x1AC83Cu;
    SET_GPR_U32(ctx, 31, 0x1AC844u);
    ctx->pc = 0x1AC840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC83Cu;
            // 0x1ac840: 0x24642c70  addiu       $a0, $v1, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D8A0u;
    if (runtime->hasFunction(0x17D8A0u)) {
        auto targetFn = runtime->lookupFunction(0x17D8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC844u; }
        if (ctx->pc != 0x1AC844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CrossFade__10CFadeInOutFif_0x17d8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC844u; }
        if (ctx->pc != 0x1AC844u) { return; }
    }
    ctx->pc = 0x1AC844u;
label_1ac844:
    // 0x1ac844: 0x8f8280f0  lw          $v0, -0x7F10($gp)
    ctx->pc = 0x1ac844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1ac848:
    // 0x1ac848: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1ac848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_1ac84c:
    // 0x1ac84c: 0xc06a6c4  jal         func_1A9B10
label_1ac850:
    if (ctx->pc == 0x1AC850u) {
        ctx->pc = 0x1AC850u;
            // 0x1ac850: 0xaf828c6c  sw          $v0, -0x7394($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937708), GPR_U32(ctx, 2));
        ctx->pc = 0x1AC854u;
        goto label_1ac854;
    }
    ctx->pc = 0x1AC84Cu;
    SET_GPR_U32(ctx, 31, 0x1AC854u);
    ctx->pc = 0x1AC850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC84Cu;
            // 0x1ac850: 0xaf828c6c  sw          $v0, -0x7394($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937708), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9B10u;
    if (runtime->hasFunction(0x1A9B10u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC854u; }
        if (ctx->pc != 0x1AC854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserData__Fv_0x1a9b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC854u; }
        if (ctx->pc != 0x1AC854u) { return; }
    }
    ctx->pc = 0x1AC854u;
label_1ac854:
    // 0x1ac854: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x1ac854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_1ac858:
    // 0x1ac858: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ac858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ac85c:
    // 0x1ac85c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1ac85cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1ac860:
    // 0x1ac860: 0x84224d96  lh          $v0, 0x4D96($at)
    ctx->pc = 0x1ac860u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
label_1ac864:
    // 0x1ac864: 0xaf828c6c  sw          $v0, -0x7394($gp)
    ctx->pc = 0x1ac864u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937708), GPR_U32(ctx, 2));
label_1ac868:
    // 0x1ac868: 0xc0a0ed8  jal         func_283B60
label_1ac86c:
    if (ctx->pc == 0x1AC86Cu) {
        ctx->pc = 0x1AC86Cu;
            // 0x1ac86c: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->pc = 0x1AC870u;
        goto label_1ac870;
    }
    ctx->pc = 0x1AC868u;
    SET_GPR_U32(ctx, 31, 0x1AC870u);
    ctx->pc = 0x1AC86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC868u;
            // 0x1ac86c: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC870u; }
        if (ctx->pc != 0x1AC870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC870u; }
        if (ctx->pc != 0x1AC870u) { return; }
    }
    ctx->pc = 0x1AC870u;
label_1ac870:
    // 0x1ac870: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ac870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac874:
    // 0x1ac874: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_1ac878:
    if (ctx->pc == 0x1AC878u) {
        ctx->pc = 0x1AC878u;
            // 0x1ac878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AC87Cu;
        goto label_1ac87c;
    }
    ctx->pc = 0x1AC874u;
    {
        const bool branch_taken_0x1ac874 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC874u;
            // 0x1ac878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac874) {
            ctx->pc = 0x1AC88Cu;
            goto label_1ac88c;
        }
    }
    ctx->pc = 0x1AC87Cu;
label_1ac87c:
    // 0x1ac87c: 0xc05cdc0  jal         func_173700
label_1ac880:
    if (ctx->pc == 0x1AC880u) {
        ctx->pc = 0x1AC884u;
        goto label_1ac884;
    }
    ctx->pc = 0x1AC87Cu;
    SET_GPR_U32(ctx, 31, 0x1AC884u);
    ctx->pc = 0x173700u;
    if (runtime->hasFunction(0x173700u)) {
        auto targetFn = runtime->lookupFunction(0x173700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC884u; }
        if (ctx->pc != 0x1AC884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdatePosition__11CCharacter2Fv_0x173700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC884u; }
        if (ctx->pc != 0x1AC884u) { return; }
    }
    ctx->pc = 0x1AC884u;
label_1ac884:
    // 0x1ac884: 0xc05cdec  jal         func_1737B0
label_1ac888:
    if (ctx->pc == 0x1AC888u) {
        ctx->pc = 0x1AC888u;
            // 0x1ac888: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AC88Cu;
        goto label_1ac88c;
    }
    ctx->pc = 0x1AC884u;
    SET_GPR_U32(ctx, 31, 0x1AC88Cu);
    ctx->pc = 0x1AC888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC884u;
            // 0x1ac888: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1737B0u;
    if (runtime->hasFunction(0x1737B0u)) {
        auto targetFn = runtime->lookupFunction(0x1737B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC88Cu; }
        if (ctx->pc != 0x1AC88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetDAPosition__11CCharacter2Fv_0x1737b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC88Cu; }
        if (ctx->pc != 0x1AC88Cu) { return; }
    }
    ctx->pc = 0x1AC88Cu;
label_1ac88c:
    // 0x1ac88c: 0xc06908c  jal         func_1A4230
label_1ac890:
    if (ctx->pc == 0x1AC890u) {
        ctx->pc = 0x1AC890u;
            // 0x1ac890: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AC894u;
        goto label_1ac894;
    }
    ctx->pc = 0x1AC88Cu;
    SET_GPR_U32(ctx, 31, 0x1AC894u);
    ctx->pc = 0x1AC890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC88Cu;
            // 0x1ac890: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4230u;
    if (runtime->hasFunction(0x1A4230u)) {
        auto targetFn = runtime->lookupFunction(0x1A4230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC894u; }
        if (ctx->pc != 0x1AC894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditControlStatusInit__FP6CScene_0x1a4230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC894u; }
        if (ctx->pc != 0x1AC894u) { return; }
    }
    ctx->pc = 0x1AC894u;
label_1ac894:
    // 0x1ac894: 0x1000008d  b           . + 4 + (0x8D << 2)
label_1ac898:
    if (ctx->pc == 0x1AC898u) {
        ctx->pc = 0x1AC89Cu;
        goto label_1ac89c;
    }
    ctx->pc = 0x1AC894u;
    {
        const bool branch_taken_0x1ac894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac894) {
            ctx->pc = 0x1ACACCu;
            goto label_1acacc;
        }
    }
    ctx->pc = 0x1AC89Cu;
label_1ac89c:
    // 0x1ac89c: 0x14620047  bne         $v1, $v0, . + 4 + (0x47 << 2)
label_1ac8a0:
    if (ctx->pc == 0x1AC8A0u) {
        ctx->pc = 0x1AC8A0u;
            // 0x1ac8a0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1AC8A4u;
        goto label_1ac8a4;
    }
    ctx->pc = 0x1AC89Cu;
    {
        const bool branch_taken_0x1ac89c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AC8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC89Cu;
            // 0x1ac8a0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac89c) {
            ctx->pc = 0x1AC9BCu;
            goto label_1ac9bc;
        }
    }
    ctx->pc = 0x1AC8A4u;
label_1ac8a4:
    // 0x1ac8a4: 0x27b20138  addiu       $s2, $sp, 0x138
    ctx->pc = 0x1ac8a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_1ac8a8:
    // 0x1ac8a8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ac8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1ac8ac:
    // 0x1ac8ac: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1ac8acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1ac8b0:
    // 0x1ac8b0: 0x27b30120  addiu       $s3, $sp, 0x120
    ctx->pc = 0x1ac8b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1ac8b4:
    // 0x1ac8b4: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x1ac8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
label_1ac8b8:
    // 0x1ac8b8: 0x27b4013c  addiu       $s4, $sp, 0x13C
    ctx->pc = 0x1ac8b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_1ac8bc:
    // 0x1ac8bc: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1ac8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1ac8c0:
    // 0x1ac8c0: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x1ac8c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1ac8c4:
    // 0x1ac8c4: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1ac8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_1ac8c8:
    // 0x1ac8c8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ac8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ac8cc:
    // 0x1ac8cc: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1ac8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ac8d0:
    // 0x1ac8d0: 0x2484ed80  addiu       $a0, $a0, -0x1280
    ctx->pc = 0x1ac8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962560));
label_1ac8d4:
    // 0x1ac8d4: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x1ac8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
label_1ac8d8:
    // 0x1ac8d8: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x1ac8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
label_1ac8dc:
    // 0x1ac8dc: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x1ac8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_1ac8e0:
    // 0x1ac8e0: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x1ac8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_1ac8e4:
    // 0x1ac8e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ac8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1ac8e8:
    // 0x1ac8e8: 0x8c23ec28  lw          $v1, -0x13D8($at)
    ctx->pc = 0x1ac8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962216)));
label_1ac8ec:
    // 0x1ac8ec: 0x8ca50044  lw          $a1, 0x44($a1)
    ctx->pc = 0x1ac8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_1ac8f0:
    // 0x1ac8f0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ac8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ac8f4:
    // 0x1ac8f4: 0x8c27ec24  lw          $a3, -0x13DC($at)
    ctx->pc = 0x1ac8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962212)));
label_1ac8f8:
    // 0x1ac8f8: 0xafa50134  sw          $a1, 0x134($sp)
    ctx->pc = 0x1ac8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 5));
label_1ac8fc:
    // 0x1ac8fc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ac8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ac900:
    // 0x1ac900: 0x673023  subu        $a2, $v1, $a3
    ctx->pc = 0x1ac900u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1ac904:
    // 0x1ac904: 0x8c22ec20  lw          $v0, -0x13E0($at)
    ctx->pc = 0x1ac904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962208)));
label_1ac908:
    // 0x1ac908: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x1ac908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1ac90c:
    // 0x1ac90c: 0xc04e79c  jal         func_139E70
label_1ac910:
    if (ctx->pc == 0x1AC910u) {
        ctx->pc = 0x1AC910u;
            // 0x1ac910: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1AC914u;
        goto label_1ac914;
    }
    ctx->pc = 0x1AC90Cu;
    SET_GPR_U32(ctx, 31, 0x1AC914u);
    ctx->pc = 0x1AC910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC90Cu;
            // 0x1ac910: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC914u; }
        if (ctx->pc != 0x1AC914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC914u; }
        if (ctx->pc != 0x1AC914u) { return; }
    }
    ctx->pc = 0x1AC914u;
label_1ac914:
    // 0x1ac914: 0x3c0301ea  lui         $v1, 0x1EA
    ctx->pc = 0x1ac914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
label_1ac918:
    // 0x1ac918: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x1ac918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
label_1ac91c:
    // 0x1ac91c: 0x2463e990  addiu       $v1, $v1, -0x1670
    ctx->pc = 0x1ac91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961552));
label_1ac920:
    // 0x1ac920: 0x2442ed80  addiu       $v0, $v0, -0x1280
    ctx->pc = 0x1ac920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962560));
label_1ac924:
    // 0x1ac924: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ac924u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1ac928:
    // 0x1ac928: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1ac928u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1ac92c:
    // 0x1ac92c: 0x8f8280f0  lw          $v0, -0x7F10($gp)
    ctx->pc = 0x1ac92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1ac930:
    // 0x1ac930: 0xc0c0fd0  jal         func_303F40
label_1ac934:
    if (ctx->pc == 0x1AC934u) {
        ctx->pc = 0x1AC934u;
            // 0x1ac934: 0xac40003c  sw          $zero, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
        ctx->pc = 0x1AC938u;
        goto label_1ac938;
    }
    ctx->pc = 0x1AC930u;
    SET_GPR_U32(ctx, 31, 0x1AC938u);
    ctx->pc = 0x1AC934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC930u;
            // 0x1ac934: 0xac40003c  sw          $zero, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303F40u;
    if (runtime->hasFunction(0x303F40u)) {
        auto targetFn = runtime->lookupFunction(0x303F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC938u; }
        if (ctx->pc != 0x1AC938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowSubGameInfo__Fv_0x303f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC938u; }
        if (ctx->pc != 0x1AC938u) { return; }
    }
    ctx->pc = 0x1AC938u;
label_1ac938:
    // 0x1ac938: 0xc0c0fc8  jal         func_303F20
label_1ac93c:
    if (ctx->pc == 0x1AC93Cu) {
        ctx->pc = 0x1AC93Cu;
            // 0x1ac93c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AC940u;
        goto label_1ac940;
    }
    ctx->pc = 0x1AC938u;
    SET_GPR_U32(ctx, 31, 0x1AC940u);
    ctx->pc = 0x1AC93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC938u;
            // 0x1ac93c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303F20u;
    if (runtime->hasFunction(0x303F20u)) {
        auto targetFn = runtime->lookupFunction(0x303F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC940u; }
        if (ctx->pc != 0x1AC940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameRunning__Fv_0x303f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC940u; }
        if (ctx->pc != 0x1AC940u) { return; }
    }
    ctx->pc = 0x1AC940u;
label_1ac940:
    // 0x1ac940: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ac944:
    if (ctx->pc == 0x1AC944u) {
        ctx->pc = 0x1AC948u;
        goto label_1ac948;
    }
    ctx->pc = 0x1AC940u;
    {
        const bool branch_taken_0x1ac940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac940) {
            ctx->pc = 0x1AC95Cu;
            goto label_1ac95c;
        }
    }
    ctx->pc = 0x1AC948u;
label_1ac948:
    // 0x1ac948: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1ac948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1ac94c:
    // 0x1ac94c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ac94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ac950:
    // 0x1ac950: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_1ac954:
    if (ctx->pc == 0x1AC954u) {
        ctx->pc = 0x1AC954u;
            // 0x1ac954: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1AC958u;
        goto label_1ac958;
    }
    ctx->pc = 0x1AC950u;
    {
        const bool branch_taken_0x1ac950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC950u;
            // 0x1ac954: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac950) {
            ctx->pc = 0x1AC95Cu;
            goto label_1ac95c;
        }
    }
    ctx->pc = 0x1AC958u;
label_1ac958:
    // 0x1ac958: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1ac958u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1ac95c:
    // 0x1ac95c: 0xc08cb10  jal         func_232C40
label_1ac960:
    if (ctx->pc == 0x1AC960u) {
        ctx->pc = 0x1AC964u;
        goto label_1ac964;
    }
    ctx->pc = 0x1AC95Cu;
    SET_GPR_U32(ctx, 31, 0x1AC964u);
    ctx->pc = 0x232C40u;
    if (runtime->hasFunction(0x232C40u)) {
        auto targetFn = runtime->lookupFunction(0x232C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC964u; }
        if (ctx->pc != 0x1AC964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuEtcFlag__Fv_0x232c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC964u; }
        if (ctx->pc != 0x1AC964u) { return; }
    }
    ctx->pc = 0x1AC964u;
label_1ac964:
    // 0x1ac964: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ac964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1ac968:
    // 0x1ac968: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1ac96c:
    if (ctx->pc == 0x1AC96Cu) {
        ctx->pc = 0x1AC970u;
        goto label_1ac970;
    }
    ctx->pc = 0x1AC968u;
    {
        const bool branch_taken_0x1ac968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac968) {
            ctx->pc = 0x1AC990u;
            goto label_1ac990;
        }
    }
    ctx->pc = 0x1AC970u;
label_1ac970:
    // 0x1ac970: 0xc0c0fc8  jal         func_303F20
label_1ac974:
    if (ctx->pc == 0x1AC974u) {
        ctx->pc = 0x1AC978u;
        goto label_1ac978;
    }
    ctx->pc = 0x1AC970u;
    SET_GPR_U32(ctx, 31, 0x1AC978u);
    ctx->pc = 0x303F20u;
    if (runtime->hasFunction(0x303F20u)) {
        auto targetFn = runtime->lookupFunction(0x303F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC978u; }
        if (ctx->pc != 0x1AC978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameRunning__Fv_0x303f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC978u; }
        if (ctx->pc != 0x1AC978u) { return; }
    }
    ctx->pc = 0x1AC978u;
label_1ac978:
    // 0x1ac978: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ac97c:
    if (ctx->pc == 0x1AC97Cu) {
        ctx->pc = 0x1AC980u;
        goto label_1ac980;
    }
    ctx->pc = 0x1AC978u;
    {
        const bool branch_taken_0x1ac978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac978) {
            ctx->pc = 0x1AC990u;
            goto label_1ac990;
        }
    }
    ctx->pc = 0x1AC980u;
label_1ac980:
    // 0x1ac980: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1ac980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1ac984:
    // 0x1ac984: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ac984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ac988:
    // 0x1ac988: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_1ac98c:
    if (ctx->pc == 0x1AC98Cu) {
        ctx->pc = 0x1AC98Cu;
            // 0x1ac98c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x1AC990u;
        goto label_1ac990;
    }
    ctx->pc = 0x1AC988u;
    {
        const bool branch_taken_0x1ac988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC988u;
            // 0x1ac98c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac988) {
            ctx->pc = 0x1AC9ACu;
            goto label_1ac9ac;
        }
    }
    ctx->pc = 0x1AC990u;
label_1ac990:
    // 0x1ac990: 0xc0698d8  jal         func_1A6360
label_1ac994:
    if (ctx->pc == 0x1AC994u) {
        ctx->pc = 0x1AC994u;
            // 0x1ac994: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AC998u;
        goto label_1ac998;
    }
    ctx->pc = 0x1AC990u;
    SET_GPR_U32(ctx, 31, 0x1AC998u);
    ctx->pc = 0x1AC994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC990u;
            // 0x1ac994: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6360u;
    if (runtime->hasFunction(0x1A6360u)) {
        auto targetFn = runtime->lookupFunction(0x1A6360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC998u; }
        if (ctx->pc != 0x1AC998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetViewMode__FP6CScene_0x1a6360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC998u; }
        if (ctx->pc != 0x1AC998u) { return; }
    }
    ctx->pc = 0x1AC998u;
label_1ac998:
    // 0x1ac998: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ac998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac99c:
    // 0x1ac99c: 0xc0c0ff0  jal         func_303FC0
label_1ac9a0:
    if (ctx->pc == 0x1AC9A0u) {
        ctx->pc = 0x1AC9A0u;
            // 0x1ac9a0: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x1AC9A4u;
        goto label_1ac9a4;
    }
    ctx->pc = 0x1AC99Cu;
    SET_GPR_U32(ctx, 31, 0x1AC9A4u);
    ctx->pc = 0x1AC9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC99Cu;
            // 0x1ac9a0: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303FC0u;
    if (runtime->hasFunction(0x303FC0u)) {
        auto targetFn = runtime->lookupFunction(0x303FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9A4u; }
        if (ctx->pc != 0x1AC9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgInitSubGame__FiP11SubGameInfo_0x303fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9A4u; }
        if (ctx->pc != 0x1AC9A4u) { return; }
    }
    ctx->pc = 0x1AC9A4u;
label_1ac9a4:
    // 0x1ac9a4: 0x10000049  b           . + 4 + (0x49 << 2)
label_1ac9a8:
    if (ctx->pc == 0x1AC9A8u) {
        ctx->pc = 0x1AC9ACu;
        goto label_1ac9ac;
    }
    ctx->pc = 0x1AC9A4u;
    {
        const bool branch_taken_0x1ac9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac9a4) {
            ctx->pc = 0x1ACACCu;
            goto label_1acacc;
        }
    }
    ctx->pc = 0x1AC9ACu;
label_1ac9ac:
    // 0x1ac9ac: 0xc0c10b0  jal         func_3042C0
label_1ac9b0:
    if (ctx->pc == 0x1AC9B0u) {
        ctx->pc = 0x1AC9B4u;
        goto label_1ac9b4;
    }
    ctx->pc = 0x1AC9ACu;
    SET_GPR_U32(ctx, 31, 0x1AC9B4u);
    ctx->pc = 0x3042C0u;
    if (runtime->hasFunction(0x3042C0u)) {
        auto targetFn = runtime->lookupFunction(0x3042C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9B4u; }
        if (ctx->pc != 0x1AC9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgRestartSubGame__FP11SubGameInfo_0x3042c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9B4u; }
        if (ctx->pc != 0x1AC9B4u) { return; }
    }
    ctx->pc = 0x1AC9B4u;
label_1ac9b4:
    // 0x1ac9b4: 0x10000045  b           . + 4 + (0x45 << 2)
label_1ac9b8:
    if (ctx->pc == 0x1AC9B8u) {
        ctx->pc = 0x1AC9BCu;
        goto label_1ac9bc;
    }
    ctx->pc = 0x1AC9B4u;
    {
        const bool branch_taken_0x1ac9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac9b4) {
            ctx->pc = 0x1ACACCu;
            goto label_1acacc;
        }
    }
    ctx->pc = 0x1AC9BCu;
label_1ac9bc:
    // 0x1ac9bc: 0x14620043  bne         $v1, $v0, . + 4 + (0x43 << 2)
label_1ac9c0:
    if (ctx->pc == 0x1AC9C0u) {
        ctx->pc = 0x1AC9C0u;
            // 0x1ac9c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AC9C4u;
        goto label_1ac9c4;
    }
    ctx->pc = 0x1AC9BCu;
    {
        const bool branch_taken_0x1ac9bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AC9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC9BCu;
            // 0x1ac9c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac9bc) {
            ctx->pc = 0x1ACACCu;
            goto label_1acacc;
        }
    }
    ctx->pc = 0x1AC9C4u;
label_1ac9c4:
    // 0x1ac9c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ac9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac9c8:
    // 0x1ac9c8: 0xc095408  jal         func_255020
label_1ac9cc:
    if (ctx->pc == 0x1AC9CCu) {
        ctx->pc = 0x1AC9CCu;
            // 0x1ac9cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AC9D0u;
        goto label_1ac9d0;
    }
    ctx->pc = 0x1AC9C8u;
    SET_GPR_U32(ctx, 31, 0x1AC9D0u);
    ctx->pc = 0x1AC9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC9C8u;
            // 0x1ac9cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255020u;
    if (runtime->hasFunction(0x255020u)) {
        auto targetFn = runtime->lookupFunction(0x255020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9D0u; }
        if (ctx->pc != 0x1AC9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEventScript__FPcPcP9mgCMemory_0x255020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9D0u; }
        if (ctx->pc != 0x1AC9D0u) { return; }
    }
    ctx->pc = 0x1AC9D0u;
label_1ac9d0:
    // 0x1ac9d0: 0x8f838c80  lw          $v1, -0x7380($gp)
    ctx->pc = 0x1ac9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1ac9d4:
    // 0x1ac9d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ac9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ac9d8:
    // 0x1ac9d8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1ac9dc:
    if (ctx->pc == 0x1AC9DCu) {
        ctx->pc = 0x1AC9E0u;
        goto label_1ac9e0;
    }
    ctx->pc = 0x1AC9D8u;
    {
        const bool branch_taken_0x1ac9d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ac9d8) {
            ctx->pc = 0x1AC9F4u;
            goto label_1ac9f4;
        }
    }
    ctx->pc = 0x1AC9E0u;
label_1ac9e0:
    // 0x1ac9e0: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ac9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ac9e4:
    // 0x1ac9e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac9e8:
    // 0x1ac9e8: 0x8c832e58  lw          $v1, 0x2E58($a0)
    ctx->pc = 0x1ac9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11864)));
label_1ac9ec:
    // 0x1ac9ec: 0xac832e54  sw          $v1, 0x2E54($a0)
    ctx->pc = 0x1ac9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11860), GPR_U32(ctx, 3));
label_1ac9f0:
    // 0x1ac9f0: 0xaf828c80  sw          $v0, -0x7380($gp)
    ctx->pc = 0x1ac9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937728), GPR_U32(ctx, 2));
label_1ac9f4:
    // 0x1ac9f4: 0x8f8380f0  lw          $v1, -0x7F10($gp)
    ctx->pc = 0x1ac9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1ac9f8:
    // 0x1ac9f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac9fc:
    // 0x1ac9fc: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x1ac9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_1aca00:
    // 0x1aca00: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_1aca04:
    if (ctx->pc == 0x1ACA04u) {
        ctx->pc = 0x1ACA08u;
        goto label_1aca08;
    }
    ctx->pc = 0x1ACA00u;
    {
        const bool branch_taken_0x1aca00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aca00) {
            ctx->pc = 0x1ACA4Cu;
            goto label_1aca4c;
        }
    }
    ctx->pc = 0x1ACA08u;
label_1aca08:
    // 0x1aca08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aca08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aca0c:
    // 0x1aca0c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1aca0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1aca10:
    // 0x1aca10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aca10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aca14:
    // 0x1aca14: 0xc049c86  jal         func_127218
label_1aca18:
    if (ctx->pc == 0x1ACA18u) {
        ctx->pc = 0x1ACA18u;
            // 0x1aca18: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x1ACA1Cu;
        goto label_1aca1c;
    }
    ctx->pc = 0x1ACA14u;
    SET_GPR_U32(ctx, 31, 0x1ACA1Cu);
    ctx->pc = 0x1ACA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA14u;
            // 0x1aca18: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA1Cu; }
        if (ctx->pc != 0x1ACA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA1Cu; }
        if (ctx->pc != 0x1ACA1Cu) { return; }
    }
    ctx->pc = 0x1ACA1Cu;
label_1aca1c:
    // 0x1aca1c: 0x8f8480f0  lw          $a0, -0x7F10($gp)
    ctx->pc = 0x1aca1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1aca20:
    // 0x1aca20: 0x240203f2  addiu       $v0, $zero, 0x3F2
    ctx->pc = 0x1aca20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1010));
label_1aca24:
    // 0x1aca24: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x1aca24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_1aca28:
    // 0x1aca28: 0xafa30184  sw          $v1, 0x184($sp)
    ctx->pc = 0x1aca28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 3));
label_1aca2c:
    // 0x1aca2c: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x1aca2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_1aca30:
    // 0x1aca30: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1aca30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
label_1aca34:
    // 0x1aca34: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x1aca34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
label_1aca38:
    // 0x1aca38: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x1aca38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1aca3c:
    // 0x1aca3c: 0xc064240  jal         func_190900
label_1aca40:
    if (ctx->pc == 0x1ACA40u) {
        ctx->pc = 0x1ACA40u;
            // 0x1aca40: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x1ACA44u;
        goto label_1aca44;
    }
    ctx->pc = 0x1ACA3Cu;
    SET_GPR_U32(ctx, 31, 0x1ACA44u);
    ctx->pc = 0x1ACA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA3Cu;
            // 0x1aca40: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190900u;
    if (runtime->hasFunction(0x190900u)) {
        auto targetFn = runtime->lookupFunction(0x190900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA44u; }
        if (ctx->pc != 0x1ACA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextLoop__Fi13INIT_LOOP_ARG_0x190900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA44u; }
        if (ctx->pc != 0x1ACA44u) { return; }
    }
    ctx->pc = 0x1ACA44u;
label_1aca44:
    // 0x1aca44: 0x10000021  b           . + 4 + (0x21 << 2)
label_1aca48:
    if (ctx->pc == 0x1ACA48u) {
        ctx->pc = 0x1ACA4Cu;
        goto label_1aca4c;
    }
    ctx->pc = 0x1ACA44u;
    {
        const bool branch_taken_0x1aca44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aca44) {
            ctx->pc = 0x1ACACCu;
            goto label_1acacc;
        }
    }
    ctx->pc = 0x1ACA4Cu;
label_1aca4c:
    // 0x1aca4c: 0xc06bc94  jal         func_1AF250
label_1aca50:
    if (ctx->pc == 0x1ACA50u) {
        ctx->pc = 0x1ACA54u;
        goto label_1aca54;
    }
    ctx->pc = 0x1ACA4Cu;
    SET_GPR_U32(ctx, 31, 0x1ACA54u);
    ctx->pc = 0x1AF250u;
    if (runtime->hasFunction(0x1AF250u)) {
        auto targetFn = runtime->lookupFunction(0x1AF250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA54u; }
        if (ctx->pc != 0x1ACA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BurnEditParts__Fv_0x1af250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA54u; }
        if (ctx->pc != 0x1ACA54u) { return; }
    }
    ctx->pc = 0x1ACA54u;
label_1aca54:
    // 0x1aca54: 0x8f8280f0  lw          $v0, -0x7F10($gp)
    ctx->pc = 0x1aca54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1aca58:
    // 0x1aca58: 0xc06bd30  jal         func_1AF4C0
label_1aca5c:
    if (ctx->pc == 0x1ACA5Cu) {
        ctx->pc = 0x1ACA5Cu;
            // 0x1aca5c: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->pc = 0x1ACA60u;
        goto label_1aca60;
    }
    ctx->pc = 0x1ACA58u;
    SET_GPR_U32(ctx, 31, 0x1ACA60u);
    ctx->pc = 0x1ACA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA58u;
            // 0x1aca5c: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4C0u;
    if (runtime->hasFunction(0x1AF4C0u)) {
        auto targetFn = runtime->lookupFunction(0x1AF4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA60u; }
        if (ctx->pc != 0x1ACA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditMapJump__Fi_0x1af4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA60u; }
        if (ctx->pc != 0x1ACA60u) { return; }
    }
    ctx->pc = 0x1ACA60u;
label_1aca60:
    // 0x1aca60: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aca60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aca64:
    // 0x1aca64: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1aca64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1aca68:
    // 0x1aca68: 0xc0b1f3c  jal         func_2C7CF0
label_1aca6c:
    if (ctx->pc == 0x1ACA6Cu) {
        ctx->pc = 0x1ACA6Cu;
            // 0x1aca6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA70u;
        goto label_1aca70;
    }
    ctx->pc = 0x1ACA68u;
    SET_GPR_U32(ctx, 31, 0x1ACA70u);
    ctx->pc = 0x1ACA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA68u;
            // 0x1aca6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7CF0u;
    if (runtime->hasFunction(0x2C7CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2C7CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA70u; }
        if (ctx->pc != 0x1ACA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunEvent__6CSceneFiP15CSceneEventData_0x2c7cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA70u; }
        if (ctx->pc != 0x1ACA70u) { return; }
    }
    ctx->pc = 0x1ACA70u;
label_1aca70:
    // 0x1aca70: 0x10000016  b           . + 4 + (0x16 << 2)
label_1aca74:
    if (ctx->pc == 0x1ACA74u) {
        ctx->pc = 0x1ACA78u;
        goto label_1aca78;
    }
    ctx->pc = 0x1ACA70u;
    {
        const bool branch_taken_0x1aca70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aca70) {
            ctx->pc = 0x1ACACCu;
            goto label_1acacc;
        }
    }
    ctx->pc = 0x1ACA78u;
label_1aca78:
    // 0x1aca78: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_1aca7c:
    if (ctx->pc == 0x1ACA7Cu) {
        ctx->pc = 0x1ACA80u;
        goto label_1aca80;
    }
    ctx->pc = 0x1ACA78u;
    {
        const bool branch_taken_0x1aca78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aca78) {
            ctx->pc = 0x1ACACCu;
            goto label_1acacc;
        }
    }
    ctx->pc = 0x1ACA80u;
label_1aca80:
    // 0x1aca80: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aca80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aca84:
    // 0x1aca84: 0xc0a0f58  jal         func_283D60
label_1aca88:
    if (ctx->pc == 0x1ACA88u) {
        ctx->pc = 0x1ACA88u;
            // 0x1aca88: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x1ACA8Cu;
        goto label_1aca8c;
    }
    ctx->pc = 0x1ACA84u;
    SET_GPR_U32(ctx, 31, 0x1ACA8Cu);
    ctx->pc = 0x1ACA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA84u;
            // 0x1aca88: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA8Cu; }
        if (ctx->pc != 0x1ACA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA8Cu; }
        if (ctx->pc != 0x1ACA8Cu) { return; }
    }
    ctx->pc = 0x1ACA8Cu;
label_1aca8c:
    // 0x1aca8c: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aca8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aca90:
    // 0x1aca90: 0xc0a0ed8  jal         func_283B60
label_1aca94:
    if (ctx->pc == 0x1ACA94u) {
        ctx->pc = 0x1ACA94u;
            // 0x1aca94: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->pc = 0x1ACA98u;
        goto label_1aca98;
    }
    ctx->pc = 0x1ACA90u;
    SET_GPR_U32(ctx, 31, 0x1ACA98u);
    ctx->pc = 0x1ACA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA90u;
            // 0x1aca94: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA98u; }
        if (ctx->pc != 0x1ACA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA98u; }
        if (ctx->pc != 0x1ACA98u) { return; }
    }
    ctx->pc = 0x1ACA98u;
label_1aca98:
    // 0x1aca98: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aca98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aca9c:
    // 0x1aca9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1aca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1acaa0:
    // 0x1acaa0: 0xaf828c7c  sw          $v0, -0x7384($gp)
    ctx->pc = 0x1acaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937724), GPR_U32(ctx, 2));
label_1acaa4:
    // 0x1acaa4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1acaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1acaa8:
    // 0x1acaa8: 0x8c822e54  lw          $v0, 0x2E54($a0)
    ctx->pc = 0x1acaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
label_1acaac:
    // 0x1acaac: 0xac822e58  sw          $v0, 0x2E58($a0)
    ctx->pc = 0x1acaacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11864), GPR_U32(ctx, 2));
label_1acab0:
    // 0x1acab0: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1acab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1acab4:
    // 0x1acab4: 0xac432e54  sw          $v1, 0x2E54($v0)
    ctx->pc = 0x1acab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11860), GPR_U32(ctx, 3));
label_1acab8:
    // 0x1acab8: 0x8f8280f0  lw          $v0, -0x7F10($gp)
    ctx->pc = 0x1acab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1acabc:
    // 0x1acabc: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1acabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1acac0:
    // 0x1acac0: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x1acac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1acac4:
    // 0x1acac4: 0xc0b6530  jal         func_2D94C0
label_1acac8:
    if (ctx->pc == 0x1ACAC8u) {
        ctx->pc = 0x1ACAC8u;
            // 0x1acac8: 0x24460040  addiu       $a2, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->pc = 0x1ACACCu;
        goto label_1acacc;
    }
    ctx->pc = 0x1ACAC4u;
    SET_GPR_U32(ctx, 31, 0x1ACACCu);
    ctx->pc = 0x1ACAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACAC4u;
            // 0x1acac8: 0x24460040  addiu       $a2, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D94C0u;
    if (runtime->hasFunction(0x2D94C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D94C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACACCu; }
        if (ctx->pc != 0x1ACACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartEditModeFromMenu__FP6CSceneiPi_0x2d94c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACACCu; }
        if (ctx->pc != 0x1ACACCu) { return; }
    }
    ctx->pc = 0x1ACACCu;
label_1acacc:
    // 0x1acacc: 0xc064c3c  jal         func_1930F0
label_1acad0:
    if (ctx->pc == 0x1ACAD0u) {
        ctx->pc = 0x1ACAD4u;
        goto label_1acad4;
    }
    ctx->pc = 0x1ACACCu;
    SET_GPR_U32(ctx, 31, 0x1ACAD4u);
    ctx->pc = 0x1930F0u;
    if (runtime->hasFunction(0x1930F0u)) {
        auto targetFn = runtime->lookupFunction(0x1930F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACAD4u; }
        if (ctx->pc != 0x1ACAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutForE3__Fv_0x1930f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACAD4u; }
        if (ctx->pc != 0x1ACAD4u) { return; }
    }
    ctx->pc = 0x1ACAD4u;
label_1acad4:
    // 0x1acad4: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1acad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1acad8:
    // 0x1acad8: 0xc05f664  jal         func_17D990
label_1acadc:
    if (ctx->pc == 0x1ACADCu) {
        ctx->pc = 0x1ACADCu;
            // 0x1acadc: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x1ACAE0u;
        goto label_1acae0;
    }
    ctx->pc = 0x1ACAD8u;
    SET_GPR_U32(ctx, 31, 0x1ACAE0u);
    ctx->pc = 0x1ACADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACAD8u;
            // 0x1acadc: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D990u;
    if (runtime->hasFunction(0x17D990u)) {
        auto targetFn = runtime->lookupFunction(0x17D990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACAE0u; }
        if (ctx->pc != 0x1ACAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeStep__10CFadeInOutFv_0x17d990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACAE0u; }
        if (ctx->pc != 0x1ACAE0u) { return; }
    }
    ctx->pc = 0x1ACAE0u;
label_1acae0:
    // 0x1acae0: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1acae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1acae4:
    // 0x1acae4: 0xc05f7b4  jal         func_17DED0
label_1acae8:
    if (ctx->pc == 0x1ACAE8u) {
        ctx->pc = 0x1ACAE8u;
            // 0x1acae8: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x1ACAECu;
        goto label_1acaec;
    }
    ctx->pc = 0x1ACAE4u;
    SET_GPR_U32(ctx, 31, 0x1ACAECu);
    ctx->pc = 0x1ACAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACAE4u;
            // 0x1acae8: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DED0u;
    if (runtime->hasFunction(0x17DED0u)) {
        auto targetFn = runtime->lookupFunction(0x17DED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACAECu; }
        if (ctx->pc != 0x1ACAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__10CFadeInOutFv_0x17ded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACAECu; }
        if (ctx->pc != 0x1ACAECu) { return; }
    }
    ctx->pc = 0x1ACAECu;
label_1acaec:
    // 0x1acaec: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_1acaf0:
    if (ctx->pc == 0x1ACAF0u) {
        ctx->pc = 0x1ACAF4u;
        goto label_1acaf4;
    }
    ctx->pc = 0x1ACAECu;
    {
        const bool branch_taken_0x1acaec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acaec) {
            ctx->pc = 0x1ACB04u;
            goto label_1acb04;
        }
    }
    ctx->pc = 0x1ACAF4u;
label_1acaf4:
    // 0x1acaf4: 0xc06a7b4  jal         func_1A9ED0
label_1acaf8:
    if (ctx->pc == 0x1ACAF8u) {
        ctx->pc = 0x1ACAF8u;
            // 0x1acaf8: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1ACAFCu;
        goto label_1acafc;
    }
    ctx->pc = 0x1ACAF4u;
    SET_GPR_U32(ctx, 31, 0x1ACAFCu);
    ctx->pc = 0x1ACAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACAF4u;
            // 0x1acaf8: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9ED0u;
    if (runtime->hasFunction(0x1A9ED0u)) {
        auto targetFn = runtime->lookupFunction(0x1A9ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACAFCu; }
        if (ctx->pc != 0x1ACAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PreExitLoop__FP6CScene_0x1a9ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACAFCu; }
        if (ctx->pc != 0x1ACAFCu) { return; }
    }
    ctx->pc = 0x1ACAFCu;
label_1acafc:
    // 0x1acafc: 0x10000522  b           . + 4 + (0x522 << 2)
label_1acb00:
    if (ctx->pc == 0x1ACB00u) {
        ctx->pc = 0x1ACB00u;
            // 0x1acb00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1ACB04u;
        goto label_1acb04;
    }
    ctx->pc = 0x1ACAFCu;
    {
        const bool branch_taken_0x1acafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACAFCu;
            // 0x1acb00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acafc) {
            ctx->pc = 0x1ADF88u;
            goto label_1adf88;
        }
    }
    ctx->pc = 0x1ACB04u;
label_1acb04:
    // 0x1acb04: 0xc064c40  jal         func_193100
label_1acb08:
    if (ctx->pc == 0x1ACB08u) {
        ctx->pc = 0x1ACB0Cu;
        goto label_1acb0c;
    }
    ctx->pc = 0x1ACB04u;
    SET_GPR_U32(ctx, 31, 0x1ACB0Cu);
    ctx->pc = 0x193100u;
    if (runtime->hasFunction(0x193100u)) {
        auto targetFn = runtime->lookupFunction(0x193100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB0Cu; }
        if (ctx->pc != 0x1ACB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TimeLimitCheck__Fv_0x193100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB0Cu; }
        if (ctx->pc != 0x1ACB0Cu) { return; }
    }
    ctx->pc = 0x1ACB0Cu;
label_1acb0c:
    // 0x1acb0c: 0x1000051e  b           . + 4 + (0x51E << 2)
label_1acb10:
    if (ctx->pc == 0x1ACB10u) {
        ctx->pc = 0x1ACB10u;
            // 0x1acb10: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x1ACB14u;
        goto label_1acb14;
    }
    ctx->pc = 0x1ACB0Cu;
    {
        const bool branch_taken_0x1acb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB0Cu;
            // 0x1acb10: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb0c) {
            ctx->pc = 0x1ADF88u;
            goto label_1adf88;
        }
    }
    ctx->pc = 0x1ACB14u;
label_1acb14:
    // 0x1acb14: 0x8f828ac8  lw          $v0, -0x7538($gp)
    ctx->pc = 0x1acb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
label_1acb18:
    // 0x1acb18: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1acb1c:
    if (ctx->pc == 0x1ACB1Cu) {
        ctx->pc = 0x1ACB1Cu;
            // 0x1acb1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB20u;
        goto label_1acb20;
    }
    ctx->pc = 0x1ACB18u;
    {
        const bool branch_taken_0x1acb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB18u;
            // 0x1acb1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb18) {
            ctx->pc = 0x1ACB68u;
            goto label_1acb68;
        }
    }
    ctx->pc = 0x1ACB20u;
label_1acb20:
    // 0x1acb20: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1acb20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1acb24:
    // 0x1acb24: 0x8c22ef68  lw          $v0, -0x1098($at)
    ctx->pc = 0x1acb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963048)));
label_1acb28:
    // 0x1acb28: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
label_1acb2c:
    if (ctx->pc == 0x1ACB2Cu) {
        ctx->pc = 0x1ACB30u;
        goto label_1acb30;
    }
    ctx->pc = 0x1ACB28u;
    {
        const bool branch_taken_0x1acb28 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1acb28) {
            ctx->pc = 0x1ACB68u;
            goto label_1acb68;
        }
    }
    ctx->pc = 0x1ACB30u;
label_1acb30:
    // 0x1acb30: 0xc06bc94  jal         func_1AF250
label_1acb34:
    if (ctx->pc == 0x1ACB34u) {
        ctx->pc = 0x1ACB38u;
        goto label_1acb38;
    }
    ctx->pc = 0x1ACB30u;
    SET_GPR_U32(ctx, 31, 0x1ACB38u);
    ctx->pc = 0x1AF250u;
    if (runtime->hasFunction(0x1AF250u)) {
        auto targetFn = runtime->lookupFunction(0x1AF250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB38u; }
        if (ctx->pc != 0x1ACB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BurnEditParts__Fv_0x1af250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB38u; }
        if (ctx->pc != 0x1ACB38u) { return; }
    }
    ctx->pc = 0x1ACB38u;
label_1acb38:
    // 0x1acb38: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1acb38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1acb3c:
    // 0x1acb3c: 0xc06bd30  jal         func_1AF4C0
label_1acb40:
    if (ctx->pc == 0x1ACB40u) {
        ctx->pc = 0x1ACB40u;
            // 0x1acb40: 0x8c24ef68  lw          $a0, -0x1098($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963048)));
        ctx->pc = 0x1ACB44u;
        goto label_1acb44;
    }
    ctx->pc = 0x1ACB3Cu;
    SET_GPR_U32(ctx, 31, 0x1ACB44u);
    ctx->pc = 0x1ACB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB3Cu;
            // 0x1acb40: 0x8c24ef68  lw          $a0, -0x1098($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963048)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4C0u;
    if (runtime->hasFunction(0x1AF4C0u)) {
        auto targetFn = runtime->lookupFunction(0x1AF4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB44u; }
        if (ctx->pc != 0x1ACB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditMapJump__Fi_0x1af4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB44u; }
        if (ctx->pc != 0x1ACB44u) { return; }
    }
    ctx->pc = 0x1ACB44u;
label_1acb44:
    // 0x1acb44: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1acb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1acb48:
    // 0x1acb48: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1acb48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1acb4c:
    // 0x1acb4c: 0xc0b1f3c  jal         func_2C7CF0
label_1acb50:
    if (ctx->pc == 0x1ACB50u) {
        ctx->pc = 0x1ACB50u;
            // 0x1acb50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB54u;
        goto label_1acb54;
    }
    ctx->pc = 0x1ACB4Cu;
    SET_GPR_U32(ctx, 31, 0x1ACB54u);
    ctx->pc = 0x1ACB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB4Cu;
            // 0x1acb50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7CF0u;
    if (runtime->hasFunction(0x2C7CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2C7CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB54u; }
        if (ctx->pc != 0x1ACB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunEvent__6CSceneFiP15CSceneEventData_0x2c7cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB54u; }
        if (ctx->pc != 0x1ACB54u) { return; }
    }
    ctx->pc = 0x1ACB54u;
label_1acb54:
    // 0x1acb54: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1acb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1acb58:
    // 0x1acb58: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1acb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1acb5c:
    // 0x1acb5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1acb5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acb60:
    // 0x1acb60: 0x10000509  b           . + 4 + (0x509 << 2)
label_1acb64:
    if (ctx->pc == 0x1ACB64u) {
        ctx->pc = 0x1ACB64u;
            // 0x1acb64: 0xac23ef68  sw          $v1, -0x1098($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294963048), GPR_U32(ctx, 3));
        ctx->pc = 0x1ACB68u;
        goto label_1acb68;
    }
    ctx->pc = 0x1ACB60u;
    {
        const bool branch_taken_0x1acb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB60u;
            // 0x1acb64: 0xac23ef68  sw          $v1, -0x1098($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294963048), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb60) {
            ctx->pc = 0x1ADF88u;
            goto label_1adf88;
        }
    }
    ctx->pc = 0x1ACB68u;
label_1acb68:
    // 0x1acb68: 0xc050e40  jal         func_143900
label_1acb6c:
    if (ctx->pc == 0x1ACB6Cu) {
        ctx->pc = 0x1ACB70u;
        goto label_1acb70;
    }
    ctx->pc = 0x1ACB68u;
    SET_GPR_U32(ctx, 31, 0x1ACB70u);
    ctx->pc = 0x143900u;
    if (runtime->hasFunction(0x143900u)) {
        auto targetFn = runtime->lookupFunction(0x143900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB70u; }
        if (ctx->pc != 0x1ACB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlightEnable__Fi_0x143900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB70u; }
        if (ctx->pc != 0x1ACB70u) { return; }
    }
    ctx->pc = 0x1ACB70u;
label_1acb70:
    // 0x1acb70: 0xc0b1e7c  jal         func_2C79F0
label_1acb74:
    if (ctx->pc == 0x1ACB74u) {
        ctx->pc = 0x1ACB74u;
            // 0x1acb74: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1ACB78u;
        goto label_1acb78;
    }
    ctx->pc = 0x1ACB70u;
    SET_GPR_U32(ctx, 31, 0x1ACB78u);
    ctx->pc = 0x1ACB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB70u;
            // 0x1acb74: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C79F0u;
    if (runtime->hasFunction(0x2C79F0u)) {
        auto targetFn = runtime->lookupFunction(0x2C79F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB78u; }
        if (ctx->pc != 0x1ACB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpDateMapInfo__6CSceneFv_0x2c79f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB78u; }
        if (ctx->pc != 0x1ACB78u) { return; }
    }
    ctx->pc = 0x1ACB78u;
label_1acb78:
    // 0x1acb78: 0xc050d98  jal         func_143660
label_1acb7c:
    if (ctx->pc == 0x1ACB7Cu) {
        ctx->pc = 0x1ACB80u;
        goto label_1acb80;
    }
    ctx->pc = 0x1ACB78u;
    SET_GPR_U32(ctx, 31, 0x1ACB80u);
    ctx->pc = 0x143660u;
    if (runtime->hasFunction(0x143660u)) {
        auto targetFn = runtime->lookupFunction(0x143660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB80u; }
        if (ctx->pc != 0x1ACB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetProjection__Fv_0x143660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB80u; }
        if (ctx->pc != 0x1ACB80u) { return; }
    }
    ctx->pc = 0x1ACB80u;
label_1acb80:
    // 0x1acb80: 0xc0c3948  jal         func_30E520
label_1acb84:
    if (ctx->pc == 0x1ACB84u) {
        ctx->pc = 0x1ACB84u;
            // 0x1acb84: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1ACB88u;
        goto label_1acb88;
    }
    ctx->pc = 0x1ACB80u;
    SET_GPR_U32(ctx, 31, 0x1ACB88u);
    ctx->pc = 0x1ACB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB80u;
            // 0x1acb84: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E520u;
    if (runtime->hasFunction(0x30E520u)) {
        auto targetFn = runtime->lookupFunction(0x30E520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB88u; }
        if (ctx->pc != 0x1ACB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PhotoAddProjection__Fv_0x30e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB88u; }
        if (ctx->pc != 0x1ACB88u) { return; }
    }
    ctx->pc = 0x1ACB88u;
label_1acb88:
    // 0x1acb88: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1acb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1acb8c:
    // 0x1acb8c: 0x8c852e5c  lw          $a1, 0x2E5C($a0)
    ctx->pc = 0x1acb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
label_1acb90:
    // 0x1acb90: 0xc0a0f24  jal         func_283C90
label_1acb94:
    if (ctx->pc == 0x1ACB94u) {
        ctx->pc = 0x1ACB94u;
            // 0x1acb94: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x1ACB98u;
        goto label_1acb98;
    }
    ctx->pc = 0x1ACB90u;
    SET_GPR_U32(ctx, 31, 0x1ACB98u);
    ctx->pc = 0x1ACB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB90u;
            // 0x1acb94: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x283C90u;
    if (runtime->hasFunction(0x283C90u)) {
        auto targetFn = runtime->lookupFunction(0x283C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB98u; }
        if (ctx->pc != 0x1ACB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapName__6CSceneFi_0x283c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB98u; }
        if (ctx->pc != 0x1ACB98u) { return; }
    }
    ctx->pc = 0x1ACB98u;
label_1acb98:
    // 0x1acb98: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1acb98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1acb9c:
    // 0x1acb9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1acb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1acba0:
    // 0x1acba0: 0xc04a38a  jal         func_128E28
label_1acba4:
    if (ctx->pc == 0x1ACBA4u) {
        ctx->pc = 0x1ACBA4u;
            // 0x1acba4: 0x24a563b8  addiu       $a1, $a1, 0x63B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25528));
        ctx->pc = 0x1ACBA8u;
        goto label_1acba8;
    }
    ctx->pc = 0x1ACBA0u;
    SET_GPR_U32(ctx, 31, 0x1ACBA8u);
    ctx->pc = 0x1ACBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACBA0u;
            // 0x1acba4: 0x24a563b8  addiu       $a1, $a1, 0x63B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACBA8u; }
        if (ctx->pc != 0x1ACBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACBA8u; }
        if (ctx->pc != 0x1ACBA8u) { return; }
    }
    ctx->pc = 0x1ACBA8u;
label_1acba8:
    // 0x1acba8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1acbac:
    if (ctx->pc == 0x1ACBACu) {
        ctx->pc = 0x1ACBACu;
            // 0x1acbac: 0x3c02437a  lui         $v0, 0x437A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
        ctx->pc = 0x1ACBB0u;
        goto label_1acbb0;
    }
    ctx->pc = 0x1ACBA8u;
    {
        const bool branch_taken_0x1acba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACBA8u;
            // 0x1acbac: 0x3c02437a  lui         $v0, 0x437A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acba8) {
            ctx->pc = 0x1ACBD8u;
            goto label_1acbd8;
        }
    }
    ctx->pc = 0x1ACBB0u;
label_1acbb0:
    // 0x1acbb0: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1acbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1acbb4:
    // 0x1acbb4: 0xc0a0f24  jal         func_283C90
label_1acbb8:
    if (ctx->pc == 0x1ACBB8u) {
        ctx->pc = 0x1ACBB8u;
            // 0x1acbb8: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x1ACBBCu;
        goto label_1acbbc;
    }
    ctx->pc = 0x1ACBB4u;
    SET_GPR_U32(ctx, 31, 0x1ACBBCu);
    ctx->pc = 0x1ACBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACBB4u;
            // 0x1acbb8: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283C90u;
    if (runtime->hasFunction(0x283C90u)) {
        auto targetFn = runtime->lookupFunction(0x283C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACBBCu; }
        if (ctx->pc != 0x1ACBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapName__6CSceneFi_0x283c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACBBCu; }
        if (ctx->pc != 0x1ACBBCu) { return; }
    }
    ctx->pc = 0x1ACBBCu;
label_1acbbc:
    // 0x1acbbc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1acbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1acbc0:
    // 0x1acbc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1acbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1acbc4:
    // 0x1acbc4: 0xc04a38a  jal         func_128E28
label_1acbc8:
    if (ctx->pc == 0x1ACBC8u) {
        ctx->pc = 0x1ACBC8u;
            // 0x1acbc8: 0x24a563c0  addiu       $a1, $a1, 0x63C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25536));
        ctx->pc = 0x1ACBCCu;
        goto label_1acbcc;
    }
    ctx->pc = 0x1ACBC4u;
    SET_GPR_U32(ctx, 31, 0x1ACBCCu);
    ctx->pc = 0x1ACBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACBC4u;
            // 0x1acbc8: 0x24a563c0  addiu       $a1, $a1, 0x63C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACBCCu; }
        if (ctx->pc != 0x1ACBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACBCCu; }
        if (ctx->pc != 0x1ACBCCu) { return; }
    }
    ctx->pc = 0x1ACBCCu;
label_1acbcc:
    // 0x1acbcc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1acbd0:
    if (ctx->pc == 0x1ACBD0u) {
        ctx->pc = 0x1ACBD0u;
            // 0x1acbd0: 0x3c024396  lui         $v0, 0x4396 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
        ctx->pc = 0x1ACBD4u;
        goto label_1acbd4;
    }
    ctx->pc = 0x1ACBCCu;
    {
        const bool branch_taken_0x1acbcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACBCCu;
            // 0x1acbd0: 0x3c024396  lui         $v0, 0x4396 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acbcc) {
            ctx->pc = 0x1ACBE0u;
            goto label_1acbe0;
        }
    }
    ctx->pc = 0x1ACBD4u;
label_1acbd4:
    // 0x1acbd4: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x1acbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
label_1acbd8:
    // 0x1acbd8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1acbd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1acbdc:
    // 0x1acbdc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1acbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_1acbe0:
    // 0x1acbe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1acbe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1acbe4:
    // 0x1acbe4: 0x0  nop
    ctx->pc = 0x1acbe4u;
    // NOP
label_1acbe8:
    // 0x1acbe8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1acbe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1acbec:
    // 0x1acbec: 0x0  nop
    ctx->pc = 0x1acbecu;
    // NOP
label_1acbf0:
    // 0x1acbf0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1acbf4:
    if (ctx->pc == 0x1ACBF4u) {
        ctx->pc = 0x1ACBF4u;
            // 0x1acbf4: 0x3c02447a  lui         $v0, 0x447A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
        ctx->pc = 0x1ACBF8u;
        goto label_1acbf8;
    }
    ctx->pc = 0x1ACBF0u;
    {
        const bool branch_taken_0x1acbf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ACBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACBF0u;
            // 0x1acbf4: 0x3c02447a  lui         $v0, 0x447A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acbf0) {
            ctx->pc = 0x1ACBFCu;
            goto label_1acbfc;
        }
    }
    ctx->pc = 0x1ACBF8u;
label_1acbf8:
    // 0x1acbf8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1acbf8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1acbfc:
    // 0x1acbfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1acbfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1acc00:
    // 0x1acc00: 0x0  nop
    ctx->pc = 0x1acc00u;
    // NOP
label_1acc04:
    // 0x1acc04: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1acc04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1acc08:
    // 0x1acc08: 0x0  nop
    ctx->pc = 0x1acc08u;
    // NOP
label_1acc0c:
    // 0x1acc0c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1acc10:
    if (ctx->pc == 0x1ACC10u) {
        ctx->pc = 0x1ACC10u;
            // 0x1acc10: 0x3c024040  lui         $v0, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
        ctx->pc = 0x1ACC14u;
        goto label_1acc14;
    }
    ctx->pc = 0x1ACC0Cu;
    {
        const bool branch_taken_0x1acc0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ACC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACC0Cu;
            // 0x1acc10: 0x3c024040  lui         $v0, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc0c) {
            ctx->pc = 0x1ACC18u;
            goto label_1acc18;
        }
    }
    ctx->pc = 0x1ACC14u;
label_1acc14:
    // 0x1acc14: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1acc14u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1acc18:
    // 0x1acc18: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1acc18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1acc1c:
    // 0x1acc1c: 0x3c0246ea  lui         $v0, 0x46EA
    ctx->pc = 0x1acc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18154 << 16));
label_1acc20:
    // 0x1acc20: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x1acc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
label_1acc24:
    // 0x1acc24: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1acc24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1acc28:
    // 0x1acc28: 0xc050d80  jal         func_143600
label_1acc2c:
    if (ctx->pc == 0x1ACC2Cu) {
        ctx->pc = 0x1ACC2Cu;
            // 0x1acc2c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1ACC30u;
        goto label_1acc30;
    }
    ctx->pc = 0x1ACC28u;
    SET_GPR_U32(ctx, 31, 0x1ACC30u);
    ctx->pc = 0x1ACC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACC28u;
            // 0x1acc2c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x143600u;
    if (runtime->hasFunction(0x143600u)) {
        auto targetFn = runtime->lookupFunction(0x143600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACC30u; }
        if (ctx->pc != 0x1ACC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetRenderInfo__Ffff_0x143600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACC30u; }
        if (ctx->pc != 0x1ACC30u) { return; }
    }
    ctx->pc = 0x1ACC30u;
label_1acc30:
    // 0x1acc30: 0xc0bddbc  jal         func_2F76F0
label_1acc34:
    if (ctx->pc == 0x1ACC34u) {
        ctx->pc = 0x1ACC34u;
            // 0x1acc34: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1ACC38u;
        goto label_1acc38;
    }
    ctx->pc = 0x1ACC30u;
    SET_GPR_U32(ctx, 31, 0x1ACC38u);
    ctx->pc = 0x1ACC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACC30u;
            // 0x1acc34: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F76F0u;
    if (runtime->hasFunction(0x2F76F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F76F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACC38u; }
        if (ctx->pc != 0x1ACC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        S51Thunder__FP6CScene_0x2f76f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACC38u; }
        if (ctx->pc != 0x1ACC38u) { return; }
    }
    ctx->pc = 0x1ACC38u;
label_1acc38:
    // 0x1acc38: 0x8f928c7c  lw          $s2, -0x7384($gp)
    ctx->pc = 0x1acc38u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937724)));
label_1acc3c:
    // 0x1acc3c: 0x27a3053c  addiu       $v1, $sp, 0x53C
    ctx->pc = 0x1acc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1340));
label_1acc40:
    // 0x1acc40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1acc40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acc44:
    // 0x1acc44: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1acc44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acc48:
    // 0x1acc48: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1acc48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acc4c:
    // 0x1acc4c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1acc4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1acc50:
    // 0x1acc50: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1acc50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1acc54:
    // 0x1acc54: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1acc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1acc58:
    // 0x1acc58: 0xafa00538  sw          $zero, 0x538($sp)
    ctx->pc = 0x1acc58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1336), GPR_U32(ctx, 0));
label_1acc5c:
    // 0x1acc5c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1acc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1acc60:
    // 0x1acc60: 0x8f828c98  lw          $v0, -0x7368($gp)
    ctx->pc = 0x1acc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937752)));
label_1acc64:
    // 0x1acc64: 0x144002b6  bnez        $v0, . + 4 + (0x2B6 << 2)
label_1acc68:
    if (ctx->pc == 0x1ACC68u) {
        ctx->pc = 0x1ACC68u;
            // 0x1acc68: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ACC6Cu;
        goto label_1acc6c;
    }
    ctx->pc = 0x1ACC64u;
    {
        const bool branch_taken_0x1acc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACC64u;
            // 0x1acc68: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc64) {
            ctx->pc = 0x1AD740u;
            goto label_1ad740;
        }
    }
    ctx->pc = 0x1ACC6Cu;
label_1acc6c:
    // 0x1acc6c: 0x8f838c80  lw          $v1, -0x7380($gp)
    ctx->pc = 0x1acc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1acc70:
    // 0x1acc70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1acc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1acc74:
    // 0x1acc74: 0x106201cb  beq         $v1, $v0, . + 4 + (0x1CB << 2)
label_1acc78:
    if (ctx->pc == 0x1ACC78u) {
        ctx->pc = 0x1ACC78u;
            // 0x1acc78: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1ACC7Cu;
        goto label_1acc7c;
    }
    ctx->pc = 0x1ACC74u;
    {
        const bool branch_taken_0x1acc74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ACC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACC74u;
            // 0x1acc78: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc74) {
            ctx->pc = 0x1AD3A4u;
            goto label_1ad3a4;
        }
    }
    ctx->pc = 0x1ACC7Cu;
label_1acc7c:
    // 0x1acc7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1acc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1acc80:
    // 0x1acc80: 0x1062014e  beq         $v1, $v0, . + 4 + (0x14E << 2)
label_1acc84:
    if (ctx->pc == 0x1ACC84u) {
        ctx->pc = 0x1ACC84u;
            // 0x1acc84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1ACC88u;
        goto label_1acc88;
    }
    ctx->pc = 0x1ACC80u;
    {
        const bool branch_taken_0x1acc80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ACC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACC80u;
            // 0x1acc84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc80) {
            ctx->pc = 0x1AD1BCu;
            goto label_1ad1bc;
        }
    }
    ctx->pc = 0x1ACC88u;
label_1acc88:
    // 0x1acc88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1acc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1acc8c:
    // 0x1acc8c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1acc90:
    if (ctx->pc == 0x1ACC90u) {
        ctx->pc = 0x1ACC94u;
        goto label_1acc94;
    }
    ctx->pc = 0x1ACC8Cu;
    {
        const bool branch_taken_0x1acc8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1acc8c) {
            ctx->pc = 0x1ACC9Cu;
            goto label_1acc9c;
        }
    }
    ctx->pc = 0x1ACC94u;
label_1acc94:
    // 0x1acc94: 0x100001c8  b           . + 4 + (0x1C8 << 2)
label_1acc98:
    if (ctx->pc == 0x1ACC98u) {
        ctx->pc = 0x1ACC9Cu;
        goto label_1acc9c;
    }
    ctx->pc = 0x1ACC94u;
    {
        const bool branch_taken_0x1acc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acc94) {
            ctx->pc = 0x1AD3B8u;
            goto label_1ad3b8;
        }
    }
    ctx->pc = 0x1ACC9Cu;
label_1acc9c:
    // 0x1acc9c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1acc9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1acca0:
    // 0x1acca0: 0xc0c0fc8  jal         func_303F20
label_1acca4:
    if (ctx->pc == 0x1ACCA4u) {
        ctx->pc = 0x1ACCA4u;
            // 0x1acca4: 0xafa00538  sw          $zero, 0x538($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1336), GPR_U32(ctx, 0));
        ctx->pc = 0x1ACCA8u;
        goto label_1acca8;
    }
    ctx->pc = 0x1ACCA0u;
    SET_GPR_U32(ctx, 31, 0x1ACCA8u);
    ctx->pc = 0x1ACCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACCA0u;
            // 0x1acca4: 0xafa00538  sw          $zero, 0x538($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303F20u;
    if (runtime->hasFunction(0x303F20u)) {
        auto targetFn = runtime->lookupFunction(0x303F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACCA8u; }
        if (ctx->pc != 0x1ACCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameRunning__Fv_0x303f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACCA8u; }
        if (ctx->pc != 0x1ACCA8u) { return; }
    }
    ctx->pc = 0x1ACCA8u;
label_1acca8:
    // 0x1acca8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1accac:
    if (ctx->pc == 0x1ACCACu) {
        ctx->pc = 0x1ACCB0u;
        goto label_1accb0;
    }
    ctx->pc = 0x1ACCA8u;
    {
        const bool branch_taken_0x1acca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acca8) {
            ctx->pc = 0x1ACCC0u;
            goto label_1accc0;
        }
    }
    ctx->pc = 0x1ACCB0u;
label_1accb0:
    // 0x1accb0: 0xc0c1048  jal         func_304120
label_1accb4:
    if (ctx->pc == 0x1ACCB4u) {
        ctx->pc = 0x1ACCB8u;
        goto label_1accb8;
    }
    ctx->pc = 0x1ACCB0u;
    SET_GPR_U32(ctx, 31, 0x1ACCB8u);
    ctx->pc = 0x304120u;
    if (runtime->hasFunction(0x304120u)) {
        auto targetFn = runtime->lookupFunction(0x304120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACCB8u; }
        if (ctx->pc != 0x1ACCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgLoopSubGame__Fv_0x304120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACCB8u; }
        if (ctx->pc != 0x1ACCB8u) { return; }
    }
    ctx->pc = 0x1ACCB8u;
label_1accb8:
    // 0x1accb8: 0x100001bf  b           . + 4 + (0x1BF << 2)
label_1accbc:
    if (ctx->pc == 0x1ACCBCu) {
        ctx->pc = 0x1ACCC0u;
        goto label_1accc0;
    }
    ctx->pc = 0x1ACCB8u;
    {
        const bool branch_taken_0x1accb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1accb8) {
            ctx->pc = 0x1AD3B8u;
            goto label_1ad3b8;
        }
    }
    ctx->pc = 0x1ACCC0u;
label_1accc0:
    // 0x1accc0: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1accc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1accc4:
    // 0x1accc4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_1accc8:
    if (ctx->pc == 0x1ACCC8u) {
        ctx->pc = 0x1ACCCCu;
        goto label_1acccc;
    }
    ctx->pc = 0x1ACCC4u;
    {
        const bool branch_taken_0x1accc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1accc4) {
            ctx->pc = 0x1ACD14u;
            goto label_1acd14;
        }
    }
    ctx->pc = 0x1ACCCCu;
label_1acccc:
    // 0x1acccc: 0xc06a6e8  jal         func_1A9BA0
label_1accd0:
    if (ctx->pc == 0x1ACCD0u) {
        ctx->pc = 0x1ACCD4u;
        goto label_1accd4;
    }
    ctx->pc = 0x1ACCCCu;
    SET_GPR_U32(ctx, 31, 0x1ACCD4u);
    ctx->pc = 0x1A9BA0u;
    if (runtime->hasFunction(0x1A9BA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A9BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACCD4u; }
        if (ctx->pc != 0x1ACCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsEditMode__Fv_0x1a9ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACCD4u; }
        if (ctx->pc != 0x1ACCD4u) { return; }
    }
    ctx->pc = 0x1ACCD4u;
label_1accd4:
    // 0x1accd4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1accd8:
    if (ctx->pc == 0x1ACCD8u) {
        ctx->pc = 0x1ACCDCu;
        goto label_1accdc;
    }
    ctx->pc = 0x1ACCD4u;
    {
        const bool branch_taken_0x1accd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1accd4) {
            ctx->pc = 0x1ACD14u;
            goto label_1acd14;
        }
    }
    ctx->pc = 0x1ACCDCu;
label_1accdc:
    // 0x1accdc: 0xc0b6968  jal         func_2DA5A0
label_1acce0:
    if (ctx->pc == 0x1ACCE0u) {
        ctx->pc = 0x1ACCE0u;
            // 0x1acce0: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1ACCE4u;
        goto label_1acce4;
    }
    ctx->pc = 0x1ACCDCu;
    SET_GPR_U32(ctx, 31, 0x1ACCE4u);
    ctx->pc = 0x1ACCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACCDCu;
            // 0x1acce0: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DA5A0u;
    if (runtime->hasFunction(0x2DA5A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DA5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACCE4u; }
        if (ctx->pc != 0x1ACCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditMode__FP6CScene_0x2da5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACCE4u; }
        if (ctx->pc != 0x1ACCE4u) { return; }
    }
    ctx->pc = 0x1ACCE4u;
label_1acce4:
    // 0x1acce4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1acce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1acce8:
    // 0x1acce8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1acce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1accec:
    // 0x1accec: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x1accecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_1accf0:
    // 0x1accf0: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1accf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1accf4:
    // 0x1accf4: 0xc052c4c  jal         func_14B130
label_1accf8:
    if (ctx->pc == 0x1ACCF8u) {
        ctx->pc = 0x1ACCF8u;
            // 0x1accf8: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1ACCFCu;
        goto label_1accfc;
    }
    ctx->pc = 0x1ACCF4u;
    SET_GPR_U32(ctx, 31, 0x1ACCFCu);
    ctx->pc = 0x1ACCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACCF4u;
            // 0x1accf8: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B130u;
    if (runtime->hasFunction(0x14B130u)) {
        auto targetFn = runtime->lookupFunction(0x14B130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACCFCu; }
        if (ctx->pc != 0x1ACCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAutoRepeat2__8CGamePadFiii_0x14b130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACCFCu; }
        if (ctx->pc != 0x1ACCFCu) { return; }
    }
    ctx->pc = 0x1ACCFCu;
label_1accfc:
    // 0x1accfc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1accfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1acd00:
    // 0x1acd00: 0x3405f000  ori         $a1, $zero, 0xF000
    ctx->pc = 0x1acd00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
label_1acd04:
    // 0x1acd04: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x1acd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_1acd08:
    // 0x1acd08: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1acd08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1acd0c:
    // 0x1acd0c: 0xc052c4c  jal         func_14B130
label_1acd10:
    if (ctx->pc == 0x1ACD10u) {
        ctx->pc = 0x1ACD10u;
            // 0x1acd10: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1ACD14u;
        goto label_1acd14;
    }
    ctx->pc = 0x1ACD0Cu;
    SET_GPR_U32(ctx, 31, 0x1ACD14u);
    ctx->pc = 0x1ACD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACD0Cu;
            // 0x1acd10: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B130u;
    if (runtime->hasFunction(0x14B130u)) {
        auto targetFn = runtime->lookupFunction(0x14B130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACD14u; }
        if (ctx->pc != 0x1ACD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAutoRepeat2__8CGamePadFiii_0x14b130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACD14u; }
        if (ctx->pc != 0x1ACD14u) { return; }
    }
    ctx->pc = 0x1ACD14u;
label_1acd14:
    // 0x1acd14: 0x8f858cb0  lw          $a1, -0x7350($gp)
    ctx->pc = 0x1acd14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1acd18:
    // 0x1acd18: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1acd18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1acd1c:
    // 0x1acd1c: 0xc0bbef8  jal         func_2EFBE0
label_1acd20:
    if (ctx->pc == 0x1ACD20u) {
        ctx->pc = 0x1ACD20u;
            // 0x1acd20: 0x2484ede0  addiu       $a0, $a0, -0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962656));
        ctx->pc = 0x1ACD24u;
        goto label_1acd24;
    }
    ctx->pc = 0x1ACD1Cu;
    SET_GPR_U32(ctx, 31, 0x1ACD24u);
    ctx->pc = 0x1ACD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACD1Cu;
            // 0x1acd20: 0x2484ede0  addiu       $a0, $a0, -0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EFBE0u;
    if (runtime->hasFunction(0x2EFBE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EFBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACD24u; }
        if (ctx->pc != 0x1ACD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__10CEditEventFP6CScene_0x2efbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACD24u; }
        if (ctx->pc != 0x1ACD24u) { return; }
    }
    ctx->pc = 0x1ACD24u;
label_1acd24:
    // 0x1acd24: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1acd24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1acd28:
    // 0x1acd28: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1acd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1acd2c:
    // 0x1acd2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1acd2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acd30:
    // 0x1acd30: 0xc049c86  jal         func_127218
label_1acd34:
    if (ctx->pc == 0x1ACD34u) {
        ctx->pc = 0x1ACD34u;
            // 0x1acd34: 0x240600d0  addiu       $a2, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x1ACD38u;
        goto label_1acd38;
    }
    ctx->pc = 0x1ACD30u;
    SET_GPR_U32(ctx, 31, 0x1ACD38u);
    ctx->pc = 0x1ACD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACD30u;
            // 0x1acd34: 0x240600d0  addiu       $a2, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACD38u; }
        if (ctx->pc != 0x1ACD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACD38u; }
        if (ctx->pc != 0x1ACD38u) { return; }
    }
    ctx->pc = 0x1ACD38u;
label_1acd38:
    // 0x1acd38: 0x2e810006  sltiu       $at, $s4, 0x6
    ctx->pc = 0x1acd38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1acd3c:
    // 0x1acd3c: 0x102000cb  beqz        $at, . + 4 + (0xCB << 2)
label_1acd40:
    if (ctx->pc == 0x1ACD40u) {
        ctx->pc = 0x1ACD40u;
            // 0x1acd40: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD44u;
        goto label_1acd44;
    }
    ctx->pc = 0x1ACD3Cu;
    {
        const bool branch_taken_0x1acd3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACD3Cu;
            // 0x1acd40: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd3c) {
            ctx->pc = 0x1AD06Cu;
            goto label_1ad06c;
        }
    }
    ctx->pc = 0x1ACD44u;
label_1acd44:
    // 0x1acd44: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1acd44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_1acd48:
    // 0x1acd48: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x1acd48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_1acd4c:
    // 0x1acd4c: 0x24636400  addiu       $v1, $v1, 0x6400
    ctx->pc = 0x1acd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25600));
label_1acd50:
    // 0x1acd50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1acd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1acd54:
    // 0x1acd54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1acd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1acd58:
    // 0x1acd58: 0x400008  jr          $v0
label_1acd5c:
    if (ctx->pc == 0x1ACD5Cu) {
        ctx->pc = 0x1ACD60u;
        goto label_1acd60;
    }
    ctx->pc = 0x1ACD58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ACD60u: goto label_1acd60;
            case 0x1ACD70u: goto label_1acd70;
            case 0x1ACEF4u: goto label_1acef4;
            case 0x1AD064u: goto label_1ad064;
            case 0x1AD06Cu: goto label_1ad06c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ACD60u;
label_1acd60:
    // 0x1acd60: 0xc06bf8c  jal         func_1AFE30
label_1acd64:
    if (ctx->pc == 0x1ACD64u) {
        ctx->pc = 0x1ACD64u;
            // 0x1acd64: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1ACD68u;
        goto label_1acd68;
    }
    ctx->pc = 0x1ACD60u;
    SET_GPR_U32(ctx, 31, 0x1ACD68u);
    ctx->pc = 0x1ACD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACD60u;
            // 0x1acd64: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AFE30u;
    if (runtime->hasFunction(0x1AFE30u)) {
        auto targetFn = runtime->lookupFunction(0x1AFE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACD68u; }
        if (ctx->pc != 0x1ACD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditDataSave__Fv_0x1afe30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACD68u; }
        if (ctx->pc != 0x1ACD68u) { return; }
    }
    ctx->pc = 0x1ACD68u;
label_1acd68:
    // 0x1acd68: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_1acd6c:
    if (ctx->pc == 0x1ACD6Cu) {
        ctx->pc = 0x1ACD70u;
        goto label_1acd70;
    }
    ctx->pc = 0x1ACD68u;
    {
        const bool branch_taken_0x1acd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acd68) {
            ctx->pc = 0x1AD06Cu;
            goto label_1ad06c;
        }
    }
    ctx->pc = 0x1ACD70u;
label_1acd70:
    // 0x1acd70: 0x3c0c01ea  lui         $t4, 0x1EA
    ctx->pc = 0x1acd70u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)490 << 16));
label_1acd74:
    // 0x1acd74: 0x3c0a01ea  lui         $t2, 0x1EA
    ctx->pc = 0x1acd74u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)490 << 16));
label_1acd78:
    // 0x1acd78: 0x258cee00  addiu       $t4, $t4, -0x1200
    ctx->pc = 0x1acd78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294962688));
label_1acd7c:
    // 0x1acd7c: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1acd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1acd80:
    // 0x1acd80: 0xc5830000  lwc1        $f3, 0x0($t4)
    ctx->pc = 0x1acd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1acd84:
    // 0x1acd84: 0x3c0301ea  lui         $v1, 0x1EA
    ctx->pc = 0x1acd84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
label_1acd88:
    // 0x1acd88: 0xc5820004  lwc1        $f2, 0x4($t4)
    ctx->pc = 0x1acd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1acd8c:
    // 0x1acd8c: 0x3c0801ea  lui         $t0, 0x1EA
    ctx->pc = 0x1acd8cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)490 << 16));
label_1acd90:
    // 0x1acd90: 0xc5810008  lwc1        $f1, 0x8($t4)
    ctx->pc = 0x1acd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1acd94:
    // 0x1acd94: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1acd94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1acd98:
    // 0x1acd98: 0xc580000c  lwc1        $f0, 0xC($t4)
    ctx->pc = 0x1acd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1acd9c:
    // 0x1acd9c: 0x27ab0190  addiu       $t3, $sp, 0x190
    ctx->pc = 0x1acd9cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1acda0:
    // 0x1acda0: 0x254aee30  addiu       $t2, $t2, -0x11D0
    ctx->pc = 0x1acda0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294962736));
label_1acda4:
    // 0x1acda4: 0x27a901c0  addiu       $t1, $sp, 0x1C0
    ctx->pc = 0x1acda4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_1acda8:
    // 0x1acda8: 0x24c6ee40  addiu       $a2, $a2, -0x11C0
    ctx->pc = 0x1acda8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962752));
label_1acdac:
    // 0x1acdac: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x1acdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_1acdb0:
    // 0x1acdb0: 0x2463ee50  addiu       $v1, $v1, -0x11B0
    ctx->pc = 0x1acdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962768));
label_1acdb4:
    // 0x1acdb4: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x1acdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_1acdb8:
    // 0x1acdb8: 0x2508ee60  addiu       $t0, $t0, -0x11A0
    ctx->pc = 0x1acdb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962784));
label_1acdbc:
    // 0x1acdbc: 0x27a701f0  addiu       $a3, $sp, 0x1F0
    ctx->pc = 0x1acdbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_1acdc0:
    // 0x1acdc0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1acdc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1acdc4:
    // 0x1acdc4: 0x2484ef08  addiu       $a0, $a0, -0x10F8
    ctx->pc = 0x1acdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962952));
label_1acdc8:
    // 0x1acdc8: 0xe5630000  swc1        $f3, 0x0($t3)
    ctx->pc = 0x1acdc8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_1acdcc:
    // 0x1acdcc: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1acdccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1acdd0:
    // 0x1acdd0: 0xe5620004  swc1        $f2, 0x4($t3)
    ctx->pc = 0x1acdd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
label_1acdd4:
    // 0x1acdd4: 0xe5610008  swc1        $f1, 0x8($t3)
    ctx->pc = 0x1acdd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
label_1acdd8:
    // 0x1acdd8: 0xe560000c  swc1        $f0, 0xC($t3)
    ctx->pc = 0x1acdd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 12), bits); }
label_1acddc:
    // 0x1acddc: 0xc5830010  lwc1        $f3, 0x10($t4)
    ctx->pc = 0x1acddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1acde0:
    // 0x1acde0: 0xc5820014  lwc1        $f2, 0x14($t4)
    ctx->pc = 0x1acde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1acde4:
    // 0x1acde4: 0xc5810018  lwc1        $f1, 0x18($t4)
    ctx->pc = 0x1acde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1acde8:
    // 0x1acde8: 0xc580001c  lwc1        $f0, 0x1C($t4)
    ctx->pc = 0x1acde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1acdec:
    // 0x1acdec: 0xe5630010  swc1        $f3, 0x10($t3)
    ctx->pc = 0x1acdecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 16), bits); }
label_1acdf0:
    // 0x1acdf0: 0xe5620014  swc1        $f2, 0x14($t3)
    ctx->pc = 0x1acdf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 20), bits); }
label_1acdf4:
    // 0x1acdf4: 0xe5610018  swc1        $f1, 0x18($t3)
    ctx->pc = 0x1acdf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 24), bits); }
label_1acdf8:
    // 0x1acdf8: 0xe560001c  swc1        $f0, 0x1C($t3)
    ctx->pc = 0x1acdf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 28), bits); }
label_1acdfc:
    // 0x1acdfc: 0xc5810020  lwc1        $f1, 0x20($t4)
    ctx->pc = 0x1acdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ace00:
    // 0x1ace00: 0xc5800024  lwc1        $f0, 0x24($t4)
    ctx->pc = 0x1ace00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ace04:
    // 0x1ace04: 0xe5610020  swc1        $f1, 0x20($t3)
    ctx->pc = 0x1ace04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 32), bits); }
label_1ace08:
    // 0x1ace08: 0xe5600024  swc1        $f0, 0x24($t3)
    ctx->pc = 0x1ace08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 36), bits); }
label_1ace0c:
    // 0x1ace0c: 0xc5430000  lwc1        $f3, 0x0($t2)
    ctx->pc = 0x1ace0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ace10:
    // 0x1ace10: 0xc5420004  lwc1        $f2, 0x4($t2)
    ctx->pc = 0x1ace10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ace14:
    // 0x1ace14: 0xc5410008  lwc1        $f1, 0x8($t2)
    ctx->pc = 0x1ace14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ace18:
    // 0x1ace18: 0xc540000c  lwc1        $f0, 0xC($t2)
    ctx->pc = 0x1ace18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ace1c:
    // 0x1ace1c: 0xe5230000  swc1        $f3, 0x0($t1)
    ctx->pc = 0x1ace1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_1ace20:
    // 0x1ace20: 0xe5220004  swc1        $f2, 0x4($t1)
    ctx->pc = 0x1ace20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
label_1ace24:
    // 0x1ace24: 0xe5210008  swc1        $f1, 0x8($t1)
    ctx->pc = 0x1ace24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
label_1ace28:
    // 0x1ace28: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x1ace28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
label_1ace2c:
    // 0x1ace2c: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x1ace2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ace30:
    // 0x1ace30: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x1ace30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ace34:
    // 0x1ace34: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x1ace34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ace38:
    // 0x1ace38: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x1ace38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ace3c:
    // 0x1ace3c: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x1ace3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1ace40:
    // 0x1ace40: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x1ace40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1ace44:
    // 0x1ace44: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x1ace44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1ace48:
    // 0x1ace48: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1ace48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_1ace4c:
    // 0x1ace4c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1ace4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ace50:
    // 0x1ace50: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1ace50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ace54:
    // 0x1ace54: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1ace54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ace58:
    // 0x1ace58: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1ace58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ace5c:
    // 0x1ace5c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x1ace5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1ace60:
    // 0x1ace60: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1ace60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1ace64:
    // 0x1ace64: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1ace64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1ace68:
    // 0x1ace68: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1ace68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1ace6c:
    // 0x1ace6c: 0x79060000  lq          $a2, 0x0($t0)
    ctx->pc = 0x1ace6cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_1ace70:
    // 0x1ace70: 0x79050010  lq          $a1, 0x10($t0)
    ctx->pc = 0x1ace70u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 8), 16)));
label_1ace74:
    // 0x1ace74: 0x79030020  lq          $v1, 0x20($t0)
    ctx->pc = 0x1ace74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 32)));
label_1ace78:
    // 0x1ace78: 0x79020030  lq          $v0, 0x30($t0)
    ctx->pc = 0x1ace78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 48)));
label_1ace7c:
    // 0x1ace7c: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x1ace7cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
label_1ace80:
    // 0x1ace80: 0x7ce50010  sq          $a1, 0x10($a3)
    ctx->pc = 0x1ace80u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 5));
label_1ace84:
    // 0x1ace84: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x1ace84u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
label_1ace88:
    // 0x1ace88: 0x7ce20030  sq          $v0, 0x30($a3)
    ctx->pc = 0x1ace88u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
label_1ace8c:
    // 0x1ace8c: 0x79030040  lq          $v1, 0x40($t0)
    ctx->pc = 0x1ace8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 64)));
label_1ace90:
    // 0x1ace90: 0x79020050  lq          $v0, 0x50($t0)
    ctx->pc = 0x1ace90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 80)));
label_1ace94:
    // 0x1ace94: 0x7ce30040  sq          $v1, 0x40($a3)
    ctx->pc = 0x1ace94u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 64), GPR_VEC(ctx, 3));
label_1ace98:
    // 0x1ace98: 0x7ce20050  sq          $v0, 0x50($a3)
    ctx->pc = 0x1ace98u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 80), GPR_VEC(ctx, 2));
label_1ace9c:
    // 0x1ace9c: 0x8c26eec0  lw          $a2, -0x1140($at)
    ctx->pc = 0x1ace9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962880)));
label_1acea0:
    // 0x1acea0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1acea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1acea4:
    // 0x1acea4: 0xafa60250  sw          $a2, 0x250($sp)
    ctx->pc = 0x1acea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 6));
label_1acea8:
    // 0x1acea8: 0x8c25eec4  lw          $a1, -0x113C($at)
    ctx->pc = 0x1acea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962884)));
label_1aceac:
    // 0x1aceac: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1aceacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1aceb0:
    // 0x1aceb0: 0xafa50254  sw          $a1, 0x254($sp)
    ctx->pc = 0x1aceb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 5));
label_1aceb4:
    // 0x1aceb4: 0x8c23eec8  lw          $v1, -0x1138($at)
    ctx->pc = 0x1aceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962888)));
label_1aceb8:
    // 0x1aceb8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1aceb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1acebc:
    // 0x1acebc: 0xafa30258  sw          $v1, 0x258($sp)
    ctx->pc = 0x1acebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 3));
label_1acec0:
    // 0x1acec0: 0x8c22eecc  lw          $v0, -0x1134($at)
    ctx->pc = 0x1acec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962892)));
label_1acec4:
    // 0x1acec4: 0xc0b49fc  jal         func_2D27F0
label_1acec8:
    if (ctx->pc == 0x1ACEC8u) {
        ctx->pc = 0x1ACEC8u;
            // 0x1acec8: 0xafa2025c  sw          $v0, 0x25C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 2));
        ctx->pc = 0x1ACECCu;
        goto label_1acecc;
    }
    ctx->pc = 0x1ACEC4u;
    SET_GPR_U32(ctx, 31, 0x1ACECCu);
    ctx->pc = 0x1ACEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACEC4u;
            // 0x1acec8: 0xafa2025c  sw          $v0, 0x25C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACECCu; }
        if (ctx->pc != 0x1ACECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACECCu; }
        if (ctx->pc != 0x1ACECCu) { return; }
    }
    ctx->pc = 0x1ACECCu;
label_1acecc:
    // 0x1acecc: 0x3a830004  xori        $v1, $s4, 0x4
    ctx->pc = 0x1aceccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)4);
label_1aced0:
    // 0x1aced0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1aced0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aced4:
    // 0x1aced4: 0xc06bef4  jal         func_1AFBD0
label_1aced8:
    if (ctx->pc == 0x1ACED8u) {
        ctx->pc = 0x1ACED8u;
            // 0x1aced8: 0x2c650001  sltiu       $a1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x1ACEDCu;
        goto label_1acedc;
    }
    ctx->pc = 0x1ACED4u;
    SET_GPR_U32(ctx, 31, 0x1ACEDCu);
    ctx->pc = 0x1ACED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACED4u;
            // 0x1aced8: 0x2c650001  sltiu       $a1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AFBD0u;
    if (runtime->hasFunction(0x1AFBD0u)) {
        auto targetFn = runtime->lookupFunction(0x1AFBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACEDCu; }
        if (ctx->pc != 0x1ACEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditGotoInterior__Fii_0x1afbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACEDCu; }
        if (ctx->pc != 0x1ACEDCu) { return; }
    }
    ctx->pc = 0x1ACEDCu;
label_1acedc:
    // 0x1acedc: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1acedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1acee0:
    // 0x1acee0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1acee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1acee4:
    // 0x1acee4: 0xc0b1f3c  jal         func_2C7CF0
label_1acee8:
    if (ctx->pc == 0x1ACEE8u) {
        ctx->pc = 0x1ACEE8u;
            // 0x1acee8: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x1ACEECu;
        goto label_1aceec;
    }
    ctx->pc = 0x1ACEE4u;
    SET_GPR_U32(ctx, 31, 0x1ACEECu);
    ctx->pc = 0x1ACEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACEE4u;
            // 0x1acee8: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7CF0u;
    if (runtime->hasFunction(0x2C7CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2C7CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACEECu; }
        if (ctx->pc != 0x1ACEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunEvent__6CSceneFiP15CSceneEventData_0x2c7cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACEECu; }
        if (ctx->pc != 0x1ACEECu) { return; }
    }
    ctx->pc = 0x1ACEECu;
label_1aceec:
    // 0x1aceec: 0x1000005f  b           . + 4 + (0x5F << 2)
label_1acef0:
    if (ctx->pc == 0x1ACEF0u) {
        ctx->pc = 0x1ACEF4u;
        goto label_1acef4;
    }
    ctx->pc = 0x1ACEECu;
    {
        const bool branch_taken_0x1aceec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aceec) {
            ctx->pc = 0x1AD06Cu;
            goto label_1ad06c;
        }
    }
    ctx->pc = 0x1ACEF4u;
label_1acef4:
    // 0x1acef4: 0x3c0c01ea  lui         $t4, 0x1EA
    ctx->pc = 0x1acef4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)490 << 16));
label_1acef8:
    // 0x1acef8: 0x3c0a01ea  lui         $t2, 0x1EA
    ctx->pc = 0x1acef8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)490 << 16));
label_1acefc:
    // 0x1acefc: 0x258cee00  addiu       $t4, $t4, -0x1200
    ctx->pc = 0x1acefcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294962688));
label_1acf00:
    // 0x1acf00: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1acf00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1acf04:
    // 0x1acf04: 0xc5830000  lwc1        $f3, 0x0($t4)
    ctx->pc = 0x1acf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1acf08:
    // 0x1acf08: 0x3c0301ea  lui         $v1, 0x1EA
    ctx->pc = 0x1acf08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
label_1acf0c:
    // 0x1acf0c: 0xc5820004  lwc1        $f2, 0x4($t4)
    ctx->pc = 0x1acf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1acf10:
    // 0x1acf10: 0x3c0801ea  lui         $t0, 0x1EA
    ctx->pc = 0x1acf10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)490 << 16));
label_1acf14:
    // 0x1acf14: 0xc5810008  lwc1        $f1, 0x8($t4)
    ctx->pc = 0x1acf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1acf18:
    // 0x1acf18: 0x27ab0190  addiu       $t3, $sp, 0x190
    ctx->pc = 0x1acf18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1acf1c:
    // 0x1acf1c: 0xc580000c  lwc1        $f0, 0xC($t4)
    ctx->pc = 0x1acf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1acf20:
    // 0x1acf20: 0x254aee30  addiu       $t2, $t2, -0x11D0
    ctx->pc = 0x1acf20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294962736));
label_1acf24:
    // 0x1acf24: 0x27a901c0  addiu       $t1, $sp, 0x1C0
    ctx->pc = 0x1acf24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_1acf28:
    // 0x1acf28: 0x24c6ee40  addiu       $a2, $a2, -0x11C0
    ctx->pc = 0x1acf28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962752));
label_1acf2c:
    // 0x1acf2c: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x1acf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_1acf30:
    // 0x1acf30: 0x2463ee50  addiu       $v1, $v1, -0x11B0
    ctx->pc = 0x1acf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962768));
label_1acf34:
    // 0x1acf34: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x1acf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_1acf38:
    // 0x1acf38: 0x2508ee60  addiu       $t0, $t0, -0x11A0
    ctx->pc = 0x1acf38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962784));
label_1acf3c:
    // 0x1acf3c: 0x27a701f0  addiu       $a3, $sp, 0x1F0
    ctx->pc = 0x1acf3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_1acf40:
    // 0x1acf40: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1acf40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1acf44:
    // 0x1acf44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1acf44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acf48:
    // 0x1acf48: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1acf48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1acf4c:
    // 0x1acf4c: 0xe5630000  swc1        $f3, 0x0($t3)
    ctx->pc = 0x1acf4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_1acf50:
    // 0x1acf50: 0xe5620004  swc1        $f2, 0x4($t3)
    ctx->pc = 0x1acf50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
label_1acf54:
    // 0x1acf54: 0xe5610008  swc1        $f1, 0x8($t3)
    ctx->pc = 0x1acf54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
label_1acf58:
    // 0x1acf58: 0xe560000c  swc1        $f0, 0xC($t3)
    ctx->pc = 0x1acf58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 12), bits); }
label_1acf5c:
    // 0x1acf5c: 0xc5830010  lwc1        $f3, 0x10($t4)
    ctx->pc = 0x1acf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1acf60:
    // 0x1acf60: 0xc5820014  lwc1        $f2, 0x14($t4)
    ctx->pc = 0x1acf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1acf64:
    // 0x1acf64: 0xc5810018  lwc1        $f1, 0x18($t4)
    ctx->pc = 0x1acf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1acf68:
    // 0x1acf68: 0xc580001c  lwc1        $f0, 0x1C($t4)
    ctx->pc = 0x1acf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1acf6c:
    // 0x1acf6c: 0xe5630010  swc1        $f3, 0x10($t3)
    ctx->pc = 0x1acf6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 16), bits); }
label_1acf70:
    // 0x1acf70: 0xe5620014  swc1        $f2, 0x14($t3)
    ctx->pc = 0x1acf70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 20), bits); }
label_1acf74:
    // 0x1acf74: 0xe5610018  swc1        $f1, 0x18($t3)
    ctx->pc = 0x1acf74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 24), bits); }
label_1acf78:
    // 0x1acf78: 0xe560001c  swc1        $f0, 0x1C($t3)
    ctx->pc = 0x1acf78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 28), bits); }
label_1acf7c:
    // 0x1acf7c: 0xc5810020  lwc1        $f1, 0x20($t4)
    ctx->pc = 0x1acf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1acf80:
    // 0x1acf80: 0xc5800024  lwc1        $f0, 0x24($t4)
    ctx->pc = 0x1acf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1acf84:
    // 0x1acf84: 0xe5610020  swc1        $f1, 0x20($t3)
    ctx->pc = 0x1acf84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 32), bits); }
label_1acf88:
    // 0x1acf88: 0xe5600024  swc1        $f0, 0x24($t3)
    ctx->pc = 0x1acf88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 36), bits); }
label_1acf8c:
    // 0x1acf8c: 0xc5430000  lwc1        $f3, 0x0($t2)
    ctx->pc = 0x1acf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1acf90:
    // 0x1acf90: 0xc5420004  lwc1        $f2, 0x4($t2)
    ctx->pc = 0x1acf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1acf94:
    // 0x1acf94: 0xc5410008  lwc1        $f1, 0x8($t2)
    ctx->pc = 0x1acf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1acf98:
    // 0x1acf98: 0xc540000c  lwc1        $f0, 0xC($t2)
    ctx->pc = 0x1acf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1acf9c:
    // 0x1acf9c: 0xe5230000  swc1        $f3, 0x0($t1)
    ctx->pc = 0x1acf9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_1acfa0:
    // 0x1acfa0: 0xe5220004  swc1        $f2, 0x4($t1)
    ctx->pc = 0x1acfa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
label_1acfa4:
    // 0x1acfa4: 0xe5210008  swc1        $f1, 0x8($t1)
    ctx->pc = 0x1acfa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
label_1acfa8:
    // 0x1acfa8: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x1acfa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
label_1acfac:
    // 0x1acfac: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x1acfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1acfb0:
    // 0x1acfb0: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x1acfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1acfb4:
    // 0x1acfb4: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x1acfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1acfb8:
    // 0x1acfb8: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x1acfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1acfbc:
    // 0x1acfbc: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x1acfbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1acfc0:
    // 0x1acfc0: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x1acfc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1acfc4:
    // 0x1acfc4: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x1acfc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1acfc8:
    // 0x1acfc8: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1acfc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_1acfcc:
    // 0x1acfcc: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1acfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1acfd0:
    // 0x1acfd0: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1acfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1acfd4:
    // 0x1acfd4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1acfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1acfd8:
    // 0x1acfd8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1acfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1acfdc:
    // 0x1acfdc: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x1acfdcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1acfe0:
    // 0x1acfe0: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1acfe0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1acfe4:
    // 0x1acfe4: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1acfe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1acfe8:
    // 0x1acfe8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1acfe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1acfec:
    // 0x1acfec: 0x79060000  lq          $a2, 0x0($t0)
    ctx->pc = 0x1acfecu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_1acff0:
    // 0x1acff0: 0x79050010  lq          $a1, 0x10($t0)
    ctx->pc = 0x1acff0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 8), 16)));
label_1acff4:
    // 0x1acff4: 0x79030020  lq          $v1, 0x20($t0)
    ctx->pc = 0x1acff4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 32)));
label_1acff8:
    // 0x1acff8: 0x79020030  lq          $v0, 0x30($t0)
    ctx->pc = 0x1acff8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 48)));
label_1acffc:
    // 0x1acffc: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x1acffcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
label_1ad000:
    // 0x1ad000: 0x7ce50010  sq          $a1, 0x10($a3)
    ctx->pc = 0x1ad000u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 5));
label_1ad004:
    // 0x1ad004: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x1ad004u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
label_1ad008:
    // 0x1ad008: 0x7ce20030  sq          $v0, 0x30($a3)
    ctx->pc = 0x1ad008u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
label_1ad00c:
    // 0x1ad00c: 0x79030040  lq          $v1, 0x40($t0)
    ctx->pc = 0x1ad00cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 64)));
label_1ad010:
    // 0x1ad010: 0x79020050  lq          $v0, 0x50($t0)
    ctx->pc = 0x1ad010u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 80)));
label_1ad014:
    // 0x1ad014: 0x7ce30040  sq          $v1, 0x40($a3)
    ctx->pc = 0x1ad014u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 64), GPR_VEC(ctx, 3));
label_1ad018:
    // 0x1ad018: 0x7ce20050  sq          $v0, 0x50($a3)
    ctx->pc = 0x1ad018u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 80), GPR_VEC(ctx, 2));
label_1ad01c:
    // 0x1ad01c: 0x8c26eec0  lw          $a2, -0x1140($at)
    ctx->pc = 0x1ad01cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962880)));
label_1ad020:
    // 0x1ad020: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ad020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ad024:
    // 0x1ad024: 0xafa60250  sw          $a2, 0x250($sp)
    ctx->pc = 0x1ad024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 6));
label_1ad028:
    // 0x1ad028: 0x8c25eec4  lw          $a1, -0x113C($at)
    ctx->pc = 0x1ad028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962884)));
label_1ad02c:
    // 0x1ad02c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ad02cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ad030:
    // 0x1ad030: 0xafa50254  sw          $a1, 0x254($sp)
    ctx->pc = 0x1ad030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 5));
label_1ad034:
    // 0x1ad034: 0x8c23eec8  lw          $v1, -0x1138($at)
    ctx->pc = 0x1ad034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962888)));
label_1ad038:
    // 0x1ad038: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ad038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ad03c:
    // 0x1ad03c: 0xafa30258  sw          $v1, 0x258($sp)
    ctx->pc = 0x1ad03cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 3));
label_1ad040:
    // 0x1ad040: 0x8c22eecc  lw          $v0, -0x1134($at)
    ctx->pc = 0x1ad040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962892)));
label_1ad044:
    // 0x1ad044: 0xc06bf44  jal         func_1AFD10
label_1ad048:
    if (ctx->pc == 0x1AD048u) {
        ctx->pc = 0x1AD048u;
            // 0x1ad048: 0xafa2025c  sw          $v0, 0x25C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 2));
        ctx->pc = 0x1AD04Cu;
        goto label_1ad04c;
    }
    ctx->pc = 0x1AD044u;
    SET_GPR_U32(ctx, 31, 0x1AD04Cu);
    ctx->pc = 0x1AD048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD044u;
            // 0x1ad048: 0xafa2025c  sw          $v0, 0x25C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AFD10u;
    if (runtime->hasFunction(0x1AFD10u)) {
        auto targetFn = runtime->lookupFunction(0x1AFD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD04Cu; }
        if (ctx->pc != 0x1AD04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditExitInterior__Fi_0x1afd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD04Cu; }
        if (ctx->pc != 0x1AD04Cu) { return; }
    }
    ctx->pc = 0x1AD04Cu;
label_1ad04c:
    // 0x1ad04c: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ad04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ad050:
    // 0x1ad050: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1ad050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1ad054:
    // 0x1ad054: 0xc0b1f3c  jal         func_2C7CF0
label_1ad058:
    if (ctx->pc == 0x1AD058u) {
        ctx->pc = 0x1AD058u;
            // 0x1ad058: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x1AD05Cu;
        goto label_1ad05c;
    }
    ctx->pc = 0x1AD054u;
    SET_GPR_U32(ctx, 31, 0x1AD05Cu);
    ctx->pc = 0x1AD058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD054u;
            // 0x1ad058: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7CF0u;
    if (runtime->hasFunction(0x2C7CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2C7CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD05Cu; }
        if (ctx->pc != 0x1AD05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunEvent__6CSceneFiP15CSceneEventData_0x2c7cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD05Cu; }
        if (ctx->pc != 0x1AD05Cu) { return; }
    }
    ctx->pc = 0x1AD05Cu;
label_1ad05c:
    // 0x1ad05c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ad060:
    if (ctx->pc == 0x1AD060u) {
        ctx->pc = 0x1AD064u;
        goto label_1ad064;
    }
    ctx->pc = 0x1AD05Cu;
    {
        const bool branch_taken_0x1ad05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad05c) {
            ctx->pc = 0x1AD06Cu;
            goto label_1ad06c;
        }
    }
    ctx->pc = 0x1AD064u;
label_1ad064:
    // 0x1ad064: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1ad064u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad068:
    // 0x1ad068: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1ad068u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ad06c:
    // 0x1ad06c: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_1ad070:
    if (ctx->pc == 0x1AD070u) {
        ctx->pc = 0x1AD070u;
            // 0x1ad070: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1AD074u;
        goto label_1ad074;
    }
    ctx->pc = 0x1AD06Cu;
    {
        const bool branch_taken_0x1ad06c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD06Cu;
            // 0x1ad070: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad06c) {
            ctx->pc = 0x1AD084u;
            goto label_1ad084;
        }
    }
    ctx->pc = 0x1AD074u;
label_1ad074:
    // 0x1ad074: 0xc0bbe6c  jal         func_2EF9B0
label_1ad078:
    if (ctx->pc == 0x1AD078u) {
        ctx->pc = 0x1AD078u;
            // 0x1ad078: 0x2484ede0  addiu       $a0, $a0, -0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962656));
        ctx->pc = 0x1AD07Cu;
        goto label_1ad07c;
    }
    ctx->pc = 0x1AD074u;
    SET_GPR_U32(ctx, 31, 0x1AD07Cu);
    ctx->pc = 0x1AD078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD074u;
            // 0x1ad078: 0x2484ede0  addiu       $a0, $a0, -0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EF9B0u;
    if (runtime->hasFunction(0x2EF9B0u)) {
        auto targetFn = runtime->lookupFunction(0x2EF9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD07Cu; }
        if (ctx->pc != 0x1AD07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Reset__10CEditEventFv_0x2ef9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD07Cu; }
        if (ctx->pc != 0x1AD07Cu) { return; }
    }
    ctx->pc = 0x1AD07Cu;
label_1ad07c:
    // 0x1ad07c: 0xc06a6dc  jal         func_1A9B70
label_1ad080:
    if (ctx->pc == 0x1AD080u) {
        ctx->pc = 0x1AD084u;
        goto label_1ad084;
    }
    ctx->pc = 0x1AD07Cu;
    SET_GPR_U32(ctx, 31, 0x1AD084u);
    ctx->pc = 0x1A9B70u;
    if (runtime->hasFunction(0x1A9B70u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD084u; }
        if (ctx->pc != 0x1AD084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnLockCharaCtrl__Fv_0x1a9b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD084u; }
        if (ctx->pc != 0x1AD084u) { return; }
    }
    ctx->pc = 0x1AD084u;
label_1ad084:
    // 0x1ad084: 0x8f838c7c  lw          $v1, -0x7384($gp)
    ctx->pc = 0x1ad084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937724)));
label_1ad088:
    // 0x1ad088: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad08c:
    // 0x1ad08c: 0x146200ca  bne         $v1, $v0, . + 4 + (0xCA << 2)
label_1ad090:
    if (ctx->pc == 0x1AD090u) {
        ctx->pc = 0x1AD094u;
        goto label_1ad094;
    }
    ctx->pc = 0x1AD08Cu;
    {
        const bool branch_taken_0x1ad08c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ad08c) {
            ctx->pc = 0x1AD3B8u;
            goto label_1ad3b8;
        }
    }
    ctx->pc = 0x1AD094u;
label_1ad094:
    // 0x1ad094: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1ad094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1ad098:
    // 0x1ad098: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1ad09c:
    if (ctx->pc == 0x1AD09Cu) {
        ctx->pc = 0x1AD0A0u;
        goto label_1ad0a0;
    }
    ctx->pc = 0x1AD098u;
    {
        const bool branch_taken_0x1ad098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad098) {
            ctx->pc = 0x1AD0B8u;
            goto label_1ad0b8;
        }
    }
    ctx->pc = 0x1AD0A0u;
label_1ad0a0:
    // 0x1ad0a0: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ad0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ad0a4:
    // 0x1ad0a4: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x1ad0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
label_1ad0a8:
    // 0x1ad0a8: 0xc0690ac  jal         func_1A42B0
label_1ad0ac:
    if (ctx->pc == 0x1AD0ACu) {
        ctx->pc = 0x1AD0ACu;
            // 0x1ad0ac: 0x24a57b60  addiu       $a1, $a1, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31584));
        ctx->pc = 0x1AD0B0u;
        goto label_1ad0b0;
    }
    ctx->pc = 0x1AD0A8u;
    SET_GPR_U32(ctx, 31, 0x1AD0B0u);
    ctx->pc = 0x1AD0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD0A8u;
            // 0x1ad0ac: 0x24a57b60  addiu       $a1, $a1, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A42B0u;
    if (runtime->hasFunction(0x1A42B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A42B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD0B0u; }
        if (ctx->pc != 0x1AD0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditControl__FP6CSceneP11CPadControl_0x1a42b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD0B0u; }
        if (ctx->pc != 0x1AD0B0u) { return; }
    }
    ctx->pc = 0x1AD0B0u;
label_1ad0b0:
    // 0x1ad0b0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ad0b4:
    if (ctx->pc == 0x1AD0B4u) {
        ctx->pc = 0x1AD0B8u;
        goto label_1ad0b8;
    }
    ctx->pc = 0x1AD0B0u;
    {
        const bool branch_taken_0x1ad0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad0b0) {
            ctx->pc = 0x1AD0C4u;
            goto label_1ad0c4;
        }
    }
    ctx->pc = 0x1AD0B8u;
label_1ad0b8:
    // 0x1ad0b8: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ad0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ad0bc:
    // 0x1ad0bc: 0xc0690ac  jal         func_1A42B0
label_1ad0c0:
    if (ctx->pc == 0x1AD0C0u) {
        ctx->pc = 0x1AD0C0u;
            // 0x1ad0c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD0C4u;
        goto label_1ad0c4;
    }
    ctx->pc = 0x1AD0BCu;
    SET_GPR_U32(ctx, 31, 0x1AD0C4u);
    ctx->pc = 0x1AD0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD0BCu;
            // 0x1ad0c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A42B0u;
    if (runtime->hasFunction(0x1A42B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A42B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD0C4u; }
        if (ctx->pc != 0x1AD0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditControl__FP6CSceneP11CPadControl_0x1a42b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD0C4u; }
        if (ctx->pc != 0x1AD0C4u) { return; }
    }
    ctx->pc = 0x1AD0C4u;
label_1ad0c4:
    // 0x1ad0c4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1ad0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1ad0c8:
    // 0x1ad0c8: 0xc052d40  jal         func_14B500
label_1ad0cc:
    if (ctx->pc == 0x1AD0CCu) {
        ctx->pc = 0x1AD0CCu;
            // 0x1ad0cc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1AD0D0u;
        goto label_1ad0d0;
    }
    ctx->pc = 0x1AD0C8u;
    SET_GPR_U32(ctx, 31, 0x1AD0D0u);
    ctx->pc = 0x1AD0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD0C8u;
            // 0x1ad0cc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B500u;
    if (runtime->hasFunction(0x14B500u)) {
        auto targetFn = runtime->lookupFunction(0x14B500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD0D0u; }
        if (ctx->pc != 0x1AD0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AutoRepeatOff__8CGamePadFv_0x14b500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD0D0u; }
        if (ctx->pc != 0x1AD0D0u) { return; }
    }
    ctx->pc = 0x1AD0D0u;
label_1ad0d0:
    // 0x1ad0d0: 0xc069058  jal         func_1A4160
label_1ad0d4:
    if (ctx->pc == 0x1AD0D4u) {
        ctx->pc = 0x1AD0D8u;
        goto label_1ad0d8;
    }
    ctx->pc = 0x1AD0D0u;
    SET_GPR_U32(ctx, 31, 0x1AD0D8u);
    ctx->pc = 0x1A4160u;
    if (runtime->hasFunction(0x1A4160u)) {
        auto targetFn = runtime->lookupFunction(0x1A4160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD0D8u; }
        if (ctx->pc != 0x1AD0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsWalkMode__Fv_0x1a4160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD0D8u; }
        if (ctx->pc != 0x1AD0D8u) { return; }
    }
    ctx->pc = 0x1AD0D8u;
label_1ad0d8:
    // 0x1ad0d8: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ad0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ad0dc:
    // 0x1ad0dc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ad0dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ad0e0:
    // 0x1ad0e0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ad0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1ad0e4:
    // 0x1ad0e4: 0xc0b2068  jal         func_2C81A0
label_1ad0e8:
    if (ctx->pc == 0x1AD0E8u) {
        ctx->pc = 0x1AD0E8u;
            // 0x1ad0e8: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x1AD0ECu;
        goto label_1ad0ec;
    }
    ctx->pc = 0x1AD0E4u;
    SET_GPR_U32(ctx, 31, 0x1AD0ECu);
    ctx->pc = 0x1AD0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD0E4u;
            // 0x1ad0e8: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C81A0u;
    if (runtime->hasFunction(0x2C81A0u)) {
        auto targetFn = runtime->lookupFunction(0x2C81A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD0ECu; }
        if (ctx->pc != 0x1AD0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EyeViewDrawOnOff__6CSceneFi_0x2c81a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD0ECu; }
        if (ctx->pc != 0x1AD0ECu) { return; }
    }
    ctx->pc = 0x1AD0ECu;
label_1ad0ec:
    // 0x1ad0ec: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1ad0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1ad0f0:
    // 0x1ad0f0: 0x144000b1  bnez        $v0, . + 4 + (0xB1 << 2)
label_1ad0f4:
    if (ctx->pc == 0x1AD0F4u) {
        ctx->pc = 0x1AD0F8u;
        goto label_1ad0f8;
    }
    ctx->pc = 0x1AD0F0u;
    {
        const bool branch_taken_0x1ad0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad0f0) {
            ctx->pc = 0x1AD3B8u;
            goto label_1ad3b8;
        }
    }
    ctx->pc = 0x1AD0F8u;
label_1ad0f8:
    // 0x1ad0f8: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1ad0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ad0fc:
    // 0x1ad0fc: 0x8c422e88  lw          $v0, 0x2E88($v0)
    ctx->pc = 0x1ad0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11912)));
label_1ad100:
    // 0x1ad100: 0x144000ad  bnez        $v0, . + 4 + (0xAD << 2)
label_1ad104:
    if (ctx->pc == 0x1AD104u) {
        ctx->pc = 0x1AD104u;
            // 0x1ad104: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1AD108u;
        goto label_1ad108;
    }
    ctx->pc = 0x1AD100u;
    {
        const bool branch_taken_0x1ad100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD100u;
            // 0x1ad104: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad100) {
            ctx->pc = 0x1AD3B8u;
            goto label_1ad3b8;
        }
    }
    ctx->pc = 0x1AD108u;
label_1ad108:
    // 0x1ad108: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad10c:
    // 0x1ad10c: 0xc0bb538  jal         func_2ED4E0
label_1ad110:
    if (ctx->pc == 0x1AD110u) {
        ctx->pc = 0x1AD110u;
            // 0x1ad110: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->pc = 0x1AD114u;
        goto label_1ad114;
    }
    ctx->pc = 0x1AD10Cu;
    SET_GPR_U32(ctx, 31, 0x1AD114u);
    ctx->pc = 0x1AD110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD10Cu;
            // 0x1ad110: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD114u; }
        if (ctx->pc != 0x1AD114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD114u; }
        if (ctx->pc != 0x1AD114u) { return; }
    }
    ctx->pc = 0x1AD114u;
label_1ad114:
    // 0x1ad114: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
label_1ad118:
    if (ctx->pc == 0x1AD118u) {
        ctx->pc = 0x1AD11Cu;
        goto label_1ad11c;
    }
    ctx->pc = 0x1AD114u;
    {
        const bool branch_taken_0x1ad114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad114) {
            ctx->pc = 0x1AD3B8u;
            goto label_1ad3b8;
        }
    }
    ctx->pc = 0x1AD11Cu;
label_1ad11c:
    // 0x1ad11c: 0xc069058  jal         func_1A4160
label_1ad120:
    if (ctx->pc == 0x1AD120u) {
        ctx->pc = 0x1AD124u;
        goto label_1ad124;
    }
    ctx->pc = 0x1AD11Cu;
    SET_GPR_U32(ctx, 31, 0x1AD124u);
    ctx->pc = 0x1A4160u;
    if (runtime->hasFunction(0x1A4160u)) {
        auto targetFn = runtime->lookupFunction(0x1A4160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD124u; }
        if (ctx->pc != 0x1AD124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsWalkMode__Fv_0x1a4160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD124u; }
        if (ctx->pc != 0x1AD124u) { return; }
    }
    ctx->pc = 0x1AD124u;
label_1ad124:
    // 0x1ad124: 0x104000a4  beqz        $v0, . + 4 + (0xA4 << 2)
label_1ad128:
    if (ctx->pc == 0x1AD128u) {
        ctx->pc = 0x1AD12Cu;
        goto label_1ad12c;
    }
    ctx->pc = 0x1AD124u;
    {
        const bool branch_taken_0x1ad124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad124) {
            ctx->pc = 0x1AD3B8u;
            goto label_1ad3b8;
        }
    }
    ctx->pc = 0x1AD12Cu;
label_1ad12c:
    // 0x1ad12c: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ad12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ad130:
    // 0x1ad130: 0xc0a0ed8  jal         func_283B60
label_1ad134:
    if (ctx->pc == 0x1AD134u) {
        ctx->pc = 0x1AD134u;
            // 0x1ad134: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->pc = 0x1AD138u;
        goto label_1ad138;
    }
    ctx->pc = 0x1AD130u;
    SET_GPR_U32(ctx, 31, 0x1AD138u);
    ctx->pc = 0x1AD134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD130u;
            // 0x1ad134: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD138u; }
        if (ctx->pc != 0x1AD138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD138u; }
        if (ctx->pc != 0x1AD138u) { return; }
    }
    ctx->pc = 0x1AD138u;
label_1ad138:
    // 0x1ad138: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1ad138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ad13c:
    // 0x1ad13c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1ad13cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ad140:
    // 0x1ad140: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ad140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ad144:
    // 0x1ad144: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1ad144u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1ad148:
    // 0x1ad148: 0x320f809  jalr        $t9
label_1ad14c:
    if (ctx->pc == 0x1AD14Cu) {
        ctx->pc = 0x1AD14Cu;
            // 0x1ad14c: 0x27a50260  addiu       $a1, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->pc = 0x1AD150u;
        goto label_1ad150;
    }
    ctx->pc = 0x1AD148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AD150u);
        ctx->pc = 0x1AD14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD148u;
            // 0x1ad14c: 0x27a50260  addiu       $a1, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AD150u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AD150u; }
            if (ctx->pc != 0x1AD150u) { return; }
        }
        }
    }
    ctx->pc = 0x1AD150u;
label_1ad150:
    // 0x1ad150: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x1ad150u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1ad154:
    // 0x1ad154: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ad154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ad158:
    // 0x1ad158: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1ad158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1ad15c:
    // 0x1ad15c: 0x320f809  jalr        $t9
label_1ad160:
    if (ctx->pc == 0x1AD160u) {
        ctx->pc = 0x1AD160u;
            // 0x1ad160: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x1AD164u;
        goto label_1ad164;
    }
    ctx->pc = 0x1AD15Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AD164u);
        ctx->pc = 0x1AD160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD15Cu;
            // 0x1ad160: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AD164u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AD164u; }
            if (ctx->pc != 0x1AD164u) { return; }
        }
        }
    }
    ctx->pc = 0x1AD164u;
label_1ad164:
    // 0x1ad164: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x1ad164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ad168:
    // 0x1ad168: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x1ad168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_1ad16c:
    // 0x1ad16c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad170:
    // 0x1ad170: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1ad170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1ad174:
    // 0x1ad174: 0xc049c86  jal         func_127218
label_1ad178:
    if (ctx->pc == 0x1AD178u) {
        ctx->pc = 0x1AD178u;
            // 0x1ad178: 0xe7a0026c  swc1        $f0, 0x26C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 620), bits); }
        ctx->pc = 0x1AD17Cu;
        goto label_1ad17c;
    }
    ctx->pc = 0x1AD174u;
    SET_GPR_U32(ctx, 31, 0x1AD17Cu);
    ctx->pc = 0x1AD178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD174u;
            // 0x1ad178: 0xe7a0026c  swc1        $f0, 0x26C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 620), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD17Cu; }
        if (ctx->pc != 0x1AD17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD17Cu; }
        if (ctx->pc != 0x1AD17Cu) { return; }
    }
    ctx->pc = 0x1AD17Cu;
label_1ad17c:
    // 0x1ad17c: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ad17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ad180:
    // 0x1ad180: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x1ad180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_1ad184:
    // 0x1ad184: 0xc0b2950  jal         func_2CA540
label_1ad188:
    if (ctx->pc == 0x1AD188u) {
        ctx->pc = 0x1AD188u;
            // 0x1ad188: 0x27a60280  addiu       $a2, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x1AD18Cu;
        goto label_1ad18c;
    }
    ctx->pc = 0x1AD184u;
    SET_GPR_U32(ctx, 31, 0x1AD18Cu);
    ctx->pc = 0x1AD188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD184u;
            // 0x1ad188: 0x27a60280  addiu       $a2, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA540u;
    if (runtime->hasFunction(0x2CA540u)) {
        auto targetFn = runtime->lookupFunction(0x2CA540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD18Cu; }
        if (ctx->pc != 0x1AD18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTalkEvent__6CSceneFPfP15CSceneEventData_0x2ca540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD18Cu; }
        if (ctx->pc != 0x1AD18Cu) { return; }
    }
    ctx->pc = 0x1AD18Cu;
label_1ad18c:
    // 0x1ad18c: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
label_1ad190:
    if (ctx->pc == 0x1AD190u) {
        ctx->pc = 0x1AD194u;
        goto label_1ad194;
    }
    ctx->pc = 0x1AD18Cu;
    {
        const bool branch_taken_0x1ad18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad18c) {
            ctx->pc = 0x1AD3B8u;
            goto label_1ad3b8;
        }
    }
    ctx->pc = 0x1AD194u;
label_1ad194:
    // 0x1ad194: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ad194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ad198:
    // 0x1ad198: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x1ad198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1ad19c:
    // 0x1ad19c: 0xc0b1f3c  jal         func_2C7CF0
label_1ad1a0:
    if (ctx->pc == 0x1AD1A0u) {
        ctx->pc = 0x1AD1A0u;
            // 0x1ad1a0: 0x27a60280  addiu       $a2, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x1AD1A4u;
        goto label_1ad1a4;
    }
    ctx->pc = 0x1AD19Cu;
    SET_GPR_U32(ctx, 31, 0x1AD1A4u);
    ctx->pc = 0x1AD1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD19Cu;
            // 0x1ad1a0: 0x27a60280  addiu       $a2, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7CF0u;
    if (runtime->hasFunction(0x2C7CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2C7CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD1A4u; }
        if (ctx->pc != 0x1AD1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunEvent__6CSceneFiP15CSceneEventData_0x2c7cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD1A4u; }
        if (ctx->pc != 0x1AD1A4u) { return; }
    }
    ctx->pc = 0x1AD1A4u;
label_1ad1a4:
    // 0x1ad1a4: 0x8fa50340  lw          $a1, 0x340($sp)
    ctx->pc = 0x1ad1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
label_1ad1a8:
    // 0x1ad1a8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1ad1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1ad1ac:
    // 0x1ad1ac: 0xc04a0d2  jal         func_128348
label_1ad1b0:
    if (ctx->pc == 0x1AD1B0u) {
        ctx->pc = 0x1AD1B0u;
            // 0x1ad1b0: 0x248463c8  addiu       $a0, $a0, 0x63C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25544));
        ctx->pc = 0x1AD1B4u;
        goto label_1ad1b4;
    }
    ctx->pc = 0x1AD1ACu;
    SET_GPR_U32(ctx, 31, 0x1AD1B4u);
    ctx->pc = 0x1AD1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD1ACu;
            // 0x1ad1b0: 0x248463c8  addiu       $a0, $a0, 0x63C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD1B4u; }
        if (ctx->pc != 0x1AD1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD1B4u; }
        if (ctx->pc != 0x1AD1B4u) { return; }
    }
    ctx->pc = 0x1AD1B4u;
label_1ad1b4:
    // 0x1ad1b4: 0x10000080  b           . + 4 + (0x80 << 2)
label_1ad1b8:
    if (ctx->pc == 0x1AD1B8u) {
        ctx->pc = 0x1AD1BCu;
        goto label_1ad1bc;
    }
    ctx->pc = 0x1AD1B4u;
    {
        const bool branch_taken_0x1ad1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad1b4) {
            ctx->pc = 0x1AD3B8u;
            goto label_1ad3b8;
        }
    }
    ctx->pc = 0x1AD1BCu;
label_1ad1bc:
    // 0x1ad1bc: 0xc095574  jal         func_2555D0
label_1ad1c0:
    if (ctx->pc == 0x1AD1C0u) {
        ctx->pc = 0x1AD1C0u;
            // 0x1ad1c0: 0xafa20538  sw          $v0, 0x538($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1336), GPR_U32(ctx, 2));
        ctx->pc = 0x1AD1C4u;
        goto label_1ad1c4;
    }
    ctx->pc = 0x1AD1BCu;
    SET_GPR_U32(ctx, 31, 0x1AD1C4u);
    ctx->pc = 0x1AD1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD1BCu;
            // 0x1ad1c0: 0xafa20538  sw          $v0, 0x538($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2555D0u;
    if (runtime->hasFunction(0x2555D0u)) {
        auto targetFn = runtime->lookupFunction(0x2555D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD1C4u; }
        if (ctx->pc != 0x1AD1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEventSkip__Fv_0x2555d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD1C4u; }
        if (ctx->pc != 0x1AD1C4u) { return; }
    }
    ctx->pc = 0x1AD1C4u;
label_1ad1c4:
    // 0x1ad1c4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1ad1c8:
    if (ctx->pc == 0x1AD1C8u) {
        ctx->pc = 0x1AD1C8u;
            // 0x1ad1c8: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1AD1CCu;
        goto label_1ad1cc;
    }
    ctx->pc = 0x1AD1C4u;
    {
        const bool branch_taken_0x1ad1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD1C4u;
            // 0x1ad1c8: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad1c4) {
            ctx->pc = 0x1AD1D0u;
            goto label_1ad1d0;
        }
    }
    ctx->pc = 0x1AD1CCu;
label_1ad1cc:
    // 0x1ad1cc: 0xafa00538  sw          $zero, 0x538($sp)
    ctx->pc = 0x1ad1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1336), GPR_U32(ctx, 0));
label_1ad1d0:
    // 0x1ad1d0: 0xc095578  jal         func_2555E0
label_1ad1d4:
    if (ctx->pc == 0x1AD1D4u) {
        ctx->pc = 0x1AD1D8u;
        goto label_1ad1d8;
    }
    ctx->pc = 0x1AD1D0u;
    SET_GPR_U32(ctx, 31, 0x1AD1D8u);
    ctx->pc = 0x2555E0u;
    if (runtime->hasFunction(0x2555E0u)) {
        auto targetFn = runtime->lookupFunction(0x2555E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD1D8u; }
        if (ctx->pc != 0x1AD1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EventLoop__Fv_0x2555e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD1D8u; }
        if (ctx->pc != 0x1AD1D8u) { return; }
    }
    ctx->pc = 0x1AD1D8u;
label_1ad1d8:
    // 0x1ad1d8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ad1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1ad1dc:
    // 0x1ad1dc: 0x1043004d  beq         $v0, $v1, . + 4 + (0x4D << 2)
label_1ad1e0:
    if (ctx->pc == 0x1AD1E0u) {
        ctx->pc = 0x1AD1E0u;
            // 0x1ad1e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD1E4u;
        goto label_1ad1e4;
    }
    ctx->pc = 0x1AD1DCu;
    {
        const bool branch_taken_0x1ad1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AD1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD1DCu;
            // 0x1ad1e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad1dc) {
            ctx->pc = 0x1AD314u;
            goto label_1ad314;
        }
    }
    ctx->pc = 0x1AD1E4u;
label_1ad1e4:
    // 0x1ad1e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ad1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ad1e8:
    // 0x1ad1e8: 0x10430038  beq         $v0, $v1, . + 4 + (0x38 << 2)
label_1ad1ec:
    if (ctx->pc == 0x1AD1ECu) {
        ctx->pc = 0x1AD1ECu;
            // 0x1ad1ec: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x1AD1F0u;
        goto label_1ad1f0;
    }
    ctx->pc = 0x1AD1E8u;
    {
        const bool branch_taken_0x1ad1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AD1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD1E8u;
            // 0x1ad1ec: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad1e8) {
            ctx->pc = 0x1AD2CCu;
            goto label_1ad2cc;
        }
    }
    ctx->pc = 0x1AD1F0u;
label_1ad1f0:
    // 0x1ad1f0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1ad1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ad1f4:
    // 0x1ad1f4: 0x10430022  beq         $v0, $v1, . + 4 + (0x22 << 2)
label_1ad1f8:
    if (ctx->pc == 0x1AD1F8u) {
        ctx->pc = 0x1AD1F8u;
            // 0x1ad1f8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1AD1FCu;
        goto label_1ad1fc;
    }
    ctx->pc = 0x1AD1F4u;
    {
        const bool branch_taken_0x1ad1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AD1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD1F4u;
            // 0x1ad1f8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad1f4) {
            ctx->pc = 0x1AD280u;
            goto label_1ad280;
        }
    }
    ctx->pc = 0x1AD1FCu;
label_1ad1fc:
    // 0x1ad1fc: 0x1044001e  beq         $v0, $a0, . + 4 + (0x1E << 2)
label_1ad200:
    if (ctx->pc == 0x1AD200u) {
        ctx->pc = 0x1AD200u;
            // 0x1ad200: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1AD204u;
        goto label_1ad204;
    }
    ctx->pc = 0x1AD1FCu;
    {
        const bool branch_taken_0x1ad1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1AD200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD1FCu;
            // 0x1ad200: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad1fc) {
            ctx->pc = 0x1AD278u;
            goto label_1ad278;
        }
    }
    ctx->pc = 0x1AD204u;
label_1ad204:
    // 0x1ad204: 0x10430019  beq         $v0, $v1, . + 4 + (0x19 << 2)
label_1ad208:
    if (ctx->pc == 0x1AD208u) {
        ctx->pc = 0x1AD20Cu;
        goto label_1ad20c;
    }
    ctx->pc = 0x1AD204u;
    {
        const bool branch_taken_0x1ad204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ad204) {
            ctx->pc = 0x1AD26Cu;
            goto label_1ad26c;
        }
    }
    ctx->pc = 0x1AD20Cu;
label_1ad20c:
    // 0x1ad20c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ad20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ad210:
    // 0x1ad210: 0x10440014  beq         $v0, $a0, . + 4 + (0x14 << 2)
label_1ad214:
    if (ctx->pc == 0x1AD214u) {
        ctx->pc = 0x1AD214u;
            // 0x1ad214: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x1AD218u;
        goto label_1ad218;
    }
    ctx->pc = 0x1AD210u;
    {
        const bool branch_taken_0x1ad210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1AD214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD210u;
            // 0x1ad214: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad210) {
            ctx->pc = 0x1AD264u;
            goto label_1ad264;
        }
    }
    ctx->pc = 0x1AD218u;
label_1ad218:
    // 0x1ad218: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
label_1ad21c:
    if (ctx->pc == 0x1AD21Cu) {
        ctx->pc = 0x1AD21Cu;
            // 0x1ad21c: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x1AD220u;
        goto label_1ad220;
    }
    ctx->pc = 0x1AD218u;
    {
        const bool branch_taken_0x1ad218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AD21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD218u;
            // 0x1ad21c: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad218) {
            ctx->pc = 0x1AD254u;
            goto label_1ad254;
        }
    }
    ctx->pc = 0x1AD220u;
label_1ad220:
    // 0x1ad220: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_1ad224:
    if (ctx->pc == 0x1AD224u) {
        ctx->pc = 0x1AD224u;
            // 0x1ad224: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x1AD228u;
        goto label_1ad228;
    }
    ctx->pc = 0x1AD220u;
    {
        const bool branch_taken_0x1ad220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AD224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD220u;
            // 0x1ad224: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad220) {
            ctx->pc = 0x1AD244u;
            goto label_1ad244;
        }
    }
    ctx->pc = 0x1AD228u;
label_1ad228:
    // 0x1ad228: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_1ad22c:
    if (ctx->pc == 0x1AD22Cu) {
        ctx->pc = 0x1AD230u;
        goto label_1ad230;
    }
    ctx->pc = 0x1AD228u;
    {
        const bool branch_taken_0x1ad228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ad228) {
            ctx->pc = 0x1AD238u;
            goto label_1ad238;
        }
    }
    ctx->pc = 0x1AD230u;
label_1ad230:
    // 0x1ad230: 0x10000046  b           . + 4 + (0x46 << 2)
label_1ad234:
    if (ctx->pc == 0x1AD234u) {
        ctx->pc = 0x1AD234u;
            // 0x1ad234: 0x8f828ac8  lw          $v0, -0x7538($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
        ctx->pc = 0x1AD238u;
        goto label_1ad238;
    }
    ctx->pc = 0x1AD230u;
    {
        const bool branch_taken_0x1ad230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD230u;
            // 0x1ad234: 0x8f828ac8  lw          $v0, -0x7538($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad230) {
            ctx->pc = 0x1AD34Cu;
            goto label_1ad34c;
        }
    }
    ctx->pc = 0x1AD238u;
label_1ad238:
    // 0x1ad238: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ad238u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ad23c:
    // 0x1ad23c: 0x1000004a  b           . + 4 + (0x4A << 2)
label_1ad240:
    if (ctx->pc == 0x1AD240u) {
        ctx->pc = 0x1AD240u;
            // 0x1ad240: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD244u;
        goto label_1ad244;
    }
    ctx->pc = 0x1AD23Cu;
    {
        const bool branch_taken_0x1ad23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD23Cu;
            // 0x1ad240: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad23c) {
            ctx->pc = 0x1AD368u;
            goto label_1ad368;
        }
    }
    ctx->pc = 0x1AD244u;
label_1ad244:
    // 0x1ad244: 0xc06b7fc  jal         func_1ADFF0
label_1ad248:
    if (ctx->pc == 0x1AD248u) {
        ctx->pc = 0x1AD24Cu;
        goto label_1ad24c;
    }
    ctx->pc = 0x1AD244u;
    SET_GPR_U32(ctx, 31, 0x1AD24Cu);
    ctx->pc = 0x1ADFF0u;
    if (runtime->hasFunction(0x1ADFF0u)) {
        auto targetFn = runtime->lookupFunction(0x1ADFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD24Cu; }
        if (ctx->pc != 0x1AD24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetEditEvent__Fv_0x1adff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD24Cu; }
        if (ctx->pc != 0x1AD24Cu) { return; }
    }
    ctx->pc = 0x1AD24Cu;
label_1ad24c:
    // 0x1ad24c: 0x10000046  b           . + 4 + (0x46 << 2)
label_1ad250:
    if (ctx->pc == 0x1AD250u) {
        ctx->pc = 0x1AD250u;
            // 0x1ad250: 0x2c0a82d  daddu       $s5, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD254u;
        goto label_1ad254;
    }
    ctx->pc = 0x1AD24Cu;
    {
        const bool branch_taken_0x1ad24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD24Cu;
            // 0x1ad250: 0x2c0a82d  daddu       $s5, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad24c) {
            ctx->pc = 0x1AD368u;
            goto label_1ad368;
        }
    }
    ctx->pc = 0x1AD254u;
label_1ad254:
    // 0x1ad254: 0xc06b80c  jal         func_1AE030
label_1ad258:
    if (ctx->pc == 0x1AD258u) {
        ctx->pc = 0x1AD25Cu;
        goto label_1ad25c;
    }
    ctx->pc = 0x1AD254u;
    SET_GPR_U32(ctx, 31, 0x1AD25Cu);
    ctx->pc = 0x1AE030u;
    if (runtime->hasFunction(0x1AE030u)) {
        auto targetFn = runtime->lookupFunction(0x1AE030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD25Cu; }
        if (ctx->pc != 0x1AD25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RestartEditEvent__Fv_0x1ae030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD25Cu; }
        if (ctx->pc != 0x1AD25Cu) { return; }
    }
    ctx->pc = 0x1AD25Cu;
label_1ad25c:
    // 0x1ad25c: 0x10000042  b           . + 4 + (0x42 << 2)
label_1ad260:
    if (ctx->pc == 0x1AD260u) {
        ctx->pc = 0x1AD260u;
            // 0x1ad260: 0x2c0a82d  daddu       $s5, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD264u;
        goto label_1ad264;
    }
    ctx->pc = 0x1AD25Cu;
    {
        const bool branch_taken_0x1ad25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD25Cu;
            // 0x1ad260: 0x2c0a82d  daddu       $s5, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad25c) {
            ctx->pc = 0x1AD368u;
            goto label_1ad368;
        }
    }
    ctx->pc = 0x1AD264u;
label_1ad264:
    // 0x1ad264: 0x10000040  b           . + 4 + (0x40 << 2)
label_1ad268:
    if (ctx->pc == 0x1AD268u) {
        ctx->pc = 0x1AD268u;
            // 0x1ad268: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD26Cu;
        goto label_1ad26c;
    }
    ctx->pc = 0x1AD264u;
    {
        const bool branch_taken_0x1ad264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD264u;
            // 0x1ad268: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad264) {
            ctx->pc = 0x1AD368u;
            goto label_1ad368;
        }
    }
    ctx->pc = 0x1AD26Cu;
label_1ad26c:
    // 0x1ad26c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ad26cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ad270:
    // 0x1ad270: 0x1000003d  b           . + 4 + (0x3D << 2)
label_1ad274:
    if (ctx->pc == 0x1AD274u) {
        ctx->pc = 0x1AD274u;
            // 0x1ad274: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD278u;
        goto label_1ad278;
    }
    ctx->pc = 0x1AD270u;
    {
        const bool branch_taken_0x1ad270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD270u;
            // 0x1ad274: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad270) {
            ctx->pc = 0x1AD368u;
            goto label_1ad368;
        }
    }
    ctx->pc = 0x1AD278u;
label_1ad278:
    // 0x1ad278: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1ad27c:
    if (ctx->pc == 0x1AD27Cu) {
        ctx->pc = 0x1AD27Cu;
            // 0x1ad27c: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD280u;
        goto label_1ad280;
    }
    ctx->pc = 0x1AD278u;
    {
        const bool branch_taken_0x1ad278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD278u;
            // 0x1ad27c: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad278) {
            ctx->pc = 0x1AD368u;
            goto label_1ad368;
        }
    }
    ctx->pc = 0x1AD280u;
label_1ad280:
    // 0x1ad280: 0xc06bc94  jal         func_1AF250
label_1ad284:
    if (ctx->pc == 0x1AD284u) {
        ctx->pc = 0x1AD288u;
        goto label_1ad288;
    }
    ctx->pc = 0x1AD280u;
    SET_GPR_U32(ctx, 31, 0x1AD288u);
    ctx->pc = 0x1AF250u;
    if (runtime->hasFunction(0x1AF250u)) {
        auto targetFn = runtime->lookupFunction(0x1AF250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD288u; }
        if (ctx->pc != 0x1AD288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BurnEditParts__Fv_0x1af250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD288u; }
        if (ctx->pc != 0x1AD288u) { return; }
    }
    ctx->pc = 0x1AD288u;
label_1ad288:
    // 0x1ad288: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1ad288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_1ad28c:
    // 0x1ad28c: 0xc0b49fc  jal         func_2D27F0
label_1ad290:
    if (ctx->pc == 0x1AD290u) {
        ctx->pc = 0x1AD290u;
            // 0x1ad290: 0x2484e498  addiu       $a0, $a0, -0x1B68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960280));
        ctx->pc = 0x1AD294u;
        goto label_1ad294;
    }
    ctx->pc = 0x1AD28Cu;
    SET_GPR_U32(ctx, 31, 0x1AD294u);
    ctx->pc = 0x1AD290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD28Cu;
            // 0x1ad290: 0x2484e498  addiu       $a0, $a0, -0x1B68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD294u; }
        if (ctx->pc != 0x1AD294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD294u; }
        if (ctx->pc != 0x1AD294u) { return; }
    }
    ctx->pc = 0x1AD294u;
label_1ad294:
    // 0x1ad294: 0xc06bd30  jal         func_1AF4C0
label_1ad298:
    if (ctx->pc == 0x1AD298u) {
        ctx->pc = 0x1AD298u;
            // 0x1ad298: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD29Cu;
        goto label_1ad29c;
    }
    ctx->pc = 0x1AD294u;
    SET_GPR_U32(ctx, 31, 0x1AD29Cu);
    ctx->pc = 0x1AD298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD294u;
            // 0x1ad298: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4C0u;
    if (runtime->hasFunction(0x1AF4C0u)) {
        auto targetFn = runtime->lookupFunction(0x1AF4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD29Cu; }
        if (ctx->pc != 0x1AD29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditMapJump__Fi_0x1af4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD29Cu; }
        if (ctx->pc != 0x1AD29Cu) { return; }
    }
    ctx->pc = 0x1AD29Cu;
label_1ad29c:
    // 0x1ad29c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ad29cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1ad2a0:
    // 0x1ad2a0: 0x8c34e4b8  lw          $s4, -0x1B48($at)
    ctx->pc = 0x1ad2a0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960312)));
label_1ad2a4:
    // 0x1ad2a4: 0x6810002  bgez        $s4, . + 4 + (0x2 << 2)
label_1ad2a8:
    if (ctx->pc == 0x1AD2A8u) {
        ctx->pc = 0x1AD2A8u;
            // 0x1ad2a8: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x1AD2ACu;
        goto label_1ad2ac;
    }
    ctx->pc = 0x1AD2A4u;
    {
        const bool branch_taken_0x1ad2a4 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1AD2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD2A4u;
            // 0x1ad2a8: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad2a4) {
            ctx->pc = 0x1AD2B0u;
            goto label_1ad2b0;
        }
    }
    ctx->pc = 0x1AD2ACu;
label_1ad2ac:
    // 0x1ad2ac: 0x24140064  addiu       $s4, $zero, 0x64
    ctx->pc = 0x1ad2acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1ad2b0:
    // 0x1ad2b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ad2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ad2b4:
    // 0x1ad2b4: 0xc04a0d2  jal         func_128348
label_1ad2b8:
    if (ctx->pc == 0x1AD2B8u) {
        ctx->pc = 0x1AD2B8u;
            // 0x1ad2b8: 0x248463e0  addiu       $a0, $a0, 0x63E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25568));
        ctx->pc = 0x1AD2BCu;
        goto label_1ad2bc;
    }
    ctx->pc = 0x1AD2B4u;
    SET_GPR_U32(ctx, 31, 0x1AD2BCu);
    ctx->pc = 0x1AD2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD2B4u;
            // 0x1ad2b8: 0x248463e0  addiu       $a0, $a0, 0x63E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD2BCu; }
        if (ctx->pc != 0x1AD2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD2BCu; }
        if (ctx->pc != 0x1AD2BCu) { return; }
    }
    ctx->pc = 0x1AD2BCu;
label_1ad2bc:
    // 0x1ad2bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ad2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ad2c0:
    // 0x1ad2c0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ad2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1ad2c4:
    // 0x1ad2c4: 0x10000028  b           . + 4 + (0x28 << 2)
label_1ad2c8:
    if (ctx->pc == 0x1AD2C8u) {
        ctx->pc = 0x1AD2C8u;
            // 0x1ad2c8: 0xac22e4b8  sw          $v0, -0x1B48($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960312), GPR_U32(ctx, 2));
        ctx->pc = 0x1AD2CCu;
        goto label_1ad2cc;
    }
    ctx->pc = 0x1AD2C4u;
    {
        const bool branch_taken_0x1ad2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD2C4u;
            // 0x1ad2c8: 0xac22e4b8  sw          $v0, -0x1B48($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad2c4) {
            ctx->pc = 0x1AD368u;
            goto label_1ad368;
        }
    }
    ctx->pc = 0x1AD2CCu;
label_1ad2cc:
    // 0x1ad2cc: 0xc0b49fc  jal         func_2D27F0
label_1ad2d0:
    if (ctx->pc == 0x1AD2D0u) {
        ctx->pc = 0x1AD2D0u;
            // 0x1ad2d0: 0x2484e498  addiu       $a0, $a0, -0x1B68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960280));
        ctx->pc = 0x1AD2D4u;
        goto label_1ad2d4;
    }
    ctx->pc = 0x1AD2CCu;
    SET_GPR_U32(ctx, 31, 0x1AD2D4u);
    ctx->pc = 0x1AD2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD2CCu;
            // 0x1ad2d0: 0x2484e498  addiu       $a0, $a0, -0x1B68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD2D4u; }
        if (ctx->pc != 0x1AD2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD2D4u; }
        if (ctx->pc != 0x1AD2D4u) { return; }
    }
    ctx->pc = 0x1AD2D4u;
label_1ad2d4:
    // 0x1ad2d4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ad2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1ad2d8:
    // 0x1ad2d8: 0x8c25e5fc  lw          $a1, -0x1A04($at)
    ctx->pc = 0x1ad2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960636)));
label_1ad2dc:
    // 0x1ad2dc: 0xc06bef4  jal         func_1AFBD0
label_1ad2e0:
    if (ctx->pc == 0x1AD2E0u) {
        ctx->pc = 0x1AD2E0u;
            // 0x1ad2e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD2E4u;
        goto label_1ad2e4;
    }
    ctx->pc = 0x1AD2DCu;
    SET_GPR_U32(ctx, 31, 0x1AD2E4u);
    ctx->pc = 0x1AD2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD2DCu;
            // 0x1ad2e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AFBD0u;
    if (runtime->hasFunction(0x1AFBD0u)) {
        auto targetFn = runtime->lookupFunction(0x1AFBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD2E4u; }
        if (ctx->pc != 0x1AD2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditGotoInterior__Fii_0x1afbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD2E4u; }
        if (ctx->pc != 0x1AD2E4u) { return; }
    }
    ctx->pc = 0x1AD2E4u;
label_1ad2e4:
    // 0x1ad2e4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ad2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1ad2e8:
    // 0x1ad2e8: 0x8c34e4b8  lw          $s4, -0x1B48($at)
    ctx->pc = 0x1ad2e8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960312)));
label_1ad2ec:
    // 0x1ad2ec: 0x6810002  bgez        $s4, . + 4 + (0x2 << 2)
label_1ad2f0:
    if (ctx->pc == 0x1AD2F0u) {
        ctx->pc = 0x1AD2F0u;
            // 0x1ad2f0: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x1AD2F4u;
        goto label_1ad2f4;
    }
    ctx->pc = 0x1AD2ECu;
    {
        const bool branch_taken_0x1ad2ec = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1AD2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD2ECu;
            // 0x1ad2f0: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad2ec) {
            ctx->pc = 0x1AD2F8u;
            goto label_1ad2f8;
        }
    }
    ctx->pc = 0x1AD2F4u;
label_1ad2f4:
    // 0x1ad2f4: 0x24140064  addiu       $s4, $zero, 0x64
    ctx->pc = 0x1ad2f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1ad2f8:
    // 0x1ad2f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ad2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ad2fc:
    // 0x1ad2fc: 0xc04a0d2  jal         func_128348
label_1ad300:
    if (ctx->pc == 0x1AD300u) {
        ctx->pc = 0x1AD300u;
            // 0x1ad300: 0x248463e0  addiu       $a0, $a0, 0x63E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25568));
        ctx->pc = 0x1AD304u;
        goto label_1ad304;
    }
    ctx->pc = 0x1AD2FCu;
    SET_GPR_U32(ctx, 31, 0x1AD304u);
    ctx->pc = 0x1AD300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD2FCu;
            // 0x1ad300: 0x248463e0  addiu       $a0, $a0, 0x63E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD304u; }
        if (ctx->pc != 0x1AD304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD304u; }
        if (ctx->pc != 0x1AD304u) { return; }
    }
    ctx->pc = 0x1AD304u;
label_1ad304:
    // 0x1ad304: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ad304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ad308:
    // 0x1ad308: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ad308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1ad30c:
    // 0x1ad30c: 0x10000016  b           . + 4 + (0x16 << 2)
label_1ad310:
    if (ctx->pc == 0x1AD310u) {
        ctx->pc = 0x1AD310u;
            // 0x1ad310: 0xac22e4b8  sw          $v0, -0x1B48($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960312), GPR_U32(ctx, 2));
        ctx->pc = 0x1AD314u;
        goto label_1ad314;
    }
    ctx->pc = 0x1AD30Cu;
    {
        const bool branch_taken_0x1ad30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD30Cu;
            // 0x1ad310: 0xac22e4b8  sw          $v0, -0x1B48($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad30c) {
            ctx->pc = 0x1AD368u;
            goto label_1ad368;
        }
    }
    ctx->pc = 0x1AD314u;
label_1ad314:
    // 0x1ad314: 0xc06bf44  jal         func_1AFD10
label_1ad318:
    if (ctx->pc == 0x1AD318u) {
        ctx->pc = 0x1AD31Cu;
        goto label_1ad31c;
    }
    ctx->pc = 0x1AD314u;
    SET_GPR_U32(ctx, 31, 0x1AD31Cu);
    ctx->pc = 0x1AFD10u;
    if (runtime->hasFunction(0x1AFD10u)) {
        auto targetFn = runtime->lookupFunction(0x1AFD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD31Cu; }
        if (ctx->pc != 0x1AD31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditExitInterior__Fi_0x1afd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD31Cu; }
        if (ctx->pc != 0x1AD31Cu) { return; }
    }
    ctx->pc = 0x1AD31Cu;
label_1ad31c:
    // 0x1ad31c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ad31cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1ad320:
    // 0x1ad320: 0x8c34e4b8  lw          $s4, -0x1B48($at)
    ctx->pc = 0x1ad320u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960312)));
label_1ad324:
    // 0x1ad324: 0x6810002  bgez        $s4, . + 4 + (0x2 << 2)
label_1ad328:
    if (ctx->pc == 0x1AD328u) {
        ctx->pc = 0x1AD328u;
            // 0x1ad328: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x1AD32Cu;
        goto label_1ad32c;
    }
    ctx->pc = 0x1AD324u;
    {
        const bool branch_taken_0x1ad324 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1AD328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD324u;
            // 0x1ad328: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad324) {
            ctx->pc = 0x1AD330u;
            goto label_1ad330;
        }
    }
    ctx->pc = 0x1AD32Cu;
label_1ad32c:
    // 0x1ad32c: 0x24140064  addiu       $s4, $zero, 0x64
    ctx->pc = 0x1ad32cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1ad330:
    // 0x1ad330: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ad330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ad334:
    // 0x1ad334: 0xc04a0d2  jal         func_128348
label_1ad338:
    if (ctx->pc == 0x1AD338u) {
        ctx->pc = 0x1AD338u;
            // 0x1ad338: 0x248463e0  addiu       $a0, $a0, 0x63E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25568));
        ctx->pc = 0x1AD33Cu;
        goto label_1ad33c;
    }
    ctx->pc = 0x1AD334u;
    SET_GPR_U32(ctx, 31, 0x1AD33Cu);
    ctx->pc = 0x1AD338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD334u;
            // 0x1ad338: 0x248463e0  addiu       $a0, $a0, 0x63E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD33Cu; }
        if (ctx->pc != 0x1AD33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD33Cu; }
        if (ctx->pc != 0x1AD33Cu) { return; }
    }
    ctx->pc = 0x1AD33Cu;
label_1ad33c:
    // 0x1ad33c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ad33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ad340:
    // 0x1ad340: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ad340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1ad344:
    // 0x1ad344: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ad348:
    if (ctx->pc == 0x1AD348u) {
        ctx->pc = 0x1AD348u;
            // 0x1ad348: 0xac22e4b8  sw          $v0, -0x1B48($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960312), GPR_U32(ctx, 2));
        ctx->pc = 0x1AD34Cu;
        goto label_1ad34c;
    }
    ctx->pc = 0x1AD344u;
    {
        const bool branch_taken_0x1ad344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD344u;
            // 0x1ad348: 0xac22e4b8  sw          $v0, -0x1B48($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad344) {
            ctx->pc = 0x1AD368u;
            goto label_1ad368;
        }
    }
    ctx->pc = 0x1AD34Cu;
label_1ad34c:
    // 0x1ad34c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ad350:
    if (ctx->pc == 0x1AD350u) {
        ctx->pc = 0x1AD354u;
        goto label_1ad354;
    }
    ctx->pc = 0x1AD34Cu;
    {
        const bool branch_taken_0x1ad34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad34c) {
            ctx->pc = 0x1AD368u;
            goto label_1ad368;
        }
    }
    ctx->pc = 0x1AD354u;
label_1ad354:
    // 0x1ad354: 0xc09fc8c  jal         func_27F230
label_1ad358:
    if (ctx->pc == 0x1AD358u) {
        ctx->pc = 0x1AD35Cu;
        goto label_1ad35c;
    }
    ctx->pc = 0x1AD354u;
    SET_GPR_U32(ctx, 31, 0x1AD35Cu);
    ctx->pc = 0x27F230u;
    if (runtime->hasFunction(0x27F230u)) {
        auto targetFn = runtime->lookupFunction(0x27F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD35Cu; }
        if (ctx->pc != 0x1AD35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChkEventEditStart__Fv_0x27f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD35Cu; }
        if (ctx->pc != 0x1AD35Cu) { return; }
    }
    ctx->pc = 0x1AD35Cu;
label_1ad35c:
    // 0x1ad35c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1ad360:
    if (ctx->pc == 0x1AD360u) {
        ctx->pc = 0x1AD360u;
            // 0x1ad360: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1AD364u;
        goto label_1ad364;
    }
    ctx->pc = 0x1AD35Cu;
    {
        const bool branch_taken_0x1ad35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD35Cu;
            // 0x1ad360: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad35c) {
            ctx->pc = 0x1AD368u;
            goto label_1ad368;
        }
    }
    ctx->pc = 0x1AD364u;
label_1ad364:
    // 0x1ad364: 0xaf828c80  sw          $v0, -0x7380($gp)
    ctx->pc = 0x1ad364u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937728), GPR_U32(ctx, 2));
label_1ad368:
    // 0x1ad368: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_1ad36c:
    if (ctx->pc == 0x1AD36Cu) {
        ctx->pc = 0x1AD370u;
        goto label_1ad370;
    }
    ctx->pc = 0x1AD368u;
    {
        const bool branch_taken_0x1ad368 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad368) {
            ctx->pc = 0x1AD384u;
            goto label_1ad384;
        }
    }
    ctx->pc = 0x1AD370u;
label_1ad370:
    // 0x1ad370: 0x8f838cb0  lw          $v1, -0x7350($gp)
    ctx->pc = 0x1ad370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ad374:
    // 0x1ad374: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad378:
    // 0x1ad378: 0xaf828c80  sw          $v0, -0x7380($gp)
    ctx->pc = 0x1ad378u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937728), GPR_U32(ctx, 2));
label_1ad37c:
    // 0x1ad37c: 0x8c622e58  lw          $v0, 0x2E58($v1)
    ctx->pc = 0x1ad37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11864)));
label_1ad380:
    // 0x1ad380: 0xac622e54  sw          $v0, 0x2E54($v1)
    ctx->pc = 0x1ad380u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11860), GPR_U32(ctx, 2));
label_1ad384:
    // 0x1ad384: 0x1a80000c  blez        $s4, . + 4 + (0xC << 2)
label_1ad388:
    if (ctx->pc == 0x1AD388u) {
        ctx->pc = 0x1AD38Cu;
        goto label_1ad38c;
    }
    ctx->pc = 0x1AD384u;
    {
        const bool branch_taken_0x1ad384 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x1ad384) {
            ctx->pc = 0x1AD3B8u;
            goto label_1ad3b8;
        }
    }
    ctx->pc = 0x1AD38Cu;
label_1ad38c:
    // 0x1ad38c: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ad38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ad390:
    // 0x1ad390: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ad390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ad394:
    // 0x1ad394: 0xc0b1f3c  jal         func_2C7CF0
label_1ad398:
    if (ctx->pc == 0x1AD398u) {
        ctx->pc = 0x1AD398u;
            // 0x1ad398: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD39Cu;
        goto label_1ad39c;
    }
    ctx->pc = 0x1AD394u;
    SET_GPR_U32(ctx, 31, 0x1AD39Cu);
    ctx->pc = 0x1AD398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD394u;
            // 0x1ad398: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7CF0u;
    if (runtime->hasFunction(0x2C7CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2C7CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD39Cu; }
        if (ctx->pc != 0x1AD39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunEvent__6CSceneFiP15CSceneEventData_0x2c7cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD39Cu; }
        if (ctx->pc != 0x1AD39Cu) { return; }
    }
    ctx->pc = 0x1AD39Cu;
label_1ad39c:
    // 0x1ad39c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ad3a0:
    if (ctx->pc == 0x1AD3A0u) {
        ctx->pc = 0x1AD3A4u;
        goto label_1ad3a4;
    }
    ctx->pc = 0x1AD39Cu;
    {
        const bool branch_taken_0x1ad39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad39c) {
            ctx->pc = 0x1AD3B8u;
            goto label_1ad3b8;
        }
    }
    ctx->pc = 0x1AD3A4u;
label_1ad3a4:
    // 0x1ad3a4: 0xc09fcd0  jal         func_27F340
label_1ad3a8:
    if (ctx->pc == 0x1AD3A8u) {
        ctx->pc = 0x1AD3A8u;
            // 0x1ad3a8: 0x2484e960  addiu       $a0, $a0, -0x16A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961504));
        ctx->pc = 0x1AD3ACu;
        goto label_1ad3ac;
    }
    ctx->pc = 0x1AD3A4u;
    SET_GPR_U32(ctx, 31, 0x1AD3ACu);
    ctx->pc = 0x1AD3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD3A4u;
            // 0x1ad3a8: 0x2484e960  addiu       $a0, $a0, -0x16A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F340u;
    if (runtime->hasFunction(0x27F340u)) {
        auto targetFn = runtime->lookupFunction(0x27F340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD3ACu; }
        if (ctx->pc != 0x1AD3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EventEdit__FP9mgCMemory_0x27f340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD3ACu; }
        if (ctx->pc != 0x1AD3ACu) { return; }
    }
    ctx->pc = 0x1AD3ACu;
label_1ad3ac:
    // 0x1ad3ac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1ad3b0:
    if (ctx->pc == 0x1AD3B0u) {
        ctx->pc = 0x1AD3B0u;
            // 0x1ad3b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1AD3B4u;
        goto label_1ad3b4;
    }
    ctx->pc = 0x1AD3ACu;
    {
        const bool branch_taken_0x1ad3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD3ACu;
            // 0x1ad3b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad3ac) {
            ctx->pc = 0x1AD3B8u;
            goto label_1ad3b8;
        }
    }
    ctx->pc = 0x1AD3B4u;
label_1ad3b4:
    // 0x1ad3b4: 0xaf828c80  sw          $v0, -0x7380($gp)
    ctx->pc = 0x1ad3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937728), GPR_U32(ctx, 2));
label_1ad3b8:
    // 0x1ad3b8: 0x12c0000e  beqz        $s6, . + 4 + (0xE << 2)
label_1ad3bc:
    if (ctx->pc == 0x1AD3BCu) {
        ctx->pc = 0x1AD3BCu;
            // 0x1ad3bc: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1AD3C0u;
        goto label_1ad3c0;
    }
    ctx->pc = 0x1AD3B8u;
    {
        const bool branch_taken_0x1ad3b8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD3B8u;
            // 0x1ad3bc: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad3b8) {
            ctx->pc = 0x1AD3F4u;
            goto label_1ad3f4;
        }
    }
    ctx->pc = 0x1AD3C0u;
label_1ad3c0:
    // 0x1ad3c0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1ad3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1ad3c4:
    // 0x1ad3c4: 0xc0bb538  jal         func_2ED4E0
label_1ad3c8:
    if (ctx->pc == 0x1AD3C8u) {
        ctx->pc = 0x1AD3C8u;
            // 0x1ad3c8: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->pc = 0x1AD3CCu;
        goto label_1ad3cc;
    }
    ctx->pc = 0x1AD3C4u;
    SET_GPR_U32(ctx, 31, 0x1AD3CCu);
    ctx->pc = 0x1AD3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD3C4u;
            // 0x1ad3c8: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD3CCu; }
        if (ctx->pc != 0x1AD3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD3CCu; }
        if (ctx->pc != 0x1AD3CCu) { return; }
    }
    ctx->pc = 0x1AD3CCu;
label_1ad3cc:
    // 0x1ad3cc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1ad3d0:
    if (ctx->pc == 0x1AD3D0u) {
        ctx->pc = 0x1AD3D0u;
            // 0x1ad3d0: 0x27a40538  addiu       $a0, $sp, 0x538 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1336));
        ctx->pc = 0x1AD3D4u;
        goto label_1ad3d4;
    }
    ctx->pc = 0x1AD3CCu;
    {
        const bool branch_taken_0x1ad3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD3CCu;
            // 0x1ad3d0: 0x27a40538  addiu       $a0, $sp, 0x538 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad3cc) {
            ctx->pc = 0x1AD3ECu;
            goto label_1ad3ec;
        }
    }
    ctx->pc = 0x1AD3D4u;
label_1ad3d4:
    // 0x1ad3d4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1ad3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1ad3d8:
    // 0x1ad3d8: 0xc052a3c  jal         func_14A8F0
label_1ad3dc:
    if (ctx->pc == 0x1AD3DCu) {
        ctx->pc = 0x1AD3DCu;
            // 0x1ad3dc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1AD3E0u;
        goto label_1ad3e0;
    }
    ctx->pc = 0x1AD3D8u;
    SET_GPR_U32(ctx, 31, 0x1AD3E0u);
    ctx->pc = 0x1AD3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD3D8u;
            // 0x1ad3dc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A8F0u;
    if (runtime->hasFunction(0x14A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x14A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD3E0u; }
        if (ctx->pc != 0x1AD3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Connect__8CGamePadFv_0x14a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD3E0u; }
        if (ctx->pc != 0x1AD3E0u) { return; }
    }
    ctx->pc = 0x1AD3E0u;
label_1ad3e0:
    // 0x1ad3e0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1ad3e4:
    if (ctx->pc == 0x1AD3E4u) {
        ctx->pc = 0x1AD3E8u;
        goto label_1ad3e8;
    }
    ctx->pc = 0x1AD3E0u;
    {
        const bool branch_taken_0x1ad3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad3e0) {
            ctx->pc = 0x1AD3F4u;
            goto label_1ad3f4;
        }
    }
    ctx->pc = 0x1AD3E8u;
label_1ad3e8:
    // 0x1ad3e8: 0x27a40538  addiu       $a0, $sp, 0x538
    ctx->pc = 0x1ad3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1336));
label_1ad3ec:
    // 0x1ad3ec: 0xc0c2728  jal         func_309CA0
label_1ad3f0:
    if (ctx->pc == 0x1AD3F0u) {
        ctx->pc = 0x1AD3F4u;
        goto label_1ad3f4;
    }
    ctx->pc = 0x1AD3ECu;
    SET_GPR_U32(ctx, 31, 0x1AD3F4u);
    ctx->pc = 0x309CA0u;
    if (runtime->hasFunction(0x309CA0u)) {
        auto targetFn = runtime->lookupFunction(0x309CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD3F4u; }
        if (ctx->pc != 0x1AD3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PauseStart__FP10PAUSE_INFO_0x309ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD3F4u; }
        if (ctx->pc != 0x1AD3F4u) { return; }
    }
    ctx->pc = 0x1AD3F4u;
label_1ad3f4:
    // 0x1ad3f4: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ad3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ad3f8:
    // 0x1ad3f8: 0xc0a0ed8  jal         func_283B60
label_1ad3fc:
    if (ctx->pc == 0x1AD3FCu) {
        ctx->pc = 0x1AD3FCu;
            // 0x1ad3fc: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->pc = 0x1AD400u;
        goto label_1ad400;
    }
    ctx->pc = 0x1AD3F8u;
    SET_GPR_U32(ctx, 31, 0x1AD400u);
    ctx->pc = 0x1AD3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD3F8u;
            // 0x1ad3fc: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD400u; }
        if (ctx->pc != 0x1AD400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD400u; }
        if (ctx->pc != 0x1AD400u) { return; }
    }
    ctx->pc = 0x1AD400u;
label_1ad400:
    // 0x1ad400: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ad404:
    if (ctx->pc == 0x1AD404u) {
        ctx->pc = 0x1AD404u;
            // 0x1ad404: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->pc = 0x1AD408u;
        goto label_1ad408;
    }
    ctx->pc = 0x1AD400u;
    {
        const bool branch_taken_0x1ad400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD400u;
            // 0x1ad404: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad400) {
            ctx->pc = 0x1AD41Cu;
            goto label_1ad41c;
        }
    }
    ctx->pc = 0x1AD408u;
label_1ad408:
    // 0x1ad408: 0x8f838cb0  lw          $v1, -0x7350($gp)
    ctx->pc = 0x1ad408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ad40c:
    // 0x1ad40c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ad40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ad410:
    // 0x1ad410: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1ad410u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_1ad414:
    // 0x1ad414: 0x8c23a498  lw          $v1, -0x5B68($at)
    ctx->pc = 0x1ad414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943896)));
label_1ad418:
    // 0x1ad418: 0xac43057c  sw          $v1, 0x57C($v0)
    ctx->pc = 0x1ad418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1404), GPR_U32(ctx, 3));
label_1ad41c:
    // 0x1ad41c: 0xc06b824  jal         func_1AE090
label_1ad420:
    if (ctx->pc == 0x1AD420u) {
        ctx->pc = 0x1AD424u;
        goto label_1ad424;
    }
    ctx->pc = 0x1AD41Cu;
    SET_GPR_U32(ctx, 31, 0x1AD424u);
    ctx->pc = 0x1AE090u;
    if (runtime->hasFunction(0x1AE090u)) {
        auto targetFn = runtime->lookupFunction(0x1AE090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD424u; }
        if (ctx->pc != 0x1AD424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditStep__Fv_0x1ae090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD424u; }
        if (ctx->pc != 0x1AD424u) { return; }
    }
    ctx->pc = 0x1AD424u;
label_1ad424:
    // 0x1ad424: 0x8f848c74  lw          $a0, -0x738C($gp)
    ctx->pc = 0x1ad424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937716)));
label_1ad428:
    // 0x1ad428: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_1ad42c:
    if (ctx->pc == 0x1AD42Cu) {
        ctx->pc = 0x1AD430u;
        goto label_1ad430;
    }
    ctx->pc = 0x1AD428u;
    {
        const bool branch_taken_0x1ad428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad428) {
            ctx->pc = 0x1AD458u;
            goto label_1ad458;
        }
    }
    ctx->pc = 0x1AD430u;
label_1ad430:
    // 0x1ad430: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ad430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ad434:
    // 0x1ad434: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1ad434u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1ad438:
    // 0x1ad438: 0x320f809  jalr        $t9
label_1ad43c:
    if (ctx->pc == 0x1AD43Cu) {
        ctx->pc = 0x1AD43Cu;
            // 0x1ad43c: 0x27a503d0  addiu       $a1, $sp, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
        ctx->pc = 0x1AD440u;
        goto label_1ad440;
    }
    ctx->pc = 0x1AD438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AD440u);
        ctx->pc = 0x1AD43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD438u;
            // 0x1ad43c: 0x27a503d0  addiu       $a1, $sp, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AD440u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AD440u; }
            if (ctx->pc != 0x1AD440u) { return; }
        }
        }
    }
    ctx->pc = 0x1AD440u;
label_1ad440:
    // 0x1ad440: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ad440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ad444:
    // 0x1ad444: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1ad444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1ad448:
    // 0x1ad448: 0xafa203dc  sw          $v0, 0x3DC($sp)
    ctx->pc = 0x1ad448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 988), GPR_U32(ctx, 2));
label_1ad44c:
    // 0x1ad44c: 0x27a503d0  addiu       $a1, $sp, 0x3D0
    ctx->pc = 0x1ad44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_1ad450:
    // 0x1ad450: 0xc0b2b34  jal         func_2CACD0
label_1ad454:
    if (ctx->pc == 0x1AD454u) {
        ctx->pc = 0x1AD454u;
            // 0x1ad454: 0x27a60350  addiu       $a2, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->pc = 0x1AD458u;
        goto label_1ad458;
    }
    ctx->pc = 0x1AD450u;
    SET_GPR_U32(ctx, 31, 0x1AD458u);
    ctx->pc = 0x1AD454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD450u;
            // 0x1ad454: 0x27a60350  addiu       $a2, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CACD0u;
    if (runtime->hasFunction(0x2CACD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CACD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD458u; }
        if (ctx->pc != 0x1AD458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StayNearVillager__6CSceneFPfPi_0x2cacd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD458u; }
        if (ctx->pc != 0x1AD458u) { return; }
    }
    ctx->pc = 0x1AD458u;
label_1ad458:
    // 0x1ad458: 0x8f838c7c  lw          $v1, -0x7384($gp)
    ctx->pc = 0x1ad458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937724)));
label_1ad45c:
    // 0x1ad45c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad460:
    // 0x1ad460: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1ad464:
    if (ctx->pc == 0x1AD464u) {
        ctx->pc = 0x1AD468u;
        goto label_1ad468;
    }
    ctx->pc = 0x1AD460u;
    {
        const bool branch_taken_0x1ad460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ad460) {
            ctx->pc = 0x1AD470u;
            goto label_1ad470;
        }
    }
    ctx->pc = 0x1AD468u;
label_1ad468:
    // 0x1ad468: 0xc0b2a20  jal         func_2CA880
label_1ad46c:
    if (ctx->pc == 0x1AD46Cu) {
        ctx->pc = 0x1AD46Cu;
            // 0x1ad46c: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AD470u;
        goto label_1ad470;
    }
    ctx->pc = 0x1AD468u;
    SET_GPR_U32(ctx, 31, 0x1AD470u);
    ctx->pc = 0x1AD46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD468u;
            // 0x1ad46c: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA880u;
    if (runtime->hasFunction(0x2CA880u)) {
        auto targetFn = runtime->lookupFunction(0x2CA880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD470u; }
        if (ctx->pc != 0x1AD470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepVillager__6CSceneFv_0x2ca880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD470u; }
        if (ctx->pc != 0x1AD470u) { return; }
    }
    ctx->pc = 0x1AD470u;
label_1ad470:
    // 0x1ad470: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ad470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ad474:
    // 0x1ad474: 0xc0b2b98  jal         func_2CAE60
label_1ad478:
    if (ctx->pc == 0x1AD478u) {
        ctx->pc = 0x1AD478u;
            // 0x1ad478: 0x27a50350  addiu       $a1, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->pc = 0x1AD47Cu;
        goto label_1ad47c;
    }
    ctx->pc = 0x1AD474u;
    SET_GPR_U32(ctx, 31, 0x1AD47Cu);
    ctx->pc = 0x1AD478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD474u;
            // 0x1ad478: 0x27a50350  addiu       $a1, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CAE60u;
    if (runtime->hasFunction(0x2CAE60u)) {
        auto targetFn = runtime->lookupFunction(0x2CAE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD47Cu; }
        if (ctx->pc != 0x1AD47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CancelStayVillager__6CSceneFPi_0x2cae60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD47Cu; }
        if (ctx->pc != 0x1AD47Cu) { return; }
    }
    ctx->pc = 0x1AD47Cu;
label_1ad47c:
    // 0x1ad47c: 0xc0c1074  jal         func_3041D0
label_1ad480:
    if (ctx->pc == 0x1AD480u) {
        ctx->pc = 0x1AD484u;
        goto label_1ad484;
    }
    ctx->pc = 0x1AD47Cu;
    SET_GPR_U32(ctx, 31, 0x1AD484u);
    ctx->pc = 0x3041D0u;
    if (runtime->hasFunction(0x3041D0u)) {
        auto targetFn = runtime->lookupFunction(0x3041D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD484u; }
        if (ctx->pc != 0x1AD484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgLoopSubGame2__Fv_0x3041d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD484u; }
        if (ctx->pc != 0x1AD484u) { return; }
    }
    ctx->pc = 0x1AD484u;
label_1ad484:
    // 0x1ad484: 0x162000a9  bnez        $s1, . + 4 + (0xA9 << 2)
label_1ad488:
    if (ctx->pc == 0x1AD488u) {
        ctx->pc = 0x1AD48Cu;
        goto label_1ad48c;
    }
    ctx->pc = 0x1AD484u;
    {
        const bool branch_taken_0x1ad484 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad484) {
            ctx->pc = 0x1AD72Cu;
            goto label_1ad72c;
        }
    }
    ctx->pc = 0x1AD48Cu;
label_1ad48c:
    // 0x1ad48c: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1ad48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1ad490:
    // 0x1ad490: 0x144000a6  bnez        $v0, . + 4 + (0xA6 << 2)
label_1ad494:
    if (ctx->pc == 0x1AD494u) {
        ctx->pc = 0x1AD498u;
        goto label_1ad498;
    }
    ctx->pc = 0x1AD490u;
    {
        const bool branch_taken_0x1ad490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad490) {
            ctx->pc = 0x1AD72Cu;
            goto label_1ad72c;
        }
    }
    ctx->pc = 0x1AD498u;
label_1ad498:
    // 0x1ad498: 0xc0c0fd4  jal         func_303F50
label_1ad49c:
    if (ctx->pc == 0x1AD49Cu) {
        ctx->pc = 0x1AD4A0u;
        goto label_1ad4a0;
    }
    ctx->pc = 0x1AD498u;
    SET_GPR_U32(ctx, 31, 0x1AD4A0u);
    ctx->pc = 0x303F50u;
    if (runtime->hasFunction(0x303F50u)) {
        auto targetFn = runtime->lookupFunction(0x303F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD4A0u; }
        if (ctx->pc != 0x1AD4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgMenuOpenEnable__Fv_0x303f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD4A0u; }
        if (ctx->pc != 0x1AD4A0u) { return; }
    }
    ctx->pc = 0x1AD4A0u;
label_1ad4a0:
    // 0x1ad4a0: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
label_1ad4a4:
    if (ctx->pc == 0x1AD4A4u) {
        ctx->pc = 0x1AD4A8u;
        goto label_1ad4a8;
    }
    ctx->pc = 0x1AD4A0u;
    {
        const bool branch_taken_0x1ad4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad4a0) {
            ctx->pc = 0x1AD72Cu;
            goto label_1ad72c;
        }
    }
    ctx->pc = 0x1AD4A8u;
label_1ad4a8:
    // 0x1ad4a8: 0x166000a0  bnez        $s3, . + 4 + (0xA0 << 2)
label_1ad4ac:
    if (ctx->pc == 0x1AD4ACu) {
        ctx->pc = 0x1AD4ACu;
            // 0x1ad4ac: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1AD4B0u;
        goto label_1ad4b0;
    }
    ctx->pc = 0x1AD4A8u;
    {
        const bool branch_taken_0x1ad4a8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD4A8u;
            // 0x1ad4ac: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad4a8) {
            ctx->pc = 0x1AD72Cu;
            goto label_1ad72c;
        }
    }
    ctx->pc = 0x1AD4B0u;
label_1ad4b0:
    // 0x1ad4b0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ad4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ad4b4:
    // 0x1ad4b4: 0xc0bb538  jal         func_2ED4E0
label_1ad4b8:
    if (ctx->pc == 0x1AD4B8u) {
        ctx->pc = 0x1AD4B8u;
            // 0x1ad4b8: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->pc = 0x1AD4BCu;
        goto label_1ad4bc;
    }
    ctx->pc = 0x1AD4B4u;
    SET_GPR_U32(ctx, 31, 0x1AD4BCu);
    ctx->pc = 0x1AD4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD4B4u;
            // 0x1ad4b8: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD4BCu; }
        if (ctx->pc != 0x1AD4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD4BCu; }
        if (ctx->pc != 0x1AD4BCu) { return; }
    }
    ctx->pc = 0x1AD4BCu;
label_1ad4bc:
    // 0x1ad4bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ad4bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ad4c0:
    // 0x1ad4c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1ad4c4:
    if (ctx->pc == 0x1AD4C4u) {
        ctx->pc = 0x1AD4C8u;
        goto label_1ad4c8;
    }
    ctx->pc = 0x1AD4C0u;
    {
        const bool branch_taken_0x1ad4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad4c0) {
            ctx->pc = 0x1AD4D4u;
            goto label_1ad4d4;
        }
    }
    ctx->pc = 0x1AD4C8u;
label_1ad4c8:
    // 0x1ad4c8: 0xc0c0fe4  jal         func_303F90
label_1ad4cc:
    if (ctx->pc == 0x1AD4CCu) {
        ctx->pc = 0x1AD4D0u;
        goto label_1ad4d0;
    }
    ctx->pc = 0x1AD4C8u;
    SET_GPR_U32(ctx, 31, 0x1AD4D0u);
    ctx->pc = 0x303F90u;
    if (runtime->hasFunction(0x303F90u)) {
        auto targetFn = runtime->lookupFunction(0x303F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD4D0u; }
        if (ctx->pc != 0x1AD4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgGetItemOver__Fv_0x303f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD4D0u; }
        if (ctx->pc != 0x1AD4D0u) { return; }
    }
    ctx->pc = 0x1AD4D0u;
label_1ad4d0:
    // 0x1ad4d0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ad4d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ad4d4:
    // 0x1ad4d4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1ad4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1ad4d8:
    // 0x1ad4d8: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x1ad4d8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ad4dc:
    // 0x1ad4dc: 0x24847b60  addiu       $a0, $a0, 0x7B60
    ctx->pc = 0x1ad4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
label_1ad4e0:
    // 0x1ad4e0: 0xc0bb538  jal         func_2ED4E0
label_1ad4e4:
    if (ctx->pc == 0x1AD4E4u) {
        ctx->pc = 0x1AD4E4u;
            // 0x1ad4e4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1AD4E8u;
        goto label_1ad4e8;
    }
    ctx->pc = 0x1AD4E0u;
    SET_GPR_U32(ctx, 31, 0x1AD4E8u);
    ctx->pc = 0x1AD4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD4E0u;
            // 0x1ad4e4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD4E8u; }
        if (ctx->pc != 0x1AD4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD4E8u; }
        if (ctx->pc != 0x1AD4E8u) { return; }
    }
    ctx->pc = 0x1AD4E8u;
label_1ad4e8:
    // 0x1ad4e8: 0xc069048  jal         func_1A4120
label_1ad4ec:
    if (ctx->pc == 0x1AD4ECu) {
        ctx->pc = 0x1AD4ECu;
            // 0x1ad4ec: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD4F0u;
        goto label_1ad4f0;
    }
    ctx->pc = 0x1AD4E8u;
    SET_GPR_U32(ctx, 31, 0x1AD4F0u);
    ctx->pc = 0x1AD4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD4E8u;
            // 0x1ad4ec: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4120u;
    if (runtime->hasFunction(0x1A4120u)) {
        auto targetFn = runtime->lookupFunction(0x1A4120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD4F0u; }
        if (ctx->pc != 0x1AD4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditOnGround__Fv_0x1a4120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD4F0u; }
        if (ctx->pc != 0x1AD4F0u) { return; }
    }
    ctx->pc = 0x1AD4F0u;
label_1ad4f0:
    // 0x1ad4f0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ad4f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ad4f4:
    // 0x1ad4f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ad4f8:
    if (ctx->pc == 0x1AD4F8u) {
        ctx->pc = 0x1AD4F8u;
            // 0x1ad4f8: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1AD4FCu;
        goto label_1ad4fc;
    }
    ctx->pc = 0x1AD4F4u;
    {
        const bool branch_taken_0x1ad4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD4F4u;
            // 0x1ad4f8: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad4f4) {
            ctx->pc = 0x1AD50Cu;
            goto label_1ad50c;
        }
    }
    ctx->pc = 0x1AD4FCu;
label_1ad4fc:
    // 0x1ad4fc: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x1ad4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1ad500:
    // 0x1ad500: 0xc0bb538  jal         func_2ED4E0
label_1ad504:
    if (ctx->pc == 0x1AD504u) {
        ctx->pc = 0x1AD504u;
            // 0x1ad504: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->pc = 0x1AD508u;
        goto label_1ad508;
    }
    ctx->pc = 0x1AD500u;
    SET_GPR_U32(ctx, 31, 0x1AD508u);
    ctx->pc = 0x1AD504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD500u;
            // 0x1ad504: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD508u; }
        if (ctx->pc != 0x1AD508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD508u; }
        if (ctx->pc != 0x1AD508u) { return; }
    }
    ctx->pc = 0x1AD508u;
label_1ad508:
    // 0x1ad508: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ad508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ad50c:
    // 0x1ad50c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ad510:
    if (ctx->pc == 0x1AD510u) {
        ctx->pc = 0x1AD514u;
        goto label_1ad514;
    }
    ctx->pc = 0x1AD50Cu;
    {
        const bool branch_taken_0x1ad50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad50c) {
            ctx->pc = 0x1AD524u;
            goto label_1ad524;
        }
    }
    ctx->pc = 0x1AD514u;
label_1ad514:
    // 0x1ad514: 0xc0c0fc8  jal         func_303F20
label_1ad518:
    if (ctx->pc == 0x1AD518u) {
        ctx->pc = 0x1AD51Cu;
        goto label_1ad51c;
    }
    ctx->pc = 0x1AD514u;
    SET_GPR_U32(ctx, 31, 0x1AD51Cu);
    ctx->pc = 0x303F20u;
    if (runtime->hasFunction(0x303F20u)) {
        auto targetFn = runtime->lookupFunction(0x303F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD51Cu; }
        if (ctx->pc != 0x1AD51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameRunning__Fv_0x303f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD51Cu; }
        if (ctx->pc != 0x1AD51Cu) { return; }
    }
    ctx->pc = 0x1AD51Cu;
label_1ad51c:
    // 0x1ad51c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ad51cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ad520:
    // 0x1ad520: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ad520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1ad524:
    // 0x1ad524: 0x8f968cb0  lw          $s6, -0x7350($gp)
    ctx->pc = 0x1ad524u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ad528:
    // 0x1ad528: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1ad528u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ad52c:
    // 0x1ad52c: 0xc05f660  jal         func_17D980
label_1ad530:
    if (ctx->pc == 0x1AD530u) {
        ctx->pc = 0x1AD530u;
            // 0x1ad530: 0x26c42c70  addiu       $a0, $s6, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 11376));
        ctx->pc = 0x1AD534u;
        goto label_1ad534;
    }
    ctx->pc = 0x1AD52Cu;
    SET_GPR_U32(ctx, 31, 0x1AD534u);
    ctx->pc = 0x1AD530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD52Cu;
            // 0x1ad530: 0x26c42c70  addiu       $a0, $s6, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D980u;
    if (runtime->hasFunction(0x17D980u)) {
        auto targetFn = runtime->lookupFunction(0x17D980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD534u; }
        if (ctx->pc != 0x1AD534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowFade__10CFadeInOutFv_0x17d980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD534u; }
        if (ctx->pc != 0x1AD534u) { return; }
    }
    ctx->pc = 0x1AD534u;
label_1ad534:
    // 0x1ad534: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ad534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ad538:
    // 0x1ad538: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ad53c:
    if (ctx->pc == 0x1AD53Cu) {
        ctx->pc = 0x1AD540u;
        goto label_1ad540;
    }
    ctx->pc = 0x1AD538u;
    {
        const bool branch_taken_0x1ad538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad538) {
            ctx->pc = 0x1AD548u;
            goto label_1ad548;
        }
    }
    ctx->pc = 0x1AD540u;
label_1ad540:
    // 0x1ad540: 0x8ec22c90  lw          $v0, 0x2C90($s6)
    ctx->pc = 0x1ad540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11408)));
label_1ad544:
    // 0x1ad544: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ad544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ad548:
    // 0x1ad548: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ad548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ad54c:
    // 0x1ad54c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1ad550:
    if (ctx->pc == 0x1AD550u) {
        ctx->pc = 0x1AD554u;
        goto label_1ad554;
    }
    ctx->pc = 0x1AD54Cu;
    {
        const bool branch_taken_0x1ad54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad54c) {
            ctx->pc = 0x1AD558u;
            goto label_1ad558;
        }
    }
    ctx->pc = 0x1AD554u;
label_1ad554:
    // 0x1ad554: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1ad554u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad558:
    // 0x1ad558: 0xc06a6c4  jal         func_1A9B10
label_1ad55c:
    if (ctx->pc == 0x1AD55Cu) {
        ctx->pc = 0x1AD560u;
        goto label_1ad560;
    }
    ctx->pc = 0x1AD558u;
    SET_GPR_U32(ctx, 31, 0x1AD560u);
    ctx->pc = 0x1A9B10u;
    if (runtime->hasFunction(0x1A9B10u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD560u; }
        if (ctx->pc != 0x1AD560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserData__Fv_0x1a9b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD560u; }
        if (ctx->pc != 0x1AD560u) { return; }
    }
    ctx->pc = 0x1AD560u;
label_1ad560:
    // 0x1ad560: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x1ad560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_1ad564:
    // 0x1ad564: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1ad564u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1ad568:
    // 0x1ad568: 0x84224d96  lh          $v0, 0x4D96($at)
    ctx->pc = 0x1ad568u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
label_1ad56c:
    // 0x1ad56c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ad56cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ad570:
    // 0x1ad570: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ad570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1ad574:
    // 0x1ad574: 0xc06a6c4  jal         func_1A9B10
label_1ad578:
    if (ctx->pc == 0x1AD578u) {
        ctx->pc = 0x1AD578u;
            // 0x1ad578: 0x305600ff  andi        $s6, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x1AD57Cu;
        goto label_1ad57c;
    }
    ctx->pc = 0x1AD574u;
    SET_GPR_U32(ctx, 31, 0x1AD57Cu);
    ctx->pc = 0x1AD578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD574u;
            // 0x1ad578: 0x305600ff  andi        $s6, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9B10u;
    if (runtime->hasFunction(0x1A9B10u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD57Cu; }
        if (ctx->pc != 0x1AD57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserData__Fv_0x1a9b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD57Cu; }
        if (ctx->pc != 0x1AD57Cu) { return; }
    }
    ctx->pc = 0x1AD57Cu;
label_1ad57c:
    // 0x1ad57c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ad57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ad580:
    // 0x1ad580: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1ad580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ad584:
    // 0x1ad584: 0xc066f48  jal         func_19BD20
label_1ad588:
    if (ctx->pc == 0x1AD588u) {
        ctx->pc = 0x1AD588u;
            // 0x1ad588: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD58Cu;
        goto label_1ad58c;
    }
    ctx->pc = 0x1AD584u;
    SET_GPR_U32(ctx, 31, 0x1AD58Cu);
    ctx->pc = 0x1AD588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD584u;
            // 0x1ad588: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BD20u;
    if (runtime->hasFunction(0x19BD20u)) {
        auto targetFn = runtime->lookupFunction(0x19BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD58Cu; }
        if (ctx->pc != 0x1AD58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckQuickChange__16CUserDataManagerFiPi_0x19bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD58Cu; }
        if (ctx->pc != 0x1AD58Cu) { return; }
    }
    ctx->pc = 0x1AD58Cu;
label_1ad58c:
    // 0x1ad58c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ad58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1ad590:
    // 0x1ad590: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1ad594:
    if (ctx->pc == 0x1AD594u) {
        ctx->pc = 0x1AD598u;
        goto label_1ad598;
    }
    ctx->pc = 0x1AD590u;
    {
        const bool branch_taken_0x1ad590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad590) {
            ctx->pc = 0x1AD59Cu;
            goto label_1ad59c;
        }
    }
    ctx->pc = 0x1AD598u;
label_1ad598:
    // 0x1ad598: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1ad598u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad59c:
    // 0x1ad59c: 0xc069058  jal         func_1A4160
label_1ad5a0:
    if (ctx->pc == 0x1AD5A0u) {
        ctx->pc = 0x1AD5A4u;
        goto label_1ad5a4;
    }
    ctx->pc = 0x1AD59Cu;
    SET_GPR_U32(ctx, 31, 0x1AD5A4u);
    ctx->pc = 0x1A4160u;
    if (runtime->hasFunction(0x1A4160u)) {
        auto targetFn = runtime->lookupFunction(0x1A4160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD5A4u; }
        if (ctx->pc != 0x1AD5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsWalkMode__Fv_0x1a4160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD5A4u; }
        if (ctx->pc != 0x1AD5A4u) { return; }
    }
    ctx->pc = 0x1AD5A4u;
label_1ad5a4:
    // 0x1ad5a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ad5a8:
    if (ctx->pc == 0x1AD5A8u) {
        ctx->pc = 0x1AD5ACu;
        goto label_1ad5ac;
    }
    ctx->pc = 0x1AD5A4u;
    {
        const bool branch_taken_0x1ad5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad5a4) {
            ctx->pc = 0x1AD5BCu;
            goto label_1ad5bc;
        }
    }
    ctx->pc = 0x1AD5ACu;
label_1ad5ac:
    // 0x1ad5ac: 0xc0c2724  jal         func_309C90
label_1ad5b0:
    if (ctx->pc == 0x1AD5B0u) {
        ctx->pc = 0x1AD5B4u;
        goto label_1ad5b4;
    }
    ctx->pc = 0x1AD5ACu;
    SET_GPR_U32(ctx, 31, 0x1AD5B4u);
    ctx->pc = 0x309C90u;
    if (runtime->hasFunction(0x309C90u)) {
        auto targetFn = runtime->lookupFunction(0x309C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD5B4u; }
        if (ctx->pc != 0x1AD5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPauseFlag__Fv_0x309c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD5B4u; }
        if (ctx->pc != 0x1AD5B4u) { return; }
    }
    ctx->pc = 0x1AD5B4u;
label_1ad5b4:
    // 0x1ad5b4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1ad5b8:
    if (ctx->pc == 0x1AD5B8u) {
        ctx->pc = 0x1AD5BCu;
        goto label_1ad5bc;
    }
    ctx->pc = 0x1AD5B4u;
    {
        const bool branch_taken_0x1ad5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad5b4) {
            ctx->pc = 0x1AD5C0u;
            goto label_1ad5c0;
        }
    }
    ctx->pc = 0x1AD5BCu;
label_1ad5bc:
    // 0x1ad5bc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1ad5bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad5c0:
    // 0x1ad5c0: 0x8f838c7c  lw          $v1, -0x7384($gp)
    ctx->pc = 0x1ad5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937724)));
label_1ad5c4:
    // 0x1ad5c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ad5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ad5c8:
    // 0x1ad5c8: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_1ad5cc:
    if (ctx->pc == 0x1AD5CCu) {
        ctx->pc = 0x1AD5CCu;
            // 0x1ad5cc: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1AD5D0u;
        goto label_1ad5d0;
    }
    ctx->pc = 0x1AD5C8u;
    {
        const bool branch_taken_0x1ad5c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AD5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD5C8u;
            // 0x1ad5cc: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad5c8) {
            ctx->pc = 0x1AD5F4u;
            goto label_1ad5f4;
        }
    }
    ctx->pc = 0x1AD5D0u;
label_1ad5d0:
    // 0x1ad5d0: 0xc0c0fc8  jal         func_303F20
label_1ad5d4:
    if (ctx->pc == 0x1AD5D4u) {
        ctx->pc = 0x1AD5D8u;
        goto label_1ad5d8;
    }
    ctx->pc = 0x1AD5D0u;
    SET_GPR_U32(ctx, 31, 0x1AD5D8u);
    ctx->pc = 0x303F20u;
    if (runtime->hasFunction(0x303F20u)) {
        auto targetFn = runtime->lookupFunction(0x303F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD5D8u; }
        if (ctx->pc != 0x1AD5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameRunning__Fv_0x303f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD5D8u; }
        if (ctx->pc != 0x1AD5D8u) { return; }
    }
    ctx->pc = 0x1AD5D8u;
label_1ad5d8:
    // 0x1ad5d8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1ad5dc:
    if (ctx->pc == 0x1AD5DCu) {
        ctx->pc = 0x1AD5E0u;
        goto label_1ad5e0;
    }
    ctx->pc = 0x1AD5D8u;
    {
        const bool branch_taken_0x1ad5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad5d8) {
            ctx->pc = 0x1AD5F4u;
            goto label_1ad5f4;
        }
    }
    ctx->pc = 0x1AD5E0u;
label_1ad5e0:
    // 0x1ad5e0: 0xc069048  jal         func_1A4120
label_1ad5e4:
    if (ctx->pc == 0x1AD5E4u) {
        ctx->pc = 0x1AD5E8u;
        goto label_1ad5e8;
    }
    ctx->pc = 0x1AD5E0u;
    SET_GPR_U32(ctx, 31, 0x1AD5E8u);
    ctx->pc = 0x1A4120u;
    if (runtime->hasFunction(0x1A4120u)) {
        auto targetFn = runtime->lookupFunction(0x1A4120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD5E8u; }
        if (ctx->pc != 0x1AD5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditOnGround__Fv_0x1a4120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD5E8u; }
        if (ctx->pc != 0x1AD5E8u) { return; }
    }
    ctx->pc = 0x1AD5E8u;
label_1ad5e8:
    // 0x1ad5e8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1ad5ec:
    if (ctx->pc == 0x1AD5ECu) {
        ctx->pc = 0x1AD5F0u;
        goto label_1ad5f0;
    }
    ctx->pc = 0x1AD5E8u;
    {
        const bool branch_taken_0x1ad5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad5e8) {
            ctx->pc = 0x1AD5F4u;
            goto label_1ad5f4;
        }
    }
    ctx->pc = 0x1AD5F0u;
label_1ad5f0:
    // 0x1ad5f0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1ad5f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad5f4:
    // 0x1ad5f4: 0x13c0004d  beqz        $fp, . + 4 + (0x4D << 2)
label_1ad5f8:
    if (ctx->pc == 0x1AD5F8u) {
        ctx->pc = 0x1AD5FCu;
        goto label_1ad5fc;
    }
    ctx->pc = 0x1AD5F4u;
    {
        const bool branch_taken_0x1ad5f4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad5f4) {
            ctx->pc = 0x1AD72Cu;
            goto label_1ad72c;
        }
    }
    ctx->pc = 0x1AD5FCu;
label_1ad5fc:
    // 0x1ad5fc: 0x8f828c78  lw          $v0, -0x7388($gp)
    ctx->pc = 0x1ad5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937720)));
label_1ad600:
    // 0x1ad600: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x1ad600u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_1ad604:
    // 0x1ad604: 0x14200049  bnez        $at, . + 4 + (0x49 << 2)
label_1ad608:
    if (ctx->pc == 0x1AD608u) {
        ctx->pc = 0x1AD60Cu;
        goto label_1ad60c;
    }
    ctx->pc = 0x1AD604u;
    {
        const bool branch_taken_0x1ad604 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad604) {
            ctx->pc = 0x1AD72Cu;
            goto label_1ad72c;
        }
    }
    ctx->pc = 0x1AD60Cu;
label_1ad60c:
    // 0x1ad60c: 0x8f838c80  lw          $v1, -0x7380($gp)
    ctx->pc = 0x1ad60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1ad610:
    // 0x1ad610: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad614:
    // 0x1ad614: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
label_1ad618:
    if (ctx->pc == 0x1AD618u) {
        ctx->pc = 0x1AD61Cu;
        goto label_1ad61c;
    }
    ctx->pc = 0x1AD614u;
    {
        const bool branch_taken_0x1ad614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ad614) {
            ctx->pc = 0x1AD72Cu;
            goto label_1ad72c;
        }
    }
    ctx->pc = 0x1AD61Cu;
label_1ad61c:
    // 0x1ad61c: 0x16e00005  bnez        $s7, . + 4 + (0x5 << 2)
label_1ad620:
    if (ctx->pc == 0x1AD620u) {
        ctx->pc = 0x1AD624u;
        goto label_1ad624;
    }
    ctx->pc = 0x1AD61Cu;
    {
        const bool branch_taken_0x1ad61c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad61c) {
            ctx->pc = 0x1AD634u;
            goto label_1ad634;
        }
    }
    ctx->pc = 0x1AD624u;
label_1ad624:
    // 0x1ad624: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_1ad628:
    if (ctx->pc == 0x1AD628u) {
        ctx->pc = 0x1AD62Cu;
        goto label_1ad62c;
    }
    ctx->pc = 0x1AD624u;
    {
        const bool branch_taken_0x1ad624 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad624) {
            ctx->pc = 0x1AD634u;
            goto label_1ad634;
        }
    }
    ctx->pc = 0x1AD62Cu;
label_1ad62c:
    // 0x1ad62c: 0x1280003f  beqz        $s4, . + 4 + (0x3F << 2)
label_1ad630:
    if (ctx->pc == 0x1AD630u) {
        ctx->pc = 0x1AD634u;
        goto label_1ad634;
    }
    ctx->pc = 0x1AD62Cu;
    {
        const bool branch_taken_0x1ad62c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad62c) {
            ctx->pc = 0x1AD72Cu;
            goto label_1ad72c;
        }
    }
    ctx->pc = 0x1AD634u;
label_1ad634:
    // 0x1ad634: 0xc0c6538  jal         func_3194E0
label_1ad638:
    if (ctx->pc == 0x1AD638u) {
        ctx->pc = 0x1AD63Cu;
        goto label_1ad63c;
    }
    ctx->pc = 0x1AD634u;
    SET_GPR_U32(ctx, 31, 0x1AD63Cu);
    ctx->pc = 0x3194E0u;
    if (runtime->hasFunction(0x3194E0u)) {
        auto targetFn = runtime->lookupFunction(0x3194E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD63Cu; }
        if (ctx->pc != 0x1AD63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShowOffOnceHelpMes__Fv_0x3194e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD63Cu; }
        if (ctx->pc != 0x1AD63Cu) { return; }
    }
    ctx->pc = 0x1AD63Cu;
label_1ad63c:
    // 0x1ad63c: 0x8f838c7c  lw          $v1, -0x7384($gp)
    ctx->pc = 0x1ad63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937724)));
label_1ad640:
    // 0x1ad640: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad644:
    // 0x1ad644: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
label_1ad648:
    if (ctx->pc == 0x1AD648u) {
        ctx->pc = 0x1AD64Cu;
        goto label_1ad64c;
    }
    ctx->pc = 0x1AD644u;
    {
        const bool branch_taken_0x1ad644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ad644) {
            ctx->pc = 0x1AD6C4u;
            goto label_1ad6c4;
        }
    }
    ctx->pc = 0x1AD64Cu;
label_1ad64c:
    // 0x1ad64c: 0x12e00015  beqz        $s7, . + 4 + (0x15 << 2)
label_1ad650:
    if (ctx->pc == 0x1AD650u) {
        ctx->pc = 0x1AD654u;
        goto label_1ad654;
    }
    ctx->pc = 0x1AD64Cu;
    {
        const bool branch_taken_0x1ad64c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad64c) {
            ctx->pc = 0x1AD6A4u;
            goto label_1ad6a4;
        }
    }
    ctx->pc = 0x1AD654u;
label_1ad654:
    // 0x1ad654: 0xc0c39a0  jal         func_30E680
label_1ad658:
    if (ctx->pc == 0x1AD658u) {
        ctx->pc = 0x1AD65Cu;
        goto label_1ad65c;
    }
    ctx->pc = 0x1AD654u;
    SET_GPR_U32(ctx, 31, 0x1AD65Cu);
    ctx->pc = 0x30E680u;
    if (runtime->hasFunction(0x30E680u)) {
        auto targetFn = runtime->lookupFunction(0x30E680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD65Cu; }
        if (ctx->pc != 0x1AD65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowTakePhoto__Fv_0x30e680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD65Cu; }
        if (ctx->pc != 0x1AD65Cu) { return; }
    }
    ctx->pc = 0x1AD65Cu;
label_1ad65c:
    // 0x1ad65c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1ad660:
    if (ctx->pc == 0x1AD660u) {
        ctx->pc = 0x1AD664u;
        goto label_1ad664;
    }
    ctx->pc = 0x1AD65Cu;
    {
        const bool branch_taken_0x1ad65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad65c) {
            ctx->pc = 0x1AD690u;
            goto label_1ad690;
        }
    }
    ctx->pc = 0x1AD664u;
label_1ad664:
    // 0x1ad664: 0xc0c39a4  jal         func_30E690
label_1ad668:
    if (ctx->pc == 0x1AD668u) {
        ctx->pc = 0x1AD66Cu;
        goto label_1ad66c;
    }
    ctx->pc = 0x1AD664u;
    SET_GPR_U32(ctx, 31, 0x1AD66Cu);
    ctx->pc = 0x30E690u;
    if (runtime->hasFunction(0x30E690u)) {
        auto targetFn = runtime->lookupFunction(0x30E690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD66Cu; }
        if (ctx->pc != 0x1AD66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsEnablePhotoMenu__Fv_0x30e690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD66Cu; }
        if (ctx->pc != 0x1AD66Cu) { return; }
    }
    ctx->pc = 0x1AD66Cu;
label_1ad66c:
    // 0x1ad66c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_1ad670:
    if (ctx->pc == 0x1AD670u) {
        ctx->pc = 0x1AD674u;
        goto label_1ad674;
    }
    ctx->pc = 0x1AD66Cu;
    {
        const bool branch_taken_0x1ad66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad66c) {
            ctx->pc = 0x1AD72Cu;
            goto label_1ad72c;
        }
    }
    ctx->pc = 0x1AD674u;
label_1ad674:
    // 0x1ad674: 0x8f8280f0  lw          $v0, -0x7F10($gp)
    ctx->pc = 0x1ad674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1ad678:
    // 0x1ad678: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1ad678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ad67c:
    // 0x1ad67c: 0xc0c39a8  jal         func_30E6A0
label_1ad680:
    if (ctx->pc == 0x1AD680u) {
        ctx->pc = 0x1AD680u;
            // 0x1ad680: 0xac430028  sw          $v1, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
        ctx->pc = 0x1AD684u;
        goto label_1ad684;
    }
    ctx->pc = 0x1AD67Cu;
    SET_GPR_U32(ctx, 31, 0x1AD684u);
    ctx->pc = 0x1AD680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD67Cu;
            // 0x1ad680: 0xac430028  sw          $v1, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E6A0u;
    if (runtime->hasFunction(0x30E6A0u)) {
        auto targetFn = runtime->lookupFunction(0x30E6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD684u; }
        if (ctx->pc != 0x1AD684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        HidePhoto__Fv_0x30e6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD684u; }
        if (ctx->pc != 0x1AD684u) { return; }
    }
    ctx->pc = 0x1AD684u;
label_1ad684:
    // 0x1ad684: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1ad684u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ad688:
    // 0x1ad688: 0x10000028  b           . + 4 + (0x28 << 2)
label_1ad68c:
    if (ctx->pc == 0x1AD68Cu) {
        ctx->pc = 0x1AD68Cu;
            // 0x1ad68c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1AD690u;
        goto label_1ad690;
    }
    ctx->pc = 0x1AD688u;
    {
        const bool branch_taken_0x1ad688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD688u;
            // 0x1ad68c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad688) {
            ctx->pc = 0x1AD72Cu;
            goto label_1ad72c;
        }
    }
    ctx->pc = 0x1AD690u;
label_1ad690:
    // 0x1ad690: 0x8f8280f0  lw          $v0, -0x7F10($gp)
    ctx->pc = 0x1ad690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1ad694:
    // 0x1ad694: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1ad694u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ad698:
    // 0x1ad698: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1ad698u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad69c:
    // 0x1ad69c: 0x10000023  b           . + 4 + (0x23 << 2)
label_1ad6a0:
    if (ctx->pc == 0x1AD6A0u) {
        ctx->pc = 0x1AD6A0u;
            // 0x1ad6a0: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->pc = 0x1AD6A4u;
        goto label_1ad6a4;
    }
    ctx->pc = 0x1AD69Cu;
    {
        const bool branch_taken_0x1ad69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD69Cu;
            // 0x1ad6a0: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad69c) {
            ctx->pc = 0x1AD72Cu;
            goto label_1ad72c;
        }
    }
    ctx->pc = 0x1AD6A4u;
label_1ad6a4:
    // 0x1ad6a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ad6a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ad6a8:
    // 0x1ad6a8: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x1ad6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_1ad6ac:
    // 0x1ad6ac: 0x8f8280f0  lw          $v0, -0x7F10($gp)
    ctx->pc = 0x1ad6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1ad6b0:
    // 0x1ad6b0: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1ad6b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ad6b4:
    // 0x1ad6b4: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x1ad6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_1ad6b8:
    // 0x1ad6b8: 0x8f8280f0  lw          $v0, -0x7F10($gp)
    ctx->pc = 0x1ad6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1ad6bc:
    // 0x1ad6bc: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1ad6c0:
    if (ctx->pc == 0x1AD6C0u) {
        ctx->pc = 0x1AD6C0u;
            // 0x1ad6c0: 0xac560058  sw          $s6, 0x58($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 22));
        ctx->pc = 0x1AD6C4u;
        goto label_1ad6c4;
    }
    ctx->pc = 0x1AD6BCu;
    {
        const bool branch_taken_0x1ad6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD6BCu;
            // 0x1ad6c0: 0xac560058  sw          $s6, 0x58($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad6bc) {
            ctx->pc = 0x1AD72Cu;
            goto label_1ad72c;
        }
    }
    ctx->pc = 0x1AD6C4u;
label_1ad6c4:
    // 0x1ad6c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ad6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ad6c8:
    // 0x1ad6c8: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
label_1ad6cc:
    if (ctx->pc == 0x1AD6CCu) {
        ctx->pc = 0x1AD6D0u;
        goto label_1ad6d0;
    }
    ctx->pc = 0x1AD6C8u;
    {
        const bool branch_taken_0x1ad6c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ad6c8) {
            ctx->pc = 0x1AD72Cu;
            goto label_1ad72c;
        }
    }
    ctx->pc = 0x1AD6D0u;
label_1ad6d0:
    // 0x1ad6d0: 0x12800016  beqz        $s4, . + 4 + (0x16 << 2)
label_1ad6d4:
    if (ctx->pc == 0x1AD6D4u) {
        ctx->pc = 0x1AD6D8u;
        goto label_1ad6d8;
    }
    ctx->pc = 0x1AD6D0u;
    {
        const bool branch_taken_0x1ad6d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad6d0) {
            ctx->pc = 0x1AD72Cu;
            goto label_1ad72c;
        }
    }
    ctx->pc = 0x1AD6D8u;
label_1ad6d8:
    // 0x1ad6d8: 0xc06bf8c  jal         func_1AFE30
label_1ad6dc:
    if (ctx->pc == 0x1AD6DCu) {
        ctx->pc = 0x1AD6E0u;
        goto label_1ad6e0;
    }
    ctx->pc = 0x1AD6D8u;
    SET_GPR_U32(ctx, 31, 0x1AD6E0u);
    ctx->pc = 0x1AFE30u;
    if (runtime->hasFunction(0x1AFE30u)) {
        auto targetFn = runtime->lookupFunction(0x1AFE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD6E0u; }
        if (ctx->pc != 0x1AD6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditDataSave__Fv_0x1afe30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD6E0u; }
        if (ctx->pc != 0x1AD6E0u) { return; }
    }
    ctx->pc = 0x1AD6E0u;
label_1ad6e0:
    // 0x1ad6e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ad6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ad6e4:
    // 0x1ad6e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ad6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ad6e8:
    // 0x1ad6e8: 0xaf828c7c  sw          $v0, -0x7384($gp)
    ctx->pc = 0x1ad6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937724), GPR_U32(ctx, 2));
label_1ad6ec:
    // 0x1ad6ec: 0x8f8280f0  lw          $v0, -0x7F10($gp)
    ctx->pc = 0x1ad6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1ad6f0:
    // 0x1ad6f0: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x1ad6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_1ad6f4:
    // 0x1ad6f4: 0xc0b6200  jal         func_2D8800
label_1ad6f8:
    if (ctx->pc == 0x1AD6F8u) {
        ctx->pc = 0x1AD6F8u;
            // 0x1ad6f8: 0xaf808ca0  sw          $zero, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 0));
        ctx->pc = 0x1AD6FCu;
        goto label_1ad6fc;
    }
    ctx->pc = 0x1AD6F4u;
    SET_GPR_U32(ctx, 31, 0x1AD6FCu);
    ctx->pc = 0x1AD6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD6F4u;
            // 0x1ad6f8: 0xaf808ca0  sw          $zero, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8800u;
    if (runtime->hasFunction(0x2D8800u)) {
        auto targetFn = runtime->lookupFunction(0x2D8800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD6FCu; }
        if (ctx->pc != 0x1AD6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditModeControlLock__Fv_0x2d8800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD6FCu; }
        if (ctx->pc != 0x1AD6FCu) { return; }
    }
    ctx->pc = 0x1AD6FCu;
label_1ad6fc:
    // 0x1ad6fc: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_1ad700:
    if (ctx->pc == 0x1AD700u) {
        ctx->pc = 0x1AD700u;
            // 0x1ad700: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x1AD704u;
        goto label_1ad704;
    }
    ctx->pc = 0x1AD6FCu;
    {
        const bool branch_taken_0x1ad6fc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD6FCu;
            // 0x1ad700: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad6fc) {
            ctx->pc = 0x1AD714u;
            goto label_1ad714;
        }
    }
    ctx->pc = 0x1AD704u;
label_1ad704:
    // 0x1ad704: 0x8f8280f0  lw          $v0, -0x7F10($gp)
    ctx->pc = 0x1ad704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1ad708:
    // 0x1ad708: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ad708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ad70c:
    // 0x1ad70c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ad710:
    if (ctx->pc == 0x1AD710u) {
        ctx->pc = 0x1AD710u;
            // 0x1ad710: 0xac430058  sw          $v1, 0x58($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
        ctx->pc = 0x1AD714u;
        goto label_1ad714;
    }
    ctx->pc = 0x1AD70Cu;
    {
        const bool branch_taken_0x1ad70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD70Cu;
            // 0x1ad710: 0xac430058  sw          $v1, 0x58($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad70c) {
            ctx->pc = 0x1AD72Cu;
            goto label_1ad72c;
        }
    }
    ctx->pc = 0x1AD714u;
label_1ad714:
    // 0x1ad714: 0xc0b62f4  jal         func_2D8BD0
label_1ad718:
    if (ctx->pc == 0x1AD718u) {
        ctx->pc = 0x1AD71Cu;
        goto label_1ad71c;
    }
    ctx->pc = 0x1AD714u;
    SET_GPR_U32(ctx, 31, 0x1AD71Cu);
    ctx->pc = 0x2D8BD0u;
    if (runtime->hasFunction(0x2D8BD0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD71Cu; }
        if (ctx->pc != 0x1AD71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditPreMenuAnime__Fi_0x2d8bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD71Cu; }
        if (ctx->pc != 0x1AD71Cu) { return; }
    }
    ctx->pc = 0x1AD71Cu;
label_1ad71c:
    // 0x1ad71c: 0xc0b6468  jal         func_2D91A0
label_1ad720:
    if (ctx->pc == 0x1AD720u) {
        ctx->pc = 0x1AD724u;
        goto label_1ad724;
    }
    ctx->pc = 0x1AD71Cu;
    SET_GPR_U32(ctx, 31, 0x1AD724u);
    ctx->pc = 0x2D91A0u;
    if (runtime->hasFunction(0x2D91A0u)) {
        auto targetFn = runtime->lookupFunction(0x2D91A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD724u; }
        if (ctx->pc != 0x1AD724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSelPartsInfoID__Fv_0x2d91a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD724u; }
        if (ctx->pc != 0x1AD724u) { return; }
    }
    ctx->pc = 0x1AD724u;
label_1ad724:
    // 0x1ad724: 0x8f8380f0  lw          $v1, -0x7F10($gp)
    ctx->pc = 0x1ad724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1ad728:
    // 0x1ad728: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x1ad728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
label_1ad72c:
    // 0x1ad72c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1ad730:
    if (ctx->pc == 0x1AD730u) {
        ctx->pc = 0x1AD734u;
        goto label_1ad734;
    }
    ctx->pc = 0x1AD72Cu;
    {
        const bool branch_taken_0x1ad72c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad72c) {
            ctx->pc = 0x1AD740u;
            goto label_1ad740;
        }
    }
    ctx->pc = 0x1AD734u;
label_1ad734:
    // 0x1ad734: 0x8f828c90  lw          $v0, -0x7370($gp)
    ctx->pc = 0x1ad734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937744)));
label_1ad738:
    // 0x1ad738: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1ad738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1ad73c:
    // 0x1ad73c: 0xaf828c90  sw          $v0, -0x7370($gp)
    ctx->pc = 0x1ad73cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937744), GPR_U32(ctx, 2));
label_1ad740:
    // 0x1ad740: 0xc050e88  jal         func_143A20
label_1ad744:
    if (ctx->pc == 0x1AD744u) {
        ctx->pc = 0x1AD748u;
        goto label_1ad748;
    }
    ctx->pc = 0x1AD740u;
    SET_GPR_U32(ctx, 31, 0x1AD748u);
    ctx->pc = 0x143A20u;
    if (runtime->hasFunction(0x143A20u)) {
        auto targetFn = runtime->lookupFunction(0x143A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD748u; }
        if (ctx->pc != 0x1AD748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgFlushRenderInfo__Fv_0x143a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD748u; }
        if (ctx->pc != 0x1AD748u) { return; }
    }
    ctx->pc = 0x1AD748u;
label_1ad748:
    // 0x1ad748: 0x8f858cb0  lw          $a1, -0x7350($gp)
    ctx->pc = 0x1ad748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ad74c:
    // 0x1ad74c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ad74cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1ad750:
    // 0x1ad750: 0xc0bc2d0  jal         func_2F0B40
label_1ad754:
    if (ctx->pc == 0x1AD754u) {
        ctx->pc = 0x1AD754u;
            // 0x1ad754: 0x2484ede0  addiu       $a0, $a0, -0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962656));
        ctx->pc = 0x1AD758u;
        goto label_1ad758;
    }
    ctx->pc = 0x1AD750u;
    SET_GPR_U32(ctx, 31, 0x1AD758u);
    ctx->pc = 0x1AD754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD750u;
            // 0x1ad754: 0x2484ede0  addiu       $a0, $a0, -0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0B40u;
    if (runtime->hasFunction(0x2F0B40u)) {
        auto targetFn = runtime->lookupFunction(0x2F0B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD758u; }
        if (ctx->pc != 0x1AD758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__10CEditEventFP6CScene_0x2f0b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD758u; }
        if (ctx->pc != 0x1AD758u) { return; }
    }
    ctx->pc = 0x1AD758u;
label_1ad758:
    // 0x1ad758: 0xc06b8f4  jal         func_1AE3D0
label_1ad75c:
    if (ctx->pc == 0x1AD75Cu) {
        ctx->pc = 0x1AD760u;
        goto label_1ad760;
    }
    ctx->pc = 0x1AD758u;
    SET_GPR_U32(ctx, 31, 0x1AD760u);
    ctx->pc = 0x1AE3D0u;
    if (runtime->hasFunction(0x1AE3D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AE3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD760u; }
        if (ctx->pc != 0x1AD760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditDraw__Fv_0x1ae3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD760u; }
        if (ctx->pc != 0x1AD760u) { return; }
    }
    ctx->pc = 0x1AD760u;
label_1ad760:
    // 0x1ad760: 0x8f828ac8  lw          $v0, -0x7538($gp)
    ctx->pc = 0x1ad760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
label_1ad764:
    // 0x1ad764: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_1ad768:
    if (ctx->pc == 0x1AD768u) {
        ctx->pc = 0x1AD768u;
            // 0x1ad768: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD76Cu;
        goto label_1ad76c;
    }
    ctx->pc = 0x1AD764u;
    {
        const bool branch_taken_0x1ad764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD764u;
            // 0x1ad768: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad764) {
            ctx->pc = 0x1AD804u;
            goto label_1ad804;
        }
    }
    ctx->pc = 0x1AD76Cu;
label_1ad76c:
    // 0x1ad76c: 0xc069e30  jal         func_1A78C0
label_1ad770:
    if (ctx->pc == 0x1AD770u) {
        ctx->pc = 0x1AD774u;
        goto label_1ad774;
    }
    ctx->pc = 0x1AD76Cu;
    SET_GPR_U32(ctx, 31, 0x1AD774u);
    ctx->pc = 0x1A78C0u;
    if (runtime->hasFunction(0x1A78C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A78C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD774u; }
        if (ctx->pc != 0x1AD774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditDebugMode__Fv_0x1a78c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD774u; }
        if (ctx->pc != 0x1AD774u) { return; }
    }
    ctx->pc = 0x1AD774u;
label_1ad774:
    // 0x1ad774: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1ad778:
    if (ctx->pc == 0x1AD778u) {
        ctx->pc = 0x1AD77Cu;
        goto label_1ad77c;
    }
    ctx->pc = 0x1AD774u;
    {
        const bool branch_taken_0x1ad774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad774) {
            ctx->pc = 0x1AD7B4u;
            goto label_1ad7b4;
        }
    }
    ctx->pc = 0x1AD77Cu;
label_1ad77c:
    // 0x1ad77c: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ad77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ad780:
    // 0x1ad780: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1ad780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1ad784:
    // 0x1ad784: 0xc069e4c  jal         func_1A7930
label_1ad788:
    if (ctx->pc == 0x1AD788u) {
        ctx->pc = 0x1AD788u;
            // 0x1ad788: 0x24a5ef30  addiu       $a1, $a1, -0x10D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962992));
        ctx->pc = 0x1AD78Cu;
        goto label_1ad78c;
    }
    ctx->pc = 0x1AD784u;
    SET_GPR_U32(ctx, 31, 0x1AD78Cu);
    ctx->pc = 0x1AD788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD784u;
            // 0x1ad788: 0x24a5ef30  addiu       $a1, $a1, -0x10D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7930u;
    if (runtime->hasFunction(0x1A7930u)) {
        auto targetFn = runtime->lookupFunction(0x1A7930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD78Cu; }
        if (ctx->pc != 0x1AD78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditDebugLoop__FP6CSceneP13EditDebugInfo_0x1a7930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD78Cu; }
        if (ctx->pc != 0x1AD78Cu) { return; }
    }
    ctx->pc = 0x1AD78Cu;
label_1ad78c:
    // 0x1ad78c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1ad790:
    if (ctx->pc == 0x1AD790u) {
        ctx->pc = 0x1AD794u;
        goto label_1ad794;
    }
    ctx->pc = 0x1AD78Cu;
    {
        const bool branch_taken_0x1ad78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad78c) {
            ctx->pc = 0x1AD7B4u;
            goto label_1ad7b4;
        }
    }
    ctx->pc = 0x1AD794u;
label_1ad794:
    // 0x1ad794: 0x8f838ce0  lw          $v1, -0x7320($gp)
    ctx->pc = 0x1ad794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937824)));
label_1ad798:
    // 0x1ad798: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ad798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ad79c:
    // 0x1ad79c: 0xaf838c80  sw          $v1, -0x7380($gp)
    ctx->pc = 0x1ad79cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937728), GPR_U32(ctx, 3));
label_1ad7a0:
    // 0x1ad7a0: 0x8f838c80  lw          $v1, -0x7380($gp)
    ctx->pc = 0x1ad7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1ad7a4:
    // 0x1ad7a4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1ad7a8:
    if (ctx->pc == 0x1AD7A8u) {
        ctx->pc = 0x1AD7A8u;
            // 0x1ad7a8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1AD7ACu;
        goto label_1ad7ac;
    }
    ctx->pc = 0x1AD7A4u;
    {
        const bool branch_taken_0x1ad7a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AD7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD7A4u;
            // 0x1ad7a8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad7a4) {
            ctx->pc = 0x1AD7B4u;
            goto label_1ad7b4;
        }
    }
    ctx->pc = 0x1AD7ACu;
label_1ad7ac:
    // 0x1ad7ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad7b0:
    // 0x1ad7b0: 0xaf828c80  sw          $v0, -0x7380($gp)
    ctx->pc = 0x1ad7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937728), GPR_U32(ctx, 2));
label_1ad7b4:
    // 0x1ad7b4: 0x8f838c80  lw          $v1, -0x7380($gp)
    ctx->pc = 0x1ad7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1ad7b8:
    // 0x1ad7b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ad7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ad7bc:
    // 0x1ad7bc: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_1ad7c0:
    if (ctx->pc == 0x1AD7C0u) {
        ctx->pc = 0x1AD7C0u;
            // 0x1ad7c0: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1AD7C4u;
        goto label_1ad7c4;
    }
    ctx->pc = 0x1AD7BCu;
    {
        const bool branch_taken_0x1ad7bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AD7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD7BCu;
            // 0x1ad7c0: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad7bc) {
            ctx->pc = 0x1AD7FCu;
            goto label_1ad7fc;
        }
    }
    ctx->pc = 0x1AD7C4u;
label_1ad7c4:
    // 0x1ad7c4: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x1ad7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1ad7c8:
    // 0x1ad7c8: 0xc052d0c  jal         func_14B430
label_1ad7cc:
    if (ctx->pc == 0x1AD7CCu) {
        ctx->pc = 0x1AD7CCu;
            // 0x1ad7cc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1AD7D0u;
        goto label_1ad7d0;
    }
    ctx->pc = 0x1AD7C8u;
    SET_GPR_U32(ctx, 31, 0x1AD7D0u);
    ctx->pc = 0x1AD7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD7C8u;
            // 0x1ad7cc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD7D0u; }
        if (ctx->pc != 0x1AD7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD7D0u; }
        if (ctx->pc != 0x1AD7D0u) { return; }
    }
    ctx->pc = 0x1AD7D0u;
label_1ad7d0:
    // 0x1ad7d0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1ad7d4:
    if (ctx->pc == 0x1AD7D4u) {
        ctx->pc = 0x1AD7D8u;
        goto label_1ad7d8;
    }
    ctx->pc = 0x1AD7D0u;
    {
        const bool branch_taken_0x1ad7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad7d0) {
            ctx->pc = 0x1AD7FCu;
            goto label_1ad7fc;
        }
    }
    ctx->pc = 0x1AD7D8u;
label_1ad7d8:
    // 0x1ad7d8: 0x16800008  bnez        $s4, . + 4 + (0x8 << 2)
label_1ad7dc:
    if (ctx->pc == 0x1AD7DCu) {
        ctx->pc = 0x1AD7DCu;
            // 0x1ad7dc: 0x3c0501ea  lui         $a1, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1AD7E0u;
        goto label_1ad7e0;
    }
    ctx->pc = 0x1AD7D8u;
    {
        const bool branch_taken_0x1ad7d8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD7D8u;
            // 0x1ad7dc: 0x3c0501ea  lui         $a1, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad7d8) {
            ctx->pc = 0x1AD7FCu;
            goto label_1ad7fc;
        }
    }
    ctx->pc = 0x1AD7E0u;
label_1ad7e0:
    // 0x1ad7e0: 0x240400d6  addiu       $a0, $zero, 0xD6
    ctx->pc = 0x1ad7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
label_1ad7e4:
    // 0x1ad7e4: 0xc069e34  jal         func_1A78D0
label_1ad7e8:
    if (ctx->pc == 0x1AD7E8u) {
        ctx->pc = 0x1AD7E8u;
            // 0x1ad7e8: 0x24a5e990  addiu       $a1, $a1, -0x1670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961552));
        ctx->pc = 0x1AD7ECu;
        goto label_1ad7ec;
    }
    ctx->pc = 0x1AD7E4u;
    SET_GPR_U32(ctx, 31, 0x1AD7ECu);
    ctx->pc = 0x1AD7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD7E4u;
            // 0x1ad7e8: 0x24a5e990  addiu       $a1, $a1, -0x1670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A78D0u;
    if (runtime->hasFunction(0x1A78D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A78D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD7ECu; }
        if (ctx->pc != 0x1AD7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditDebugStart__FiP9mgCMemory_0x1a78d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD7ECu; }
        if (ctx->pc != 0x1AD7ECu) { return; }
    }
    ctx->pc = 0x1AD7ECu;
label_1ad7ec:
    // 0x1ad7ec: 0x8f838c80  lw          $v1, -0x7380($gp)
    ctx->pc = 0x1ad7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1ad7f0:
    // 0x1ad7f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ad7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ad7f4:
    // 0x1ad7f4: 0xaf838ce0  sw          $v1, -0x7320($gp)
    ctx->pc = 0x1ad7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937824), GPR_U32(ctx, 3));
label_1ad7f8:
    // 0x1ad7f8: 0xaf828c80  sw          $v0, -0x7380($gp)
    ctx->pc = 0x1ad7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937728), GPR_U32(ctx, 2));
label_1ad7fc:
    // 0x1ad7fc: 0xc06a110  jal         func_1A8440
label_1ad800:
    if (ctx->pc == 0x1AD800u) {
        ctx->pc = 0x1AD800u;
            // 0x1ad800: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AD804u;
        goto label_1ad804;
    }
    ctx->pc = 0x1AD7FCu;
    SET_GPR_U32(ctx, 31, 0x1AD804u);
    ctx->pc = 0x1AD800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD7FCu;
            // 0x1ad800: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8440u;
    if (runtime->hasFunction(0x1A8440u)) {
        auto targetFn = runtime->lookupFunction(0x1A8440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD804u; }
        if (ctx->pc != 0x1AD804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LightingEdit__FP6CScene_0x1a8440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD804u; }
        if (ctx->pc != 0x1AD804u) { return; }
    }
    ctx->pc = 0x1AD804u;
label_1ad804:
    // 0x1ad804: 0x8f828c98  lw          $v0, -0x7368($gp)
    ctx->pc = 0x1ad804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937752)));
label_1ad808:
    // 0x1ad808: 0x14400123  bnez        $v0, . + 4 + (0x123 << 2)
label_1ad80c:
    if (ctx->pc == 0x1AD80Cu) {
        ctx->pc = 0x1AD810u;
        goto label_1ad810;
    }
    ctx->pc = 0x1AD808u;
    {
        const bool branch_taken_0x1ad808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad808) {
            ctx->pc = 0x1ADC98u;
            goto label_1adc98;
        }
    }
    ctx->pc = 0x1AD810u;
label_1ad810:
    // 0x1ad810: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1ad810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1ad814:
    // 0x1ad814: 0x144000c7  bnez        $v0, . + 4 + (0xC7 << 2)
label_1ad818:
    if (ctx->pc == 0x1AD818u) {
        ctx->pc = 0x1AD81Cu;
        goto label_1ad81c;
    }
    ctx->pc = 0x1AD814u;
    {
        const bool branch_taken_0x1ad814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad814) {
            ctx->pc = 0x1ADB34u;
            goto label_1adb34;
        }
    }
    ctx->pc = 0x1AD81Cu;
label_1ad81c:
    // 0x1ad81c: 0xc06a6f8  jal         func_1A9BE0
label_1ad820:
    if (ctx->pc == 0x1AD820u) {
        ctx->pc = 0x1AD824u;
        goto label_1ad824;
    }
    ctx->pc = 0x1AD81Cu;
    SET_GPR_U32(ctx, 31, 0x1AD824u);
    ctx->pc = 0x1A9BE0u;
    if (runtime->hasFunction(0x1A9BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1A9BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD824u; }
        if (ctx->pc != 0x1AD824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowEditModeChg__Fv_0x1a9be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD824u; }
        if (ctx->pc != 0x1AD824u) { return; }
    }
    ctx->pc = 0x1AD824u;
label_1ad824:
    // 0x1ad824: 0x144000c3  bnez        $v0, . + 4 + (0xC3 << 2)
label_1ad828:
    if (ctx->pc == 0x1AD828u) {
        ctx->pc = 0x1AD82Cu;
        goto label_1ad82c;
    }
    ctx->pc = 0x1AD824u;
    {
        const bool branch_taken_0x1ad824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad824) {
            ctx->pc = 0x1ADB34u;
            goto label_1adb34;
        }
    }
    ctx->pc = 0x1AD82Cu;
label_1ad82c:
    // 0x1ad82c: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ad82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ad830:
    // 0x1ad830: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x1ad830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_1ad834:
    // 0x1ad834: 0x8c228074  lw          $v0, -0x7F8C($at)
    ctx->pc = 0x1ad834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934644)));
label_1ad838:
    // 0x1ad838: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1ad838u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad83c:
    // 0x1ad83c: 0x8c852e50  lw          $a1, 0x2E50($a0)
    ctx->pc = 0x1ad83cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
label_1ad840:
    // 0x1ad840: 0xc0a0ed8  jal         func_283B60
label_1ad844:
    if (ctx->pc == 0x1AD844u) {
        ctx->pc = 0x1AD844u;
            // 0x1ad844: 0x2a82a  slt         $s5, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x1AD848u;
        goto label_1ad848;
    }
    ctx->pc = 0x1AD840u;
    SET_GPR_U32(ctx, 31, 0x1AD848u);
    ctx->pc = 0x1AD844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD840u;
            // 0x1ad844: 0x2a82a  slt         $s5, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD848u; }
        if (ctx->pc != 0x1AD848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD848u; }
        if (ctx->pc != 0x1AD848u) { return; }
    }
    ctx->pc = 0x1AD848u;
label_1ad848:
    // 0x1ad848: 0x16a00011  bnez        $s5, . + 4 + (0x11 << 2)
label_1ad84c:
    if (ctx->pc == 0x1AD84Cu) {
        ctx->pc = 0x1AD84Cu;
            // 0x1ad84c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD850u;
        goto label_1ad850;
    }
    ctx->pc = 0x1AD848u;
    {
        const bool branch_taken_0x1ad848 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD848u;
            // 0x1ad84c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad848) {
            ctx->pc = 0x1AD890u;
            goto label_1ad890;
        }
    }
    ctx->pc = 0x1AD850u;
label_1ad850:
    // 0x1ad850: 0xc064220  jal         func_190880
label_1ad854:
    if (ctx->pc == 0x1AD854u) {
        ctx->pc = 0x1AD858u;
        goto label_1ad858;
    }
    ctx->pc = 0x1AD850u;
    SET_GPR_U32(ctx, 31, 0x1AD858u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD858u; }
        if (ctx->pc != 0x1AD858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD858u; }
        if (ctx->pc != 0x1AD858u) { return; }
    }
    ctx->pc = 0x1AD858u;
label_1ad858:
    // 0x1ad858: 0xc0bda00  jal         func_2F6800
label_1ad85c:
    if (ctx->pc == 0x1AD85Cu) {
        ctx->pc = 0x1AD85Cu;
            // 0x1ad85c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD860u;
        goto label_1ad860;
    }
    ctx->pc = 0x1AD858u;
    SET_GPR_U32(ctx, 31, 0x1AD860u);
    ctx->pc = 0x1AD85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD858u;
            // 0x1ad85c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6800u;
    if (runtime->hasFunction(0x2F6800u)) {
        auto targetFn = runtime->lookupFunction(0x2F6800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD860u; }
        if (ctx->pc != 0x1AD860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitCtrl__9CSaveDataFv_0x2f6800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD860u; }
        if (ctx->pc != 0x1AD860u) { return; }
    }
    ctx->pc = 0x1AD860u;
label_1ad860:
    // 0x1ad860: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1ad860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1ad864:
    // 0x1ad864: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1ad868:
    if (ctx->pc == 0x1AD868u) {
        ctx->pc = 0x1AD86Cu;
        goto label_1ad86c;
    }
    ctx->pc = 0x1AD864u;
    {
        const bool branch_taken_0x1ad864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad864) {
            ctx->pc = 0x1AD870u;
            goto label_1ad870;
        }
    }
    ctx->pc = 0x1AD86Cu;
label_1ad86c:
    // 0x1ad86c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1ad86cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad870:
    // 0x1ad870: 0xc0a0f80  jal         func_283E00
label_1ad874:
    if (ctx->pc == 0x1AD874u) {
        ctx->pc = 0x1AD874u;
            // 0x1ad874: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AD878u;
        goto label_1ad878;
    }
    ctx->pc = 0x1AD870u;
    SET_GPR_U32(ctx, 31, 0x1AD878u);
    ctx->pc = 0x1AD874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD870u;
            // 0x1ad874: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283E00u;
    if (runtime->hasFunction(0x283E00u)) {
        auto targetFn = runtime->lookupFunction(0x283E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD878u; }
        if (ctx->pc != 0x1AD878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainMapNo__6CSceneFv_0x283e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD878u; }
        if (ctx->pc != 0x1AD878u) { return; }
    }
    ctx->pc = 0x1AD878u;
label_1ad878:
    // 0x1ad878: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1ad87c:
    if (ctx->pc == 0x1AD87Cu) {
        ctx->pc = 0x1AD880u;
        goto label_1ad880;
    }
    ctx->pc = 0x1AD878u;
    {
        const bool branch_taken_0x1ad878 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ad878) {
            ctx->pc = 0x1AD88Cu;
            goto label_1ad88c;
        }
    }
    ctx->pc = 0x1AD880u;
label_1ad880:
    // 0x1ad880: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x1ad880u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_1ad884:
    // 0x1ad884: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1ad888:
    if (ctx->pc == 0x1AD888u) {
        ctx->pc = 0x1AD88Cu;
        goto label_1ad88c;
    }
    ctx->pc = 0x1AD884u;
    {
        const bool branch_taken_0x1ad884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad884) {
            ctx->pc = 0x1AD890u;
            goto label_1ad890;
        }
    }
    ctx->pc = 0x1AD88Cu;
label_1ad88c:
    // 0x1ad88c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1ad88cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad890:
    // 0x1ad890: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1ad890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1ad894:
    // 0x1ad894: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x1ad894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_1ad898:
    // 0x1ad898: 0xc0bb538  jal         func_2ED4E0
label_1ad89c:
    if (ctx->pc == 0x1AD89Cu) {
        ctx->pc = 0x1AD89Cu;
            // 0x1ad89c: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->pc = 0x1AD8A0u;
        goto label_1ad8a0;
    }
    ctx->pc = 0x1AD898u;
    SET_GPR_U32(ctx, 31, 0x1AD8A0u);
    ctx->pc = 0x1AD89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD898u;
            // 0x1ad89c: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD8A0u; }
        if (ctx->pc != 0x1AD8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD8A0u; }
        if (ctx->pc != 0x1AD8A0u) { return; }
    }
    ctx->pc = 0x1AD8A0u;
label_1ad8a0:
    // 0x1ad8a0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1ad8a4:
    if (ctx->pc == 0x1AD8A4u) {
        ctx->pc = 0x1AD8A8u;
        goto label_1ad8a8;
    }
    ctx->pc = 0x1AD8A0u;
    {
        const bool branch_taken_0x1ad8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad8a0) {
            ctx->pc = 0x1AD8ACu;
            goto label_1ad8ac;
        }
    }
    ctx->pc = 0x1AD8A8u;
label_1ad8a8:
    // 0x1ad8a8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1ad8a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad8ac:
    // 0x1ad8ac: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_1ad8b0:
    if (ctx->pc == 0x1AD8B0u) {
        ctx->pc = 0x1AD8B4u;
        goto label_1ad8b4;
    }
    ctx->pc = 0x1AD8ACu;
    {
        const bool branch_taken_0x1ad8ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad8ac) {
            ctx->pc = 0x1AD8B8u;
            goto label_1ad8b8;
        }
    }
    ctx->pc = 0x1AD8B4u;
label_1ad8b4:
    // 0x1ad8b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ad8b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad8b8:
    // 0x1ad8b8: 0xc0c0fc8  jal         func_303F20
label_1ad8bc:
    if (ctx->pc == 0x1AD8BCu) {
        ctx->pc = 0x1AD8C0u;
        goto label_1ad8c0;
    }
    ctx->pc = 0x1AD8B8u;
    SET_GPR_U32(ctx, 31, 0x1AD8C0u);
    ctx->pc = 0x303F20u;
    if (runtime->hasFunction(0x303F20u)) {
        auto targetFn = runtime->lookupFunction(0x303F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD8C0u; }
        if (ctx->pc != 0x1AD8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameRunning__Fv_0x303f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD8C0u; }
        if (ctx->pc != 0x1AD8C0u) { return; }
    }
    ctx->pc = 0x1AD8C0u;
label_1ad8c0:
    // 0x1ad8c0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1ad8c4:
    if (ctx->pc == 0x1AD8C4u) {
        ctx->pc = 0x1AD8C8u;
        goto label_1ad8c8;
    }
    ctx->pc = 0x1AD8C0u;
    {
        const bool branch_taken_0x1ad8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad8c0) {
            ctx->pc = 0x1AD8CCu;
            goto label_1ad8cc;
        }
    }
    ctx->pc = 0x1AD8C8u;
label_1ad8c8:
    // 0x1ad8c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ad8c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad8cc:
    // 0x1ad8cc: 0x12c00099  beqz        $s6, . + 4 + (0x99 << 2)
label_1ad8d0:
    if (ctx->pc == 0x1AD8D0u) {
        ctx->pc = 0x1AD8D4u;
        goto label_1ad8d4;
    }
    ctx->pc = 0x1AD8CCu;
    {
        const bool branch_taken_0x1ad8cc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad8cc) {
            ctx->pc = 0x1ADB34u;
            goto label_1adb34;
        }
    }
    ctx->pc = 0x1AD8D4u;
label_1ad8d4:
    // 0x1ad8d4: 0x12800097  beqz        $s4, . + 4 + (0x97 << 2)
label_1ad8d8:
    if (ctx->pc == 0x1AD8D8u) {
        ctx->pc = 0x1AD8DCu;
        goto label_1ad8dc;
    }
    ctx->pc = 0x1AD8D4u;
    {
        const bool branch_taken_0x1ad8d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad8d4) {
            ctx->pc = 0x1ADB34u;
            goto label_1adb34;
        }
    }
    ctx->pc = 0x1AD8DCu;
label_1ad8dc:
    // 0x1ad8dc: 0x8f838c80  lw          $v1, -0x7380($gp)
    ctx->pc = 0x1ad8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1ad8e0:
    // 0x1ad8e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad8e4:
    // 0x1ad8e4: 0x14620093  bne         $v1, $v0, . + 4 + (0x93 << 2)
label_1ad8e8:
    if (ctx->pc == 0x1AD8E8u) {
        ctx->pc = 0x1AD8ECu;
        goto label_1ad8ec;
    }
    ctx->pc = 0x1AD8E4u;
    {
        const bool branch_taken_0x1ad8e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ad8e4) {
            ctx->pc = 0x1ADB34u;
            goto label_1adb34;
        }
    }
    ctx->pc = 0x1AD8ECu;
label_1ad8ec:
    // 0x1ad8ec: 0x12600091  beqz        $s3, . + 4 + (0x91 << 2)
label_1ad8f0:
    if (ctx->pc == 0x1AD8F0u) {
        ctx->pc = 0x1AD8F4u;
        goto label_1ad8f4;
    }
    ctx->pc = 0x1AD8ECu;
    {
        const bool branch_taken_0x1ad8ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad8ec) {
            ctx->pc = 0x1ADB34u;
            goto label_1adb34;
        }
    }
    ctx->pc = 0x1AD8F4u;
label_1ad8f4:
    // 0x1ad8f4: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x1ad8f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1ad8f8:
    // 0x1ad8f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ad8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ad8fc:
    // 0x1ad8fc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1ad8fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1ad900:
    // 0x1ad900: 0x320f809  jalr        $t9
label_1ad904:
    if (ctx->pc == 0x1AD904u) {
        ctx->pc = 0x1AD904u;
            // 0x1ad904: 0x27a503e0  addiu       $a1, $sp, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
        ctx->pc = 0x1AD908u;
        goto label_1ad908;
    }
    ctx->pc = 0x1AD900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AD908u);
        ctx->pc = 0x1AD904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD900u;
            // 0x1ad904: 0x27a503e0  addiu       $a1, $sp, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AD908u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AD908u; }
            if (ctx->pc != 0x1AD908u) { return; }
        }
        }
    }
    ctx->pc = 0x1AD908u;
label_1ad908:
    // 0x1ad908: 0x8f838c7c  lw          $v1, -0x7384($gp)
    ctx->pc = 0x1ad908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937724)));
label_1ad90c:
    // 0x1ad90c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad910:
    // 0x1ad910: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
label_1ad914:
    if (ctx->pc == 0x1AD914u) {
        ctx->pc = 0x1AD914u;
            // 0x1ad914: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1AD918u;
        goto label_1ad918;
    }
    ctx->pc = 0x1AD910u;
    {
        const bool branch_taken_0x1ad910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AD914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD910u;
            // 0x1ad914: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad910) {
            ctx->pc = 0x1AD994u;
            goto label_1ad994;
        }
    }
    ctx->pc = 0x1AD918u;
label_1ad918:
    // 0x1ad918: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ad918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ad91c:
    // 0x1ad91c: 0xc0b7668  jal         func_2DD9A0
label_1ad920:
    if (ctx->pc == 0x1AD920u) {
        ctx->pc = 0x1AD920u;
            // 0x1ad920: 0x27a503e0  addiu       $a1, $sp, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
        ctx->pc = 0x1AD924u;
        goto label_1ad924;
    }
    ctx->pc = 0x1AD91Cu;
    SET_GPR_U32(ctx, 31, 0x1AD924u);
    ctx->pc = 0x1AD920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD91Cu;
            // 0x1ad920: 0x27a503e0  addiu       $a1, $sp, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DD9A0u;
    if (runtime->hasFunction(0x2DD9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DD9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD924u; }
        if (ctx->pc != 0x1AD924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckWalkToEdit__FP6CScenePf_0x2dd9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD924u; }
        if (ctx->pc != 0x1AD924u) { return; }
    }
    ctx->pc = 0x1AD924u;
label_1ad924:
    // 0x1ad924: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1ad928:
    if (ctx->pc == 0x1AD928u) {
        ctx->pc = 0x1AD92Cu;
        goto label_1ad92c;
    }
    ctx->pc = 0x1AD924u;
    {
        const bool branch_taken_0x1ad924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad924) {
            ctx->pc = 0x1AD934u;
            goto label_1ad934;
        }
    }
    ctx->pc = 0x1AD92Cu;
label_1ad92c:
    // 0x1ad92c: 0x12a00081  beqz        $s5, . + 4 + (0x81 << 2)
label_1ad930:
    if (ctx->pc == 0x1AD930u) {
        ctx->pc = 0x1AD934u;
        goto label_1ad934;
    }
    ctx->pc = 0x1AD92Cu;
    {
        const bool branch_taken_0x1ad92c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad92c) {
            ctx->pc = 0x1ADB34u;
            goto label_1adb34;
        }
    }
    ctx->pc = 0x1AD934u;
label_1ad934:
    // 0x1ad934: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ad934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ad938:
    // 0x1ad938: 0xc0698d8  jal         func_1A6360
label_1ad93c:
    if (ctx->pc == 0x1AD93Cu) {
        ctx->pc = 0x1AD93Cu;
            // 0x1ad93c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD940u;
        goto label_1ad940;
    }
    ctx->pc = 0x1AD938u;
    SET_GPR_U32(ctx, 31, 0x1AD940u);
    ctx->pc = 0x1AD93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD938u;
            // 0x1ad93c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6360u;
    if (runtime->hasFunction(0x1A6360u)) {
        auto targetFn = runtime->lookupFunction(0x1A6360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD940u; }
        if (ctx->pc != 0x1AD940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetViewMode__FP6CScene_0x1a6360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD940u; }
        if (ctx->pc != 0x1AD940u) { return; }
    }
    ctx->pc = 0x1AD940u;
label_1ad940:
    // 0x1ad940: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ad940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ad944:
    // 0x1ad944: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ad944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ad948:
    // 0x1ad948: 0x8c822e54  lw          $v0, 0x2E54($a0)
    ctx->pc = 0x1ad948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
label_1ad94c:
    // 0x1ad94c: 0xac822e58  sw          $v0, 0x2E58($a0)
    ctx->pc = 0x1ad94cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11864), GPR_U32(ctx, 2));
label_1ad950:
    // 0x1ad950: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1ad950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ad954:
    // 0x1ad954: 0xac432e54  sw          $v1, 0x2E54($v0)
    ctx->pc = 0x1ad954u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11860), GPR_U32(ctx, 3));
label_1ad958:
    // 0x1ad958: 0xc0b64a4  jal         func_2D9290
label_1ad95c:
    if (ctx->pc == 0x1AD95Cu) {
        ctx->pc = 0x1AD95Cu;
            // 0x1ad95c: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AD960u;
        goto label_1ad960;
    }
    ctx->pc = 0x1AD958u;
    SET_GPR_U32(ctx, 31, 0x1AD960u);
    ctx->pc = 0x1AD95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD958u;
            // 0x1ad95c: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9290u;
    if (runtime->hasFunction(0x2D9290u)) {
        auto targetFn = runtime->lookupFunction(0x2D9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD960u; }
        if (ctx->pc != 0x1AD960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartEditMode__FP6CScene_0x2d9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD960u; }
        if (ctx->pc != 0x1AD960u) { return; }
    }
    ctx->pc = 0x1AD960u;
label_1ad960:
    // 0x1ad960: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ad960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ad964:
    // 0x1ad964: 0xc06c054  jal         func_1B0150
label_1ad968:
    if (ctx->pc == 0x1AD968u) {
        ctx->pc = 0x1AD968u;
            // 0x1ad968: 0xaf828c7c  sw          $v0, -0x7384($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937724), GPR_U32(ctx, 2));
        ctx->pc = 0x1AD96Cu;
        goto label_1ad96c;
    }
    ctx->pc = 0x1AD964u;
    SET_GPR_U32(ctx, 31, 0x1AD96Cu);
    ctx->pc = 0x1AD968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD964u;
            // 0x1ad968: 0xaf828c7c  sw          $v0, -0x7384($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937724), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0150u;
    if (runtime->hasFunction(0x1B0150u)) {
        auto targetFn = runtime->lookupFunction(0x1B0150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD96Cu; }
        if (ctx->pc != 0x1AD96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeepEditAnalyze__Fv_0x1b0150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD96Cu; }
        if (ctx->pc != 0x1AD96Cu) { return; }
    }
    ctx->pc = 0x1AD96Cu;
label_1ad96c:
    // 0x1ad96c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x1ad96cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1ad970:
    // 0x1ad970: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1ad970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1ad974:
    // 0x1ad974: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ad974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ad978:
    // 0x1ad978: 0x24a563f8  addiu       $a1, $a1, 0x63F8
    ctx->pc = 0x1ad978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25592));
label_1ad97c:
    // 0x1ad97c: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x1ad97cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_1ad980:
    // 0x1ad980: 0x320f809  jalr        $t9
label_1ad984:
    if (ctx->pc == 0x1AD984u) {
        ctx->pc = 0x1AD984u;
            // 0x1ad984: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD988u;
        goto label_1ad988;
    }
    ctx->pc = 0x1AD980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AD988u);
        ctx->pc = 0x1AD984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD980u;
            // 0x1ad984: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AD988u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AD988u; }
            if (ctx->pc != 0x1AD988u) { return; }
        }
        }
    }
    ctx->pc = 0x1AD988u;
label_1ad988:
    // 0x1ad988: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1ad988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ad98c:
    // 0x1ad98c: 0x10000069  b           . + 4 + (0x69 << 2)
label_1ad990:
    if (ctx->pc == 0x1AD990u) {
        ctx->pc = 0x1AD990u;
            // 0x1ad990: 0xac402f60  sw          $zero, 0x2F60($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12128), GPR_U32(ctx, 0));
        ctx->pc = 0x1AD994u;
        goto label_1ad994;
    }
    ctx->pc = 0x1AD98Cu;
    {
        const bool branch_taken_0x1ad98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD98Cu;
            // 0x1ad990: 0xac402f60  sw          $zero, 0x2F60($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad98c) {
            ctx->pc = 0x1ADB34u;
            goto label_1adb34;
        }
    }
    ctx->pc = 0x1AD994u;
label_1ad994:
    // 0x1ad994: 0x14620067  bne         $v1, $v0, . + 4 + (0x67 << 2)
label_1ad998:
    if (ctx->pc == 0x1AD998u) {
        ctx->pc = 0x1AD99Cu;
        goto label_1ad99c;
    }
    ctx->pc = 0x1AD994u;
    {
        const bool branch_taken_0x1ad994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ad994) {
            ctx->pc = 0x1ADB34u;
            goto label_1adb34;
        }
    }
    ctx->pc = 0x1AD99Cu;
label_1ad99c:
    // 0x1ad99c: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ad99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ad9a0:
    // 0x1ad9a0: 0xc0b76dc  jal         func_2DDB70
label_1ad9a4:
    if (ctx->pc == 0x1AD9A4u) {
        ctx->pc = 0x1AD9A4u;
            // 0x1ad9a4: 0x27a503f0  addiu       $a1, $sp, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
        ctx->pc = 0x1AD9A8u;
        goto label_1ad9a8;
    }
    ctx->pc = 0x1AD9A0u;
    SET_GPR_U32(ctx, 31, 0x1AD9A8u);
    ctx->pc = 0x1AD9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD9A0u;
            // 0x1ad9a4: 0x27a503f0  addiu       $a1, $sp, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DDB70u;
    if (runtime->hasFunction(0x2DDB70u)) {
        auto targetFn = runtime->lookupFunction(0x2DDB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD9A8u; }
        if (ctx->pc != 0x1AD9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEditToWalk__FP6CScenePf_0x2ddb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD9A8u; }
        if (ctx->pc != 0x1AD9A8u) { return; }
    }
    ctx->pc = 0x1AD9A8u;
label_1ad9a8:
    // 0x1ad9a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1ad9ac:
    if (ctx->pc == 0x1AD9ACu) {
        ctx->pc = 0x1AD9B0u;
        goto label_1ad9b0;
    }
    ctx->pc = 0x1AD9A8u;
    {
        const bool branch_taken_0x1ad9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad9a8) {
            ctx->pc = 0x1AD9B8u;
            goto label_1ad9b8;
        }
    }
    ctx->pc = 0x1AD9B0u;
label_1ad9b0:
    // 0x1ad9b0: 0x12a00060  beqz        $s5, . + 4 + (0x60 << 2)
label_1ad9b4:
    if (ctx->pc == 0x1AD9B4u) {
        ctx->pc = 0x1AD9B8u;
        goto label_1ad9b8;
    }
    ctx->pc = 0x1AD9B0u;
    {
        const bool branch_taken_0x1ad9b0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad9b0) {
            ctx->pc = 0x1ADB34u;
            goto label_1adb34;
        }
    }
    ctx->pc = 0x1AD9B8u;
label_1ad9b8:
    // 0x1ad9b8: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ad9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ad9bc:
    // 0x1ad9bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad9c0:
    // 0x1ad9c0: 0xaf828c7c  sw          $v0, -0x7384($gp)
    ctx->pc = 0x1ad9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937724), GPR_U32(ctx, 2));
label_1ad9c4:
    // 0x1ad9c4: 0x27a503f0  addiu       $a1, $sp, 0x3F0
    ctx->pc = 0x1ad9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
label_1ad9c8:
    // 0x1ad9c8: 0xc0b6504  jal         func_2D9410
label_1ad9cc:
    if (ctx->pc == 0x1AD9CCu) {
        ctx->pc = 0x1AD9CCu;
            // 0x1ad9cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD9D0u;
        goto label_1ad9d0;
    }
    ctx->pc = 0x1AD9C8u;
    SET_GPR_U32(ctx, 31, 0x1AD9D0u);
    ctx->pc = 0x1AD9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD9C8u;
            // 0x1ad9cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9410u;
    if (runtime->hasFunction(0x2D9410u)) {
        auto targetFn = runtime->lookupFunction(0x2D9410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD9D0u; }
        if (ctx->pc != 0x1AD9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndEditMode__FP6CScenePf_0x2d9410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD9D0u; }
        if (ctx->pc != 0x1AD9D0u) { return; }
    }
    ctx->pc = 0x1AD9D0u;
label_1ad9d0:
    // 0x1ad9d0: 0xc06908c  jal         func_1A4230
label_1ad9d4:
    if (ctx->pc == 0x1AD9D4u) {
        ctx->pc = 0x1AD9D4u;
            // 0x1ad9d4: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AD9D8u;
        goto label_1ad9d8;
    }
    ctx->pc = 0x1AD9D0u;
    SET_GPR_U32(ctx, 31, 0x1AD9D8u);
    ctx->pc = 0x1AD9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD9D0u;
            // 0x1ad9d4: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4230u;
    if (runtime->hasFunction(0x1A4230u)) {
        auto targetFn = runtime->lookupFunction(0x1A4230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD9D8u; }
        if (ctx->pc != 0x1AD9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditControlStatusInit__FP6CScene_0x1a4230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD9D8u; }
        if (ctx->pc != 0x1AD9D8u) { return; }
    }
    ctx->pc = 0x1AD9D8u;
label_1ad9d8:
    // 0x1ad9d8: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ad9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ad9dc:
    // 0x1ad9dc: 0xc0a0e30  jal         func_2838C0
label_1ad9e0:
    if (ctx->pc == 0x1AD9E0u) {
        ctx->pc = 0x1AD9E0u;
            // 0x1ad9e0: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->pc = 0x1AD9E4u;
        goto label_1ad9e4;
    }
    ctx->pc = 0x1AD9DCu;
    SET_GPR_U32(ctx, 31, 0x1AD9E4u);
    ctx->pc = 0x1AD9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD9DCu;
            // 0x1ad9e0: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD9E4u; }
        if (ctx->pc != 0x1AD9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD9E4u; }
        if (ctx->pc != 0x1AD9E4u) { return; }
    }
    ctx->pc = 0x1AD9E4u;
label_1ad9e4:
    // 0x1ad9e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ad9e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ad9e8:
    // 0x1ad9e8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1ad9e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1ad9ec:
    // 0x1ad9ec: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
label_1ad9f0:
    if (ctx->pc == 0x1AD9F0u) {
        ctx->pc = 0x1AD9F0u;
            // 0x1ad9f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD9F4u;
        goto label_1ad9f4;
    }
    ctx->pc = 0x1AD9ECu;
    {
        const bool branch_taken_0x1ad9ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD9ECu;
            // 0x1ad9f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad9ec) {
            ctx->pc = 0x1ADA18u;
            goto label_1ada18;
        }
    }
    ctx->pc = 0x1AD9F4u;
label_1ad9f4:
    // 0x1ad9f4: 0xc04c678  jal         func_1319E0
label_1ad9f8:
    if (ctx->pc == 0x1AD9F8u) {
        ctx->pc = 0x1AD9FCu;
        goto label_1ad9fc;
    }
    ctx->pc = 0x1AD9F4u;
    SET_GPR_U32(ctx, 31, 0x1AD9FCu);
    ctx->pc = 0x1319E0u;
    if (runtime->hasFunction(0x1319E0u)) {
        auto targetFn = runtime->lookupFunction(0x1319E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD9FCu; }
        if (ctx->pc != 0x1AD9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAngle__15mgCCameraFollowFv_0x1319e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD9FCu; }
        if (ctx->pc != 0x1AD9FCu) { return; }
    }
    ctx->pc = 0x1AD9FCu;
label_1ad9fc:
    // 0x1ad9fc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1ad9fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1ada00:
    // 0x1ada00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ada00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ada04:
    // 0x1ada04: 0xc04c574  jal         func_1315D0
label_1ada08:
    if (ctx->pc == 0x1ADA08u) {
        ctx->pc = 0x1ADA08u;
            // 0x1ada08: 0x27a50400  addiu       $a1, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->pc = 0x1ADA0Cu;
        goto label_1ada0c;
    }
    ctx->pc = 0x1ADA04u;
    SET_GPR_U32(ctx, 31, 0x1ADA0Cu);
    ctx->pc = 0x1ADA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA04u;
            // 0x1ada08: 0x27a50400  addiu       $a1, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA0Cu; }
        if (ctx->pc != 0x1ADA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA0Cu; }
        if (ctx->pc != 0x1ADA0Cu) { return; }
    }
    ctx->pc = 0x1ADA0Cu;
label_1ada0c:
    // 0x1ada0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ada0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ada10:
    // 0x1ada10: 0xc04c578  jal         func_1315E0
label_1ada14:
    if (ctx->pc == 0x1ADA14u) {
        ctx->pc = 0x1ADA14u;
            // 0x1ada14: 0x27a50410  addiu       $a1, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->pc = 0x1ADA18u;
        goto label_1ada18;
    }
    ctx->pc = 0x1ADA10u;
    SET_GPR_U32(ctx, 31, 0x1ADA18u);
    ctx->pc = 0x1ADA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA10u;
            // 0x1ada14: 0x27a50410  addiu       $a1, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315E0u;
    if (runtime->hasFunction(0x1315E0u)) {
        auto targetFn = runtime->lookupFunction(0x1315E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA18u; }
        if (ctx->pc != 0x1ADA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRef__9mgCCameraFPf_0x1315e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA18u; }
        if (ctx->pc != 0x1ADA18u) { return; }
    }
    ctx->pc = 0x1ADA18u;
label_1ada18:
    // 0x1ada18: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ada18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ada1c:
    // 0x1ada1c: 0xc0a0e30  jal         func_2838C0
label_1ada20:
    if (ctx->pc == 0x1ADA20u) {
        ctx->pc = 0x1ADA20u;
            // 0x1ada20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADA24u;
        goto label_1ada24;
    }
    ctx->pc = 0x1ADA1Cu;
    SET_GPR_U32(ctx, 31, 0x1ADA24u);
    ctx->pc = 0x1ADA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA1Cu;
            // 0x1ada20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA24u; }
        if (ctx->pc != 0x1ADA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA24u; }
        if (ctx->pc != 0x1ADA24u) { return; }
    }
    ctx->pc = 0x1ADA24u;
label_1ada24:
    // 0x1ada24: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ada24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ada28:
    // 0x1ada28: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
label_1ada2c:
    if (ctx->pc == 0x1ADA2Cu) {
        ctx->pc = 0x1ADA2Cu;
            // 0x1ada2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADA30u;
        goto label_1ada30;
    }
    ctx->pc = 0x1ADA28u;
    {
        const bool branch_taken_0x1ada28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA28u;
            // 0x1ada2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ada28) {
            ctx->pc = 0x1ADA90u;
            goto label_1ada90;
        }
    }
    ctx->pc = 0x1ADA30u;
label_1ada30:
    // 0x1ada30: 0xc04c66c  jal         func_1319B0
label_1ada34:
    if (ctx->pc == 0x1ADA34u) {
        ctx->pc = 0x1ADA38u;
        goto label_1ada38;
    }
    ctx->pc = 0x1ADA30u;
    SET_GPR_U32(ctx, 31, 0x1ADA38u);
    ctx->pc = 0x1319B0u;
    if (runtime->hasFunction(0x1319B0u)) {
        auto targetFn = runtime->lookupFunction(0x1319B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA38u; }
        if (ctx->pc != 0x1ADA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOff__15mgCCameraFollowFv_0x1319b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA38u; }
        if (ctx->pc != 0x1ADA38u) { return; }
    }
    ctx->pc = 0x1ADA38u;
label_1ada38:
    // 0x1ada38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ada38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ada3c:
    // 0x1ada3c: 0xc04c518  jal         func_131460
label_1ada40:
    if (ctx->pc == 0x1ADA40u) {
        ctx->pc = 0x1ADA40u;
            // 0x1ada40: 0x27a50410  addiu       $a1, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->pc = 0x1ADA44u;
        goto label_1ada44;
    }
    ctx->pc = 0x1ADA3Cu;
    SET_GPR_U32(ctx, 31, 0x1ADA44u);
    ctx->pc = 0x1ADA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA3Cu;
            // 0x1ada40: 0x27a50410  addiu       $a1, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA44u; }
        if (ctx->pc != 0x1ADA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFPf_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA44u; }
        if (ctx->pc != 0x1ADA44u) { return; }
    }
    ctx->pc = 0x1ADA44u;
label_1ada44:
    // 0x1ada44: 0xc7a10404  lwc1        $f1, 0x404($sp)
    ctx->pc = 0x1ada44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ada48:
    // 0x1ada48: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1ada48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_1ada4c:
    // 0x1ada4c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ada4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1ada50:
    // 0x1ada50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ada50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ada54:
    // 0x1ada54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ada54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ada58:
    // 0x1ada58: 0x27a50400  addiu       $a1, $sp, 0x400
    ctx->pc = 0x1ada58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_1ada5c:
    // 0x1ada5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ada5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ada60:
    // 0x1ada60: 0xc04c504  jal         func_131410
label_1ada64:
    if (ctx->pc == 0x1ADA64u) {
        ctx->pc = 0x1ADA64u;
            // 0x1ada64: 0xe7a00404  swc1        $f0, 0x404($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1028), bits); }
        ctx->pc = 0x1ADA68u;
        goto label_1ada68;
    }
    ctx->pc = 0x1ADA60u;
    SET_GPR_U32(ctx, 31, 0x1ADA68u);
    ctx->pc = 0x1ADA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA60u;
            // 0x1ada64: 0xe7a00404  swc1        $f0, 0x404($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1028), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131410u;
    if (runtime->hasFunction(0x131410u)) {
        auto targetFn = runtime->lookupFunction(0x131410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA68u; }
        if (ctx->pc != 0x1ADA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFPf_0x131410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA68u; }
        if (ctx->pc != 0x1ADA68u) { return; }
    }
    ctx->pc = 0x1ADA68u;
label_1ada68:
    // 0x1ada68: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ada68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1ada6c:
    // 0x1ada6c: 0xc04c670  jal         func_1319C0
label_1ada70:
    if (ctx->pc == 0x1ADA70u) {
        ctx->pc = 0x1ADA70u;
            // 0x1ada70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADA74u;
        goto label_1ada74;
    }
    ctx->pc = 0x1ADA6Cu;
    SET_GPR_U32(ctx, 31, 0x1ADA74u);
    ctx->pc = 0x1ADA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA6Cu;
            // 0x1ada70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319C0u;
    if (runtime->hasFunction(0x1319C0u)) {
        auto targetFn = runtime->lookupFunction(0x1319C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA74u; }
        if (ctx->pc != 0x1ADA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAngle__15mgCCameraFollowFf_0x1319c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA74u; }
        if (ctx->pc != 0x1ADA74u) { return; }
    }
    ctx->pc = 0x1ADA74u;
label_1ada74:
    // 0x1ada74: 0x8e790060  lw          $t9, 0x60($s3)
    ctx->pc = 0x1ada74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_1ada78:
    // 0x1ada78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ada78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ada7c:
    // 0x1ada7c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1ada7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1ada80:
    // 0x1ada80: 0x320f809  jalr        $t9
label_1ada84:
    if (ctx->pc == 0x1ADA84u) {
        ctx->pc = 0x1ADA84u;
            // 0x1ada84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1ADA88u;
        goto label_1ada88;
    }
    ctx->pc = 0x1ADA80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1ADA88u);
        ctx->pc = 0x1ADA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA80u;
            // 0x1ada84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ADA88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA88u; }
            if (ctx->pc != 0x1ADA88u) { return; }
        }
        }
    }
    ctx->pc = 0x1ADA88u;
label_1ada88:
    // 0x1ada88: 0xc04c668  jal         func_1319A0
label_1ada8c:
    if (ctx->pc == 0x1ADA8Cu) {
        ctx->pc = 0x1ADA8Cu;
            // 0x1ada8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADA90u;
        goto label_1ada90;
    }
    ctx->pc = 0x1ADA88u;
    SET_GPR_U32(ctx, 31, 0x1ADA90u);
    ctx->pc = 0x1ADA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA88u;
            // 0x1ada8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319A0u;
    if (runtime->hasFunction(0x1319A0u)) {
        auto targetFn = runtime->lookupFunction(0x1319A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA90u; }
        if (ctx->pc != 0x1ADA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOn__15mgCCameraFollowFv_0x1319a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA90u; }
        if (ctx->pc != 0x1ADA90u) { return; }
    }
    ctx->pc = 0x1ADA90u;
label_1ada90:
    // 0x1ada90: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1ada90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ada94:
    // 0x1ada94: 0xc06bf8c  jal         func_1AFE30
label_1ada98:
    if (ctx->pc == 0x1ADA98u) {
        ctx->pc = 0x1ADA98u;
            // 0x1ada98: 0xac402e54  sw          $zero, 0x2E54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11860), GPR_U32(ctx, 0));
        ctx->pc = 0x1ADA9Cu;
        goto label_1ada9c;
    }
    ctx->pc = 0x1ADA94u;
    SET_GPR_U32(ctx, 31, 0x1ADA9Cu);
    ctx->pc = 0x1ADA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA94u;
            // 0x1ada98: 0xac402e54  sw          $zero, 0x2E54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11860), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AFE30u;
    if (runtime->hasFunction(0x1AFE30u)) {
        auto targetFn = runtime->lookupFunction(0x1AFE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA9Cu; }
        if (ctx->pc != 0x1ADA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditDataSave__Fv_0x1afe30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADA9Cu; }
        if (ctx->pc != 0x1ADA9Cu) { return; }
    }
    ctx->pc = 0x1ADA9Cu;
label_1ada9c:
    // 0x1ada9c: 0xc0bc450  jal         func_2F1140
label_1adaa0:
    if (ctx->pc == 0x1ADAA0u) {
        ctx->pc = 0x1ADAA0u;
            // 0x1adaa0: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1ADAA4u;
        goto label_1adaa4;
    }
    ctx->pc = 0x1ADA9Cu;
    SET_GPR_U32(ctx, 31, 0x1ADAA4u);
    ctx->pc = 0x1ADAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA9Cu;
            // 0x1adaa0: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1140u;
    if (runtime->hasFunction(0x2F1140u)) {
        auto targetFn = runtime->lookupFunction(0x2F1140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAA4u; }
        if (ctx->pc != 0x1ADAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GeoUpdateNpcPos__FP6CScene_0x2f1140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAA4u; }
        if (ctx->pc != 0x1ADAA4u) { return; }
    }
    ctx->pc = 0x1ADAA4u;
label_1adaa4:
    // 0x1adaa4: 0xc064220  jal         func_190880
label_1adaa8:
    if (ctx->pc == 0x1ADAA8u) {
        ctx->pc = 0x1ADAACu;
        goto label_1adaac;
    }
    ctx->pc = 0x1ADAA4u;
    SET_GPR_U32(ctx, 31, 0x1ADAACu);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAACu; }
        if (ctx->pc != 0x1ADAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAACu; }
        if (ctx->pc != 0x1ADAACu) { return; }
    }
    ctx->pc = 0x1ADAACu;
label_1adaac:
    // 0x1adaac: 0xc0c69d0  jal         func_31A740
label_1adab0:
    if (ctx->pc == 0x1ADAB0u) {
        ctx->pc = 0x1ADAB0u;
            // 0x1adab0: 0x8c441a08  lw          $a0, 0x1A08($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6664)));
        ctx->pc = 0x1ADAB4u;
        goto label_1adab4;
    }
    ctx->pc = 0x1ADAACu;
    SET_GPR_U32(ctx, 31, 0x1ADAB4u);
    ctx->pc = 0x1ADAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADAACu;
            // 0x1adab0: 0x8c441a08  lw          $a0, 0x1A08($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6664)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31A740u;
    if (runtime->hasFunction(0x31A740u)) {
        auto targetFn = runtime->lookupFunction(0x31A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAB4u; }
        if (ctx->pc != 0x1ADAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGameChapter__Fi_0x31a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAB4u; }
        if (ctx->pc != 0x1ADAB4u) { return; }
    }
    ctx->pc = 0x1ADAB4u;
label_1adab4:
    // 0x1adab4: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x1adab4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1adab8:
    // 0x1adab8: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_1adabc:
    if (ctx->pc == 0x1ADABCu) {
        ctx->pc = 0x1ADAC0u;
        goto label_1adac0;
    }
    ctx->pc = 0x1ADAB8u;
    {
        const bool branch_taken_0x1adab8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adab8) {
            ctx->pc = 0x1ADB34u;
            goto label_1adb34;
        }
    }
    ctx->pc = 0x1ADAC0u;
label_1adac0:
    // 0x1adac0: 0x8f828c58  lw          $v0, -0x73A8($gp)
    ctx->pc = 0x1adac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
label_1adac4:
    // 0x1adac4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_1adac8:
    if (ctx->pc == 0x1ADAC8u) {
        ctx->pc = 0x1ADAC8u;
            // 0x1adac8: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1ADACCu;
        goto label_1adacc;
    }
    ctx->pc = 0x1ADAC4u;
    {
        const bool branch_taken_0x1adac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADAC4u;
            // 0x1adac8: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adac4) {
            ctx->pc = 0x1ADB08u;
            goto label_1adb08;
        }
    }
    ctx->pc = 0x1ADACCu;
label_1adacc:
    // 0x1adacc: 0xc064220  jal         func_190880
label_1adad0:
    if (ctx->pc == 0x1ADAD0u) {
        ctx->pc = 0x1ADAD4u;
        goto label_1adad4;
    }
    ctx->pc = 0x1ADACCu;
    SET_GPR_U32(ctx, 31, 0x1ADAD4u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAD4u; }
        if (ctx->pc != 0x1ADAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAD4u; }
        if (ctx->pc != 0x1ADAD4u) { return; }
    }
    ctx->pc = 0x1ADAD4u;
label_1adad4:
    // 0x1adad4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1adad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1adad8:
    // 0x1adad8: 0xc0bd920  jal         func_2F6480
label_1adadc:
    if (ctx->pc == 0x1ADADCu) {
        ctx->pc = 0x1ADADCu;
            // 0x1adadc: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->pc = 0x1ADAE0u;
        goto label_1adae0;
    }
    ctx->pc = 0x1ADAD8u;
    SET_GPR_U32(ctx, 31, 0x1ADAE0u);
    ctx->pc = 0x1ADADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADAD8u;
            // 0x1adadc: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAE0u; }
        if (ctx->pc != 0x1ADAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAE0u; }
        if (ctx->pc != 0x1ADAE0u) { return; }
    }
    ctx->pc = 0x1ADAE0u;
label_1adae0:
    // 0x1adae0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1adae4:
    if (ctx->pc == 0x1ADAE4u) {
        ctx->pc = 0x1ADAE8u;
        goto label_1adae8;
    }
    ctx->pc = 0x1ADAE0u;
    {
        const bool branch_taken_0x1adae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adae0) {
            ctx->pc = 0x1ADB08u;
            goto label_1adb08;
        }
    }
    ctx->pc = 0x1ADAE8u;
label_1adae8:
    // 0x1adae8: 0xc064220  jal         func_190880
label_1adaec:
    if (ctx->pc == 0x1ADAECu) {
        ctx->pc = 0x1ADAF0u;
        goto label_1adaf0;
    }
    ctx->pc = 0x1ADAE8u;
    SET_GPR_U32(ctx, 31, 0x1ADAF0u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAF0u; }
        if (ctx->pc != 0x1ADAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAF0u; }
        if (ctx->pc != 0x1ADAF0u) { return; }
    }
    ctx->pc = 0x1ADAF0u;
label_1adaf0:
    // 0x1adaf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1adaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1adaf4:
    // 0x1adaf4: 0xc0bd920  jal         func_2F6480
label_1adaf8:
    if (ctx->pc == 0x1ADAF8u) {
        ctx->pc = 0x1ADAF8u;
            // 0x1adaf8: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->pc = 0x1ADAFCu;
        goto label_1adafc;
    }
    ctx->pc = 0x1ADAF4u;
    SET_GPR_U32(ctx, 31, 0x1ADAFCu);
    ctx->pc = 0x1ADAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADAF4u;
            // 0x1adaf8: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAFCu; }
        if (ctx->pc != 0x1ADAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADAFCu; }
        if (ctx->pc != 0x1ADAFCu) { return; }
    }
    ctx->pc = 0x1ADAFCu;
label_1adafc:
    // 0x1adafc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1adb00:
    if (ctx->pc == 0x1ADB00u) {
        ctx->pc = 0x1ADB04u;
        goto label_1adb04;
    }
    ctx->pc = 0x1ADAFCu;
    {
        const bool branch_taken_0x1adafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1adafc) {
            ctx->pc = 0x1ADB08u;
            goto label_1adb08;
        }
    }
    ctx->pc = 0x1ADB04u;
label_1adb04:
    // 0x1adb04: 0x241301fb  addiu       $s3, $zero, 0x1FB
    ctx->pc = 0x1adb04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 507));
label_1adb08:
    // 0x1adb08: 0x6610006  bgez        $s3, . + 4 + (0x6 << 2)
label_1adb0c:
    if (ctx->pc == 0x1ADB0Cu) {
        ctx->pc = 0x1ADB10u;
        goto label_1adb10;
    }
    ctx->pc = 0x1ADB08u;
    {
        const bool branch_taken_0x1adb08 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x1adb08) {
            ctx->pc = 0x1ADB24u;
            goto label_1adb24;
        }
    }
    ctx->pc = 0x1ADB10u;
label_1adb10:
    // 0x1adb10: 0xc06c074  jal         func_1B01D0
label_1adb14:
    if (ctx->pc == 0x1ADB14u) {
        ctx->pc = 0x1ADB18u;
        goto label_1adb18;
    }
    ctx->pc = 0x1ADB10u;
    SET_GPR_U32(ctx, 31, 0x1ADB18u);
    ctx->pc = 0x1B01D0u;
    if (runtime->hasFunction(0x1B01D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B01D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADB18u; }
        if (ctx->pc != 0x1ADB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditAnalyzeChanged__Fv_0x1b01d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADB18u; }
        if (ctx->pc != 0x1ADB18u) { return; }
    }
    ctx->pc = 0x1ADB18u;
label_1adb18:
    // 0x1adb18: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1adb1c:
    if (ctx->pc == 0x1ADB1Cu) {
        ctx->pc = 0x1ADB20u;
        goto label_1adb20;
    }
    ctx->pc = 0x1ADB18u;
    {
        const bool branch_taken_0x1adb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adb18) {
            ctx->pc = 0x1ADB24u;
            goto label_1adb24;
        }
    }
    ctx->pc = 0x1ADB20u;
label_1adb20:
    // 0x1adb20: 0x24130136  addiu       $s3, $zero, 0x136
    ctx->pc = 0x1adb20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
label_1adb24:
    // 0x1adb24: 0x1a600003  blez        $s3, . + 4 + (0x3 << 2)
label_1adb28:
    if (ctx->pc == 0x1ADB28u) {
        ctx->pc = 0x1ADB28u;
            // 0x1adb28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADB2Cu;
        goto label_1adb2c;
    }
    ctx->pc = 0x1ADB24u;
    {
        const bool branch_taken_0x1adb24 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1ADB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADB24u;
            // 0x1adb28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adb24) {
            ctx->pc = 0x1ADB34u;
            goto label_1adb34;
        }
    }
    ctx->pc = 0x1ADB2Cu;
label_1adb2c:
    // 0x1adb2c: 0xc06a700  jal         func_1A9C00
label_1adb30:
    if (ctx->pc == 0x1ADB30u) {
        ctx->pc = 0x1ADB34u;
        goto label_1adb34;
    }
    ctx->pc = 0x1ADB2Cu;
    SET_GPR_U32(ctx, 31, 0x1ADB34u);
    ctx->pc = 0x1A9C00u;
    if (runtime->hasFunction(0x1A9C00u)) {
        auto targetFn = runtime->lookupFunction(0x1A9C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADB34u; }
        if (ctx->pc != 0x1ADB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditModeChg__Fi_0x1a9c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADB34u; }
        if (ctx->pc != 0x1ADB34u) { return; }
    }
    ctx->pc = 0x1ADB34u;
label_1adb34:
    // 0x1adb34: 0x8f838c7c  lw          $v1, -0x7384($gp)
    ctx->pc = 0x1adb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937724)));
label_1adb38:
    // 0x1adb38: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1adb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1adb3c:
    // 0x1adb3c: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_1adb40:
    if (ctx->pc == 0x1ADB40u) {
        ctx->pc = 0x1ADB44u;
        goto label_1adb44;
    }
    ctx->pc = 0x1ADB3Cu;
    {
        const bool branch_taken_0x1adb3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1adb3c) {
            ctx->pc = 0x1ADB84u;
            goto label_1adb84;
        }
    }
    ctx->pc = 0x1ADB44u;
label_1adb44:
    // 0x1adb44: 0x8f828ca0  lw          $v0, -0x7360($gp)
    ctx->pc = 0x1adb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1adb48:
    // 0x1adb48: 0x8f8380f0  lw          $v1, -0x7F10($gp)
    ctx->pc = 0x1adb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1adb4c:
    // 0x1adb4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1adb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1adb50:
    // 0x1adb50: 0xaf828ca0  sw          $v0, -0x7360($gp)
    ctx->pc = 0x1adb50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
label_1adb54:
    // 0x1adb54: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1adb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_1adb58:
    // 0x1adb58: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1adb5c:
    if (ctx->pc == 0x1ADB5Cu) {
        ctx->pc = 0x1ADB5Cu;
            // 0x1adb5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1ADB60u;
        goto label_1adb60;
    }
    ctx->pc = 0x1ADB58u;
    {
        const bool branch_taken_0x1adb58 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1ADB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADB58u;
            // 0x1adb5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adb58) {
            ctx->pc = 0x1ADB74u;
            goto label_1adb74;
        }
    }
    ctx->pc = 0x1ADB60u;
label_1adb60:
    // 0x1adb60: 0x8f828ca0  lw          $v0, -0x7360($gp)
    ctx->pc = 0x1adb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1adb64:
    // 0x1adb64: 0x28410019  slti        $at, $v0, 0x19
    ctx->pc = 0x1adb64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)25) ? 1 : 0);
label_1adb68:
    // 0x1adb68: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_1adb6c:
    if (ctx->pc == 0x1ADB6Cu) {
        ctx->pc = 0x1ADB70u;
        goto label_1adb70;
    }
    ctx->pc = 0x1ADB68u;
    {
        const bool branch_taken_0x1adb68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1adb68) {
            ctx->pc = 0x1ADB84u;
            goto label_1adb84;
        }
    }
    ctx->pc = 0x1ADB70u;
label_1adb70:
    // 0x1adb70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1adb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1adb74:
    // 0x1adb74: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x1adb74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1adb78:
    // 0x1adb78: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x1adb78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_1adb7c:
    // 0x1adb7c: 0xc0b6204  jal         func_2D8810
label_1adb80:
    if (ctx->pc == 0x1ADB80u) {
        ctx->pc = 0x1ADB80u;
            // 0x1adb80: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1ADB84u;
        goto label_1adb84;
    }
    ctx->pc = 0x1ADB7Cu;
    SET_GPR_U32(ctx, 31, 0x1ADB84u);
    ctx->pc = 0x1ADB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADB7Cu;
            // 0x1adb80: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8810u;
    if (runtime->hasFunction(0x2D8810u)) {
        auto targetFn = runtime->lookupFunction(0x2D8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADB84u; }
        if (ctx->pc != 0x1ADB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditModeControlUnLock__Fv_0x2d8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADB84u; }
        if (ctx->pc != 0x1ADB84u) { return; }
    }
    ctx->pc = 0x1ADB84u;
label_1adb84:
    // 0x1adb84: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
label_1adb88:
    if (ctx->pc == 0x1ADB88u) {
        ctx->pc = 0x1ADB8Cu;
        goto label_1adb8c;
    }
    ctx->pc = 0x1ADB84u;
    {
        const bool branch_taken_0x1adb84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adb84) {
            ctx->pc = 0x1ADC24u;
            goto label_1adc24;
        }
    }
    ctx->pc = 0x1ADB8Cu;
label_1adb8c:
    // 0x1adb8c: 0x8f838c90  lw          $v1, -0x7370($gp)
    ctx->pc = 0x1adb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937744)));
label_1adb90:
    // 0x1adb90: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1adb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1adb94:
    // 0x1adb94: 0x8f918cb0  lw          $s1, -0x7350($gp)
    ctx->pc = 0x1adb94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1adb98:
    // 0x1adb98: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1adb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1adb9c:
    // 0x1adb9c: 0xaf828c90  sw          $v0, -0x7370($gp)
    ctx->pc = 0x1adb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937744), GPR_U32(ctx, 2));
label_1adba0:
    // 0x1adba0: 0x8e222ca0  lw          $v0, 0x2CA0($s1)
    ctx->pc = 0x1adba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11424)));
label_1adba4:
    // 0x1adba4: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x1adba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1adba8:
    // 0x1adba8: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1adbac:
    if (ctx->pc == 0x1ADBACu) {
        ctx->pc = 0x1ADBACu;
            // 0x1adbac: 0x26242c70  addiu       $a0, $s1, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11376));
        ctx->pc = 0x1ADBB0u;
        goto label_1adbb0;
    }
    ctx->pc = 0x1ADBA8u;
    {
        const bool branch_taken_0x1adba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADBA8u;
            // 0x1adbac: 0x26242c70  addiu       $a0, $s1, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adba8) {
            ctx->pc = 0x1ADC24u;
            goto label_1adc24;
        }
    }
    ctx->pc = 0x1ADBB0u;
label_1adbb0:
    // 0x1adbb0: 0xc05f660  jal         func_17D980
label_1adbb4:
    if (ctx->pc == 0x1ADBB4u) {
        ctx->pc = 0x1ADBB8u;
        goto label_1adbb8;
    }
    ctx->pc = 0x1ADBB0u;
    SET_GPR_U32(ctx, 31, 0x1ADBB8u);
    ctx->pc = 0x17D980u;
    if (runtime->hasFunction(0x17D980u)) {
        auto targetFn = runtime->lookupFunction(0x17D980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADBB8u; }
        if (ctx->pc != 0x1ADBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowFade__10CFadeInOutFv_0x17d980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADBB8u; }
        if (ctx->pc != 0x1ADBB8u) { return; }
    }
    ctx->pc = 0x1ADBB8u;
label_1adbb8:
    // 0x1adbb8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1adbb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1adbbc:
    // 0x1adbbc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1adbc0:
    if (ctx->pc == 0x1ADBC0u) {
        ctx->pc = 0x1ADBC4u;
        goto label_1adbc4;
    }
    ctx->pc = 0x1ADBBCu;
    {
        const bool branch_taken_0x1adbbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adbbc) {
            ctx->pc = 0x1ADBCCu;
            goto label_1adbcc;
        }
    }
    ctx->pc = 0x1ADBC4u;
label_1adbc4:
    // 0x1adbc4: 0x8e222c90  lw          $v0, 0x2C90($s1)
    ctx->pc = 0x1adbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11408)));
label_1adbc8:
    // 0x1adbc8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1adbc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1adbcc:
    // 0x1adbcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1adbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1adbd0:
    // 0x1adbd0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1adbd4:
    if (ctx->pc == 0x1ADBD4u) {
        ctx->pc = 0x1ADBD8u;
        goto label_1adbd8;
    }
    ctx->pc = 0x1ADBD0u;
    {
        const bool branch_taken_0x1adbd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adbd0) {
            ctx->pc = 0x1ADBE8u;
            goto label_1adbe8;
        }
    }
    ctx->pc = 0x1ADBD8u;
label_1adbd8:
    // 0x1adbd8: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1adbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1adbdc:
    // 0x1adbdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1adbdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adbe0:
    // 0x1adbe0: 0xc05f5fc  jal         func_17D7F0
label_1adbe4:
    if (ctx->pc == 0x1ADBE4u) {
        ctx->pc = 0x1ADBE4u;
            // 0x1adbe4: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x1ADBE8u;
        goto label_1adbe8;
    }
    ctx->pc = 0x1ADBE0u;
    SET_GPR_U32(ctx, 31, 0x1ADBE8u);
    ctx->pc = 0x1ADBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADBE0u;
            // 0x1adbe4: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D7F0u;
    if (runtime->hasFunction(0x17D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x17D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADBE8u; }
        if (ctx->pc != 0x1ADBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFi_0x17d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADBE8u; }
        if (ctx->pc != 0x1ADBE8u) { return; }
    }
    ctx->pc = 0x1ADBE8u;
label_1adbe8:
    // 0x1adbe8: 0x8f838cb0  lw          $v1, -0x7350($gp)
    ctx->pc = 0x1adbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1adbec:
    // 0x1adbec: 0x8f8280f0  lw          $v0, -0x7F10($gp)
    ctx->pc = 0x1adbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1adbf0:
    // 0x1adbf0: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x1adbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_1adbf4:
    // 0x1adbf4: 0x8f828cc0  lw          $v0, -0x7340($gp)
    ctx->pc = 0x1adbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1adbf8:
    // 0x1adbf8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1adbfc:
    if (ctx->pc == 0x1ADBFCu) {
        ctx->pc = 0x1ADC00u;
        goto label_1adc00;
    }
    ctx->pc = 0x1ADBF8u;
    {
        const bool branch_taken_0x1adbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adbf8) {
            ctx->pc = 0x1ADC24u;
            goto label_1adc24;
        }
    }
    ctx->pc = 0x1ADC00u;
label_1adc00:
    // 0x1adc00: 0x8f8480f0  lw          $a0, -0x7F10($gp)
    ctx->pc = 0x1adc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1adc04:
    // 0x1adc04: 0xc08cb7c  jal         func_232DF0
label_1adc08:
    if (ctx->pc == 0x1ADC08u) {
        ctx->pc = 0x1ADC08u;
            // 0x1adc08: 0xaf928c7c  sw          $s2, -0x7384($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937724), GPR_U32(ctx, 18));
        ctx->pc = 0x1ADC0Cu;
        goto label_1adc0c;
    }
    ctx->pc = 0x1ADC04u;
    SET_GPR_U32(ctx, 31, 0x1ADC0Cu);
    ctx->pc = 0x1ADC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADC04u;
            // 0x1adc08: 0xaf928c7c  sw          $s2, -0x7384($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937724), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232DF0u;
    if (runtime->hasFunction(0x232DF0u)) {
        auto targetFn = runtime->lookupFunction(0x232DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADC0Cu; }
        if (ctx->pc != 0x1ADC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainInit__FP13MENU_INIT_ARG_0x232df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADC0Cu; }
        if (ctx->pc != 0x1ADC0Cu) { return; }
    }
    ctx->pc = 0x1ADC0Cu;
label_1adc0c:
    // 0x1adc0c: 0xc0c0fe4  jal         func_303F90
label_1adc10:
    if (ctx->pc == 0x1ADC10u) {
        ctx->pc = 0x1ADC14u;
        goto label_1adc14;
    }
    ctx->pc = 0x1ADC0Cu;
    SET_GPR_U32(ctx, 31, 0x1ADC14u);
    ctx->pc = 0x303F90u;
    if (runtime->hasFunction(0x303F90u)) {
        auto targetFn = runtime->lookupFunction(0x303F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADC14u; }
        if (ctx->pc != 0x1ADC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgGetItemOver__Fv_0x303f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADC14u; }
        if (ctx->pc != 0x1ADC14u) { return; }
    }
    ctx->pc = 0x1ADC14u;
label_1adc14:
    // 0x1adc14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1adc18:
    if (ctx->pc == 0x1ADC18u) {
        ctx->pc = 0x1ADC1Cu;
        goto label_1adc1c;
    }
    ctx->pc = 0x1ADC14u;
    {
        const bool branch_taken_0x1adc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adc14) {
            ctx->pc = 0x1ADC24u;
            goto label_1adc24;
        }
    }
    ctx->pc = 0x1ADC1Cu;
label_1adc1c:
    // 0x1adc1c: 0xc0c0fe8  jal         func_303FA0
label_1adc20:
    if (ctx->pc == 0x1ADC20u) {
        ctx->pc = 0x1ADC24u;
        goto label_1adc24;
    }
    ctx->pc = 0x1ADC1Cu;
    SET_GPR_U32(ctx, 31, 0x1ADC24u);
    ctx->pc = 0x303FA0u;
    if (runtime->hasFunction(0x303FA0u)) {
        auto targetFn = runtime->lookupFunction(0x303FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADC24u; }
        if (ctx->pc != 0x1ADC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgGetItemOverReset__Fv_0x303fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADC24u; }
        if (ctx->pc != 0x1ADC24u) { return; }
    }
    ctx->pc = 0x1ADC24u;
label_1adc24:
    // 0x1adc24: 0x83828ce8  lb          $v0, -0x7318($gp)
    ctx->pc = 0x1adc24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937832)));
label_1adc28:
    // 0x1adc28: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1adc2c:
    if (ctx->pc == 0x1ADC2Cu) {
        ctx->pc = 0x1ADC2Cu;
            // 0x1adc2c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1ADC30u;
        goto label_1adc30;
    }
    ctx->pc = 0x1ADC28u;
    {
        const bool branch_taken_0x1adc28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADC28u;
            // 0x1adc2c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc28) {
            ctx->pc = 0x1ADC3Cu;
            goto label_1adc3c;
        }
    }
    ctx->pc = 0x1ADC30u;
label_1adc30:
    // 0x1adc30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1adc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1adc34:
    // 0x1adc34: 0xaf808ce4  sw          $zero, -0x731C($gp)
    ctx->pc = 0x1adc34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937828), GPR_U32(ctx, 0));
label_1adc38:
    // 0x1adc38: 0xa3828ce8  sb          $v0, -0x7318($gp)
    ctx->pc = 0x1adc38u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937832), (uint8_t)GPR_U32(ctx, 2));
label_1adc3c:
    // 0x1adc3c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1adc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1adc40:
    // 0x1adc40: 0xc052d1c  jal         func_14B470
label_1adc44:
    if (ctx->pc == 0x1ADC44u) {
        ctx->pc = 0x1ADC44u;
            // 0x1adc44: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1ADC48u;
        goto label_1adc48;
    }
    ctx->pc = 0x1ADC40u;
    SET_GPR_U32(ctx, 31, 0x1ADC48u);
    ctx->pc = 0x1ADC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADC40u;
            // 0x1adc44: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADC48u; }
        if (ctx->pc != 0x1ADC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADC48u; }
        if (ctx->pc != 0x1ADC48u) { return; }
    }
    ctx->pc = 0x1ADC48u;
label_1adc48:
    // 0x1adc48: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1adc4c:
    if (ctx->pc == 0x1ADC4Cu) {
        ctx->pc = 0x1ADC50u;
        goto label_1adc50;
    }
    ctx->pc = 0x1ADC48u;
    {
        const bool branch_taken_0x1adc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adc48) {
            ctx->pc = 0x1ADC8Cu;
            goto label_1adc8c;
        }
    }
    ctx->pc = 0x1ADC50u;
label_1adc50:
    // 0x1adc50: 0x8f828ce4  lw          $v0, -0x731C($gp)
    ctx->pc = 0x1adc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937828)));
label_1adc54:
    // 0x1adc54: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1adc58:
    if (ctx->pc == 0x1ADC58u) {
        ctx->pc = 0x1ADC58u;
            // 0x1adc58: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x1ADC5Cu;
        goto label_1adc5c;
    }
    ctx->pc = 0x1ADC54u;
    {
        const bool branch_taken_0x1adc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADC54u;
            // 0x1adc58: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc54) {
            ctx->pc = 0x1ADC70u;
            goto label_1adc70;
        }
    }
    ctx->pc = 0x1ADC5Cu;
label_1adc5c:
    // 0x1adc5c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1adc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_1adc60:
    // 0x1adc60: 0xc0a08b8  jal         func_2822E0
label_1adc64:
    if (ctx->pc == 0x1ADC64u) {
        ctx->pc = 0x1ADC64u;
            // 0x1adc64: 0x2484f0c0  addiu       $a0, $a0, -0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963392));
        ctx->pc = 0x1ADC68u;
        goto label_1adc68;
    }
    ctx->pc = 0x1ADC60u;
    SET_GPR_U32(ctx, 31, 0x1ADC68u);
    ctx->pc = 0x1ADC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADC60u;
            // 0x1adc64: 0x2484f0c0  addiu       $a0, $a0, -0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2822E0u;
    if (runtime->hasFunction(0x2822E0u)) {
        auto targetFn = runtime->lookupFunction(0x2822E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADC68u; }
        if (ctx->pc != 0x1ADC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Start__5CRainFv_0x2822e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADC68u; }
        if (ctx->pc != 0x1ADC68u) { return; }
    }
    ctx->pc = 0x1ADC68u;
label_1adc68:
    // 0x1adc68: 0x10000004  b           . + 4 + (0x4 << 2)
label_1adc6c:
    if (ctx->pc == 0x1ADC6Cu) {
        ctx->pc = 0x1ADC6Cu;
            // 0x1adc6c: 0x8f828ce4  lw          $v0, -0x731C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937828)));
        ctx->pc = 0x1ADC70u;
        goto label_1adc70;
    }
    ctx->pc = 0x1ADC68u;
    {
        const bool branch_taken_0x1adc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADC68u;
            // 0x1adc6c: 0x8f828ce4  lw          $v0, -0x731C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc68) {
            ctx->pc = 0x1ADC7Cu;
            goto label_1adc7c;
        }
    }
    ctx->pc = 0x1ADC70u;
label_1adc70:
    // 0x1adc70: 0xc0a08b4  jal         func_2822D0
label_1adc74:
    if (ctx->pc == 0x1ADC74u) {
        ctx->pc = 0x1ADC74u;
            // 0x1adc74: 0x2484f0c0  addiu       $a0, $a0, -0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963392));
        ctx->pc = 0x1ADC78u;
        goto label_1adc78;
    }
    ctx->pc = 0x1ADC70u;
    SET_GPR_U32(ctx, 31, 0x1ADC78u);
    ctx->pc = 0x1ADC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADC70u;
            // 0x1adc74: 0x2484f0c0  addiu       $a0, $a0, -0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2822D0u;
    if (runtime->hasFunction(0x2822D0u)) {
        auto targetFn = runtime->lookupFunction(0x2822D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADC78u; }
        if (ctx->pc != 0x1ADC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Stop__5CRainFv_0x2822d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADC78u; }
        if (ctx->pc != 0x1ADC78u) { return; }
    }
    ctx->pc = 0x1ADC78u;
label_1adc78:
    // 0x1adc78: 0x8f828ce4  lw          $v0, -0x731C($gp)
    ctx->pc = 0x1adc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937828)));
label_1adc7c:
    // 0x1adc7c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1adc7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1adc80:
    // 0x1adc80: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1adc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1adc84:
    // 0x1adc84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1adc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1adc88:
    // 0x1adc88: 0xaf828ce4  sw          $v0, -0x731C($gp)
    ctx->pc = 0x1adc88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937828), GPR_U32(ctx, 2));
label_1adc8c:
    // 0x1adc8c: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1adc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1adc90:
    // 0x1adc90: 0xc05f664  jal         func_17D990
label_1adc94:
    if (ctx->pc == 0x1ADC94u) {
        ctx->pc = 0x1ADC94u;
            // 0x1adc94: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x1ADC98u;
        goto label_1adc98;
    }
    ctx->pc = 0x1ADC90u;
    SET_GPR_U32(ctx, 31, 0x1ADC98u);
    ctx->pc = 0x1ADC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADC90u;
            // 0x1adc94: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D990u;
    if (runtime->hasFunction(0x17D990u)) {
        auto targetFn = runtime->lookupFunction(0x17D990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADC98u; }
        if (ctx->pc != 0x1ADC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeStep__10CFadeInOutFv_0x17d990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADC98u; }
        if (ctx->pc != 0x1ADC98u) { return; }
    }
    ctx->pc = 0x1ADC98u;
label_1adc98:
    // 0x1adc98: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1adc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1adc9c:
    // 0x1adc9c: 0xc05f7b4  jal         func_17DED0
label_1adca0:
    if (ctx->pc == 0x1ADCA0u) {
        ctx->pc = 0x1ADCA0u;
            // 0x1adca0: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x1ADCA4u;
        goto label_1adca4;
    }
    ctx->pc = 0x1ADC9Cu;
    SET_GPR_U32(ctx, 31, 0x1ADCA4u);
    ctx->pc = 0x1ADCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADC9Cu;
            // 0x1adca0: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DED0u;
    if (runtime->hasFunction(0x17DED0u)) {
        auto targetFn = runtime->lookupFunction(0x17DED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADCA4u; }
        if (ctx->pc != 0x1ADCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__10CFadeInOutFv_0x17ded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADCA4u; }
        if (ctx->pc != 0x1ADCA4u) { return; }
    }
    ctx->pc = 0x1ADCA4u;
label_1adca4:
    // 0x1adca4: 0x8f828c98  lw          $v0, -0x7368($gp)
    ctx->pc = 0x1adca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937752)));
label_1adca8:
    // 0x1adca8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1adcac:
    if (ctx->pc == 0x1ADCACu) {
        ctx->pc = 0x1ADCB0u;
        goto label_1adcb0;
    }
    ctx->pc = 0x1ADCA8u;
    {
        const bool branch_taken_0x1adca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adca8) {
            ctx->pc = 0x1ADCD4u;
            goto label_1adcd4;
        }
    }
    ctx->pc = 0x1ADCB0u;
label_1adcb0:
    // 0x1adcb0: 0xc064d44  jal         func_193510
label_1adcb4:
    if (ctx->pc == 0x1ADCB4u) {
        ctx->pc = 0x1ADCB8u;
        goto label_1adcb8;
    }
    ctx->pc = 0x1ADCB0u;
    SET_GPR_U32(ctx, 31, 0x1ADCB8u);
    ctx->pc = 0x193510u;
    if (runtime->hasFunction(0x193510u)) {
        auto targetFn = runtime->lookupFunction(0x193510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADCB8u; }
        if (ctx->pc != 0x1ADCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PauseMenu__Fv_0x193510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADCB8u; }
        if (ctx->pc != 0x1ADCB8u) { return; }
    }
    ctx->pc = 0x1ADCB8u;
label_1adcb8:
    // 0x1adcb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1adcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1adcbc:
    // 0x1adcbc: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1adcc0:
    if (ctx->pc == 0x1ADCC0u) {
        ctx->pc = 0x1ADCC0u;
            // 0x1adcc0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1ADCC4u;
        goto label_1adcc4;
    }
    ctx->pc = 0x1ADCBCu;
    {
        const bool branch_taken_0x1adcbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1ADCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADCBCu;
            // 0x1adcc0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adcbc) {
            ctx->pc = 0x1ADCC8u;
            goto label_1adcc8;
        }
    }
    ctx->pc = 0x1ADCC4u;
label_1adcc4:
    // 0x1adcc4: 0xaf808c98  sw          $zero, -0x7368($gp)
    ctx->pc = 0x1adcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937752), GPR_U32(ctx, 0));
label_1adcc8:
    // 0x1adcc8: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1adccc:
    if (ctx->pc == 0x1ADCCCu) {
        ctx->pc = 0x1ADCD0u;
        goto label_1adcd0;
    }
    ctx->pc = 0x1ADCC8u;
    {
        const bool branch_taken_0x1adcc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1adcc8) {
            ctx->pc = 0x1ADCD4u;
            goto label_1adcd4;
        }
    }
    ctx->pc = 0x1ADCD0u;
label_1adcd0:
    // 0x1adcd0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1adcd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1adcd4:
    // 0x1adcd4: 0xc0a000c  jal         func_280030
label_1adcd8:
    if (ctx->pc == 0x1ADCD8u) {
        ctx->pc = 0x1ADCDCu;
        goto label_1adcdc;
    }
    ctx->pc = 0x1ADCD4u;
    SET_GPR_U32(ctx, 31, 0x1ADCDCu);
    ctx->pc = 0x280030u;
    if (runtime->hasFunction(0x280030u)) {
        auto targetFn = runtime->lookupFunction(0x280030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADCDCu; }
        if (ctx->pc != 0x1ADCDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawEventEdit__Fv_0x280030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADCDCu; }
        if (ctx->pc != 0x1ADCDCu) { return; }
    }
    ctx->pc = 0x1ADCDCu;
label_1adcdc:
    // 0x1adcdc: 0xc064c3c  jal         func_1930F0
label_1adce0:
    if (ctx->pc == 0x1ADCE0u) {
        ctx->pc = 0x1ADCE4u;
        goto label_1adce4;
    }
    ctx->pc = 0x1ADCDCu;
    SET_GPR_U32(ctx, 31, 0x1ADCE4u);
    ctx->pc = 0x1930F0u;
    if (runtime->hasFunction(0x1930F0u)) {
        auto targetFn = runtime->lookupFunction(0x1930F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADCE4u; }
        if (ctx->pc != 0x1ADCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutForE3__Fv_0x1930f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADCE4u; }
        if (ctx->pc != 0x1ADCE4u) { return; }
    }
    ctx->pc = 0x1ADCE4u;
label_1adce4:
    // 0x1adce4: 0x8f828ac8  lw          $v0, -0x7538($gp)
    ctx->pc = 0x1adce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
label_1adce8:
    // 0x1adce8: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
label_1adcec:
    if (ctx->pc == 0x1ADCECu) {
        ctx->pc = 0x1ADCF0u;
        goto label_1adcf0;
    }
    ctx->pc = 0x1ADCE8u;
    {
        const bool branch_taken_0x1adce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adce8) {
            ctx->pc = 0x1ADF20u;
            goto label_1adf20;
        }
    }
    ctx->pc = 0x1ADCF0u;
label_1adcf0:
    // 0x1adcf0: 0x83828cf0  lb          $v0, -0x7310($gp)
    ctx->pc = 0x1adcf0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937840)));
label_1adcf4:
    // 0x1adcf4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1adcf8:
    if (ctx->pc == 0x1ADCF8u) {
        ctx->pc = 0x1ADCF8u;
            // 0x1adcf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1ADCFCu;
        goto label_1adcfc;
    }
    ctx->pc = 0x1ADCF4u;
    {
        const bool branch_taken_0x1adcf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADCF4u;
            // 0x1adcf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adcf4) {
            ctx->pc = 0x1ADD04u;
            goto label_1add04;
        }
    }
    ctx->pc = 0x1ADCFCu;
label_1adcfc:
    // 0x1adcfc: 0xaf808cec  sw          $zero, -0x7314($gp)
    ctx->pc = 0x1adcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937836), GPR_U32(ctx, 0));
label_1add00:
    // 0x1add00: 0xa3828cf0  sb          $v0, -0x7310($gp)
    ctx->pc = 0x1add00u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937840), (uint8_t)GPR_U32(ctx, 2));
label_1add04:
    // 0x1add04: 0x83828cf8  lb          $v0, -0x7308($gp)
    ctx->pc = 0x1add04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937848)));
label_1add08:
    // 0x1add08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1add0c:
    if (ctx->pc == 0x1ADD0Cu) {
        ctx->pc = 0x1ADD0Cu;
            // 0x1add0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1ADD10u;
        goto label_1add10;
    }
    ctx->pc = 0x1ADD08u;
    {
        const bool branch_taken_0x1add08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADD08u;
            // 0x1add0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add08) {
            ctx->pc = 0x1ADD18u;
            goto label_1add18;
        }
    }
    ctx->pc = 0x1ADD10u;
label_1add10:
    // 0x1add10: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1add10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1add14:
    // 0x1add14: 0xa3828cf8  sb          $v0, -0x7308($gp)
    ctx->pc = 0x1add14u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937848), (uint8_t)GPR_U32(ctx, 2));
label_1add18:
    // 0x1add18: 0x83828d00  lb          $v0, -0x7300($gp)
    ctx->pc = 0x1add18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937856)));
label_1add1c:
    // 0x1add1c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1add20:
    if (ctx->pc == 0x1ADD20u) {
        ctx->pc = 0x1ADD20u;
            // 0x1add20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1ADD24u;
        goto label_1add24;
    }
    ctx->pc = 0x1ADD1Cu;
    {
        const bool branch_taken_0x1add1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADD1Cu;
            // 0x1add20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add1c) {
            ctx->pc = 0x1ADD2Cu;
            goto label_1add2c;
        }
    }
    ctx->pc = 0x1ADD24u;
label_1add24:
    // 0x1add24: 0xaf808cfc  sw          $zero, -0x7304($gp)
    ctx->pc = 0x1add24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937852), GPR_U32(ctx, 0));
label_1add28:
    // 0x1add28: 0xa3828d00  sb          $v0, -0x7300($gp)
    ctx->pc = 0x1add28u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937856), (uint8_t)GPR_U32(ctx, 2));
label_1add2c:
    // 0x1add2c: 0x83828d08  lb          $v0, -0x72F8($gp)
    ctx->pc = 0x1add2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937864)));
label_1add30:
    // 0x1add30: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1add34:
    if (ctx->pc == 0x1ADD34u) {
        ctx->pc = 0x1ADD34u;
            // 0x1add34: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1ADD38u;
        goto label_1add38;
    }
    ctx->pc = 0x1ADD30u;
    {
        const bool branch_taken_0x1add30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADD30u;
            // 0x1add34: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add30) {
            ctx->pc = 0x1ADD44u;
            goto label_1add44;
        }
    }
    ctx->pc = 0x1ADD38u;
label_1add38:
    // 0x1add38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1add38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1add3c:
    // 0x1add3c: 0xaf838d04  sw          $v1, -0x72FC($gp)
    ctx->pc = 0x1add3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937860), GPR_U32(ctx, 3));
label_1add40:
    // 0x1add40: 0xa3828d08  sb          $v0, -0x72F8($gp)
    ctx->pc = 0x1add40u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937864), (uint8_t)GPR_U32(ctx, 2));
label_1add44:
    // 0x1add44: 0x8f828cd8  lw          $v0, -0x7328($gp)
    ctx->pc = 0x1add44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937816)));
label_1add48:
    // 0x1add48: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
label_1add4c:
    if (ctx->pc == 0x1ADD4Cu) {
        ctx->pc = 0x1ADD4Cu;
            // 0x1add4c: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->pc = 0x1ADD50u;
        goto label_1add50;
    }
    ctx->pc = 0x1ADD48u;
    {
        const bool branch_taken_0x1add48 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1ADD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADD48u;
            // 0x1add4c: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add48) {
            ctx->pc = 0x1ADD5Cu;
            goto label_1add5c;
        }
    }
    ctx->pc = 0x1ADD50u;
label_1add50:
    // 0x1add50: 0x8f828cfc  lw          $v0, -0x7304($gp)
    ctx->pc = 0x1add50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
label_1add54:
    // 0x1add54: 0x18400064  blez        $v0, . + 4 + (0x64 << 2)
label_1add58:
    if (ctx->pc == 0x1ADD58u) {
        ctx->pc = 0x1ADD5Cu;
        goto label_1add5c;
    }
    ctx->pc = 0x1ADD54u;
    {
        const bool branch_taken_0x1add54 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1add54) {
            ctx->pc = 0x1ADEE8u;
            goto label_1adee8;
        }
    }
    ctx->pc = 0x1ADD5Cu;
label_1add5c:
    // 0x1add5c: 0xc04d0e8  jal         func_1343A0
label_1add60:
    if (ctx->pc == 0x1ADD60u) {
        ctx->pc = 0x1ADD64u;
        goto label_1add64;
    }
    ctx->pc = 0x1ADD5Cu;
    SET_GPR_U32(ctx, 31, 0x1ADD64u);
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADD64u; }
        if (ctx->pc != 0x1ADD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADD64u; }
        if (ctx->pc != 0x1ADD64u) { return; }
    }
    ctx->pc = 0x1ADD64u;
label_1add64:
    // 0x1add64: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x1add64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_1add68:
    // 0x1add68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1add68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1add6c:
    // 0x1add6c: 0xc04d104  jal         func_134410
label_1add70:
    if (ctx->pc == 0x1ADD70u) {
        ctx->pc = 0x1ADD70u;
            // 0x1add70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD74u;
        goto label_1add74;
    }
    ctx->pc = 0x1ADD6Cu;
    SET_GPR_U32(ctx, 31, 0x1ADD74u);
    ctx->pc = 0x1ADD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADD6Cu;
            // 0x1add70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADD74u; }
        if (ctx->pc != 0x1ADD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADD74u; }
        if (ctx->pc != 0x1ADD74u) { return; }
    }
    ctx->pc = 0x1ADD74u;
label_1add74:
    // 0x1add74: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x1add74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_1add78:
    // 0x1add78: 0xc04d3e4  jal         func_134F90
label_1add7c:
    if (ctx->pc == 0x1ADD7Cu) {
        ctx->pc = 0x1ADD7Cu;
            // 0x1add7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD80u;
        goto label_1add80;
    }
    ctx->pc = 0x1ADD78u;
    SET_GPR_U32(ctx, 31, 0x1ADD80u);
    ctx->pc = 0x1ADD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADD78u;
            // 0x1add7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADD80u; }
        if (ctx->pc != 0x1ADD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADD80u; }
        if (ctx->pc != 0x1ADD80u) { return; }
    }
    ctx->pc = 0x1ADD80u;
label_1add80:
    // 0x1add80: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x1add80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_1add84:
    // 0x1add84: 0xc04d3b0  jal         func_134EC0
label_1add88:
    if (ctx->pc == 0x1ADD88u) {
        ctx->pc = 0x1ADD88u;
            // 0x1add88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD8Cu;
        goto label_1add8c;
    }
    ctx->pc = 0x1ADD84u;
    SET_GPR_U32(ctx, 31, 0x1ADD8Cu);
    ctx->pc = 0x1ADD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADD84u;
            // 0x1add88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADD8Cu; }
        if (ctx->pc != 0x1ADD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADD8Cu; }
        if (ctx->pc != 0x1ADD8Cu) { return; }
    }
    ctx->pc = 0x1ADD8Cu;
label_1add8c:
    // 0x1add8c: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x1add8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_1add90:
    // 0x1add90: 0xc04d424  jal         func_135090
label_1add94:
    if (ctx->pc == 0x1ADD94u) {
        ctx->pc = 0x1ADD94u;
            // 0x1add94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1ADD98u;
        goto label_1add98;
    }
    ctx->pc = 0x1ADD90u;
    SET_GPR_U32(ctx, 31, 0x1ADD98u);
    ctx->pc = 0x1ADD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADD90u;
            // 0x1add94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADD98u; }
        if (ctx->pc != 0x1ADD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADD98u; }
        if (ctx->pc != 0x1ADD98u) { return; }
    }
    ctx->pc = 0x1ADD98u;
label_1add98:
    // 0x1add98: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x1add98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_1add9c:
    // 0x1add9c: 0xc04d428  jal         func_1350A0
label_1adda0:
    if (ctx->pc == 0x1ADDA0u) {
        ctx->pc = 0x1ADDA0u;
            // 0x1adda0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADDA4u;
        goto label_1adda4;
    }
    ctx->pc = 0x1ADD9Cu;
    SET_GPR_U32(ctx, 31, 0x1ADDA4u);
    ctx->pc = 0x1ADDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADD9Cu;
            // 0x1adda0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADDA4u; }
        if (ctx->pc != 0x1ADDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADDA4u; }
        if (ctx->pc != 0x1ADDA4u) { return; }
    }
    ctx->pc = 0x1ADDA4u;
label_1adda4:
    // 0x1adda4: 0x8f828cd8  lw          $v0, -0x7328($gp)
    ctx->pc = 0x1adda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937816)));
label_1adda8:
    // 0x1adda8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1addac:
    if (ctx->pc == 0x1ADDACu) {
        ctx->pc = 0x1ADDB0u;
        goto label_1addb0;
    }
    ctx->pc = 0x1ADDA8u;
    {
        const bool branch_taken_0x1adda8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1adda8) {
            ctx->pc = 0x1ADDBCu;
            goto label_1addbc;
        }
    }
    ctx->pc = 0x1ADDB0u;
label_1addb0:
    // 0x1addb0: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1addb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1addb4:
    // 0x1addb4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1addb8:
    if (ctx->pc == 0x1ADDB8u) {
        ctx->pc = 0x1ADDB8u;
            // 0x1addb8: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->pc = 0x1ADDBCu;
        goto label_1addbc;
    }
    ctx->pc = 0x1ADDB4u;
    {
        const bool branch_taken_0x1addb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADDB4u;
            // 0x1addb8: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1addb4) {
            ctx->pc = 0x1ADDD8u;
            goto label_1addd8;
        }
    }
    ctx->pc = 0x1ADDBCu;
label_1addbc:
    // 0x1addbc: 0x8f828cfc  lw          $v0, -0x7304($gp)
    ctx->pc = 0x1addbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
label_1addc0:
    // 0x1addc0: 0x1840002a  blez        $v0, . + 4 + (0x2A << 2)
label_1addc4:
    if (ctx->pc == 0x1ADDC4u) {
        ctx->pc = 0x1ADDC4u;
            // 0x1addc4: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->pc = 0x1ADDC8u;
        goto label_1addc8;
    }
    ctx->pc = 0x1ADDC0u;
    {
        const bool branch_taken_0x1addc0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1ADDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADDC0u;
            // 0x1addc4: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1addc0) {
            ctx->pc = 0x1ADE6Cu;
            goto label_1ade6c;
        }
    }
    ctx->pc = 0x1ADDC8u;
label_1addc8:
    // 0x1addc8: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1addc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1addcc:
    // 0x1addcc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_1addd0:
    if (ctx->pc == 0x1ADDD0u) {
        ctx->pc = 0x1ADDD0u;
            // 0x1addd0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1ADDD4u;
        goto label_1addd4;
    }
    ctx->pc = 0x1ADDCCu;
    {
        const bool branch_taken_0x1addcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADDCCu;
            // 0x1addd0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1addcc) {
            ctx->pc = 0x1ADE70u;
            goto label_1ade70;
        }
    }
    ctx->pc = 0x1ADDD4u;
label_1addd4:
    // 0x1addd4: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x1addd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_1addd8:
    // 0x1addd8: 0xc04d128  jal         func_1344A0
label_1adddc:
    if (ctx->pc == 0x1ADDDCu) {
        ctx->pc = 0x1ADDDCu;
            // 0x1adddc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1ADDE0u;
        goto label_1adde0;
    }
    ctx->pc = 0x1ADDD8u;
    SET_GPR_U32(ctx, 31, 0x1ADDE0u);
    ctx->pc = 0x1ADDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADDD8u;
            // 0x1adddc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADDE0u; }
        if (ctx->pc != 0x1ADDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADDE0u; }
        if (ctx->pc != 0x1ADDE0u) { return; }
    }
    ctx->pc = 0x1ADDE0u;
label_1adde0:
    // 0x1adde0: 0x8f828cfc  lw          $v0, -0x7304($gp)
    ctx->pc = 0x1adde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
label_1adde4:
    // 0x1adde4: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_1adde8:
    if (ctx->pc == 0x1ADDE8u) {
        ctx->pc = 0x1ADDE8u;
            // 0x1adde8: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x1ADDECu;
        goto label_1addec;
    }
    ctx->pc = 0x1ADDE4u;
    {
        const bool branch_taken_0x1adde4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1ADDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADDE4u;
            // 0x1adde8: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adde4) {
            ctx->pc = 0x1ADE0Cu;
            goto label_1ade0c;
        }
    }
    ctx->pc = 0x1ADDECu;
label_1addec:
    // 0x1addec: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x1addecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_1addf0:
    // 0x1addf0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1addf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1addf4:
    // 0x1addf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1addf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1addf8:
    // 0x1addf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1addf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1addfc:
    // 0x1addfc: 0xc04d320  jal         func_134C80
label_1ade00:
    if (ctx->pc == 0x1ADE00u) {
        ctx->pc = 0x1ADE00u;
            // 0x1ade00: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x1ADE04u;
        goto label_1ade04;
    }
    ctx->pc = 0x1ADDFCu;
    SET_GPR_U32(ctx, 31, 0x1ADE04u);
    ctx->pc = 0x1ADE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADDFCu;
            // 0x1ade00: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE04u; }
        if (ctx->pc != 0x1ADE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE04u; }
        if (ctx->pc != 0x1ADE04u) { return; }
    }
    ctx->pc = 0x1ADE04u;
label_1ade04:
    // 0x1ade04: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ade08:
    if (ctx->pc == 0x1ADE08u) {
        ctx->pc = 0x1ADE08u;
            // 0x1ade08: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->pc = 0x1ADE0Cu;
        goto label_1ade0c;
    }
    ctx->pc = 0x1ADE04u;
    {
        const bool branch_taken_0x1ade04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE04u;
            // 0x1ade08: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade04) {
            ctx->pc = 0x1ADE24u;
            goto label_1ade24;
        }
    }
    ctx->pc = 0x1ADE0Cu;
label_1ade0c:
    // 0x1ade0c: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x1ade0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_1ade10:
    // 0x1ade10: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ade10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ade14:
    // 0x1ade14: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ade14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ade18:
    // 0x1ade18: 0xc04d320  jal         func_134C80
label_1ade1c:
    if (ctx->pc == 0x1ADE1Cu) {
        ctx->pc = 0x1ADE1Cu;
            // 0x1ade1c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x1ADE20u;
        goto label_1ade20;
    }
    ctx->pc = 0x1ADE18u;
    SET_GPR_U32(ctx, 31, 0x1ADE20u);
    ctx->pc = 0x1ADE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE18u;
            // 0x1ade1c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE20u; }
        if (ctx->pc != 0x1ADE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE20u; }
        if (ctx->pc != 0x1ADE20u) { return; }
    }
    ctx->pc = 0x1ADE20u;
label_1ade20:
    // 0x1ade20: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x1ade20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_1ade24:
    // 0x1ade24: 0x240501c2  addiu       $a1, $zero, 0x1C2
    ctx->pc = 0x1ade24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
label_1ade28:
    // 0x1ade28: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1ade28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ade2c:
    // 0x1ade2c: 0xc04d2c8  jal         func_134B20
label_1ade30:
    if (ctx->pc == 0x1ADE30u) {
        ctx->pc = 0x1ADE30u;
            // 0x1ade30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE34u;
        goto label_1ade34;
    }
    ctx->pc = 0x1ADE2Cu;
    SET_GPR_U32(ctx, 31, 0x1ADE34u);
    ctx->pc = 0x1ADE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE2Cu;
            // 0x1ade30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE34u; }
        if (ctx->pc != 0x1ADE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE34u; }
        if (ctx->pc != 0x1ADE34u) { return; }
    }
    ctx->pc = 0x1ADE34u;
label_1ade34:
    // 0x1ade34: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x1ade34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_1ade38:
    // 0x1ade38: 0x240501e0  addiu       $a1, $zero, 0x1E0
    ctx->pc = 0x1ade38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
label_1ade3c:
    // 0x1ade3c: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x1ade3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1ade40:
    // 0x1ade40: 0xc04d2c8  jal         func_134B20
label_1ade44:
    if (ctx->pc == 0x1ADE44u) {
        ctx->pc = 0x1ADE44u;
            // 0x1ade44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE48u;
        goto label_1ade48;
    }
    ctx->pc = 0x1ADE40u;
    SET_GPR_U32(ctx, 31, 0x1ADE48u);
    ctx->pc = 0x1ADE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE40u;
            // 0x1ade44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE48u; }
        if (ctx->pc != 0x1ADE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE48u; }
        if (ctx->pc != 0x1ADE48u) { return; }
    }
    ctx->pc = 0x1ADE48u;
label_1ade48:
    // 0x1ade48: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x1ade48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_1ade4c:
    // 0x1ade4c: 0x240501c2  addiu       $a1, $zero, 0x1C2
    ctx->pc = 0x1ade4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
label_1ade50:
    // 0x1ade50: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x1ade50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1ade54:
    // 0x1ade54: 0xc04d2c8  jal         func_134B20
label_1ade58:
    if (ctx->pc == 0x1ADE58u) {
        ctx->pc = 0x1ADE58u;
            // 0x1ade58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE5Cu;
        goto label_1ade5c;
    }
    ctx->pc = 0x1ADE54u;
    SET_GPR_U32(ctx, 31, 0x1ADE5Cu);
    ctx->pc = 0x1ADE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE54u;
            // 0x1ade58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE5Cu; }
        if (ctx->pc != 0x1ADE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE5Cu; }
        if (ctx->pc != 0x1ADE5Cu) { return; }
    }
    ctx->pc = 0x1ADE5Cu;
label_1ade5c:
    // 0x1ade5c: 0xc04d1a4  jal         func_134690
label_1ade60:
    if (ctx->pc == 0x1ADE60u) {
        ctx->pc = 0x1ADE60u;
            // 0x1ade60: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->pc = 0x1ADE64u;
        goto label_1ade64;
    }
    ctx->pc = 0x1ADE5Cu;
    SET_GPR_U32(ctx, 31, 0x1ADE64u);
    ctx->pc = 0x1ADE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE5Cu;
            // 0x1ade60: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE64u; }
        if (ctx->pc != 0x1ADE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE64u; }
        if (ctx->pc != 0x1ADE64u) { return; }
    }
    ctx->pc = 0x1ADE64u;
label_1ade64:
    // 0x1ade64: 0x10000021  b           . + 4 + (0x21 << 2)
label_1ade68:
    if (ctx->pc == 0x1ADE68u) {
        ctx->pc = 0x1ADE68u;
            // 0x1ade68: 0x8f838cd8  lw          $v1, -0x7328($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937816)));
        ctx->pc = 0x1ADE6Cu;
        goto label_1ade6c;
    }
    ctx->pc = 0x1ADE64u;
    {
        const bool branch_taken_0x1ade64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE64u;
            // 0x1ade68: 0x8f838cd8  lw          $v1, -0x7328($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade64) {
            ctx->pc = 0x1ADEECu;
            goto label_1adeec;
        }
    }
    ctx->pc = 0x1ADE6Cu;
label_1ade6c:
    // 0x1ade6c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1ade6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ade70:
    // 0x1ade70: 0xc04d128  jal         func_1344A0
label_1ade74:
    if (ctx->pc == 0x1ADE74u) {
        ctx->pc = 0x1ADE78u;
        goto label_1ade78;
    }
    ctx->pc = 0x1ADE70u;
    SET_GPR_U32(ctx, 31, 0x1ADE78u);
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE78u; }
        if (ctx->pc != 0x1ADE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE78u; }
        if (ctx->pc != 0x1ADE78u) { return; }
    }
    ctx->pc = 0x1ADE78u;
label_1ade78:
    // 0x1ade78: 0x8f828cfc  lw          $v0, -0x7304($gp)
    ctx->pc = 0x1ade78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
label_1ade7c:
    // 0x1ade7c: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_1ade80:
    if (ctx->pc == 0x1ADE80u) {
        ctx->pc = 0x1ADE80u;
            // 0x1ade80: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x1ADE84u;
        goto label_1ade84;
    }
    ctx->pc = 0x1ADE7Cu;
    {
        const bool branch_taken_0x1ade7c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1ADE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE7Cu;
            // 0x1ade80: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade7c) {
            ctx->pc = 0x1ADEA4u;
            goto label_1adea4;
        }
    }
    ctx->pc = 0x1ADE84u;
label_1ade84:
    // 0x1ade84: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x1ade84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_1ade88:
    // 0x1ade88: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1ade88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1ade8c:
    // 0x1ade8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ade8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ade90:
    // 0x1ade90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ade90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ade94:
    // 0x1ade94: 0xc04d320  jal         func_134C80
label_1ade98:
    if (ctx->pc == 0x1ADE98u) {
        ctx->pc = 0x1ADE98u;
            // 0x1ade98: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x1ADE9Cu;
        goto label_1ade9c;
    }
    ctx->pc = 0x1ADE94u;
    SET_GPR_U32(ctx, 31, 0x1ADE9Cu);
    ctx->pc = 0x1ADE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE94u;
            // 0x1ade98: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE9Cu; }
        if (ctx->pc != 0x1ADE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE9Cu; }
        if (ctx->pc != 0x1ADE9Cu) { return; }
    }
    ctx->pc = 0x1ADE9Cu;
label_1ade9c:
    // 0x1ade9c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1adea0:
    if (ctx->pc == 0x1ADEA0u) {
        ctx->pc = 0x1ADEA0u;
            // 0x1adea0: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->pc = 0x1ADEA4u;
        goto label_1adea4;
    }
    ctx->pc = 0x1ADE9Cu;
    {
        const bool branch_taken_0x1ade9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE9Cu;
            // 0x1adea0: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade9c) {
            ctx->pc = 0x1ADEBCu;
            goto label_1adebc;
        }
    }
    ctx->pc = 0x1ADEA4u;
label_1adea4:
    // 0x1adea4: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x1adea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_1adea8:
    // 0x1adea8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1adea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1adeac:
    // 0x1adeac: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1adeacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1adeb0:
    // 0x1adeb0: 0xc04d320  jal         func_134C80
label_1adeb4:
    if (ctx->pc == 0x1ADEB4u) {
        ctx->pc = 0x1ADEB4u;
            // 0x1adeb4: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x1ADEB8u;
        goto label_1adeb8;
    }
    ctx->pc = 0x1ADEB0u;
    SET_GPR_U32(ctx, 31, 0x1ADEB8u);
    ctx->pc = 0x1ADEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADEB0u;
            // 0x1adeb4: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADEB8u; }
        if (ctx->pc != 0x1ADEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADEB8u; }
        if (ctx->pc != 0x1ADEB8u) { return; }
    }
    ctx->pc = 0x1ADEB8u;
label_1adeb8:
    // 0x1adeb8: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x1adeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_1adebc:
    // 0x1adebc: 0x240501c2  addiu       $a1, $zero, 0x1C2
    ctx->pc = 0x1adebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
label_1adec0:
    // 0x1adec0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1adec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1adec4:
    // 0x1adec4: 0xc04d2c8  jal         func_134B20
label_1adec8:
    if (ctx->pc == 0x1ADEC8u) {
        ctx->pc = 0x1ADEC8u;
            // 0x1adec8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADECCu;
        goto label_1adecc;
    }
    ctx->pc = 0x1ADEC4u;
    SET_GPR_U32(ctx, 31, 0x1ADECCu);
    ctx->pc = 0x1ADEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADEC4u;
            // 0x1adec8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADECCu; }
        if (ctx->pc != 0x1ADECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADECCu; }
        if (ctx->pc != 0x1ADECCu) { return; }
    }
    ctx->pc = 0x1ADECCu;
label_1adecc:
    // 0x1adecc: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x1adeccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_1aded0:
    // 0x1aded0: 0x240501e0  addiu       $a1, $zero, 0x1E0
    ctx->pc = 0x1aded0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
label_1aded4:
    // 0x1aded4: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x1aded4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1aded8:
    // 0x1aded8: 0xc04d2c8  jal         func_134B20
label_1adedc:
    if (ctx->pc == 0x1ADEDCu) {
        ctx->pc = 0x1ADEDCu;
            // 0x1adedc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADEE0u;
        goto label_1adee0;
    }
    ctx->pc = 0x1ADED8u;
    SET_GPR_U32(ctx, 31, 0x1ADEE0u);
    ctx->pc = 0x1ADEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADED8u;
            // 0x1adedc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADEE0u; }
        if (ctx->pc != 0x1ADEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADEE0u; }
        if (ctx->pc != 0x1ADEE0u) { return; }
    }
    ctx->pc = 0x1ADEE0u;
label_1adee0:
    // 0x1adee0: 0xc04d1a4  jal         func_134690
label_1adee4:
    if (ctx->pc == 0x1ADEE4u) {
        ctx->pc = 0x1ADEE4u;
            // 0x1adee4: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->pc = 0x1ADEE8u;
        goto label_1adee8;
    }
    ctx->pc = 0x1ADEE0u;
    SET_GPR_U32(ctx, 31, 0x1ADEE8u);
    ctx->pc = 0x1ADEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADEE0u;
            // 0x1adee4: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADEE8u; }
        if (ctx->pc != 0x1ADEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADEE8u; }
        if (ctx->pc != 0x1ADEE8u) { return; }
    }
    ctx->pc = 0x1ADEE8u;
label_1adee8:
    // 0x1adee8: 0x8f838cd8  lw          $v1, -0x7328($gp)
    ctx->pc = 0x1adee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937816)));
label_1adeec:
    // 0x1adeec: 0x8f828cfc  lw          $v0, -0x7304($gp)
    ctx->pc = 0x1adeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
label_1adef0:
    // 0x1adef0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1adef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1adef4:
    // 0x1adef4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1adef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1adef8:
    // 0x1adef8: 0xaf838cd8  sw          $v1, -0x7328($gp)
    ctx->pc = 0x1adef8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937816), GPR_U32(ctx, 3));
label_1adefc:
    // 0x1adefc: 0xaf828cfc  sw          $v0, -0x7304($gp)
    ctx->pc = 0x1adefcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937852), GPR_U32(ctx, 2));
label_1adf00:
    // 0x1adf00: 0x8f828cd8  lw          $v0, -0x7328($gp)
    ctx->pc = 0x1adf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937816)));
label_1adf04:
    // 0x1adf04: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_1adf08:
    if (ctx->pc == 0x1ADF08u) {
        ctx->pc = 0x1ADF0Cu;
        goto label_1adf0c;
    }
    ctx->pc = 0x1ADF04u;
    {
        const bool branch_taken_0x1adf04 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1adf04) {
            ctx->pc = 0x1ADF10u;
            goto label_1adf10;
        }
    }
    ctx->pc = 0x1ADF0Cu;
label_1adf0c:
    // 0x1adf0c: 0xaf808cd8  sw          $zero, -0x7328($gp)
    ctx->pc = 0x1adf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937816), GPR_U32(ctx, 0));
label_1adf10:
    // 0x1adf10: 0x8f828cfc  lw          $v0, -0x7304($gp)
    ctx->pc = 0x1adf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
label_1adf14:
    // 0x1adf14: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_1adf18:
    if (ctx->pc == 0x1ADF18u) {
        ctx->pc = 0x1ADF1Cu;
        goto label_1adf1c;
    }
    ctx->pc = 0x1ADF14u;
    {
        const bool branch_taken_0x1adf14 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1adf14) {
            ctx->pc = 0x1ADF20u;
            goto label_1adf20;
        }
    }
    ctx->pc = 0x1ADF1Cu;
label_1adf1c:
    // 0x1adf1c: 0xaf808cfc  sw          $zero, -0x7304($gp)
    ctx->pc = 0x1adf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937852), GPR_U32(ctx, 0));
label_1adf20:
    // 0x1adf20: 0x8f828ac8  lw          $v0, -0x7538($gp)
    ctx->pc = 0x1adf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
label_1adf24:
    // 0x1adf24: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1adf28:
    if (ctx->pc == 0x1ADF28u) {
        ctx->pc = 0x1ADF28u;
            // 0x1adf28: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1ADF2Cu;
        goto label_1adf2c;
    }
    ctx->pc = 0x1ADF24u;
    {
        const bool branch_taken_0x1adf24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF24u;
            // 0x1adf28: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf24) {
            ctx->pc = 0x1ADF58u;
            goto label_1adf58;
        }
    }
    ctx->pc = 0x1ADF2Cu;
label_1adf2c:
    // 0x1adf2c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1adf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1adf30:
    // 0x1adf30: 0xc052cf0  jal         func_14B3C0
label_1adf34:
    if (ctx->pc == 0x1ADF34u) {
        ctx->pc = 0x1ADF34u;
            // 0x1adf34: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1ADF38u;
        goto label_1adf38;
    }
    ctx->pc = 0x1ADF30u;
    SET_GPR_U32(ctx, 31, 0x1ADF38u);
    ctx->pc = 0x1ADF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF30u;
            // 0x1adf34: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADF38u; }
        if (ctx->pc != 0x1ADF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADF38u; }
        if (ctx->pc != 0x1ADF38u) { return; }
    }
    ctx->pc = 0x1ADF38u;
label_1adf38:
    // 0x1adf38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1adf3c:
    if (ctx->pc == 0x1ADF3Cu) {
        ctx->pc = 0x1ADF3Cu;
            // 0x1adf3c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1ADF40u;
        goto label_1adf40;
    }
    ctx->pc = 0x1ADF38u;
    {
        const bool branch_taken_0x1adf38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF38u;
            // 0x1adf3c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf38) {
            ctx->pc = 0x1ADF58u;
            goto label_1adf58;
        }
    }
    ctx->pc = 0x1ADF40u;
label_1adf40:
    // 0x1adf40: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x1adf40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_1adf44:
    // 0x1adf44: 0xc052d0c  jal         func_14B430
label_1adf48:
    if (ctx->pc == 0x1ADF48u) {
        ctx->pc = 0x1ADF48u;
            // 0x1adf48: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1ADF4Cu;
        goto label_1adf4c;
    }
    ctx->pc = 0x1ADF44u;
    SET_GPR_U32(ctx, 31, 0x1ADF4Cu);
    ctx->pc = 0x1ADF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF44u;
            // 0x1adf48: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADF4Cu; }
        if (ctx->pc != 0x1ADF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADF4Cu; }
        if (ctx->pc != 0x1ADF4Cu) { return; }
    }
    ctx->pc = 0x1ADF4Cu;
label_1adf4c:
    // 0x1adf4c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1adf50:
    if (ctx->pc == 0x1ADF50u) {
        ctx->pc = 0x1ADF54u;
        goto label_1adf54;
    }
    ctx->pc = 0x1ADF4Cu;
    {
        const bool branch_taken_0x1adf4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adf4c) {
            ctx->pc = 0x1ADF58u;
            goto label_1adf58;
        }
    }
    ctx->pc = 0x1ADF54u;
label_1adf54:
    // 0x1adf54: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1adf54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1adf58:
    // 0x1adf58: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1adf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1adf5c:
    // 0x1adf5c: 0x8c422f64  lw          $v0, 0x2F64($v0)
    ctx->pc = 0x1adf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12132)));
label_1adf60:
    // 0x1adf60: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1adf64:
    if (ctx->pc == 0x1ADF64u) {
        ctx->pc = 0x1ADF68u;
        goto label_1adf68;
    }
    ctx->pc = 0x1ADF60u;
    {
        const bool branch_taken_0x1adf60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adf60) {
            ctx->pc = 0x1ADF6Cu;
            goto label_1adf6c;
        }
    }
    ctx->pc = 0x1ADF68u;
label_1adf68:
    // 0x1adf68: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1adf68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1adf6c:
    // 0x1adf6c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1adf70:
    if (ctx->pc == 0x1ADF70u) {
        ctx->pc = 0x1ADF70u;
            // 0x1adf70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ADF74u;
        goto label_1adf74;
    }
    ctx->pc = 0x1ADF6Cu;
    {
        const bool branch_taken_0x1adf6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF6Cu;
            // 0x1adf70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf6c) {
            ctx->pc = 0x1ADF88u;
            goto label_1adf88;
        }
    }
    ctx->pc = 0x1ADF74u;
label_1adf74:
    // 0x1adf74: 0xc0c2740  jal         func_309D00
label_1adf78:
    if (ctx->pc == 0x1ADF78u) {
        ctx->pc = 0x1ADF7Cu;
        goto label_1adf7c;
    }
    ctx->pc = 0x1ADF74u;
    SET_GPR_U32(ctx, 31, 0x1ADF7Cu);
    ctx->pc = 0x309D00u;
    if (runtime->hasFunction(0x309D00u)) {
        auto targetFn = runtime->lookupFunction(0x309D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADF7Cu; }
        if (ctx->pc != 0x1ADF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PauseCancel__Fv_0x309d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADF7Cu; }
        if (ctx->pc != 0x1ADF7Cu) { return; }
    }
    ctx->pc = 0x1ADF7Cu;
label_1adf7c:
    // 0x1adf7c: 0xc06a7b4  jal         func_1A9ED0
label_1adf80:
    if (ctx->pc == 0x1ADF80u) {
        ctx->pc = 0x1ADF80u;
            // 0x1adf80: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1ADF84u;
        goto label_1adf84;
    }
    ctx->pc = 0x1ADF7Cu;
    SET_GPR_U32(ctx, 31, 0x1ADF84u);
    ctx->pc = 0x1ADF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF7Cu;
            // 0x1adf80: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9ED0u;
    if (runtime->hasFunction(0x1A9ED0u)) {
        auto targetFn = runtime->lookupFunction(0x1A9ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADF84u; }
        if (ctx->pc != 0x1ADF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PreExitLoop__FP6CScene_0x1a9ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADF84u; }
        if (ctx->pc != 0x1ADF84u) { return; }
    }
    ctx->pc = 0x1ADF84u;
label_1adf84:
    // 0x1adf84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1adf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1adf88:
    // 0x1adf88: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1adf88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1adf8c:
    // 0x1adf8c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1adf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1adf90:
    // 0x1adf90: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1adf90u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1adf94:
    // 0x1adf94: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1adf94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1adf98:
    // 0x1adf98: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1adf98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1adf9c:
    // 0x1adf9c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1adf9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1adfa0:
    // 0x1adfa0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1adfa0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1adfa4:
    // 0x1adfa4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1adfa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1adfa8:
    // 0x1adfa8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1adfa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1adfac:
    // 0x1adfac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1adfacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1adfb0:
    // 0x1adfb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1adfb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1adfb4:
    // 0x1adfb4: 0x3e00008  jr          $ra
label_1adfb8:
    if (ctx->pc == 0x1ADFB8u) {
        ctx->pc = 0x1ADFB8u;
            // 0x1adfb8: 0x27bd0540  addiu       $sp, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->pc = 0x1ADFBCu;
        goto label_fallthrough_0x1adfb4;
    }
    ctx->pc = 0x1ADFB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADFB4u;
            // 0x1adfb8: 0x27bd0540  addiu       $sp, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1adfb4:
    ctx->pc = 0x1ADFBCu;
}
