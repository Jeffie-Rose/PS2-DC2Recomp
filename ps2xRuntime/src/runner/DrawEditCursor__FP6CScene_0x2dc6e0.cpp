#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawEditCursor__FP6CScene
// Address: 0x2dc6e0 - 0x2dcc88
void DrawEditCursor__FP6CScene_0x2dc6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawEditCursor__FP6CScene_0x2dc6e0");
#endif

    switch (ctx->pc) {
        case 0x2dc6e0u: goto label_2dc6e0;
        case 0x2dc6e4u: goto label_2dc6e4;
        case 0x2dc6e8u: goto label_2dc6e8;
        case 0x2dc6ecu: goto label_2dc6ec;
        case 0x2dc6f0u: goto label_2dc6f0;
        case 0x2dc6f4u: goto label_2dc6f4;
        case 0x2dc6f8u: goto label_2dc6f8;
        case 0x2dc6fcu: goto label_2dc6fc;
        case 0x2dc700u: goto label_2dc700;
        case 0x2dc704u: goto label_2dc704;
        case 0x2dc708u: goto label_2dc708;
        case 0x2dc70cu: goto label_2dc70c;
        case 0x2dc710u: goto label_2dc710;
        case 0x2dc714u: goto label_2dc714;
        case 0x2dc718u: goto label_2dc718;
        case 0x2dc71cu: goto label_2dc71c;
        case 0x2dc720u: goto label_2dc720;
        case 0x2dc724u: goto label_2dc724;
        case 0x2dc728u: goto label_2dc728;
        case 0x2dc72cu: goto label_2dc72c;
        case 0x2dc730u: goto label_2dc730;
        case 0x2dc734u: goto label_2dc734;
        case 0x2dc738u: goto label_2dc738;
        case 0x2dc73cu: goto label_2dc73c;
        case 0x2dc740u: goto label_2dc740;
        case 0x2dc744u: goto label_2dc744;
        case 0x2dc748u: goto label_2dc748;
        case 0x2dc74cu: goto label_2dc74c;
        case 0x2dc750u: goto label_2dc750;
        case 0x2dc754u: goto label_2dc754;
        case 0x2dc758u: goto label_2dc758;
        case 0x2dc75cu: goto label_2dc75c;
        case 0x2dc760u: goto label_2dc760;
        case 0x2dc764u: goto label_2dc764;
        case 0x2dc768u: goto label_2dc768;
        case 0x2dc76cu: goto label_2dc76c;
        case 0x2dc770u: goto label_2dc770;
        case 0x2dc774u: goto label_2dc774;
        case 0x2dc778u: goto label_2dc778;
        case 0x2dc77cu: goto label_2dc77c;
        case 0x2dc780u: goto label_2dc780;
        case 0x2dc784u: goto label_2dc784;
        case 0x2dc788u: goto label_2dc788;
        case 0x2dc78cu: goto label_2dc78c;
        case 0x2dc790u: goto label_2dc790;
        case 0x2dc794u: goto label_2dc794;
        case 0x2dc798u: goto label_2dc798;
        case 0x2dc79cu: goto label_2dc79c;
        case 0x2dc7a0u: goto label_2dc7a0;
        case 0x2dc7a4u: goto label_2dc7a4;
        case 0x2dc7a8u: goto label_2dc7a8;
        case 0x2dc7acu: goto label_2dc7ac;
        case 0x2dc7b0u: goto label_2dc7b0;
        case 0x2dc7b4u: goto label_2dc7b4;
        case 0x2dc7b8u: goto label_2dc7b8;
        case 0x2dc7bcu: goto label_2dc7bc;
        case 0x2dc7c0u: goto label_2dc7c0;
        case 0x2dc7c4u: goto label_2dc7c4;
        case 0x2dc7c8u: goto label_2dc7c8;
        case 0x2dc7ccu: goto label_2dc7cc;
        case 0x2dc7d0u: goto label_2dc7d0;
        case 0x2dc7d4u: goto label_2dc7d4;
        case 0x2dc7d8u: goto label_2dc7d8;
        case 0x2dc7dcu: goto label_2dc7dc;
        case 0x2dc7e0u: goto label_2dc7e0;
        case 0x2dc7e4u: goto label_2dc7e4;
        case 0x2dc7e8u: goto label_2dc7e8;
        case 0x2dc7ecu: goto label_2dc7ec;
        case 0x2dc7f0u: goto label_2dc7f0;
        case 0x2dc7f4u: goto label_2dc7f4;
        case 0x2dc7f8u: goto label_2dc7f8;
        case 0x2dc7fcu: goto label_2dc7fc;
        case 0x2dc800u: goto label_2dc800;
        case 0x2dc804u: goto label_2dc804;
        case 0x2dc808u: goto label_2dc808;
        case 0x2dc80cu: goto label_2dc80c;
        case 0x2dc810u: goto label_2dc810;
        case 0x2dc814u: goto label_2dc814;
        case 0x2dc818u: goto label_2dc818;
        case 0x2dc81cu: goto label_2dc81c;
        case 0x2dc820u: goto label_2dc820;
        case 0x2dc824u: goto label_2dc824;
        case 0x2dc828u: goto label_2dc828;
        case 0x2dc82cu: goto label_2dc82c;
        case 0x2dc830u: goto label_2dc830;
        case 0x2dc834u: goto label_2dc834;
        case 0x2dc838u: goto label_2dc838;
        case 0x2dc83cu: goto label_2dc83c;
        case 0x2dc840u: goto label_2dc840;
        case 0x2dc844u: goto label_2dc844;
        case 0x2dc848u: goto label_2dc848;
        case 0x2dc84cu: goto label_2dc84c;
        case 0x2dc850u: goto label_2dc850;
        case 0x2dc854u: goto label_2dc854;
        case 0x2dc858u: goto label_2dc858;
        case 0x2dc85cu: goto label_2dc85c;
        case 0x2dc860u: goto label_2dc860;
        case 0x2dc864u: goto label_2dc864;
        case 0x2dc868u: goto label_2dc868;
        case 0x2dc86cu: goto label_2dc86c;
        case 0x2dc870u: goto label_2dc870;
        case 0x2dc874u: goto label_2dc874;
        case 0x2dc878u: goto label_2dc878;
        case 0x2dc87cu: goto label_2dc87c;
        case 0x2dc880u: goto label_2dc880;
        case 0x2dc884u: goto label_2dc884;
        case 0x2dc888u: goto label_2dc888;
        case 0x2dc88cu: goto label_2dc88c;
        case 0x2dc890u: goto label_2dc890;
        case 0x2dc894u: goto label_2dc894;
        case 0x2dc898u: goto label_2dc898;
        case 0x2dc89cu: goto label_2dc89c;
        case 0x2dc8a0u: goto label_2dc8a0;
        case 0x2dc8a4u: goto label_2dc8a4;
        case 0x2dc8a8u: goto label_2dc8a8;
        case 0x2dc8acu: goto label_2dc8ac;
        case 0x2dc8b0u: goto label_2dc8b0;
        case 0x2dc8b4u: goto label_2dc8b4;
        case 0x2dc8b8u: goto label_2dc8b8;
        case 0x2dc8bcu: goto label_2dc8bc;
        case 0x2dc8c0u: goto label_2dc8c0;
        case 0x2dc8c4u: goto label_2dc8c4;
        case 0x2dc8c8u: goto label_2dc8c8;
        case 0x2dc8ccu: goto label_2dc8cc;
        case 0x2dc8d0u: goto label_2dc8d0;
        case 0x2dc8d4u: goto label_2dc8d4;
        case 0x2dc8d8u: goto label_2dc8d8;
        case 0x2dc8dcu: goto label_2dc8dc;
        case 0x2dc8e0u: goto label_2dc8e0;
        case 0x2dc8e4u: goto label_2dc8e4;
        case 0x2dc8e8u: goto label_2dc8e8;
        case 0x2dc8ecu: goto label_2dc8ec;
        case 0x2dc8f0u: goto label_2dc8f0;
        case 0x2dc8f4u: goto label_2dc8f4;
        case 0x2dc8f8u: goto label_2dc8f8;
        case 0x2dc8fcu: goto label_2dc8fc;
        case 0x2dc900u: goto label_2dc900;
        case 0x2dc904u: goto label_2dc904;
        case 0x2dc908u: goto label_2dc908;
        case 0x2dc90cu: goto label_2dc90c;
        case 0x2dc910u: goto label_2dc910;
        case 0x2dc914u: goto label_2dc914;
        case 0x2dc918u: goto label_2dc918;
        case 0x2dc91cu: goto label_2dc91c;
        case 0x2dc920u: goto label_2dc920;
        case 0x2dc924u: goto label_2dc924;
        case 0x2dc928u: goto label_2dc928;
        case 0x2dc92cu: goto label_2dc92c;
        case 0x2dc930u: goto label_2dc930;
        case 0x2dc934u: goto label_2dc934;
        case 0x2dc938u: goto label_2dc938;
        case 0x2dc93cu: goto label_2dc93c;
        case 0x2dc940u: goto label_2dc940;
        case 0x2dc944u: goto label_2dc944;
        case 0x2dc948u: goto label_2dc948;
        case 0x2dc94cu: goto label_2dc94c;
        case 0x2dc950u: goto label_2dc950;
        case 0x2dc954u: goto label_2dc954;
        case 0x2dc958u: goto label_2dc958;
        case 0x2dc95cu: goto label_2dc95c;
        case 0x2dc960u: goto label_2dc960;
        case 0x2dc964u: goto label_2dc964;
        case 0x2dc968u: goto label_2dc968;
        case 0x2dc96cu: goto label_2dc96c;
        case 0x2dc970u: goto label_2dc970;
        case 0x2dc974u: goto label_2dc974;
        case 0x2dc978u: goto label_2dc978;
        case 0x2dc97cu: goto label_2dc97c;
        case 0x2dc980u: goto label_2dc980;
        case 0x2dc984u: goto label_2dc984;
        case 0x2dc988u: goto label_2dc988;
        case 0x2dc98cu: goto label_2dc98c;
        case 0x2dc990u: goto label_2dc990;
        case 0x2dc994u: goto label_2dc994;
        case 0x2dc998u: goto label_2dc998;
        case 0x2dc99cu: goto label_2dc99c;
        case 0x2dc9a0u: goto label_2dc9a0;
        case 0x2dc9a4u: goto label_2dc9a4;
        case 0x2dc9a8u: goto label_2dc9a8;
        case 0x2dc9acu: goto label_2dc9ac;
        case 0x2dc9b0u: goto label_2dc9b0;
        case 0x2dc9b4u: goto label_2dc9b4;
        case 0x2dc9b8u: goto label_2dc9b8;
        case 0x2dc9bcu: goto label_2dc9bc;
        case 0x2dc9c0u: goto label_2dc9c0;
        case 0x2dc9c4u: goto label_2dc9c4;
        case 0x2dc9c8u: goto label_2dc9c8;
        case 0x2dc9ccu: goto label_2dc9cc;
        case 0x2dc9d0u: goto label_2dc9d0;
        case 0x2dc9d4u: goto label_2dc9d4;
        case 0x2dc9d8u: goto label_2dc9d8;
        case 0x2dc9dcu: goto label_2dc9dc;
        case 0x2dc9e0u: goto label_2dc9e0;
        case 0x2dc9e4u: goto label_2dc9e4;
        case 0x2dc9e8u: goto label_2dc9e8;
        case 0x2dc9ecu: goto label_2dc9ec;
        case 0x2dc9f0u: goto label_2dc9f0;
        case 0x2dc9f4u: goto label_2dc9f4;
        case 0x2dc9f8u: goto label_2dc9f8;
        case 0x2dc9fcu: goto label_2dc9fc;
        case 0x2dca00u: goto label_2dca00;
        case 0x2dca04u: goto label_2dca04;
        case 0x2dca08u: goto label_2dca08;
        case 0x2dca0cu: goto label_2dca0c;
        case 0x2dca10u: goto label_2dca10;
        case 0x2dca14u: goto label_2dca14;
        case 0x2dca18u: goto label_2dca18;
        case 0x2dca1cu: goto label_2dca1c;
        case 0x2dca20u: goto label_2dca20;
        case 0x2dca24u: goto label_2dca24;
        case 0x2dca28u: goto label_2dca28;
        case 0x2dca2cu: goto label_2dca2c;
        case 0x2dca30u: goto label_2dca30;
        case 0x2dca34u: goto label_2dca34;
        case 0x2dca38u: goto label_2dca38;
        case 0x2dca3cu: goto label_2dca3c;
        case 0x2dca40u: goto label_2dca40;
        case 0x2dca44u: goto label_2dca44;
        case 0x2dca48u: goto label_2dca48;
        case 0x2dca4cu: goto label_2dca4c;
        case 0x2dca50u: goto label_2dca50;
        case 0x2dca54u: goto label_2dca54;
        case 0x2dca58u: goto label_2dca58;
        case 0x2dca5cu: goto label_2dca5c;
        case 0x2dca60u: goto label_2dca60;
        case 0x2dca64u: goto label_2dca64;
        case 0x2dca68u: goto label_2dca68;
        case 0x2dca6cu: goto label_2dca6c;
        case 0x2dca70u: goto label_2dca70;
        case 0x2dca74u: goto label_2dca74;
        case 0x2dca78u: goto label_2dca78;
        case 0x2dca7cu: goto label_2dca7c;
        case 0x2dca80u: goto label_2dca80;
        case 0x2dca84u: goto label_2dca84;
        case 0x2dca88u: goto label_2dca88;
        case 0x2dca8cu: goto label_2dca8c;
        case 0x2dca90u: goto label_2dca90;
        case 0x2dca94u: goto label_2dca94;
        case 0x2dca98u: goto label_2dca98;
        case 0x2dca9cu: goto label_2dca9c;
        case 0x2dcaa0u: goto label_2dcaa0;
        case 0x2dcaa4u: goto label_2dcaa4;
        case 0x2dcaa8u: goto label_2dcaa8;
        case 0x2dcaacu: goto label_2dcaac;
        case 0x2dcab0u: goto label_2dcab0;
        case 0x2dcab4u: goto label_2dcab4;
        case 0x2dcab8u: goto label_2dcab8;
        case 0x2dcabcu: goto label_2dcabc;
        case 0x2dcac0u: goto label_2dcac0;
        case 0x2dcac4u: goto label_2dcac4;
        case 0x2dcac8u: goto label_2dcac8;
        case 0x2dcaccu: goto label_2dcacc;
        case 0x2dcad0u: goto label_2dcad0;
        case 0x2dcad4u: goto label_2dcad4;
        case 0x2dcad8u: goto label_2dcad8;
        case 0x2dcadcu: goto label_2dcadc;
        case 0x2dcae0u: goto label_2dcae0;
        case 0x2dcae4u: goto label_2dcae4;
        case 0x2dcae8u: goto label_2dcae8;
        case 0x2dcaecu: goto label_2dcaec;
        case 0x2dcaf0u: goto label_2dcaf0;
        case 0x2dcaf4u: goto label_2dcaf4;
        case 0x2dcaf8u: goto label_2dcaf8;
        case 0x2dcafcu: goto label_2dcafc;
        case 0x2dcb00u: goto label_2dcb00;
        case 0x2dcb04u: goto label_2dcb04;
        case 0x2dcb08u: goto label_2dcb08;
        case 0x2dcb0cu: goto label_2dcb0c;
        case 0x2dcb10u: goto label_2dcb10;
        case 0x2dcb14u: goto label_2dcb14;
        case 0x2dcb18u: goto label_2dcb18;
        case 0x2dcb1cu: goto label_2dcb1c;
        case 0x2dcb20u: goto label_2dcb20;
        case 0x2dcb24u: goto label_2dcb24;
        case 0x2dcb28u: goto label_2dcb28;
        case 0x2dcb2cu: goto label_2dcb2c;
        case 0x2dcb30u: goto label_2dcb30;
        case 0x2dcb34u: goto label_2dcb34;
        case 0x2dcb38u: goto label_2dcb38;
        case 0x2dcb3cu: goto label_2dcb3c;
        case 0x2dcb40u: goto label_2dcb40;
        case 0x2dcb44u: goto label_2dcb44;
        case 0x2dcb48u: goto label_2dcb48;
        case 0x2dcb4cu: goto label_2dcb4c;
        case 0x2dcb50u: goto label_2dcb50;
        case 0x2dcb54u: goto label_2dcb54;
        case 0x2dcb58u: goto label_2dcb58;
        case 0x2dcb5cu: goto label_2dcb5c;
        case 0x2dcb60u: goto label_2dcb60;
        case 0x2dcb64u: goto label_2dcb64;
        case 0x2dcb68u: goto label_2dcb68;
        case 0x2dcb6cu: goto label_2dcb6c;
        case 0x2dcb70u: goto label_2dcb70;
        case 0x2dcb74u: goto label_2dcb74;
        case 0x2dcb78u: goto label_2dcb78;
        case 0x2dcb7cu: goto label_2dcb7c;
        case 0x2dcb80u: goto label_2dcb80;
        case 0x2dcb84u: goto label_2dcb84;
        case 0x2dcb88u: goto label_2dcb88;
        case 0x2dcb8cu: goto label_2dcb8c;
        case 0x2dcb90u: goto label_2dcb90;
        case 0x2dcb94u: goto label_2dcb94;
        case 0x2dcb98u: goto label_2dcb98;
        case 0x2dcb9cu: goto label_2dcb9c;
        case 0x2dcba0u: goto label_2dcba0;
        case 0x2dcba4u: goto label_2dcba4;
        case 0x2dcba8u: goto label_2dcba8;
        case 0x2dcbacu: goto label_2dcbac;
        case 0x2dcbb0u: goto label_2dcbb0;
        case 0x2dcbb4u: goto label_2dcbb4;
        case 0x2dcbb8u: goto label_2dcbb8;
        case 0x2dcbbcu: goto label_2dcbbc;
        case 0x2dcbc0u: goto label_2dcbc0;
        case 0x2dcbc4u: goto label_2dcbc4;
        case 0x2dcbc8u: goto label_2dcbc8;
        case 0x2dcbccu: goto label_2dcbcc;
        case 0x2dcbd0u: goto label_2dcbd0;
        case 0x2dcbd4u: goto label_2dcbd4;
        case 0x2dcbd8u: goto label_2dcbd8;
        case 0x2dcbdcu: goto label_2dcbdc;
        case 0x2dcbe0u: goto label_2dcbe0;
        case 0x2dcbe4u: goto label_2dcbe4;
        case 0x2dcbe8u: goto label_2dcbe8;
        case 0x2dcbecu: goto label_2dcbec;
        case 0x2dcbf0u: goto label_2dcbf0;
        case 0x2dcbf4u: goto label_2dcbf4;
        case 0x2dcbf8u: goto label_2dcbf8;
        case 0x2dcbfcu: goto label_2dcbfc;
        case 0x2dcc00u: goto label_2dcc00;
        case 0x2dcc04u: goto label_2dcc04;
        case 0x2dcc08u: goto label_2dcc08;
        case 0x2dcc0cu: goto label_2dcc0c;
        case 0x2dcc10u: goto label_2dcc10;
        case 0x2dcc14u: goto label_2dcc14;
        case 0x2dcc18u: goto label_2dcc18;
        case 0x2dcc1cu: goto label_2dcc1c;
        case 0x2dcc20u: goto label_2dcc20;
        case 0x2dcc24u: goto label_2dcc24;
        case 0x2dcc28u: goto label_2dcc28;
        case 0x2dcc2cu: goto label_2dcc2c;
        case 0x2dcc30u: goto label_2dcc30;
        case 0x2dcc34u: goto label_2dcc34;
        case 0x2dcc38u: goto label_2dcc38;
        case 0x2dcc3cu: goto label_2dcc3c;
        case 0x2dcc40u: goto label_2dcc40;
        case 0x2dcc44u: goto label_2dcc44;
        case 0x2dcc48u: goto label_2dcc48;
        case 0x2dcc4cu: goto label_2dcc4c;
        case 0x2dcc50u: goto label_2dcc50;
        case 0x2dcc54u: goto label_2dcc54;
        case 0x2dcc58u: goto label_2dcc58;
        case 0x2dcc5cu: goto label_2dcc5c;
        case 0x2dcc60u: goto label_2dcc60;
        case 0x2dcc64u: goto label_2dcc64;
        case 0x2dcc68u: goto label_2dcc68;
        case 0x2dcc6cu: goto label_2dcc6c;
        case 0x2dcc70u: goto label_2dcc70;
        case 0x2dcc74u: goto label_2dcc74;
        case 0x2dcc78u: goto label_2dcc78;
        case 0x2dcc7cu: goto label_2dcc7c;
        case 0x2dcc80u: goto label_2dcc80;
        case 0x2dcc84u: goto label_2dcc84;
        default: break;
    }

    ctx->pc = 0x2dc6e0u;

