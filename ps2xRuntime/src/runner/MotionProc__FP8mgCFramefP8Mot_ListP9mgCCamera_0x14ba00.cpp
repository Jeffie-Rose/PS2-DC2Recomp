#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MotionProc__FP8mgCFramefP8Mot_ListP9mgCCamera
// Address: 0x14ba00 - 0x14c34c
void MotionProc__FP8mgCFramefP8Mot_ListP9mgCCamera_0x14ba00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MotionProc__FP8mgCFramefP8Mot_ListP9mgCCamera_0x14ba00");
#endif

    switch (ctx->pc) {
        case 0x14ba00u: goto label_14ba00;
        case 0x14ba04u: goto label_14ba04;
        case 0x14ba08u: goto label_14ba08;
        case 0x14ba0cu: goto label_14ba0c;
        case 0x14ba10u: goto label_14ba10;
        case 0x14ba14u: goto label_14ba14;
        case 0x14ba18u: goto label_14ba18;
        case 0x14ba1cu: goto label_14ba1c;
        case 0x14ba20u: goto label_14ba20;
        case 0x14ba24u: goto label_14ba24;
        case 0x14ba28u: goto label_14ba28;
        case 0x14ba2cu: goto label_14ba2c;
        case 0x14ba30u: goto label_14ba30;
        case 0x14ba34u: goto label_14ba34;
        case 0x14ba38u: goto label_14ba38;
        case 0x14ba3cu: goto label_14ba3c;
        case 0x14ba40u: goto label_14ba40;
        case 0x14ba44u: goto label_14ba44;
        case 0x14ba48u: goto label_14ba48;
        case 0x14ba4cu: goto label_14ba4c;
        case 0x14ba50u: goto label_14ba50;
        case 0x14ba54u: goto label_14ba54;
        case 0x14ba58u: goto label_14ba58;
        case 0x14ba5cu: goto label_14ba5c;
        case 0x14ba60u: goto label_14ba60;
        case 0x14ba64u: goto label_14ba64;
        case 0x14ba68u: goto label_14ba68;
        case 0x14ba6cu: goto label_14ba6c;
        case 0x14ba70u: goto label_14ba70;
        case 0x14ba74u: goto label_14ba74;
        case 0x14ba78u: goto label_14ba78;
        case 0x14ba7cu: goto label_14ba7c;
        case 0x14ba80u: goto label_14ba80;
        case 0x14ba84u: goto label_14ba84;
        case 0x14ba88u: goto label_14ba88;
        case 0x14ba8cu: goto label_14ba8c;
        case 0x14ba90u: goto label_14ba90;
        case 0x14ba94u: goto label_14ba94;
        case 0x14ba98u: goto label_14ba98;
        case 0x14ba9cu: goto label_14ba9c;
        case 0x14baa0u: goto label_14baa0;
        case 0x14baa4u: goto label_14baa4;
        case 0x14baa8u: goto label_14baa8;
        case 0x14baacu: goto label_14baac;
        case 0x14bab0u: goto label_14bab0;
        case 0x14bab4u: goto label_14bab4;
        case 0x14bab8u: goto label_14bab8;
        case 0x14babcu: goto label_14babc;
        case 0x14bac0u: goto label_14bac0;
        case 0x14bac4u: goto label_14bac4;
        case 0x14bac8u: goto label_14bac8;
        case 0x14baccu: goto label_14bacc;
        case 0x14bad0u: goto label_14bad0;
        case 0x14bad4u: goto label_14bad4;
        case 0x14bad8u: goto label_14bad8;
        case 0x14badcu: goto label_14badc;
        case 0x14bae0u: goto label_14bae0;
        case 0x14bae4u: goto label_14bae4;
        case 0x14bae8u: goto label_14bae8;
        case 0x14baecu: goto label_14baec;
        case 0x14baf0u: goto label_14baf0;
        case 0x14baf4u: goto label_14baf4;
        case 0x14baf8u: goto label_14baf8;
        case 0x14bafcu: goto label_14bafc;
        case 0x14bb00u: goto label_14bb00;
        case 0x14bb04u: goto label_14bb04;
        case 0x14bb08u: goto label_14bb08;
        case 0x14bb0cu: goto label_14bb0c;
        case 0x14bb10u: goto label_14bb10;
        case 0x14bb14u: goto label_14bb14;
        case 0x14bb18u: goto label_14bb18;
        case 0x14bb1cu: goto label_14bb1c;
        case 0x14bb20u: goto label_14bb20;
        case 0x14bb24u: goto label_14bb24;
        case 0x14bb28u: goto label_14bb28;
        case 0x14bb2cu: goto label_14bb2c;
        case 0x14bb30u: goto label_14bb30;
        case 0x14bb34u: goto label_14bb34;
        case 0x14bb38u: goto label_14bb38;
        case 0x14bb3cu: goto label_14bb3c;
        case 0x14bb40u: goto label_14bb40;
        case 0x14bb44u: goto label_14bb44;
        case 0x14bb48u: goto label_14bb48;
        case 0x14bb4cu: goto label_14bb4c;
        case 0x14bb50u: goto label_14bb50;
        case 0x14bb54u: goto label_14bb54;
        case 0x14bb58u: goto label_14bb58;
        case 0x14bb5cu: goto label_14bb5c;
        case 0x14bb60u: goto label_14bb60;
        case 0x14bb64u: goto label_14bb64;
        case 0x14bb68u: goto label_14bb68;
        case 0x14bb6cu: goto label_14bb6c;
        case 0x14bb70u: goto label_14bb70;
        case 0x14bb74u: goto label_14bb74;
        case 0x14bb78u: goto label_14bb78;
        case 0x14bb7cu: goto label_14bb7c;
        case 0x14bb80u: goto label_14bb80;
        case 0x14bb84u: goto label_14bb84;
        case 0x14bb88u: goto label_14bb88;
        case 0x14bb8cu: goto label_14bb8c;
        case 0x14bb90u: goto label_14bb90;
        case 0x14bb94u: goto label_14bb94;
        case 0x14bb98u: goto label_14bb98;
        case 0x14bb9cu: goto label_14bb9c;
        case 0x14bba0u: goto label_14bba0;
        case 0x14bba4u: goto label_14bba4;
        case 0x14bba8u: goto label_14bba8;
        case 0x14bbacu: goto label_14bbac;
        case 0x14bbb0u: goto label_14bbb0;
        case 0x14bbb4u: goto label_14bbb4;
        case 0x14bbb8u: goto label_14bbb8;
        case 0x14bbbcu: goto label_14bbbc;
        case 0x14bbc0u: goto label_14bbc0;
        case 0x14bbc4u: goto label_14bbc4;
        case 0x14bbc8u: goto label_14bbc8;
        case 0x14bbccu: goto label_14bbcc;
        case 0x14bbd0u: goto label_14bbd0;
        case 0x14bbd4u: goto label_14bbd4;
        case 0x14bbd8u: goto label_14bbd8;
        case 0x14bbdcu: goto label_14bbdc;
        case 0x14bbe0u: goto label_14bbe0;
        case 0x14bbe4u: goto label_14bbe4;
        case 0x14bbe8u: goto label_14bbe8;
        case 0x14bbecu: goto label_14bbec;
        case 0x14bbf0u: goto label_14bbf0;
        case 0x14bbf4u: goto label_14bbf4;
        case 0x14bbf8u: goto label_14bbf8;
        case 0x14bbfcu: goto label_14bbfc;
        case 0x14bc00u: goto label_14bc00;
        case 0x14bc04u: goto label_14bc04;
        case 0x14bc08u: goto label_14bc08;
        case 0x14bc0cu: goto label_14bc0c;
        case 0x14bc10u: goto label_14bc10;
        case 0x14bc14u: goto label_14bc14;
        case 0x14bc18u: goto label_14bc18;
        case 0x14bc1cu: goto label_14bc1c;
        case 0x14bc20u: goto label_14bc20;
        case 0x14bc24u: goto label_14bc24;
        case 0x14bc28u: goto label_14bc28;
        case 0x14bc2cu: goto label_14bc2c;
        case 0x14bc30u: goto label_14bc30;
        case 0x14bc34u: goto label_14bc34;
        case 0x14bc38u: goto label_14bc38;
        case 0x14bc3cu: goto label_14bc3c;
        case 0x14bc40u: goto label_14bc40;
        case 0x14bc44u: goto label_14bc44;
        case 0x14bc48u: goto label_14bc48;
        case 0x14bc4cu: goto label_14bc4c;
        case 0x14bc50u: goto label_14bc50;
        case 0x14bc54u: goto label_14bc54;
        case 0x14bc58u: goto label_14bc58;
        case 0x14bc5cu: goto label_14bc5c;
        case 0x14bc60u: goto label_14bc60;
        case 0x14bc64u: goto label_14bc64;
        case 0x14bc68u: goto label_14bc68;
        case 0x14bc6cu: goto label_14bc6c;
        case 0x14bc70u: goto label_14bc70;
        case 0x14bc74u: goto label_14bc74;
        case 0x14bc78u: goto label_14bc78;
        case 0x14bc7cu: goto label_14bc7c;
        case 0x14bc80u: goto label_14bc80;
        case 0x14bc84u: goto label_14bc84;
        case 0x14bc88u: goto label_14bc88;
        case 0x14bc8cu: goto label_14bc8c;
        case 0x14bc90u: goto label_14bc90;
        case 0x14bc94u: goto label_14bc94;
        case 0x14bc98u: goto label_14bc98;
        case 0x14bc9cu: goto label_14bc9c;
        case 0x14bca0u: goto label_14bca0;
        case 0x14bca4u: goto label_14bca4;
        case 0x14bca8u: goto label_14bca8;
        case 0x14bcacu: goto label_14bcac;
        case 0x14bcb0u: goto label_14bcb0;
        case 0x14bcb4u: goto label_14bcb4;
        case 0x14bcb8u: goto label_14bcb8;
        case 0x14bcbcu: goto label_14bcbc;
        case 0x14bcc0u: goto label_14bcc0;
        case 0x14bcc4u: goto label_14bcc4;
        case 0x14bcc8u: goto label_14bcc8;
        case 0x14bcccu: goto label_14bccc;
        case 0x14bcd0u: goto label_14bcd0;
        case 0x14bcd4u: goto label_14bcd4;
        case 0x14bcd8u: goto label_14bcd8;
        case 0x14bcdcu: goto label_14bcdc;
        case 0x14bce0u: goto label_14bce0;
        case 0x14bce4u: goto label_14bce4;
        case 0x14bce8u: goto label_14bce8;
        case 0x14bcecu: goto label_14bcec;
        case 0x14bcf0u: goto label_14bcf0;
        case 0x14bcf4u: goto label_14bcf4;
        case 0x14bcf8u: goto label_14bcf8;
        case 0x14bcfcu: goto label_14bcfc;
        case 0x14bd00u: goto label_14bd00;
        case 0x14bd04u: goto label_14bd04;
        case 0x14bd08u: goto label_14bd08;
        case 0x14bd0cu: goto label_14bd0c;
        case 0x14bd10u: goto label_14bd10;
        case 0x14bd14u: goto label_14bd14;
        case 0x14bd18u: goto label_14bd18;
        case 0x14bd1cu: goto label_14bd1c;
        case 0x14bd20u: goto label_14bd20;
        case 0x14bd24u: goto label_14bd24;
        case 0x14bd28u: goto label_14bd28;
        case 0x14bd2cu: goto label_14bd2c;
        case 0x14bd30u: goto label_14bd30;
        case 0x14bd34u: goto label_14bd34;
        case 0x14bd38u: goto label_14bd38;
        case 0x14bd3cu: goto label_14bd3c;
        case 0x14bd40u: goto label_14bd40;
        case 0x14bd44u: goto label_14bd44;
        case 0x14bd48u: goto label_14bd48;
        case 0x14bd4cu: goto label_14bd4c;
        case 0x14bd50u: goto label_14bd50;
        case 0x14bd54u: goto label_14bd54;
        case 0x14bd58u: goto label_14bd58;
        case 0x14bd5cu: goto label_14bd5c;
        case 0x14bd60u: goto label_14bd60;
        case 0x14bd64u: goto label_14bd64;
        case 0x14bd68u: goto label_14bd68;
        case 0x14bd6cu: goto label_14bd6c;
        case 0x14bd70u: goto label_14bd70;
        case 0x14bd74u: goto label_14bd74;
        case 0x14bd78u: goto label_14bd78;
        case 0x14bd7cu: goto label_14bd7c;
        case 0x14bd80u: goto label_14bd80;
        case 0x14bd84u: goto label_14bd84;
        case 0x14bd88u: goto label_14bd88;
        case 0x14bd8cu: goto label_14bd8c;
        case 0x14bd90u: goto label_14bd90;
        case 0x14bd94u: goto label_14bd94;
        case 0x14bd98u: goto label_14bd98;
        case 0x14bd9cu: goto label_14bd9c;
        case 0x14bda0u: goto label_14bda0;
        case 0x14bda4u: goto label_14bda4;
        case 0x14bda8u: goto label_14bda8;
        case 0x14bdacu: goto label_14bdac;
        case 0x14bdb0u: goto label_14bdb0;
        case 0x14bdb4u: goto label_14bdb4;
        case 0x14bdb8u: goto label_14bdb8;
        case 0x14bdbcu: goto label_14bdbc;
        case 0x14bdc0u: goto label_14bdc0;
        case 0x14bdc4u: goto label_14bdc4;
        case 0x14bdc8u: goto label_14bdc8;
        case 0x14bdccu: goto label_14bdcc;
        case 0x14bdd0u: goto label_14bdd0;
        case 0x14bdd4u: goto label_14bdd4;
        case 0x14bdd8u: goto label_14bdd8;
        case 0x14bddcu: goto label_14bddc;
        case 0x14bde0u: goto label_14bde0;
        case 0x14bde4u: goto label_14bde4;
        case 0x14bde8u: goto label_14bde8;
        case 0x14bdecu: goto label_14bdec;
        case 0x14bdf0u: goto label_14bdf0;
        case 0x14bdf4u: goto label_14bdf4;
        case 0x14bdf8u: goto label_14bdf8;
        case 0x14bdfcu: goto label_14bdfc;
        case 0x14be00u: goto label_14be00;
        case 0x14be04u: goto label_14be04;
        case 0x14be08u: goto label_14be08;
        case 0x14be0cu: goto label_14be0c;
        case 0x14be10u: goto label_14be10;
        case 0x14be14u: goto label_14be14;
        case 0x14be18u: goto label_14be18;
        case 0x14be1cu: goto label_14be1c;
        case 0x14be20u: goto label_14be20;
        case 0x14be24u: goto label_14be24;
        case 0x14be28u: goto label_14be28;
        case 0x14be2cu: goto label_14be2c;
        case 0x14be30u: goto label_14be30;
        case 0x14be34u: goto label_14be34;
        case 0x14be38u: goto label_14be38;
        case 0x14be3cu: goto label_14be3c;
        case 0x14be40u: goto label_14be40;
        case 0x14be44u: goto label_14be44;
        case 0x14be48u: goto label_14be48;
        case 0x14be4cu: goto label_14be4c;
        case 0x14be50u: goto label_14be50;
        case 0x14be54u: goto label_14be54;
        case 0x14be58u: goto label_14be58;
        case 0x14be5cu: goto label_14be5c;
        case 0x14be60u: goto label_14be60;
        case 0x14be64u: goto label_14be64;
        case 0x14be68u: goto label_14be68;
        case 0x14be6cu: goto label_14be6c;
        case 0x14be70u: goto label_14be70;
        case 0x14be74u: goto label_14be74;
        case 0x14be78u: goto label_14be78;
        case 0x14be7cu: goto label_14be7c;
        case 0x14be80u: goto label_14be80;
        case 0x14be84u: goto label_14be84;
        case 0x14be88u: goto label_14be88;
        case 0x14be8cu: goto label_14be8c;
        case 0x14be90u: goto label_14be90;
        case 0x14be94u: goto label_14be94;
        case 0x14be98u: goto label_14be98;
        case 0x14be9cu: goto label_14be9c;
        case 0x14bea0u: goto label_14bea0;
        case 0x14bea4u: goto label_14bea4;
        case 0x14bea8u: goto label_14bea8;
        case 0x14beacu: goto label_14beac;
        case 0x14beb0u: goto label_14beb0;
        case 0x14beb4u: goto label_14beb4;
        case 0x14beb8u: goto label_14beb8;
        case 0x14bebcu: goto label_14bebc;
        case 0x14bec0u: goto label_14bec0;
        case 0x14bec4u: goto label_14bec4;
        case 0x14bec8u: goto label_14bec8;
        case 0x14beccu: goto label_14becc;
        case 0x14bed0u: goto label_14bed0;
        case 0x14bed4u: goto label_14bed4;
        case 0x14bed8u: goto label_14bed8;
        case 0x14bedcu: goto label_14bedc;
        case 0x14bee0u: goto label_14bee0;
        case 0x14bee4u: goto label_14bee4;
        case 0x14bee8u: goto label_14bee8;
        case 0x14beecu: goto label_14beec;
        case 0x14bef0u: goto label_14bef0;
        case 0x14bef4u: goto label_14bef4;
        case 0x14bef8u: goto label_14bef8;
        case 0x14befcu: goto label_14befc;
        case 0x14bf00u: goto label_14bf00;
        case 0x14bf04u: goto label_14bf04;
        case 0x14bf08u: goto label_14bf08;
        case 0x14bf0cu: goto label_14bf0c;
        case 0x14bf10u: goto label_14bf10;
        case 0x14bf14u: goto label_14bf14;
        case 0x14bf18u: goto label_14bf18;
        case 0x14bf1cu: goto label_14bf1c;
        case 0x14bf20u: goto label_14bf20;
        case 0x14bf24u: goto label_14bf24;
        case 0x14bf28u: goto label_14bf28;
        case 0x14bf2cu: goto label_14bf2c;
        case 0x14bf30u: goto label_14bf30;
        case 0x14bf34u: goto label_14bf34;
        case 0x14bf38u: goto label_14bf38;
        case 0x14bf3cu: goto label_14bf3c;
        case 0x14bf40u: goto label_14bf40;
        case 0x14bf44u: goto label_14bf44;
        case 0x14bf48u: goto label_14bf48;
        case 0x14bf4cu: goto label_14bf4c;
        case 0x14bf50u: goto label_14bf50;
        case 0x14bf54u: goto label_14bf54;
        case 0x14bf58u: goto label_14bf58;
        case 0x14bf5cu: goto label_14bf5c;
        case 0x14bf60u: goto label_14bf60;
        case 0x14bf64u: goto label_14bf64;
        case 0x14bf68u: goto label_14bf68;
        case 0x14bf6cu: goto label_14bf6c;
        case 0x14bf70u: goto label_14bf70;
        case 0x14bf74u: goto label_14bf74;
        case 0x14bf78u: goto label_14bf78;
        case 0x14bf7cu: goto label_14bf7c;
        case 0x14bf80u: goto label_14bf80;
        case 0x14bf84u: goto label_14bf84;
        case 0x14bf88u: goto label_14bf88;
        case 0x14bf8cu: goto label_14bf8c;
        case 0x14bf90u: goto label_14bf90;
        case 0x14bf94u: goto label_14bf94;
        case 0x14bf98u: goto label_14bf98;
        case 0x14bf9cu: goto label_14bf9c;
        case 0x14bfa0u: goto label_14bfa0;
        case 0x14bfa4u: goto label_14bfa4;
        case 0x14bfa8u: goto label_14bfa8;
        case 0x14bfacu: goto label_14bfac;
        case 0x14bfb0u: goto label_14bfb0;
        case 0x14bfb4u: goto label_14bfb4;
        case 0x14bfb8u: goto label_14bfb8;
        case 0x14bfbcu: goto label_14bfbc;
        case 0x14bfc0u: goto label_14bfc0;
        case 0x14bfc4u: goto label_14bfc4;
        case 0x14bfc8u: goto label_14bfc8;
        case 0x14bfccu: goto label_14bfcc;
        case 0x14bfd0u: goto label_14bfd0;
        case 0x14bfd4u: goto label_14bfd4;
        case 0x14bfd8u: goto label_14bfd8;
        case 0x14bfdcu: goto label_14bfdc;
        case 0x14bfe0u: goto label_14bfe0;
        case 0x14bfe4u: goto label_14bfe4;
        case 0x14bfe8u: goto label_14bfe8;
        case 0x14bfecu: goto label_14bfec;
        case 0x14bff0u: goto label_14bff0;
        case 0x14bff4u: goto label_14bff4;
        case 0x14bff8u: goto label_14bff8;
        case 0x14bffcu: goto label_14bffc;
        case 0x14c000u: goto label_14c000;
        case 0x14c004u: goto label_14c004;
        case 0x14c008u: goto label_14c008;
        case 0x14c00cu: goto label_14c00c;
        case 0x14c010u: goto label_14c010;
        case 0x14c014u: goto label_14c014;
        case 0x14c018u: goto label_14c018;
        case 0x14c01cu: goto label_14c01c;
        case 0x14c020u: goto label_14c020;
        case 0x14c024u: goto label_14c024;
        case 0x14c028u: goto label_14c028;
        case 0x14c02cu: goto label_14c02c;
        case 0x14c030u: goto label_14c030;
        case 0x14c034u: goto label_14c034;
        case 0x14c038u: goto label_14c038;
        case 0x14c03cu: goto label_14c03c;
        case 0x14c040u: goto label_14c040;
        case 0x14c044u: goto label_14c044;
        case 0x14c048u: goto label_14c048;
        case 0x14c04cu: goto label_14c04c;
        case 0x14c050u: goto label_14c050;
        case 0x14c054u: goto label_14c054;
        case 0x14c058u: goto label_14c058;
        case 0x14c05cu: goto label_14c05c;
        case 0x14c060u: goto label_14c060;
        case 0x14c064u: goto label_14c064;
        case 0x14c068u: goto label_14c068;
        case 0x14c06cu: goto label_14c06c;
        case 0x14c070u: goto label_14c070;
        case 0x14c074u: goto label_14c074;
        case 0x14c078u: goto label_14c078;
        case 0x14c07cu: goto label_14c07c;
        case 0x14c080u: goto label_14c080;
        case 0x14c084u: goto label_14c084;
        case 0x14c088u: goto label_14c088;
        case 0x14c08cu: goto label_14c08c;
        case 0x14c090u: goto label_14c090;
        case 0x14c094u: goto label_14c094;
        case 0x14c098u: goto label_14c098;
        case 0x14c09cu: goto label_14c09c;
        case 0x14c0a0u: goto label_14c0a0;
        case 0x14c0a4u: goto label_14c0a4;
        case 0x14c0a8u: goto label_14c0a8;
        case 0x14c0acu: goto label_14c0ac;
        case 0x14c0b0u: goto label_14c0b0;
        case 0x14c0b4u: goto label_14c0b4;
        case 0x14c0b8u: goto label_14c0b8;
        case 0x14c0bcu: goto label_14c0bc;
        case 0x14c0c0u: goto label_14c0c0;
        case 0x14c0c4u: goto label_14c0c4;
        case 0x14c0c8u: goto label_14c0c8;
        case 0x14c0ccu: goto label_14c0cc;
        case 0x14c0d0u: goto label_14c0d0;
        case 0x14c0d4u: goto label_14c0d4;
        case 0x14c0d8u: goto label_14c0d8;
        case 0x14c0dcu: goto label_14c0dc;
        case 0x14c0e0u: goto label_14c0e0;
        case 0x14c0e4u: goto label_14c0e4;
        case 0x14c0e8u: goto label_14c0e8;
        case 0x14c0ecu: goto label_14c0ec;
        case 0x14c0f0u: goto label_14c0f0;
        case 0x14c0f4u: goto label_14c0f4;
        case 0x14c0f8u: goto label_14c0f8;
        case 0x14c0fcu: goto label_14c0fc;
        case 0x14c100u: goto label_14c100;
        case 0x14c104u: goto label_14c104;
        case 0x14c108u: goto label_14c108;
        case 0x14c10cu: goto label_14c10c;
        case 0x14c110u: goto label_14c110;
        case 0x14c114u: goto label_14c114;
        case 0x14c118u: goto label_14c118;
        case 0x14c11cu: goto label_14c11c;
        case 0x14c120u: goto label_14c120;
        case 0x14c124u: goto label_14c124;
        case 0x14c128u: goto label_14c128;
        case 0x14c12cu: goto label_14c12c;
        case 0x14c130u: goto label_14c130;
        case 0x14c134u: goto label_14c134;
        case 0x14c138u: goto label_14c138;
        case 0x14c13cu: goto label_14c13c;
        case 0x14c140u: goto label_14c140;
        case 0x14c144u: goto label_14c144;
        case 0x14c148u: goto label_14c148;
        case 0x14c14cu: goto label_14c14c;
        case 0x14c150u: goto label_14c150;
        case 0x14c154u: goto label_14c154;
        case 0x14c158u: goto label_14c158;
        case 0x14c15cu: goto label_14c15c;
        case 0x14c160u: goto label_14c160;
        case 0x14c164u: goto label_14c164;
        case 0x14c168u: goto label_14c168;
        case 0x14c16cu: goto label_14c16c;
        case 0x14c170u: goto label_14c170;
        case 0x14c174u: goto label_14c174;
        case 0x14c178u: goto label_14c178;
        case 0x14c17cu: goto label_14c17c;
        case 0x14c180u: goto label_14c180;
        case 0x14c184u: goto label_14c184;
        case 0x14c188u: goto label_14c188;
        case 0x14c18cu: goto label_14c18c;
        case 0x14c190u: goto label_14c190;
        case 0x14c194u: goto label_14c194;
        case 0x14c198u: goto label_14c198;
        case 0x14c19cu: goto label_14c19c;
        case 0x14c1a0u: goto label_14c1a0;
        case 0x14c1a4u: goto label_14c1a4;
        case 0x14c1a8u: goto label_14c1a8;
        case 0x14c1acu: goto label_14c1ac;
        case 0x14c1b0u: goto label_14c1b0;
        case 0x14c1b4u: goto label_14c1b4;
        case 0x14c1b8u: goto label_14c1b8;
        case 0x14c1bcu: goto label_14c1bc;
        case 0x14c1c0u: goto label_14c1c0;
        case 0x14c1c4u: goto label_14c1c4;
        case 0x14c1c8u: goto label_14c1c8;
        case 0x14c1ccu: goto label_14c1cc;
        case 0x14c1d0u: goto label_14c1d0;
        case 0x14c1d4u: goto label_14c1d4;
        case 0x14c1d8u: goto label_14c1d8;
        case 0x14c1dcu: goto label_14c1dc;
        case 0x14c1e0u: goto label_14c1e0;
        case 0x14c1e4u: goto label_14c1e4;
        case 0x14c1e8u: goto label_14c1e8;
        case 0x14c1ecu: goto label_14c1ec;
        case 0x14c1f0u: goto label_14c1f0;
        case 0x14c1f4u: goto label_14c1f4;
        case 0x14c1f8u: goto label_14c1f8;
        case 0x14c1fcu: goto label_14c1fc;
        case 0x14c200u: goto label_14c200;
        case 0x14c204u: goto label_14c204;
        case 0x14c208u: goto label_14c208;
        case 0x14c20cu: goto label_14c20c;
        case 0x14c210u: goto label_14c210;
        case 0x14c214u: goto label_14c214;
        case 0x14c218u: goto label_14c218;
        case 0x14c21cu: goto label_14c21c;
        case 0x14c220u: goto label_14c220;
        case 0x14c224u: goto label_14c224;
        case 0x14c228u: goto label_14c228;
        case 0x14c22cu: goto label_14c22c;
        case 0x14c230u: goto label_14c230;
        case 0x14c234u: goto label_14c234;
        case 0x14c238u: goto label_14c238;
        case 0x14c23cu: goto label_14c23c;
        case 0x14c240u: goto label_14c240;
        case 0x14c244u: goto label_14c244;
        case 0x14c248u: goto label_14c248;
        case 0x14c24cu: goto label_14c24c;
        case 0x14c250u: goto label_14c250;
        case 0x14c254u: goto label_14c254;
        case 0x14c258u: goto label_14c258;
        case 0x14c25cu: goto label_14c25c;
        case 0x14c260u: goto label_14c260;
        case 0x14c264u: goto label_14c264;
        case 0x14c268u: goto label_14c268;
        case 0x14c26cu: goto label_14c26c;
        case 0x14c270u: goto label_14c270;
        case 0x14c274u: goto label_14c274;
        case 0x14c278u: goto label_14c278;
        case 0x14c27cu: goto label_14c27c;
        case 0x14c280u: goto label_14c280;
        case 0x14c284u: goto label_14c284;
        case 0x14c288u: goto label_14c288;
        case 0x14c28cu: goto label_14c28c;
        case 0x14c290u: goto label_14c290;
        case 0x14c294u: goto label_14c294;
        case 0x14c298u: goto label_14c298;
        case 0x14c29cu: goto label_14c29c;
        case 0x14c2a0u: goto label_14c2a0;
        case 0x14c2a4u: goto label_14c2a4;
        case 0x14c2a8u: goto label_14c2a8;
        case 0x14c2acu: goto label_14c2ac;
        case 0x14c2b0u: goto label_14c2b0;
        case 0x14c2b4u: goto label_14c2b4;
        case 0x14c2b8u: goto label_14c2b8;
        case 0x14c2bcu: goto label_14c2bc;
        case 0x14c2c0u: goto label_14c2c0;
        case 0x14c2c4u: goto label_14c2c4;
        case 0x14c2c8u: goto label_14c2c8;
        case 0x14c2ccu: goto label_14c2cc;
        case 0x14c2d0u: goto label_14c2d0;
        case 0x14c2d4u: goto label_14c2d4;
        case 0x14c2d8u: goto label_14c2d8;
        case 0x14c2dcu: goto label_14c2dc;
        case 0x14c2e0u: goto label_14c2e0;
        case 0x14c2e4u: goto label_14c2e4;
        case 0x14c2e8u: goto label_14c2e8;
        case 0x14c2ecu: goto label_14c2ec;
        case 0x14c2f0u: goto label_14c2f0;
        case 0x14c2f4u: goto label_14c2f4;
        case 0x14c2f8u: goto label_14c2f8;
        case 0x14c2fcu: goto label_14c2fc;
        case 0x14c300u: goto label_14c300;
        case 0x14c304u: goto label_14c304;
        case 0x14c308u: goto label_14c308;
        case 0x14c30cu: goto label_14c30c;
        case 0x14c310u: goto label_14c310;
        case 0x14c314u: goto label_14c314;
        case 0x14c318u: goto label_14c318;
        case 0x14c31cu: goto label_14c31c;
        case 0x14c320u: goto label_14c320;
        case 0x14c324u: goto label_14c324;
        case 0x14c328u: goto label_14c328;
        case 0x14c32cu: goto label_14c32c;
        case 0x14c330u: goto label_14c330;
        case 0x14c334u: goto label_14c334;
        case 0x14c338u: goto label_14c338;
        case 0x14c33cu: goto label_14c33c;
        case 0x14c340u: goto label_14c340;
        case 0x14c344u: goto label_14c344;
        case 0x14c348u: goto label_14c348;
        default: break;
    }

    ctx->pc = 0x14ba00u;

