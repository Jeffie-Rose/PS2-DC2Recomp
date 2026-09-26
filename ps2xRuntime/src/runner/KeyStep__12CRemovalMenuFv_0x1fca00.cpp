#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: KeyStep__12CRemovalMenuFv
// Address: 0x1fca00 - 0x1fdc68
void KeyStep__12CRemovalMenuFv_0x1fca00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KeyStep__12CRemovalMenuFv_0x1fca00");
#endif

    switch (ctx->pc) {
        case 0x1fca00u: goto label_1fca00;
        case 0x1fca04u: goto label_1fca04;
        case 0x1fca08u: goto label_1fca08;
        case 0x1fca0cu: goto label_1fca0c;
        case 0x1fca10u: goto label_1fca10;
        case 0x1fca14u: goto label_1fca14;
        case 0x1fca18u: goto label_1fca18;
        case 0x1fca1cu: goto label_1fca1c;
        case 0x1fca20u: goto label_1fca20;
        case 0x1fca24u: goto label_1fca24;
        case 0x1fca28u: goto label_1fca28;
        case 0x1fca2cu: goto label_1fca2c;
        case 0x1fca30u: goto label_1fca30;
        case 0x1fca34u: goto label_1fca34;
        case 0x1fca38u: goto label_1fca38;
        case 0x1fca3cu: goto label_1fca3c;
        case 0x1fca40u: goto label_1fca40;
        case 0x1fca44u: goto label_1fca44;
        case 0x1fca48u: goto label_1fca48;
        case 0x1fca4cu: goto label_1fca4c;
        case 0x1fca50u: goto label_1fca50;
        case 0x1fca54u: goto label_1fca54;
        case 0x1fca58u: goto label_1fca58;
        case 0x1fca5cu: goto label_1fca5c;
        case 0x1fca60u: goto label_1fca60;
        case 0x1fca64u: goto label_1fca64;
        case 0x1fca68u: goto label_1fca68;
        case 0x1fca6cu: goto label_1fca6c;
        case 0x1fca70u: goto label_1fca70;
        case 0x1fca74u: goto label_1fca74;
        case 0x1fca78u: goto label_1fca78;
        case 0x1fca7cu: goto label_1fca7c;
        case 0x1fca80u: goto label_1fca80;
        case 0x1fca84u: goto label_1fca84;
        case 0x1fca88u: goto label_1fca88;
        case 0x1fca8cu: goto label_1fca8c;
        case 0x1fca90u: goto label_1fca90;
        case 0x1fca94u: goto label_1fca94;
        case 0x1fca98u: goto label_1fca98;
        case 0x1fca9cu: goto label_1fca9c;
        case 0x1fcaa0u: goto label_1fcaa0;
        case 0x1fcaa4u: goto label_1fcaa4;
        case 0x1fcaa8u: goto label_1fcaa8;
        case 0x1fcaacu: goto label_1fcaac;
        case 0x1fcab0u: goto label_1fcab0;
        case 0x1fcab4u: goto label_1fcab4;
        case 0x1fcab8u: goto label_1fcab8;
        case 0x1fcabcu: goto label_1fcabc;
        case 0x1fcac0u: goto label_1fcac0;
        case 0x1fcac4u: goto label_1fcac4;
        case 0x1fcac8u: goto label_1fcac8;
        case 0x1fcaccu: goto label_1fcacc;
        case 0x1fcad0u: goto label_1fcad0;
        case 0x1fcad4u: goto label_1fcad4;
        case 0x1fcad8u: goto label_1fcad8;
        case 0x1fcadcu: goto label_1fcadc;
        case 0x1fcae0u: goto label_1fcae0;
        case 0x1fcae4u: goto label_1fcae4;
        case 0x1fcae8u: goto label_1fcae8;
        case 0x1fcaecu: goto label_1fcaec;
        case 0x1fcaf0u: goto label_1fcaf0;
        case 0x1fcaf4u: goto label_1fcaf4;
        case 0x1fcaf8u: goto label_1fcaf8;
        case 0x1fcafcu: goto label_1fcafc;
        case 0x1fcb00u: goto label_1fcb00;
        case 0x1fcb04u: goto label_1fcb04;
        case 0x1fcb08u: goto label_1fcb08;
        case 0x1fcb0cu: goto label_1fcb0c;
        case 0x1fcb10u: goto label_1fcb10;
        case 0x1fcb14u: goto label_1fcb14;
        case 0x1fcb18u: goto label_1fcb18;
        case 0x1fcb1cu: goto label_1fcb1c;
        case 0x1fcb20u: goto label_1fcb20;
        case 0x1fcb24u: goto label_1fcb24;
        case 0x1fcb28u: goto label_1fcb28;
        case 0x1fcb2cu: goto label_1fcb2c;
        case 0x1fcb30u: goto label_1fcb30;
        case 0x1fcb34u: goto label_1fcb34;
        case 0x1fcb38u: goto label_1fcb38;
        case 0x1fcb3cu: goto label_1fcb3c;
        case 0x1fcb40u: goto label_1fcb40;
        case 0x1fcb44u: goto label_1fcb44;
        case 0x1fcb48u: goto label_1fcb48;
        case 0x1fcb4cu: goto label_1fcb4c;
        case 0x1fcb50u: goto label_1fcb50;
        case 0x1fcb54u: goto label_1fcb54;
        case 0x1fcb58u: goto label_1fcb58;
        case 0x1fcb5cu: goto label_1fcb5c;
        case 0x1fcb60u: goto label_1fcb60;
        case 0x1fcb64u: goto label_1fcb64;
        case 0x1fcb68u: goto label_1fcb68;
        case 0x1fcb6cu: goto label_1fcb6c;
        case 0x1fcb70u: goto label_1fcb70;
        case 0x1fcb74u: goto label_1fcb74;
        case 0x1fcb78u: goto label_1fcb78;
        case 0x1fcb7cu: goto label_1fcb7c;
        case 0x1fcb80u: goto label_1fcb80;
        case 0x1fcb84u: goto label_1fcb84;
        case 0x1fcb88u: goto label_1fcb88;
        case 0x1fcb8cu: goto label_1fcb8c;
        case 0x1fcb90u: goto label_1fcb90;
        case 0x1fcb94u: goto label_1fcb94;
        case 0x1fcb98u: goto label_1fcb98;
        case 0x1fcb9cu: goto label_1fcb9c;
        case 0x1fcba0u: goto label_1fcba0;
        case 0x1fcba4u: goto label_1fcba4;
        case 0x1fcba8u: goto label_1fcba8;
        case 0x1fcbacu: goto label_1fcbac;
        case 0x1fcbb0u: goto label_1fcbb0;
        case 0x1fcbb4u: goto label_1fcbb4;
        case 0x1fcbb8u: goto label_1fcbb8;
        case 0x1fcbbcu: goto label_1fcbbc;
        case 0x1fcbc0u: goto label_1fcbc0;
        case 0x1fcbc4u: goto label_1fcbc4;
        case 0x1fcbc8u: goto label_1fcbc8;
        case 0x1fcbccu: goto label_1fcbcc;
        case 0x1fcbd0u: goto label_1fcbd0;
        case 0x1fcbd4u: goto label_1fcbd4;
        case 0x1fcbd8u: goto label_1fcbd8;
        case 0x1fcbdcu: goto label_1fcbdc;
        case 0x1fcbe0u: goto label_1fcbe0;
        case 0x1fcbe4u: goto label_1fcbe4;
        case 0x1fcbe8u: goto label_1fcbe8;
        case 0x1fcbecu: goto label_1fcbec;
        case 0x1fcbf0u: goto label_1fcbf0;
        case 0x1fcbf4u: goto label_1fcbf4;
        case 0x1fcbf8u: goto label_1fcbf8;
        case 0x1fcbfcu: goto label_1fcbfc;
        case 0x1fcc00u: goto label_1fcc00;
        case 0x1fcc04u: goto label_1fcc04;
        case 0x1fcc08u: goto label_1fcc08;
        case 0x1fcc0cu: goto label_1fcc0c;
        case 0x1fcc10u: goto label_1fcc10;
        case 0x1fcc14u: goto label_1fcc14;
        case 0x1fcc18u: goto label_1fcc18;
        case 0x1fcc1cu: goto label_1fcc1c;
        case 0x1fcc20u: goto label_1fcc20;
        case 0x1fcc24u: goto label_1fcc24;
        case 0x1fcc28u: goto label_1fcc28;
        case 0x1fcc2cu: goto label_1fcc2c;
        case 0x1fcc30u: goto label_1fcc30;
        case 0x1fcc34u: goto label_1fcc34;
        case 0x1fcc38u: goto label_1fcc38;
        case 0x1fcc3cu: goto label_1fcc3c;
        case 0x1fcc40u: goto label_1fcc40;
        case 0x1fcc44u: goto label_1fcc44;
        case 0x1fcc48u: goto label_1fcc48;
        case 0x1fcc4cu: goto label_1fcc4c;
        case 0x1fcc50u: goto label_1fcc50;
        case 0x1fcc54u: goto label_1fcc54;
        case 0x1fcc58u: goto label_1fcc58;
        case 0x1fcc5cu: goto label_1fcc5c;
        case 0x1fcc60u: goto label_1fcc60;
        case 0x1fcc64u: goto label_1fcc64;
        case 0x1fcc68u: goto label_1fcc68;
        case 0x1fcc6cu: goto label_1fcc6c;
        case 0x1fcc70u: goto label_1fcc70;
        case 0x1fcc74u: goto label_1fcc74;
        case 0x1fcc78u: goto label_1fcc78;
        case 0x1fcc7cu: goto label_1fcc7c;
        case 0x1fcc80u: goto label_1fcc80;
        case 0x1fcc84u: goto label_1fcc84;
        case 0x1fcc88u: goto label_1fcc88;
        case 0x1fcc8cu: goto label_1fcc8c;
        case 0x1fcc90u: goto label_1fcc90;
        case 0x1fcc94u: goto label_1fcc94;
        case 0x1fcc98u: goto label_1fcc98;
        case 0x1fcc9cu: goto label_1fcc9c;
        case 0x1fcca0u: goto label_1fcca0;
        case 0x1fcca4u: goto label_1fcca4;
        case 0x1fcca8u: goto label_1fcca8;
        case 0x1fccacu: goto label_1fccac;
        case 0x1fccb0u: goto label_1fccb0;
        case 0x1fccb4u: goto label_1fccb4;
        case 0x1fccb8u: goto label_1fccb8;
        case 0x1fccbcu: goto label_1fccbc;
        case 0x1fccc0u: goto label_1fccc0;
        case 0x1fccc4u: goto label_1fccc4;
        case 0x1fccc8u: goto label_1fccc8;
        case 0x1fccccu: goto label_1fcccc;
        case 0x1fccd0u: goto label_1fccd0;
        case 0x1fccd4u: goto label_1fccd4;
        case 0x1fccd8u: goto label_1fccd8;
        case 0x1fccdcu: goto label_1fccdc;
        case 0x1fcce0u: goto label_1fcce0;
        case 0x1fcce4u: goto label_1fcce4;
        case 0x1fcce8u: goto label_1fcce8;
        case 0x1fccecu: goto label_1fccec;
        case 0x1fccf0u: goto label_1fccf0;
        case 0x1fccf4u: goto label_1fccf4;
        case 0x1fccf8u: goto label_1fccf8;
        case 0x1fccfcu: goto label_1fccfc;
        case 0x1fcd00u: goto label_1fcd00;
        case 0x1fcd04u: goto label_1fcd04;
        case 0x1fcd08u: goto label_1fcd08;
        case 0x1fcd0cu: goto label_1fcd0c;
        case 0x1fcd10u: goto label_1fcd10;
        case 0x1fcd14u: goto label_1fcd14;
        case 0x1fcd18u: goto label_1fcd18;
        case 0x1fcd1cu: goto label_1fcd1c;
        case 0x1fcd20u: goto label_1fcd20;
        case 0x1fcd24u: goto label_1fcd24;
        case 0x1fcd28u: goto label_1fcd28;
        case 0x1fcd2cu: goto label_1fcd2c;
        case 0x1fcd30u: goto label_1fcd30;
        case 0x1fcd34u: goto label_1fcd34;
        case 0x1fcd38u: goto label_1fcd38;
        case 0x1fcd3cu: goto label_1fcd3c;
        case 0x1fcd40u: goto label_1fcd40;
        case 0x1fcd44u: goto label_1fcd44;
        case 0x1fcd48u: goto label_1fcd48;
        case 0x1fcd4cu: goto label_1fcd4c;
        case 0x1fcd50u: goto label_1fcd50;
        case 0x1fcd54u: goto label_1fcd54;
        case 0x1fcd58u: goto label_1fcd58;
        case 0x1fcd5cu: goto label_1fcd5c;
        case 0x1fcd60u: goto label_1fcd60;
        case 0x1fcd64u: goto label_1fcd64;
        case 0x1fcd68u: goto label_1fcd68;
        case 0x1fcd6cu: goto label_1fcd6c;
        case 0x1fcd70u: goto label_1fcd70;
        case 0x1fcd74u: goto label_1fcd74;
        case 0x1fcd78u: goto label_1fcd78;
        case 0x1fcd7cu: goto label_1fcd7c;
        case 0x1fcd80u: goto label_1fcd80;
        case 0x1fcd84u: goto label_1fcd84;
        case 0x1fcd88u: goto label_1fcd88;
        case 0x1fcd8cu: goto label_1fcd8c;
        case 0x1fcd90u: goto label_1fcd90;
        case 0x1fcd94u: goto label_1fcd94;
        case 0x1fcd98u: goto label_1fcd98;
        case 0x1fcd9cu: goto label_1fcd9c;
        case 0x1fcda0u: goto label_1fcda0;
        case 0x1fcda4u: goto label_1fcda4;
        case 0x1fcda8u: goto label_1fcda8;
        case 0x1fcdacu: goto label_1fcdac;
        case 0x1fcdb0u: goto label_1fcdb0;
        case 0x1fcdb4u: goto label_1fcdb4;
        case 0x1fcdb8u: goto label_1fcdb8;
        case 0x1fcdbcu: goto label_1fcdbc;
        case 0x1fcdc0u: goto label_1fcdc0;
        case 0x1fcdc4u: goto label_1fcdc4;
        case 0x1fcdc8u: goto label_1fcdc8;
        case 0x1fcdccu: goto label_1fcdcc;
        case 0x1fcdd0u: goto label_1fcdd0;
        case 0x1fcdd4u: goto label_1fcdd4;
        case 0x1fcdd8u: goto label_1fcdd8;
        case 0x1fcddcu: goto label_1fcddc;
        case 0x1fcde0u: goto label_1fcde0;
        case 0x1fcde4u: goto label_1fcde4;
        case 0x1fcde8u: goto label_1fcde8;
        case 0x1fcdecu: goto label_1fcdec;
        case 0x1fcdf0u: goto label_1fcdf0;
        case 0x1fcdf4u: goto label_1fcdf4;
        case 0x1fcdf8u: goto label_1fcdf8;
        case 0x1fcdfcu: goto label_1fcdfc;
        case 0x1fce00u: goto label_1fce00;
        case 0x1fce04u: goto label_1fce04;
        case 0x1fce08u: goto label_1fce08;
        case 0x1fce0cu: goto label_1fce0c;
        case 0x1fce10u: goto label_1fce10;
        case 0x1fce14u: goto label_1fce14;
        case 0x1fce18u: goto label_1fce18;
        case 0x1fce1cu: goto label_1fce1c;
        case 0x1fce20u: goto label_1fce20;
        case 0x1fce24u: goto label_1fce24;
        case 0x1fce28u: goto label_1fce28;
        case 0x1fce2cu: goto label_1fce2c;
        case 0x1fce30u: goto label_1fce30;
        case 0x1fce34u: goto label_1fce34;
        case 0x1fce38u: goto label_1fce38;
        case 0x1fce3cu: goto label_1fce3c;
        case 0x1fce40u: goto label_1fce40;
        case 0x1fce44u: goto label_1fce44;
        case 0x1fce48u: goto label_1fce48;
        case 0x1fce4cu: goto label_1fce4c;
        case 0x1fce50u: goto label_1fce50;
        case 0x1fce54u: goto label_1fce54;
        case 0x1fce58u: goto label_1fce58;
        case 0x1fce5cu: goto label_1fce5c;
        case 0x1fce60u: goto label_1fce60;
        case 0x1fce64u: goto label_1fce64;
        case 0x1fce68u: goto label_1fce68;
        case 0x1fce6cu: goto label_1fce6c;
        case 0x1fce70u: goto label_1fce70;
        case 0x1fce74u: goto label_1fce74;
        case 0x1fce78u: goto label_1fce78;
        case 0x1fce7cu: goto label_1fce7c;
        case 0x1fce80u: goto label_1fce80;
        case 0x1fce84u: goto label_1fce84;
        case 0x1fce88u: goto label_1fce88;
        case 0x1fce8cu: goto label_1fce8c;
        case 0x1fce90u: goto label_1fce90;
        case 0x1fce94u: goto label_1fce94;
        case 0x1fce98u: goto label_1fce98;
        case 0x1fce9cu: goto label_1fce9c;
        case 0x1fcea0u: goto label_1fcea0;
        case 0x1fcea4u: goto label_1fcea4;
        case 0x1fcea8u: goto label_1fcea8;
        case 0x1fceacu: goto label_1fceac;
        case 0x1fceb0u: goto label_1fceb0;
        case 0x1fceb4u: goto label_1fceb4;
        case 0x1fceb8u: goto label_1fceb8;
        case 0x1fcebcu: goto label_1fcebc;
        case 0x1fcec0u: goto label_1fcec0;
        case 0x1fcec4u: goto label_1fcec4;
        case 0x1fcec8u: goto label_1fcec8;
        case 0x1fceccu: goto label_1fcecc;
        case 0x1fced0u: goto label_1fced0;
        case 0x1fced4u: goto label_1fced4;
        case 0x1fced8u: goto label_1fced8;
        case 0x1fcedcu: goto label_1fcedc;
        case 0x1fcee0u: goto label_1fcee0;
        case 0x1fcee4u: goto label_1fcee4;
        case 0x1fcee8u: goto label_1fcee8;
        case 0x1fceecu: goto label_1fceec;
        case 0x1fcef0u: goto label_1fcef0;
        case 0x1fcef4u: goto label_1fcef4;
        case 0x1fcef8u: goto label_1fcef8;
        case 0x1fcefcu: goto label_1fcefc;
        case 0x1fcf00u: goto label_1fcf00;
        case 0x1fcf04u: goto label_1fcf04;
        case 0x1fcf08u: goto label_1fcf08;
        case 0x1fcf0cu: goto label_1fcf0c;
        case 0x1fcf10u: goto label_1fcf10;
        case 0x1fcf14u: goto label_1fcf14;
        case 0x1fcf18u: goto label_1fcf18;
        case 0x1fcf1cu: goto label_1fcf1c;
        case 0x1fcf20u: goto label_1fcf20;
        case 0x1fcf24u: goto label_1fcf24;
        case 0x1fcf28u: goto label_1fcf28;
        case 0x1fcf2cu: goto label_1fcf2c;
        case 0x1fcf30u: goto label_1fcf30;
        case 0x1fcf34u: goto label_1fcf34;
        case 0x1fcf38u: goto label_1fcf38;
        case 0x1fcf3cu: goto label_1fcf3c;
        case 0x1fcf40u: goto label_1fcf40;
        case 0x1fcf44u: goto label_1fcf44;
        case 0x1fcf48u: goto label_1fcf48;
        case 0x1fcf4cu: goto label_1fcf4c;
        case 0x1fcf50u: goto label_1fcf50;
        case 0x1fcf54u: goto label_1fcf54;
        case 0x1fcf58u: goto label_1fcf58;
        case 0x1fcf5cu: goto label_1fcf5c;
        case 0x1fcf60u: goto label_1fcf60;
        case 0x1fcf64u: goto label_1fcf64;
        case 0x1fcf68u: goto label_1fcf68;
        case 0x1fcf6cu: goto label_1fcf6c;
        case 0x1fcf70u: goto label_1fcf70;
        case 0x1fcf74u: goto label_1fcf74;
        case 0x1fcf78u: goto label_1fcf78;
        case 0x1fcf7cu: goto label_1fcf7c;
        case 0x1fcf80u: goto label_1fcf80;
        case 0x1fcf84u: goto label_1fcf84;
        case 0x1fcf88u: goto label_1fcf88;
        case 0x1fcf8cu: goto label_1fcf8c;
        case 0x1fcf90u: goto label_1fcf90;
        case 0x1fcf94u: goto label_1fcf94;
        case 0x1fcf98u: goto label_1fcf98;
        case 0x1fcf9cu: goto label_1fcf9c;
        case 0x1fcfa0u: goto label_1fcfa0;
        case 0x1fcfa4u: goto label_1fcfa4;
        case 0x1fcfa8u: goto label_1fcfa8;
        case 0x1fcfacu: goto label_1fcfac;
        case 0x1fcfb0u: goto label_1fcfb0;
        case 0x1fcfb4u: goto label_1fcfb4;
        case 0x1fcfb8u: goto label_1fcfb8;
        case 0x1fcfbcu: goto label_1fcfbc;
        case 0x1fcfc0u: goto label_1fcfc0;
        case 0x1fcfc4u: goto label_1fcfc4;
        case 0x1fcfc8u: goto label_1fcfc8;
        case 0x1fcfccu: goto label_1fcfcc;
        case 0x1fcfd0u: goto label_1fcfd0;
        case 0x1fcfd4u: goto label_1fcfd4;
        case 0x1fcfd8u: goto label_1fcfd8;
        case 0x1fcfdcu: goto label_1fcfdc;
        case 0x1fcfe0u: goto label_1fcfe0;
        case 0x1fcfe4u: goto label_1fcfe4;
        case 0x1fcfe8u: goto label_1fcfe8;
        case 0x1fcfecu: goto label_1fcfec;
        case 0x1fcff0u: goto label_1fcff0;
        case 0x1fcff4u: goto label_1fcff4;
        case 0x1fcff8u: goto label_1fcff8;
        case 0x1fcffcu: goto label_1fcffc;
        case 0x1fd000u: goto label_1fd000;
        case 0x1fd004u: goto label_1fd004;
        case 0x1fd008u: goto label_1fd008;
        case 0x1fd00cu: goto label_1fd00c;
        case 0x1fd010u: goto label_1fd010;
        case 0x1fd014u: goto label_1fd014;
        case 0x1fd018u: goto label_1fd018;
        case 0x1fd01cu: goto label_1fd01c;
        case 0x1fd020u: goto label_1fd020;
        case 0x1fd024u: goto label_1fd024;
        case 0x1fd028u: goto label_1fd028;
        case 0x1fd02cu: goto label_1fd02c;
        case 0x1fd030u: goto label_1fd030;
        case 0x1fd034u: goto label_1fd034;
        case 0x1fd038u: goto label_1fd038;
        case 0x1fd03cu: goto label_1fd03c;
        case 0x1fd040u: goto label_1fd040;
        case 0x1fd044u: goto label_1fd044;
        case 0x1fd048u: goto label_1fd048;
        case 0x1fd04cu: goto label_1fd04c;
        case 0x1fd050u: goto label_1fd050;
        case 0x1fd054u: goto label_1fd054;
        case 0x1fd058u: goto label_1fd058;
        case 0x1fd05cu: goto label_1fd05c;
        case 0x1fd060u: goto label_1fd060;
        case 0x1fd064u: goto label_1fd064;
        case 0x1fd068u: goto label_1fd068;
        case 0x1fd06cu: goto label_1fd06c;
        case 0x1fd070u: goto label_1fd070;
        case 0x1fd074u: goto label_1fd074;
        case 0x1fd078u: goto label_1fd078;
        case 0x1fd07cu: goto label_1fd07c;
        case 0x1fd080u: goto label_1fd080;
        case 0x1fd084u: goto label_1fd084;
        case 0x1fd088u: goto label_1fd088;
        case 0x1fd08cu: goto label_1fd08c;
        case 0x1fd090u: goto label_1fd090;
        case 0x1fd094u: goto label_1fd094;
        case 0x1fd098u: goto label_1fd098;
        case 0x1fd09cu: goto label_1fd09c;
        case 0x1fd0a0u: goto label_1fd0a0;
        case 0x1fd0a4u: goto label_1fd0a4;
        case 0x1fd0a8u: goto label_1fd0a8;
        case 0x1fd0acu: goto label_1fd0ac;
        case 0x1fd0b0u: goto label_1fd0b0;
        case 0x1fd0b4u: goto label_1fd0b4;
        case 0x1fd0b8u: goto label_1fd0b8;
        case 0x1fd0bcu: goto label_1fd0bc;
        case 0x1fd0c0u: goto label_1fd0c0;
        case 0x1fd0c4u: goto label_1fd0c4;
        case 0x1fd0c8u: goto label_1fd0c8;
        case 0x1fd0ccu: goto label_1fd0cc;
        case 0x1fd0d0u: goto label_1fd0d0;
        case 0x1fd0d4u: goto label_1fd0d4;
        case 0x1fd0d8u: goto label_1fd0d8;
        case 0x1fd0dcu: goto label_1fd0dc;
        case 0x1fd0e0u: goto label_1fd0e0;
        case 0x1fd0e4u: goto label_1fd0e4;
        case 0x1fd0e8u: goto label_1fd0e8;
        case 0x1fd0ecu: goto label_1fd0ec;
        case 0x1fd0f0u: goto label_1fd0f0;
        case 0x1fd0f4u: goto label_1fd0f4;
        case 0x1fd0f8u: goto label_1fd0f8;
        case 0x1fd0fcu: goto label_1fd0fc;
        case 0x1fd100u: goto label_1fd100;
        case 0x1fd104u: goto label_1fd104;
        case 0x1fd108u: goto label_1fd108;
        case 0x1fd10cu: goto label_1fd10c;
        case 0x1fd110u: goto label_1fd110;
        case 0x1fd114u: goto label_1fd114;
        case 0x1fd118u: goto label_1fd118;
        case 0x1fd11cu: goto label_1fd11c;
        case 0x1fd120u: goto label_1fd120;
        case 0x1fd124u: goto label_1fd124;
        case 0x1fd128u: goto label_1fd128;
        case 0x1fd12cu: goto label_1fd12c;
        case 0x1fd130u: goto label_1fd130;
        case 0x1fd134u: goto label_1fd134;
        case 0x1fd138u: goto label_1fd138;
        case 0x1fd13cu: goto label_1fd13c;
        case 0x1fd140u: goto label_1fd140;
        case 0x1fd144u: goto label_1fd144;
        case 0x1fd148u: goto label_1fd148;
        case 0x1fd14cu: goto label_1fd14c;
        case 0x1fd150u: goto label_1fd150;
        case 0x1fd154u: goto label_1fd154;
        case 0x1fd158u: goto label_1fd158;
        case 0x1fd15cu: goto label_1fd15c;
        case 0x1fd160u: goto label_1fd160;
        case 0x1fd164u: goto label_1fd164;
        case 0x1fd168u: goto label_1fd168;
        case 0x1fd16cu: goto label_1fd16c;
        case 0x1fd170u: goto label_1fd170;
        case 0x1fd174u: goto label_1fd174;
        case 0x1fd178u: goto label_1fd178;
        case 0x1fd17cu: goto label_1fd17c;
        case 0x1fd180u: goto label_1fd180;
        case 0x1fd184u: goto label_1fd184;
        case 0x1fd188u: goto label_1fd188;
        case 0x1fd18cu: goto label_1fd18c;
        case 0x1fd190u: goto label_1fd190;
        case 0x1fd194u: goto label_1fd194;
        case 0x1fd198u: goto label_1fd198;
        case 0x1fd19cu: goto label_1fd19c;
        case 0x1fd1a0u: goto label_1fd1a0;
        case 0x1fd1a4u: goto label_1fd1a4;
        case 0x1fd1a8u: goto label_1fd1a8;
        case 0x1fd1acu: goto label_1fd1ac;
        case 0x1fd1b0u: goto label_1fd1b0;
        case 0x1fd1b4u: goto label_1fd1b4;
        case 0x1fd1b8u: goto label_1fd1b8;
        case 0x1fd1bcu: goto label_1fd1bc;
        case 0x1fd1c0u: goto label_1fd1c0;
        case 0x1fd1c4u: goto label_1fd1c4;
        case 0x1fd1c8u: goto label_1fd1c8;
        case 0x1fd1ccu: goto label_1fd1cc;
        case 0x1fd1d0u: goto label_1fd1d0;
        case 0x1fd1d4u: goto label_1fd1d4;
        case 0x1fd1d8u: goto label_1fd1d8;
        case 0x1fd1dcu: goto label_1fd1dc;
        case 0x1fd1e0u: goto label_1fd1e0;
        case 0x1fd1e4u: goto label_1fd1e4;
        case 0x1fd1e8u: goto label_1fd1e8;
        case 0x1fd1ecu: goto label_1fd1ec;
        case 0x1fd1f0u: goto label_1fd1f0;
        case 0x1fd1f4u: goto label_1fd1f4;
        case 0x1fd1f8u: goto label_1fd1f8;
        case 0x1fd1fcu: goto label_1fd1fc;
        case 0x1fd200u: goto label_1fd200;
        case 0x1fd204u: goto label_1fd204;
        case 0x1fd208u: goto label_1fd208;
        case 0x1fd20cu: goto label_1fd20c;
        case 0x1fd210u: goto label_1fd210;
        case 0x1fd214u: goto label_1fd214;
        case 0x1fd218u: goto label_1fd218;
        case 0x1fd21cu: goto label_1fd21c;
        case 0x1fd220u: goto label_1fd220;
        case 0x1fd224u: goto label_1fd224;
        case 0x1fd228u: goto label_1fd228;
        case 0x1fd22cu: goto label_1fd22c;
        case 0x1fd230u: goto label_1fd230;
        case 0x1fd234u: goto label_1fd234;
        case 0x1fd238u: goto label_1fd238;
        case 0x1fd23cu: goto label_1fd23c;
        case 0x1fd240u: goto label_1fd240;
        case 0x1fd244u: goto label_1fd244;
        case 0x1fd248u: goto label_1fd248;
        case 0x1fd24cu: goto label_1fd24c;
        case 0x1fd250u: goto label_1fd250;
        case 0x1fd254u: goto label_1fd254;
        case 0x1fd258u: goto label_1fd258;
        case 0x1fd25cu: goto label_1fd25c;
        case 0x1fd260u: goto label_1fd260;
        case 0x1fd264u: goto label_1fd264;
        case 0x1fd268u: goto label_1fd268;
        case 0x1fd26cu: goto label_1fd26c;
        case 0x1fd270u: goto label_1fd270;
        case 0x1fd274u: goto label_1fd274;
        case 0x1fd278u: goto label_1fd278;
        case 0x1fd27cu: goto label_1fd27c;
        case 0x1fd280u: goto label_1fd280;
        case 0x1fd284u: goto label_1fd284;
        case 0x1fd288u: goto label_1fd288;
        case 0x1fd28cu: goto label_1fd28c;
        case 0x1fd290u: goto label_1fd290;
        case 0x1fd294u: goto label_1fd294;
        case 0x1fd298u: goto label_1fd298;
        case 0x1fd29cu: goto label_1fd29c;
        case 0x1fd2a0u: goto label_1fd2a0;
        case 0x1fd2a4u: goto label_1fd2a4;
        case 0x1fd2a8u: goto label_1fd2a8;
        case 0x1fd2acu: goto label_1fd2ac;
        case 0x1fd2b0u: goto label_1fd2b0;
        case 0x1fd2b4u: goto label_1fd2b4;
        case 0x1fd2b8u: goto label_1fd2b8;
        case 0x1fd2bcu: goto label_1fd2bc;
        case 0x1fd2c0u: goto label_1fd2c0;
        case 0x1fd2c4u: goto label_1fd2c4;
        case 0x1fd2c8u: goto label_1fd2c8;
        case 0x1fd2ccu: goto label_1fd2cc;
        case 0x1fd2d0u: goto label_1fd2d0;
        case 0x1fd2d4u: goto label_1fd2d4;
        case 0x1fd2d8u: goto label_1fd2d8;
        case 0x1fd2dcu: goto label_1fd2dc;
        case 0x1fd2e0u: goto label_1fd2e0;
        case 0x1fd2e4u: goto label_1fd2e4;
        case 0x1fd2e8u: goto label_1fd2e8;
        case 0x1fd2ecu: goto label_1fd2ec;
        case 0x1fd2f0u: goto label_1fd2f0;
        case 0x1fd2f4u: goto label_1fd2f4;
        case 0x1fd2f8u: goto label_1fd2f8;
        case 0x1fd2fcu: goto label_1fd2fc;
        case 0x1fd300u: goto label_1fd300;
        case 0x1fd304u: goto label_1fd304;
        case 0x1fd308u: goto label_1fd308;
        case 0x1fd30cu: goto label_1fd30c;
        case 0x1fd310u: goto label_1fd310;
        case 0x1fd314u: goto label_1fd314;
        case 0x1fd318u: goto label_1fd318;
        case 0x1fd31cu: goto label_1fd31c;
        case 0x1fd320u: goto label_1fd320;
        case 0x1fd324u: goto label_1fd324;
        case 0x1fd328u: goto label_1fd328;
        case 0x1fd32cu: goto label_1fd32c;
        case 0x1fd330u: goto label_1fd330;
        case 0x1fd334u: goto label_1fd334;
        case 0x1fd338u: goto label_1fd338;
        case 0x1fd33cu: goto label_1fd33c;
        case 0x1fd340u: goto label_1fd340;
        case 0x1fd344u: goto label_1fd344;
        case 0x1fd348u: goto label_1fd348;
        case 0x1fd34cu: goto label_1fd34c;
        case 0x1fd350u: goto label_1fd350;
        case 0x1fd354u: goto label_1fd354;
        case 0x1fd358u: goto label_1fd358;
        case 0x1fd35cu: goto label_1fd35c;
        case 0x1fd360u: goto label_1fd360;
        case 0x1fd364u: goto label_1fd364;
        case 0x1fd368u: goto label_1fd368;
        case 0x1fd36cu: goto label_1fd36c;
        case 0x1fd370u: goto label_1fd370;
        case 0x1fd374u: goto label_1fd374;
        case 0x1fd378u: goto label_1fd378;
        case 0x1fd37cu: goto label_1fd37c;
        case 0x1fd380u: goto label_1fd380;
        case 0x1fd384u: goto label_1fd384;
        case 0x1fd388u: goto label_1fd388;
        case 0x1fd38cu: goto label_1fd38c;
        case 0x1fd390u: goto label_1fd390;
        case 0x1fd394u: goto label_1fd394;
        case 0x1fd398u: goto label_1fd398;
        case 0x1fd39cu: goto label_1fd39c;
        case 0x1fd3a0u: goto label_1fd3a0;
        case 0x1fd3a4u: goto label_1fd3a4;
        case 0x1fd3a8u: goto label_1fd3a8;
        case 0x1fd3acu: goto label_1fd3ac;
        case 0x1fd3b0u: goto label_1fd3b0;
        case 0x1fd3b4u: goto label_1fd3b4;
        case 0x1fd3b8u: goto label_1fd3b8;
        case 0x1fd3bcu: goto label_1fd3bc;
        case 0x1fd3c0u: goto label_1fd3c0;
        case 0x1fd3c4u: goto label_1fd3c4;
        case 0x1fd3c8u: goto label_1fd3c8;
        case 0x1fd3ccu: goto label_1fd3cc;
        case 0x1fd3d0u: goto label_1fd3d0;
        case 0x1fd3d4u: goto label_1fd3d4;
        case 0x1fd3d8u: goto label_1fd3d8;
        case 0x1fd3dcu: goto label_1fd3dc;
        case 0x1fd3e0u: goto label_1fd3e0;
        case 0x1fd3e4u: goto label_1fd3e4;
        case 0x1fd3e8u: goto label_1fd3e8;
        case 0x1fd3ecu: goto label_1fd3ec;
        case 0x1fd3f0u: goto label_1fd3f0;
        case 0x1fd3f4u: goto label_1fd3f4;
        case 0x1fd3f8u: goto label_1fd3f8;
        case 0x1fd3fcu: goto label_1fd3fc;
        case 0x1fd400u: goto label_1fd400;
        case 0x1fd404u: goto label_1fd404;
        case 0x1fd408u: goto label_1fd408;
        case 0x1fd40cu: goto label_1fd40c;
        case 0x1fd410u: goto label_1fd410;
        case 0x1fd414u: goto label_1fd414;
        case 0x1fd418u: goto label_1fd418;
        case 0x1fd41cu: goto label_1fd41c;
        case 0x1fd420u: goto label_1fd420;
        case 0x1fd424u: goto label_1fd424;
        case 0x1fd428u: goto label_1fd428;
        case 0x1fd42cu: goto label_1fd42c;
        case 0x1fd430u: goto label_1fd430;
        case 0x1fd434u: goto label_1fd434;
        case 0x1fd438u: goto label_1fd438;
        case 0x1fd43cu: goto label_1fd43c;
        case 0x1fd440u: goto label_1fd440;
        case 0x1fd444u: goto label_1fd444;
        case 0x1fd448u: goto label_1fd448;
        case 0x1fd44cu: goto label_1fd44c;
        case 0x1fd450u: goto label_1fd450;
        case 0x1fd454u: goto label_1fd454;
        case 0x1fd458u: goto label_1fd458;
        case 0x1fd45cu: goto label_1fd45c;
        case 0x1fd460u: goto label_1fd460;
        case 0x1fd464u: goto label_1fd464;
        case 0x1fd468u: goto label_1fd468;
        case 0x1fd46cu: goto label_1fd46c;
        case 0x1fd470u: goto label_1fd470;
        case 0x1fd474u: goto label_1fd474;
        case 0x1fd478u: goto label_1fd478;
        case 0x1fd47cu: goto label_1fd47c;
        case 0x1fd480u: goto label_1fd480;
        case 0x1fd484u: goto label_1fd484;
        case 0x1fd488u: goto label_1fd488;
        case 0x1fd48cu: goto label_1fd48c;
        case 0x1fd490u: goto label_1fd490;
        case 0x1fd494u: goto label_1fd494;
        case 0x1fd498u: goto label_1fd498;
        case 0x1fd49cu: goto label_1fd49c;
        case 0x1fd4a0u: goto label_1fd4a0;
        case 0x1fd4a4u: goto label_1fd4a4;
        case 0x1fd4a8u: goto label_1fd4a8;
        case 0x1fd4acu: goto label_1fd4ac;
        case 0x1fd4b0u: goto label_1fd4b0;
        case 0x1fd4b4u: goto label_1fd4b4;
        case 0x1fd4b8u: goto label_1fd4b8;
        case 0x1fd4bcu: goto label_1fd4bc;
        case 0x1fd4c0u: goto label_1fd4c0;
        case 0x1fd4c4u: goto label_1fd4c4;
        case 0x1fd4c8u: goto label_1fd4c8;
        case 0x1fd4ccu: goto label_1fd4cc;
        case 0x1fd4d0u: goto label_1fd4d0;
        case 0x1fd4d4u: goto label_1fd4d4;
        case 0x1fd4d8u: goto label_1fd4d8;
        case 0x1fd4dcu: goto label_1fd4dc;
        case 0x1fd4e0u: goto label_1fd4e0;
        case 0x1fd4e4u: goto label_1fd4e4;
        case 0x1fd4e8u: goto label_1fd4e8;
        case 0x1fd4ecu: goto label_1fd4ec;
        case 0x1fd4f0u: goto label_1fd4f0;
        case 0x1fd4f4u: goto label_1fd4f4;
        case 0x1fd4f8u: goto label_1fd4f8;
        case 0x1fd4fcu: goto label_1fd4fc;
        case 0x1fd500u: goto label_1fd500;
        case 0x1fd504u: goto label_1fd504;
        case 0x1fd508u: goto label_1fd508;
        case 0x1fd50cu: goto label_1fd50c;
        case 0x1fd510u: goto label_1fd510;
        case 0x1fd514u: goto label_1fd514;
        case 0x1fd518u: goto label_1fd518;
        case 0x1fd51cu: goto label_1fd51c;
        case 0x1fd520u: goto label_1fd520;
        case 0x1fd524u: goto label_1fd524;
        case 0x1fd528u: goto label_1fd528;
        case 0x1fd52cu: goto label_1fd52c;
        case 0x1fd530u: goto label_1fd530;
        case 0x1fd534u: goto label_1fd534;
        case 0x1fd538u: goto label_1fd538;
        case 0x1fd53cu: goto label_1fd53c;
        case 0x1fd540u: goto label_1fd540;
        case 0x1fd544u: goto label_1fd544;
        case 0x1fd548u: goto label_1fd548;
        case 0x1fd54cu: goto label_1fd54c;
        case 0x1fd550u: goto label_1fd550;
        case 0x1fd554u: goto label_1fd554;
        case 0x1fd558u: goto label_1fd558;
        case 0x1fd55cu: goto label_1fd55c;
        case 0x1fd560u: goto label_1fd560;
        case 0x1fd564u: goto label_1fd564;
        case 0x1fd568u: goto label_1fd568;
        case 0x1fd56cu: goto label_1fd56c;
        case 0x1fd570u: goto label_1fd570;
        case 0x1fd574u: goto label_1fd574;
        case 0x1fd578u: goto label_1fd578;
        case 0x1fd57cu: goto label_1fd57c;
        case 0x1fd580u: goto label_1fd580;
        case 0x1fd584u: goto label_1fd584;
        case 0x1fd588u: goto label_1fd588;
        case 0x1fd58cu: goto label_1fd58c;
        case 0x1fd590u: goto label_1fd590;
        case 0x1fd594u: goto label_1fd594;
        case 0x1fd598u: goto label_1fd598;
        case 0x1fd59cu: goto label_1fd59c;
        case 0x1fd5a0u: goto label_1fd5a0;
        case 0x1fd5a4u: goto label_1fd5a4;
        case 0x1fd5a8u: goto label_1fd5a8;
        case 0x1fd5acu: goto label_1fd5ac;
        case 0x1fd5b0u: goto label_1fd5b0;
        case 0x1fd5b4u: goto label_1fd5b4;
        case 0x1fd5b8u: goto label_1fd5b8;
        case 0x1fd5bcu: goto label_1fd5bc;
        case 0x1fd5c0u: goto label_1fd5c0;
        case 0x1fd5c4u: goto label_1fd5c4;
        case 0x1fd5c8u: goto label_1fd5c8;
        case 0x1fd5ccu: goto label_1fd5cc;
        case 0x1fd5d0u: goto label_1fd5d0;
        case 0x1fd5d4u: goto label_1fd5d4;
        case 0x1fd5d8u: goto label_1fd5d8;
        case 0x1fd5dcu: goto label_1fd5dc;
        case 0x1fd5e0u: goto label_1fd5e0;
        case 0x1fd5e4u: goto label_1fd5e4;
        case 0x1fd5e8u: goto label_1fd5e8;
        case 0x1fd5ecu: goto label_1fd5ec;
        case 0x1fd5f0u: goto label_1fd5f0;
        case 0x1fd5f4u: goto label_1fd5f4;
        case 0x1fd5f8u: goto label_1fd5f8;
        case 0x1fd5fcu: goto label_1fd5fc;
        case 0x1fd600u: goto label_1fd600;
        case 0x1fd604u: goto label_1fd604;
        case 0x1fd608u: goto label_1fd608;
        case 0x1fd60cu: goto label_1fd60c;
        case 0x1fd610u: goto label_1fd610;
        case 0x1fd614u: goto label_1fd614;
        case 0x1fd618u: goto label_1fd618;
        case 0x1fd61cu: goto label_1fd61c;
        case 0x1fd620u: goto label_1fd620;
        case 0x1fd624u: goto label_1fd624;
        case 0x1fd628u: goto label_1fd628;
        case 0x1fd62cu: goto label_1fd62c;
        case 0x1fd630u: goto label_1fd630;
        case 0x1fd634u: goto label_1fd634;
        case 0x1fd638u: goto label_1fd638;
        case 0x1fd63cu: goto label_1fd63c;
        case 0x1fd640u: goto label_1fd640;
        case 0x1fd644u: goto label_1fd644;
        case 0x1fd648u: goto label_1fd648;
        case 0x1fd64cu: goto label_1fd64c;
        case 0x1fd650u: goto label_1fd650;
        case 0x1fd654u: goto label_1fd654;
        case 0x1fd658u: goto label_1fd658;
        case 0x1fd65cu: goto label_1fd65c;
        case 0x1fd660u: goto label_1fd660;
        case 0x1fd664u: goto label_1fd664;
        case 0x1fd668u: goto label_1fd668;
        case 0x1fd66cu: goto label_1fd66c;
        case 0x1fd670u: goto label_1fd670;
        case 0x1fd674u: goto label_1fd674;
        case 0x1fd678u: goto label_1fd678;
        case 0x1fd67cu: goto label_1fd67c;
        case 0x1fd680u: goto label_1fd680;
        case 0x1fd684u: goto label_1fd684;
        case 0x1fd688u: goto label_1fd688;
        case 0x1fd68cu: goto label_1fd68c;
        case 0x1fd690u: goto label_1fd690;
        case 0x1fd694u: goto label_1fd694;
        case 0x1fd698u: goto label_1fd698;
        case 0x1fd69cu: goto label_1fd69c;
        case 0x1fd6a0u: goto label_1fd6a0;
        case 0x1fd6a4u: goto label_1fd6a4;
        case 0x1fd6a8u: goto label_1fd6a8;
        case 0x1fd6acu: goto label_1fd6ac;
        case 0x1fd6b0u: goto label_1fd6b0;
        case 0x1fd6b4u: goto label_1fd6b4;
        case 0x1fd6b8u: goto label_1fd6b8;
        case 0x1fd6bcu: goto label_1fd6bc;
        case 0x1fd6c0u: goto label_1fd6c0;
        case 0x1fd6c4u: goto label_1fd6c4;
        case 0x1fd6c8u: goto label_1fd6c8;
        case 0x1fd6ccu: goto label_1fd6cc;
        case 0x1fd6d0u: goto label_1fd6d0;
        case 0x1fd6d4u: goto label_1fd6d4;
        case 0x1fd6d8u: goto label_1fd6d8;
        case 0x1fd6dcu: goto label_1fd6dc;
        case 0x1fd6e0u: goto label_1fd6e0;
        case 0x1fd6e4u: goto label_1fd6e4;
        case 0x1fd6e8u: goto label_1fd6e8;
        case 0x1fd6ecu: goto label_1fd6ec;
        case 0x1fd6f0u: goto label_1fd6f0;
        case 0x1fd6f4u: goto label_1fd6f4;
        case 0x1fd6f8u: goto label_1fd6f8;
        case 0x1fd6fcu: goto label_1fd6fc;
        case 0x1fd700u: goto label_1fd700;
        case 0x1fd704u: goto label_1fd704;
        case 0x1fd708u: goto label_1fd708;
        case 0x1fd70cu: goto label_1fd70c;
        case 0x1fd710u: goto label_1fd710;
        case 0x1fd714u: goto label_1fd714;
        case 0x1fd718u: goto label_1fd718;
        case 0x1fd71cu: goto label_1fd71c;
        case 0x1fd720u: goto label_1fd720;
        case 0x1fd724u: goto label_1fd724;
        case 0x1fd728u: goto label_1fd728;
        case 0x1fd72cu: goto label_1fd72c;
        case 0x1fd730u: goto label_1fd730;
        case 0x1fd734u: goto label_1fd734;
        case 0x1fd738u: goto label_1fd738;
        case 0x1fd73cu: goto label_1fd73c;
        case 0x1fd740u: goto label_1fd740;
        case 0x1fd744u: goto label_1fd744;
        case 0x1fd748u: goto label_1fd748;
        case 0x1fd74cu: goto label_1fd74c;
        case 0x1fd750u: goto label_1fd750;
        case 0x1fd754u: goto label_1fd754;
        case 0x1fd758u: goto label_1fd758;
        case 0x1fd75cu: goto label_1fd75c;
        case 0x1fd760u: goto label_1fd760;
        case 0x1fd764u: goto label_1fd764;
        case 0x1fd768u: goto label_1fd768;
        case 0x1fd76cu: goto label_1fd76c;
        case 0x1fd770u: goto label_1fd770;
        case 0x1fd774u: goto label_1fd774;
        case 0x1fd778u: goto label_1fd778;
        case 0x1fd77cu: goto label_1fd77c;
        case 0x1fd780u: goto label_1fd780;
        case 0x1fd784u: goto label_1fd784;
        case 0x1fd788u: goto label_1fd788;
        case 0x1fd78cu: goto label_1fd78c;
        case 0x1fd790u: goto label_1fd790;
        case 0x1fd794u: goto label_1fd794;
        case 0x1fd798u: goto label_1fd798;
        case 0x1fd79cu: goto label_1fd79c;
        case 0x1fd7a0u: goto label_1fd7a0;
        case 0x1fd7a4u: goto label_1fd7a4;
        case 0x1fd7a8u: goto label_1fd7a8;
        case 0x1fd7acu: goto label_1fd7ac;
        case 0x1fd7b0u: goto label_1fd7b0;
        case 0x1fd7b4u: goto label_1fd7b4;
        case 0x1fd7b8u: goto label_1fd7b8;
        case 0x1fd7bcu: goto label_1fd7bc;
        case 0x1fd7c0u: goto label_1fd7c0;
        case 0x1fd7c4u: goto label_1fd7c4;
        case 0x1fd7c8u: goto label_1fd7c8;
        case 0x1fd7ccu: goto label_1fd7cc;
        case 0x1fd7d0u: goto label_1fd7d0;
        case 0x1fd7d4u: goto label_1fd7d4;
        case 0x1fd7d8u: goto label_1fd7d8;
        case 0x1fd7dcu: goto label_1fd7dc;
        case 0x1fd7e0u: goto label_1fd7e0;
        case 0x1fd7e4u: goto label_1fd7e4;
        case 0x1fd7e8u: goto label_1fd7e8;
        case 0x1fd7ecu: goto label_1fd7ec;
        case 0x1fd7f0u: goto label_1fd7f0;
        case 0x1fd7f4u: goto label_1fd7f4;
        case 0x1fd7f8u: goto label_1fd7f8;
        case 0x1fd7fcu: goto label_1fd7fc;
        case 0x1fd800u: goto label_1fd800;
        case 0x1fd804u: goto label_1fd804;
        case 0x1fd808u: goto label_1fd808;
        case 0x1fd80cu: goto label_1fd80c;
        case 0x1fd810u: goto label_1fd810;
        case 0x1fd814u: goto label_1fd814;
        case 0x1fd818u: goto label_1fd818;
        case 0x1fd81cu: goto label_1fd81c;
        case 0x1fd820u: goto label_1fd820;
        case 0x1fd824u: goto label_1fd824;
        case 0x1fd828u: goto label_1fd828;
        case 0x1fd82cu: goto label_1fd82c;
        case 0x1fd830u: goto label_1fd830;
        case 0x1fd834u: goto label_1fd834;
        case 0x1fd838u: goto label_1fd838;
        case 0x1fd83cu: goto label_1fd83c;
        case 0x1fd840u: goto label_1fd840;
        case 0x1fd844u: goto label_1fd844;
        case 0x1fd848u: goto label_1fd848;
        case 0x1fd84cu: goto label_1fd84c;
        case 0x1fd850u: goto label_1fd850;
        case 0x1fd854u: goto label_1fd854;
        case 0x1fd858u: goto label_1fd858;
        case 0x1fd85cu: goto label_1fd85c;
        case 0x1fd860u: goto label_1fd860;
        case 0x1fd864u: goto label_1fd864;
        case 0x1fd868u: goto label_1fd868;
        case 0x1fd86cu: goto label_1fd86c;
        case 0x1fd870u: goto label_1fd870;
        case 0x1fd874u: goto label_1fd874;
        case 0x1fd878u: goto label_1fd878;
        case 0x1fd87cu: goto label_1fd87c;
        case 0x1fd880u: goto label_1fd880;
        case 0x1fd884u: goto label_1fd884;
        case 0x1fd888u: goto label_1fd888;
        case 0x1fd88cu: goto label_1fd88c;
        case 0x1fd890u: goto label_1fd890;
        case 0x1fd894u: goto label_1fd894;
        case 0x1fd898u: goto label_1fd898;
        case 0x1fd89cu: goto label_1fd89c;
        case 0x1fd8a0u: goto label_1fd8a0;
        case 0x1fd8a4u: goto label_1fd8a4;
        case 0x1fd8a8u: goto label_1fd8a8;
        case 0x1fd8acu: goto label_1fd8ac;
        case 0x1fd8b0u: goto label_1fd8b0;
        case 0x1fd8b4u: goto label_1fd8b4;
        case 0x1fd8b8u: goto label_1fd8b8;
        case 0x1fd8bcu: goto label_1fd8bc;
        case 0x1fd8c0u: goto label_1fd8c0;
        case 0x1fd8c4u: goto label_1fd8c4;
        case 0x1fd8c8u: goto label_1fd8c8;
        case 0x1fd8ccu: goto label_1fd8cc;
        case 0x1fd8d0u: goto label_1fd8d0;
        case 0x1fd8d4u: goto label_1fd8d4;
        case 0x1fd8d8u: goto label_1fd8d8;
        case 0x1fd8dcu: goto label_1fd8dc;
        case 0x1fd8e0u: goto label_1fd8e0;
        case 0x1fd8e4u: goto label_1fd8e4;
        case 0x1fd8e8u: goto label_1fd8e8;
        case 0x1fd8ecu: goto label_1fd8ec;
        case 0x1fd8f0u: goto label_1fd8f0;
        case 0x1fd8f4u: goto label_1fd8f4;
        case 0x1fd8f8u: goto label_1fd8f8;
        case 0x1fd8fcu: goto label_1fd8fc;
        case 0x1fd900u: goto label_1fd900;
        case 0x1fd904u: goto label_1fd904;
        case 0x1fd908u: goto label_1fd908;
        case 0x1fd90cu: goto label_1fd90c;
        case 0x1fd910u: goto label_1fd910;
        case 0x1fd914u: goto label_1fd914;
        case 0x1fd918u: goto label_1fd918;
        case 0x1fd91cu: goto label_1fd91c;
        case 0x1fd920u: goto label_1fd920;
        case 0x1fd924u: goto label_1fd924;
        case 0x1fd928u: goto label_1fd928;
        case 0x1fd92cu: goto label_1fd92c;
        case 0x1fd930u: goto label_1fd930;
        case 0x1fd934u: goto label_1fd934;
        case 0x1fd938u: goto label_1fd938;
        case 0x1fd93cu: goto label_1fd93c;
        case 0x1fd940u: goto label_1fd940;
        case 0x1fd944u: goto label_1fd944;
        case 0x1fd948u: goto label_1fd948;
        case 0x1fd94cu: goto label_1fd94c;
        case 0x1fd950u: goto label_1fd950;
        case 0x1fd954u: goto label_1fd954;
        case 0x1fd958u: goto label_1fd958;
        case 0x1fd95cu: goto label_1fd95c;
        case 0x1fd960u: goto label_1fd960;
        case 0x1fd964u: goto label_1fd964;
        case 0x1fd968u: goto label_1fd968;
        case 0x1fd96cu: goto label_1fd96c;
        case 0x1fd970u: goto label_1fd970;
        case 0x1fd974u: goto label_1fd974;
        case 0x1fd978u: goto label_1fd978;
        case 0x1fd97cu: goto label_1fd97c;
        case 0x1fd980u: goto label_1fd980;
        case 0x1fd984u: goto label_1fd984;
        case 0x1fd988u: goto label_1fd988;
        case 0x1fd98cu: goto label_1fd98c;
        case 0x1fd990u: goto label_1fd990;
        case 0x1fd994u: goto label_1fd994;
        case 0x1fd998u: goto label_1fd998;
        case 0x1fd99cu: goto label_1fd99c;
        case 0x1fd9a0u: goto label_1fd9a0;
        case 0x1fd9a4u: goto label_1fd9a4;
        case 0x1fd9a8u: goto label_1fd9a8;
        case 0x1fd9acu: goto label_1fd9ac;
        case 0x1fd9b0u: goto label_1fd9b0;
        case 0x1fd9b4u: goto label_1fd9b4;
        case 0x1fd9b8u: goto label_1fd9b8;
        case 0x1fd9bcu: goto label_1fd9bc;
        case 0x1fd9c0u: goto label_1fd9c0;
        case 0x1fd9c4u: goto label_1fd9c4;
        case 0x1fd9c8u: goto label_1fd9c8;
        case 0x1fd9ccu: goto label_1fd9cc;
        case 0x1fd9d0u: goto label_1fd9d0;
        case 0x1fd9d4u: goto label_1fd9d4;
        case 0x1fd9d8u: goto label_1fd9d8;
        case 0x1fd9dcu: goto label_1fd9dc;
        case 0x1fd9e0u: goto label_1fd9e0;
        case 0x1fd9e4u: goto label_1fd9e4;
        case 0x1fd9e8u: goto label_1fd9e8;
        case 0x1fd9ecu: goto label_1fd9ec;
        case 0x1fd9f0u: goto label_1fd9f0;
        case 0x1fd9f4u: goto label_1fd9f4;
        case 0x1fd9f8u: goto label_1fd9f8;
        case 0x1fd9fcu: goto label_1fd9fc;
        case 0x1fda00u: goto label_1fda00;
        case 0x1fda04u: goto label_1fda04;
        case 0x1fda08u: goto label_1fda08;
        case 0x1fda0cu: goto label_1fda0c;
        case 0x1fda10u: goto label_1fda10;
        case 0x1fda14u: goto label_1fda14;
        case 0x1fda18u: goto label_1fda18;
        case 0x1fda1cu: goto label_1fda1c;
        case 0x1fda20u: goto label_1fda20;
        case 0x1fda24u: goto label_1fda24;
        case 0x1fda28u: goto label_1fda28;
        case 0x1fda2cu: goto label_1fda2c;
        case 0x1fda30u: goto label_1fda30;
        case 0x1fda34u: goto label_1fda34;
        case 0x1fda38u: goto label_1fda38;
        case 0x1fda3cu: goto label_1fda3c;
        case 0x1fda40u: goto label_1fda40;
        case 0x1fda44u: goto label_1fda44;
        case 0x1fda48u: goto label_1fda48;
        case 0x1fda4cu: goto label_1fda4c;
        case 0x1fda50u: goto label_1fda50;
        case 0x1fda54u: goto label_1fda54;
        case 0x1fda58u: goto label_1fda58;
        case 0x1fda5cu: goto label_1fda5c;
        case 0x1fda60u: goto label_1fda60;
        case 0x1fda64u: goto label_1fda64;
        case 0x1fda68u: goto label_1fda68;
        case 0x1fda6cu: goto label_1fda6c;
        case 0x1fda70u: goto label_1fda70;
        case 0x1fda74u: goto label_1fda74;
        case 0x1fda78u: goto label_1fda78;
        case 0x1fda7cu: goto label_1fda7c;
        case 0x1fda80u: goto label_1fda80;
        case 0x1fda84u: goto label_1fda84;
        case 0x1fda88u: goto label_1fda88;
        case 0x1fda8cu: goto label_1fda8c;
        case 0x1fda90u: goto label_1fda90;
        case 0x1fda94u: goto label_1fda94;
        case 0x1fda98u: goto label_1fda98;
        case 0x1fda9cu: goto label_1fda9c;
        case 0x1fdaa0u: goto label_1fdaa0;
        case 0x1fdaa4u: goto label_1fdaa4;
        case 0x1fdaa8u: goto label_1fdaa8;
        case 0x1fdaacu: goto label_1fdaac;
        case 0x1fdab0u: goto label_1fdab0;
        case 0x1fdab4u: goto label_1fdab4;
        case 0x1fdab8u: goto label_1fdab8;
        case 0x1fdabcu: goto label_1fdabc;
        case 0x1fdac0u: goto label_1fdac0;
        case 0x1fdac4u: goto label_1fdac4;
        case 0x1fdac8u: goto label_1fdac8;
        case 0x1fdaccu: goto label_1fdacc;
        case 0x1fdad0u: goto label_1fdad0;
        case 0x1fdad4u: goto label_1fdad4;
        case 0x1fdad8u: goto label_1fdad8;
        case 0x1fdadcu: goto label_1fdadc;
        case 0x1fdae0u: goto label_1fdae0;
        case 0x1fdae4u: goto label_1fdae4;
        case 0x1fdae8u: goto label_1fdae8;
        case 0x1fdaecu: goto label_1fdaec;
        case 0x1fdaf0u: goto label_1fdaf0;
        case 0x1fdaf4u: goto label_1fdaf4;
        case 0x1fdaf8u: goto label_1fdaf8;
        case 0x1fdafcu: goto label_1fdafc;
        case 0x1fdb00u: goto label_1fdb00;
        case 0x1fdb04u: goto label_1fdb04;
        case 0x1fdb08u: goto label_1fdb08;
        case 0x1fdb0cu: goto label_1fdb0c;
        case 0x1fdb10u: goto label_1fdb10;
        case 0x1fdb14u: goto label_1fdb14;
        case 0x1fdb18u: goto label_1fdb18;
        case 0x1fdb1cu: goto label_1fdb1c;
        case 0x1fdb20u: goto label_1fdb20;
        case 0x1fdb24u: goto label_1fdb24;
        case 0x1fdb28u: goto label_1fdb28;
        case 0x1fdb2cu: goto label_1fdb2c;
        case 0x1fdb30u: goto label_1fdb30;
        case 0x1fdb34u: goto label_1fdb34;
        case 0x1fdb38u: goto label_1fdb38;
        case 0x1fdb3cu: goto label_1fdb3c;
        case 0x1fdb40u: goto label_1fdb40;
        case 0x1fdb44u: goto label_1fdb44;
        case 0x1fdb48u: goto label_1fdb48;
        case 0x1fdb4cu: goto label_1fdb4c;
        case 0x1fdb50u: goto label_1fdb50;
        case 0x1fdb54u: goto label_1fdb54;
        case 0x1fdb58u: goto label_1fdb58;
        case 0x1fdb5cu: goto label_1fdb5c;
        case 0x1fdb60u: goto label_1fdb60;
        case 0x1fdb64u: goto label_1fdb64;
        case 0x1fdb68u: goto label_1fdb68;
        case 0x1fdb6cu: goto label_1fdb6c;
        case 0x1fdb70u: goto label_1fdb70;
        case 0x1fdb74u: goto label_1fdb74;
        case 0x1fdb78u: goto label_1fdb78;
        case 0x1fdb7cu: goto label_1fdb7c;
        case 0x1fdb80u: goto label_1fdb80;
        case 0x1fdb84u: goto label_1fdb84;
        case 0x1fdb88u: goto label_1fdb88;
        case 0x1fdb8cu: goto label_1fdb8c;
        case 0x1fdb90u: goto label_1fdb90;
        case 0x1fdb94u: goto label_1fdb94;
        case 0x1fdb98u: goto label_1fdb98;
        case 0x1fdb9cu: goto label_1fdb9c;
        case 0x1fdba0u: goto label_1fdba0;
        case 0x1fdba4u: goto label_1fdba4;
        case 0x1fdba8u: goto label_1fdba8;
        case 0x1fdbacu: goto label_1fdbac;
        case 0x1fdbb0u: goto label_1fdbb0;
        case 0x1fdbb4u: goto label_1fdbb4;
        case 0x1fdbb8u: goto label_1fdbb8;
        case 0x1fdbbcu: goto label_1fdbbc;
        case 0x1fdbc0u: goto label_1fdbc0;
        case 0x1fdbc4u: goto label_1fdbc4;
        case 0x1fdbc8u: goto label_1fdbc8;
        case 0x1fdbccu: goto label_1fdbcc;
        case 0x1fdbd0u: goto label_1fdbd0;
        case 0x1fdbd4u: goto label_1fdbd4;
        case 0x1fdbd8u: goto label_1fdbd8;
        case 0x1fdbdcu: goto label_1fdbdc;
        case 0x1fdbe0u: goto label_1fdbe0;
        case 0x1fdbe4u: goto label_1fdbe4;
        case 0x1fdbe8u: goto label_1fdbe8;
        case 0x1fdbecu: goto label_1fdbec;
        case 0x1fdbf0u: goto label_1fdbf0;
        case 0x1fdbf4u: goto label_1fdbf4;
        case 0x1fdbf8u: goto label_1fdbf8;
        case 0x1fdbfcu: goto label_1fdbfc;
        case 0x1fdc00u: goto label_1fdc00;
        case 0x1fdc04u: goto label_1fdc04;
        case 0x1fdc08u: goto label_1fdc08;
        case 0x1fdc0cu: goto label_1fdc0c;
        case 0x1fdc10u: goto label_1fdc10;
        case 0x1fdc14u: goto label_1fdc14;
        case 0x1fdc18u: goto label_1fdc18;
        case 0x1fdc1cu: goto label_1fdc1c;
        case 0x1fdc20u: goto label_1fdc20;
        case 0x1fdc24u: goto label_1fdc24;
        case 0x1fdc28u: goto label_1fdc28;
        case 0x1fdc2cu: goto label_1fdc2c;
        case 0x1fdc30u: goto label_1fdc30;
        case 0x1fdc34u: goto label_1fdc34;
        case 0x1fdc38u: goto label_1fdc38;
        case 0x1fdc3cu: goto label_1fdc3c;
        case 0x1fdc40u: goto label_1fdc40;
        case 0x1fdc44u: goto label_1fdc44;
        case 0x1fdc48u: goto label_1fdc48;
        case 0x1fdc4cu: goto label_1fdc4c;
        case 0x1fdc50u: goto label_1fdc50;
        case 0x1fdc54u: goto label_1fdc54;
        case 0x1fdc58u: goto label_1fdc58;
        case 0x1fdc5cu: goto label_1fdc5c;
        case 0x1fdc60u: goto label_1fdc60;
        case 0x1fdc64u: goto label_1fdc64;
        default: break;
    }

    ctx->pc = 0x1fca00u;

