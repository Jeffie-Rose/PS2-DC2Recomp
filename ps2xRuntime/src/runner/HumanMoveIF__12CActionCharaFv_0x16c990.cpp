#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: HumanMoveIF__12CActionCharaFv
// Address: 0x16c990 - 0x16d560
void HumanMoveIF__12CActionCharaFv_0x16c990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HumanMoveIF__12CActionCharaFv_0x16c990");
#endif

    switch (ctx->pc) {
        case 0x16c990u: goto label_16c990;
        case 0x16c994u: goto label_16c994;
        case 0x16c998u: goto label_16c998;
        case 0x16c99cu: goto label_16c99c;
        case 0x16c9a0u: goto label_16c9a0;
        case 0x16c9a4u: goto label_16c9a4;
        case 0x16c9a8u: goto label_16c9a8;
        case 0x16c9acu: goto label_16c9ac;
        case 0x16c9b0u: goto label_16c9b0;
        case 0x16c9b4u: goto label_16c9b4;
        case 0x16c9b8u: goto label_16c9b8;
        case 0x16c9bcu: goto label_16c9bc;
        case 0x16c9c0u: goto label_16c9c0;
        case 0x16c9c4u: goto label_16c9c4;
        case 0x16c9c8u: goto label_16c9c8;
        case 0x16c9ccu: goto label_16c9cc;
        case 0x16c9d0u: goto label_16c9d0;
        case 0x16c9d4u: goto label_16c9d4;
        case 0x16c9d8u: goto label_16c9d8;
        case 0x16c9dcu: goto label_16c9dc;
        case 0x16c9e0u: goto label_16c9e0;
        case 0x16c9e4u: goto label_16c9e4;
        case 0x16c9e8u: goto label_16c9e8;
        case 0x16c9ecu: goto label_16c9ec;
        case 0x16c9f0u: goto label_16c9f0;
        case 0x16c9f4u: goto label_16c9f4;
        case 0x16c9f8u: goto label_16c9f8;
        case 0x16c9fcu: goto label_16c9fc;
        case 0x16ca00u: goto label_16ca00;
        case 0x16ca04u: goto label_16ca04;
        case 0x16ca08u: goto label_16ca08;
        case 0x16ca0cu: goto label_16ca0c;
        case 0x16ca10u: goto label_16ca10;
        case 0x16ca14u: goto label_16ca14;
        case 0x16ca18u: goto label_16ca18;
        case 0x16ca1cu: goto label_16ca1c;
        case 0x16ca20u: goto label_16ca20;
        case 0x16ca24u: goto label_16ca24;
        case 0x16ca28u: goto label_16ca28;
        case 0x16ca2cu: goto label_16ca2c;
        case 0x16ca30u: goto label_16ca30;
        case 0x16ca34u: goto label_16ca34;
        case 0x16ca38u: goto label_16ca38;
        case 0x16ca3cu: goto label_16ca3c;
        case 0x16ca40u: goto label_16ca40;
        case 0x16ca44u: goto label_16ca44;
        case 0x16ca48u: goto label_16ca48;
        case 0x16ca4cu: goto label_16ca4c;
        case 0x16ca50u: goto label_16ca50;
        case 0x16ca54u: goto label_16ca54;
        case 0x16ca58u: goto label_16ca58;
        case 0x16ca5cu: goto label_16ca5c;
        case 0x16ca60u: goto label_16ca60;
        case 0x16ca64u: goto label_16ca64;
        case 0x16ca68u: goto label_16ca68;
        case 0x16ca6cu: goto label_16ca6c;
        case 0x16ca70u: goto label_16ca70;
        case 0x16ca74u: goto label_16ca74;
        case 0x16ca78u: goto label_16ca78;
        case 0x16ca7cu: goto label_16ca7c;
        case 0x16ca80u: goto label_16ca80;
        case 0x16ca84u: goto label_16ca84;
        case 0x16ca88u: goto label_16ca88;
        case 0x16ca8cu: goto label_16ca8c;
        case 0x16ca90u: goto label_16ca90;
        case 0x16ca94u: goto label_16ca94;
        case 0x16ca98u: goto label_16ca98;
        case 0x16ca9cu: goto label_16ca9c;
        case 0x16caa0u: goto label_16caa0;
        case 0x16caa4u: goto label_16caa4;
        case 0x16caa8u: goto label_16caa8;
        case 0x16caacu: goto label_16caac;
        case 0x16cab0u: goto label_16cab0;
        case 0x16cab4u: goto label_16cab4;
        case 0x16cab8u: goto label_16cab8;
        case 0x16cabcu: goto label_16cabc;
        case 0x16cac0u: goto label_16cac0;
        case 0x16cac4u: goto label_16cac4;
        case 0x16cac8u: goto label_16cac8;
        case 0x16caccu: goto label_16cacc;
        case 0x16cad0u: goto label_16cad0;
        case 0x16cad4u: goto label_16cad4;
        case 0x16cad8u: goto label_16cad8;
        case 0x16cadcu: goto label_16cadc;
        case 0x16cae0u: goto label_16cae0;
        case 0x16cae4u: goto label_16cae4;
        case 0x16cae8u: goto label_16cae8;
        case 0x16caecu: goto label_16caec;
        case 0x16caf0u: goto label_16caf0;
        case 0x16caf4u: goto label_16caf4;
        case 0x16caf8u: goto label_16caf8;
        case 0x16cafcu: goto label_16cafc;
        case 0x16cb00u: goto label_16cb00;
        case 0x16cb04u: goto label_16cb04;
        case 0x16cb08u: goto label_16cb08;
        case 0x16cb0cu: goto label_16cb0c;
        case 0x16cb10u: goto label_16cb10;
        case 0x16cb14u: goto label_16cb14;
        case 0x16cb18u: goto label_16cb18;
        case 0x16cb1cu: goto label_16cb1c;
        case 0x16cb20u: goto label_16cb20;
        case 0x16cb24u: goto label_16cb24;
        case 0x16cb28u: goto label_16cb28;
        case 0x16cb2cu: goto label_16cb2c;
        case 0x16cb30u: goto label_16cb30;
        case 0x16cb34u: goto label_16cb34;
        case 0x16cb38u: goto label_16cb38;
        case 0x16cb3cu: goto label_16cb3c;
        case 0x16cb40u: goto label_16cb40;
        case 0x16cb44u: goto label_16cb44;
        case 0x16cb48u: goto label_16cb48;
        case 0x16cb4cu: goto label_16cb4c;
        case 0x16cb50u: goto label_16cb50;
        case 0x16cb54u: goto label_16cb54;
        case 0x16cb58u: goto label_16cb58;
        case 0x16cb5cu: goto label_16cb5c;
        case 0x16cb60u: goto label_16cb60;
        case 0x16cb64u: goto label_16cb64;
        case 0x16cb68u: goto label_16cb68;
        case 0x16cb6cu: goto label_16cb6c;
        case 0x16cb70u: goto label_16cb70;
        case 0x16cb74u: goto label_16cb74;
        case 0x16cb78u: goto label_16cb78;
        case 0x16cb7cu: goto label_16cb7c;
        case 0x16cb80u: goto label_16cb80;
        case 0x16cb84u: goto label_16cb84;
        case 0x16cb88u: goto label_16cb88;
        case 0x16cb8cu: goto label_16cb8c;
        case 0x16cb90u: goto label_16cb90;
        case 0x16cb94u: goto label_16cb94;
        case 0x16cb98u: goto label_16cb98;
        case 0x16cb9cu: goto label_16cb9c;
        case 0x16cba0u: goto label_16cba0;
        case 0x16cba4u: goto label_16cba4;
        case 0x16cba8u: goto label_16cba8;
        case 0x16cbacu: goto label_16cbac;
        case 0x16cbb0u: goto label_16cbb0;
        case 0x16cbb4u: goto label_16cbb4;
        case 0x16cbb8u: goto label_16cbb8;
        case 0x16cbbcu: goto label_16cbbc;
        case 0x16cbc0u: goto label_16cbc0;
        case 0x16cbc4u: goto label_16cbc4;
        case 0x16cbc8u: goto label_16cbc8;
        case 0x16cbccu: goto label_16cbcc;
        case 0x16cbd0u: goto label_16cbd0;
        case 0x16cbd4u: goto label_16cbd4;
        case 0x16cbd8u: goto label_16cbd8;
        case 0x16cbdcu: goto label_16cbdc;
        case 0x16cbe0u: goto label_16cbe0;
        case 0x16cbe4u: goto label_16cbe4;
        case 0x16cbe8u: goto label_16cbe8;
        case 0x16cbecu: goto label_16cbec;
        case 0x16cbf0u: goto label_16cbf0;
        case 0x16cbf4u: goto label_16cbf4;
        case 0x16cbf8u: goto label_16cbf8;
        case 0x16cbfcu: goto label_16cbfc;
        case 0x16cc00u: goto label_16cc00;
        case 0x16cc04u: goto label_16cc04;
        case 0x16cc08u: goto label_16cc08;
        case 0x16cc0cu: goto label_16cc0c;
        case 0x16cc10u: goto label_16cc10;
        case 0x16cc14u: goto label_16cc14;
        case 0x16cc18u: goto label_16cc18;
        case 0x16cc1cu: goto label_16cc1c;
        case 0x16cc20u: goto label_16cc20;
        case 0x16cc24u: goto label_16cc24;
        case 0x16cc28u: goto label_16cc28;
        case 0x16cc2cu: goto label_16cc2c;
        case 0x16cc30u: goto label_16cc30;
        case 0x16cc34u: goto label_16cc34;
        case 0x16cc38u: goto label_16cc38;
        case 0x16cc3cu: goto label_16cc3c;
        case 0x16cc40u: goto label_16cc40;
        case 0x16cc44u: goto label_16cc44;
        case 0x16cc48u: goto label_16cc48;
        case 0x16cc4cu: goto label_16cc4c;
        case 0x16cc50u: goto label_16cc50;
        case 0x16cc54u: goto label_16cc54;
        case 0x16cc58u: goto label_16cc58;
        case 0x16cc5cu: goto label_16cc5c;
        case 0x16cc60u: goto label_16cc60;
        case 0x16cc64u: goto label_16cc64;
        case 0x16cc68u: goto label_16cc68;
        case 0x16cc6cu: goto label_16cc6c;
        case 0x16cc70u: goto label_16cc70;
        case 0x16cc74u: goto label_16cc74;
        case 0x16cc78u: goto label_16cc78;
        case 0x16cc7cu: goto label_16cc7c;
        case 0x16cc80u: goto label_16cc80;
        case 0x16cc84u: goto label_16cc84;
        case 0x16cc88u: goto label_16cc88;
        case 0x16cc8cu: goto label_16cc8c;
        case 0x16cc90u: goto label_16cc90;
        case 0x16cc94u: goto label_16cc94;
        case 0x16cc98u: goto label_16cc98;
        case 0x16cc9cu: goto label_16cc9c;
        case 0x16cca0u: goto label_16cca0;
        case 0x16cca4u: goto label_16cca4;
        case 0x16cca8u: goto label_16cca8;
        case 0x16ccacu: goto label_16ccac;
        case 0x16ccb0u: goto label_16ccb0;
        case 0x16ccb4u: goto label_16ccb4;
        case 0x16ccb8u: goto label_16ccb8;
        case 0x16ccbcu: goto label_16ccbc;
        case 0x16ccc0u: goto label_16ccc0;
        case 0x16ccc4u: goto label_16ccc4;
        case 0x16ccc8u: goto label_16ccc8;
        case 0x16ccccu: goto label_16cccc;
        case 0x16ccd0u: goto label_16ccd0;
        case 0x16ccd4u: goto label_16ccd4;
        case 0x16ccd8u: goto label_16ccd8;
        case 0x16ccdcu: goto label_16ccdc;
        case 0x16cce0u: goto label_16cce0;
        case 0x16cce4u: goto label_16cce4;
        case 0x16cce8u: goto label_16cce8;
        case 0x16ccecu: goto label_16ccec;
        case 0x16ccf0u: goto label_16ccf0;
        case 0x16ccf4u: goto label_16ccf4;
        case 0x16ccf8u: goto label_16ccf8;
        case 0x16ccfcu: goto label_16ccfc;
        case 0x16cd00u: goto label_16cd00;
        case 0x16cd04u: goto label_16cd04;
        case 0x16cd08u: goto label_16cd08;
        case 0x16cd0cu: goto label_16cd0c;
        case 0x16cd10u: goto label_16cd10;
        case 0x16cd14u: goto label_16cd14;
        case 0x16cd18u: goto label_16cd18;
        case 0x16cd1cu: goto label_16cd1c;
        case 0x16cd20u: goto label_16cd20;
        case 0x16cd24u: goto label_16cd24;
        case 0x16cd28u: goto label_16cd28;
        case 0x16cd2cu: goto label_16cd2c;
        case 0x16cd30u: goto label_16cd30;
        case 0x16cd34u: goto label_16cd34;
        case 0x16cd38u: goto label_16cd38;
        case 0x16cd3cu: goto label_16cd3c;
        case 0x16cd40u: goto label_16cd40;
        case 0x16cd44u: goto label_16cd44;
        case 0x16cd48u: goto label_16cd48;
        case 0x16cd4cu: goto label_16cd4c;
        case 0x16cd50u: goto label_16cd50;
        case 0x16cd54u: goto label_16cd54;
        case 0x16cd58u: goto label_16cd58;
        case 0x16cd5cu: goto label_16cd5c;
        case 0x16cd60u: goto label_16cd60;
        case 0x16cd64u: goto label_16cd64;
        case 0x16cd68u: goto label_16cd68;
        case 0x16cd6cu: goto label_16cd6c;
        case 0x16cd70u: goto label_16cd70;
        case 0x16cd74u: goto label_16cd74;
        case 0x16cd78u: goto label_16cd78;
        case 0x16cd7cu: goto label_16cd7c;
        case 0x16cd80u: goto label_16cd80;
        case 0x16cd84u: goto label_16cd84;
        case 0x16cd88u: goto label_16cd88;
        case 0x16cd8cu: goto label_16cd8c;
        case 0x16cd90u: goto label_16cd90;
        case 0x16cd94u: goto label_16cd94;
        case 0x16cd98u: goto label_16cd98;
        case 0x16cd9cu: goto label_16cd9c;
        case 0x16cda0u: goto label_16cda0;
        case 0x16cda4u: goto label_16cda4;
        case 0x16cda8u: goto label_16cda8;
        case 0x16cdacu: goto label_16cdac;
        case 0x16cdb0u: goto label_16cdb0;
        case 0x16cdb4u: goto label_16cdb4;
        case 0x16cdb8u: goto label_16cdb8;
        case 0x16cdbcu: goto label_16cdbc;
        case 0x16cdc0u: goto label_16cdc0;
        case 0x16cdc4u: goto label_16cdc4;
        case 0x16cdc8u: goto label_16cdc8;
        case 0x16cdccu: goto label_16cdcc;
        case 0x16cdd0u: goto label_16cdd0;
        case 0x16cdd4u: goto label_16cdd4;
        case 0x16cdd8u: goto label_16cdd8;
        case 0x16cddcu: goto label_16cddc;
        case 0x16cde0u: goto label_16cde0;
        case 0x16cde4u: goto label_16cde4;
        case 0x16cde8u: goto label_16cde8;
        case 0x16cdecu: goto label_16cdec;
        case 0x16cdf0u: goto label_16cdf0;
        case 0x16cdf4u: goto label_16cdf4;
        case 0x16cdf8u: goto label_16cdf8;
        case 0x16cdfcu: goto label_16cdfc;
        case 0x16ce00u: goto label_16ce00;
        case 0x16ce04u: goto label_16ce04;
        case 0x16ce08u: goto label_16ce08;
        case 0x16ce0cu: goto label_16ce0c;
        case 0x16ce10u: goto label_16ce10;
        case 0x16ce14u: goto label_16ce14;
        case 0x16ce18u: goto label_16ce18;
        case 0x16ce1cu: goto label_16ce1c;
        case 0x16ce20u: goto label_16ce20;
        case 0x16ce24u: goto label_16ce24;
        case 0x16ce28u: goto label_16ce28;
        case 0x16ce2cu: goto label_16ce2c;
        case 0x16ce30u: goto label_16ce30;
        case 0x16ce34u: goto label_16ce34;
        case 0x16ce38u: goto label_16ce38;
        case 0x16ce3cu: goto label_16ce3c;
        case 0x16ce40u: goto label_16ce40;
        case 0x16ce44u: goto label_16ce44;
        case 0x16ce48u: goto label_16ce48;
        case 0x16ce4cu: goto label_16ce4c;
        case 0x16ce50u: goto label_16ce50;
        case 0x16ce54u: goto label_16ce54;
        case 0x16ce58u: goto label_16ce58;
        case 0x16ce5cu: goto label_16ce5c;
        case 0x16ce60u: goto label_16ce60;
        case 0x16ce64u: goto label_16ce64;
        case 0x16ce68u: goto label_16ce68;
        case 0x16ce6cu: goto label_16ce6c;
        case 0x16ce70u: goto label_16ce70;
        case 0x16ce74u: goto label_16ce74;
        case 0x16ce78u: goto label_16ce78;
        case 0x16ce7cu: goto label_16ce7c;
        case 0x16ce80u: goto label_16ce80;
        case 0x16ce84u: goto label_16ce84;
        case 0x16ce88u: goto label_16ce88;
        case 0x16ce8cu: goto label_16ce8c;
        case 0x16ce90u: goto label_16ce90;
        case 0x16ce94u: goto label_16ce94;
        case 0x16ce98u: goto label_16ce98;
        case 0x16ce9cu: goto label_16ce9c;
        case 0x16cea0u: goto label_16cea0;
        case 0x16cea4u: goto label_16cea4;
        case 0x16cea8u: goto label_16cea8;
        case 0x16ceacu: goto label_16ceac;
        case 0x16ceb0u: goto label_16ceb0;
        case 0x16ceb4u: goto label_16ceb4;
        case 0x16ceb8u: goto label_16ceb8;
        case 0x16cebcu: goto label_16cebc;
        case 0x16cec0u: goto label_16cec0;
        case 0x16cec4u: goto label_16cec4;
        case 0x16cec8u: goto label_16cec8;
        case 0x16ceccu: goto label_16cecc;
        case 0x16ced0u: goto label_16ced0;
        case 0x16ced4u: goto label_16ced4;
        case 0x16ced8u: goto label_16ced8;
        case 0x16cedcu: goto label_16cedc;
        case 0x16cee0u: goto label_16cee0;
        case 0x16cee4u: goto label_16cee4;
        case 0x16cee8u: goto label_16cee8;
        case 0x16ceecu: goto label_16ceec;
        case 0x16cef0u: goto label_16cef0;
        case 0x16cef4u: goto label_16cef4;
        case 0x16cef8u: goto label_16cef8;
        case 0x16cefcu: goto label_16cefc;
        case 0x16cf00u: goto label_16cf00;
        case 0x16cf04u: goto label_16cf04;
        case 0x16cf08u: goto label_16cf08;
        case 0x16cf0cu: goto label_16cf0c;
        case 0x16cf10u: goto label_16cf10;
        case 0x16cf14u: goto label_16cf14;
        case 0x16cf18u: goto label_16cf18;
        case 0x16cf1cu: goto label_16cf1c;
        case 0x16cf20u: goto label_16cf20;
        case 0x16cf24u: goto label_16cf24;
        case 0x16cf28u: goto label_16cf28;
        case 0x16cf2cu: goto label_16cf2c;
        case 0x16cf30u: goto label_16cf30;
        case 0x16cf34u: goto label_16cf34;
        case 0x16cf38u: goto label_16cf38;
        case 0x16cf3cu: goto label_16cf3c;
        case 0x16cf40u: goto label_16cf40;
        case 0x16cf44u: goto label_16cf44;
        case 0x16cf48u: goto label_16cf48;
        case 0x16cf4cu: goto label_16cf4c;
        case 0x16cf50u: goto label_16cf50;
        case 0x16cf54u: goto label_16cf54;
        case 0x16cf58u: goto label_16cf58;
        case 0x16cf5cu: goto label_16cf5c;
        case 0x16cf60u: goto label_16cf60;
        case 0x16cf64u: goto label_16cf64;
        case 0x16cf68u: goto label_16cf68;
        case 0x16cf6cu: goto label_16cf6c;
        case 0x16cf70u: goto label_16cf70;
        case 0x16cf74u: goto label_16cf74;
        case 0x16cf78u: goto label_16cf78;
        case 0x16cf7cu: goto label_16cf7c;
        case 0x16cf80u: goto label_16cf80;
        case 0x16cf84u: goto label_16cf84;
        case 0x16cf88u: goto label_16cf88;
        case 0x16cf8cu: goto label_16cf8c;
        case 0x16cf90u: goto label_16cf90;
        case 0x16cf94u: goto label_16cf94;
        case 0x16cf98u: goto label_16cf98;
        case 0x16cf9cu: goto label_16cf9c;
        case 0x16cfa0u: goto label_16cfa0;
        case 0x16cfa4u: goto label_16cfa4;
        case 0x16cfa8u: goto label_16cfa8;
        case 0x16cfacu: goto label_16cfac;
        case 0x16cfb0u: goto label_16cfb0;
        case 0x16cfb4u: goto label_16cfb4;
        case 0x16cfb8u: goto label_16cfb8;
        case 0x16cfbcu: goto label_16cfbc;
        case 0x16cfc0u: goto label_16cfc0;
        case 0x16cfc4u: goto label_16cfc4;
        case 0x16cfc8u: goto label_16cfc8;
        case 0x16cfccu: goto label_16cfcc;
        case 0x16cfd0u: goto label_16cfd0;
        case 0x16cfd4u: goto label_16cfd4;
        case 0x16cfd8u: goto label_16cfd8;
        case 0x16cfdcu: goto label_16cfdc;
        case 0x16cfe0u: goto label_16cfe0;
        case 0x16cfe4u: goto label_16cfe4;
        case 0x16cfe8u: goto label_16cfe8;
        case 0x16cfecu: goto label_16cfec;
        case 0x16cff0u: goto label_16cff0;
        case 0x16cff4u: goto label_16cff4;
        case 0x16cff8u: goto label_16cff8;
        case 0x16cffcu: goto label_16cffc;
        case 0x16d000u: goto label_16d000;
        case 0x16d004u: goto label_16d004;
        case 0x16d008u: goto label_16d008;
        case 0x16d00cu: goto label_16d00c;
        case 0x16d010u: goto label_16d010;
        case 0x16d014u: goto label_16d014;
        case 0x16d018u: goto label_16d018;
        case 0x16d01cu: goto label_16d01c;
        case 0x16d020u: goto label_16d020;
        case 0x16d024u: goto label_16d024;
        case 0x16d028u: goto label_16d028;
        case 0x16d02cu: goto label_16d02c;
        case 0x16d030u: goto label_16d030;
        case 0x16d034u: goto label_16d034;
        case 0x16d038u: goto label_16d038;
        case 0x16d03cu: goto label_16d03c;
        case 0x16d040u: goto label_16d040;
        case 0x16d044u: goto label_16d044;
        case 0x16d048u: goto label_16d048;
        case 0x16d04cu: goto label_16d04c;
        case 0x16d050u: goto label_16d050;
        case 0x16d054u: goto label_16d054;
        case 0x16d058u: goto label_16d058;
        case 0x16d05cu: goto label_16d05c;
        case 0x16d060u: goto label_16d060;
        case 0x16d064u: goto label_16d064;
        case 0x16d068u: goto label_16d068;
        case 0x16d06cu: goto label_16d06c;
        case 0x16d070u: goto label_16d070;
        case 0x16d074u: goto label_16d074;
        case 0x16d078u: goto label_16d078;
        case 0x16d07cu: goto label_16d07c;
        case 0x16d080u: goto label_16d080;
        case 0x16d084u: goto label_16d084;
        case 0x16d088u: goto label_16d088;
        case 0x16d08cu: goto label_16d08c;
        case 0x16d090u: goto label_16d090;
        case 0x16d094u: goto label_16d094;
        case 0x16d098u: goto label_16d098;
        case 0x16d09cu: goto label_16d09c;
        case 0x16d0a0u: goto label_16d0a0;
        case 0x16d0a4u: goto label_16d0a4;
        case 0x16d0a8u: goto label_16d0a8;
        case 0x16d0acu: goto label_16d0ac;
        case 0x16d0b0u: goto label_16d0b0;
        case 0x16d0b4u: goto label_16d0b4;
        case 0x16d0b8u: goto label_16d0b8;
        case 0x16d0bcu: goto label_16d0bc;
        case 0x16d0c0u: goto label_16d0c0;
        case 0x16d0c4u: goto label_16d0c4;
        case 0x16d0c8u: goto label_16d0c8;
        case 0x16d0ccu: goto label_16d0cc;
        case 0x16d0d0u: goto label_16d0d0;
        case 0x16d0d4u: goto label_16d0d4;
        case 0x16d0d8u: goto label_16d0d8;
        case 0x16d0dcu: goto label_16d0dc;
        case 0x16d0e0u: goto label_16d0e0;
        case 0x16d0e4u: goto label_16d0e4;
        case 0x16d0e8u: goto label_16d0e8;
        case 0x16d0ecu: goto label_16d0ec;
        case 0x16d0f0u: goto label_16d0f0;
        case 0x16d0f4u: goto label_16d0f4;
        case 0x16d0f8u: goto label_16d0f8;
        case 0x16d0fcu: goto label_16d0fc;
        case 0x16d100u: goto label_16d100;
        case 0x16d104u: goto label_16d104;
        case 0x16d108u: goto label_16d108;
        case 0x16d10cu: goto label_16d10c;
        case 0x16d110u: goto label_16d110;
        case 0x16d114u: goto label_16d114;
        case 0x16d118u: goto label_16d118;
        case 0x16d11cu: goto label_16d11c;
        case 0x16d120u: goto label_16d120;
        case 0x16d124u: goto label_16d124;
        case 0x16d128u: goto label_16d128;
        case 0x16d12cu: goto label_16d12c;
        case 0x16d130u: goto label_16d130;
        case 0x16d134u: goto label_16d134;
        case 0x16d138u: goto label_16d138;
        case 0x16d13cu: goto label_16d13c;
        case 0x16d140u: goto label_16d140;
        case 0x16d144u: goto label_16d144;
        case 0x16d148u: goto label_16d148;
        case 0x16d14cu: goto label_16d14c;
        case 0x16d150u: goto label_16d150;
        case 0x16d154u: goto label_16d154;
        case 0x16d158u: goto label_16d158;
        case 0x16d15cu: goto label_16d15c;
        case 0x16d160u: goto label_16d160;
        case 0x16d164u: goto label_16d164;
        case 0x16d168u: goto label_16d168;
        case 0x16d16cu: goto label_16d16c;
        case 0x16d170u: goto label_16d170;
        case 0x16d174u: goto label_16d174;
        case 0x16d178u: goto label_16d178;
        case 0x16d17cu: goto label_16d17c;
        case 0x16d180u: goto label_16d180;
        case 0x16d184u: goto label_16d184;
        case 0x16d188u: goto label_16d188;
        case 0x16d18cu: goto label_16d18c;
        case 0x16d190u: goto label_16d190;
        case 0x16d194u: goto label_16d194;
        case 0x16d198u: goto label_16d198;
        case 0x16d19cu: goto label_16d19c;
        case 0x16d1a0u: goto label_16d1a0;
        case 0x16d1a4u: goto label_16d1a4;
        case 0x16d1a8u: goto label_16d1a8;
        case 0x16d1acu: goto label_16d1ac;
        case 0x16d1b0u: goto label_16d1b0;
        case 0x16d1b4u: goto label_16d1b4;
        case 0x16d1b8u: goto label_16d1b8;
        case 0x16d1bcu: goto label_16d1bc;
        case 0x16d1c0u: goto label_16d1c0;
        case 0x16d1c4u: goto label_16d1c4;
        case 0x16d1c8u: goto label_16d1c8;
        case 0x16d1ccu: goto label_16d1cc;
        case 0x16d1d0u: goto label_16d1d0;
        case 0x16d1d4u: goto label_16d1d4;
        case 0x16d1d8u: goto label_16d1d8;
        case 0x16d1dcu: goto label_16d1dc;
        case 0x16d1e0u: goto label_16d1e0;
        case 0x16d1e4u: goto label_16d1e4;
        case 0x16d1e8u: goto label_16d1e8;
        case 0x16d1ecu: goto label_16d1ec;
        case 0x16d1f0u: goto label_16d1f0;
        case 0x16d1f4u: goto label_16d1f4;
        case 0x16d1f8u: goto label_16d1f8;
        case 0x16d1fcu: goto label_16d1fc;
        case 0x16d200u: goto label_16d200;
        case 0x16d204u: goto label_16d204;
        case 0x16d208u: goto label_16d208;
        case 0x16d20cu: goto label_16d20c;
        case 0x16d210u: goto label_16d210;
        case 0x16d214u: goto label_16d214;
        case 0x16d218u: goto label_16d218;
        case 0x16d21cu: goto label_16d21c;
        case 0x16d220u: goto label_16d220;
        case 0x16d224u: goto label_16d224;
        case 0x16d228u: goto label_16d228;
        case 0x16d22cu: goto label_16d22c;
        case 0x16d230u: goto label_16d230;
        case 0x16d234u: goto label_16d234;
        case 0x16d238u: goto label_16d238;
        case 0x16d23cu: goto label_16d23c;
        case 0x16d240u: goto label_16d240;
        case 0x16d244u: goto label_16d244;
        case 0x16d248u: goto label_16d248;
        case 0x16d24cu: goto label_16d24c;
        case 0x16d250u: goto label_16d250;
        case 0x16d254u: goto label_16d254;
        case 0x16d258u: goto label_16d258;
        case 0x16d25cu: goto label_16d25c;
        case 0x16d260u: goto label_16d260;
        case 0x16d264u: goto label_16d264;
        case 0x16d268u: goto label_16d268;
        case 0x16d26cu: goto label_16d26c;
        case 0x16d270u: goto label_16d270;
        case 0x16d274u: goto label_16d274;
        case 0x16d278u: goto label_16d278;
        case 0x16d27cu: goto label_16d27c;
        case 0x16d280u: goto label_16d280;
        case 0x16d284u: goto label_16d284;
        case 0x16d288u: goto label_16d288;
        case 0x16d28cu: goto label_16d28c;
        case 0x16d290u: goto label_16d290;
        case 0x16d294u: goto label_16d294;
        case 0x16d298u: goto label_16d298;
        case 0x16d29cu: goto label_16d29c;
        case 0x16d2a0u: goto label_16d2a0;
        case 0x16d2a4u: goto label_16d2a4;
        case 0x16d2a8u: goto label_16d2a8;
        case 0x16d2acu: goto label_16d2ac;
        case 0x16d2b0u: goto label_16d2b0;
        case 0x16d2b4u: goto label_16d2b4;
        case 0x16d2b8u: goto label_16d2b8;
        case 0x16d2bcu: goto label_16d2bc;
        case 0x16d2c0u: goto label_16d2c0;
        case 0x16d2c4u: goto label_16d2c4;
        case 0x16d2c8u: goto label_16d2c8;
        case 0x16d2ccu: goto label_16d2cc;
        case 0x16d2d0u: goto label_16d2d0;
        case 0x16d2d4u: goto label_16d2d4;
        case 0x16d2d8u: goto label_16d2d8;
        case 0x16d2dcu: goto label_16d2dc;
        case 0x16d2e0u: goto label_16d2e0;
        case 0x16d2e4u: goto label_16d2e4;
        case 0x16d2e8u: goto label_16d2e8;
        case 0x16d2ecu: goto label_16d2ec;
        case 0x16d2f0u: goto label_16d2f0;
        case 0x16d2f4u: goto label_16d2f4;
        case 0x16d2f8u: goto label_16d2f8;
        case 0x16d2fcu: goto label_16d2fc;
        case 0x16d300u: goto label_16d300;
        case 0x16d304u: goto label_16d304;
        case 0x16d308u: goto label_16d308;
        case 0x16d30cu: goto label_16d30c;
        case 0x16d310u: goto label_16d310;
        case 0x16d314u: goto label_16d314;
        case 0x16d318u: goto label_16d318;
        case 0x16d31cu: goto label_16d31c;
        case 0x16d320u: goto label_16d320;
        case 0x16d324u: goto label_16d324;
        case 0x16d328u: goto label_16d328;
        case 0x16d32cu: goto label_16d32c;
        case 0x16d330u: goto label_16d330;
        case 0x16d334u: goto label_16d334;
        case 0x16d338u: goto label_16d338;
        case 0x16d33cu: goto label_16d33c;
        case 0x16d340u: goto label_16d340;
        case 0x16d344u: goto label_16d344;
        case 0x16d348u: goto label_16d348;
        case 0x16d34cu: goto label_16d34c;
        case 0x16d350u: goto label_16d350;
        case 0x16d354u: goto label_16d354;
        case 0x16d358u: goto label_16d358;
        case 0x16d35cu: goto label_16d35c;
        case 0x16d360u: goto label_16d360;
        case 0x16d364u: goto label_16d364;
        case 0x16d368u: goto label_16d368;
        case 0x16d36cu: goto label_16d36c;
        case 0x16d370u: goto label_16d370;
        case 0x16d374u: goto label_16d374;
        case 0x16d378u: goto label_16d378;
        case 0x16d37cu: goto label_16d37c;
        case 0x16d380u: goto label_16d380;
        case 0x16d384u: goto label_16d384;
        case 0x16d388u: goto label_16d388;
        case 0x16d38cu: goto label_16d38c;
        case 0x16d390u: goto label_16d390;
        case 0x16d394u: goto label_16d394;
        case 0x16d398u: goto label_16d398;
        case 0x16d39cu: goto label_16d39c;
        case 0x16d3a0u: goto label_16d3a0;
        case 0x16d3a4u: goto label_16d3a4;
        case 0x16d3a8u: goto label_16d3a8;
        case 0x16d3acu: goto label_16d3ac;
        case 0x16d3b0u: goto label_16d3b0;
        case 0x16d3b4u: goto label_16d3b4;
        case 0x16d3b8u: goto label_16d3b8;
        case 0x16d3bcu: goto label_16d3bc;
        case 0x16d3c0u: goto label_16d3c0;
        case 0x16d3c4u: goto label_16d3c4;
        case 0x16d3c8u: goto label_16d3c8;
        case 0x16d3ccu: goto label_16d3cc;
        case 0x16d3d0u: goto label_16d3d0;
        case 0x16d3d4u: goto label_16d3d4;
        case 0x16d3d8u: goto label_16d3d8;
        case 0x16d3dcu: goto label_16d3dc;
        case 0x16d3e0u: goto label_16d3e0;
        case 0x16d3e4u: goto label_16d3e4;
        case 0x16d3e8u: goto label_16d3e8;
        case 0x16d3ecu: goto label_16d3ec;
        case 0x16d3f0u: goto label_16d3f0;
        case 0x16d3f4u: goto label_16d3f4;
        case 0x16d3f8u: goto label_16d3f8;
        case 0x16d3fcu: goto label_16d3fc;
        case 0x16d400u: goto label_16d400;
        case 0x16d404u: goto label_16d404;
        case 0x16d408u: goto label_16d408;
        case 0x16d40cu: goto label_16d40c;
        case 0x16d410u: goto label_16d410;
        case 0x16d414u: goto label_16d414;
        case 0x16d418u: goto label_16d418;
        case 0x16d41cu: goto label_16d41c;
        case 0x16d420u: goto label_16d420;
        case 0x16d424u: goto label_16d424;
        case 0x16d428u: goto label_16d428;
        case 0x16d42cu: goto label_16d42c;
        case 0x16d430u: goto label_16d430;
        case 0x16d434u: goto label_16d434;
        case 0x16d438u: goto label_16d438;
        case 0x16d43cu: goto label_16d43c;
        case 0x16d440u: goto label_16d440;
        case 0x16d444u: goto label_16d444;
        case 0x16d448u: goto label_16d448;
        case 0x16d44cu: goto label_16d44c;
        case 0x16d450u: goto label_16d450;
        case 0x16d454u: goto label_16d454;
        case 0x16d458u: goto label_16d458;
        case 0x16d45cu: goto label_16d45c;
        case 0x16d460u: goto label_16d460;
        case 0x16d464u: goto label_16d464;
        case 0x16d468u: goto label_16d468;
        case 0x16d46cu: goto label_16d46c;
        case 0x16d470u: goto label_16d470;
        case 0x16d474u: goto label_16d474;
        case 0x16d478u: goto label_16d478;
        case 0x16d47cu: goto label_16d47c;
        case 0x16d480u: goto label_16d480;
        case 0x16d484u: goto label_16d484;
        case 0x16d488u: goto label_16d488;
        case 0x16d48cu: goto label_16d48c;
        case 0x16d490u: goto label_16d490;
        case 0x16d494u: goto label_16d494;
        case 0x16d498u: goto label_16d498;
        case 0x16d49cu: goto label_16d49c;
        case 0x16d4a0u: goto label_16d4a0;
        case 0x16d4a4u: goto label_16d4a4;
        case 0x16d4a8u: goto label_16d4a8;
        case 0x16d4acu: goto label_16d4ac;
        case 0x16d4b0u: goto label_16d4b0;
        case 0x16d4b4u: goto label_16d4b4;
        case 0x16d4b8u: goto label_16d4b8;
        case 0x16d4bcu: goto label_16d4bc;
        case 0x16d4c0u: goto label_16d4c0;
        case 0x16d4c4u: goto label_16d4c4;
        case 0x16d4c8u: goto label_16d4c8;
        case 0x16d4ccu: goto label_16d4cc;
        case 0x16d4d0u: goto label_16d4d0;
        case 0x16d4d4u: goto label_16d4d4;
        case 0x16d4d8u: goto label_16d4d8;
        case 0x16d4dcu: goto label_16d4dc;
        case 0x16d4e0u: goto label_16d4e0;
        case 0x16d4e4u: goto label_16d4e4;
        case 0x16d4e8u: goto label_16d4e8;
        case 0x16d4ecu: goto label_16d4ec;
        case 0x16d4f0u: goto label_16d4f0;
        case 0x16d4f4u: goto label_16d4f4;
        case 0x16d4f8u: goto label_16d4f8;
        case 0x16d4fcu: goto label_16d4fc;
        case 0x16d500u: goto label_16d500;
        case 0x16d504u: goto label_16d504;
        case 0x16d508u: goto label_16d508;
        case 0x16d50cu: goto label_16d50c;
        case 0x16d510u: goto label_16d510;
        case 0x16d514u: goto label_16d514;
        case 0x16d518u: goto label_16d518;
        case 0x16d51cu: goto label_16d51c;
        case 0x16d520u: goto label_16d520;
        case 0x16d524u: goto label_16d524;
        case 0x16d528u: goto label_16d528;
        case 0x16d52cu: goto label_16d52c;
        case 0x16d530u: goto label_16d530;
        case 0x16d534u: goto label_16d534;
        case 0x16d538u: goto label_16d538;
        case 0x16d53cu: goto label_16d53c;
        case 0x16d540u: goto label_16d540;
        case 0x16d544u: goto label_16d544;
        case 0x16d548u: goto label_16d548;
        case 0x16d54cu: goto label_16d54c;
        case 0x16d550u: goto label_16d550;
        case 0x16d554u: goto label_16d554;
        case 0x16d558u: goto label_16d558;
        case 0x16d55cu: goto label_16d55c;
        default: break;
    }

    ctx->pc = 0x16c990u;