label_14ba00:
    // 0x14ba00: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x14ba00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_14ba04:
    // 0x14ba04: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x14ba04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_14ba08:
    // 0x14ba08: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x14ba08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_14ba0c:
    // 0x14ba0c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x14ba0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_14ba10:
    // 0x14ba10: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x14ba10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14ba14:
    // 0x14ba14: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14ba14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_14ba18:
    // 0x14ba18: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14ba18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_14ba1c:
    // 0x14ba1c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x14ba1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_14ba20:
    // 0x14ba20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14ba20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_14ba24:
    // 0x14ba24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14ba24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_14ba28:
    // 0x14ba28: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x14ba28u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_14ba2c:
    // 0x14ba2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14ba2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14ba30:
    // 0x14ba30: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14ba30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_14ba34:
    // 0x14ba34: 0xc0a24b0  jal         func_2892C0
label_14ba38:
    if (ctx->pc == 0x14BA38u) {
        ctx->pc = 0x14BA38u;
            // 0x14ba38: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x14BA3Cu;
        goto label_14ba3c;
    }
    ctx->pc = 0x14BA34u;
    SET_GPR_U32(ctx, 31, 0x14BA3Cu);
    ctx->pc = 0x14BA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BA34u;
            // 0x14ba38: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA3Cu; }
        if (ctx->pc != 0x14BA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA3Cu; }
        if (ctx->pc != 0x14BA3Cu) { return; }
    }
    ctx->pc = 0x14BA3Cu;