label_2dc6e0:
    // 0x2dc6e0: 0x27bdfd50  addiu       $sp, $sp, -0x2B0
    ctx->pc = 0x2dc6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966608));
label_2dc6e4:
    // 0x2dc6e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2dc6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2dc6e8:
    // 0x2dc6e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2dc6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2dc6ec:
    // 0x2dc6ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2dc6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2dc6f0:
    // 0x2dc6f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dc6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2dc6f4:
    // 0x2dc6f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dc6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2dc6f8:
    // 0x2dc6f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dc6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2dc6fc:
    // 0x2dc6fc: 0xc0a0f58  jal         func_283D60
label_2dc700:
    if (ctx->pc == 0x2DC700u) {
        ctx->pc = 0x2DC700u;
            // 0x2dc700: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x2DC704u;
        goto label_2dc704;
    }
    ctx->pc = 0x2DC6FCu;
    SET_GPR_U32(ctx, 31, 0x2DC704u);
    ctx->pc = 0x2DC700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC6FCu;
            // 0x2dc700: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC704u; }
        if (ctx->pc != 0x2DC704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC704u; }
        if (ctx->pc != 0x2DC704u) { return; }
    }
    ctx->pc = 0x2DC704u;
label_2dc704:
    // 0x2dc704: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x2dc704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