label_16c990:
    // 0x16c990: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x16c990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_16c994:
    // 0x16c994: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x16c994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_16c998:
    // 0x16c998: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x16c998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_16c99c:
    // 0x16c99c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x16c99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_16c9a0:
    // 0x16c9a0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16c9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_16c9a4:
    // 0x16c9a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16c9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_16c9a8:
    // 0x16c9a8: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x16c9a8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_16c9ac:
    // 0x16c9ac: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x16c9acu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_16c9b0:
    // 0x16c9b0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x16c9b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_16c9b4:
    // 0x16c9b4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x16c9b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_16c9b8:
    // 0x16c9b8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16c9b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_16c9bc:
    // 0x16c9bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16c9bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16c9c0:
    // 0x16c9c0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16c9c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16c9c4:
    // 0x16c9c4: 0x320f809  jalr        $t9
label_16c9c8:
    if (ctx->pc == 0x16C9C8u) {
        ctx->pc = 0x16C9C8u;
            // 0x16c9c8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C9CCu;
        goto label_16c9cc;
    }
    ctx->pc = 0x16C9C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C9CCu);
        ctx->pc = 0x16C9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C9C4u;
            // 0x16c9c8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16C9CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16C9CCu; }
            if (ctx->pc != 0x16C9CCu) { return; }
        }
        }
    }
    ctx->pc = 0x16C9CCu;
