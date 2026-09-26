#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetActiveMonster__11CMonsterManFiPfPfi
// Address: 0x1dbbb0 - 0x1dc648
void SetActiveMonster__11CMonsterManFiPfPfi_0x1dbbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetActiveMonster__11CMonsterManFiPfPfi_0x1dbbb0");
#endif

    switch (ctx->pc) {
        case 0x1dbbb0u: goto label_1dbbb0;
        case 0x1dbbb4u: goto label_1dbbb4;
        case 0x1dbbb8u: goto label_1dbbb8;
        case 0x1dbbbcu: goto label_1dbbbc;
        case 0x1dbbc0u: goto label_1dbbc0;
        case 0x1dbbc4u: goto label_1dbbc4;
        case 0x1dbbc8u: goto label_1dbbc8;
        case 0x1dbbccu: goto label_1dbbcc;
        case 0x1dbbd0u: goto label_1dbbd0;
        case 0x1dbbd4u: goto label_1dbbd4;
        case 0x1dbbd8u: goto label_1dbbd8;
        case 0x1dbbdcu: goto label_1dbbdc;
        case 0x1dbbe0u: goto label_1dbbe0;
        case 0x1dbbe4u: goto label_1dbbe4;
        case 0x1dbbe8u: goto label_1dbbe8;
        case 0x1dbbecu: goto label_1dbbec;
        case 0x1dbbf0u: goto label_1dbbf0;
        case 0x1dbbf4u: goto label_1dbbf4;
        case 0x1dbbf8u: goto label_1dbbf8;
        case 0x1dbbfcu: goto label_1dbbfc;
        case 0x1dbc00u: goto label_1dbc00;
        case 0x1dbc04u: goto label_1dbc04;
        case 0x1dbc08u: goto label_1dbc08;
        case 0x1dbc0cu: goto label_1dbc0c;
        case 0x1dbc10u: goto label_1dbc10;
        case 0x1dbc14u: goto label_1dbc14;
        case 0x1dbc18u: goto label_1dbc18;
        case 0x1dbc1cu: goto label_1dbc1c;
        case 0x1dbc20u: goto label_1dbc20;
        case 0x1dbc24u: goto label_1dbc24;
        case 0x1dbc28u: goto label_1dbc28;
        case 0x1dbc2cu: goto label_1dbc2c;
        case 0x1dbc30u: goto label_1dbc30;
        case 0x1dbc34u: goto label_1dbc34;
        case 0x1dbc38u: goto label_1dbc38;
        case 0x1dbc3cu: goto label_1dbc3c;
        case 0x1dbc40u: goto label_1dbc40;
        case 0x1dbc44u: goto label_1dbc44;
        case 0x1dbc48u: goto label_1dbc48;
        case 0x1dbc4cu: goto label_1dbc4c;
        case 0x1dbc50u: goto label_1dbc50;
        case 0x1dbc54u: goto label_1dbc54;
        case 0x1dbc58u: goto label_1dbc58;
        case 0x1dbc5cu: goto label_1dbc5c;
        case 0x1dbc60u: goto label_1dbc60;
        case 0x1dbc64u: goto label_1dbc64;
        case 0x1dbc68u: goto label_1dbc68;
        case 0x1dbc6cu: goto label_1dbc6c;
        case 0x1dbc70u: goto label_1dbc70;
        case 0x1dbc74u: goto label_1dbc74;
        case 0x1dbc78u: goto label_1dbc78;
        case 0x1dbc7cu: goto label_1dbc7c;
        case 0x1dbc80u: goto label_1dbc80;
        case 0x1dbc84u: goto label_1dbc84;
        case 0x1dbc88u: goto label_1dbc88;
        case 0x1dbc8cu: goto label_1dbc8c;
        case 0x1dbc90u: goto label_1dbc90;
        case 0x1dbc94u: goto label_1dbc94;
        case 0x1dbc98u: goto label_1dbc98;
        case 0x1dbc9cu: goto label_1dbc9c;
        case 0x1dbca0u: goto label_1dbca0;
        case 0x1dbca4u: goto label_1dbca4;
        case 0x1dbca8u: goto label_1dbca8;
        case 0x1dbcacu: goto label_1dbcac;
        case 0x1dbcb0u: goto label_1dbcb0;
        case 0x1dbcb4u: goto label_1dbcb4;
        case 0x1dbcb8u: goto label_1dbcb8;
        case 0x1dbcbcu: goto label_1dbcbc;
        case 0x1dbcc0u: goto label_1dbcc0;
        case 0x1dbcc4u: goto label_1dbcc4;
        case 0x1dbcc8u: goto label_1dbcc8;
        case 0x1dbcccu: goto label_1dbccc;
        case 0x1dbcd0u: goto label_1dbcd0;
        case 0x1dbcd4u: goto label_1dbcd4;
        case 0x1dbcd8u: goto label_1dbcd8;
        case 0x1dbcdcu: goto label_1dbcdc;
        case 0x1dbce0u: goto label_1dbce0;
        case 0x1dbce4u: goto label_1dbce4;
        case 0x1dbce8u: goto label_1dbce8;
        case 0x1dbcecu: goto label_1dbcec;
        case 0x1dbcf0u: goto label_1dbcf0;
        case 0x1dbcf4u: goto label_1dbcf4;
        case 0x1dbcf8u: goto label_1dbcf8;
        case 0x1dbcfcu: goto label_1dbcfc;
        case 0x1dbd00u: goto label_1dbd00;
        case 0x1dbd04u: goto label_1dbd04;
        case 0x1dbd08u: goto label_1dbd08;
        case 0x1dbd0cu: goto label_1dbd0c;
        case 0x1dbd10u: goto label_1dbd10;
        case 0x1dbd14u: goto label_1dbd14;
        case 0x1dbd18u: goto label_1dbd18;
        case 0x1dbd1cu: goto label_1dbd1c;
        case 0x1dbd20u: goto label_1dbd20;
        case 0x1dbd24u: goto label_1dbd24;
        case 0x1dbd28u: goto label_1dbd28;
        case 0x1dbd2cu: goto label_1dbd2c;
        case 0x1dbd30u: goto label_1dbd30;
        case 0x1dbd34u: goto label_1dbd34;
        case 0x1dbd38u: goto label_1dbd38;
        case 0x1dbd3cu: goto label_1dbd3c;
        case 0x1dbd40u: goto label_1dbd40;
        case 0x1dbd44u: goto label_1dbd44;
        case 0x1dbd48u: goto label_1dbd48;
        case 0x1dbd4cu: goto label_1dbd4c;
        case 0x1dbd50u: goto label_1dbd50;
        case 0x1dbd54u: goto label_1dbd54;
        case 0x1dbd58u: goto label_1dbd58;
        case 0x1dbd5cu: goto label_1dbd5c;
        case 0x1dbd60u: goto label_1dbd60;
        case 0x1dbd64u: goto label_1dbd64;
        case 0x1dbd68u: goto label_1dbd68;
        case 0x1dbd6cu: goto label_1dbd6c;
        case 0x1dbd70u: goto label_1dbd70;
        case 0x1dbd74u: goto label_1dbd74;
        case 0x1dbd78u: goto label_1dbd78;
        case 0x1dbd7cu: goto label_1dbd7c;
        case 0x1dbd80u: goto label_1dbd80;
        case 0x1dbd84u: goto label_1dbd84;
        case 0x1dbd88u: goto label_1dbd88;
        case 0x1dbd8cu: goto label_1dbd8c;
        case 0x1dbd90u: goto label_1dbd90;
        case 0x1dbd94u: goto label_1dbd94;
        case 0x1dbd98u: goto label_1dbd98;
        case 0x1dbd9cu: goto label_1dbd9c;
        case 0x1dbda0u: goto label_1dbda0;
        case 0x1dbda4u: goto label_1dbda4;
        case 0x1dbda8u: goto label_1dbda8;
        case 0x1dbdacu: goto label_1dbdac;
        case 0x1dbdb0u: goto label_1dbdb0;
        case 0x1dbdb4u: goto label_1dbdb4;
        case 0x1dbdb8u: goto label_1dbdb8;
        case 0x1dbdbcu: goto label_1dbdbc;
        case 0x1dbdc0u: goto label_1dbdc0;
        case 0x1dbdc4u: goto label_1dbdc4;
        case 0x1dbdc8u: goto label_1dbdc8;
        case 0x1dbdccu: goto label_1dbdcc;
        case 0x1dbdd0u: goto label_1dbdd0;
        case 0x1dbdd4u: goto label_1dbdd4;
        case 0x1dbdd8u: goto label_1dbdd8;
        case 0x1dbddcu: goto label_1dbddc;
        case 0x1dbde0u: goto label_1dbde0;
        case 0x1dbde4u: goto label_1dbde4;
        case 0x1dbde8u: goto label_1dbde8;
        case 0x1dbdecu: goto label_1dbdec;
        case 0x1dbdf0u: goto label_1dbdf0;
        case 0x1dbdf4u: goto label_1dbdf4;
        case 0x1dbdf8u: goto label_1dbdf8;
        case 0x1dbdfcu: goto label_1dbdfc;
        case 0x1dbe00u: goto label_1dbe00;
        case 0x1dbe04u: goto label_1dbe04;
        case 0x1dbe08u: goto label_1dbe08;
        case 0x1dbe0cu: goto label_1dbe0c;
        case 0x1dbe10u: goto label_1dbe10;
        case 0x1dbe14u: goto label_1dbe14;
        case 0x1dbe18u: goto label_1dbe18;
        case 0x1dbe1cu: goto label_1dbe1c;
        case 0x1dbe20u: goto label_1dbe20;
        case 0x1dbe24u: goto label_1dbe24;
        case 0x1dbe28u: goto label_1dbe28;
        case 0x1dbe2cu: goto label_1dbe2c;
        case 0x1dbe30u: goto label_1dbe30;
        case 0x1dbe34u: goto label_1dbe34;
        case 0x1dbe38u: goto label_1dbe38;
        case 0x1dbe3cu: goto label_1dbe3c;
        case 0x1dbe40u: goto label_1dbe40;
        case 0x1dbe44u: goto label_1dbe44;
        case 0x1dbe48u: goto label_1dbe48;
        case 0x1dbe4cu: goto label_1dbe4c;
        case 0x1dbe50u: goto label_1dbe50;
        case 0x1dbe54u: goto label_1dbe54;
        case 0x1dbe58u: goto label_1dbe58;
        case 0x1dbe5cu: goto label_1dbe5c;
        case 0x1dbe60u: goto label_1dbe60;
        case 0x1dbe64u: goto label_1dbe64;
        case 0x1dbe68u: goto label_1dbe68;
        case 0x1dbe6cu: goto label_1dbe6c;
        case 0x1dbe70u: goto label_1dbe70;
        case 0x1dbe74u: goto label_1dbe74;
        case 0x1dbe78u: goto label_1dbe78;
        case 0x1dbe7cu: goto label_1dbe7c;
        case 0x1dbe80u: goto label_1dbe80;
        case 0x1dbe84u: goto label_1dbe84;
        case 0x1dbe88u: goto label_1dbe88;
        case 0x1dbe8cu: goto label_1dbe8c;
        case 0x1dbe90u: goto label_1dbe90;
        case 0x1dbe94u: goto label_1dbe94;
        case 0x1dbe98u: goto label_1dbe98;
        case 0x1dbe9cu: goto label_1dbe9c;
        case 0x1dbea0u: goto label_1dbea0;
        case 0x1dbea4u: goto label_1dbea4;
        case 0x1dbea8u: goto label_1dbea8;
        case 0x1dbeacu: goto label_1dbeac;
        case 0x1dbeb0u: goto label_1dbeb0;
        case 0x1dbeb4u: goto label_1dbeb4;
        case 0x1dbeb8u: goto label_1dbeb8;
        case 0x1dbebcu: goto label_1dbebc;
        case 0x1dbec0u: goto label_1dbec0;
        case 0x1dbec4u: goto label_1dbec4;
        case 0x1dbec8u: goto label_1dbec8;
        case 0x1dbeccu: goto label_1dbecc;
        case 0x1dbed0u: goto label_1dbed0;
        case 0x1dbed4u: goto label_1dbed4;
        case 0x1dbed8u: goto label_1dbed8;
        case 0x1dbedcu: goto label_1dbedc;
        case 0x1dbee0u: goto label_1dbee0;
        case 0x1dbee4u: goto label_1dbee4;
        case 0x1dbee8u: goto label_1dbee8;
        case 0x1dbeecu: goto label_1dbeec;
        case 0x1dbef0u: goto label_1dbef0;
        case 0x1dbef4u: goto label_1dbef4;
        case 0x1dbef8u: goto label_1dbef8;
        case 0x1dbefcu: goto label_1dbefc;
        case 0x1dbf00u: goto label_1dbf00;
        case 0x1dbf04u: goto label_1dbf04;
        case 0x1dbf08u: goto label_1dbf08;
        case 0x1dbf0cu: goto label_1dbf0c;
        case 0x1dbf10u: goto label_1dbf10;
        case 0x1dbf14u: goto label_1dbf14;
        case 0x1dbf18u: goto label_1dbf18;
        case 0x1dbf1cu: goto label_1dbf1c;
        case 0x1dbf20u: goto label_1dbf20;
        case 0x1dbf24u: goto label_1dbf24;
        case 0x1dbf28u: goto label_1dbf28;
        case 0x1dbf2cu: goto label_1dbf2c;
        case 0x1dbf30u: goto label_1dbf30;
        case 0x1dbf34u: goto label_1dbf34;
        case 0x1dbf38u: goto label_1dbf38;
        case 0x1dbf3cu: goto label_1dbf3c;
        case 0x1dbf40u: goto label_1dbf40;
        case 0x1dbf44u: goto label_1dbf44;
        case 0x1dbf48u: goto label_1dbf48;
        case 0x1dbf4cu: goto label_1dbf4c;
        case 0x1dbf50u: goto label_1dbf50;
        case 0x1dbf54u: goto label_1dbf54;
        case 0x1dbf58u: goto label_1dbf58;
        case 0x1dbf5cu: goto label_1dbf5c;
        case 0x1dbf60u: goto label_1dbf60;
        case 0x1dbf64u: goto label_1dbf64;
        case 0x1dbf68u: goto label_1dbf68;
        case 0x1dbf6cu: goto label_1dbf6c;
        case 0x1dbf70u: goto label_1dbf70;
        case 0x1dbf74u: goto label_1dbf74;
        case 0x1dbf78u: goto label_1dbf78;
        case 0x1dbf7cu: goto label_1dbf7c;
        case 0x1dbf80u: goto label_1dbf80;
        case 0x1dbf84u: goto label_1dbf84;
        case 0x1dbf88u: goto label_1dbf88;
        case 0x1dbf8cu: goto label_1dbf8c;
        case 0x1dbf90u: goto label_1dbf90;
        case 0x1dbf94u: goto label_1dbf94;
        case 0x1dbf98u: goto label_1dbf98;
        case 0x1dbf9cu: goto label_1dbf9c;
        case 0x1dbfa0u: goto label_1dbfa0;
        case 0x1dbfa4u: goto label_1dbfa4;
        case 0x1dbfa8u: goto label_1dbfa8;
        case 0x1dbfacu: goto label_1dbfac;
        case 0x1dbfb0u: goto label_1dbfb0;
        case 0x1dbfb4u: goto label_1dbfb4;
        case 0x1dbfb8u: goto label_1dbfb8;
        case 0x1dbfbcu: goto label_1dbfbc;
        case 0x1dbfc0u: goto label_1dbfc0;
        case 0x1dbfc4u: goto label_1dbfc4;
        case 0x1dbfc8u: goto label_1dbfc8;
        case 0x1dbfccu: goto label_1dbfcc;
        case 0x1dbfd0u: goto label_1dbfd0;
        case 0x1dbfd4u: goto label_1dbfd4;
        case 0x1dbfd8u: goto label_1dbfd8;
        case 0x1dbfdcu: goto label_1dbfdc;
        case 0x1dbfe0u: goto label_1dbfe0;
        case 0x1dbfe4u: goto label_1dbfe4;
        case 0x1dbfe8u: goto label_1dbfe8;
        case 0x1dbfecu: goto label_1dbfec;
        case 0x1dbff0u: goto label_1dbff0;
        case 0x1dbff4u: goto label_1dbff4;
        case 0x1dbff8u: goto label_1dbff8;
        case 0x1dbffcu: goto label_1dbffc;
        case 0x1dc000u: goto label_1dc000;
        case 0x1dc004u: goto label_1dc004;
        case 0x1dc008u: goto label_1dc008;
        case 0x1dc00cu: goto label_1dc00c;
        case 0x1dc010u: goto label_1dc010;
        case 0x1dc014u: goto label_1dc014;
        case 0x1dc018u: goto label_1dc018;
        case 0x1dc01cu: goto label_1dc01c;
        case 0x1dc020u: goto label_1dc020;
        case 0x1dc024u: goto label_1dc024;
        case 0x1dc028u: goto label_1dc028;
        case 0x1dc02cu: goto label_1dc02c;
        case 0x1dc030u: goto label_1dc030;
        case 0x1dc034u: goto label_1dc034;
        case 0x1dc038u: goto label_1dc038;
        case 0x1dc03cu: goto label_1dc03c;
        case 0x1dc040u: goto label_1dc040;
        case 0x1dc044u: goto label_1dc044;
        case 0x1dc048u: goto label_1dc048;
        case 0x1dc04cu: goto label_1dc04c;
        case 0x1dc050u: goto label_1dc050;
        case 0x1dc054u: goto label_1dc054;
        case 0x1dc058u: goto label_1dc058;
        case 0x1dc05cu: goto label_1dc05c;
        case 0x1dc060u: goto label_1dc060;
        case 0x1dc064u: goto label_1dc064;
        case 0x1dc068u: goto label_1dc068;
        case 0x1dc06cu: goto label_1dc06c;
        case 0x1dc070u: goto label_1dc070;
        case 0x1dc074u: goto label_1dc074;
        case 0x1dc078u: goto label_1dc078;
        case 0x1dc07cu: goto label_1dc07c;
        case 0x1dc080u: goto label_1dc080;
        case 0x1dc084u: goto label_1dc084;
        case 0x1dc088u: goto label_1dc088;
        case 0x1dc08cu: goto label_1dc08c;
        case 0x1dc090u: goto label_1dc090;
        case 0x1dc094u: goto label_1dc094;
        case 0x1dc098u: goto label_1dc098;
        case 0x1dc09cu: goto label_1dc09c;
        case 0x1dc0a0u: goto label_1dc0a0;
        case 0x1dc0a4u: goto label_1dc0a4;
        case 0x1dc0a8u: goto label_1dc0a8;
        case 0x1dc0acu: goto label_1dc0ac;
        case 0x1dc0b0u: goto label_1dc0b0;
        case 0x1dc0b4u: goto label_1dc0b4;
        case 0x1dc0b8u: goto label_1dc0b8;
        case 0x1dc0bcu: goto label_1dc0bc;
        case 0x1dc0c0u: goto label_1dc0c0;
        case 0x1dc0c4u: goto label_1dc0c4;
        case 0x1dc0c8u: goto label_1dc0c8;
        case 0x1dc0ccu: goto label_1dc0cc;
        case 0x1dc0d0u: goto label_1dc0d0;
        case 0x1dc0d4u: goto label_1dc0d4;
        case 0x1dc0d8u: goto label_1dc0d8;
        case 0x1dc0dcu: goto label_1dc0dc;
        case 0x1dc0e0u: goto label_1dc0e0;
        case 0x1dc0e4u: goto label_1dc0e4;
        case 0x1dc0e8u: goto label_1dc0e8;
        case 0x1dc0ecu: goto label_1dc0ec;
        case 0x1dc0f0u: goto label_1dc0f0;
        case 0x1dc0f4u: goto label_1dc0f4;
        case 0x1dc0f8u: goto label_1dc0f8;
        case 0x1dc0fcu: goto label_1dc0fc;
        case 0x1dc100u: goto label_1dc100;
        case 0x1dc104u: goto label_1dc104;
        case 0x1dc108u: goto label_1dc108;
        case 0x1dc10cu: goto label_1dc10c;
        case 0x1dc110u: goto label_1dc110;
        case 0x1dc114u: goto label_1dc114;
        case 0x1dc118u: goto label_1dc118;
        case 0x1dc11cu: goto label_1dc11c;
        case 0x1dc120u: goto label_1dc120;
        case 0x1dc124u: goto label_1dc124;
        case 0x1dc128u: goto label_1dc128;
        case 0x1dc12cu: goto label_1dc12c;
        case 0x1dc130u: goto label_1dc130;
        case 0x1dc134u: goto label_1dc134;
        case 0x1dc138u: goto label_1dc138;
        case 0x1dc13cu: goto label_1dc13c;
        case 0x1dc140u: goto label_1dc140;
        case 0x1dc144u: goto label_1dc144;
        case 0x1dc148u: goto label_1dc148;
        case 0x1dc14cu: goto label_1dc14c;
        case 0x1dc150u: goto label_1dc150;
        case 0x1dc154u: goto label_1dc154;
        case 0x1dc158u: goto label_1dc158;
        case 0x1dc15cu: goto label_1dc15c;
        case 0x1dc160u: goto label_1dc160;
        case 0x1dc164u: goto label_1dc164;
        case 0x1dc168u: goto label_1dc168;
        case 0x1dc16cu: goto label_1dc16c;
        case 0x1dc170u: goto label_1dc170;
        case 0x1dc174u: goto label_1dc174;
        case 0x1dc178u: goto label_1dc178;
        case 0x1dc17cu: goto label_1dc17c;
        case 0x1dc180u: goto label_1dc180;
        case 0x1dc184u: goto label_1dc184;
        case 0x1dc188u: goto label_1dc188;
        case 0x1dc18cu: goto label_1dc18c;
        case 0x1dc190u: goto label_1dc190;
        case 0x1dc194u: goto label_1dc194;
        case 0x1dc198u: goto label_1dc198;
        case 0x1dc19cu: goto label_1dc19c;
        case 0x1dc1a0u: goto label_1dc1a0;
        case 0x1dc1a4u: goto label_1dc1a4;
        case 0x1dc1a8u: goto label_1dc1a8;
        case 0x1dc1acu: goto label_1dc1ac;
        case 0x1dc1b0u: goto label_1dc1b0;
        case 0x1dc1b4u: goto label_1dc1b4;
        case 0x1dc1b8u: goto label_1dc1b8;
        case 0x1dc1bcu: goto label_1dc1bc;
        case 0x1dc1c0u: goto label_1dc1c0;
        case 0x1dc1c4u: goto label_1dc1c4;
        case 0x1dc1c8u: goto label_1dc1c8;
        case 0x1dc1ccu: goto label_1dc1cc;
        case 0x1dc1d0u: goto label_1dc1d0;
        case 0x1dc1d4u: goto label_1dc1d4;
        case 0x1dc1d8u: goto label_1dc1d8;
        case 0x1dc1dcu: goto label_1dc1dc;
        case 0x1dc1e0u: goto label_1dc1e0;
        case 0x1dc1e4u: goto label_1dc1e4;
        case 0x1dc1e8u: goto label_1dc1e8;
        case 0x1dc1ecu: goto label_1dc1ec;
        case 0x1dc1f0u: goto label_1dc1f0;
        case 0x1dc1f4u: goto label_1dc1f4;
        case 0x1dc1f8u: goto label_1dc1f8;
        case 0x1dc1fcu: goto label_1dc1fc;
        case 0x1dc200u: goto label_1dc200;
        case 0x1dc204u: goto label_1dc204;
        case 0x1dc208u: goto label_1dc208;
        case 0x1dc20cu: goto label_1dc20c;
        case 0x1dc210u: goto label_1dc210;
        case 0x1dc214u: goto label_1dc214;
        case 0x1dc218u: goto label_1dc218;
        case 0x1dc21cu: goto label_1dc21c;
        case 0x1dc220u: goto label_1dc220;
        case 0x1dc224u: goto label_1dc224;
        case 0x1dc228u: goto label_1dc228;
        case 0x1dc22cu: goto label_1dc22c;
        case 0x1dc230u: goto label_1dc230;
        case 0x1dc234u: goto label_1dc234;
        case 0x1dc238u: goto label_1dc238;
        case 0x1dc23cu: goto label_1dc23c;
        case 0x1dc240u: goto label_1dc240;
        case 0x1dc244u: goto label_1dc244;
        case 0x1dc248u: goto label_1dc248;
        case 0x1dc24cu: goto label_1dc24c;
        case 0x1dc250u: goto label_1dc250;
        case 0x1dc254u: goto label_1dc254;
        case 0x1dc258u: goto label_1dc258;
        case 0x1dc25cu: goto label_1dc25c;
        case 0x1dc260u: goto label_1dc260;
        case 0x1dc264u: goto label_1dc264;
        case 0x1dc268u: goto label_1dc268;
        case 0x1dc26cu: goto label_1dc26c;
        case 0x1dc270u: goto label_1dc270;
        case 0x1dc274u: goto label_1dc274;
        case 0x1dc278u: goto label_1dc278;
        case 0x1dc27cu: goto label_1dc27c;
        case 0x1dc280u: goto label_1dc280;
        case 0x1dc284u: goto label_1dc284;
        case 0x1dc288u: goto label_1dc288;
        case 0x1dc28cu: goto label_1dc28c;
        case 0x1dc290u: goto label_1dc290;
        case 0x1dc294u: goto label_1dc294;
        case 0x1dc298u: goto label_1dc298;
        case 0x1dc29cu: goto label_1dc29c;
        case 0x1dc2a0u: goto label_1dc2a0;
        case 0x1dc2a4u: goto label_1dc2a4;
        case 0x1dc2a8u: goto label_1dc2a8;
        case 0x1dc2acu: goto label_1dc2ac;
        case 0x1dc2b0u: goto label_1dc2b0;
        case 0x1dc2b4u: goto label_1dc2b4;
        case 0x1dc2b8u: goto label_1dc2b8;
        case 0x1dc2bcu: goto label_1dc2bc;
        case 0x1dc2c0u: goto label_1dc2c0;
        case 0x1dc2c4u: goto label_1dc2c4;
        case 0x1dc2c8u: goto label_1dc2c8;
        case 0x1dc2ccu: goto label_1dc2cc;
        case 0x1dc2d0u: goto label_1dc2d0;
        case 0x1dc2d4u: goto label_1dc2d4;
        case 0x1dc2d8u: goto label_1dc2d8;
        case 0x1dc2dcu: goto label_1dc2dc;
        case 0x1dc2e0u: goto label_1dc2e0;
        case 0x1dc2e4u: goto label_1dc2e4;
        case 0x1dc2e8u: goto label_1dc2e8;
        case 0x1dc2ecu: goto label_1dc2ec;
        case 0x1dc2f0u: goto label_1dc2f0;
        case 0x1dc2f4u: goto label_1dc2f4;
        case 0x1dc2f8u: goto label_1dc2f8;
        case 0x1dc2fcu: goto label_1dc2fc;
        case 0x1dc300u: goto label_1dc300;
        case 0x1dc304u: goto label_1dc304;
        case 0x1dc308u: goto label_1dc308;
        case 0x1dc30cu: goto label_1dc30c;
        case 0x1dc310u: goto label_1dc310;
        case 0x1dc314u: goto label_1dc314;
        case 0x1dc318u: goto label_1dc318;
        case 0x1dc31cu: goto label_1dc31c;
        case 0x1dc320u: goto label_1dc320;
        case 0x1dc324u: goto label_1dc324;
        case 0x1dc328u: goto label_1dc328;
        case 0x1dc32cu: goto label_1dc32c;
        case 0x1dc330u: goto label_1dc330;
        case 0x1dc334u: goto label_1dc334;
        case 0x1dc338u: goto label_1dc338;
        case 0x1dc33cu: goto label_1dc33c;
        case 0x1dc340u: goto label_1dc340;
        case 0x1dc344u: goto label_1dc344;
        case 0x1dc348u: goto label_1dc348;
        case 0x1dc34cu: goto label_1dc34c;
        case 0x1dc350u: goto label_1dc350;
        case 0x1dc354u: goto label_1dc354;
        case 0x1dc358u: goto label_1dc358;
        case 0x1dc35cu: goto label_1dc35c;
        case 0x1dc360u: goto label_1dc360;
        case 0x1dc364u: goto label_1dc364;
        case 0x1dc368u: goto label_1dc368;
        case 0x1dc36cu: goto label_1dc36c;
        case 0x1dc370u: goto label_1dc370;
        case 0x1dc374u: goto label_1dc374;
        case 0x1dc378u: goto label_1dc378;
        case 0x1dc37cu: goto label_1dc37c;
        case 0x1dc380u: goto label_1dc380;
        case 0x1dc384u: goto label_1dc384;
        case 0x1dc388u: goto label_1dc388;
        case 0x1dc38cu: goto label_1dc38c;
        case 0x1dc390u: goto label_1dc390;
        case 0x1dc394u: goto label_1dc394;
        case 0x1dc398u: goto label_1dc398;
        case 0x1dc39cu: goto label_1dc39c;
        case 0x1dc3a0u: goto label_1dc3a0;
        case 0x1dc3a4u: goto label_1dc3a4;
        case 0x1dc3a8u: goto label_1dc3a8;
        case 0x1dc3acu: goto label_1dc3ac;
        case 0x1dc3b0u: goto label_1dc3b0;
        case 0x1dc3b4u: goto label_1dc3b4;
        case 0x1dc3b8u: goto label_1dc3b8;
        case 0x1dc3bcu: goto label_1dc3bc;
        case 0x1dc3c0u: goto label_1dc3c0;
        case 0x1dc3c4u: goto label_1dc3c4;
        case 0x1dc3c8u: goto label_1dc3c8;
        case 0x1dc3ccu: goto label_1dc3cc;
        case 0x1dc3d0u: goto label_1dc3d0;
        case 0x1dc3d4u: goto label_1dc3d4;
        case 0x1dc3d8u: goto label_1dc3d8;
        case 0x1dc3dcu: goto label_1dc3dc;
        case 0x1dc3e0u: goto label_1dc3e0;
        case 0x1dc3e4u: goto label_1dc3e4;
        case 0x1dc3e8u: goto label_1dc3e8;
        case 0x1dc3ecu: goto label_1dc3ec;
        case 0x1dc3f0u: goto label_1dc3f0;
        case 0x1dc3f4u: goto label_1dc3f4;
        case 0x1dc3f8u: goto label_1dc3f8;
        case 0x1dc3fcu: goto label_1dc3fc;
        case 0x1dc400u: goto label_1dc400;
        case 0x1dc404u: goto label_1dc404;
        case 0x1dc408u: goto label_1dc408;
        case 0x1dc40cu: goto label_1dc40c;
        case 0x1dc410u: goto label_1dc410;
        case 0x1dc414u: goto label_1dc414;
        case 0x1dc418u: goto label_1dc418;
        case 0x1dc41cu: goto label_1dc41c;
        case 0x1dc420u: goto label_1dc420;
        case 0x1dc424u: goto label_1dc424;
        case 0x1dc428u: goto label_1dc428;
        case 0x1dc42cu: goto label_1dc42c;
        case 0x1dc430u: goto label_1dc430;
        case 0x1dc434u: goto label_1dc434;
        case 0x1dc438u: goto label_1dc438;
        case 0x1dc43cu: goto label_1dc43c;
        case 0x1dc440u: goto label_1dc440;
        case 0x1dc444u: goto label_1dc444;
        case 0x1dc448u: goto label_1dc448;
        case 0x1dc44cu: goto label_1dc44c;
        case 0x1dc450u: goto label_1dc450;
        case 0x1dc454u: goto label_1dc454;
        case 0x1dc458u: goto label_1dc458;
        case 0x1dc45cu: goto label_1dc45c;
        case 0x1dc460u: goto label_1dc460;
        case 0x1dc464u: goto label_1dc464;
        case 0x1dc468u: goto label_1dc468;
        case 0x1dc46cu: goto label_1dc46c;
        case 0x1dc470u: goto label_1dc470;
        case 0x1dc474u: goto label_1dc474;
        case 0x1dc478u: goto label_1dc478;
        case 0x1dc47cu: goto label_1dc47c;
        case 0x1dc480u: goto label_1dc480;
        case 0x1dc484u: goto label_1dc484;
        case 0x1dc488u: goto label_1dc488;
        case 0x1dc48cu: goto label_1dc48c;
        case 0x1dc490u: goto label_1dc490;
        case 0x1dc494u: goto label_1dc494;
        case 0x1dc498u: goto label_1dc498;
        case 0x1dc49cu: goto label_1dc49c;
        case 0x1dc4a0u: goto label_1dc4a0;
        case 0x1dc4a4u: goto label_1dc4a4;
        case 0x1dc4a8u: goto label_1dc4a8;
        case 0x1dc4acu: goto label_1dc4ac;
        case 0x1dc4b0u: goto label_1dc4b0;
        case 0x1dc4b4u: goto label_1dc4b4;
        case 0x1dc4b8u: goto label_1dc4b8;
        case 0x1dc4bcu: goto label_1dc4bc;
        case 0x1dc4c0u: goto label_1dc4c0;
        case 0x1dc4c4u: goto label_1dc4c4;
        case 0x1dc4c8u: goto label_1dc4c8;
        case 0x1dc4ccu: goto label_1dc4cc;
        case 0x1dc4d0u: goto label_1dc4d0;
        case 0x1dc4d4u: goto label_1dc4d4;
        case 0x1dc4d8u: goto label_1dc4d8;
        case 0x1dc4dcu: goto label_1dc4dc;
        case 0x1dc4e0u: goto label_1dc4e0;
        case 0x1dc4e4u: goto label_1dc4e4;
        case 0x1dc4e8u: goto label_1dc4e8;
        case 0x1dc4ecu: goto label_1dc4ec;
        case 0x1dc4f0u: goto label_1dc4f0;
        case 0x1dc4f4u: goto label_1dc4f4;
        case 0x1dc4f8u: goto label_1dc4f8;
        case 0x1dc4fcu: goto label_1dc4fc;
        case 0x1dc500u: goto label_1dc500;
        case 0x1dc504u: goto label_1dc504;
        case 0x1dc508u: goto label_1dc508;
        case 0x1dc50cu: goto label_1dc50c;
        case 0x1dc510u: goto label_1dc510;
        case 0x1dc514u: goto label_1dc514;
        case 0x1dc518u: goto label_1dc518;
        case 0x1dc51cu: goto label_1dc51c;
        case 0x1dc520u: goto label_1dc520;
        case 0x1dc524u: goto label_1dc524;
        case 0x1dc528u: goto label_1dc528;
        case 0x1dc52cu: goto label_1dc52c;
        case 0x1dc530u: goto label_1dc530;
        case 0x1dc534u: goto label_1dc534;
        case 0x1dc538u: goto label_1dc538;
        case 0x1dc53cu: goto label_1dc53c;
        case 0x1dc540u: goto label_1dc540;
        case 0x1dc544u: goto label_1dc544;
        case 0x1dc548u: goto label_1dc548;
        case 0x1dc54cu: goto label_1dc54c;
        case 0x1dc550u: goto label_1dc550;
        case 0x1dc554u: goto label_1dc554;
        case 0x1dc558u: goto label_1dc558;
        case 0x1dc55cu: goto label_1dc55c;
        case 0x1dc560u: goto label_1dc560;
        case 0x1dc564u: goto label_1dc564;
        case 0x1dc568u: goto label_1dc568;
        case 0x1dc56cu: goto label_1dc56c;
        case 0x1dc570u: goto label_1dc570;
        case 0x1dc574u: goto label_1dc574;
        case 0x1dc578u: goto label_1dc578;
        case 0x1dc57cu: goto label_1dc57c;
        case 0x1dc580u: goto label_1dc580;
        case 0x1dc584u: goto label_1dc584;
        case 0x1dc588u: goto label_1dc588;
        case 0x1dc58cu: goto label_1dc58c;
        case 0x1dc590u: goto label_1dc590;
        case 0x1dc594u: goto label_1dc594;
        case 0x1dc598u: goto label_1dc598;
        case 0x1dc59cu: goto label_1dc59c;
        case 0x1dc5a0u: goto label_1dc5a0;
        case 0x1dc5a4u: goto label_1dc5a4;
        case 0x1dc5a8u: goto label_1dc5a8;
        case 0x1dc5acu: goto label_1dc5ac;
        case 0x1dc5b0u: goto label_1dc5b0;
        case 0x1dc5b4u: goto label_1dc5b4;
        case 0x1dc5b8u: goto label_1dc5b8;
        case 0x1dc5bcu: goto label_1dc5bc;
        case 0x1dc5c0u: goto label_1dc5c0;
        case 0x1dc5c4u: goto label_1dc5c4;
        case 0x1dc5c8u: goto label_1dc5c8;
        case 0x1dc5ccu: goto label_1dc5cc;
        case 0x1dc5d0u: goto label_1dc5d0;
        case 0x1dc5d4u: goto label_1dc5d4;
        case 0x1dc5d8u: goto label_1dc5d8;
        case 0x1dc5dcu: goto label_1dc5dc;
        case 0x1dc5e0u: goto label_1dc5e0;
        case 0x1dc5e4u: goto label_1dc5e4;
        case 0x1dc5e8u: goto label_1dc5e8;
        case 0x1dc5ecu: goto label_1dc5ec;
        case 0x1dc5f0u: goto label_1dc5f0;
        case 0x1dc5f4u: goto label_1dc5f4;
        case 0x1dc5f8u: goto label_1dc5f8;
        case 0x1dc5fcu: goto label_1dc5fc;
        case 0x1dc600u: goto label_1dc600;
        case 0x1dc604u: goto label_1dc604;
        case 0x1dc608u: goto label_1dc608;
        case 0x1dc60cu: goto label_1dc60c;
        case 0x1dc610u: goto label_1dc610;
        case 0x1dc614u: goto label_1dc614;
        case 0x1dc618u: goto label_1dc618;
        case 0x1dc61cu: goto label_1dc61c;
        case 0x1dc620u: goto label_1dc620;
        case 0x1dc624u: goto label_1dc624;
        case 0x1dc628u: goto label_1dc628;
        case 0x1dc62cu: goto label_1dc62c;
        case 0x1dc630u: goto label_1dc630;
        case 0x1dc634u: goto label_1dc634;
        case 0x1dc638u: goto label_1dc638;
        case 0x1dc63cu: goto label_1dc63c;
        case 0x1dc640u: goto label_1dc640;
        case 0x1dc644u: goto label_1dc644;
        default: break;
    }

    ctx->pc = 0x1dbbb0u;