label_2dc708:
    // 0x2dc708: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dc708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dc70c:
    // 0x2dc70c: 0x24638900  addiu       $v1, $v1, -0x7700
    ctx->pc = 0x2dc70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936832));
label_2dc710:
    // 0x2dc710: 0x8c3089e0  lw          $s0, -0x7620($at)
    ctx->pc = 0x2dc710u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937056)));
label_2dc714:
    // 0x2dc714: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2dc714u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2dc718:
    // 0x2dc718: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2dc718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2dc71c:
    // 0x2dc71c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2dc71cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dc720:
    // 0x2dc720: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2dc720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc724:
    // 0x2dc724: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2dc724u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
label_2dc728:
    // 0x2dc728: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2dc728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2dc72c:
    // 0x2dc72c: 0x8f849e0c  lw          $a0, -0x61F4($gp)
    ctx->pc = 0x2dc72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942220)));
label_2dc730:
    // 0x2dc730: 0x10830033  beq         $a0, $v1, . + 4 + (0x33 << 2)
label_2dc734:
    if (ctx->pc == 0x2DC734u) {
        ctx->pc = 0x2DC734u;
            // 0x2dc734: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC738u;
        goto label_2dc738;
    }
    ctx->pc = 0x2DC730u;
    {
        const bool branch_taken_0x2dc730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2DC734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC730u;
            // 0x2dc734: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc730) {
            ctx->pc = 0x2DC800u;
            goto label_2dc800;
        }
    }
    ctx->pc = 0x2DC738u;
label_2dc738:
    // 0x2dc738: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2dc738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2dc73c:
    // 0x2dc73c: 0x10830030  beq         $a0, $v1, . + 4 + (0x30 << 2)
label_2dc740:
    if (ctx->pc == 0x2DC740u) {
        ctx->pc = 0x2DC744u;
        goto label_2dc744;
    }
    ctx->pc = 0x2DC73Cu;
    {
        const bool branch_taken_0x2dc73c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dc73c) {
            ctx->pc = 0x2DC800u;
            goto label_2dc800;
        }
    }
    ctx->pc = 0x2DC744u;
label_2dc744:
    // 0x2dc744: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2dc744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2dc748:
    // 0x2dc748: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
label_2dc74c:
    if (ctx->pc == 0x2DC74Cu) {
        ctx->pc = 0x2DC750u;
        goto label_2dc750;
    }
    ctx->pc = 0x2DC748u;
    {
        const bool branch_taken_0x2dc748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dc748) {
            ctx->pc = 0x2DC784u;
            goto label_2dc784;
        }
    }
    ctx->pc = 0x2DC750u;
label_2dc750:
    // 0x2dc750: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2dc750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2dc754:
    // 0x2dc754: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_2dc758:
    if (ctx->pc == 0x2DC758u) {
        ctx->pc = 0x2DC75Cu;
        goto label_2dc75c;
    }
    ctx->pc = 0x2DC754u;
    {
        const bool branch_taken_0x2dc754 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dc754) {
            ctx->pc = 0x2DC764u;
            goto label_2dc764;
        }
    }
    ctx->pc = 0x2DC75Cu;
label_2dc75c:
    // 0x2dc75c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_2dc760:
    if (ctx->pc == 0x2DC760u) {
        ctx->pc = 0x2DC764u;
        goto label_2dc764;
    }
    ctx->pc = 0x2DC75Cu;
    {
        const bool branch_taken_0x2dc75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc75c) {
            ctx->pc = 0x2DC808u;
            goto label_2dc808;
        }
    }
    ctx->pc = 0x2DC764u;
label_2dc764:
    // 0x2dc764: 0x8f919e84  lw          $s1, -0x617C($gp)
    ctx->pc = 0x2dc764u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942340)));
label_2dc768:
    // 0x2dc768: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dc768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2dc76c:
    // 0x2dc76c: 0xc0a5b38  jal         func_296CE0
label_2dc770:
    if (ctx->pc == 0x2DC770u) {
        ctx->pc = 0x2DC770u;
            // 0x2dc770: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC774u;
        goto label_2dc774;
    }
    ctx->pc = 0x2DC76Cu;
    SET_GPR_U32(ctx, 31, 0x2DC774u);
    ctx->pc = 0x2DC770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC76Cu;
            // 0x2dc770: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296CE0u;
    if (runtime->hasFunction(0x296CE0u)) {
        auto targetFn = runtime->lookupFunction(0x296CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC774u; }
        if (ctx->pc != 0x2DC774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsRiverGrid__8CEditMapFPf_0x296ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC774u; }
        if (ctx->pc != 0x2DC774u) { return; }
    }
    ctx->pc = 0x2DC774u;
label_2dc774:
    // 0x2dc774: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_2dc778:
    if (ctx->pc == 0x2DC778u) {
        ctx->pc = 0x2DC77Cu;
        goto label_2dc77c;
    }
    ctx->pc = 0x2DC774u;
    {
        const bool branch_taken_0x2dc774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc774) {
            ctx->pc = 0x2DC808u;
            goto label_2dc808;
        }
    }
    ctx->pc = 0x2DC77Cu;
label_2dc77c:
    // 0x2dc77c: 0x10000022  b           . + 4 + (0x22 << 2)
label_2dc780:
    if (ctx->pc == 0x2DC780u) {
        ctx->pc = 0x2DC780u;
            // 0x2dc780: 0x8f929e88  lw          $s2, -0x6178($gp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942344)));
        ctx->pc = 0x2DC784u;
        goto label_2dc784;
    }
    ctx->pc = 0x2DC77Cu;
    {
        const bool branch_taken_0x2dc77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC77Cu;
            // 0x2dc780: 0x8f929e88  lw          $s2, -0x6178($gp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc77c) {
            ctx->pc = 0x2DC808u;
            goto label_2dc808;
        }
    }
    ctx->pc = 0x2DC784u;
label_2dc784:
    // 0x2dc784: 0x8f859e24  lw          $a1, -0x61DC($gp)
    ctx->pc = 0x2dc784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942244)));
label_2dc788:
    // 0x2dc788: 0xc06c2d4  jal         func_1B0B50
label_2dc78c:
    if (ctx->pc == 0x2DC78Cu) {
        ctx->pc = 0x2DC78Cu;
            // 0x2dc78c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC790u;
        goto label_2dc790;
    }
    ctx->pc = 0x2DC788u;
    SET_GPR_U32(ctx, 31, 0x2DC790u);
    ctx->pc = 0x2DC78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC788u;
            // 0x2dc78c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B50u;
    if (runtime->hasFunction(0x1B0B50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC790u; }
        if (ctx->pc != 0x2DC790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfoAtID__8CEditMapFi_0x1b0b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC790u; }
        if (ctx->pc != 0x2DC790u) { return; }
    }
    ctx->pc = 0x2DC790u;
label_2dc790:
    // 0x2dc790: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2dc790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dc794:
    // 0x2dc794: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
label_2dc798:
    if (ctx->pc == 0x2DC798u) {
        ctx->pc = 0x2DC79Cu;
        goto label_2dc79c;
    }
    ctx->pc = 0x2DC794u;
    {
        const bool branch_taken_0x2dc794 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc794) {
            ctx->pc = 0x2DC7E0u;
            goto label_2dc7e0;
        }
    }
    ctx->pc = 0x2DC79Cu;
label_2dc79c:
    // 0x2dc79c: 0xc0beec4  jal         func_2FBB10
label_2dc7a0:
    if (ctx->pc == 0x2DC7A0u) {
        ctx->pc = 0x2DC7A4u;
        goto label_2dc7a4;
    }
    ctx->pc = 0x2DC79Cu;
    SET_GPR_U32(ctx, 31, 0x2DC7A4u);
    ctx->pc = 0x2FBB10u;
    if (runtime->hasFunction(0x2FBB10u)) {
        auto targetFn = runtime->lookupFunction(0x2FBB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC7A4u; }
        if (ctx->pc != 0x2DC7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditNowPlaceAnime__Fv_0x2fbb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC7A4u; }
        if (ctx->pc != 0x2DC7A4u) { return; }
    }
    ctx->pc = 0x2DC7A4u;
label_2dc7a4:
    // 0x2dc7a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2dc7a8:
    if (ctx->pc == 0x2DC7A8u) {
        ctx->pc = 0x2DC7ACu;
        goto label_2dc7ac;
    }
    ctx->pc = 0x2DC7A4u;
    {
        const bool branch_taken_0x2dc7a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc7a4) {
            ctx->pc = 0x2DC7C0u;
            goto label_2dc7c0;
        }
    }
    ctx->pc = 0x2DC7ACu;
label_2dc7ac:
    // 0x2dc7ac: 0x8f839e18  lw          $v1, -0x61E8($gp)
    ctx->pc = 0x2dc7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942232)));
label_2dc7b0:
    // 0x2dc7b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dc7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dc7b4:
    // 0x2dc7b4: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_2dc7b8:
    if (ctx->pc == 0x2DC7B8u) {
        ctx->pc = 0x2DC7BCu;
        goto label_2dc7bc;
    }
    ctx->pc = 0x2DC7B4u;
    {
        const bool branch_taken_0x2dc7b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2dc7b4) {
            ctx->pc = 0x2DC7C0u;
            goto label_2dc7c0;
        }
    }
    ctx->pc = 0x2DC7BCu;
label_2dc7bc:
    // 0x2dc7bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2dc7bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc7c0:
    // 0x2dc7c0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2dc7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2dc7c4:
    // 0x2dc7c4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2dc7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_2dc7c8:
    // 0x2dc7c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2dc7cc:
    if (ctx->pc == 0x2DC7CCu) {
        ctx->pc = 0x2DC7D0u;
        goto label_2dc7d0;
    }
    ctx->pc = 0x2DC7C8u;
    {
        const bool branch_taken_0x2dc7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc7c8) {
            ctx->pc = 0x2DC7E0u;
            goto label_2dc7e0;
        }
    }
    ctx->pc = 0x2DC7D0u;
label_2dc7d0:
    // 0x2dc7d0: 0x8f929e88  lw          $s2, -0x6178($gp)
    ctx->pc = 0x2dc7d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942344)));
label_2dc7d4:
    // 0x2dc7d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2dc7d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc7d8:
    // 0x2dc7d8: 0x8f919e80  lw          $s1, -0x6180($gp)
    ctx->pc = 0x2dc7d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942336)));
label_2dc7dc:
    // 0x2dc7dc: 0x0  nop
    ctx->pc = 0x2dc7dcu;
    // NOP
label_2dc7e0:
    // 0x2dc7e0: 0xc0b671c  jal         func_2D9C70
label_2dc7e4:
    if (ctx->pc == 0x2DC7E4u) {
        ctx->pc = 0x2DC7E8u;
        goto label_2dc7e8;
    }
    ctx->pc = 0x2DC7E0u;
    SET_GPR_U32(ctx, 31, 0x2DC7E8u);
    ctx->pc = 0x2D9C70u;
    if (runtime->hasFunction(0x2D9C70u)) {
        auto targetFn = runtime->lookupFunction(0x2D9C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC7E8u; }
        if (ctx->pc != 0x2DC7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowPlaceRiver__Fv_0x2d9c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC7E8u; }
        if (ctx->pc != 0x2DC7E8u) { return; }
    }
    ctx->pc = 0x2DC7E8u;
