#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__9CObjAnimeFP12CObjAnimeEnv
// Address: 0x29c7b0 - 0x29cdf4
void Step__9CObjAnimeFP12CObjAnimeEnv_0x29c7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__9CObjAnimeFP12CObjAnimeEnv_0x29c7b0");
#endif

    switch (ctx->pc) {
        case 0x29c7b0u: goto label_29c7b0;
        case 0x29c7b4u: goto label_29c7b4;
        case 0x29c7b8u: goto label_29c7b8;
        case 0x29c7bcu: goto label_29c7bc;
        case 0x29c7c0u: goto label_29c7c0;
        case 0x29c7c4u: goto label_29c7c4;
        case 0x29c7c8u: goto label_29c7c8;
        case 0x29c7ccu: goto label_29c7cc;
        case 0x29c7d0u: goto label_29c7d0;
        case 0x29c7d4u: goto label_29c7d4;
        case 0x29c7d8u: goto label_29c7d8;
        case 0x29c7dcu: goto label_29c7dc;
        case 0x29c7e0u: goto label_29c7e0;
        case 0x29c7e4u: goto label_29c7e4;
        case 0x29c7e8u: goto label_29c7e8;
        case 0x29c7ecu: goto label_29c7ec;
        case 0x29c7f0u: goto label_29c7f0;
        case 0x29c7f4u: goto label_29c7f4;
        case 0x29c7f8u: goto label_29c7f8;
        case 0x29c7fcu: goto label_29c7fc;
        case 0x29c800u: goto label_29c800;
        case 0x29c804u: goto label_29c804;
        case 0x29c808u: goto label_29c808;
        case 0x29c80cu: goto label_29c80c;
        case 0x29c810u: goto label_29c810;
        case 0x29c814u: goto label_29c814;
        case 0x29c818u: goto label_29c818;
        case 0x29c81cu: goto label_29c81c;
        case 0x29c820u: goto label_29c820;
        case 0x29c824u: goto label_29c824;
        case 0x29c828u: goto label_29c828;
        case 0x29c82cu: goto label_29c82c;
        case 0x29c830u: goto label_29c830;
        case 0x29c834u: goto label_29c834;
        case 0x29c838u: goto label_29c838;
        case 0x29c83cu: goto label_29c83c;
        case 0x29c840u: goto label_29c840;
        case 0x29c844u: goto label_29c844;
        case 0x29c848u: goto label_29c848;
        case 0x29c84cu: goto label_29c84c;
        case 0x29c850u: goto label_29c850;
        case 0x29c854u: goto label_29c854;
        case 0x29c858u: goto label_29c858;
        case 0x29c85cu: goto label_29c85c;
        case 0x29c860u: goto label_29c860;
        case 0x29c864u: goto label_29c864;
        case 0x29c868u: goto label_29c868;
        case 0x29c86cu: goto label_29c86c;
        case 0x29c870u: goto label_29c870;
        case 0x29c874u: goto label_29c874;
        case 0x29c878u: goto label_29c878;
        case 0x29c87cu: goto label_29c87c;
        case 0x29c880u: goto label_29c880;
        case 0x29c884u: goto label_29c884;
        case 0x29c888u: goto label_29c888;
        case 0x29c88cu: goto label_29c88c;
        case 0x29c890u: goto label_29c890;
        case 0x29c894u: goto label_29c894;
        case 0x29c898u: goto label_29c898;
        case 0x29c89cu: goto label_29c89c;
        case 0x29c8a0u: goto label_29c8a0;
        case 0x29c8a4u: goto label_29c8a4;
        case 0x29c8a8u: goto label_29c8a8;
        case 0x29c8acu: goto label_29c8ac;
        case 0x29c8b0u: goto label_29c8b0;
        case 0x29c8b4u: goto label_29c8b4;
        case 0x29c8b8u: goto label_29c8b8;
        case 0x29c8bcu: goto label_29c8bc;
        case 0x29c8c0u: goto label_29c8c0;
        case 0x29c8c4u: goto label_29c8c4;
        case 0x29c8c8u: goto label_29c8c8;
        case 0x29c8ccu: goto label_29c8cc;
        case 0x29c8d0u: goto label_29c8d0;
        case 0x29c8d4u: goto label_29c8d4;
        case 0x29c8d8u: goto label_29c8d8;
        case 0x29c8dcu: goto label_29c8dc;
        case 0x29c8e0u: goto label_29c8e0;
        case 0x29c8e4u: goto label_29c8e4;
        case 0x29c8e8u: goto label_29c8e8;
        case 0x29c8ecu: goto label_29c8ec;
        case 0x29c8f0u: goto label_29c8f0;
        case 0x29c8f4u: goto label_29c8f4;
        case 0x29c8f8u: goto label_29c8f8;
        case 0x29c8fcu: goto label_29c8fc;
        case 0x29c900u: goto label_29c900;
        case 0x29c904u: goto label_29c904;
        case 0x29c908u: goto label_29c908;
        case 0x29c90cu: goto label_29c90c;
        case 0x29c910u: goto label_29c910;
        case 0x29c914u: goto label_29c914;
        case 0x29c918u: goto label_29c918;
        case 0x29c91cu: goto label_29c91c;
        case 0x29c920u: goto label_29c920;
        case 0x29c924u: goto label_29c924;
        case 0x29c928u: goto label_29c928;
        case 0x29c92cu: goto label_29c92c;
        case 0x29c930u: goto label_29c930;
        case 0x29c934u: goto label_29c934;
        case 0x29c938u: goto label_29c938;
        case 0x29c93cu: goto label_29c93c;
        case 0x29c940u: goto label_29c940;
        case 0x29c944u: goto label_29c944;
        case 0x29c948u: goto label_29c948;
        case 0x29c94cu: goto label_29c94c;
        case 0x29c950u: goto label_29c950;
        case 0x29c954u: goto label_29c954;
        case 0x29c958u: goto label_29c958;
        case 0x29c95cu: goto label_29c95c;
        case 0x29c960u: goto label_29c960;
        case 0x29c964u: goto label_29c964;
        case 0x29c968u: goto label_29c968;
        case 0x29c96cu: goto label_29c96c;
        case 0x29c970u: goto label_29c970;
        case 0x29c974u: goto label_29c974;
        case 0x29c978u: goto label_29c978;
        case 0x29c97cu: goto label_29c97c;
        case 0x29c980u: goto label_29c980;
        case 0x29c984u: goto label_29c984;
        case 0x29c988u: goto label_29c988;
        case 0x29c98cu: goto label_29c98c;
        case 0x29c990u: goto label_29c990;
        case 0x29c994u: goto label_29c994;
        case 0x29c998u: goto label_29c998;
        case 0x29c99cu: goto label_29c99c;
        case 0x29c9a0u: goto label_29c9a0;
        case 0x29c9a4u: goto label_29c9a4;
        case 0x29c9a8u: goto label_29c9a8;
        case 0x29c9acu: goto label_29c9ac;
        case 0x29c9b0u: goto label_29c9b0;
        case 0x29c9b4u: goto label_29c9b4;
        case 0x29c9b8u: goto label_29c9b8;
        case 0x29c9bcu: goto label_29c9bc;
        case 0x29c9c0u: goto label_29c9c0;
        case 0x29c9c4u: goto label_29c9c4;
        case 0x29c9c8u: goto label_29c9c8;
        case 0x29c9ccu: goto label_29c9cc;
        case 0x29c9d0u: goto label_29c9d0;
        case 0x29c9d4u: goto label_29c9d4;
        case 0x29c9d8u: goto label_29c9d8;
        case 0x29c9dcu: goto label_29c9dc;
        case 0x29c9e0u: goto label_29c9e0;
        case 0x29c9e4u: goto label_29c9e4;
        case 0x29c9e8u: goto label_29c9e8;
        case 0x29c9ecu: goto label_29c9ec;
        case 0x29c9f0u: goto label_29c9f0;
        case 0x29c9f4u: goto label_29c9f4;
        case 0x29c9f8u: goto label_29c9f8;
        case 0x29c9fcu: goto label_29c9fc;
        case 0x29ca00u: goto label_29ca00;
        case 0x29ca04u: goto label_29ca04;
        case 0x29ca08u: goto label_29ca08;
        case 0x29ca0cu: goto label_29ca0c;
        case 0x29ca10u: goto label_29ca10;
        case 0x29ca14u: goto label_29ca14;
        case 0x29ca18u: goto label_29ca18;
        case 0x29ca1cu: goto label_29ca1c;
        case 0x29ca20u: goto label_29ca20;
        case 0x29ca24u: goto label_29ca24;
        case 0x29ca28u: goto label_29ca28;
        case 0x29ca2cu: goto label_29ca2c;
        case 0x29ca30u: goto label_29ca30;
        case 0x29ca34u: goto label_29ca34;
        case 0x29ca38u: goto label_29ca38;
        case 0x29ca3cu: goto label_29ca3c;
        case 0x29ca40u: goto label_29ca40;
        case 0x29ca44u: goto label_29ca44;
        case 0x29ca48u: goto label_29ca48;
        case 0x29ca4cu: goto label_29ca4c;
        case 0x29ca50u: goto label_29ca50;
        case 0x29ca54u: goto label_29ca54;
        case 0x29ca58u: goto label_29ca58;
        case 0x29ca5cu: goto label_29ca5c;
        case 0x29ca60u: goto label_29ca60;
        case 0x29ca64u: goto label_29ca64;
        case 0x29ca68u: goto label_29ca68;
        case 0x29ca6cu: goto label_29ca6c;
        case 0x29ca70u: goto label_29ca70;
        case 0x29ca74u: goto label_29ca74;
        case 0x29ca78u: goto label_29ca78;
        case 0x29ca7cu: goto label_29ca7c;
        case 0x29ca80u: goto label_29ca80;
        case 0x29ca84u: goto label_29ca84;
        case 0x29ca88u: goto label_29ca88;
        case 0x29ca8cu: goto label_29ca8c;
        case 0x29ca90u: goto label_29ca90;
        case 0x29ca94u: goto label_29ca94;
        case 0x29ca98u: goto label_29ca98;
        case 0x29ca9cu: goto label_29ca9c;
        case 0x29caa0u: goto label_29caa0;
        case 0x29caa4u: goto label_29caa4;
        case 0x29caa8u: goto label_29caa8;
        case 0x29caacu: goto label_29caac;
        case 0x29cab0u: goto label_29cab0;
        case 0x29cab4u: goto label_29cab4;
        case 0x29cab8u: goto label_29cab8;
        case 0x29cabcu: goto label_29cabc;
        case 0x29cac0u: goto label_29cac0;
        case 0x29cac4u: goto label_29cac4;
        case 0x29cac8u: goto label_29cac8;
        case 0x29caccu: goto label_29cacc;
        case 0x29cad0u: goto label_29cad0;
        case 0x29cad4u: goto label_29cad4;
        case 0x29cad8u: goto label_29cad8;
        case 0x29cadcu: goto label_29cadc;
        case 0x29cae0u: goto label_29cae0;
        case 0x29cae4u: goto label_29cae4;
        case 0x29cae8u: goto label_29cae8;
        case 0x29caecu: goto label_29caec;
        case 0x29caf0u: goto label_29caf0;
        case 0x29caf4u: goto label_29caf4;
        case 0x29caf8u: goto label_29caf8;
        case 0x29cafcu: goto label_29cafc;
        case 0x29cb00u: goto label_29cb00;
        case 0x29cb04u: goto label_29cb04;
        case 0x29cb08u: goto label_29cb08;
        case 0x29cb0cu: goto label_29cb0c;
        case 0x29cb10u: goto label_29cb10;
        case 0x29cb14u: goto label_29cb14;
        case 0x29cb18u: goto label_29cb18;
        case 0x29cb1cu: goto label_29cb1c;
        case 0x29cb20u: goto label_29cb20;
        case 0x29cb24u: goto label_29cb24;
        case 0x29cb28u: goto label_29cb28;
        case 0x29cb2cu: goto label_29cb2c;
        case 0x29cb30u: goto label_29cb30;
        case 0x29cb34u: goto label_29cb34;
        case 0x29cb38u: goto label_29cb38;
        case 0x29cb3cu: goto label_29cb3c;
        case 0x29cb40u: goto label_29cb40;
        case 0x29cb44u: goto label_29cb44;
        case 0x29cb48u: goto label_29cb48;
        case 0x29cb4cu: goto label_29cb4c;
        case 0x29cb50u: goto label_29cb50;
        case 0x29cb54u: goto label_29cb54;
        case 0x29cb58u: goto label_29cb58;
        case 0x29cb5cu: goto label_29cb5c;
        case 0x29cb60u: goto label_29cb60;
        case 0x29cb64u: goto label_29cb64;
        case 0x29cb68u: goto label_29cb68;
        case 0x29cb6cu: goto label_29cb6c;
        case 0x29cb70u: goto label_29cb70;
        case 0x29cb74u: goto label_29cb74;
        case 0x29cb78u: goto label_29cb78;
        case 0x29cb7cu: goto label_29cb7c;
        case 0x29cb80u: goto label_29cb80;
        case 0x29cb84u: goto label_29cb84;
        case 0x29cb88u: goto label_29cb88;
        case 0x29cb8cu: goto label_29cb8c;
        case 0x29cb90u: goto label_29cb90;
        case 0x29cb94u: goto label_29cb94;
        case 0x29cb98u: goto label_29cb98;
        case 0x29cb9cu: goto label_29cb9c;
        case 0x29cba0u: goto label_29cba0;
        case 0x29cba4u: goto label_29cba4;
        case 0x29cba8u: goto label_29cba8;
        case 0x29cbacu: goto label_29cbac;
        case 0x29cbb0u: goto label_29cbb0;
        case 0x29cbb4u: goto label_29cbb4;
        case 0x29cbb8u: goto label_29cbb8;
        case 0x29cbbcu: goto label_29cbbc;
        case 0x29cbc0u: goto label_29cbc0;
        case 0x29cbc4u: goto label_29cbc4;
        case 0x29cbc8u: goto label_29cbc8;
        case 0x29cbccu: goto label_29cbcc;
        case 0x29cbd0u: goto label_29cbd0;
        case 0x29cbd4u: goto label_29cbd4;
        case 0x29cbd8u: goto label_29cbd8;
        case 0x29cbdcu: goto label_29cbdc;
        case 0x29cbe0u: goto label_29cbe0;
        case 0x29cbe4u: goto label_29cbe4;
        case 0x29cbe8u: goto label_29cbe8;
        case 0x29cbecu: goto label_29cbec;
        case 0x29cbf0u: goto label_29cbf0;
        case 0x29cbf4u: goto label_29cbf4;
        case 0x29cbf8u: goto label_29cbf8;
        case 0x29cbfcu: goto label_29cbfc;
        case 0x29cc00u: goto label_29cc00;
        case 0x29cc04u: goto label_29cc04;
        case 0x29cc08u: goto label_29cc08;
        case 0x29cc0cu: goto label_29cc0c;
        case 0x29cc10u: goto label_29cc10;
        case 0x29cc14u: goto label_29cc14;
        case 0x29cc18u: goto label_29cc18;
        case 0x29cc1cu: goto label_29cc1c;
        case 0x29cc20u: goto label_29cc20;
        case 0x29cc24u: goto label_29cc24;
        case 0x29cc28u: goto label_29cc28;
        case 0x29cc2cu: goto label_29cc2c;
        case 0x29cc30u: goto label_29cc30;
        case 0x29cc34u: goto label_29cc34;
        case 0x29cc38u: goto label_29cc38;
        case 0x29cc3cu: goto label_29cc3c;
        case 0x29cc40u: goto label_29cc40;
        case 0x29cc44u: goto label_29cc44;
        case 0x29cc48u: goto label_29cc48;
        case 0x29cc4cu: goto label_29cc4c;
        case 0x29cc50u: goto label_29cc50;
        case 0x29cc54u: goto label_29cc54;
        case 0x29cc58u: goto label_29cc58;
        case 0x29cc5cu: goto label_29cc5c;
        case 0x29cc60u: goto label_29cc60;
        case 0x29cc64u: goto label_29cc64;
        case 0x29cc68u: goto label_29cc68;
        case 0x29cc6cu: goto label_29cc6c;
        case 0x29cc70u: goto label_29cc70;
        case 0x29cc74u: goto label_29cc74;
        case 0x29cc78u: goto label_29cc78;
        case 0x29cc7cu: goto label_29cc7c;
        case 0x29cc80u: goto label_29cc80;
        case 0x29cc84u: goto label_29cc84;
        case 0x29cc88u: goto label_29cc88;
        case 0x29cc8cu: goto label_29cc8c;
        case 0x29cc90u: goto label_29cc90;
        case 0x29cc94u: goto label_29cc94;
        case 0x29cc98u: goto label_29cc98;
        case 0x29cc9cu: goto label_29cc9c;
        case 0x29cca0u: goto label_29cca0;
        case 0x29cca4u: goto label_29cca4;
        case 0x29cca8u: goto label_29cca8;
        case 0x29ccacu: goto label_29ccac;
        case 0x29ccb0u: goto label_29ccb0;
        case 0x29ccb4u: goto label_29ccb4;
        case 0x29ccb8u: goto label_29ccb8;
        case 0x29ccbcu: goto label_29ccbc;
        case 0x29ccc0u: goto label_29ccc0;
        case 0x29ccc4u: goto label_29ccc4;
        case 0x29ccc8u: goto label_29ccc8;
        case 0x29ccccu: goto label_29cccc;
        case 0x29ccd0u: goto label_29ccd0;
        case 0x29ccd4u: goto label_29ccd4;
        case 0x29ccd8u: goto label_29ccd8;
        case 0x29ccdcu: goto label_29ccdc;
        case 0x29cce0u: goto label_29cce0;
        case 0x29cce4u: goto label_29cce4;
        case 0x29cce8u: goto label_29cce8;
        case 0x29ccecu: goto label_29ccec;
        case 0x29ccf0u: goto label_29ccf0;
        case 0x29ccf4u: goto label_29ccf4;
        case 0x29ccf8u: goto label_29ccf8;
        case 0x29ccfcu: goto label_29ccfc;
        case 0x29cd00u: goto label_29cd00;
        case 0x29cd04u: goto label_29cd04;
        case 0x29cd08u: goto label_29cd08;
        case 0x29cd0cu: goto label_29cd0c;
        case 0x29cd10u: goto label_29cd10;
        case 0x29cd14u: goto label_29cd14;
        case 0x29cd18u: goto label_29cd18;
        case 0x29cd1cu: goto label_29cd1c;
        case 0x29cd20u: goto label_29cd20;
        case 0x29cd24u: goto label_29cd24;
        case 0x29cd28u: goto label_29cd28;
        case 0x29cd2cu: goto label_29cd2c;
        case 0x29cd30u: goto label_29cd30;
        case 0x29cd34u: goto label_29cd34;
        case 0x29cd38u: goto label_29cd38;
        case 0x29cd3cu: goto label_29cd3c;
        case 0x29cd40u: goto label_29cd40;
        case 0x29cd44u: goto label_29cd44;
        case 0x29cd48u: goto label_29cd48;
        case 0x29cd4cu: goto label_29cd4c;
        case 0x29cd50u: goto label_29cd50;
        case 0x29cd54u: goto label_29cd54;
        case 0x29cd58u: goto label_29cd58;
        case 0x29cd5cu: goto label_29cd5c;
        case 0x29cd60u: goto label_29cd60;
        case 0x29cd64u: goto label_29cd64;
        case 0x29cd68u: goto label_29cd68;
        case 0x29cd6cu: goto label_29cd6c;
        case 0x29cd70u: goto label_29cd70;
        case 0x29cd74u: goto label_29cd74;
        case 0x29cd78u: goto label_29cd78;
        case 0x29cd7cu: goto label_29cd7c;
        case 0x29cd80u: goto label_29cd80;
        case 0x29cd84u: goto label_29cd84;
        case 0x29cd88u: goto label_29cd88;
        case 0x29cd8cu: goto label_29cd8c;
        case 0x29cd90u: goto label_29cd90;
        case 0x29cd94u: goto label_29cd94;
        case 0x29cd98u: goto label_29cd98;
        case 0x29cd9cu: goto label_29cd9c;
        case 0x29cda0u: goto label_29cda0;
        case 0x29cda4u: goto label_29cda4;
        case 0x29cda8u: goto label_29cda8;
        case 0x29cdacu: goto label_29cdac;
        case 0x29cdb0u: goto label_29cdb0;
        case 0x29cdb4u: goto label_29cdb4;
        case 0x29cdb8u: goto label_29cdb8;
        case 0x29cdbcu: goto label_29cdbc;
        case 0x29cdc0u: goto label_29cdc0;
        case 0x29cdc4u: goto label_29cdc4;
        case 0x29cdc8u: goto label_29cdc8;
        case 0x29cdccu: goto label_29cdcc;
        case 0x29cdd0u: goto label_29cdd0;
        case 0x29cdd4u: goto label_29cdd4;
        case 0x29cdd8u: goto label_29cdd8;
        case 0x29cddcu: goto label_29cddc;
        case 0x29cde0u: goto label_29cde0;
        case 0x29cde4u: goto label_29cde4;
        case 0x29cde8u: goto label_29cde8;
        case 0x29cdecu: goto label_29cdec;
        case 0x29cdf0u: goto label_29cdf0;
        default: break;
    }

    ctx->pc = 0x29c7b0u;

