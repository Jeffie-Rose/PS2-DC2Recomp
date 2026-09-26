#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetupMainUnit__FP1P9mgCMemoryP9mgCMemoryiP6CSceneP16CUserDataManagerii
// Address: 0x1e8f30 - 0x1e9b58
void SetupMainUnit__FP1P9mgCMemoryP9mgCMemoryiP6CSceneP16CUserDataManagerii_0x1e8f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetupMainUnit__FP1P9mgCMemoryP9mgCMemoryiP6CSceneP16CUserDataManagerii_0x1e8f30");
#endif

    switch (ctx->pc) {
        case 0x1e8f30u: goto label_1e8f30;
        case 0x1e8f34u: goto label_1e8f34;
        case 0x1e8f38u: goto label_1e8f38;
        case 0x1e8f3cu: goto label_1e8f3c;
        case 0x1e8f40u: goto label_1e8f40;
        case 0x1e8f44u: goto label_1e8f44;
        case 0x1e8f48u: goto label_1e8f48;
        case 0x1e8f4cu: goto label_1e8f4c;
        case 0x1e8f50u: goto label_1e8f50;
        case 0x1e8f54u: goto label_1e8f54;
        case 0x1e8f58u: goto label_1e8f58;
        case 0x1e8f5cu: goto label_1e8f5c;
        case 0x1e8f60u: goto label_1e8f60;
        case 0x1e8f64u: goto label_1e8f64;
        case 0x1e8f68u: goto label_1e8f68;
        case 0x1e8f6cu: goto label_1e8f6c;
        case 0x1e8f70u: goto label_1e8f70;
        case 0x1e8f74u: goto label_1e8f74;
        case 0x1e8f78u: goto label_1e8f78;
        case 0x1e8f7cu: goto label_1e8f7c;
        case 0x1e8f80u: goto label_1e8f80;
        case 0x1e8f84u: goto label_1e8f84;
        case 0x1e8f88u: goto label_1e8f88;
        case 0x1e8f8cu: goto label_1e8f8c;
        case 0x1e8f90u: goto label_1e8f90;
        case 0x1e8f94u: goto label_1e8f94;
        case 0x1e8f98u: goto label_1e8f98;
        case 0x1e8f9cu: goto label_1e8f9c;
        case 0x1e8fa0u: goto label_1e8fa0;
        case 0x1e8fa4u: goto label_1e8fa4;
        case 0x1e8fa8u: goto label_1e8fa8;
        case 0x1e8facu: goto label_1e8fac;
        case 0x1e8fb0u: goto label_1e8fb0;
        case 0x1e8fb4u: goto label_1e8fb4;
        case 0x1e8fb8u: goto label_1e8fb8;
        case 0x1e8fbcu: goto label_1e8fbc;
        case 0x1e8fc0u: goto label_1e8fc0;
        case 0x1e8fc4u: goto label_1e8fc4;
        case 0x1e8fc8u: goto label_1e8fc8;
        case 0x1e8fccu: goto label_1e8fcc;
        case 0x1e8fd0u: goto label_1e8fd0;
        case 0x1e8fd4u: goto label_1e8fd4;
        case 0x1e8fd8u: goto label_1e8fd8;
        case 0x1e8fdcu: goto label_1e8fdc;
        case 0x1e8fe0u: goto label_1e8fe0;
        case 0x1e8fe4u: goto label_1e8fe4;
        case 0x1e8fe8u: goto label_1e8fe8;
        case 0x1e8fecu: goto label_1e8fec;
        case 0x1e8ff0u: goto label_1e8ff0;
        case 0x1e8ff4u: goto label_1e8ff4;
        case 0x1e8ff8u: goto label_1e8ff8;
        case 0x1e8ffcu: goto label_1e8ffc;
        case 0x1e9000u: goto label_1e9000;
        case 0x1e9004u: goto label_1e9004;
        case 0x1e9008u: goto label_1e9008;
        case 0x1e900cu: goto label_1e900c;
        case 0x1e9010u: goto label_1e9010;
        case 0x1e9014u: goto label_1e9014;
        case 0x1e9018u: goto label_1e9018;
        case 0x1e901cu: goto label_1e901c;
        case 0x1e9020u: goto label_1e9020;
        case 0x1e9024u: goto label_1e9024;
        case 0x1e9028u: goto label_1e9028;
        case 0x1e902cu: goto label_1e902c;
        case 0x1e9030u: goto label_1e9030;
        case 0x1e9034u: goto label_1e9034;
        case 0x1e9038u: goto label_1e9038;
        case 0x1e903cu: goto label_1e903c;
        case 0x1e9040u: goto label_1e9040;
        case 0x1e9044u: goto label_1e9044;
        case 0x1e9048u: goto label_1e9048;
        case 0x1e904cu: goto label_1e904c;
        case 0x1e9050u: goto label_1e9050;
        case 0x1e9054u: goto label_1e9054;
        case 0x1e9058u: goto label_1e9058;
        case 0x1e905cu: goto label_1e905c;
        case 0x1e9060u: goto label_1e9060;
        case 0x1e9064u: goto label_1e9064;
        case 0x1e9068u: goto label_1e9068;
        case 0x1e906cu: goto label_1e906c;
        case 0x1e9070u: goto label_1e9070;
        case 0x1e9074u: goto label_1e9074;
        case 0x1e9078u: goto label_1e9078;
        case 0x1e907cu: goto label_1e907c;
        case 0x1e9080u: goto label_1e9080;
        case 0x1e9084u: goto label_1e9084;
        case 0x1e9088u: goto label_1e9088;
        case 0x1e908cu: goto label_1e908c;
        case 0x1e9090u: goto label_1e9090;
        case 0x1e9094u: goto label_1e9094;
        case 0x1e9098u: goto label_1e9098;
        case 0x1e909cu: goto label_1e909c;
        case 0x1e90a0u: goto label_1e90a0;
        case 0x1e90a4u: goto label_1e90a4;
        case 0x1e90a8u: goto label_1e90a8;
        case 0x1e90acu: goto label_1e90ac;
        case 0x1e90b0u: goto label_1e90b0;
        case 0x1e90b4u: goto label_1e90b4;
        case 0x1e90b8u: goto label_1e90b8;
        case 0x1e90bcu: goto label_1e90bc;
        case 0x1e90c0u: goto label_1e90c0;
        case 0x1e90c4u: goto label_1e90c4;
        case 0x1e90c8u: goto label_1e90c8;
        case 0x1e90ccu: goto label_1e90cc;
        case 0x1e90d0u: goto label_1e90d0;
        case 0x1e90d4u: goto label_1e90d4;
        case 0x1e90d8u: goto label_1e90d8;
        case 0x1e90dcu: goto label_1e90dc;
        case 0x1e90e0u: goto label_1e90e0;
        case 0x1e90e4u: goto label_1e90e4;
        case 0x1e90e8u: goto label_1e90e8;
        case 0x1e90ecu: goto label_1e90ec;
        case 0x1e90f0u: goto label_1e90f0;
        case 0x1e90f4u: goto label_1e90f4;
        case 0x1e90f8u: goto label_1e90f8;
        case 0x1e90fcu: goto label_1e90fc;
        case 0x1e9100u: goto label_1e9100;
        case 0x1e9104u: goto label_1e9104;
        case 0x1e9108u: goto label_1e9108;
        case 0x1e910cu: goto label_1e910c;
        case 0x1e9110u: goto label_1e9110;
        case 0x1e9114u: goto label_1e9114;
        case 0x1e9118u: goto label_1e9118;
        case 0x1e911cu: goto label_1e911c;
        case 0x1e9120u: goto label_1e9120;
        case 0x1e9124u: goto label_1e9124;
        case 0x1e9128u: goto label_1e9128;
        case 0x1e912cu: goto label_1e912c;
        case 0x1e9130u: goto label_1e9130;
        case 0x1e9134u: goto label_1e9134;
        case 0x1e9138u: goto label_1e9138;
        case 0x1e913cu: goto label_1e913c;
        case 0x1e9140u: goto label_1e9140;
        case 0x1e9144u: goto label_1e9144;
        case 0x1e9148u: goto label_1e9148;
        case 0x1e914cu: goto label_1e914c;
        case 0x1e9150u: goto label_1e9150;
        case 0x1e9154u: goto label_1e9154;
        case 0x1e9158u: goto label_1e9158;
        case 0x1e915cu: goto label_1e915c;
        case 0x1e9160u: goto label_1e9160;
        case 0x1e9164u: goto label_1e9164;
        case 0x1e9168u: goto label_1e9168;
        case 0x1e916cu: goto label_1e916c;
        case 0x1e9170u: goto label_1e9170;
        case 0x1e9174u: goto label_1e9174;
        case 0x1e9178u: goto label_1e9178;
        case 0x1e917cu: goto label_1e917c;
        case 0x1e9180u: goto label_1e9180;
        case 0x1e9184u: goto label_1e9184;
        case 0x1e9188u: goto label_1e9188;
        case 0x1e918cu: goto label_1e918c;
        case 0x1e9190u: goto label_1e9190;
        case 0x1e9194u: goto label_1e9194;
        case 0x1e9198u: goto label_1e9198;
        case 0x1e919cu: goto label_1e919c;
        case 0x1e91a0u: goto label_1e91a0;
        case 0x1e91a4u: goto label_1e91a4;
        case 0x1e91a8u: goto label_1e91a8;
        case 0x1e91acu: goto label_1e91ac;
        case 0x1e91b0u: goto label_1e91b0;
        case 0x1e91b4u: goto label_1e91b4;
        case 0x1e91b8u: goto label_1e91b8;
        case 0x1e91bcu: goto label_1e91bc;
        case 0x1e91c0u: goto label_1e91c0;
        case 0x1e91c4u: goto label_1e91c4;
        case 0x1e91c8u: goto label_1e91c8;
        case 0x1e91ccu: goto label_1e91cc;
        case 0x1e91d0u: goto label_1e91d0;
        case 0x1e91d4u: goto label_1e91d4;
        case 0x1e91d8u: goto label_1e91d8;
        case 0x1e91dcu: goto label_1e91dc;
        case 0x1e91e0u: goto label_1e91e0;
        case 0x1e91e4u: goto label_1e91e4;
        case 0x1e91e8u: goto label_1e91e8;
        case 0x1e91ecu: goto label_1e91ec;
        case 0x1e91f0u: goto label_1e91f0;
        case 0x1e91f4u: goto label_1e91f4;
        case 0x1e91f8u: goto label_1e91f8;
        case 0x1e91fcu: goto label_1e91fc;
        case 0x1e9200u: goto label_1e9200;
        case 0x1e9204u: goto label_1e9204;
        case 0x1e9208u: goto label_1e9208;
        case 0x1e920cu: goto label_1e920c;
        case 0x1e9210u: goto label_1e9210;
        case 0x1e9214u: goto label_1e9214;
        case 0x1e9218u: goto label_1e9218;
        case 0x1e921cu: goto label_1e921c;
        case 0x1e9220u: goto label_1e9220;
        case 0x1e9224u: goto label_1e9224;
        case 0x1e9228u: goto label_1e9228;
        case 0x1e922cu: goto label_1e922c;
        case 0x1e9230u: goto label_1e9230;
        case 0x1e9234u: goto label_1e9234;
        case 0x1e9238u: goto label_1e9238;
        case 0x1e923cu: goto label_1e923c;
        case 0x1e9240u: goto label_1e9240;
        case 0x1e9244u: goto label_1e9244;
        case 0x1e9248u: goto label_1e9248;
        case 0x1e924cu: goto label_1e924c;
        case 0x1e9250u: goto label_1e9250;
        case 0x1e9254u: goto label_1e9254;
        case 0x1e9258u: goto label_1e9258;
        case 0x1e925cu: goto label_1e925c;
        case 0x1e9260u: goto label_1e9260;
        case 0x1e9264u: goto label_1e9264;
        case 0x1e9268u: goto label_1e9268;
        case 0x1e926cu: goto label_1e926c;
        case 0x1e9270u: goto label_1e9270;
        case 0x1e9274u: goto label_1e9274;
        case 0x1e9278u: goto label_1e9278;
        case 0x1e927cu: goto label_1e927c;
        case 0x1e9280u: goto label_1e9280;
        case 0x1e9284u: goto label_1e9284;
        case 0x1e9288u: goto label_1e9288;
        case 0x1e928cu: goto label_1e928c;
        case 0x1e9290u: goto label_1e9290;
        case 0x1e9294u: goto label_1e9294;
        case 0x1e9298u: goto label_1e9298;
        case 0x1e929cu: goto label_1e929c;
        case 0x1e92a0u: goto label_1e92a0;
        case 0x1e92a4u: goto label_1e92a4;
        case 0x1e92a8u: goto label_1e92a8;
        case 0x1e92acu: goto label_1e92ac;
        case 0x1e92b0u: goto label_1e92b0;
        case 0x1e92b4u: goto label_1e92b4;
        case 0x1e92b8u: goto label_1e92b8;
        case 0x1e92bcu: goto label_1e92bc;
        case 0x1e92c0u: goto label_1e92c0;
        case 0x1e92c4u: goto label_1e92c4;
        case 0x1e92c8u: goto label_1e92c8;
        case 0x1e92ccu: goto label_1e92cc;
        case 0x1e92d0u: goto label_1e92d0;
        case 0x1e92d4u: goto label_1e92d4;
        case 0x1e92d8u: goto label_1e92d8;
        case 0x1e92dcu: goto label_1e92dc;
        case 0x1e92e0u: goto label_1e92e0;
        case 0x1e92e4u: goto label_1e92e4;
        case 0x1e92e8u: goto label_1e92e8;
        case 0x1e92ecu: goto label_1e92ec;
        case 0x1e92f0u: goto label_1e92f0;
        case 0x1e92f4u: goto label_1e92f4;
        case 0x1e92f8u: goto label_1e92f8;
        case 0x1e92fcu: goto label_1e92fc;
        case 0x1e9300u: goto label_1e9300;
        case 0x1e9304u: goto label_1e9304;
        case 0x1e9308u: goto label_1e9308;
        case 0x1e930cu: goto label_1e930c;
        case 0x1e9310u: goto label_1e9310;
        case 0x1e9314u: goto label_1e9314;
        case 0x1e9318u: goto label_1e9318;
        case 0x1e931cu: goto label_1e931c;
        case 0x1e9320u: goto label_1e9320;
        case 0x1e9324u: goto label_1e9324;
        case 0x1e9328u: goto label_1e9328;
        case 0x1e932cu: goto label_1e932c;
        case 0x1e9330u: goto label_1e9330;
        case 0x1e9334u: goto label_1e9334;
        case 0x1e9338u: goto label_1e9338;
        case 0x1e933cu: goto label_1e933c;
        case 0x1e9340u: goto label_1e9340;
        case 0x1e9344u: goto label_1e9344;
        case 0x1e9348u: goto label_1e9348;
        case 0x1e934cu: goto label_1e934c;
        case 0x1e9350u: goto label_1e9350;
        case 0x1e9354u: goto label_1e9354;
        case 0x1e9358u: goto label_1e9358;
        case 0x1e935cu: goto label_1e935c;
        case 0x1e9360u: goto label_1e9360;
        case 0x1e9364u: goto label_1e9364;
        case 0x1e9368u: goto label_1e9368;
        case 0x1e936cu: goto label_1e936c;
        case 0x1e9370u: goto label_1e9370;
        case 0x1e9374u: goto label_1e9374;
        case 0x1e9378u: goto label_1e9378;
        case 0x1e937cu: goto label_1e937c;
        case 0x1e9380u: goto label_1e9380;
        case 0x1e9384u: goto label_1e9384;
        case 0x1e9388u: goto label_1e9388;
        case 0x1e938cu: goto label_1e938c;
        case 0x1e9390u: goto label_1e9390;
        case 0x1e9394u: goto label_1e9394;
        case 0x1e9398u: goto label_1e9398;
        case 0x1e939cu: goto label_1e939c;
        case 0x1e93a0u: goto label_1e93a0;
        case 0x1e93a4u: goto label_1e93a4;
        case 0x1e93a8u: goto label_1e93a8;
        case 0x1e93acu: goto label_1e93ac;
        case 0x1e93b0u: goto label_1e93b0;
        case 0x1e93b4u: goto label_1e93b4;
        case 0x1e93b8u: goto label_1e93b8;
        case 0x1e93bcu: goto label_1e93bc;
        case 0x1e93c0u: goto label_1e93c0;
        case 0x1e93c4u: goto label_1e93c4;
        case 0x1e93c8u: goto label_1e93c8;
        case 0x1e93ccu: goto label_1e93cc;
        case 0x1e93d0u: goto label_1e93d0;
        case 0x1e93d4u: goto label_1e93d4;
        case 0x1e93d8u: goto label_1e93d8;
        case 0x1e93dcu: goto label_1e93dc;
        case 0x1e93e0u: goto label_1e93e0;
        case 0x1e93e4u: goto label_1e93e4;
        case 0x1e93e8u: goto label_1e93e8;
        case 0x1e93ecu: goto label_1e93ec;
        case 0x1e93f0u: goto label_1e93f0;
        case 0x1e93f4u: goto label_1e93f4;
        case 0x1e93f8u: goto label_1e93f8;
        case 0x1e93fcu: goto label_1e93fc;
        case 0x1e9400u: goto label_1e9400;
        case 0x1e9404u: goto label_1e9404;
        case 0x1e9408u: goto label_1e9408;
        case 0x1e940cu: goto label_1e940c;
        case 0x1e9410u: goto label_1e9410;
        case 0x1e9414u: goto label_1e9414;
        case 0x1e9418u: goto label_1e9418;
        case 0x1e941cu: goto label_1e941c;
        case 0x1e9420u: goto label_1e9420;
        case 0x1e9424u: goto label_1e9424;
        case 0x1e9428u: goto label_1e9428;
        case 0x1e942cu: goto label_1e942c;
        case 0x1e9430u: goto label_1e9430;
        case 0x1e9434u: goto label_1e9434;
        case 0x1e9438u: goto label_1e9438;
        case 0x1e943cu: goto label_1e943c;
        case 0x1e9440u: goto label_1e9440;
        case 0x1e9444u: goto label_1e9444;
        case 0x1e9448u: goto label_1e9448;
        case 0x1e944cu: goto label_1e944c;
        case 0x1e9450u: goto label_1e9450;
        case 0x1e9454u: goto label_1e9454;
        case 0x1e9458u: goto label_1e9458;
        case 0x1e945cu: goto label_1e945c;
        case 0x1e9460u: goto label_1e9460;
        case 0x1e9464u: goto label_1e9464;
        case 0x1e9468u: goto label_1e9468;
        case 0x1e946cu: goto label_1e946c;
        case 0x1e9470u: goto label_1e9470;
        case 0x1e9474u: goto label_1e9474;
        case 0x1e9478u: goto label_1e9478;
        case 0x1e947cu: goto label_1e947c;
        case 0x1e9480u: goto label_1e9480;
        case 0x1e9484u: goto label_1e9484;
        case 0x1e9488u: goto label_1e9488;
        case 0x1e948cu: goto label_1e948c;
        case 0x1e9490u: goto label_1e9490;
        case 0x1e9494u: goto label_1e9494;
        case 0x1e9498u: goto label_1e9498;
        case 0x1e949cu: goto label_1e949c;
        case 0x1e94a0u: goto label_1e94a0;
        case 0x1e94a4u: goto label_1e94a4;
        case 0x1e94a8u: goto label_1e94a8;
        case 0x1e94acu: goto label_1e94ac;
        case 0x1e94b0u: goto label_1e94b0;
        case 0x1e94b4u: goto label_1e94b4;
        case 0x1e94b8u: goto label_1e94b8;
        case 0x1e94bcu: goto label_1e94bc;
        case 0x1e94c0u: goto label_1e94c0;
        case 0x1e94c4u: goto label_1e94c4;
        case 0x1e94c8u: goto label_1e94c8;
        case 0x1e94ccu: goto label_1e94cc;
        case 0x1e94d0u: goto label_1e94d0;
        case 0x1e94d4u: goto label_1e94d4;
        case 0x1e94d8u: goto label_1e94d8;
        case 0x1e94dcu: goto label_1e94dc;
        case 0x1e94e0u: goto label_1e94e0;
        case 0x1e94e4u: goto label_1e94e4;
        case 0x1e94e8u: goto label_1e94e8;
        case 0x1e94ecu: goto label_1e94ec;
        case 0x1e94f0u: goto label_1e94f0;
        case 0x1e94f4u: goto label_1e94f4;
        case 0x1e94f8u: goto label_1e94f8;
        case 0x1e94fcu: goto label_1e94fc;
        case 0x1e9500u: goto label_1e9500;
        case 0x1e9504u: goto label_1e9504;
        case 0x1e9508u: goto label_1e9508;
        case 0x1e950cu: goto label_1e950c;
        case 0x1e9510u: goto label_1e9510;
        case 0x1e9514u: goto label_1e9514;
        case 0x1e9518u: goto label_1e9518;
        case 0x1e951cu: goto label_1e951c;
        case 0x1e9520u: goto label_1e9520;
        case 0x1e9524u: goto label_1e9524;
        case 0x1e9528u: goto label_1e9528;
        case 0x1e952cu: goto label_1e952c;
        case 0x1e9530u: goto label_1e9530;
        case 0x1e9534u: goto label_1e9534;
        case 0x1e9538u: goto label_1e9538;
        case 0x1e953cu: goto label_1e953c;
        case 0x1e9540u: goto label_1e9540;
        case 0x1e9544u: goto label_1e9544;
        case 0x1e9548u: goto label_1e9548;
        case 0x1e954cu: goto label_1e954c;
        case 0x1e9550u: goto label_1e9550;
        case 0x1e9554u: goto label_1e9554;
        case 0x1e9558u: goto label_1e9558;
        case 0x1e955cu: goto label_1e955c;
        case 0x1e9560u: goto label_1e9560;
        case 0x1e9564u: goto label_1e9564;
        case 0x1e9568u: goto label_1e9568;
        case 0x1e956cu: goto label_1e956c;
        case 0x1e9570u: goto label_1e9570;
        case 0x1e9574u: goto label_1e9574;
        case 0x1e9578u: goto label_1e9578;
        case 0x1e957cu: goto label_1e957c;
        case 0x1e9580u: goto label_1e9580;
        case 0x1e9584u: goto label_1e9584;
        case 0x1e9588u: goto label_1e9588;
        case 0x1e958cu: goto label_1e958c;
        case 0x1e9590u: goto label_1e9590;
        case 0x1e9594u: goto label_1e9594;
        case 0x1e9598u: goto label_1e9598;
        case 0x1e959cu: goto label_1e959c;
        case 0x1e95a0u: goto label_1e95a0;
        case 0x1e95a4u: goto label_1e95a4;
        case 0x1e95a8u: goto label_1e95a8;
        case 0x1e95acu: goto label_1e95ac;
        case 0x1e95b0u: goto label_1e95b0;
        case 0x1e95b4u: goto label_1e95b4;
        case 0x1e95b8u: goto label_1e95b8;
        case 0x1e95bcu: goto label_1e95bc;
        case 0x1e95c0u: goto label_1e95c0;
        case 0x1e95c4u: goto label_1e95c4;
        case 0x1e95c8u: goto label_1e95c8;
        case 0x1e95ccu: goto label_1e95cc;
        case 0x1e95d0u: goto label_1e95d0;
        case 0x1e95d4u: goto label_1e95d4;
        case 0x1e95d8u: goto label_1e95d8;
        case 0x1e95dcu: goto label_1e95dc;
        case 0x1e95e0u: goto label_1e95e0;
        case 0x1e95e4u: goto label_1e95e4;
        case 0x1e95e8u: goto label_1e95e8;
        case 0x1e95ecu: goto label_1e95ec;
        case 0x1e95f0u: goto label_1e95f0;
        case 0x1e95f4u: goto label_1e95f4;
        case 0x1e95f8u: goto label_1e95f8;
        case 0x1e95fcu: goto label_1e95fc;
        case 0x1e9600u: goto label_1e9600;
        case 0x1e9604u: goto label_1e9604;
        case 0x1e9608u: goto label_1e9608;
        case 0x1e960cu: goto label_1e960c;
        case 0x1e9610u: goto label_1e9610;
        case 0x1e9614u: goto label_1e9614;
        case 0x1e9618u: goto label_1e9618;
        case 0x1e961cu: goto label_1e961c;
        case 0x1e9620u: goto label_1e9620;
        case 0x1e9624u: goto label_1e9624;
        case 0x1e9628u: goto label_1e9628;
        case 0x1e962cu: goto label_1e962c;
        case 0x1e9630u: goto label_1e9630;
        case 0x1e9634u: goto label_1e9634;
        case 0x1e9638u: goto label_1e9638;
        case 0x1e963cu: goto label_1e963c;
        case 0x1e9640u: goto label_1e9640;
        case 0x1e9644u: goto label_1e9644;
        case 0x1e9648u: goto label_1e9648;
        case 0x1e964cu: goto label_1e964c;
        case 0x1e9650u: goto label_1e9650;
        case 0x1e9654u: goto label_1e9654;
        case 0x1e9658u: goto label_1e9658;
        case 0x1e965cu: goto label_1e965c;
        case 0x1e9660u: goto label_1e9660;
        case 0x1e9664u: goto label_1e9664;
        case 0x1e9668u: goto label_1e9668;
        case 0x1e966cu: goto label_1e966c;
        case 0x1e9670u: goto label_1e9670;
        case 0x1e9674u: goto label_1e9674;
        case 0x1e9678u: goto label_1e9678;
        case 0x1e967cu: goto label_1e967c;
        case 0x1e9680u: goto label_1e9680;
        case 0x1e9684u: goto label_1e9684;
        case 0x1e9688u: goto label_1e9688;
        case 0x1e968cu: goto label_1e968c;
        case 0x1e9690u: goto label_1e9690;
        case 0x1e9694u: goto label_1e9694;
        case 0x1e9698u: goto label_1e9698;
        case 0x1e969cu: goto label_1e969c;
        case 0x1e96a0u: goto label_1e96a0;
        case 0x1e96a4u: goto label_1e96a4;
        case 0x1e96a8u: goto label_1e96a8;
        case 0x1e96acu: goto label_1e96ac;
        case 0x1e96b0u: goto label_1e96b0;
        case 0x1e96b4u: goto label_1e96b4;
        case 0x1e96b8u: goto label_1e96b8;
        case 0x1e96bcu: goto label_1e96bc;
        case 0x1e96c0u: goto label_1e96c0;
        case 0x1e96c4u: goto label_1e96c4;
        case 0x1e96c8u: goto label_1e96c8;
        case 0x1e96ccu: goto label_1e96cc;
        case 0x1e96d0u: goto label_1e96d0;
        case 0x1e96d4u: goto label_1e96d4;
        case 0x1e96d8u: goto label_1e96d8;
        case 0x1e96dcu: goto label_1e96dc;
        case 0x1e96e0u: goto label_1e96e0;
        case 0x1e96e4u: goto label_1e96e4;
        case 0x1e96e8u: goto label_1e96e8;
        case 0x1e96ecu: goto label_1e96ec;
        case 0x1e96f0u: goto label_1e96f0;
        case 0x1e96f4u: goto label_1e96f4;
        case 0x1e96f8u: goto label_1e96f8;
        case 0x1e96fcu: goto label_1e96fc;
        case 0x1e9700u: goto label_1e9700;
        case 0x1e9704u: goto label_1e9704;
        case 0x1e9708u: goto label_1e9708;
        case 0x1e970cu: goto label_1e970c;
        case 0x1e9710u: goto label_1e9710;
        case 0x1e9714u: goto label_1e9714;
        case 0x1e9718u: goto label_1e9718;
        case 0x1e971cu: goto label_1e971c;
        case 0x1e9720u: goto label_1e9720;
        case 0x1e9724u: goto label_1e9724;
        case 0x1e9728u: goto label_1e9728;
        case 0x1e972cu: goto label_1e972c;
        case 0x1e9730u: goto label_1e9730;
        case 0x1e9734u: goto label_1e9734;
        case 0x1e9738u: goto label_1e9738;
        case 0x1e973cu: goto label_1e973c;
        case 0x1e9740u: goto label_1e9740;
        case 0x1e9744u: goto label_1e9744;
        case 0x1e9748u: goto label_1e9748;
        case 0x1e974cu: goto label_1e974c;
        case 0x1e9750u: goto label_1e9750;
        case 0x1e9754u: goto label_1e9754;
        case 0x1e9758u: goto label_1e9758;
        case 0x1e975cu: goto label_1e975c;
        case 0x1e9760u: goto label_1e9760;
        case 0x1e9764u: goto label_1e9764;
        case 0x1e9768u: goto label_1e9768;
        case 0x1e976cu: goto label_1e976c;
        case 0x1e9770u: goto label_1e9770;
        case 0x1e9774u: goto label_1e9774;
        case 0x1e9778u: goto label_1e9778;
        case 0x1e977cu: goto label_1e977c;
        case 0x1e9780u: goto label_1e9780;
        case 0x1e9784u: goto label_1e9784;
        case 0x1e9788u: goto label_1e9788;
        case 0x1e978cu: goto label_1e978c;
        case 0x1e9790u: goto label_1e9790;
        case 0x1e9794u: goto label_1e9794;
        case 0x1e9798u: goto label_1e9798;
        case 0x1e979cu: goto label_1e979c;
        case 0x1e97a0u: goto label_1e97a0;
        case 0x1e97a4u: goto label_1e97a4;
        case 0x1e97a8u: goto label_1e97a8;
        case 0x1e97acu: goto label_1e97ac;
        case 0x1e97b0u: goto label_1e97b0;
        case 0x1e97b4u: goto label_1e97b4;
        case 0x1e97b8u: goto label_1e97b8;
        case 0x1e97bcu: goto label_1e97bc;
        case 0x1e97c0u: goto label_1e97c0;
        case 0x1e97c4u: goto label_1e97c4;
        case 0x1e97c8u: goto label_1e97c8;
        case 0x1e97ccu: goto label_1e97cc;
        case 0x1e97d0u: goto label_1e97d0;
        case 0x1e97d4u: goto label_1e97d4;
        case 0x1e97d8u: goto label_1e97d8;
        case 0x1e97dcu: goto label_1e97dc;
        case 0x1e97e0u: goto label_1e97e0;
        case 0x1e97e4u: goto label_1e97e4;
        case 0x1e97e8u: goto label_1e97e8;
        case 0x1e97ecu: goto label_1e97ec;
        case 0x1e97f0u: goto label_1e97f0;
        case 0x1e97f4u: goto label_1e97f4;
        case 0x1e97f8u: goto label_1e97f8;
        case 0x1e97fcu: goto label_1e97fc;
        case 0x1e9800u: goto label_1e9800;
        case 0x1e9804u: goto label_1e9804;
        case 0x1e9808u: goto label_1e9808;
        case 0x1e980cu: goto label_1e980c;
        case 0x1e9810u: goto label_1e9810;
        case 0x1e9814u: goto label_1e9814;
        case 0x1e9818u: goto label_1e9818;
        case 0x1e981cu: goto label_1e981c;
        case 0x1e9820u: goto label_1e9820;
        case 0x1e9824u: goto label_1e9824;
        case 0x1e9828u: goto label_1e9828;
        case 0x1e982cu: goto label_1e982c;
        case 0x1e9830u: goto label_1e9830;
        case 0x1e9834u: goto label_1e9834;
        case 0x1e9838u: goto label_1e9838;
        case 0x1e983cu: goto label_1e983c;
        case 0x1e9840u: goto label_1e9840;
        case 0x1e9844u: goto label_1e9844;
        case 0x1e9848u: goto label_1e9848;
        case 0x1e984cu: goto label_1e984c;
        case 0x1e9850u: goto label_1e9850;
        case 0x1e9854u: goto label_1e9854;
        case 0x1e9858u: goto label_1e9858;
        case 0x1e985cu: goto label_1e985c;
        case 0x1e9860u: goto label_1e9860;
        case 0x1e9864u: goto label_1e9864;
        case 0x1e9868u: goto label_1e9868;
        case 0x1e986cu: goto label_1e986c;
        case 0x1e9870u: goto label_1e9870;
        case 0x1e9874u: goto label_1e9874;
        case 0x1e9878u: goto label_1e9878;
        case 0x1e987cu: goto label_1e987c;
        case 0x1e9880u: goto label_1e9880;
        case 0x1e9884u: goto label_1e9884;
        case 0x1e9888u: goto label_1e9888;
        case 0x1e988cu: goto label_1e988c;
        case 0x1e9890u: goto label_1e9890;
        case 0x1e9894u: goto label_1e9894;
        case 0x1e9898u: goto label_1e9898;
        case 0x1e989cu: goto label_1e989c;
        case 0x1e98a0u: goto label_1e98a0;
        case 0x1e98a4u: goto label_1e98a4;
        case 0x1e98a8u: goto label_1e98a8;
        case 0x1e98acu: goto label_1e98ac;
        case 0x1e98b0u: goto label_1e98b0;
        case 0x1e98b4u: goto label_1e98b4;
        case 0x1e98b8u: goto label_1e98b8;
        case 0x1e98bcu: goto label_1e98bc;
        case 0x1e98c0u: goto label_1e98c0;
        case 0x1e98c4u: goto label_1e98c4;
        case 0x1e98c8u: goto label_1e98c8;
        case 0x1e98ccu: goto label_1e98cc;
        case 0x1e98d0u: goto label_1e98d0;
        case 0x1e98d4u: goto label_1e98d4;
        case 0x1e98d8u: goto label_1e98d8;
        case 0x1e98dcu: goto label_1e98dc;
        case 0x1e98e0u: goto label_1e98e0;
        case 0x1e98e4u: goto label_1e98e4;
        case 0x1e98e8u: goto label_1e98e8;
        case 0x1e98ecu: goto label_1e98ec;
        case 0x1e98f0u: goto label_1e98f0;
        case 0x1e98f4u: goto label_1e98f4;
        case 0x1e98f8u: goto label_1e98f8;
        case 0x1e98fcu: goto label_1e98fc;
        case 0x1e9900u: goto label_1e9900;
        case 0x1e9904u: goto label_1e9904;
        case 0x1e9908u: goto label_1e9908;
        case 0x1e990cu: goto label_1e990c;
        case 0x1e9910u: goto label_1e9910;
        case 0x1e9914u: goto label_1e9914;
        case 0x1e9918u: goto label_1e9918;
        case 0x1e991cu: goto label_1e991c;
        case 0x1e9920u: goto label_1e9920;
        case 0x1e9924u: goto label_1e9924;
        case 0x1e9928u: goto label_1e9928;
        case 0x1e992cu: goto label_1e992c;
        case 0x1e9930u: goto label_1e9930;
        case 0x1e9934u: goto label_1e9934;
        case 0x1e9938u: goto label_1e9938;
        case 0x1e993cu: goto label_1e993c;
        case 0x1e9940u: goto label_1e9940;
        case 0x1e9944u: goto label_1e9944;
        case 0x1e9948u: goto label_1e9948;
        case 0x1e994cu: goto label_1e994c;
        case 0x1e9950u: goto label_1e9950;
        case 0x1e9954u: goto label_1e9954;
        case 0x1e9958u: goto label_1e9958;
        case 0x1e995cu: goto label_1e995c;
        case 0x1e9960u: goto label_1e9960;
        case 0x1e9964u: goto label_1e9964;
        case 0x1e9968u: goto label_1e9968;
        case 0x1e996cu: goto label_1e996c;
        case 0x1e9970u: goto label_1e9970;
        case 0x1e9974u: goto label_1e9974;
        case 0x1e9978u: goto label_1e9978;
        case 0x1e997cu: goto label_1e997c;
        case 0x1e9980u: goto label_1e9980;
        case 0x1e9984u: goto label_1e9984;
        case 0x1e9988u: goto label_1e9988;
        case 0x1e998cu: goto label_1e998c;
        case 0x1e9990u: goto label_1e9990;
        case 0x1e9994u: goto label_1e9994;
        case 0x1e9998u: goto label_1e9998;
        case 0x1e999cu: goto label_1e999c;
        case 0x1e99a0u: goto label_1e99a0;
        case 0x1e99a4u: goto label_1e99a4;
        case 0x1e99a8u: goto label_1e99a8;
        case 0x1e99acu: goto label_1e99ac;
        case 0x1e99b0u: goto label_1e99b0;
        case 0x1e99b4u: goto label_1e99b4;
        case 0x1e99b8u: goto label_1e99b8;
        case 0x1e99bcu: goto label_1e99bc;
        case 0x1e99c0u: goto label_1e99c0;
        case 0x1e99c4u: goto label_1e99c4;
        case 0x1e99c8u: goto label_1e99c8;
        case 0x1e99ccu: goto label_1e99cc;
        case 0x1e99d0u: goto label_1e99d0;
        case 0x1e99d4u: goto label_1e99d4;
        case 0x1e99d8u: goto label_1e99d8;
        case 0x1e99dcu: goto label_1e99dc;
        case 0x1e99e0u: goto label_1e99e0;
        case 0x1e99e4u: goto label_1e99e4;
        case 0x1e99e8u: goto label_1e99e8;
        case 0x1e99ecu: goto label_1e99ec;
        case 0x1e99f0u: goto label_1e99f0;
        case 0x1e99f4u: goto label_1e99f4;
        case 0x1e99f8u: goto label_1e99f8;
        case 0x1e99fcu: goto label_1e99fc;
        case 0x1e9a00u: goto label_1e9a00;
        case 0x1e9a04u: goto label_1e9a04;
        case 0x1e9a08u: goto label_1e9a08;
        case 0x1e9a0cu: goto label_1e9a0c;
        case 0x1e9a10u: goto label_1e9a10;
        case 0x1e9a14u: goto label_1e9a14;
        case 0x1e9a18u: goto label_1e9a18;
        case 0x1e9a1cu: goto label_1e9a1c;
        case 0x1e9a20u: goto label_1e9a20;
        case 0x1e9a24u: goto label_1e9a24;
        case 0x1e9a28u: goto label_1e9a28;
        case 0x1e9a2cu: goto label_1e9a2c;
        case 0x1e9a30u: goto label_1e9a30;
        case 0x1e9a34u: goto label_1e9a34;
        case 0x1e9a38u: goto label_1e9a38;
        case 0x1e9a3cu: goto label_1e9a3c;
        case 0x1e9a40u: goto label_1e9a40;
        case 0x1e9a44u: goto label_1e9a44;
        case 0x1e9a48u: goto label_1e9a48;
        case 0x1e9a4cu: goto label_1e9a4c;
        case 0x1e9a50u: goto label_1e9a50;
        case 0x1e9a54u: goto label_1e9a54;
        case 0x1e9a58u: goto label_1e9a58;
        case 0x1e9a5cu: goto label_1e9a5c;
        case 0x1e9a60u: goto label_1e9a60;
        case 0x1e9a64u: goto label_1e9a64;
        case 0x1e9a68u: goto label_1e9a68;
        case 0x1e9a6cu: goto label_1e9a6c;
        case 0x1e9a70u: goto label_1e9a70;
        case 0x1e9a74u: goto label_1e9a74;
        case 0x1e9a78u: goto label_1e9a78;
        case 0x1e9a7cu: goto label_1e9a7c;
        case 0x1e9a80u: goto label_1e9a80;
        case 0x1e9a84u: goto label_1e9a84;
        case 0x1e9a88u: goto label_1e9a88;
        case 0x1e9a8cu: goto label_1e9a8c;
        case 0x1e9a90u: goto label_1e9a90;
        case 0x1e9a94u: goto label_1e9a94;
        case 0x1e9a98u: goto label_1e9a98;
        case 0x1e9a9cu: goto label_1e9a9c;
        case 0x1e9aa0u: goto label_1e9aa0;
        case 0x1e9aa4u: goto label_1e9aa4;
        case 0x1e9aa8u: goto label_1e9aa8;
        case 0x1e9aacu: goto label_1e9aac;
        case 0x1e9ab0u: goto label_1e9ab0;
        case 0x1e9ab4u: goto label_1e9ab4;
        case 0x1e9ab8u: goto label_1e9ab8;
        case 0x1e9abcu: goto label_1e9abc;
        case 0x1e9ac0u: goto label_1e9ac0;
        case 0x1e9ac4u: goto label_1e9ac4;
        case 0x1e9ac8u: goto label_1e9ac8;
        case 0x1e9accu: goto label_1e9acc;
        case 0x1e9ad0u: goto label_1e9ad0;
        case 0x1e9ad4u: goto label_1e9ad4;
        case 0x1e9ad8u: goto label_1e9ad8;
        case 0x1e9adcu: goto label_1e9adc;
        case 0x1e9ae0u: goto label_1e9ae0;
        case 0x1e9ae4u: goto label_1e9ae4;
        case 0x1e9ae8u: goto label_1e9ae8;
        case 0x1e9aecu: goto label_1e9aec;
        case 0x1e9af0u: goto label_1e9af0;
        case 0x1e9af4u: goto label_1e9af4;
        case 0x1e9af8u: goto label_1e9af8;
        case 0x1e9afcu: goto label_1e9afc;
        case 0x1e9b00u: goto label_1e9b00;
        case 0x1e9b04u: goto label_1e9b04;
        case 0x1e9b08u: goto label_1e9b08;
        case 0x1e9b0cu: goto label_1e9b0c;
        case 0x1e9b10u: goto label_1e9b10;
        case 0x1e9b14u: goto label_1e9b14;
        case 0x1e9b18u: goto label_1e9b18;
        case 0x1e9b1cu: goto label_1e9b1c;
        case 0x1e9b20u: goto label_1e9b20;
        case 0x1e9b24u: goto label_1e9b24;
        case 0x1e9b28u: goto label_1e9b28;
        case 0x1e9b2cu: goto label_1e9b2c;
        case 0x1e9b30u: goto label_1e9b30;
        case 0x1e9b34u: goto label_1e9b34;
        case 0x1e9b38u: goto label_1e9b38;
        case 0x1e9b3cu: goto label_1e9b3c;
        case 0x1e9b40u: goto label_1e9b40;
        case 0x1e9b44u: goto label_1e9b44;
        case 0x1e9b48u: goto label_1e9b48;
        case 0x1e9b4cu: goto label_1e9b4c;
        case 0x1e9b50u: goto label_1e9b50;
        case 0x1e9b54u: goto label_1e9b54;
        default: break;
    }

    ctx->pc = 0x1e8f30u;