label_14ba3c:
    // 0x14ba3c: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x14ba3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_14ba40:
    // 0x14ba40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14ba40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14ba44:
    // 0x14ba44: 0x8082a  slt         $at, $zero, $t0
    ctx->pc = 0x14ba44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_14ba48:
    // 0x14ba48: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_14ba4c:
    if (ctx->pc == 0x14BA4Cu) {
        ctx->pc = 0x14BA4Cu;
            // 0x14ba4c: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14BA50u;
        goto label_14ba50;
    }
    ctx->pc = 0x14BA48u;
    {
        const bool branch_taken_0x14ba48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BA48u;
            // 0x14ba4c: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ba48) {
            ctx->pc = 0x14BA94u;
            goto label_14ba94;
        }
    }
    ctx->pc = 0x14BA50u;
label_14ba50:
    // 0x14ba50: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x14ba50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_14ba54:
    // 0x14ba54: 0x0  nop
    ctx->pc = 0x14ba54u;
    // NOP
label_14ba58:
    // 0x14ba58: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x14ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_14ba5c:
    // 0x14ba5c: 0x33843  sra         $a3, $v1, 1
    ctx->pc = 0x14ba5cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 1));
label_14ba60:
    // 0x14ba60: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x14ba60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_14ba64:
    // 0x14ba64: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14ba64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_14ba68:
    // 0x14ba68: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14ba68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14ba6c:
    // 0x14ba6c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x14ba6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_14ba70:
    // 0x14ba70: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_14ba74:
    if (ctx->pc == 0x14BA74u) {
        ctx->pc = 0x14BA78u;
        goto label_14ba78;
    }
    ctx->pc = 0x14BA70u;
    {
        const bool branch_taken_0x14ba70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ba70) {
            ctx->pc = 0x14BA80u;
            goto label_14ba80;
        }
    }
    ctx->pc = 0x14BA78u;
label_14ba78:
    // 0x14ba78: 0x10000002  b           . + 4 + (0x2 << 2)
label_14ba7c:
    if (ctx->pc == 0x14BA7Cu) {
        ctx->pc = 0x14BA7Cu;
            // 0x14ba7c: 0x24e60001  addiu       $a2, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->pc = 0x14BA80u;
        goto label_14ba80;
    }
    ctx->pc = 0x14BA78u;
    {
        const bool branch_taken_0x14ba78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BA78u;
            // 0x14ba7c: 0x24e60001  addiu       $a2, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ba78) {
            ctx->pc = 0x14BA84u;
            goto label_14ba84;
        }
    }
    ctx->pc = 0x14BA80u;
label_14ba80:
    // 0x14ba80: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x14ba80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_14ba84:
    // 0x14ba84: 0x0  nop
    ctx->pc = 0x14ba84u;
    // NOP
label_14ba88:
    // 0x14ba88: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x14ba88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_14ba8c:
    // 0x14ba8c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_14ba90:
    if (ctx->pc == 0x14BA90u) {
        ctx->pc = 0x14BA90u;
            // 0x14ba90: 0xc51821  addu        $v1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->pc = 0x14BA94u;
        goto label_14ba94;
    }
    ctx->pc = 0x14BA8Cu;
    {
        const bool branch_taken_0x14ba8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BA8Cu;
            // 0x14ba90: 0xc51821  addu        $v1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ba8c) {
            ctx->pc = 0x14BA5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14ba5c;
        }
    }
    ctx->pc = 0x14BA94u;
label_14ba94:
    // 0x14ba94: 0x0  nop
    ctx->pc = 0x14ba94u;
    // NOP
label_14ba98:
    // 0x14ba98: 0x24d4ffff  addiu       $s4, $a2, -0x1
    ctx->pc = 0x14ba98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_14ba9c:
    // 0x14ba9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14baa0:
    // 0x14baa0: 0x26910001  addiu       $s1, $s4, 0x1
    ctx->pc = 0x14baa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_14baa4:
    // 0x14baa4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x14baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_14baa8:
    // 0x14baa8: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x14baa8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_14baac:
    // 0x14baac: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_14bab0:
    if (ctx->pc == 0x14BAB0u) {
        ctx->pc = 0x14BAB4u;
        goto label_14bab4;
    }
    ctx->pc = 0x14BAACu;
    {
        const bool branch_taken_0x14baac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14baac) {
            ctx->pc = 0x14BAB8u;
            goto label_14bab8;
        }
    }
    ctx->pc = 0x14BAB4u;
label_14bab4:
    // 0x14bab4: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x14bab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14bab8:
    // 0x14bab8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x14bab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_14babc:
    // 0x14babc: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x14babcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_14bac0:
    // 0x14bac0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x14bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_14bac4:
    // 0x14bac4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x14bac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_14bac8:
    // 0x14bac8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14bac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_14bacc:
    // 0x14bacc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14baccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14bad0:
    // 0x14bad0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14bad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14bad4:
    // 0x14bad4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x14bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_14bad8:
    // 0x14bad8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_14badc:
    if (ctx->pc == 0x14BADCu) {
        ctx->pc = 0x14BADCu;
            // 0x14badc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x14BAE0u;
        goto label_14bae0;
    }
    ctx->pc = 0x14BAD8u;
    {
        const bool branch_taken_0x14bad8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14BADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BAD8u;
            // 0x14badc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bad8) {
            ctx->pc = 0x14BAECu;
            goto label_14baec;
        }
    }
    ctx->pc = 0x14BAE0u;
label_14bae0:
    // 0x14bae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14bae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14bae4:
    // 0x14bae4: 0x10000007  b           . + 4 + (0x7 << 2)
label_14bae8:
    if (ctx->pc == 0x14BAE8u) {
        ctx->pc = 0x14BAE8u;
            // 0x14bae8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x14BAECu;
        goto label_14baec;
    }
    ctx->pc = 0x14BAE4u;
    {
        const bool branch_taken_0x14bae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BAE4u;
            // 0x14bae8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bae4) {
            ctx->pc = 0x14BB04u;
            goto label_14bb04;
        }
    }
    ctx->pc = 0x14BAECu;
label_14baec:
    // 0x14baec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14baecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_14baf0:
    // 0x14baf0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14baf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_14baf4:
    // 0x14baf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14baf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14baf8:
    // 0x14baf8: 0x0  nop
    ctx->pc = 0x14baf8u;
    // NOP
label_14bafc:
    // 0x14bafc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x14bafcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_14bb00:
    // 0x14bb00: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x14bb00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_14bb04:
    // 0x14bb04: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_14bb08:
    if (ctx->pc == 0x14BB08u) {
        ctx->pc = 0x14BB08u;
            // 0x14bb08: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x14BB0Cu;
        goto label_14bb0c;
    }
    ctx->pc = 0x14BB04u;
    {
        const bool branch_taken_0x14bb04 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x14BB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB04u;
            // 0x14bb08: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb04) {
            ctx->pc = 0x14BB18u;
            goto label_14bb18;
        }
    }
    ctx->pc = 0x14BB0Cu;
label_14bb0c:
    // 0x14bb0c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x14bb0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14bb10:
    // 0x14bb10: 0x10000007  b           . + 4 + (0x7 << 2)
label_14bb14:
    if (ctx->pc == 0x14BB14u) {
        ctx->pc = 0x14BB14u;
            // 0x14bb14: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x14BB18u;
        goto label_14bb18;
    }
    ctx->pc = 0x14BB10u;
    {
        const bool branch_taken_0x14bb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB10u;
            // 0x14bb14: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb10) {
            ctx->pc = 0x14BB30u;
            goto label_14bb30;
        }
    }
    ctx->pc = 0x14BB18u;
label_14bb18:
    // 0x14bb18: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x14bb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_14bb1c:
    // 0x14bb1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14bb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_14bb20:
    // 0x14bb20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14bb20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14bb24:
    // 0x14bb24: 0x0  nop
    ctx->pc = 0x14bb24u;
    // NOP
label_14bb28:
    // 0x14bb28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14bb28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_14bb2c:
    // 0x14bb2c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x14bb2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_14bb30:
    // 0x14bb30: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x14bb30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_14bb34:
    // 0x14bb34: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x14bb34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14bb38:
    // 0x14bb38: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14bb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_14bb3c:
    // 0x14bb3c: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x14bb3cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_14bb40:
    // 0x14bb40: 0x0  nop
    ctx->pc = 0x14bb40u;
    // NOP
label_14bb44:
    // 0x14bb44: 0x0  nop
    ctx->pc = 0x14bb44u;
    // NOP
label_14bb48:
    // 0x14bb48: 0xc04d9ec  jal         func_1367B0
label_14bb4c:
    if (ctx->pc == 0x14BB4Cu) {
        ctx->pc = 0x14BB50u;
        goto label_14bb50;
    }
    ctx->pc = 0x14BB48u;
    SET_GPR_U32(ctx, 31, 0x14BB50u);
    ctx->pc = 0x1367B0u;
    if (runtime->hasFunction(0x1367B0u)) {
        auto targetFn = runtime->lookupFunction(0x1367B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BB50u; }
        if (ctx->pc != 0x14BB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__8mgCFrameFi_0x1367b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BB50u; }
        if (ctx->pc != 0x14BB50u) { return; }
    }
    ctx->pc = 0x14BB50u;
label_14bb50:
    // 0x14bb50: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14bb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_14bb54:
    // 0x14bb54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14bb54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14bb58:
    // 0x14bb58: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x14bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_14bb5c:
    // 0x14bb5c: 0x106201dd  beq         $v1, $v0, . + 4 + (0x1DD << 2)
label_14bb60:
    if (ctx->pc == 0x14BB60u) {
        ctx->pc = 0x14BB60u;
            // 0x14bb60: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x14BB64u;
        goto label_14bb64;
    }
    ctx->pc = 0x14BB5Cu;
    {
        const bool branch_taken_0x14bb5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14BB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB5Cu;
            // 0x14bb60: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb5c) {
            ctx->pc = 0x14C2D4u;
            goto label_14c2d4;
        }
    }
    ctx->pc = 0x14BB64u;
label_14bb64:
    // 0x14bb64: 0x106201ca  beq         $v1, $v0, . + 4 + (0x1CA << 2)
label_14bb68:
    if (ctx->pc == 0x14BB68u) {
        ctx->pc = 0x14BB68u;
            // 0x14bb68: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->pc = 0x14BB6Cu;
        goto label_14bb6c;
    }
    ctx->pc = 0x14BB64u;
    {
        const bool branch_taken_0x14bb64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14BB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB64u;
            // 0x14bb68: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb64) {
            ctx->pc = 0x14C290u;
            goto label_14c290;
        }
    }
    ctx->pc = 0x14BB6Cu;
label_14bb6c:
    // 0x14bb6c: 0x1062019f  beq         $v1, $v0, . + 4 + (0x19F << 2)
label_14bb70:
    if (ctx->pc == 0x14BB70u) {
        ctx->pc = 0x14BB70u;
            // 0x14bb70: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x14BB74u;
        goto label_14bb74;
    }
    ctx->pc = 0x14BB6Cu;
    {
        const bool branch_taken_0x14bb6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14BB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB6Cu;
            // 0x14bb70: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb6c) {
            ctx->pc = 0x14C1ECu;
            goto label_14c1ec;
        }
    }
    ctx->pc = 0x14BB74u;
label_14bb74:
    // 0x14bb74: 0x10620182  beq         $v1, $v0, . + 4 + (0x182 << 2)
label_14bb78:
    if (ctx->pc == 0x14BB78u) {
        ctx->pc = 0x14BB78u;
            // 0x14bb78: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->pc = 0x14BB7Cu;
        goto label_14bb7c;
    }
    ctx->pc = 0x14BB74u;
    {
        const bool branch_taken_0x14bb74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14BB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB74u;
            // 0x14bb78: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb74) {
            ctx->pc = 0x14C180u;
            goto label_14c180;
        }
    }
    ctx->pc = 0x14BB7Cu;
label_14bb7c:
    // 0x14bb7c: 0x1062016b  beq         $v1, $v0, . + 4 + (0x16B << 2)
label_14bb80:
    if (ctx->pc == 0x14BB80u) {
        ctx->pc = 0x14BB80u;
            // 0x14bb80: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x14BB84u;
        goto label_14bb84;
    }
    ctx->pc = 0x14BB7Cu;
    {
        const bool branch_taken_0x14bb7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14BB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB7Cu;
            // 0x14bb80: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb7c) {
            ctx->pc = 0x14C12Cu;
            goto label_14c12c;
        }
    }
    ctx->pc = 0x14BB84u;
label_14bb84:
    // 0x14bb84: 0x1062014f  beq         $v1, $v0, . + 4 + (0x14F << 2)
label_14bb88:
    if (ctx->pc == 0x14BB88u) {
        ctx->pc = 0x14BB88u;
            // 0x14bb88: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->pc = 0x14BB8Cu;
        goto label_14bb8c;
    }
    ctx->pc = 0x14BB84u;
    {
        const bool branch_taken_0x14bb84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14BB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB84u;
            // 0x14bb88: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb84) {
            ctx->pc = 0x14C0C4u;
            goto label_14c0c4;
        }
    }
    ctx->pc = 0x14BB8Cu;
label_14bb8c:
    // 0x14bb8c: 0x10620141  beq         $v1, $v0, . + 4 + (0x141 << 2)
label_14bb90:
    if (ctx->pc == 0x14BB90u) {
        ctx->pc = 0x14BB90u;
            // 0x14bb90: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x14BB94u;
        goto label_14bb94;
    }
    ctx->pc = 0x14BB8Cu;
    {
        const bool branch_taken_0x14bb8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14BB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB8Cu;
            // 0x14bb90: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb8c) {
            ctx->pc = 0x14C094u;
            goto label_14c094;
        }
    }
    ctx->pc = 0x14BB94u;
label_14bb94:
    // 0x14bb94: 0x1062012a  beq         $v1, $v0, . + 4 + (0x12A << 2)
label_14bb98:
    if (ctx->pc == 0x14BB98u) {
        ctx->pc = 0x14BB98u;
            // 0x14bb98: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x14BB9Cu;
        goto label_14bb9c;
    }
    ctx->pc = 0x14BB94u;
    {
        const bool branch_taken_0x14bb94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14BB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB94u;
            // 0x14bb98: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb94) {
            ctx->pc = 0x14C040u;
            goto label_14c040;
        }
    }
    ctx->pc = 0x14BB9Cu;
label_14bb9c:
    // 0x14bb9c: 0x106200be  beq         $v1, $v0, . + 4 + (0xBE << 2)