label_29c7b0:
    // 0x29c7b0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x29c7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_29c7b4:
    // 0x29c7b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29c7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_29c7b8:
    // 0x29c7b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x29c7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_29c7bc:
    // 0x29c7bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x29c7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_29c7c0:
    // 0x29c7c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29c7c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29c7c4:
    // 0x29c7c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29c7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_29c7c8:
    // 0x29c7c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29c7c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29c7cc:
    // 0x29c7cc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x29c7ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_29c7d0:
    // 0x29c7d0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x29c7d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_29c7d4:
    // 0x29c7d4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x29c7d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_29c7d8:
    // 0x29c7d8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x29c7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29c7dc:
    // 0x29c7dc: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x29c7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_29c7e0:
    // 0x29c7e0: 0x1460017b  bnez        $v1, . + 4 + (0x17B << 2)
label_29c7e4:
    if (ctx->pc == 0x29C7E4u) {
        ctx->pc = 0x29C7E4u;
            // 0x29c7e4: 0x24b00020  addiu       $s0, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->pc = 0x29C7E8u;
        goto label_29c7e8;
    }
    ctx->pc = 0x29C7E0u;
    {
        const bool branch_taken_0x29c7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C7E0u;
            // 0x29c7e4: 0x24b00020  addiu       $s0, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c7e0) {
            ctx->pc = 0x29CDD0u;
            goto label_29cdd0;
        }
    }
    ctx->pc = 0x29C7E8u;