label_1dbbb0:
    // 0x1dbbb0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1dbbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_1dbbb4:
    // 0x1dbbb4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1dbbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1dbbb8:
    // 0x1dbbb8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1dbbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1dbbbc:
    // 0x1dbbbc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1dbbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1dbbc0:
    // 0x1dbbc0: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1dbbc0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1dbbc4:
    // 0x1dbbc4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1dbbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1dbbc8:
    // 0x1dbbc8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1dbbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1dbbcc:
    // 0x1dbbcc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1dbbccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1dbbd0:
    // 0x1dbbd0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1dbbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1dbbd4:
    // 0x1dbbd4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1dbbd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dbbd8:
    // 0x1dbbd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1dbbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1dbbdc:
    // 0x1dbbdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dbbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1dbbe0:
    // 0x1dbbe0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dbbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1dbbe4:
    // 0x1dbbe4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dbbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dbbe8:
    // 0x1dbbe8: 0xafa700f0  sw          $a3, 0xF0($sp)
    ctx->pc = 0x1dbbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 7));
label_1dbbec:
    // 0x1dbbec: 0x6c00004  bltz        $s6, . + 4 + (0x4 << 2)
label_1dbbf0:
    if (ctx->pc == 0x1DBBF0u) {
        ctx->pc = 0x1DBBF0u;
            // 0x1dbbf0: 0xafa800ec  sw          $t0, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 8));
        ctx->pc = 0x1DBBF4u;
        goto label_1dbbf4;
    }
    ctx->pc = 0x1DBBECu;
    {
        const bool branch_taken_0x1dbbec = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x1DBBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBBECu;
            // 0x1dbbf0: 0xafa800ec  sw          $t0, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbbec) {
            ctx->pc = 0x1DBC00u;
            goto label_1dbc00;
        }
    }
    ctx->pc = 0x1DBBF4u;