label_14bba0:
    if (ctx->pc == 0x14BBA0u) {
        ctx->pc = 0x14BBA0u;
            // 0x14bba0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x14BBA4u;
        goto label_14bba4;
    }
    ctx->pc = 0x14BB9Cu;
    {
        const bool branch_taken_0x14bb9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14BBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB9Cu;
            // 0x14bba0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb9c) {
            ctx->pc = 0x14BE98u;
            goto label_14be98;
        }
    }
    ctx->pc = 0x14BBA4u;
label_14bba4:
    // 0x14bba4: 0x10620080  beq         $v1, $v0, . + 4 + (0x80 << 2)
label_14bba8:
    if (ctx->pc == 0x14BBA8u) {
        ctx->pc = 0x14BBA8u;
            // 0x14bba8: 0x3c023a83  lui         $v0, 0x3A83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
        ctx->pc = 0x14BBACu;
        goto label_14bbac;
    }
    ctx->pc = 0x14BBA4u;
    {
        const bool branch_taken_0x14bba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14BBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BBA4u;
            // 0x14bba8: 0x3c023a83  lui         $v0, 0x3A83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bba4) {
            ctx->pc = 0x14BDA8u;
            goto label_14bda8;
        }
    }
    ctx->pc = 0x14BBACu;
label_14bbac:
    // 0x14bbac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14bbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14bbb0:
    // 0x14bbb0: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
label_14bbb4:
    if (ctx->pc == 0x14BBB4u) {
        ctx->pc = 0x14BBB4u;
            // 0x14bbb4: 0x3c023a83  lui         $v0, 0x3A83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
        ctx->pc = 0x14BBB8u;
        goto label_14bbb8;
    }
    ctx->pc = 0x14BBB0u;
    {
        const bool branch_taken_0x14bbb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14BBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BBB0u;
            // 0x14bbb4: 0x3c023a83  lui         $v0, 0x3A83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bbb0) {
            ctx->pc = 0x14BCB8u;
            goto label_14bcb8;
        }
    }
    ctx->pc = 0x14BBB8u;
label_14bbb8:
    // 0x14bbb8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_14bbbc:
    if (ctx->pc == 0x14BBBCu) {
        ctx->pc = 0x14BBC0u;
        goto label_14bbc0;
    }
    ctx->pc = 0x14BBB8u;
    {
        const bool branch_taken_0x14bbb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bbb8) {
            ctx->pc = 0x14BBC8u;
            goto label_14bbc8;
        }
    }
    ctx->pc = 0x14BBC0u;
label_14bbc0:
    // 0x14bbc0: 0x100001d6  b           . + 4 + (0x1D6 << 2)
label_14bbc4:
    if (ctx->pc == 0x14BBC4u) {
        ctx->pc = 0x14BBC4u;
            // 0x14bbc4: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->pc = 0x14BBC8u;
        goto label_14bbc8;
    }
    ctx->pc = 0x14BBC0u;
    {
        const bool branch_taken_0x14bbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BBC0u;
            // 0x14bbc4: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bbc0) {
            ctx->pc = 0x14C31Cu;
            goto label_14c31c;
        }
    }
    ctx->pc = 0x14BBC8u;
label_14bbc8:
    // 0x14bbc8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14bbcc:
    // 0x14bbcc: 0x149900  sll         $s3, $s4, 4
    ctx->pc = 0x14bbccu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_14bbd0:
    // 0x14bbd0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x14bbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_14bbd4:
    // 0x14bbd4: 0xc041c5c  jal         func_107170
label_14bbd8:
    if (ctx->pc == 0x14BBD8u) {
        ctx->pc = 0x14BBD8u;
            // 0x14bbd8: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x14BBDCu;
        goto label_14bbdc;
    }
    ctx->pc = 0x14BBD4u;
    SET_GPR_U32(ctx, 31, 0x14BBDCu);
    ctx->pc = 0x14BBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BBD4u;
            // 0x14bbd8: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BBDCu; }
        if (ctx->pc != 0x14BBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BBDCu; }
        if (ctx->pc != 0x14BBDCu) { return; }
    }
    ctx->pc = 0x14BBDCu;
label_14bbdc:
    // 0x14bbdc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14bbe0:
    // 0x14bbe0: 0x118900  sll         $s1, $s1, 4
    ctx->pc = 0x14bbe0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_14bbe4:
    // 0x14bbe4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x14bbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_14bbe8:
    // 0x14bbe8: 0xc041c5c  jal         func_107170
label_14bbec:
    if (ctx->pc == 0x14BBECu) {
        ctx->pc = 0x14BBECu;
            // 0x14bbec: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->pc = 0x14BBF0u;
        goto label_14bbf0;
    }
    ctx->pc = 0x14BBE8u;
    SET_GPR_U32(ctx, 31, 0x14BBF0u);
    ctx->pc = 0x14BBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BBE8u;
            // 0x14bbec: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BBF0u; }
        if (ctx->pc != 0x14BBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BBF0u; }
        if (ctx->pc != 0x14BBF0u) { return; }
    }
    ctx->pc = 0x14BBF0u;
label_14bbf0:
    // 0x14bbf0: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x14bbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_14bbf4:
    // 0x14bbf4: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x14bbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_14bbf8:
    // 0x14bbf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14bbf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14bbfc:
    // 0x14bbfc: 0x0  nop
    ctx->pc = 0x14bbfcu;
    // NOP
label_14bc00:
    // 0x14bc00: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x14bc00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14bc04:
    // 0x14bc04: 0x0  nop
    ctx->pc = 0x14bc04u;
    // NOP
label_14bc08:
    // 0x14bc08: 0x45010015  bc1t        . + 4 + (0x15 << 2)
label_14bc0c:
    if (ctx->pc == 0x14BC0Cu) {
        ctx->pc = 0x14BC0Cu;
            // 0x14bc0c: 0x3c023a83  lui         $v0, 0x3A83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
        ctx->pc = 0x14BC10u;
        goto label_14bc10;
    }
    ctx->pc = 0x14BC08u;
    {
        const bool branch_taken_0x14bc08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14BC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BC08u;
            // 0x14bc0c: 0x3c023a83  lui         $v0, 0x3A83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc08) {
            ctx->pc = 0x14BC60u;
            goto label_14bc60;
        }
    }
    ctx->pc = 0x14BC10u;
label_14bc10:
    // 0x14bc10: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x14bc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
label_14bc14:
    // 0x14bc14: 0x3442be77  ori         $v0, $v0, 0xBE77
    ctx->pc = 0x14bc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48759);
label_14bc18:
    // 0x14bc18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14bc18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14bc1c:
    // 0x14bc1c: 0x0  nop
    ctx->pc = 0x14bc1cu;
    // NOP
label_14bc20:
    // 0x14bc20: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x14bc20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14bc24:
    // 0x14bc24: 0x0  nop
    ctx->pc = 0x14bc24u;
    // NOP
label_14bc28:
    // 0x14bc28: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_14bc2c:
    if (ctx->pc == 0x14BC2Cu) {
        ctx->pc = 0x14BC30u;
        goto label_14bc30;
    }
    ctx->pc = 0x14BC28u;
    {
        const bool branch_taken_0x14bc28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14bc28) {
            ctx->pc = 0x14BC5Cu;
            goto label_14bc5c;
        }
    }
    ctx->pc = 0x14BC30u;
label_14bc30:
    // 0x14bc30: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14bc34:
    // 0x14bc34: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x14bc34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_14bc38:
    // 0x14bc38: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x14bc38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_14bc3c:
    // 0x14bc3c: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x14bc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_14bc40:
    // 0x14bc40: 0xc052e10  jal         func_14B840
label_14bc44:
    if (ctx->pc == 0x14BC44u) {
        ctx->pc = 0x14BC44u;
            // 0x14bc44: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->pc = 0x14BC48u;
        goto label_14bc48;
    }
    ctx->pc = 0x14BC40u;
    SET_GPR_U32(ctx, 31, 0x14BC48u);
    ctx->pc = 0x14BC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BC40u;
            // 0x14bc44: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B840u;
    if (runtime->hasFunction(0x14B840u)) {
        auto targetFn = runtime->lookupFunction(0x14B840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC48u; }
        if (ctx->pc != 0x14BC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        QuatSlerp__FPfPffPf_0x14b840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC48u; }
        if (ctx->pc != 0x14BC48u) { return; }
    }
    ctx->pc = 0x14BC48u;
label_14bc48:
    // 0x14bc48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14bc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14bc4c:
    // 0x14bc4c: 0xc04d968  jal         func_1365A0
label_14bc50:
    if (ctx->pc == 0x14BC50u) {
        ctx->pc = 0x14BC50u;
            // 0x14bc50: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x14BC54u;
        goto label_14bc54;
    }
    ctx->pc = 0x14BC4Cu;
    SET_GPR_U32(ctx, 31, 0x14BC54u);
    ctx->pc = 0x14BC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BC4Cu;
            // 0x14bc50: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1365A0u;
    if (runtime->hasFunction(0x1365A0u)) {
        auto targetFn = runtime->lookupFunction(0x1365A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC54u; }
        if (ctx->pc != 0x14BC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPf_0x1365a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC54u; }
        if (ctx->pc != 0x14BC54u) { return; }
    }
    ctx->pc = 0x14BC54u;
label_14bc54:
    // 0x14bc54: 0x100001b0  b           . + 4 + (0x1B0 << 2)
label_14bc58:
    if (ctx->pc == 0x14BC58u) {
        ctx->pc = 0x14BC5Cu;
        goto label_14bc5c;
    }
    ctx->pc = 0x14BC54u;
    {
        const bool branch_taken_0x14bc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bc54) {
            ctx->pc = 0x14C318u;
            goto label_14c318;
        }
    }
    ctx->pc = 0x14BC5Cu;
label_14bc5c:
    // 0x14bc5c: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x14bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_14bc60:
    // 0x14bc60: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x14bc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_14bc64:
    // 0x14bc64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14bc64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14bc68:
    // 0x14bc68: 0x0  nop
    ctx->pc = 0x14bc68u;
    // NOP
label_14bc6c:
    // 0x14bc6c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x14bc6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14bc70:
    // 0x14bc70: 0x0  nop
    ctx->pc = 0x14bc70u;
    // NOP
label_14bc74:
    // 0x14bc74: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_14bc78:
    if (ctx->pc == 0x14BC78u) {
        ctx->pc = 0x14BC78u;
            // 0x14bc78: 0x3c023f7f  lui         $v0, 0x3F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
        ctx->pc = 0x14BC7Cu;
        goto label_14bc7c;
    }
    ctx->pc = 0x14BC74u;
    {
        const bool branch_taken_0x14bc74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14BC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BC74u;
            // 0x14bc78: 0x3c023f7f  lui         $v0, 0x3F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc74) {
            ctx->pc = 0x14BC8Cu;
            goto label_14bc8c;
        }
    }
    ctx->pc = 0x14BC7Cu;
label_14bc7c:
    // 0x14bc7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14bc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14bc80:
    // 0x14bc80: 0xc04d968  jal         func_1365A0
label_14bc84:
    if (ctx->pc == 0x14BC84u) {
        ctx->pc = 0x14BC84u;
            // 0x14bc84: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x14BC88u;
        goto label_14bc88;
    }
    ctx->pc = 0x14BC80u;
    SET_GPR_U32(ctx, 31, 0x14BC88u);
    ctx->pc = 0x14BC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BC80u;
            // 0x14bc84: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1365A0u;
    if (runtime->hasFunction(0x1365A0u)) {
        auto targetFn = runtime->lookupFunction(0x1365A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC88u; }
        if (ctx->pc != 0x14BC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPf_0x1365a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC88u; }
        if (ctx->pc != 0x14BC88u) { return; }
    }
    ctx->pc = 0x14BC88u;
label_14bc88:
    // 0x14bc88: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x14bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
label_14bc8c:
    // 0x14bc8c: 0x3442be77  ori         $v0, $v0, 0xBE77
    ctx->pc = 0x14bc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48759);
label_14bc90:
    // 0x14bc90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14bc90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14bc94:
    // 0x14bc94: 0x0  nop
    ctx->pc = 0x14bc94u;
    // NOP
label_14bc98:
    // 0x14bc98: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x14bc98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14bc9c:
    // 0x14bc9c: 0x0  nop
    ctx->pc = 0x14bc9cu;
    // NOP
label_14bca0:
    // 0x14bca0: 0x4501019d  bc1t        . + 4 + (0x19D << 2)
label_14bca4:
    if (ctx->pc == 0x14BCA4u) {
        ctx->pc = 0x14BCA4u;
            // 0x14bca4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14BCA8u;
        goto label_14bca8;
    }
    ctx->pc = 0x14BCA0u;
    {
        const bool branch_taken_0x14bca0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14BCA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BCA0u;
            // 0x14bca4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bca0) {
            ctx->pc = 0x14C318u;
            goto label_14c318;
        }
    }
    ctx->pc = 0x14BCA8u;
label_14bca8:
    // 0x14bca8: 0xc04d968  jal         func_1365A0
label_14bcac:
    if (ctx->pc == 0x14BCACu) {
        ctx->pc = 0x14BCACu;
            // 0x14bcac: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x14BCB0u;
        goto label_14bcb0;
    }
    ctx->pc = 0x14BCA8u;
    SET_GPR_U32(ctx, 31, 0x14BCB0u);
    ctx->pc = 0x14BCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BCA8u;
            // 0x14bcac: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1365A0u;
    if (runtime->hasFunction(0x1365A0u)) {
        auto targetFn = runtime->lookupFunction(0x1365A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BCB0u; }
        if (ctx->pc != 0x14BCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPf_0x1365a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BCB0u; }
        if (ctx->pc != 0x14BCB0u) { return; }
    }
    ctx->pc = 0x14BCB0u;
label_14bcb0:
    // 0x14bcb0: 0x10000199  b           . + 4 + (0x199 << 2)
label_14bcb4:
    if (ctx->pc == 0x14BCB4u) {
        ctx->pc = 0x14BCB8u;
        goto label_14bcb8;
    }
    ctx->pc = 0x14BCB0u;
    {
        const bool branch_taken_0x14bcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bcb0) {
            ctx->pc = 0x14C318u;
            goto label_14c318;
        }
    }
    ctx->pc = 0x14BCB8u;
label_14bcb8:
    // 0x14bcb8: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x14bcb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_14bcbc:
    // 0x14bcbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14bcbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14bcc0:
    // 0x14bcc0: 0x0  nop
    ctx->pc = 0x14bcc0u;
    // NOP
label_14bcc4:
    // 0x14bcc4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x14bcc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14bcc8:
    // 0x14bcc8: 0x0  nop
    ctx->pc = 0x14bcc8u;
    // NOP
label_14bccc:
    // 0x14bccc: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_14bcd0:
    if (ctx->pc == 0x14BCD0u) {
        ctx->pc = 0x14BCD0u;
            // 0x14bcd0: 0x3c023a83  lui         $v0, 0x3A83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
        ctx->pc = 0x14BCD4u;
        goto label_14bcd4;
    }
    ctx->pc = 0x14BCCCu;
    {
        const bool branch_taken_0x14bccc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14BCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BCCCu;
            // 0x14bcd0: 0x3c023a83  lui         $v0, 0x3A83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bccc) {
            ctx->pc = 0x14BD20u;
            goto label_14bd20;
        }
    }
    ctx->pc = 0x14BCD4u;
label_14bcd4:
    // 0x14bcd4: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x14bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
label_14bcd8:
    // 0x14bcd8: 0x3442be77  ori         $v0, $v0, 0xBE77
    ctx->pc = 0x14bcd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48759);
label_14bcdc:
    // 0x14bcdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14bcdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14bce0:
    // 0x14bce0: 0x0  nop
    ctx->pc = 0x14bce0u;
    // NOP