label_29c7e8:
    // 0x29c7e8: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x29c7e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_29c7ec:
    // 0x29c7ec: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x29c7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_29c7f0:
    // 0x29c7f0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x29c7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_29c7f4:
    // 0x29c7f4: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x29c7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_29c7f8:
    // 0x29c7f8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_29c7fc:
    if (ctx->pc == 0x29C7FCu) {
        ctx->pc = 0x29C800u;
        goto label_29c800;
    }
    ctx->pc = 0x29C7F8u;
    {
        const bool branch_taken_0x29c7f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c7f8) {
            ctx->pc = 0x29C810u;
            goto label_29c810;
        }
    }
    ctx->pc = 0x29C800u;
label_29c800:
    // 0x29c800: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x29c800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_29c804:
    // 0x29c804: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x29c804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_29c808:
    // 0x29c808: 0xc041c4a  jal         func_107128
label_29c80c:
    if (ctx->pc == 0x29C80Cu) {
        ctx->pc = 0x29C80Cu;
            // 0x29c80c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C810u;
        goto label_29c810;
    }
    ctx->pc = 0x29C808u;
    SET_GPR_U32(ctx, 31, 0x29C810u);
    ctx->pc = 0x29C80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C808u;
            // 0x29c80c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C810u; }
        if (ctx->pc != 0x29C810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C810u; }
        if (ctx->pc != 0x29C810u) { return; }
    }
    ctx->pc = 0x29C810u;
label_29c810:
    // 0x29c810: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x29c810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_29c814:
    // 0x29c814: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_29c818:
    if (ctx->pc == 0x29C818u) {
        ctx->pc = 0x29C81Cu;
        goto label_29c81c;
    }
    ctx->pc = 0x29C814u;
    {
        const bool branch_taken_0x29c814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c814) {
            ctx->pc = 0x29C824u;
            goto label_29c824;
        }
    }
    ctx->pc = 0x29C81Cu;
label_29c81c:
    // 0x29c81c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x29c81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_29c820:
    // 0x29c820: 0x0  nop
    ctx->pc = 0x29c820u;
    // NOP
label_29c824:
    // 0x29c824: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_29c828:
    if (ctx->pc == 0x29C828u) {
        ctx->pc = 0x29C82Cu;
        goto label_29c82c;
    }
    ctx->pc = 0x29C824u;
    {
        const bool branch_taken_0x29c824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c824) {
            ctx->pc = 0x29C834u;
            goto label_29c834;
        }
    }
    ctx->pc = 0x29C82Cu;
label_29c82c:
    // 0x29c82c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x29c82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_29c830:
    // 0x29c830: 0x0  nop
    ctx->pc = 0x29c830u;
    // NOP
label_29c834:
    // 0x29c834: 0x10600166  beqz        $v1, . + 4 + (0x166 << 2)
label_29c838:
    if (ctx->pc == 0x29C838u) {
        ctx->pc = 0x29C838u;
            // 0x29c838: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C83Cu;
        goto label_29c83c;
    }
    ctx->pc = 0x29C834u;
    {
        const bool branch_taken_0x29c834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C834u;
            // 0x29c838: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c834) {
            ctx->pc = 0x29CDD0u;
            goto label_29cdd0;
        }
    }
    ctx->pc = 0x29C83Cu;
label_29c83c:
    // 0x29c83c: 0xc0a746c  jal         func_29D1B0
label_29c840:
    if (ctx->pc == 0x29C840u) {
        ctx->pc = 0x29C840u;
            // 0x29c840: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x29C844u;
        goto label_29c844;
    }
    ctx->pc = 0x29C83Cu;
    SET_GPR_U32(ctx, 31, 0x29C844u);
    ctx->pc = 0x29C840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C83Cu;
            // 0x29c840: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D1B0u;
    if (runtime->hasFunction(0x29D1B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C844u; }
        if (ctx->pc != 0x29C844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetParam__9CObjAnimeFPf_0x29d1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C844u; }
        if (ctx->pc != 0x29C844u) { return; }
    }
    ctx->pc = 0x29C844u;
label_29c844:
    // 0x29c844: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x29c844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_29c848:
    // 0x29c848: 0x2c41000b  sltiu       $at, $v0, 0xB
    ctx->pc = 0x29c848u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_29c84c:
    // 0x29c84c: 0x1020015e  beqz        $at, . + 4 + (0x15E << 2)
label_29c850:
    if (ctx->pc == 0x29C850u) {
        ctx->pc = 0x29C850u;
            // 0x29c850: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C854u;
        goto label_29c854;
    }
    ctx->pc = 0x29C84Cu;
    {
        const bool branch_taken_0x29c84c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C84Cu;
            // 0x29c850: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c84c) {
            ctx->pc = 0x29CDC8u;
            goto label_29cdc8;
        }
    }
    ctx->pc = 0x29C854u;
label_29c854:
    // 0x29c854: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x29c854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_29c858:
    // 0x29c858: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29c858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_29c85c:
    // 0x29c85c: 0x2463dfa0  addiu       $v1, $v1, -0x2060
    ctx->pc = 0x29c85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959008));
label_29c860:
    // 0x29c860: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29c860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29c864:
    // 0x29c864: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29c864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29c868:
    // 0x29c868: 0x400008  jr          $v0
label_29c86c:
    if (ctx->pc == 0x29C86Cu) {
        ctx->pc = 0x29C870u;
        goto label_29c870;
    }
    ctx->pc = 0x29C868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29C870u: goto label_29c870;
            case 0x29C884u: goto label_29c884;
            case 0x29C8B4u: goto label_29c8b4;
            case 0x29C964u: goto label_29c964;
            case 0x29C994u: goto label_29c994;
            case 0x29CA10u: goto label_29ca10;
            case 0x29CC38u: goto label_29cc38;
            case 0x29CC60u: goto label_29cc60;
            case 0x29CC94u: goto label_29cc94;
            case 0x29CDC4u: goto label_29cdc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29C870u;
label_29c870:
    // 0x29c870: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x29c870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_29c874:
    // 0x29c874: 0xc04bcf4  jal         func_12F3D0
label_29c878:
    if (ctx->pc == 0x29C878u) {
        ctx->pc = 0x29C878u;
            // 0x29c878: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x29C87Cu;
        goto label_29c87c;
    }
    ctx->pc = 0x29C874u;
    SET_GPR_U32(ctx, 31, 0x29C87Cu);
    ctx->pc = 0x29C878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C874u;
            // 0x29c878: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C87Cu; }
        if (ctx->pc != 0x29C87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C87Cu; }
        if (ctx->pc != 0x29C87Cu) { return; }
    }
    ctx->pc = 0x29C87Cu;
label_29c87c:
    // 0x29c87c: 0x10000151  b           . + 4 + (0x151 << 2)
label_29c880:
    if (ctx->pc == 0x29C880u) {
        ctx->pc = 0x29C884u;
        goto label_29c884;
    }
    ctx->pc = 0x29C87Cu;
    {
        const bool branch_taken_0x29c87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c87c) {
            ctx->pc = 0x29CDC4u;
            goto label_29cdc4;
        }
    }
    ctx->pc = 0x29C884u;
label_29c884:
    // 0x29c884: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x29c884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_29c888:
    // 0x29c888: 0xc04bcf4  jal         func_12F3D0
label_29c88c:
    if (ctx->pc == 0x29C88Cu) {
        ctx->pc = 0x29C88Cu;
            // 0x29c88c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x29C890u;
        goto label_29c890;
    }
    ctx->pc = 0x29C888u;
    SET_GPR_U32(ctx, 31, 0x29C890u);
    ctx->pc = 0x29C88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C888u;
            // 0x29c88c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C890u; }
        if (ctx->pc != 0x29C890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C890u; }
        if (ctx->pc != 0x29C890u) { return; }
    }
    ctx->pc = 0x29C890u;
label_29c890:
    // 0x29c890: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x29c890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_29c894:
    // 0x29c894: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x29c894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_29c898:
    // 0x29c898: 0xc0a71c4  jal         func_29C710
label_29c89c:
    if (ctx->pc == 0x29C89Cu) {
        ctx->pc = 0x29C89Cu;
            // 0x29c89c: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->pc = 0x29C8A0u;
        goto label_29c8a0;
    }
    ctx->pc = 0x29C898u;
    SET_GPR_U32(ctx, 31, 0x29C8A0u);
    ctx->pc = 0x29C89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C898u;
            // 0x29c89c: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C710u;
    if (runtime->hasFunction(0x29C710u)) {
        auto targetFn = runtime->lookupFunction(0x29C710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C8A0u; }
        if (ctx->pc != 0x29C8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckOver__FPfPfPf_0x29c710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C8A0u; }
        if (ctx->pc != 0x29C8A0u) { return; }
    }
    ctx->pc = 0x29C8A0u;
label_29c8a0:
    // 0x29c8a0: 0x10400148  beqz        $v0, . + 4 + (0x148 << 2)
label_29c8a4:
    if (ctx->pc == 0x29C8A4u) {
        ctx->pc = 0x29C8A8u;
        goto label_29c8a8;
    }
    ctx->pc = 0x29C8A0u;
    {
        const bool branch_taken_0x29c8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c8a0) {
            ctx->pc = 0x29CDC4u;
            goto label_29cdc4;
        }
    }
    ctx->pc = 0x29C8A8u;
label_29c8a8:
    // 0x29c8a8: 0x7a020040  lq          $v0, 0x40($s0)
    ctx->pc = 0x29c8a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 64)));
label_29c8ac:
    // 0x29c8ac: 0x10000145  b           . + 4 + (0x145 << 2)
label_29c8b0:
    if (ctx->pc == 0x29C8B0u) {
        ctx->pc = 0x29C8B0u;
            // 0x29c8b0: 0x7e420020  sq          $v0, 0x20($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
        ctx->pc = 0x29C8B4u;
        goto label_29c8b4;
    }
    ctx->pc = 0x29C8ACu;
    {
        const bool branch_taken_0x29c8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C8ACu;
            // 0x29c8b0: 0x7e420020  sq          $v0, 0x20($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c8ac) {
            ctx->pc = 0x29CDC4u;
            goto label_29cdc4;
        }
    }
    ctx->pc = 0x29C8B4u;