label_16c9cc:
    // 0x16c9cc: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16c9ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16c9d0:
    // 0x16c9d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16c9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16c9d4:
    // 0x16c9d4: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x16c9d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_16c9d8:
    // 0x16c9d8: 0x320f809  jalr        $t9
label_16c9dc:
    if (ctx->pc == 0x16C9DCu) {
        ctx->pc = 0x16C9DCu;
            // 0x16c9dc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x16C9E0u;
        goto label_16c9e0;
    }
    ctx->pc = 0x16C9D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C9E0u);
        ctx->pc = 0x16C9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C9D8u;
            // 0x16c9dc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16C9E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16C9E0u; }
            if (ctx->pc != 0x16C9E0u) { return; }
        }
        }
    }
    ctx->pc = 0x16C9E0u;
label_16c9e0:
    // 0x16c9e0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x16c9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_16c9e4:
    // 0x16c9e4: 0xc041c5c  jal         func_107170
label_16c9e8:
    if (ctx->pc == 0x16C9E8u) {
        ctx->pc = 0x16C9E8u;
            // 0x16c9e8: 0x26450080  addiu       $a1, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->pc = 0x16C9ECu;
        goto label_16c9ec;
    }
    ctx->pc = 0x16C9E4u;
    SET_GPR_U32(ctx, 31, 0x16C9ECu);
    ctx->pc = 0x16C9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C9E4u;
            // 0x16c9e8: 0x26450080  addiu       $a1, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C9ECu; }
        if (ctx->pc != 0x16C9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C9ECu; }
        if (ctx->pc != 0x16C9ECu) { return; }
    }
    ctx->pc = 0x16C9ECu;
label_16c9ec:
    // 0x16c9ec: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16c9ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16c9f0:
    // 0x16c9f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16c9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16c9f4:
    // 0x16c9f4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16c9f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16c9f8:
    // 0x16c9f8: 0x320f809  jalr        $t9
label_16c9fc:
    if (ctx->pc == 0x16C9FCu) {
        ctx->pc = 0x16C9FCu;
            // 0x16c9fc: 0x26450660  addiu       $a1, $s2, 0x660 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1632));
        ctx->pc = 0x16CA00u;
        goto label_16ca00;
    }
    ctx->pc = 0x16C9F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CA00u);
        ctx->pc = 0x16C9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C9F8u;
            // 0x16c9fc: 0x26450660  addiu       $a1, $s2, 0x660 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1632));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16CA00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16CA00u; }
            if (ctx->pc != 0x16CA00u) { return; }
        }
        }
    }
    ctx->pc = 0x16CA00u;
label_16ca00:
    // 0x16ca00: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x16ca00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_16ca04:
    // 0x16ca04: 0xc04c678  jal         func_1319E0
label_16ca08:
    if (ctx->pc == 0x16CA08u) {
        ctx->pc = 0x16CA08u;
            // 0x16ca08: 0x8c24d434  lw          $a0, -0x2BCC($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956084)));
        ctx->pc = 0x16CA0Cu;
        goto label_16ca0c;
    }
    ctx->pc = 0x16CA04u;
    SET_GPR_U32(ctx, 31, 0x16CA0Cu);
    ctx->pc = 0x16CA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CA04u;
            // 0x16ca08: 0x8c24d434  lw          $a0, -0x2BCC($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956084)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319E0u;
    if (runtime->hasFunction(0x1319E0u)) {
        auto targetFn = runtime->lookupFunction(0x1319E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CA0Cu; }
        if (ctx->pc != 0x16CA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAngle__15mgCCameraFollowFv_0x1319e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CA0Cu; }
        if (ctx->pc != 0x16CA0Cu) { return; }
    }
    ctx->pc = 0x16CA0Cu;
label_16ca0c:
    // 0x16ca0c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x16ca0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_16ca10:
    // 0x16ca10: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x16ca10u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_16ca14:
    // 0x16ca14: 0xc052cc0  jal         func_14B300
label_16ca18:
    if (ctx->pc == 0x16CA18u) {
        ctx->pc = 0x16CA18u;
            // 0x16ca18: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x16CA1Cu;
        goto label_16ca1c;
    }
    ctx->pc = 0x16CA14u;
    SET_GPR_U32(ctx, 31, 0x16CA1Cu);
    ctx->pc = 0x16CA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CA14u;
            // 0x16ca18: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B300u;
    if (runtime->hasFunction(0x14B300u)) {
        auto targetFn = runtime->lookupFunction(0x14B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CA1Cu; }
        if (ctx->pc != 0x16CA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLXf__8CGamePadFv_0x14b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CA1Cu; }
        if (ctx->pc != 0x16CA1Cu) { return; }
    }
    ctx->pc = 0x16CA1Cu;
label_16ca1c:
    // 0x16ca1c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x16ca1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_16ca20:
    // 0x16ca20: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x16ca20u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_16ca24:
    // 0x16ca24: 0xc052cd0  jal         func_14B340
label_16ca28:
    if (ctx->pc == 0x16CA28u) {
        ctx->pc = 0x16CA28u;
            // 0x16ca28: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x16CA2Cu;
        goto label_16ca2c;
    }
    ctx->pc = 0x16CA24u;
    SET_GPR_U32(ctx, 31, 0x16CA2Cu);
    ctx->pc = 0x16CA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CA24u;
            // 0x16ca28: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B340u;
    if (runtime->hasFunction(0x14B340u)) {
        auto targetFn = runtime->lookupFunction(0x14B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CA2Cu; }
        if (ctx->pc != 0x16CA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLYf__8CGamePadFv_0x14b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CA2Cu; }
        if (ctx->pc != 0x16CA2Cu) { return; }
    }
    ctx->pc = 0x16CA2Cu;
label_16ca2c:
    // 0x16ca2c: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x16ca2cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
label_16ca30:
    // 0x16ca30: 0xc047964  jal         func_11E590
label_16ca34:
    if (ctx->pc == 0x16CA34u) {
        ctx->pc = 0x16CA34u;
            // 0x16ca34: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16CA38u;
        goto label_16ca38;
    }
    ctx->pc = 0x16CA30u;
    SET_GPR_U32(ctx, 31, 0x16CA38u);
    ctx->pc = 0x16CA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CA30u;
            // 0x16ca34: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CA38u; }
        if (ctx->pc != 0x16CA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CA38u; }
        if (ctx->pc != 0x16CA38u) { return; }
    }
    ctx->pc = 0x16CA38u;
label_16ca38:
    // 0x16ca38: 0x4600b502  mul.s       $f20, $f22, $f0
    ctx->pc = 0x16ca38u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_16ca3c:
    // 0x16ca3c: 0xc047a42  jal         func_11E908
label_16ca40:
    if (ctx->pc == 0x16CA40u) {
        ctx->pc = 0x16CA40u;
            // 0x16ca40: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16CA44u;
        goto label_16ca44;
    }
    ctx->pc = 0x16CA3Cu;
    SET_GPR_U32(ctx, 31, 0x16CA44u);
    ctx->pc = 0x16CA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CA3Cu;
            // 0x16ca40: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CA44u; }
        if (ctx->pc != 0x16CA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CA44u; }
        if (ctx->pc != 0x16CA44u) { return; }
    }
    ctx->pc = 0x16CA44u;
label_16ca44:
    // 0x16ca44: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x16ca44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
label_16ca48:
    // 0x16ca48: 0x4600a5c0  add.s       $f23, $f20, $f0
    ctx->pc = 0x16ca48u;
    ctx->f[23] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_16ca4c:
    // 0x16ca4c: 0xc047a42  jal         func_11E908
label_16ca50:
    if (ctx->pc == 0x16CA50u) {
        ctx->pc = 0x16CA50u;
            // 0x16ca50: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16CA54u;
        goto label_16ca54;
    }
    ctx->pc = 0x16CA4Cu;
    SET_GPR_U32(ctx, 31, 0x16CA54u);
    ctx->pc = 0x16CA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CA4Cu;
            // 0x16ca50: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CA54u; }
        if (ctx->pc != 0x16CA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CA54u; }
        if (ctx->pc != 0x16CA54u) { return; }
    }
    ctx->pc = 0x16CA54u;
label_16ca54:
    // 0x16ca54: 0x4600b047  neg.s       $f1, $f22
    ctx->pc = 0x16ca54u;
    ctx->f[1] = FPU_NEG_S(ctx->f[22]);
label_16ca58:
    // 0x16ca58: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x16ca58u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16ca5c:
    // 0x16ca5c: 0xc047964  jal         func_11E590
label_16ca60:
    if (ctx->pc == 0x16CA60u) {
        ctx->pc = 0x16CA60u;
            // 0x16ca60: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16CA64u;
        goto label_16ca64;
    }
    ctx->pc = 0x16CA5Cu;
    SET_GPR_U32(ctx, 31, 0x16CA64u);
    ctx->pc = 0x16CA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CA5Cu;
            // 0x16ca60: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CA64u; }
        if (ctx->pc != 0x16CA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CA64u; }
        if (ctx->pc != 0x16CA64u) { return; }
    }
    ctx->pc = 0x16CA64u;
label_16ca64:
    // 0x16ca64: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x16ca64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
label_16ca68:
    // 0x16ca68: 0xc0683a8  jal         func_1A0EA0
label_16ca6c:
    if (ctx->pc == 0x16CA6Cu) {
        ctx->pc = 0x16CA6Cu;
            // 0x16ca6c: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x16CA70u;
        goto label_16ca70;
    }
    ctx->pc = 0x16CA68u;
    SET_GPR_U32(ctx, 31, 0x16CA70u);
    ctx->pc = 0x16CA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CA68u;
            // 0x16ca6c: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CA70u; }
        if (ctx->pc != 0x16CA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CA70u; }
        if (ctx->pc != 0x16CA70u) { return; }
    }
    ctx->pc = 0x16CA70u;
label_16ca70:
    // 0x16ca70: 0xc068140  jal         func_1A0500
label_16ca74:
    if (ctx->pc == 0x16CA74u) {
        ctx->pc = 0x16CA74u;
            // 0x16ca74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16CA78u;
        goto label_16ca78;
    }
    ctx->pc = 0x16CA70u;
    SET_GPR_U32(ctx, 31, 0x16CA78u);
    ctx->pc = 0x16CA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CA70u;
            // 0x16ca74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0500u;
    if (runtime->hasFunction(0x1A0500u)) {
        auto targetFn = runtime->lookupFunction(0x1A0500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CA78u; }
        if (ctx->pc != 0x16CA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAttr__16CBattleCharaInfoFv_0x1a0500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CA78u; }
        if (ctx->pc != 0x16CA78u) { return; }
    }
    ctx->pc = 0x16CA78u;
label_16ca78:
    // 0x16ca78: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x16ca78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_16ca7c:
    // 0x16ca7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_16ca80:
    if (ctx->pc == 0x16CA80u) {
        ctx->pc = 0x16CA84u;
        goto label_16ca84;
    }
    ctx->pc = 0x16CA7Cu;
    {
        const bool branch_taken_0x16ca7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ca7c) {
            ctx->pc = 0x16CA98u;
            goto label_16ca98;
        }
    }
    ctx->pc = 0x16CA84u;
label_16ca84:
    // 0x16ca84: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16ca84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16ca88:
    // 0x16ca88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ca88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16ca8c:
    // 0x16ca8c: 0x0  nop
    ctx->pc = 0x16ca8cu;
    // NOP
label_16ca90:
    // 0x16ca90: 0x4600bdc2  mul.s       $f23, $f23, $f0
    ctx->pc = 0x16ca90u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_16ca94:
    // 0x16ca94: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x16ca94u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_16ca98:
    // 0x16ca98: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x16ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_16ca9c:
    // 0x16ca9c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x16ca9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_16caa0:
    // 0x16caa0: 0x24424bf0  addiu       $v0, $v0, 0x4BF0
    ctx->pc = 0x16caa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19440));
label_16caa4:
    // 0x16caa4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x16caa4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_16caa8:
    // 0x16caa8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x16caa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_16caac:
    // 0x16caac: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x16caacu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_16cab0:
    // 0x16cab0: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x16cab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_16cab4:
    // 0x16cab4: 0xe7b70090  swc1        $f23, 0x90($sp)
    ctx->pc = 0x16cab4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_16cab8:
    // 0x16cab8: 0xe7b40098  swc1        $f20, 0x98($sp)
    ctx->pc = 0x16cab8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_16cabc:
    // 0x16cabc: 0x86420772  lh          $v0, 0x772($s2)
    ctx->pc = 0x16cabcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1906)));
label_16cac0:
    // 0x16cac0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_16cac4:
    if (ctx->pc == 0x16CAC4u) {
        ctx->pc = 0x16CAC4u;
            // 0x16cac4: 0x3c024100  lui         $v0, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
        ctx->pc = 0x16CAC8u;
        goto label_16cac8;
    }
    ctx->pc = 0x16CAC0u;
    {
        const bool branch_taken_0x16cac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CAC0u;
            // 0x16cac4: 0x3c024100  lui         $v0, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cac0) {
            ctx->pc = 0x16CAD8u;
            goto label_16cad8;
        }
    }
    ctx->pc = 0x16CAC8u;
label_16cac8:
    // 0x16cac8: 0x3c023fe6  lui         $v0, 0x3FE6
    ctx->pc = 0x16cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16358 << 16));
label_16cacc:
    // 0x16cacc: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x16caccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_16cad0:
    // 0x16cad0: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x16cad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_16cad4:
    // 0x16cad4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x16cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_16cad8:
    // 0x16cad8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16cad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cadc:
    // 0x16cadc: 0xc65600a0  lwc1        $f22, 0xA0($s2)
    ctx->pc = 0x16cadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_16cae0:
    // 0x16cae0: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x16cae0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
label_16cae4:
    // 0x16cae4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16cae8:
    // 0x16cae8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16cae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16caec:
    // 0x16caec: 0x0  nop
    ctx->pc = 0x16caecu;
    // NOP
label_16caf0:
    // 0x16caf0: 0x0  nop
    ctx->pc = 0x16caf0u;
    // NOP
label_16caf4:
    // 0x16caf4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16caf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16caf8:
    // 0x16caf8: 0x0  nop
    ctx->pc = 0x16caf8u;
    // NOP
label_16cafc:
    // 0x16cafc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_16cb00:
    if (ctx->pc == 0x16CB00u) {
        ctx->pc = 0x16CB04u;
        goto label_16cb04;
    }
    ctx->pc = 0x16CAFCu;
    {
        const bool branch_taken_0x16cafc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16cafc) {
            ctx->pc = 0x16CB08u;
            goto label_16cb08;
        }
    }
    ctx->pc = 0x16CB04u;
label_16cb04:
    // 0x16cb04: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x16cb04u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_16cb08:
    // 0x16cb08: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x16cb08u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_16cb0c:
    // 0x16cb0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16cb10:
    // 0x16cb10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16cb10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cb14:
    // 0x16cb14: 0x0  nop
    ctx->pc = 0x16cb14u;
    // NOP
label_16cb18:
    // 0x16cb18: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x16cb18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16cb1c:
    // 0x16cb1c: 0x0  nop
    ctx->pc = 0x16cb1cu;
    // NOP
label_16cb20:
    // 0x16cb20: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_16cb24:
    if (ctx->pc == 0x16CB24u) {
        ctx->pc = 0x16CB24u;
            // 0x16cb24: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x16CB28u;
        goto label_16cb28;
    }
    ctx->pc = 0x16CB20u;
    {
        const bool branch_taken_0x16cb20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CB20u;
            // 0x16cb24: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cb20) {
            ctx->pc = 0x16CB2Cu;
            goto label_16cb2c;
        }
    }
    ctx->pc = 0x16CB28u;
label_16cb28:
    // 0x16cb28: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x16cb28u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_16cb2c:
    // 0x16cb2c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x16cb2cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_16cb30:
    // 0x16cb30: 0xc047c76  jal         func_11F1D8