label_14bce4:
    // 0x14bce4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x14bce4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14bce8:
    // 0x14bce8: 0x0  nop
    ctx->pc = 0x14bce8u;
    // NOP
label_14bcec:
    // 0x14bcec: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_14bcf0:
    if (ctx->pc == 0x14BCF0u) {
        ctx->pc = 0x14BCF4u;
        goto label_14bcf4;
    }
    ctx->pc = 0x14BCECu;
    {
        const bool branch_taken_0x14bcec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14bcec) {
            ctx->pc = 0x14BD1Cu;
            goto label_14bd1c;
        }
    }
    ctx->pc = 0x14BCF4u;
label_14bcf4:
    // 0x14bcf4: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x14bcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14bcf8:
    // 0x14bcf8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x14bcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_14bcfc:
    // 0x14bcfc: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x14bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_14bd00:
    // 0x14bd00: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x14bd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_14bd04:
    // 0x14bd04: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x14bd04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_14bd08:
    // 0x14bd08: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x14bd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_14bd0c:
    // 0x14bd0c: 0xc041e8a  jal         func_107A28
label_14bd10:
    if (ctx->pc == 0x14BD10u) {
        ctx->pc = 0x14BD10u;
            // 0x14bd10: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x14BD14u;
        goto label_14bd14;
    }
    ctx->pc = 0x14BD0Cu;
    SET_GPR_U32(ctx, 31, 0x14BD14u);
    ctx->pc = 0x14BD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BD0Cu;
            // 0x14bd10: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A28u;
    if (runtime->hasFunction(0x107A28u)) {
        auto targetFn = runtime->lookupFunction(0x107A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD14u; }
        if (ctx->pc != 0x14BD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InterVectorXYZ_0x107a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD14u; }
        if (ctx->pc != 0x14BD14u) { return; }
    }
    ctx->pc = 0x14BD14u;
label_14bd14:
    // 0x14bd14: 0x1000001c  b           . + 4 + (0x1C << 2)
label_14bd18:
    if (ctx->pc == 0x14BD18u) {
        ctx->pc = 0x14BD18u;
            // 0x14bd18: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x14BD1Cu;
        goto label_14bd1c;
    }
    ctx->pc = 0x14BD14u;
    {
        const bool branch_taken_0x14bd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BD14u;
            // 0x14bd18: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd14) {
            ctx->pc = 0x14BD88u;
            goto label_14bd88;
        }
    }
    ctx->pc = 0x14BD1Cu;
label_14bd1c:
    // 0x14bd1c: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x14bd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_14bd20:
    // 0x14bd20: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x14bd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_14bd24:
    // 0x14bd24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14bd24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14bd28:
    // 0x14bd28: 0x0  nop
    ctx->pc = 0x14bd28u;
    // NOP
label_14bd2c:
    // 0x14bd2c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x14bd2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14bd30:
    // 0x14bd30: 0x0  nop
    ctx->pc = 0x14bd30u;
    // NOP
label_14bd34:
    // 0x14bd34: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_14bd38:
    if (ctx->pc == 0x14BD38u) {
        ctx->pc = 0x14BD38u;
            // 0x14bd38: 0x3c023f7f  lui         $v0, 0x3F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
        ctx->pc = 0x14BD3Cu;
        goto label_14bd3c;
    }
    ctx->pc = 0x14BD34u;
    {
        const bool branch_taken_0x14bd34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14BD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BD34u;
            // 0x14bd38: 0x3c023f7f  lui         $v0, 0x3F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd34) {
            ctx->pc = 0x14BD54u;
            goto label_14bd54;
        }
    }
    ctx->pc = 0x14BD3Cu;
label_14bd3c:
    // 0x14bd3c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14bd40:
    // 0x14bd40: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x14bd40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_14bd44:
    // 0x14bd44: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x14bd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_14bd48:
    // 0x14bd48: 0xc041e82  jal         func_107A08
label_14bd4c:
    if (ctx->pc == 0x14BD4Cu) {
        ctx->pc = 0x14BD4Cu;
            // 0x14bd4c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x14BD50u;
        goto label_14bd50;
    }
    ctx->pc = 0x14BD48u;
    SET_GPR_U32(ctx, 31, 0x14BD50u);
    ctx->pc = 0x14BD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BD48u;
            // 0x14bd4c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A08u;
    if (runtime->hasFunction(0x107A08u)) {
        auto targetFn = runtime->lookupFunction(0x107A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD50u; }
        if (ctx->pc != 0x14BD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVectorXYZ_0x107a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD50u; }
        if (ctx->pc != 0x14BD50u) { return; }
    }
    ctx->pc = 0x14BD50u;
label_14bd50:
    // 0x14bd50: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x14bd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
label_14bd54:
    // 0x14bd54: 0x3442be77  ori         $v0, $v0, 0xBE77
    ctx->pc = 0x14bd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48759);
label_14bd58:
    // 0x14bd58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14bd58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14bd5c:
    // 0x14bd5c: 0x0  nop
    ctx->pc = 0x14bd5cu;
    // NOP
label_14bd60:
    // 0x14bd60: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x14bd60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14bd64:
    // 0x14bd64: 0x0  nop
    ctx->pc = 0x14bd64u;
    // NOP
label_14bd68:
    // 0x14bd68: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_14bd6c:
    if (ctx->pc == 0x14BD6Cu) {
        ctx->pc = 0x14BD70u;
        goto label_14bd70;
    }
    ctx->pc = 0x14BD68u;
    {
        const bool branch_taken_0x14bd68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14bd68) {
            ctx->pc = 0x14BD84u;
            goto label_14bd84;
        }
    }
    ctx->pc = 0x14BD70u;
label_14bd70:
    // 0x14bd70: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14bd74:
    // 0x14bd74: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x14bd74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_14bd78:
    // 0x14bd78: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x14bd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_14bd7c:
    // 0x14bd7c: 0xc041e82  jal         func_107A08
label_14bd80:
    if (ctx->pc == 0x14BD80u) {
        ctx->pc = 0x14BD80u;
            // 0x14bd80: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x14BD84u;
        goto label_14bd84;
    }
    ctx->pc = 0x14BD7Cu;
    SET_GPR_U32(ctx, 31, 0x14BD84u);
    ctx->pc = 0x14BD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BD7Cu;
            // 0x14bd80: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A08u;
    if (runtime->hasFunction(0x107A08u)) {
        auto targetFn = runtime->lookupFunction(0x107A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD84u; }
        if (ctx->pc != 0x14BD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVectorXYZ_0x107a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BD84u; }
        if (ctx->pc != 0x14BD84u) { return; }
    }
    ctx->pc = 0x14BD84u;
label_14bd84:
    // 0x14bd84: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x14bd84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_14bd88:
    // 0x14bd88: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x14bd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14bd8c:
    // 0x14bd8c: 0xc7ad0084  lwc1        $f13, 0x84($sp)
    ctx->pc = 0x14bd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_14bd90:
    // 0x14bd90: 0xc7ae0088  lwc1        $f14, 0x88($sp)
    ctx->pc = 0x14bd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_14bd94:
    // 0x14bd94: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x14bd94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_14bd98:
    // 0x14bd98: 0x320f809  jalr        $t9
label_14bd9c:
    if (ctx->pc == 0x14BD9Cu) {
        ctx->pc = 0x14BD9Cu;
            // 0x14bd9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14BDA0u;
        goto label_14bda0;
    }
    ctx->pc = 0x14BD98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14BDA0u);
        ctx->pc = 0x14BD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BD98u;
            // 0x14bd9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x14BDA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14BDA0u; }
            if (ctx->pc != 0x14BDA0u) { return; }
        }
        }
    }
    ctx->pc = 0x14BDA0u;
label_14bda0:
    // 0x14bda0: 0x1000015d  b           . + 4 + (0x15D << 2)
label_14bda4:
    if (ctx->pc == 0x14BDA4u) {
        ctx->pc = 0x14BDA8u;
        goto label_14bda8;
    }
    ctx->pc = 0x14BDA0u;
    {
        const bool branch_taken_0x14bda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bda0) {
            ctx->pc = 0x14C318u;
            goto label_14c318;
        }
    }
    ctx->pc = 0x14BDA8u;
label_14bda8:
    // 0x14bda8: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x14bda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_14bdac:
    // 0x14bdac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14bdacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14bdb0:
    // 0x14bdb0: 0x0  nop
    ctx->pc = 0x14bdb0u;
    // NOP
label_14bdb4:
    // 0x14bdb4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x14bdb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14bdb8:
    // 0x14bdb8: 0x0  nop
    ctx->pc = 0x14bdb8u;
    // NOP
label_14bdbc:
    // 0x14bdbc: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_14bdc0:
    if (ctx->pc == 0x14BDC0u) {
        ctx->pc = 0x14BDC0u;
            // 0x14bdc0: 0x3c023a83  lui         $v0, 0x3A83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
        ctx->pc = 0x14BDC4u;
        goto label_14bdc4;
    }
    ctx->pc = 0x14BDBCu;
    {
        const bool branch_taken_0x14bdbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14BDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BDBCu;
            // 0x14bdc0: 0x3c023a83  lui         $v0, 0x3A83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bdbc) {
            ctx->pc = 0x14BE10u;
            goto label_14be10;
        }
    }
    ctx->pc = 0x14BDC4u;
label_14bdc4:
    // 0x14bdc4: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x14bdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
label_14bdc8:
    // 0x14bdc8: 0x3442be77  ori         $v0, $v0, 0xBE77
    ctx->pc = 0x14bdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48759);
label_14bdcc:
    // 0x14bdcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14bdccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14bdd0:
    // 0x14bdd0: 0x0  nop
    ctx->pc = 0x14bdd0u;
    // NOP
label_14bdd4:
    // 0x14bdd4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x14bdd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14bdd8:
    // 0x14bdd8: 0x0  nop
    ctx->pc = 0x14bdd8u;
    // NOP
label_14bddc:
    // 0x14bddc: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_14bde0:
    if (ctx->pc == 0x14BDE0u) {
        ctx->pc = 0x14BDE4u;
        goto label_14bde4;
    }
    ctx->pc = 0x14BDDCu;
    {
        const bool branch_taken_0x14bddc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14bddc) {
            ctx->pc = 0x14BE0Cu;
            goto label_14be0c;
        }
    }
    ctx->pc = 0x14BDE4u;
label_14bde4:
    // 0x14bde4: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x14bde4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14bde8:
    // 0x14bde8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x14bde8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_14bdec:
    // 0x14bdec: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x14bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_14bdf0:
    // 0x14bdf0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x14bdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_14bdf4:
    // 0x14bdf4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x14bdf4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_14bdf8:
    // 0x14bdf8: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x14bdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_14bdfc:
    // 0x14bdfc: 0xc041e8a  jal         func_107A28
label_14be00:
    if (ctx->pc == 0x14BE00u) {
        ctx->pc = 0x14BE00u;
            // 0x14be00: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x14BE04u;
        goto label_14be04;
    }
    ctx->pc = 0x14BDFCu;
    SET_GPR_U32(ctx, 31, 0x14BE04u);
    ctx->pc = 0x14BE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BDFCu;
            // 0x14be00: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A28u;
    if (runtime->hasFunction(0x107A28u)) {
        auto targetFn = runtime->lookupFunction(0x107A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BE04u; }
        if (ctx->pc != 0x14BE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InterVectorXYZ_0x107a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BE04u; }
        if (ctx->pc != 0x14BE04u) { return; }
    }
    ctx->pc = 0x14BE04u;
label_14be04:
    // 0x14be04: 0x1000001c  b           . + 4 + (0x1C << 2)
label_14be08:
    if (ctx->pc == 0x14BE08u) {
        ctx->pc = 0x14BE08u;
            // 0x14be08: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x14BE0Cu;
        goto label_14be0c;
    }
    ctx->pc = 0x14BE04u;
    {
        const bool branch_taken_0x14be04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BE04u;
            // 0x14be08: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be04) {
            ctx->pc = 0x14BE78u;
            goto label_14be78;
        }
    }
    ctx->pc = 0x14BE0Cu;
label_14be0c:
    // 0x14be0c: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x14be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_14be10:
    // 0x14be10: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x14be10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_14be14:
    // 0x14be14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14be14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14be18:
    // 0x14be18: 0x0  nop
    ctx->pc = 0x14be18u;
    // NOP
label_14be1c:
    // 0x14be1c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x14be1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14be20:
    // 0x14be20: 0x0  nop
    ctx->pc = 0x14be20u;
    // NOP
label_14be24:
    // 0x14be24: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_14be28:
    if (ctx->pc == 0x14BE28u) {
        ctx->pc = 0x14BE28u;
            // 0x14be28: 0x3c023f7f  lui         $v0, 0x3F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
        ctx->pc = 0x14BE2Cu;
        goto label_14be2c;
    }
    ctx->pc = 0x14BE24u;
    {
        const bool branch_taken_0x14be24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14BE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BE24u;
            // 0x14be28: 0x3c023f7f  lui         $v0, 0x3F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be24) {
            ctx->pc = 0x14BE44u;
            goto label_14be44;
        }
    }
    ctx->pc = 0x14BE2Cu;
label_14be2c:
    // 0x14be2c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14be30:
    // 0x14be30: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x14be30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_14be34:
    // 0x14be34: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x14be34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_14be38:
    // 0x14be38: 0xc041e82  jal         func_107A08
label_14be3c:
    if (ctx->pc == 0x14BE3Cu) {
        ctx->pc = 0x14BE3Cu;
            // 0x14be3c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x14BE40u;
        goto label_14be40;
    }
    ctx->pc = 0x14BE38u;
    SET_GPR_U32(ctx, 31, 0x14BE40u);
    ctx->pc = 0x14BE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BE38u;
            // 0x14be3c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A08u;
    if (runtime->hasFunction(0x107A08u)) {
        auto targetFn = runtime->lookupFunction(0x107A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BE40u; }
        if (ctx->pc != 0x14BE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVectorXYZ_0x107a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BE40u; }
        if (ctx->pc != 0x14BE40u) { return; }
    }
    ctx->pc = 0x14BE40u;
label_14be40:
    // 0x14be40: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x14be40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
label_14be44:
    // 0x14be44: 0x3442be77  ori         $v0, $v0, 0xBE77
    ctx->pc = 0x14be44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48759);
label_14be48:
    // 0x14be48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14be48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14be4c:
    // 0x14be4c: 0x0  nop
    ctx->pc = 0x14be4cu;
    // NOP
label_14be50:
    // 0x14be50: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x14be50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14be54:
    // 0x14be54: 0x0  nop
    ctx->pc = 0x14be54u;
    // NOP
label_14be58:
    // 0x14be58: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_14be5c:
    if (ctx->pc == 0x14BE5Cu) {
        ctx->pc = 0x14BE60u;
        goto label_14be60;
    }
    ctx->pc = 0x14BE58u;
    {
        const bool branch_taken_0x14be58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14be58) {
            ctx->pc = 0x14BE74u;
            goto label_14be74;
        }
    }
    ctx->pc = 0x14BE60u;
label_14be60:
    // 0x14be60: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14be60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14be64:
    // 0x14be64: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x14be64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_14be68:
    // 0x14be68: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x14be68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_14be6c:
    // 0x14be6c: 0xc041e82  jal         func_107A08
label_14be70:
    if (ctx->pc == 0x14BE70u) {
        ctx->pc = 0x14BE70u;
            // 0x14be70: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x14BE74u;
        goto label_14be74;
    }
    ctx->pc = 0x14BE6Cu;
    SET_GPR_U32(ctx, 31, 0x14BE74u);
    ctx->pc = 0x14BE70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BE6Cu;
            // 0x14be70: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A08u;
    if (runtime->hasFunction(0x107A08u)) {
        auto targetFn = runtime->lookupFunction(0x107A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BE74u; }
        if (ctx->pc != 0x14BE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVectorXYZ_0x107a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BE74u; }
        if (ctx->pc != 0x14BE74u) { return; }
    }
    ctx->pc = 0x14BE74u;