label_29c8b4:
    // 0x29c8b4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x29c8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_29c8b8:
    // 0x29c8b8: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x29c8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_29c8bc:
    // 0x29c8bc: 0xc041c3e  jal         func_1070F8
label_29c8c0:
    if (ctx->pc == 0x29C8C0u) {
        ctx->pc = 0x29C8C0u;
            // 0x29c8c0: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x29C8C4u;
        goto label_29c8c4;
    }
    ctx->pc = 0x29C8BCu;
    SET_GPR_U32(ctx, 31, 0x29C8C4u);
    ctx->pc = 0x29C8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C8BCu;
            // 0x29c8c0: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C8C4u; }
        if (ctx->pc != 0x29C8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C8C4u; }
        if (ctx->pc != 0x29C8C4u) { return; }
    }
    ctx->pc = 0x29C8C4u;
label_29c8c4:
    // 0x29c8c4: 0xc04a0ea  jal         func_1283A8
label_29c8c8:
    if (ctx->pc == 0x29C8C8u) {
        ctx->pc = 0x29C8CCu;
        goto label_29c8cc;
    }
    ctx->pc = 0x29C8C4u;
    SET_GPR_U32(ctx, 31, 0x29C8CCu);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C8CCu; }
        if (ctx->pc != 0x29C8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C8CCu; }
        if (ctx->pc != 0x29C8CCu) { return; }
    }
    ctx->pc = 0x29C8CCu;
label_29c8cc:
    // 0x29c8cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29c8ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29c8d0:
    // 0x29c8d0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x29c8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29c8d4:
    // 0x29c8d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x29c8d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_29c8d8:
    // 0x29c8d8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x29c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_29c8dc:
    // 0x29c8dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29c8dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_29c8e0:
    // 0x29c8e0: 0x0  nop
    ctx->pc = 0x29c8e0u;
    // NOP
label_29c8e4:
    // 0x29c8e4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x29c8e4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
label_29c8e8:
    // 0x29c8e8: 0x0  nop
    ctx->pc = 0x29c8e8u;
    // NOP
label_29c8ec:
    // 0x29c8ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29c8ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_29c8f0:
    // 0x29c8f0: 0xc04a0ea  jal         func_1283A8
label_29c8f4:
    if (ctx->pc == 0x29C8F4u) {
        ctx->pc = 0x29C8F4u;
            // 0x29c8f4: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->pc = 0x29C8F8u;
        goto label_29c8f8;
    }
    ctx->pc = 0x29C8F0u;
    SET_GPR_U32(ctx, 31, 0x29C8F8u);
    ctx->pc = 0x29C8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C8F0u;
            // 0x29c8f4: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C8F8u; }
        if (ctx->pc != 0x29C8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C8F8u; }
        if (ctx->pc != 0x29C8F8u) { return; }
    }
    ctx->pc = 0x29C8F8u;
label_29c8f8:
    // 0x29c8f8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29c8f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_29c8fc:
    // 0x29c8fc: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x29c8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29c900:
    // 0x29c900: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x29c900u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_29c904:
    // 0x29c904: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x29c904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_29c908:
    // 0x29c908: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29c908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29c90c:
    // 0x29c90c: 0x0  nop
    ctx->pc = 0x29c90cu;
    // NOP
label_29c910:
    // 0x29c910: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x29c910u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_29c914:
    // 0x29c914: 0x0  nop
    ctx->pc = 0x29c914u;
    // NOP
label_29c918:
    // 0x29c918: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29c918u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_29c91c:
    // 0x29c91c: 0xc04a0ea  jal         func_1283A8
label_29c920:
    if (ctx->pc == 0x29C920u) {
        ctx->pc = 0x29C920u;
            // 0x29c920: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->pc = 0x29C924u;
        goto label_29c924;
    }
    ctx->pc = 0x29C91Cu;
    SET_GPR_U32(ctx, 31, 0x29C924u);
    ctx->pc = 0x29C920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C91Cu;
            // 0x29c920: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C924u; }
        if (ctx->pc != 0x29C924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C924u; }
        if (ctx->pc != 0x29C924u) { return; }
    }
    ctx->pc = 0x29C924u;
label_29c924:
    // 0x29c924: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29c924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29c928:
    // 0x29c928: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x29c928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_29c92c:
    // 0x29c92c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x29c92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29c930:
    // 0x29c930: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x29c930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_29c934:
    // 0x29c934: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x29c934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_29c938:
    // 0x29c938: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x29c938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_29c93c:
    // 0x29c93c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x29c93cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_29c940:
    // 0x29c940: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29c940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29c944:
    // 0x29c944: 0x0  nop
    ctx->pc = 0x29c944u;
    // NOP
label_29c948:
    // 0x29c948: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x29c948u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_29c94c:
    // 0x29c94c: 0x0  nop
    ctx->pc = 0x29c94cu;
    // NOP
label_29c950:
    // 0x29c950: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29c950u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_29c954:
    // 0x29c954: 0xc041c38  jal         func_1070E0
label_29c958:
    if (ctx->pc == 0x29C958u) {
        ctx->pc = 0x29C958u;
            // 0x29c958: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->pc = 0x29C95Cu;
        goto label_29c95c;
    }
    ctx->pc = 0x29C954u;
    SET_GPR_U32(ctx, 31, 0x29C95Cu);
    ctx->pc = 0x29C958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C954u;
            // 0x29c958: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C95Cu; }
        if (ctx->pc != 0x29C95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C95Cu; }
        if (ctx->pc != 0x29C95Cu) { return; }
    }
    ctx->pc = 0x29C95Cu;
label_29c95c:
    // 0x29c95c: 0x10000119  b           . + 4 + (0x119 << 2)
label_29c960:
    if (ctx->pc == 0x29C960u) {
        ctx->pc = 0x29C964u;
        goto label_29c964;
    }
    ctx->pc = 0x29C95Cu;
    {
        const bool branch_taken_0x29c95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c95c) {
            ctx->pc = 0x29CDC4u;
            goto label_29cdc4;
        }
    }
    ctx->pc = 0x29C964u;
label_29c964:
    // 0x29c964: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x29c964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_29c968:
    // 0x29c968: 0xc04bcf4  jal         func_12F3D0
label_29c96c:
    if (ctx->pc == 0x29C96Cu) {
        ctx->pc = 0x29C96Cu;
            // 0x29c96c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x29C970u;
        goto label_29c970;
    }
    ctx->pc = 0x29C968u;
    SET_GPR_U32(ctx, 31, 0x29C970u);
    ctx->pc = 0x29C96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C968u;
            // 0x29c96c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C970u; }
        if (ctx->pc != 0x29C970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C970u; }
        if (ctx->pc != 0x29C970u) { return; }
    }
    ctx->pc = 0x29C970u;
label_29c970:
    // 0x29c970: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x29c970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_29c974:
    // 0x29c974: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x29c974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_29c978:
    // 0x29c978: 0xc0a71c4  jal         func_29C710
label_29c97c:
    if (ctx->pc == 0x29C97Cu) {
        ctx->pc = 0x29C97Cu;
            // 0x29c97c: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->pc = 0x29C980u;
        goto label_29c980;
    }
    ctx->pc = 0x29C978u;
    SET_GPR_U32(ctx, 31, 0x29C980u);
    ctx->pc = 0x29C97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C978u;
            // 0x29c97c: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C710u;
    if (runtime->hasFunction(0x29C710u)) {
        auto targetFn = runtime->lookupFunction(0x29C710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C980u; }
        if (ctx->pc != 0x29C980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckOver__FPfPfPf_0x29c710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C980u; }
        if (ctx->pc != 0x29C980u) { return; }
    }
    ctx->pc = 0x29C980u;
label_29c980:
    // 0x29c980: 0x10400110  beqz        $v0, . + 4 + (0x110 << 2)
label_29c984:
    if (ctx->pc == 0x29C984u) {
        ctx->pc = 0x29C988u;
        goto label_29c988;
    }
    ctx->pc = 0x29C980u;
    {
        const bool branch_taken_0x29c980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c980) {
            ctx->pc = 0x29CDC4u;
            goto label_29cdc4;
        }
    }
    ctx->pc = 0x29C988u;
label_29c988:
    // 0x29c988: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x29c988u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_29c98c:
    // 0x29c98c: 0x1000010d  b           . + 4 + (0x10D << 2)
label_29c990:
    if (ctx->pc == 0x29C990u) {
        ctx->pc = 0x29C990u;
            // 0x29c990: 0x7e420020  sq          $v0, 0x20($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
        ctx->pc = 0x29C994u;
        goto label_29c994;
    }
    ctx->pc = 0x29C98Cu;
    {
        const bool branch_taken_0x29c98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C98Cu;
            // 0x29c990: 0x7e420020  sq          $v0, 0x20($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c98c) {
            ctx->pc = 0x29CDC4u;
            goto label_29cdc4;
        }
    }
    ctx->pc = 0x29C994u;
label_29c994:
    // 0x29c994: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x29c994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_29c998:
    // 0x29c998: 0xc04bcf4  jal         func_12F3D0
label_29c99c:
    if (ctx->pc == 0x29C99Cu) {
        ctx->pc = 0x29C99Cu;
            // 0x29c99c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x29C9A0u;
        goto label_29c9a0;
    }
    ctx->pc = 0x29C998u;
    SET_GPR_U32(ctx, 31, 0x29C9A0u);
    ctx->pc = 0x29C99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C998u;
            // 0x29c99c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C9A0u; }
        if (ctx->pc != 0x29C9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C9A0u; }
        if (ctx->pc != 0x29C9A0u) { return; }
    }
    ctx->pc = 0x29C9A0u;
label_29c9a0:
    // 0x29c9a0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x29c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_29c9a4:
    // 0x29c9a4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_29c9a8:
    if (ctx->pc == 0x29C9A8u) {
        ctx->pc = 0x29C9A8u;
            // 0x29c9a8: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x29C9ACu;
        goto label_29c9ac;
    }
    ctx->pc = 0x29C9A4u;
    {
        const bool branch_taken_0x29c9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C9A4u;
            // 0x29c9a8: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c9a4) {
            ctx->pc = 0x29C9E8u;
            goto label_29c9e8;
        }
    }
    ctx->pc = 0x29C9ACu;
label_29c9ac:
    // 0x29c9ac: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x29c9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_29c9b0:
    // 0x29c9b0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x29c9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_29c9b4:
    // 0x29c9b4: 0xc0a71c4  jal         func_29C710