label_1fca00:
    // 0x1fca00: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x1fca00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
label_1fca04:
    // 0x1fca04: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1fca04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1fca08:
    // 0x1fca08: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1fca08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1fca0c:
    // 0x1fca0c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1fca0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1fca10:
    // 0x1fca10: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1fca10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1fca14:
    // 0x1fca14: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1fca14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1fca18:
    // 0x1fca18: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1fca18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1fca1c:
    // 0x1fca1c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1fca1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1fca20:
    // 0x1fca20: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1fca20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fca24:
    // 0x1fca24: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1fca24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1fca28:
    // 0x1fca28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fca28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1fca2c:
    // 0x1fca2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fca2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1fca30:
    // 0x1fca30: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1fca30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1fca34:
    // 0x1fca34: 0x8f828ff8  lw          $v0, -0x7008($gp)
    ctx->pc = 0x1fca34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938616)));
label_1fca38:
    // 0x1fca38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1fca3c:
    if (ctx->pc == 0x1FCA3Cu) {
        ctx->pc = 0x1FCA3Cu;
            // 0x1fca3c: 0xafa000c0  sw          $zero, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
        ctx->pc = 0x1FCA40u;
        goto label_1fca40;
    }
    ctx->pc = 0x1FCA38u;
    {
        const bool branch_taken_0x1fca38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCA38u;
            // 0x1fca3c: 0xafa000c0  sw          $zero, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fca38) {
            ctx->pc = 0x1FCA48u;
            goto label_1fca48;
        }
    }
    ctx->pc = 0x1FCA40u;
label_1fca40:
    // 0x1fca40: 0x1000047c  b           . + 4 + (0x47C << 2)
label_1fca44:
    if (ctx->pc == 0x1FCA44u) {
        ctx->pc = 0x1FCA44u;
            // 0x1fca44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FCA48u;
        goto label_1fca48;
    }
    ctx->pc = 0x1FCA40u;
    {
        const bool branch_taken_0x1fca40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCA40u;
            // 0x1fca44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fca40) {
            ctx->pc = 0x1FDC34u;
            goto label_1fdc34;
        }
    }
    ctx->pc = 0x1FCA48u;
label_1fca48:
    // 0x1fca48: 0xc08f80c  jal         func_23E030
label_1fca4c:
    if (ctx->pc == 0x1FCA4Cu) {
        ctx->pc = 0x1FCA4Cu;
            // 0x1fca4c: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->pc = 0x1FCA50u;
        goto label_1fca50;
    }
    ctx->pc = 0x1FCA48u;
    SET_GPR_U32(ctx, 31, 0x1FCA50u);
    ctx->pc = 0x1FCA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCA48u;
            // 0x1fca4c: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E030u;
    if (runtime->hasFunction(0x23E030u)) {
        auto targetFn = runtime->lookupFunction(0x23E030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCA50u; }
        if (ctx->pc != 0x1FCA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSelectKey__12CMenuKeyFuncFv_0x23e030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCA50u; }
        if (ctx->pc != 0x1FCA50u) { return; }
    }
    ctx->pc = 0x1FCA50u;
label_1fca50:
    // 0x1fca50: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x1fca50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_1fca54:
    // 0x1fca54: 0xc08f8c8  jal         func_23E320
label_1fca58:
    if (ctx->pc == 0x1FCA58u) {
        ctx->pc = 0x1FCA58u;
            // 0x1fca58: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
        ctx->pc = 0x1FCA5Cu;
        goto label_1fca5c;
    }
    ctx->pc = 0x1FCA54u;
    SET_GPR_U32(ctx, 31, 0x1FCA5Cu);
    ctx->pc = 0x1FCA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCA54u;
            // 0x1fca58: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCA5Cu; }
        if (ctx->pc != 0x1FCA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPushButton__12CMenuKeyFuncFv_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCA5Cu; }
        if (ctx->pc != 0x1FCA5Cu) { return; }
    }
    ctx->pc = 0x1FCA5Cu;
label_1fca5c:
    // 0x1fca5c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fca5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fca60:
    // 0x1fca60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fca60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fca64:
    // 0x1fca64: 0x8c33ca44  lw          $s3, -0x35BC($at)
    ctx->pc = 0x1fca64u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953540)));
label_1fca68:
    // 0x1fca68: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fca68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fca6c:
    // 0x1fca6c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1fca6cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fca70:
    // 0x1fca70: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fca70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fca74:
    // 0x1fca74: 0x8c32ca48  lw          $s2, -0x35B8($at)
    ctx->pc = 0x1fca74u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
label_1fca78:
    // 0x1fca78: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fca78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fca7c:
    // 0x1fca7c: 0x8c35ca4c  lw          $s5, -0x35B4($at)
    ctx->pc = 0x1fca7cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
label_1fca80:
    // 0x1fca80: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fca80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fca84:
    // 0x1fca84: 0x8c3eca50  lw          $fp, -0x35B0($at)
    ctx->pc = 0x1fca84u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953552)));
label_1fca88:
    // 0x1fca88: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fca88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fca8c:
    // 0x1fca8c: 0x8c22ca54  lw          $v0, -0x35AC($at)
    ctx->pc = 0x1fca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953556)));
label_1fca90:
    // 0x1fca90: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1fca90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1fca94:
    // 0x1fca94: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x1fca94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_1fca98:
    // 0x1fca98: 0x106400e4  beq         $v1, $a0, . + 4 + (0xE4 << 2)
label_1fca9c:
    if (ctx->pc == 0x1FCA9Cu) {
        ctx->pc = 0x1FCA9Cu;
            // 0x1fca9c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FCAA0u;
        goto label_1fcaa0;
    }
    ctx->pc = 0x1FCA98u;
    {
        const bool branch_taken_0x1fca98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1FCA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCA98u;
            // 0x1fca9c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fca98) {
            ctx->pc = 0x1FCE2Cu;
            goto label_1fce2c;
        }
    }
    ctx->pc = 0x1FCAA0u;
label_1fcaa0:
    // 0x1fcaa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fcaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcaa4:
    // 0x1fcaa4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1fcaa8:
    if (ctx->pc == 0x1FCAA8u) {
        ctx->pc = 0x1FCAACu;
        goto label_1fcaac;
    }
    ctx->pc = 0x1FCAA4u;
    {
        const bool branch_taken_0x1fcaa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fcaa4) {
            ctx->pc = 0x1FCAB4u;
            goto label_1fcab4;
        }
    }
    ctx->pc = 0x1FCAACu;
label_1fcaac:
    // 0x1fcaac: 0x100000e8  b           . + 4 + (0xE8 << 2)
label_1fcab0:
    if (ctx->pc == 0x1FCAB0u) {
        ctx->pc = 0x1FCAB0u;
            // 0x1fcab0: 0x86830014  lh          $v1, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->pc = 0x1FCAB4u;
        goto label_1fcab4;
    }
    ctx->pc = 0x1FCAACu;
    {
        const bool branch_taken_0x1fcaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCAACu;
            // 0x1fcab0: 0x86830014  lh          $v1, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcaac) {
            ctx->pc = 0x1FCE50u;
            goto label_1fce50;
        }
    }
    ctx->pc = 0x1FCAB4u;
label_1fcab4:
    // 0x1fcab4: 0x8f838f60  lw          $v1, -0x70A0($gp)
    ctx->pc = 0x1fcab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938464)));
label_1fcab8:
    // 0x1fcab8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1fcabc:
    if (ctx->pc == 0x1FCABCu) {
        ctx->pc = 0x1FCAC0u;
        goto label_1fcac0;
    }
    ctx->pc = 0x1FCAB8u;
    {
        const bool branch_taken_0x1fcab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcab8) {
            ctx->pc = 0x1FCAC8u;
            goto label_1fcac8;
        }
    }
    ctx->pc = 0x1FCAC0u;
label_1fcac0:
    // 0x1fcac0: 0x1000045d  b           . + 4 + (0x45D << 2)
label_1fcac4:
    if (ctx->pc == 0x1FCAC4u) {
        ctx->pc = 0x1FCAC4u;
            // 0x1fcac4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x1FCAC8u;
        goto label_1fcac8;
    }
    ctx->pc = 0x1FCAC0u;
    {
        const bool branch_taken_0x1fcac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCAC0u;
            // 0x1fcac4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcac0) {
            ctx->pc = 0x1FDC38u;
            goto label_1fdc38;
        }
    }
    ctx->pc = 0x1FCAC8u;
label_1fcac8:
    // 0x1fcac8: 0xc05239c  jal         func_148E70
label_1fcacc:
    if (ctx->pc == 0x1FCACCu) {
        ctx->pc = 0x1FCAD0u;
        goto label_1fcad0;
    }
    ctx->pc = 0x1FCAC8u;
    SET_GPR_U32(ctx, 31, 0x1FCAD0u);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCAD0u; }
        if (ctx->pc != 0x1FCAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCAD0u; }
        if (ctx->pc != 0x1FCAD0u) { return; }
    }
    ctx->pc = 0x1FCAD0u;
label_1fcad0:
    // 0x1fcad0: 0x1440026d  bnez        $v0, . + 4 + (0x26D << 2)
label_1fcad4:
    if (ctx->pc == 0x1FCAD4u) {
        ctx->pc = 0x1FCAD4u;
            // 0x1fcad4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FCAD8u;
        goto label_1fcad8;
    }
    ctx->pc = 0x1FCAD0u;
    {
        const bool branch_taken_0x1fcad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCAD0u;
            // 0x1fcad4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcad0) {
            ctx->pc = 0x1FD488u;
            goto label_1fd488;
        }
    }
    ctx->pc = 0x1FCAD8u;
label_1fcad8:
    // 0x1fcad8: 0xc07f244  jal         func_1FC910
label_1fcadc:
    if (ctx->pc == 0x1FCADCu) {
        ctx->pc = 0x1FCAE0u;
        goto label_1fcae0;
    }
    ctx->pc = 0x1FCAD8u;
    SET_GPR_U32(ctx, 31, 0x1FCAE0u);
    ctx->pc = 0x1FC910u;
    if (runtime->hasFunction(0x1FC910u)) {
        auto targetFn = runtime->lookupFunction(0x1FC910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCAE0u; }
        if (ctx->pc != 0x1FCAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeNPCList__12CRemovalMenuFv_0x1fc910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCAE0u; }
        if (ctx->pc != 0x1FCAE0u) { return; }
    }
    ctx->pc = 0x1FCAE0u;
label_1fcae0:
    // 0x1fcae0: 0xc05231c  jal         func_148C70
label_1fcae4:
    if (ctx->pc == 0x1FCAE4u) {
        ctx->pc = 0x1FCAE4u;
            // 0x1fcae4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FCAE8u;
        goto label_1fcae8;
    }
    ctx->pc = 0x1FCAE0u;
    SET_GPR_U32(ctx, 31, 0x1FCAE8u);
    ctx->pc = 0x1FCAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCAE0u;
            // 0x1fcae4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148C70u;
    if (runtime->hasFunction(0x148C70u)) {
        auto targetFn = runtime->lookupFunction(0x148C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCAE8u; }
        if (ctx->pc != 0x1FCAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGFile__Fi_0x148c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCAE8u; }
        if (ctx->pc != 0x1FCAE8u) { return; }
    }
    ctx->pc = 0x1FCAE8u;