label_14be74:
    // 0x14be74: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x14be74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14be78:
    // 0x14be78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14be78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14be7c:
    // 0x14be7c: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x14be7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
label_14be80:
    // 0x14be80: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x14be80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14be84:
    // 0x14be84: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x14be84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
label_14be88:
    // 0x14be88: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x14be88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14be8c:
    // 0x14be8c: 0xe64000e8  swc1        $f0, 0xE8($s2)
    ctx->pc = 0x14be8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 232), bits); }
label_14be90:
    // 0x14be90: 0x10000121  b           . + 4 + (0x121 << 2)
label_14be94:
    if (ctx->pc == 0x14BE94u) {
        ctx->pc = 0x14BE94u;
            // 0x14be94: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
        ctx->pc = 0x14BE98u;
        goto label_14be98;
    }
    ctx->pc = 0x14BE90u;
    {
        const bool branch_taken_0x14be90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BE90u;
            // 0x14be94: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be90) {
            ctx->pc = 0x14C318u;
            goto label_14c318;
        }
    }
    ctx->pc = 0x14BE98u;
label_14be98:
    // 0x14be98: 0x8e4300f8  lw          $v1, 0xF8($s2)
    ctx->pc = 0x14be98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
label_14be9c:
    // 0x14be9c: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x14be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_14bea0:
    // 0x14bea0: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x14bea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_14bea4:
    // 0x14bea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14bea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14bea8:
    // 0x14bea8: 0x0  nop
    ctx->pc = 0x14bea8u;
    // NOP
label_14beac:
    // 0x14beac: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x14beacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14beb0:
    // 0x14beb0: 0x8c750030  lw          $s5, 0x30($v1)
    ctx->pc = 0x14beb0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_14beb4:
    // 0x14beb4: 0x45010025  bc1t        . + 4 + (0x25 << 2)
label_14beb8:
    if (ctx->pc == 0x14BEB8u) {
        ctx->pc = 0x14BEB8u;
            // 0x14beb8: 0x8e130000  lw          $s3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x14BEBCu;
        goto label_14bebc;
    }
    ctx->pc = 0x14BEB4u;
    {
        const bool branch_taken_0x14beb4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14BEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BEB4u;
            // 0x14beb8: 0x8e130000  lw          $s3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14beb4) {
            ctx->pc = 0x14BF4Cu;
            goto label_14bf4c;
        }
    }
    ctx->pc = 0x14BEBCu;
label_14bebc:
    // 0x14bebc: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x14bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
label_14bec0:
    // 0x14bec0: 0x3442be77  ori         $v0, $v0, 0xBE77
    ctx->pc = 0x14bec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48759);
label_14bec4:
    // 0x14bec4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14bec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14bec8:
    // 0x14bec8: 0x0  nop
    ctx->pc = 0x14bec8u;
    // NOP
label_14becc:
    // 0x14becc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x14beccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14bed0:
    // 0x14bed0: 0x0  nop
    ctx->pc = 0x14bed0u;
    // NOP
label_14bed4:
    // 0x14bed4: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_14bed8:
    if (ctx->pc == 0x14BED8u) {
        ctx->pc = 0x14BED8u;
            // 0x14bed8: 0x3c023a83  lui         $v0, 0x3A83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
        ctx->pc = 0x14BEDCu;
        goto label_14bedc;
    }
    ctx->pc = 0x14BED4u;
    {
        const bool branch_taken_0x14bed4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14BED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BED4u;
            // 0x14bed8: 0x3c023a83  lui         $v0, 0x3A83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bed4) {
            ctx->pc = 0x14BF50u;
            goto label_14bf50;
        }
    }
    ctx->pc = 0x14BEDCu;
label_14bedc:
    // 0x14bedc: 0x10000017  b           . + 4 + (0x17 << 2)
label_14bee0:
    if (ctx->pc == 0x14BEE0u) {
        ctx->pc = 0x14BEE0u;
            // 0x14bee0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x14BEE4u;
        goto label_14bee4;
    }
    ctx->pc = 0x14BEDCu;
    {
        const bool branch_taken_0x14bedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BEDCu;
            // 0x14bee0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bedc) {
            ctx->pc = 0x14BF3Cu;
            goto label_14bf3c;
        }
    }
    ctx->pc = 0x14BEE4u;
label_14bee4:
    // 0x14bee4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x14bee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14bee8:
    // 0x14bee8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x14bee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_14beec:
    // 0x14beec: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x14beecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14bef0:
    // 0x14bef0: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x14bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_14bef4:
    // 0x14bef4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x14bef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_14bef8:
    // 0x14bef8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x14bef8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_14befc:
    // 0x14befc: 0x24b2ffff  addiu       $s2, $a1, -0x1
    ctx->pc = 0x14befcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_14bf00:
    // 0x14bf00: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x14bf00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_14bf04:
    // 0x14bf04: 0xc041e8a  jal         func_107A28
label_14bf08:
    if (ctx->pc == 0x14BF08u) {
        ctx->pc = 0x14BF08u;
            // 0x14bf08: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x14BF0Cu;
        goto label_14bf0c;
    }
    ctx->pc = 0x14BF04u;
    SET_GPR_U32(ctx, 31, 0x14BF0Cu);
    ctx->pc = 0x14BF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BF04u;
            // 0x14bf08: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A28u;
    if (runtime->hasFunction(0x107A28u)) {
        auto targetFn = runtime->lookupFunction(0x107A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF0Cu; }
        if (ctx->pc != 0x14BF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InterVectorXYZ_0x107a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF0Cu; }
        if (ctx->pc != 0x14BF0Cu) { return; }
    }
    ctx->pc = 0x14BF0Cu;
label_14bf0c:
    // 0x14bf0c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x14bf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_14bf10:
    // 0x14bf10: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x14bf10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_14bf14:
    // 0x14bf14: 0xc041e82  jal         func_107A08
label_14bf18:
    if (ctx->pc == 0x14BF18u) {
        ctx->pc = 0x14BF18u;
            // 0x14bf18: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->pc = 0x14BF1Cu;
        goto label_14bf1c;
    }
    ctx->pc = 0x14BF14u;
    SET_GPR_U32(ctx, 31, 0x14BF1Cu);
    ctx->pc = 0x14BF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BF14u;
            // 0x14bf18: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A08u;
    if (runtime->hasFunction(0x107A08u)) {
        auto targetFn = runtime->lookupFunction(0x107A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF1Cu; }
        if (ctx->pc != 0x14BF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVectorXYZ_0x107a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF1Cu; }
        if (ctx->pc != 0x14BF1Cu) { return; }
    }
    ctx->pc = 0x14BF1Cu;
label_14bf1c:
    // 0x14bf1c: 0x8e100018  lw          $s0, 0x18($s0)
    ctx->pc = 0x14bf1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_14bf20:
    // 0x14bf20: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_14bf24:
    if (ctx->pc == 0x14BF24u) {
        ctx->pc = 0x14BF28u;
        goto label_14bf28;
    }
    ctx->pc = 0x14BF20u;
    {
        const bool branch_taken_0x14bf20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bf20) {
            ctx->pc = 0x14BF30u;
            goto label_14bf30;
        }
    }
    ctx->pc = 0x14BF28u;
label_14bf28:
    // 0x14bf28: 0x10000003  b           . + 4 + (0x3 << 2)
label_14bf2c:
    if (ctx->pc == 0x14BF2Cu) {
        ctx->pc = 0x14BF30u;
        goto label_14bf30;
    }
    ctx->pc = 0x14BF28u;
    {
        const bool branch_taken_0x14bf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bf28) {
            ctx->pc = 0x14BF38u;
            goto label_14bf38;
        }
    }
    ctx->pc = 0x14BF30u;
label_14bf30:
    // 0x14bf30: 0x100000fb  b           . + 4 + (0xFB << 2)
label_14bf34:
    if (ctx->pc == 0x14BF34u) {
        ctx->pc = 0x14BF34u;
            // 0x14bf34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14BF38u;
        goto label_14bf38;
    }
    ctx->pc = 0x14BF30u;
    {
        const bool branch_taken_0x14bf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BF30u;
            // 0x14bf34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bf30) {
            ctx->pc = 0x14C320u;
            goto label_14c320;
        }
    }
    ctx->pc = 0x14BF38u;
label_14bf38:
    // 0x14bf38: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14bf3c:
    // 0x14bf3c: 0x1262ffe9  beq         $s3, $v0, . + 4 + (-0x17 << 2)
label_14bf40:
    if (ctx->pc == 0x14BF40u) {
        ctx->pc = 0x14BF44u;
        goto label_14bf44;
    }
    ctx->pc = 0x14BF3Cu;
    {
        const bool branch_taken_0x14bf3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x14bf3c) {
            ctx->pc = 0x14BEE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14bee4;
        }
    }
    ctx->pc = 0x14BF44u;
label_14bf44:
    // 0x14bf44: 0x1000003b  b           . + 4 + (0x3B << 2)
label_14bf48:
    if (ctx->pc == 0x14BF48u) {
        ctx->pc = 0x14BF4Cu;
        goto label_14bf4c;
    }
    ctx->pc = 0x14BF44u;
    {
        const bool branch_taken_0x14bf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bf44) {
            ctx->pc = 0x14C034u;
            goto label_14c034;
        }
    }
    ctx->pc = 0x14BF4Cu;
label_14bf4c:
    // 0x14bf4c: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x14bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_14bf50:
    // 0x14bf50: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x14bf50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_14bf54:
    // 0x14bf54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14bf54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14bf58:
    // 0x14bf58: 0x0  nop
    ctx->pc = 0x14bf58u;
    // NOP
label_14bf5c:
    // 0x14bf5c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x14bf5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14bf60:
    // 0x14bf60: 0x0  nop
    ctx->pc = 0x14bf60u;
    // NOP
label_14bf64:
    // 0x14bf64: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_14bf68:
    if (ctx->pc == 0x14BF68u) {
        ctx->pc = 0x14BF6Cu;
        goto label_14bf6c;
    }
    ctx->pc = 0x14BF64u;
    {
        const bool branch_taken_0x14bf64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14bf64) {
            ctx->pc = 0x14BFBCu;
            goto label_14bfbc;
        }
    }
    ctx->pc = 0x14BF6Cu;
label_14bf6c:
    // 0x14bf6c: 0x10000011  b           . + 4 + (0x11 << 2)
label_14bf70:
    if (ctx->pc == 0x14BF70u) {
        ctx->pc = 0x14BF70u;
            // 0x14bf70: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x14BF74u;
        goto label_14bf74;
    }
    ctx->pc = 0x14BF6Cu;
    {
        const bool branch_taken_0x14bf6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BF6Cu;
            // 0x14bf70: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bf6c) {
            ctx->pc = 0x14BFB4u;
            goto label_14bfb4;
        }
    }
    ctx->pc = 0x14BF74u;
label_14bf74:
    // 0x14bf74: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x14bf74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14bf78:
    // 0x14bf78: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x14bf78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_14bf7c:
    // 0x14bf7c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14bf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14bf80:
    // 0x14bf80: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x14bf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_14bf84:
    // 0x14bf84: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x14bf84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14bf88:
    // 0x14bf88: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x14bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_14bf8c:
    // 0x14bf8c: 0xc041e82  jal         func_107A08
label_14bf90:
    if (ctx->pc == 0x14BF90u) {
        ctx->pc = 0x14BF90u;
            // 0x14bf90: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->pc = 0x14BF94u;
        goto label_14bf94;
    }
    ctx->pc = 0x14BF8Cu;
    SET_GPR_U32(ctx, 31, 0x14BF94u);
    ctx->pc = 0x14BF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BF8Cu;
            // 0x14bf90: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A08u;
    if (runtime->hasFunction(0x107A08u)) {
        auto targetFn = runtime->lookupFunction(0x107A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF94u; }
        if (ctx->pc != 0x14BF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVectorXYZ_0x107a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF94u; }
        if (ctx->pc != 0x14BF94u) { return; }
    }
    ctx->pc = 0x14BF94u;
label_14bf94:
    // 0x14bf94: 0x8e100018  lw          $s0, 0x18($s0)
    ctx->pc = 0x14bf94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_14bf98:
    // 0x14bf98: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_14bf9c:
    if (ctx->pc == 0x14BF9Cu) {
        ctx->pc = 0x14BFA0u;
        goto label_14bfa0;
    }
    ctx->pc = 0x14BF98u;
    {
        const bool branch_taken_0x14bf98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bf98) {
            ctx->pc = 0x14BFA8u;
            goto label_14bfa8;
        }
    }
    ctx->pc = 0x14BFA0u;
label_14bfa0:
    // 0x14bfa0: 0x10000003  b           . + 4 + (0x3 << 2)
label_14bfa4:
    if (ctx->pc == 0x14BFA4u) {
        ctx->pc = 0x14BFA8u;
        goto label_14bfa8;
    }
    ctx->pc = 0x14BFA0u;
    {
        const bool branch_taken_0x14bfa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bfa0) {
            ctx->pc = 0x14BFB0u;
            goto label_14bfb0;
        }
    }
    ctx->pc = 0x14BFA8u;
label_14bfa8:
    // 0x14bfa8: 0x100000dd  b           . + 4 + (0xDD << 2)
label_14bfac:
    if (ctx->pc == 0x14BFACu) {
        ctx->pc = 0x14BFACu;
            // 0x14bfac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14BFB0u;
        goto label_14bfb0;
    }
    ctx->pc = 0x14BFA8u;
    {
        const bool branch_taken_0x14bfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BFA8u;
            // 0x14bfac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bfa8) {
            ctx->pc = 0x14C320u;
            goto label_14c320;
        }
    }
    ctx->pc = 0x14BFB0u;
label_14bfb0:
    // 0x14bfb0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14bfb4:
    // 0x14bfb4: 0x1262ffef  beq         $s3, $v0, . + 4 + (-0x11 << 2)
label_14bfb8:
    if (ctx->pc == 0x14BFB8u) {
        ctx->pc = 0x14BFBCu;
        goto label_14bfbc;
    }
    ctx->pc = 0x14BFB4u;
    {
        const bool branch_taken_0x14bfb4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x14bfb4) {
            ctx->pc = 0x14BF74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14bf74;
        }
    }
    ctx->pc = 0x14BFBCu;
label_14bfbc:
    // 0x14bfbc: 0x0  nop
    ctx->pc = 0x14bfbcu;
    // NOP
label_14bfc0:
    // 0x14bfc0: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x14bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
label_14bfc4:
    // 0x14bfc4: 0x3442be77  ori         $v0, $v0, 0xBE77
    ctx->pc = 0x14bfc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48759);
label_14bfc8:
    // 0x14bfc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14bfc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14bfcc:
    // 0x14bfcc: 0x0  nop
    ctx->pc = 0x14bfccu;
    // NOP
label_14bfd0:
    // 0x14bfd0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x14bfd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14bfd4:
    // 0x14bfd4: 0x0  nop
    ctx->pc = 0x14bfd4u;
    // NOP
label_14bfd8:
    // 0x14bfd8: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_14bfdc:
    if (ctx->pc == 0x14BFDCu) {
        ctx->pc = 0x14BFE0u;
        goto label_14bfe0;
    }
    ctx->pc = 0x14BFD8u;
    {
        const bool branch_taken_0x14bfd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14bfd8) {
            ctx->pc = 0x14C034u;
            goto label_14c034;
        }
    }
    ctx->pc = 0x14BFE0u;
label_14bfe0:
    // 0x14bfe0: 0x10000012  b           . + 4 + (0x12 << 2)