label_1e8f30:
    // 0x1e8f30: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x1e8f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
label_1e8f34:
    // 0x1e8f34: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1e8f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1e8f38:
    // 0x1e8f38: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1e8f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1e8f3c:
    // 0x1e8f3c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e8f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1e8f40:
    // 0x1e8f40: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x1e8f40u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1e8f44:
    // 0x1e8f44: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e8f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1e8f48:
    // 0x1e8f48: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x1e8f48u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1e8f4c:
    // 0x1e8f4c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e8f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e8f50:
    // 0x1e8f50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e8f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e8f54:
    // 0x1e8f54: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e8f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e8f58:
    // 0x1e8f58: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e8f58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8f5c:
    // 0x1e8f5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e8f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e8f60:
    // 0x1e8f60: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e8f60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8f64:
    // 0x1e8f64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e8f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e8f68:
    // 0x1e8f68: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e8f68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e8f6c:
    // 0x1e8f6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e8f70:
    // 0x1e8f70: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e8f70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e8f74:
    // 0x1e8f74: 0xafa500ac  sw          $a1, 0xAC($sp)
    ctx->pc = 0x1e8f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
label_1e8f78:
    // 0x1e8f78: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1e8f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e8f7c:
    // 0x1e8f7c: 0xafa900a8  sw          $t1, 0xA8($sp)
    ctx->pc = 0x1e8f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 9));
label_1e8f80:
    // 0x1e8f80: 0xafab00a4  sw          $t3, 0xA4($sp)
    ctx->pc = 0x1e8f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 11));
label_1e8f84:
    // 0x1e8f84: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1e8f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1e8f88:
    // 0x1e8f88: 0xc0a0ed8  jal         func_283B60
label_1e8f8c:
    if (ctx->pc == 0x1E8F8Cu) {
        ctx->pc = 0x1E8F8Cu;
            // 0x1e8f8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E8F90u;
        goto label_1e8f90;
    }
    ctx->pc = 0x1E8F88u;
    SET_GPR_U32(ctx, 31, 0x1E8F90u);
    ctx->pc = 0x1E8F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8F88u;
            // 0x1e8f8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8F90u; }
        if (ctx->pc != 0x1E8F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8F90u; }
        if (ctx->pc != 0x1E8F90u) { return; }
    }
    ctx->pc = 0x1E8F90u;
label_1e8f90:
    // 0x1e8f90: 0x29d1821  addu        $v1, $s4, $sp
    ctx->pc = 0x1e8f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
label_1e8f94:
    // 0x1e8f94: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x1e8f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
label_1e8f98:
    // 0x1e8f98: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e8f98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1e8f9c:
    // 0x1e8f9c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e8f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e8fa0:
    // 0x1e8fa0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_1e8fa4:
    if (ctx->pc == 0x1E8FA4u) {
        ctx->pc = 0x1E8FA4u;
            // 0x1e8fa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E8FA8u;
        goto label_1e8fa8;
    }
    ctx->pc = 0x1E8FA0u;
    {
        const bool branch_taken_0x1e8fa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8FA0u;
            // 0x1e8fa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8fa0) {
            ctx->pc = 0x1E8FB0u;
            goto label_1e8fb0;
        }
    }
    ctx->pc = 0x1E8FA8u;