label_1dbbf4:
    // 0x1dbbf4: 0x2ac2000c  slti        $v0, $s6, 0xC
    ctx->pc = 0x1dbbf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)12) ? 1 : 0);
label_1dbbf8:
    // 0x1dbbf8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dbbfc:
    if (ctx->pc == 0x1DBBFCu) {
        ctx->pc = 0x1DBBFCu;
            // 0x1dbbfc: 0x240214c0  addiu       $v0, $zero, 0x14C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5312));
        ctx->pc = 0x1DBC00u;
        goto label_1dbc00;
    }
    ctx->pc = 0x1DBBF8u;
    {
        const bool branch_taken_0x1dbbf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBBF8u;
            // 0x1dbbfc: 0x240214c0  addiu       $v0, $zero, 0x14C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbbf8) {
            ctx->pc = 0x1DBC08u;
            goto label_1dbc08;
        }
    }
    ctx->pc = 0x1DBC00u;
label_1dbc00:
    // 0x1dbc00: 0x10000285  b           . + 4 + (0x285 << 2)
label_1dbc04:
    if (ctx->pc == 0x1DBC04u) {
        ctx->pc = 0x1DBC04u;
            // 0x1dbc04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC08u;
        goto label_1dbc08;
    }
    ctx->pc = 0x1DBC00u;
    {
        const bool branch_taken_0x1dbc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC00u;
            // 0x1dbc04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc00) {
            ctx->pc = 0x1DC618u;
            goto label_1dc618;
        }
    }
    ctx->pc = 0x1DBC08u;
label_1dbc08:
    // 0x1dbc08: 0x2c29818  mult        $s3, $s6, $v0
    ctx->pc = 0x1dbc08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_1dbc0c:
    // 0x1dbc0c: 0x2751021  addu        $v0, $s3, $s5
    ctx->pc = 0x1dbc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_1dbc10:
    // 0x1dbc10: 0x8c420570  lw          $v0, 0x570($v0)
    ctx->pc = 0x1dbc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1392)));
label_1dbc14:
    // 0x1dbc14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dbc18:
    if (ctx->pc == 0x1DBC18u) {
        ctx->pc = 0x1DBC18u;
            // 0x1dbc18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC1Cu;
        goto label_1dbc1c;
    }
    ctx->pc = 0x1DBC14u;
    {
        const bool branch_taken_0x1dbc14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC14u;
            // 0x1dbc18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc14) {
            ctx->pc = 0x1DBC24u;
            goto label_1dbc24;
        }
    }
    ctx->pc = 0x1DBC1Cu;
label_1dbc1c:
    // 0x1dbc1c: 0x1000027f  b           . + 4 + (0x27F << 2)
label_1dbc20:
    if (ctx->pc == 0x1DBC20u) {
        ctx->pc = 0x1DBC20u;
            // 0x1dbc20: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x1DBC24u;
        goto label_1dbc24;
    }
    ctx->pc = 0x1DBC1Cu;
    {
        const bool branch_taken_0x1dbc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC1Cu;
            // 0x1dbc20: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc1c) {
            ctx->pc = 0x1DC61Cu;
            goto label_1dc61c;
        }
    }
    ctx->pc = 0x1DBC24u;
label_1dbc24:
    // 0x1dbc24: 0xc076df0  jal         func_1DB7C0
label_1dbc28:
    if (ctx->pc == 0x1DBC28u) {
        ctx->pc = 0x1DBC2Cu;
        goto label_1dbc2c;
    }
    ctx->pc = 0x1DBC24u;
    SET_GPR_U32(ctx, 31, 0x1DBC2Cu);
    ctx->pc = 0x1DB7C0u;
    if (runtime->hasFunction(0x1DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC2Cu; }
        if (ctx->pc != 0x1DBC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchActiveMonsterBlock__11CMonsterManFv_0x1db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC2Cu; }
        if (ctx->pc != 0x1DBC2Cu) { return; }
    }
    ctx->pc = 0x1DBC2Cu;
label_1dbc2c:
    // 0x1dbc2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dbc2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dbc30:
    // 0x1dbc30: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
label_1dbc34:
    if (ctx->pc == 0x1DBC34u) {
        ctx->pc = 0x1DBC34u;
            // 0x1dbc34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC38u;
        goto label_1dbc38;
    }
    ctx->pc = 0x1DBC30u;
    {
        const bool branch_taken_0x1dbc30 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1DBC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC30u;
            // 0x1dbc34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc30) {
            ctx->pc = 0x1DBC40u;
            goto label_1dbc40;
        }
    }
    ctx->pc = 0x1DBC38u;
label_1dbc38:
    // 0x1dbc38: 0x10000277  b           . + 4 + (0x277 << 2)
label_1dbc3c:
    if (ctx->pc == 0x1DBC3Cu) {
        ctx->pc = 0x1DBC40u;
        goto label_1dbc40;
    }
    ctx->pc = 0x1DBC38u;
    {
        const bool branch_taken_0x1dbc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbc38) {
            ctx->pc = 0x1DC618u;
            goto label_1dc618;
        }
    }
    ctx->pc = 0x1DBC40u;
label_1dbc40:
    // 0x1dbc40: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1dbc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1dbc44:
    // 0x1dbc44: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x1dbc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
label_1dbc48:
    // 0x1dbc48: 0xc0683a8  jal         func_1A0EA0
label_1dbc4c:
    if (ctx->pc == 0x1DBC4Cu) {
        ctx->pc = 0x1DBC4Cu;
            // 0x1dbc4c: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x1DBC50u;
        goto label_1dbc50;
    }
    ctx->pc = 0x1DBC48u;
    SET_GPR_U32(ctx, 31, 0x1DBC50u);
    ctx->pc = 0x1DBC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC48u;
            // 0x1dbc4c: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC50u; }
        if (ctx->pc != 0x1DBC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC50u; }
        if (ctx->pc != 0x1DBC50u) { return; }
    }
    ctx->pc = 0x1DBC50u;
label_1dbc50:
    // 0x1dbc50: 0xc067c94  jal         func_19F250
label_1dbc54:
    if (ctx->pc == 0x1DBC54u) {
        ctx->pc = 0x1DBC54u;
            // 0x1dbc54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC58u;
        goto label_1dbc58;
    }
    ctx->pc = 0x1DBC50u;
    SET_GPR_U32(ctx, 31, 0x1DBC58u);
    ctx->pc = 0x1DBC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC50u;
            // 0x1dbc54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F250u;
    if (runtime->hasFunction(0x19F250u)) {
        auto targetFn = runtime->lookupFunction(0x19F250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC58u; }
        if (ctx->pc != 0x1DBC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowNPC__16CBattleCharaInfoFv_0x19f250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC58u; }
        if (ctx->pc != 0x1DBC58u) { return; }
    }
    ctx->pc = 0x1DBC58u;
label_1dbc58:
    // 0x1dbc58: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x1dbc58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_1dbc5c:
    // 0x1dbc5c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1dbc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1dbc60:
    // 0x1dbc60: 0xc0a0ed8  jal         func_283B60
label_1dbc64:
    if (ctx->pc == 0x1DBC64u) {
        ctx->pc = 0x1DBC64u;
            // 0x1dbc64: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->pc = 0x1DBC68u;
        goto label_1dbc68;
    }
    ctx->pc = 0x1DBC60u;
    SET_GPR_U32(ctx, 31, 0x1DBC68u);
    ctx->pc = 0x1DBC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC60u;
            // 0x1dbc64: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC68u; }
        if (ctx->pc != 0x1DBC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBC68u; }
        if (ctx->pc != 0x1DBC68u) { return; }
    }
    ctx->pc = 0x1DBC68u;
label_1dbc68:
    // 0x1dbc68: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1dbc68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1dbc6c:
    // 0x1dbc6c: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1dbc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1dbc70:
    // 0x1dbc70: 0xac620484  sw          $v0, 0x484($v1)
    ctx->pc = 0x1dbc70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1156), GPR_U32(ctx, 2));
label_1dbc74:
    // 0x1dbc74: 0x24620484  addiu       $v0, $v1, 0x484
    ctx->pc = 0x1dbc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1156));
label_1dbc78:
    // 0x1dbc78: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1dbc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_1dbc7c:
    // 0x1dbc7c: 0x8c620484  lw          $v0, 0x484($v1)
    ctx->pc = 0x1dbc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1156)));
label_1dbc80:
    // 0x1dbc80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dbc84:
    if (ctx->pc == 0x1DBC84u) {
        ctx->pc = 0x1DBC84u;
            // 0x1dbc84: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x1DBC88u;
        goto label_1dbc88;
    }
    ctx->pc = 0x1DBC80u;
    {
        const bool branch_taken_0x1dbc80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC80u;
            // 0x1dbc84: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc80) {
            ctx->pc = 0x1DBC90u;
            goto label_1dbc90;
        }
    }
    ctx->pc = 0x1DBC88u;
label_1dbc88:
    // 0x1dbc88: 0x10000263  b           . + 4 + (0x263 << 2)
label_1dbc8c:
    if (ctx->pc == 0x1DBC8Cu) {
        ctx->pc = 0x1DBC8Cu;
            // 0x1dbc8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC90u;
        goto label_1dbc90;
    }
    ctx->pc = 0x1DBC88u;
    {
        const bool branch_taken_0x1dbc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBC88u;
            // 0x1dbc8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc88) {
            ctx->pc = 0x1DC618u;
            goto label_1dc618;
        }
    }
    ctx->pc = 0x1DBC90u;
label_1dbc90:
    // 0x1dbc90: 0x3401fff4  ori         $at, $zero, 0xFFF4
    ctx->pc = 0x1dbc90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65524);
label_1dbc94:
    // 0x1dbc94: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1dbc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1dbc98:
    // 0x1dbc98: 0x2a12021  addu        $a0, $s5, $at
    ctx->pc = 0x1dbc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
label_1dbc9c:
    // 0x1dbc9c: 0x2b900  sll         $s7, $v0, 4
    ctx->pc = 0x1dbc9cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1dbca0:
    // 0x1dbca0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dbca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dbca4:
    // 0x1dbca4: 0x2f51021  addu        $v0, $s7, $s5
    ctx->pc = 0x1dbca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 21)));
label_1dbca8:
    // 0x1dbca8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dbca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dbcac:
    // 0x1dbcac: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1dbcacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_1dbcb0:
    // 0x1dbcb0: 0xc076b90  jal         func_1DAE40
label_1dbcb4:
    if (ctx->pc == 0x1DBCB4u) {
        ctx->pc = 0x1DBCB4u;
            // 0x1dbcb4: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->pc = 0x1DBCB8u;
        goto label_1dbcb8;
    }
    ctx->pc = 0x1DBCB0u;
    SET_GPR_U32(ctx, 31, 0x1DBCB8u);
    ctx->pc = 0x1DBCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBCB0u;
            // 0x1dbcb4: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DAE40u;
    if (runtime->hasFunction(0x1DAE40u)) {
        auto targetFn = runtime->lookupFunction(0x1DAE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBCB8u; }
        if (ctx->pc != 0x1DBCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPutFlag__18CMonsterLocateInfoFii_0x1dae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBCB8u; }
        if (ctx->pc != 0x1DBCB8u) { return; }
    }
    ctx->pc = 0x1DBCB8u;
label_1dbcb8:
    // 0x1dbcb8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1dbcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1dbcbc:
    // 0x1dbcbc: 0x2751821  addu        $v1, $s3, $s5
    ctx->pc = 0x1dbcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_1dbcc0:
    // 0x1dbcc0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1dbcc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dbcc4:
    // 0x1dbcc4: 0x246204f0  addiu       $v0, $v1, 0x4F0
    ctx->pc = 0x1dbcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1264));
label_1dbcc8:
    // 0x1dbcc8: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1dbcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_1dbccc:
    // 0x1dbccc: 0x8c6504f0  lw          $a1, 0x4F0($v1)
    ctx->pc = 0x1dbcccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1264)));
label_1dbcd0:
    // 0x1dbcd0: 0xc076de0  jal         func_1DB780
label_1dbcd4:
    if (ctx->pc == 0x1DBCD4u) {
        ctx->pc = 0x1DBCD4u;
            // 0x1dbcd4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBCD8u;
        goto label_1dbcd8;
    }
    ctx->pc = 0x1DBCD0u;
    SET_GPR_U32(ctx, 31, 0x1DBCD8u);
    ctx->pc = 0x1DBCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBCD0u;
            // 0x1dbcd4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB780u;
    if (runtime->hasFunction(0x1DB780u)) {
        auto targetFn = runtime->lookupFunction(0x1DB780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBCD8u; }
        if (ctx->pc != 0x1DBCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReferPtr2__11CMonsterManFi_0x1db780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBCD8u; }
        if (ctx->pc != 0x1DBCD8u) { return; }
    }
    ctx->pc = 0x1DBCD8u;
label_1dbcd8:
    // 0x1dbcd8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dbcd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dbcdc:
    // 0x1dbcdc: 0x844200b4  lh          $v0, 0xB4($v0)
    ctx->pc = 0x1dbcdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 180)));
label_1dbce0:
    // 0x1dbce0: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1dbce4:
    if (ctx->pc == 0x1DBCE4u) {
        ctx->pc = 0x1DBCE4u;
            // 0x1dbce4: 0x2b31021  addu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->pc = 0x1DBCE8u;
        goto label_1dbce8;
    }
    ctx->pc = 0x1DBCE0u;
    {
        const bool branch_taken_0x1dbce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBCE0u;
            // 0x1dbce4: 0x2b31021  addu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbce0) {
            ctx->pc = 0x1DBD4Cu;
            goto label_1dbd4c;
        }
    }
    ctx->pc = 0x1DBCE8u;
label_1dbce8:
    // 0x1dbce8: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x1dbce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_1dbcec:
    // 0x1dbcec: 0x8c590500  lw          $t9, 0x500($v0)
    ctx->pc = 0x1dbcecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1280)));
label_1dbcf0:
    // 0x1dbcf0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dbcf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dbcf4:
    // 0x1dbcf4: 0x24540500  addiu       $s4, $v0, 0x500
    ctx->pc = 0x1dbcf4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1280));
label_1dbcf8:
    // 0x1dbcf8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1dbcf8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1dbcfc:
    // 0x1dbcfc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dbcfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dbd00:
    // 0x1dbd00: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1dbd00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1dbd04:
    // 0x1dbd04: 0x320f809  jalr        $t9
label_1dbd08:
    if (ctx->pc == 0x1DBD08u) {
        ctx->pc = 0x1DBD08u;
            // 0x1dbd08: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1DBD0Cu;
        goto label_1dbd0c;
    }
    ctx->pc = 0x1DBD04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DBD0Cu);
        ctx->pc = 0x1DBD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBD04u;
            // 0x1dbd08: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DBD0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DBD0Cu; }
            if (ctx->pc != 0x1DBD0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1DBD0Cu;
label_1dbd0c:
    // 0x1dbd0c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x1dbd0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1dbd10:
    // 0x1dbd10: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dbd10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dbd14:
    // 0x1dbd14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dbd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dbd18:
    // 0x1dbd18: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1dbd18u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1dbd1c:
    // 0x1dbd1c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1dbd1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1dbd20:
    // 0x1dbd20: 0x320f809  jalr        $t9
label_1dbd24:
    if (ctx->pc == 0x1DBD24u) {
        ctx->pc = 0x1DBD24u;
            // 0x1dbd24: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1DBD28u;
        goto label_1dbd28;
    }
    ctx->pc = 0x1DBD20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DBD28u);
        ctx->pc = 0x1DBD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBD20u;
            // 0x1dbd24: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DBD28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DBD28u; }
            if (ctx->pc != 0x1DBD28u) { return; }
        }
        }
    }
    ctx->pc = 0x1DBD28u;
label_1dbd28:
    // 0x1dbd28: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x1dbd28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1dbd2c:
    // 0x1dbd2c: 0x2b71021  addu        $v0, $s5, $s7
    ctx->pc = 0x1dbd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
label_1dbd30:
    // 0x1dbd30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dbd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dbd34:
    // 0x1dbd34: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x1dbd34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1dbd38:
    // 0x1dbd38: 0x8f390120  lw          $t9, 0x120($t9)
    ctx->pc = 0x1dbd38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 288)));
label_1dbd3c:
    // 0x1dbd3c: 0x320f809  jalr        $t9
label_1dbd40:
    if (ctx->pc == 0x1DBD40u) {
        ctx->pc = 0x1DBD40u;
            // 0x1dbd40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DBD44u;
        goto label_1dbd44;
    }
    ctx->pc = 0x1DBD3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DBD44u);
        ctx->pc = 0x1DBD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBD3Cu;
            // 0x1dbd40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DBD44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DBD44u; }
            if (ctx->pc != 0x1DBD44u) { return; }
        }
        }
    }
    ctx->pc = 0x1DBD44u;
label_1dbd44:
    // 0x1dbd44: 0x1000010d  b           . + 4 + (0x10D << 2)
label_1dbd48:
    if (ctx->pc == 0x1DBD48u) {
        ctx->pc = 0x1DBD48u;
            // 0x1dbd48: 0x8242006a  lb          $v0, 0x6A($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 106)));
        ctx->pc = 0x1DBD4Cu;
        goto label_1dbd4c;
    }
    ctx->pc = 0x1DBD44u;
    {
        const bool branch_taken_0x1dbd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBD44u;
            // 0x1dbd48: 0x8242006a  lb          $v0, 0x6A($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 106)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd44) {
            ctx->pc = 0x1DC17Cu;
            goto label_1dc17c;
        }
    }
    ctx->pc = 0x1DBD4Cu;