label_16cb34:
    if (ctx->pc == 0x16CB34u) {
        ctx->pc = 0x16CB34u;
            // 0x16cb34: 0xe65600a0  swc1        $f22, 0xA0($s2) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 160), bits); }
        ctx->pc = 0x16CB38u;
        goto label_16cb38;
    }
    ctx->pc = 0x16CB30u;
    SET_GPR_U32(ctx, 31, 0x16CB38u);
    ctx->pc = 0x16CB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CB30u;
            // 0x16cb34: 0xe65600a0  swc1        $f22, 0xA0($s2) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 160), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CB38u; }
        if (ctx->pc != 0x16CB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CB38u; }
        if (ctx->pc != 0x16CB38u) { return; }
    }
    ctx->pc = 0x16CB38u;
label_16cb38:
    // 0x16cb38: 0xc7818990  lwc1        $f1, -0x7670($gp)
    ctx->pc = 0x16cb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16cb3c:
    // 0x16cb3c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x16cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_16cb40:
    // 0x16cb40: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16cb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16cb44:
    // 0x16cb44: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x16cb44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_16cb48:
    // 0x16cb48: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x16cb48u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_16cb4c:
    // 0x16cb4c: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x16cb4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16cb50:
    // 0x16cb50: 0x0  nop
    ctx->pc = 0x16cb50u;
    // NOP
label_16cb54:
    // 0x16cb54: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_16cb58:
    if (ctx->pc == 0x16CB58u) {
        ctx->pc = 0x16CB58u;
            // 0x16cb58: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->pc = 0x16CB5Cu;
        goto label_16cb5c;
    }
    ctx->pc = 0x16CB54u;
    {
        const bool branch_taken_0x16cb54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CB54u;
            // 0x16cb58: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cb54) {
            ctx->pc = 0x16CB74u;
            goto label_16cb74;
        }
    }
    ctx->pc = 0x16CB5Cu;
label_16cb5c:
    // 0x16cb5c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_16cb60:
    // 0x16cb60: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16cb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16cb64:
    // 0x16cb64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16cb64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16cb68:
    // 0x16cb68: 0x0  nop
    ctx->pc = 0x16cb68u;
    // NOP
label_16cb6c:
    // 0x16cb6c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x16cb6cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_16cb70:
    // 0x16cb70: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x16cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_16cb74:
    // 0x16cb74: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16cb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16cb78:
    // 0x16cb78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16cb78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16cb7c:
    // 0x16cb7c: 0x0  nop
    ctx->pc = 0x16cb7cu;
    // NOP
label_16cb80:
    // 0x16cb80: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x16cb80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16cb84:
    // 0x16cb84: 0x0  nop
    ctx->pc = 0x16cb84u;
    // NOP
label_16cb88:
    // 0x16cb88: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16cb8c:
    if (ctx->pc == 0x16CB8Cu) {
        ctx->pc = 0x16CB8Cu;
            // 0x16cb8c: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->pc = 0x16CB90u;
        goto label_16cb90;
    }
    ctx->pc = 0x16CB88u;
    {
        const bool branch_taken_0x16cb88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CB88u;
            // 0x16cb8c: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cb88) {
            ctx->pc = 0x16CBA0u;
            goto label_16cba0;
        }
    }
    ctx->pc = 0x16CB90u;
label_16cb90:
    // 0x16cb90: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16cb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16cb94:
    // 0x16cb94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16cb94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16cb98:
    // 0x16cb98: 0x0  nop
    ctx->pc = 0x16cb98u;
    // NOP
label_16cb9c:
    // 0x16cb9c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x16cb9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_16cba0:
    // 0x16cba0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16cba0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16cba4:
    // 0x16cba4: 0x0  nop
    ctx->pc = 0x16cba4u;
    // NOP
label_16cba8:
    // 0x16cba8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x16cba8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16cbac:
    // 0x16cbac: 0x0  nop
    ctx->pc = 0x16cbacu;
    // NOP
label_16cbb0:
    // 0x16cbb0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16cbb4:
    if (ctx->pc == 0x16CBB4u) {
        ctx->pc = 0x16CBB8u;
        goto label_16cbb8;
    }
    ctx->pc = 0x16CBB0u;
    {
        const bool branch_taken_0x16cbb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16cbb0) {
            ctx->pc = 0x16CBBCu;
            goto label_16cbbc;
        }
    }
    ctx->pc = 0x16CBB8u;
label_16cbb8:
    // 0x16cbb8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x16cbb8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_16cbbc:
    // 0x16cbbc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x16cbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_16cbc0:
    // 0x16cbc0: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x16cbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_16cbc4:
    // 0x16cbc4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16cbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16cbc8:
    // 0x16cbc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16cbc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16cbcc:
    // 0x16cbcc: 0x0  nop
    ctx->pc = 0x16cbccu;
    // NOP
label_16cbd0:
    // 0x16cbd0: 0xe7808990  swc1        $f0, -0x7670($gp)
    ctx->pc = 0x16cbd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936976), bits); }
label_16cbd4:
    // 0x16cbd4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x16cbd4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_16cbd8:
    // 0x16cbd8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16cbdc:
    // 0x16cbdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16cbdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cbe0:
    // 0x16cbe0: 0x0  nop
    ctx->pc = 0x16cbe0u;
    // NOP
label_16cbe4:
    // 0x16cbe4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x16cbe4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_16cbe8:
    // 0x16cbe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16cbe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cbec:
    // 0x16cbec: 0x0  nop
    ctx->pc = 0x16cbecu;
    // NOP
label_16cbf0:
    // 0x16cbf0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16cbf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16cbf4:
    // 0x16cbf4: 0x0  nop
    ctx->pc = 0x16cbf4u;
    // NOP
label_16cbf8:
    // 0x16cbf8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_16cbfc:
    if (ctx->pc == 0x16CBFCu) {
        ctx->pc = 0x16CC00u;
        goto label_16cc00;
    }
    ctx->pc = 0x16CBF8u;
    {
        const bool branch_taken_0x16cbf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16cbf8) {
            ctx->pc = 0x16CC04u;
            goto label_16cc04;
        }
    }
    ctx->pc = 0x16CC00u;
label_16cc00:
    // 0x16cc00: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x16cc00u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_16cc04:
    // 0x16cc04: 0x4601b581  sub.s       $f22, $f22, $f1
    ctx->pc = 0x16cc04u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
label_16cc08:
    // 0x16cc08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16cc08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cc0c:
    // 0x16cc0c: 0x0  nop
    ctx->pc = 0x16cc0cu;
    // NOP
label_16cc10:
    // 0x16cc10: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x16cc10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16cc14:
    // 0x16cc14: 0x0  nop
    ctx->pc = 0x16cc14u;
    // NOP
label_16cc18:
    // 0x16cc18: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16cc1c:
    if (ctx->pc == 0x16CC1Cu) {
        ctx->pc = 0x16CC20u;
        goto label_16cc20;
    }
    ctx->pc = 0x16CC18u;
    {
        const bool branch_taken_0x16cc18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16cc18) {
            ctx->pc = 0x16CC24u;
            goto label_16cc24;
        }
    }
    ctx->pc = 0x16CC20u;
label_16cc20:
    // 0x16cc20: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x16cc20u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_16cc24:
    // 0x16cc24: 0xe65600a0  swc1        $f22, 0xA0($s2)
    ctx->pc = 0x16cc24u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 160), bits); }
label_16cc28:
    // 0x16cc28: 0x27b00088  addiu       $s0, $sp, 0x88
    ctx->pc = 0x16cc28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_16cc2c:
    // 0x16cc2c: 0xc7828760  lwc1        $f2, -0x78A0($gp)
    ctx->pc = 0x16cc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16cc30:
    // 0x16cc30: 0x4615b842  mul.s       $f1, $f23, $f21
    ctx->pc = 0x16cc30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
label_16cc34:
    // 0x16cc34: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x16cc34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_16cc38:
    // 0x16cc38: 0x4615a002  mul.s       $f0, $f20, $f21
    ctx->pc = 0x16cc38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
label_16cc3c:
    // 0x16cc3c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x16cc3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_16cc40:
    // 0x16cc40: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16cc40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_16cc44:
    // 0x16cc44: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x16cc44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
label_16cc48:
    // 0x16cc48: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x16cc48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_16cc4c:
    // 0x16cc4c: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x16cc4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_16cc50:
    // 0x16cc50: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x16cc50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_16cc54:
    // 0x16cc54: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x16cc54u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_16cc58:
    // 0x16cc58: 0xc047c76  jal         func_11F1D8
label_16cc5c:
    if (ctx->pc == 0x16CC5Cu) {
        ctx->pc = 0x16CC5Cu;
            // 0x16cc5c: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->pc = 0x16CC60u;
        goto label_16cc60;
    }
    ctx->pc = 0x16CC58u;
    SET_GPR_U32(ctx, 31, 0x16CC60u);
    ctx->pc = 0x16CC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CC58u;
            // 0x16cc5c: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CC60u; }
        if (ctx->pc != 0x16CC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CC60u; }
        if (ctx->pc != 0x16CC60u) { return; }
    }
    ctx->pc = 0x16CC60u;
label_16cc60:
    // 0x16cc60: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x16cc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16cc64:
    // 0x16cc64: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x16cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_16cc68:
    // 0x16cc68: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16cc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16cc6c:
    // 0x16cc6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16cc6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16cc70:
    // 0x16cc70: 0x0  nop
    ctx->pc = 0x16cc70u;
    // NOP
label_16cc74:
    // 0x16cc74: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x16cc74u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_16cc78:
    // 0x16cc78: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x16cc78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16cc7c:
    // 0x16cc7c: 0x0  nop
    ctx->pc = 0x16cc7cu;
    // NOP
label_16cc80:
    // 0x16cc80: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_16cc84:
    if (ctx->pc == 0x16CC84u) {
        ctx->pc = 0x16CC84u;
            // 0x16cc84: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->pc = 0x16CC88u;
        goto label_16cc88;
    }
    ctx->pc = 0x16CC80u;
    {
        const bool branch_taken_0x16cc80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CC80u;
            // 0x16cc84: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc80) {
            ctx->pc = 0x16CCA0u;
            goto label_16cca0;
        }
    }
    ctx->pc = 0x16CC88u;
label_16cc88:
    // 0x16cc88: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16cc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_16cc8c:
    // 0x16cc8c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16cc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16cc90:
    // 0x16cc90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16cc90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cc94:
    // 0x16cc94: 0x0  nop
    ctx->pc = 0x16cc94u;
    // NOP
label_16cc98:
    // 0x16cc98: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x16cc98u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_16cc9c:
    // 0x16cc9c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x16cc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_16cca0:
    // 0x16cca0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16cca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16cca4:
    // 0x16cca4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16cca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cca8:
    // 0x16cca8: 0x0  nop
    ctx->pc = 0x16cca8u;
    // NOP
label_16ccac:
    // 0x16ccac: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x16ccacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16ccb0:
    // 0x16ccb0: 0x0  nop
    ctx->pc = 0x16ccb0u;
    // NOP
label_16ccb4:
    // 0x16ccb4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16ccb8:
    if (ctx->pc == 0x16CCB8u) {
        ctx->pc = 0x16CCB8u;
            // 0x16ccb8: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->pc = 0x16CCBCu;
        goto label_16ccbc;
    }
    ctx->pc = 0x16CCB4u;
    {
        const bool branch_taken_0x16ccb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CCB4u;
            // 0x16ccb8: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ccb4) {
            ctx->pc = 0x16CCCCu;
            goto label_16cccc;
        }
    }
    ctx->pc = 0x16CCBCu;
label_16ccbc:
    // 0x16ccbc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16ccbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16ccc0:
    // 0x16ccc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ccc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16ccc4:
    // 0x16ccc4: 0x0  nop
    ctx->pc = 0x16ccc4u;
    // NOP
label_16ccc8:
    // 0x16ccc8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x16ccc8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_16cccc:
    // 0x16cccc: 0xc64107bc  lwc1        $f1, 0x7BC($s2)
    ctx->pc = 0x16ccccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16ccd0:
    // 0x16ccd0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x16ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_16ccd4:
    // 0x16ccd4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16ccd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16ccd8:
    // 0x16ccd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ccd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16ccdc:
    // 0x16ccdc: 0x0  nop
    ctx->pc = 0x16ccdcu;
    // NOP
label_16cce0:
    // 0x16cce0: 0x460208c1  sub.s       $f3, $f1, $f2
    ctx->pc = 0x16cce0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_16cce4:
    // 0x16cce4: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x16cce4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16cce8:
    // 0x16cce8: 0x0  nop
    ctx->pc = 0x16cce8u;
    // NOP
label_16ccec:
    // 0x16ccec: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_16ccf0:
    if (ctx->pc == 0x16CCF0u) {
        ctx->pc = 0x16CCF0u;
            // 0x16ccf0: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->pc = 0x16CCF4u;
        goto label_16ccf4;
    }
    ctx->pc = 0x16CCECu;
    {
        const bool branch_taken_0x16ccec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CCF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CCECu;
            // 0x16ccf0: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ccec) {
            ctx->pc = 0x16CD0Cu;
            goto label_16cd0c;
        }
    }
    ctx->pc = 0x16CCF4u;
label_16ccf4:
    // 0x16ccf4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16ccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_16ccf8:
    // 0x16ccf8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16ccf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16ccfc:
    // 0x16ccfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ccfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cd00:
    // 0x16cd00: 0x0  nop
    ctx->pc = 0x16cd00u;
    // NOP
label_16cd04:
    // 0x16cd04: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x16cd04u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_16cd08:
    // 0x16cd08: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x16cd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_16cd0c:
    // 0x16cd0c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16cd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16cd10:
    // 0x16cd10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16cd10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cd14:
    // 0x16cd14: 0x0  nop
    ctx->pc = 0x16cd14u;
    // NOP
label_16cd18:
    // 0x16cd18: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x16cd18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16cd1c:
    // 0x16cd1c: 0x0  nop
    ctx->pc = 0x16cd1cu;
    // NOP
label_16cd20:
    // 0x16cd20: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16cd24:
    if (ctx->pc == 0x16CD24u) {
        ctx->pc = 0x16CD24u;
            // 0x16cd24: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->pc = 0x16CD28u;
        goto label_16cd28;
    }
    ctx->pc = 0x16CD20u;
    {
        const bool branch_taken_0x16cd20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CD20u;
            // 0x16cd24: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd20) {
            ctx->pc = 0x16CD38u;
            goto label_16cd38;
        }
    }
    ctx->pc = 0x16CD28u;
label_16cd28:
    // 0x16cd28: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16cd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16cd2c:
    // 0x16cd2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16cd2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cd30:
    // 0x16cd30: 0x0  nop
    ctx->pc = 0x16cd30u;
    // NOP
label_16cd34:
    // 0x16cd34: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x16cd34u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_16cd38:
    // 0x16cd38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16cd38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cd3c:
    // 0x16cd3c: 0x0  nop
    ctx->pc = 0x16cd3cu;
    // NOP
label_16cd40:
    // 0x16cd40: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x16cd40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16cd44:
    // 0x16cd44: 0x0  nop
    ctx->pc = 0x16cd44u;
    // NOP
label_16cd48:
    // 0x16cd48: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16cd4c:
    if (ctx->pc == 0x16CD4Cu) {
        ctx->pc = 0x16CD50u;
        goto label_16cd50;
    }
    ctx->pc = 0x16CD48u;
    {
        const bool branch_taken_0x16cd48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16cd48) {
            ctx->pc = 0x16CD54u;
            goto label_16cd54;
        }
    }
    ctx->pc = 0x16CD50u;
label_16cd50:
    // 0x16cd50: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x16cd50u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_16cd54:
    // 0x16cd54: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x16cd54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_16cd58:
    // 0x16cd58: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x16cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_16cd5c:
    // 0x16cd5c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x16cd5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_16cd60:
    // 0x16cd60: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x16cd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_16cd64:
    // 0x16cd64: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16cd64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16cd68:
    // 0x16cd68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16cd68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cd6c:
    // 0x16cd6c: 0x0  nop
    ctx->pc = 0x16cd6cu;
    // NOP
label_16cd70:
    // 0x16cd70: 0x46011843  div.s       $f1, $f3, $f1
    ctx->pc = 0x16cd70u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
label_16cd74:
    // 0x16cd74: 0x0  nop
    ctx->pc = 0x16cd74u;
    // NOP
label_16cd78:
    // 0x16cd78: 0x0  nop
    ctx->pc = 0x16cd78u;
    // NOP
label_16cd7c:
    // 0x16cd7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16cd7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16cd80:
    // 0x16cd80: 0x0  nop
    ctx->pc = 0x16cd80u;
    // NOP
label_16cd84:
    // 0x16cd84: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16cd88:
    if (ctx->pc == 0x16CD88u) {
        ctx->pc = 0x16CD8Cu;
        goto label_16cd8c;
    }
    ctx->pc = 0x16CD84u;
    {
        const bool branch_taken_0x16cd84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16cd84) {
            ctx->pc = 0x16CD9Cu;
            goto label_16cd9c;
        }
    }
    ctx->pc = 0x16CD8Cu;
label_16cd8c:
    // 0x16cd8c: 0x8e4207c0  lw          $v0, 0x7C0($s2)
    ctx->pc = 0x16cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1984)));
label_16cd90:
    // 0x16cd90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16cd94:
    // 0x16cd94: 0x10000003  b           . + 4 + (0x3 << 2)
label_16cd98:
    if (ctx->pc == 0x16CD98u) {
        ctx->pc = 0x16CD98u;
            // 0x16cd98: 0xae4207c0  sw          $v0, 0x7C0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1984), GPR_U32(ctx, 2));
        ctx->pc = 0x16CD9Cu;
        goto label_16cd9c;
    }
    ctx->pc = 0x16CD94u;
    {
        const bool branch_taken_0x16cd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CD94u;
            // 0x16cd98: 0xae4207c0  sw          $v0, 0x7C0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1984), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd94) {
            ctx->pc = 0x16CDA4u;
            goto label_16cda4;
        }
    }
    ctx->pc = 0x16CD9Cu;
label_16cd9c:
    // 0x16cd9c: 0xae4007c0  sw          $zero, 0x7C0($s2)
    ctx->pc = 0x16cd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1984), GPR_U32(ctx, 0));
label_16cda0:
    // 0x16cda0: 0xe64207bc  swc1        $f2, 0x7BC($s2)
    ctx->pc = 0x16cda0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1980), bits); }
label_16cda4:
    // 0x16cda4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x16cda4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_16cda8:
    // 0x16cda8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16cda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16cdac:
    // 0x16cdac: 0xc052cf0  jal         func_14B3C0