label_29c9b8:
    if (ctx->pc == 0x29C9B8u) {
        ctx->pc = 0x29C9B8u;
            // 0x29c9b8: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x29C9BCu;
        goto label_29c9bc;
    }
    ctx->pc = 0x29C9B4u;
    SET_GPR_U32(ctx, 31, 0x29C9BCu);
    ctx->pc = 0x29C9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C9B4u;
            // 0x29c9b8: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C710u;
    if (runtime->hasFunction(0x29C710u)) {
        auto targetFn = runtime->lookupFunction(0x29C710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C9BCu; }
        if (ctx->pc != 0x29C9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckOver__FPfPfPf_0x29c710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C9BCu; }
        if (ctx->pc != 0x29C9BCu) { return; }
    }
    ctx->pc = 0x29C9BCu;
label_29c9bc:
    // 0x29c9bc: 0x10400101  beqz        $v0, . + 4 + (0x101 << 2)
label_29c9c0:
    if (ctx->pc == 0x29C9C0u) {
        ctx->pc = 0x29C9C4u;
        goto label_29c9c4;
    }
    ctx->pc = 0x29C9BCu;
    {
        const bool branch_taken_0x29c9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c9bc) {
            ctx->pc = 0x29CDC4u;
            goto label_29cdc4;
        }
    }
    ctx->pc = 0x29C9C4u;
label_29c9c4:
    // 0x29c9c4: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x29c9c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_29c9c8:
    // 0x29c9c8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x29c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_29c9cc:
    // 0x29c9cc: 0x7e430020  sq          $v1, 0x20($s2)
    ctx->pc = 0x29c9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 3));
label_29c9d0:
    // 0x29c9d0: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x29c9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_29c9d4:
    // 0x29c9d4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x29c9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_29c9d8:
    // 0x29c9d8: 0x146200fa  bne         $v1, $v0, . + 4 + (0xFA << 2)
label_29c9dc:
    if (ctx->pc == 0x29C9DCu) {
        ctx->pc = 0x29C9DCu;
            // 0x29c9dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29C9E0u;
        goto label_29c9e0;
    }
    ctx->pc = 0x29C9D8u;
    {
        const bool branch_taken_0x29c9d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29C9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C9D8u;
            // 0x29c9dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c9d8) {
            ctx->pc = 0x29CDC4u;
            goto label_29cdc4;
        }
    }
    ctx->pc = 0x29C9E0u;
label_29c9e0:
    // 0x29c9e0: 0x100000f8  b           . + 4 + (0xF8 << 2)
label_29c9e4:
    if (ctx->pc == 0x29C9E4u) {
        ctx->pc = 0x29C9E4u;
            // 0x29c9e4: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x29C9E8u;
        goto label_29c9e8;
    }
    ctx->pc = 0x29C9E0u;
    {
        const bool branch_taken_0x29c9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C9E0u;
            // 0x29c9e4: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c9e0) {
            ctx->pc = 0x29CDC4u;
            goto label_29cdc4;
        }
    }
    ctx->pc = 0x29C9E8u;
label_29c9e8:
    // 0x29c9e8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x29c9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_29c9ec:
    // 0x29c9ec: 0xc0a71c4  jal         func_29C710
label_29c9f0:
    if (ctx->pc == 0x29C9F0u) {
        ctx->pc = 0x29C9F0u;
            // 0x29c9f0: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->pc = 0x29C9F4u;
        goto label_29c9f4;
    }
    ctx->pc = 0x29C9ECu;
    SET_GPR_U32(ctx, 31, 0x29C9F4u);
    ctx->pc = 0x29C9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C9ECu;
            // 0x29c9f0: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C710u;
    if (runtime->hasFunction(0x29C710u)) {
        auto targetFn = runtime->lookupFunction(0x29C710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C9F4u; }
        if (ctx->pc != 0x29C9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckOver__FPfPfPf_0x29c710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C9F4u; }
        if (ctx->pc != 0x29C9F4u) { return; }
    }
    ctx->pc = 0x29C9F4u;
label_29c9f4:
    // 0x29c9f4: 0x104000f3  beqz        $v0, . + 4 + (0xF3 << 2)
label_29c9f8:
    if (ctx->pc == 0x29C9F8u) {
        ctx->pc = 0x29C9FCu;
        goto label_29c9fc;
    }
    ctx->pc = 0x29C9F4u;
    {
        const bool branch_taken_0x29c9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c9f4) {
            ctx->pc = 0x29CDC4u;
            goto label_29cdc4;
        }
    }
    ctx->pc = 0x29C9FCu;
label_29c9fc:
    // 0x29c9fc: 0x7a030040  lq          $v1, 0x40($s0)
    ctx->pc = 0x29c9fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 64)));
label_29ca00:
    // 0x29ca00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29ca00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29ca04:
    // 0x29ca04: 0x7e430020  sq          $v1, 0x20($s2)
    ctx->pc = 0x29ca04u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 3));
label_29ca08:
    // 0x29ca08: 0x100000ee  b           . + 4 + (0xEE << 2)
label_29ca0c:
    if (ctx->pc == 0x29CA0Cu) {
        ctx->pc = 0x29CA0Cu;
            // 0x29ca0c: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x29CA10u;
        goto label_29ca10;
    }
    ctx->pc = 0x29CA08u;
    {
        const bool branch_taken_0x29ca08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CA08u;
            // 0x29ca0c: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ca08) {
            ctx->pc = 0x29CDC4u;
            goto label_29cdc4;
        }
    }
    ctx->pc = 0x29CA10u;
label_29ca10:
    // 0x29ca10: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x29ca10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_29ca14:
    // 0x29ca14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29ca18:
    // 0x29ca18: 0x146200ea  bne         $v1, $v0, . + 4 + (0xEA << 2)
label_29ca1c:
    if (ctx->pc == 0x29CA1Cu) {
        ctx->pc = 0x29CA20u;
        goto label_29ca20;
    }
    ctx->pc = 0x29CA18u;
    {
        const bool branch_taken_0x29ca18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29ca18) {
            ctx->pc = 0x29CDC4u;
            goto label_29cdc4;
        }
    }
    ctx->pc = 0x29CA20u;
label_29ca20:
    // 0x29ca20: 0x122000e8  beqz        $s1, . + 4 + (0xE8 << 2)
label_29ca24:
    if (ctx->pc == 0x29CA24u) {
        ctx->pc = 0x29CA28u;
        goto label_29ca28;
    }
    ctx->pc = 0x29CA20u;
    {
        const bool branch_taken_0x29ca20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ca20) {
            ctx->pc = 0x29CDC4u;
            goto label_29cdc4;
        }
    }
    ctx->pc = 0x29CA28u;
label_29ca28:
    // 0x29ca28: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x29ca28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_29ca2c:
    // 0x29ca2c: 0x104000e5  beqz        $v0, . + 4 + (0xE5 << 2)
label_29ca30:
    if (ctx->pc == 0x29CA30u) {
        ctx->pc = 0x29CA34u;
        goto label_29ca34;
    }
    ctx->pc = 0x29CA2Cu;
    {
        const bool branch_taken_0x29ca2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ca2c) {
            ctx->pc = 0x29CDC4u;
            goto label_29cdc4;
        }
    }
    ctx->pc = 0x29CA34u;
label_29ca34:
    // 0x29ca34: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x29ca34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_29ca38:
    // 0x29ca38: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x29ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_29ca3c:
    // 0x29ca3c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x29ca3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_29ca40:
    // 0x29ca40: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x29ca40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_29ca44:
    // 0x29ca44: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_29ca48:
    if (ctx->pc == 0x29CA48u) {
        ctx->pc = 0x29CA48u;
            // 0x29ca48: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x29CA4Cu;
        goto label_29ca4c;
    }
    ctx->pc = 0x29CA44u;
    {
        const bool branch_taken_0x29ca44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CA44u;
            // 0x29ca48: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ca44) {
            ctx->pc = 0x29CB20u;
            goto label_29cb20;
        }
    }
    ctx->pc = 0x29CA4Cu;
label_29ca4c:
    // 0x29ca4c: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x29ca4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_29ca50:
    // 0x29ca50: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x29ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_29ca54:
    // 0x29ca54: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_29ca58:
    if (ctx->pc == 0x29CA58u) {
        ctx->pc = 0x29CA5Cu;
        goto label_29ca5c;
    }
    ctx->pc = 0x29CA54u;
    {
        const bool branch_taken_0x29ca54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ca54) {
            ctx->pc = 0x29CA70u;
            goto label_29ca70;
        }
    }
    ctx->pc = 0x29CA5Cu;
label_29ca5c:
    // 0x29ca5c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x29ca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_29ca60:
    // 0x29ca60: 0xc059cc0  jal         func_167300
label_29ca64:
    if (ctx->pc == 0x29CA64u) {
        ctx->pc = 0x29CA64u;
            // 0x29ca64: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x29CA68u;
        goto label_29ca68;
    }
    ctx->pc = 0x29CA60u;
    SET_GPR_U32(ctx, 31, 0x29CA68u);
    ctx->pc = 0x29CA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CA60u;
            // 0x29ca64: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167300u;
    if (runtime->hasFunction(0x167300u)) {
        auto targetFn = runtime->lookupFunction(0x167300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CA68u; }
        if (ctx->pc != 0x29CA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__9CMapPartsFPA4_f_0x167300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CA68u; }
        if (ctx->pc != 0x29CA68u) { return; }
    }
    ctx->pc = 0x29CA68u;
label_29ca68:
    // 0x29ca68: 0x10000025  b           . + 4 + (0x25 << 2)
label_29ca6c:
    if (ctx->pc == 0x29CA6Cu) {
        ctx->pc = 0x29CA6Cu;
            // 0x29ca6c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x29CA70u;
        goto label_29ca70;
    }
    ctx->pc = 0x29CA68u;
    {
        const bool branch_taken_0x29ca68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CA68u;
            // 0x29ca6c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ca68) {
            ctx->pc = 0x29CB00u;
            goto label_29cb00;
        }
    }
    ctx->pc = 0x29CA70u;
label_29ca70:
    // 0x29ca70: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x29ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_29ca74:
    // 0x29ca74: 0x8c510070  lw          $s1, 0x70($v0)
    ctx->pc = 0x29ca74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_29ca78:
    // 0x29ca78: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
label_29ca7c:
    if (ctx->pc == 0x29CA7Cu) {
        ctx->pc = 0x29CA80u;
        goto label_29ca80;
    }
    ctx->pc = 0x29CA78u;
    {
        const bool branch_taken_0x29ca78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ca78) {
            ctx->pc = 0x29CAFCu;
            goto label_29cafc;
        }
    }
    ctx->pc = 0x29CA80u;
label_29ca80:
    // 0x29ca80: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x29ca80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29ca84:
    // 0x29ca84: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x29ca84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_29ca88:
    // 0x29ca88: 0x320f809  jalr        $t9
label_29ca8c:
    if (ctx->pc == 0x29CA8Cu) {
        ctx->pc = 0x29CA8Cu;
            // 0x29ca8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29CA90u;
        goto label_29ca90;
    }
    ctx->pc = 0x29CA88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29CA90u);
        ctx->pc = 0x29CA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CA88u;
            // 0x29ca8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29CA90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29CA90u; }
            if (ctx->pc != 0x29CA90u) { return; }
        }
        }
    }
    ctx->pc = 0x29CA90u;