label_1dbd4c:
    // 0x1dbd4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbd4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dbd50:
    // 0x1dbd50: 0xc0768b8  jal         func_1DA2E0
label_1dbd54:
    if (ctx->pc == 0x1DBD54u) {
        ctx->pc = 0x1DBD54u;
            // 0x1dbd54: 0x24450500  addiu       $a1, $v0, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1280));
        ctx->pc = 0x1DBD58u;
        goto label_1dbd58;
    }
    ctx->pc = 0x1DBD50u;
    SET_GPR_U32(ctx, 31, 0x1DBD58u);
    ctx->pc = 0x1DBD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBD50u;
            // 0x1dbd54: 0x24450500  addiu       $a1, $v0, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA2E0u;
    if (runtime->hasFunction(0x1DA2E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBD58u; }
        if (ctx->pc != 0x1DBD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__12CActionCharaFRC12CActionChara_0x1da2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBD58u; }
        if (ctx->pc != 0x1DBD58u) { return; }
    }
    ctx->pc = 0x1DBD58u;
label_1dbd58:
    // 0x1dbd58: 0x2751021  addu        $v0, $s3, $s5
    ctx->pc = 0x1dbd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_1dbd5c:
    // 0x1dbd5c: 0x26241040  addiu       $a0, $s1, 0x1040
    ctx->pc = 0x1dbd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4160));
label_1dbd60:
    // 0x1dbd60: 0xc4431530  lwc1        $f3, 0x1530($v0)
    ctx->pc = 0x1dbd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1dbd64:
    // 0x1dbd64: 0x24451540  addiu       $a1, $v0, 0x1540
    ctx->pc = 0x1dbd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5440));
label_1dbd68:
    // 0x1dbd68: 0xc4421534  lwc1        $f2, 0x1534($v0)
    ctx->pc = 0x1dbd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dbd6c:
    // 0x1dbd6c: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x1dbd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1dbd70:
    // 0x1dbd70: 0xc4411538  lwc1        $f1, 0x1538($v0)
    ctx->pc = 0x1dbd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dbd74:
    // 0x1dbd74: 0xc440153c  lwc1        $f0, 0x153C($v0)
    ctx->pc = 0x1dbd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dbd78:
    // 0x1dbd78: 0xe6231030  swc1        $f3, 0x1030($s1)
    ctx->pc = 0x1dbd78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4144), bits); }
label_1dbd7c:
    // 0x1dbd7c: 0xe6221034  swc1        $f2, 0x1034($s1)
    ctx->pc = 0x1dbd7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4148), bits); }
label_1dbd80:
    // 0x1dbd80: 0xe6211038  swc1        $f1, 0x1038($s1)
    ctx->pc = 0x1dbd80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4152), bits); }
label_1dbd84:
    // 0x1dbd84: 0xe620103c  swc1        $f0, 0x103C($s1)
    ctx->pc = 0x1dbd84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4156), bits); }
label_1dbd88:
    // 0x1dbd88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1dbd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1dbd8c:
    // 0x1dbd8c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1dbd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1dbd90:
    // 0x1dbd90: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1dbd90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1dbd94:
    // 0x1dbd94: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1dbd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1dbd98:
    // 0x1dbd98: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1dbd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1dbd9c:
    // 0x1dbd9c: 0x0  nop
    ctx->pc = 0x1dbd9cu;
    // NOP
label_1dbda0:
    // 0x1dbda0: 0x1c60fff9  bgtz        $v1, . + 4 + (-0x7 << 2)
label_1dbda4:
    if (ctx->pc == 0x1DBDA4u) {
        ctx->pc = 0x1DBDA8u;
        goto label_1dbda8;
    }
    ctx->pc = 0x1DBDA0u;
    {
        const bool branch_taken_0x1dbda0 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1dbda0) {
            ctx->pc = 0x1DBD88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dbd88;
        }
    }
    ctx->pc = 0x1DBDA8u;
label_1dbda8:
    // 0x1dbda8: 0x2751021  addu        $v0, $s3, $s5
    ctx->pc = 0x1dbda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_1dbdac:
    // 0x1dbdac: 0x26251094  addiu       $a1, $s1, 0x1094
    ctx->pc = 0x1dbdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4244));
label_1dbdb0:
    // 0x1dbdb0: 0x24461594  addiu       $a2, $v0, 0x1594
    ctx->pc = 0x1dbdb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5524));
label_1dbdb4:
    // 0x1dbdb4: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1dbdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1dbdb8:
    // 0x1dbdb8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1dbdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1dbdbc:
    // 0x1dbdbc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1dbdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1dbdc0:
    // 0x1dbdc0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1dbdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1dbdc4:
    // 0x1dbdc4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1dbdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1dbdc8:
    // 0x1dbdc8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1dbdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_1dbdcc:
    // 0x1dbdcc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1dbdccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_1dbdd0:
    // 0x1dbdd0: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_1dbdd4:
    if (ctx->pc == 0x1DBDD4u) {
        ctx->pc = 0x1DBDD4u;
            // 0x1dbdd4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x1DBDD8u;
        goto label_1dbdd8;
    }
    ctx->pc = 0x1DBDD0u;
    {
        const bool branch_taken_0x1dbdd0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1DBDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBDD0u;
            // 0x1dbdd4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbdd0) {
            ctx->pc = 0x1DBDB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dbdb8;
        }
    }
    ctx->pc = 0x1DBDD8u;
label_1dbdd8:
    // 0x1dbdd8: 0x2751821  addu        $v1, $s3, $s5
    ctx->pc = 0x1dbdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_1dbddc:
    // 0x1dbddc: 0x2625117c  addiu       $a1, $s1, 0x117C
    ctx->pc = 0x1dbddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4476));
label_1dbde0:
    // 0x1dbde0: 0x8c62164c  lw          $v0, 0x164C($v1)
    ctx->pc = 0x1dbde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5708)));
label_1dbde4:
    // 0x1dbde4: 0x2466167c  addiu       $a2, $v1, 0x167C
    ctx->pc = 0x1dbde4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 5756));
label_1dbde8:
    // 0x1dbde8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1dbde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1dbdec:
    // 0x1dbdec: 0xae22114c  sw          $v0, 0x114C($s1)
    ctx->pc = 0x1dbdecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4428), GPR_U32(ctx, 2));
label_1dbdf0:
    // 0x1dbdf0: 0x8c621650  lw          $v0, 0x1650($v1)
    ctx->pc = 0x1dbdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5712)));
label_1dbdf4:
    // 0x1dbdf4: 0xae221150  sw          $v0, 0x1150($s1)
    ctx->pc = 0x1dbdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4432), GPR_U32(ctx, 2));
label_1dbdf8:
    // 0x1dbdf8: 0x84621654  lh          $v0, 0x1654($v1)
    ctx->pc = 0x1dbdf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5716)));
label_1dbdfc:
    // 0x1dbdfc: 0xa6221154  sh          $v0, 0x1154($s1)
    ctx->pc = 0x1dbdfcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4436), (uint16_t)GPR_U32(ctx, 2));
label_1dbe00:
    // 0x1dbe00: 0x84621656  lh          $v0, 0x1656($v1)
    ctx->pc = 0x1dbe00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5718)));
label_1dbe04:
    // 0x1dbe04: 0xa6221156  sh          $v0, 0x1156($s1)
    ctx->pc = 0x1dbe04u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4438), (uint16_t)GPR_U32(ctx, 2));
label_1dbe08:
    // 0x1dbe08: 0x84621658  lh          $v0, 0x1658($v1)
    ctx->pc = 0x1dbe08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5720)));
label_1dbe0c:
    // 0x1dbe0c: 0xa6221158  sh          $v0, 0x1158($s1)
    ctx->pc = 0x1dbe0cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4440), (uint16_t)GPR_U32(ctx, 2));
label_1dbe10:
    // 0x1dbe10: 0x8462165a  lh          $v0, 0x165A($v1)
    ctx->pc = 0x1dbe10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5722)));
label_1dbe14:
    // 0x1dbe14: 0xa622115a  sh          $v0, 0x115A($s1)
    ctx->pc = 0x1dbe14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4442), (uint16_t)GPR_U32(ctx, 2));
label_1dbe18:
    // 0x1dbe18: 0xc463165c  lwc1        $f3, 0x165C($v1)
    ctx->pc = 0x1dbe18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1dbe1c:
    // 0x1dbe1c: 0xc4621660  lwc1        $f2, 0x1660($v1)
    ctx->pc = 0x1dbe1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dbe20:
    // 0x1dbe20: 0xc4611664  lwc1        $f1, 0x1664($v1)
    ctx->pc = 0x1dbe20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dbe24:
    // 0x1dbe24: 0xc4601668  lwc1        $f0, 0x1668($v1)
    ctx->pc = 0x1dbe24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dbe28:
    // 0x1dbe28: 0xe623115c  swc1        $f3, 0x115C($s1)
    ctx->pc = 0x1dbe28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4444), bits); }
label_1dbe2c:
    // 0x1dbe2c: 0xe6221160  swc1        $f2, 0x1160($s1)
    ctx->pc = 0x1dbe2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4448), bits); }
label_1dbe30:
    // 0x1dbe30: 0xe6211164  swc1        $f1, 0x1164($s1)
    ctx->pc = 0x1dbe30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4452), bits); }
label_1dbe34:
    // 0x1dbe34: 0xe6201168  swc1        $f0, 0x1168($s1)
    ctx->pc = 0x1dbe34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4456), bits); }
label_1dbe38:
    // 0x1dbe38: 0xc463166c  lwc1        $f3, 0x166C($v1)
    ctx->pc = 0x1dbe38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1dbe3c:
    // 0x1dbe3c: 0xc4621670  lwc1        $f2, 0x1670($v1)
    ctx->pc = 0x1dbe3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dbe40:
    // 0x1dbe40: 0xc4611674  lwc1        $f1, 0x1674($v1)
    ctx->pc = 0x1dbe40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dbe44:
    // 0x1dbe44: 0xc4601678  lwc1        $f0, 0x1678($v1)
    ctx->pc = 0x1dbe44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dbe48:
    // 0x1dbe48: 0xe623116c  swc1        $f3, 0x116C($s1)
    ctx->pc = 0x1dbe48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4460), bits); }
label_1dbe4c:
    // 0x1dbe4c: 0xe6221170  swc1        $f2, 0x1170($s1)
    ctx->pc = 0x1dbe4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4464), bits); }
label_1dbe50:
    // 0x1dbe50: 0xe6211174  swc1        $f1, 0x1174($s1)
    ctx->pc = 0x1dbe50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4468), bits); }
label_1dbe54:
    // 0x1dbe54: 0xe6201178  swc1        $f0, 0x1178($s1)
    ctx->pc = 0x1dbe54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4472), bits); }
label_1dbe58:
    // 0x1dbe58: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1dbe58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1dbe5c:
    // 0x1dbe5c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1dbe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1dbe60:
    // 0x1dbe60: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1dbe60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1dbe64:
    // 0x1dbe64: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1dbe64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1dbe68:
    // 0x1dbe68: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1dbe68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_1dbe6c:
    // 0x1dbe6c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1dbe6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_1dbe70:
    // 0x1dbe70: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_1dbe74:
    if (ctx->pc == 0x1DBE74u) {
        ctx->pc = 0x1DBE74u;
            // 0x1dbe74: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x1DBE78u;
        goto label_1dbe78;
    }
    ctx->pc = 0x1DBE70u;
    {
        const bool branch_taken_0x1dbe70 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1DBE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBE70u;
            // 0x1dbe74: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbe70) {
            ctx->pc = 0x1DBE58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dbe58;
        }
    }
    ctx->pc = 0x1DBE78u;
label_1dbe78:
    // 0x1dbe78: 0x2751021  addu        $v0, $s3, $s5
    ctx->pc = 0x1dbe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_1dbe7c:
    // 0x1dbe7c: 0x26241360  addiu       $a0, $s1, 0x1360
    ctx->pc = 0x1dbe7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4960));
label_1dbe80:
    // 0x1dbe80: 0x8c4616fc  lw          $a2, 0x16FC($v0)
    ctx->pc = 0x1dbe80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5884)));
label_1dbe84:
    // 0x1dbe84: 0x24451860  addiu       $a1, $v0, 0x1860
    ctx->pc = 0x1dbe84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6240));
label_1dbe88:
    // 0x1dbe88: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1dbe88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1dbe8c:
    // 0x1dbe8c: 0xae2611fc  sw          $a2, 0x11FC($s1)
    ctx->pc = 0x1dbe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4604), GPR_U32(ctx, 6));
label_1dbe90:
    // 0x1dbe90: 0x8c461700  lw          $a2, 0x1700($v0)
    ctx->pc = 0x1dbe90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5888)));
label_1dbe94:
    // 0x1dbe94: 0xae261200  sw          $a2, 0x1200($s1)
    ctx->pc = 0x1dbe94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4608), GPR_U32(ctx, 6));
label_1dbe98:
    // 0x1dbe98: 0x84461704  lh          $a2, 0x1704($v0)
    ctx->pc = 0x1dbe98u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5892)));
label_1dbe9c:
    // 0x1dbe9c: 0xa6261204  sh          $a2, 0x1204($s1)
    ctx->pc = 0x1dbe9cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4612), (uint16_t)GPR_U32(ctx, 6));
label_1dbea0:
    // 0x1dbea0: 0x8c461708  lw          $a2, 0x1708($v0)
    ctx->pc = 0x1dbea0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5896)));
label_1dbea4:
    // 0x1dbea4: 0xae261208  sw          $a2, 0x1208($s1)
    ctx->pc = 0x1dbea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4616), GPR_U32(ctx, 6));
label_1dbea8:
    // 0x1dbea8: 0x8c46170c  lw          $a2, 0x170C($v0)
    ctx->pc = 0x1dbea8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5900)));
label_1dbeac:
    // 0x1dbeac: 0xae26120c  sw          $a2, 0x120C($s1)
    ctx->pc = 0x1dbeacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4620), GPR_U32(ctx, 6));
label_1dbeb0:
    // 0x1dbeb0: 0x8c461710  lw          $a2, 0x1710($v0)
    ctx->pc = 0x1dbeb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5904)));
label_1dbeb4:
    // 0x1dbeb4: 0xae261210  sw          $a2, 0x1210($s1)
    ctx->pc = 0x1dbeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4624), GPR_U32(ctx, 6));
label_1dbeb8:
    // 0x1dbeb8: 0x8c461714  lw          $a2, 0x1714($v0)
    ctx->pc = 0x1dbeb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5908)));
label_1dbebc:
    // 0x1dbebc: 0xae261214  sw          $a2, 0x1214($s1)
    ctx->pc = 0x1dbebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4628), GPR_U32(ctx, 6));
label_1dbec0:
    // 0x1dbec0: 0x78491720  lq          $t1, 0x1720($v0)
    ctx->pc = 0x1dbec0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 5920)));
label_1dbec4:
    // 0x1dbec4: 0x78481730  lq          $t0, 0x1730($v0)
    ctx->pc = 0x1dbec4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 5936)));
label_1dbec8:
    // 0x1dbec8: 0x78471740  lq          $a3, 0x1740($v0)
    ctx->pc = 0x1dbec8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 5952)));
label_1dbecc:
    // 0x1dbecc: 0x78461750  lq          $a2, 0x1750($v0)
    ctx->pc = 0x1dbeccu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 5968)));
label_1dbed0:
    // 0x1dbed0: 0x7e291220  sq          $t1, 0x1220($s1)
    ctx->pc = 0x1dbed0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4640), GPR_VEC(ctx, 9));
label_1dbed4:
    // 0x1dbed4: 0x7e281230  sq          $t0, 0x1230($s1)
    ctx->pc = 0x1dbed4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4656), GPR_VEC(ctx, 8));
label_1dbed8:
    // 0x1dbed8: 0x7e271240  sq          $a3, 0x1240($s1)
    ctx->pc = 0x1dbed8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4672), GPR_VEC(ctx, 7));
label_1dbedc:
    // 0x1dbedc: 0x7e261250  sq          $a2, 0x1250($s1)
    ctx->pc = 0x1dbedcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4688), GPR_VEC(ctx, 6));
label_1dbee0:
    // 0x1dbee0: 0x78461760  lq          $a2, 0x1760($v0)
    ctx->pc = 0x1dbee0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 5984)));
label_1dbee4:
    // 0x1dbee4: 0x7e261260  sq          $a2, 0x1260($s1)
    ctx->pc = 0x1dbee4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4704), GPR_VEC(ctx, 6));
label_1dbee8:
    // 0x1dbee8: 0xc4431770  lwc1        $f3, 0x1770($v0)
    ctx->pc = 0x1dbee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1dbeec:
    // 0x1dbeec: 0xc4421774  lwc1        $f2, 0x1774($v0)
    ctx->pc = 0x1dbeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dbef0:
    // 0x1dbef0: 0xc4411778  lwc1        $f1, 0x1778($v0)
    ctx->pc = 0x1dbef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dbef4:
    // 0x1dbef4: 0xc440177c  lwc1        $f0, 0x177C($v0)
    ctx->pc = 0x1dbef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dbef8:
    // 0x1dbef8: 0xe6231270  swc1        $f3, 0x1270($s1)
    ctx->pc = 0x1dbef8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4720), bits); }
label_1dbefc:
    // 0x1dbefc: 0xe6221274  swc1        $f2, 0x1274($s1)
    ctx->pc = 0x1dbefcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4724), bits); }
label_1dbf00:
    // 0x1dbf00: 0xe6211278  swc1        $f1, 0x1278($s1)
    ctx->pc = 0x1dbf00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4728), bits); }
label_1dbf04:
    // 0x1dbf04: 0xe620127c  swc1        $f0, 0x127C($s1)
    ctx->pc = 0x1dbf04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4732), bits); }
label_1dbf08:
    // 0x1dbf08: 0xc4431780  lwc1        $f3, 0x1780($v0)
    ctx->pc = 0x1dbf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1dbf0c:
    // 0x1dbf0c: 0xc4421784  lwc1        $f2, 0x1784($v0)
    ctx->pc = 0x1dbf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dbf10:
    // 0x1dbf10: 0xc4411788  lwc1        $f1, 0x1788($v0)
    ctx->pc = 0x1dbf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dbf14:
    // 0x1dbf14: 0xc440178c  lwc1        $f0, 0x178C($v0)
    ctx->pc = 0x1dbf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dbf18:
    // 0x1dbf18: 0xe6231280  swc1        $f3, 0x1280($s1)
    ctx->pc = 0x1dbf18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4736), bits); }
label_1dbf1c:
    // 0x1dbf1c: 0xe6221284  swc1        $f2, 0x1284($s1)
    ctx->pc = 0x1dbf1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4740), bits); }
label_1dbf20:
    // 0x1dbf20: 0xe6211288  swc1        $f1, 0x1288($s1)
    ctx->pc = 0x1dbf20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4744), bits); }
label_1dbf24:
    // 0x1dbf24: 0xe620128c  swc1        $f0, 0x128C($s1)
    ctx->pc = 0x1dbf24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4748), bits); }