label_14bfe4:
    if (ctx->pc == 0x14BFE4u) {
        ctx->pc = 0x14BFE4u;
            // 0x14bfe4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x14BFE8u;
        goto label_14bfe8;
    }
    ctx->pc = 0x14BFE0u;
    {
        const bool branch_taken_0x14bfe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BFE0u;
            // 0x14bfe4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bfe0) {
            ctx->pc = 0x14C02Cu;
            goto label_14c02c;
        }
    }
    ctx->pc = 0x14BFE8u;
label_14bfe8:
    // 0x14bfe8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x14bfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14bfec:
    // 0x14bfec: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x14bfecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_14bff0:
    // 0x14bff0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14bff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14bff4:
    // 0x14bff4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x14bff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_14bff8:
    // 0x14bff8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x14bff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14bffc:
    // 0x14bffc: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x14bffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_14c000:
    // 0x14c000: 0xc041e82  jal         func_107A08
label_14c004:
    if (ctx->pc == 0x14C004u) {
        ctx->pc = 0x14C004u;
            // 0x14c004: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->pc = 0x14C008u;
        goto label_14c008;
    }
    ctx->pc = 0x14C000u;
    SET_GPR_U32(ctx, 31, 0x14C008u);
    ctx->pc = 0x14C004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C000u;
            // 0x14c004: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A08u;
    if (runtime->hasFunction(0x107A08u)) {
        auto targetFn = runtime->lookupFunction(0x107A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C008u; }
        if (ctx->pc != 0x14C008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVectorXYZ_0x107a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C008u; }
        if (ctx->pc != 0x14C008u) { return; }
    }
    ctx->pc = 0x14C008u;
label_14c008:
    // 0x14c008: 0x8e100018  lw          $s0, 0x18($s0)
    ctx->pc = 0x14c008u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_14c00c:
    // 0x14c00c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_14c010:
    if (ctx->pc == 0x14C010u) {
        ctx->pc = 0x14C014u;
        goto label_14c014;
    }
    ctx->pc = 0x14C00Cu;
    {
        const bool branch_taken_0x14c00c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c00c) {
            ctx->pc = 0x14C01Cu;
            goto label_14c01c;
        }
    }
    ctx->pc = 0x14C014u;
label_14c014:
    // 0x14c014: 0x10000004  b           . + 4 + (0x4 << 2)
label_14c018:
    if (ctx->pc == 0x14C018u) {
        ctx->pc = 0x14C01Cu;
        goto label_14c01c;
    }
    ctx->pc = 0x14C014u;
    {
        const bool branch_taken_0x14c014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c014) {
            ctx->pc = 0x14C028u;
            goto label_14c028;
        }
    }
    ctx->pc = 0x14C01Cu;
label_14c01c:
    // 0x14c01c: 0x0  nop
    ctx->pc = 0x14c01cu;
    // NOP
label_14c020:
    // 0x14c020: 0x100000bf  b           . + 4 + (0xBF << 2)
label_14c024:
    if (ctx->pc == 0x14C024u) {
        ctx->pc = 0x14C024u;
            // 0x14c024: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14C028u;
        goto label_14c028;
    }
    ctx->pc = 0x14C020u;
    {
        const bool branch_taken_0x14c020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C020u;
            // 0x14c024: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c020) {
            ctx->pc = 0x14C320u;
            goto label_14c320;
        }
    }
    ctx->pc = 0x14C028u;
label_14c028:
    // 0x14c028: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14c028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14c02c:
    // 0x14c02c: 0x1262ffee  beq         $s3, $v0, . + 4 + (-0x12 << 2)
label_14c030:
    if (ctx->pc == 0x14C030u) {
        ctx->pc = 0x14C034u;
        goto label_14c034;
    }
    ctx->pc = 0x14C02Cu;
    {
        const bool branch_taken_0x14c02c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c02c) {
            ctx->pc = 0x14BFE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14bfe8;
        }
    }
    ctx->pc = 0x14C034u;
label_14c034:
    // 0x14c034: 0x0  nop
    ctx->pc = 0x14c034u;
    // NOP
label_14c038:
    // 0x14c038: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_14c03c:
    if (ctx->pc == 0x14C03Cu) {
        ctx->pc = 0x14C03Cu;
            // 0x14c03c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14C040u;
        goto label_14c040;
    }
    ctx->pc = 0x14C038u;
    {
        const bool branch_taken_0x14c038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C038u;
            // 0x14c03c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c038) {
            ctx->pc = 0x14C320u;
            goto label_14c320;
        }
    }
    ctx->pc = 0x14C040u;
label_14c040:
    // 0x14c040: 0x126000b5  beqz        $s3, . + 4 + (0xB5 << 2)
label_14c044:
    if (ctx->pc == 0x14C044u) {
        ctx->pc = 0x14C048u;
        goto label_14c048;
    }
    ctx->pc = 0x14C040u;
    {
        const bool branch_taken_0x14c040 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c040) {
            ctx->pc = 0x14C318u;
            goto label_14c318;
        }
    }
    ctx->pc = 0x14C048u;
label_14c048:
    // 0x14c048: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x14c048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14c04c:
    // 0x14c04c: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x14c04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_14c050:
    // 0x14c050: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x14c050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_14c054:
    // 0x14c054: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x14c054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_14c058:
    // 0x14c058: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x14c058u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_14c05c:
    // 0x14c05c: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x14c05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_14c060:
    // 0x14c060: 0xc041e8a  jal         func_107A28
label_14c064:
    if (ctx->pc == 0x14C064u) {
        ctx->pc = 0x14C064u;
            // 0x14c064: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x14C068u;
        goto label_14c068;
    }
    ctx->pc = 0x14C060u;
    SET_GPR_U32(ctx, 31, 0x14C068u);
    ctx->pc = 0x14C064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C060u;
            // 0x14c064: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A28u;
    if (runtime->hasFunction(0x107A28u)) {
        auto targetFn = runtime->lookupFunction(0x107A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C068u; }
        if (ctx->pc != 0x14C068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InterVectorXYZ_0x107a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C068u; }
        if (ctx->pc != 0x14C068u) { return; }
    }
    ctx->pc = 0x14C068u;
label_14c068:
    // 0x14c068: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x14c068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_14c06c:
    // 0x14c06c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14c06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_14c070:
    // 0x14c070: 0xc04ddf8  jal         func_1377E0
label_14c074:
    if (ctx->pc == 0x14C074u) {
        ctx->pc = 0x14C074u;
            // 0x14c074: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14C078u;
        goto label_14c078;
    }
    ctx->pc = 0x14C070u;
    SET_GPR_U32(ctx, 31, 0x14C078u);
    ctx->pc = 0x14C074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C070u;
            // 0x14c074: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1377E0u;
    if (runtime->hasFunction(0x1377E0u)) {
        auto targetFn = runtime->lookupFunction(0x1377E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C078u; }
        if (ctx->pc != 0x14C078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition__8mgCFrameFPfPf_0x1377e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C078u; }
        if (ctx->pc != 0x14C078u) { return; }
    }
    ctx->pc = 0x14C078u;
label_14c078:
    // 0x14c078: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x14c078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14c07c:
    // 0x14c07c: 0xc7ad0084  lwc1        $f13, 0x84($sp)
    ctx->pc = 0x14c07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_14c080:
    // 0x14c080: 0xc7ae0088  lwc1        $f14, 0x88($sp)
    ctx->pc = 0x14c080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_14c084:
    // 0x14c084: 0xc04c4f8  jal         func_1313E0
label_14c088:
    if (ctx->pc == 0x14C088u) {
        ctx->pc = 0x14C088u;
            // 0x14c088: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14C08Cu;
        goto label_14c08c;
    }
    ctx->pc = 0x14C084u;
    SET_GPR_U32(ctx, 31, 0x14C08Cu);
    ctx->pc = 0x14C088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C084u;
            // 0x14c088: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1313E0u;
    if (runtime->hasFunction(0x1313E0u)) {
        auto targetFn = runtime->lookupFunction(0x1313E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C08Cu; }
        if (ctx->pc != 0x14C08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFfff_0x1313e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C08Cu; }
        if (ctx->pc != 0x14C08Cu) { return; }
    }
    ctx->pc = 0x14C08Cu;
label_14c08c:
    // 0x14c08c: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_14c090:
    if (ctx->pc == 0x14C090u) {
        ctx->pc = 0x14C094u;
        goto label_14c094;
    }
    ctx->pc = 0x14C08Cu;
    {
        const bool branch_taken_0x14c08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c08c) {
            ctx->pc = 0x14C318u;
            goto label_14c318;
        }
    }
    ctx->pc = 0x14C094u;
label_14c094:
    // 0x14c094: 0x126000a0  beqz        $s3, . + 4 + (0xA0 << 2)
label_14c098:
    if (ctx->pc == 0x14C098u) {
        ctx->pc = 0x14C098u;
            // 0x14c098: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x14C09Cu;
        goto label_14c09c;
    }
    ctx->pc = 0x14C094u;
    {
        const bool branch_taken_0x14c094 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C094u;
            // 0x14c098: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c094) {
            ctx->pc = 0x14C318u;
            goto label_14c318;
        }
    }
    ctx->pc = 0x14C09Cu;
label_14c09c:
    // 0x14c09c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14c09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_14c0a0:
    // 0x14c0a0: 0xc04ddf8  jal         func_1377E0
label_14c0a4:
    if (ctx->pc == 0x14C0A4u) {
        ctx->pc = 0x14C0A4u;
            // 0x14c0a4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14C0A8u;
        goto label_14c0a8;
    }
    ctx->pc = 0x14C0A0u;
    SET_GPR_U32(ctx, 31, 0x14C0A8u);
    ctx->pc = 0x14C0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C0A0u;
            // 0x14c0a4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1377E0u;
    if (runtime->hasFunction(0x1377E0u)) {
        auto targetFn = runtime->lookupFunction(0x1377E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0A8u; }
        if (ctx->pc != 0x14C0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition__8mgCFrameFPfPf_0x1377e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0A8u; }
        if (ctx->pc != 0x14C0A8u) { return; }
    }
    ctx->pc = 0x14C0A8u;
label_14c0a8:
    // 0x14c0a8: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x14c0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14c0ac:
    // 0x14c0ac: 0xc7ad0084  lwc1        $f13, 0x84($sp)
    ctx->pc = 0x14c0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_14c0b0:
    // 0x14c0b0: 0xc7ae0088  lwc1        $f14, 0x88($sp)
    ctx->pc = 0x14c0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_14c0b4:
    // 0x14c0b4: 0xc04c510  jal         func_131440
label_14c0b8:
    if (ctx->pc == 0x14C0B8u) {
        ctx->pc = 0x14C0B8u;
            // 0x14c0b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14C0BCu;
        goto label_14c0bc;
    }
    ctx->pc = 0x14C0B4u;
    SET_GPR_U32(ctx, 31, 0x14C0BCu);
    ctx->pc = 0x14C0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C0B4u;
            // 0x14c0b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131440u;
    if (runtime->hasFunction(0x131440u)) {
        auto targetFn = runtime->lookupFunction(0x131440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0BCu; }
        if (ctx->pc != 0x14C0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFfff_0x131440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0BCu; }
        if (ctx->pc != 0x14C0BCu) { return; }
    }
    ctx->pc = 0x14C0BCu;
label_14c0bc:
    // 0x14c0bc: 0x10000096  b           . + 4 + (0x96 << 2)
label_14c0c0:
    if (ctx->pc == 0x14C0C0u) {
        ctx->pc = 0x14C0C4u;
        goto label_14c0c4;
    }
    ctx->pc = 0x14C0BCu;
    {
        const bool branch_taken_0x14c0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c0bc) {
            ctx->pc = 0x14C318u;
            goto label_14c318;
        }
    }
    ctx->pc = 0x14C0C4u;
label_14c0c4:
    // 0x14c0c4: 0x8e4400f8  lw          $a0, 0xF8($s2)
    ctx->pc = 0x14c0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
label_14c0c8:
    // 0x14c0c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14c0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14c0cc:
    // 0x14c0cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c0ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c0d0:
    // 0x14c0d0: 0x8c99001c  lw          $t9, 0x1C($a0)
    ctx->pc = 0x14c0d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_14c0d4:
    // 0x14c0d4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x14c0d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_14c0d8:
    // 0x14c0d8: 0x320f809  jalr        $t9
label_14c0dc:
    if (ctx->pc == 0x14C0DCu) {
        ctx->pc = 0x14C0DCu;
            // 0x14c0dc: 0x46140541  sub.s       $f21, $f0, $f20 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x14C0E0u;
        goto label_14c0e0;
    }
    ctx->pc = 0x14C0D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C0E0u);
        ctx->pc = 0x14C0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C0D8u;
            // 0x14c0dc: 0x46140541  sub.s       $f21, $f0, $f20 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x14C0E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14C0E0u; }
            if (ctx->pc != 0x14C0E0u) { return; }
        }
        }
    }
    ctx->pc = 0x14C0E0u;
label_14c0e0:
    // 0x14c0e0: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x14c0e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14c0e4:
    // 0x14c0e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x14c0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_14c0e8:
    // 0x14c0e8: 0x112900  sll         $a1, $s1, 4
    ctx->pc = 0x14c0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_14c0ec:
    // 0x14c0ec: 0x143100  sll         $a2, $s4, 4
    ctx->pc = 0x14c0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_14c0f0:
    // 0x14c0f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14c0f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c0f4:
    // 0x14c0f4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x14c0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14c0f8:
    // 0x14c0f8: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x14c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_14c0fc:
    // 0x14c0fc: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x14c0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_14c100:
    // 0x14c100: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x14c100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14c104:
    // 0x14c104: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x14c104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c108:
    // 0x14c108: 0x4602a81a  mula.s      $f21, $f2
    ctx->pc = 0x14c108u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
label_14c10c:
    // 0x14c10c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x14c10cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_14c110:
    // 0x14c110: 0x4601a05c  madd.s      $f1, $f20, $f1
    ctx->pc = 0x14c110u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[1]));
label_14c114:
    // 0x14c114: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14c114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14c118:
    // 0x14c118: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14c118u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_14c11c:
    // 0x14c11c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14c11cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_14c120:
    // 0x14c120: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14c120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_14c124:
    // 0x14c124: 0x1000007c  b           . + 4 + (0x7C << 2)
label_14c128:
    if (ctx->pc == 0x14C128u) {
        ctx->pc = 0x14C128u;
            // 0x14c128: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->pc = 0x14C12Cu;
        goto label_14c12c;
    }
    ctx->pc = 0x14C124u;
    {
        const bool branch_taken_0x14c124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C124u;
            // 0x14c128: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c124) {
            ctx->pc = 0x14C318u;
            goto label_14c318;
        }
    }
    ctx->pc = 0x14C12Cu;
label_14c12c:
    // 0x14c12c: 0x8e4400f8  lw          $a0, 0xF8($s2)
    ctx->pc = 0x14c12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
label_14c130:
    // 0x14c130: 0x8c99001c  lw          $t9, 0x1C($a0)
    ctx->pc = 0x14c130u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_14c134:
    // 0x14c134: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x14c134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_14c138:
    // 0x14c138: 0x320f809  jalr        $t9
label_14c13c:
    if (ctx->pc == 0x14C13Cu) {
        ctx->pc = 0x14C140u;
        goto label_14c140;
    }
    ctx->pc = 0x14C138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C140u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x14C140u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14C140u; }
            if (ctx->pc != 0x14C140u) { return; }
        }
        }
    }
    ctx->pc = 0x14C140u;