label_16cdb0:
    if (ctx->pc == 0x16CDB0u) {
        ctx->pc = 0x16CDB0u;
            // 0x16cdb0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x16CDB4u;
        goto label_16cdb4;
    }
    ctx->pc = 0x16CDACu;
    SET_GPR_U32(ctx, 31, 0x16CDB4u);
    ctx->pc = 0x16CDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CDACu;
            // 0x16cdb0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CDB4u; }
        if (ctx->pc != 0x16CDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CDB4u; }
        if (ctx->pc != 0x16CDB4u) { return; }
    }
    ctx->pc = 0x16CDB4u;
label_16cdb4:
    // 0x16cdb4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_16cdb8:
    if (ctx->pc == 0x16CDB8u) {
        ctx->pc = 0x16CDB8u;
            // 0x16cdb8: 0x3c01003e  lui         $at, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
        ctx->pc = 0x16CDBCu;
        goto label_16cdbc;
    }
    ctx->pc = 0x16CDB4u;
    {
        const bool branch_taken_0x16cdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CDB4u;
            // 0x16cdb8: 0x3c01003e  lui         $at, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cdb4) {
            ctx->pc = 0x16CDECu;
            goto label_16cdec;
        }
    }
    ctx->pc = 0x16CDBCu;
label_16cdbc:
    // 0x16cdbc: 0x8c228074  lw          $v0, -0x7F8C($at)
    ctx->pc = 0x16cdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934644)));
label_16cdc0:
    // 0x16cdc0: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
label_16cdc4:
    if (ctx->pc == 0x16CDC4u) {
        ctx->pc = 0x16CDC8u;
        goto label_16cdc8;
    }
    ctx->pc = 0x16CDC0u;
    {
        const bool branch_taken_0x16cdc0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x16cdc0) {
            ctx->pc = 0x16CDECu;
            goto label_16cdec;
        }
    }
    ctx->pc = 0x16CDC8u;
label_16cdc8:
    // 0x16cdc8: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x16cdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16cdcc:
    // 0x16cdcc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x16cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_16cdd0:
    // 0x16cdd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16cdd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16cdd4:
    // 0x16cdd4: 0x0  nop
    ctx->pc = 0x16cdd4u;
    // NOP
label_16cdd8:
    // 0x16cdd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16cdd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_16cddc:
    // 0x16cddc: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x16cddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_16cde0:
    // 0x16cde0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x16cde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16cde4:
    // 0x16cde4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16cde4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_16cde8:
    // 0x16cde8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x16cde8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_16cdec:
    // 0x16cdec: 0x86420772  lh          $v0, 0x772($s2)
    ctx->pc = 0x16cdecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1906)));
label_16cdf0:
    // 0x16cdf0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16cdf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16cdf4:
    // 0x16cdf4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_16cdf8:
    if (ctx->pc == 0x16CDF8u) {
        ctx->pc = 0x16CDF8u;
            // 0x16cdf8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16CDFCu;
        goto label_16cdfc;
    }
    ctx->pc = 0x16CDF4u;
    {
        const bool branch_taken_0x16cdf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CDF4u;
            // 0x16cdf8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cdf4) {
            ctx->pc = 0x16CE20u;
            goto label_16ce20;
        }
    }
    ctx->pc = 0x16CDFCu;
label_16cdfc:
    // 0x16cdfc: 0x8f849da4  lw          $a0, -0x625C($gp)
    ctx->pc = 0x16cdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
label_16ce00:
    // 0x16ce00: 0xc0a0ed8  jal         func_283B60
label_16ce04:
    if (ctx->pc == 0x16CE04u) {
        ctx->pc = 0x16CE04u;
            // 0x16ce04: 0x86450770  lh          $a1, 0x770($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1904)));
        ctx->pc = 0x16CE08u;
        goto label_16ce08;
    }
    ctx->pc = 0x16CE00u;
    SET_GPR_U32(ctx, 31, 0x16CE08u);
    ctx->pc = 0x16CE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CE00u;
            // 0x16ce04: 0x86450770  lh          $a1, 0x770($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1904)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CE08u; }
        if (ctx->pc != 0x16CE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CE08u; }
        if (ctx->pc != 0x16CE08u) { return; }
    }
    ctx->pc = 0x16CE08u;
label_16ce08:
    // 0x16ce08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16ce08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ce0c:
    // 0x16ce0c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_16ce10:
    if (ctx->pc == 0x16CE10u) {
        ctx->pc = 0x16CE14u;
        goto label_16ce14;
    }
    ctx->pc = 0x16CE0Cu;
    {
        const bool branch_taken_0x16ce0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ce0c) {
            ctx->pc = 0x16CE20u;
            goto label_16ce20;
        }
    }
    ctx->pc = 0x16CE14u;
label_16ce14:
    // 0x16ce14: 0x8e021150  lw          $v0, 0x1150($s0)
    ctx->pc = 0x16ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
label_16ce18:
    // 0x16ce18: 0x8051006a  lb          $s1, 0x6A($v0)
    ctx->pc = 0x16ce18u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 106)));
label_16ce1c:
    // 0x16ce1c: 0x0  nop
    ctx->pc = 0x16ce1cu;
    // NOP
label_16ce20:
    // 0x16ce20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16ce20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16ce24:
    // 0x16ce24: 0x0  nop
    ctx->pc = 0x16ce24u;
    // NOP
label_16ce28:
    // 0x16ce28: 0x46170032  c.eq.s      $f0, $f23
    ctx->pc = 0x16ce28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16ce2c:
    // 0x16ce2c: 0x0  nop
    ctx->pc = 0x16ce2cu;
    // NOP
label_16ce30:
    // 0x16ce30: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16ce34:
    if (ctx->pc == 0x16CE34u) {
        ctx->pc = 0x16CE38u;
        goto label_16ce38;
    }
    ctx->pc = 0x16CE30u;
    {
        const bool branch_taken_0x16ce30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16ce30) {
            ctx->pc = 0x16CE48u;
            goto label_16ce48;
        }
    }
    ctx->pc = 0x16CE38u;
label_16ce38:
    // 0x16ce38: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x16ce38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16ce3c:
    // 0x16ce3c: 0x0  nop
    ctx->pc = 0x16ce3cu;
    // NOP
label_16ce40:
    // 0x16ce40: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_16ce44:
    if (ctx->pc == 0x16CE44u) {
        ctx->pc = 0x16CE44u;
            // 0x16ce44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16CE48u;
        goto label_16ce48;
    }
    ctx->pc = 0x16CE40u;
    {
        const bool branch_taken_0x16ce40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CE40u;
            // 0x16ce44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ce40) {
            ctx->pc = 0x16CE50u;
            goto label_16ce50;
        }
    }
    ctx->pc = 0x16CE48u;
label_16ce48:
    // 0x16ce48: 0x10000002  b           . + 4 + (0x2 << 2)
label_16ce4c:
    if (ctx->pc == 0x16CE4Cu) {
        ctx->pc = 0x16CE4Cu;
            // 0x16ce4c: 0xa240076d  sb          $zero, 0x76D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1901), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x16CE50u;
        goto label_16ce50;
    }
    ctx->pc = 0x16CE48u;
    {
        const bool branch_taken_0x16ce48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CE48u;
            // 0x16ce4c: 0xa240076d  sb          $zero, 0x76D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1901), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ce48) {
            ctx->pc = 0x16CE54u;
            goto label_16ce54;
        }
    }
    ctx->pc = 0x16CE50u;
label_16ce50:
    // 0x16ce50: 0xa242076d  sb          $v0, 0x76D($s2)
    ctx->pc = 0x16ce50u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1901), (uint8_t)GPR_U32(ctx, 2));
label_16ce54:
    // 0x16ce54: 0x86420772  lh          $v0, 0x772($s2)
    ctx->pc = 0x16ce54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1906)));
label_16ce58:
    // 0x16ce58: 0x104000ec  beqz        $v0, . + 4 + (0xEC << 2)
label_16ce5c:
    if (ctx->pc == 0x16CE5Cu) {
        ctx->pc = 0x16CE60u;
        goto label_16ce60;
    }
    ctx->pc = 0x16CE58u;
    {
        const bool branch_taken_0x16ce58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ce58) {
            ctx->pc = 0x16D20Cu;
            goto label_16d20c;
        }
    }
    ctx->pc = 0x16CE60u;
label_16ce60:
    // 0x16ce60: 0x162000ea  bnez        $s1, . + 4 + (0xEA << 2)
label_16ce64:
    if (ctx->pc == 0x16CE64u) {
        ctx->pc = 0x16CE68u;
        goto label_16ce68;
    }
    ctx->pc = 0x16CE60u;
    {
        const bool branch_taken_0x16ce60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ce60) {
            ctx->pc = 0x16D20Cu;
            goto label_16d20c;
        }
    }
    ctx->pc = 0x16CE68u;
label_16ce68:
    // 0x16ce68: 0x8642075e  lh          $v0, 0x75E($s2)
    ctx->pc = 0x16ce68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1886)));
label_16ce6c:
    // 0x16ce6c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_16ce70:
    if (ctx->pc == 0x16CE70u) {
        ctx->pc = 0x16CE74u;
        goto label_16ce74;
    }
    ctx->pc = 0x16CE6Cu;
    {
        const bool branch_taken_0x16ce6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ce6c) {
            ctx->pc = 0x16CE9Cu;
            goto label_16ce9c;
        }
    }
    ctx->pc = 0x16CE74u;
label_16ce74:
    // 0x16ce74: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16ce74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16ce78:
    // 0x16ce78: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16ce78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16ce7c:
    // 0x16ce7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16ce7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16ce80:
    // 0x16ce80: 0x24a53578  addiu       $a1, $a1, 0x3578
    ctx->pc = 0x16ce80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13688));
label_16ce84:
    // 0x16ce84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16ce84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ce88:
    // 0x16ce88: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16ce88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16ce8c:
    // 0x16ce8c: 0x320f809  jalr        $t9
label_16ce90:
    if (ctx->pc == 0x16CE90u) {
        ctx->pc = 0x16CE90u;
            // 0x16ce90: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16CE94u;
        goto label_16ce94;
    }
    ctx->pc = 0x16CE8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CE94u);
        ctx->pc = 0x16CE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CE8Cu;
            // 0x16ce90: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16CE94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16CE94u; }
            if (ctx->pc != 0x16CE94u) { return; }
        }
        }
    }
    ctx->pc = 0x16CE94u;
label_16ce94:
    // 0x16ce94: 0x10000009  b           . + 4 + (0x9 << 2)
label_16ce98:
    if (ctx->pc == 0x16CE98u) {
        ctx->pc = 0x16CE9Cu;
        goto label_16ce9c;
    }
    ctx->pc = 0x16CE94u;
    {
        const bool branch_taken_0x16ce94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ce94) {
            ctx->pc = 0x16CEBCu;
            goto label_16cebc;
        }
    }
    ctx->pc = 0x16CE9Cu;
label_16ce9c:
    // 0x16ce9c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16ce9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16cea0:
    // 0x16cea0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16cea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16cea4:
    // 0x16cea4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16cea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16cea8:
    // 0x16cea8: 0x24a53588  addiu       $a1, $a1, 0x3588
    ctx->pc = 0x16cea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13704));
label_16ceac:
    // 0x16ceac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16ceacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ceb0:
    // 0x16ceb0: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16ceb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16ceb4:
    // 0x16ceb4: 0x320f809  jalr        $t9
label_16ceb8:
    if (ctx->pc == 0x16CEB8u) {
        ctx->pc = 0x16CEB8u;
            // 0x16ceb8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16CEBCu;
        goto label_16cebc;
    }
    ctx->pc = 0x16CEB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CEBCu);
        ctx->pc = 0x16CEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CEB4u;
            // 0x16ceb8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16CEBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16CEBCu; }
            if (ctx->pc != 0x16CEBCu) { return; }
        }
        }
    }
    ctx->pc = 0x16CEBCu;
label_16cebc:
    // 0x16cebc: 0x1200014d  beqz        $s0, . + 4 + (0x14D << 2)
label_16cec0:
    if (ctx->pc == 0x16CEC0u) {
        ctx->pc = 0x16CEC0u;
            // 0x16cec0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16CEC4u;
        goto label_16cec4;
    }
    ctx->pc = 0x16CEBCu;
    {
        const bool branch_taken_0x16cebc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CEBCu;
            // 0x16cec0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cebc) {
            ctx->pc = 0x16D3F4u;
            goto label_16d3f4;
        }
    }
    ctx->pc = 0x16CEC4u;
label_16cec4:
    // 0x16cec4: 0x8603068a  lh          $v1, 0x68A($s0)
    ctx->pc = 0x16cec4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1674)));
label_16cec8:
    // 0x16cec8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16cecc:
    // 0x16cecc: 0x14620148  bne         $v1, $v0, . + 4 + (0x148 << 2)
label_16ced0:
    if (ctx->pc == 0x16CED0u) {
        ctx->pc = 0x16CED0u;
            // 0x16ced0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16CED4u;
        goto label_16ced4;
    }
    ctx->pc = 0x16CECCu;
    {
        const bool branch_taken_0x16cecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16CED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CECCu;
            // 0x16ced0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cecc) {
            ctx->pc = 0x16D3F0u;
            goto label_16d3f0;
        }
    }
    ctx->pc = 0x16CED4u;
label_16ced4:
    // 0x16ced4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16ced4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ced8:
    // 0x16ced8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16ced8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16cedc:
    // 0x16cedc: 0xc05d420  jal         func_175080
label_16cee0:
    if (ctx->pc == 0x16CEE0u) {
        ctx->pc = 0x16CEE0u;
            // 0x16cee0: 0x27a700a0  addiu       $a3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x16CEE4u;
        goto label_16cee4;
    }
    ctx->pc = 0x16CEDCu;
    SET_GPR_U32(ctx, 31, 0x16CEE4u);
    ctx->pc = 0x16CEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CEDCu;
            // 0x16cee0: 0x27a700a0  addiu       $a3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CEE4u; }
        if (ctx->pc != 0x16CEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CEE4u; }
        if (ctx->pc != 0x16CEE4u) { return; }
    }
    ctx->pc = 0x16CEE4u;
label_16cee4:
    // 0x16cee4: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x16cee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_16cee8:
    // 0x16cee8: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x16cee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16ceec:
    // 0x16ceec: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x16ceecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16cef0:
    // 0x16cef0: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x16cef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16cef4:
    // 0x16cef4: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x16cef4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_16cef8:
    // 0x16cef8: 0xc047c76  jal         func_11F1D8
label_16cefc:
    if (ctx->pc == 0x16CEFCu) {
        ctx->pc = 0x16CEFCu;
            // 0x16cefc: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x16CF00u;
        goto label_16cf00;
    }
    ctx->pc = 0x16CEF8u;
    SET_GPR_U32(ctx, 31, 0x16CF00u);
    ctx->pc = 0x16CEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CEF8u;
            // 0x16cefc: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF00u; }
        if (ctx->pc != 0x16CF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF00u; }
        if (ctx->pc != 0x16CF00u) { return; }
    }
    ctx->pc = 0x16CF00u;
label_16cf00:
    // 0x16cf00: 0x8e440070  lw          $a0, 0x70($s2)
    ctx->pc = 0x16cf00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_16cf04:
    // 0x16cf04: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x16cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_16cf08:
    // 0x16cf08: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16cf08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16cf0c:
    // 0x16cf0c: 0xc072408  jal         func_1C9020
label_16cf10:
    if (ctx->pc == 0x16CF10u) {
        ctx->pc = 0x16CF10u;
            // 0x16cf10: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x16CF14u;
        goto label_16cf14;
    }
    ctx->pc = 0x16CF0Cu;
    SET_GPR_U32(ctx, 31, 0x16CF14u);
    ctx->pc = 0x16CF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CF0Cu;
            // 0x16cf10: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9020u;
    if (runtime->hasFunction(0x1C9020u)) {
        auto targetFn = runtime->lookupFunction(0x1C9020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF14u; }
        if (ctx->pc != 0x16CF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        unitRotation__FP8mgCFrameff_0x1c9020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF14u; }
        if (ctx->pc != 0x16CF14u) { return; }
    }
    ctx->pc = 0x16CF14u;
label_16cf14:
    // 0x16cf14: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16cf14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16cf18:
    // 0x16cf18: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16cf18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16cf1c:
    // 0x16cf1c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x16cf1cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_16cf20:
    // 0x16cf20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16cf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16cf24:
    // 0x16cf24: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x16cf24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_16cf28:
    // 0x16cf28: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16cf28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16cf2c:
    // 0x16cf2c: 0x320f809  jalr        $t9
label_16cf30:
    if (ctx->pc == 0x16CF30u) {
        ctx->pc = 0x16CF30u;
            // 0x16cf30: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x16CF34u;
        goto label_16cf34;
    }
    ctx->pc = 0x16CF2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CF34u);
        ctx->pc = 0x16CF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CF2Cu;
            // 0x16cf30: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16CF34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16CF34u; }
            if (ctx->pc != 0x16CF34u) { return; }
        }
        }
    }
    ctx->pc = 0x16CF34u;
label_16cf34:
    // 0x16cf34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16cf34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cf38:
    // 0x16cf38: 0x0  nop
    ctx->pc = 0x16cf38u;
    // NOP
label_16cf3c:
    // 0x16cf3c: 0x46170032  c.eq.s      $f0, $f23
    ctx->pc = 0x16cf3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16cf40:
    // 0x16cf40: 0x0  nop
    ctx->pc = 0x16cf40u;
    // NOP
label_16cf44:
    // 0x16cf44: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16cf48:
    if (ctx->pc == 0x16CF48u) {
        ctx->pc = 0x16CF48u;
            // 0x16cf48: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x16CF4Cu;
        goto label_16cf4c;
    }
    ctx->pc = 0x16CF44u;
    {
        const bool branch_taken_0x16cf44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CF44u;
            // 0x16cf48: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cf44) {
            ctx->pc = 0x16CF5Cu;
            goto label_16cf5c;
        }
    }
    ctx->pc = 0x16CF4Cu;
label_16cf4c:
    // 0x16cf4c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x16cf4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16cf50:
    // 0x16cf50: 0x0  nop
    ctx->pc = 0x16cf50u;
    // NOP
label_16cf54:
    // 0x16cf54: 0x45010126  bc1t        . + 4 + (0x126 << 2)
label_16cf58:
    if (ctx->pc == 0x16CF58u) {
        ctx->pc = 0x16CF5Cu;
        goto label_16cf5c;
    }
    ctx->pc = 0x16CF54u;
    {
        const bool branch_taken_0x16cf54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16cf54) {
            ctx->pc = 0x16D3F0u;
            goto label_16d3f0;
        }
    }
    ctx->pc = 0x16CF5Cu;
label_16cf5c:
    // 0x16cf5c: 0xc047c76  jal         func_11F1D8
label_16cf60:
    if (ctx->pc == 0x16CF60u) {
        ctx->pc = 0x16CF60u;
            // 0x16cf60: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x16CF64u;
        goto label_16cf64;
    }
    ctx->pc = 0x16CF5Cu;
    SET_GPR_U32(ctx, 31, 0x16CF64u);
    ctx->pc = 0x16CF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CF5Cu;
            // 0x16cf60: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF64u; }
        if (ctx->pc != 0x16CF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF64u; }
        if (ctx->pc != 0x16CF64u) { return; }
    }
    ctx->pc = 0x16CF64u;