label_1dbf28:
    // 0x1dbf28: 0xc4431790  lwc1        $f3, 0x1790($v0)
    ctx->pc = 0x1dbf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1dbf2c:
    // 0x1dbf2c: 0xc4421794  lwc1        $f2, 0x1794($v0)
    ctx->pc = 0x1dbf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dbf30:
    // 0x1dbf30: 0xc4411798  lwc1        $f1, 0x1798($v0)
    ctx->pc = 0x1dbf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dbf34:
    // 0x1dbf34: 0xc440179c  lwc1        $f0, 0x179C($v0)
    ctx->pc = 0x1dbf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dbf38:
    // 0x1dbf38: 0xe6231290  swc1        $f3, 0x1290($s1)
    ctx->pc = 0x1dbf38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4752), bits); }
label_1dbf3c:
    // 0x1dbf3c: 0xe6221294  swc1        $f2, 0x1294($s1)
    ctx->pc = 0x1dbf3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4756), bits); }
label_1dbf40:
    // 0x1dbf40: 0xe6211298  swc1        $f1, 0x1298($s1)
    ctx->pc = 0x1dbf40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4760), bits); }
label_1dbf44:
    // 0x1dbf44: 0xe620129c  swc1        $f0, 0x129C($s1)
    ctx->pc = 0x1dbf44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4764), bits); }
label_1dbf48:
    // 0x1dbf48: 0xc44017a0  lwc1        $f0, 0x17A0($v0)
    ctx->pc = 0x1dbf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dbf4c:
    // 0x1dbf4c: 0xe62012a0  swc1        $f0, 0x12A0($s1)
    ctx->pc = 0x1dbf4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4768), bits); }
label_1dbf50:
    // 0x1dbf50: 0x844617a4  lh          $a2, 0x17A4($v0)
    ctx->pc = 0x1dbf50u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6052)));
label_1dbf54:
    // 0x1dbf54: 0xa62612a4  sh          $a2, 0x12A4($s1)
    ctx->pc = 0x1dbf54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4772), (uint16_t)GPR_U32(ctx, 6));
label_1dbf58:
    // 0x1dbf58: 0xc44317a8  lwc1        $f3, 0x17A8($v0)
    ctx->pc = 0x1dbf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1dbf5c:
    // 0x1dbf5c: 0xc44217ac  lwc1        $f2, 0x17AC($v0)
    ctx->pc = 0x1dbf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dbf60:
    // 0x1dbf60: 0xc44117b0  lwc1        $f1, 0x17B0($v0)
    ctx->pc = 0x1dbf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dbf64:
    // 0x1dbf64: 0xc44017b4  lwc1        $f0, 0x17B4($v0)
    ctx->pc = 0x1dbf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dbf68:
    // 0x1dbf68: 0xe62312a8  swc1        $f3, 0x12A8($s1)
    ctx->pc = 0x1dbf68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4776), bits); }
label_1dbf6c:
    // 0x1dbf6c: 0xe62212ac  swc1        $f2, 0x12AC($s1)
    ctx->pc = 0x1dbf6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4780), bits); }
label_1dbf70:
    // 0x1dbf70: 0xe62112b0  swc1        $f1, 0x12B0($s1)
    ctx->pc = 0x1dbf70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4784), bits); }
label_1dbf74:
    // 0x1dbf74: 0xe62012b4  swc1        $f0, 0x12B4($s1)
    ctx->pc = 0x1dbf74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4788), bits); }
label_1dbf78:
    // 0x1dbf78: 0xc44117b8  lwc1        $f1, 0x17B8($v0)
    ctx->pc = 0x1dbf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dbf7c:
    // 0x1dbf7c: 0xc44017bc  lwc1        $f0, 0x17BC($v0)
    ctx->pc = 0x1dbf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dbf80:
    // 0x1dbf80: 0xe62112b8  swc1        $f1, 0x12B8($s1)
    ctx->pc = 0x1dbf80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4792), bits); }
label_1dbf84:
    // 0x1dbf84: 0xe62012bc  swc1        $f0, 0x12BC($s1)
    ctx->pc = 0x1dbf84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4796), bits); }
label_1dbf88:
    // 0x1dbf88: 0xc44117c0  lwc1        $f1, 0x17C0($v0)
    ctx->pc = 0x1dbf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dbf8c:
    // 0x1dbf8c: 0xc44017c4  lwc1        $f0, 0x17C4($v0)
    ctx->pc = 0x1dbf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dbf90:
    // 0x1dbf90: 0xe62112c0  swc1        $f1, 0x12C0($s1)
    ctx->pc = 0x1dbf90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4800), bits); }
label_1dbf94:
    // 0x1dbf94: 0xe62012c4  swc1        $f0, 0x12C4($s1)
    ctx->pc = 0x1dbf94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4804), bits); }
label_1dbf98:
    // 0x1dbf98: 0xc44117c8  lwc1        $f1, 0x17C8($v0)
    ctx->pc = 0x1dbf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dbf9c:
    // 0x1dbf9c: 0xc44017cc  lwc1        $f0, 0x17CC($v0)
    ctx->pc = 0x1dbf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dbfa0:
    // 0x1dbfa0: 0xe62112c8  swc1        $f1, 0x12C8($s1)
    ctx->pc = 0x1dbfa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4808), bits); }
label_1dbfa4:
    // 0x1dbfa4: 0xe62012cc  swc1        $f0, 0x12CC($s1)
    ctx->pc = 0x1dbfa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4812), bits); }
label_1dbfa8:
    // 0x1dbfa8: 0xc44317d0  lwc1        $f3, 0x17D0($v0)
    ctx->pc = 0x1dbfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1dbfac:
    // 0x1dbfac: 0xc44217d4  lwc1        $f2, 0x17D4($v0)
    ctx->pc = 0x1dbfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dbfb0:
    // 0x1dbfb0: 0xc44117d8  lwc1        $f1, 0x17D8($v0)
    ctx->pc = 0x1dbfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dbfb4:
    // 0x1dbfb4: 0xc44017dc  lwc1        $f0, 0x17DC($v0)
    ctx->pc = 0x1dbfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dbfb8:
    // 0x1dbfb8: 0xe62312d0  swc1        $f3, 0x12D0($s1)
    ctx->pc = 0x1dbfb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4816), bits); }
label_1dbfbc:
    // 0x1dbfbc: 0xe62212d4  swc1        $f2, 0x12D4($s1)
    ctx->pc = 0x1dbfbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4820), bits); }
label_1dbfc0:
    // 0x1dbfc0: 0xe62112d8  swc1        $f1, 0x12D8($s1)
    ctx->pc = 0x1dbfc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4824), bits); }
label_1dbfc4:
    // 0x1dbfc4: 0xe62012dc  swc1        $f0, 0x12DC($s1)
    ctx->pc = 0x1dbfc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4828), bits); }
label_1dbfc8:
    // 0x1dbfc8: 0x844617e0  lh          $a2, 0x17E0($v0)
    ctx->pc = 0x1dbfc8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6112)));
label_1dbfcc:
    // 0x1dbfcc: 0xa62612e0  sh          $a2, 0x12E0($s1)
    ctx->pc = 0x1dbfccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4832), (uint16_t)GPR_U32(ctx, 6));
label_1dbfd0:
    // 0x1dbfd0: 0x844617e2  lh          $a2, 0x17E2($v0)
    ctx->pc = 0x1dbfd0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6114)));
label_1dbfd4:
    // 0x1dbfd4: 0xa62612e2  sh          $a2, 0x12E2($s1)
    ctx->pc = 0x1dbfd4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4834), (uint16_t)GPR_U32(ctx, 6));
label_1dbfd8:
    // 0x1dbfd8: 0x844617e4  lh          $a2, 0x17E4($v0)
    ctx->pc = 0x1dbfd8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6116)));
label_1dbfdc:
    // 0x1dbfdc: 0xa62612e4  sh          $a2, 0x12E4($s1)
    ctx->pc = 0x1dbfdcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4836), (uint16_t)GPR_U32(ctx, 6));
label_1dbfe0:
    // 0x1dbfe0: 0xc44017e8  lwc1        $f0, 0x17E8($v0)
    ctx->pc = 0x1dbfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dbfe4:
    // 0x1dbfe4: 0xe62012e8  swc1        $f0, 0x12E8($s1)
    ctx->pc = 0x1dbfe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4840), bits); }
label_1dbfe8:
    // 0x1dbfe8: 0xc44017ec  lwc1        $f0, 0x17EC($v0)
    ctx->pc = 0x1dbfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dbfec:
    // 0x1dbfec: 0xe62012ec  swc1        $f0, 0x12EC($s1)
    ctx->pc = 0x1dbfecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4844), bits); }
label_1dbff0:
    // 0x1dbff0: 0x844617f0  lh          $a2, 0x17F0($v0)
    ctx->pc = 0x1dbff0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6128)));
label_1dbff4:
    // 0x1dbff4: 0xa62612f0  sh          $a2, 0x12F0($s1)
    ctx->pc = 0x1dbff4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4848), (uint16_t)GPR_U32(ctx, 6));
label_1dbff8:
    // 0x1dbff8: 0xc44017f4  lwc1        $f0, 0x17F4($v0)
    ctx->pc = 0x1dbff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dbffc:
    // 0x1dbffc: 0xe62012f4  swc1        $f0, 0x12F4($s1)
    ctx->pc = 0x1dbffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4852), bits); }
label_1dc000:
    // 0x1dc000: 0xc44017f8  lwc1        $f0, 0x17F8($v0)
    ctx->pc = 0x1dc000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dc004:
    // 0x1dc004: 0xe62012f8  swc1        $f0, 0x12F8($s1)
    ctx->pc = 0x1dc004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4856), bits); }
label_1dc008:
    // 0x1dc008: 0xc44017fc  lwc1        $f0, 0x17FC($v0)
    ctx->pc = 0x1dc008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dc00c:
    // 0x1dc00c: 0xe62012fc  swc1        $f0, 0x12FC($s1)
    ctx->pc = 0x1dc00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4860), bits); }
label_1dc010:
    // 0x1dc010: 0xc4401800  lwc1        $f0, 0x1800($v0)
    ctx->pc = 0x1dc010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dc014:
    // 0x1dc014: 0xe6201300  swc1        $f0, 0x1300($s1)
    ctx->pc = 0x1dc014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4864), bits); }
label_1dc018:
    // 0x1dc018: 0xc4401804  lwc1        $f0, 0x1804($v0)
    ctx->pc = 0x1dc018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dc01c:
    // 0x1dc01c: 0xe6201304  swc1        $f0, 0x1304($s1)
    ctx->pc = 0x1dc01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4868), bits); }
label_1dc020:
    // 0x1dc020: 0x84461808  lh          $a2, 0x1808($v0)
    ctx->pc = 0x1dc020u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6152)));
label_1dc024:
    // 0x1dc024: 0xa6261308  sh          $a2, 0x1308($s1)
    ctx->pc = 0x1dc024u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4872), (uint16_t)GPR_U32(ctx, 6));
label_1dc028:
    // 0x1dc028: 0xc440180c  lwc1        $f0, 0x180C($v0)
    ctx->pc = 0x1dc028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dc02c:
    // 0x1dc02c: 0xe620130c  swc1        $f0, 0x130C($s1)
    ctx->pc = 0x1dc02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4876), bits); }
label_1dc030:
    // 0x1dc030: 0x8c461810  lw          $a2, 0x1810($v0)
    ctx->pc = 0x1dc030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6160)));
label_1dc034:
    // 0x1dc034: 0xae261310  sw          $a2, 0x1310($s1)
    ctx->pc = 0x1dc034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4880), GPR_U32(ctx, 6));
label_1dc038:
    // 0x1dc038: 0x8c461814  lw          $a2, 0x1814($v0)
    ctx->pc = 0x1dc038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6164)));
label_1dc03c:
    // 0x1dc03c: 0xae261314  sw          $a2, 0x1314($s1)
    ctx->pc = 0x1dc03cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4884), GPR_U32(ctx, 6));
label_1dc040:
    // 0x1dc040: 0x94461818  lhu         $a2, 0x1818($v0)
    ctx->pc = 0x1dc040u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6168)));
label_1dc044:
    // 0x1dc044: 0xa6261318  sh          $a2, 0x1318($s1)
    ctx->pc = 0x1dc044u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4888), (uint16_t)GPR_U32(ctx, 6));
label_1dc048:
    // 0x1dc048: 0x8446181a  lh          $a2, 0x181A($v0)
    ctx->pc = 0x1dc048u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6170)));
label_1dc04c:
    // 0x1dc04c: 0xa626131a  sh          $a2, 0x131A($s1)
    ctx->pc = 0x1dc04cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4890), (uint16_t)GPR_U32(ctx, 6));
label_1dc050:
    // 0x1dc050: 0xc440181c  lwc1        $f0, 0x181C($v0)
    ctx->pc = 0x1dc050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dc054:
    // 0x1dc054: 0xe620131c  swc1        $f0, 0x131C($s1)
    ctx->pc = 0x1dc054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4892), bits); }
label_1dc058:
    // 0x1dc058: 0x84461820  lh          $a2, 0x1820($v0)
    ctx->pc = 0x1dc058u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6176)));
label_1dc05c:
    // 0x1dc05c: 0xa6261320  sh          $a2, 0x1320($s1)
    ctx->pc = 0x1dc05cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4896), (uint16_t)GPR_U32(ctx, 6));
label_1dc060:
    // 0x1dc060: 0x94461822  lhu         $a2, 0x1822($v0)
    ctx->pc = 0x1dc060u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6178)));
label_1dc064:
    // 0x1dc064: 0xa6261322  sh          $a2, 0x1322($s1)
    ctx->pc = 0x1dc064u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4898), (uint16_t)GPR_U32(ctx, 6));
label_1dc068:
    // 0x1dc068: 0x94461824  lhu         $a2, 0x1824($v0)
    ctx->pc = 0x1dc068u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6180)));
label_1dc06c:
    // 0x1dc06c: 0xa6261324  sh          $a2, 0x1324($s1)
    ctx->pc = 0x1dc06cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4900), (uint16_t)GPR_U32(ctx, 6));
label_1dc070:
    // 0x1dc070: 0x94461826  lhu         $a2, 0x1826($v0)
    ctx->pc = 0x1dc070u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6182)));
label_1dc074:
    // 0x1dc074: 0xa6261326  sh          $a2, 0x1326($s1)
    ctx->pc = 0x1dc074u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4902), (uint16_t)GPR_U32(ctx, 6));
label_1dc078:
    // 0x1dc078: 0x8c461828  lw          $a2, 0x1828($v0)
    ctx->pc = 0x1dc078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6184)));
label_1dc07c:
    // 0x1dc07c: 0xae261328  sw          $a2, 0x1328($s1)
    ctx->pc = 0x1dc07cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4904), GPR_U32(ctx, 6));
label_1dc080:
    // 0x1dc080: 0x8c46182c  lw          $a2, 0x182C($v0)
    ctx->pc = 0x1dc080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6188)));
label_1dc084:
    // 0x1dc084: 0xae26132c  sw          $a2, 0x132C($s1)
    ctx->pc = 0x1dc084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4908), GPR_U32(ctx, 6));
label_1dc088:
    // 0x1dc088: 0x8c461830  lw          $a2, 0x1830($v0)
    ctx->pc = 0x1dc088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6192)));
label_1dc08c:
    // 0x1dc08c: 0xae261330  sw          $a2, 0x1330($s1)
    ctx->pc = 0x1dc08cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4912), GPR_U32(ctx, 6));
label_1dc090:
    // 0x1dc090: 0x8c461834  lw          $a2, 0x1834($v0)
    ctx->pc = 0x1dc090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6196)));
label_1dc094:
    // 0x1dc094: 0xae261334  sw          $a2, 0x1334($s1)
    ctx->pc = 0x1dc094u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4916), GPR_U32(ctx, 6));
label_1dc098:
    // 0x1dc098: 0x84461838  lh          $a2, 0x1838($v0)
    ctx->pc = 0x1dc098u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6200)));
label_1dc09c:
    // 0x1dc09c: 0xa6261338  sh          $a2, 0x1338($s1)
    ctx->pc = 0x1dc09cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4920), (uint16_t)GPR_U32(ctx, 6));
label_1dc0a0:
    // 0x1dc0a0: 0x8446183a  lh          $a2, 0x183A($v0)
    ctx->pc = 0x1dc0a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6202)));
label_1dc0a4:
    // 0x1dc0a4: 0xa626133a  sh          $a2, 0x133A($s1)
    ctx->pc = 0x1dc0a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4922), (uint16_t)GPR_U32(ctx, 6));
label_1dc0a8:
    // 0x1dc0a8: 0xc442183c  lwc1        $f2, 0x183C($v0)
    ctx->pc = 0x1dc0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dc0ac:
    // 0x1dc0ac: 0xc4411840  lwc1        $f1, 0x1840($v0)
    ctx->pc = 0x1dc0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dc0b0:
    // 0x1dc0b0: 0xc4401844  lwc1        $f0, 0x1844($v0)
    ctx->pc = 0x1dc0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dc0b4:
    // 0x1dc0b4: 0xe622133c  swc1        $f2, 0x133C($s1)
    ctx->pc = 0x1dc0b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4924), bits); }
label_1dc0b8:
    // 0x1dc0b8: 0xe6211340  swc1        $f1, 0x1340($s1)
    ctx->pc = 0x1dc0b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4928), bits); }
label_1dc0bc:
    // 0x1dc0bc: 0xe6201344  swc1        $f0, 0x1344($s1)
    ctx->pc = 0x1dc0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4932), bits); }
label_1dc0c0:
    // 0x1dc0c0: 0x8c461848  lw          $a2, 0x1848($v0)
    ctx->pc = 0x1dc0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6216)));
label_1dc0c4:
    // 0x1dc0c4: 0xae261348  sw          $a2, 0x1348($s1)
    ctx->pc = 0x1dc0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4936), GPR_U32(ctx, 6));
label_1dc0c8:
    // 0x1dc0c8: 0x8c46184c  lw          $a2, 0x184C($v0)
    ctx->pc = 0x1dc0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6220)));
label_1dc0cc:
    // 0x1dc0cc: 0xae26134c  sw          $a2, 0x134C($s1)
    ctx->pc = 0x1dc0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4940), GPR_U32(ctx, 6));
label_1dc0d0:
    // 0x1dc0d0: 0x8c461850  lw          $a2, 0x1850($v0)
    ctx->pc = 0x1dc0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6224)));
label_1dc0d4:
    // 0x1dc0d4: 0xae261350  sw          $a2, 0x1350($s1)
    ctx->pc = 0x1dc0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4944), GPR_U32(ctx, 6));
label_1dc0d8:
    // 0x1dc0d8: 0x84461854  lh          $a2, 0x1854($v0)
    ctx->pc = 0x1dc0d8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6228)));
label_1dc0dc:
    // 0x1dc0dc: 0xa6261354  sh          $a2, 0x1354($s1)
    ctx->pc = 0x1dc0dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4948), (uint16_t)GPR_U32(ctx, 6));
label_1dc0e0:
    // 0x1dc0e0: 0x84461856  lh          $a2, 0x1856($v0)
    ctx->pc = 0x1dc0e0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6230)));
label_1dc0e4:
    // 0x1dc0e4: 0xa6261356  sh          $a2, 0x1356($s1)
    ctx->pc = 0x1dc0e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4950), (uint16_t)GPR_U32(ctx, 6));
label_1dc0e8:
    // 0x1dc0e8: 0x80421858  lb          $v0, 0x1858($v0)
    ctx->pc = 0x1dc0e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 6232)));