label_1e8fa8:
    // 0x1e8fa8: 0x100002e0  b           . + 4 + (0x2E0 << 2)
label_1e8fac:
    if (ctx->pc == 0x1E8FACu) {
        ctx->pc = 0x1E8FACu;
            // 0x1e8fac: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x1E8FB0u;
        goto label_1e8fb0;
    }
    ctx->pc = 0x1E8FA8u;
    {
        const bool branch_taken_0x1e8fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8FA8u;
            // 0x1e8fac: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8fa8) {
            ctx->pc = 0x1E9B2Cu;
            goto label_1e9b2c;
        }
    }
    ctx->pc = 0x1E8FB0u;
label_1e8fb0:
    // 0x1e8fb0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e8fb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e8fb4:
    // 0x1e8fb4: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x1e8fb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_1e8fb8:
    // 0x1e8fb8: 0x320f809  jalr        $t9
label_1e8fbc:
    if (ctx->pc == 0x1E8FBCu) {
        ctx->pc = 0x1E8FBCu;
            // 0x1e8fbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E8FC0u;
        goto label_1e8fc0;
    }
    ctx->pc = 0x1E8FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E8FC0u);
        ctx->pc = 0x1E8FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8FB8u;
            // 0x1e8fbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E8FC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E8FC0u; }
            if (ctx->pc != 0x1E8FC0u) { return; }
        }
        }
    }
    ctx->pc = 0x1E8FC0u;
label_1e8fc0:
    // 0x1e8fc0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e8fc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1e8fc4:
    // 0x1e8fc4: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x1e8fc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
label_1e8fc8:
    // 0x1e8fc8: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_1e8fcc:
    if (ctx->pc == 0x1E8FCCu) {
        ctx->pc = 0x1E8FCCu;
            // 0x1e8fcc: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x1E8FD0u;
        goto label_1e8fd0;
    }
    ctx->pc = 0x1E8FC8u;
    {
        const bool branch_taken_0x1e8fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8FC8u;
            // 0x1e8fcc: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8fc8) {
            ctx->pc = 0x1E8F84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e8f84;
        }
    }
    ctx->pc = 0x1E8FD0u;
label_1e8fd0:
    // 0x1e8fd0: 0x16e000ef  bnez        $s7, . + 4 + (0xEF << 2)
label_1e8fd4:
    if (ctx->pc == 0x1E8FD4u) {
        ctx->pc = 0x1E8FD4u;
            // 0x1e8fd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E8FD8u;
        goto label_1e8fd8;
    }
    ctx->pc = 0x1E8FD0u;
    {
        const bool branch_taken_0x1e8fd0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8FD0u;
            // 0x1e8fd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8fd0) {
            ctx->pc = 0x1E9390u;
            goto label_1e9390;
        }
    }
    ctx->pc = 0x1E8FD8u;
label_1e8fd8:
    // 0x1e8fd8: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x1e8fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1e8fdc:
    // 0x1e8fdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e8fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e8fe0:
    // 0x1e8fe0: 0x8fa700a4  lw          $a3, 0xA4($sp)
    ctx->pc = 0x1e8fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1e8fe4:
    // 0x1e8fe4: 0xc07a6f8  jal         func_1E9BE0
label_1e8fe8:
    if (ctx->pc == 0x1E8FE8u) {
        ctx->pc = 0x1E8FE8u;
            // 0x1e8fe8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E8FECu;
        goto label_1e8fec;
    }
    ctx->pc = 0x1E8FE4u;
    SET_GPR_U32(ctx, 31, 0x1E8FECu);
    ctx->pc = 0x1E8FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8FE4u;
            // 0x1e8fe8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9BE0u;
    if (runtime->hasFunction(0x1E9BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1E9BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8FECu; }
        if (ctx->pc != 0x1E8FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaMemAllocPtr__FP9mgCMemoryP9mgCMemoryii_0x1e9be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8FECu; }
        if (ctx->pc != 0x1E8FECu) { return; }
    }
    ctx->pc = 0x1E8FECu;
label_1e8fec:
    // 0x1e8fec: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e8fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e8ff0:
    // 0x1e8ff0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e8ff0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e8ff4:
    // 0x1e8ff4: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x1e8ff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_1e8ff8:
    // 0x1e8ff8: 0x320f809  jalr        $t9
label_1e8ffc:
    if (ctx->pc == 0x1E8FFCu) {
        ctx->pc = 0x1E8FFCu;
            // 0x1e8ffc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9000u;
        goto label_1e9000;
    }
    ctx->pc = 0x1E8FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E9000u);
        ctx->pc = 0x1E8FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8FF8u;
            // 0x1e8ffc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E9000u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E9000u; }
            if (ctx->pc != 0x1E9000u) { return; }
        }
        }
    }
    ctx->pc = 0x1E9000u;
label_1e9000:
    // 0x1e9000: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x1e9000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1e9004:
    // 0x1e9004: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e9004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9008:
    // 0x1e9008: 0xc0664fc  jal         func_1993F0
label_1e900c:
    if (ctx->pc == 0x1E900Cu) {
        ctx->pc = 0x1E900Cu;
            // 0x1e900c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x1E9010u;
        goto label_1e9010;
    }
    ctx->pc = 0x1E9008u;
    SET_GPR_U32(ctx, 31, 0x1E9010u);
    ctx->pc = 0x1E900Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9008u;
            // 0x1e900c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1993F0u;
    if (runtime->hasFunction(0x1993F0u)) {
        auto targetFn = runtime->lookupFunction(0x1993F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9010u; }
        if (ctx->pc != 0x1E9010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainCharaModelName__FiPci_0x1993f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9010u; }
        if (ctx->pc != 0x1E9010u) { return; }
    }
    ctx->pc = 0x1E9010u;
label_1e9010:
    // 0x1e9010: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x1e9010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1e9014:
    // 0x1e9014: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1e9018:
    if (ctx->pc == 0x1E9018u) {
        ctx->pc = 0x1E9018u;
            // 0x1e9018: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x1E901Cu;
        goto label_1e901c;
    }
    ctx->pc = 0x1E9014u;
    {
        const bool branch_taken_0x1e9014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9014u;
            // 0x1e9018: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9014) {
            ctx->pc = 0x1E9048u;
            goto label_1e9048;
        }
    }
    ctx->pc = 0x1E901Cu;
label_1e901c:
    // 0x1e901c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e901cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1e9020:
    // 0x1e9020: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1e9020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1e9024:
    // 0x1e9024: 0x24a58348  addiu       $a1, $a1, -0x7CB8
    ctx->pc = 0x1e9024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935368));
label_1e9028:
    // 0x1e9028: 0xc04a234  jal         func_1288D0
label_1e902c:
    if (ctx->pc == 0x1E902Cu) {
        ctx->pc = 0x1E902Cu;
            // 0x1e902c: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x1E9030u;
        goto label_1e9030;
    }
    ctx->pc = 0x1E9028u;
    SET_GPR_U32(ctx, 31, 0x1E9030u);
    ctx->pc = 0x1E902Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9028u;
            // 0x1e902c: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9030u; }
        if (ctx->pc != 0x1E9030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9030u; }
        if (ctx->pc != 0x1E9030u) { return; }
    }
    ctx->pc = 0x1E9030u;
label_1e9030:
    // 0x1e9030: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1e9030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1e9034:
    // 0x1e9034: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e9034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e9038:
    // 0x1e9038: 0xc0524c8  jal         func_149320
label_1e903c:
    if (ctx->pc == 0x1E903Cu) {
        ctx->pc = 0x1E903Cu;
            // 0x1e903c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9040u;
        goto label_1e9040;
    }
    ctx->pc = 0x1E9038u;
    SET_GPR_U32(ctx, 31, 0x1E9040u);
    ctx->pc = 0x1E903Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9038u;
            // 0x1e903c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9040u; }
        if (ctx->pc != 0x1E9040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9040u; }
        if (ctx->pc != 0x1E9040u) { return; }
    }
    ctx->pc = 0x1E9040u;
label_1e9040:
    // 0x1e9040: 0x1000000a  b           . + 4 + (0xA << 2)
label_1e9044:
    if (ctx->pc == 0x1E9044u) {
        ctx->pc = 0x1E9044u;
            // 0x1e9044: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x1E9048u;
        goto label_1e9048;
    }
    ctx->pc = 0x1E9040u;
    {
        const bool branch_taken_0x1e9040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9040u;
            // 0x1e9044: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9040) {
            ctx->pc = 0x1E906Cu;
            goto label_1e906c;
        }
    }
    ctx->pc = 0x1E9048u;
label_1e9048:
    // 0x1e9048: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1e9048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1e904c:
    // 0x1e904c: 0x24a58358  addiu       $a1, $a1, -0x7CA8
    ctx->pc = 0x1e904cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935384));
label_1e9050:
    // 0x1e9050: 0xc04a234  jal         func_1288D0
label_1e9054:
    if (ctx->pc == 0x1E9054u) {
        ctx->pc = 0x1E9054u;
            // 0x1e9054: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x1E9058u;
        goto label_1e9058;
    }
    ctx->pc = 0x1E9050u;
    SET_GPR_U32(ctx, 31, 0x1E9058u);
    ctx->pc = 0x1E9054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9050u;
            // 0x1e9054: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9058u; }
        if (ctx->pc != 0x1E9058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9058u; }
        if (ctx->pc != 0x1E9058u) { return; }
    }
    ctx->pc = 0x1E9058u;
label_1e9058:
    // 0x1e9058: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1e9058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1e905c:
    // 0x1e905c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e905cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e9060:
    // 0x1e9060: 0xc0524c8  jal         func_149320
label_1e9064:
    if (ctx->pc == 0x1E9064u) {
        ctx->pc = 0x1E9064u;
            // 0x1e9064: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9068u;
        goto label_1e9068;
    }
    ctx->pc = 0x1E9060u;
    SET_GPR_U32(ctx, 31, 0x1E9068u);
    ctx->pc = 0x1E9064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9060u;
            // 0x1e9064: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9068u; }
        if (ctx->pc != 0x1E9068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9068u; }
        if (ctx->pc != 0x1E9068u) { return; }
    }
    ctx->pc = 0x1E9068u;
label_1e9068:
    // 0x1e9068: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e9068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e906c:
    // 0x1e906c: 0x3c0301ea  lui         $v1, 0x1EA
    ctx->pc = 0x1e906cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
label_1e9070:
    // 0x1e9070: 0x2463f720  addiu       $v1, $v1, -0x8E0
    ctx->pc = 0x1e9070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965024));
label_1e9074:
    // 0x1e9074: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1e9074u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1e9078:
    // 0x1e9078: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e9078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e907c:
    // 0x1e907c: 0x24c68368  addiu       $a2, $a2, -0x7C98
    ctx->pc = 0x1e907cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935400));
label_1e9080:
    // 0x1e9080: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1e9080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e9084:
    // 0x1e9084: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1e9084u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e9088:
    // 0x1e9088: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1e9088u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e908c:
    // 0x1e908c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1e908cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e9090:
    // 0x1e9090: 0xac4307cc  sw          $v1, 0x7CC($v0)
    ctx->pc = 0x1e9090u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1996), GPR_U32(ctx, 3));
label_1e9094:
    // 0x1e9094: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e9094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e9098:
    // 0x1e9098: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e9098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e909c:
    // 0x1e909c: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x1e909cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_1e90a0:
    // 0x1e90a0: 0x320f809  jalr        $t9
label_1e90a4:
    if (ctx->pc == 0x1E90A4u) {
        ctx->pc = 0x1E90A4u;
            // 0x1e90a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E90A8u;
        goto label_1e90a8;
    }
    ctx->pc = 0x1E90A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E90A8u);
        ctx->pc = 0x1E90A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E90A0u;
            // 0x1e90a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E90A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E90A8u; }
            if (ctx->pc != 0x1E90A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1E90A8u;
label_1e90a8:
    // 0x1e90a8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e90a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e90ac:
    // 0x1e90ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e90acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e90b0:
    // 0x1e90b0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1e90b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_1e90b4:
    // 0x1e90b4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1e90b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1e90b8:
    // 0x1e90b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e90b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e90bc:
    // 0x1e90bc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1e90bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1e90c0:
    // 0x1e90c0: 0x320f809  jalr        $t9
label_1e90c4:
    if (ctx->pc == 0x1E90C4u) {
        ctx->pc = 0x1E90C4u;
            // 0x1e90c4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1E90C8u;
        goto label_1e90c8;
    }
    ctx->pc = 0x1E90C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E90C8u);
        ctx->pc = 0x1E90C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E90C0u;
            // 0x1e90c4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E90C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E90C8u; }
            if (ctx->pc != 0x1E90C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1E90C8u;
label_1e90c8:
    // 0x1e90c8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e90c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e90cc:
    // 0x1e90cc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1e90ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1e90d0:
    // 0x1e90d0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x1e90d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1e90d4:
    // 0x1e90d4: 0xc066d24  jal         func_19B490
label_1e90d8:
    if (ctx->pc == 0x1E90D8u) {
        ctx->pc = 0x1E90D8u;
            // 0x1e90d8: 0xac5002e4  sw          $s0, 0x2E4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 740), GPR_U32(ctx, 16));
        ctx->pc = 0x1E90DCu;
        goto label_1e90dc;
    }
    ctx->pc = 0x1E90D4u;
    SET_GPR_U32(ctx, 31, 0x1E90DCu);
    ctx->pc = 0x1E90D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E90D4u;
            // 0x1e90d8: 0xac5002e4  sw          $s0, 0x2E4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 740), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E90DCu; }
        if (ctx->pc != 0x1E90DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E90DCu; }
        if (ctx->pc != 0x1E90DCu) { return; }
    }
    ctx->pc = 0x1E90DCu;
label_1e90dc:
    // 0x1e90dc: 0x84440322  lh          $a0, 0x322($v0)
    ctx->pc = 0x1e90dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 802)));
label_1e90e0:
    // 0x1e90e0: 0x24540170  addiu       $s4, $v0, 0x170
    ctx->pc = 0x1e90e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
label_1e90e4:
    // 0x1e90e4: 0xc065750  jal         func_195D40
label_1e90e8:
    if (ctx->pc == 0x1E90E8u) {
        ctx->pc = 0x1E90E8u;
            // 0x1e90e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E90ECu;
        goto label_1e90ec;
    }
    ctx->pc = 0x1E90E4u;
    SET_GPR_U32(ctx, 31, 0x1E90ECu);
    ctx->pc = 0x1E90E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E90E4u;
            // 0x1e90e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195D40u;
    if (runtime->hasFunction(0x195D40u)) {
        auto targetFn = runtime->lookupFunction(0x195D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E90ECu; }
        if (ctx->pc != 0x1E90ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFilePath__Fii_0x195d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E90ECu; }
        if (ctx->pc != 0x1E90ECu) { return; }
    }
    ctx->pc = 0x1E90ECu;
label_1e90ec:
    // 0x1e90ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e90ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e90f0:
    // 0x1e90f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e90f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e90f4:
    // 0x1e90f4: 0xc0524c8  jal         func_149320
label_1e90f8:
    if (ctx->pc == 0x1E90F8u) {
        ctx->pc = 0x1E90F8u;
            // 0x1e90f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E90FCu;
        goto label_1e90fc;
    }
    ctx->pc = 0x1E90F4u;
    SET_GPR_U32(ctx, 31, 0x1E90FCu);
    ctx->pc = 0x1E90F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E90F4u;
            // 0x1e90f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E90FCu; }
        if (ctx->pc != 0x1E90FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E90FCu; }
        if (ctx->pc != 0x1E90FCu) { return; }
    }
    ctx->pc = 0x1E90FCu;
label_1e90fc:
    // 0x1e90fc: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e90fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e9100:
    // 0x1e9100: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1e9100u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1e9104:
    // 0x1e9104: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x1e9104u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_1e9108:
    // 0x1e9108: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e9108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e910c:
    // 0x1e910c: 0x24c68368  addiu       $a2, $a2, -0x7C98
    ctx->pc = 0x1e910cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935400));
label_1e9110:
    // 0x1e9110: 0x24e78378  addiu       $a3, $a3, -0x7C88
    ctx->pc = 0x1e9110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935416));
label_1e9114:
    // 0x1e9114: 0x26280030  addiu       $t0, $s1, 0x30
    ctx->pc = 0x1e9114u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1e9118:
    // 0x1e9118: 0xc05d470  jal         func_1751C0
label_1e911c:
    if (ctx->pc == 0x1E911Cu) {
        ctx->pc = 0x1E911Cu;
            // 0x1e911c: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9120u;
        goto label_1e9120;
    }
    ctx->pc = 0x1E9118u;
    SET_GPR_U32(ctx, 31, 0x1E9120u);
    ctx->pc = 0x1E911Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9118u;
            // 0x1e911c: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1751C0u;
    if (runtime->hasFunction(0x1751C0u)) {
        auto targetFn = runtime->lookupFunction(0x1751C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9120u; }
        if (ctx->pc != 0x1E9120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSkin__11CCharacter2FPUiPcPcP9mgCMemoryi_0x1751c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9120u; }
        if (ctx->pc != 0x1E9120u) { return; }
    }
    ctx->pc = 0x1E9120u;
label_1e9120:
    // 0x1e9120: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x1e9120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1e9124:
    // 0x1e9124: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
label_1e9128:
    if (ctx->pc == 0x1E9128u) {
        ctx->pc = 0x1E912Cu;
        goto label_1e912c;
    }
    ctx->pc = 0x1E9124u;
    {
        const bool branch_taken_0x1e9124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9124) {
            ctx->pc = 0x1E9264u;
            goto label_1e9264;
        }
    }
    ctx->pc = 0x1E912Cu;
label_1e912c:
    // 0x1e912c: 0x86840002  lh          $a0, 0x2($s4)
    ctx->pc = 0x1e912cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_1e9130:
    // 0x1e9130: 0x18800023  blez        $a0, . + 4 + (0x23 << 2)
label_1e9134:
    if (ctx->pc == 0x1E9134u) {
        ctx->pc = 0x1E9134u;
            // 0x1e9134: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9138u;
        goto label_1e9138;
    }
    ctx->pc = 0x1E9130u;
    {
        const bool branch_taken_0x1e9130 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1E9134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9130u;
            // 0x1e9134: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9130) {
            ctx->pc = 0x1E91C0u;
            goto label_1e91c0;
        }
    }
    ctx->pc = 0x1E9138u;
label_1e9138:
    // 0x1e9138: 0xc065750  jal         func_195D40
label_1e913c:
    if (ctx->pc == 0x1E913Cu) {
        ctx->pc = 0x1E9140u;
        goto label_1e9140;
    }
    ctx->pc = 0x1E9138u;
    SET_GPR_U32(ctx, 31, 0x1E9140u);
    ctx->pc = 0x195D40u;
    if (runtime->hasFunction(0x195D40u)) {
        auto targetFn = runtime->lookupFunction(0x195D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9140u; }
        if (ctx->pc != 0x1E9140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFilePath__Fii_0x195d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9140u; }
        if (ctx->pc != 0x1E9140u) { return; }
    }
    ctx->pc = 0x1E9140u;
label_1e9140:
    // 0x1e9140: 0x8fb300b4  lw          $s3, 0xB4($sp)
    ctx->pc = 0x1e9140u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_1e9144:
    // 0x1e9144: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1e9144u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e9148:
    // 0x1e9148: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e9148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e914c:
    // 0x1e914c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1e914cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e9150:
    // 0x1e9150: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x1e9150u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_1e9154:
    // 0x1e9154: 0x320f809  jalr        $t9
label_1e9158:
    if (ctx->pc == 0x1E9158u) {
        ctx->pc = 0x1E9158u;
            // 0x1e9158: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E915Cu;
        goto label_1e915c;
    }
    ctx->pc = 0x1E9154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E915Cu);
        ctx->pc = 0x1E9158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9154u;
            // 0x1e9158: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E915Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E915Cu; }
            if (ctx->pc != 0x1E915Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E915Cu;
label_1e915c:
    // 0x1e915c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e915cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e9160:
    // 0x1e9160: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e9160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e9164:
    // 0x1e9164: 0xc0524c8  jal         func_149320
label_1e9168:
    if (ctx->pc == 0x1E9168u) {
        ctx->pc = 0x1E9168u;
            // 0x1e9168: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E916Cu;
        goto label_1e916c;
    }
    ctx->pc = 0x1E9164u;
    SET_GPR_U32(ctx, 31, 0x1E916Cu);
    ctx->pc = 0x1E9168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9164u;
            // 0x1e9168: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E916Cu; }
        if (ctx->pc != 0x1E916Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E916Cu; }
        if (ctx->pc != 0x1E916Cu) { return; }
    }
    ctx->pc = 0x1E916Cu;
label_1e916c:
    // 0x1e916c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1e916cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e9170:
    // 0x1e9170: 0x26270060  addiu       $a3, $s1, 0x60
    ctx->pc = 0x1e9170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_1e9174:
    // 0x1e9174: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1e9174u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1e9178:
    // 0x1e9178: 0x8fab00b0  lw          $t3, 0xB0($sp)
    ctx->pc = 0x1e9178u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e917c:
    // 0x1e917c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e917cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e9180:
    // 0x1e9180: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e9180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e9184:
    // 0x1e9184: 0x24c68368  addiu       $a2, $a2, -0x7C98
    ctx->pc = 0x1e9184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935400));
label_1e9188:
    // 0x1e9188: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1e9188u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e918c:
    // 0x1e918c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e918cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e9190:
    // 0x1e9190: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x1e9190u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_1e9194:
    // 0x1e9194: 0x320f809  jalr        $t9
label_1e9198:
    if (ctx->pc == 0x1E9198u) {
        ctx->pc = 0x1E9198u;
            // 0x1e9198: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E919Cu;
        goto label_1e919c;
    }
    ctx->pc = 0x1E9194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E919Cu);
        ctx->pc = 0x1E9198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9194u;
            // 0x1e9198: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E919Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E919Cu; }
            if (ctx->pc != 0x1E919Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E919Cu;
label_1e919c:
    // 0x1e919c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e919cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e91a0:
    // 0x1e91a0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1e91a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1e91a4:
    // 0x1e91a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e91a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e91a8:
    // 0x1e91a8: 0xc05af64  jal         func_16BD90
label_1e91ac:
    if (ctx->pc == 0x1E91ACu) {
        ctx->pc = 0x1E91ACu;
            // 0x1e91ac: 0x24c68380  addiu       $a2, $a2, -0x7C80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935424));
        ctx->pc = 0x1E91B0u;
        goto label_1e91b0;
    }
    ctx->pc = 0x1E91A8u;
    SET_GPR_U32(ctx, 31, 0x1E91B0u);
    ctx->pc = 0x1E91ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E91A8u;
            // 0x1e91ac: 0x24c68380  addiu       $a2, $a2, -0x7C80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    if (runtime->hasFunction(0x16BD90u)) {
        auto targetFn = runtime->lookupFunction(0x16BD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E91B0u; }
        if (ctx->pc != 0x1E91B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__12CActionCharaFP12CActionCharaPc_0x16bd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E91B0u; }
        if (ctx->pc != 0x1E91B0u) { return; }
    }
    ctx->pc = 0x1E91B0u;