label_16cf64:
    // 0x16cf64: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x16cf64u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_16cf68:
    // 0x16cf68: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x16cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_16cf6c:
    // 0x16cf6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16cf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16cf70:
    // 0x16cf70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16cf70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cf74:
    // 0x16cf74: 0x0  nop
    ctx->pc = 0x16cf74u;
    // NOP
label_16cf78:
    // 0x16cf78: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x16cf78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16cf7c:
    // 0x16cf7c: 0x0  nop
    ctx->pc = 0x16cf7cu;
    // NOP
label_16cf80:
    // 0x16cf80: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_16cf84:
    if (ctx->pc == 0x16CF84u) {
        ctx->pc = 0x16CF84u;
            // 0x16cf84: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->pc = 0x16CF88u;
        goto label_16cf88;
    }
    ctx->pc = 0x16CF80u;
    {
        const bool branch_taken_0x16cf80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CF80u;
            // 0x16cf84: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cf80) {
            ctx->pc = 0x16CFA0u;
            goto label_16cfa0;
        }
    }
    ctx->pc = 0x16CF88u;
label_16cf88:
    // 0x16cf88: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_16cf8c:
    // 0x16cf8c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16cf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16cf90:
    // 0x16cf90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16cf90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cf94:
    // 0x16cf94: 0x0  nop
    ctx->pc = 0x16cf94u;
    // NOP
label_16cf98:
    // 0x16cf98: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x16cf98u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_16cf9c:
    // 0x16cf9c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x16cf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_16cfa0:
    // 0x16cfa0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16cfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16cfa4:
    // 0x16cfa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16cfa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cfa8:
    // 0x16cfa8: 0x0  nop
    ctx->pc = 0x16cfa8u;
    // NOP
label_16cfac:
    // 0x16cfac: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x16cfacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16cfb0:
    // 0x16cfb0: 0x0  nop
    ctx->pc = 0x16cfb0u;
    // NOP
label_16cfb4:
    // 0x16cfb4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_16cfb8:
    if (ctx->pc == 0x16CFB8u) {
        ctx->pc = 0x16CFB8u;
            // 0x16cfb8: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->pc = 0x16CFBCu;
        goto label_16cfbc;
    }
    ctx->pc = 0x16CFB4u;
    {
        const bool branch_taken_0x16cfb4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CFB4u;
            // 0x16cfb8: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cfb4) {
            ctx->pc = 0x16CFCCu;
            goto label_16cfcc;
        }
    }
    ctx->pc = 0x16CFBCu;
label_16cfbc:
    // 0x16cfbc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16cfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16cfc0:
    // 0x16cfc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16cfc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cfc4:
    // 0x16cfc4: 0x0  nop
    ctx->pc = 0x16cfc4u;
    // NOP
label_16cfc8:
    // 0x16cfc8: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x16cfc8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_16cfcc:
    // 0x16cfcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16cfccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cfd0:
    // 0x16cfd0: 0x0  nop
    ctx->pc = 0x16cfd0u;
    // NOP
label_16cfd4:
    // 0x16cfd4: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x16cfd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16cfd8:
    // 0x16cfd8: 0x0  nop
    ctx->pc = 0x16cfd8u;
    // NOP
label_16cfdc:
    // 0x16cfdc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16cfe0:
    if (ctx->pc == 0x16CFE0u) {
        ctx->pc = 0x16CFE0u;
            // 0x16cfe0: 0x4600b846  mov.s       $f1, $f23 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x16CFE4u;
        goto label_16cfe4;
    }
    ctx->pc = 0x16CFDCu;
    {
        const bool branch_taken_0x16cfdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CFDCu;
            // 0x16cfe0: 0x4600b846  mov.s       $f1, $f23 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cfdc) {
            ctx->pc = 0x16CFE8u;
            goto label_16cfe8;
        }
    }
    ctx->pc = 0x16CFE4u;
label_16cfe4:
    // 0x16cfe4: 0x4600b847  neg.s       $f1, $f23
    ctx->pc = 0x16cfe4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[23]);
label_16cfe8:
    // 0x16cfe8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16cfe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cfec:
    // 0x16cfec: 0x0  nop
    ctx->pc = 0x16cfecu;
    // NOP
label_16cff0:
    // 0x16cff0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x16cff0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16cff4:
    // 0x16cff4: 0x0  nop
    ctx->pc = 0x16cff4u;
    // NOP
label_16cff8:
    // 0x16cff8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16cffc:
    if (ctx->pc == 0x16CFFCu) {
        ctx->pc = 0x16CFFCu;
            // 0x16cffc: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x16D000u;
        goto label_16d000;
    }
    ctx->pc = 0x16CFF8u;
    {
        const bool branch_taken_0x16cff8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16CFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CFF8u;
            // 0x16cffc: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cff8) {
            ctx->pc = 0x16D004u;
            goto label_16d004;
        }
    }
    ctx->pc = 0x16D000u;
label_16d000:
    // 0x16d000: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x16d000u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
label_16d004:
    // 0x16d004: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16d004u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d008:
    // 0x16d008: 0x0  nop
    ctx->pc = 0x16d008u;
    // NOP
label_16d00c:
    // 0x16d00c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_16d010:
    if (ctx->pc == 0x16D010u) {
        ctx->pc = 0x16D014u;
        goto label_16d014;
    }
    ctx->pc = 0x16D00Cu;
    {
        const bool branch_taken_0x16d00c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16d00c) {
            ctx->pc = 0x16D038u;
            goto label_16d038;
        }
    }
    ctx->pc = 0x16D014u;
label_16d014:
    // 0x16d014: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16d014u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d018:
    // 0x16d018: 0x0  nop
    ctx->pc = 0x16d018u;
    // NOP
label_16d01c:
    // 0x16d01c: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x16d01cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d020:
    // 0x16d020: 0x0  nop
    ctx->pc = 0x16d020u;
    // NOP
label_16d024:
    // 0x16d024: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16d028:
    if (ctx->pc == 0x16D028u) {
        ctx->pc = 0x16D02Cu;
        goto label_16d02c;
    }
    ctx->pc = 0x16D024u;
    {
        const bool branch_taken_0x16d024 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16d024) {
            ctx->pc = 0x16D030u;
            goto label_16d030;
        }
    }
    ctx->pc = 0x16D02Cu;
label_16d02c:
    // 0x16d02c: 0x4600bdc7  neg.s       $f23, $f23
    ctx->pc = 0x16d02cu;
    ctx->f[23] = FPU_NEG_S(ctx->f[23]);
label_16d030:
    // 0x16d030: 0x1000000a  b           . + 4 + (0xA << 2)
label_16d034:
    if (ctx->pc == 0x16D034u) {
        ctx->pc = 0x16D034u;
            // 0x16d034: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->pc = 0x16D038u;
        goto label_16d038;
    }
    ctx->pc = 0x16D030u;
    {
        const bool branch_taken_0x16d030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D030u;
            // 0x16d034: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d030) {
            ctx->pc = 0x16D05Cu;
            goto label_16d05c;
        }
    }
    ctx->pc = 0x16D038u;
label_16d038:
    // 0x16d038: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16d038u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d03c:
    // 0x16d03c: 0x0  nop
    ctx->pc = 0x16d03cu;
    // NOP
label_16d040:
    // 0x16d040: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x16d040u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d044:
    // 0x16d044: 0x0  nop
    ctx->pc = 0x16d044u;
    // NOP
label_16d048:
    // 0x16d048: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16d04c:
    if (ctx->pc == 0x16D04Cu) {
        ctx->pc = 0x16D050u;
        goto label_16d050;
    }
    ctx->pc = 0x16D048u;
    {
        const bool branch_taken_0x16d048 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16d048) {
            ctx->pc = 0x16D054u;
            goto label_16d054;
        }
    }
    ctx->pc = 0x16D050u;
label_16d050:
    // 0x16d050: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x16d050u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
label_16d054:
    // 0x16d054: 0x4600a5c6  mov.s       $f23, $f20
    ctx->pc = 0x16d054u;
    ctx->f[23] = FPU_MOV_S(ctx->f[20]);
label_16d058:
    // 0x16d058: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16d058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_16d05c:
    // 0x16d05c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16d05cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d060:
    // 0x16d060: 0x0  nop
    ctx->pc = 0x16d060u;
    // NOP
label_16d064:
    // 0x16d064: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x16d064u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d068:
    // 0x16d068: 0x0  nop
    ctx->pc = 0x16d068u;
    // NOP
label_16d06c:
    // 0x16d06c: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_16d070:
    if (ctx->pc == 0x16D070u) {
        ctx->pc = 0x16D070u;
            // 0x16d070: 0x3c02c019  lui         $v0, 0xC019 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49177 << 16));
        ctx->pc = 0x16D074u;
        goto label_16d074;
    }
    ctx->pc = 0x16D06Cu;
    {
        const bool branch_taken_0x16d06c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16D070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D06Cu;
            // 0x16d070: 0x3c02c019  lui         $v0, 0xC019 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49177 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d06c) {
            ctx->pc = 0x16D0B4u;
            goto label_16d0b4;
        }
    }
    ctx->pc = 0x16D074u;
label_16d074:
    // 0x16d074: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16d074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16d078:
    // 0x16d078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16d078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d07c:
    // 0x16d07c: 0x0  nop
    ctx->pc = 0x16d07cu;
    // NOP
label_16d080:
    // 0x16d080: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x16d080u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d084:
    // 0x16d084: 0x0  nop
    ctx->pc = 0x16d084u;
    // NOP
label_16d088:
    // 0x16d088: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_16d08c:
    if (ctx->pc == 0x16D08Cu) {
        ctx->pc = 0x16D090u;
        goto label_16d090;
    }
    ctx->pc = 0x16D088u;
    {
        const bool branch_taken_0x16d088 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16d088) {
            ctx->pc = 0x16D0B0u;
            goto label_16d0b0;
        }
    }
    ctx->pc = 0x16D090u;
label_16d090:
    // 0x16d090: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16d090u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16d094:
    // 0x16d094: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16d094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16d098:
    // 0x16d098: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16d098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16d09c:
    // 0x16d09c: 0x24a53590  addiu       $a1, $a1, 0x3590
    ctx->pc = 0x16d09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13712));
label_16d0a0:
    // 0x16d0a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d0a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d0a4:
    // 0x16d0a4: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16d0a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16d0a8:
    // 0x16d0a8: 0x320f809  jalr        $t9
label_16d0ac:
    if (ctx->pc == 0x16D0ACu) {
        ctx->pc = 0x16D0ACu;
            // 0x16d0ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16D0B0u;
        goto label_16d0b0;
    }
    ctx->pc = 0x16D0A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D0B0u);
        ctx->pc = 0x16D0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D0A8u;
            // 0x16d0ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16D0B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D0B0u; }
            if (ctx->pc != 0x16D0B0u) { return; }
        }
        }
    }
    ctx->pc = 0x16D0B0u;
label_16d0b0:
    // 0x16d0b0: 0x3c02c019  lui         $v0, 0xC019
    ctx->pc = 0x16d0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49177 << 16));
label_16d0b4:
    // 0x16d0b4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x16d0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_16d0b8:
    // 0x16d0b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16d0b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d0bc:
    // 0x16d0bc: 0x0  nop
    ctx->pc = 0x16d0bcu;
    // NOP
label_16d0c0:
    // 0x16d0c0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x16d0c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d0c4:
    // 0x16d0c4: 0x0  nop
    ctx->pc = 0x16d0c4u;
    // NOP
label_16d0c8:
    // 0x16d0c8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_16d0cc:
    if (ctx->pc == 0x16D0CCu) {
        ctx->pc = 0x16D0CCu;
            // 0x16d0cc: 0x3c024019  lui         $v0, 0x4019 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16409 << 16));
        ctx->pc = 0x16D0D0u;
        goto label_16d0d0;
    }
    ctx->pc = 0x16D0C8u;
    {
        const bool branch_taken_0x16d0c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16D0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D0C8u;
            // 0x16d0cc: 0x3c024019  lui         $v0, 0x4019 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16409 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d0c8) {
            ctx->pc = 0x16D0ECu;
            goto label_16d0ec;
        }
    }
    ctx->pc = 0x16D0D0u;
label_16d0d0:
    // 0x16d0d0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x16d0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_16d0d4:
    // 0x16d0d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16d0d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d0d8:
    // 0x16d0d8: 0x0  nop
    ctx->pc = 0x16d0d8u;
    // NOP
label_16d0dc:
    // 0x16d0dc: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x16d0dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d0e0:
    // 0x16d0e0: 0x0  nop
    ctx->pc = 0x16d0e0u;
    // NOP
label_16d0e4:
    // 0x16d0e4: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_16d0e8:
    if (ctx->pc == 0x16D0E8u) {
        ctx->pc = 0x16D0E8u;
            // 0x16d0e8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x16D0ECu;
        goto label_16d0ec;
    }
    ctx->pc = 0x16D0E4u;
    {
        const bool branch_taken_0x16d0e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16D0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D0E4u;
            // 0x16d0e8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d0e4) {
            ctx->pc = 0x16D110u;
            goto label_16d110;
        }
    }
    ctx->pc = 0x16D0ECu;
label_16d0ec:
    // 0x16d0ec: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16d0ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16d0f0:
    // 0x16d0f0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16d0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16d0f4:
    // 0x16d0f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16d0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16d0f8:
    // 0x16d0f8: 0x24a535b0  addiu       $a1, $a1, 0x35B0
    ctx->pc = 0x16d0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13744));
label_16d0fc:
    // 0x16d0fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d0fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d100:
    // 0x16d100: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16d100u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16d104:
    // 0x16d104: 0x320f809  jalr        $t9
label_16d108:
    if (ctx->pc == 0x16D108u) {
        ctx->pc = 0x16D108u;
            // 0x16d108: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16D10Cu;
        goto label_16d10c;
    }
    ctx->pc = 0x16D104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D10Cu);
        ctx->pc = 0x16D108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D104u;
            // 0x16d108: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16D10Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D10Cu; }
            if (ctx->pc != 0x16D10Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16D10Cu;
label_16d10c:
    // 0x16d10c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16d110:
    // 0x16d110: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16d110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d114:
    // 0x16d114: 0x0  nop
    ctx->pc = 0x16d114u;
    // NOP
label_16d118:
    // 0x16d118: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x16d118u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d11c:
    // 0x16d11c: 0x0  nop
    ctx->pc = 0x16d11cu;
    // NOP
label_16d120:
    // 0x16d120: 0x45010012  bc1t        . + 4 + (0x12 << 2)
label_16d124:
    if (ctx->pc == 0x16D124u) {
        ctx->pc = 0x16D124u;
            // 0x16d124: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->pc = 0x16D128u;
        goto label_16d128;
    }
    ctx->pc = 0x16D120u;
    {
        const bool branch_taken_0x16d120 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16D124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D120u;
            // 0x16d124: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d120) {
            ctx->pc = 0x16D16Cu;
            goto label_16d16c;
        }
    }
    ctx->pc = 0x16D128u;
label_16d128:
    // 0x16d128: 0x3c024019  lui         $v0, 0x4019
    ctx->pc = 0x16d128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16409 << 16));
label_16d12c:
    // 0x16d12c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x16d12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_16d130:
    // 0x16d130: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16d130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d134:
    // 0x16d134: 0x0  nop
    ctx->pc = 0x16d134u;
    // NOP
label_16d138:
    // 0x16d138: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x16d138u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d13c:
    // 0x16d13c: 0x0  nop
    ctx->pc = 0x16d13cu;
    // NOP
label_16d140:
    // 0x16d140: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_16d144:
    if (ctx->pc == 0x16D144u) {
        ctx->pc = 0x16D148u;
        goto label_16d148;
    }
    ctx->pc = 0x16D140u;
    {
        const bool branch_taken_0x16d140 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16d140) {
            ctx->pc = 0x16D168u;
            goto label_16d168;
        }
    }
    ctx->pc = 0x16D148u;
label_16d148:
    // 0x16d148: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16d148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16d14c:
    // 0x16d14c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16d14cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16d150:
    // 0x16d150: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16d150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16d154:
    // 0x16d154: 0x24a535d0  addiu       $a1, $a1, 0x35D0
    ctx->pc = 0x16d154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13776));
label_16d158:
    // 0x16d158: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d15c:
    // 0x16d15c: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16d15cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16d160:
    // 0x16d160: 0x320f809  jalr        $t9
label_16d164:
    if (ctx->pc == 0x16D164u) {
        ctx->pc = 0x16D164u;
            // 0x16d164: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16D168u;
        goto label_16d168;
    }
    ctx->pc = 0x16D160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D168u);
        ctx->pc = 0x16D164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D160u;
            // 0x16d164: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16D168u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D168u; }
            if (ctx->pc != 0x16D168u) { return; }
        }
        }
    }
    ctx->pc = 0x16D168u;
label_16d168:
    // 0x16d168: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16d168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_16d16c:
    // 0x16d16c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16d16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d170:
    // 0x16d170: 0x0  nop
    ctx->pc = 0x16d170u;
    // NOP
label_16d174:
    // 0x16d174: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x16d174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d178:
    // 0x16d178: 0x0  nop
    ctx->pc = 0x16d178u;
    // NOP
label_16d17c:
    // 0x16d17c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_16d180:
    if (ctx->pc == 0x16D180u) {
        ctx->pc = 0x16D180u;
            // 0x16d180: 0x3c023f19  lui         $v0, 0x3F19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
        ctx->pc = 0x16D184u;
        goto label_16d184;
    }
    ctx->pc = 0x16D17Cu;
    {
        const bool branch_taken_0x16d17c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16D180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D17Cu;
            // 0x16d180: 0x3c023f19  lui         $v0, 0x3F19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d17c) {
            ctx->pc = 0x16D1C8u;
            goto label_16d1c8;
        }
    }
    ctx->pc = 0x16D184u;
label_16d184:
    // 0x16d184: 0x3c02c019  lui         $v0, 0xC019
    ctx->pc = 0x16d184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49177 << 16));
label_16d188:
    // 0x16d188: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x16d188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_16d18c:
    // 0x16d18c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16d18cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d190:
    // 0x16d190: 0x0  nop
    ctx->pc = 0x16d190u;
    // NOP
label_16d194:
    // 0x16d194: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x16d194u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d198:
    // 0x16d198: 0x0  nop
    ctx->pc = 0x16d198u;
    // NOP
label_16d19c:
    // 0x16d19c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_16d1a0:
    if (ctx->pc == 0x16D1A0u) {
        ctx->pc = 0x16D1A4u;
        goto label_16d1a4;
    }
    ctx->pc = 0x16D19Cu;
    {
        const bool branch_taken_0x16d19c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16d19c) {
            ctx->pc = 0x16D1C4u;
            goto label_16d1c4;
        }
    }
    ctx->pc = 0x16D1A4u;