label_1fcae8:
    // 0x1fcae8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fcae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fcaec:
    // 0x1fcaec: 0x120000a9  beqz        $s0, . + 4 + (0xA9 << 2)
label_1fcaf0:
    if (ctx->pc == 0x1FCAF0u) {
        ctx->pc = 0x1FCAF4u;
        goto label_1fcaf4;
    }
    ctx->pc = 0x1FCAECu;
    {
        const bool branch_taken_0x1fcaec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcaec) {
            ctx->pc = 0x1FCD94u;
            goto label_1fcd94;
        }
    }
    ctx->pc = 0x1FCAF4u;
label_1fcaf4:
    // 0x1fcaf4: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x1fcaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1fcaf8:
    // 0x1fcaf8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fcaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fcafc:
    // 0x1fcafc: 0x24a58e48  addiu       $a1, $a1, -0x71B8
    ctx->pc = 0x1fcafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938184));
label_1fcb00:
    // 0x1fcb00: 0xc052734  jal         func_149CD0
label_1fcb04:
    if (ctx->pc == 0x1FCB04u) {
        ctx->pc = 0x1FCB04u;
            // 0x1fcb04: 0x27a60218  addiu       $a2, $sp, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
        ctx->pc = 0x1FCB08u;
        goto label_1fcb08;
    }
    ctx->pc = 0x1FCB00u;
    SET_GPR_U32(ctx, 31, 0x1FCB08u);
    ctx->pc = 0x1FCB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCB00u;
            // 0x1fcb04: 0x27a60218  addiu       $a2, $sp, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCB08u; }
        if (ctx->pc != 0x1FCB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCB08u; }
        if (ctx->pc != 0x1FCB08u) { return; }
    }
    ctx->pc = 0x1FCB08u;
label_1fcb08:
    // 0x1fcb08: 0x8fa50218  lw          $a1, 0x218($sp)
    ctx->pc = 0x1fcb08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
label_1fcb0c:
    // 0x1fcb0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fcb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fcb10:
    // 0x1fcb10: 0xc094f98  jal         func_253E60
label_1fcb14:
    if (ctx->pc == 0x1FCB14u) {
        ctx->pc = 0x1FCB14u;
            // 0x1fcb14: 0x26860110  addiu       $a2, $s4, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
        ctx->pc = 0x1FCB18u;
        goto label_1fcb18;
    }
    ctx->pc = 0x1FCB10u;
    SET_GPR_U32(ctx, 31, 0x1FCB18u);
    ctx->pc = 0x1FCB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCB10u;
            // 0x1fcb14: 0x26860110  addiu       $a2, $s4, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x253E60u;
    if (runtime->hasFunction(0x253E60u)) {
        auto targetFn = runtime->lookupFunction(0x253E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCB18u; }
        if (ctx->pc != 0x1FCB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuDataAnalyze__FPciP9mgCMemory_0x253e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCB18u; }
        if (ctx->pc != 0x1FCB18u) { return; }
    }
    ctx->pc = 0x1FCB18u;
label_1fcb18:
    // 0x1fcb18: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x1fcb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1fcb1c:
    // 0x1fcb1c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fcb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fcb20:
    // 0x1fcb20: 0x24a58e60  addiu       $a1, $a1, -0x71A0
    ctx->pc = 0x1fcb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938208));
label_1fcb24:
    // 0x1fcb24: 0xc052734  jal         func_149CD0
label_1fcb28:
    if (ctx->pc == 0x1FCB28u) {
        ctx->pc = 0x1FCB28u;
            // 0x1fcb28: 0x2686000c  addiu       $a2, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->pc = 0x1FCB2Cu;
        goto label_1fcb2c;
    }
    ctx->pc = 0x1FCB24u;
    SET_GPR_U32(ctx, 31, 0x1FCB2Cu);
    ctx->pc = 0x1FCB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCB24u;
            // 0x1fcb28: 0x2686000c  addiu       $a2, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCB2Cu; }
        if (ctx->pc != 0x1FCB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCB2Cu; }
        if (ctx->pc != 0x1FCB2Cu) { return; }
    }
    ctx->pc = 0x1FCB2Cu;
label_1fcb2c:
    // 0x1fcb2c: 0xc087d68  jal         func_21F5A0
label_1fcb30:
    if (ctx->pc == 0x1FCB30u) {
        ctx->pc = 0x1FCB30u;
            // 0x1fcb30: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x1FCB34u;
        goto label_1fcb34;
    }
    ctx->pc = 0x1FCB2Cu;
    SET_GPR_U32(ctx, 31, 0x1FCB34u);
    ctx->pc = 0x1FCB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCB2Cu;
            // 0x1fcb30: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F5A0u;
    if (runtime->hasFunction(0x21F5A0u)) {
        auto targetFn = runtime->lookupFunction(0x21F5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCB34u; }
        if (ctx->pc != 0x1FCB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachMessageForm__Fv_0x21f5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCB34u; }
        if (ctx->pc != 0x1FCB34u) { return; }
    }
    ctx->pc = 0x1FCB34u;
label_1fcb34:
    // 0x1fcb34: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fcb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fcb38:
    // 0x1fcb38: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fcb38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fcb3c:
    // 0x1fcb3c: 0x8c22cb30  lw          $v0, -0x34D0($at)
    ctx->pc = 0x1fcb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953776)));
label_1fcb40:
    // 0x1fcb40: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1fcb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1fcb44:
    // 0x1fcb44: 0xa0430050  sb          $v1, 0x50($v0)
    ctx->pc = 0x1fcb44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 80), (uint8_t)GPR_U32(ctx, 3));
label_1fcb48:
    // 0x1fcb48: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1fcb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_1fcb4c:
    // 0x1fcb4c: 0xc08ab90  jal         func_22AE40
label_1fcb50:
    if (ctx->pc == 0x1FCB50u) {
        ctx->pc = 0x1FCB50u;
            // 0x1fcb50: 0x24a58bb0  addiu       $a1, $a1, -0x7450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937520));
        ctx->pc = 0x1FCB54u;
        goto label_1fcb54;
    }
    ctx->pc = 0x1FCB4Cu;
    SET_GPR_U32(ctx, 31, 0x1FCB54u);
    ctx->pc = 0x1FCB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCB4Cu;
            // 0x1fcb50: 0x24a58bb0  addiu       $a1, $a1, -0x7450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCB54u; }
        if (ctx->pc != 0x1FCB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCB54u; }
        if (ctx->pc != 0x1FCB54u) { return; }
    }
    ctx->pc = 0x1FCB54u;
label_1fcb54:
    // 0x1fcb54: 0xae8214a0  sw          $v0, 0x14A0($s4)
    ctx->pc = 0x1fcb54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 5280), GPR_U32(ctx, 2));
label_1fcb58:
    // 0x1fcb58: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fcb58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fcb5c:
    // 0x1fcb5c: 0x8e8214a0  lw          $v0, 0x14A0($s4)
    ctx->pc = 0x1fcb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5280)));
label_1fcb60:
    // 0x1fcb60: 0x24a58e70  addiu       $a1, $a1, -0x7190
    ctx->pc = 0x1fcb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938224));
label_1fcb64:
    // 0x1fcb64: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1fcb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_1fcb68:
    // 0x1fcb68: 0xc08ab90  jal         func_22AE40
label_1fcb6c:
    if (ctx->pc == 0x1FCB6Cu) {
        ctx->pc = 0x1FCB6Cu;
            // 0x1fcb6c: 0xaf828f64  sw          $v0, -0x709C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938468), GPR_U32(ctx, 2));
        ctx->pc = 0x1FCB70u;
        goto label_1fcb70;
    }
    ctx->pc = 0x1FCB68u;
    SET_GPR_U32(ctx, 31, 0x1FCB70u);
    ctx->pc = 0x1FCB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCB68u;
            // 0x1fcb6c: 0xaf828f64  sw          $v0, -0x709C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCB70u; }
        if (ctx->pc != 0x1FCB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCB70u; }
        if (ctx->pc != 0x1FCB70u) { return; }
    }
    ctx->pc = 0x1FCB70u;
label_1fcb70:
    // 0x1fcb70: 0xae8214b4  sw          $v0, 0x14B4($s4)
    ctx->pc = 0x1fcb70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 5300), GPR_U32(ctx, 2));
label_1fcb74:
    // 0x1fcb74: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fcb74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fcb78:
    // 0x1fcb78: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1fcb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_1fcb7c:
    // 0x1fcb7c: 0xc08ab90  jal         func_22AE40
label_1fcb80:
    if (ctx->pc == 0x1FCB80u) {
        ctx->pc = 0x1FCB80u;
            // 0x1fcb80: 0x24a58e80  addiu       $a1, $a1, -0x7180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938240));
        ctx->pc = 0x1FCB84u;
        goto label_1fcb84;
    }
    ctx->pc = 0x1FCB7Cu;
    SET_GPR_U32(ctx, 31, 0x1FCB84u);
    ctx->pc = 0x1FCB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCB7Cu;
            // 0x1fcb80: 0x24a58e80  addiu       $a1, $a1, -0x7180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCB84u; }
        if (ctx->pc != 0x1FCB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCB84u; }
        if (ctx->pc != 0x1FCB84u) { return; }
    }
    ctx->pc = 0x1FCB84u;
label_1fcb84:
    // 0x1fcb84: 0xae8214f4  sw          $v0, 0x14F4($s4)
    ctx->pc = 0x1fcb84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 5364), GPR_U32(ctx, 2));
label_1fcb88:
    // 0x1fcb88: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fcb88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fcb8c:
    // 0x1fcb8c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1fcb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_1fcb90:
    // 0x1fcb90: 0xc08ab90  jal         func_22AE40
label_1fcb94:
    if (ctx->pc == 0x1FCB94u) {
        ctx->pc = 0x1FCB94u;
            // 0x1fcb94: 0x24a58e90  addiu       $a1, $a1, -0x7170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938256));
        ctx->pc = 0x1FCB98u;
        goto label_1fcb98;
    }
    ctx->pc = 0x1FCB90u;
    SET_GPR_U32(ctx, 31, 0x1FCB98u);
    ctx->pc = 0x1FCB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCB90u;
            // 0x1fcb94: 0x24a58e90  addiu       $a1, $a1, -0x7170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCB98u; }
        if (ctx->pc != 0x1FCB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCB98u; }
        if (ctx->pc != 0x1FCB98u) { return; }
    }
    ctx->pc = 0x1FCB98u;
label_1fcb98:
    // 0x1fcb98: 0xae8214ec  sw          $v0, 0x14EC($s4)
    ctx->pc = 0x1fcb98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 5356), GPR_U32(ctx, 2));
label_1fcb9c:
    // 0x1fcb9c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fcb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fcba0:
    // 0x1fcba0: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1fcba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_1fcba4:
    // 0x1fcba4: 0xc08ab90  jal         func_22AE40
label_1fcba8:
    if (ctx->pc == 0x1FCBA8u) {
        ctx->pc = 0x1FCBA8u;
            // 0x1fcba8: 0x24a58e98  addiu       $a1, $a1, -0x7168 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938264));
        ctx->pc = 0x1FCBACu;
        goto label_1fcbac;
    }
    ctx->pc = 0x1FCBA4u;
    SET_GPR_U32(ctx, 31, 0x1FCBACu);
    ctx->pc = 0x1FCBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCBA4u;
            // 0x1fcba8: 0x24a58e98  addiu       $a1, $a1, -0x7168 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCBACu; }
        if (ctx->pc != 0x1FCBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCBACu; }
        if (ctx->pc != 0x1FCBACu) { return; }
    }
    ctx->pc = 0x1FCBACu;
label_1fcbac:
    // 0x1fcbac: 0xae8214f0  sw          $v0, 0x14F0($s4)
    ctx->pc = 0x1fcbacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 5360), GPR_U32(ctx, 2));
label_1fcbb0:
    // 0x1fcbb0: 0x8e8414b4  lw          $a0, 0x14B4($s4)
    ctx->pc = 0x1fcbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5300)));
label_1fcbb4:
    // 0x1fcbb4: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
label_1fcbb8:
    if (ctx->pc == 0x1FCBB8u) {
        ctx->pc = 0x1FCBB8u;
            // 0x1fcbb8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x1FCBBCu;
        goto label_1fcbbc;
    }
    ctx->pc = 0x1FCBB4u;
    {
        const bool branch_taken_0x1fcbb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCBB4u;
            // 0x1fcbb8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcbb4) {
            ctx->pc = 0x1FCC30u;
            goto label_1fcc30;
        }
    }
    ctx->pc = 0x1FCBBCu;
label_1fcbbc:
    // 0x1fcbbc: 0xc089664  jal         func_225990
label_1fcbc0:
    if (ctx->pc == 0x1FCBC0u) {
        ctx->pc = 0x1FCBC0u;
            // 0x1fcbc0: 0x24a58ca0  addiu       $a1, $a1, -0x7360 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937760));
        ctx->pc = 0x1FCBC4u;
        goto label_1fcbc4;
    }
    ctx->pc = 0x1FCBBCu;
    SET_GPR_U32(ctx, 31, 0x1FCBC4u);
    ctx->pc = 0x1FCBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCBBCu;
            // 0x1fcbc0: 0x24a58ca0  addiu       $a1, $a1, -0x7360 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCBC4u; }
        if (ctx->pc != 0x1FCBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCBC4u; }
        if (ctx->pc != 0x1FCBC4u) { return; }
    }
    ctx->pc = 0x1FCBC4u;
label_1fcbc4:
    // 0x1fcbc4: 0xae8214b8  sw          $v0, 0x14B8($s4)
    ctx->pc = 0x1fcbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 5304), GPR_U32(ctx, 2));
label_1fcbc8:
    // 0x1fcbc8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fcbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fcbcc:
    // 0x1fcbcc: 0x8e8414b4  lw          $a0, 0x14B4($s4)
    ctx->pc = 0x1fcbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5300)));
label_1fcbd0:
    // 0x1fcbd0: 0xc089664  jal         func_225990
label_1fcbd4:
    if (ctx->pc == 0x1FCBD4u) {
        ctx->pc = 0x1FCBD4u;
            // 0x1fcbd4: 0x24a58ca8  addiu       $a1, $a1, -0x7358 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937768));
        ctx->pc = 0x1FCBD8u;
        goto label_1fcbd8;
    }
    ctx->pc = 0x1FCBD0u;
    SET_GPR_U32(ctx, 31, 0x1FCBD8u);
    ctx->pc = 0x1FCBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCBD0u;
            // 0x1fcbd4: 0x24a58ca8  addiu       $a1, $a1, -0x7358 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCBD8u; }
        if (ctx->pc != 0x1FCBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCBD8u; }
        if (ctx->pc != 0x1FCBD8u) { return; }
    }
    ctx->pc = 0x1FCBD8u;
label_1fcbd8:
    // 0x1fcbd8: 0xae8214bc  sw          $v0, 0x14BC($s4)
    ctx->pc = 0x1fcbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 5308), GPR_U32(ctx, 2));
label_1fcbdc:
    // 0x1fcbdc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fcbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fcbe0:
    // 0x1fcbe0: 0x8e8414b4  lw          $a0, 0x14B4($s4)
    ctx->pc = 0x1fcbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5300)));
label_1fcbe4:
    // 0x1fcbe4: 0xc089664  jal         func_225990
label_1fcbe8:
    if (ctx->pc == 0x1FCBE8u) {
        ctx->pc = 0x1FCBE8u;
            // 0x1fcbe8: 0x24a58ea0  addiu       $a1, $a1, -0x7160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938272));
        ctx->pc = 0x1FCBECu;
        goto label_1fcbec;
    }
    ctx->pc = 0x1FCBE4u;
    SET_GPR_U32(ctx, 31, 0x1FCBECu);
    ctx->pc = 0x1FCBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCBE4u;
            // 0x1fcbe8: 0x24a58ea0  addiu       $a1, $a1, -0x7160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCBECu; }
        if (ctx->pc != 0x1FCBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCBECu; }
        if (ctx->pc != 0x1FCBECu) { return; }
    }
    ctx->pc = 0x1FCBECu;
label_1fcbec:
    // 0x1fcbec: 0xae8214c0  sw          $v0, 0x14C0($s4)
    ctx->pc = 0x1fcbecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 5312), GPR_U32(ctx, 2));
label_1fcbf0:
    // 0x1fcbf0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fcbf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcbf4:
    // 0x1fcbf4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1fcbf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcbf8:
    // 0x1fcbf8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fcbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fcbfc:
    // 0x1fcbfc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1fcbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1fcc00:
    // 0x1fcc00: 0x24a58ea8  addiu       $a1, $a1, -0x7158
    ctx->pc = 0x1fcc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938280));
label_1fcc04:
    // 0x1fcc04: 0xc04a234  jal         func_1288D0
label_1fcc08:
    if (ctx->pc == 0x1FCC08u) {
        ctx->pc = 0x1FCC08u;
            // 0x1fcc08: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC0Cu;
        goto label_1fcc0c;
    }
    ctx->pc = 0x1FCC04u;
    SET_GPR_U32(ctx, 31, 0x1FCC0Cu);
    ctx->pc = 0x1FCC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCC04u;
            // 0x1fcc08: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCC0Cu; }
        if (ctx->pc != 0x1FCC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCC0Cu; }
        if (ctx->pc != 0x1FCC0Cu) { return; }
    }
    ctx->pc = 0x1FCC0Cu;
label_1fcc0c:
    // 0x1fcc0c: 0x8e8414b4  lw          $a0, 0x14B4($s4)
    ctx->pc = 0x1fcc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5300)));
label_1fcc10:
    // 0x1fcc10: 0xc089664  jal         func_225990
label_1fcc14:
    if (ctx->pc == 0x1FCC14u) {
        ctx->pc = 0x1FCC14u;
            // 0x1fcc14: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x1FCC18u;
        goto label_1fcc18;
    }
    ctx->pc = 0x1FCC10u;
    SET_GPR_U32(ctx, 31, 0x1FCC18u);
    ctx->pc = 0x1FCC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCC10u;
            // 0x1fcc14: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCC18u; }
        if (ctx->pc != 0x1FCC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCC18u; }
        if (ctx->pc != 0x1FCC18u) { return; }
    }
    ctx->pc = 0x1FCC18u;
label_1fcc18:
    // 0x1fcc18: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x1fcc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1fcc1c:
    // 0x1fcc1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fcc1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1fcc20:
    // 0x1fcc20: 0xac6214c4  sw          $v0, 0x14C4($v1)
    ctx->pc = 0x1fcc20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5316), GPR_U32(ctx, 2));
label_1fcc24:
    // 0x1fcc24: 0x2a220009  slti        $v0, $s1, 0x9
    ctx->pc = 0x1fcc24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
label_1fcc28:
    // 0x1fcc28: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1fcc2c:
    if (ctx->pc == 0x1FCC2Cu) {
        ctx->pc = 0x1FCC2Cu;
            // 0x1fcc2c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x1FCC30u;
        goto label_1fcc30;
    }
    ctx->pc = 0x1FCC28u;
    {
        const bool branch_taken_0x1fcc28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCC28u;
            // 0x1fcc2c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc28) {
            ctx->pc = 0x1FCBF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fcbf8;
        }
    }
    ctx->pc = 0x1FCC30u;
label_1fcc30:
    // 0x1fcc30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fcc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcc34:
    // 0x1fcc34: 0xa28214a4  sb          $v0, 0x14A4($s4)
    ctx->pc = 0x1fcc34u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5284), (uint8_t)GPR_U32(ctx, 2));
label_1fcc38:
    // 0x1fcc38: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fcc38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fcc3c:
    // 0x1fcc3c: 0xae8014a8  sw          $zero, 0x14A8($s4)
    ctx->pc = 0x1fcc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 5288), GPR_U32(ctx, 0));
label_1fcc40:
    // 0x1fcc40: 0x24a58a80  addiu       $a1, $a1, -0x7580
    ctx->pc = 0x1fcc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937216));
label_1fcc44:
    // 0x1fcc44: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x1fcc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1fcc48:
    // 0x1fcc48: 0xc052734  jal         func_149CD0
label_1fcc4c:
    if (ctx->pc == 0x1FCC4Cu) {
        ctx->pc = 0x1FCC4Cu;
            // 0x1fcc4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC50u;
        goto label_1fcc50;
    }
    ctx->pc = 0x1FCC48u;
    SET_GPR_U32(ctx, 31, 0x1FCC50u);
    ctx->pc = 0x1FCC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCC48u;
            // 0x1fcc4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCC50u; }
        if (ctx->pc != 0x1FCC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCC50u; }
        if (ctx->pc != 0x1FCC50u) { return; }
    }
    ctx->pc = 0x1FCC50u;
label_1fcc50:
    // 0x1fcc50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fcc50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fcc54:
    // 0x1fcc54: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1fcc54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_1fcc58:
    // 0x1fcc58: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x1fcc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_1fcc5c:
    // 0x1fcc5c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1fcc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_1fcc60:
    // 0x1fcc60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fcc60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcc64:
    // 0x1fcc64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fcc64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcc68:
    // 0x1fcc68: 0x8c510018  lw          $s1, 0x18($v0)
    ctx->pc = 0x1fcc68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1fcc6c:
    // 0x1fcc6c: 0xc04b6a4  jal         func_12DA90
label_1fcc70:
    if (ctx->pc == 0x1FCC70u) {
        ctx->pc = 0x1FCC70u;
            // 0x1fcc70: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC74u;
        goto label_1fcc74;
    }
    ctx->pc = 0x1FCC6Cu;
    SET_GPR_U32(ctx, 31, 0x1FCC74u);
    ctx->pc = 0x1FCC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCC6Cu;
            // 0x1fcc70: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCC74u; }
        if (ctx->pc != 0x1FCC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCC74u; }
        if (ctx->pc != 0x1FCC74u) { return; }
    }
    ctx->pc = 0x1FCC74u;
label_1fcc74:
    // 0x1fcc74: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x1fcc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1fcc78:
    // 0x1fcc78: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fcc78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fcc7c:
    // 0x1fcc7c: 0x24a58eb0  addiu       $a1, $a1, -0x7150
    ctx->pc = 0x1fcc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938288));
label_1fcc80:
    // 0x1fcc80: 0xc052734  jal         func_149CD0
label_1fcc84:
    if (ctx->pc == 0x1FCC84u) {
        ctx->pc = 0x1FCC84u;
            // 0x1fcc84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC88u;
        goto label_1fcc88;
    }
    ctx->pc = 0x1FCC80u;
    SET_GPR_U32(ctx, 31, 0x1FCC88u);
    ctx->pc = 0x1FCC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCC80u;
            // 0x1fcc84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCC88u; }
        if (ctx->pc != 0x1FCC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCC88u; }
        if (ctx->pc != 0x1FCC88u) { return; }
    }
    ctx->pc = 0x1FCC88u;
label_1fcc88:
    // 0x1fcc88: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1fcc88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_1fcc8c:
    // 0x1fcc8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fcc8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fcc90:
    // 0x1fcc90: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1fcc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_1fcc94:
    // 0x1fcc94: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fcc94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fcc98:
    // 0x1fcc98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fcc98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcc9c:
    // 0x1fcc9c: 0xc04b6a4  jal         func_12DA90
label_1fcca0:
    if (ctx->pc == 0x1FCCA0u) {
        ctx->pc = 0x1FCCA0u;
            // 0x1fcca0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FCCA4u;
        goto label_1fcca4;
    }
    ctx->pc = 0x1FCC9Cu;
    SET_GPR_U32(ctx, 31, 0x1FCCA4u);
    ctx->pc = 0x1FCCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCC9Cu;
            // 0x1fcca0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCCA4u; }
        if (ctx->pc != 0x1FCCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCCA4u; }
        if (ctx->pc != 0x1FCCA4u) { return; }
    }
    ctx->pc = 0x1FCCA4u;
label_1fcca4:
    // 0x1fcca4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1fcca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_1fcca8:
    // 0x1fcca8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fcca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fccac:
    // 0x1fccac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fccacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fccb0:
    // 0x1fccb0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1fccb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_1fccb4:
    // 0x1fccb4: 0xc04b414  jal         func_12D050
label_1fccb8:
    if (ctx->pc == 0x1FCCB8u) {
        ctx->pc = 0x1FCCB8u;
            // 0x1fccb8: 0x24a58a98  addiu       $a1, $a1, -0x7568 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937240));
        ctx->pc = 0x1FCCBCu;
        goto label_1fccbc;
    }
    ctx->pc = 0x1FCCB4u;
    SET_GPR_U32(ctx, 31, 0x1FCCBCu);
    ctx->pc = 0x1FCCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCCB4u;
            // 0x1fccb8: 0x24a58a98  addiu       $a1, $a1, -0x7568 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCCBCu; }
        if (ctx->pc != 0x1FCCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCCBCu; }
        if (ctx->pc != 0x1FCCBCu) { return; }
    }
    ctx->pc = 0x1FCCBCu;
label_1fccbc:
    // 0x1fccbc: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1fccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_1fccc0:
    // 0x1fccc0: 0xc08aa80  jal         func_22AA00
label_1fccc4:
    if (ctx->pc == 0x1FCCC4u) {
        ctx->pc = 0x1FCCC4u;
            // 0x1fccc4: 0xaf829020  sw          $v0, -0x6FE0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938656), GPR_U32(ctx, 2));
        ctx->pc = 0x1FCCC8u;
        goto label_1fccc8;
    }
    ctx->pc = 0x1FCCC0u;
    SET_GPR_U32(ctx, 31, 0x1FCCC8u);
    ctx->pc = 0x1FCCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCCC0u;
            // 0x1fccc4: 0xaf829020  sw          $v0, -0x6FE0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AA00u;
    if (runtime->hasFunction(0x22AA00u)) {
        auto targetFn = runtime->lookupFunction(0x22AA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCCC8u; }
        if (ctx->pc != 0x1FCCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetTextureInfoAll__14CPosDataManageFv_0x22aa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCCC8u; }
        if (ctx->pc != 0x1FCCC8u) { return; }
    }
    ctx->pc = 0x1FCCC8u;
label_1fccc8:
    // 0x1fccc8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fccc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fcccc:
    // 0x1fcccc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fccccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fccd0:
    // 0x1fccd0: 0xc08e7cc  jal         func_239F30
label_1fccd4:
    if (ctx->pc == 0x1FCCD4u) {
        ctx->pc = 0x1FCCD4u;
            // 0x1fccd4: 0x24a58ac0  addiu       $a1, $a1, -0x7540 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937280));
        ctx->pc = 0x1FCCD8u;
        goto label_1fccd8;
    }
    ctx->pc = 0x1FCCD0u;
    SET_GPR_U32(ctx, 31, 0x1FCCD8u);
    ctx->pc = 0x1FCCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCCD0u;
            // 0x1fccd4: 0x24a58ac0  addiu       $a1, $a1, -0x7540 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCCD8u; }
        if (ctx->pc != 0x1FCCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCCD8u; }
        if (ctx->pc != 0x1FCCD8u) { return; }
    }
    ctx->pc = 0x1FCCD8u;
label_1fccd8:
    // 0x1fccd8: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x1fccd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1fccdc:
    // 0x1fccdc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fccdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fcce0:
    // 0x1fcce0: 0x24a58aa0  addiu       $a1, $a1, -0x7560
    ctx->pc = 0x1fcce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937248));
label_1fcce4:
    // 0x1fcce4: 0xc052734  jal         func_149CD0
label_1fcce8:
    if (ctx->pc == 0x1FCCE8u) {
        ctx->pc = 0x1FCCE8u;
            // 0x1fcce8: 0x27a60218  addiu       $a2, $sp, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
        ctx->pc = 0x1FCCECu;
        goto label_1fccec;
    }
    ctx->pc = 0x1FCCE4u;
    SET_GPR_U32(ctx, 31, 0x1FCCECu);
    ctx->pc = 0x1FCCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCCE4u;
            // 0x1fcce8: 0x27a60218  addiu       $a2, $sp, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCCECu; }
        if (ctx->pc != 0x1FCCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCCECu; }
        if (ctx->pc != 0x1FCCECu) { return; }
    }
    ctx->pc = 0x1FCCECu;
label_1fccec:
    // 0x1fccec: 0xc065a18  jal         func_196860
label_1fccf0:
    if (ctx->pc == 0x1FCCF0u) {
        ctx->pc = 0x1FCCF0u;
            // 0x1fccf0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FCCF4u;
        goto label_1fccf4;
    }
    ctx->pc = 0x1FCCECu;
    SET_GPR_U32(ctx, 31, 0x1FCCF4u);
    ctx->pc = 0x1FCCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCCECu;
            // 0x1fccf0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCCF4u; }
        if (ctx->pc != 0x1FCCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCCF4u; }
        if (ctx->pc != 0x1FCCF4u) { return; }
    }
    ctx->pc = 0x1FCCF4u;
label_1fccf4:
    // 0x1fccf4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fccf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fccf8:
    // 0x1fccf8: 0xac22e3a8  sw          $v0, -0x1C58($at)
    ctx->pc = 0x1fccf8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960040), GPR_U32(ctx, 2));
label_1fccfc:
    // 0x1fccfc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fccfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fcd00:
    // 0x1fcd00: 0xc08d1bc  jal         func_2346F0
label_1fcd04:
    if (ctx->pc == 0x1FCD04u) {
        ctx->pc = 0x1FCD04u;
            // 0x1fcd04: 0xac30e3ac  sw          $s0, -0x1C54($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960044), GPR_U32(ctx, 16));
        ctx->pc = 0x1FCD08u;
        goto label_1fcd08;
    }
    ctx->pc = 0x1FCD00u;
    SET_GPR_U32(ctx, 31, 0x1FCD08u);
    ctx->pc = 0x1FCD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCD00u;
            // 0x1fcd04: 0xac30e3ac  sw          $s0, -0x1C54($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960044), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2346F0u;
    if (runtime->hasFunction(0x2346F0u)) {
        auto targetFn = runtime->lookupFunction(0x2346F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCD08u; }
        if (ctx->pc != 0x1FCD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainMessageBuffer__Fv_0x2346f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCD08u; }
        if (ctx->pc != 0x1FCD08u) { return; }
    }
    ctx->pc = 0x1FCD08u;
label_1fcd08:
    // 0x1fcd08: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fcd08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fcd0c:
    // 0x1fcd0c: 0xac22e3b8  sw          $v0, -0x1C48($at)
    ctx->pc = 0x1fcd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960056), GPR_U32(ctx, 2));
label_1fcd10:
    // 0x1fcd10: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x1fcd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_1fcd14:
    // 0x1fcd14: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fcd14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fcd18:
    // 0x1fcd18: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1fcd1c:
    if (ctx->pc == 0x1FCD1Cu) {
        ctx->pc = 0x1FCD1Cu;
            // 0x1fcd1c: 0xac30e3bc  sw          $s0, -0x1C44($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960060), GPR_U32(ctx, 16));
        ctx->pc = 0x1FCD20u;
        goto label_1fcd20;
    }
    ctx->pc = 0x1FCD18u;
    {
        const bool branch_taken_0x1fcd18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCD18u;
            // 0x1fcd1c: 0xac30e3bc  sw          $s0, -0x1C44($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960060), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd18) {
            ctx->pc = 0x1FCD38u;
            goto label_1fcd38;
        }
    }
    ctx->pc = 0x1FCD20u;
label_1fcd20:
    // 0x1fcd20: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fcd20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fcd24:
    // 0x1fcd24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fcd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fcd28:
    // 0x1fcd28: 0xc08e7cc  jal         func_239F30
label_1fcd2c:
    if (ctx->pc == 0x1FCD2Cu) {
        ctx->pc = 0x1FCD2Cu;
            // 0x1fcd2c: 0x24a58ec0  addiu       $a1, $a1, -0x7140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938304));
        ctx->pc = 0x1FCD30u;
        goto label_1fcd30;
    }
    ctx->pc = 0x1FCD28u;
    SET_GPR_U32(ctx, 31, 0x1FCD30u);
    ctx->pc = 0x1FCD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCD28u;
            // 0x1fcd2c: 0x24a58ec0  addiu       $a1, $a1, -0x7140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCD30u; }
        if (ctx->pc != 0x1FCD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCD30u; }
        if (ctx->pc != 0x1FCD30u) { return; }
    }
    ctx->pc = 0x1FCD30u;
label_1fcd30:
    // 0x1fcd30: 0x10000006  b           . + 4 + (0x6 << 2)
label_1fcd34:
    if (ctx->pc == 0x1FCD34u) {
        ctx->pc = 0x1FCD34u;
            // 0x1fcd34: 0x8e83044c  lw          $v1, 0x44C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1100)));
        ctx->pc = 0x1FCD38u;
        goto label_1fcd38;
    }
    ctx->pc = 0x1FCD30u;
    {
        const bool branch_taken_0x1fcd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCD30u;
            // 0x1fcd34: 0x8e83044c  lw          $v1, 0x44C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd30) {
            ctx->pc = 0x1FCD4Cu;
            goto label_1fcd4c;
        }
    }
    ctx->pc = 0x1FCD38u;
label_1fcd38:
    // 0x1fcd38: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fcd38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fcd3c:
    // 0x1fcd3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fcd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fcd40:
    // 0x1fcd40: 0xc08e7cc  jal         func_239F30
label_1fcd44:
    if (ctx->pc == 0x1FCD44u) {
        ctx->pc = 0x1FCD44u;
            // 0x1fcd44: 0x24a58ed0  addiu       $a1, $a1, -0x7130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938320));
        ctx->pc = 0x1FCD48u;
        goto label_1fcd48;
    }
    ctx->pc = 0x1FCD40u;
    SET_GPR_U32(ctx, 31, 0x1FCD48u);
    ctx->pc = 0x1FCD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCD40u;
            // 0x1fcd44: 0x24a58ed0  addiu       $a1, $a1, -0x7130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCD48u; }
        if (ctx->pc != 0x1FCD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCD48u; }
        if (ctx->pc != 0x1FCD48u) { return; }
    }
    ctx->pc = 0x1FCD48u;
label_1fcd48:
    // 0x1fcd48: 0x8e83044c  lw          $v1, 0x44C($s4)
    ctx->pc = 0x1fcd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1100)));
label_1fcd4c:
    // 0x1fcd4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fcd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcd50:
    // 0x1fcd50: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_1fcd54:
    if (ctx->pc == 0x1FCD54u) {
        ctx->pc = 0x1FCD54u;
            // 0x1fcd54: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FCD58u;
        goto label_1fcd58;
    }
    ctx->pc = 0x1FCD50u;
    {
        const bool branch_taken_0x1fcd50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FCD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCD50u;
            // 0x1fcd54: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd50) {
            ctx->pc = 0x1FCD94u;
            goto label_1fcd94;
        }
    }
    ctx->pc = 0x1FCD58u;
label_1fcd58:
    // 0x1fcd58: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fcd58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fcd5c:
    // 0x1fcd5c: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x1fcd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_1fcd60:
    // 0x1fcd60: 0x8c24cb34  lw          $a0, -0x34CC($at)
    ctx->pc = 0x1fcd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953780)));
label_1fcd64:
    // 0x1fcd64: 0x3c034298  lui         $v1, 0x4298
    ctx->pc = 0x1fcd64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17048 << 16));
label_1fcd68:
    // 0x1fcd68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fcd68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fcd6c:
    // 0x1fcd6c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1fcd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_1fcd70:
    // 0x1fcd70: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1fcd70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_1fcd74:
    // 0x1fcd74: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x1fcd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_1fcd78:
    // 0x1fcd78: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_1fcd7c:
    if (ctx->pc == 0x1FCD7Cu) {
        ctx->pc = 0x1FCD7Cu;
            // 0x1fcd7c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x1FCD80u;
        goto label_1fcd80;
    }
    ctx->pc = 0x1FCD78u;
    {
        const bool branch_taken_0x1fcd78 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1FCD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCD78u;
            // 0x1fcd7c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd78) {
            ctx->pc = 0x1FCD90u;
            goto label_1fcd90;
        }
    }
    ctx->pc = 0x1FCD80u;
label_1fcd80:
    // 0x1fcd80: 0x3c024258  lui         $v0, 0x4258
    ctx->pc = 0x1fcd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16984 << 16));
label_1fcd84:
    // 0x1fcd84: 0x8c23cb34  lw          $v1, -0x34CC($at)
    ctx->pc = 0x1fcd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953780)));
label_1fcd88:
    // 0x1fcd88: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1fcd88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_1fcd8c:
    // 0x1fcd8c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x1fcd8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_1fcd90:
    // 0x1fcd90: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1fcd90u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcd94:
    // 0x1fcd94: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1fcd94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_1fcd98:
    // 0x1fcd98: 0xc04e780  jal         func_139E00
label_1fcd9c:
    if (ctx->pc == 0x1FCD9Cu) {
        ctx->pc = 0x1FCD9Cu;
            // 0x1fcd9c: 0x248492e0  addiu       $a0, $a0, -0x6D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
        ctx->pc = 0x1FCDA0u;
        goto label_1fcda0;
    }
    ctx->pc = 0x1FCD98u;
    SET_GPR_U32(ctx, 31, 0x1FCDA0u);
    ctx->pc = 0x1FCD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCD98u;
            // 0x1fcd9c: 0x248492e0  addiu       $a0, $a0, -0x6D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCDA0u; }
        if (ctx->pc != 0x1FCDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCDA0u; }
        if (ctx->pc != 0x1FCDA0u) { return; }
    }
    ctx->pc = 0x1FCDA0u;
label_1fcda0:
    // 0x1fcda0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fcda0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fcda4:
    // 0x1fcda4: 0x3406fa00  ori         $a2, $zero, 0xFA00
    ctx->pc = 0x1fcda4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64000);
label_1fcda8:
    // 0x1fcda8: 0x8c239304  lw          $v1, -0x6CFC($at)
    ctx->pc = 0x1fcda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939396)));
label_1fcdac:
    // 0x1fcdac: 0x2684041c  addiu       $a0, $s4, 0x41C
    ctx->pc = 0x1fcdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1052));
label_1fcdb0:
    // 0x1fcdb0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fcdb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fcdb4:
    // 0x1fcdb4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1fcdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1fcdb8:
    // 0x1fcdb8: 0x8c229300  lw          $v0, -0x6D00($at)
    ctx->pc = 0x1fcdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939392)));
label_1fcdbc:
    // 0x1fcdbc: 0xc04e79c  jal         func_139E70