label_1e91b0:
    // 0x1e91b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e91b4:
    if (ctx->pc == 0x1E91B4u) {
        ctx->pc = 0x1E91B4u;
            // 0x1e91b4: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x1E91B8u;
        goto label_1e91b8;
    }
    ctx->pc = 0x1E91B0u;
    {
        const bool branch_taken_0x1e91b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E91B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E91B0u;
            // 0x1e91b4: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e91b0) {
            ctx->pc = 0x1E91C0u;
            goto label_1e91c0;
        }
    }
    ctx->pc = 0x1E91B8u;
label_1e91b8:
    // 0x1e91b8: 0xc04a0d2  jal         func_128348
label_1e91bc:
    if (ctx->pc == 0x1E91BCu) {
        ctx->pc = 0x1E91BCu;
            // 0x1e91bc: 0x24848388  addiu       $a0, $a0, -0x7C78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935432));
        ctx->pc = 0x1E91C0u;
        goto label_1e91c0;
    }
    ctx->pc = 0x1E91B8u;
    SET_GPR_U32(ctx, 31, 0x1E91C0u);
    ctx->pc = 0x1E91BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E91B8u;
            // 0x1e91bc: 0x24848388  addiu       $a0, $a0, -0x7C78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E91C0u; }
        if (ctx->pc != 0x1E91C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E91C0u; }
        if (ctx->pc != 0x1E91C0u) { return; }
    }
    ctx->pc = 0x1E91C0u;
label_1e91c0:
    // 0x1e91c0: 0x8684006e  lh          $a0, 0x6E($s4)
    ctx->pc = 0x1e91c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 110)));
label_1e91c4:
    // 0x1e91c4: 0x18800023  blez        $a0, . + 4 + (0x23 << 2)
label_1e91c8:
    if (ctx->pc == 0x1E91C8u) {
        ctx->pc = 0x1E91C8u;
            // 0x1e91c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E91CCu;
        goto label_1e91cc;
    }
    ctx->pc = 0x1E91C4u;
    {
        const bool branch_taken_0x1e91c4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1E91C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E91C4u;
            // 0x1e91c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e91c4) {
            ctx->pc = 0x1E9254u;
            goto label_1e9254;
        }
    }
    ctx->pc = 0x1E91CCu;
label_1e91cc:
    // 0x1e91cc: 0xc065750  jal         func_195D40
label_1e91d0:
    if (ctx->pc == 0x1E91D0u) {
        ctx->pc = 0x1E91D4u;
        goto label_1e91d4;
    }
    ctx->pc = 0x1E91CCu;
    SET_GPR_U32(ctx, 31, 0x1E91D4u);
    ctx->pc = 0x195D40u;
    if (runtime->hasFunction(0x195D40u)) {
        auto targetFn = runtime->lookupFunction(0x195D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E91D4u; }
        if (ctx->pc != 0x1E91D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFilePath__Fii_0x195d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E91D4u; }
        if (ctx->pc != 0x1E91D4u) { return; }
    }
    ctx->pc = 0x1E91D4u;
label_1e91d4:
    // 0x1e91d4: 0x8fb300b8  lw          $s3, 0xB8($sp)
    ctx->pc = 0x1e91d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1e91d8:
    // 0x1e91d8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1e91d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e91dc:
    // 0x1e91dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e91dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e91e0:
    // 0x1e91e0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1e91e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e91e4:
    // 0x1e91e4: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x1e91e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_1e91e8:
    // 0x1e91e8: 0x320f809  jalr        $t9
label_1e91ec:
    if (ctx->pc == 0x1E91ECu) {
        ctx->pc = 0x1E91ECu;
            // 0x1e91ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E91F0u;
        goto label_1e91f0;
    }
    ctx->pc = 0x1E91E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E91F0u);
        ctx->pc = 0x1E91ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E91E8u;
            // 0x1e91ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E91F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E91F0u; }
            if (ctx->pc != 0x1E91F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1E91F0u;
label_1e91f0:
    // 0x1e91f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e91f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e91f4:
    // 0x1e91f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e91f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e91f8:
    // 0x1e91f8: 0xc0524c8  jal         func_149320
label_1e91fc:
    if (ctx->pc == 0x1E91FCu) {
        ctx->pc = 0x1E91FCu;
            // 0x1e91fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9200u;
        goto label_1e9200;
    }
    ctx->pc = 0x1E91F8u;
    SET_GPR_U32(ctx, 31, 0x1E9200u);
    ctx->pc = 0x1E91FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E91F8u;
            // 0x1e91fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9200u; }
        if (ctx->pc != 0x1E9200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9200u; }
        if (ctx->pc != 0x1E9200u) { return; }
    }
    ctx->pc = 0x1E9200u;
label_1e9200:
    // 0x1e9200: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1e9200u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e9204:
    // 0x1e9204: 0x26270090  addiu       $a3, $s1, 0x90
    ctx->pc = 0x1e9204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_1e9208:
    // 0x1e9208: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1e9208u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1e920c:
    // 0x1e920c: 0x8fab00b0  lw          $t3, 0xB0($sp)
    ctx->pc = 0x1e920cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e9210:
    // 0x1e9210: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e9210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e9214:
    // 0x1e9214: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e9214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e9218:
    // 0x1e9218: 0x24c68368  addiu       $a2, $a2, -0x7C98
    ctx->pc = 0x1e9218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935400));
label_1e921c:
    // 0x1e921c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1e921cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e9220:
    // 0x1e9220: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e9220u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e9224:
    // 0x1e9224: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x1e9224u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_1e9228:
    // 0x1e9228: 0x320f809  jalr        $t9
label_1e922c:
    if (ctx->pc == 0x1E922Cu) {
        ctx->pc = 0x1E922Cu;
            // 0x1e922c: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9230u;
        goto label_1e9230;
    }
    ctx->pc = 0x1E9228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E9230u);
        ctx->pc = 0x1E922Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9228u;
            // 0x1e922c: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E9230u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E9230u; }
            if (ctx->pc != 0x1E9230u) { return; }
        }
        }
    }
    ctx->pc = 0x1E9230u;
label_1e9230:
    // 0x1e9230: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e9230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e9234:
    // 0x1e9234: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1e9234u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1e9238:
    // 0x1e9238: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e9238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e923c:
    // 0x1e923c: 0xc05af64  jal         func_16BD90
label_1e9240:
    if (ctx->pc == 0x1E9240u) {
        ctx->pc = 0x1E9240u;
            // 0x1e9240: 0x24c68398  addiu       $a2, $a2, -0x7C68 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935448));
        ctx->pc = 0x1E9244u;
        goto label_1e9244;
    }
    ctx->pc = 0x1E923Cu;
    SET_GPR_U32(ctx, 31, 0x1E9244u);
    ctx->pc = 0x1E9240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E923Cu;
            // 0x1e9240: 0x24c68398  addiu       $a2, $a2, -0x7C68 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    if (runtime->hasFunction(0x16BD90u)) {
        auto targetFn = runtime->lookupFunction(0x16BD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9244u; }
        if (ctx->pc != 0x1E9244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__12CActionCharaFP12CActionCharaPc_0x16bd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9244u; }
        if (ctx->pc != 0x1E9244u) { return; }
    }
    ctx->pc = 0x1E9244u;
label_1e9244:
    // 0x1e9244: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e9248:
    if (ctx->pc == 0x1E9248u) {
        ctx->pc = 0x1E9248u;
            // 0x1e9248: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x1E924Cu;
        goto label_1e924c;
    }
    ctx->pc = 0x1E9244u;
    {
        const bool branch_taken_0x1e9244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9244u;
            // 0x1e9248: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9244) {
            ctx->pc = 0x1E9254u;
            goto label_1e9254;
        }
    }
    ctx->pc = 0x1E924Cu;
label_1e924c:
    // 0x1e924c: 0xc04a0d2  jal         func_128348
label_1e9250:
    if (ctx->pc == 0x1E9250u) {
        ctx->pc = 0x1E9250u;
            // 0x1e9250: 0x24848388  addiu       $a0, $a0, -0x7C78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935432));
        ctx->pc = 0x1E9254u;
        goto label_1e9254;
    }
    ctx->pc = 0x1E924Cu;
    SET_GPR_U32(ctx, 31, 0x1E9254u);
    ctx->pc = 0x1E9250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E924Cu;
            // 0x1e9250: 0x24848388  addiu       $a0, $a0, -0x7C78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9254u; }
        if (ctx->pc != 0x1E9254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9254u; }
        if (ctx->pc != 0x1E9254u) { return; }
    }
    ctx->pc = 0x1E9254u;
label_1e9254:
    // 0x1e9254: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e9254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e9258:
    // 0x1e9258: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x1e9258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_1e925c:
    // 0x1e925c: 0xc07a358  jal         func_1E8D60
label_1e9260:
    if (ctx->pc == 0x1E9260u) {
        ctx->pc = 0x1E9260u;
            // 0x1e9260: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9264u;
        goto label_1e9264;
    }
    ctx->pc = 0x1E925Cu;
    SET_GPR_U32(ctx, 31, 0x1E9264u);
    ctx->pc = 0x1E9260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E925Cu;
            // 0x1e9260: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8D60u;
    if (runtime->hasFunction(0x1E8D60u)) {
        auto targetFn = runtime->lookupFunction(0x1E8D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9264u; }
        if (ctx->pc != 0x1E9264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSwordBlurEffect__FP11CCharacter2P9mgCMemoryi_0x1e8d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9264u; }
        if (ctx->pc != 0x1E9264u) { return; }
    }
    ctx->pc = 0x1E9264u;
label_1e9264:
    // 0x1e9264: 0x868400da  lh          $a0, 0xDA($s4)
    ctx->pc = 0x1e9264u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 218)));
label_1e9268:
    // 0x1e9268: 0xc065750  jal         func_195D40
label_1e926c:
    if (ctx->pc == 0x1E926Cu) {
        ctx->pc = 0x1E926Cu;
            // 0x1e926c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9270u;
        goto label_1e9270;
    }
    ctx->pc = 0x1E9268u;
    SET_GPR_U32(ctx, 31, 0x1E9270u);
    ctx->pc = 0x1E926Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9268u;
            // 0x1e926c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195D40u;
    if (runtime->hasFunction(0x195D40u)) {
        auto targetFn = runtime->lookupFunction(0x195D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9270u; }
        if (ctx->pc != 0x1E9270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFilePath__Fii_0x195d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9270u; }
        if (ctx->pc != 0x1E9270u) { return; }
    }
    ctx->pc = 0x1E9270u;
label_1e9270:
    // 0x1e9270: 0x8fb300bc  lw          $s3, 0xBC($sp)
    ctx->pc = 0x1e9270u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1e9274:
    // 0x1e9274: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1e9274u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e9278:
    // 0x1e9278: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e9278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e927c:
    // 0x1e927c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1e927cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e9280:
    // 0x1e9280: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x1e9280u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_1e9284:
    // 0x1e9284: 0x320f809  jalr        $t9
label_1e9288:
    if (ctx->pc == 0x1E9288u) {
        ctx->pc = 0x1E9288u;
            // 0x1e9288: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E928Cu;
        goto label_1e928c;
    }
    ctx->pc = 0x1E9284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E928Cu);
        ctx->pc = 0x1E9288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9284u;
            // 0x1e9288: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E928Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E928Cu; }
            if (ctx->pc != 0x1E928Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E928Cu;
label_1e928c:
    // 0x1e928c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e928cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e9290:
    // 0x1e9290: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e9290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e9294:
    // 0x1e9294: 0xc0524c8  jal         func_149320
label_1e9298:
    if (ctx->pc == 0x1E9298u) {
        ctx->pc = 0x1E9298u;
            // 0x1e9298: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E929Cu;
        goto label_1e929c;
    }
    ctx->pc = 0x1E9294u;
    SET_GPR_U32(ctx, 31, 0x1E929Cu);
    ctx->pc = 0x1E9298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9294u;
            // 0x1e9298: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E929Cu; }
        if (ctx->pc != 0x1E929Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E929Cu; }
        if (ctx->pc != 0x1E929Cu) { return; }
    }
    ctx->pc = 0x1E929Cu;
label_1e929c:
    // 0x1e929c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1e929cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e92a0:
    // 0x1e92a0: 0x262700c0  addiu       $a3, $s1, 0xC0
    ctx->pc = 0x1e92a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_1e92a4:
    // 0x1e92a4: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1e92a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1e92a8:
    // 0x1e92a8: 0x8fab00b0  lw          $t3, 0xB0($sp)
    ctx->pc = 0x1e92a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e92ac:
    // 0x1e92ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e92acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e92b0:
    // 0x1e92b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e92b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e92b4:
    // 0x1e92b4: 0x24c68368  addiu       $a2, $a2, -0x7C98
    ctx->pc = 0x1e92b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935400));
label_1e92b8:
    // 0x1e92b8: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1e92b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e92bc:
    // 0x1e92bc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e92bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e92c0:
    // 0x1e92c0: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x1e92c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_1e92c4:
    // 0x1e92c4: 0x320f809  jalr        $t9
label_1e92c8:
    if (ctx->pc == 0x1E92C8u) {
        ctx->pc = 0x1E92C8u;
            // 0x1e92c8: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E92CCu;
        goto label_1e92cc;
    }
    ctx->pc = 0x1E92C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E92CCu);
        ctx->pc = 0x1E92C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E92C4u;
            // 0x1e92c8: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E92CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E92CCu; }
            if (ctx->pc != 0x1E92CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1E92CCu;
label_1e92cc:
    // 0x1e92cc: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e92ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e92d0:
    // 0x1e92d0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1e92d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1e92d4:
    // 0x1e92d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e92d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e92d8:
    // 0x1e92d8: 0xc05af64  jal         func_16BD90
label_1e92dc:
    if (ctx->pc == 0x1E92DCu) {
        ctx->pc = 0x1E92DCu;
            // 0x1e92dc: 0x24c683a8  addiu       $a2, $a2, -0x7C58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935464));
        ctx->pc = 0x1E92E0u;
        goto label_1e92e0;
    }
    ctx->pc = 0x1E92D8u;
    SET_GPR_U32(ctx, 31, 0x1E92E0u);
    ctx->pc = 0x1E92DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E92D8u;
            // 0x1e92dc: 0x24c683a8  addiu       $a2, $a2, -0x7C58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    if (runtime->hasFunction(0x16BD90u)) {
        auto targetFn = runtime->lookupFunction(0x16BD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E92E0u; }
        if (ctx->pc != 0x1E92E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__12CActionCharaFP12CActionCharaPc_0x16bd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E92E0u; }
        if (ctx->pc != 0x1E92E0u) { return; }
    }
    ctx->pc = 0x1E92E0u;
label_1e92e0:
    // 0x1e92e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e92e4:
    if (ctx->pc == 0x1E92E4u) {
        ctx->pc = 0x1E92E4u;
            // 0x1e92e4: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x1E92E8u;
        goto label_1e92e8;
    }
    ctx->pc = 0x1E92E0u;
    {
        const bool branch_taken_0x1e92e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E92E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E92E0u;
            // 0x1e92e4: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e92e0) {
            ctx->pc = 0x1E92F0u;
            goto label_1e92f0;
        }
    }
    ctx->pc = 0x1E92E8u;
label_1e92e8:
    // 0x1e92e8: 0xc04a0d2  jal         func_128348
label_1e92ec:
    if (ctx->pc == 0x1E92ECu) {
        ctx->pc = 0x1E92ECu;
            // 0x1e92ec: 0x24848388  addiu       $a0, $a0, -0x7C78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935432));
        ctx->pc = 0x1E92F0u;
        goto label_1e92f0;
    }
    ctx->pc = 0x1E92E8u;
    SET_GPR_U32(ctx, 31, 0x1E92F0u);
    ctx->pc = 0x1E92ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E92E8u;
            // 0x1e92ec: 0x24848388  addiu       $a0, $a0, -0x7C78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E92F0u; }
        if (ctx->pc != 0x1E92F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E92F0u; }
        if (ctx->pc != 0x1E92F0u) { return; }
    }
    ctx->pc = 0x1E92F0u;
label_1e92f0:
    // 0x1e92f0: 0x86840146  lh          $a0, 0x146($s4)
    ctx->pc = 0x1e92f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 326)));
label_1e92f4:
    // 0x1e92f4: 0xc065750  jal         func_195D40
label_1e92f8:
    if (ctx->pc == 0x1E92F8u) {
        ctx->pc = 0x1E92F8u;
            // 0x1e92f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E92FCu;
        goto label_1e92fc;
    }
    ctx->pc = 0x1E92F4u;
    SET_GPR_U32(ctx, 31, 0x1E92FCu);
    ctx->pc = 0x1E92F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E92F4u;
            // 0x1e92f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195D40u;
    if (runtime->hasFunction(0x195D40u)) {
        auto targetFn = runtime->lookupFunction(0x195D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E92FCu; }
        if (ctx->pc != 0x1E92FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFilePath__Fii_0x195d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E92FCu; }
        if (ctx->pc != 0x1E92FCu) { return; }
    }
    ctx->pc = 0x1E92FCu;
label_1e92fc:
    // 0x1e92fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e92fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e9300:
    // 0x1e9300: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e9300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e9304:
    // 0x1e9304: 0xc0524c8  jal         func_149320
label_1e9308:
    if (ctx->pc == 0x1E9308u) {
        ctx->pc = 0x1E9308u;
            // 0x1e9308: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E930Cu;
        goto label_1e930c;
    }
    ctx->pc = 0x1E9304u;
    SET_GPR_U32(ctx, 31, 0x1E930Cu);
    ctx->pc = 0x1E9308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9304u;
            // 0x1e9308: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E930Cu; }
        if (ctx->pc != 0x1E930Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E930Cu; }
        if (ctx->pc != 0x1E930Cu) { return; }
    }
    ctx->pc = 0x1E930Cu;
label_1e930c:
    // 0x1e930c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e930cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e9310:
    // 0x1e9310: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1e9310u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1e9314:
    // 0x1e9314: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x1e9314u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_1e9318:
    // 0x1e9318: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e9318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e931c:
    // 0x1e931c: 0x24c68368  addiu       $a2, $a2, -0x7C98
    ctx->pc = 0x1e931cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935400));
label_1e9320:
    // 0x1e9320: 0x24e78378  addiu       $a3, $a3, -0x7C88
    ctx->pc = 0x1e9320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935416));
label_1e9324:
    // 0x1e9324: 0x262800f0  addiu       $t0, $s1, 0xF0
    ctx->pc = 0x1e9324u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_1e9328:
    // 0x1e9328: 0xc05d470  jal         func_1751C0
label_1e932c:
    if (ctx->pc == 0x1E932Cu) {
        ctx->pc = 0x1E932Cu;
            // 0x1e932c: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9330u;
        goto label_1e9330;
    }
    ctx->pc = 0x1E9328u;
    SET_GPR_U32(ctx, 31, 0x1E9330u);
    ctx->pc = 0x1E932Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9328u;
            // 0x1e932c: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1751C0u;
    if (runtime->hasFunction(0x1751C0u)) {
        auto targetFn = runtime->lookupFunction(0x1751C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9330u; }
        if (ctx->pc != 0x1E9330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSkin__11CCharacter2FPUiPcPcP9mgCMemoryi_0x1751c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9330u; }
        if (ctx->pc != 0x1E9330u) { return; }
    }
    ctx->pc = 0x1E9330u;
label_1e9330:
    // 0x1e9330: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x1e9330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1e9334:
    // 0x1e9334: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1e9338:
    if (ctx->pc == 0x1E9338u) {
        ctx->pc = 0x1E9338u;
            // 0x1e9338: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x1E933Cu;
        goto label_1e933c;
    }
    ctx->pc = 0x1E9334u;
    {
        const bool branch_taken_0x1e9334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9334u;
            // 0x1e9338: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9334) {
            ctx->pc = 0x1E9368u;
            goto label_1e9368;
        }
    }
    ctx->pc = 0x1E933Cu;
label_1e933c:
    // 0x1e933c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e933cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e9340:
    // 0x1e9340: 0x248483b0  addiu       $a0, $a0, -0x7C50
    ctx->pc = 0x1e9340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935472));
label_1e9344:
    // 0x1e9344: 0xc0524c8  jal         func_149320
label_1e9348:
    if (ctx->pc == 0x1E9348u) {
        ctx->pc = 0x1E9348u;
            // 0x1e9348: 0x27a60290  addiu       $a2, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x1E934Cu;
        goto label_1e934c;
    }
    ctx->pc = 0x1E9344u;
    SET_GPR_U32(ctx, 31, 0x1E934Cu);
    ctx->pc = 0x1E9348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9344u;
            // 0x1e9348: 0x27a60290  addiu       $a2, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E934Cu; }
        if (ctx->pc != 0x1E934Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E934Cu; }
        if (ctx->pc != 0x1E934Cu) { return; }
    }
    ctx->pc = 0x1E934Cu;
label_1e934c:
    // 0x1e934c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e934cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e9350:
    // 0x1e9350: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e9350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e9354:
    // 0x1e9354: 0x8fa60290  lw          $a2, 0x290($sp)
    ctx->pc = 0x1e9354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_1e9358:
    // 0x1e9358: 0xc05c430  jal         func_1710C0
label_1e935c:
    if (ctx->pc == 0x1E935Cu) {
        ctx->pc = 0x1E935Cu;
            // 0x1e935c: 0x26270120  addiu       $a3, $s1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
        ctx->pc = 0x1E9360u;
        goto label_1e9360;
    }
    ctx->pc = 0x1E9358u;
    SET_GPR_U32(ctx, 31, 0x1E9360u);
    ctx->pc = 0x1E935Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9358u;
            // 0x1e935c: 0x26270120  addiu       $a3, $s1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1710C0u;
    if (runtime->hasFunction(0x1710C0u)) {
        auto targetFn = runtime->lookupFunction(0x1710C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9360u; }
        if (ctx->pc != 0x1E9360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadActionFile__12CActionCharaFPciP9mgCMemory_0x1710c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9360u; }
        if (ctx->pc != 0x1E9360u) { return; }
    }
    ctx->pc = 0x1E9360u;