label_2dc7e8:
    // 0x2dc7e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2dc7ec:
    if (ctx->pc == 0x2DC7ECu) {
        ctx->pc = 0x2DC7F0u;
        goto label_2dc7f0;
    }
    ctx->pc = 0x2DC7E8u;
    {
        const bool branch_taken_0x2dc7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc7e8) {
            ctx->pc = 0x2DC808u;
            goto label_2dc808;
        }
    }
    ctx->pc = 0x2DC7F0u;
label_2dc7f0:
    // 0x2dc7f0: 0x8f919e80  lw          $s1, -0x6180($gp)
    ctx->pc = 0x2dc7f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942336)));
label_2dc7f4:
    // 0x2dc7f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2dc7f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc7f8:
    // 0x2dc7f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2dc7fc:
    if (ctx->pc == 0x2DC7FCu) {
        ctx->pc = 0x2DC7FCu;
            // 0x2dc7fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC800u;
        goto label_2dc800;
    }
    ctx->pc = 0x2DC7F8u;
    {
        const bool branch_taken_0x2dc7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC7F8u;
            // 0x2dc7fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc7f8) {
            ctx->pc = 0x2DC808u;
            goto label_2dc808;
        }
    }
    ctx->pc = 0x2DC800u;
label_2dc800:
    // 0x2dc800: 0x8f919e74  lw          $s1, -0x618C($gp)
    ctx->pc = 0x2dc800u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942324)));
label_2dc804:
    // 0x2dc804: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2dc804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc808:
    // 0x2dc808: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_2dc80c:
    if (ctx->pc == 0x2DC80Cu) {
        ctx->pc = 0x2DC810u;
        goto label_2dc810;
    }
    ctx->pc = 0x2DC808u;
    {
        const bool branch_taken_0x2dc808 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc808) {
            ctx->pc = 0x2DC84Cu;
            goto label_2dc84c;
        }
    }
    ctx->pc = 0x2DC810u;
label_2dc810:
    // 0x2dc810: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2dc810u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dc814:
    // 0x2dc814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dc814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dc818:
    // 0x2dc818: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2dc818u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2dc81c:
    // 0x2dc81c: 0x320f809  jalr        $t9
label_2dc820:
    if (ctx->pc == 0x2DC820u) {
        ctx->pc = 0x2DC820u;
            // 0x2dc820: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2DC824u;
        goto label_2dc824;
    }
    ctx->pc = 0x2DC81Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC824u);
        ctx->pc = 0x2DC820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC81Cu;
            // 0x2dc820: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DC824u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DC824u; }
            if (ctx->pc != 0x2DC824u) { return; }
        }
        }
    }
    ctx->pc = 0x2DC824u;
label_2dc824:
    // 0x2dc824: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2dc824u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dc828:
    // 0x2dc828: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x2dc828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_2dc82c:
    // 0x2dc82c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2dc82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dc830:
    // 0x2dc830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dc830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dc834:
    // 0x2dc834: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2dc834u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2dc838:
    // 0x2dc838: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2dc838u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2dc83c:
    // 0x2dc83c: 0x320f809  jalr        $t9
label_2dc840:
    if (ctx->pc == 0x2DC840u) {
        ctx->pc = 0x2DC840u;
            // 0x2dc840: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2DC844u;
        goto label_2dc844;
    }
    ctx->pc = 0x2DC83Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC844u);
        ctx->pc = 0x2DC840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC83Cu;
            // 0x2dc840: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DC844u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DC844u; }
            if (ctx->pc != 0x2DC844u) { return; }
        }
        }
    }
    ctx->pc = 0x2DC844u;
label_2dc844:
    // 0x2dc844: 0xc050bf4  jal         func_142FD0
label_2dc848:
    if (ctx->pc == 0x2DC848u) {
        ctx->pc = 0x2DC848u;
            // 0x2dc848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC84Cu;
        goto label_2dc84c;
    }
    ctx->pc = 0x2DC844u;
    SET_GPR_U32(ctx, 31, 0x2DC84Cu);
    ctx->pc = 0x2DC848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC844u;
            // 0x2dc848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC84Cu; }
        if (ctx->pc != 0x2DC84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC84Cu; }
        if (ctx->pc != 0x2DC84Cu) { return; }
    }
    ctx->pc = 0x2DC84Cu;
label_2dc84c:
    // 0x2dc84c: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_2dc850:
    if (ctx->pc == 0x2DC850u) {
        ctx->pc = 0x2DC854u;
        goto label_2dc854;
    }
    ctx->pc = 0x2DC84Cu;
    {
        const bool branch_taken_0x2dc84c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc84c) {
            ctx->pc = 0x2DC898u;
            goto label_2dc898;
        }
    }
    ctx->pc = 0x2DC854u;
label_2dc854:
    // 0x2dc854: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2dc854u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dc858:
    // 0x2dc858: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dc858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dc85c:
    // 0x2dc85c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2dc85cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2dc860:
    // 0x2dc860: 0x320f809  jalr        $t9
label_2dc864:
    if (ctx->pc == 0x2DC864u) {
        ctx->pc = 0x2DC864u;
            // 0x2dc864: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2DC868u;
        goto label_2dc868;
    }
    ctx->pc = 0x2DC860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC868u);
        ctx->pc = 0x2DC864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC860u;
            // 0x2dc864: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DC868u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DC868u; }
            if (ctx->pc != 0x2DC868u) { return; }
        }
        }
    }
    ctx->pc = 0x2DC868u;
label_2dc868:
    // 0x2dc868: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2dc868u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dc86c:
    // 0x2dc86c: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x2dc86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_2dc870:
    // 0x2dc870: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2dc870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dc874:
    // 0x2dc874: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dc874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dc878:
    // 0x2dc878: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2dc878u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2dc87c:
    // 0x2dc87c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2dc87cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2dc880:
    // 0x2dc880: 0x320f809  jalr        $t9
label_2dc884:
    if (ctx->pc == 0x2DC884u) {
        ctx->pc = 0x2DC884u;
            // 0x2dc884: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2DC888u;
        goto label_2dc888;
    }
    ctx->pc = 0x2DC880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC888u);
        ctx->pc = 0x2DC884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC880u;
            // 0x2dc884: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DC888u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DC888u; }
            if (ctx->pc != 0x2DC888u) { return; }
        }
        }
    }
    ctx->pc = 0x2DC888u;
label_2dc888:
    // 0x2dc888: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2dc888u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dc88c:
    // 0x2dc88c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x2dc88cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_2dc890:
    // 0x2dc890: 0x320f809  jalr        $t9
label_2dc894:
    if (ctx->pc == 0x2DC894u) {
        ctx->pc = 0x2DC894u;
            // 0x2dc894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC898u;
        goto label_2dc898;
    }
    ctx->pc = 0x2DC890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC898u);
        ctx->pc = 0x2DC894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC890u;
            // 0x2dc894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DC898u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DC898u; }
            if (ctx->pc != 0x2DC898u) { return; }
        }
        }
    }
    ctx->pc = 0x2DC898u;
label_2dc898:
    // 0x2dc898: 0x12400033  beqz        $s2, . + 4 + (0x33 << 2)
label_2dc89c:
    if (ctx->pc == 0x2DC89Cu) {
        ctx->pc = 0x2DC8A0u;
        goto label_2dc8a0;
    }
    ctx->pc = 0x2DC898u;
    {
        const bool branch_taken_0x2dc898 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc898) {
            ctx->pc = 0x2DC968u;
            goto label_2dc968;
        }
    }
    ctx->pc = 0x2DC8A0u;
label_2dc8a0:
    // 0x2dc8a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dc8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2dc8a4:
    // 0x2dc8a4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2dc8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2dc8a8:
    // 0x2dc8a8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2dc8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2dc8ac:
    // 0x2dc8ac: 0xc06c4a0  jal         func_1B1280
label_2dc8b0:
    if (ctx->pc == 0x2DC8B0u) {
        ctx->pc = 0x2DC8B0u;
            // 0x2dc8b0: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2DC8B4u;
        goto label_2dc8b4;
    }
    ctx->pc = 0x2DC8ACu;
    SET_GPR_U32(ctx, 31, 0x2DC8B4u);
    ctx->pc = 0x2DC8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC8ACu;
            // 0x2dc8b0: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1280u;
    if (runtime->hasFunction(0x1B1280u)) {
        auto targetFn = runtime->lookupFunction(0x1B1280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC8B4u; }
        if (ctx->pc != 0x2DC8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGridPos__8CEditMapFPfPfPf_0x1b1280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC8B4u; }
        if (ctx->pc != 0x2DC8B4u) { return; }
    }
    ctx->pc = 0x2DC8B4u;
label_2dc8b4:
    // 0x2dc8b4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_2dc8b8:
    if (ctx->pc == 0x2DC8B8u) {
        ctx->pc = 0x2DC8BCu;
        goto label_2dc8bc;
    }
    ctx->pc = 0x2DC8B4u;
    {
        const bool branch_taken_0x2dc8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc8b4) {
            ctx->pc = 0x2DC968u;
            goto label_2dc968;
        }
    }
    ctx->pc = 0x2DC8BCu;
label_2dc8bc:
    // 0x2dc8bc: 0x12400028  beqz        $s2, . + 4 + (0x28 << 2)
label_2dc8c0:
    if (ctx->pc == 0x2DC8C0u) {
        ctx->pc = 0x2DC8C0u;
            // 0x2dc8c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC8C4u;
        goto label_2dc8c4;
    }
    ctx->pc = 0x2DC8BCu;
    {
        const bool branch_taken_0x2dc8bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC8BCu;
            // 0x2dc8c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc8bc) {
            ctx->pc = 0x2DC960u;
            goto label_2dc960;
        }
    }
    ctx->pc = 0x2DC8C4u;
label_2dc8c4:
    // 0x2dc8c4: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2dc8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dc8c8:
    // 0x2dc8c8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2dc8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2dc8cc:
    // 0x2dc8cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dc8ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dc8d0:
    // 0x2dc8d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dc8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dc8d4:
    // 0x2dc8d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2dc8d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2dc8d8:
    // 0x2dc8d8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2dc8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_2dc8dc:
    // 0x2dc8dc: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2dc8dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2dc8e0:
    // 0x2dc8e0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2dc8e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2dc8e4:
    // 0x2dc8e4: 0x320f809  jalr        $t9
label_2dc8e8:
    if (ctx->pc == 0x2DC8E8u) {
        ctx->pc = 0x2DC8E8u;
            // 0x2dc8e8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2DC8ECu;
        goto label_2dc8ec;
    }
    ctx->pc = 0x2DC8E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC8ECu);
        ctx->pc = 0x2DC8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC8E4u;
            // 0x2dc8e8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DC8ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DC8ECu; }
            if (ctx->pc != 0x2DC8ECu) { return; }
        }
        }
    }
    ctx->pc = 0x2DC8ECu;
label_2dc8ec:
    // 0x2dc8ec: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2dc8ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2dc8f0:
    // 0x2dc8f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2dc8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2dc8f4:
    // 0x2dc8f4: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x2dc8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2dc8f8:
    // 0x2dc8f8: 0xc7ae0088  lwc1        $f14, 0x88($sp)
    ctx->pc = 0x2dc8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2dc8fc:
    // 0x2dc8fc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2dc8fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2dc900:
    // 0x2dc900: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2dc900u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2dc904:
    // 0x2dc904: 0x320f809  jalr        $t9