label_1fcdc0:
    if (ctx->pc == 0x1FCDC0u) {
        ctx->pc = 0x1FCDC0u;
            // 0x1fcdc0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1FCDC4u;
        goto label_1fcdc4;
    }
    ctx->pc = 0x1FCDBCu;
    SET_GPR_U32(ctx, 31, 0x1FCDC4u);
    ctx->pc = 0x1FCDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCDBCu;
            // 0x1fcdc0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCDC4u; }
        if (ctx->pc != 0x1FCDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCDC4u; }
        if (ctx->pc != 0x1FCDC4u) { return; }
    }
    ctx->pc = 0x1FCDC4u;
label_1fcdc4:
    // 0x1fcdc4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1fcdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_1fcdc8:
    // 0x1fcdc8: 0x3405fa00  ori         $a1, $zero, 0xFA00
    ctx->pc = 0x1fcdc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64000);
label_1fcdcc:
    // 0x1fcdcc: 0xc04e748  jal         func_139D20
label_1fcdd0:
    if (ctx->pc == 0x1FCDD0u) {
        ctx->pc = 0x1FCDD0u;
            // 0x1fcdd0: 0x248492e0  addiu       $a0, $a0, -0x6D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
        ctx->pc = 0x1FCDD4u;
        goto label_1fcdd4;
    }
    ctx->pc = 0x1FCDCCu;
    SET_GPR_U32(ctx, 31, 0x1FCDD4u);
    ctx->pc = 0x1FCDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCDCCu;
            // 0x1fcdd0: 0x248492e0  addiu       $a0, $a0, -0x6D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCDD4u; }
        if (ctx->pc != 0x1FCDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCDD4u; }
        if (ctx->pc != 0x1FCDD4u) { return; }
    }
    ctx->pc = 0x1FCDD4u;
label_1fcdd4:
    // 0x1fcdd4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1fcdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_1fcdd8:
    // 0x1fcdd8: 0xc04e780  jal         func_139E00
label_1fcddc:
    if (ctx->pc == 0x1FCDDCu) {
        ctx->pc = 0x1FCDDCu;
            // 0x1fcddc: 0x248492e0  addiu       $a0, $a0, -0x6D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
        ctx->pc = 0x1FCDE0u;
        goto label_1fcde0;
    }
    ctx->pc = 0x1FCDD8u;
    SET_GPR_U32(ctx, 31, 0x1FCDE0u);
    ctx->pc = 0x1FCDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCDD8u;
            // 0x1fcddc: 0x248492e0  addiu       $a0, $a0, -0x6D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCDE0u; }
        if (ctx->pc != 0x1FCDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCDE0u; }
        if (ctx->pc != 0x1FCDE0u) { return; }
    }
    ctx->pc = 0x1FCDE0u;
label_1fcde0:
    // 0x1fcde0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fcde0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fcde4:
    // 0x1fcde4: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x1fcde4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_1fcde8:
    // 0x1fcde8: 0x8c239308  lw          $v1, -0x6CF8($at)
    ctx->pc = 0x1fcde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939400)));
label_1fcdec:
    // 0x1fcdec: 0x2484cc80  addiu       $a0, $a0, -0x3380
    ctx->pc = 0x1fcdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954112));
label_1fcdf0:
    // 0x1fcdf0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fcdf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fcdf4:
    // 0x1fcdf4: 0x8c259304  lw          $a1, -0x6CFC($at)
    ctx->pc = 0x1fcdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939396)));
label_1fcdf8:
    // 0x1fcdf8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fcdf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fcdfc:
    // 0x1fcdfc: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x1fcdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1fce00:
    // 0x1fce00: 0x8c229300  lw          $v0, -0x6D00($at)
    ctx->pc = 0x1fce00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939392)));
label_1fce04:
    // 0x1fce04: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1fce04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1fce08:
    // 0x1fce08: 0xc04e79c  jal         func_139E70
label_1fce0c:
    if (ctx->pc == 0x1FCE0Cu) {
        ctx->pc = 0x1FCE0Cu;
            // 0x1fce0c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1FCE10u;
        goto label_1fce10;
    }
    ctx->pc = 0x1FCE08u;
    SET_GPR_U32(ctx, 31, 0x1FCE10u);
    ctx->pc = 0x1FCE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCE08u;
            // 0x1fce0c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCE10u; }
        if (ctx->pc != 0x1FCE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCE10u; }
        if (ctx->pc != 0x1FCE10u) { return; }
    }
    ctx->pc = 0x1FCE10u;
label_1fce10:
    // 0x1fce10: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x1fce10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_1fce14:
    // 0x1fce14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fce14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fce18:
    // 0x1fce18: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1fce18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_1fce1c:
    // 0x1fce1c: 0xa6800014  sh          $zero, 0x14($s4)
    ctx->pc = 0x1fce1cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 0));
label_1fce20:
    // 0x1fce20: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x1fce20u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
label_1fce24:
    // 0x1fce24: 0x10000198  b           . + 4 + (0x198 << 2)
label_1fce28:
    if (ctx->pc == 0x1FCE28u) {
        ctx->pc = 0x1FCE28u;
            // 0x1fce28: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1FCE2Cu;
        goto label_1fce2c;
    }
    ctx->pc = 0x1FCE24u;
    {
        const bool branch_taken_0x1fce24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCE24u;
            // 0x1fce28: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce24) {
            ctx->pc = 0x1FD488u;
            goto label_1fd488;
        }
    }
    ctx->pc = 0x1FCE2Cu;
label_1fce2c:
    // 0x1fce2c: 0x8e820140  lw          $v0, 0x140($s4)
    ctx->pc = 0x1fce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
label_1fce30:
    // 0x1fce30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fce30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1fce34:
    // 0x1fce34: 0xae820140  sw          $v0, 0x140($s4)
    ctx->pc = 0x1fce34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 320), GPR_U32(ctx, 2));
label_1fce38:
    // 0x1fce38: 0x8e820140  lw          $v0, 0x140($s4)
    ctx->pc = 0x1fce38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
label_1fce3c:
    // 0x1fce3c: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1fce3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_1fce40:
    // 0x1fce40: 0x14400191  bnez        $v0, . + 4 + (0x191 << 2)
label_1fce44:
    if (ctx->pc == 0x1FCE44u) {
        ctx->pc = 0x1FCE44u;
            // 0x1fce44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FCE48u;
        goto label_1fce48;
    }
    ctx->pc = 0x1FCE40u;
    {
        const bool branch_taken_0x1fce40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCE40u;
            // 0x1fce44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce40) {
            ctx->pc = 0x1FD488u;
            goto label_1fd488;
        }
    }
    ctx->pc = 0x1FCE48u;
label_1fce48:
    // 0x1fce48: 0x1000018f  b           . + 4 + (0x18F << 2)
label_1fce4c:
    if (ctx->pc == 0x1FCE4Cu) {
        ctx->pc = 0x1FCE4Cu;
            // 0x1fce4c: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x1FCE50u;
        goto label_1fce50;
    }
    ctx->pc = 0x1FCE48u;
    {
        const bool branch_taken_0x1fce48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCE48u;
            // 0x1fce4c: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce48) {
            ctx->pc = 0x1FD488u;
            goto label_1fd488;
        }
    }
    ctx->pc = 0x1FCE50u;
label_1fce50:
    // 0x1fce50: 0x1062009b  beq         $v1, $v0, . + 4 + (0x9B << 2)
label_1fce54:
    if (ctx->pc == 0x1FCE54u) {
        ctx->pc = 0x1FCE54u;
            // 0x1fce54: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1FCE58u;
        goto label_1fce58;
    }
    ctx->pc = 0x1FCE50u;
    {
        const bool branch_taken_0x1fce50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FCE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCE50u;
            // 0x1fce54: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce50) {
            ctx->pc = 0x1FD0C0u;
            goto label_1fd0c0;
        }
    }
    ctx->pc = 0x1FCE58u;
label_1fce58:
    // 0x1fce58: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1fce5c:
    if (ctx->pc == 0x1FCE5Cu) {
        ctx->pc = 0x1FCE60u;
        goto label_1fce60;
    }
    ctx->pc = 0x1FCE58u;
    {
        const bool branch_taken_0x1fce58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fce58) {
            ctx->pc = 0x1FCE68u;
            goto label_1fce68;
        }
    }
    ctx->pc = 0x1FCE60u;
label_1fce60:
    // 0x1fce60: 0x100000dc  b           . + 4 + (0xDC << 2)
label_1fce64:
    if (ctx->pc == 0x1FCE64u) {
        ctx->pc = 0x1FCE64u;
            // 0x1fce64: 0x240201fe  addiu       $v0, $zero, 0x1FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 510));
        ctx->pc = 0x1FCE68u;
        goto label_1fce68;
    }
    ctx->pc = 0x1FCE60u;
    {
        const bool branch_taken_0x1fce60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCE60u;
            // 0x1fce64: 0x240201fe  addiu       $v0, $zero, 0x1FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 510));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce60) {
            ctx->pc = 0x1FD1D4u;
            goto label_1fd1d4;
        }
    }
    ctx->pc = 0x1FCE68u;
label_1fce68:
    // 0x1fce68: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x1fce68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_1fce6c:
    // 0x1fce6c: 0x1062006a  beq         $v1, $v0, . + 4 + (0x6A << 2)
label_1fce70:
    if (ctx->pc == 0x1FCE70u) {
        ctx->pc = 0x1FCE70u;
            // 0x1fce70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE74u;
        goto label_1fce74;
    }
    ctx->pc = 0x1FCE6Cu;
    {
        const bool branch_taken_0x1fce6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FCE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCE6Cu;
            // 0x1fce70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce6c) {
            ctx->pc = 0x1FD018u;
            goto label_1fd018;
        }
    }
    ctx->pc = 0x1FCE74u;
label_1fce74:
    // 0x1fce74: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1fce78:
    if (ctx->pc == 0x1FCE78u) {
        ctx->pc = 0x1FCE7Cu;
        goto label_1fce7c;
    }
    ctx->pc = 0x1FCE74u;
    {
        const bool branch_taken_0x1fce74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fce74) {
            ctx->pc = 0x1FCE84u;
            goto label_1fce84;
        }
    }
    ctx->pc = 0x1FCE7Cu;
label_1fce7c:
    // 0x1fce7c: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_1fce80:
    if (ctx->pc == 0x1FCE80u) {
        ctx->pc = 0x1FCE84u;
        goto label_1fce84;
    }
    ctx->pc = 0x1FCE7Cu;
    {
        const bool branch_taken_0x1fce7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fce7c) {
            ctx->pc = 0x1FD1D0u;
            goto label_1fd1d0;
        }
    }
    ctx->pc = 0x1FCE84u;
label_1fce84:
    // 0x1fce84: 0x8e83044c  lw          $v1, 0x44C($s4)
    ctx->pc = 0x1fce84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1100)));
label_1fce88:
    // 0x1fce88: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1fce8c:
    if (ctx->pc == 0x1FCE8Cu) {
        ctx->pc = 0x1FCE8Cu;
            // 0x1fce8c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE90u;
        goto label_1fce90;
    }
    ctx->pc = 0x1FCE88u;
    {
        const bool branch_taken_0x1fce88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FCE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCE88u;
            // 0x1fce8c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce88) {
            ctx->pc = 0x1FCE94u;
            goto label_1fce94;
        }
    }
    ctx->pc = 0x1FCE90u;
label_1fce90:
    // 0x1fce90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fce90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fce94:
    // 0x1fce94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fce94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fce98:
    // 0x1fce98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fce98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fce9c:
    // 0x1fce9c: 0xc0875b4  jal         func_21D6D0
label_1fcea0:
    if (ctx->pc == 0x1FCEA0u) {
        ctx->pc = 0x1FCEA0u;
            // 0x1fcea0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FCEA4u;
        goto label_1fcea4;
    }
    ctx->pc = 0x1FCE9Cu;
    SET_GPR_U32(ctx, 31, 0x1FCEA4u);
    ctx->pc = 0x1FCEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCE9Cu;
            // 0x1fcea0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6D0u;
    if (runtime->hasFunction(0x21D6D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCEA4u; }
        if (ctx->pc != 0x1FCEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMsgCursor2__7CDC2MesFiii_0x21d6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCEA4u; }
        if (ctx->pc != 0x1FCEA4u) { return; }
    }
    ctx->pc = 0x1FCEA4u;
label_1fcea4:
    // 0x1fcea4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fcea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fcea8:
    // 0x1fcea8: 0x12020057  beq         $s0, $v0, . + 4 + (0x57 << 2)
label_1fceac:
    if (ctx->pc == 0x1FCEACu) {
        ctx->pc = 0x1FCEACu;
            // 0x1fceac: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1FCEB0u;
        goto label_1fceb0;
    }
    ctx->pc = 0x1FCEA8u;
    {
        const bool branch_taken_0x1fcea8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FCEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCEA8u;
            // 0x1fceac: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcea8) {
            ctx->pc = 0x1FD008u;
            goto label_1fd008;
        }
    }
    ctx->pc = 0x1FCEB0u;
label_1fceb0:
    // 0x1fceb0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1fceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1fceb4:
    // 0x1fceb4: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
label_1fceb8:
    if (ctx->pc == 0x1FCEB8u) {
        ctx->pc = 0x1FCEB8u;
            // 0x1fceb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FCEBCu;
        goto label_1fcebc;
    }
    ctx->pc = 0x1FCEB4u;
    {
        const bool branch_taken_0x1fceb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FCEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCEB4u;
            // 0x1fceb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fceb4) {
            ctx->pc = 0x1FCED0u;
            goto label_1fced0;
        }
    }
    ctx->pc = 0x1FCEBCu;
label_1fcebc:
    // 0x1fcebc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fcebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcec0:
    // 0x1fcec0: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_1fcec4:
    if (ctx->pc == 0x1FCEC4u) {
        ctx->pc = 0x1FCEC8u;
        goto label_1fcec8;
    }
    ctx->pc = 0x1FCEC0u;
    {
        const bool branch_taken_0x1fcec0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fcec0) {
            ctx->pc = 0x1FCED0u;
            goto label_1fced0;
        }
    }
    ctx->pc = 0x1FCEC8u;
label_1fcec8:
    // 0x1fcec8: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_1fcecc:
    if (ctx->pc == 0x1FCECCu) {
        ctx->pc = 0x1FCED0u;
        goto label_1fced0;
    }
    ctx->pc = 0x1FCEC8u;
    {
        const bool branch_taken_0x1fcec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcec8) {
            ctx->pc = 0x1FD1D0u;
            goto label_1fd1d0;
        }
    }
    ctx->pc = 0x1FCED0u;
label_1fced0:
    // 0x1fced0: 0xc087690  jal         func_21DA40
label_1fced4:
    if (ctx->pc == 0x1FCED4u) {
        ctx->pc = 0x1FCED8u;
        goto label_1fced8;
    }
    ctx->pc = 0x1FCED0u;
    SET_GPR_U32(ctx, 31, 0x1FCED8u);
    ctx->pc = 0x21DA40u;
    if (runtime->hasFunction(0x21DA40u)) {
        auto targetFn = runtime->lookupFunction(0x21DA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCED8u; }
        if (ctx->pc != 0x1FCED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMsgCursor__7CDC2MesFv_0x21da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCED8u; }
        if (ctx->pc != 0x1FCED8u) { return; }
    }
    ctx->pc = 0x1FCED8u;
label_1fced8:
    // 0x1fced8: 0x8e84044c  lw          $a0, 0x44C($s4)
    ctx->pc = 0x1fced8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1100)));
label_1fcedc:
    // 0x1fcedc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fcedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcee0:
    // 0x1fcee0: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_1fcee4:
    if (ctx->pc == 0x1FCEE4u) {
        ctx->pc = 0x1FCEE4u;
            // 0x1fcee4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FCEE8u;
        goto label_1fcee8;
    }
    ctx->pc = 0x1FCEE0u;
    {
        const bool branch_taken_0x1fcee0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FCEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCEE0u;
            // 0x1fcee4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcee0) {
            ctx->pc = 0x1FCEECu;
            goto label_1fceec;
        }
    }
    ctx->pc = 0x1FCEE8u;
label_1fcee8:
    // 0x1fcee8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1fcee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1fceec:
    // 0x1fceec: 0x1044000c  beq         $v0, $a0, . + 4 + (0xC << 2)
label_1fcef0:
    if (ctx->pc == 0x1FCEF0u) {
        ctx->pc = 0x1FCEF4u;
        goto label_1fcef4;
    }
    ctx->pc = 0x1FCEECu;
    {
        const bool branch_taken_0x1fceec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1fceec) {
            ctx->pc = 0x1FCF20u;
            goto label_1fcf20;
        }
    }
    ctx->pc = 0x1FCEF4u;
label_1fcef4:
    // 0x1fcef4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1fcef8:
    if (ctx->pc == 0x1FCEF8u) {
        ctx->pc = 0x1FCEFCu;
        goto label_1fcefc;
    }
    ctx->pc = 0x1FCEF4u;
    {
        const bool branch_taken_0x1fcef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcef4) {
            ctx->pc = 0x1FCF04u;
            goto label_1fcf04;
        }
    }
    ctx->pc = 0x1FCEFCu;
label_1fcefc:
    // 0x1fcefc: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_1fcf00:
    if (ctx->pc == 0x1FCF00u) {
        ctx->pc = 0x1FCF04u;
        goto label_1fcf04;
    }
    ctx->pc = 0x1FCEFCu;
    {
        const bool branch_taken_0x1fcefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcefc) {
            ctx->pc = 0x1FD1D0u;
            goto label_1fd1d0;
        }
    }
    ctx->pc = 0x1FCF04u;
label_1fcf04:
    // 0x1fcf04: 0xc094274  jal         func_2509D0
label_1fcf08:
    if (ctx->pc == 0x1FCF08u) {
        ctx->pc = 0x1FCF0Cu;
        goto label_1fcf0c;
    }
    ctx->pc = 0x1FCF04u;
    SET_GPR_U32(ctx, 31, 0x1FCF0Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCF0Cu; }
        if (ctx->pc != 0x1FCF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCF0Cu; }
        if (ctx->pc != 0x1FCF0Cu) { return; }
    }
    ctx->pc = 0x1FCF0Cu;
label_1fcf0c:
    // 0x1fcf0c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1fcf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1fcf10:
    // 0x1fcf10: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fcf10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fcf14:
    // 0x1fcf14: 0x241101fe  addiu       $s1, $zero, 0x1FE
    ctx->pc = 0x1fcf14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 510));
label_1fcf18:
    // 0x1fcf18: 0x100000ad  b           . + 4 + (0xAD << 2)
label_1fcf1c:
    if (ctx->pc == 0x1FCF1Cu) {
        ctx->pc = 0x1FCF1Cu;
            // 0x1fcf1c: 0xac22d62c  sw          $v0, -0x29D4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 2));
        ctx->pc = 0x1FCF20u;
        goto label_1fcf20;
    }
    ctx->pc = 0x1FCF18u;
    {
        const bool branch_taken_0x1fcf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCF18u;
            // 0x1fcf1c: 0xac22d62c  sw          $v0, -0x29D4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf18) {
            ctx->pc = 0x1FD1D0u;
            goto label_1fd1d0;
        }
    }
    ctx->pc = 0x1FCF20u;
label_1fcf20:
    // 0x1fcf20: 0xc094274  jal         func_2509D0
label_1fcf24:
    if (ctx->pc == 0x1FCF24u) {
        ctx->pc = 0x1FCF28u;
        goto label_1fcf28;
    }
    ctx->pc = 0x1FCF20u;
    SET_GPR_U32(ctx, 31, 0x1FCF28u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCF28u; }
        if (ctx->pc != 0x1FCF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCF28u; }
        if (ctx->pc != 0x1FCF28u) { return; }
    }
    ctx->pc = 0x1FCF28u;
label_1fcf28:
    // 0x1fcf28: 0x8e82045c  lw          $v0, 0x45C($s4)
    ctx->pc = 0x1fcf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1116)));
label_1fcf2c:
    // 0x1fcf2c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1fcf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1fcf30:
    // 0x1fcf30: 0x1c400023  bgtz        $v0, . + 4 + (0x23 << 2)
label_1fcf34:
    if (ctx->pc == 0x1FCF34u) {
        ctx->pc = 0x1FCF34u;
            // 0x1fcf34: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x1FCF38u;
        goto label_1fcf38;
    }
    ctx->pc = 0x1FCF30u;
    {
        const bool branch_taken_0x1fcf30 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1FCF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCF30u;
            // 0x1fcf34: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf30) {
            ctx->pc = 0x1FCFC0u;
            goto label_1fcfc0;
        }
    }
    ctx->pc = 0x1FCF38u;
label_1fcf38:
    // 0x1fcf38: 0x8e820414  lw          $v0, 0x414($s4)
    ctx->pc = 0x1fcf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1044)));
label_1fcf3c:
    // 0x1fcf3c: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
label_1fcf40:
    if (ctx->pc == 0x1FCF40u) {
        ctx->pc = 0x1FCF40u;
            // 0x1fcf40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FCF44u;
        goto label_1fcf44;
    }
    ctx->pc = 0x1FCF3Cu;
    {
        const bool branch_taken_0x1fcf3c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1FCF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCF3Cu;
            // 0x1fcf40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf3c) {
            ctx->pc = 0x1FCF54u;
            goto label_1fcf54;
        }
    }
    ctx->pc = 0x1FCF44u;
label_1fcf44:
    // 0x1fcf44: 0xc094274  jal         func_2509D0
label_1fcf48:
    if (ctx->pc == 0x1FCF48u) {
        ctx->pc = 0x1FCF48u;
            // 0x1fcf48: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1FCF4Cu;
        goto label_1fcf4c;
    }
    ctx->pc = 0x1FCF44u;
    SET_GPR_U32(ctx, 31, 0x1FCF4Cu);
    ctx->pc = 0x1FCF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCF44u;
            // 0x1fcf48: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCF4Cu; }
        if (ctx->pc != 0x1FCF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCF4Cu; }
        if (ctx->pc != 0x1FCF4Cu) { return; }
    }
    ctx->pc = 0x1FCF4Cu;
label_1fcf4c:
    // 0x1fcf4c: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_1fcf50:
    if (ctx->pc == 0x1FCF50u) {
        ctx->pc = 0x1FCF54u;
        goto label_1fcf54;
    }
    ctx->pc = 0x1FCF4Cu;
    {
        const bool branch_taken_0x1fcf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcf4c) {
            ctx->pc = 0x1FD1D0u;
            goto label_1fd1d0;
        }
    }
    ctx->pc = 0x1FCF54u;
label_1fcf54:
    // 0x1fcf54: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fcf54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fcf58:
    // 0x1fcf58: 0xa6820014  sh          $v0, 0x14($s4)
    ctx->pc = 0x1fcf58u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 2));
label_1fcf5c:
    // 0x1fcf5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fcf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fcf60:
    // 0x1fcf60: 0x24a58ee0  addiu       $a1, $a1, -0x7120
    ctx->pc = 0x1fcf60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938336));
label_1fcf64:
    // 0x1fcf64: 0xc08e7cc  jal         func_239F30
label_1fcf68:
    if (ctx->pc == 0x1FCF68u) {
        ctx->pc = 0x1FCF68u;
            // 0x1fcf68: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1FCF6Cu;
        goto label_1fcf6c;
    }
    ctx->pc = 0x1FCF64u;
    SET_GPR_U32(ctx, 31, 0x1FCF6Cu);
    ctx->pc = 0x1FCF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCF64u;
            // 0x1fcf68: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCF6Cu; }
        if (ctx->pc != 0x1FCF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCF6Cu; }
        if (ctx->pc != 0x1FCF6Cu) { return; }
    }
    ctx->pc = 0x1FCF6Cu;
label_1fcf6c:
    // 0x1fcf6c: 0xae800464  sw          $zero, 0x464($s4)
    ctx->pc = 0x1fcf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1124), GPR_U32(ctx, 0));
label_1fcf70:
    // 0x1fcf70: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1fcf70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcf74:
    // 0x1fcf74: 0xae960460  sw          $s6, 0x460($s4)
    ctx->pc = 0x1fcf74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1120), GPR_U32(ctx, 22));
label_1fcf78:
    // 0x1fcf78: 0x8e830414  lw          $v1, 0x414($s4)
    ctx->pc = 0x1fcf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1044)));
label_1fcf7c:
    // 0x1fcf7c: 0x8e8214f8  lw          $v0, 0x14F8($s4)
    ctx->pc = 0x1fcf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5368)));
label_1fcf80:
    // 0x1fcf80: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1fcf80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1fcf84:
    // 0x1fcf84: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1fcf88:
    if (ctx->pc == 0x1FCF88u) {
        ctx->pc = 0x1FCF88u;
            // 0x1fcf88: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->pc = 0x1FCF8Cu;
        goto label_1fcf8c;
    }
    ctx->pc = 0x1FCF84u;
    {
        const bool branch_taken_0x1fcf84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCF84u;
            // 0x1fcf88: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf84) {
            ctx->pc = 0x1FCF90u;
            goto label_1fcf90;
        }
    }
    ctx->pc = 0x1FCF8Cu;
label_1fcf8c:
    // 0x1fcf8c: 0xae8214f8  sw          $v0, 0x14F8($s4)
    ctx->pc = 0x1fcf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 5368), GPR_U32(ctx, 2));
label_1fcf90:
    // 0x1fcf90: 0x8e8214fc  lw          $v0, 0x14FC($s4)
    ctx->pc = 0x1fcf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5372)));
label_1fcf94:
    // 0x1fcf94: 0x8e830414  lw          $v1, 0x414($s4)
    ctx->pc = 0x1fcf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1044)));
label_1fcf98:
    // 0x1fcf98: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1fcf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1fcf9c:
    // 0x1fcf9c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1fcf9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1fcfa0:
    // 0x1fcfa0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1fcfa4:
    if (ctx->pc == 0x1FCFA4u) {
        ctx->pc = 0x1FCFA4u;
            // 0x1fcfa4: 0x2462fff8  addiu       $v0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->pc = 0x1FCFA8u;
        goto label_1fcfa8;
    }
    ctx->pc = 0x1FCFA0u;
    {
        const bool branch_taken_0x1fcfa0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCFA0u;
            // 0x1fcfa4: 0x2462fff8  addiu       $v0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcfa0) {
            ctx->pc = 0x1FCFACu;
            goto label_1fcfac;
        }
    }
    ctx->pc = 0x1FCFA8u;
label_1fcfa8:
    // 0x1fcfa8: 0xae8214fc  sw          $v0, 0x14FC($s4)
    ctx->pc = 0x1fcfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 5372), GPR_U32(ctx, 2));
label_1fcfac:
    // 0x1fcfac: 0x8e8214fc  lw          $v0, 0x14FC($s4)
    ctx->pc = 0x1fcfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5372)));
label_1fcfb0:
    // 0x1fcfb0: 0x4410087  bgez        $v0, . + 4 + (0x87 << 2)
label_1fcfb4:
    if (ctx->pc == 0x1FCFB4u) {
        ctx->pc = 0x1FCFB8u;
        goto label_1fcfb8;
    }
    ctx->pc = 0x1FCFB0u;
    {
        const bool branch_taken_0x1fcfb0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1fcfb0) {
            ctx->pc = 0x1FD1D0u;
            goto label_1fd1d0;
        }
    }
    ctx->pc = 0x1FCFB8u;
label_1fcfb8:
    // 0x1fcfb8: 0x10000085  b           . + 4 + (0x85 << 2)
label_1fcfbc:
    if (ctx->pc == 0x1FCFBCu) {
        ctx->pc = 0x1FCFBCu;
            // 0x1fcfbc: 0xae8014fc  sw          $zero, 0x14FC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 5372), GPR_U32(ctx, 0));
        ctx->pc = 0x1FCFC0u;
        goto label_1fcfc0;
    }
    ctx->pc = 0x1FCFB8u;
    {
        const bool branch_taken_0x1fcfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCFB8u;
            // 0x1fcfbc: 0xae8014fc  sw          $zero, 0x14FC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 5372), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcfb8) {
            ctx->pc = 0x1FD1D0u;
            goto label_1fd1d0;
        }
    }
    ctx->pc = 0x1FCFC0u;
label_1fcfc0:
    // 0x1fcfc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fcfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fcfc4:
    // 0x1fcfc4: 0xc08e7cc  jal         func_239F30
label_1fcfc8:
    if (ctx->pc == 0x1FCFC8u) {
        ctx->pc = 0x1FCFC8u;
            // 0x1fcfc8: 0x24a58ef0  addiu       $a1, $a1, -0x7110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938352));
        ctx->pc = 0x1FCFCCu;
        goto label_1fcfcc;
    }
    ctx->pc = 0x1FCFC4u;
    SET_GPR_U32(ctx, 31, 0x1FCFCCu);
    ctx->pc = 0x1FCFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCFC4u;
            // 0x1fcfc8: 0x24a58ef0  addiu       $a1, $a1, -0x7110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCFCCu; }
        if (ctx->pc != 0x1FCFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCFCCu; }
        if (ctx->pc != 0x1FCFCCu) { return; }
    }
    ctx->pc = 0x1FCFCCu;
label_1fcfcc:
    // 0x1fcfcc: 0xc78090a8  lwc1        $f0, -0x6F58($gp)
    ctx->pc = 0x1fcfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fcfd0:
    // 0x1fcfd0: 0x27a2021c  addiu       $v0, $sp, 0x21C
    ctx->pc = 0x1fcfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
label_1fcfd4:
    // 0x1fcfd4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1fcfd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1fcfd8:
    // 0x1fcfd8: 0x8e82045c  lw          $v0, 0x45C($s4)
    ctx->pc = 0x1fcfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1116)));
label_1fcfdc:
    // 0x1fcfdc: 0xc0aacf4  jal         func_2AB3D0
label_1fcfe0:
    if (ctx->pc == 0x1FCFE0u) {
        ctx->pc = 0x1FCFE0u;
            // 0x1fcfe0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x1FCFE4u;
        goto label_1fcfe4;
    }
    ctx->pc = 0x1FCFDCu;
    SET_GPR_U32(ctx, 31, 0x1FCFE4u);
    ctx->pc = 0x1FCFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCFDCu;
            // 0x1fcfe0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB3D0u;
    if (runtime->hasFunction(0x2AB3D0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCFE4u; }
        if (ctx->pc != 0x1FCFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNPCName__Fi_0x2ab3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCFE4u; }
        if (ctx->pc != 0x1FCFE4u) { return; }
    }
    ctx->pc = 0x1FCFE4u;
label_1fcfe4:
    // 0x1fcfe4: 0xafa2021c  sw          $v0, 0x21C($sp)
    ctx->pc = 0x1fcfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 2));
label_1fcfe8:
    // 0x1fcfe8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fcfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fcfec:
    // 0x1fcfec: 0x27a5021c  addiu       $a1, $sp, 0x21C
    ctx->pc = 0x1fcfecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
label_1fcff0:
    // 0x1fcff0: 0xc087720  jal         func_21DC80
label_1fcff4:
    if (ctx->pc == 0x1FCFF4u) {
        ctx->pc = 0x1FCFF4u;
            // 0x1fcff4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FCFF8u;
        goto label_1fcff8;
    }
    ctx->pc = 0x1FCFF0u;
    SET_GPR_U32(ctx, 31, 0x1FCFF8u);
    ctx->pc = 0x1FCFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCFF0u;
            // 0x1fcff4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCFF8u; }
        if (ctx->pc != 0x1FCFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCFF8u; }
        if (ctx->pc != 0x1FCFF8u) { return; }
    }
    ctx->pc = 0x1FCFF8u;
label_1fcff8:
    // 0x1fcff8: 0xa26021e8  sb          $zero, 0x21E8($s3)
    ctx->pc = 0x1fcff8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8680), (uint8_t)GPR_U32(ctx, 0));
label_1fcffc:
    // 0x1fcffc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fcffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd000:
    // 0x1fd000: 0x10000073  b           . + 4 + (0x73 << 2)
label_1fd004:
    if (ctx->pc == 0x1FD004u) {
        ctx->pc = 0x1FD004u;
            // 0x1fd004: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1FD008u;
        goto label_1fd008;
    }
    ctx->pc = 0x1FD000u;
    {
        const bool branch_taken_0x1fd000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD000u;
            // 0x1fd004: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd000) {
            ctx->pc = 0x1FD1D0u;
            goto label_1fd1d0;
        }
    }
    ctx->pc = 0x1FD008u;
label_1fd008:
    // 0x1fd008: 0xc094274  jal         func_2509D0
label_1fd00c:
    if (ctx->pc == 0x1FD00Cu) {
        ctx->pc = 0x1FD00Cu;
            // 0x1fd00c: 0x241101fe  addiu       $s1, $zero, 0x1FE (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 510));
        ctx->pc = 0x1FD010u;
        goto label_1fd010;
    }
    ctx->pc = 0x1FD008u;
    SET_GPR_U32(ctx, 31, 0x1FD010u);
    ctx->pc = 0x1FD00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD008u;
            // 0x1fd00c: 0x241101fe  addiu       $s1, $zero, 0x1FE (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 510));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD010u; }
        if (ctx->pc != 0x1FD010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD010u; }
        if (ctx->pc != 0x1FD010u) { return; }
    }
    ctx->pc = 0x1FD010u;
label_1fd010:
    // 0x1fd010: 0x1000006f  b           . + 4 + (0x6F << 2)
label_1fd014:
    if (ctx->pc == 0x1FD014u) {
        ctx->pc = 0x1FD018u;
        goto label_1fd018;
    }
    ctx->pc = 0x1FD010u;
    {
        const bool branch_taken_0x1fd010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd010) {
            ctx->pc = 0x1FD1D0u;
            goto label_1fd1d0;
        }
    }
    ctx->pc = 0x1FD018u;
label_1fd018:
    // 0x1fd018: 0xc087654  jal         func_21D950
label_1fd01c:
    if (ctx->pc == 0x1FD01Cu) {
        ctx->pc = 0x1FD01Cu;
            // 0x1fd01c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FD020u;
        goto label_1fd020;
    }
    ctx->pc = 0x1FD018u;
    SET_GPR_U32(ctx, 31, 0x1FD020u);
    ctx->pc = 0x1FD01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD018u;
            // 0x1fd01c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD020u; }
        if (ctx->pc != 0x1FD020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD020u; }
        if (ctx->pc != 0x1FD020u) { return; }
    }
    ctx->pc = 0x1FD020u;
label_1fd020:
    // 0x1fd020: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fd020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fd024:
    // 0x1fd024: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fd024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd028:
    // 0x1fd028: 0x16020019  bne         $s0, $v0, . + 4 + (0x19 << 2)
label_1fd02c:
    if (ctx->pc == 0x1FD02Cu) {
        ctx->pc = 0x1FD02Cu;
            // 0x1fd02c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1FD030u;
        goto label_1fd030;
    }
    ctx->pc = 0x1FD028u;
    {
        const bool branch_taken_0x1fd028 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FD02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD028u;
            // 0x1fd02c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd028) {
            ctx->pc = 0x1FD090u;
            goto label_1fd090;
        }
    }
    ctx->pc = 0x1FD030u;
label_1fd030:
    // 0x1fd030: 0x8e82045c  lw          $v0, 0x45C($s4)
    ctx->pc = 0x1fd030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1116)));
label_1fd034:
    // 0x1fd034: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1fd034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1fd038:
    // 0x1fd038: 0xc06725c  jal         func_19C970
label_1fd03c:
    if (ctx->pc == 0x1FD03Cu) {
        ctx->pc = 0x1FD03Cu;
            // 0x1fd03c: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->pc = 0x1FD040u;
        goto label_1fd040;
    }
    ctx->pc = 0x1FD038u;
    SET_GPR_U32(ctx, 31, 0x1FD040u);
    ctx->pc = 0x1FD03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD038u;
            // 0x1fd03c: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C970u;
    if (runtime->hasFunction(0x19C970u)) {
        auto targetFn = runtime->lookupFunction(0x19C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD040u; }
        if (ctx->pc != 0x1FD040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LeaveHouse__16CUserDataManagerFi_0x19c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD040u; }
        if (ctx->pc != 0x1FD040u) { return; }
    }
    ctx->pc = 0x1FD040u;
label_1fd040:
    // 0x1fd040: 0x8e82045c  lw          $v0, 0x45C($s4)
    ctx->pc = 0x1fd040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1116)));
label_1fd044:
    // 0x1fd044: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fd044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fd048:
    // 0x1fd048: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fd048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fd04c:
    // 0x1fd04c: 0x24a58f10  addiu       $a1, $a1, -0x70F0
    ctx->pc = 0x1fd04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938384));
label_1fd050:
    // 0x1fd050: 0xc08e7cc  jal         func_239F30
label_1fd054:
    if (ctx->pc == 0x1FD054u) {
        ctx->pc = 0x1FD054u;
            // 0x1fd054: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x1FD058u;
        goto label_1fd058;
    }
    ctx->pc = 0x1FD050u;
    SET_GPR_U32(ctx, 31, 0x1FD058u);
    ctx->pc = 0x1FD054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD050u;
            // 0x1fd054: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD058u; }
        if (ctx->pc != 0x1FD058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD058u; }
        if (ctx->pc != 0x1FD058u) { return; }
    }
    ctx->pc = 0x1FD058u;
label_1fd058:
    // 0x1fd058: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fd058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd05c:
    // 0x1fd05c: 0xa26321e8  sb          $v1, 0x21E8($s3)
    ctx->pc = 0x1fd05cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8680), (uint8_t)GPR_U32(ctx, 3));
label_1fd060:
    // 0x1fd060: 0x8e82044c  lw          $v0, 0x44C($s4)
    ctx->pc = 0x1fd060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1100)));
label_1fd064:
    // 0x1fd064: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_1fd068:
    if (ctx->pc == 0x1FD068u) {
        ctx->pc = 0x1FD068u;
            // 0x1fd068: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FD06Cu;
        goto label_1fd06c;
    }
    ctx->pc = 0x1FD064u;
    {
        const bool branch_taken_0x1fd064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FD068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD064u;
            // 0x1fd068: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd064) {
            ctx->pc = 0x1FD07Cu;
            goto label_1fd07c;
        }
    }
    ctx->pc = 0x1FD06Cu;
label_1fd06c:
    // 0x1fd06c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fd06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fd070:
    // 0x1fd070: 0xc0877e0  jal         func_21DF80