label_1e9360:
    // 0x1e9360: 0xc05c458  jal         func_171160
label_1e9364:
    if (ctx->pc == 0x1E9364u) {
        ctx->pc = 0x1E9364u;
            // 0x1e9364: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x1E9368u;
        goto label_1e9368;
    }
    ctx->pc = 0x1E9360u;
    SET_GPR_U32(ctx, 31, 0x1E9368u);
    ctx->pc = 0x1E9364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9360u;
            // 0x1e9364: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171160u;
    if (runtime->hasFunction(0x171160u)) {
        auto targetFn = runtime->lookupFunction(0x171160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9368u; }
        if (ctx->pc != 0x1E9368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitScript__12CActionCharaFv_0x171160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9368u; }
        if (ctx->pc != 0x1E9368u) { return; }
    }
    ctx->pc = 0x1E9368u;
label_1e9368:
    // 0x1e9368: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x1e9368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1e936c:
    // 0x1e936c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1e936cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1e9370:
    // 0x1e9370: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e9370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9374:
    // 0x1e9374: 0xc07a750  jal         func_1E9D40
label_1e9378:
    if (ctx->pc == 0x1E9378u) {
        ctx->pc = 0x1E9378u;
            // 0x1e9378: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E937Cu;
        goto label_1e937c;
    }
    ctx->pc = 0x1E9374u;
    SET_GPR_U32(ctx, 31, 0x1E937Cu);
    ctx->pc = 0x1E9378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9374u;
            // 0x1e9378: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9D40u;
    if (runtime->hasFunction(0x1E9D40u)) {
        auto targetFn = runtime->lookupFunction(0x1E9D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E937Cu; }
        if (ctx->pc != 0x1E937Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetupUnitMan__FP6CSceneP16CUserDataManageriP14ROBO_INFO_DATA_0x1e9d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E937Cu; }
        if (ctx->pc != 0x1E937Cu) { return; }
    }
    ctx->pc = 0x1E937Cu;
label_1e937c:
    // 0x1e937c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e937cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e9380:
    // 0x1e9380: 0xac400670  sw          $zero, 0x670($v0)
    ctx->pc = 0x1e9380u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1648), GPR_U32(ctx, 0));
label_1e9384:
    // 0x1e9384: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e9384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e9388:
    // 0x1e9388: 0xac4006a8  sw          $zero, 0x6A8($v0)
    ctx->pc = 0x1e9388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1704), GPR_U32(ctx, 0));
label_1e938c:
    // 0x1e938c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e938cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9390:
    // 0x1e9390: 0x16e200ec  bne         $s7, $v0, . + 4 + (0xEC << 2)
label_1e9394:
    if (ctx->pc == 0x1E9394u) {
        ctx->pc = 0x1E9394u;
            // 0x1e9394: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1E9398u;
        goto label_1e9398;
    }
    ctx->pc = 0x1E9390u;
    {
        const bool branch_taken_0x1e9390 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E9394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9390u;
            // 0x1e9394: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9390) {
            ctx->pc = 0x1E9744u;
            goto label_1e9744;
        }
    }
    ctx->pc = 0x1E9398u;
label_1e9398:
    // 0x1e9398: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x1e9398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1e939c:
    // 0x1e939c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e939cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e93a0:
    // 0x1e93a0: 0x8fa700a4  lw          $a3, 0xA4($sp)
    ctx->pc = 0x1e93a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1e93a4:
    // 0x1e93a4: 0xc07a6f8  jal         func_1E9BE0
label_1e93a8:
    if (ctx->pc == 0x1E93A8u) {
        ctx->pc = 0x1E93A8u;
            // 0x1e93a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E93ACu;
        goto label_1e93ac;
    }
    ctx->pc = 0x1E93A4u;
    SET_GPR_U32(ctx, 31, 0x1E93ACu);
    ctx->pc = 0x1E93A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E93A4u;
            // 0x1e93a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9BE0u;
    if (runtime->hasFunction(0x1E9BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1E9BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E93ACu; }
        if (ctx->pc != 0x1E93ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaMemAllocPtr__FP9mgCMemoryP9mgCMemoryii_0x1e9be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E93ACu; }
        if (ctx->pc != 0x1E93ACu) { return; }
    }
    ctx->pc = 0x1E93ACu;
label_1e93ac:
    // 0x1e93ac: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e93acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e93b0:
    // 0x1e93b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e93b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e93b4:
    // 0x1e93b4: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x1e93b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_1e93b8:
    // 0x1e93b8: 0x320f809  jalr        $t9
label_1e93bc:
    if (ctx->pc == 0x1E93BCu) {
        ctx->pc = 0x1E93BCu;
            // 0x1e93bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E93C0u;
        goto label_1e93c0;
    }
    ctx->pc = 0x1E93B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E93C0u);
        ctx->pc = 0x1E93BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E93B8u;
            // 0x1e93bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E93C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E93C0u; }
            if (ctx->pc != 0x1E93C0u) { return; }
        }
        }
    }
    ctx->pc = 0x1E93C0u;
label_1e93c0:
    // 0x1e93c0: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x1e93c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1e93c4:
    // 0x1e93c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e93c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e93c8:
    // 0x1e93c8: 0xc0664fc  jal         func_1993F0
label_1e93cc:
    if (ctx->pc == 0x1E93CCu) {
        ctx->pc = 0x1E93CCu;
            // 0x1e93cc: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x1E93D0u;
        goto label_1e93d0;
    }
    ctx->pc = 0x1E93C8u;
    SET_GPR_U32(ctx, 31, 0x1E93D0u);
    ctx->pc = 0x1E93CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E93C8u;
            // 0x1e93cc: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1993F0u;
    if (runtime->hasFunction(0x1993F0u)) {
        auto targetFn = runtime->lookupFunction(0x1993F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E93D0u; }
        if (ctx->pc != 0x1E93D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainCharaModelName__FiPci_0x1993f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E93D0u; }
        if (ctx->pc != 0x1E93D0u) { return; }
    }
    ctx->pc = 0x1E93D0u;
label_1e93d0:
    // 0x1e93d0: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x1e93d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1e93d4:
    // 0x1e93d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1e93d8:
    if (ctx->pc == 0x1E93D8u) {
        ctx->pc = 0x1E93D8u;
            // 0x1e93d8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x1E93DCu;
        goto label_1e93dc;
    }
    ctx->pc = 0x1E93D4u;
    {
        const bool branch_taken_0x1e93d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E93D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E93D4u;
            // 0x1e93d8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e93d4) {
            ctx->pc = 0x1E9408u;
            goto label_1e9408;
        }
    }
    ctx->pc = 0x1E93DCu;
label_1e93dc:
    // 0x1e93dc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e93dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1e93e0:
    // 0x1e93e0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1e93e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1e93e4:
    // 0x1e93e4: 0x24a58348  addiu       $a1, $a1, -0x7CB8
    ctx->pc = 0x1e93e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935368));
label_1e93e8:
    // 0x1e93e8: 0xc04a234  jal         func_1288D0
label_1e93ec:
    if (ctx->pc == 0x1E93ECu) {
        ctx->pc = 0x1E93ECu;
            // 0x1e93ec: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x1E93F0u;
        goto label_1e93f0;
    }
    ctx->pc = 0x1E93E8u;
    SET_GPR_U32(ctx, 31, 0x1E93F0u);
    ctx->pc = 0x1E93ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E93E8u;
            // 0x1e93ec: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E93F0u; }
        if (ctx->pc != 0x1E93F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E93F0u; }
        if (ctx->pc != 0x1E93F0u) { return; }
    }
    ctx->pc = 0x1E93F0u;
label_1e93f0:
    // 0x1e93f0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1e93f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1e93f4:
    // 0x1e93f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e93f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e93f8:
    // 0x1e93f8: 0xc0524c8  jal         func_149320
label_1e93fc:
    if (ctx->pc == 0x1E93FCu) {
        ctx->pc = 0x1E93FCu;
            // 0x1e93fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9400u;
        goto label_1e9400;
    }
    ctx->pc = 0x1E93F8u;
    SET_GPR_U32(ctx, 31, 0x1E9400u);
    ctx->pc = 0x1E93FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E93F8u;
            // 0x1e93fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9400u; }
        if (ctx->pc != 0x1E9400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9400u; }
        if (ctx->pc != 0x1E9400u) { return; }
    }
    ctx->pc = 0x1E9400u;
label_1e9400:
    // 0x1e9400: 0x1000000a  b           . + 4 + (0xA << 2)
label_1e9404:
    if (ctx->pc == 0x1E9404u) {
        ctx->pc = 0x1E9404u;
            // 0x1e9404: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x1E9408u;
        goto label_1e9408;
    }
    ctx->pc = 0x1E9400u;
    {
        const bool branch_taken_0x1e9400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9400u;
            // 0x1e9404: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9400) {
            ctx->pc = 0x1E942Cu;
            goto label_1e942c;
        }
    }
    ctx->pc = 0x1E9408u;
label_1e9408:
    // 0x1e9408: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1e9408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1e940c:
    // 0x1e940c: 0x24a58358  addiu       $a1, $a1, -0x7CA8
    ctx->pc = 0x1e940cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935384));
label_1e9410:
    // 0x1e9410: 0xc04a234  jal         func_1288D0
label_1e9414:
    if (ctx->pc == 0x1E9414u) {
        ctx->pc = 0x1E9414u;
            // 0x1e9414: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x1E9418u;
        goto label_1e9418;
    }
    ctx->pc = 0x1E9410u;
    SET_GPR_U32(ctx, 31, 0x1E9418u);
    ctx->pc = 0x1E9414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9410u;
            // 0x1e9414: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9418u; }
        if (ctx->pc != 0x1E9418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9418u; }
        if (ctx->pc != 0x1E9418u) { return; }
    }
    ctx->pc = 0x1E9418u;
label_1e9418:
    // 0x1e9418: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1e9418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1e941c:
    // 0x1e941c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e941cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e9420:
    // 0x1e9420: 0xc0524c8  jal         func_149320
label_1e9424:
    if (ctx->pc == 0x1E9424u) {
        ctx->pc = 0x1E9424u;
            // 0x1e9424: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9428u;
        goto label_1e9428;
    }
    ctx->pc = 0x1E9420u;
    SET_GPR_U32(ctx, 31, 0x1E9428u);
    ctx->pc = 0x1E9424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9420u;
            // 0x1e9424: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9428u; }
        if (ctx->pc != 0x1E9428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9428u; }
        if (ctx->pc != 0x1E9428u) { return; }
    }
    ctx->pc = 0x1E9428u;
label_1e9428:
    // 0x1e9428: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e9428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e942c:
    // 0x1e942c: 0x3c0301ea  lui         $v1, 0x1EA
    ctx->pc = 0x1e942cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
label_1e9430:
    // 0x1e9430: 0x2463f720  addiu       $v1, $v1, -0x8E0
    ctx->pc = 0x1e9430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965024));
label_1e9434:
    // 0x1e9434: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1e9434u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1e9438:
    // 0x1e9438: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e9438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e943c:
    // 0x1e943c: 0x24c68368  addiu       $a2, $a2, -0x7C98
    ctx->pc = 0x1e943cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935400));
label_1e9440:
    // 0x1e9440: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1e9440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e9444:
    // 0x1e9444: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1e9444u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e9448:
    // 0x1e9448: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1e9448u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e944c:
    // 0x1e944c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1e944cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e9450:
    // 0x1e9450: 0xac4307cc  sw          $v1, 0x7CC($v0)
    ctx->pc = 0x1e9450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1996), GPR_U32(ctx, 3));
label_1e9454:
    // 0x1e9454: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e9454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e9458:
    // 0x1e9458: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e9458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e945c:
    // 0x1e945c: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x1e945cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_1e9460:
    // 0x1e9460: 0x320f809  jalr        $t9
label_1e9464:
    if (ctx->pc == 0x1E9464u) {
        ctx->pc = 0x1E9464u;
            // 0x1e9464: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9468u;
        goto label_1e9468;
    }
    ctx->pc = 0x1E9460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E9468u);
        ctx->pc = 0x1E9464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9460u;
            // 0x1e9464: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E9468u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E9468u; }
            if (ctx->pc != 0x1E9468u) { return; }
        }
        }
    }
    ctx->pc = 0x1E9468u;
label_1e9468:
    // 0x1e9468: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e9468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e946c:
    // 0x1e946c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e946cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e9470:
    // 0x1e9470: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1e9470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_1e9474:
    // 0x1e9474: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1e9474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1e9478:
    // 0x1e9478: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e9478u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e947c:
    // 0x1e947c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1e947cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1e9480:
    // 0x1e9480: 0x320f809  jalr        $t9
label_1e9484:
    if (ctx->pc == 0x1E9484u) {
        ctx->pc = 0x1E9484u;
            // 0x1e9484: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1E9488u;
        goto label_1e9488;
    }
    ctx->pc = 0x1E9480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E9488u);
        ctx->pc = 0x1E9484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9480u;
            // 0x1e9484: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E9488u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E9488u; }
            if (ctx->pc != 0x1E9488u) { return; }
        }
        }
    }
    ctx->pc = 0x1E9488u;
label_1e9488:
    // 0x1e9488: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e9488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e948c:
    // 0x1e948c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1e948cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1e9490:
    // 0x1e9490: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x1e9490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1e9494:
    // 0x1e9494: 0xc066d24  jal         func_19B490
label_1e9498:
    if (ctx->pc == 0x1E9498u) {
        ctx->pc = 0x1E9498u;
            // 0x1e9498: 0xac5002e4  sw          $s0, 0x2E4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 740), GPR_U32(ctx, 16));
        ctx->pc = 0x1E949Cu;
        goto label_1e949c;
    }
    ctx->pc = 0x1E9494u;
    SET_GPR_U32(ctx, 31, 0x1E949Cu);
    ctx->pc = 0x1E9498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9494u;
            // 0x1e9498: 0xac5002e4  sw          $s0, 0x2E4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 740), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E949Cu; }
        if (ctx->pc != 0x1E949Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E949Cu; }
        if (ctx->pc != 0x1E949Cu) { return; }
    }
    ctx->pc = 0x1E949Cu;
label_1e949c:
    // 0x1e949c: 0x84440322  lh          $a0, 0x322($v0)
    ctx->pc = 0x1e949cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 802)));
label_1e94a0:
    // 0x1e94a0: 0x24540170  addiu       $s4, $v0, 0x170
    ctx->pc = 0x1e94a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
label_1e94a4:
    // 0x1e94a4: 0xc065750  jal         func_195D40
label_1e94a8:
    if (ctx->pc == 0x1E94A8u) {
        ctx->pc = 0x1E94A8u;
            // 0x1e94a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E94ACu;
        goto label_1e94ac;
    }
    ctx->pc = 0x1E94A4u;
    SET_GPR_U32(ctx, 31, 0x1E94ACu);
    ctx->pc = 0x1E94A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E94A4u;
            // 0x1e94a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195D40u;
    if (runtime->hasFunction(0x195D40u)) {
        auto targetFn = runtime->lookupFunction(0x195D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E94ACu; }
        if (ctx->pc != 0x1E94ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFilePath__Fii_0x195d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E94ACu; }
        if (ctx->pc != 0x1E94ACu) { return; }
    }
    ctx->pc = 0x1E94ACu;
label_1e94ac:
    // 0x1e94ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e94acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e94b0:
    // 0x1e94b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e94b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e94b4:
    // 0x1e94b4: 0xc0524c8  jal         func_149320
label_1e94b8:
    if (ctx->pc == 0x1E94B8u) {
        ctx->pc = 0x1E94B8u;
            // 0x1e94b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E94BCu;
        goto label_1e94bc;
    }
    ctx->pc = 0x1E94B4u;
    SET_GPR_U32(ctx, 31, 0x1E94BCu);
    ctx->pc = 0x1E94B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E94B4u;
            // 0x1e94b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E94BCu; }
        if (ctx->pc != 0x1E94BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E94BCu; }
        if (ctx->pc != 0x1E94BCu) { return; }
    }
    ctx->pc = 0x1E94BCu;
label_1e94bc:
    // 0x1e94bc: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e94bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e94c0:
    // 0x1e94c0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1e94c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1e94c4:
    // 0x1e94c4: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x1e94c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_1e94c8:
    // 0x1e94c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e94c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e94cc:
    // 0x1e94cc: 0x24c68368  addiu       $a2, $a2, -0x7C98
    ctx->pc = 0x1e94ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935400));
label_1e94d0:
    // 0x1e94d0: 0x24e78378  addiu       $a3, $a3, -0x7C88
    ctx->pc = 0x1e94d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935416));
label_1e94d4:
    // 0x1e94d4: 0x26280030  addiu       $t0, $s1, 0x30
    ctx->pc = 0x1e94d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1e94d8:
    // 0x1e94d8: 0xc05d470  jal         func_1751C0
label_1e94dc:
    if (ctx->pc == 0x1E94DCu) {
        ctx->pc = 0x1E94DCu;
            // 0x1e94dc: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E94E0u;
        goto label_1e94e0;
    }
    ctx->pc = 0x1E94D8u;
    SET_GPR_U32(ctx, 31, 0x1E94E0u);
    ctx->pc = 0x1E94DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E94D8u;
            // 0x1e94dc: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1751C0u;
    if (runtime->hasFunction(0x1751C0u)) {
        auto targetFn = runtime->lookupFunction(0x1751C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E94E0u; }
        if (ctx->pc != 0x1E94E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSkin__11CCharacter2FPUiPcPcP9mgCMemoryi_0x1751c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E94E0u; }
        if (ctx->pc != 0x1E94E0u) { return; }
    }
    ctx->pc = 0x1E94E0u;
label_1e94e0:
    // 0x1e94e0: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x1e94e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1e94e4:
    // 0x1e94e4: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_1e94e8:
    if (ctx->pc == 0x1E94E8u) {
        ctx->pc = 0x1E94ECu;
        goto label_1e94ec;
    }
    ctx->pc = 0x1E94E4u;
    {
        const bool branch_taken_0x1e94e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e94e4) {
            ctx->pc = 0x1E9588u;
            goto label_1e9588;
        }
    }
    ctx->pc = 0x1E94ECu;
label_1e94ec:
    // 0x1e94ec: 0x86840002  lh          $a0, 0x2($s4)
    ctx->pc = 0x1e94ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_1e94f0:
    // 0x1e94f0: 0xc065750  jal         func_195D40
label_1e94f4:
    if (ctx->pc == 0x1E94F4u) {
        ctx->pc = 0x1E94F4u;
            // 0x1e94f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E94F8u;
        goto label_1e94f8;
    }
    ctx->pc = 0x1E94F0u;
    SET_GPR_U32(ctx, 31, 0x1E94F8u);
    ctx->pc = 0x1E94F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E94F0u;
            // 0x1e94f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195D40u;
    if (runtime->hasFunction(0x195D40u)) {
        auto targetFn = runtime->lookupFunction(0x195D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E94F8u; }
        if (ctx->pc != 0x1E94F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFilePath__Fii_0x195d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E94F8u; }
        if (ctx->pc != 0x1E94F8u) { return; }
    }
    ctx->pc = 0x1E94F8u;
label_1e94f8:
    // 0x1e94f8: 0x8fb300b4  lw          $s3, 0xB4($sp)
    ctx->pc = 0x1e94f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_1e94fc:
    // 0x1e94fc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1e94fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e9500:
    // 0x1e9500: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e9500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9504:
    // 0x1e9504: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1e9504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e9508:
    // 0x1e9508: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x1e9508u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_1e950c:
    // 0x1e950c: 0x320f809  jalr        $t9
label_1e9510:
    if (ctx->pc == 0x1E9510u) {
        ctx->pc = 0x1E9510u;
            // 0x1e9510: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9514u;
        goto label_1e9514;
    }
    ctx->pc = 0x1E950Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E9514u);
        ctx->pc = 0x1E9510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E950Cu;
            // 0x1e9510: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E9514u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E9514u; }
            if (ctx->pc != 0x1E9514u) { return; }
        }
        }
    }
    ctx->pc = 0x1E9514u;
label_1e9514:
    // 0x1e9514: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e9514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e9518:
    // 0x1e9518: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e9518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e951c:
    // 0x1e951c: 0xc0524c8  jal         func_149320
label_1e9520:
    if (ctx->pc == 0x1E9520u) {
        ctx->pc = 0x1E9520u;
            // 0x1e9520: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9524u;
        goto label_1e9524;
    }
    ctx->pc = 0x1E951Cu;
    SET_GPR_U32(ctx, 31, 0x1E9524u);
    ctx->pc = 0x1E9520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E951Cu;
            // 0x1e9520: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9524u; }
        if (ctx->pc != 0x1E9524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9524u; }
        if (ctx->pc != 0x1E9524u) { return; }
    }
    ctx->pc = 0x1E9524u;
label_1e9524:
    // 0x1e9524: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1e9524u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e9528:
    // 0x1e9528: 0x26270060  addiu       $a3, $s1, 0x60
    ctx->pc = 0x1e9528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_1e952c:
    // 0x1e952c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1e952cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1e9530:
    // 0x1e9530: 0x8fab00b0  lw          $t3, 0xB0($sp)
    ctx->pc = 0x1e9530u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e9534:
    // 0x1e9534: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e9534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e9538:
    // 0x1e9538: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e9538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e953c:
    // 0x1e953c: 0x24c68368  addiu       $a2, $a2, -0x7C98
    ctx->pc = 0x1e953cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935400));
label_1e9540:
    // 0x1e9540: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1e9540u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e9544:
    // 0x1e9544: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e9544u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e9548:
    // 0x1e9548: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x1e9548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_1e954c:
    // 0x1e954c: 0x320f809  jalr        $t9
label_1e9550:
    if (ctx->pc == 0x1E9550u) {
        ctx->pc = 0x1E9550u;
            // 0x1e9550: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9554u;
        goto label_1e9554;
    }
    ctx->pc = 0x1E954Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E9554u);
        ctx->pc = 0x1E9550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E954Cu;
            // 0x1e9550: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E9554u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E9554u; }
            if (ctx->pc != 0x1E9554u) { return; }
        }
        }
    }
    ctx->pc = 0x1E9554u;
label_1e9554:
    // 0x1e9554: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e9554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e9558:
    // 0x1e9558: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1e9558u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1e955c:
    // 0x1e955c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e955cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e9560:
    // 0x1e9560: 0xc05af64  jal         func_16BD90