label_2dc908:
    if (ctx->pc == 0x2DC908u) {
        ctx->pc = 0x2DC908u;
            // 0x2dc908: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC90Cu;
        goto label_2dc90c;
    }
    ctx->pc = 0x2DC904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC90Cu);
        ctx->pc = 0x2DC908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC904u;
            // 0x2dc908: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DC90Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DC90Cu; }
            if (ctx->pc != 0x2DC90Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2DC90Cu;
label_2dc90c:
    // 0x2dc90c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2dc90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_2dc910:
    // 0x2dc910: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x2dc910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2dc914:
    // 0x2dc914: 0x24427140  addiu       $v0, $v0, 0x7140
    ctx->pc = 0x2dc914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28992));
label_2dc918:
    // 0x2dc918: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2dc918u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2dc91c:
    // 0x2dc91c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2dc91cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_2dc920:
    // 0x2dc920: 0x8f829e2c  lw          $v0, -0x61D4($gp)
    ctx->pc = 0x2dc920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942252)));
label_2dc924:
    // 0x2dc924: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2dc928:
    if (ctx->pc == 0x2DC928u) {
        ctx->pc = 0x2DC92Cu;
        goto label_2dc92c;
    }
    ctx->pc = 0x2DC924u;
    {
        const bool branch_taken_0x2dc924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc924) {
            ctx->pc = 0x2DC944u;
            goto label_2dc944;
        }
    }
    ctx->pc = 0x2DC92Cu;
label_2dc92c:
    // 0x2dc92c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2dc92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_2dc930:
    // 0x2dc930: 0x3c03429c  lui         $v1, 0x429C
    ctx->pc = 0x2dc930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17052 << 16));
label_2dc934:
    // 0x2dc934: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x2dc934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_2dc938:
    // 0x2dc938: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2dc938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2dc93c:
    // 0x2dc93c: 0xafa30094  sw          $v1, 0x94($sp)
    ctx->pc = 0x2dc93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
label_2dc940:
    // 0x2dc940: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x2dc940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
label_2dc944:
    // 0x2dc944: 0x8e4300f4  lw          $v1, 0xF4($s2)
    ctx->pc = 0x2dc944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
label_2dc948:
    // 0x2dc948: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2dc94c:
    if (ctx->pc == 0x2DC94Cu) {
        ctx->pc = 0x2DC950u;
        goto label_2dc950;
    }
    ctx->pc = 0x2DC948u;
    {
        const bool branch_taken_0x2dc948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc948) {
            ctx->pc = 0x2DC95Cu;
            goto label_2dc95c;
        }
    }
    ctx->pc = 0x2DC950u;
label_2dc950:
    // 0x2dc950: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x2dc950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2dc954:
    // 0x2dc954: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2dc954u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2dc958:
    // 0x2dc958: 0x7c620070  sq          $v0, 0x70($v1)
    ctx->pc = 0x2dc958u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), GPR_VEC(ctx, 2));
label_2dc95c:
    // 0x2dc95c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dc95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dc960:
    // 0x2dc960: 0xc050bf4  jal         func_142FD0
label_2dc964:
    if (ctx->pc == 0x2DC964u) {
        ctx->pc = 0x2DC968u;
        goto label_2dc968;
    }
    ctx->pc = 0x2DC960u;
    SET_GPR_U32(ctx, 31, 0x2DC968u);
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC968u; }
        if (ctx->pc != 0x2DC968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC968u; }
        if (ctx->pc != 0x2DC968u) { return; }
    }
    ctx->pc = 0x2DC968u;
label_2dc968:
    // 0x2dc968: 0x8f838ac8  lw          $v1, -0x7538($gp)
    ctx->pc = 0x2dc968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
label_2dc96c:
    // 0x2dc96c: 0x106000be  beqz        $v1, . + 4 + (0xBE << 2)
label_2dc970:
    if (ctx->pc == 0x2DC970u) {
        ctx->pc = 0x2DC974u;
        goto label_2dc974;
    }
    ctx->pc = 0x2DC96Cu;
    {
        const bool branch_taken_0x2dc96c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc96c) {
            ctx->pc = 0x2DCC68u;
            goto label_2dcc68;
        }
    }
    ctx->pc = 0x2DC974u;
label_2dc974:
    // 0x2dc974: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x2dc974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_2dc978:
    // 0x2dc978: 0x8c238078  lw          $v1, -0x7F88($at)
    ctx->pc = 0x2dc978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934648)));
label_2dc97c:
    // 0x2dc97c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_2dc980:
    if (ctx->pc == 0x2DC980u) {
        ctx->pc = 0x2DC980u;
            // 0x2dc980: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2DC984u;
        goto label_2dc984;
    }
    ctx->pc = 0x2DC97Cu;
    {
        const bool branch_taken_0x2dc97c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC97Cu;
            // 0x2dc980: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc97c) {
            ctx->pc = 0x2DC990u;
            goto label_2dc990;
        }
    }
    ctx->pc = 0x2DC984u;
label_2dc984:
    // 0x2dc984: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_2dc988:
    if (ctx->pc == 0x2DC988u) {
        ctx->pc = 0x2DC988u;
            // 0x2dc988: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2DC98Cu;
        goto label_2dc98c;
    }
    ctx->pc = 0x2DC984u;
    {
        const bool branch_taken_0x2dc984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC984u;
            // 0x2dc988: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc984) {
            ctx->pc = 0x2DCC6Cu;
            goto label_2dcc6c;
        }
    }
    ctx->pc = 0x2DC98Cu;
label_2dc98c:
    // 0x2dc98c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2dc98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2dc990:
    // 0x2dc990: 0xc04d0e8  jal         func_1343A0
label_2dc994:
    if (ctx->pc == 0x2DC994u) {
        ctx->pc = 0x2DC998u;
        goto label_2dc998;
    }
    ctx->pc = 0x2DC990u;
    SET_GPR_U32(ctx, 31, 0x2DC998u);
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC998u; }
        if (ctx->pc != 0x2DC998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC998u; }
        if (ctx->pc != 0x2DC998u) { return; }
    }
    ctx->pc = 0x2DC998u;
label_2dc998:
    // 0x2dc998: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2dc998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2dc99c:
    // 0x2dc99c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dc99cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc9a0:
    // 0x2dc9a0: 0xc04d104  jal         func_134410
label_2dc9a4:
    if (ctx->pc == 0x2DC9A4u) {
        ctx->pc = 0x2DC9A4u;
            // 0x2dc9a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC9A8u;
        goto label_2dc9a8;
    }
    ctx->pc = 0x2DC9A0u;
    SET_GPR_U32(ctx, 31, 0x2DC9A8u);
    ctx->pc = 0x2DC9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC9A0u;
            // 0x2dc9a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC9A8u; }
        if (ctx->pc != 0x2DC9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC9A8u; }
        if (ctx->pc != 0x2DC9A8u) { return; }
    }
    ctx->pc = 0x2DC9A8u;
label_2dc9a8:
    // 0x2dc9a8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2dc9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2dc9ac:
    // 0x2dc9ac: 0xc04d3b0  jal         func_134EC0
label_2dc9b0:
    if (ctx->pc == 0x2DC9B0u) {
        ctx->pc = 0x2DC9B0u;
            // 0x2dc9b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DC9B4u;
        goto label_2dc9b4;
    }
    ctx->pc = 0x2DC9ACu;
    SET_GPR_U32(ctx, 31, 0x2DC9B4u);
    ctx->pc = 0x2DC9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC9ACu;
            // 0x2dc9b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC9B4u; }
        if (ctx->pc != 0x2DC9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC9B4u; }
        if (ctx->pc != 0x2DC9B4u) { return; }
    }
    ctx->pc = 0x2DC9B4u;
label_2dc9b4:
    // 0x2dc9b4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2dc9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2dc9b8:
    // 0x2dc9b8: 0xc04d3bc  jal         func_134EF0
label_2dc9bc:
    if (ctx->pc == 0x2DC9BCu) {
        ctx->pc = 0x2DC9BCu;
            // 0x2dc9bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC9C0u;
        goto label_2dc9c0;
    }
    ctx->pc = 0x2DC9B8u;
    SET_GPR_U32(ctx, 31, 0x2DC9C0u);
    ctx->pc = 0x2DC9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC9B8u;
            // 0x2dc9bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC9C0u; }
        if (ctx->pc != 0x2DC9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC9C0u; }
        if (ctx->pc != 0x2DC9C0u) { return; }
    }
    ctx->pc = 0x2DC9C0u;
label_2dc9c0:
    // 0x2dc9c0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2dc9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2dc9c4:
    // 0x2dc9c4: 0xc04d3e4  jal         func_134F90
label_2dc9c8:
    if (ctx->pc == 0x2DC9C8u) {
        ctx->pc = 0x2DC9C8u;
            // 0x2dc9c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DC9CCu;
        goto label_2dc9cc;
    }
    ctx->pc = 0x2DC9C4u;
    SET_GPR_U32(ctx, 31, 0x2DC9CCu);
    ctx->pc = 0x2DC9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC9C4u;
            // 0x2dc9c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC9CCu; }
        if (ctx->pc != 0x2DC9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC9CCu; }
        if (ctx->pc != 0x2DC9CCu) { return; }
    }
    ctx->pc = 0x2DC9CCu;
label_2dc9cc:
    // 0x2dc9cc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2dc9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2dc9d0:
    // 0x2dc9d0: 0xc04d128  jal         func_1344A0
label_2dc9d4:
    if (ctx->pc == 0x2DC9D4u) {
        ctx->pc = 0x2DC9D4u;
            // 0x2dc9d4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2DC9D8u;
        goto label_2dc9d8;
    }
    ctx->pc = 0x2DC9D0u;
    SET_GPR_U32(ctx, 31, 0x2DC9D8u);
    ctx->pc = 0x2DC9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC9D0u;
            // 0x2dc9d4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC9D8u; }
        if (ctx->pc != 0x2DC9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC9D8u; }
        if (ctx->pc != 0x2DC9D8u) { return; }
    }
    ctx->pc = 0x2DC9D8u;
label_2dc9d8:
    // 0x2dc9d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2dc9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dc9dc:
    // 0x2dc9dc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2dc9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2dc9e0:
    // 0x2dc9e0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2dc9e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2dc9e4:
    // 0x2dc9e4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2dc9e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2dc9e8:
    // 0x2dc9e8: 0xc04d320  jal         func_134C80
label_2dc9ec:
    if (ctx->pc == 0x2DC9ECu) {
        ctx->pc = 0x2DC9ECu;
            // 0x2dc9ec: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x2DC9F0u;
        goto label_2dc9f0;
    }
    ctx->pc = 0x2DC9E8u;
    SET_GPR_U32(ctx, 31, 0x2DC9F0u);
    ctx->pc = 0x2DC9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC9E8u;
            // 0x2dc9ec: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC9F0u; }
        if (ctx->pc != 0x2DC9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC9F0u; }
        if (ctx->pc != 0x2DC9F0u) { return; }
    }
    ctx->pc = 0x2DC9F0u;