label_14c140:
    // 0x14c140: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x14c140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14c144:
    // 0x14c144: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x14c144u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_14c148:
    // 0x14c148: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x14c148u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14c14c:
    // 0x14c14c: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x14c14cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_14c150:
    // 0x14c150: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x14c150u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_14c154:
    // 0x14c154: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x14c154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_14c158:
    // 0x14c158: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x14c158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_14c15c:
    // 0x14c15c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x14c15cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_14c160:
    // 0x14c160: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x14c160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_14c164:
    // 0x14c164: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14c164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_14c168:
    // 0x14c168: 0xc041e8a  jal         func_107A28
label_14c16c:
    if (ctx->pc == 0x14C16Cu) {
        ctx->pc = 0x14C16Cu;
            // 0x14c16c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x14C170u;
        goto label_14c170;
    }
    ctx->pc = 0x14C168u;
    SET_GPR_U32(ctx, 31, 0x14C170u);
    ctx->pc = 0x14C16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C168u;
            // 0x14c16c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A28u;
    if (runtime->hasFunction(0x107A28u)) {
        auto targetFn = runtime->lookupFunction(0x107A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C170u; }
        if (ctx->pc != 0x14C170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InterVectorXYZ_0x107a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C170u; }
        if (ctx->pc != 0x14C170u) { return; }
    }
    ctx->pc = 0x14C170u;
label_14c170:
    // 0x14c170: 0x8e4200f4  lw          $v0, 0xF4($s2)
    ctx->pc = 0x14c170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
label_14c174:
    // 0x14c174: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14c174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14c178:
    // 0x14c178: 0x10000067  b           . + 4 + (0x67 << 2)
label_14c17c:
    if (ctx->pc == 0x14C17Cu) {
        ctx->pc = 0x14C17Cu;
            // 0x14c17c: 0xac430028  sw          $v1, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
        ctx->pc = 0x14C180u;
        goto label_14c180;
    }
    ctx->pc = 0x14C178u;
    {
        const bool branch_taken_0x14c178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C178u;
            // 0x14c17c: 0xac430028  sw          $v1, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c178) {
            ctx->pc = 0x14C318u;
            goto label_14c318;
        }
    }
    ctx->pc = 0x14C180u;
label_14c180:
    // 0x14c180: 0x12600065  beqz        $s3, . + 4 + (0x65 << 2)
label_14c184:
    if (ctx->pc == 0x14C184u) {
        ctx->pc = 0x14C188u;
        goto label_14c188;
    }
    ctx->pc = 0x14C180u;
    {
        const bool branch_taken_0x14c180 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c180) {
            ctx->pc = 0x14C318u;
            goto label_14c318;
        }
    }
    ctx->pc = 0x14C188u;
label_14c188:
    // 0x14c188: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x14c188u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14c18c:
    // 0x14c18c: 0x143100  sll         $a2, $s4, 4
    ctx->pc = 0x14c18cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_14c190:
    // 0x14c190: 0x112900  sll         $a1, $s1, 4
    ctx->pc = 0x14c190u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_14c194:
    // 0x14c194: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14c194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14c198:
    // 0x14c198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c19c:
    // 0x14c19c: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x14c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
label_14c1a0:
    // 0x14c1a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14c1a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14c1a4:
    // 0x14c1a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14c1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_14c1a8:
    // 0x14c1a8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x14c1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_14c1ac:
    // 0x14c1ac: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x14c1acu;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_14c1b0:
    // 0x14c1b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14c1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14c1b4:
    // 0x14c1b4: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x14c1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_14c1b8:
    // 0x14c1b8: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x14c1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_14c1bc:
    // 0x14c1bc: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x14c1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14c1c0:
    // 0x14c1c0: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x14c1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14c1c4:
    // 0x14c1c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c1c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c1c8:
    // 0x14c1c8: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x14c1c8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_14c1cc:
    // 0x14c1cc: 0x4602a09c  madd.s      $f2, $f20, $f2
    ctx->pc = 0x14c1ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[2]));
label_14c1d0:
    // 0x14c1d0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x14c1d0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_14c1d4:
    // 0x14c1d4: 0x0  nop
    ctx->pc = 0x14c1d4u;
    // NOP
label_14c1d8:
    // 0x14c1d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14c1d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_14c1dc:
    // 0x14c1dc: 0xc04c570  jal         func_1315C0
label_14c1e0:
    if (ctx->pc == 0x14C1E0u) {
        ctx->pc = 0x14C1E0u;
            // 0x14c1e0: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x14C1E4u;
        goto label_14c1e4;
    }
    ctx->pc = 0x14C1DCu;
    SET_GPR_U32(ctx, 31, 0x14C1E4u);
    ctx->pc = 0x14C1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C1DCu;
            // 0x14c1e0: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315C0u;
    if (runtime->hasFunction(0x1315C0u)) {
        auto targetFn = runtime->lookupFunction(0x1315C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C1E4u; }
        if (ctx->pc != 0x14C1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRoll__9mgCCameraFf_0x1315c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C1E4u; }
        if (ctx->pc != 0x14C1E4u) { return; }
    }
    ctx->pc = 0x14C1E4u;
label_14c1e4:
    // 0x14c1e4: 0x1000004c  b           . + 4 + (0x4C << 2)
label_14c1e8:
    if (ctx->pc == 0x14C1E8u) {
        ctx->pc = 0x14C1ECu;
        goto label_14c1ec;
    }
    ctx->pc = 0x14C1E4u;
    {
        const bool branch_taken_0x14c1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c1e4) {
            ctx->pc = 0x14C318u;
            goto label_14c318;
        }
    }
    ctx->pc = 0x14C1ECu;
label_14c1ec:
    // 0x14c1ec: 0x1260004a  beqz        $s3, . + 4 + (0x4A << 2)
label_14c1f0:
    if (ctx->pc == 0x14C1F0u) {
        ctx->pc = 0x14C1F4u;
        goto label_14c1f4;
    }
    ctx->pc = 0x14C1ECu;
    {
        const bool branch_taken_0x14c1ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c1ec) {
            ctx->pc = 0x14C318u;
            goto label_14c318;
        }
    }
    ctx->pc = 0x14C1F4u;
label_14c1f4:
    // 0x14c1f4: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x14c1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14c1f8:
    // 0x14c1f8: 0x142900  sll         $a1, $s4, 4
    ctx->pc = 0x14c1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_14c1fc:
    // 0x14c1fc: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x14c1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_14c200:
    // 0x14c200: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x14c200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_14c204:
    // 0x14c204: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14c204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c208:
    // 0x14c208: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x14c208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_14c20c:
    // 0x14c20c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x14c20cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_14c210:
    // 0x14c210: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x14c210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
label_14c214:
    // 0x14c214: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x14c214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_14c218:
    // 0x14c218: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x14c218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_14c21c:
    // 0x14c21c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x14c21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_14c220:
    // 0x14c220: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x14c220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14c224:
    // 0x14c224: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14c224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14c228:
    // 0x14c228: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x14c228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14c22c:
    // 0x14c22c: 0x46140141  sub.s       $f5, $f0, $f20
    ctx->pc = 0x14c22cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_14c230:
    // 0x14c230: 0x4603281a  mula.s      $f5, $f3
    ctx->pc = 0x14c230u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_14c234:
    // 0x14c234: 0x4602a09c  madd.s      $f2, $f20, $f2
    ctx->pc = 0x14c234u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[2]));
label_14c238:
    // 0x14c238: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x14c238u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_14c23c:
    // 0x14c23c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14c23cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14c240:
    // 0x14c240: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c244:
    // 0x14c244: 0x0  nop
    ctx->pc = 0x14c244u;
    // NOP
label_14c248:
    // 0x14c248: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x14c248u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_14c24c:
    // 0x14c24c: 0x0  nop
    ctx->pc = 0x14c24cu;
    // NOP
label_14c250:
    // 0x14c250: 0x0  nop
    ctx->pc = 0x14c250u;
    // NOP
label_14c254:
    // 0x14c254: 0xc047a7e  jal         func_11E9F8
label_14c258:
    if (ctx->pc == 0x14C258u) {
        ctx->pc = 0x14C258u;
            // 0x14c258: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x14C25Cu;
        goto label_14c25c;
    }
    ctx->pc = 0x14C254u;
    SET_GPR_U32(ctx, 31, 0x14C25Cu);
    ctx->pc = 0x14C258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C254u;
            // 0x14c258: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E9F8u;
    if (runtime->hasFunction(0x11E9F8u)) {
        auto targetFn = runtime->lookupFunction(0x11E9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C25Cu; }
        if (ctx->pc != 0x14C25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        tanf_0x11e9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C25Cu; }
        if (ctx->pc != 0x14C25Cu) { return; }
    }
    ctx->pc = 0x14C25Cu;
label_14c25c:
    // 0x14c25c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14c260:
    // 0x14c260: 0x3c0343f0  lui         $v1, 0x43F0
    ctx->pc = 0x14c260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17392 << 16));
label_14c264:
    // 0x14c264: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14c264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_14c268:
    // 0x14c268: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14c268u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14c26c:
    // 0x14c26c: 0x0  nop
    ctx->pc = 0x14c26cu;
    // NOP
label_14c270:
    // 0x14c270: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x14c270u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_14c274:
    // 0x14c274: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x14c274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_14c278:
    // 0x14c278: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x14c278u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_14c27c:
    // 0x14c27c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c27cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c280:
    // 0x14c280: 0xc050d88  jal         func_143620
label_14c284:
    if (ctx->pc == 0x14C284u) {
        ctx->pc = 0x14C284u;
            // 0x14c284: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x14C288u;
        goto label_14c288;
    }
    ctx->pc = 0x14C280u;
    SET_GPR_U32(ctx, 31, 0x14C288u);
    ctx->pc = 0x14C284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C280u;
            // 0x14c284: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x143620u;
    if (runtime->hasFunction(0x143620u)) {
        auto targetFn = runtime->lookupFunction(0x143620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C288u; }
        if (ctx->pc != 0x14C288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetProjection__Ff_0x143620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C288u; }
        if (ctx->pc != 0x14C288u) { return; }
    }
    ctx->pc = 0x14C288u;
label_14c288:
    // 0x14c288: 0x10000023  b           . + 4 + (0x23 << 2)
label_14c28c:
    if (ctx->pc == 0x14C28Cu) {
        ctx->pc = 0x14C290u;
        goto label_14c290;
    }
    ctx->pc = 0x14C288u;
    {
        const bool branch_taken_0x14c288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c288) {
            ctx->pc = 0x14C318u;
            goto label_14c318;
        }
    }
    ctx->pc = 0x14C290u;
label_14c290:
    // 0x14c290: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x14c290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14c294:
    // 0x14c294: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14c294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14c298:
    // 0x14c298: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c29c:
    // 0x14c29c: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x14c29cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_14c2a0:
    // 0x14c2a0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x14c2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14c2a4:
    // 0x14c2a4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14c2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c2a8:
    // 0x14c2a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14c2a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14c2ac:
    // 0x14c2ac: 0x0  nop
    ctx->pc = 0x14c2acu;
    // NOP
label_14c2b0:
    // 0x14c2b0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_14c2b4:
    if (ctx->pc == 0x14C2B4u) {
        ctx->pc = 0x14C2B8u;
        goto label_14c2b8;
    }
    ctx->pc = 0x14C2B0u;
    {
        const bool branch_taken_0x14c2b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c2b0) {
            ctx->pc = 0x14C2C4u;
            goto label_14c2c4;
        }
    }
    ctx->pc = 0x14C2B8u;
label_14c2b8:
    // 0x14c2b8: 0x8e4200f4  lw          $v0, 0xF4($s2)
    ctx->pc = 0x14c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
label_14c2bc:
    // 0x14c2bc: 0x10000016  b           . + 4 + (0x16 << 2)
label_14c2c0:
    if (ctx->pc == 0x14C2C0u) {
        ctx->pc = 0x14C2C0u;
            // 0x14c2c0: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->pc = 0x14C2C4u;
        goto label_14c2c4;
    }
    ctx->pc = 0x14C2BCu;
    {
        const bool branch_taken_0x14c2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C2BCu;
            // 0x14c2c0: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c2bc) {
            ctx->pc = 0x14C318u;
            goto label_14c318;
        }
    }
    ctx->pc = 0x14C2C4u;
label_14c2c4:
    // 0x14c2c4: 0x8e4200f4  lw          $v0, 0xF4($s2)
    ctx->pc = 0x14c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
label_14c2c8:
    // 0x14c2c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14c2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14c2cc:
    // 0x14c2cc: 0x10000012  b           . + 4 + (0x12 << 2)
label_14c2d0:
    if (ctx->pc == 0x14C2D0u) {
        ctx->pc = 0x14C2D0u;
            // 0x14c2d0: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->pc = 0x14C2D4u;
        goto label_14c2d4;
    }
    ctx->pc = 0x14C2CCu;
    {
        const bool branch_taken_0x14c2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C2CCu;
            // 0x14c2d0: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c2cc) {
            ctx->pc = 0x14C318u;
            goto label_14c318;
        }
    }
    ctx->pc = 0x14C2D4u;
label_14c2d4:
    // 0x14c2d4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x14c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14c2d8:
    // 0x14c2d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14c2dc:
    // 0x14c2dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c2e0:
    // 0x14c2e0: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x14c2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_14c2e4:
    // 0x14c2e4: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x14c2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14c2e8:
    // 0x14c2e8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14c2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c2ec:
    // 0x14c2ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14c2ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14c2f0:
    // 0x14c2f0: 0x0  nop
    ctx->pc = 0x14c2f0u;
    // NOP
label_14c2f4:
    // 0x14c2f4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_14c2f8:
    if (ctx->pc == 0x14C2F8u) {
        ctx->pc = 0x14C2FCu;
        goto label_14c2fc;
    }
    ctx->pc = 0x14C2F4u;
    {
        const bool branch_taken_0x14c2f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c2f4) {
            ctx->pc = 0x14C30Cu;
            goto label_14c30c;
        }
    }
    ctx->pc = 0x14C2FCu;
label_14c2fc:
    // 0x14c2fc: 0x8e4200f4  lw          $v0, 0xF4($s2)
    ctx->pc = 0x14c2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
label_14c300:
    // 0x14c300: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14c300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14c304:
    // 0x14c304: 0x10000004  b           . + 4 + (0x4 << 2)
label_14c308:
    if (ctx->pc == 0x14C308u) {
        ctx->pc = 0x14C308u;
            // 0x14c308: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->pc = 0x14C30Cu;
        goto label_14c30c;
    }
    ctx->pc = 0x14C304u;
    {
        const bool branch_taken_0x14c304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C304u;
            // 0x14c308: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c304) {
            ctx->pc = 0x14C318u;
            goto label_14c318;
        }
    }
    ctx->pc = 0x14C30Cu;
label_14c30c:
    // 0x14c30c: 0x8e4200f4  lw          $v0, 0xF4($s2)
    ctx->pc = 0x14c30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
label_14c310:
    // 0x14c310: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14c310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c314:
    // 0x14c314: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x14c314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_14c318:
    // 0x14c318: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x14c318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_14c31c:
    // 0x14c31c: 0x0  nop
    ctx->pc = 0x14c31cu;
    // NOP
label_14c320:
    // 0x14c320: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x14c320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_14c324:
    // 0x14c324: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x14c324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_14c328:
    // 0x14c328: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x14c328u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_14c32c:
    // 0x14c32c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14c32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_14c330:
    // 0x14c330: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x14c330u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_14c334:
    // 0x14c334: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x14c334u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_14c338:
    // 0x14c338: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14c338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14c33c:
    // 0x14c33c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14c33cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14c340:
    // 0x14c340: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14c340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14c344:
    // 0x14c344: 0x3e00008  jr          $ra
label_14c348:
    if (ctx->pc == 0x14C348u) {
        ctx->pc = 0x14C348u;
            // 0x14c348: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x14C34Cu;
        goto label_fallthrough_0x14c344;
    }
    ctx->pc = 0x14C344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C344u;
            // 0x14c348: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x14c344:
    ctx->pc = 0x14C34Cu;
}