label_1fd074:
    if (ctx->pc == 0x1FD074u) {
        ctx->pc = 0x1FD074u;
            // 0x1fd074: 0x240511f8  addiu       $a1, $zero, 0x11F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4600));
        ctx->pc = 0x1FD078u;
        goto label_1fd078;
    }
    ctx->pc = 0x1FD070u;
    SET_GPR_U32(ctx, 31, 0x1FD078u);
    ctx->pc = 0x1FD074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD070u;
            // 0x1fd074: 0x240511f8  addiu       $a1, $zero, 0x11F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD078u; }
        if (ctx->pc != 0x1FD078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD078u; }
        if (ctx->pc != 0x1FD078u) { return; }
    }
    ctx->pc = 0x1FD078u;
label_1fd078:
    // 0x1fd078: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fd078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fd07c:
    // 0x1fd07c: 0xc07f244  jal         func_1FC910
label_1fd080:
    if (ctx->pc == 0x1FD080u) {
        ctx->pc = 0x1FD084u;
        goto label_1fd084;
    }
    ctx->pc = 0x1FD07Cu;
    SET_GPR_U32(ctx, 31, 0x1FD084u);
    ctx->pc = 0x1FC910u;
    if (runtime->hasFunction(0x1FC910u)) {
        auto targetFn = runtime->lookupFunction(0x1FC910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD084u; }
        if (ctx->pc != 0x1FD084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeNPCList__12CRemovalMenuFv_0x1fc910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD084u; }
        if (ctx->pc != 0x1FD084u) { return; }
    }
    ctx->pc = 0x1FD084u;
label_1fd084:
    // 0x1fd084: 0xa6800002  sh          $zero, 0x2($s4)
    ctx->pc = 0x1fd084u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
label_1fd088:
    // 0x1fd088: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1fd088u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd08c:
    // 0x1fd08c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fd08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fd090:
    // 0x1fd090: 0x1602004f  bne         $s0, $v0, . + 4 + (0x4F << 2)
label_1fd094:
    if (ctx->pc == 0x1FD094u) {
        ctx->pc = 0x1FD094u;
            // 0x1fd094: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FD098u;
        goto label_1fd098;
    }
    ctx->pc = 0x1FD090u;
    {
        const bool branch_taken_0x1fd090 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FD094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD090u;
            // 0x1fd094: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd090) {
            ctx->pc = 0x1FD1D0u;
            goto label_1fd1d0;
        }
    }
    ctx->pc = 0x1FD098u;
label_1fd098:
    // 0x1fd098: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fd098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fd09c:
    // 0x1fd09c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fd09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fd0a0:
    // 0x1fd0a0: 0xa26221e8  sb          $v0, 0x21E8($s3)
    ctx->pc = 0x1fd0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8680), (uint8_t)GPR_U32(ctx, 2));
label_1fd0a4:
    // 0x1fd0a4: 0xc08e7cc  jal         func_239F30
label_1fd0a8:
    if (ctx->pc == 0x1FD0A8u) {
        ctx->pc = 0x1FD0A8u;
            // 0x1fd0a8: 0x24a58f28  addiu       $a1, $a1, -0x70D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938408));
        ctx->pc = 0x1FD0ACu;
        goto label_1fd0ac;
    }
    ctx->pc = 0x1FD0A4u;
    SET_GPR_U32(ctx, 31, 0x1FD0ACu);
    ctx->pc = 0x1FD0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD0A4u;
            // 0x1fd0a8: 0x24a58f28  addiu       $a1, $a1, -0x70D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD0ACu; }
        if (ctx->pc != 0x1FD0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD0ACu; }
        if (ctx->pc != 0x1FD0ACu) { return; }
    }
    ctx->pc = 0x1FD0ACu;
label_1fd0ac:
    // 0x1fd0ac: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1fd0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1fd0b0:
    // 0x1fd0b0: 0xc094274  jal         func_2509D0
label_1fd0b4:
    if (ctx->pc == 0x1FD0B4u) {
        ctx->pc = 0x1FD0B4u;
            // 0x1fd0b4: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1FD0B8u;
        goto label_1fd0b8;
    }
    ctx->pc = 0x1FD0B0u;
    SET_GPR_U32(ctx, 31, 0x1FD0B8u);
    ctx->pc = 0x1FD0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD0B0u;
            // 0x1fd0b4: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD0B8u; }
        if (ctx->pc != 0x1FD0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD0B8u; }
        if (ctx->pc != 0x1FD0B8u) { return; }
    }
    ctx->pc = 0x1FD0B8u;
label_1fd0b8:
    // 0x1fd0b8: 0x10000045  b           . + 4 + (0x45 << 2)
label_1fd0bc:
    if (ctx->pc == 0x1FD0BCu) {
        ctx->pc = 0x1FD0C0u;
        goto label_1fd0c0;
    }
    ctx->pc = 0x1FD0B8u;
    {
        const bool branch_taken_0x1fd0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd0b8) {
            ctx->pc = 0x1FD1D0u;
            goto label_1fd1d0;
        }
    }
    ctx->pc = 0x1FD0C0u;
label_1fd0c0:
    // 0x1fd0c0: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x1fd0c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_1fd0c4:
    // 0x1fd0c4: 0x1064003c  beq         $v1, $a0, . + 4 + (0x3C << 2)
label_1fd0c8:
    if (ctx->pc == 0x1FD0C8u) {
        ctx->pc = 0x1FD0CCu;
        goto label_1fd0cc;
    }
    ctx->pc = 0x1FD0C4u;
    {
        const bool branch_taken_0x1fd0c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1fd0c4) {
            ctx->pc = 0x1FD1B8u;
            goto label_1fd1b8;
        }
    }
    ctx->pc = 0x1FD0CCu;
label_1fd0cc:
    // 0x1fd0cc: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
label_1fd0d0:
    if (ctx->pc == 0x1FD0D0u) {
        ctx->pc = 0x1FD0D0u;
            // 0x1fd0d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FD0D4u;
        goto label_1fd0d4;
    }
    ctx->pc = 0x1FD0CCu;
    {
        const bool branch_taken_0x1fd0cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD0CCu;
            // 0x1fd0d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd0cc) {
            ctx->pc = 0x1FD190u;
            goto label_1fd190;
        }
    }
    ctx->pc = 0x1FD0D4u;
label_1fd0d4:
    // 0x1fd0d4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1fd0d8:
    if (ctx->pc == 0x1FD0D8u) {
        ctx->pc = 0x1FD0DCu;
        goto label_1fd0dc;
    }
    ctx->pc = 0x1FD0D4u;
    {
        const bool branch_taken_0x1fd0d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd0d4) {
            ctx->pc = 0x1FD0E4u;
            goto label_1fd0e4;
        }
    }
    ctx->pc = 0x1FD0DCu;
label_1fd0dc:
    // 0x1fd0dc: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1fd0e0:
    if (ctx->pc == 0x1FD0E0u) {
        ctx->pc = 0x1FD0E4u;
        goto label_1fd0e4;
    }
    ctx->pc = 0x1FD0DCu;
    {
        const bool branch_taken_0x1fd0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd0dc) {
            ctx->pc = 0x1FD1D0u;
            goto label_1fd1d0;
        }
    }
    ctx->pc = 0x1FD0E4u;
label_1fd0e4:
    // 0x1fd0e4: 0xc07ecc8  jal         func_1FB320
label_1fd0e8:
    if (ctx->pc == 0x1FD0E8u) {
        ctx->pc = 0x1FD0E8u;
            // 0x1fd0e8: 0x8fa400dc  lw          $a0, 0xDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
        ctx->pc = 0x1FD0ECu;
        goto label_1fd0ec;
    }
    ctx->pc = 0x1FD0E4u;
    SET_GPR_U32(ctx, 31, 0x1FD0ECu);
    ctx->pc = 0x1FD0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD0E4u;
            // 0x1fd0e8: 0x8fa400dc  lw          $a0, 0xDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB320u;
    if (runtime->hasFunction(0x1FB320u)) {
        auto targetFn = runtime->lookupFunction(0x1FB320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD0ECu; }
        if (ctx->pc != 0x1FD0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        georama_menu_local_key__Fi_0x1fb320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD0ECu; }
        if (ctx->pc != 0x1FD0ECu) { return; }
    }
    ctx->pc = 0x1FD0ECu;
label_1fd0ec:
    // 0x1fd0ec: 0x8e8314fc  lw          $v1, 0x14FC($s4)
    ctx->pc = 0x1fd0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5372)));
label_1fd0f0:
    // 0x1fd0f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fd0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fd0f4:
    // 0x1fd0f4: 0x268514f8  addiu       $a1, $s4, 0x14F8
    ctx->pc = 0x1fd0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 5368));
label_1fd0f8:
    // 0x1fd0f8: 0x268614fc  addiu       $a2, $s4, 0x14FC
    ctx->pc = 0x1fd0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 5372));
label_1fd0fc:
    // 0x1fd0fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fd0fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd100:
    // 0x1fd100: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1fd100u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1fd104:
    // 0x1fd104: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x1fd104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_1fd108:
    // 0x1fd108: 0x8e880414  lw          $t0, 0x414($s4)
    ctx->pc = 0x1fd108u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1044)));
label_1fd10c:
    // 0x1fd10c: 0xc08ec6c  jal         func_23B1B0
label_1fd110:
    if (ctx->pc == 0x1FD110u) {
        ctx->pc = 0x1FD110u;
            // 0x1fd110: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FD114u;
        goto label_1fd114;
    }
    ctx->pc = 0x1FD10Cu;
    SET_GPR_U32(ctx, 31, 0x1FD114u);
    ctx->pc = 0x1FD110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD10Cu;
            // 0x1fd110: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B1B0u;
    if (runtime->hasFunction(0x23B1B0u)) {
        auto targetFn = runtime->lookupFunction(0x23B1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD114u; }
        if (ctx->pc != 0x1FD114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuKeySelectCheck__FiPiPiiiii_0x23b1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD114u; }
        if (ctx->pc != 0x1FD114u) { return; }
    }
    ctx->pc = 0x1FD114u;
label_1fd114:
    // 0x1fd114: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1fd118:
    if (ctx->pc == 0x1FD118u) {
        ctx->pc = 0x1FD118u;
            // 0x1fd118: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x1FD11Cu;
        goto label_1fd11c;
    }
    ctx->pc = 0x1FD114u;
    {
        const bool branch_taken_0x1fd114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD114u;
            // 0x1fd118: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd114) {
            ctx->pc = 0x1FD12Cu;
            goto label_1fd12c;
        }
    }
    ctx->pc = 0x1FD11Cu;
label_1fd11c:
    // 0x1fd11c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fd11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd120:
    // 0x1fd120: 0xae820464  sw          $v0, 0x464($s4)
    ctx->pc = 0x1fd120u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1124), GPR_U32(ctx, 2));
label_1fd124:
    // 0x1fd124: 0xc094274  jal         func_2509D0
label_1fd128:
    if (ctx->pc == 0x1FD128u) {
        ctx->pc = 0x1FD128u;
            // 0x1fd128: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FD12Cu;
        goto label_1fd12c;
    }
    ctx->pc = 0x1FD124u;
    SET_GPR_U32(ctx, 31, 0x1FD12Cu);
    ctx->pc = 0x1FD128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD124u;
            // 0x1fd128: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD12Cu; }
        if (ctx->pc != 0x1FD12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD12Cu; }
        if (ctx->pc != 0x1FD12Cu) { return; }
    }
    ctx->pc = 0x1FD12Cu;
label_1fd12c:
    // 0x1fd12c: 0x8e8314fc  lw          $v1, 0x14FC($s4)
    ctx->pc = 0x1fd12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5372)));
label_1fd130:
    // 0x1fd130: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1fd130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1fd134:
    // 0x1fd134: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_1fd138:
    if (ctx->pc == 0x1FD138u) {
        ctx->pc = 0x1FD138u;
            // 0x1fd138: 0x43082a  slt         $at, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->pc = 0x1FD13Cu;
        goto label_1fd13c;
    }
    ctx->pc = 0x1FD134u;
    {
        const bool branch_taken_0x1fd134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FD138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD134u;
            // 0x1fd138: 0x43082a  slt         $at, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd134) {
            ctx->pc = 0x1FD150u;
            goto label_1fd150;
        }
    }
    ctx->pc = 0x1FD13Cu;
label_1fd13c:
    // 0x1fd13c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1fd140:
    if (ctx->pc == 0x1FD140u) {
        ctx->pc = 0x1FD140u;
            // 0x1fd140: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FD144u;
        goto label_1fd144;
    }
    ctx->pc = 0x1FD13Cu;
    {
        const bool branch_taken_0x1fd13c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD13Cu;
            // 0x1fd140: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd13c) {
            ctx->pc = 0x1FD14Cu;
            goto label_1fd14c;
        }
    }
    ctx->pc = 0x1FD144u;
label_1fd144:
    // 0x1fd144: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fd148:
    if (ctx->pc == 0x1FD148u) {
        ctx->pc = 0x1FD148u;
            // 0x1fd148: 0xae8214a8  sw          $v0, 0x14A8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 5288), GPR_U32(ctx, 2));
        ctx->pc = 0x1FD14Cu;
        goto label_1fd14c;
    }
    ctx->pc = 0x1FD144u;
    {
        const bool branch_taken_0x1fd144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD144u;
            // 0x1fd148: 0xae8214a8  sw          $v0, 0x14A8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 5288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd144) {
            ctx->pc = 0x1FD150u;
            goto label_1fd150;
        }
    }
    ctx->pc = 0x1FD14Cu;
label_1fd14c:
    // 0x1fd14c: 0xae8014a8  sw          $zero, 0x14A8($s4)
    ctx->pc = 0x1fd14cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 5288), GPR_U32(ctx, 0));
label_1fd150:
    // 0x1fd150: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fd150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fd154:
    // 0x1fd154: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
label_1fd158:
    if (ctx->pc == 0x1FD158u) {
        ctx->pc = 0x1FD158u;
            // 0x1fd158: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1FD15Cu;
        goto label_1fd15c;
    }
    ctx->pc = 0x1FD154u;
    {
        const bool branch_taken_0x1fd154 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD154u;
            // 0x1fd158: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd154) {
            ctx->pc = 0x1FD180u;
            goto label_1fd180;
        }
    }
    ctx->pc = 0x1FD15Cu;
label_1fd15c:
    // 0x1fd15c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1fd15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1fd160:
    // 0x1fd160: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_1fd164:
    if (ctx->pc == 0x1FD164u) {
        ctx->pc = 0x1FD164u;
            // 0x1fd164: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FD168u;
        goto label_1fd168;
    }
    ctx->pc = 0x1FD160u;
    {
        const bool branch_taken_0x1fd160 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD160u;
            // 0x1fd164: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd160) {
            ctx->pc = 0x1FD178u;
            goto label_1fd178;
        }
    }
    ctx->pc = 0x1FD168u;
label_1fd168:
    // 0x1fd168: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_1fd16c:
    if (ctx->pc == 0x1FD16Cu) {
        ctx->pc = 0x1FD170u;
        goto label_1fd170;
    }
    ctx->pc = 0x1FD168u;
    {
        const bool branch_taken_0x1fd168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fd168) {
            ctx->pc = 0x1FD178u;
            goto label_1fd178;
        }
    }
    ctx->pc = 0x1FD170u;
label_1fd170:
    // 0x1fd170: 0x10000017  b           . + 4 + (0x17 << 2)
label_1fd174:
    if (ctx->pc == 0x1FD174u) {
        ctx->pc = 0x1FD178u;
        goto label_1fd178;
    }
    ctx->pc = 0x1FD170u;
    {
        const bool branch_taken_0x1fd170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd170) {
            ctx->pc = 0x1FD1D0u;
            goto label_1fd1d0;
        }
    }
    ctx->pc = 0x1FD178u;
label_1fd178:
    // 0x1fd178: 0x10000015  b           . + 4 + (0x15 << 2)
label_1fd17c:
    if (ctx->pc == 0x1FD17Cu) {
        ctx->pc = 0x1FD17Cu;
            // 0x1fd17c: 0x241100be  addiu       $s1, $zero, 0xBE (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
        ctx->pc = 0x1FD180u;
        goto label_1fd180;
    }
    ctx->pc = 0x1FD178u;
    {
        const bool branch_taken_0x1fd178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD178u;
            // 0x1fd17c: 0x241100be  addiu       $s1, $zero, 0xBE (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd178) {
            ctx->pc = 0x1FD1D0u;
            goto label_1fd1d0;
        }
    }
    ctx->pc = 0x1FD180u;
label_1fd180:
    // 0x1fd180: 0xc094274  jal         func_2509D0
label_1fd184:
    if (ctx->pc == 0x1FD184u) {
        ctx->pc = 0x1FD184u;
            // 0x1fd184: 0x24110032  addiu       $s1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x1FD188u;
        goto label_1fd188;
    }
    ctx->pc = 0x1FD180u;
    SET_GPR_U32(ctx, 31, 0x1FD188u);
    ctx->pc = 0x1FD184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD180u;
            // 0x1fd184: 0x24110032  addiu       $s1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD188u; }
        if (ctx->pc != 0x1FD188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD188u; }
        if (ctx->pc != 0x1FD188u) { return; }
    }
    ctx->pc = 0x1FD188u;
label_1fd188:
    // 0x1fd188: 0x10000011  b           . + 4 + (0x11 << 2)
label_1fd18c:
    if (ctx->pc == 0x1FD18Cu) {
        ctx->pc = 0x1FD190u;
        goto label_1fd190;
    }
    ctx->pc = 0x1FD188u;
    {
        const bool branch_taken_0x1fd188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd188) {
            ctx->pc = 0x1FD1D0u;
            goto label_1fd1d0;
        }
    }
    ctx->pc = 0x1FD190u;
label_1fd190:
    // 0x1fd190: 0xc087654  jal         func_21D950
label_1fd194:
    if (ctx->pc == 0x1FD194u) {
        ctx->pc = 0x1FD194u;
            // 0x1fd194: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FD198u;
        goto label_1fd198;
    }
    ctx->pc = 0x1FD190u;
    SET_GPR_U32(ctx, 31, 0x1FD198u);
    ctx->pc = 0x1FD194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD190u;
            // 0x1fd194: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD198u; }
        if (ctx->pc != 0x1FD198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD198u; }
        if (ctx->pc != 0x1FD198u) { return; }
    }
    ctx->pc = 0x1FD198u;
label_1fd198:
    // 0x1fd198: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fd198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd19c:
    // 0x1fd19c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1fd1a0:
    if (ctx->pc == 0x1FD1A0u) {
        ctx->pc = 0x1FD1A0u;
            // 0x1fd1a0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1FD1A4u;
        goto label_1fd1a4;
    }
    ctx->pc = 0x1FD19Cu;
    {
        const bool branch_taken_0x1fd19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FD1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD19Cu;
            // 0x1fd1a0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd19c) {
            ctx->pc = 0x1FD1A8u;
            goto label_1fd1a8;
        }
    }
    ctx->pc = 0x1FD1A4u;
label_1fd1a4:
    // 0x1fd1a4: 0x241100c8  addiu       $s1, $zero, 0xC8
    ctx->pc = 0x1fd1a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1fd1a8:
    // 0x1fd1a8: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_1fd1ac:
    if (ctx->pc == 0x1FD1ACu) {
        ctx->pc = 0x1FD1B0u;
        goto label_1fd1b0;
    }
    ctx->pc = 0x1FD1A8u;
    {
        const bool branch_taken_0x1fd1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fd1a8) {
            ctx->pc = 0x1FD1D0u;
            goto label_1fd1d0;
        }
    }
    ctx->pc = 0x1FD1B0u;
label_1fd1b0:
    // 0x1fd1b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1fd1b4:
    if (ctx->pc == 0x1FD1B4u) {
        ctx->pc = 0x1FD1B4u;
            // 0x1fd1b4: 0x241100d2  addiu       $s1, $zero, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
        ctx->pc = 0x1FD1B8u;
        goto label_1fd1b8;
    }
    ctx->pc = 0x1FD1B0u;
    {
        const bool branch_taken_0x1fd1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD1B0u;
            // 0x1fd1b4: 0x241100d2  addiu       $s1, $zero, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd1b0) {
            ctx->pc = 0x1FD1D0u;
            goto label_1fd1d0;
        }
    }
    ctx->pc = 0x1FD1B8u;
label_1fd1b8:
    // 0x1fd1b8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_1fd1bc:
    if (ctx->pc == 0x1FD1BCu) {
        ctx->pc = 0x1FD1BCu;
            // 0x1fd1bc: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x1FD1C0u;
        goto label_1fd1c0;
    }
    ctx->pc = 0x1FD1B8u;
    {
        const bool branch_taken_0x1fd1b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD1B8u;
            // 0x1fd1bc: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd1b8) {
            ctx->pc = 0x1FD1D0u;
            goto label_1fd1d0;
        }
    }
    ctx->pc = 0x1FD1C0u;
label_1fd1c0:
    // 0x1fd1c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fd1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fd1c4:
    // 0x1fd1c4: 0xc08e7cc  jal         func_239F30
label_1fd1c8:
    if (ctx->pc == 0x1FD1C8u) {
        ctx->pc = 0x1FD1C8u;
            // 0x1fd1c8: 0x24a58f38  addiu       $a1, $a1, -0x70C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938424));
        ctx->pc = 0x1FD1CCu;
        goto label_1fd1cc;
    }
    ctx->pc = 0x1FD1C4u;
    SET_GPR_U32(ctx, 31, 0x1FD1CCu);
    ctx->pc = 0x1FD1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD1C4u;
            // 0x1fd1c8: 0x24a58f38  addiu       $a1, $a1, -0x70C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD1CCu; }
        if (ctx->pc != 0x1FD1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD1CCu; }
        if (ctx->pc != 0x1FD1CCu) { return; }
    }
    ctx->pc = 0x1FD1CCu;
label_1fd1cc:
    // 0x1fd1cc: 0xa6800002  sh          $zero, 0x2($s4)
    ctx->pc = 0x1fd1ccu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
label_1fd1d0:
    // 0x1fd1d0: 0x240201fe  addiu       $v0, $zero, 0x1FE
    ctx->pc = 0x1fd1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 510));
label_1fd1d4:
    // 0x1fd1d4: 0x12220091  beq         $s1, $v0, . + 4 + (0x91 << 2)
label_1fd1d8:
    if (ctx->pc == 0x1FD1D8u) {
        ctx->pc = 0x1FD1D8u;
            // 0x1fd1d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1FD1DCu;
        goto label_1fd1dc;
    }
    ctx->pc = 0x1FD1D4u;
    {
        const bool branch_taken_0x1fd1d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD1D4u;
            // 0x1fd1d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd1d4) {
            ctx->pc = 0x1FD41Cu;
            goto label_1fd41c;
        }
    }
    ctx->pc = 0x1FD1DCu;
label_1fd1dc:
    // 0x1fd1dc: 0x240201f4  addiu       $v0, $zero, 0x1F4
    ctx->pc = 0x1fd1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_1fd1e0:
    // 0x1fd1e0: 0x122200a9  beq         $s1, $v0, . + 4 + (0xA9 << 2)
label_1fd1e4:
    if (ctx->pc == 0x1FD1E4u) {
        ctx->pc = 0x1FD1E4u;
            // 0x1fd1e4: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x1FD1E8u;
        goto label_1fd1e8;
    }
    ctx->pc = 0x1FD1E0u;
    {
        const bool branch_taken_0x1fd1e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD1E0u;
            // 0x1fd1e4: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd1e0) {
            ctx->pc = 0x1FD488u;
            goto label_1fd488;
        }
    }
    ctx->pc = 0x1FD1E8u;
label_1fd1e8:
    // 0x1fd1e8: 0x12220086  beq         $s1, $v0, . + 4 + (0x86 << 2)
label_1fd1ec:
    if (ctx->pc == 0x1FD1ECu) {
        ctx->pc = 0x1FD1ECu;
            // 0x1fd1ec: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x1FD1F0u;
        goto label_1fd1f0;
    }
    ctx->pc = 0x1FD1E8u;
    {
        const bool branch_taken_0x1fd1e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD1E8u;
            // 0x1fd1ec: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd1e8) {
            ctx->pc = 0x1FD404u;
            goto label_1fd404;
        }
    }
    ctx->pc = 0x1FD1F0u;
label_1fd1f0:
    // 0x1fd1f0: 0x240200d2  addiu       $v0, $zero, 0xD2
    ctx->pc = 0x1fd1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
label_1fd1f4:
    // 0x1fd1f4: 0x1222007b  beq         $s1, $v0, . + 4 + (0x7B << 2)
label_1fd1f8:
    if (ctx->pc == 0x1FD1F8u) {
        ctx->pc = 0x1FD1F8u;
            // 0x1fd1f8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x1FD1FCu;
        goto label_1fd1fc;
    }
    ctx->pc = 0x1FD1F4u;
    {
        const bool branch_taken_0x1fd1f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD1F4u;
            // 0x1fd1f8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd1f4) {
            ctx->pc = 0x1FD3E4u;
            goto label_1fd3e4;
        }
    }
    ctx->pc = 0x1FD1FCu;
label_1fd1fc:
    // 0x1fd1fc: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1fd1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1fd200:
    // 0x1fd200: 0x1222005f  beq         $s1, $v0, . + 4 + (0x5F << 2)
label_1fd204:
    if (ctx->pc == 0x1FD204u) {
        ctx->pc = 0x1FD204u;
            // 0x1fd204: 0x240200be  addiu       $v0, $zero, 0xBE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
        ctx->pc = 0x1FD208u;
        goto label_1fd208;
    }
    ctx->pc = 0x1FD200u;
    {
        const bool branch_taken_0x1fd200 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD200u;
            // 0x1fd204: 0x240200be  addiu       $v0, $zero, 0xBE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd200) {
            ctx->pc = 0x1FD380u;
            goto label_1fd380;
        }
    }
    ctx->pc = 0x1FD208u;
label_1fd208:
    // 0x1fd208: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_1fd20c:
    if (ctx->pc == 0x1FD20Cu) {
        ctx->pc = 0x1FD210u;
        goto label_1fd210;
    }
    ctx->pc = 0x1FD208u;
    {
        const bool branch_taken_0x1fd208 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fd208) {
            ctx->pc = 0x1FD218u;
            goto label_1fd218;
        }
    }
    ctx->pc = 0x1FD210u;
label_1fd210:
    // 0x1fd210: 0x1000009e  b           . + 4 + (0x9E << 2)
label_1fd214:
    if (ctx->pc == 0x1FD214u) {
        ctx->pc = 0x1FD214u;
            // 0x1fd214: 0x8e8314f8  lw          $v1, 0x14F8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5368)));
        ctx->pc = 0x1FD218u;
        goto label_1fd218;
    }
    ctx->pc = 0x1FD210u;
    {
        const bool branch_taken_0x1fd210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD210u;
            // 0x1fd214: 0x8e8314f8  lw          $v1, 0x14F8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd210) {
            ctx->pc = 0x1FD48Cu;
            goto label_1fd48c;
        }
    }
    ctx->pc = 0x1FD218u;
label_1fd218:
    // 0x1fd218: 0x8e8314f8  lw          $v1, 0x14F8($s4)
    ctx->pc = 0x1fd218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5368)));
label_1fd21c:
    // 0x1fd21c: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x1fd21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_1fd220:
    // 0x1fd220: 0x8f858ff8  lw          $a1, -0x7008($gp)
    ctx->pc = 0x1fd220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938616)));
label_1fd224:
    // 0x1fd224: 0x8e860418  lw          $a2, 0x418($s4)
    ctx->pc = 0x1fd224u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1048)));
label_1fd228:
    // 0x1fd228: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fd228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fd22c:
    // 0x1fd22c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1fd22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1fd230:
    // 0x1fd230: 0x8c442e60  lw          $a0, 0x2E60($v0)
    ctx->pc = 0x1fd230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11872)));
label_1fd234:
    // 0x1fd234: 0x8c700144  lw          $s0, 0x144($v1)
    ctx->pc = 0x1fd234u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
label_1fd238:
    // 0x1fd238: 0xc0c6270  jal         func_3189C0
label_1fd23c:
    if (ctx->pc == 0x1FD23Cu) {
        ctx->pc = 0x1FD23Cu;
            // 0x1fd23c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FD240u;
        goto label_1fd240;
    }
    ctx->pc = 0x1FD238u;
    SET_GPR_U32(ctx, 31, 0x1FD240u);
    ctx->pc = 0x1FD23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD238u;
            // 0x1fd23c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3189C0u;
    if (runtime->hasFunction(0x3189C0u)) {
        auto targetFn = runtime->lookupFunction(0x3189C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD240u; }
        if (ctx->pc != 0x1FD240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLiveChara__FiP8CEditMapii_0x3189c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD240u; }
        if (ctx->pc != 0x1FD240u) { return; }
    }
    ctx->pc = 0x1FD240u;
label_1fd240:
    // 0x1fd240: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fd240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fd244:
    // 0x1fd244: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1fd244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1fd248:
    // 0x1fd248: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_1fd24c:
    if (ctx->pc == 0x1FD24Cu) {
        ctx->pc = 0x1FD24Cu;
            // 0x1fd24c: 0x24040132  addiu       $a0, $zero, 0x132 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 306));
        ctx->pc = 0x1FD250u;
        goto label_1fd250;
    }
    ctx->pc = 0x1FD248u;
    {
        const bool branch_taken_0x1fd248 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FD24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD248u;
            // 0x1fd24c: 0x24040132  addiu       $a0, $zero, 0x132 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 306));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd248) {
            ctx->pc = 0x1FD264u;
            goto label_1fd264;
        }
    }
    ctx->pc = 0x1FD250u;
label_1fd250:
    // 0x1fd250: 0xc08cac4  jal         func_232B10
label_1fd254:
    if (ctx->pc == 0x1FD254u) {
        ctx->pc = 0x1FD258u;
        goto label_1fd258;
    }
    ctx->pc = 0x1FD250u;
    SET_GPR_U32(ctx, 31, 0x1FD258u);
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD258u; }
        if (ctx->pc != 0x1FD258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD258u; }
        if (ctx->pc != 0x1FD258u) { return; }
    }
    ctx->pc = 0x1FD258u;
label_1fd258:
    // 0x1fd258: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1fd25c:
    if (ctx->pc == 0x1FD25Cu) {
        ctx->pc = 0x1FD260u;
        goto label_1fd260;
    }
    ctx->pc = 0x1FD258u;
    {
        const bool branch_taken_0x1fd258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd258) {
            ctx->pc = 0x1FD264u;
            goto label_1fd264;
        }
    }
    ctx->pc = 0x1FD260u;
label_1fd260:
    // 0x1fd260: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fd260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd264:
    // 0x1fd264: 0x8f828ac8  lw          $v0, -0x7538($gp)
    ctx->pc = 0x1fd264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
label_1fd268:
    // 0x1fd268: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1fd26c:
    if (ctx->pc == 0x1FD26Cu) {
        ctx->pc = 0x1FD26Cu;
            // 0x1fd26c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1FD270u;
        goto label_1fd270;
    }
    ctx->pc = 0x1FD268u;
    {
        const bool branch_taken_0x1fd268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD268u;
            // 0x1fd26c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd268) {
            ctx->pc = 0x1FD2A4u;
            goto label_1fd2a4;
        }
    }
    ctx->pc = 0x1FD270u;
label_1fd270:
    // 0x1fd270: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fd270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fd274:
    // 0x1fd274: 0xc052cf0  jal         func_14B3C0
label_1fd278:
    if (ctx->pc == 0x1FD278u) {
        ctx->pc = 0x1FD278u;
            // 0x1fd278: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1FD27Cu;
        goto label_1fd27c;
    }
    ctx->pc = 0x1FD274u;
    SET_GPR_U32(ctx, 31, 0x1FD27Cu);
    ctx->pc = 0x1FD278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD274u;
            // 0x1fd278: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD27Cu; }
        if (ctx->pc != 0x1FD27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD27Cu; }
        if (ctx->pc != 0x1FD27Cu) { return; }
    }
    ctx->pc = 0x1FD27Cu;
label_1fd27c:
    // 0x1fd27c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1fd27cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1fd280:
    // 0x1fd280: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1fd280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_1fd284:
    // 0x1fd284: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x1fd284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_1fd288:
    // 0x1fd288: 0xc052cf0  jal         func_14B3C0
label_1fd28c:
    if (ctx->pc == 0x1FD28Cu) {
        ctx->pc = 0x1FD28Cu;
            // 0x1fd28c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1FD290u;
        goto label_1fd290;
    }
    ctx->pc = 0x1FD288u;
    SET_GPR_U32(ctx, 31, 0x1FD290u);
    ctx->pc = 0x1FD28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD288u;
            // 0x1fd28c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD290u; }
        if (ctx->pc != 0x1FD290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD290u; }
        if (ctx->pc != 0x1FD290u) { return; }
    }
    ctx->pc = 0x1FD290u;
label_1fd290:
    // 0x1fd290: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x1fd290u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1fd294:
    // 0x1fd294: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1fd294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1fd298:
    // 0x1fd298: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1fd29c:
    if (ctx->pc == 0x1FD29Cu) {
        ctx->pc = 0x1FD2A0u;
        goto label_1fd2a0;
    }
    ctx->pc = 0x1FD298u;
    {
        const bool branch_taken_0x1fd298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd298) {
            ctx->pc = 0x1FD2A4u;
            goto label_1fd2a4;
        }
    }
    ctx->pc = 0x1FD2A0u;
label_1fd2a0:
    // 0x1fd2a0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1fd2a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd2a4:
    // 0x1fd2a4: 0x1620001c  bnez        $s1, . + 4 + (0x1C << 2)
label_1fd2a8:
    if (ctx->pc == 0x1FD2A8u) {
        ctx->pc = 0x1FD2A8u;
            // 0x1fd2a8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x1FD2ACu;
        goto label_1fd2ac;
    }
    ctx->pc = 0x1FD2A4u;
    {
        const bool branch_taken_0x1fd2a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD2A4u;
            // 0x1fd2a8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd2a4) {
            ctx->pc = 0x1FD318u;
            goto label_1fd318;
        }
    }
    ctx->pc = 0x1FD2ACu;
label_1fd2ac:
    // 0x1fd2ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fd2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fd2b0:
    // 0x1fd2b0: 0xc08e7cc  jal         func_239F30
label_1fd2b4:
    if (ctx->pc == 0x1FD2B4u) {
        ctx->pc = 0x1FD2B4u;
            // 0x1fd2b4: 0x24a58f48  addiu       $a1, $a1, -0x70B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938440));
        ctx->pc = 0x1FD2B8u;
        goto label_1fd2b8;
    }
    ctx->pc = 0x1FD2B0u;
    SET_GPR_U32(ctx, 31, 0x1FD2B8u);
    ctx->pc = 0x1FD2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD2B0u;
            // 0x1fd2b4: 0x24a58f48  addiu       $a1, $a1, -0x70B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD2B8u; }
        if (ctx->pc != 0x1FD2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD2B8u; }
        if (ctx->pc != 0x1FD2B8u) { return; }
    }
    ctx->pc = 0x1FD2B8u;
label_1fd2b8:
    // 0x1fd2b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fd2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fd2bc:
    // 0x1fd2bc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1fd2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1fd2c0:
    // 0x1fd2c0: 0xc0aacc4  jal         func_2AB310
label_1fd2c4:
    if (ctx->pc == 0x1FD2C4u) {
        ctx->pc = 0x1FD2C4u;
            // 0x1fd2c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FD2C8u;
        goto label_1fd2c8;
    }
    ctx->pc = 0x1FD2C0u;
    SET_GPR_U32(ctx, 31, 0x1FD2C8u);
    ctx->pc = 0x1FD2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD2C0u;
            // 0x1fd2c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB310u;
    if (runtime->hasFunction(0x2AB310u)) {
        auto targetFn = runtime->lookupFunction(0x2AB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD2C8u; }
        if (ctx->pc != 0x1FD2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaMessage__Fiii_0x2ab310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD2C8u; }
        if (ctx->pc != 0x1FD2C8u) { return; }
    }
    ctx->pc = 0x1FD2C8u;
label_1fd2c8:
    // 0x1fd2c8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fd2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fd2cc:
    // 0x1fd2cc: 0x8c24ca58  lw          $a0, -0x35A8($at)
    ctx->pc = 0x1fd2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
label_1fd2d0:
    // 0x1fd2d0: 0xc0877e0  jal         func_21DF80
label_1fd2d4:
    if (ctx->pc == 0x1FD2D4u) {
        ctx->pc = 0x1FD2D4u;
            // 0x1fd2d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FD2D8u;
        goto label_1fd2d8;
    }
    ctx->pc = 0x1FD2D0u;
    SET_GPR_U32(ctx, 31, 0x1FD2D8u);
    ctx->pc = 0x1FD2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD2D0u;
            // 0x1fd2d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD2D8u; }
        if (ctx->pc != 0x1FD2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD2D8u; }
        if (ctx->pc != 0x1FD2D8u) { return; }
    }
    ctx->pc = 0x1FD2D8u;
label_1fd2d8:
    // 0x1fd2d8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fd2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fd2dc:
    // 0x1fd2dc: 0xc087898  jal         func_21E260
label_1fd2e0:
    if (ctx->pc == 0x1FD2E0u) {
        ctx->pc = 0x1FD2E0u;
            // 0x1fd2e0: 0x8c24ca58  lw          $a0, -0x35A8($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
        ctx->pc = 0x1FD2E4u;
        goto label_1fd2e4;
    }
    ctx->pc = 0x1FD2DCu;
    SET_GPR_U32(ctx, 31, 0x1FD2E4u);
    ctx->pc = 0x1FD2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD2DCu;
            // 0x1fd2e0: 0x8c24ca58  lw          $a0, -0x35A8($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD2E4u; }
        if (ctx->pc != 0x1FD2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD2E4u; }
        if (ctx->pc != 0x1FD2E4u) { return; }
    }
    ctx->pc = 0x1FD2E4u;
label_1fd2e4:
    // 0x1fd2e4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fd2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fd2e8:
    // 0x1fd2e8: 0x8c24ca58  lw          $a0, -0x35A8($at)
    ctx->pc = 0x1fd2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
label_1fd2ec:
    // 0x1fd2ec: 0xc0ac0b8  jal         func_2B02E0