label_29ca90:
    // 0x29ca90: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x29ca90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_29ca94:
    // 0x29ca94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29ca94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29ca98:
    // 0x29ca98: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x29ca98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_29ca9c:
    // 0x29ca9c: 0x320f809  jalr        $t9
label_29caa0:
    if (ctx->pc == 0x29CAA0u) {
        ctx->pc = 0x29CAA4u;
        goto label_29caa4;
    }
    ctx->pc = 0x29CA9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29CAA4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x29CAA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29CAA4u; }
            if (ctx->pc != 0x29CAA4u) { return; }
        }
        }
    }
    ctx->pc = 0x29CAA4u;
label_29caa4:
    // 0x29caa4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x29caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_29caa8:
    // 0x29caa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29caa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29caac:
    // 0x29caac: 0xc04db0c  jal         func_136C30
label_29cab0:
    if (ctx->pc == 0x29CAB0u) {
        ctx->pc = 0x29CAB0u;
            // 0x29cab0: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x29CAB4u;
        goto label_29cab4;
    }
    ctx->pc = 0x29CAACu;
    SET_GPR_U32(ctx, 31, 0x29CAB4u);
    ctx->pc = 0x29CAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CAACu;
            // 0x29cab0: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C30u;
    if (runtime->hasFunction(0x136C30u)) {
        auto targetFn = runtime->lookupFunction(0x136C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CAB4u; }
        if (ctx->pc != 0x29CAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetReference__8mgCFrameFP8mgCFrame_0x136c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CAB4u; }
        if (ctx->pc != 0x29CAB4u) { return; }
    }
    ctx->pc = 0x29CAB4u;
label_29cab4:
    // 0x29cab4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x29cab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_29cab8:
    // 0x29cab8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29cab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29cabc:
    // 0x29cabc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x29cabcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_29cac0:
    // 0x29cac0: 0x320f809  jalr        $t9
label_29cac4:
    if (ctx->pc == 0x29CAC4u) {
        ctx->pc = 0x29CAC8u;
        goto label_29cac8;
    }
    ctx->pc = 0x29CAC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29CAC8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x29CAC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29CAC8u; }
            if (ctx->pc != 0x29CAC8u) { return; }
        }
        }
    }
    ctx->pc = 0x29CAC8u;
label_29cac8:
    // 0x29cac8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x29cac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_29cacc:
    // 0x29cacc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x29caccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_29cad0:
    // 0x29cad0: 0x0  nop
    ctx->pc = 0x29cad0u;
    // NOP
label_29cad4:
    // 0x29cad4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x29cad4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_29cad8:
    // 0x29cad8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29cad8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29cadc:
    // 0x29cadc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x29cadcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_29cae0:
    // 0x29cae0: 0x320f809  jalr        $t9
label_29cae4:
    if (ctx->pc == 0x29CAE4u) {
        ctx->pc = 0x29CAE4u;
            // 0x29cae4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x29CAE8u;
        goto label_29cae8;
    }
    ctx->pc = 0x29CAE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29CAE8u);
        ctx->pc = 0x29CAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CAE0u;
            // 0x29cae4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29CAE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29CAE8u; }
            if (ctx->pc != 0x29CAE8u) { return; }
        }
        }
    }
    ctx->pc = 0x29CAE8u;
label_29cae8:
    // 0x29cae8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x29cae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_29caec:
    // 0x29caec: 0xc04dc0c  jal         func_137030
label_29caf0:
    if (ctx->pc == 0x29CAF0u) {
        ctx->pc = 0x29CAF0u;
            // 0x29caf0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x29CAF4u;
        goto label_29caf4;
    }
    ctx->pc = 0x29CAECu;
    SET_GPR_U32(ctx, 31, 0x29CAF4u);
    ctx->pc = 0x29CAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CAECu;
            // 0x29caf0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CAF4u; }
        if (ctx->pc != 0x29CAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CAF4u; }
        if (ctx->pc != 0x29CAF4u) { return; }
    }
    ctx->pc = 0x29CAF4u;
label_29caf4:
    // 0x29caf4: 0xc04db18  jal         func_136C60
label_29caf8:
    if (ctx->pc == 0x29CAF8u) {
        ctx->pc = 0x29CAF8u;
            // 0x29caf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29CAFCu;
        goto label_29cafc;
    }
    ctx->pc = 0x29CAF4u;
    SET_GPR_U32(ctx, 31, 0x29CAFCu);
    ctx->pc = 0x29CAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CAF4u;
            // 0x29caf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C60u;
    if (runtime->hasFunction(0x136C60u)) {
        auto targetFn = runtime->lookupFunction(0x136C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CAFCu; }
        if (ctx->pc != 0x29CAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteReference__8mgCFrameFv_0x136c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CAFCu; }
        if (ctx->pc != 0x29CAFCu) { return; }
    }
    ctx->pc = 0x29CAFCu;
label_29cafc:
    // 0x29cafc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x29cafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_29cb00:
    // 0x29cb00: 0xc04c0b4  jal         func_1302D0
label_29cb04:
    if (ctx->pc == 0x29CB04u) {
        ctx->pc = 0x29CB04u;
            // 0x29cb04: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x29CB08u;
        goto label_29cb08;
    }
    ctx->pc = 0x29CB00u;
    SET_GPR_U32(ctx, 31, 0x29CB08u);
    ctx->pc = 0x29CB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CB00u;
            // 0x29cb04: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1302D0u;
    if (runtime->hasFunction(0x1302D0u)) {
        auto targetFn = runtime->lookupFunction(0x1302D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CB08u; }
        if (ctx->pc != 0x29CB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInversMatrix__FPA4_fPA4_f_0x1302d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CB08u; }
        if (ctx->pc != 0x29CB08u) { return; }
    }
    ctx->pc = 0x29CB08u;
label_29cb08:
    // 0x29cb08: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x29cb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_29cb0c:
    // 0x29cb0c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x29cb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_29cb10:
    // 0x29cb10: 0xc041bb0  jal         func_106EC0
label_29cb14:
    if (ctx->pc == 0x29CB14u) {
        ctx->pc = 0x29CB14u;
            // 0x29cb14: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29CB18u;
        goto label_29cb18;
    }
    ctx->pc = 0x29CB10u;
    SET_GPR_U32(ctx, 31, 0x29CB18u);
    ctx->pc = 0x29CB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CB10u;
            // 0x29cb14: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CB18u; }
        if (ctx->pc != 0x29CB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CB18u; }
        if (ctx->pc != 0x29CB18u) { return; }
    }
    ctx->pc = 0x29CB18u;
label_29cb18:
    // 0x29cb18: 0x10000011  b           . + 4 + (0x11 << 2)
label_29cb1c:
    if (ctx->pc == 0x29CB1Cu) {
        ctx->pc = 0x29CB1Cu;
            // 0x29cb1c: 0x27b10078  addiu       $s1, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->pc = 0x29CB20u;
        goto label_29cb20;
    }
    ctx->pc = 0x29CB18u;
    {
        const bool branch_taken_0x29cb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CB18u;
            // 0x29cb1c: 0x27b10078  addiu       $s1, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cb18) {
            ctx->pc = 0x29CB60u;
            goto label_29cb60;
        }
    }
    ctx->pc = 0x29CB20u;
label_29cb20:
    // 0x29cb20: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x29cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_29cb24:
    // 0x29cb24: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x29cb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_29cb28:
    // 0x29cb28: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x29cb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29cb2c:
    // 0x29cb2c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x29cb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29cb30:
    // 0x29cb30: 0xc4430010  lwc1        $f3, 0x10($v0)
    ctx->pc = 0x29cb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_29cb34:
    // 0x29cb34: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x29cb34u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_29cb38:
    // 0x29cb38: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x29cb38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_29cb3c:
    // 0x29cb3c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x29cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_29cb40:
    // 0x29cb40: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x29cb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_29cb44:
    // 0x29cb44: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x29cb44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_29cb48:
    // 0x29cb48: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x29cb48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_29cb4c:
    // 0x29cb4c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x29cb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_29cb50:
    // 0x29cb50: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x29cb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29cb54:
    // 0x29cb54: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29cb54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_29cb58:
    // 0x29cb58: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x29cb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_29cb5c:
    // 0x29cb5c: 0x27b10078  addiu       $s1, $sp, 0x78
    ctx->pc = 0x29cb5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_29cb60:
    // 0x29cb60: 0xc62d0000  lwc1        $f13, 0x0($s1)
    ctx->pc = 0x29cb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_29cb64:
    // 0x29cb64: 0xc047c76  jal         func_11F1D8
label_29cb68:
    if (ctx->pc == 0x29CB68u) {
        ctx->pc = 0x29CB68u;
            // 0x29cb68: 0xc7ac0070  lwc1        $f12, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x29CB6Cu;
        goto label_29cb6c;
    }
    ctx->pc = 0x29CB64u;
    SET_GPR_U32(ctx, 31, 0x29CB6Cu);
    ctx->pc = 0x29CB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CB64u;
            // 0x29cb68: 0xc7ac0070  lwc1        $f12, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CB6Cu; }
        if (ctx->pc != 0x29CB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CB6Cu; }
        if (ctx->pc != 0x29CB6Cu) { return; }
    }
    ctx->pc = 0x29CB6Cu;
label_29cb6c:
    // 0x29cb6c: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x29cb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
label_29cb70:
    // 0x29cb70: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x29cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_29cb74:
    // 0x29cb74: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29cb74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29cb78:
    // 0x29cb78: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x29cb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_29cb7c:
    // 0x29cb7c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29cb7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_29cb80:
    // 0x29cb80: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29cb80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_29cb84:
    // 0x29cb84: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x29cb84u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_29cb88:
    // 0x29cb88: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x29cb88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
label_29cb8c:
    // 0x29cb8c: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x29cb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29cb90:
    // 0x29cb90: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x29cb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29cb94:
    // 0x29cb94: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x29cb94u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_29cb98:
    // 0x29cb98: 0xc047cc0  jal         func_11F300
label_29cb9c:
    if (ctx->pc == 0x29CB9Cu) {
        ctx->pc = 0x29CB9Cu;
            // 0x29cb9c: 0x4600031c  madd.s      $f12, $f0, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->pc = 0x29CBA0u;
        goto label_29cba0;
    }
    ctx->pc = 0x29CB98u;
    SET_GPR_U32(ctx, 31, 0x29CBA0u);
    ctx->pc = 0x29CB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CB98u;
            // 0x29cb9c: 0x4600031c  madd.s      $f12, $f0, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F300u;
    if (runtime->hasFunction(0x11F300u)) {
        auto targetFn = runtime->lookupFunction(0x11F300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CBA0u; }
        if (ctx->pc != 0x29CBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x11f300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CBA0u; }
        if (ctx->pc != 0x29CBA0u) { return; }
    }
    ctx->pc = 0x29CBA0u;