label_1dc0ec:
    // 0x1dc0ec: 0xa2221358  sb          $v0, 0x1358($s1)
    ctx->pc = 0x1dc0ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4952), (uint8_t)GPR_U32(ctx, 2));
label_1dc0f0:
    // 0x1dc0f0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1dc0f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1dc0f4:
    // 0x1dc0f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1dc0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1dc0f8:
    // 0x1dc0f8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1dc0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_1dc0fc:
    // 0x1dc0fc: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1dc0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1dc100:
    // 0x1dc100: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1dc100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1dc104:
    // 0x1dc104: 0x0  nop
    ctx->pc = 0x1dc104u;
    // NOP
label_1dc108:
    // 0x1dc108: 0x1c60fff9  bgtz        $v1, . + 4 + (-0x7 << 2)
label_1dc10c:
    if (ctx->pc == 0x1DC10Cu) {
        ctx->pc = 0x1DC110u;
        goto label_1dc110;
    }
    ctx->pc = 0x1DC108u;
    {
        const bool branch_taken_0x1dc108 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1dc108) {
            ctx->pc = 0x1DC0F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dc0f0;
        }
    }
    ctx->pc = 0x1DC110u;
label_1dc110:
    // 0x1dc110: 0x2751821  addu        $v1, $s3, $s5
    ctx->pc = 0x1dc110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_1dc114:
    // 0x1dc114: 0xc4631970  lwc1        $f3, 0x1970($v1)
    ctx->pc = 0x1dc114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1dc118:
    // 0x1dc118: 0xc4621974  lwc1        $f2, 0x1974($v1)
    ctx->pc = 0x1dc118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dc11c:
    // 0x1dc11c: 0xc4611978  lwc1        $f1, 0x1978($v1)
    ctx->pc = 0x1dc11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dc120:
    // 0x1dc120: 0xc460197c  lwc1        $f0, 0x197C($v1)
    ctx->pc = 0x1dc120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dc124:
    // 0x1dc124: 0xe6231470  swc1        $f3, 0x1470($s1)
    ctx->pc = 0x1dc124u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5232), bits); }
label_1dc128:
    // 0x1dc128: 0xe6221474  swc1        $f2, 0x1474($s1)
    ctx->pc = 0x1dc128u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5236), bits); }
label_1dc12c:
    // 0x1dc12c: 0xe6211478  swc1        $f1, 0x1478($s1)
    ctx->pc = 0x1dc12cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5240), bits); }
label_1dc130:
    // 0x1dc130: 0xe620147c  swc1        $f0, 0x147C($s1)
    ctx->pc = 0x1dc130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5244), bits); }
label_1dc134:
    // 0x1dc134: 0xc4601980  lwc1        $f0, 0x1980($v1)
    ctx->pc = 0x1dc134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dc138:
    // 0x1dc138: 0xe6201480  swc1        $f0, 0x1480($s1)
    ctx->pc = 0x1dc138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5248), bits); }
label_1dc13c:
    // 0x1dc13c: 0xc4601984  lwc1        $f0, 0x1984($v1)
    ctx->pc = 0x1dc13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dc140:
    // 0x1dc140: 0xe6201484  swc1        $f0, 0x1484($s1)
    ctx->pc = 0x1dc140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5252), bits); }
label_1dc144:
    // 0x1dc144: 0x8c621988  lw          $v0, 0x1988($v1)
    ctx->pc = 0x1dc144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6536)));
label_1dc148:
    // 0x1dc148: 0xae221488  sw          $v0, 0x1488($s1)
    ctx->pc = 0x1dc148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5256), GPR_U32(ctx, 2));
label_1dc14c:
    // 0x1dc14c: 0x8c62198c  lw          $v0, 0x198C($v1)
    ctx->pc = 0x1dc14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6540)));
label_1dc150:
    // 0x1dc150: 0xae22148c  sw          $v0, 0x148C($s1)
    ctx->pc = 0x1dc150u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5260), GPR_U32(ctx, 2));
label_1dc154:
    // 0x1dc154: 0xc4601990  lwc1        $f0, 0x1990($v1)
    ctx->pc = 0x1dc154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dc158:
    // 0x1dc158: 0xe6201490  swc1        $f0, 0x1490($s1)
    ctx->pc = 0x1dc158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5264), bits); }
label_1dc15c:
    // 0x1dc15c: 0xc4601994  lwc1        $f0, 0x1994($v1)
    ctx->pc = 0x1dc15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dc160:
    // 0x1dc160: 0xe6201494  swc1        $f0, 0x1494($s1)
    ctx->pc = 0x1dc160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5268), bits); }
label_1dc164:
    // 0x1dc164: 0x8e2203d0  lw          $v0, 0x3D0($s1)
    ctx->pc = 0x1dc164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 976)));
label_1dc168:
    // 0x1dc168: 0xae220500  sw          $v0, 0x500($s1)
    ctx->pc = 0x1dc168u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1280), GPR_U32(ctx, 2));
label_1dc16c:
    // 0x1dc16c: 0x8e220470  lw          $v0, 0x470($s1)
    ctx->pc = 0x1dc16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1136)));
label_1dc170:
    // 0x1dc170: 0xae220504  sw          $v0, 0x504($s1)
    ctx->pc = 0x1dc170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1284), GPR_U32(ctx, 2));
label_1dc174:
    // 0x1dc174: 0xae200374  sw          $zero, 0x374($s1)
    ctx->pc = 0x1dc174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 884), GPR_U32(ctx, 0));
label_1dc178:
    // 0x1dc178: 0x8242006a  lb          $v0, 0x6A($s2)
    ctx->pc = 0x1dc178u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 106)));
label_1dc17c:
    // 0x1dc17c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dc180:
    if (ctx->pc == 0x1DC180u) {
        ctx->pc = 0x1DC184u;
        goto label_1dc184;
    }
    ctx->pc = 0x1DC17Cu;
    {
        const bool branch_taken_0x1dc17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc17c) {
            ctx->pc = 0x1DC190u;
            goto label_1dc190;
        }
    }
    ctx->pc = 0x1DC184u;
label_1dc184:
    // 0x1dc184: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1dc188:
    // 0x1dc188: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dc188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc18c:
    // 0x1dc18c: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x1dc18cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
label_1dc190:
    // 0x1dc190: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1dc190u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1dc194:
    // 0x1dc194: 0x8f3900b4  lw          $t9, 0xB4($t9)
    ctx->pc = 0x1dc194u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 180)));
label_1dc198:
    // 0x1dc198: 0x320f809  jalr        $t9
label_1dc19c:
    if (ctx->pc == 0x1DC19Cu) {
        ctx->pc = 0x1DC19Cu;
            // 0x1dc19c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC1A0u;
        goto label_1dc1a0;
    }
    ctx->pc = 0x1DC198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DC1A0u);
        ctx->pc = 0x1DC19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC198u;
            // 0x1dc19c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DC1A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1A0u; }
            if (ctx->pc != 0x1DC1A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1DC1A0u;
label_1dc1a0:
    // 0x1dc1a0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1dc1a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1dc1a4:
    // 0x1dc1a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dc1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dc1a8:
    // 0x1dc1a8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1dc1a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1dc1ac:
    // 0x1dc1ac: 0x320f809  jalr        $t9
label_1dc1b0:
    if (ctx->pc == 0x1DC1B0u) {
        ctx->pc = 0x1DC1B0u;
            // 0x1dc1b0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC1B4u;
        goto label_1dc1b4;
    }
    ctx->pc = 0x1DC1ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DC1B4u);
        ctx->pc = 0x1DC1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC1ACu;
            // 0x1dc1b0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DC1B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1B4u; }
            if (ctx->pc != 0x1DC1B4u) { return; }
        }
        }
    }
    ctx->pc = 0x1DC1B4u;
label_1dc1b4:
    // 0x1dc1b4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1dc1b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1dc1b8:
    // 0x1dc1b8: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1dc1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1dc1bc:
    // 0x1dc1bc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1dc1bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1dc1c0:
    // 0x1dc1c0: 0x320f809  jalr        $t9
label_1dc1c4:
    if (ctx->pc == 0x1DC1C4u) {
        ctx->pc = 0x1DC1C4u;
            // 0x1dc1c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC1C8u;
        goto label_1dc1c8;
    }
    ctx->pc = 0x1DC1C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DC1C8u);
        ctx->pc = 0x1DC1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC1C0u;
            // 0x1dc1c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DC1C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1C8u; }
            if (ctx->pc != 0x1DC1C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1DC1C8u;
label_1dc1c8:
    // 0x1dc1c8: 0xc05cdc0  jal         func_173700
label_1dc1cc:
    if (ctx->pc == 0x1DC1CCu) {
        ctx->pc = 0x1DC1CCu;
            // 0x1dc1cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC1D0u;
        goto label_1dc1d0;
    }
    ctx->pc = 0x1DC1C8u;
    SET_GPR_U32(ctx, 31, 0x1DC1D0u);
    ctx->pc = 0x1DC1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC1C8u;
            // 0x1dc1cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173700u;
    if (runtime->hasFunction(0x173700u)) {
        auto targetFn = runtime->lookupFunction(0x173700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1D0u; }
        if (ctx->pc != 0x1DC1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdatePosition__11CCharacter2Fv_0x173700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1D0u; }
        if (ctx->pc != 0x1DC1D0u) { return; }
    }
    ctx->pc = 0x1DC1D0u;
label_1dc1d0:
    // 0x1dc1d0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1dc1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1dc1d4:
    // 0x1dc1d4: 0xc041c5c  jal         func_107170
label_1dc1d8:
    if (ctx->pc == 0x1DC1D8u) {
        ctx->pc = 0x1DC1D8u;
            // 0x1dc1d8: 0x26241030  addiu       $a0, $s1, 0x1030 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4144));
        ctx->pc = 0x1DC1DCu;
        goto label_1dc1dc;
    }
    ctx->pc = 0x1DC1D4u;
    SET_GPR_U32(ctx, 31, 0x1DC1DCu);
    ctx->pc = 0x1DC1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC1D4u;
            // 0x1dc1d8: 0x26241030  addiu       $a0, $s1, 0x1030 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1DCu; }
        if (ctx->pc != 0x1DC1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC1DCu; }
        if (ctx->pc != 0x1DC1DCu) { return; }
    }
    ctx->pc = 0x1DC1DCu;
label_1dc1dc:
    // 0x1dc1dc: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x1dc1dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_1dc1e0:
    // 0x1dc1e0: 0x26460004  addiu       $a2, $s2, 0x4
    ctx->pc = 0x1dc1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1dc1e4:
    // 0x1dc1e4: 0x26251098  addiu       $a1, $s1, 0x1098
    ctx->pc = 0x1dc1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4248));
label_1dc1e8:
    // 0x1dc1e8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1dc1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1dc1ec:
    // 0x1dc1ec: 0xa6221094  sh          $v0, 0x1094($s1)
    ctx->pc = 0x1dc1ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4244), (uint16_t)GPR_U32(ctx, 2));
label_1dc1f0:
    // 0x1dc1f0: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x1dc1f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_1dc1f4:
    // 0x1dc1f4: 0xa6221096  sh          $v0, 0x1096($s1)
    ctx->pc = 0x1dc1f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4246), (uint16_t)GPR_U32(ctx, 2));
label_1dc1f8:
    // 0x1dc1f8: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x1dc1f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1dc1fc:
    // 0x1dc1fc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1dc1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1dc200:
    // 0x1dc200: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x1dc200u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_1dc204:
    // 0x1dc204: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1dc204u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_1dc208:
    // 0x1dc208: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x1dc208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_1dc20c:
    // 0x1dc20c: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x1dc20cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_1dc210:
    // 0x1dc210: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_1dc214:
    if (ctx->pc == 0x1DC214u) {
        ctx->pc = 0x1DC214u;
            // 0x1dc214: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x1DC218u;
        goto label_1dc218;
    }
    ctx->pc = 0x1DC210u;
    {
        const bool branch_taken_0x1dc210 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1DC214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC210u;
            // 0x1dc214: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc210) {
            ctx->pc = 0x1DC1F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dc1f8;
        }
    }
    ctx->pc = 0x1DC218u;
label_1dc218:
    // 0x1dc218: 0x26460024  addiu       $a2, $s2, 0x24
    ctx->pc = 0x1dc218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_1dc21c:
    // 0x1dc21c: 0x262510b8  addiu       $a1, $s1, 0x10B8
    ctx->pc = 0x1dc21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4280));
label_1dc220:
    // 0x1dc220: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1dc220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1dc224:
    // 0x1dc224: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x1dc224u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1dc228:
    // 0x1dc228: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1dc228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1dc22c:
    // 0x1dc22c: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x1dc22cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_1dc230:
    // 0x1dc230: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1dc230u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_1dc234:
    // 0x1dc234: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x1dc234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_1dc238:
    // 0x1dc238: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x1dc238u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_1dc23c:
    // 0x1dc23c: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_1dc240:
    if (ctx->pc == 0x1DC240u) {
        ctx->pc = 0x1DC240u;
            // 0x1dc240: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x1DC244u;
        goto label_1dc244;
    }
    ctx->pc = 0x1DC23Cu;
    {
        const bool branch_taken_0x1dc23c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1DC240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC23Cu;
            // 0x1dc240: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc23c) {
            ctx->pc = 0x1DC224u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dc224;
        }
    }
    ctx->pc = 0x1DC244u;
label_1dc244:
    // 0x1dc244: 0x26460034  addiu       $a2, $s2, 0x34
    ctx->pc = 0x1dc244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
label_1dc248:
    // 0x1dc248: 0x262510c8  addiu       $a1, $s1, 0x10C8
    ctx->pc = 0x1dc248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4296));
label_1dc24c:
    // 0x1dc24c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1dc24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1dc250:
    // 0x1dc250: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x1dc250u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1dc254:
    // 0x1dc254: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1dc254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1dc258:
    // 0x1dc258: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x1dc258u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_1dc25c:
    // 0x1dc25c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1dc25cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_1dc260:
    // 0x1dc260: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x1dc260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_1dc264:
    // 0x1dc264: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x1dc264u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_1dc268:
    // 0x1dc268: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_1dc26c:
    if (ctx->pc == 0x1DC26Cu) {
        ctx->pc = 0x1DC26Cu;
            // 0x1dc26c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x1DC270u;
        goto label_1dc270;
    }
    ctx->pc = 0x1DC268u;
    {
        const bool branch_taken_0x1dc268 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1DC26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC268u;
            // 0x1dc26c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc268) {
            ctx->pc = 0x1DC250u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dc250;
        }
    }
    ctx->pc = 0x1DC270u;
label_1dc270:
    // 0x1dc270: 0x86420044  lh          $v0, 0x44($s2)
    ctx->pc = 0x1dc270u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 68)));
label_1dc274:
    // 0x1dc274: 0x2646006c  addiu       $a2, $s2, 0x6C
    ctx->pc = 0x1dc274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
label_1dc278:
    // 0x1dc278: 0x26251100  addiu       $a1, $s1, 0x1100
    ctx->pc = 0x1dc278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4352));
label_1dc27c:
    // 0x1dc27c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1dc27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dc280:
    // 0x1dc280: 0xa62210d8  sh          $v0, 0x10D8($s1)
    ctx->pc = 0x1dc280u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4312), (uint16_t)GPR_U32(ctx, 2));
label_1dc284:
    // 0x1dc284: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x1dc284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_1dc288:
    // 0x1dc288: 0xae2210dc  sw          $v0, 0x10DC($s1)
    ctx->pc = 0x1dc288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4316), GPR_U32(ctx, 2));
label_1dc28c:
    // 0x1dc28c: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x1dc28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_1dc290:
    // 0x1dc290: 0xae2210e0  sw          $v0, 0x10E0($s1)
    ctx->pc = 0x1dc290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4320), GPR_U32(ctx, 2));
label_1dc294:
    // 0x1dc294: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x1dc294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_1dc298:
    // 0x1dc298: 0xae2210e4  sw          $v0, 0x10E4($s1)
    ctx->pc = 0x1dc298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4324), GPR_U32(ctx, 2));
label_1dc29c:
    // 0x1dc29c: 0x82420054  lb          $v0, 0x54($s2)
    ctx->pc = 0x1dc29cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 84)));
label_1dc2a0:
    // 0x1dc2a0: 0xa22210e8  sb          $v0, 0x10E8($s1)
    ctx->pc = 0x1dc2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4328), (uint8_t)GPR_U32(ctx, 2));
label_1dc2a4:
    // 0x1dc2a4: 0x96420056  lhu         $v0, 0x56($s2)
    ctx->pc = 0x1dc2a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 86)));
label_1dc2a8:
    // 0x1dc2a8: 0xa62210ea  sh          $v0, 0x10EA($s1)
    ctx->pc = 0x1dc2a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4330), (uint16_t)GPR_U32(ctx, 2));
label_1dc2ac:
    // 0x1dc2ac: 0x96420058  lhu         $v0, 0x58($s2)
    ctx->pc = 0x1dc2acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 88)));
label_1dc2b0:
    // 0x1dc2b0: 0xa62210ec  sh          $v0, 0x10EC($s1)
    ctx->pc = 0x1dc2b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4332), (uint16_t)GPR_U32(ctx, 2));
label_1dc2b4:
    // 0x1dc2b4: 0x9642005a  lhu         $v0, 0x5A($s2)
    ctx->pc = 0x1dc2b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 90)));
label_1dc2b8:
    // 0x1dc2b8: 0xa62210ee  sh          $v0, 0x10EE($s1)
    ctx->pc = 0x1dc2b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4334), (uint16_t)GPR_U32(ctx, 2));
label_1dc2bc:
    // 0x1dc2bc: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x1dc2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dc2c0:
    // 0x1dc2c0: 0xe62010f0  swc1        $f0, 0x10F0($s1)
    ctx->pc = 0x1dc2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4336), bits); }
label_1dc2c4:
    // 0x1dc2c4: 0x96420060  lhu         $v0, 0x60($s2)
    ctx->pc = 0x1dc2c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
label_1dc2c8:
    // 0x1dc2c8: 0xa62210f4  sh          $v0, 0x10F4($s1)
    ctx->pc = 0x1dc2c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4340), (uint16_t)GPR_U32(ctx, 2));
label_1dc2cc:
    // 0x1dc2cc: 0x82420062  lb          $v0, 0x62($s2)
    ctx->pc = 0x1dc2ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 98)));
label_1dc2d0:
    // 0x1dc2d0: 0xa22210f6  sb          $v0, 0x10F6($s1)
    ctx->pc = 0x1dc2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4342), (uint8_t)GPR_U32(ctx, 2));
label_1dc2d4:
    // 0x1dc2d4: 0x82420063  lb          $v0, 0x63($s2)
    ctx->pc = 0x1dc2d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 99)));
label_1dc2d8:
    // 0x1dc2d8: 0xa22210f7  sb          $v0, 0x10F7($s1)
    ctx->pc = 0x1dc2d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4343), (uint8_t)GPR_U32(ctx, 2));
label_1dc2dc:
    // 0x1dc2dc: 0x82420064  lb          $v0, 0x64($s2)
    ctx->pc = 0x1dc2dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 100)));
label_1dc2e0:
    // 0x1dc2e0: 0xa22210f8  sb          $v0, 0x10F8($s1)
    ctx->pc = 0x1dc2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4344), (uint8_t)GPR_U32(ctx, 2));