label_1fd2f0:
    if (ctx->pc == 0x1FD2F0u) {
        ctx->pc = 0x1FD2F0u;
            // 0x1fd2f0: 0x26850470  addiu       $a1, $s4, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1136));
        ctx->pc = 0x1FD2F4u;
        goto label_1fd2f4;
    }
    ctx->pc = 0x1FD2ECu;
    SET_GPR_U32(ctx, 31, 0x1FD2F4u);
    ctx->pc = 0x1FD2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD2ECu;
            // 0x1fd2f0: 0x26850470  addiu       $a1, $s4, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B02E0u;
    if (runtime->hasFunction(0x2B02E0u)) {
        auto targetFn = runtime->lookupFunction(0x2B02E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD2F4u; }
        if (ctx->pc != 0x1FD2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AdjustNPCTalk__FP7CDC2MesP11CCharacter2_0x2b02e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD2F4u; }
        if (ctx->pc != 0x1FD2F4u) { return; }
    }
    ctx->pc = 0x1FD2F4u;
label_1fd2f4:
    // 0x1fd2f4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fd2f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fd2f8:
    // 0x1fd2f8: 0xc087898  jal         func_21E260
label_1fd2fc:
    if (ctx->pc == 0x1FD2FCu) {
        ctx->pc = 0x1FD2FCu;
            // 0x1fd2fc: 0x8c24ca58  lw          $a0, -0x35A8($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
        ctx->pc = 0x1FD300u;
        goto label_1fd300;
    }
    ctx->pc = 0x1FD2F8u;
    SET_GPR_U32(ctx, 31, 0x1FD300u);
    ctx->pc = 0x1FD2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD2F8u;
            // 0x1fd2fc: 0x8c24ca58  lw          $a0, -0x35A8($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD300u; }
        if (ctx->pc != 0x1FD300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD300u; }
        if (ctx->pc != 0x1FD300u) { return; }
    }
    ctx->pc = 0x1FD300u;
label_1fd300:
    // 0x1fd300: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fd300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fd304:
    // 0x1fd304: 0xc0878c8  jal         func_21E320
label_1fd308:
    if (ctx->pc == 0x1FD308u) {
        ctx->pc = 0x1FD308u;
            // 0x1fd308: 0x8c24ca58  lw          $a0, -0x35A8($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
        ctx->pc = 0x1FD30Cu;
        goto label_1fd30c;
    }
    ctx->pc = 0x1FD304u;
    SET_GPR_U32(ctx, 31, 0x1FD30Cu);
    ctx->pc = 0x1FD308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD304u;
            // 0x1fd308: 0x8c24ca58  lw          $a0, -0x35A8($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD30Cu; }
        if (ctx->pc != 0x1FD30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD30Cu; }
        if (ctx->pc != 0x1FD30Cu) { return; }
    }
    ctx->pc = 0x1FD30Cu;
label_1fd30c:
    // 0x1fd30c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fd30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fd310:
    // 0x1fd310: 0x1000005d  b           . + 4 + (0x5D << 2)
label_1fd314:
    if (ctx->pc == 0x1FD314u) {
        ctx->pc = 0x1FD314u;
            // 0x1fd314: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1FD318u;
        goto label_1fd318;
    }
    ctx->pc = 0x1FD310u;
    {
        const bool branch_taken_0x1fd310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD310u;
            // 0x1fd314: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd310) {
            ctx->pc = 0x1FD488u;
            goto label_1fd488;
        }
    }
    ctx->pc = 0x1FD318u;
label_1fd318:
    // 0x1fd318: 0x8e8214f8  lw          $v0, 0x14F8($s4)
    ctx->pc = 0x1fd318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5368)));
label_1fd31c:
    // 0x1fd31c: 0x27a301d0  addiu       $v1, $sp, 0x1D0
    ctx->pc = 0x1fd31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_1fd320:
    // 0x1fd320: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fd320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fd324:
    // 0x1fd324: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1fd324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1fd328:
    // 0x1fd328: 0x8c420144  lw          $v0, 0x144($v0)
    ctx->pc = 0x1fd328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
label_1fd32c:
    // 0x1fd32c: 0xae820468  sw          $v0, 0x468($s4)
    ctx->pc = 0x1fd32cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1128), GPR_U32(ctx, 2));
label_1fd330:
    // 0x1fd330: 0xdf8290b0  ld          $v0, -0x6F50($gp)
    ctx->pc = 0x1fd330u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294938800)));
label_1fd334:
    // 0x1fd334: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1fd334u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_1fd338:
    // 0x1fd338: 0xc0aacf4  jal         func_2AB3D0
label_1fd33c:
    if (ctx->pc == 0x1FD33Cu) {
        ctx->pc = 0x1FD33Cu;
            // 0x1fd33c: 0x8e840468  lw          $a0, 0x468($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1128)));
        ctx->pc = 0x1FD340u;
        goto label_1fd340;
    }
    ctx->pc = 0x1FD338u;
    SET_GPR_U32(ctx, 31, 0x1FD340u);
    ctx->pc = 0x1FD33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD338u;
            // 0x1fd33c: 0x8e840468  lw          $a0, 0x468($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1128)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB3D0u;
    if (runtime->hasFunction(0x2AB3D0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD340u; }
        if (ctx->pc != 0x1FD340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNPCName__Fi_0x2ab3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD340u; }
        if (ctx->pc != 0x1FD340u) { return; }
    }
    ctx->pc = 0x1FD340u;
label_1fd340:
    // 0x1fd340: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x1fd340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
label_1fd344:
    // 0x1fd344: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fd344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fd348:
    // 0x1fd348: 0x8e830458  lw          $v1, 0x458($s4)
    ctx->pc = 0x1fd348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1112)));
label_1fd34c:
    // 0x1fd34c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fd34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd350:
    // 0x1fd350: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fd350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fd354:
    // 0x1fd354: 0x24a58f60  addiu       $a1, $a1, -0x70A0
    ctx->pc = 0x1fd354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938464));
label_1fd358:
    // 0x1fd358: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x1fd358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1fd35c:
    // 0x1fd35c: 0xafa301d4  sw          $v1, 0x1D4($sp)
    ctx->pc = 0x1fd35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 3));
label_1fd360:
    // 0x1fd360: 0xc08e7cc  jal         func_239F30
label_1fd364:
    if (ctx->pc == 0x1FD364u) {
        ctx->pc = 0x1FD364u;
            // 0x1fd364: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1FD368u;
        goto label_1fd368;
    }
    ctx->pc = 0x1FD360u;
    SET_GPR_U32(ctx, 31, 0x1FD368u);
    ctx->pc = 0x1FD364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD360u;
            // 0x1fd364: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD368u; }
        if (ctx->pc != 0x1FD368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD368u; }
        if (ctx->pc != 0x1FD368u) { return; }
    }
    ctx->pc = 0x1FD368u;
label_1fd368:
    // 0x1fd368: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fd368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fd36c:
    // 0x1fd36c: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x1fd36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_1fd370:
    // 0x1fd370: 0xc087720  jal         func_21DC80
label_1fd374:
    if (ctx->pc == 0x1FD374u) {
        ctx->pc = 0x1FD374u;
            // 0x1fd374: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1FD378u;
        goto label_1fd378;
    }
    ctx->pc = 0x1FD370u;
    SET_GPR_U32(ctx, 31, 0x1FD378u);
    ctx->pc = 0x1FD374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD370u;
            // 0x1fd374: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD378u; }
        if (ctx->pc != 0x1FD378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD378u; }
        if (ctx->pc != 0x1FD378u) { return; }
    }
    ctx->pc = 0x1FD378u;
label_1fd378:
    // 0x1fd378: 0x10000043  b           . + 4 + (0x43 << 2)
label_1fd37c:
    if (ctx->pc == 0x1FD37Cu) {
        ctx->pc = 0x1FD380u;
        goto label_1fd380;
    }
    ctx->pc = 0x1FD378u;
    {
        const bool branch_taken_0x1fd378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd378) {
            ctx->pc = 0x1FD488u;
            goto label_1fd488;
        }
    }
    ctx->pc = 0x1FD380u;
label_1fd380:
    // 0x1fd380: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x1fd380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_1fd384:
    // 0x1fd384: 0x8e850468  lw          $a1, 0x468($s4)
    ctx->pc = 0x1fd384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1128)));
label_1fd388:
    // 0x1fd388: 0xc0671d4  jal         func_19C750
label_1fd38c:
    if (ctx->pc == 0x1FD38Cu) {
        ctx->pc = 0x1FD38Cu;
            // 0x1fd38c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1FD390u;
        goto label_1fd390;
    }
    ctx->pc = 0x1FD388u;
    SET_GPR_U32(ctx, 31, 0x1FD390u);
    ctx->pc = 0x1FD38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD388u;
            // 0x1fd38c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C750u;
    if (runtime->hasFunction(0x19C750u)) {
        auto targetFn = runtime->lookupFunction(0x19C750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD390u; }
        if (ctx->pc != 0x1FD390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartyCharaStatus__16CUserDataManagerFii_0x19c750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD390u; }
        if (ctx->pc != 0x1FD390u) { return; }
    }
    ctx->pc = 0x1FD390u;
label_1fd390:
    // 0x1fd390: 0x8e830468  lw          $v1, 0x468($s4)
    ctx->pc = 0x1fd390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1128)));
label_1fd394:
    // 0x1fd394: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fd394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fd398:
    // 0x1fd398: 0x8e82045c  lw          $v0, 0x45C($s4)
    ctx->pc = 0x1fd398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1116)));
label_1fd39c:
    // 0x1fd39c: 0xc07f244  jal         func_1FC910
label_1fd3a0:
    if (ctx->pc == 0x1FD3A0u) {
        ctx->pc = 0x1FD3A0u;
            // 0x1fd3a0: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1FD3A4u;
        goto label_1fd3a4;
    }
    ctx->pc = 0x1FD39Cu;
    SET_GPR_U32(ctx, 31, 0x1FD3A4u);
    ctx->pc = 0x1FD3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD39Cu;
            // 0x1fd3a0: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FC910u;
    if (runtime->hasFunction(0x1FC910u)) {
        auto targetFn = runtime->lookupFunction(0x1FC910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD3A4u; }
        if (ctx->pc != 0x1FD3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeNPCList__12CRemovalMenuFv_0x1fc910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD3A4u; }
        if (ctx->pc != 0x1FD3A4u) { return; }
    }
    ctx->pc = 0x1FD3A4u;
label_1fd3a4:
    // 0x1fd3a4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fd3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fd3a8:
    // 0x1fd3a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fd3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fd3ac:
    // 0x1fd3ac: 0x24a58f28  addiu       $a1, $a1, -0x70D8
    ctx->pc = 0x1fd3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938408));
label_1fd3b0:
    // 0x1fd3b0: 0xc08e7cc  jal         func_239F30
label_1fd3b4:
    if (ctx->pc == 0x1FD3B4u) {
        ctx->pc = 0x1FD3B4u;
            // 0x1fd3b4: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FD3B8u;
        goto label_1fd3b8;
    }
    ctx->pc = 0x1FD3B0u;
    SET_GPR_U32(ctx, 31, 0x1FD3B8u);
    ctx->pc = 0x1FD3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD3B0u;
            // 0x1fd3b4: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD3B8u; }
        if (ctx->pc != 0x1FD3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD3B8u; }
        if (ctx->pc != 0x1FD3B8u) { return; }
    }
    ctx->pc = 0x1FD3B8u;
label_1fd3b8:
    // 0x1fd3b8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fd3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fd3bc:
    // 0x1fd3bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fd3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fd3c0:
    // 0x1fd3c0: 0xc08e7cc  jal         func_239F30
label_1fd3c4:
    if (ctx->pc == 0x1FD3C4u) {
        ctx->pc = 0x1FD3C4u;
            // 0x1fd3c4: 0x24a58f80  addiu       $a1, $a1, -0x7080 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938496));
        ctx->pc = 0x1FD3C8u;
        goto label_1fd3c8;
    }
    ctx->pc = 0x1FD3C0u;
    SET_GPR_U32(ctx, 31, 0x1FD3C8u);
    ctx->pc = 0x1FD3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD3C0u;
            // 0x1fd3c4: 0x24a58f80  addiu       $a1, $a1, -0x7080 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD3C8u; }
        if (ctx->pc != 0x1FD3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD3C8u; }
        if (ctx->pc != 0x1FD3C8u) { return; }
    }
    ctx->pc = 0x1FD3C8u;
label_1fd3c8:
    // 0x1fd3c8: 0xa6800002  sh          $zero, 0x2($s4)
    ctx->pc = 0x1fd3c8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
label_1fd3cc:
    // 0x1fd3cc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1fd3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1fd3d0:
    // 0x1fd3d0: 0xa6800014  sh          $zero, 0x14($s4)
    ctx->pc = 0x1fd3d0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 0));
label_1fd3d4:
    // 0x1fd3d4: 0xc094274  jal         func_2509D0
label_1fd3d8:
    if (ctx->pc == 0x1FD3D8u) {
        ctx->pc = 0x1FD3D8u;
            // 0x1fd3d8: 0xae800460  sw          $zero, 0x460($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1120), GPR_U32(ctx, 0));
        ctx->pc = 0x1FD3DCu;
        goto label_1fd3dc;
    }
    ctx->pc = 0x1FD3D4u;
    SET_GPR_U32(ctx, 31, 0x1FD3DCu);
    ctx->pc = 0x1FD3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD3D4u;
            // 0x1fd3d8: 0xae800460  sw          $zero, 0x460($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD3DCu; }
        if (ctx->pc != 0x1FD3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD3DCu; }
        if (ctx->pc != 0x1FD3DCu) { return; }
    }
    ctx->pc = 0x1FD3DCu;
label_1fd3dc:
    // 0x1fd3dc: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1fd3e0:
    if (ctx->pc == 0x1FD3E0u) {
        ctx->pc = 0x1FD3E4u;
        goto label_1fd3e4;
    }
    ctx->pc = 0x1FD3DCu;
    {
        const bool branch_taken_0x1fd3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd3dc) {
            ctx->pc = 0x1FD488u;
            goto label_1fd488;
        }
    }
    ctx->pc = 0x1FD3E4u;
label_1fd3e4:
    // 0x1fd3e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fd3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fd3e8:
    // 0x1fd3e8: 0xc08e7cc  jal         func_239F30
label_1fd3ec:
    if (ctx->pc == 0x1FD3ECu) {
        ctx->pc = 0x1FD3ECu;
            // 0x1fd3ec: 0x24a58f28  addiu       $a1, $a1, -0x70D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938408));
        ctx->pc = 0x1FD3F0u;
        goto label_1fd3f0;
    }
    ctx->pc = 0x1FD3E8u;
    SET_GPR_U32(ctx, 31, 0x1FD3F0u);
    ctx->pc = 0x1FD3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD3E8u;
            // 0x1fd3ec: 0x24a58f28  addiu       $a1, $a1, -0x70D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD3F0u; }
        if (ctx->pc != 0x1FD3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD3F0u; }
        if (ctx->pc != 0x1FD3F0u) { return; }
    }
    ctx->pc = 0x1FD3F0u;
label_1fd3f0:
    // 0x1fd3f0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1fd3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1fd3f4:
    // 0x1fd3f4: 0xc094274  jal         func_2509D0
label_1fd3f8:
    if (ctx->pc == 0x1FD3F8u) {
        ctx->pc = 0x1FD3F8u;
            // 0x1fd3f8: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1FD3FCu;
        goto label_1fd3fc;
    }
    ctx->pc = 0x1FD3F4u;
    SET_GPR_U32(ctx, 31, 0x1FD3FCu);
    ctx->pc = 0x1FD3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD3F4u;
            // 0x1fd3f8: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD3FCu; }
        if (ctx->pc != 0x1FD3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD3FCu; }
        if (ctx->pc != 0x1FD3FCu) { return; }
    }
    ctx->pc = 0x1FD3FCu;
label_1fd3fc:
    // 0x1fd3fc: 0x10000022  b           . + 4 + (0x22 << 2)
label_1fd400:
    if (ctx->pc == 0x1FD400u) {
        ctx->pc = 0x1FD404u;
        goto label_1fd404;
    }
    ctx->pc = 0x1FD3FCu;
    {
        const bool branch_taken_0x1fd3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd3fc) {
            ctx->pc = 0x1FD488u;
            goto label_1fd488;
        }
    }
    ctx->pc = 0x1FD404u;
label_1fd404:
    // 0x1fd404: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fd404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fd408:
    // 0x1fd408: 0x24a58f80  addiu       $a1, $a1, -0x7080
    ctx->pc = 0x1fd408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938496));
label_1fd40c:
    // 0x1fd40c: 0xc08e7cc  jal         func_239F30
label_1fd410:
    if (ctx->pc == 0x1FD410u) {
        ctx->pc = 0x1FD410u;
            // 0x1fd410: 0xa6800014  sh          $zero, 0x14($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1FD414u;
        goto label_1fd414;
    }
    ctx->pc = 0x1FD40Cu;
    SET_GPR_U32(ctx, 31, 0x1FD414u);
    ctx->pc = 0x1FD410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD40Cu;
            // 0x1fd410: 0xa6800014  sh          $zero, 0x14($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD414u; }
        if (ctx->pc != 0x1FD414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD414u; }
        if (ctx->pc != 0x1FD414u) { return; }
    }
    ctx->pc = 0x1FD414u;
label_1fd414:
    // 0x1fd414: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1fd418:
    if (ctx->pc == 0x1FD418u) {
        ctx->pc = 0x1FD418u;
            // 0x1fd418: 0xae800460  sw          $zero, 0x460($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1120), GPR_U32(ctx, 0));
        ctx->pc = 0x1FD41Cu;
        goto label_1fd41c;
    }
    ctx->pc = 0x1FD414u;
    {
        const bool branch_taken_0x1fd414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD414u;
            // 0x1fd418: 0xae800460  sw          $zero, 0x460($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd414) {
            ctx->pc = 0x1FD488u;
            goto label_1fd488;
        }
    }
    ctx->pc = 0x1FD41Cu;
label_1fd41c:
    // 0x1fd41c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fd41cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fd420:
    // 0x1fd420: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fd420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fd424:
    // 0x1fd424: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x1fd424u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_1fd428:
    // 0x1fd428: 0xc08e7cc  jal         func_239F30
label_1fd42c:
    if (ctx->pc == 0x1FD42Cu) {
        ctx->pc = 0x1FD42Cu;
            // 0x1fd42c: 0x24a58e38  addiu       $a1, $a1, -0x71C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938168));
        ctx->pc = 0x1FD430u;
        goto label_1fd430;
    }
    ctx->pc = 0x1FD428u;
    SET_GPR_U32(ctx, 31, 0x1FD430u);
    ctx->pc = 0x1FD42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD428u;
            // 0x1fd42c: 0x24a58e38  addiu       $a1, $a1, -0x71C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD430u; }
        if (ctx->pc != 0x1FD430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD430u; }
        if (ctx->pc != 0x1FD430u) { return; }
    }
    ctx->pc = 0x1FD430u;
label_1fd430:
    // 0x1fd430: 0xae800140  sw          $zero, 0x140($s4)
    ctx->pc = 0x1fd430u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 320), GPR_U32(ctx, 0));
label_1fd434:
    // 0x1fd434: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fd434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fd438:
    // 0x1fd438: 0x8c23d62c  lw          $v1, -0x29D4($at)
    ctx->pc = 0x1fd438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956588)));
label_1fd43c:
    // 0x1fd43c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1fd43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1fd440:
    // 0x1fd440: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1fd444:
    if (ctx->pc == 0x1FD444u) {
        ctx->pc = 0x1FD448u;
        goto label_1fd448;
    }
    ctx->pc = 0x1FD440u;
    {
        const bool branch_taken_0x1fd440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fd440) {
            ctx->pc = 0x1FD488u;
            goto label_1fd488;
        }
    }
    ctx->pc = 0x1FD448u;
label_1fd448:
    // 0x1fd448: 0x8e82045c  lw          $v0, 0x45C($s4)
    ctx->pc = 0x1fd448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1116)));
label_1fd44c:
    // 0x1fd44c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1fd450:
    if (ctx->pc == 0x1FD450u) {
        ctx->pc = 0x1FD454u;
        goto label_1fd454;
    }
    ctx->pc = 0x1FD44Cu;
    {
        const bool branch_taken_0x1fd44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd44c) {
            ctx->pc = 0x1FD488u;
            goto label_1fd488;
        }
    }
    ctx->pc = 0x1FD454u;
label_1fd454:
    // 0x1fd454: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1fd454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1fd458:
    // 0x1fd458: 0x8e830450  lw          $v1, 0x450($s4)
    ctx->pc = 0x1fd458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1104)));
label_1fd45c:
    // 0x1fd45c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_1fd460:
    if (ctx->pc == 0x1FD460u) {
        ctx->pc = 0x1FD460u;
            // 0x1fd460: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x1FD464u;
        goto label_1fd464;
    }
    ctx->pc = 0x1FD45Cu;
    {
        const bool branch_taken_0x1fd45c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD45Cu;
            // 0x1fd460: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd45c) {
            ctx->pc = 0x1FD488u;
            goto label_1fd488;
        }
    }
    ctx->pc = 0x1FD464u;
label_1fd464:
    // 0x1fd464: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fd464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fd468:
    // 0x1fd468: 0xac23d62c  sw          $v1, -0x29D4($at)
    ctx->pc = 0x1fd468u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 3));
label_1fd46c:
    // 0x1fd46c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fd46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd470:
    // 0x1fd470: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fd470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fd474:
    // 0x1fd474: 0xac22d630  sw          $v0, -0x29D0($at)
    ctx->pc = 0x1fd474u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 2));
label_1fd478:
    // 0x1fd478: 0x8e82045c  lw          $v0, 0x45C($s4)
    ctx->pc = 0x1fd478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1116)));
label_1fd47c:
    // 0x1fd47c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fd47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1fd480:
    // 0x1fd480: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1fd480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1fd484:
    // 0x1fd484: 0xac22d634  sw          $v0, -0x29CC($at)
    ctx->pc = 0x1fd484u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956596), GPR_U32(ctx, 2));
label_1fd488:
    // 0x1fd488: 0x8e8314f8  lw          $v1, 0x14F8($s4)
    ctx->pc = 0x1fd488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5368)));
label_1fd48c:
    // 0x1fd48c: 0x8e820464  lw          $v0, 0x464($s4)
    ctx->pc = 0x1fd48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1124)));
label_1fd490:
    // 0x1fd490: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fd490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fd494:
    // 0x1fd494: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1fd494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1fd498:
    // 0x1fd498: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1fd498u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1fd49c:
    // 0x1fd49c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1fd4a0:
    if (ctx->pc == 0x1FD4A0u) {
        ctx->pc = 0x1FD4A0u;
            // 0x1fd4a0: 0x8c700144  lw          $s0, 0x144($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
        ctx->pc = 0x1FD4A4u;
        goto label_1fd4a4;
    }
    ctx->pc = 0x1FD49Cu;
    {
        const bool branch_taken_0x1fd49c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD49Cu;
            // 0x1fd4a0: 0x8c700144  lw          $s0, 0x144($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd49c) {
            ctx->pc = 0x1FD4C0u;
            goto label_1fd4c0;
        }
    }
    ctx->pc = 0x1FD4A4u;
label_1fd4a4:
    // 0x1fd4a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fd4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1fd4a8:
    // 0x1fd4a8: 0xae820464  sw          $v0, 0x464($s4)
    ctx->pc = 0x1fd4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1124), GPR_U32(ctx, 2));
label_1fd4ac:
    // 0x1fd4ac: 0x8e820464  lw          $v0, 0x464($s4)
    ctx->pc = 0x1fd4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1124)));
label_1fd4b0:
    // 0x1fd4b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1fd4b4:
    if (ctx->pc == 0x1FD4B4u) {
        ctx->pc = 0x1FD4B8u;
        goto label_1fd4b8;
    }
    ctx->pc = 0x1FD4B0u;
    {
        const bool branch_taken_0x1fd4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd4b0) {
            ctx->pc = 0x1FD4C0u;
            goto label_1fd4c0;
        }
    }
    ctx->pc = 0x1FD4B8u;
label_1fd4b8:
    // 0x1fd4b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fd4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd4bc:
    // 0x1fd4bc: 0xae820460  sw          $v0, 0x460($s4)
    ctx->pc = 0x1fd4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1120), GPR_U32(ctx, 2));
label_1fd4c0:
    // 0x1fd4c0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1fd4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_1fd4c4:
    // 0x1fd4c4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1fd4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1fd4c8:
    // 0x1fd4c8: 0x2442e9b0  addiu       $v0, $v0, -0x1650
    ctx->pc = 0x1fd4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961584));
label_1fd4cc:
    // 0x1fd4cc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1fd4ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1fd4d0:
    // 0x1fd4d0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1fd4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_1fd4d4:
    // 0x1fd4d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1fd4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fd4d8:
    // 0x1fd4d8: 0x8e830460  lw          $v1, 0x460($s4)
    ctx->pc = 0x1fd4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1120)));
label_1fd4dc:
    // 0x1fd4dc: 0x10620070  beq         $v1, $v0, . + 4 + (0x70 << 2)
label_1fd4e0:
    if (ctx->pc == 0x1FD4E0u) {
        ctx->pc = 0x1FD4E0u;
            // 0x1fd4e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1FD4E4u;
        goto label_1fd4e4;
    }
    ctx->pc = 0x1FD4DCu;
    {
        const bool branch_taken_0x1fd4dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD4DCu;
            // 0x1fd4e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd4dc) {
            ctx->pc = 0x1FD6A0u;
            goto label_1fd6a0;
        }
    }
    ctx->pc = 0x1FD4E4u;
label_1fd4e4:
    // 0x1fd4e4: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
label_1fd4e8:
    if (ctx->pc == 0x1FD4E8u) {
        ctx->pc = 0x1FD4E8u;
            // 0x1fd4e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FD4ECu;
        goto label_1fd4ec;
    }
    ctx->pc = 0x1FD4E4u;
    {
        const bool branch_taken_0x1fd4e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD4E4u;
            // 0x1fd4e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd4e4) {
            ctx->pc = 0x1FD578u;
            goto label_1fd578;
        }
    }
    ctx->pc = 0x1FD4ECu;
label_1fd4ec:
    // 0x1fd4ec: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_1fd4f0:
    if (ctx->pc == 0x1FD4F0u) {
        ctx->pc = 0x1FD4F0u;
            // 0x1fd4f0: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x1FD4F4u;
        goto label_1fd4f4;
    }
    ctx->pc = 0x1FD4ECu;
    {
        const bool branch_taken_0x1fd4ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD4ECu;
            // 0x1fd4f0: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd4ec) {
            ctx->pc = 0x1FD524u;
            goto label_1fd524;
        }
    }
    ctx->pc = 0x1FD4F4u;
label_1fd4f4:
    // 0x1fd4f4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1fd4f8:
    if (ctx->pc == 0x1FD4F8u) {
        ctx->pc = 0x1FD4FCu;
        goto label_1fd4fc;
    }
    ctx->pc = 0x1FD4F4u;
    {
        const bool branch_taken_0x1fd4f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd4f4) {
            ctx->pc = 0x1FD504u;
            goto label_1fd504;
        }
    }
    ctx->pc = 0x1FD4FCu;
label_1fd4fc:
    // 0x1fd4fc: 0x10000075  b           . + 4 + (0x75 << 2)
label_1fd500:
    if (ctx->pc == 0x1FD500u) {
        ctx->pc = 0x1FD500u;
            // 0x1fd500: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->pc = 0x1FD504u;
        goto label_1fd504;
    }
    ctx->pc = 0x1FD4FCu;
    {
        const bool branch_taken_0x1fd4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD4FCu;
            // 0x1fd500: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd4fc) {
            ctx->pc = 0x1FD6D4u;
            goto label_1fd6d4;
        }
    }
    ctx->pc = 0x1FD504u;
label_1fd504:
    // 0x1fd504: 0x8e8414f0  lw          $a0, 0x14F0($s4)
    ctx->pc = 0x1fd504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5360)));
label_1fd508:
    // 0x1fd508: 0x10800071  beqz        $a0, . + 4 + (0x71 << 2)
label_1fd50c:
    if (ctx->pc == 0x1FD50Cu) {
        ctx->pc = 0x1FD50Cu;
            // 0x1fd50c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1FD510u;
        goto label_1fd510;
    }
    ctx->pc = 0x1FD508u;
    {
        const bool branch_taken_0x1fd508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD508u;
            // 0x1fd50c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd508) {
            ctx->pc = 0x1FD6D0u;
            goto label_1fd6d0;
        }
    }
    ctx->pc = 0x1FD510u;
label_1fd510:
    // 0x1fd510: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fd510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd514:
    // 0x1fd514: 0xc0896c8  jal         func_225B20
label_1fd518:
    if (ctx->pc == 0x1FD518u) {
        ctx->pc = 0x1FD518u;
            // 0x1fd518: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FD51Cu;
        goto label_1fd51c;
    }
    ctx->pc = 0x1FD514u;
    SET_GPR_U32(ctx, 31, 0x1FD51Cu);
    ctx->pc = 0x1FD518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD514u;
            // 0x1fd518: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B20u;
    if (runtime->hasFunction(0x225B20u)) {
        auto targetFn = runtime->lookupFunction(0x225B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD51Cu; }
        if (ctx->pc != 0x1FD51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActionCharaPtr__16CMenuPosDataFormFP12CActionCharaii_0x225b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD51Cu; }
        if (ctx->pc != 0x1FD51Cu) { return; }
    }
    ctx->pc = 0x1FD51Cu;
label_1fd51c:
    // 0x1fd51c: 0x1000006c  b           . + 4 + (0x6C << 2)
label_1fd520:
    if (ctx->pc == 0x1FD520u) {
        ctx->pc = 0x1FD524u;
        goto label_1fd524;
    }
    ctx->pc = 0x1FD51Cu;
    {
        const bool branch_taken_0x1fd51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd51c) {
            ctx->pc = 0x1FD6D0u;
            goto label_1fd6d0;
        }
    }
    ctx->pc = 0x1FD524u;
label_1fd524:
    // 0x1fd524: 0xac20cca4  sw          $zero, -0x335C($at)
    ctx->pc = 0x1fd524u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954148), GPR_U32(ctx, 0));
label_1fd528:
    // 0x1fd528: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x1fd528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_1fd52c:
    // 0x1fd52c: 0xc052330  jal         func_148CC0
label_1fd530:
    if (ctx->pc == 0x1FD530u) {
        ctx->pc = 0x1FD530u;
            // 0x1fd530: 0xac20cc9c  sw          $zero, -0x3364($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954140), GPR_U32(ctx, 0));
        ctx->pc = 0x1FD534u;
        goto label_1fd534;
    }
    ctx->pc = 0x1FD52Cu;
    SET_GPR_U32(ctx, 31, 0x1FD534u);
    ctx->pc = 0x1FD530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD52Cu;
            // 0x1fd530: 0xac20cc9c  sw          $zero, -0x3364($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD534u; }
        if (ctx->pc != 0x1FD534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD534u; }
        if (ctx->pc != 0x1FD534u) { return; }
    }
    ctx->pc = 0x1FD534u;
label_1fd534:
    // 0x1fd534: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x1fd534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_1fd538:
    // 0x1fd538: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fd538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fd53c:
    // 0x1fd53c: 0x2484cc80  addiu       $a0, $a0, -0x3380
    ctx->pc = 0x1fd53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954112));
label_1fd540:
    // 0x1fd540: 0xc0af0d4  jal         func_2BC350
label_1fd544:
    if (ctx->pc == 0x1FD544u) {
        ctx->pc = 0x1FD544u;
            // 0x1fd544: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FD548u;
        goto label_1fd548;
    }
    ctx->pc = 0x1FD540u;
    SET_GPR_U32(ctx, 31, 0x1FD548u);
    ctx->pc = 0x1FD544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD540u;
            // 0x1fd544: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC350u;
    if (runtime->hasFunction(0x2BC350u)) {
        auto targetFn = runtime->lookupFunction(0x2BC350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD548u; }
        if (ctx->pc != 0x1FD548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuNPCModelLoad__FP9mgCMemoryii_0x2bc350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD548u; }
        if (ctx->pc != 0x1FD548u) { return; }
    }
    ctx->pc = 0x1FD548u;
label_1fd548:
    // 0x1fd548: 0x8e8414f0  lw          $a0, 0x14F0($s4)
    ctx->pc = 0x1fd548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5360)));
label_1fd54c:
    // 0x1fd54c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1fd54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fd550:
    // 0x1fd550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fd550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd554:
    // 0x1fd554: 0xc0896c8  jal         func_225B20
label_1fd558:
    if (ctx->pc == 0x1FD558u) {
        ctx->pc = 0x1FD558u;
            // 0x1fd558: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FD55Cu;
        goto label_1fd55c;
    }
    ctx->pc = 0x1FD554u;
    SET_GPR_U32(ctx, 31, 0x1FD55Cu);
    ctx->pc = 0x1FD558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD554u;
            // 0x1fd558: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B20u;
    if (runtime->hasFunction(0x225B20u)) {
        auto targetFn = runtime->lookupFunction(0x225B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD55Cu; }
        if (ctx->pc != 0x1FD55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActionCharaPtr__16CMenuPosDataFormFP12CActionCharaii_0x225b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD55Cu; }
        if (ctx->pc != 0x1FD55Cu) { return; }
    }
    ctx->pc = 0x1FD55Cu;
label_1fd55c:
    // 0x1fd55c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fd55cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fd560:
    // 0x1fd560: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fd560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fd564:
    // 0x1fd564: 0xc08e7cc  jal         func_239F30
label_1fd568:
    if (ctx->pc == 0x1FD568u) {
        ctx->pc = 0x1FD568u;
            // 0x1fd568: 0x24a58f98  addiu       $a1, $a1, -0x7068 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938520));
        ctx->pc = 0x1FD56Cu;
        goto label_1fd56c;
    }
    ctx->pc = 0x1FD564u;
    SET_GPR_U32(ctx, 31, 0x1FD56Cu);
    ctx->pc = 0x1FD568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD564u;
            // 0x1fd568: 0x24a58f98  addiu       $a1, $a1, -0x7068 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD56Cu; }
        if (ctx->pc != 0x1FD56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD56Cu; }
        if (ctx->pc != 0x1FD56Cu) { return; }
    }
    ctx->pc = 0x1FD56Cu;
label_1fd56c:
    // 0x1fd56c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fd56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fd570:
    // 0x1fd570: 0x10000057  b           . + 4 + (0x57 << 2)
label_1fd574:
    if (ctx->pc == 0x1FD574u) {
        ctx->pc = 0x1FD574u;
            // 0x1fd574: 0xae820460  sw          $v0, 0x460($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1120), GPR_U32(ctx, 2));
        ctx->pc = 0x1FD578u;
        goto label_1fd578;
    }
    ctx->pc = 0x1FD570u;
    {
        const bool branch_taken_0x1fd570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD570u;
            // 0x1fd574: 0xae820460  sw          $v0, 0x460($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd570) {
            ctx->pc = 0x1FD6D0u;
            goto label_1fd6d0;
        }
    }
    ctx->pc = 0x1FD578u;
label_1fd578:
    // 0x1fd578: 0xc05239c  jal         func_148E70
label_1fd57c:
    if (ctx->pc == 0x1FD57Cu) {
        ctx->pc = 0x1FD580u;
        goto label_1fd580;
    }
    ctx->pc = 0x1FD578u;
    SET_GPR_U32(ctx, 31, 0x1FD580u);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD580u; }
        if (ctx->pc != 0x1FD580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD580u; }
        if (ctx->pc != 0x1FD580u) { return; }
    }
    ctx->pc = 0x1FD580u;
label_1fd580:
    // 0x1fd580: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
label_1fd584:
    if (ctx->pc == 0x1FD584u) {
        ctx->pc = 0x1FD588u;
        goto label_1fd588;
    }
    ctx->pc = 0x1FD580u;
    {
        const bool branch_taken_0x1fd580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd580) {
            ctx->pc = 0x1FD6A0u;
            goto label_1fd6a0;
        }
    }
    ctx->pc = 0x1FD588u;
label_1fd588:
    // 0x1fd588: 0xae800440  sw          $zero, 0x440($s4)
    ctx->pc = 0x1fd588u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1088), GPR_U32(ctx, 0));
label_1fd58c:
    // 0x1fd58c: 0x26840470  addiu       $a0, $s4, 0x470
    ctx->pc = 0x1fd58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1136));
label_1fd590:
    // 0x1fd590: 0xae800438  sw          $zero, 0x438($s4)
    ctx->pc = 0x1fd590u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1080), GPR_U32(ctx, 0));
label_1fd594:
    // 0x1fd594: 0x8e990470  lw          $t9, 0x470($s4)
    ctx->pc = 0x1fd594u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1136)));
label_1fd598:
    // 0x1fd598: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x1fd598u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_1fd59c:
    // 0x1fd59c: 0x320f809  jalr        $t9
label_1fd5a0:
    if (ctx->pc == 0x1FD5A0u) {
        ctx->pc = 0x1FD5A0u;
            // 0x1fd5a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FD5A4u;
        goto label_1fd5a4;
    }
    ctx->pc = 0x1FD59Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FD5A4u);
        ctx->pc = 0x1FD5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD59Cu;
            // 0x1fd5a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FD5A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FD5A4u; }
            if (ctx->pc != 0x1FD5A4u) { return; }
        }
        }
    }
    ctx->pc = 0x1FD5A4u;
label_1fd5a4:
    // 0x1fd5a4: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x1fd5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_1fd5a8:
    // 0x1fd5a8: 0x26840470  addiu       $a0, $s4, 0x470
    ctx->pc = 0x1fd5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1136));
label_1fd5ac:
    // 0x1fd5ac: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x1fd5acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1fd5b0:
    // 0x1fd5b0: 0xc0af108  jal         func_2BC420
label_1fd5b4:
    if (ctx->pc == 0x1FD5B4u) {
        ctx->pc = 0x1FD5B4u;
            // 0x1fd5b4: 0x2685041c  addiu       $a1, $s4, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1052));
        ctx->pc = 0x1FD5B8u;
        goto label_1fd5b8;
    }
    ctx->pc = 0x1FD5B0u;
    SET_GPR_U32(ctx, 31, 0x1FD5B8u);
    ctx->pc = 0x1FD5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD5B0u;
            // 0x1fd5b4: 0x2685041c  addiu       $a1, $s4, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1052));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC420u;
    if (runtime->hasFunction(0x2BC420u)) {
        auto targetFn = runtime->lookupFunction(0x2BC420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD5B8u; }
        if (ctx->pc != 0x1FD5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuNPCLoadCheck__FP12CActionCharaP9mgCMemoryi_0x2bc420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD5B8u; }
        if (ctx->pc != 0x1FD5B8u) { return; }
    }
    ctx->pc = 0x1FD5B8u;
label_1fd5b8:
    // 0x1fd5b8: 0x8e990470  lw          $t9, 0x470($s4)
    ctx->pc = 0x1fd5b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1136)));