label_29cba0:
    // 0x29cba0: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x29cba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_29cba4:
    // 0x29cba4: 0xc047c76  jal         func_11F1D8
label_29cba8:
    if (ctx->pc == 0x29CBA8u) {
        ctx->pc = 0x29CBA8u;
            // 0x29cba8: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x29CBACu;
        goto label_29cbac;
    }
    ctx->pc = 0x29CBA4u;
    SET_GPR_U32(ctx, 31, 0x29CBACu);
    ctx->pc = 0x29CBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CBA4u;
            // 0x29cba8: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CBACu; }
        if (ctx->pc != 0x29CBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CBACu; }
        if (ctx->pc != 0x29CBACu) { return; }
    }
    ctx->pc = 0x29CBACu;
label_29cbac:
    // 0x29cbac: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x29cbacu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_29cbb0:
    // 0x29cbb0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x29cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_29cbb4:
    // 0x29cbb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29cbb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29cbb8:
    // 0x29cbb8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x29cbb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29cbbc:
    // 0x29cbbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29cbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29cbc0:
    // 0x29cbc0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x29cbc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_29cbc4:
    // 0x29cbc4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x29cbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_29cbc8:
    // 0x29cbc8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x29cbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_29cbcc:
    // 0x29cbcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29cbccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29cbd0:
    // 0x29cbd0: 0x0  nop
    ctx->pc = 0x29cbd0u;
    // NOP
label_29cbd4:
    // 0x29cbd4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x29cbd4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_29cbd8:
    // 0x29cbd8: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x29cbd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_29cbdc:
    // 0x29cbdc: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x29cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_29cbe0:
    // 0x29cbe0: 0x2043021  addu        $a2, $s0, $a0
    ctx->pc = 0x29cbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_29cbe4:
    // 0x29cbe4: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x29cbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29cbe8:
    // 0x29cbe8: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x29cbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29cbec:
    // 0x29cbec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29cbecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29cbf0:
    // 0x29cbf0: 0x0  nop
    ctx->pc = 0x29cbf0u;
    // NOP
label_29cbf4:
    // 0x29cbf4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_29cbf8:
    if (ctx->pc == 0x29CBF8u) {
        ctx->pc = 0x29CBF8u;
            // 0x29cbf8: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = 0x29CBFCu;
        goto label_29cbfc;
    }
    ctx->pc = 0x29CBF4u;
    {
        const bool branch_taken_0x29cbf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29CBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CBF4u;
            // 0x29cbf8: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cbf4) {
            ctx->pc = 0x29CC00u;
            goto label_29cc00;
        }
    }
    ctx->pc = 0x29CBFCu;
label_29cbfc:
    // 0x29cbfc: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x29cbfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_29cc00:
    // 0x29cc00: 0xc4c10040  lwc1        $f1, 0x40($a2)
    ctx->pc = 0x29cc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29cc04:
    // 0x29cc04: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x29cc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29cc08:
    // 0x29cc08: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29cc08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29cc0c:
    // 0x29cc0c: 0x0  nop
    ctx->pc = 0x29cc0cu;
    // NOP
label_29cc10:
    // 0x29cc10: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_29cc14:
    if (ctx->pc == 0x29CC14u) {
        ctx->pc = 0x29CC18u;
        goto label_29cc18;
    }
    ctx->pc = 0x29CC10u;
    {
        const bool branch_taken_0x29cc10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29cc10) {
            ctx->pc = 0x29CC1Cu;
            goto label_29cc1c;
        }
    }
    ctx->pc = 0x29CC18u;
label_29cc18:
    // 0x29cc18: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x29cc18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_29cc1c:
    // 0x29cc1c: 0x0  nop
    ctx->pc = 0x29cc1cu;
    // NOP
label_29cc20:
    // 0x29cc20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29cc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_29cc24:
    // 0x29cc24: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x29cc24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_29cc28:
    // 0x29cc28: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_29cc2c:
    if (ctx->pc == 0x29CC2Cu) {
        ctx->pc = 0x29CC2Cu;
            // 0x29cc2c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x29CC30u;
        goto label_29cc30;
    }
    ctx->pc = 0x29CC28u;
    {
        const bool branch_taken_0x29cc28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CC28u;
            // 0x29cc2c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cc28) {
            ctx->pc = 0x29CBDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29cbdc;
        }
    }
    ctx->pc = 0x29CC30u;
label_29cc30:
    // 0x29cc30: 0x10000064  b           . + 4 + (0x64 << 2)
label_29cc34:
    if (ctx->pc == 0x29CC34u) {
        ctx->pc = 0x29CC38u;
        goto label_29cc38;
    }
    ctx->pc = 0x29CC30u;
    {
        const bool branch_taken_0x29cc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cc30) {
            ctx->pc = 0x29CDC4u;
            goto label_29cdc4;
        }
    }
    ctx->pc = 0x29CC38u;
label_29cc38:
    // 0x29cc38: 0x12200062  beqz        $s1, . + 4 + (0x62 << 2)
label_29cc3c:
    if (ctx->pc == 0x29CC3Cu) {
        ctx->pc = 0x29CC40u;
        goto label_29cc40;
    }
    ctx->pc = 0x29CC38u;
    {
        const bool branch_taken_0x29cc38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cc38) {
            ctx->pc = 0x29CDC4u;
            goto label_29cdc4;
        }
    }
    ctx->pc = 0x29CC40u;
label_29cc40:
    // 0x29cc40: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x29cc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29cc44:
    // 0x29cc44: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x29cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_29cc48:
    // 0x29cc48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29cc48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29cc4c:
    // 0x29cc4c: 0x0  nop
    ctx->pc = 0x29cc4cu;
    // NOP
label_29cc50:
    // 0x29cc50: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x29cc50u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_29cc54:
    // 0x29cc54: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29cc54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_29cc58:
    // 0x29cc58: 0x1000005a  b           . + 4 + (0x5A << 2)
label_29cc5c:
    if (ctx->pc == 0x29CC5Cu) {
        ctx->pc = 0x29CC5Cu;
            // 0x29cc5c: 0xe6400024  swc1        $f0, 0x24($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
        ctx->pc = 0x29CC60u;
        goto label_29cc60;
    }
    ctx->pc = 0x29CC58u;
    {
        const bool branch_taken_0x29cc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CC58u;
            // 0x29cc5c: 0xe6400024  swc1        $f0, 0x24($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cc58) {
            ctx->pc = 0x29CDC4u;
            goto label_29cdc4;
        }
    }
    ctx->pc = 0x29CC60u;
label_29cc60:
    // 0x29cc60: 0x12200058  beqz        $s1, . + 4 + (0x58 << 2)
label_29cc64:
    if (ctx->pc == 0x29CC64u) {
        ctx->pc = 0x29CC68u;
        goto label_29cc68;
    }
    ctx->pc = 0x29CC60u;
    {
        const bool branch_taken_0x29cc60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cc60) {
            ctx->pc = 0x29CDC4u;
            goto label_29cdc4;
        }
    }
    ctx->pc = 0x29CC68u;
label_29cc68:
    // 0x29cc68: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x29cc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_29cc6c:
    // 0x29cc6c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x29cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_29cc70:
    // 0x29cc70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29cc70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29cc74:
    // 0x29cc74: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x29cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_29cc78:
    // 0x29cc78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29cc78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29cc7c:
    // 0x29cc7c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x29cc7cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_29cc80:
    // 0x29cc80: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x29cc80u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_29cc84:
    // 0x29cc84: 0x0  nop
    ctx->pc = 0x29cc84u;
    // NOP
label_29cc88:
    // 0x29cc88: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29cc88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_29cc8c:
    // 0x29cc8c: 0x1000004d  b           . + 4 + (0x4D << 2)
label_29cc90:
    if (ctx->pc == 0x29CC90u) {
        ctx->pc = 0x29CC90u;
            // 0x29cc90: 0xe6400024  swc1        $f0, 0x24($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
        ctx->pc = 0x29CC94u;
        goto label_29cc94;
    }
    ctx->pc = 0x29CC8Cu;
    {
        const bool branch_taken_0x29cc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CC8Cu;
            // 0x29cc90: 0xe6400024  swc1        $f0, 0x24($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cc8c) {
            ctx->pc = 0x29CDC4u;
            goto label_29cdc4;
        }
    }
    ctx->pc = 0x29CC94u;
label_29cc94:
    // 0x29cc94: 0x1220004b  beqz        $s1, . + 4 + (0x4B << 2)
label_29cc98:
    if (ctx->pc == 0x29CC98u) {
        ctx->pc = 0x29CC9Cu;
        goto label_29cc9c;
    }
    ctx->pc = 0x29CC94u;
    {
        const bool branch_taken_0x29cc94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cc94) {
            ctx->pc = 0x29CDC4u;
            goto label_29cdc4;
        }
    }
    ctx->pc = 0x29CC9Cu;
label_29cc9c:
    // 0x29cc9c: 0xc60d0030  lwc1        $f13, 0x30($s0)
    ctx->pc = 0x29cc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_29cca0:
    // 0x29cca0: 0xc60e0034  lwc1        $f14, 0x34($s0)
    ctx->pc = 0x29cca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_29cca4:
    // 0x29cca4: 0xc0a7124  jal         func_29C490
label_29cca8:
    if (ctx->pc == 0x29CCA8u) {
        ctx->pc = 0x29CCA8u;
            // 0x29cca8: 0xc62c0010  lwc1        $f12, 0x10($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x29CCACu;
        goto label_29ccac;
    }
    ctx->pc = 0x29CCA4u;
    SET_GPR_U32(ctx, 31, 0x29CCACu);
    ctx->pc = 0x29CCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CCA4u;
            // 0x29cca8: 0xc62c0010  lwc1        $f12, 0x10($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C490u;
    if (runtime->hasFunction(0x29C490u)) {
        auto targetFn = runtime->lookupFunction(0x29C490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CCACu; }
        if (ctx->pc != 0x29CCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTime__Ffff_0x29c490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CCACu; }
        if (ctx->pc != 0x29CCACu) { return; }
    }
    ctx->pc = 0x29CCACu;
label_29ccac:
    // 0x29ccac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_29ccb0:
    if (ctx->pc == 0x29CCB0u) {
        ctx->pc = 0x29CCB0u;
            // 0x29ccb0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x29CCB4u;
        goto label_29ccb4;
    }
    ctx->pc = 0x29CCACu;
    {
        const bool branch_taken_0x29ccac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CCACu;
            // 0x29ccb0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ccac) {
            ctx->pc = 0x29CCC0u;
            goto label_29ccc0;
        }
    }
    ctx->pc = 0x29CCB4u;
label_29ccb4:
    // 0x29ccb4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x29ccb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_29ccb8:
    // 0x29ccb8: 0x10000031  b           . + 4 + (0x31 << 2)