label_1dc2e4:
    // 0x1dc2e4: 0x96420066  lhu         $v0, 0x66($s2)
    ctx->pc = 0x1dc2e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 102)));
label_1dc2e8:
    // 0x1dc2e8: 0xa62210fa  sh          $v0, 0x10FA($s1)
    ctx->pc = 0x1dc2e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4346), (uint16_t)GPR_U32(ctx, 2));
label_1dc2ec:
    // 0x1dc2ec: 0x92420068  lbu         $v0, 0x68($s2)
    ctx->pc = 0x1dc2ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
label_1dc2f0:
    // 0x1dc2f0: 0xa22210fc  sb          $v0, 0x10FC($s1)
    ctx->pc = 0x1dc2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4348), (uint8_t)GPR_U32(ctx, 2));
label_1dc2f4:
    // 0x1dc2f4: 0x82420069  lb          $v0, 0x69($s2)
    ctx->pc = 0x1dc2f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 105)));
label_1dc2f8:
    // 0x1dc2f8: 0xa22210fd  sb          $v0, 0x10FD($s1)
    ctx->pc = 0x1dc2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4349), (uint8_t)GPR_U32(ctx, 2));
label_1dc2fc:
    // 0x1dc2fc: 0x8242006a  lb          $v0, 0x6A($s2)
    ctx->pc = 0x1dc2fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 106)));
label_1dc300:
    // 0x1dc300: 0xa22210fe  sb          $v0, 0x10FE($s1)
    ctx->pc = 0x1dc300u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4350), (uint8_t)GPR_U32(ctx, 2));
label_1dc304:
    // 0x1dc304: 0x8242006b  lb          $v0, 0x6B($s2)
    ctx->pc = 0x1dc304u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 107)));
label_1dc308:
    // 0x1dc308: 0xa22210ff  sb          $v0, 0x10FF($s1)
    ctx->pc = 0x1dc308u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4351), (uint8_t)GPR_U32(ctx, 2));
label_1dc30c:
    // 0x1dc30c: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x1dc30cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_1dc310:
    // 0x1dc310: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1dc310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1dc314:
    // 0x1dc314: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x1dc314u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_1dc318:
    // 0x1dc318: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1dc318u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_1dc31c:
    // 0x1dc31c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1dc31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1dc320:
    // 0x1dc320: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x1dc320u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
label_1dc324:
    // 0x1dc324: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_1dc328:
    if (ctx->pc == 0x1DC328u) {
        ctx->pc = 0x1DC328u;
            // 0x1dc328: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x1DC32Cu;
        goto label_1dc32c;
    }
    ctx->pc = 0x1DC324u;
    {
        const bool branch_taken_0x1dc324 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1DC328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC324u;
            // 0x1dc328: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc324) {
            ctx->pc = 0x1DC30Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dc30c;
        }
    }
    ctx->pc = 0x1DC32Cu;
label_1dc32c:
    // 0x1dc32c: 0x2646007c  addiu       $a2, $s2, 0x7C
    ctx->pc = 0x1dc32cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 124));
label_1dc330:
    // 0x1dc330: 0x26251110  addiu       $a1, $s1, 0x1110
    ctx->pc = 0x1dc330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4368));
label_1dc334:
    // 0x1dc334: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1dc334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1dc338:
    // 0x1dc338: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x1dc338u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_1dc33c:
    // 0x1dc33c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1dc33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1dc340:
    // 0x1dc340: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x1dc340u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_1dc344:
    // 0x1dc344: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1dc344u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_1dc348:
    // 0x1dc348: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1dc348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1dc34c:
    // 0x1dc34c: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x1dc34cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
label_1dc350:
    // 0x1dc350: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_1dc354:
    if (ctx->pc == 0x1DC354u) {
        ctx->pc = 0x1DC354u;
            // 0x1dc354: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x1DC358u;
        goto label_1dc358;
    }
    ctx->pc = 0x1DC350u;
    {
        const bool branch_taken_0x1dc350 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1DC354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC350u;
            // 0x1dc354: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc350) {
            ctx->pc = 0x1DC338u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dc338;
        }
    }
    ctx->pc = 0x1DC358u;
label_1dc358:
    // 0x1dc358: 0x8e480094  lw          $t0, 0x94($s2)
    ctx->pc = 0x1dc358u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1dc35c:
    // 0x1dc35c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dc35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc360:
    // 0x1dc360: 0x26221094  addiu       $v0, $s1, 0x1094
    ctx->pc = 0x1dc360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4244));
label_1dc364:
    // 0x1dc364: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x1dc364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_1dc368:
    // 0x1dc368: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1dc368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dc36c:
    // 0x1dc36c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dc36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dc370:
    // 0x1dc370: 0xae281128  sw          $t0, 0x1128($s1)
    ctx->pc = 0x1dc370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4392), GPR_U32(ctx, 8));
label_1dc374:
    // 0x1dc374: 0x8e480098  lw          $t0, 0x98($s2)
    ctx->pc = 0x1dc374u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_1dc378:
    // 0x1dc378: 0xae28112c  sw          $t0, 0x112C($s1)
    ctx->pc = 0x1dc378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4396), GPR_U32(ctx, 8));
label_1dc37c:
    // 0x1dc37c: 0x8e48009c  lw          $t0, 0x9C($s2)
    ctx->pc = 0x1dc37cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_1dc380:
    // 0x1dc380: 0xae281130  sw          $t0, 0x1130($s1)
    ctx->pc = 0x1dc380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4400), GPR_U32(ctx, 8));
label_1dc384:
    // 0x1dc384: 0x864a00a0  lh          $t2, 0xA0($s2)
    ctx->pc = 0x1dc384u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 160)));
label_1dc388:
    // 0x1dc388: 0x864900a2  lh          $t1, 0xA2($s2)
    ctx->pc = 0x1dc388u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 162)));
label_1dc38c:
    // 0x1dc38c: 0x864800a4  lh          $t0, 0xA4($s2)
    ctx->pc = 0x1dc38cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 164)));
label_1dc390:
    // 0x1dc390: 0xa62a1134  sh          $t2, 0x1134($s1)
    ctx->pc = 0x1dc390u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4404), (uint16_t)GPR_U32(ctx, 10));
label_1dc394:
    // 0x1dc394: 0xa6291136  sh          $t1, 0x1136($s1)
    ctx->pc = 0x1dc394u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4406), (uint16_t)GPR_U32(ctx, 9));
label_1dc398:
    // 0x1dc398: 0xa6281138  sh          $t0, 0x1138($s1)
    ctx->pc = 0x1dc398u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4408), (uint16_t)GPR_U32(ctx, 8));
label_1dc39c:
    // 0x1dc39c: 0x8e4800a8  lw          $t0, 0xA8($s2)
    ctx->pc = 0x1dc39cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
label_1dc3a0:
    // 0x1dc3a0: 0xae28113c  sw          $t0, 0x113C($s1)
    ctx->pc = 0x1dc3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4412), GPR_U32(ctx, 8));
label_1dc3a4:
    // 0x1dc3a4: 0x864800ac  lh          $t0, 0xAC($s2)
    ctx->pc = 0x1dc3a4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 172)));
label_1dc3a8:
    // 0x1dc3a8: 0xa6281140  sh          $t0, 0x1140($s1)
    ctx->pc = 0x1dc3a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4416), (uint16_t)GPR_U32(ctx, 8));
label_1dc3ac:
    // 0x1dc3ac: 0x864800ae  lh          $t0, 0xAE($s2)
    ctx->pc = 0x1dc3acu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 174)));
label_1dc3b0:
    // 0x1dc3b0: 0xa6281142  sh          $t0, 0x1142($s1)
    ctx->pc = 0x1dc3b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4418), (uint16_t)GPR_U32(ctx, 8));
label_1dc3b4:
    // 0x1dc3b4: 0x824800b0  lb          $t0, 0xB0($s2)
    ctx->pc = 0x1dc3b4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 176)));
label_1dc3b8:
    // 0x1dc3b8: 0xa2281144  sb          $t0, 0x1144($s1)
    ctx->pc = 0x1dc3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4420), (uint8_t)GPR_U32(ctx, 8));
label_1dc3bc:
    // 0x1dc3bc: 0x864800b2  lh          $t0, 0xB2($s2)
    ctx->pc = 0x1dc3bcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 178)));
label_1dc3c0:
    // 0x1dc3c0: 0xa6281146  sh          $t0, 0x1146($s1)
    ctx->pc = 0x1dc3c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4422), (uint16_t)GPR_U32(ctx, 8));
label_1dc3c4:
    // 0x1dc3c4: 0x864800b4  lh          $t0, 0xB4($s2)
    ctx->pc = 0x1dc3c4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 180)));
label_1dc3c8:
    // 0x1dc3c8: 0xa6281148  sh          $t0, 0x1148($s1)
    ctx->pc = 0x1dc3c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4424), (uint16_t)GPR_U32(ctx, 8));
label_1dc3cc:
    // 0x1dc3cc: 0xae32114c  sw          $s2, 0x114C($s1)
    ctx->pc = 0x1dc3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4428), GPR_U32(ctx, 18));
label_1dc3d0:
    // 0x1dc3d0: 0xae221150  sw          $v0, 0x1150($s1)
    ctx->pc = 0x1dc3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4432), GPR_U32(ctx, 2));
label_1dc3d4:
    // 0x1dc3d4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1dc3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1dc3d8:
    // 0x1dc3d8: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1dc3d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1dc3dc:
    // 0x1dc3dc: 0xa6221156  sh          $v0, 0x1156($s1)
    ctx->pc = 0x1dc3dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4438), (uint16_t)GPR_U32(ctx, 2));
label_1dc3e0:
    // 0x1dc3e0: 0xae270670  sw          $a3, 0x670($s1)
    ctx->pc = 0x1dc3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 7));
label_1dc3e4:
    // 0x1dc3e4: 0xa623068a  sh          $v1, 0x68A($s1)
    ctx->pc = 0x1dc3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1674), (uint16_t)GPR_U32(ctx, 3));
label_1dc3e8:
    // 0x1dc3e8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1dc3e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1dc3ec:
    // 0x1dc3ec: 0x8f3900f8  lw          $t9, 0xF8($t9)
    ctx->pc = 0x1dc3ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 248)));
label_1dc3f0:
    // 0x1dc3f0: 0x320f809  jalr        $t9
label_1dc3f4:
    if (ctx->pc == 0x1DC3F4u) {
        ctx->pc = 0x1DC3F4u;
            // 0x1dc3f4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC3F8u;
        goto label_1dc3f8;
    }
    ctx->pc = 0x1DC3F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DC3F8u);
        ctx->pc = 0x1DC3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC3F0u;
            // 0x1dc3f4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DC3F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DC3F8u; }
            if (ctx->pc != 0x1DC3F8u) { return; }
        }
        }
    }
    ctx->pc = 0x1DC3F8u;
label_1dc3f8:
    // 0x1dc3f8: 0xa6361154  sh          $s6, 0x1154($s1)
    ctx->pc = 0x1dc3f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4436), (uint16_t)GPR_U32(ctx, 22));
label_1dc3fc:
    // 0x1dc3fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dc3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1dc400:
    // 0x1dc400: 0xa62012e4  sh          $zero, 0x12E4($s1)
    ctx->pc = 0x1dc400u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4836), (uint16_t)GPR_U32(ctx, 0));
label_1dc404:
    // 0x1dc404: 0xae2012e8  sw          $zero, 0x12E8($s1)
    ctx->pc = 0x1dc404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4840), GPR_U32(ctx, 0));
label_1dc408:
    // 0x1dc408: 0xae2212ec  sw          $v0, 0x12EC($s1)
    ctx->pc = 0x1dc408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4844), GPR_U32(ctx, 2));
label_1dc40c:
    // 0x1dc40c: 0xae201470  sw          $zero, 0x1470($s1)
    ctx->pc = 0x1dc40cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5232), GPR_U32(ctx, 0));
label_1dc410:
    // 0x1dc410: 0xae201474  sw          $zero, 0x1474($s1)
    ctx->pc = 0x1dc410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5236), GPR_U32(ctx, 0));
label_1dc414:
    // 0x1dc414: 0xae201478  sw          $zero, 0x1478($s1)
    ctx->pc = 0x1dc414u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5240), GPR_U32(ctx, 0));
label_1dc418:
    // 0x1dc418: 0xae22147c  sw          $v0, 0x147C($s1)
    ctx->pc = 0x1dc418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5244), GPR_U32(ctx, 2));
label_1dc41c:
    // 0x1dc41c: 0xae201480  sw          $zero, 0x1480($s1)
    ctx->pc = 0x1dc41cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5248), GPR_U32(ctx, 0));
label_1dc420:
    // 0x1dc420: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x1dc420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_1dc424:
    // 0x1dc424: 0xae221314  sw          $v0, 0x1314($s1)
    ctx->pc = 0x1dc424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4884), GPR_U32(ctx, 2));
label_1dc428:
    // 0x1dc428: 0xae221310  sw          $v0, 0x1310($s1)
    ctx->pc = 0x1dc428u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4880), GPR_U32(ctx, 2));
label_1dc42c:
    // 0x1dc42c: 0x96420056  lhu         $v0, 0x56($s2)
    ctx->pc = 0x1dc42cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 86)));
label_1dc430:
    // 0x1dc430: 0xae221328  sw          $v0, 0x1328($s1)
    ctx->pc = 0x1dc430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4904), GPR_U32(ctx, 2));
label_1dc434:
    // 0x1dc434: 0x96420058  lhu         $v0, 0x58($s2)
    ctx->pc = 0x1dc434u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 88)));
label_1dc438:
    // 0x1dc438: 0xae22132c  sw          $v0, 0x132C($s1)
    ctx->pc = 0x1dc438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4908), GPR_U32(ctx, 2));
label_1dc43c:
    // 0x1dc43c: 0x9642005a  lhu         $v0, 0x5A($s2)
    ctx->pc = 0x1dc43cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 90)));
label_1dc440:
    // 0x1dc440: 0xa6221322  sh          $v0, 0x1322($s1)
    ctx->pc = 0x1dc440u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4898), (uint16_t)GPR_U32(ctx, 2));
label_1dc444:
    // 0x1dc444: 0xc0a24b0  jal         func_2892C0
label_1dc448:
    if (ctx->pc == 0x1DC448u) {
        ctx->pc = 0x1DC448u;
            // 0x1dc448: 0xc64c005c  lwc1        $f12, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1DC44Cu;
        goto label_1dc44c;
    }
    ctx->pc = 0x1DC444u;
    SET_GPR_U32(ctx, 31, 0x1DC44Cu);
    ctx->pc = 0x1DC448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC444u;
            // 0x1dc448: 0xc64c005c  lwc1        $f12, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC44Cu; }
        if (ctx->pc != 0x1DC44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC44Cu; }
        if (ctx->pc != 0x1DC44Cu) { return; }
    }
    ctx->pc = 0x1DC44Cu;
label_1dc44c:
    // 0x1dc44c: 0xa6221324  sh          $v0, 0x1324($s1)
    ctx->pc = 0x1dc44cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4900), (uint16_t)GPR_U32(ctx, 2));
label_1dc450:
    // 0x1dc450: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1dc450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1dc454:
    // 0x1dc454: 0x96420066  lhu         $v0, 0x66($s2)
    ctx->pc = 0x1dc454u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 102)));
label_1dc458:
    // 0x1dc458: 0xa6221318  sh          $v0, 0x1318($s1)
    ctx->pc = 0x1dc458u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4888), (uint16_t)GPR_U32(ctx, 2));
label_1dc45c:
    // 0x1dc45c: 0x92420068  lbu         $v0, 0x68($s2)
    ctx->pc = 0x1dc45cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
label_1dc460:
    // 0x1dc460: 0xa6221326  sh          $v0, 0x1326($s1)
    ctx->pc = 0x1dc460u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4902), (uint16_t)GPR_U32(ctx, 2));
label_1dc464:
    // 0x1dc464: 0x96420060  lhu         $v0, 0x60($s2)
    ctx->pc = 0x1dc464u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
label_1dc468:
    // 0x1dc468: 0xa622131a  sh          $v0, 0x131A($s1)
    ctx->pc = 0x1dc468u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4890), (uint16_t)GPR_U32(ctx, 2));
label_1dc46c:
    // 0x1dc46c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1dc46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1dc470:
    // 0x1dc470: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_1dc474:
    if (ctx->pc == 0x1DC474u) {
        ctx->pc = 0x1DC478u;
        goto label_1dc478;
    }
    ctx->pc = 0x1DC470u;
    {
        const bool branch_taken_0x1dc470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dc470) {
            ctx->pc = 0x1DC484u;
            goto label_1dc484;
        }
    }
    ctx->pc = 0x1DC478u;
label_1dc478:
    // 0x1dc478: 0x8622131a  lh          $v0, 0x131A($s1)
    ctx->pc = 0x1dc478u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4890)));
label_1dc47c:
    // 0x1dc47c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1dc47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_1dc480:
    // 0x1dc480: 0xa622131a  sh          $v0, 0x131A($s1)
    ctx->pc = 0x1dc480u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4890), (uint16_t)GPR_U32(ctx, 2));
label_1dc484:
    // 0x1dc484: 0x8242006a  lb          $v0, 0x6A($s2)
    ctx->pc = 0x1dc484u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 106)));
label_1dc488:
    // 0x1dc488: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1dc48c:
    if (ctx->pc == 0x1DC48Cu) {
        ctx->pc = 0x1DC48Cu;
            // 0x1dc48c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->pc = 0x1DC490u;
        goto label_1dc490;
    }
    ctx->pc = 0x1DC488u;
    {
        const bool branch_taken_0x1dc488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC488u;
            // 0x1dc48c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc488) {
            ctx->pc = 0x1DC4C4u;
            goto label_1dc4c4;
        }
    }
    ctx->pc = 0x1DC490u;
label_1dc490:
    // 0x1dc490: 0x26241220  addiu       $a0, $s1, 0x1220
    ctx->pc = 0x1dc490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4640));
label_1dc494:
    // 0x1dc494: 0xae22131c  sw          $v0, 0x131C($s1)
    ctx->pc = 0x1dc494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4892), GPR_U32(ctx, 2));
label_1dc498:
    // 0x1dc498: 0xc072a58  jal         func_1CA960
label_1dc49c:
    if (ctx->pc == 0x1DC49Cu) {
        ctx->pc = 0x1DC49Cu;
            // 0x1dc49c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC4A0u;
        goto label_1dc4a0;
    }
    ctx->pc = 0x1DC498u;
    SET_GPR_U32(ctx, 31, 0x1DC4A0u);
    ctx->pc = 0x1DC49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC498u;
            // 0x1dc49c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA960u;
    if (runtime->hasFunction(0x1CA960u)) {
        auto targetFn = runtime->lookupFunction(0x1CA960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC4A0u; }
        if (ctx->pc != 0x1DC4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__14CEnemyLifeGageFi_0x1ca960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC4A0u; }
        if (ctx->pc != 0x1DC4A0u) { return; }
    }
    ctx->pc = 0x1DC4A0u;
label_1dc4a0:
    // 0x1dc4a0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1dc4a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1dc4a4:
    // 0x1dc4a4: 0x8e221310  lw          $v0, 0x1310($s1)
    ctx->pc = 0x1dc4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4880)));
label_1dc4a8:
    // 0x1dc4a8: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x1dc4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