label_1e9564:
    if (ctx->pc == 0x1E9564u) {
        ctx->pc = 0x1E9564u;
            // 0x1e9564: 0x24c683c0  addiu       $a2, $a2, -0x7C40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935488));
        ctx->pc = 0x1E9568u;
        goto label_1e9568;
    }
    ctx->pc = 0x1E9560u;
    SET_GPR_U32(ctx, 31, 0x1E9568u);
    ctx->pc = 0x1E9564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9560u;
            // 0x1e9564: 0x24c683c0  addiu       $a2, $a2, -0x7C40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    if (runtime->hasFunction(0x16BD90u)) {
        auto targetFn = runtime->lookupFunction(0x16BD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9568u; }
        if (ctx->pc != 0x1E9568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__12CActionCharaFP12CActionCharaPc_0x16bd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9568u; }
        if (ctx->pc != 0x1E9568u) { return; }
    }
    ctx->pc = 0x1E9568u;
label_1e9568:
    // 0x1e9568: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e956c:
    if (ctx->pc == 0x1E956Cu) {
        ctx->pc = 0x1E956Cu;
            // 0x1e956c: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x1E9570u;
        goto label_1e9570;
    }
    ctx->pc = 0x1E9568u;
    {
        const bool branch_taken_0x1e9568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E956Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9568u;
            // 0x1e956c: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9568) {
            ctx->pc = 0x1E9578u;
            goto label_1e9578;
        }
    }
    ctx->pc = 0x1E9570u;
label_1e9570:
    // 0x1e9570: 0xc04a0d2  jal         func_128348
label_1e9574:
    if (ctx->pc == 0x1E9574u) {
        ctx->pc = 0x1E9574u;
            // 0x1e9574: 0x24848388  addiu       $a0, $a0, -0x7C78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935432));
        ctx->pc = 0x1E9578u;
        goto label_1e9578;
    }
    ctx->pc = 0x1E9570u;
    SET_GPR_U32(ctx, 31, 0x1E9578u);
    ctx->pc = 0x1E9574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9570u;
            // 0x1e9574: 0x24848388  addiu       $a0, $a0, -0x7C78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9578u; }
        if (ctx->pc != 0x1E9578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9578u; }
        if (ctx->pc != 0x1E9578u) { return; }
    }
    ctx->pc = 0x1E9578u;
label_1e9578:
    // 0x1e9578: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e9578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e957c:
    // 0x1e957c: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x1e957cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_1e9580:
    // 0x1e9580: 0xc07a358  jal         func_1E8D60
label_1e9584:
    if (ctx->pc == 0x1E9584u) {
        ctx->pc = 0x1E9584u;
            // 0x1e9584: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9588u;
        goto label_1e9588;
    }
    ctx->pc = 0x1E9580u;
    SET_GPR_U32(ctx, 31, 0x1E9588u);
    ctx->pc = 0x1E9584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9580u;
            // 0x1e9584: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8D60u;
    if (runtime->hasFunction(0x1E8D60u)) {
        auto targetFn = runtime->lookupFunction(0x1E8D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9588u; }
        if (ctx->pc != 0x1E9588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSwordBlurEffect__FP11CCharacter2P9mgCMemoryi_0x1e8d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9588u; }
        if (ctx->pc != 0x1E9588u) { return; }
    }
    ctx->pc = 0x1E9588u;
label_1e9588:
    // 0x1e9588: 0x8684006e  lh          $a0, 0x6E($s4)
    ctx->pc = 0x1e9588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 110)));
label_1e958c:
    // 0x1e958c: 0xc065750  jal         func_195D40
label_1e9590:
    if (ctx->pc == 0x1E9590u) {
        ctx->pc = 0x1E9590u;
            // 0x1e9590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9594u;
        goto label_1e9594;
    }
    ctx->pc = 0x1E958Cu;
    SET_GPR_U32(ctx, 31, 0x1E9594u);
    ctx->pc = 0x1E9590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E958Cu;
            // 0x1e9590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195D40u;
    if (runtime->hasFunction(0x195D40u)) {
        auto targetFn = runtime->lookupFunction(0x195D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9594u; }
        if (ctx->pc != 0x1E9594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFilePath__Fii_0x195d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9594u; }
        if (ctx->pc != 0x1E9594u) { return; }
    }
    ctx->pc = 0x1E9594u;
label_1e9594:
    // 0x1e9594: 0x8fb300b8  lw          $s3, 0xB8($sp)
    ctx->pc = 0x1e9594u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1e9598:
    // 0x1e9598: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1e9598u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e959c:
    // 0x1e959c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e959cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e95a0:
    // 0x1e95a0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1e95a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e95a4:
    // 0x1e95a4: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x1e95a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_1e95a8:
    // 0x1e95a8: 0x320f809  jalr        $t9
label_1e95ac:
    if (ctx->pc == 0x1E95ACu) {
        ctx->pc = 0x1E95ACu;
            // 0x1e95ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E95B0u;
        goto label_1e95b0;
    }
    ctx->pc = 0x1E95A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E95B0u);
        ctx->pc = 0x1E95ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E95A8u;
            // 0x1e95ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E95B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E95B0u; }
            if (ctx->pc != 0x1E95B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1E95B0u;
label_1e95b0:
    // 0x1e95b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e95b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e95b4:
    // 0x1e95b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e95b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e95b8:
    // 0x1e95b8: 0xc0524c8  jal         func_149320
label_1e95bc:
    if (ctx->pc == 0x1E95BCu) {
        ctx->pc = 0x1E95BCu;
            // 0x1e95bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E95C0u;
        goto label_1e95c0;
    }
    ctx->pc = 0x1E95B8u;
    SET_GPR_U32(ctx, 31, 0x1E95C0u);
    ctx->pc = 0x1E95BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E95B8u;
            // 0x1e95bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E95C0u; }
        if (ctx->pc != 0x1E95C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E95C0u; }
        if (ctx->pc != 0x1E95C0u) { return; }
    }
    ctx->pc = 0x1E95C0u;
label_1e95c0:
    // 0x1e95c0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1e95c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e95c4:
    // 0x1e95c4: 0x26270090  addiu       $a3, $s1, 0x90
    ctx->pc = 0x1e95c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_1e95c8:
    // 0x1e95c8: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1e95c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1e95cc:
    // 0x1e95cc: 0x8fab00b0  lw          $t3, 0xB0($sp)
    ctx->pc = 0x1e95ccu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e95d0:
    // 0x1e95d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e95d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e95d4:
    // 0x1e95d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e95d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e95d8:
    // 0x1e95d8: 0x24c68368  addiu       $a2, $a2, -0x7C98
    ctx->pc = 0x1e95d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935400));
label_1e95dc:
    // 0x1e95dc: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1e95dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e95e0:
    // 0x1e95e0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e95e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e95e4:
    // 0x1e95e4: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x1e95e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_1e95e8:
    // 0x1e95e8: 0x320f809  jalr        $t9
label_1e95ec:
    if (ctx->pc == 0x1E95ECu) {
        ctx->pc = 0x1E95ECu;
            // 0x1e95ec: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E95F0u;
        goto label_1e95f0;
    }
    ctx->pc = 0x1E95E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E95F0u);
        ctx->pc = 0x1E95ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E95E8u;
            // 0x1e95ec: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E95F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E95F0u; }
            if (ctx->pc != 0x1E95F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1E95F0u;
label_1e95f0:
    // 0x1e95f0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e95f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e95f4:
    // 0x1e95f4: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1e95f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1e95f8:
    // 0x1e95f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e95f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e95fc:
    // 0x1e95fc: 0xc05af64  jal         func_16BD90
label_1e9600:
    if (ctx->pc == 0x1E9600u) {
        ctx->pc = 0x1E9600u;
            // 0x1e9600: 0x24c683d0  addiu       $a2, $a2, -0x7C30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935504));
        ctx->pc = 0x1E9604u;
        goto label_1e9604;
    }
    ctx->pc = 0x1E95FCu;
    SET_GPR_U32(ctx, 31, 0x1E9604u);
    ctx->pc = 0x1E9600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E95FCu;
            // 0x1e9600: 0x24c683d0  addiu       $a2, $a2, -0x7C30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    if (runtime->hasFunction(0x16BD90u)) {
        auto targetFn = runtime->lookupFunction(0x16BD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9604u; }
        if (ctx->pc != 0x1E9604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__12CActionCharaFP12CActionCharaPc_0x16bd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9604u; }
        if (ctx->pc != 0x1E9604u) { return; }
    }
    ctx->pc = 0x1E9604u;
label_1e9604:
    // 0x1e9604: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e9608:
    if (ctx->pc == 0x1E9608u) {
        ctx->pc = 0x1E9608u;
            // 0x1e9608: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x1E960Cu;
        goto label_1e960c;
    }
    ctx->pc = 0x1E9604u;
    {
        const bool branch_taken_0x1e9604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9604u;
            // 0x1e9608: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9604) {
            ctx->pc = 0x1E9614u;
            goto label_1e9614;
        }
    }
    ctx->pc = 0x1E960Cu;
label_1e960c:
    // 0x1e960c: 0xc04a0d2  jal         func_128348
label_1e9610:
    if (ctx->pc == 0x1E9610u) {
        ctx->pc = 0x1E9610u;
            // 0x1e9610: 0x24848388  addiu       $a0, $a0, -0x7C78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935432));
        ctx->pc = 0x1E9614u;
        goto label_1e9614;
    }
    ctx->pc = 0x1E960Cu;
    SET_GPR_U32(ctx, 31, 0x1E9614u);
    ctx->pc = 0x1E9610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E960Cu;
            // 0x1e9610: 0x24848388  addiu       $a0, $a0, -0x7C78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9614u; }
        if (ctx->pc != 0x1E9614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9614u; }
        if (ctx->pc != 0x1E9614u) { return; }
    }
    ctx->pc = 0x1E9614u;
label_1e9614:
    // 0x1e9614: 0x868400da  lh          $a0, 0xDA($s4)
    ctx->pc = 0x1e9614u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 218)));
label_1e9618:
    // 0x1e9618: 0xc065750  jal         func_195D40
label_1e961c:
    if (ctx->pc == 0x1E961Cu) {
        ctx->pc = 0x1E961Cu;
            // 0x1e961c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9620u;
        goto label_1e9620;
    }
    ctx->pc = 0x1E9618u;
    SET_GPR_U32(ctx, 31, 0x1E9620u);
    ctx->pc = 0x1E961Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9618u;
            // 0x1e961c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195D40u;
    if (runtime->hasFunction(0x195D40u)) {
        auto targetFn = runtime->lookupFunction(0x195D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9620u; }
        if (ctx->pc != 0x1E9620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFilePath__Fii_0x195d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9620u; }
        if (ctx->pc != 0x1E9620u) { return; }
    }
    ctx->pc = 0x1E9620u;
label_1e9620:
    // 0x1e9620: 0x8fb300bc  lw          $s3, 0xBC($sp)
    ctx->pc = 0x1e9620u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1e9624:
    // 0x1e9624: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1e9624u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e9628:
    // 0x1e9628: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e9628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e962c:
    // 0x1e962c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1e962cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e9630:
    // 0x1e9630: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x1e9630u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_1e9634:
    // 0x1e9634: 0x320f809  jalr        $t9
label_1e9638:
    if (ctx->pc == 0x1E9638u) {
        ctx->pc = 0x1E9638u;
            // 0x1e9638: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E963Cu;
        goto label_1e963c;
    }
    ctx->pc = 0x1E9634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E963Cu);
        ctx->pc = 0x1E9638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9634u;
            // 0x1e9638: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E963Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E963Cu; }
            if (ctx->pc != 0x1E963Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E963Cu;
label_1e963c:
    // 0x1e963c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e963cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e9640:
    // 0x1e9640: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e9640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e9644:
    // 0x1e9644: 0xc0524c8  jal         func_149320
label_1e9648:
    if (ctx->pc == 0x1E9648u) {
        ctx->pc = 0x1E9648u;
            // 0x1e9648: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E964Cu;
        goto label_1e964c;
    }
    ctx->pc = 0x1E9644u;
    SET_GPR_U32(ctx, 31, 0x1E964Cu);
    ctx->pc = 0x1E9648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9644u;
            // 0x1e9648: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E964Cu; }
        if (ctx->pc != 0x1E964Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E964Cu; }
        if (ctx->pc != 0x1E964Cu) { return; }
    }
    ctx->pc = 0x1E964Cu;
label_1e964c:
    // 0x1e964c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1e964cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e9650:
    // 0x1e9650: 0x262700c0  addiu       $a3, $s1, 0xC0
    ctx->pc = 0x1e9650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_1e9654:
    // 0x1e9654: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1e9654u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1e9658:
    // 0x1e9658: 0x8fab00b0  lw          $t3, 0xB0($sp)
    ctx->pc = 0x1e9658u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e965c:
    // 0x1e965c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e965cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e9660:
    // 0x1e9660: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e9660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e9664:
    // 0x1e9664: 0x24c68368  addiu       $a2, $a2, -0x7C98
    ctx->pc = 0x1e9664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935400));
label_1e9668:
    // 0x1e9668: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1e9668u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e966c:
    // 0x1e966c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e966cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e9670:
    // 0x1e9670: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x1e9670u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_1e9674:
    // 0x1e9674: 0x320f809  jalr        $t9
label_1e9678:
    if (ctx->pc == 0x1E9678u) {
        ctx->pc = 0x1E9678u;
            // 0x1e9678: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E967Cu;
        goto label_1e967c;
    }
    ctx->pc = 0x1E9674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E967Cu);
        ctx->pc = 0x1E9678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9674u;
            // 0x1e9678: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E967Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E967Cu; }
            if (ctx->pc != 0x1E967Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E967Cu;
label_1e967c:
    // 0x1e967c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e967cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e9680:
    // 0x1e9680: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1e9680u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1e9684:
    // 0x1e9684: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e9684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e9688:
    // 0x1e9688: 0xc05af64  jal         func_16BD90
label_1e968c:
    if (ctx->pc == 0x1E968Cu) {
        ctx->pc = 0x1E968Cu;
            // 0x1e968c: 0x24c683d8  addiu       $a2, $a2, -0x7C28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935512));
        ctx->pc = 0x1E9690u;
        goto label_1e9690;
    }
    ctx->pc = 0x1E9688u;
    SET_GPR_U32(ctx, 31, 0x1E9690u);
    ctx->pc = 0x1E968Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9688u;
            // 0x1e968c: 0x24c683d8  addiu       $a2, $a2, -0x7C28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    if (runtime->hasFunction(0x16BD90u)) {
        auto targetFn = runtime->lookupFunction(0x16BD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9690u; }
        if (ctx->pc != 0x1E9690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__12CActionCharaFP12CActionCharaPc_0x16bd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9690u; }
        if (ctx->pc != 0x1E9690u) { return; }
    }
    ctx->pc = 0x1E9690u;
label_1e9690:
    // 0x1e9690: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e9694:
    if (ctx->pc == 0x1E9694u) {
        ctx->pc = 0x1E9694u;
            // 0x1e9694: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x1E9698u;
        goto label_1e9698;
    }
    ctx->pc = 0x1E9690u;
    {
        const bool branch_taken_0x1e9690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9690u;
            // 0x1e9694: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9690) {
            ctx->pc = 0x1E96A0u;
            goto label_1e96a0;
        }
    }
    ctx->pc = 0x1E9698u;
label_1e9698:
    // 0x1e9698: 0xc04a0d2  jal         func_128348
label_1e969c:
    if (ctx->pc == 0x1E969Cu) {
        ctx->pc = 0x1E969Cu;
            // 0x1e969c: 0x24848388  addiu       $a0, $a0, -0x7C78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935432));
        ctx->pc = 0x1E96A0u;
        goto label_1e96a0;
    }
    ctx->pc = 0x1E9698u;
    SET_GPR_U32(ctx, 31, 0x1E96A0u);
    ctx->pc = 0x1E969Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9698u;
            // 0x1e969c: 0x24848388  addiu       $a0, $a0, -0x7C78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96A0u; }
        if (ctx->pc != 0x1E96A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96A0u; }
        if (ctx->pc != 0x1E96A0u) { return; }
    }
    ctx->pc = 0x1E96A0u;
label_1e96a0:
    // 0x1e96a0: 0x86840146  lh          $a0, 0x146($s4)
    ctx->pc = 0x1e96a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 326)));
label_1e96a4:
    // 0x1e96a4: 0xc065750  jal         func_195D40
label_1e96a8:
    if (ctx->pc == 0x1E96A8u) {
        ctx->pc = 0x1E96A8u;
            // 0x1e96a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E96ACu;
        goto label_1e96ac;
    }
    ctx->pc = 0x1E96A4u;
    SET_GPR_U32(ctx, 31, 0x1E96ACu);
    ctx->pc = 0x1E96A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E96A4u;
            // 0x1e96a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195D40u;
    if (runtime->hasFunction(0x195D40u)) {
        auto targetFn = runtime->lookupFunction(0x195D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96ACu; }
        if (ctx->pc != 0x1E96ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFilePath__Fii_0x195d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96ACu; }
        if (ctx->pc != 0x1E96ACu) { return; }
    }
    ctx->pc = 0x1E96ACu;
label_1e96ac:
    // 0x1e96ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e96acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e96b0:
    // 0x1e96b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e96b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e96b4:
    // 0x1e96b4: 0xc0524c8  jal         func_149320
label_1e96b8:
    if (ctx->pc == 0x1E96B8u) {
        ctx->pc = 0x1E96B8u;
            // 0x1e96b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E96BCu;
        goto label_1e96bc;
    }
    ctx->pc = 0x1E96B4u;
    SET_GPR_U32(ctx, 31, 0x1E96BCu);
    ctx->pc = 0x1E96B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E96B4u;
            // 0x1e96b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96BCu; }
        if (ctx->pc != 0x1E96BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96BCu; }
        if (ctx->pc != 0x1E96BCu) { return; }
    }
    ctx->pc = 0x1E96BCu;
label_1e96bc:
    // 0x1e96bc: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e96bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e96c0:
    // 0x1e96c0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1e96c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1e96c4:
    // 0x1e96c4: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x1e96c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_1e96c8:
    // 0x1e96c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e96c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e96cc:
    // 0x1e96cc: 0x24c68368  addiu       $a2, $a2, -0x7C98
    ctx->pc = 0x1e96ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935400));
label_1e96d0:
    // 0x1e96d0: 0x24e78378  addiu       $a3, $a3, -0x7C88
    ctx->pc = 0x1e96d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935416));
label_1e96d4:
    // 0x1e96d4: 0x262800f0  addiu       $t0, $s1, 0xF0
    ctx->pc = 0x1e96d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_1e96d8:
    // 0x1e96d8: 0xc05d470  jal         func_1751C0
label_1e96dc:
    if (ctx->pc == 0x1E96DCu) {
        ctx->pc = 0x1E96DCu;
            // 0x1e96dc: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E96E0u;
        goto label_1e96e0;
    }
    ctx->pc = 0x1E96D8u;
    SET_GPR_U32(ctx, 31, 0x1E96E0u);
    ctx->pc = 0x1E96DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E96D8u;
            // 0x1e96dc: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1751C0u;
    if (runtime->hasFunction(0x1751C0u)) {
        auto targetFn = runtime->lookupFunction(0x1751C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96E0u; }
        if (ctx->pc != 0x1E96E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSkin__11CCharacter2FPUiPcPcP9mgCMemoryi_0x1751c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96E0u; }
        if (ctx->pc != 0x1E96E0u) { return; }
    }
    ctx->pc = 0x1E96E0u;
label_1e96e0:
    // 0x1e96e0: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x1e96e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1e96e4:
    // 0x1e96e4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1e96e8:
    if (ctx->pc == 0x1E96E8u) {
        ctx->pc = 0x1E96E8u;
            // 0x1e96e8: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x1E96ECu;
        goto label_1e96ec;
    }
    ctx->pc = 0x1E96E4u;
    {
        const bool branch_taken_0x1e96e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E96E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E96E4u;
            // 0x1e96e8: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e96e4) {
            ctx->pc = 0x1E9718u;
            goto label_1e9718;
        }
    }
    ctx->pc = 0x1E96ECu;
label_1e96ec:
    // 0x1e96ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e96ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e96f0:
    // 0x1e96f0: 0x248483e0  addiu       $a0, $a0, -0x7C20
    ctx->pc = 0x1e96f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935520));
label_1e96f4:
    // 0x1e96f4: 0xc0524c8  jal         func_149320
label_1e96f8:
    if (ctx->pc == 0x1E96F8u) {
        ctx->pc = 0x1E96F8u;
            // 0x1e96f8: 0x27a60294  addiu       $a2, $sp, 0x294 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 660));
        ctx->pc = 0x1E96FCu;
        goto label_1e96fc;
    }
    ctx->pc = 0x1E96F4u;
    SET_GPR_U32(ctx, 31, 0x1E96FCu);
    ctx->pc = 0x1E96F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E96F4u;
            // 0x1e96f8: 0x27a60294  addiu       $a2, $sp, 0x294 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 660));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96FCu; }
        if (ctx->pc != 0x1E96FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96FCu; }
        if (ctx->pc != 0x1E96FCu) { return; }
    }
    ctx->pc = 0x1E96FCu;
label_1e96fc:
    // 0x1e96fc: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e96fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e9700:
    // 0x1e9700: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e9700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e9704:
    // 0x1e9704: 0x8fa60294  lw          $a2, 0x294($sp)
    ctx->pc = 0x1e9704u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
label_1e9708:
    // 0x1e9708: 0xc05c430  jal         func_1710C0
label_1e970c:
    if (ctx->pc == 0x1E970Cu) {
        ctx->pc = 0x1E970Cu;
            // 0x1e970c: 0x26270120  addiu       $a3, $s1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
        ctx->pc = 0x1E9710u;
        goto label_1e9710;
    }
    ctx->pc = 0x1E9708u;
    SET_GPR_U32(ctx, 31, 0x1E9710u);
    ctx->pc = 0x1E970Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9708u;
            // 0x1e970c: 0x26270120  addiu       $a3, $s1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1710C0u;
    if (runtime->hasFunction(0x1710C0u)) {
        auto targetFn = runtime->lookupFunction(0x1710C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9710u; }
        if (ctx->pc != 0x1E9710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadActionFile__12CActionCharaFPciP9mgCMemory_0x1710c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9710u; }
        if (ctx->pc != 0x1E9710u) { return; }
    }
    ctx->pc = 0x1E9710u;
label_1e9710:
    // 0x1e9710: 0xc05c458  jal         func_171160
label_1e9714:
    if (ctx->pc == 0x1E9714u) {
        ctx->pc = 0x1E9714u;
            // 0x1e9714: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x1E9718u;
        goto label_1e9718;
    }
    ctx->pc = 0x1E9710u;
    SET_GPR_U32(ctx, 31, 0x1E9718u);
    ctx->pc = 0x1E9714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9710u;
            // 0x1e9714: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171160u;
    if (runtime->hasFunction(0x171160u)) {
        auto targetFn = runtime->lookupFunction(0x171160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9718u; }
        if (ctx->pc != 0x1E9718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitScript__12CActionCharaFv_0x171160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9718u; }
        if (ctx->pc != 0x1E9718u) { return; }
    }
    ctx->pc = 0x1E9718u;