label_29ccbc:
    if (ctx->pc == 0x29CCBCu) {
        ctx->pc = 0x29CCBCu;
            // 0x29ccbc: 0xc6010020  lwc1        $f1, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x29CCC0u;
        goto label_29ccc0;
    }
    ctx->pc = 0x29CCB8u;
    {
        const bool branch_taken_0x29ccb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CCB8u;
            // 0x29ccbc: 0xc6010020  lwc1        $f1, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ccb8) {
            ctx->pc = 0x29CD80u;
            goto label_29cd80;
        }
    }
    ctx->pc = 0x29CCC0u;
label_29ccc0:
    // 0x29ccc0: 0xc6150038  lwc1        $f21, 0x38($s0)
    ctx->pc = 0x29ccc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_29ccc4:
    // 0x29ccc4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x29ccc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_29ccc8:
    // 0x29ccc8: 0x0  nop
    ctx->pc = 0x29ccc8u;
    // NOP
label_29cccc:
    // 0x29cccc: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x29ccccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29ccd0:
    // 0x29ccd0: 0x0  nop
    ctx->pc = 0x29ccd0u;
    // NOP
label_29ccd4:
    // 0x29ccd4: 0x45010029  bc1t        . + 4 + (0x29 << 2)
label_29ccd8:
    if (ctx->pc == 0x29CCD8u) {
        ctx->pc = 0x29CCDCu;
        goto label_29ccdc;
    }
    ctx->pc = 0x29CCD4u;
    {
        const bool branch_taken_0x29ccd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ccd4) {
            ctx->pc = 0x29CD7Cu;
            goto label_29cd7c;
        }
    }
    ctx->pc = 0x29CCDCu;
label_29ccdc:
    // 0x29ccdc: 0xc62d0010  lwc1        $f13, 0x10($s1)
    ctx->pc = 0x29ccdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_29cce0:
    // 0x29cce0: 0xc0a717c  jal         func_29C5F0
label_29cce4:
    if (ctx->pc == 0x29CCE4u) {
        ctx->pc = 0x29CCE4u;
            // 0x29cce4: 0xc60c0030  lwc1        $f12, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x29CCE8u;
        goto label_29cce8;
    }
    ctx->pc = 0x29CCE0u;
    SET_GPR_U32(ctx, 31, 0x29CCE8u);
    ctx->pc = 0x29CCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CCE0u;
            // 0x29cce4: 0xc60c0030  lwc1        $f12, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C5F0u;
    if (runtime->hasFunction(0x29C5F0u)) {
        auto targetFn = runtime->lookupFunction(0x29C5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CCE8u; }
        if (ctx->pc != 0x29CCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubTime__Fff_0x29c5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CCE8u; }
        if (ctx->pc != 0x29CCE8u) { return; }
    }
    ctx->pc = 0x29CCE8u;
label_29cce8:
    // 0x29cce8: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x29cce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_29ccec:
    // 0x29ccec: 0xc60d0034  lwc1        $f13, 0x34($s0)
    ctx->pc = 0x29ccecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_29ccf0:
    // 0x29ccf0: 0xc0a717c  jal         func_29C5F0
label_29ccf4:
    if (ctx->pc == 0x29CCF4u) {
        ctx->pc = 0x29CCF4u;
            // 0x29ccf4: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x29CCF8u;
        goto label_29ccf8;
    }
    ctx->pc = 0x29CCF0u;
    SET_GPR_U32(ctx, 31, 0x29CCF8u);
    ctx->pc = 0x29CCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CCF0u;
            // 0x29ccf4: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C5F0u;
    if (runtime->hasFunction(0x29C5F0u)) {
        auto targetFn = runtime->lookupFunction(0x29C5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CCF8u; }
        if (ctx->pc != 0x29CCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubTime__Fff_0x29c5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CCF8u; }
        if (ctx->pc != 0x29CCF8u) { return; }
    }
    ctx->pc = 0x29CCF8u;
label_29ccf8:
    // 0x29ccf8: 0x4600a046  mov.s       $f1, $f20
    ctx->pc = 0x29ccf8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[20]);
label_29ccfc:
    // 0x29ccfc: 0x4601b034  c.lt.s      $f22, $f1
    ctx->pc = 0x29ccfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29cd00:
    // 0x29cd00: 0x0  nop
    ctx->pc = 0x29cd00u;
    // NOP
label_29cd04:
    // 0x29cd04: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_29cd08:
    if (ctx->pc == 0x29CD08u) {
        ctx->pc = 0x29CD0Cu;
        goto label_29cd0c;
    }
    ctx->pc = 0x29CD04u;
    {
        const bool branch_taken_0x29cd04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29cd04) {
            ctx->pc = 0x29CD38u;
            goto label_29cd38;
        }
    }
    ctx->pc = 0x29CD0Cu;
label_29cd0c:
    // 0x29cd0c: 0x4615b036  c.le.s      $f22, $f21
    ctx->pc = 0x29cd0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29cd10:
    // 0x29cd10: 0x0  nop
    ctx->pc = 0x29cd10u;
    // NOP
label_29cd14:
    // 0x29cd14: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_29cd18:
    if (ctx->pc == 0x29CD18u) {
        ctx->pc = 0x29CD1Cu;
        goto label_29cd1c;
    }
    ctx->pc = 0x29CD14u;
    {
        const bool branch_taken_0x29cd14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29cd14) {
            ctx->pc = 0x29CD38u;
            goto label_29cd38;
        }
    }
    ctx->pc = 0x29CD1Cu;
label_29cd1c:
    // 0x29cd1c: 0x0  nop
    ctx->pc = 0x29cd1cu;
    // NOP
label_29cd20:
    // 0x29cd20: 0x0  nop
    ctx->pc = 0x29cd20u;
    // NOP
label_29cd24:
    // 0x29cd24: 0x4615b083  div.s       $f2, $f22, $f21
    ctx->pc = 0x29cd24u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[22], ctx->f[21]); }
label_29cd28:
    // 0x29cd28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29cd28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_29cd2c:
    // 0x29cd2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29cd2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29cd30:
    // 0x29cd30: 0x0  nop
    ctx->pc = 0x29cd30u;
    // NOP
label_29cd34:
    // 0x29cd34: 0x46020d01  sub.s       $f20, $f1, $f2
    ctx->pc = 0x29cd34u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_29cd38:
    // 0x29cd38: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x29cd38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29cd3c:
    // 0x29cd3c: 0x0  nop
    ctx->pc = 0x29cd3cu;
    // NOP
label_29cd40:
    // 0x29cd40: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29cd40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29cd44:
    // 0x29cd44: 0x0  nop
    ctx->pc = 0x29cd44u;
    // NOP
label_29cd48:
    // 0x29cd48: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_29cd4c:
    if (ctx->pc == 0x29CD4Cu) {
        ctx->pc = 0x29CD50u;
        goto label_29cd50;
    }
    ctx->pc = 0x29CD48u;
    {
        const bool branch_taken_0x29cd48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29cd48) {
            ctx->pc = 0x29CD7Cu;
            goto label_29cd7c;
        }
    }
    ctx->pc = 0x29CD50u;
label_29cd50:
    // 0x29cd50: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x29cd50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29cd54:
    // 0x29cd54: 0x0  nop
    ctx->pc = 0x29cd54u;
    // NOP
label_29cd58:
    // 0x29cd58: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_29cd5c:
    if (ctx->pc == 0x29CD5Cu) {
        ctx->pc = 0x29CD60u;
        goto label_29cd60;
    }
    ctx->pc = 0x29CD58u;
    {
        const bool branch_taken_0x29cd58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29cd58) {
            ctx->pc = 0x29CD7Cu;
            goto label_29cd7c;
        }
    }
    ctx->pc = 0x29CD60u;
label_29cd60:
    // 0x29cd60: 0x0  nop
    ctx->pc = 0x29cd60u;
    // NOP
label_29cd64:
    // 0x29cd64: 0x0  nop
    ctx->pc = 0x29cd64u;
    // NOP
label_29cd68:
    // 0x29cd68: 0x46150043  div.s       $f1, $f0, $f21
    ctx->pc = 0x29cd68u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
label_29cd6c:
    // 0x29cd6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_29cd70:
    // 0x29cd70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29cd70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29cd74:
    // 0x29cd74: 0x0  nop
    ctx->pc = 0x29cd74u;
    // NOP
label_29cd78:
    // 0x29cd78: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x29cd78u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_29cd7c:
    // 0x29cd7c: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x29cd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29cd80:
    // 0x29cd80: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x29cd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29cd84:
    // 0x29cd84: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29cd84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_29cd88:
    // 0x29cd88: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x29cd88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_29cd8c:
    // 0x29cd8c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29cd8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_29cd90:
    // 0x29cd90: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x29cd90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_29cd94:
    // 0x29cd94: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x29cd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29cd98:
    // 0x29cd98: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x29cd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29cd9c:
    // 0x29cd9c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29cd9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_29cda0:
    // 0x29cda0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x29cda0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_29cda4:
    // 0x29cda4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29cda4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_29cda8:
    // 0x29cda8: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x29cda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
label_29cdac:
    // 0x29cdac: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x29cdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29cdb0:
    // 0x29cdb0: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x29cdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29cdb4:
    // 0x29cdb4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29cdb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_29cdb8:
    // 0x29cdb8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x29cdb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_29cdbc:
    // 0x29cdbc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29cdbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_29cdc0:
    // 0x29cdc0: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x29cdc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
label_29cdc4:
    // 0x29cdc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29cdc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29cdc8:
    // 0x29cdc8: 0xc0a7380  jal         func_29CE00
label_29cdcc:
    if (ctx->pc == 0x29CDCCu) {
        ctx->pc = 0x29CDCCu;
            // 0x29cdcc: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x29CDD0u;
        goto label_29cdd0;
    }
    ctx->pc = 0x29CDC8u;
    SET_GPR_U32(ctx, 31, 0x29CDD0u);
    ctx->pc = 0x29CDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CDC8u;
            // 0x29cdcc: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CE00u;
    if (runtime->hasFunction(0x29CE00u)) {
        auto targetFn = runtime->lookupFunction(0x29CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CDD0u; }
        if (ctx->pc != 0x29CDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetParam__9CObjAnimeFPf_0x29ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CDD0u; }
        if (ctx->pc != 0x29CDD0u) { return; }
    }
    ctx->pc = 0x29CDD0u;
label_29cdd0:
    // 0x29cdd0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29cdd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29cdd4:
    // 0x29cdd4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x29cdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_29cdd8:
    // 0x29cdd8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x29cdd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29cddc:
    // 0x29cddc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x29cddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_29cde0:
    // 0x29cde0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x29cde0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29cde4:
    // 0x29cde4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x29cde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_29cde8:
    // 0x29cde8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29cde8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29cdec:
    // 0x29cdec: 0x3e00008  jr          $ra
label_29cdf0:
    if (ctx->pc == 0x29CDF0u) {
        ctx->pc = 0x29CDF0u;
            // 0x29cdf0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x29CDF4u;
        goto label_fallthrough_0x29cdec;
    }
    ctx->pc = 0x29CDECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CDECu;
            // 0x29cdf0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x29cdec:
    ctx->pc = 0x29CDF4u;
}