label_2dc9f0:
    // 0x2dc9f0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2dc9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2dc9f4:
    // 0x2dc9f4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2dc9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2dc9f8:
    // 0x2dc9f8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2dc9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2dc9fc:
    // 0x2dc9fc: 0xc04d2c8  jal         func_134B20
label_2dca00:
    if (ctx->pc == 0x2DCA00u) {
        ctx->pc = 0x2DCA00u;
            // 0x2dca00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DCA04u;
        goto label_2dca04;
    }
    ctx->pc = 0x2DC9FCu;
    SET_GPR_U32(ctx, 31, 0x2DCA04u);
    ctx->pc = 0x2DCA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC9FCu;
            // 0x2dca00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCA04u; }
        if (ctx->pc != 0x2DCA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCA04u; }
        if (ctx->pc != 0x2DCA04u) { return; }
    }
    ctx->pc = 0x2DCA04u;
label_2dca04:
    // 0x2dca04: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2dca04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2dca08:
    // 0x2dca08: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x2dca08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
label_2dca0c:
    // 0x2dca0c: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x2dca0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_2dca10:
    // 0x2dca10: 0xc04d2c8  jal         func_134B20
label_2dca14:
    if (ctx->pc == 0x2DCA14u) {
        ctx->pc = 0x2DCA14u;
            // 0x2dca14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DCA18u;
        goto label_2dca18;
    }
    ctx->pc = 0x2DCA10u;
    SET_GPR_U32(ctx, 31, 0x2DCA18u);
    ctx->pc = 0x2DCA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCA10u;
            // 0x2dca14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCA18u; }
        if (ctx->pc != 0x2DCA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCA18u; }
        if (ctx->pc != 0x2DCA18u) { return; }
    }
    ctx->pc = 0x2DCA18u;
label_2dca18:
    // 0x2dca18: 0xc04d1a4  jal         func_134690
label_2dca1c:
    if (ctx->pc == 0x2DCA1Cu) {
        ctx->pc = 0x2DCA1Cu;
            // 0x2dca1c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2DCA20u;
        goto label_2dca20;
    }
    ctx->pc = 0x2DCA18u;
    SET_GPR_U32(ctx, 31, 0x2DCA20u);
    ctx->pc = 0x2DCA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCA18u;
            // 0x2dca1c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCA20u; }
        if (ctx->pc != 0x2DCA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCA20u; }
        if (ctx->pc != 0x2DCA20u) { return; }
    }
    ctx->pc = 0x2DCA20u;
label_2dca20:
    // 0x2dca20: 0x83829ea8  lb          $v0, -0x6158($gp)
    ctx->pc = 0x2dca20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942376)));
label_2dca24:
    // 0x2dca24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2dca28:
    if (ctx->pc == 0x2DCA28u) {
        ctx->pc = 0x2DCA28u;
            // 0x2dca28: 0x27b001b0  addiu       $s0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x2DCA2Cu;
        goto label_2dca2c;
    }
    ctx->pc = 0x2DCA24u;
    {
        const bool branch_taken_0x2dca24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DCA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCA24u;
            // 0x2dca28: 0x27b001b0  addiu       $s0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dca24) {
            ctx->pc = 0x2DCA38u;
            goto label_2dca38;
        }
    }
    ctx->pc = 0x2DCA2Cu;
label_2dca2c:
    // 0x2dca2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dca30:
    // 0x2dca30: 0xaf809ea4  sw          $zero, -0x615C($gp)
    ctx->pc = 0x2dca30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942372), GPR_U32(ctx, 0));
label_2dca34:
    // 0x2dca34: 0xa3829ea8  sb          $v0, -0x6158($gp)
    ctx->pc = 0x2dca34u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294942376), (uint8_t)GPR_U32(ctx, 2));
label_2dca38:
    // 0x2dca38: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2dca38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2dca3c:
    // 0x2dca3c: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x2dca3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2dca40:
    // 0x2dca40: 0xc052d0c  jal         func_14B430
label_2dca44:
    if (ctx->pc == 0x2DCA44u) {
        ctx->pc = 0x2DCA44u;
            // 0x2dca44: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x2DCA48u;
        goto label_2dca48;
    }
    ctx->pc = 0x2DCA40u;
    SET_GPR_U32(ctx, 31, 0x2DCA48u);
    ctx->pc = 0x2DCA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCA40u;
            // 0x2dca44: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCA48u; }
        if (ctx->pc != 0x2DCA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCA48u; }
        if (ctx->pc != 0x2DCA48u) { return; }
    }
    ctx->pc = 0x2DCA48u;
label_2dca48:
    // 0x2dca48: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2dca4c:
    if (ctx->pc == 0x2DCA4Cu) {
        ctx->pc = 0x2DCA50u;
        goto label_2dca50;
    }
    ctx->pc = 0x2DCA48u;
    {
        const bool branch_taken_0x2dca48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dca48) {
            ctx->pc = 0x2DCA98u;
            goto label_2dca98;
        }
    }
    ctx->pc = 0x2DCA50u;
label_2dca50:
    // 0x2dca50: 0x8f829ea4  lw          $v0, -0x615C($gp)
    ctx->pc = 0x2dca50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942372)));
label_2dca54:
    // 0x2dca54: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_2dca58:
    if (ctx->pc == 0x2DCA58u) {
        ctx->pc = 0x2DCA5Cu;
        goto label_2dca5c;
    }
    ctx->pc = 0x2DCA54u;
    {
        const bool branch_taken_0x2dca54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dca54) {
            ctx->pc = 0x2DCA94u;
            goto label_2dca94;
        }
    }
    ctx->pc = 0x2DCA5Cu;
label_2dca5c:
    // 0x2dca5c: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x2dca5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
label_2dca60:
    // 0x2dca60: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x2dca60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_2dca64:
    // 0x2dca64: 0x246388f0  addiu       $v1, $v1, -0x7710
    ctx->pc = 0x2dca64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936816));
label_2dca68:
    // 0x2dca68: 0x24428ae0  addiu       $v0, $v0, -0x7520
    ctx->pc = 0x2dca68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937312));
label_2dca6c:
    // 0x2dca6c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2dca6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2dca70:
    // 0x2dca70: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dca70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dca74:
    // 0x2dca74: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2dca74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2dca78:
    // 0x2dca78: 0xc7809e64  lwc1        $f0, -0x619C($gp)
    ctx->pc = 0x2dca78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dca7c:
    // 0x2dca7c: 0x8f829ea4  lw          $v0, -0x615C($gp)
    ctx->pc = 0x2dca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942372)));
label_2dca80:
    // 0x2dca80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2dca80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2dca84:
    // 0x2dca84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dca84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2dca88:
    // 0x2dca88: 0xaf829ea4  sw          $v0, -0x615C($gp)
    ctx->pc = 0x2dca88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942372), GPR_U32(ctx, 2));
label_2dca8c:
    // 0x2dca8c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2dca90:
    if (ctx->pc == 0x2DCA90u) {
        ctx->pc = 0x2DCA90u;
            // 0x2dca90: 0xe4208aec  swc1        $f0, -0x7514($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937324), bits); }
        ctx->pc = 0x2DCA94u;
        goto label_2dca94;
    }
    ctx->pc = 0x2DCA8Cu;
    {
        const bool branch_taken_0x2dca8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCA8Cu;
            // 0x2dca90: 0xe4208aec  swc1        $f0, -0x7514($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937324), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dca8c) {
            ctx->pc = 0x2DCA98u;
            goto label_2dca98;
        }
    }
    ctx->pc = 0x2DCA94u;
label_2dca94:
    // 0x2dca94: 0xaf809ea4  sw          $zero, -0x615C($gp)
    ctx->pc = 0x2dca94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942372), GPR_U32(ctx, 0));
label_2dca98:
    // 0x2dca98: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2dca98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_2dca9c:
    // 0x2dca9c: 0x8f829ea4  lw          $v0, -0x615C($gp)
    ctx->pc = 0x2dca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942372)));
label_2dcaa0:
    // 0x2dcaa0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_2dcaa4:
    if (ctx->pc == 0x2DCAA4u) {
        ctx->pc = 0x2DCAA8u;
        goto label_2dcaa8;
    }
    ctx->pc = 0x2DCAA0u;
    {
        const bool branch_taken_0x2dcaa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dcaa0) {
            ctx->pc = 0x2DCAF8u;
            goto label_2dcaf8;
        }
    }
    ctx->pc = 0x2DCAA8u;
label_2dcaa8:
    // 0x2dcaa8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dcaa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dcaac:
    // 0x2dcaac: 0xc0a24f0  jal         func_2893C0
label_2dcab0:
    if (ctx->pc == 0x2DCAB0u) {
        ctx->pc = 0x2DCAB0u;
            // 0x2dcab0: 0xc42c88f0  lwc1        $f12, -0x7710($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2DCAB4u;
        goto label_2dcab4;
    }
    ctx->pc = 0x2DCAACu;
    SET_GPR_U32(ctx, 31, 0x2DCAB4u);
    ctx->pc = 0x2DCAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCAACu;
            // 0x2dcab0: 0xc42c88f0  lwc1        $f12, -0x7710($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCAB4u; }
        if (ctx->pc != 0x2DCAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCAB4u; }
        if (ctx->pc != 0x2DCAB4u) { return; }
    }
    ctx->pc = 0x2DCAB4u;
label_2dcab4:
    // 0x2dcab4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dcab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dcab8:
    // 0x2dcab8: 0xc42c88f4  lwc1        $f12, -0x770C($at)
    ctx->pc = 0x2dcab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2dcabc:
    // 0x2dcabc: 0xc0a24f0  jal         func_2893C0
label_2dcac0:
    if (ctx->pc == 0x2DCAC0u) {
        ctx->pc = 0x2DCAC0u;
            // 0x2dcac0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DCAC4u;
        goto label_2dcac4;
    }
    ctx->pc = 0x2DCABCu;
    SET_GPR_U32(ctx, 31, 0x2DCAC4u);
    ctx->pc = 0x2DCAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCABCu;
            // 0x2dcac0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCAC4u; }
        if (ctx->pc != 0x2DCAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCAC4u; }
        if (ctx->pc != 0x2DCAC4u) { return; }
    }
    ctx->pc = 0x2DCAC4u;
label_2dcac4:
    // 0x2dcac4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dcac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dcac8:
    // 0x2dcac8: 0xc42c88f8  lwc1        $f12, -0x7708($at)
    ctx->pc = 0x2dcac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2dcacc:
    // 0x2dcacc: 0xc0a24f0  jal         func_2893C0
label_2dcad0:
    if (ctx->pc == 0x2DCAD0u) {
        ctx->pc = 0x2DCAD0u;
            // 0x2dcad0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DCAD4u;
        goto label_2dcad4;
    }
    ctx->pc = 0x2DCACCu;
    SET_GPR_U32(ctx, 31, 0x2DCAD4u);
    ctx->pc = 0x2DCAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCACCu;
            // 0x2dcad0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCAD4u; }
        if (ctx->pc != 0x2DCAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCAD4u; }
        if (ctx->pc != 0x2DCAD4u) { return; }
    }
    ctx->pc = 0x2DCAD4u;