label_1fd5bc:
    // 0x1fd5bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fd5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1fd5c0:
    // 0x1fd5c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1fd5c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fd5c4:
    // 0x1fd5c4: 0x26840470  addiu       $a0, $s4, 0x470
    ctx->pc = 0x1fd5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1136));
label_1fd5c8:
    // 0x1fd5c8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1fd5c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1fd5cc:
    // 0x1fd5cc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1fd5ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1fd5d0:
    // 0x1fd5d0: 0x320f809  jalr        $t9
label_1fd5d4:
    if (ctx->pc == 0x1FD5D4u) {
        ctx->pc = 0x1FD5D4u;
            // 0x1fd5d4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1FD5D8u;
        goto label_1fd5d8;
    }
    ctx->pc = 0x1FD5D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FD5D8u);
        ctx->pc = 0x1FD5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD5D0u;
            // 0x1fd5d4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FD5D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FD5D8u; }
            if (ctx->pc != 0x1FD5D8u) { return; }
        }
        }
    }
    ctx->pc = 0x1FD5D8u;
label_1fd5d8:
    // 0x1fd5d8: 0x8e990470  lw          $t9, 0x470($s4)
    ctx->pc = 0x1fd5d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1136)));
label_1fd5dc:
    // 0x1fd5dc: 0x26840470  addiu       $a0, $s4, 0x470
    ctx->pc = 0x1fd5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1136));
label_1fd5e0:
    // 0x1fd5e0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1fd5e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1fd5e4:
    // 0x1fd5e4: 0x320f809  jalr        $t9
label_1fd5e8:
    if (ctx->pc == 0x1FD5E8u) {
        ctx->pc = 0x1FD5E8u;
            // 0x1fd5e8: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x1FD5ECu;
        goto label_1fd5ec;
    }
    ctx->pc = 0x1FD5E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FD5ECu);
        ctx->pc = 0x1FD5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD5E4u;
            // 0x1fd5e8: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FD5ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FD5ECu; }
            if (ctx->pc != 0x1FD5ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1FD5ECu;
label_1fd5ec:
    // 0x1fd5ec: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1fd5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1fd5f0:
    // 0x1fd5f0: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
label_1fd5f4:
    if (ctx->pc == 0x1FD5F4u) {
        ctx->pc = 0x1FD5F4u;
            // 0x1fd5f4: 0x3c024100  lui         $v0, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
        ctx->pc = 0x1FD5F8u;
        goto label_1fd5f8;
    }
    ctx->pc = 0x1FD5F0u;
    {
        const bool branch_taken_0x1fd5f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FD5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD5F0u;
            // 0x1fd5f4: 0x3c024100  lui         $v0, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd5f0) {
            ctx->pc = 0x1FD610u;
            goto label_1fd610;
        }
    }
    ctx->pc = 0x1FD5F8u;
label_1fd5f8:
    // 0x1fd5f8: 0x3c0240d0  lui         $v0, 0x40D0
    ctx->pc = 0x1fd5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16592 << 16));
label_1fd5fc:
    // 0x1fd5fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1fd5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fd600:
    // 0x1fd600: 0xc094234  jal         func_2508D0
label_1fd604:
    if (ctx->pc == 0x1FD604u) {
        ctx->pc = 0x1FD604u;
            // 0x1fd604: 0x26840470  addiu       $a0, $s4, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1136));
        ctx->pc = 0x1FD608u;
        goto label_1fd608;
    }
    ctx->pc = 0x1FD600u;
    SET_GPR_U32(ctx, 31, 0x1FD608u);
    ctx->pc = 0x1FD604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD600u;
            // 0x1fd604: 0x26840470  addiu       $a0, $s4, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2508D0u;
    if (runtime->hasFunction(0x2508D0u)) {
        auto targetFn = runtime->lookupFunction(0x2508D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD608u; }
        if (ctx->pc != 0x1FD608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuAdjustPolygonScale__FP11CCharacter2f_0x2508d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD608u; }
        if (ctx->pc != 0x1FD608u) { return; }
    }
    ctx->pc = 0x1FD608u;
label_1fd608:
    // 0x1fd608: 0x10000005  b           . + 4 + (0x5 << 2)
label_1fd60c:
    if (ctx->pc == 0x1FD60Cu) {
        ctx->pc = 0x1FD60Cu;
            // 0x1fd60c: 0x8e990470  lw          $t9, 0x470($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1136)));
        ctx->pc = 0x1FD610u;
        goto label_1fd610;
    }
    ctx->pc = 0x1FD608u;
    {
        const bool branch_taken_0x1fd608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD608u;
            // 0x1fd60c: 0x8e990470  lw          $t9, 0x470($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd608) {
            ctx->pc = 0x1FD620u;
            goto label_1fd620;
        }
    }
    ctx->pc = 0x1FD610u;
label_1fd610:
    // 0x1fd610: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1fd610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fd614:
    // 0x1fd614: 0xc094234  jal         func_2508D0
label_1fd618:
    if (ctx->pc == 0x1FD618u) {
        ctx->pc = 0x1FD618u;
            // 0x1fd618: 0x26840470  addiu       $a0, $s4, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1136));
        ctx->pc = 0x1FD61Cu;
        goto label_1fd61c;
    }
    ctx->pc = 0x1FD614u;
    SET_GPR_U32(ctx, 31, 0x1FD61Cu);
    ctx->pc = 0x1FD618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD614u;
            // 0x1fd618: 0x26840470  addiu       $a0, $s4, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2508D0u;
    if (runtime->hasFunction(0x2508D0u)) {
        auto targetFn = runtime->lookupFunction(0x2508D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD61Cu; }
        if (ctx->pc != 0x1FD61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuAdjustPolygonScale__FP11CCharacter2f_0x2508d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD61Cu; }
        if (ctx->pc != 0x1FD61Cu) { return; }
    }
    ctx->pc = 0x1FD61Cu;
label_1fd61c:
    // 0x1fd61c: 0x8e990470  lw          $t9, 0x470($s4)
    ctx->pc = 0x1fd61cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1136)));
label_1fd620:
    // 0x1fd620: 0x3c02bda0  lui         $v0, 0xBDA0
    ctx->pc = 0x1fd620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48544 << 16));
label_1fd624:
    // 0x1fd624: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1fd624u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fd628:
    // 0x1fd628: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x1fd628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
label_1fd62c:
    // 0x1fd62c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1fd62cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1fd630:
    // 0x1fd630: 0x26840470  addiu       $a0, $s4, 0x470
    ctx->pc = 0x1fd630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1136));
label_1fd634:
    // 0x1fd634: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1fd634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1fd638:
    // 0x1fd638: 0x320f809  jalr        $t9
label_1fd63c:
    if (ctx->pc == 0x1FD63Cu) {
        ctx->pc = 0x1FD63Cu;
            // 0x1fd63c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1FD640u;
        goto label_1fd640;
    }
    ctx->pc = 0x1FD638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FD640u);
        ctx->pc = 0x1FD63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD638u;
            // 0x1fd63c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FD640u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FD640u; }
            if (ctx->pc != 0x1FD640u) { return; }
        }
        }
    }
    ctx->pc = 0x1FD640u;
label_1fd640:
    // 0x1fd640: 0x8e990470  lw          $t9, 0x470($s4)
    ctx->pc = 0x1fd640u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1136)));
label_1fd644:
    // 0x1fd644: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fd644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fd648:
    // 0x1fd648: 0x26840470  addiu       $a0, $s4, 0x470
    ctx->pc = 0x1fd648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1136));
label_1fd64c:
    // 0x1fd64c: 0x24a58fa8  addiu       $a1, $a1, -0x7058
    ctx->pc = 0x1fd64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938536));
label_1fd650:
    // 0x1fd650: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fd650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd654:
    // 0x1fd654: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x1fd654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_1fd658:
    // 0x1fd658: 0x320f809  jalr        $t9
label_1fd65c:
    if (ctx->pc == 0x1FD65Cu) {
        ctx->pc = 0x1FD65Cu;
            // 0x1fd65c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FD660u;
        goto label_1fd660;
    }
    ctx->pc = 0x1FD658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FD660u);
        ctx->pc = 0x1FD65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD658u;
            // 0x1fd65c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FD660u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FD660u; }
            if (ctx->pc != 0x1FD660u) { return; }
        }
        }
    }
    ctx->pc = 0x1FD660u;
label_1fd660:
    // 0x1fd660: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x1fd660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_1fd664:
    // 0x1fd664: 0x26850470  addiu       $a1, $s4, 0x470
    ctx->pc = 0x1fd664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1136));
label_1fd668:
    // 0x1fd668: 0x8e8414f0  lw          $a0, 0x14F0($s4)
    ctx->pc = 0x1fd668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5360)));
label_1fd66c:
    // 0x1fd66c: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x1fd66cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1fd670:
    // 0x1fd670: 0xc0896c8  jal         func_225B20
label_1fd674:
    if (ctx->pc == 0x1FD674u) {
        ctx->pc = 0x1FD674u;
            // 0x1fd674: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1FD678u;
        goto label_1fd678;
    }
    ctx->pc = 0x1FD670u;
    SET_GPR_U32(ctx, 31, 0x1FD678u);
    ctx->pc = 0x1FD674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD670u;
            // 0x1fd674: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B20u;
    if (runtime->hasFunction(0x225B20u)) {
        auto targetFn = runtime->lookupFunction(0x225B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD678u; }
        if (ctx->pc != 0x1FD678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActionCharaPtr__16CMenuPosDataFormFP12CActionCharaii_0x225b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD678u; }
        if (ctx->pc != 0x1FD678u) { return; }
    }
    ctx->pc = 0x1FD678u;
label_1fd678:
    // 0x1fd678: 0x8e8314f0  lw          $v1, 0x14F0($s4)
    ctx->pc = 0x1fd678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5360)));
label_1fd67c:
    // 0x1fd67c: 0x2405fff2  addiu       $a1, $zero, -0xE
    ctx->pc = 0x1fd67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967282));
label_1fd680:
    // 0x1fd680: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1fd680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_1fd684:
    // 0x1fd684: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1fd684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fd688:
    // 0x1fd688: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x1fd688u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
label_1fd68c:
    // 0x1fd68c: 0xae820460  sw          $v0, 0x460($s4)
    ctx->pc = 0x1fd68cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1120), GPR_U32(ctx, 2));
label_1fd690:
    // 0x1fd690: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x1fd690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_1fd694:
    // 0x1fd694: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x1fd694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1fd698:
    // 0x1fd698: 0xc04bc14  jal         func_12F050
label_1fd69c:
    if (ctx->pc == 0x1FD69Cu) {
        ctx->pc = 0x1FD69Cu;
            // 0x1fd69c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->pc = 0x1FD6A0u;
        goto label_1fd6a0;
    }
    ctx->pc = 0x1FD698u;
    SET_GPR_U32(ctx, 31, 0x1FD6A0u);
    ctx->pc = 0x1FD69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD698u;
            // 0x1fd69c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F050u;
    if (runtime->hasFunction(0x12F050u)) {
        auto targetFn = runtime->lookupFunction(0x12F050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD6A0u; }
        if (ctx->pc != 0x1FD6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TexAnimeAllOff__17mgCTextureManagerFi_0x12f050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD6A0u; }
        if (ctx->pc != 0x1FD6A0u) { return; }
    }
    ctx->pc = 0x1FD6A0u;
label_1fd6a0:
    // 0x1fd6a0: 0x8e990470  lw          $t9, 0x470($s4)
    ctx->pc = 0x1fd6a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1136)));
label_1fd6a4:
    // 0x1fd6a4: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x1fd6a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_1fd6a8:
    // 0x1fd6a8: 0x320f809  jalr        $t9
label_1fd6ac:
    if (ctx->pc == 0x1FD6ACu) {
        ctx->pc = 0x1FD6ACu;
            // 0x1fd6ac: 0x26840470  addiu       $a0, $s4, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1136));
        ctx->pc = 0x1FD6B0u;
        goto label_1fd6b0;
    }
    ctx->pc = 0x1FD6A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FD6B0u);
        ctx->pc = 0x1FD6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD6A8u;
            // 0x1fd6ac: 0x26840470  addiu       $a0, $s4, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1136));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FD6B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FD6B0u; }
            if (ctx->pc != 0x1FD6B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1FD6B0u;
label_1fd6b0:
    // 0x1fd6b0: 0x8e8314f0  lw          $v1, 0x14F0($s4)
    ctx->pc = 0x1fd6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5360)));
label_1fd6b4:
    // 0x1fd6b4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1fd6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1fd6b8:
    // 0x1fd6b8: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x1fd6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1fd6bc:
    // 0x1fd6bc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1fd6c0:
    if (ctx->pc == 0x1FD6C0u) {
        ctx->pc = 0x1FD6C0u;
            // 0x1fd6c0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x1FD6C4u;
        goto label_1fd6c4;
    }
    ctx->pc = 0x1FD6BCu;
    {
        const bool branch_taken_0x1fd6bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FD6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD6BCu;
            // 0x1fd6c0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd6bc) {
            ctx->pc = 0x1FD6D0u;
            goto label_1fd6d0;
        }
    }
    ctx->pc = 0x1FD6C4u;
label_1fd6c4:
    // 0x1fd6c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fd6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fd6c8:
    // 0x1fd6c8: 0xc08e7cc  jal         func_239F30
label_1fd6cc:
    if (ctx->pc == 0x1FD6CCu) {
        ctx->pc = 0x1FD6CCu;
            // 0x1fd6cc: 0x24a58fb0  addiu       $a1, $a1, -0x7050 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938544));
        ctx->pc = 0x1FD6D0u;
        goto label_1fd6d0;
    }
    ctx->pc = 0x1FD6C8u;
    SET_GPR_U32(ctx, 31, 0x1FD6D0u);
    ctx->pc = 0x1FD6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD6C8u;
            // 0x1fd6cc: 0x24a58fb0  addiu       $a1, $a1, -0x7050 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD6D0u; }
        if (ctx->pc != 0x1FD6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD6D0u; }
        if (ctx->pc != 0x1FD6D0u) { return; }
    }
    ctx->pc = 0x1FD6D0u;
label_1fd6d0:
    // 0x1fd6d0: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1fd6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_1fd6d4:
    // 0x1fd6d4: 0xc08acc8  jal         func_22B320
label_1fd6d8:
    if (ctx->pc == 0x1FD6D8u) {
        ctx->pc = 0x1FD6DCu;
        goto label_1fd6dc;
    }
    ctx->pc = 0x1FD6D4u;
    SET_GPR_U32(ctx, 31, 0x1FD6DCu);
    ctx->pc = 0x22B320u;
    if (runtime->hasFunction(0x22B320u)) {
        auto targetFn = runtime->lookupFunction(0x22B320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD6DCu; }
        if (ctx->pc != 0x1FD6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormStep__14CPosDataManageFv_0x22b320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD6DCu; }
        if (ctx->pc != 0x1FD6DCu) { return; }
    }
    ctx->pc = 0x1FD6DCu;
label_1fd6dc:
    // 0x1fd6dc: 0x8e840458  lw          $a0, 0x458($s4)
    ctx->pc = 0x1fd6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1112)));
label_1fd6e0:
    // 0x1fd6e0: 0x8e85045c  lw          $a1, 0x45C($s4)
    ctx->pc = 0x1fd6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1116)));
label_1fd6e4:
    // 0x1fd6e4: 0xc07dd00  jal         func_1F7400
label_1fd6e8:
    if (ctx->pc == 0x1FD6E8u) {
        ctx->pc = 0x1FD6E8u;
            // 0x1fd6e8: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FD6ECu;
        goto label_1fd6ec;
    }
    ctx->pc = 0x1FD6E4u;
    SET_GPR_U32(ctx, 31, 0x1FD6ECu);
    ctx->pc = 0x1FD6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD6E4u;
            // 0x1fd6e8: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7400u;
    if (runtime->hasFunction(0x1F7400u)) {
        auto targetFn = runtime->lookupFunction(0x1F7400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD6ECu; }
        if (ctx->pc != 0x1FD6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuPlacedHouseMessMake__FP14CEditPartsInfoP10CEditHousei_0x1f7400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD6ECu; }
        if (ctx->pc != 0x1FD6ECu) { return; }
    }
    ctx->pc = 0x1FD6ECu;
label_1fd6ec:
    // 0x1fd6ec: 0x8e82045c  lw          $v0, 0x45C($s4)
    ctx->pc = 0x1fd6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1116)));
label_1fd6f0:
    // 0x1fd6f0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1fd6f4:
    if (ctx->pc == 0x1FD6F4u) {
        ctx->pc = 0x1FD6F8u;
        goto label_1fd6f8;
    }
    ctx->pc = 0x1FD6F0u;
    {
        const bool branch_taken_0x1fd6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd6f0) {
            ctx->pc = 0x1FD744u;
            goto label_1fd744;
        }
    }
    ctx->pc = 0x1FD6F8u;
label_1fd6f8:
    // 0x1fd6f8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1fd6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1fd6fc:
    // 0x1fd6fc: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
label_1fd700:
    if (ctx->pc == 0x1FD700u) {
        ctx->pc = 0x1FD704u;
        goto label_1fd704;
    }
    ctx->pc = 0x1FD6FCu;
    {
        const bool branch_taken_0x1fd6fc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1fd6fc) {
            ctx->pc = 0x1FD728u;
            goto label_1fd728;
        }
    }
    ctx->pc = 0x1FD704u;
label_1fd704:
    // 0x1fd704: 0x8e83044c  lw          $v1, 0x44C($s4)
    ctx->pc = 0x1fd704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1100)));
label_1fd708:
    // 0x1fd708: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fd708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fd70c:
    // 0x1fd70c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1fd70cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1fd710:
    // 0x1fd710: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fd710u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fd714:
    // 0x1fd714: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1fd714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1fd718:
    // 0x1fd718: 0xc0877e0  jal         func_21DF80
label_1fd71c:
    if (ctx->pc == 0x1FD71Cu) {
        ctx->pc = 0x1FD71Cu;
            // 0x1fd71c: 0x24450960  addiu       $a1, $v0, 0x960 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
        ctx->pc = 0x1FD720u;
        goto label_1fd720;
    }
    ctx->pc = 0x1FD718u;
    SET_GPR_U32(ctx, 31, 0x1FD720u);
    ctx->pc = 0x1FD71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD718u;
            // 0x1fd71c: 0x24450960  addiu       $a1, $v0, 0x960 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD720u; }
        if (ctx->pc != 0x1FD720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD720u; }
        if (ctx->pc != 0x1FD720u) { return; }
    }
    ctx->pc = 0x1FD720u;
label_1fd720:
    // 0x1fd720: 0x10000008  b           . + 4 + (0x8 << 2)
label_1fd724:
    if (ctx->pc == 0x1FD724u) {
        ctx->pc = 0x1FD728u;
        goto label_1fd728;
    }
    ctx->pc = 0x1FD720u;
    {
        const bool branch_taken_0x1fd720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd720) {
            ctx->pc = 0x1FD744u;
            goto label_1fd744;
        }
    }
    ctx->pc = 0x1FD728u;
label_1fd728:
    // 0x1fd728: 0x8e83044c  lw          $v1, 0x44C($s4)
    ctx->pc = 0x1fd728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1100)));
label_1fd72c:
    // 0x1fd72c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fd72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fd730:
    // 0x1fd730: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1fd730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1fd734:
    // 0x1fd734: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fd734u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fd738:
    // 0x1fd738: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1fd738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1fd73c:
    // 0x1fd73c: 0xc0877e0  jal         func_21DF80
label_1fd740:
    if (ctx->pc == 0x1FD740u) {
        ctx->pc = 0x1FD740u;
            // 0x1fd740: 0x24450962  addiu       $a1, $v0, 0x962 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2402));
        ctx->pc = 0x1FD744u;
        goto label_1fd744;
    }
    ctx->pc = 0x1FD73Cu;
    SET_GPR_U32(ctx, 31, 0x1FD744u);
    ctx->pc = 0x1FD740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD73Cu;
            // 0x1fd740: 0x24450962  addiu       $a1, $v0, 0x962 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2402));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD744u; }
        if (ctx->pc != 0x1FD744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD744u; }
        if (ctx->pc != 0x1FD744u) { return; }
    }
    ctx->pc = 0x1FD744u;
label_1fd744:
    // 0x1fd744: 0xc07dd8c  jal         func_1F7630
label_1fd748:
    if (ctx->pc == 0x1FD748u) {
        ctx->pc = 0x1FD74Cu;
        goto label_1fd74c;
    }
    ctx->pc = 0x1FD744u;
    SET_GPR_U32(ctx, 31, 0x1FD74Cu);
    ctx->pc = 0x1F7630u;
    if (runtime->hasFunction(0x1F7630u)) {
        auto targetFn = runtime->lookupFunction(0x1F7630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD74Cu; }
        if (ctx->pc != 0x1FD74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuPlacedHousePosLinkMes__Fv_0x1f7630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD74Cu; }
        if (ctx->pc != 0x1FD74Cu) { return; }
    }
    ctx->pc = 0x1FD74Cu;
label_1fd74c:
    // 0x1fd74c: 0x12c0001a  beqz        $s6, . + 4 + (0x1A << 2)
label_1fd750:
    if (ctx->pc == 0x1FD750u) {
        ctx->pc = 0x1FD754u;
        goto label_1fd754;
    }
    ctx->pc = 0x1FD74Cu;
    {
        const bool branch_taken_0x1fd74c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd74c) {
            ctx->pc = 0x1FD7B8u;
            goto label_1fd7b8;
        }
    }
    ctx->pc = 0x1FD754u;
label_1fd754:
    // 0x1fd754: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1fd754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1fd758:
    // 0x1fd758: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_1fd75c:
    if (ctx->pc == 0x1FD75Cu) {
        ctx->pc = 0x1FD760u;
        goto label_1fd760;
    }
    ctx->pc = 0x1FD758u;
    {
        const bool branch_taken_0x1fd758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd758) {
            ctx->pc = 0x1FD7B8u;
            goto label_1fd7b8;
        }
    }
    ctx->pc = 0x1FD760u;
label_1fd760:
    // 0x1fd760: 0xdf8290b8  ld          $v0, -0x6F48($gp)
    ctx->pc = 0x1fd760u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294938808)));
label_1fd764:
    // 0x1fd764: 0x27a301d8  addiu       $v1, $sp, 0x1D8
    ctx->pc = 0x1fd764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_1fd768:
    // 0x1fd768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fd768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fd76c:
    // 0x1fd76c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fd76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd770:
    // 0x1fd770: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fd770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd774:
    // 0x1fd774: 0xc0aacc4  jal         func_2AB310
label_1fd778:
    if (ctx->pc == 0x1FD778u) {
        ctx->pc = 0x1FD778u;
            // 0x1fd778: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->pc = 0x1FD77Cu;
        goto label_1fd77c;
    }
    ctx->pc = 0x1FD774u;
    SET_GPR_U32(ctx, 31, 0x1FD77Cu);
    ctx->pc = 0x1FD778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD774u;
            // 0x1fd778: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB310u;
    if (runtime->hasFunction(0x2AB310u)) {
        auto targetFn = runtime->lookupFunction(0x2AB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD77Cu; }
        if (ctx->pc != 0x1FD77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaMessage__Fiii_0x2ab310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD77Cu; }
        if (ctx->pc != 0x1FD77Cu) { return; }
    }
    ctx->pc = 0x1FD77Cu;
label_1fd77c:
    // 0x1fd77c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fd77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fd780:
    // 0x1fd780: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x1fd780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
label_1fd784:
    // 0x1fd784: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1fd784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fd788:
    // 0x1fd788: 0xc0aacc4  jal         func_2AB310
label_1fd78c:
    if (ctx->pc == 0x1FD78Cu) {
        ctx->pc = 0x1FD78Cu;
            // 0x1fd78c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FD790u;
        goto label_1fd790;
    }
    ctx->pc = 0x1FD788u;
    SET_GPR_U32(ctx, 31, 0x1FD790u);
    ctx->pc = 0x1FD78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD788u;
            // 0x1fd78c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB310u;
    if (runtime->hasFunction(0x2AB310u)) {
        auto targetFn = runtime->lookupFunction(0x2AB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD790u; }
        if (ctx->pc != 0x1FD790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaMessage__Fiii_0x2ab310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD790u; }
        if (ctx->pc != 0x1FD790u) { return; }
    }
    ctx->pc = 0x1FD790u;
label_1fd790:
    // 0x1fd790: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1fd790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1fd794:
    // 0x1fd794: 0x27a501d8  addiu       $a1, $sp, 0x1D8
    ctx->pc = 0x1fd794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_1fd798:
    // 0x1fd798: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x1fd798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
label_1fd79c:
    // 0x1fd79c: 0xc0876ec  jal         func_21DBB0
label_1fd7a0:
    if (ctx->pc == 0x1FD7A0u) {
        ctx->pc = 0x1FD7A0u;
            // 0x1fd7a0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1FD7A4u;
        goto label_1fd7a4;
    }
    ctx->pc = 0x1FD79Cu;
    SET_GPR_U32(ctx, 31, 0x1FD7A4u);
    ctx->pc = 0x1FD7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD79Cu;
            // 0x1fd7a0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DBB0u;
    if (runtime->hasFunction(0x21DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x21DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD7A4u; }
        if (ctx->pc != 0x1FD7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPii_0x21dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD7A4u; }
        if (ctx->pc != 0x1FD7A4u) { return; }
    }
    ctx->pc = 0x1FD7A4u;
label_1fd7a4:
    // 0x1fd7a4: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1fd7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1fd7a8:
    // 0x1fd7a8: 0xc0877e0  jal         func_21DF80
label_1fd7ac:
    if (ctx->pc == 0x1FD7ACu) {
        ctx->pc = 0x1FD7ACu;
            // 0x1fd7ac: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x1FD7B0u;
        goto label_1fd7b0;
    }
    ctx->pc = 0x1FD7A8u;
    SET_GPR_U32(ctx, 31, 0x1FD7B0u);
    ctx->pc = 0x1FD7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD7A8u;
            // 0x1fd7ac: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD7B0u; }
        if (ctx->pc != 0x1FD7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD7B0u; }
        if (ctx->pc != 0x1FD7B0u) { return; }
    }
    ctx->pc = 0x1FD7B0u;
label_1fd7b0:
    // 0x1fd7b0: 0xc087898  jal         func_21E260
label_1fd7b4:
    if (ctx->pc == 0x1FD7B4u) {
        ctx->pc = 0x1FD7B4u;
            // 0x1fd7b4: 0x8fa400e0  lw          $a0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->pc = 0x1FD7B8u;
        goto label_1fd7b8;
    }
    ctx->pc = 0x1FD7B0u;
    SET_GPR_U32(ctx, 31, 0x1FD7B8u);
    ctx->pc = 0x1FD7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD7B0u;
            // 0x1fd7b4: 0x8fa400e0  lw          $a0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD7B8u; }
        if (ctx->pc != 0x1FD7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD7B8u; }
        if (ctx->pc != 0x1FD7B8u) { return; }
    }
    ctx->pc = 0x1FD7B8u;
label_1fd7b8:
    // 0x1fd7b8: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1fd7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_1fd7bc:
    // 0x1fd7bc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fd7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fd7c0:
    // 0x1fd7c0: 0xc08ab90  jal         func_22AE40
label_1fd7c4:
    if (ctx->pc == 0x1FD7C4u) {
        ctx->pc = 0x1FD7C4u;
            // 0x1fd7c4: 0x24a58b68  addiu       $a1, $a1, -0x7498 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937448));
        ctx->pc = 0x1FD7C8u;
        goto label_1fd7c8;
    }
    ctx->pc = 0x1FD7C0u;
    SET_GPR_U32(ctx, 31, 0x1FD7C8u);
    ctx->pc = 0x1FD7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD7C0u;
            // 0x1fd7c4: 0x24a58b68  addiu       $a1, $a1, -0x7498 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD7C8u; }
        if (ctx->pc != 0x1FD7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD7C8u; }
        if (ctx->pc != 0x1FD7C8u) { return; }
    }
    ctx->pc = 0x1FD7C8u;
label_1fd7c8:
    // 0x1fd7c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fd7c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fd7cc:
    // 0x1fd7cc: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_1fd7d0:
    if (ctx->pc == 0x1FD7D0u) {
        ctx->pc = 0x1FD7D4u;
        goto label_1fd7d4;
    }
    ctx->pc = 0x1FD7CCu;
    {
        const bool branch_taken_0x1fd7cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd7cc) {
            ctx->pc = 0x1FD828u;
            goto label_1fd828;
        }
    }
    ctx->pc = 0x1FD7D4u;
label_1fd7d4:
    // 0x1fd7d4: 0xc064220  jal         func_190880
label_1fd7d8:
    if (ctx->pc == 0x1FD7D8u) {
        ctx->pc = 0x1FD7DCu;
        goto label_1fd7dc;
    }
    ctx->pc = 0x1FD7D4u;
    SET_GPR_U32(ctx, 31, 0x1FD7DCu);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD7DCu; }
        if (ctx->pc != 0x1FD7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD7DCu; }
        if (ctx->pc != 0x1FD7DCu) { return; }
    }
    ctx->pc = 0x1FD7DCu;
label_1fd7dc:
    // 0x1fd7dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fd7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fd7e0:
    // 0x1fd7e0: 0xc0bd920  jal         func_2F6480
label_1fd7e4:
    if (ctx->pc == 0x1FD7E4u) {
        ctx->pc = 0x1FD7E4u;
            // 0x1fd7e4: 0x24050208  addiu       $a1, $zero, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
        ctx->pc = 0x1FD7E8u;
        goto label_1fd7e8;
    }
    ctx->pc = 0x1FD7E0u;
    SET_GPR_U32(ctx, 31, 0x1FD7E8u);
    ctx->pc = 0x1FD7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD7E0u;
            // 0x1fd7e4: 0x24050208  addiu       $a1, $zero, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD7E8u; }
        if (ctx->pc != 0x1FD7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD7E8u; }
        if (ctx->pc != 0x1FD7E8u) { return; }
    }
    ctx->pc = 0x1FD7E8u;
label_1fd7e8:
    // 0x1fd7e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1fd7ec:
    if (ctx->pc == 0x1FD7ECu) {
        ctx->pc = 0x1FD7ECu;
            // 0x1fd7ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FD7F0u;
        goto label_1fd7f0;
    }
    ctx->pc = 0x1FD7E8u;
    {
        const bool branch_taken_0x1fd7e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD7E8u;
            // 0x1fd7ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd7e8) {
            ctx->pc = 0x1FD808u;
            goto label_1fd808;
        }
    }
    ctx->pc = 0x1FD7F0u;
label_1fd7f0:
    // 0x1fd7f0: 0x8f8394a4  lw          $v1, -0x6B5C($gp)
    ctx->pc = 0x1fd7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_1fd7f4:
    // 0x1fd7f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1fd7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fd7f8:
    // 0x1fd7f8: 0x8c632e60  lw          $v1, 0x2E60($v1)
    ctx->pc = 0x1fd7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11872)));
label_1fd7fc:
    // 0x1fd7fc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1fd800:
    if (ctx->pc == 0x1FD800u) {
        ctx->pc = 0x1FD804u;
        goto label_1fd804;
    }
    ctx->pc = 0x1FD7FCu;
    {
        const bool branch_taken_0x1fd7fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fd7fc) {
            ctx->pc = 0x1FD808u;
            goto label_1fd808;
        }
    }
    ctx->pc = 0x1FD804u;
label_1fd804:
    // 0x1fd804: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x1fd804u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
label_1fd808:
    // 0x1fd808: 0x8e850418  lw          $a1, 0x418($s4)
    ctx->pc = 0x1fd808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1048)));
label_1fd80c:
    // 0x1fd80c: 0xc0aa608  jal         func_2A9820
label_1fd810:
    if (ctx->pc == 0x1FD810u) {
        ctx->pc = 0x1FD810u;
            // 0x1fd810: 0x8f848ff8  lw          $a0, -0x7008($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938616)));
        ctx->pc = 0x1FD814u;
        goto label_1fd814;
    }
    ctx->pc = 0x1FD80Cu;
    SET_GPR_U32(ctx, 31, 0x1FD814u);
    ctx->pc = 0x1FD810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD80Cu;
            // 0x1fd810: 0x8f848ff8  lw          $a0, -0x7008($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938616)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9820u;
    if (runtime->hasFunction(0x2A9820u)) {
        auto targetFn = runtime->lookupFunction(0x2A9820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD814u; }
        if (ctx->pc != 0x1FD814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CultureAnalyzeParts__8CEditMapFii_0x2a9820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD814u; }
        if (ctx->pc != 0x1FD814u) { return; }
    }
    ctx->pc = 0x1FD814u;
label_1fd814:
    // 0x1fd814: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fd814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fd818:
    // 0x1fd818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fd818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fd81c:
    // 0x1fd81c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1fd81cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fd820:
    // 0x1fd820: 0xc089728  jal         func_225CA0
label_1fd824:
    if (ctx->pc == 0x1FD824u) {
        ctx->pc = 0x1FD824u;
            // 0x1fd824: 0x24a58b38  addiu       $a1, $a1, -0x74C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937400));
        ctx->pc = 0x1FD828u;
        goto label_1fd828;
    }
    ctx->pc = 0x1FD820u;
    SET_GPR_U32(ctx, 31, 0x1FD828u);
    ctx->pc = 0x1FD824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD820u;
            // 0x1fd824: 0x24a58b38  addiu       $a1, $a1, -0x74C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD828u; }
        if (ctx->pc != 0x1FD828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD828u; }
        if (ctx->pc != 0x1FD828u) { return; }
    }
    ctx->pc = 0x1FD828u;
label_1fd828:
    // 0x1fd828: 0x8e8414b4  lw          $a0, 0x14B4($s4)
    ctx->pc = 0x1fd828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5300)));
label_1fd82c:
    // 0x1fd82c: 0x108000db  beqz        $a0, . + 4 + (0xDB << 2)
label_1fd830:
    if (ctx->pc == 0x1FD830u) {
        ctx->pc = 0x1FD834u;
        goto label_1fd834;
    }
    ctx->pc = 0x1FD82Cu;
    {
        const bool branch_taken_0x1fd82c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd82c) {
            ctx->pc = 0x1FDB9Cu;
            goto label_1fdb9c;
        }
    }
    ctx->pc = 0x1FD834u;
label_1fd834:
    // 0x1fd834: 0x13c000d9  beqz        $fp, . + 4 + (0xD9 << 2)
label_1fd838:
    if (ctx->pc == 0x1FD838u) {
        ctx->pc = 0x1FD83Cu;
        goto label_1fd83c;
    }
    ctx->pc = 0x1FD834u;
    {
        const bool branch_taken_0x1fd834 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd834) {
            ctx->pc = 0x1FDB9Cu;
            goto label_1fdb9c;
        }
    }
    ctx->pc = 0x1FD83Cu;
label_1fd83c:
    // 0x1fd83c: 0x8e8214f4  lw          $v0, 0x14F4($s4)
    ctx->pc = 0x1fd83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5364)));
label_1fd840:
    // 0x1fd840: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1fd844:
    if (ctx->pc == 0x1FD844u) {
        ctx->pc = 0x1FD844u;
            // 0x1fd844: 0x27b001e4  addiu       $s0, $sp, 0x1E4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
        ctx->pc = 0x1FD848u;
        goto label_1fd848;
    }
    ctx->pc = 0x1FD840u;
    {
        const bool branch_taken_0x1fd840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD840u;
            // 0x1fd844: 0x27b001e4  addiu       $s0, $sp, 0x1E4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd840) {
            ctx->pc = 0x1FD878u;
            goto label_1fd878;
        }
    }
    ctx->pc = 0x1FD848u;
label_1fd848:
    // 0x1fd848: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fd848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fd84c:
    // 0x1fd84c: 0x24a58fc0  addiu       $a1, $a1, -0x7040
    ctx->pc = 0x1fd84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938560));
label_1fd850:
    // 0x1fd850: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x1fd850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_1fd854:
    // 0x1fd854: 0xc08974c  jal         func_225D30
label_1fd858:
    if (ctx->pc == 0x1FD858u) {
        ctx->pc = 0x1FD858u;
            // 0x1fd858: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FD85Cu;
        goto label_1fd85c;
    }
    ctx->pc = 0x1FD854u;
    SET_GPR_U32(ctx, 31, 0x1FD85Cu);
    ctx->pc = 0x1FD858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD854u;
            // 0x1fd858: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD85Cu; }
        if (ctx->pc != 0x1FD85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD85Cu; }
        if (ctx->pc != 0x1FD85Cu) { return; }
    }
    ctx->pc = 0x1FD85Cu;
label_1fd85c:
    // 0x1fd85c: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x1fd85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd860:
    // 0x1fd860: 0x8e8214f4  lw          $v0, 0x14F4($s4)
    ctx->pc = 0x1fd860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5364)));
label_1fd864:
    // 0x1fd864: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fd864u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1fd868:
    // 0x1fd868: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1fd868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1fd86c:
    // 0x1fd86c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1fd86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd870:
    // 0x1fd870: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fd870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1fd874:
    // 0x1fd874: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x1fd874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_1fd878:
    // 0x1fd878: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
label_1fd87c:
    if (ctx->pc == 0x1FD87Cu) {
        ctx->pc = 0x1FD880u;
        goto label_1fd880;
    }
    ctx->pc = 0x1FD878u;
    {
        const bool branch_taken_0x1fd878 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd878) {
            ctx->pc = 0x1FD8B4u;
            goto label_1fd8b4;
        }
    }
    ctx->pc = 0x1FD880u;
label_1fd880:
    // 0x1fd880: 0x8e8414b4  lw          $a0, 0x14B4($s4)
    ctx->pc = 0x1fd880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5300)));
label_1fd884:
    // 0x1fd884: 0x27b001e4  addiu       $s0, $sp, 0x1E4
    ctx->pc = 0x1fd884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
label_1fd888:
    // 0x1fd888: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fd888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fd88c:
    // 0x1fd88c: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x1fd88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_1fd890:
    // 0x1fd890: 0x24a58fc8  addiu       $a1, $a1, -0x7038
    ctx->pc = 0x1fd890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938568));
label_1fd894:
    // 0x1fd894: 0xc08974c  jal         func_225D30