label_1e9718:
    // 0x1e9718: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x1e9718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1e971c:
    // 0x1e971c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1e971cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1e9720:
    // 0x1e9720: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e9720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9724:
    // 0x1e9724: 0xc07a750  jal         func_1E9D40
label_1e9728:
    if (ctx->pc == 0x1E9728u) {
        ctx->pc = 0x1E9728u;
            // 0x1e9728: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E972Cu;
        goto label_1e972c;
    }
    ctx->pc = 0x1E9724u;
    SET_GPR_U32(ctx, 31, 0x1E972Cu);
    ctx->pc = 0x1E9728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9724u;
            // 0x1e9728: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9D40u;
    if (runtime->hasFunction(0x1E9D40u)) {
        auto targetFn = runtime->lookupFunction(0x1E9D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E972Cu; }
        if (ctx->pc != 0x1E972Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetupUnitMan__FP6CSceneP16CUserDataManageriP14ROBO_INFO_DATA_0x1e9d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E972Cu; }
        if (ctx->pc != 0x1E972Cu) { return; }
    }
    ctx->pc = 0x1E972Cu;
label_1e972c:
    // 0x1e972c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e972cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e9730:
    // 0x1e9730: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e9730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9734:
    // 0x1e9734: 0xac430670  sw          $v1, 0x670($v0)
    ctx->pc = 0x1e9734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1648), GPR_U32(ctx, 3));
label_1e9738:
    // 0x1e9738: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e9738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e973c:
    // 0x1e973c: 0xac4006a8  sw          $zero, 0x6A8($v0)
    ctx->pc = 0x1e973cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1704), GPR_U32(ctx, 0));
label_1e9740:
    // 0x1e9740: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e9740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e9744:
    // 0x1e9744: 0x16e60096  bne         $s7, $a2, . + 4 + (0x96 << 2)
label_1e9748:
    if (ctx->pc == 0x1E9748u) {
        ctx->pc = 0x1E974Cu;
        goto label_1e974c;
    }
    ctx->pc = 0x1E9744u;
    {
        const bool branch_taken_0x1e9744 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 6));
        if (branch_taken_0x1e9744) {
            ctx->pc = 0x1E99A0u;
            goto label_1e99a0;
        }
    }
    ctx->pc = 0x1E974Cu;
label_1e974c:
    // 0x1e974c: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x1e974cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1e9750:
    // 0x1e9750: 0x8fa700a4  lw          $a3, 0xA4($sp)
    ctx->pc = 0x1e9750u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1e9754:
    // 0x1e9754: 0xc07a6f8  jal         func_1E9BE0
label_1e9758:
    if (ctx->pc == 0x1E9758u) {
        ctx->pc = 0x1E9758u;
            // 0x1e9758: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E975Cu;
        goto label_1e975c;
    }
    ctx->pc = 0x1E9754u;
    SET_GPR_U32(ctx, 31, 0x1E975Cu);
    ctx->pc = 0x1E9758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9754u;
            // 0x1e9758: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9BE0u;
    if (runtime->hasFunction(0x1E9BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1E9BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E975Cu; }
        if (ctx->pc != 0x1E975Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaMemAllocPtr__FP9mgCMemoryP9mgCMemoryii_0x1e9be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E975Cu; }
        if (ctx->pc != 0x1E975Cu) { return; }
    }
    ctx->pc = 0x1E975Cu;
label_1e975c:
    // 0x1e975c: 0xc07a904  jal         func_1EA410
label_1e9760:
    if (ctx->pc == 0x1E9760u) {
        ctx->pc = 0x1E9760u;
            // 0x1e9760: 0x8fa400a8  lw          $a0, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->pc = 0x1E9764u;
        goto label_1e9764;
    }
    ctx->pc = 0x1E975Cu;
    SET_GPR_U32(ctx, 31, 0x1E9764u);
    ctx->pc = 0x1E9760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E975Cu;
            // 0x1e9760: 0x8fa400a8  lw          $a0, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA410u;
    if (runtime->hasFunction(0x1EA410u)) {
        auto targetFn = runtime->lookupFunction(0x1EA410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9764u; }
        if (ctx->pc != 0x1E9764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoboPartsInfo__FP16CUserDataManager_0x1ea410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9764u; }
        if (ctx->pc != 0x1E9764u) { return; }
    }
    ctx->pc = 0x1E9764u;
label_1e9764:
    // 0x1e9764: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e9764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e9768:
    // 0x1e9768: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1e9768u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e976c:
    // 0x1e976c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e976cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e9770:
    // 0x1e9770: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x1e9770u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_1e9774:
    // 0x1e9774: 0x320f809  jalr        $t9
label_1e9778:
    if (ctx->pc == 0x1E9778u) {
        ctx->pc = 0x1E9778u;
            // 0x1e9778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E977Cu;
        goto label_1e977c;
    }
    ctx->pc = 0x1E9774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E977Cu);
        ctx->pc = 0x1E9778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9774u;
            // 0x1e9778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E977Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E977Cu; }
            if (ctx->pc != 0x1E977Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E977Cu;
label_1e977c:
    // 0x1e977c: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x1e977cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1e9780:
    // 0x1e9780: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e9780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1e9784:
    // 0x1e9784: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1e9784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1e9788:
    // 0x1e9788: 0xc04a234  jal         func_1288D0
label_1e978c:
    if (ctx->pc == 0x1E978Cu) {
        ctx->pc = 0x1E978Cu;
            // 0x1e978c: 0x24a583f0  addiu       $a1, $a1, -0x7C10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935536));
        ctx->pc = 0x1E9790u;
        goto label_1e9790;
    }
    ctx->pc = 0x1E9788u;
    SET_GPR_U32(ctx, 31, 0x1E9790u);
    ctx->pc = 0x1E978Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9788u;
            // 0x1e978c: 0x24a583f0  addiu       $a1, $a1, -0x7C10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9790u; }
        if (ctx->pc != 0x1E9790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9790u; }
        if (ctx->pc != 0x1E9790u) { return; }
    }
    ctx->pc = 0x1E9790u;
label_1e9790:
    // 0x1e9790: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1e9790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1e9794:
    // 0x1e9794: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e9794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e9798:
    // 0x1e9798: 0xc0524c8  jal         func_149320
label_1e979c:
    if (ctx->pc == 0x1E979Cu) {
        ctx->pc = 0x1E979Cu;
            // 0x1e979c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E97A0u;
        goto label_1e97a0;
    }
    ctx->pc = 0x1E9798u;
    SET_GPR_U32(ctx, 31, 0x1E97A0u);
    ctx->pc = 0x1E979Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9798u;
            // 0x1e979c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E97A0u; }
        if (ctx->pc != 0x1E97A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E97A0u; }
        if (ctx->pc != 0x1E97A0u) { return; }
    }
    ctx->pc = 0x1E97A0u;
label_1e97a0:
    // 0x1e97a0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e97a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e97a4:
    // 0x1e97a4: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1e97a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1e97a8:
    // 0x1e97a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e97a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e97ac:
    // 0x1e97ac: 0x24c68368  addiu       $a2, $a2, -0x7C98
    ctx->pc = 0x1e97acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935400));
label_1e97b0:
    // 0x1e97b0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1e97b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e97b4:
    // 0x1e97b4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1e97b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e97b8:
    // 0x1e97b8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1e97b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e97bc:
    // 0x1e97bc: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1e97bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e97c0:
    // 0x1e97c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e97c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e97c4:
    // 0x1e97c4: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x1e97c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_1e97c8:
    // 0x1e97c8: 0x320f809  jalr        $t9
label_1e97cc:
    if (ctx->pc == 0x1E97CCu) {
        ctx->pc = 0x1E97CCu;
            // 0x1e97cc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E97D0u;
        goto label_1e97d0;
    }
    ctx->pc = 0x1E97C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E97D0u);
        ctx->pc = 0x1E97CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E97C8u;
            // 0x1e97cc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E97D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E97D0u; }
            if (ctx->pc != 0x1E97D0u) { return; }
        }
        }
    }
    ctx->pc = 0x1E97D0u;
label_1e97d0:
    // 0x1e97d0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e97d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e97d4:
    // 0x1e97d4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x1e97d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_1e97d8:
    // 0x1e97d8: 0x2484d8b0  addiu       $a0, $a0, -0x2750
    ctx->pc = 0x1e97d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957232));
label_1e97dc:
    // 0x1e97dc: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x1e97dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1e97e0:
    // 0x1e97e0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1e97e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e97e4:
    // 0x1e97e4: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x1e97e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e97e8:
    // 0x1e97e8: 0xac5002e4  sw          $s0, 0x2E4($v0)
    ctx->pc = 0x1e97e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 740), GPR_U32(ctx, 16));
label_1e97ec:
    // 0x1e97ec: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1e97ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1e97f0:
    // 0x1e97f0: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x1e97f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e97f4:
    // 0x1e97f4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1e97f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_1e97f8:
    // 0x1e97f8: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x1e97f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_1e97fc:
    // 0x1e97fc: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x1e97fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
label_1e9800:
    // 0x1e9800: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e9800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9804:
    // 0x1e9804: 0x8c5500b0  lw          $s5, 0xB0($v0)
    ctx->pc = 0x1e9804u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_1e9808:
    // 0x1e9808: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x1e9808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1e980c:
    // 0x1e980c: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x1e980cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_1e9810:
    // 0x1e9810: 0x320f809  jalr        $t9
label_1e9814:
    if (ctx->pc == 0x1E9814u) {
        ctx->pc = 0x1E9814u;
            // 0x1e9814: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9818u;
        goto label_1e9818;
    }
    ctx->pc = 0x1E9810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E9818u);
        ctx->pc = 0x1E9814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9810u;
            // 0x1e9814: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E9818u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E9818u; }
            if (ctx->pc != 0x1E9818u) { return; }
        }
        }
    }
    ctx->pc = 0x1E9818u;
label_1e9818:
    // 0x1e9818: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e9818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e981c:
    // 0x1e981c: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
label_1e9820:
    if (ctx->pc == 0x1E9820u) {
        ctx->pc = 0x1E9820u;
            // 0x1e9820: 0x2d41021  addu        $v0, $s6, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
        ctx->pc = 0x1E9824u;
        goto label_1e9824;
    }
    ctx->pc = 0x1E981Cu;
    {
        const bool branch_taken_0x1e981c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E9820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E981Cu;
            // 0x1e9820: 0x2d41021  addu        $v0, $s6, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e981c) {
            ctx->pc = 0x1E9840u;
            goto label_1e9840;
        }
    }
    ctx->pc = 0x1E9824u;
label_1e9824:
    // 0x1e9824: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e9824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1e9828:
    // 0x1e9828: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1e9828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e982c:
    // 0x1e982c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1e982cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1e9830:
    // 0x1e9830: 0xc04a234  jal         func_1288D0
label_1e9834:
    if (ctx->pc == 0x1E9834u) {
        ctx->pc = 0x1E9834u;
            // 0x1e9834: 0x24a583f0  addiu       $a1, $a1, -0x7C10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935536));
        ctx->pc = 0x1E9838u;
        goto label_1e9838;
    }
    ctx->pc = 0x1E9830u;
    SET_GPR_U32(ctx, 31, 0x1E9838u);
    ctx->pc = 0x1E9834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9830u;
            // 0x1e9834: 0x24a583f0  addiu       $a1, $a1, -0x7C10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9838u; }
        if (ctx->pc != 0x1E9838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9838u; }
        if (ctx->pc != 0x1E9838u) { return; }
    }
    ctx->pc = 0x1E9838u;
label_1e9838:
    // 0x1e9838: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e983c:
    if (ctx->pc == 0x1E983Cu) {
        ctx->pc = 0x1E9840u;
        goto label_1e9840;
    }
    ctx->pc = 0x1E9838u;
    {
        const bool branch_taken_0x1e9838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9838) {
            ctx->pc = 0x1E9858u;
            goto label_1e9858;
        }
    }
    ctx->pc = 0x1E9840u;
label_1e9840:
    // 0x1e9840: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x1e9840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_1e9844:
    // 0x1e9844: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1e9844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e9848:
    // 0x1e9848: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e9848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1e984c:
    // 0x1e984c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1e984cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1e9850:
    // 0x1e9850: 0xc04a234  jal         func_1288D0
label_1e9854:
    if (ctx->pc == 0x1E9854u) {
        ctx->pc = 0x1E9854u;
            // 0x1e9854: 0x24a58410  addiu       $a1, $a1, -0x7BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935568));
        ctx->pc = 0x1E9858u;
        goto label_1e9858;
    }
    ctx->pc = 0x1E9850u;
    SET_GPR_U32(ctx, 31, 0x1E9858u);
    ctx->pc = 0x1E9854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9850u;
            // 0x1e9854: 0x24a58410  addiu       $a1, $a1, -0x7BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9858u; }
        if (ctx->pc != 0x1E9858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9858u; }
        if (ctx->pc != 0x1E9858u) { return; }
    }
    ctx->pc = 0x1E9858u;
label_1e9858:
    // 0x1e9858: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1e9858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1e985c:
    // 0x1e985c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e985cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e9860:
    // 0x1e9860: 0xc0524c8  jal         func_149320
label_1e9864:
    if (ctx->pc == 0x1E9864u) {
        ctx->pc = 0x1E9864u;
            // 0x1e9864: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9868u;
        goto label_1e9868;
    }
    ctx->pc = 0x1E9860u;
    SET_GPR_U32(ctx, 31, 0x1E9868u);
    ctx->pc = 0x1E9864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9860u;
            // 0x1e9864: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9868u; }
        if (ctx->pc != 0x1E9868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9868u; }
        if (ctx->pc != 0x1E9868u) { return; }
    }
    ctx->pc = 0x1E9868u;
label_1e9868:
    // 0x1e9868: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x1e9868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
label_1e986c:
    // 0x1e986c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x1e986cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1e9870:
    // 0x1e9870: 0x8c430190  lw          $v1, 0x190($v0)
    ctx->pc = 0x1e9870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 400)));
label_1e9874:
    // 0x1e9874: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1e9874u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1e9878:
    // 0x1e9878: 0x8fab00b0  lw          $t3, 0xB0($sp)
    ctx->pc = 0x1e9878u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e987c:
    // 0x1e987c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e987cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e9880:
    // 0x1e9880: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e9880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e9884:
    // 0x1e9884: 0x24c68368  addiu       $a2, $a2, -0x7C98
    ctx->pc = 0x1e9884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935400));
label_1e9888:
    // 0x1e9888: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1e9888u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e988c:
    // 0x1e988c: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x1e988cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_1e9890:
    // 0x1e9890: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e9890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1e9894:
    // 0x1e9894: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e9894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e9898:
    // 0x1e9898: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e9898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1e989c:
    // 0x1e989c: 0x222a821  addu        $s5, $s1, $v0
    ctx->pc = 0x1e989cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1e98a0:
    // 0x1e98a0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1e98a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e98a4:
    // 0x1e98a4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1e98a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e98a8:
    // 0x1e98a8: 0x320f809  jalr        $t9
label_1e98ac:
    if (ctx->pc == 0x1E98ACu) {
        ctx->pc = 0x1E98ACu;
            // 0x1e98ac: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E98B0u;
        goto label_1e98b0;
    }
    ctx->pc = 0x1E98A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E98B0u);
        ctx->pc = 0x1E98ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E98A8u;
            // 0x1e98ac: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E98B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E98B0u; }
            if (ctx->pc != 0x1E98B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1E98B0u;
label_1e98b0:
    // 0x1e98b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e98b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e98b4:
    // 0x1e98b4: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
label_1e98b8:
    if (ctx->pc == 0x1E98B8u) {
        ctx->pc = 0x1E98BCu;
        goto label_1e98bc;
    }
    ctx->pc = 0x1E98B4u;
    {
        const bool branch_taken_0x1e98b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e98b4) {
            ctx->pc = 0x1E98CCu;
            goto label_1e98cc;
        }
    }
    ctx->pc = 0x1E98BCu;
label_1e98bc:
    // 0x1e98bc: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e98bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e98c0:
    // 0x1e98c0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e98c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e98c4:
    // 0x1e98c4: 0xc07a358  jal         func_1E8D60
label_1e98c8:
    if (ctx->pc == 0x1E98C8u) {
        ctx->pc = 0x1E98C8u;
            // 0x1e98c8: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E98CCu;
        goto label_1e98cc;
    }
    ctx->pc = 0x1E98C4u;
    SET_GPR_U32(ctx, 31, 0x1E98CCu);
    ctx->pc = 0x1E98C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E98C4u;
            // 0x1e98c8: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8D60u;
    if (runtime->hasFunction(0x1E8D60u)) {
        auto targetFn = runtime->lookupFunction(0x1E8D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E98CCu; }
        if (ctx->pc != 0x1E98CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSwordBlurEffect__FP11CCharacter2P9mgCMemoryi_0x1e8d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E98CCu; }
        if (ctx->pc != 0x1E98CCu) { return; }
    }
    ctx->pc = 0x1E98CCu;
label_1e98cc:
    // 0x1e98cc: 0x0  nop
    ctx->pc = 0x1e98ccu;
    // NOP
label_1e98d0:
    // 0x1e98d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e98d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1e98d4:
    // 0x1e98d4: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x1e98d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
label_1e98d8:
    // 0x1e98d8: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
label_1e98dc:
    if (ctx->pc == 0x1E98DCu) {
        ctx->pc = 0x1E98DCu;
            // 0x1e98dc: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x1E98E0u;
        goto label_1e98e0;
    }
    ctx->pc = 0x1E98D8u;
    {
        const bool branch_taken_0x1e98d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E98DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E98D8u;
            // 0x1e98dc: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e98d8) {
            ctx->pc = 0x1E97FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e97fc;
        }
    }
    ctx->pc = 0x1E98E0u;
label_1e98e0:
    // 0x1e98e0: 0x8fb300c4  lw          $s3, 0xC4($sp)
    ctx->pc = 0x1e98e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_1e98e4:
    // 0x1e98e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e98e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e98e8:
    // 0x1e98e8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1e98e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e98ec:
    // 0x1e98ec: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x1e98ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_1e98f0:
    // 0x1e98f0: 0x320f809  jalr        $t9
label_1e98f4:
    if (ctx->pc == 0x1E98F4u) {
        ctx->pc = 0x1E98F4u;
            // 0x1e98f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E98F8u;
        goto label_1e98f8;
    }
    ctx->pc = 0x1E98F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E98F8u);
        ctx->pc = 0x1E98F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E98F0u;
            // 0x1e98f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E98F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E98F8u; }
            if (ctx->pc != 0x1E98F8u) { return; }
        }
        }
    }
    ctx->pc = 0x1E98F8u;
label_1e98f8:
    // 0x1e98f8: 0x8ec40014  lw          $a0, 0x14($s6)
    ctx->pc = 0x1e98f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_1e98fc:
    // 0x1e98fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e98fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e9900:
    // 0x1e9900: 0xc0524c8  jal         func_149320
label_1e9904:
    if (ctx->pc == 0x1E9904u) {
        ctx->pc = 0x1E9904u;
            // 0x1e9904: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9908u;
        goto label_1e9908;
    }
    ctx->pc = 0x1E9900u;
    SET_GPR_U32(ctx, 31, 0x1E9908u);
    ctx->pc = 0x1E9904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9900u;
            // 0x1e9904: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9908u; }
        if (ctx->pc != 0x1E9908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9908u; }
        if (ctx->pc != 0x1E9908u) { return; }
    }
    ctx->pc = 0x1E9908u;
label_1e9908:
    // 0x1e9908: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1e9908u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e990c:
    // 0x1e990c: 0x26270060  addiu       $a3, $s1, 0x60
    ctx->pc = 0x1e990cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_1e9910:
    // 0x1e9910: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1e9910u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1e9914:
    // 0x1e9914: 0x8fab00b0  lw          $t3, 0xB0($sp)
    ctx->pc = 0x1e9914u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e9918:
    // 0x1e9918: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e9918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e991c:
    // 0x1e991c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e991cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e9920:
    // 0x1e9920: 0x24c68368  addiu       $a2, $a2, -0x7C98
    ctx->pc = 0x1e9920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935400));
label_1e9924:
    // 0x1e9924: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e9924u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e9928:
    // 0x1e9928: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1e9928u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e992c:
    // 0x1e992c: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x1e992cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_1e9930:
    // 0x1e9930: 0x320f809  jalr        $t9
label_1e9934:
    if (ctx->pc == 0x1E9934u) {
        ctx->pc = 0x1E9934u;
            // 0x1e9934: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9938u;
        goto label_1e9938;
    }
    ctx->pc = 0x1E9930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E9938u);
        ctx->pc = 0x1E9934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9930u;
            // 0x1e9934: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E9938u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E9938u; }
            if (ctx->pc != 0x1E9938u) { return; }
        }
        }
    }
    ctx->pc = 0x1E9938u;
label_1e9938:
    // 0x1e9938: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x1e9938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1e993c:
    // 0x1e993c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1e993cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1e9940:
    // 0x1e9940: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e9940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e9944:
    // 0x1e9944: 0xc07a750  jal         func_1E9D40
label_1e9948:
    if (ctx->pc == 0x1E9948u) {
        ctx->pc = 0x1E9948u;
            // 0x1e9948: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E994Cu;
        goto label_1e994c;
    }
    ctx->pc = 0x1E9944u;
    SET_GPR_U32(ctx, 31, 0x1E994Cu);
    ctx->pc = 0x1E9948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9944u;
            // 0x1e9948: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9D40u;
    if (runtime->hasFunction(0x1E9D40u)) {
        auto targetFn = runtime->lookupFunction(0x1E9D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E994Cu; }
        if (ctx->pc != 0x1E994Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetupUnitMan__FP6CSceneP16CUserDataManageriP14ROBO_INFO_DATA_0x1e9d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E994Cu; }
        if (ctx->pc != 0x1E994Cu) { return; }
    }
    ctx->pc = 0x1E994Cu;
label_1e994c:
    // 0x1e994c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1e994cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1e9950:
    // 0x1e9950: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e9950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e9954:
    // 0x1e9954: 0x24848420  addiu       $a0, $a0, -0x7BE0
    ctx->pc = 0x1e9954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935584));
label_1e9958:
    // 0x1e9958: 0xc0524c8  jal         func_149320
label_1e995c:
    if (ctx->pc == 0x1E995Cu) {
        ctx->pc = 0x1E995Cu;
            // 0x1e995c: 0x27a60298  addiu       $a2, $sp, 0x298 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
        ctx->pc = 0x1E9960u;
        goto label_1e9960;
    }
    ctx->pc = 0x1E9958u;
    SET_GPR_U32(ctx, 31, 0x1E9960u);
    ctx->pc = 0x1E995Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9958u;
            // 0x1e995c: 0x27a60298  addiu       $a2, $sp, 0x298 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9960u; }
        if (ctx->pc != 0x1E9960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9960u; }
        if (ctx->pc != 0x1E9960u) { return; }
    }
    ctx->pc = 0x1E9960u;