label_2dcad4:
    // 0x2dcad4: 0x8f899e64  lw          $t1, -0x619C($gp)
    ctx->pc = 0x2dcad4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942308)));
label_2dcad8:
    // 0x2dcad8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2dcad8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2dcadc:
    // 0x2dcadc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2dcadcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dcae0:
    // 0x2dcae0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2dcae0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dcae4:
    // 0x2dcae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dcae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dcae8:
    // 0x2dcae8: 0x24a50b50  addiu       $a1, $a1, 0xB50
    ctx->pc = 0x2dcae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2896));
label_2dcaec:
    // 0x2dcaec: 0xc04a234  jal         func_1288D0
label_2dcaf0:
    if (ctx->pc == 0x2DCAF0u) {
        ctx->pc = 0x2DCAF0u;
            // 0x2dcaf0: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DCAF4u;
        goto label_2dcaf4;
    }
    ctx->pc = 0x2DCAECu;
    SET_GPR_U32(ctx, 31, 0x2DCAF4u);
    ctx->pc = 0x2DCAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCAECu;
            // 0x2dcaf0: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCAF4u; }
        if (ctx->pc != 0x2DCAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCAF4u; }
        if (ctx->pc != 0x2DCAF4u) { return; }
    }
    ctx->pc = 0x2DCAF4u;
label_2dcaf4:
    // 0x2dcaf4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2dcaf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2dcaf8:
    // 0x2dcaf8: 0x8f839ea4  lw          $v1, -0x615C($gp)
    ctx->pc = 0x2dcaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942372)));
label_2dcafc:
    // 0x2dcafc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dcafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dcb00:
    // 0x2dcb00: 0x14620052  bne         $v1, $v0, . + 4 + (0x52 << 2)
label_2dcb04:
    if (ctx->pc == 0x2DCB04u) {
        ctx->pc = 0x2DCB08u;
        goto label_2dcb08;
    }
    ctx->pc = 0x2DCB00u;
    {
        const bool branch_taken_0x2dcb00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2dcb00) {
            ctx->pc = 0x2DCC4Cu;
            goto label_2dcc4c;
        }
    }
    ctx->pc = 0x2DCB08u;
label_2dcb08:
    // 0x2dcb08: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dcb08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dcb0c:
    // 0x2dcb0c: 0xc0a24f0  jal         func_2893C0
label_2dcb10:
    if (ctx->pc == 0x2DCB10u) {
        ctx->pc = 0x2DCB10u;
            // 0x2dcb10: 0xc42c8ae0  lwc1        $f12, -0x7520($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2DCB14u;
        goto label_2dcb14;
    }
    ctx->pc = 0x2DCB0Cu;
    SET_GPR_U32(ctx, 31, 0x2DCB14u);
    ctx->pc = 0x2DCB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCB0Cu;
            // 0x2dcb10: 0xc42c8ae0  lwc1        $f12, -0x7520($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCB14u; }
        if (ctx->pc != 0x2DCB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCB14u; }
        if (ctx->pc != 0x2DCB14u) { return; }
    }
    ctx->pc = 0x2DCB14u;
label_2dcb14:
    // 0x2dcb14: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dcb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dcb18:
    // 0x2dcb18: 0xc42c8ae4  lwc1        $f12, -0x751C($at)
    ctx->pc = 0x2dcb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2dcb1c:
    // 0x2dcb1c: 0xc0a24f0  jal         func_2893C0
label_2dcb20:
    if (ctx->pc == 0x2DCB20u) {
        ctx->pc = 0x2DCB20u;
            // 0x2dcb20: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DCB24u;
        goto label_2dcb24;
    }
    ctx->pc = 0x2DCB1Cu;
    SET_GPR_U32(ctx, 31, 0x2DCB24u);
    ctx->pc = 0x2DCB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCB1Cu;
            // 0x2dcb20: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCB24u; }
        if (ctx->pc != 0x2DCB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCB24u; }
        if (ctx->pc != 0x2DCB24u) { return; }
    }
    ctx->pc = 0x2DCB24u;
label_2dcb24:
    // 0x2dcb24: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dcb24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dcb28:
    // 0x2dcb28: 0xc42c8ae8  lwc1        $f12, -0x7518($at)
    ctx->pc = 0x2dcb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2dcb2c:
    // 0x2dcb2c: 0xc0a24f0  jal         func_2893C0
label_2dcb30:
    if (ctx->pc == 0x2DCB30u) {
        ctx->pc = 0x2DCB30u;
            // 0x2dcb30: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DCB34u;
        goto label_2dcb34;
    }
    ctx->pc = 0x2DCB2Cu;
    SET_GPR_U32(ctx, 31, 0x2DCB34u);
    ctx->pc = 0x2DCB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCB2Cu;
            // 0x2dcb30: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCB34u; }
        if (ctx->pc != 0x2DCB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCB34u; }
        if (ctx->pc != 0x2DCB34u) { return; }
    }
    ctx->pc = 0x2DCB34u;
label_2dcb34:
    // 0x2dcb34: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dcb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dcb38:
    // 0x2dcb38: 0xc42c8aec  lwc1        $f12, -0x7514($at)
    ctx->pc = 0x2dcb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2dcb3c:
    // 0x2dcb3c: 0xc0a248c  jal         func_289230
label_2dcb40:
    if (ctx->pc == 0x2DCB40u) {
        ctx->pc = 0x2DCB40u;
            // 0x2dcb40: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DCB44u;
        goto label_2dcb44;
    }
    ctx->pc = 0x2DCB3Cu;
    SET_GPR_U32(ctx, 31, 0x2DCB44u);
    ctx->pc = 0x2DCB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCB3Cu;
            // 0x2dcb40: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCB44u; }
        if (ctx->pc != 0x2DCB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCB44u; }
        if (ctx->pc != 0x2DCB44u) { return; }
    }
    ctx->pc = 0x2DCB44u;
label_2dcb44:
    // 0x2dcb44: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2dcb44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2dcb48:
    // 0x2dcb48: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2dcb48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dcb4c:
    // 0x2dcb4c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2dcb4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dcb50:
    // 0x2dcb50: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2dcb50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dcb54:
    // 0x2dcb54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dcb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dcb58:
    // 0x2dcb58: 0x24a50b50  addiu       $a1, $a1, 0xB50
    ctx->pc = 0x2dcb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2896));
label_2dcb5c:
    // 0x2dcb5c: 0xc04a234  jal         func_1288D0
label_2dcb60:
    if (ctx->pc == 0x2DCB60u) {
        ctx->pc = 0x2DCB60u;
            // 0x2dcb60: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DCB64u;
        goto label_2dcb64;
    }
    ctx->pc = 0x2DCB5Cu;
    SET_GPR_U32(ctx, 31, 0x2DCB64u);
    ctx->pc = 0x2DCB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCB5Cu;
            // 0x2dcb60: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCB64u; }
        if (ctx->pc != 0x2DCB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCB64u; }
        if (ctx->pc != 0x2DCB64u) { return; }
    }
    ctx->pc = 0x2DCB64u;
label_2dcb64:
    // 0x2dcb64: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dcb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dcb68:
    // 0x2dcb68: 0xc42c88f0  lwc1        $f12, -0x7710($at)
    ctx->pc = 0x2dcb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2dcb6c:
    // 0x2dcb6c: 0xc0a24f0  jal         func_2893C0
label_2dcb70:
    if (ctx->pc == 0x2DCB70u) {
        ctx->pc = 0x2DCB70u;
            // 0x2dcb70: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->pc = 0x2DCB74u;
        goto label_2dcb74;
    }
    ctx->pc = 0x2DCB6Cu;
    SET_GPR_U32(ctx, 31, 0x2DCB74u);
    ctx->pc = 0x2DCB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCB6Cu;
            // 0x2dcb70: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCB74u; }
        if (ctx->pc != 0x2DCB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCB74u; }
        if (ctx->pc != 0x2DCB74u) { return; }
    }
    ctx->pc = 0x2DCB74u;
label_2dcb74:
    // 0x2dcb74: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dcb74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dcb78:
    // 0x2dcb78: 0xc42c88f4  lwc1        $f12, -0x770C($at)
    ctx->pc = 0x2dcb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2dcb7c:
    // 0x2dcb7c: 0xc0a24f0  jal         func_2893C0
label_2dcb80:
    if (ctx->pc == 0x2DCB80u) {
        ctx->pc = 0x2DCB80u;
            // 0x2dcb80: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DCB84u;
        goto label_2dcb84;
    }
    ctx->pc = 0x2DCB7Cu;
    SET_GPR_U32(ctx, 31, 0x2DCB84u);
    ctx->pc = 0x2DCB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCB7Cu;
            // 0x2dcb80: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCB84u; }
        if (ctx->pc != 0x2DCB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCB84u; }
        if (ctx->pc != 0x2DCB84u) { return; }
    }
    ctx->pc = 0x2DCB84u;
label_2dcb84:
    // 0x2dcb84: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dcb84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dcb88:
    // 0x2dcb88: 0xc42c88f8  lwc1        $f12, -0x7708($at)
    ctx->pc = 0x2dcb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2dcb8c:
    // 0x2dcb8c: 0xc0a24f0  jal         func_2893C0
label_2dcb90:
    if (ctx->pc == 0x2DCB90u) {
        ctx->pc = 0x2DCB90u;
            // 0x2dcb90: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DCB94u;
        goto label_2dcb94;
    }
    ctx->pc = 0x2DCB8Cu;
    SET_GPR_U32(ctx, 31, 0x2DCB94u);
    ctx->pc = 0x2DCB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCB8Cu;
            // 0x2dcb90: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCB94u; }
        if (ctx->pc != 0x2DCB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCB94u; }
        if (ctx->pc != 0x2DCB94u) { return; }
    }
    ctx->pc = 0x2DCB94u;
label_2dcb94:
    // 0x2dcb94: 0x8f899e64  lw          $t1, -0x619C($gp)
    ctx->pc = 0x2dcb94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942308)));
label_2dcb98:
    // 0x2dcb98: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2dcb98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2dcb9c:
    // 0x2dcb9c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2dcb9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dcba0:
    // 0x2dcba0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2dcba0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dcba4:
    // 0x2dcba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dcba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dcba8:
    // 0x2dcba8: 0x24a50b50  addiu       $a1, $a1, 0xB50
    ctx->pc = 0x2dcba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2896));
label_2dcbac:
    // 0x2dcbac: 0xc04a234  jal         func_1288D0
label_2dcbb0:
    if (ctx->pc == 0x2DCBB0u) {
        ctx->pc = 0x2DCBB0u;
            // 0x2dcbb0: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DCBB4u;
        goto label_2dcbb4;
    }
    ctx->pc = 0x2DCBACu;
    SET_GPR_U32(ctx, 31, 0x2DCBB4u);
    ctx->pc = 0x2DCBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCBACu;
            // 0x2dcbb0: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCBB4u; }
        if (ctx->pc != 0x2DCBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCBB4u; }
        if (ctx->pc != 0x2DCBB4u) { return; }
    }
    ctx->pc = 0x2DCBB4u;