label_16d1a4:
    // 0x16d1a4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16d1a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16d1a8:
    // 0x16d1a8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16d1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16d1ac:
    // 0x16d1ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16d1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16d1b0:
    // 0x16d1b0: 0x24a535f0  addiu       $a1, $a1, 0x35F0
    ctx->pc = 0x16d1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13808));
label_16d1b4:
    // 0x16d1b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d1b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d1b8:
    // 0x16d1b8: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16d1b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16d1bc:
    // 0x16d1bc: 0x320f809  jalr        $t9
label_16d1c0:
    if (ctx->pc == 0x16D1C0u) {
        ctx->pc = 0x16D1C0u;
            // 0x16d1c0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16D1C4u;
        goto label_16d1c4;
    }
    ctx->pc = 0x16D1BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D1C4u);
        ctx->pc = 0x16D1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D1BCu;
            // 0x16d1c0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16D1C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D1C4u; }
            if (ctx->pc != 0x16D1C4u) { return; }
        }
        }
    }
    ctx->pc = 0x16D1C4u;
label_16d1c4:
    // 0x16d1c4: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x16d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_16d1c8:
    // 0x16d1c8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x16d1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_16d1cc:
    // 0x16d1cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16d1ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d1d0:
    // 0x16d1d0: 0x0  nop
    ctx->pc = 0x16d1d0u;
    // NOP
label_16d1d4:
    // 0x16d1d4: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x16d1d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d1d8:
    // 0x16d1d8: 0x0  nop
    ctx->pc = 0x16d1d8u;
    // NOP
label_16d1dc:
    // 0x16d1dc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_16d1e0:
    if (ctx->pc == 0x16D1E0u) {
        ctx->pc = 0x16D1E4u;
        goto label_16d1e4;
    }
    ctx->pc = 0x16D1DCu;
    {
        const bool branch_taken_0x16d1dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16d1dc) {
            ctx->pc = 0x16D1E8u;
            goto label_16d1e8;
        }
    }
    ctx->pc = 0x16D1E4u;
label_16d1e4:
    // 0x16d1e4: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x16d1e4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_16d1e8:
    // 0x16d1e8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16d1e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16d1ec:
    // 0x16d1ec: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16d1f0:
    // 0x16d1f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16d1f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d1f4:
    // 0x16d1f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16d1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16d1f8:
    // 0x16d1f8: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x16d1f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_16d1fc:
    // 0x16d1fc: 0x320f809  jalr        $t9
label_16d200:
    if (ctx->pc == 0x16D200u) {
        ctx->pc = 0x16D200u;
            // 0x16d200: 0x46170302  mul.s       $f12, $f0, $f23 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->pc = 0x16D204u;
        goto label_16d204;
    }
    ctx->pc = 0x16D1FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D204u);
        ctx->pc = 0x16D200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D1FCu;
            // 0x16d200: 0x46170302  mul.s       $f12, $f0, $f23 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16D204u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D204u; }
            if (ctx->pc != 0x16D204u) { return; }
        }
        }
    }
    ctx->pc = 0x16D204u;
label_16d204:
    // 0x16d204: 0x1000007a  b           . + 4 + (0x7A << 2)
label_16d208:
    if (ctx->pc == 0x16D208u) {
        ctx->pc = 0x16D20Cu;
        goto label_16d20c;
    }
    ctx->pc = 0x16D204u;
    {
        const bool branch_taken_0x16d204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d204) {
            ctx->pc = 0x16D3F0u;
            goto label_16d3f0;
        }
    }
    ctx->pc = 0x16D20Cu;
label_16d20c:
    // 0x16d20c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16d20cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d210:
    // 0x16d210: 0x0  nop
    ctx->pc = 0x16d210u;
    // NOP
label_16d214:
    // 0x16d214: 0x46170032  c.eq.s      $f0, $f23
    ctx->pc = 0x16d214u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d218:
    // 0x16d218: 0x0  nop
    ctx->pc = 0x16d218u;
    // NOP
label_16d21c:
    // 0x16d21c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16d220:
    if (ctx->pc == 0x16D220u) {
        ctx->pc = 0x16D220u;
            // 0x16d220: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x16D224u;
        goto label_16d224;
    }
    ctx->pc = 0x16D21Cu;
    {
        const bool branch_taken_0x16d21c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16D220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D21Cu;
            // 0x16d220: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d21c) {
            ctx->pc = 0x16D234u;
            goto label_16d234;
        }
    }
    ctx->pc = 0x16D224u;
label_16d224:
    // 0x16d224: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x16d224u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d228:
    // 0x16d228: 0x0  nop
    ctx->pc = 0x16d228u;
    // NOP
label_16d22c:
    // 0x16d22c: 0x4501003a  bc1t        . + 4 + (0x3A << 2)
label_16d230:
    if (ctx->pc == 0x16D230u) {
        ctx->pc = 0x16D234u;
        goto label_16d234;
    }
    ctx->pc = 0x16D22Cu;
    {
        const bool branch_taken_0x16d22c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16d22c) {
            ctx->pc = 0x16D318u;
            goto label_16d318;
        }
    }
    ctx->pc = 0x16D234u;
label_16d234:
    // 0x16d234: 0xc047c76  jal         func_11F1D8
label_16d238:
    if (ctx->pc == 0x16D238u) {
        ctx->pc = 0x16D238u;
            // 0x16d238: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x16D23Cu;
        goto label_16d23c;
    }
    ctx->pc = 0x16D234u;
    SET_GPR_U32(ctx, 31, 0x16D23Cu);
    ctx->pc = 0x16D238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D234u;
            // 0x16d238: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D23Cu; }
        if (ctx->pc != 0x16D23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D23Cu; }
        if (ctx->pc != 0x16D23Cu) { return; }
    }
    ctx->pc = 0x16D23Cu;
label_16d23c:
    // 0x16d23c: 0x8e440070  lw          $a0, 0x70($s2)
    ctx->pc = 0x16d23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_16d240:
    // 0x16d240: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x16d240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_16d244:
    // 0x16d244: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16d244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16d248:
    // 0x16d248: 0xc072408  jal         func_1C9020
label_16d24c:
    if (ctx->pc == 0x16D24Cu) {
        ctx->pc = 0x16D24Cu;
            // 0x16d24c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x16D250u;
        goto label_16d250;
    }
    ctx->pc = 0x16D248u;
    SET_GPR_U32(ctx, 31, 0x16D250u);
    ctx->pc = 0x16D24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D248u;
            // 0x16d24c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9020u;
    if (runtime->hasFunction(0x1C9020u)) {
        auto targetFn = runtime->lookupFunction(0x1C9020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D250u; }
        if (ctx->pc != 0x16D250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        unitRotation__FP8mgCFrameff_0x1c9020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D250u; }
        if (ctx->pc != 0x16D250u) { return; }
    }
    ctx->pc = 0x16D250u;
label_16d250:
    // 0x16d250: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16d250u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16d254:
    // 0x16d254: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16d254u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16d258:
    // 0x16d258: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x16d258u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_16d25c:
    // 0x16d25c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16d25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16d260:
    // 0x16d260: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16d260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16d264:
    // 0x16d264: 0x320f809  jalr        $t9
label_16d268:
    if (ctx->pc == 0x16D268u) {
        ctx->pc = 0x16D268u;
            // 0x16d268: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x16D26Cu;
        goto label_16d26c;
    }
    ctx->pc = 0x16D264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D26Cu);
        ctx->pc = 0x16D268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D264u;
            // 0x16d268: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16D26Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D26Cu; }
            if (ctx->pc != 0x16D26Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16D26Cu;
label_16d26c:
    // 0x16d26c: 0xc04bff4  jal         func_12FFD0
label_16d270:
    if (ctx->pc == 0x16D270u) {
        ctx->pc = 0x16D270u;
            // 0x16d270: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x16D274u;
        goto label_16d274;
    }
    ctx->pc = 0x16D26Cu;
    SET_GPR_U32(ctx, 31, 0x16D274u);
    ctx->pc = 0x16D270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D26Cu;
            // 0x16d270: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D274u; }
        if (ctx->pc != 0x16D274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D274u; }
        if (ctx->pc != 0x16D274u) { return; }
    }
    ctx->pc = 0x16D274u;
label_16d274:
    // 0x16d274: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16d274u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16d278:
    // 0x16d278: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16d278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16d27c:
    // 0x16d27c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16d27cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d280:
    // 0x16d280: 0x0  nop
    ctx->pc = 0x16d280u;
    // NOP
label_16d284:
    // 0x16d284: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x16d284u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d288:
    // 0x16d288: 0x0  nop
    ctx->pc = 0x16d288u;
    // NOP
label_16d28c:
    // 0x16d28c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_16d290:
    if (ctx->pc == 0x16D290u) {
        ctx->pc = 0x16D290u;
            // 0x16d290: 0x3c023f26  lui         $v0, 0x3F26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
        ctx->pc = 0x16D294u;
        goto label_16d294;
    }
    ctx->pc = 0x16D28Cu;
    {
        const bool branch_taken_0x16d28c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16D290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D28Cu;
            // 0x16d290: 0x3c023f26  lui         $v0, 0x3F26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d28c) {
            ctx->pc = 0x16D298u;
            goto label_16d298;
        }
    }
    ctx->pc = 0x16D294u;
label_16d294:
    // 0x16d294: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16d294u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16d298:
    // 0x16d298: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x16d298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_16d29c:
    // 0x16d29c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16d29cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d2a0:
    // 0x16d2a0: 0x0  nop
    ctx->pc = 0x16d2a0u;
    // NOP
label_16d2a4:
    // 0x16d2a4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x16d2a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d2a8:
    // 0x16d2a8: 0x0  nop
    ctx->pc = 0x16d2a8u;
    // NOP
label_16d2ac:
    // 0x16d2ac: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_16d2b0:
    if (ctx->pc == 0x16D2B0u) {
        ctx->pc = 0x16D2B4u;
        goto label_16d2b4;
    }
    ctx->pc = 0x16D2ACu;
    {
        const bool branch_taken_0x16d2ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16d2ac) {
            ctx->pc = 0x16D2DCu;
            goto label_16d2dc;
        }
    }
    ctx->pc = 0x16D2B4u;
label_16d2b4:
    // 0x16d2b4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16d2b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16d2b8:
    // 0x16d2b8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16d2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16d2bc:
    // 0x16d2bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16d2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16d2c0:
    // 0x16d2c0: 0x24a53608  addiu       $a1, $a1, 0x3608
    ctx->pc = 0x16d2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13832));
label_16d2c4:
    // 0x16d2c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d2c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d2c8:
    // 0x16d2c8: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16d2c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16d2cc:
    // 0x16d2cc: 0x320f809  jalr        $t9
label_16d2d0:
    if (ctx->pc == 0x16D2D0u) {
        ctx->pc = 0x16D2D0u;
            // 0x16d2d0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16D2D4u;
        goto label_16d2d4;
    }
    ctx->pc = 0x16D2CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D2D4u);
        ctx->pc = 0x16D2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D2CCu;
            // 0x16d2d0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16D2D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D2D4u; }
            if (ctx->pc != 0x16D2D4u) { return; }
        }
        }
    }
    ctx->pc = 0x16D2D4u;
label_16d2d4:
    // 0x16d2d4: 0x10000046  b           . + 4 + (0x46 << 2)
label_16d2d8:
    if (ctx->pc == 0x16D2D8u) {
        ctx->pc = 0x16D2DCu;
        goto label_16d2dc;
    }
    ctx->pc = 0x16D2D4u;
    {
        const bool branch_taken_0x16d2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d2d4) {
            ctx->pc = 0x16D3F0u;
            goto label_16d3f0;
        }
    }
    ctx->pc = 0x16D2DCu;
label_16d2dc:
    // 0x16d2dc: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16d2dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16d2e0:
    // 0x16d2e0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16d2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16d2e4:
    // 0x16d2e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16d2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16d2e8:
    // 0x16d2e8: 0x24a53610  addiu       $a1, $a1, 0x3610
    ctx->pc = 0x16d2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13840));
label_16d2ec:
    // 0x16d2ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d2ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d2f0:
    // 0x16d2f0: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16d2f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16d2f4:
    // 0x16d2f4: 0x320f809  jalr        $t9
label_16d2f8:
    if (ctx->pc == 0x16D2F8u) {
        ctx->pc = 0x16D2F8u;
            // 0x16d2f8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16D2FCu;
        goto label_16d2fc;
    }
    ctx->pc = 0x16D2F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D2FCu);
        ctx->pc = 0x16D2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D2F4u;
            // 0x16d2f8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16D2FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D2FCu; }
            if (ctx->pc != 0x16D2FCu) { return; }
        }
        }
    }
    ctx->pc = 0x16D2FCu;
label_16d2fc:
    // 0x16d2fc: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16d2fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16d300:
    // 0x16d300: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16d300u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_16d304:
    // 0x16d304: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x16d304u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_16d308:
    // 0x16d308: 0x320f809  jalr        $t9
label_16d30c:
    if (ctx->pc == 0x16D30Cu) {
        ctx->pc = 0x16D30Cu;
            // 0x16d30c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16D310u;
        goto label_16d310;
    }
    ctx->pc = 0x16D308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D310u);
        ctx->pc = 0x16D30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D308u;
            // 0x16d30c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16D310u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D310u; }
            if (ctx->pc != 0x16D310u) { return; }
        }
        }
    }
    ctx->pc = 0x16D310u;
label_16d310:
    // 0x16d310: 0x10000037  b           . + 4 + (0x37 << 2)
label_16d314:
    if (ctx->pc == 0x16D314u) {
        ctx->pc = 0x16D318u;
        goto label_16d318;
    }
    ctx->pc = 0x16D310u;
    {
        const bool branch_taken_0x16d310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d310) {
            ctx->pc = 0x16D3F0u;
            goto label_16d3f0;
        }
    }
    ctx->pc = 0x16D318u;
label_16d318:
    // 0x16d318: 0x8642075e  lh          $v0, 0x75E($s2)
    ctx->pc = 0x16d318u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1886)));
label_16d31c:
    // 0x16d31c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_16d320:
    if (ctx->pc == 0x16D320u) {
        ctx->pc = 0x16D324u;
        goto label_16d324;
    }
    ctx->pc = 0x16D31Cu;
    {
        const bool branch_taken_0x16d31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d31c) {
            ctx->pc = 0x16D32Cu;
            goto label_16d32c;
        }
    }
    ctx->pc = 0x16D324u;
label_16d324:
    // 0x16d324: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_16d328:
    if (ctx->pc == 0x16D328u) {
        ctx->pc = 0x16D32Cu;
        goto label_16d32c;
    }
    ctx->pc = 0x16D324u;
    {
        const bool branch_taken_0x16d324 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d324) {
            ctx->pc = 0x16D354u;
            goto label_16d354;
        }
    }
    ctx->pc = 0x16D32Cu;
label_16d32c:
    // 0x16d32c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16d32cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16d330:
    // 0x16d330: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16d330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16d334:
    // 0x16d334: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16d334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16d338:
    // 0x16d338: 0x24a53578  addiu       $a1, $a1, 0x3578
    ctx->pc = 0x16d338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13688));
label_16d33c:
    // 0x16d33c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d33cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d340:
    // 0x16d340: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16d340u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16d344:
    // 0x16d344: 0x320f809  jalr        $t9
label_16d348:
    if (ctx->pc == 0x16D348u) {
        ctx->pc = 0x16D348u;
            // 0x16d348: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16D34Cu;
        goto label_16d34c;
    }
    ctx->pc = 0x16D344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D34Cu);
        ctx->pc = 0x16D348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D344u;
            // 0x16d348: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16D34Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D34Cu; }
            if (ctx->pc != 0x16D34Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16D34Cu;
label_16d34c:
    // 0x16d34c: 0x10000009  b           . + 4 + (0x9 << 2)
label_16d350:
    if (ctx->pc == 0x16D350u) {
        ctx->pc = 0x16D354u;
        goto label_16d354;
    }
    ctx->pc = 0x16D34Cu;
    {
        const bool branch_taken_0x16d34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d34c) {
            ctx->pc = 0x16D374u;
            goto label_16d374;
        }
    }
    ctx->pc = 0x16D354u;
label_16d354:
    // 0x16d354: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16d354u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16d358:
    // 0x16d358: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16d358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16d35c:
    // 0x16d35c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16d35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16d360:
    // 0x16d360: 0x24a53588  addiu       $a1, $a1, 0x3588
    ctx->pc = 0x16d360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13704));
label_16d364:
    // 0x16d364: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d368:
    // 0x16d368: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16d368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16d36c:
    // 0x16d36c: 0x320f809  jalr        $t9
label_16d370:
    if (ctx->pc == 0x16D370u) {
        ctx->pc = 0x16D370u;
            // 0x16d370: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16D374u;
        goto label_16d374;
    }
    ctx->pc = 0x16D36Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D374u);
        ctx->pc = 0x16D370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D36Cu;
            // 0x16d370: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16D374u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D374u; }
            if (ctx->pc != 0x16D374u) { return; }
        }
        }
    }
    ctx->pc = 0x16D374u;
label_16d374:
    // 0x16d374: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
label_16d378:
    if (ctx->pc == 0x16D378u) {
        ctx->pc = 0x16D37Cu;
        goto label_16d37c;
    }
    ctx->pc = 0x16D374u;
    {
        const bool branch_taken_0x16d374 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d374) {
            ctx->pc = 0x16D3F0u;
            goto label_16d3f0;
        }
    }
    ctx->pc = 0x16D37Cu;
label_16d37c:
    // 0x16d37c: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
label_16d380:
    if (ctx->pc == 0x16D380u) {
        ctx->pc = 0x16D384u;
        goto label_16d384;
    }
    ctx->pc = 0x16D37Cu;
    {
        const bool branch_taken_0x16d37c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d37c) {
            ctx->pc = 0x16D3F0u;
            goto label_16d3f0;
        }
    }
    ctx->pc = 0x16D384u;
label_16d384:
    // 0x16d384: 0x8603068a  lh          $v1, 0x68A($s0)
    ctx->pc = 0x16d384u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1674)));
label_16d388:
    // 0x16d388: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16d388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16d38c:
    // 0x16d38c: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
label_16d390:
    if (ctx->pc == 0x16D390u) {
        ctx->pc = 0x16D390u;
            // 0x16d390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16D394u;
        goto label_16d394;
    }
    ctx->pc = 0x16D38Cu;
    {
        const bool branch_taken_0x16d38c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16D390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D38Cu;
            // 0x16d390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d38c) {
            ctx->pc = 0x16D3F0u;
            goto label_16d3f0;
        }
    }
    ctx->pc = 0x16D394u;
label_16d394:
    // 0x16d394: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16d394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d398:
    // 0x16d398: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d39c:
    // 0x16d39c: 0xc05d420  jal         func_175080