label_1e9960:
    // 0x1e9960: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e9960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e9964:
    // 0x1e9964: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e9964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e9968:
    // 0x1e9968: 0x8fa60298  lw          $a2, 0x298($sp)
    ctx->pc = 0x1e9968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_1e996c:
    // 0x1e996c: 0xc05c430  jal         func_1710C0
label_1e9970:
    if (ctx->pc == 0x1E9970u) {
        ctx->pc = 0x1E9970u;
            // 0x1e9970: 0x262700c0  addiu       $a3, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->pc = 0x1E9974u;
        goto label_1e9974;
    }
    ctx->pc = 0x1E996Cu;
    SET_GPR_U32(ctx, 31, 0x1E9974u);
    ctx->pc = 0x1E9970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E996Cu;
            // 0x1e9970: 0x262700c0  addiu       $a3, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1710C0u;
    if (runtime->hasFunction(0x1710C0u)) {
        auto targetFn = runtime->lookupFunction(0x1710C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9974u; }
        if (ctx->pc != 0x1E9974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadActionFile__12CActionCharaFPciP9mgCMemory_0x1710c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9974u; }
        if (ctx->pc != 0x1E9974u) { return; }
    }
    ctx->pc = 0x1E9974u;
label_1e9974:
    // 0x1e9974: 0xc05c458  jal         func_171160
label_1e9978:
    if (ctx->pc == 0x1E9978u) {
        ctx->pc = 0x1E9978u;
            // 0x1e9978: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x1E997Cu;
        goto label_1e997c;
    }
    ctx->pc = 0x1E9974u;
    SET_GPR_U32(ctx, 31, 0x1E997Cu);
    ctx->pc = 0x1E9978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9974u;
            // 0x1e9978: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171160u;
    if (runtime->hasFunction(0x171160u)) {
        auto targetFn = runtime->lookupFunction(0x171160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E997Cu; }
        if (ctx->pc != 0x1E997Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitScript__12CActionCharaFv_0x171160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E997Cu; }
        if (ctx->pc != 0x1E997Cu) { return; }
    }
    ctx->pc = 0x1E997Cu;
label_1e997c:
    // 0x1e997c: 0x8ec4001c  lw          $a0, 0x1C($s6)
    ctx->pc = 0x1e997cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
label_1e9980:
    // 0x1e9980: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e9980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e9984:
    // 0x1e9984: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e9984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e9988:
    // 0x1e9988: 0xac4406a8  sw          $a0, 0x6A8($v0)
    ctx->pc = 0x1e9988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1704), GPR_U32(ctx, 4));
label_1e998c:
    // 0x1e998c: 0x8ec40020  lw          $a0, 0x20($s6)
    ctx->pc = 0x1e998cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
label_1e9990:
    // 0x1e9990: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e9990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e9994:
    // 0x1e9994: 0xac4406a4  sw          $a0, 0x6A4($v0)
    ctx->pc = 0x1e9994u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1700), GPR_U32(ctx, 4));
label_1e9998:
    // 0x1e9998: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e9998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e999c:
    // 0x1e999c: 0xac430670  sw          $v1, 0x670($v0)
    ctx->pc = 0x1e999cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1648), GPR_U32(ctx, 3));
label_1e99a0:
    // 0x1e99a0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1e99a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e99a4:
    // 0x1e99a4: 0x16e60052  bne         $s7, $a2, . + 4 + (0x52 << 2)
label_1e99a8:
    if (ctx->pc == 0x1E99A8u) {
        ctx->pc = 0x1E99ACu;
        goto label_1e99ac;
    }
    ctx->pc = 0x1E99A4u;
    {
        const bool branch_taken_0x1e99a4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 6));
        if (branch_taken_0x1e99a4) {
            ctx->pc = 0x1E9AF0u;
            goto label_1e9af0;
        }
    }
    ctx->pc = 0x1E99ACu;
label_1e99ac:
    // 0x1e99ac: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e99acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1e99b0:
    // 0x1e99b0: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x1e99b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_1e99b4:
    // 0x1e99b4: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x1e99b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1e99b8:
    // 0x1e99b8: 0x8fa700a4  lw          $a3, 0xA4($sp)
    ctx->pc = 0x1e99b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1e99bc:
    // 0x1e99bc: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1e99bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1e99c0:
    // 0x1e99c0: 0x84334d98  lh          $s3, 0x4D98($at)
    ctx->pc = 0x1e99c0u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19864)));
label_1e99c4:
    // 0x1e99c4: 0xc07a6f8  jal         func_1E9BE0
label_1e99c8:
    if (ctx->pc == 0x1E99C8u) {
        ctx->pc = 0x1E99C8u;
            // 0x1e99c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E99CCu;
        goto label_1e99cc;
    }
    ctx->pc = 0x1E99C4u;
    SET_GPR_U32(ctx, 31, 0x1E99CCu);
    ctx->pc = 0x1E99C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E99C4u;
            // 0x1e99c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9BE0u;
    if (runtime->hasFunction(0x1E9BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1E9BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E99CCu; }
        if (ctx->pc != 0x1E99CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaMemAllocPtr__FP9mgCMemoryP9mgCMemoryii_0x1e9be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E99CCu; }
        if (ctx->pc != 0x1E99CCu) { return; }
    }
    ctx->pc = 0x1E99CCu;
label_1e99cc:
    // 0x1e99cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e99ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e99d0:
    // 0x1e99d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e99d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e99d4:
    // 0x1e99d4: 0xc0ad77c  jal         func_2B5DF0
label_1e99d8:
    if (ctx->pc == 0x1E99D8u) {
        ctx->pc = 0x1E99D8u;
            // 0x1e99d8: 0x27a60270  addiu       $a2, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x1E99DCu;
        goto label_1e99dc;
    }
    ctx->pc = 0x1E99D4u;
    SET_GPR_U32(ctx, 31, 0x1E99DCu);
    ctx->pc = 0x1E99D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E99D4u;
            // 0x1e99d8: 0x27a60270  addiu       $a2, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5DF0u;
    if (runtime->hasFunction(0x2B5DF0u)) {
        auto targetFn = runtime->lookupFunction(0x2B5DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E99DCu; }
        if (ctx->pc != 0x1E99DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterModelFile__FiiPc_0x2b5df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E99DCu; }
        if (ctx->pc != 0x1E99DCu) { return; }
    }
    ctx->pc = 0x1E99DCu;
label_1e99dc:
    // 0x1e99dc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e99dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1e99e0:
    // 0x1e99e0: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1e99e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_1e99e4:
    // 0x1e99e4: 0x24a58440  addiu       $a1, $a1, -0x7BC0
    ctx->pc = 0x1e99e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935616));
label_1e99e8:
    // 0x1e99e8: 0xc04a234  jal         func_1288D0
label_1e99ec:
    if (ctx->pc == 0x1E99ECu) {
        ctx->pc = 0x1E99ECu;
            // 0x1e99ec: 0x27a60270  addiu       $a2, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x1E99F0u;
        goto label_1e99f0;
    }
    ctx->pc = 0x1E99E8u;
    SET_GPR_U32(ctx, 31, 0x1E99F0u);
    ctx->pc = 0x1E99ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E99E8u;
            // 0x1e99ec: 0x27a60270  addiu       $a2, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E99F0u; }
        if (ctx->pc != 0x1E99F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E99F0u; }
        if (ctx->pc != 0x1E99F0u) { return; }
    }
    ctx->pc = 0x1E99F0u;
label_1e99f0:
    // 0x1e99f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e99f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e99f4:
    // 0x1e99f4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1e99f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e99f8:
    // 0x1e99f8: 0xc0ad77c  jal         func_2B5DF0
label_1e99fc:
    if (ctx->pc == 0x1E99FCu) {
        ctx->pc = 0x1E99FCu;
            // 0x1e99fc: 0x27a601f0  addiu       $a2, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x1E9A00u;
        goto label_1e9a00;
    }
    ctx->pc = 0x1E99F8u;
    SET_GPR_U32(ctx, 31, 0x1E9A00u);
    ctx->pc = 0x1E99FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E99F8u;
            // 0x1e99fc: 0x27a601f0  addiu       $a2, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5DF0u;
    if (runtime->hasFunction(0x2B5DF0u)) {
        auto targetFn = runtime->lookupFunction(0x2B5DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A00u; }
        if (ctx->pc != 0x1E9A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterModelFile__FiiPc_0x2b5df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A00u; }
        if (ctx->pc != 0x1E9A00u) { return; }
    }
    ctx->pc = 0x1E9A00u;
label_1e9a00:
    // 0x1e9a00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e9a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e9a04:
    // 0x1e9a04: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e9a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e9a08:
    // 0x1e9a08: 0xc0ad77c  jal         func_2B5DF0
label_1e9a0c:
    if (ctx->pc == 0x1E9A0Cu) {
        ctx->pc = 0x1E9A0Cu;
            // 0x1e9a0c: 0x27a60270  addiu       $a2, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x1E9A10u;
        goto label_1e9a10;
    }
    ctx->pc = 0x1E9A08u;
    SET_GPR_U32(ctx, 31, 0x1E9A10u);
    ctx->pc = 0x1E9A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9A08u;
            // 0x1e9a0c: 0x27a60270  addiu       $a2, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5DF0u;
    if (runtime->hasFunction(0x2B5DF0u)) {
        auto targetFn = runtime->lookupFunction(0x2B5DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A10u; }
        if (ctx->pc != 0x1E9A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterModelFile__FiiPc_0x2b5df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A10u; }
        if (ctx->pc != 0x1E9A10u) { return; }
    }
    ctx->pc = 0x1E9A10u;
label_1e9a10:
    // 0x1e9a10: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e9a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1e9a14:
    // 0x1e9a14: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x1e9a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_1e9a18:
    // 0x1e9a18: 0x24a58460  addiu       $a1, $a1, -0x7BA0
    ctx->pc = 0x1e9a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935648));
label_1e9a1c:
    // 0x1e9a1c: 0xc04a234  jal         func_1288D0
label_1e9a20:
    if (ctx->pc == 0x1E9A20u) {
        ctx->pc = 0x1E9A20u;
            // 0x1e9a20: 0x27a60270  addiu       $a2, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x1E9A24u;
        goto label_1e9a24;
    }
    ctx->pc = 0x1E9A1Cu;
    SET_GPR_U32(ctx, 31, 0x1E9A24u);
    ctx->pc = 0x1E9A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9A1Cu;
            // 0x1e9a20: 0x27a60270  addiu       $a2, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A24u; }
        if (ctx->pc != 0x1E9A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A24u; }
        if (ctx->pc != 0x1E9A24u) { return; }
    }
    ctx->pc = 0x1E9A24u;
label_1e9a24:
    // 0x1e9a24: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1e9a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_1e9a28:
    // 0x1e9a28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e9a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e9a2c:
    // 0x1e9a2c: 0xc0524c8  jal         func_149320
label_1e9a30:
    if (ctx->pc == 0x1E9A30u) {
        ctx->pc = 0x1E9A30u;
            // 0x1e9a30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9A34u;
        goto label_1e9a34;
    }
    ctx->pc = 0x1E9A2Cu;
    SET_GPR_U32(ctx, 31, 0x1E9A34u);
    ctx->pc = 0x1E9A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9A2Cu;
            // 0x1e9a30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A34u; }
        if (ctx->pc != 0x1E9A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A34u; }
        if (ctx->pc != 0x1E9A34u) { return; }
    }
    ctx->pc = 0x1E9A34u;
label_1e9a34:
    // 0x1e9a34: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e9a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e9a38:
    // 0x1e9a38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e9a38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e9a3c:
    // 0x1e9a3c: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x1e9a3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_1e9a40:
    // 0x1e9a40: 0x320f809  jalr        $t9
label_1e9a44:
    if (ctx->pc == 0x1E9A44u) {
        ctx->pc = 0x1E9A44u;
            // 0x1e9a44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9A48u;
        goto label_1e9a48;
    }
    ctx->pc = 0x1E9A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E9A48u);
        ctx->pc = 0x1E9A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9A40u;
            // 0x1e9a44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E9A48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A48u; }
            if (ctx->pc != 0x1E9A48u) { return; }
        }
        }
    }
    ctx->pc = 0x1E9A48u;
label_1e9a48:
    // 0x1e9a48: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e9a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e9a4c:
    // 0x1e9a4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e9a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e9a50:
    // 0x1e9a50: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x1e9a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_1e9a54:
    // 0x1e9a54: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1e9a54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e9a58:
    // 0x1e9a58: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1e9a58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e9a5c:
    // 0x1e9a5c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1e9a5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e9a60:
    // 0x1e9a60: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1e9a60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e9a64:
    // 0x1e9a64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e9a64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e9a68:
    // 0x1e9a68: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x1e9a68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_1e9a6c:
    // 0x1e9a6c: 0x320f809  jalr        $t9
label_1e9a70:
    if (ctx->pc == 0x1E9A70u) {
        ctx->pc = 0x1E9A70u;
            // 0x1e9a70: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9A74u;
        goto label_1e9a74;
    }
    ctx->pc = 0x1E9A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E9A74u);
        ctx->pc = 0x1E9A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9A6Cu;
            // 0x1e9a70: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E9A74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A74u; }
            if (ctx->pc != 0x1E9A74u) { return; }
        }
        }
    }
    ctx->pc = 0x1E9A74u;
label_1e9a74:
    // 0x1e9a74: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e9a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e9a78:
    // 0x1e9a78: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e9a78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e9a7c:
    // 0x1e9a7c: 0x0  nop
    ctx->pc = 0x1e9a7cu;
    // NOP
label_1e9a80:
    // 0x1e9a80: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1e9a80u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1e9a84:
    // 0x1e9a84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e9a84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e9a88:
    // 0x1e9a88: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1e9a88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1e9a8c:
    // 0x1e9a8c: 0x320f809  jalr        $t9
label_1e9a90:
    if (ctx->pc == 0x1E9A90u) {
        ctx->pc = 0x1E9A90u;
            // 0x1e9a90: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1E9A94u;
        goto label_1e9a94;
    }
    ctx->pc = 0x1E9A8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E9A94u);
        ctx->pc = 0x1E9A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9A8Cu;
            // 0x1e9a90: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E9A94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A94u; }
            if (ctx->pc != 0x1E9A94u) { return; }
        }
        }
    }
    ctx->pc = 0x1E9A94u;
label_1e9a94:
    // 0x1e9a94: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x1e9a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1e9a98:
    // 0x1e9a98: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1e9a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1e9a9c:
    // 0x1e9a9c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e9a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e9aa0:
    // 0x1e9aa0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1e9aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e9aa4:
    // 0x1e9aa4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e9aa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9aa8:
    // 0x1e9aa8: 0xc07a750  jal         func_1E9D40
label_1e9aac:
    if (ctx->pc == 0x1E9AACu) {
        ctx->pc = 0x1E9AACu;
            // 0x1e9aac: 0xac5002e4  sw          $s0, 0x2E4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 740), GPR_U32(ctx, 16));
        ctx->pc = 0x1E9AB0u;
        goto label_1e9ab0;
    }
    ctx->pc = 0x1E9AA8u;
    SET_GPR_U32(ctx, 31, 0x1E9AB0u);
    ctx->pc = 0x1E9AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9AA8u;
            // 0x1e9aac: 0xac5002e4  sw          $s0, 0x2E4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 740), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9D40u;
    if (runtime->hasFunction(0x1E9D40u)) {
        auto targetFn = runtime->lookupFunction(0x1E9D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9AB0u; }
        if (ctx->pc != 0x1E9AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetupUnitMan__FP6CSceneP16CUserDataManageriP14ROBO_INFO_DATA_0x1e9d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9AB0u; }
        if (ctx->pc != 0x1E9AB0u) { return; }
    }
    ctx->pc = 0x1E9AB0u;
label_1e9ab0:
    // 0x1e9ab0: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x1e9ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_1e9ab4:
    // 0x1e9ab4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e9ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e9ab8:
    // 0x1e9ab8: 0xc0524c8  jal         func_149320
label_1e9abc:
    if (ctx->pc == 0x1E9ABCu) {
        ctx->pc = 0x1E9ABCu;
            // 0x1e9abc: 0x27a6029c  addiu       $a2, $sp, 0x29C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 668));
        ctx->pc = 0x1E9AC0u;
        goto label_1e9ac0;
    }
    ctx->pc = 0x1E9AB8u;
    SET_GPR_U32(ctx, 31, 0x1E9AC0u);
    ctx->pc = 0x1E9ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9AB8u;
            // 0x1e9abc: 0x27a6029c  addiu       $a2, $sp, 0x29C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 668));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9AC0u; }
        if (ctx->pc != 0x1E9AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9AC0u; }
        if (ctx->pc != 0x1E9AC0u) { return; }
    }
    ctx->pc = 0x1E9AC0u;
label_1e9ac0:
    // 0x1e9ac0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e9ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e9ac4:
    // 0x1e9ac4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e9ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e9ac8:
    // 0x1e9ac8: 0x8fa6029c  lw          $a2, 0x29C($sp)
    ctx->pc = 0x1e9ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_1e9acc:
    // 0x1e9acc: 0xc05c430  jal         func_1710C0
label_1e9ad0:
    if (ctx->pc == 0x1E9AD0u) {
        ctx->pc = 0x1E9AD0u;
            // 0x1e9ad0: 0x262700f0  addiu       $a3, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->pc = 0x1E9AD4u;
        goto label_1e9ad4;
    }
    ctx->pc = 0x1E9ACCu;
    SET_GPR_U32(ctx, 31, 0x1E9AD4u);
    ctx->pc = 0x1E9AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9ACCu;
            // 0x1e9ad0: 0x262700f0  addiu       $a3, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1710C0u;
    if (runtime->hasFunction(0x1710C0u)) {
        auto targetFn = runtime->lookupFunction(0x1710C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9AD4u; }
        if (ctx->pc != 0x1E9AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadActionFile__12CActionCharaFPciP9mgCMemory_0x1710c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9AD4u; }
        if (ctx->pc != 0x1E9AD4u) { return; }
    }
    ctx->pc = 0x1E9AD4u;
label_1e9ad4:
    // 0x1e9ad4: 0xc05c458  jal         func_171160
label_1e9ad8:
    if (ctx->pc == 0x1E9AD8u) {
        ctx->pc = 0x1E9AD8u;
            // 0x1e9ad8: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x1E9ADCu;
        goto label_1e9adc;
    }
    ctx->pc = 0x1E9AD4u;
    SET_GPR_U32(ctx, 31, 0x1E9ADCu);
    ctx->pc = 0x1E9AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9AD4u;
            // 0x1e9ad8: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171160u;
    if (runtime->hasFunction(0x171160u)) {
        auto targetFn = runtime->lookupFunction(0x171160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9ADCu; }
        if (ctx->pc != 0x1E9ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitScript__12CActionCharaFv_0x171160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9ADCu; }
        if (ctx->pc != 0x1E9ADCu) { return; }
    }
    ctx->pc = 0x1E9ADCu;
label_1e9adc:
    // 0x1e9adc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e9adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e9ae0:
    // 0x1e9ae0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e9ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e9ae4:
    // 0x1e9ae4: 0xac400670  sw          $zero, 0x670($v0)
    ctx->pc = 0x1e9ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1648), GPR_U32(ctx, 0));
label_1e9ae8:
    // 0x1e9ae8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e9ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1e9aec:
    // 0x1e9aec: 0xac4306a8  sw          $v1, 0x6A8($v0)
    ctx->pc = 0x1e9aecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1704), GPR_U32(ctx, 3));
label_1e9af0:
    // 0x1e9af0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e9af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9af4:
    // 0x1e9af4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e9af4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9af8:
    // 0x1e9af8: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x1e9af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_1e9afc:
    // 0x1e9afc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1e9afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1e9b00:
    // 0x1e9b00: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x1e9b00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1e9b04:
    // 0x1e9b04: 0x24848480  addiu       $a0, $a0, -0x7B80
    ctx->pc = 0x1e9b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935680));
label_1e9b08:
    // 0x1e9b08: 0x8c470028  lw          $a3, 0x28($v0)
    ctx->pc = 0x1e9b08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1e9b0c:
    // 0x1e9b0c: 0xc04a0d2  jal         func_128348
label_1e9b10:
    if (ctx->pc == 0x1E9B10u) {
        ctx->pc = 0x1E9B10u;
            // 0x1e9b10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9B14u;
        goto label_1e9b14;
    }
    ctx->pc = 0x1E9B0Cu;
    SET_GPR_U32(ctx, 31, 0x1E9B14u);
    ctx->pc = 0x1E9B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9B0Cu;
            // 0x1e9b10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9B14u; }
        if (ctx->pc != 0x1E9B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9B14u; }
        if (ctx->pc != 0x1E9B14u) { return; }
    }
    ctx->pc = 0x1E9B14u;
label_1e9b14:
    // 0x1e9b14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e9b14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e9b18:
    // 0x1e9b18: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x1e9b18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
label_1e9b1c:
    // 0x1e9b1c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1e9b20:
    if (ctx->pc == 0x1E9B20u) {
        ctx->pc = 0x1E9B20u;
            // 0x1e9b20: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x1E9B24u;
        goto label_1e9b24;
    }
    ctx->pc = 0x1E9B1Cu;
    {
        const bool branch_taken_0x1e9b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9B1Cu;
            // 0x1e9b20: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9b1c) {
            ctx->pc = 0x1E9AF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e9af8;
        }
    }
    ctx->pc = 0x1E9B24u;
label_1e9b24:
    // 0x1e9b24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e9b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9b28:
    // 0x1e9b28: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1e9b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1e9b2c:
    // 0x1e9b2c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e9b2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e9b30:
    // 0x1e9b30: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e9b30u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e9b34:
    // 0x1e9b34: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e9b34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e9b38:
    // 0x1e9b38: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e9b38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e9b3c:
    // 0x1e9b3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e9b3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e9b40:
    // 0x1e9b40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e9b40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e9b44:
    // 0x1e9b44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e9b44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e9b48:
    // 0x1e9b48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9b48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9b4c:
    // 0x1e9b4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9b50:
    // 0x1e9b50: 0x3e00008  jr          $ra
label_1e9b54:
    if (ctx->pc == 0x1E9B54u) {
        ctx->pc = 0x1E9B54u;
            // 0x1e9b54: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->pc = 0x1E9B58u;
        goto label_fallthrough_0x1e9b50;
    }
    ctx->pc = 0x1E9B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9B50u;
            // 0x1e9b54: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e9b50:
    ctx->pc = 0x1E9B58u;
}