label_1dc4ac:
    // 0x1dc4ac: 0x8c2300e0  lw          $v1, 0xE0($at)
    ctx->pc = 0x1dc4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 224)));
label_1dc4b0:
    // 0x1dc4b0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1dc4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1dc4b4:
    // 0x1dc4b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1dc4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1dc4b8:
    // 0x1dc4b8: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x1dc4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
label_1dc4bc:
    // 0x1dc4bc: 0x1000000a  b           . + 4 + (0xA << 2)
label_1dc4c0:
    if (ctx->pc == 0x1DC4C0u) {
        ctx->pc = 0x1DC4C0u;
            // 0x1dc4c0: 0xac2200e0  sw          $v0, 0xE0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 224), GPR_U32(ctx, 2));
        ctx->pc = 0x1DC4C4u;
        goto label_1dc4c4;
    }
    ctx->pc = 0x1DC4BCu;
    {
        const bool branch_taken_0x1dc4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC4BCu;
            // 0x1dc4c0: 0xac2200e0  sw          $v0, 0xE0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc4bc) {
            ctx->pc = 0x1DC4E8u;
            goto label_1dc4e8;
        }
    }
    ctx->pc = 0x1DC4C4u;
label_1dc4c4:
    // 0x1dc4c4: 0x8622131a  lh          $v0, 0x131A($s1)
    ctx->pc = 0x1dc4c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4890)));
label_1dc4c8:
    // 0x1dc4c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dc4c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dc4cc:
    // 0x1dc4cc: 0x0  nop
    ctx->pc = 0x1dc4ccu;
    // NOP
label_1dc4d0:
    // 0x1dc4d0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1dc4d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1dc4d4:
    // 0x1dc4d4: 0xc0a248c  jal         func_289230
label_1dc4d8:
    if (ctx->pc == 0x1DC4D8u) {
        ctx->pc = 0x1DC4D8u;
            // 0x1dc4d8: 0xe62c131c  swc1        $f12, 0x131C($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4892), bits); }
        ctx->pc = 0x1DC4DCu;
        goto label_1dc4dc;
    }
    ctx->pc = 0x1DC4D4u;
    SET_GPR_U32(ctx, 31, 0x1DC4DCu);
    ctx->pc = 0x1DC4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC4D4u;
            // 0x1dc4d8: 0xe62c131c  swc1        $f12, 0x131C($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4892), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC4DCu; }
        if (ctx->pc != 0x1DC4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC4DCu; }
        if (ctx->pc != 0x1DC4DCu) { return; }
    }
    ctx->pc = 0x1DC4DCu;
label_1dc4dc:
    // 0x1dc4dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dc4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc4e0:
    // 0x1dc4e0: 0xc072a58  jal         func_1CA960
label_1dc4e4:
    if (ctx->pc == 0x1DC4E4u) {
        ctx->pc = 0x1DC4E4u;
            // 0x1dc4e4: 0x26241220  addiu       $a0, $s1, 0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4640));
        ctx->pc = 0x1DC4E8u;
        goto label_1dc4e8;
    }
    ctx->pc = 0x1DC4E0u;
    SET_GPR_U32(ctx, 31, 0x1DC4E8u);
    ctx->pc = 0x1DC4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC4E0u;
            // 0x1dc4e4: 0x26241220  addiu       $a0, $s1, 0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA960u;
    if (runtime->hasFunction(0x1CA960u)) {
        auto targetFn = runtime->lookupFunction(0x1CA960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC4E8u; }
        if (ctx->pc != 0x1DC4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__14CEnemyLifeGageFi_0x1ca960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC4E8u; }
        if (ctx->pc != 0x1DC4E8u) { return; }
    }
    ctx->pc = 0x1DC4E8u;
label_1dc4e8:
    // 0x1dc4e8: 0x26241270  addiu       $a0, $s1, 0x1270
    ctx->pc = 0x1dc4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4720));
label_1dc4ec:
    // 0x1dc4ec: 0xc072604  jal         func_1C9810
label_1dc4f0:
    if (ctx->pc == 0x1DC4F0u) {
        ctx->pc = 0x1DC4F0u;
            // 0x1dc4f0: 0xa6201320  sh          $zero, 0x1320($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4896), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1DC4F4u;
        goto label_1dc4f4;
    }
    ctx->pc = 0x1DC4ECu;
    SET_GPR_U32(ctx, 31, 0x1DC4F4u);
    ctx->pc = 0x1DC4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC4ECu;
            // 0x1dc4f0: 0xa6201320  sh          $zero, 0x1320($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4896), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9810u;
    if (runtime->hasFunction(0x1C9810u)) {
        auto targetFn = runtime->lookupFunction(0x1C9810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC4F4u; }
        if (ctx->pc != 0x1DC4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__7CPiyoriFv_0x1c9810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC4F4u; }
        if (ctx->pc != 0x1DC4F4u) { return; }
    }
    ctx->pc = 0x1DC4F4u;
label_1dc4f4:
    // 0x1dc4f4: 0xc0727c4  jal         func_1C9F10
label_1dc4f8:
    if (ctx->pc == 0x1DC4F8u) {
        ctx->pc = 0x1DC4F8u;
            // 0x1dc4f8: 0x26241290  addiu       $a0, $s1, 0x1290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4752));
        ctx->pc = 0x1DC4FCu;
        goto label_1dc4fc;
    }
    ctx->pc = 0x1DC4F4u;
    SET_GPR_U32(ctx, 31, 0x1DC4FCu);
    ctx->pc = 0x1DC4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC4F4u;
            // 0x1dc4f8: 0x26241290  addiu       $a0, $s1, 0x1290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9F10u;
    if (runtime->hasFunction(0x1C9F10u)) {
        auto targetFn = runtime->lookupFunction(0x1C9F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC4FCu; }
        if (ctx->pc != 0x1DC4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9CGiftMarkFv_0x1c9f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC4FCu; }
        if (ctx->pc != 0x1DC4FCu) { return; }
    }
    ctx->pc = 0x1DC4FCu;
label_1dc4fc:
    // 0x1dc4fc: 0xa2201358  sb          $zero, 0x1358($s1)
    ctx->pc = 0x1dc4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4952), (uint8_t)GPR_U32(ctx, 0));
label_1dc500:
    // 0x1dc500: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x1dc500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
label_1dc504:
    // 0x1dc504: 0x8eab0000  lw          $t3, 0x0($s5)
    ctx->pc = 0x1dc504u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1dc508:
    // 0x1dc508: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1dc508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1dc50c:
    // 0x1dc50c: 0x344823f0  ori         $t0, $v0, 0x23F0
    ctx->pc = 0x1dc50cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9200);
label_1dc510:
    // 0x1dc510: 0x34210540  ori         $at, $at, 0x540
    ctx->pc = 0x1dc510u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1344);
label_1dc514:
    // 0x1dc514: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x1dc514u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1dc518:
    // 0x1dc518: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dc518u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc51c:
    // 0x1dc51c: 0x3c074448  lui         $a3, 0x4448
    ctx->pc = 0x1dc51cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17480 << 16));
label_1dc520:
    // 0x1dc520: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1dc520u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_1dc524:
    // 0x1dc524: 0x3c0543c8  lui         $a1, 0x43C8
    ctx->pc = 0x1dc524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17352 << 16));
label_1dc528:
    // 0x1dc528: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x1dc528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
label_1dc52c:
    // 0x1dc52c: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x1dc52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_1dc530:
    // 0x1dc530: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1dc530u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc534:
    // 0x1dc534: 0x1611021  addu        $v0, $t3, $at
    ctx->pc = 0x1dc534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 1)));
label_1dc538:
    // 0x1dc538: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1dc538u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc53c:
    // 0x1dc53c: 0xae2205a0  sw          $v0, 0x5A0($s1)
    ctx->pc = 0x1dc53cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1440), GPR_U32(ctx, 2));
label_1dc540:
    // 0x1dc540: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1dc540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_1dc544:
    // 0x1dc544: 0xae22134c  sw          $v0, 0x134C($s1)
    ctx->pc = 0x1dc544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4940), GPR_U32(ctx, 2));
label_1dc548:
    // 0x1dc548: 0xae2a1350  sw          $t2, 0x1350($s1)
    ctx->pc = 0x1dc548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4944), GPR_U32(ctx, 10));
label_1dc54c:
    // 0x1dc54c: 0xae201348  sw          $zero, 0x1348($s1)
    ctx->pc = 0x1dc54cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4936), GPR_U32(ctx, 0));
label_1dc550:
    // 0x1dc550: 0xae291330  sw          $t1, 0x1330($s1)
    ctx->pc = 0x1dc550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4912), GPR_U32(ctx, 9));
label_1dc554:
    // 0x1dc554: 0xa62012e2  sh          $zero, 0x12E2($s1)
    ctx->pc = 0x1dc554u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4834), (uint16_t)GPR_U32(ctx, 0));
label_1dc558:
    // 0x1dc558: 0xae2812f4  sw          $t0, 0x12F4($s1)
    ctx->pc = 0x1dc558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4852), GPR_U32(ctx, 8));
label_1dc55c:
    // 0x1dc55c: 0xae2812f8  sw          $t0, 0x12F8($s1)
    ctx->pc = 0x1dc55cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4856), GPR_U32(ctx, 8));
label_1dc560:
    // 0x1dc560: 0xae2712fc  sw          $a3, 0x12FC($s1)
    ctx->pc = 0x1dc560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4860), GPR_U32(ctx, 7));
label_1dc564:
    // 0x1dc564: 0xae260100  sw          $a2, 0x100($s1)
    ctx->pc = 0x1dc564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 6));
label_1dc568:
    // 0x1dc568: 0xae251300  sw          $a1, 0x1300($s1)
    ctx->pc = 0x1dc568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4864), GPR_U32(ctx, 5));
label_1dc56c:
    // 0x1dc56c: 0xae241304  sw          $a0, 0x1304($s1)
    ctx->pc = 0x1dc56cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4868), GPR_U32(ctx, 4));
label_1dc570:
    // 0x1dc570: 0xa6231308  sh          $v1, 0x1308($s1)
    ctx->pc = 0x1dc570u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4872), (uint16_t)GPR_U32(ctx, 3));
label_1dc574:
    // 0x1dc574: 0xa2200bf4  sb          $zero, 0xBF4($s1)
    ctx->pc = 0x1dc574u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3060), (uint8_t)GPR_U32(ctx, 0));
label_1dc578:
    // 0x1dc578: 0xa2200bf5  sb          $zero, 0xBF5($s1)
    ctx->pc = 0x1dc578u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3061), (uint8_t)GPR_U32(ctx, 0));
label_1dc57c:
    // 0x1dc57c: 0xae2012f4  sw          $zero, 0x12F4($s1)
    ctx->pc = 0x1dc57cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4852), GPR_U32(ctx, 0));
label_1dc580:
    // 0x1dc580: 0xa62a12f0  sh          $t2, 0x12F0($s1)
    ctx->pc = 0x1dc580u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4848), (uint16_t)GPR_U32(ctx, 10));
label_1dc584:
    // 0x1dc584: 0xae20115c  sw          $zero, 0x115C($s1)
    ctx->pc = 0x1dc584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4444), GPR_U32(ctx, 0));
label_1dc588:
    // 0x1dc588: 0xae201160  sw          $zero, 0x1160($s1)
    ctx->pc = 0x1dc588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4448), GPR_U32(ctx, 0));
label_1dc58c:
    // 0x1dc58c: 0xae201164  sw          $zero, 0x1164($s1)
    ctx->pc = 0x1dc58cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4452), GPR_U32(ctx, 0));
label_1dc590:
    // 0x1dc590: 0xae201168  sw          $zero, 0x1168($s1)
    ctx->pc = 0x1dc590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4456), GPR_U32(ctx, 0));
label_1dc594:
    // 0x1dc594: 0xae20116c  sw          $zero, 0x116C($s1)
    ctx->pc = 0x1dc594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4460), GPR_U32(ctx, 0));
label_1dc598:
    // 0x1dc598: 0xae201170  sw          $zero, 0x1170($s1)
    ctx->pc = 0x1dc598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4464), GPR_U32(ctx, 0));
label_1dc59c:
    // 0x1dc59c: 0xae201174  sw          $zero, 0x1174($s1)
    ctx->pc = 0x1dc59cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4468), GPR_U32(ctx, 0));
label_1dc5a0:
    // 0x1dc5a0: 0xae201178  sw          $zero, 0x1178($s1)
    ctx->pc = 0x1dc5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4472), GPR_U32(ctx, 0));
label_1dc5a4:
    // 0x1dc5a4: 0x22d1821  addu        $v1, $s1, $t5
    ctx->pc = 0x1dc5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 13)));
label_1dc5a8:
    // 0x1dc5a8: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x1dc5a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
label_1dc5ac:
    // 0x1dc5ac: 0xac60117c  sw          $zero, 0x117C($v1)
    ctx->pc = 0x1dc5acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4476), GPR_U32(ctx, 0));
label_1dc5b0:
    // 0x1dc5b0: 0x29820020  slti        $v0, $t4, 0x20
    ctx->pc = 0x1dc5b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)32) ? 1 : 0);
label_1dc5b4:
    // 0x1dc5b4: 0xac601180  sw          $zero, 0x1180($v1)
    ctx->pc = 0x1dc5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4480), GPR_U32(ctx, 0));
label_1dc5b8:
    // 0x1dc5b8: 0x25ad0020  addiu       $t5, $t5, 0x20
    ctx->pc = 0x1dc5b8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
label_1dc5bc:
    // 0x1dc5bc: 0xac601184  sw          $zero, 0x1184($v1)
    ctx->pc = 0x1dc5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4484), GPR_U32(ctx, 0));
label_1dc5c0:
    // 0x1dc5c0: 0xac601188  sw          $zero, 0x1188($v1)
    ctx->pc = 0x1dc5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4488), GPR_U32(ctx, 0));
label_1dc5c4:
    // 0x1dc5c4: 0xac60118c  sw          $zero, 0x118C($v1)
    ctx->pc = 0x1dc5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4492), GPR_U32(ctx, 0));
label_1dc5c8:
    // 0x1dc5c8: 0xac601190  sw          $zero, 0x1190($v1)
    ctx->pc = 0x1dc5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4496), GPR_U32(ctx, 0));
label_1dc5cc:
    // 0x1dc5cc: 0xac601194  sw          $zero, 0x1194($v1)
    ctx->pc = 0x1dc5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4500), GPR_U32(ctx, 0));
label_1dc5d0:
    // 0x1dc5d0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1dc5d4:
    if (ctx->pc == 0x1DC5D4u) {
        ctx->pc = 0x1DC5D4u;
            // 0x1dc5d4: 0xac601198  sw          $zero, 0x1198($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4504), GPR_U32(ctx, 0));
        ctx->pc = 0x1DC5D8u;
        goto label_1dc5d8;
    }
    ctx->pc = 0x1DC5D0u;
    {
        const bool branch_taken_0x1dc5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC5D0u;
            // 0x1dc5d4: 0xac601198  sw          $zero, 0x1198($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc5d0) {
            ctx->pc = 0x1DC5A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dc5a4;
        }
    }
    ctx->pc = 0x1DC5D8u;
label_1dc5d8:
    // 0x1dc5d8: 0x2751821  addu        $v1, $s3, $s5
    ctx->pc = 0x1dc5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_1dc5dc:
    // 0x1dc5dc: 0x2b71021  addu        $v0, $s5, $s7
    ctx->pc = 0x1dc5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
label_1dc5e0:
    // 0x1dc5e0: 0x8c6519a0  lw          $a1, 0x19A0($v1)
    ctx->pc = 0x1dc5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6560)));
label_1dc5e4:
    // 0x1dc5e4: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x1dc5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1dc5e8:
    // 0x1dc5e8: 0xc079eec  jal         func_1E7BB0
label_1dc5ec:
    if (ctx->pc == 0x1DC5ECu) {
        ctx->pc = 0x1DC5ECu;
            // 0x1dc5ec: 0x26241040  addiu       $a0, $s1, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4160));
        ctx->pc = 0x1DC5F0u;
        goto label_1dc5f0;
    }
    ctx->pc = 0x1DC5E8u;
    SET_GPR_U32(ctx, 31, 0x1DC5F0u);
    ctx->pc = 0x1DC5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC5E8u;
            // 0x1dc5ec: 0x26241040  addiu       $a0, $s1, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7BB0u;
    if (runtime->hasFunction(0x1E7BB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC5F0u; }
        if (ctx->pc != 0x1DC5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMonsterScript__FP10CRunScriptPcP9mgCMemory_0x1e7bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC5F0u; }
        if (ctx->pc != 0x1DC5F0u) { return; }
    }
    ctx->pc = 0x1DC5F0u;
label_1dc5f0:
    // 0x1dc5f0: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1dc5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1dc5f4:
    // 0x1dc5f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1dc5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1dc5f8:
    // 0x1dc5f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dc5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dc5fc:
    // 0x1dc5fc: 0xc078170  jal         func_1E05C0
label_1dc600:
    if (ctx->pc == 0x1DC600u) {
        ctx->pc = 0x1DC600u;
            // 0x1dc600: 0xa6221158  sh          $v0, 0x1158($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4440), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1DC604u;
        goto label_1dc604;
    }
    ctx->pc = 0x1DC5FCu;
    SET_GPR_U32(ctx, 31, 0x1DC604u);
    ctx->pc = 0x1DC600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC5FCu;
            // 0x1dc600: 0xa6221158  sh          $v0, 0x1158($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4440), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E05C0u;
    if (runtime->hasFunction(0x1E05C0u)) {
        auto targetFn = runtime->lookupFunction(0x1E05C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC604u; }
        if (ctx->pc != 0x1DC604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunScript__11CMonsterManFi_0x1e05c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC604u; }
        if (ctx->pc != 0x1DC604u) { return; }
    }
    ctx->pc = 0x1DC604u;
label_1dc604:
    // 0x1dc604: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1dc604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1dc608:
    // 0x1dc608: 0xa6221158  sh          $v0, 0x1158($s1)
    ctx->pc = 0x1dc608u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4440), (uint16_t)GPR_U32(ctx, 2));
label_1dc60c:
    // 0x1dc60c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1dc60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1dc610:
    // 0x1dc610: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1dc610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dc614:
    // 0x1dc614: 0x0  nop
    ctx->pc = 0x1dc614u;
    // NOP
label_1dc618:
    // 0x1dc618: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1dc618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1dc61c:
    // 0x1dc61c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1dc61cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1dc620:
    // 0x1dc620: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1dc620u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1dc624:
    // 0x1dc624: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1dc624u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1dc628:
    // 0x1dc628: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1dc628u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1dc62c:
    // 0x1dc62c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1dc62cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dc630:
    // 0x1dc630: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dc630u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dc634:
    // 0x1dc634: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dc634u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dc638:
    // 0x1dc638: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dc638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dc63c:
    // 0x1dc63c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dc63cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dc640:
    // 0x1dc640: 0x3e00008  jr          $ra
label_1dc644:
    if (ctx->pc == 0x1DC644u) {
        ctx->pc = 0x1DC644u;
            // 0x1dc644: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x1DC648u;
        goto label_fallthrough_0x1dc640;
    }
    ctx->pc = 0x1DC640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC640u;
            // 0x1dc644: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1dc640:
    ctx->pc = 0x1DC648u;
}