label_16d3a0:
    if (ctx->pc == 0x16D3A0u) {
        ctx->pc = 0x16D3A0u;
            // 0x16d3a0: 0x27a700a0  addiu       $a3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x16D3A4u;
        goto label_16d3a4;
    }
    ctx->pc = 0x16D39Cu;
    SET_GPR_U32(ctx, 31, 0x16D3A4u);
    ctx->pc = 0x16D3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D39Cu;
            // 0x16d3a0: 0x27a700a0  addiu       $a3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D3A4u; }
        if (ctx->pc != 0x16D3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D3A4u; }
        if (ctx->pc != 0x16D3A4u) { return; }
    }
    ctx->pc = 0x16D3A4u;
label_16d3a4:
    // 0x16d3a4: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x16d3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_16d3a8:
    // 0x16d3a8: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x16d3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16d3ac:
    // 0x16d3ac: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x16d3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16d3b0:
    // 0x16d3b0: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x16d3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16d3b4:
    // 0x16d3b4: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x16d3b4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_16d3b8:
    // 0x16d3b8: 0xc047c76  jal         func_11F1D8
label_16d3bc:
    if (ctx->pc == 0x16D3BCu) {
        ctx->pc = 0x16D3BCu;
            // 0x16d3bc: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x16D3C0u;
        goto label_16d3c0;
    }
    ctx->pc = 0x16D3B8u;
    SET_GPR_U32(ctx, 31, 0x16D3C0u);
    ctx->pc = 0x16D3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D3B8u;
            // 0x16d3bc: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D3C0u; }
        if (ctx->pc != 0x16D3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D3C0u; }
        if (ctx->pc != 0x16D3C0u) { return; }
    }
    ctx->pc = 0x16D3C0u;
label_16d3c0:
    // 0x16d3c0: 0x8e440070  lw          $a0, 0x70($s2)
    ctx->pc = 0x16d3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_16d3c4:
    // 0x16d3c4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x16d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_16d3c8:
    // 0x16d3c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16d3c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16d3cc:
    // 0x16d3cc: 0xc072408  jal         func_1C9020
label_16d3d0:
    if (ctx->pc == 0x16D3D0u) {
        ctx->pc = 0x16D3D0u;
            // 0x16d3d0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x16D3D4u;
        goto label_16d3d4;
    }
    ctx->pc = 0x16D3CCu;
    SET_GPR_U32(ctx, 31, 0x16D3D4u);
    ctx->pc = 0x16D3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D3CCu;
            // 0x16d3d0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9020u;
    if (runtime->hasFunction(0x1C9020u)) {
        auto targetFn = runtime->lookupFunction(0x1C9020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D3D4u; }
        if (ctx->pc != 0x16D3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        unitRotation__FP8mgCFrameff_0x1c9020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D3D4u; }
        if (ctx->pc != 0x16D3D4u) { return; }
    }
    ctx->pc = 0x16D3D4u;
label_16d3d4:
    // 0x16d3d4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16d3d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16d3d8:
    // 0x16d3d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16d3d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16d3dc:
    // 0x16d3dc: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x16d3dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_16d3e0:
    // 0x16d3e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16d3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16d3e4:
    // 0x16d3e4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16d3e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16d3e8:
    // 0x16d3e8: 0x320f809  jalr        $t9
label_16d3ec:
    if (ctx->pc == 0x16D3ECu) {
        ctx->pc = 0x16D3ECu;
            // 0x16d3ec: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x16D3F0u;
        goto label_16d3f0;
    }
    ctx->pc = 0x16D3E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D3F0u);
        ctx->pc = 0x16D3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D3E8u;
            // 0x16d3ec: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16D3F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D3F0u; }
            if (ctx->pc != 0x16D3F0u) { return; }
        }
        }
    }
    ctx->pc = 0x16D3F0u;
label_16d3f0:
    // 0x16d3f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d3f4:
    // 0x16d3f4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x16d3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_16d3f8:
    // 0x16d3f8: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x16d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_16d3fc:
    // 0x16d3fc: 0xa242076c  sb          $v0, 0x76C($s2)
    ctx->pc = 0x16d3fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1900), (uint8_t)GPR_U32(ctx, 2));
label_16d400:
    // 0x16d400: 0xc052d0c  jal         func_14B430
label_16d404:
    if (ctx->pc == 0x16D404u) {
        ctx->pc = 0x16D404u;
            // 0x16d404: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->pc = 0x16D408u;
        goto label_16d408;
    }
    ctx->pc = 0x16D400u;
    SET_GPR_U32(ctx, 31, 0x16D408u);
    ctx->pc = 0x16D404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D400u;
            // 0x16d404: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D408u; }
        if (ctx->pc != 0x16D408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D408u; }
        if (ctx->pc != 0x16D408u) { return; }
    }
    ctx->pc = 0x16D408u;
label_16d408:
    // 0x16d408: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_16d40c:
    if (ctx->pc == 0x16D40Cu) {
        ctx->pc = 0x16D410u;
        goto label_16d410;
    }
    ctx->pc = 0x16D408u;
    {
        const bool branch_taken_0x16d408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d408) {
            ctx->pc = 0x16D448u;
            goto label_16d448;
        }
    }
    ctx->pc = 0x16D410u;
label_16d410:
    // 0x16d410: 0x8f848ac4  lw          $a0, -0x753C($gp)
    ctx->pc = 0x16d410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937284)));
label_16d414:
    // 0x16d414: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16d414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d418:
    // 0x16d418: 0xc063818  jal         func_18E060
label_16d41c:
    if (ctx->pc == 0x16D41Cu) {
        ctx->pc = 0x16D41Cu;
            // 0x16d41c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16D420u;
        goto label_16d420;
    }
    ctx->pc = 0x16D418u;
    SET_GPR_U32(ctx, 31, 0x16D420u);
    ctx->pc = 0x16D41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D418u;
            // 0x16d41c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D420u; }
        if (ctx->pc != 0x16D420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D420u; }
        if (ctx->pc != 0x16D420u) { return; }
    }
    ctx->pc = 0x16D420u;
label_16d420:
    // 0x16d420: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x16d420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_16d424:
    // 0x16d424: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16d424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16d428:
    // 0x16d428: 0x8c23f6ec  lw          $v1, -0x914($at)
    ctx->pc = 0x16d428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964972)));
label_16d42c:
    // 0x16d42c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_16d430:
    if (ctx->pc == 0x16D430u) {
        ctx->pc = 0x16D430u;
            // 0x16d430: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x16D434u;
        goto label_16d434;
    }
    ctx->pc = 0x16D42Cu;
    {
        const bool branch_taken_0x16d42c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16D430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D42Cu;
            // 0x16d430: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d42c) {
            ctx->pc = 0x16D440u;
            goto label_16d440;
        }
    }
    ctx->pc = 0x16D434u;
label_16d434:
    // 0x16d434: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x16d434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_16d438:
    // 0x16d438: 0x10000003  b           . + 4 + (0x3 << 2)
label_16d43c:
    if (ctx->pc == 0x16D43Cu) {
        ctx->pc = 0x16D43Cu;
            // 0x16d43c: 0xac20f6ec  sw          $zero, -0x914($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294964972), GPR_U32(ctx, 0));
        ctx->pc = 0x16D440u;
        goto label_16d440;
    }
    ctx->pc = 0x16D438u;
    {
        const bool branch_taken_0x16d438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D438u;
            // 0x16d43c: 0xac20f6ec  sw          $zero, -0x914($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294964972), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d438) {
            ctx->pc = 0x16D448u;
            goto label_16d448;
        }
    }
    ctx->pc = 0x16D440u;
label_16d440:
    // 0x16d440: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x16d440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_16d444:
    // 0x16d444: 0xac22f6ec  sw          $v0, -0x914($at)
    ctx->pc = 0x16d444u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964972), GPR_U32(ctx, 2));
label_16d448:
    // 0x16d448: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x16d448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_16d44c:
    // 0x16d44c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x16d44cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_16d450:
    // 0x16d450: 0xc052d0c  jal         func_14B430
label_16d454:
    if (ctx->pc == 0x16D454u) {
        ctx->pc = 0x16D454u;
            // 0x16d454: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x16D458u;
        goto label_16d458;
    }
    ctx->pc = 0x16D450u;
    SET_GPR_U32(ctx, 31, 0x16D458u);
    ctx->pc = 0x16D454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D450u;
            // 0x16d454: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D458u; }
        if (ctx->pc != 0x16D458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D458u; }
        if (ctx->pc != 0x16D458u) { return; }
    }
    ctx->pc = 0x16D458u;
label_16d458:
    // 0x16d458: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_16d45c:
    if (ctx->pc == 0x16D45Cu) {
        ctx->pc = 0x16D460u;
        goto label_16d460;
    }
    ctx->pc = 0x16D458u;
    {
        const bool branch_taken_0x16d458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d458) {
            ctx->pc = 0x16D49Cu;
            goto label_16d49c;
        }
    }
    ctx->pc = 0x16D460u;
label_16d460:
    // 0x16d460: 0x8f848ac4  lw          $a0, -0x753C($gp)
    ctx->pc = 0x16d460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937284)));
label_16d464:
    // 0x16d464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16d464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d468:
    // 0x16d468: 0xc063818  jal         func_18E060
label_16d46c:
    if (ctx->pc == 0x16D46Cu) {
        ctx->pc = 0x16D46Cu;
            // 0x16d46c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16D470u;
        goto label_16d470;
    }
    ctx->pc = 0x16D468u;
    SET_GPR_U32(ctx, 31, 0x16D470u);
    ctx->pc = 0x16D46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D468u;
            // 0x16d46c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D470u; }
        if (ctx->pc != 0x16D470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D470u; }
        if (ctx->pc != 0x16D470u) { return; }
    }
    ctx->pc = 0x16D470u;
label_16d470:
    // 0x16d470: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x16d470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_16d474:
    // 0x16d474: 0x8c22f6ec  lw          $v0, -0x914($at)
    ctx->pc = 0x16d474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964972)));
label_16d478:
    // 0x16d478: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_16d47c:
    if (ctx->pc == 0x16D47Cu) {
        ctx->pc = 0x16D480u;
        goto label_16d480;
    }
    ctx->pc = 0x16D478u;
    {
        const bool branch_taken_0x16d478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d478) {
            ctx->pc = 0x16D490u;
            goto label_16d490;
        }
    }
    ctx->pc = 0x16D480u;
label_16d480:
    // 0x16d480: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16d480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16d484:
    // 0x16d484: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x16d484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_16d488:
    // 0x16d488: 0x10000004  b           . + 4 + (0x4 << 2)
label_16d48c:
    if (ctx->pc == 0x16D48Cu) {
        ctx->pc = 0x16D48Cu;
            // 0x16d48c: 0xac22f6ec  sw          $v0, -0x914($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294964972), GPR_U32(ctx, 2));
        ctx->pc = 0x16D490u;
        goto label_16d490;
    }
    ctx->pc = 0x16D488u;
    {
        const bool branch_taken_0x16d488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D488u;
            // 0x16d48c: 0xac22f6ec  sw          $v0, -0x914($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294964972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d488) {
            ctx->pc = 0x16D49Cu;
            goto label_16d49c;
        }
    }
    ctx->pc = 0x16D490u;
label_16d490:
    // 0x16d490: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16d490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_16d494:
    // 0x16d494: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x16d494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_16d498:
    // 0x16d498: 0xac22f6ec  sw          $v0, -0x914($at)
    ctx->pc = 0x16d498u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964972), GPR_U32(ctx, 2));
label_16d49c:
    // 0x16d49c: 0x8e420918  lw          $v0, 0x918($s2)
    ctx->pc = 0x16d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2328)));
label_16d4a0:
    // 0x16d4a0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_16d4a4:
    if (ctx->pc == 0x16D4A4u) {
        ctx->pc = 0x16D4A8u;
        goto label_16d4a8;
    }
    ctx->pc = 0x16D4A0u;
    {
        const bool branch_taken_0x16d4a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d4a0) {
            ctx->pc = 0x16D4ECu;
            goto label_16d4ec;
        }
    }
    ctx->pc = 0x16D4A8u;
label_16d4a8:
    // 0x16d4a8: 0xa240076c  sb          $zero, 0x76C($s2)
    ctx->pc = 0x16d4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1900), (uint8_t)GPR_U32(ctx, 0));
label_16d4ac:
    // 0x16d4ac: 0x3c02c060  lui         $v0, 0xC060
    ctx->pc = 0x16d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49248 << 16));
label_16d4b0:
    // 0x16d4b0: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x16d4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16d4b4:
    // 0x16d4b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16d4b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d4b8:
    // 0x16d4b8: 0x0  nop
    ctx->pc = 0x16d4b8u;
    // NOP
label_16d4bc:
    // 0x16d4bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16d4bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d4c0:
    // 0x16d4c0: 0x0  nop
    ctx->pc = 0x16d4c0u;
    // NOP
label_16d4c4:
    // 0x16d4c4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_16d4c8:
    if (ctx->pc == 0x16D4C8u) {
        ctx->pc = 0x16D4CCu;
        goto label_16d4cc;
    }
    ctx->pc = 0x16D4C4u;
    {
        const bool branch_taken_0x16d4c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16d4c4) {
            ctx->pc = 0x16D4ECu;
            goto label_16d4ec;
        }
    }
    ctx->pc = 0x16D4CCu;
label_16d4cc:
    // 0x16d4cc: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16d4ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16d4d0:
    // 0x16d4d0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16d4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16d4d4:
    // 0x16d4d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16d4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16d4d8:
    // 0x16d4d8: 0x24a53618  addiu       $a1, $a1, 0x3618
    ctx->pc = 0x16d4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13848));
label_16d4dc:
    // 0x16d4dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d4dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d4e0:
    // 0x16d4e0: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16d4e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16d4e4:
    // 0x16d4e4: 0x320f809  jalr        $t9
label_16d4e8:
    if (ctx->pc == 0x16D4E8u) {
        ctx->pc = 0x16D4E8u;
            // 0x16d4e8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16D4ECu;
        goto label_16d4ec;
    }
    ctx->pc = 0x16D4E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D4ECu);
        ctx->pc = 0x16D4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D4E4u;
            // 0x16d4e8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16D4ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D4ECu; }
            if (ctx->pc != 0x16D4ECu) { return; }
        }
        }
    }
    ctx->pc = 0x16D4ECu;
label_16d4ec:
    // 0x16d4ec: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x16d4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_16d4f0:
    // 0x16d4f0: 0x8c228074  lw          $v0, -0x7F8C($at)
    ctx->pc = 0x16d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934644)));
label_16d4f4:
    // 0x16d4f4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x16d4f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_16d4f8:
    // 0x16d4f8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_16d4fc:
    if (ctx->pc == 0x16D4FCu) {
        ctx->pc = 0x16D4FCu;
            // 0x16d4fc: 0x26440080  addiu       $a0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->pc = 0x16D500u;
        goto label_16d500;
    }
    ctx->pc = 0x16D4F8u;
    {
        const bool branch_taken_0x16d4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D4F8u;
            // 0x16d4fc: 0x26440080  addiu       $a0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d4f8) {
            ctx->pc = 0x16D520u;
            goto label_16d520;
        }
    }
    ctx->pc = 0x16D500u;
label_16d500:
    // 0x16d500: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x16d500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_16d504:
    // 0x16d504: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x16d504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_16d508:
    // 0x16d508: 0xc052d0c  jal         func_14B430
label_16d50c:
    if (ctx->pc == 0x16D50Cu) {
        ctx->pc = 0x16D50Cu;
            // 0x16d50c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x16D510u;
        goto label_16d510;
    }
    ctx->pc = 0x16D508u;
    SET_GPR_U32(ctx, 31, 0x16D510u);
    ctx->pc = 0x16D50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D508u;
            // 0x16d50c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D510u; }
        if (ctx->pc != 0x16D510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D510u; }
        if (ctx->pc != 0x16D510u) { return; }
    }
    ctx->pc = 0x16D510u;
label_16d510:
    // 0x16d510: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_16d514:
    if (ctx->pc == 0x16D514u) {
        ctx->pc = 0x16D514u;
            // 0x16d514: 0x3c024100  lui         $v0, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
        ctx->pc = 0x16D518u;
        goto label_16d518;
    }
    ctx->pc = 0x16D510u;
    {
        const bool branch_taken_0x16d510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D510u;
            // 0x16d514: 0x3c024100  lui         $v0, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d510) {
            ctx->pc = 0x16D51Cu;
            goto label_16d51c;
        }
    }
    ctx->pc = 0x16D518u;
label_16d518:
    // 0x16d518: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x16d518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_16d51c:
    // 0x16d51c: 0x26440080  addiu       $a0, $s2, 0x80
    ctx->pc = 0x16d51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_16d520:
    // 0x16d520: 0xc041c5c  jal         func_107170
label_16d524:
    if (ctx->pc == 0x16D524u) {
        ctx->pc = 0x16D524u;
            // 0x16d524: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x16D528u;
        goto label_16d528;
    }
    ctx->pc = 0x16D520u;
    SET_GPR_U32(ctx, 31, 0x16D528u);
    ctx->pc = 0x16D524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D520u;
            // 0x16d524: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D528u; }
        if (ctx->pc != 0x16D528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D528u; }
        if (ctx->pc != 0x16D528u) { return; }
    }
    ctx->pc = 0x16D528u;
label_16d528:
    // 0x16d528: 0xc05b1e8  jal         func_16C7A0
label_16d52c:
    if (ctx->pc == 0x16D52Cu) {
        ctx->pc = 0x16D52Cu;
            // 0x16d52c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16D530u;
        goto label_16d530;
    }
    ctx->pc = 0x16D528u;
    SET_GPR_U32(ctx, 31, 0x16D530u);
    ctx->pc = 0x16D52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D528u;
            // 0x16d52c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16C7A0u;
    if (runtime->hasFunction(0x16C7A0u)) {
        auto targetFn = runtime->lookupFunction(0x16C7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D530u; }
        if (ctx->pc != 0x16D530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RockOn__12CActionCharaFv_0x16c7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D530u; }
        if (ctx->pc != 0x16D530u) { return; }
    }
    ctx->pc = 0x16D530u;
label_16d530:
    // 0x16d530: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x16d530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16d534:
    // 0x16d534: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x16d534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_16d538:
    // 0x16d538: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x16d538u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16d53c:
    // 0x16d53c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x16d53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_16d540:
    // 0x16d540: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16d540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16d544:
    // 0x16d544: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x16d544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_16d548:
    // 0x16d548: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16d548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16d54c:
    // 0x16d54c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x16d54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_16d550:
    // 0x16d550: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16d550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16d554:
    // 0x16d554: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16d554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d558:
    // 0x16d558: 0x3e00008  jr          $ra
label_16d55c:
    if (ctx->pc == 0x16D55Cu) {
        ctx->pc = 0x16D55Cu;
            // 0x16d55c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x16D560u;
        goto label_fallthrough_0x16d558;
    }
    ctx->pc = 0x16D558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D558u;
            // 0x16d55c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x16d558:
    ctx->pc = 0x16D560u;
}