label_2dcbb4:
    // 0x2dcbb4: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2dcbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_2dcbb8:
    // 0x2dcbb8: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2dcbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_2dcbbc:
    // 0x2dcbbc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2dcbbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2dcbc0:
    // 0x2dcbc0: 0x24848ae0  addiu       $a0, $a0, -0x7520
    ctx->pc = 0x2dcbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937312));
label_2dcbc4:
    // 0x2dcbc4: 0xc04c018  jal         func_130060
label_2dcbc8:
    if (ctx->pc == 0x2DCBC8u) {
        ctx->pc = 0x2DCBC8u;
            // 0x2dcbc8: 0x24a588f0  addiu       $a1, $a1, -0x7710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936816));
        ctx->pc = 0x2DCBCCu;
        goto label_2dcbcc;
    }
    ctx->pc = 0x2DCBC4u;
    SET_GPR_U32(ctx, 31, 0x2DCBCCu);
    ctx->pc = 0x2DCBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCBC4u;
            // 0x2dcbc8: 0x24a588f0  addiu       $a1, $a1, -0x7710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCBCCu; }
        if (ctx->pc != 0x2DCBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCBCCu; }
        if (ctx->pc != 0x2DCBCCu) { return; }
    }
    ctx->pc = 0x2DCBCCu;
label_2dcbcc:
    // 0x2dcbcc: 0xc0a24f0  jal         func_2893C0
label_2dcbd0:
    if (ctx->pc == 0x2DCBD0u) {
        ctx->pc = 0x2DCBD0u;
            // 0x2dcbd0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2DCBD4u;
        goto label_2dcbd4;
    }
    ctx->pc = 0x2DCBCCu;
    SET_GPR_U32(ctx, 31, 0x2DCBD4u);
    ctx->pc = 0x2DCBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCBCCu;
            // 0x2dcbd0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCBD4u; }
        if (ctx->pc != 0x2DCBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCBD4u; }
        if (ctx->pc != 0x2DCBD4u) { return; }
    }
    ctx->pc = 0x2DCBD4u;
label_2dcbd4:
    // 0x2dcbd4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2dcbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2dcbd8:
    // 0x2dcbd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dcbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dcbdc:
    // 0x2dcbdc: 0x24a50b68  addiu       $a1, $a1, 0xB68
    ctx->pc = 0x2dcbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2920));
label_2dcbe0:
    // 0x2dcbe0: 0xc04a234  jal         func_1288D0
label_2dcbe4:
    if (ctx->pc == 0x2DCBE4u) {
        ctx->pc = 0x2DCBE4u;
            // 0x2dcbe4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DCBE8u;
        goto label_2dcbe8;
    }
    ctx->pc = 0x2DCBE0u;
    SET_GPR_U32(ctx, 31, 0x2DCBE8u);
    ctx->pc = 0x2DCBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCBE0u;
            // 0x2dcbe4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCBE8u; }
        if (ctx->pc != 0x2DCBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCBE8u; }
        if (ctx->pc != 0x2DCBE8u) { return; }
    }
    ctx->pc = 0x2DCBE8u;
label_2dcbe8:
    // 0x2dcbe8: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2dcbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_2dcbec:
    // 0x2dcbec: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2dcbecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_2dcbf0:
    // 0x2dcbf0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2dcbf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2dcbf4:
    // 0x2dcbf4: 0x24848ae0  addiu       $a0, $a0, -0x7520
    ctx->pc = 0x2dcbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937312));
label_2dcbf8:
    // 0x2dcbf8: 0xc04c028  jal         func_1300A0
label_2dcbfc:
    if (ctx->pc == 0x2DCBFCu) {
        ctx->pc = 0x2DCBFCu;
            // 0x2dcbfc: 0x24a588f0  addiu       $a1, $a1, -0x7710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936816));
        ctx->pc = 0x2DCC00u;
        goto label_2dcc00;
    }
    ctx->pc = 0x2DCBF8u;
    SET_GPR_U32(ctx, 31, 0x2DCC00u);
    ctx->pc = 0x2DCBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCBF8u;
            // 0x2dcbfc: 0x24a588f0  addiu       $a1, $a1, -0x7710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300A0u;
    if (runtime->hasFunction(0x1300A0u)) {
        auto targetFn = runtime->lookupFunction(0x1300A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCC00u; }
        if (ctx->pc != 0x2DCC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPfPf_0x1300a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCC00u; }
        if (ctx->pc != 0x2DCC00u) { return; }
    }
    ctx->pc = 0x2DCC00u;
label_2dcc00:
    // 0x2dcc00: 0xc0a24f0  jal         func_2893C0
label_2dcc04:
    if (ctx->pc == 0x2DCC04u) {
        ctx->pc = 0x2DCC04u;
            // 0x2dcc04: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2DCC08u;
        goto label_2dcc08;
    }
    ctx->pc = 0x2DCC00u;
    SET_GPR_U32(ctx, 31, 0x2DCC08u);
    ctx->pc = 0x2DCC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCC00u;
            // 0x2dcc04: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCC08u; }
        if (ctx->pc != 0x2DCC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCC08u; }
        if (ctx->pc != 0x2DCC08u) { return; }
    }
    ctx->pc = 0x2DCC08u;
label_2dcc08:
    // 0x2dcc08: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2dcc08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2dcc0c:
    // 0x2dcc0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dcc0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dcc10:
    // 0x2dcc10: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2dcc10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dcc14:
    // 0x2dcc14: 0xc04a234  jal         func_1288D0
label_2dcc18:
    if (ctx->pc == 0x2DCC18u) {
        ctx->pc = 0x2DCC18u;
            // 0x2dcc18: 0x24a50b78  addiu       $a1, $a1, 0xB78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2936));
        ctx->pc = 0x2DCC1Cu;
        goto label_2dcc1c;
    }
    ctx->pc = 0x2DCC14u;
    SET_GPR_U32(ctx, 31, 0x2DCC1Cu);
    ctx->pc = 0x2DCC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCC14u;
            // 0x2dcc18: 0x24a50b78  addiu       $a1, $a1, 0xB78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCC1Cu; }
        if (ctx->pc != 0x2DCC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCC1Cu; }
        if (ctx->pc != 0x2DCC1Cu) { return; }
    }
    ctx->pc = 0x2DCC1Cu;
label_2dcc1c:
    // 0x2dcc1c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dcc1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dcc20:
    // 0x2dcc20: 0x8c3089e0  lw          $s0, -0x7620($at)
    ctx->pc = 0x2dcc20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937056)));
label_2dcc24:
    // 0x2dcc24: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2dcc28:
    if (ctx->pc == 0x2DCC28u) {
        ctx->pc = 0x2DCC2Cu;
        goto label_2dcc2c;
    }
    ctx->pc = 0x2DCC24u;
    {
        const bool branch_taken_0x2dcc24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcc24) {
            ctx->pc = 0x2DCC4Cu;
            goto label_2dcc4c;
        }
    }
    ctx->pc = 0x2DCC2Cu;
label_2dcc2c:
    // 0x2dcc2c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2dcc2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dcc30:
    // 0x2dcc30: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2dcc30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_2dcc34:
    // 0x2dcc34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dcc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dcc38:
    // 0x2dcc38: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2dcc38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2dcc3c:
    // 0x2dcc3c: 0x320f809  jalr        $t9
label_2dcc40:
    if (ctx->pc == 0x2DCC40u) {
        ctx->pc = 0x2DCC40u;
            // 0x2dcc40: 0x24a58ae0  addiu       $a1, $a1, -0x7520 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937312));
        ctx->pc = 0x2DCC44u;
        goto label_2dcc44;
    }
    ctx->pc = 0x2DCC3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DCC44u);
        ctx->pc = 0x2DCC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCC3Cu;
            // 0x2dcc40: 0x24a58ae0  addiu       $a1, $a1, -0x7520 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937312));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DCC44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DCC44u; }
            if (ctx->pc != 0x2DCC44u) { return; }
        }
        }
    }
    ctx->pc = 0x2DCC44u;
label_2dcc44:
    // 0x2dcc44: 0xc050bf4  jal         func_142FD0
label_2dcc48:
    if (ctx->pc == 0x2DCC48u) {
        ctx->pc = 0x2DCC48u;
            // 0x2dcc48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DCC4Cu;
        goto label_2dcc4c;
    }
    ctx->pc = 0x2DCC44u;
    SET_GPR_U32(ctx, 31, 0x2DCC4Cu);
    ctx->pc = 0x2DCC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCC44u;
            // 0x2dcc48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCC4Cu; }
        if (ctx->pc != 0x2DCC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCC4Cu; }
        if (ctx->pc != 0x2DCC4Cu) { return; }
    }
    ctx->pc = 0x2DCC4Cu;
label_2dcc4c:
    // 0x2dcc4c: 0xc064210  jal         func_190840
label_2dcc50:
    if (ctx->pc == 0x2DCC50u) {
        ctx->pc = 0x2DCC54u;
        goto label_2dcc54;
    }
    ctx->pc = 0x2DCC4Cu;
    SET_GPR_U32(ctx, 31, 0x2DCC54u);
    ctx->pc = 0x190840u;
    if (runtime->hasFunction(0x190840u)) {
        auto targetFn = runtime->lookupFunction(0x190840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCC54u; }
        if (ctx->pc != 0x2DCC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDebugFont__Fv_0x190840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCC54u; }
        if (ctx->pc != 0x2DCC54u) { return; }
    }
    ctx->pc = 0x2DCC54u;
label_2dcc54:
    // 0x2dcc54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dcc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dcc58:
    // 0x2dcc58: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x2dcc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2dcc5c:
    // 0x2dcc5c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2dcc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2dcc60:
    // 0x2dcc60: 0xc0b5688  jal         func_2D5A20
label_2dcc64:
    if (ctx->pc == 0x2DCC64u) {
        ctx->pc = 0x2DCC64u;
            // 0x2dcc64: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2DCC68u;
        goto label_2dcc68;
    }
    ctx->pc = 0x2DCC60u;
    SET_GPR_U32(ctx, 31, 0x2DCC68u);
    ctx->pc = 0x2DCC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCC60u;
            // 0x2dcc64: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCC68u; }
        if (ctx->pc != 0x2DCC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCC68u; }
        if (ctx->pc != 0x2DCC68u) { return; }
    }
    ctx->pc = 0x2DCC68u;
label_2dcc68:
    // 0x2dcc68: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2dcc68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2dcc6c:
    // 0x2dcc6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2dcc6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2dcc70:
    // 0x2dcc70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2dcc70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2dcc74:
    // 0x2dcc74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dcc74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dcc78:
    // 0x2dcc78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dcc78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dcc7c:
    // 0x2dcc7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dcc7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2dcc80:
    // 0x2dcc80: 0x3e00008  jr          $ra
label_2dcc84:
    if (ctx->pc == 0x2DCC84u) {
        ctx->pc = 0x2DCC84u;
            // 0x2dcc84: 0x27bd02b0  addiu       $sp, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->pc = 0x2DCC88u;
        goto label_fallthrough_0x2dcc80;
    }
    ctx->pc = 0x2DCC80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCC80u;
            // 0x2dcc84: 0x27bd02b0  addiu       $sp, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2dcc80:
    ctx->pc = 0x2DCC88u;
}