label_1fd898:
    if (ctx->pc == 0x1FD898u) {
        ctx->pc = 0x1FD898u;
            // 0x1fd898: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FD89Cu;
        goto label_1fd89c;
    }
    ctx->pc = 0x1FD894u;
    SET_GPR_U32(ctx, 31, 0x1FD89Cu);
    ctx->pc = 0x1FD898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD894u;
            // 0x1fd898: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD89Cu; }
        if (ctx->pc != 0x1FD89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD89Cu; }
        if (ctx->pc != 0x1FD89Cu) { return; }
    }
    ctx->pc = 0x1FD89Cu;
label_1fd89c:
    // 0x1fd89c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1fd89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fd8a0:
    // 0x1fd8a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fd8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd8a4:
    // 0x1fd8a4: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x1fd8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_1fd8a8:
    // 0x1fd8a8: 0xaea31b94  sw          $v1, 0x1B94($s5)
    ctx->pc = 0x1fd8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 7060), GPR_U32(ctx, 3));
label_1fd8ac:
    // 0x1fd8ac: 0xaea41b98  sw          $a0, 0x1B98($s5)
    ctx->pc = 0x1fd8acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 7064), GPR_U32(ctx, 4));
label_1fd8b0:
    // 0x1fd8b0: 0xaea21c34  sw          $v0, 0x1C34($s5)
    ctx->pc = 0x1fd8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 7220), GPR_U32(ctx, 2));
label_1fd8b4:
    // 0x1fd8b4: 0xdf8290c0  ld          $v0, -0x6F40($gp)
    ctx->pc = 0x1fd8b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294938816)));
label_1fd8b8:
    // 0x1fd8b8: 0x27a301e8  addiu       $v1, $sp, 0x1E8
    ctx->pc = 0x1fd8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
label_1fd8bc:
    // 0x1fd8bc: 0x27b301f4  addiu       $s3, $sp, 0x1F4
    ctx->pc = 0x1fd8bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_1fd8c0:
    // 0x1fd8c0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fd8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fd8c4:
    // 0x1fd8c4: 0x24a58fd0  addiu       $a1, $a1, -0x7030
    ctx->pc = 0x1fd8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938576));
label_1fd8c8:
    // 0x1fd8c8: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x1fd8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_1fd8cc:
    // 0x1fd8cc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1fd8ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fd8d0:
    // 0x1fd8d0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1fd8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_1fd8d4:
    // 0x1fd8d4: 0x8e8214fc  lw          $v0, 0x14FC($s4)
    ctx->pc = 0x1fd8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5372)));
label_1fd8d8:
    // 0x1fd8d8: 0xafa201e8  sw          $v0, 0x1E8($sp)
    ctx->pc = 0x1fd8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
label_1fd8dc:
    // 0x1fd8dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fd8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1fd8e0:
    // 0x1fd8e0: 0xafa201ec  sw          $v0, 0x1EC($sp)
    ctx->pc = 0x1fd8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
label_1fd8e4:
    // 0x1fd8e4: 0x8e8214a8  lw          $v0, 0x14A8($s4)
    ctx->pc = 0x1fd8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5288)));
label_1fd8e8:
    // 0x1fd8e8: 0x8e8414b4  lw          $a0, 0x14B4($s4)
    ctx->pc = 0x1fd8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5300)));
label_1fd8ec:
    // 0x1fd8ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fd8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fd8f0:
    // 0x1fd8f0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1fd8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1fd8f4:
    // 0x1fd8f4: 0x8c4201e8  lw          $v0, 0x1E8($v0)
    ctx->pc = 0x1fd8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
label_1fd8f8:
    // 0x1fd8f8: 0xc08976c  jal         func_225DB0
label_1fd8fc:
    if (ctx->pc == 0x1FD8FCu) {
        ctx->pc = 0x1FD8FCu;
            // 0x1fd8fc: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->pc = 0x1FD900u;
        goto label_1fd900;
    }
    ctx->pc = 0x1FD8F8u;
    SET_GPR_U32(ctx, 31, 0x1FD900u);
    ctx->pc = 0x1FD8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD8F8u;
            // 0x1fd8fc: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225DB0u;
    if (runtime->hasFunction(0x225DB0u)) {
        auto targetFn = runtime->lookupFunction(0x225DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD900u; }
        if (ctx->pc != 0x1FD900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRfRf_0x225db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD900u; }
        if (ctx->pc != 0x1FD900u) { return; }
    }
    ctx->pc = 0x1FD900u;
label_1fd900:
    // 0x1fd900: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1fd900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1fd904:
    // 0x1fd904: 0x8fd700c4  lw          $s7, 0xC4($fp)
    ctx->pc = 0x1fd904u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 196)));
label_1fd908:
    // 0x1fd908: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1fd908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1fd90c:
    // 0x1fd90c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1fd90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd910:
    // 0x1fd910: 0x8e8214fc  lw          $v0, 0x14FC($s4)
    ctx->pc = 0x1fd910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5372)));
label_1fd914:
    // 0x1fd914: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1fd914u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1fd918:
    // 0x1fd918: 0x571018  mult        $v0, $v0, $s7
    ctx->pc = 0x1fd918u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1fd91c:
    // 0x1fd91c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fd91cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fd920:
    // 0x1fd920: 0x0  nop
    ctx->pc = 0x1fd920u;
    // NOP
label_1fd924:
    // 0x1fd924: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fd924u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fd928:
    // 0x1fd928: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1fd928u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1fd92c:
    // 0x1fd92c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1fd92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1fd930:
    // 0x1fd930: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x1fd930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd934:
    // 0x1fd934: 0xe68014ac  swc1        $f0, 0x14AC($s4)
    ctx->pc = 0x1fd934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 5292), bits); }
label_1fd938:
    // 0x1fd938: 0x928514a4  lbu         $a1, 0x14A4($s4)
    ctx->pc = 0x1fd938u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5284)));
label_1fd93c:
    // 0x1fd93c: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x1fd93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1fd940:
    // 0x1fd940: 0xc094514  jal         func_251450
label_1fd944:
    if (ctx->pc == 0x1FD944u) {
        ctx->pc = 0x1FD944u;
            // 0x1fd944: 0x268414b0  addiu       $a0, $s4, 0x14B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 5296));
        ctx->pc = 0x1FD948u;
        goto label_1fd948;
    }
    ctx->pc = 0x1FD940u;
    SET_GPR_U32(ctx, 31, 0x1FD948u);
    ctx->pc = 0x1FD944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD940u;
            // 0x1fd944: 0x268414b0  addiu       $a0, $s4, 0x14B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 5296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD948u; }
        if (ctx->pc != 0x1FD948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD948u; }
        if (ctx->pc != 0x1FD948u) { return; }
    }
    ctx->pc = 0x1FD948u;
label_1fd948:
    // 0x1fd948: 0xa28014a4  sb          $zero, 0x14A4($s4)
    ctx->pc = 0x1fd948u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5284), (uint8_t)GPR_U32(ctx, 0));
label_1fd94c:
    // 0x1fd94c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1fd94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1fd950:
    // 0x1fd950: 0xc68114b0  lwc1        $f1, 0x14B0($s4)
    ctx->pc = 0x1fd950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 5296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fd954:
    // 0x1fd954: 0x8fb50100  lw          $s5, 0x100($sp)
    ctx->pc = 0x1fd954u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1fd958:
    // 0x1fd958: 0x571018  mult        $v0, $v0, $s7
    ctx->pc = 0x1fd958u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1fd95c:
    // 0x1fd95c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fd95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fd960:
    // 0x1fd960: 0x0  nop
    ctx->pc = 0x1fd960u;
    // NOP
label_1fd964:
    // 0x1fd964: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fd964u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1fd968:
    // 0x1fd968: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fd968u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fd96c:
    // 0x1fd96c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1fd96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1fd970:
    // 0x1fd970: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1fd970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1fd974:
    // 0x1fd974: 0x4410022  bgez        $v0, . + 4 + (0x22 << 2)
label_1fd978:
    if (ctx->pc == 0x1FD978u) {
        ctx->pc = 0x1FD978u;
            // 0x1fd978: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FD97Cu;
        goto label_1fd97c;
    }
    ctx->pc = 0x1FD974u;
    {
        const bool branch_taken_0x1fd974 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1FD978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD974u;
            // 0x1fd978: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd974) {
            ctx->pc = 0x1FDA00u;
            goto label_1fda00;
        }
    }
    ctx->pc = 0x1FD97Cu;
label_1fd97c:
    // 0x1fd97c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fd97cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd980:
    // 0x1fd980: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1fd980u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd984:
    // 0x1fd984: 0xc7ac01f0  lwc1        $f12, 0x1F0($sp)
    ctx->pc = 0x1fd984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1fd988:
    // 0x1fd988: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x1fd988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
label_1fd98c:
    // 0x1fd98c: 0xc0a248c  jal         func_289230
label_1fd990:
    if (ctx->pc == 0x1FD990u) {
        ctx->pc = 0x1FD990u;
            // 0x1fd990: 0xac400140  sw          $zero, 0x140($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 0));
        ctx->pc = 0x1FD994u;
        goto label_1fd994;
    }
    ctx->pc = 0x1FD98Cu;
    SET_GPR_U32(ctx, 31, 0x1FD994u);
    ctx->pc = 0x1FD990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD98Cu;
            // 0x1fd990: 0xac400140  sw          $zero, 0x140($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD994u; }
        if (ctx->pc != 0x1FD994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD994u; }
        if (ctx->pc != 0x1FD994u) { return; }
    }
    ctx->pc = 0x1FD994u;
label_1fd994:
    // 0x1fd994: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x1fd994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
label_1fd998:
    // 0x1fd998: 0x24760170  addiu       $s6, $v1, 0x170
    ctx->pc = 0x1fd998u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
label_1fd99c:
    // 0x1fd99c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1fd99cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_1fd9a0:
    // 0x1fd9a0: 0xc6740000  lwc1        $f20, 0x0($s3)
    ctx->pc = 0x1fd9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1fd9a4:
    // 0x1fd9a4: 0xc0a248c  jal         func_289230
label_1fd9a8:
    if (ctx->pc == 0x1FD9A8u) {
        ctx->pc = 0x1FD9A8u;
            // 0x1fd9a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1FD9ACu;
        goto label_1fd9ac;
    }
    ctx->pc = 0x1FD9A4u;
    SET_GPR_U32(ctx, 31, 0x1FD9ACu);
    ctx->pc = 0x1FD9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD9A4u;
            // 0x1fd9a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD9ACu; }
        if (ctx->pc != 0x1FD9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD9ACu; }
        if (ctx->pc != 0x1FD9ACu) { return; }
    }
    ctx->pc = 0x1FD9ACu;
label_1fd9ac:
    // 0x1fd9ac: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x1fd9acu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
label_1fd9b0:
    // 0x1fd9b0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1fd9b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1fd9b4:
    // 0x1fd9b4: 0x8e8314b4  lw          $v1, 0x14B4($s4)
    ctx->pc = 0x1fd9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5300)));
label_1fd9b8:
    // 0x1fd9b8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1fd9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1fd9bc:
    // 0x1fd9bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fd9bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fd9c0:
    // 0x1fd9c0: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x1fd9c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_1fd9c4:
    // 0x1fd9c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fd9c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fd9c8:
    // 0x1fd9c8: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x1fd9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1fd9cc:
    // 0x1fd9cc: 0x46140040  add.s       $f1, $f0, $f20
    ctx->pc = 0x1fd9ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1fd9d0:
    // 0x1fd9d0: 0x8c4214c4  lw          $v0, 0x14C4($v0)
    ctx->pc = 0x1fd9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5316)));
label_1fd9d4:
    // 0x1fd9d4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1fd9d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1fd9d8:
    // 0x1fd9d8: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x1fd9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fd9dc:
    // 0x1fd9dc: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x1fd9dcu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fd9e0:
    // 0x1fd9e0: 0x0  nop
    ctx->pc = 0x1fd9e0u;
    // NOP
label_1fd9e4:
    // 0x1fd9e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fd9e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1fd9e8:
    // 0x1fd9e8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1fd9e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1fd9ec:
    // 0x1fd9ec: 0xe4410020  swc1        $f1, 0x20($v0)
    ctx->pc = 0x1fd9ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_1fd9f0:
    // 0x1fd9f0: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1fd9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fd9f4:
    // 0x1fd9f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fd9f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fd9f8:
    // 0x1fd9f8: 0x6a0ffe2  bltz        $s5, . + 4 + (-0x1E << 2)
label_1fd9fc:
    if (ctx->pc == 0x1FD9FCu) {
        ctx->pc = 0x1FD9FCu;
            // 0x1fd9fc: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->pc = 0x1FDA00u;
        goto label_1fda00;
    }
    ctx->pc = 0x1FD9F8u;
    {
        const bool branch_taken_0x1fd9f8 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x1FD9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD9F8u;
            // 0x1fd9fc: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd9f8) {
            ctx->pc = 0x1FD984u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fd984;
        }
    }
    ctx->pc = 0x1FDA00u;
label_1fda00:
    // 0x1fda00: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x1fda00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
label_1fda04:
    // 0x1fda04: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
label_1fda08:
    if (ctx->pc == 0x1FDA08u) {
        ctx->pc = 0x1FDA08u;
            // 0x1fda08: 0x108880  sll         $s1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x1FDA0Cu;
        goto label_1fda0c;
    }
    ctx->pc = 0x1FDA04u;
    {
        const bool branch_taken_0x1fda04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDA04u;
            // 0x1fda08: 0x108880  sll         $s1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda04) {
            ctx->pc = 0x1FDAD0u;
            goto label_1fdad0;
        }
    }
    ctx->pc = 0x1FDA0Cu;
label_1fda0c:
    // 0x1fda0c: 0x1090c0  sll         $s2, $s0, 3
    ctx->pc = 0x1fda0cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1fda10:
    // 0x1fda10: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1fda10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1fda14:
    // 0x1fda14: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1fda14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1fda18:
    // 0x1fda18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fda18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fda1c:
    // 0x1fda1c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1fda1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1fda20:
    // 0x1fda20: 0xc0aacf4  jal         func_2AB3D0
label_1fda24:
    if (ctx->pc == 0x1FDA24u) {
        ctx->pc = 0x1FDA24u;
            // 0x1fda24: 0x8c440144  lw          $a0, 0x144($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
        ctx->pc = 0x1FDA28u;
        goto label_1fda28;
    }
    ctx->pc = 0x1FDA20u;
    SET_GPR_U32(ctx, 31, 0x1FDA28u);
    ctx->pc = 0x1FDA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDA20u;
            // 0x1fda24: 0x8c440144  lw          $a0, 0x144($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB3D0u;
    if (runtime->hasFunction(0x2AB3D0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDA28u; }
        if (ctx->pc != 0x1FDA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNPCName__Fi_0x2ab3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDA28u; }
        if (ctx->pc != 0x1FDA28u) { return; }
    }
    ctx->pc = 0x1FDA28u;
label_1fda28:
    // 0x1fda28: 0xc7ac01f0  lwc1        $f12, 0x1F0($sp)
    ctx->pc = 0x1fda28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1fda2c:
    // 0x1fda2c: 0x23d1821  addu        $v1, $s1, $sp
    ctx->pc = 0x1fda2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
label_1fda30:
    // 0x1fda30: 0xc0a248c  jal         func_289230
label_1fda34:
    if (ctx->pc == 0x1FDA34u) {
        ctx->pc = 0x1FDA34u;
            // 0x1fda34: 0xac620140  sw          $v0, 0x140($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 320), GPR_U32(ctx, 2));
        ctx->pc = 0x1FDA38u;
        goto label_1fda38;
    }
    ctx->pc = 0x1FDA30u;
    SET_GPR_U32(ctx, 31, 0x1FDA38u);
    ctx->pc = 0x1FDA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDA30u;
            // 0x1fda34: 0xac620140  sw          $v0, 0x140($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDA38u; }
        if (ctx->pc != 0x1FDA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDA38u; }
        if (ctx->pc != 0x1FDA38u) { return; }
    }
    ctx->pc = 0x1FDA38u;
label_1fda38:
    // 0x1fda38: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x1fda38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
label_1fda3c:
    // 0x1fda3c: 0x24750170  addiu       $s5, $v1, 0x170
    ctx->pc = 0x1fda3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
label_1fda40:
    // 0x1fda40: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1fda40u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1fda44:
    // 0x1fda44: 0xc6740000  lwc1        $f20, 0x0($s3)
    ctx->pc = 0x1fda44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1fda48:
    // 0x1fda48: 0xc0a248c  jal         func_289230
label_1fda4c:
    if (ctx->pc == 0x1FDA4Cu) {
        ctx->pc = 0x1FDA4Cu;
            // 0x1fda4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1FDA50u;
        goto label_1fda50;
    }
    ctx->pc = 0x1FDA48u;
    SET_GPR_U32(ctx, 31, 0x1FDA50u);
    ctx->pc = 0x1FDA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDA48u;
            // 0x1fda4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDA50u; }
        if (ctx->pc != 0x1FDA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDA50u; }
        if (ctx->pc != 0x1FDA50u) { return; }
    }
    ctx->pc = 0x1FDA50u;
label_1fda50:
    // 0x1fda50: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x1fda50u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_1fda54:
    // 0x1fda54: 0x2912021  addu        $a0, $s4, $s1
    ctx->pc = 0x1fda54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1fda58:
    // 0x1fda58: 0x8e8514b4  lw          $a1, 0x14B4($s4)
    ctx->pc = 0x1fda58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5300)));
label_1fda5c:
    // 0x1fda5c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1fda5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1fda60:
    // 0x1fda60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fda60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fda64:
    // 0x1fda64: 0x8c8314c4  lw          $v1, 0x14C4($a0)
    ctx->pc = 0x1fda64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5316)));
label_1fda68:
    // 0x1fda68: 0x46140040  add.s       $f1, $f0, $f20
    ctx->pc = 0x1fda68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1fda6c:
    // 0x1fda6c: 0x3c024381  lui         $v0, 0x4381
    ctx->pc = 0x1fda6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17281 << 16));
label_1fda70:
    // 0x1fda70: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x1fda70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fda74:
    // 0x1fda74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fda74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fda78:
    // 0x1fda78: 0x0  nop
    ctx->pc = 0x1fda78u;
    // NOP
label_1fda7c:
    // 0x1fda7c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1fda7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1fda80:
    // 0x1fda80: 0xe4610020  swc1        $f1, 0x20($v1)
    ctx->pc = 0x1fda80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_1fda84:
    // 0x1fda84: 0x8c8214c4  lw          $v0, 0x14C4($a0)
    ctx->pc = 0x1fda84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5316)));
label_1fda88:
    // 0x1fda88: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x1fda88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fda8c:
    // 0x1fda8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1fda8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fda90:
    // 0x1fda90: 0x0  nop
    ctx->pc = 0x1fda90u;
    // NOP
label_1fda94:
    // 0x1fda94: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1fda98:
    if (ctx->pc == 0x1FDA98u) {
        ctx->pc = 0x1FDA98u;
            // 0x1fda98: 0x24430020  addiu       $v1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = 0x1FDA9Cu;
        goto label_1fda9c;
    }
    ctx->pc = 0x1FDA94u;
    {
        const bool branch_taken_0x1fda94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FDA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDA94u;
            // 0x1fda98: 0x24430020  addiu       $v1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda94) {
            ctx->pc = 0x1FDAA4u;
            goto label_1fdaa4;
        }
    }
    ctx->pc = 0x1FDA9Cu;
label_1fda9c:
    // 0x1fda9c: 0x3c02c302  lui         $v0, 0xC302
    ctx->pc = 0x1fda9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49922 << 16));
label_1fdaa0:
    // 0x1fdaa0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1fdaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1fdaa4:
    // 0x1fdaa4: 0x0  nop
    ctx->pc = 0x1fdaa4u;
    // NOP
label_1fdaa8:
    // 0x1fdaa8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fdaa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fdaac:
    // 0x1fdaac: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x1fdaacu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fdab0:
    // 0x1fdab0: 0x2a020009  slti        $v0, $s0, 0x9
    ctx->pc = 0x1fdab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
label_1fdab4:
    // 0x1fdab4: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1fdab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fdab8:
    // 0x1fdab8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1fdab8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1fdabc:
    // 0x1fdabc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fdabcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1fdac0:
    // 0x1fdac0: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x1fdac0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_1fdac4:
    // 0x1fdac4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fdac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fdac8:
    // 0x1fdac8: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_1fdacc:
    if (ctx->pc == 0x1FDACCu) {
        ctx->pc = 0x1FDACCu;
            // 0x1fdacc: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->pc = 0x1FDAD0u;
        goto label_1fdad0;
    }
    ctx->pc = 0x1FDAC8u;
    {
        const bool branch_taken_0x1fdac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDAC8u;
            // 0x1fdacc: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdac8) {
            ctx->pc = 0x1FDA10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fda10;
        }
    }
    ctx->pc = 0x1FDAD0u;
label_1fdad0:
    // 0x1fdad0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fdad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1fdad4:
    // 0x1fdad4: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1fdad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1fdad8:
    // 0x1fdad8: 0xc087720  jal         func_21DC80
label_1fdadc:
    if (ctx->pc == 0x1FDADCu) {
        ctx->pc = 0x1FDADCu;
            // 0x1fdadc: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x1FDAE0u;
        goto label_1fdae0;
    }
    ctx->pc = 0x1FDAD8u;
    SET_GPR_U32(ctx, 31, 0x1FDAE0u);
    ctx->pc = 0x1FDADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDAD8u;
            // 0x1fdadc: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDAE0u; }
        if (ctx->pc != 0x1FDAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDAE0u; }
        if (ctx->pc != 0x1FDAE0u) { return; }
    }
    ctx->pc = 0x1FDAE0u;
label_1fdae0:
    // 0x1fdae0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fdae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1fdae4:
    // 0x1fdae4: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1fdae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1fdae8:
    // 0x1fdae8: 0xc0877c4  jal         func_21DF10
label_1fdaec:
    if (ctx->pc == 0x1FDAECu) {
        ctx->pc = 0x1FDAECu;
            // 0x1fdaec: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x1FDAF0u;
        goto label_1fdaf0;
    }
    ctx->pc = 0x1FDAE8u;
    SET_GPR_U32(ctx, 31, 0x1FDAF0u);
    ctx->pc = 0x1FDAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDAE8u;
            // 0x1fdaec: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF10u;
    if (runtime->hasFunction(0x21DF10u)) {
        auto targetFn = runtime->lookupFunction(0x21DF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDAF0u; }
        if (ctx->pc != 0x1FDAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemPos__7CDC2MesFPii_0x21df10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDAF0u; }
        if (ctx->pc != 0x1FDAF0u) { return; }
    }
    ctx->pc = 0x1FDAF0u;
label_1fdaf0:
    // 0x1fdaf0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fdaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1fdaf4:
    // 0x1fdaf4: 0xc0877e0  jal         func_21DF80
label_1fdaf8:
    if (ctx->pc == 0x1FDAF8u) {
        ctx->pc = 0x1FDAF8u;
            // 0x1fdaf8: 0x2405003a  addiu       $a1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->pc = 0x1FDAFCu;
        goto label_1fdafc;
    }
    ctx->pc = 0x1FDAF4u;
    SET_GPR_U32(ctx, 31, 0x1FDAFCu);
    ctx->pc = 0x1FDAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDAF4u;
            // 0x1fdaf8: 0x2405003a  addiu       $a1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDAFCu; }
        if (ctx->pc != 0x1FDAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDAFCu; }
        if (ctx->pc != 0x1FDAFCu) { return; }
    }
    ctx->pc = 0x1FDAFCu;
label_1fdafc:
    // 0x1fdafc: 0xdf8390c8  ld          $v1, -0x6F38($gp)
    ctx->pc = 0x1fdafcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294938824)));
label_1fdb00:
    // 0x1fdb00: 0x3c024358  lui         $v0, 0x4358
    ctx->pc = 0x1fdb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17240 << 16));
label_1fdb04:
    // 0x1fdb04: 0x27a601f8  addiu       $a2, $sp, 0x1F8
    ctx->pc = 0x1fdb04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
label_1fdb08:
    // 0x1fdb08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fdb08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fdb0c:
    // 0x1fdb0c: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x1fdb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_1fdb10:
    // 0x1fdb10: 0x8e8214b4  lw          $v0, 0x14B4($s4)
    ctx->pc = 0x1fdb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5300)));
label_1fdb14:
    // 0x1fdb14: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1fdb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fdb18:
    // 0x1fdb18: 0xc0a248c  jal         func_289230
label_1fdb1c:
    if (ctx->pc == 0x1FDB1Cu) {
        ctx->pc = 0x1FDB1Cu;
            // 0x1fdb1c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1FDB20u;
        goto label_1fdb20;
    }
    ctx->pc = 0x1FDB18u;
    SET_GPR_U32(ctx, 31, 0x1FDB20u);
    ctx->pc = 0x1FDB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDB18u;
            // 0x1fdb1c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDB20u; }
        if (ctx->pc != 0x1FDB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDB20u; }
        if (ctx->pc != 0x1FDB20u) { return; }
    }
    ctx->pc = 0x1FDB20u;
label_1fdb20:
    // 0x1fdb20: 0xafa201f8  sw          $v0, 0x1F8($sp)
    ctx->pc = 0x1fdb20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 2));
label_1fdb24:
    // 0x1fdb24: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x1fdb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
label_1fdb28:
    // 0x1fdb28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fdb28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fdb2c:
    // 0x1fdb2c: 0x8e8214b4  lw          $v0, 0x14B4($s4)
    ctx->pc = 0x1fdb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5300)));
label_1fdb30:
    // 0x1fdb30: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1fdb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fdb34:
    // 0x1fdb34: 0xc0a248c  jal         func_289230
label_1fdb38:
    if (ctx->pc == 0x1FDB38u) {
        ctx->pc = 0x1FDB38u;
            // 0x1fdb38: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1FDB3Cu;
        goto label_1fdb3c;
    }
    ctx->pc = 0x1FDB34u;
    SET_GPR_U32(ctx, 31, 0x1FDB3Cu);
    ctx->pc = 0x1FDB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDB34u;
            // 0x1fdb38: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDB3Cu; }
        if (ctx->pc != 0x1FDB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDB3Cu; }
        if (ctx->pc != 0x1FDB3Cu) { return; }
    }
    ctx->pc = 0x1FDB3Cu;
label_1fdb3c:
    // 0x1fdb3c: 0xdf8481b8  ld          $a0, -0x7E48($gp)
    ctx->pc = 0x1fdb3cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294934968)));
label_1fdb40:
    // 0x1fdb40: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x1fdb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_1fdb44:
    // 0x1fdb44: 0xafa201fc  sw          $v0, 0x1FC($sp)
    ctx->pc = 0x1fdb44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 2));
label_1fdb48:
    // 0x1fdb48: 0x27a30208  addiu       $v1, $sp, 0x208
    ctx->pc = 0x1fdb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
label_1fdb4c:
    // 0x1fdb4c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1fdb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_1fdb50:
    // 0x1fdb50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fdb50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fdb54:
    // 0x1fdb54: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x1fdb54u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
label_1fdb58:
    // 0x1fdb58: 0xdf8281c0  ld          $v0, -0x7E40($gp)
    ctx->pc = 0x1fdb58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934976)));
label_1fdb5c:
    // 0x1fdb5c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1fdb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_1fdb60:
    // 0x1fdb60: 0xc6800414  lwc1        $f0, 0x414($s4)
    ctx->pc = 0x1fdb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fdb64:
    // 0x1fdb64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fdb64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1fdb68:
    // 0x1fdb68: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1fdb68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fdb6c:
    // 0x1fdb6c: 0x0  nop
    ctx->pc = 0x1fdb6cu;
    // NOP
label_1fdb70:
    // 0x1fdb70: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1fdb74:
    if (ctx->pc == 0x1FDB74u) {
        ctx->pc = 0x1FDB74u;
            // 0x1fdb74: 0xe7a00208  swc1        $f0, 0x208($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
        ctx->pc = 0x1FDB78u;
        goto label_1fdb78;
    }
    ctx->pc = 0x1FDB70u;
    {
        const bool branch_taken_0x1fdb70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FDB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDB70u;
            // 0x1fdb74: 0xe7a00208  swc1        $f0, 0x208($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdb70) {
            ctx->pc = 0x1FDB7Cu;
            goto label_1fdb7c;
        }
    }
    ctx->pc = 0x1FDB78u;
label_1fdb78:
    // 0x1fdb78: 0xe7a10208  swc1        $f1, 0x208($sp)
    ctx->pc = 0x1fdb78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_1fdb7c:
    // 0x1fdb7c: 0x8e8714fc  lw          $a3, 0x14FC($s4)
    ctx->pc = 0x1fdb7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5372)));
label_1fdb80:
    // 0x1fdb80: 0xc7ac0208  lwc1        $f12, 0x208($sp)
    ctx->pc = 0x1fdb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1fdb84:
    // 0x1fdb84: 0xc7ad020c  lwc1        $f13, 0x20C($sp)
    ctx->pc = 0x1fdb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1fdb88:
    // 0x1fdb88: 0x268414b8  addiu       $a0, $s4, 0x14B8
    ctx->pc = 0x1fdb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 5304));
label_1fdb8c:
    // 0x1fdb8c: 0x27a501f8  addiu       $a1, $sp, 0x1F8
    ctx->pc = 0x1fdb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
label_1fdb90:
    // 0x1fdb90: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x1fdb90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_1fdb94:
    // 0x1fdb94: 0xc0b0b74  jal         func_2C2DD0
label_1fdb98:
    if (ctx->pc == 0x1FDB98u) {
        ctx->pc = 0x1FDB98u;
            // 0x1fdb98: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FDB9Cu;
        goto label_1fdb9c;
    }
    ctx->pc = 0x1FDB94u;
    SET_GPR_U32(ctx, 31, 0x1FDB9Cu);
    ctx->pc = 0x1FDB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDB94u;
            // 0x1fdb98: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2DD0u;
    if (runtime->hasFunction(0x2C2DD0u)) {
        auto targetFn = runtime->lookupFunction(0x2C2DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDB9Cu; }
        if (ctx->pc != 0x1FDB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LocalFunc_AdjustScrlBar__FPP18MENUFORMPARTS_TYPEPiPiiffi_0x2c2dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDB9Cu; }
        if (ctx->pc != 0x1FDB9Cu) { return; }
    }
    ctx->pc = 0x1FDB9Cu;
label_1fdb9c:
    // 0x1fdb9c: 0x8e8414ec  lw          $a0, 0x14EC($s4)
    ctx->pc = 0x1fdb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5356)));
label_1fdba0:
    // 0x1fdba0: 0xc0ac07c  jal         func_2B01F0
label_1fdba4:
    if (ctx->pc == 0x1FDBA4u) {
        ctx->pc = 0x1FDBA4u;
            // 0x1fdba4: 0x8fa500e0  lw          $a1, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->pc = 0x1FDBA8u;
        goto label_1fdba8;
    }
    ctx->pc = 0x1FDBA0u;
    SET_GPR_U32(ctx, 31, 0x1FDBA8u);
    ctx->pc = 0x1FDBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDBA0u;
            // 0x1fdba4: 0x8fa500e0  lw          $a1, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B01F0u;
    if (runtime->hasFunction(0x2B01F0u)) {
        auto targetFn = runtime->lookupFunction(0x2B01F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDBA8u; }
        if (ctx->pc != 0x1FDBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessagePositionNPCForm__FP16CMenuPosDataFormP7CDC2Mes_0x2b01f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDBA8u; }
        if (ctx->pc != 0x1FDBA8u) { return; }
    }
    ctx->pc = 0x1FDBA8u;
label_1fdba8:
    // 0x1fdba8: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x1fdba8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_1fdbac:
    // 0x1fdbac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1fdbb0:
    if (ctx->pc == 0x1FDBB0u) {
        ctx->pc = 0x1FDBB4u;
        goto label_1fdbb4;
    }
    ctx->pc = 0x1FDBACu;
    {
        const bool branch_taken_0x1fdbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdbac) {
            ctx->pc = 0x1FDBBCu;
            goto label_1fdbbc;
        }
    }
    ctx->pc = 0x1FDBB4u;
label_1fdbb4:
    // 0x1fdbb4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1fdbb8:
    if (ctx->pc == 0x1FDBB8u) {
        ctx->pc = 0x1FDBB8u;
            // 0x1fdbb8: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x1FDBBCu;
        goto label_1fdbbc;
    }
    ctx->pc = 0x1FDBB4u;
    {
        const bool branch_taken_0x1fdbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDBB4u;
            // 0x1fdbb8: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdbb4) {
            ctx->pc = 0x1FDC30u;
            goto label_1fdc30;
        }
    }
    ctx->pc = 0x1FDBBCu;
label_1fdbbc:
    // 0x1fdbbc: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x1fdbbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
label_1fdbc0:
    // 0x1fdbc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fdbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fdbc4:
    // 0x1fdbc4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1fdbc8:
    if (ctx->pc == 0x1FDBC8u) {
        ctx->pc = 0x1FDBCCu;
        goto label_1fdbcc;
    }
    ctx->pc = 0x1FDBC4u;
    {
        const bool branch_taken_0x1fdbc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fdbc4) {
            ctx->pc = 0x1FDBD4u;
            goto label_1fdbd4;
        }
    }
    ctx->pc = 0x1FDBCCu;
label_1fdbcc:
    // 0x1fdbcc: 0x10000017  b           . + 4 + (0x17 << 2)
label_1fdbd0:
    if (ctx->pc == 0x1FDBD0u) {
        ctx->pc = 0x1FDBD4u;
        goto label_1fdbd4;
    }
    ctx->pc = 0x1FDBCCu;
    {
        const bool branch_taken_0x1fdbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdbcc) {
            ctx->pc = 0x1FDC2Cu;
            goto label_1fdc2c;
        }
    }
    ctx->pc = 0x1FDBD4u;
label_1fdbd4:
    // 0x1fdbd4: 0x8e8414b4  lw          $a0, 0x14B4($s4)
    ctx->pc = 0x1fdbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5300)));
label_1fdbd8:
    // 0x1fdbd8: 0x27b00214  addiu       $s0, $sp, 0x214
    ctx->pc = 0x1fdbd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 532));
label_1fdbdc:
    // 0x1fdbdc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fdbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fdbe0:
    // 0x1fdbe0: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x1fdbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_1fdbe4:
    // 0x1fdbe4: 0x24a58fd0  addiu       $a1, $a1, -0x7030
    ctx->pc = 0x1fdbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938576));
label_1fdbe8:
    // 0x1fdbe8: 0xc08974c  jal         func_225D30
label_1fdbec:
    if (ctx->pc == 0x1FDBECu) {
        ctx->pc = 0x1FDBECu;
            // 0x1fdbec: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FDBF0u;
        goto label_1fdbf0;
    }
    ctx->pc = 0x1FDBE8u;
    SET_GPR_U32(ctx, 31, 0x1FDBF0u);
    ctx->pc = 0x1FDBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDBE8u;
            // 0x1fdbec: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDBF0u; }
        if (ctx->pc != 0x1FDBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDBF0u; }
        if (ctx->pc != 0x1FDBF0u) { return; }
    }
    ctx->pc = 0x1FDBF0u;
label_1fdbf0:
    // 0x1fdbf0: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x1fdbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_1fdbf4:
    // 0x1fdbf4: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x1fdbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_1fdbf8:
    // 0x1fdbf8: 0x2442ffd8  addiu       $v0, $v0, -0x28
    ctx->pc = 0x1fdbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
label_1fdbfc:
    // 0x1fdbfc: 0xafa20210  sw          $v0, 0x210($sp)
    ctx->pc = 0x1fdbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
label_1fdc00:
    // 0x1fdc00: 0x8e8714f8  lw          $a3, 0x14F8($s4)
    ctx->pc = 0x1fdc00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5368)));
label_1fdc04:
    // 0x1fdc04: 0x8e8414fc  lw          $a0, 0x14FC($s4)
    ctx->pc = 0x1fdc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5372)));
label_1fdc08:
    // 0x1fdc08: 0x8fc300c4  lw          $v1, 0xC4($fp)
    ctx->pc = 0x1fdc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 196)));
label_1fdc0c:
    // 0x1fdc0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fdc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fdc10:
    // 0x1fdc10: 0xe42023  subu        $a0, $a3, $a0
    ctx->pc = 0x1fdc10u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_1fdc14:
    // 0x1fdc14: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1fdc14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1fdc18:
    // 0x1fdc18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fdc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fdc1c:
    // 0x1fdc1c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fdc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1fdc20:
    // 0x1fdc20: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x1fdc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_1fdc24:
    // 0x1fdc24: 0xc08ef88  jal         func_23BE20
label_1fdc28:
    if (ctx->pc == 0x1FDC28u) {
        ctx->pc = 0x1FDC28u;
            // 0x1fdc28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FDC2Cu;
        goto label_1fdc2c;
    }
    ctx->pc = 0x1FDC24u;
    SET_GPR_U32(ctx, 31, 0x1FDC2Cu);
    ctx->pc = 0x1FDC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDC24u;
            // 0x1fdc28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23BE20u;
    if (runtime->hasFunction(0x23BE20u)) {
        auto targetFn = runtime->lookupFunction(0x23BE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDC2Cu; }
        if (ctx->pc != 0x1FDC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuPosStep__12CMenuKeyFuncFPiPi_0x23be20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDC2Cu; }
        if (ctx->pc != 0x1FDC2Cu) { return; }
    }
    ctx->pc = 0x1FDC2Cu;
label_1fdc2c:
    // 0x1fdc2c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1fdc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1fdc30:
    // 0x1fdc30: 0x0  nop
    ctx->pc = 0x1fdc30u;
    // NOP
label_1fdc34:
    // 0x1fdc34: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1fdc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1fdc38:
    // 0x1fdc38: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1fdc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1fdc3c:
    // 0x1fdc3c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1fdc3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1fdc40:
    // 0x1fdc40: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1fdc40u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1fdc44:
    // 0x1fdc44: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1fdc44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1fdc48:
    // 0x1fdc48: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1fdc48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1fdc4c:
    // 0x1fdc4c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1fdc4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fdc50:
    // 0x1fdc50: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1fdc50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fdc54:
    // 0x1fdc54: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1fdc54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fdc58:
    // 0x1fdc58: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fdc58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fdc5c:
    // 0x1fdc5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fdc5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fdc60:
    // 0x1fdc60: 0x3e00008  jr          $ra
label_1fdc64:
    if (ctx->pc == 0x1FDC64u) {
        ctx->pc = 0x1FDC64u;
            // 0x1fdc64: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x1FDC68u;
        goto label_fallthrough_0x1fdc60;
    }
    ctx->pc = 0x1FDC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDC60u;
            // 0x1fdc64: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1fdc60:
    ctx->pc = 0x1FDC68u;
}
