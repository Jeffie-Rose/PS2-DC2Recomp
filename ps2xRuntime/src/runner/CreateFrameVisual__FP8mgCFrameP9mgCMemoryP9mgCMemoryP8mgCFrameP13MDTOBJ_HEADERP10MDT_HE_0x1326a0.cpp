#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateFrameVisual__FP8mgCFrameP9mgCMemoryP9mgCMemoryP8mgCFrameP13MDTOBJ_HEADERP10MDT_HEADERiP17mgCTextureManagerPUiiPP8mgCFramePA4_A4_f
// Address: 0x1326a0 - 0x132d88
void CreateFrameVisual__FP8mgCFrameP9mgCMemoryP9mgCMemoryP8mgCFrameP13MDTOBJ_HEADERP10MDT_HEADERiP17mgCTextureManagerPUiiPP8mgCFramePA4_A4_f_0x1326a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateFrameVisual__FP8mgCFrameP9mgCMemoryP9mgCMemoryP8mgCFrameP13MDTOBJ_HEADERP10MDT_HEADERiP17mgCTextureManagerPUiiPP8mgCFramePA4_A4_f_0x1326a0");
#endif

    switch (ctx->pc) {
        case 0x1326a0u: goto label_1326a0;
        case 0x1326a4u: goto label_1326a4;
        case 0x1326a8u: goto label_1326a8;
        case 0x1326acu: goto label_1326ac;
        case 0x1326b0u: goto label_1326b0;
        case 0x1326b4u: goto label_1326b4;
        case 0x1326b8u: goto label_1326b8;
        case 0x1326bcu: goto label_1326bc;
        case 0x1326c0u: goto label_1326c0;
        case 0x1326c4u: goto label_1326c4;
        case 0x1326c8u: goto label_1326c8;
        case 0x1326ccu: goto label_1326cc;
        case 0x1326d0u: goto label_1326d0;
        case 0x1326d4u: goto label_1326d4;
        case 0x1326d8u: goto label_1326d8;
        case 0x1326dcu: goto label_1326dc;
        case 0x1326e0u: goto label_1326e0;
        case 0x1326e4u: goto label_1326e4;
        case 0x1326e8u: goto label_1326e8;
        case 0x1326ecu: goto label_1326ec;
        case 0x1326f0u: goto label_1326f0;
        case 0x1326f4u: goto label_1326f4;
        case 0x1326f8u: goto label_1326f8;
        case 0x1326fcu: goto label_1326fc;
        case 0x132700u: goto label_132700;
        case 0x132704u: goto label_132704;
        case 0x132708u: goto label_132708;
        case 0x13270cu: goto label_13270c;
        case 0x132710u: goto label_132710;
        case 0x132714u: goto label_132714;
        case 0x132718u: goto label_132718;
        case 0x13271cu: goto label_13271c;
        case 0x132720u: goto label_132720;
        case 0x132724u: goto label_132724;
        case 0x132728u: goto label_132728;
        case 0x13272cu: goto label_13272c;
        case 0x132730u: goto label_132730;
        case 0x132734u: goto label_132734;
        case 0x132738u: goto label_132738;
        case 0x13273cu: goto label_13273c;
        case 0x132740u: goto label_132740;
        case 0x132744u: goto label_132744;
        case 0x132748u: goto label_132748;
        case 0x13274cu: goto label_13274c;
        case 0x132750u: goto label_132750;
        case 0x132754u: goto label_132754;
        case 0x132758u: goto label_132758;
        case 0x13275cu: goto label_13275c;
        case 0x132760u: goto label_132760;
        case 0x132764u: goto label_132764;
        case 0x132768u: goto label_132768;
        case 0x13276cu: goto label_13276c;
        case 0x132770u: goto label_132770;
        case 0x132774u: goto label_132774;
        case 0x132778u: goto label_132778;
        case 0x13277cu: goto label_13277c;
        case 0x132780u: goto label_132780;
        case 0x132784u: goto label_132784;
        case 0x132788u: goto label_132788;
        case 0x13278cu: goto label_13278c;
        case 0x132790u: goto label_132790;
        case 0x132794u: goto label_132794;
        case 0x132798u: goto label_132798;
        case 0x13279cu: goto label_13279c;
        case 0x1327a0u: goto label_1327a0;
        case 0x1327a4u: goto label_1327a4;
        case 0x1327a8u: goto label_1327a8;
        case 0x1327acu: goto label_1327ac;
        case 0x1327b0u: goto label_1327b0;
        case 0x1327b4u: goto label_1327b4;
        case 0x1327b8u: goto label_1327b8;
        case 0x1327bcu: goto label_1327bc;
        case 0x1327c0u: goto label_1327c0;
        case 0x1327c4u: goto label_1327c4;
        case 0x1327c8u: goto label_1327c8;
        case 0x1327ccu: goto label_1327cc;
        case 0x1327d0u: goto label_1327d0;
        case 0x1327d4u: goto label_1327d4;
        case 0x1327d8u: goto label_1327d8;
        case 0x1327dcu: goto label_1327dc;
        case 0x1327e0u: goto label_1327e0;
        case 0x1327e4u: goto label_1327e4;
        case 0x1327e8u: goto label_1327e8;
        case 0x1327ecu: goto label_1327ec;
        case 0x1327f0u: goto label_1327f0;
        case 0x1327f4u: goto label_1327f4;
        case 0x1327f8u: goto label_1327f8;
        case 0x1327fcu: goto label_1327fc;
        case 0x132800u: goto label_132800;
        case 0x132804u: goto label_132804;
        case 0x132808u: goto label_132808;
        case 0x13280cu: goto label_13280c;
        case 0x132810u: goto label_132810;
        case 0x132814u: goto label_132814;
        case 0x132818u: goto label_132818;
        case 0x13281cu: goto label_13281c;
        case 0x132820u: goto label_132820;
        case 0x132824u: goto label_132824;
        case 0x132828u: goto label_132828;
        case 0x13282cu: goto label_13282c;
        case 0x132830u: goto label_132830;
        case 0x132834u: goto label_132834;
        case 0x132838u: goto label_132838;
        case 0x13283cu: goto label_13283c;
        case 0x132840u: goto label_132840;
        case 0x132844u: goto label_132844;
        case 0x132848u: goto label_132848;
        case 0x13284cu: goto label_13284c;
        case 0x132850u: goto label_132850;
        case 0x132854u: goto label_132854;
        case 0x132858u: goto label_132858;
        case 0x13285cu: goto label_13285c;
        case 0x132860u: goto label_132860;
        case 0x132864u: goto label_132864;
        case 0x132868u: goto label_132868;
        case 0x13286cu: goto label_13286c;
        case 0x132870u: goto label_132870;
        case 0x132874u: goto label_132874;
        case 0x132878u: goto label_132878;
        case 0x13287cu: goto label_13287c;
        case 0x132880u: goto label_132880;
        case 0x132884u: goto label_132884;
        case 0x132888u: goto label_132888;
        case 0x13288cu: goto label_13288c;
        case 0x132890u: goto label_132890;
        case 0x132894u: goto label_132894;
        case 0x132898u: goto label_132898;
        case 0x13289cu: goto label_13289c;
        case 0x1328a0u: goto label_1328a0;
        case 0x1328a4u: goto label_1328a4;
        case 0x1328a8u: goto label_1328a8;
        case 0x1328acu: goto label_1328ac;
        case 0x1328b0u: goto label_1328b0;
        case 0x1328b4u: goto label_1328b4;
        case 0x1328b8u: goto label_1328b8;
        case 0x1328bcu: goto label_1328bc;
        case 0x1328c0u: goto label_1328c0;
        case 0x1328c4u: goto label_1328c4;
        case 0x1328c8u: goto label_1328c8;
        case 0x1328ccu: goto label_1328cc;
        case 0x1328d0u: goto label_1328d0;
        case 0x1328d4u: goto label_1328d4;
        case 0x1328d8u: goto label_1328d8;
        case 0x1328dcu: goto label_1328dc;
        case 0x1328e0u: goto label_1328e0;
        case 0x1328e4u: goto label_1328e4;
        case 0x1328e8u: goto label_1328e8;
        case 0x1328ecu: goto label_1328ec;
        case 0x1328f0u: goto label_1328f0;
        case 0x1328f4u: goto label_1328f4;
        case 0x1328f8u: goto label_1328f8;
        case 0x1328fcu: goto label_1328fc;
        case 0x132900u: goto label_132900;
        case 0x132904u: goto label_132904;
        case 0x132908u: goto label_132908;
        case 0x13290cu: goto label_13290c;
        case 0x132910u: goto label_132910;
        case 0x132914u: goto label_132914;
        case 0x132918u: goto label_132918;
        case 0x13291cu: goto label_13291c;
        case 0x132920u: goto label_132920;
        case 0x132924u: goto label_132924;
        case 0x132928u: goto label_132928;
        case 0x13292cu: goto label_13292c;
        case 0x132930u: goto label_132930;
        case 0x132934u: goto label_132934;
        case 0x132938u: goto label_132938;
        case 0x13293cu: goto label_13293c;
        case 0x132940u: goto label_132940;
        case 0x132944u: goto label_132944;
        case 0x132948u: goto label_132948;
        case 0x13294cu: goto label_13294c;
        case 0x132950u: goto label_132950;
        case 0x132954u: goto label_132954;
        case 0x132958u: goto label_132958;
        case 0x13295cu: goto label_13295c;
        case 0x132960u: goto label_132960;
        case 0x132964u: goto label_132964;
        case 0x132968u: goto label_132968;
        case 0x13296cu: goto label_13296c;
        case 0x132970u: goto label_132970;
        case 0x132974u: goto label_132974;
        case 0x132978u: goto label_132978;
        case 0x13297cu: goto label_13297c;
        case 0x132980u: goto label_132980;
        case 0x132984u: goto label_132984;
        case 0x132988u: goto label_132988;
        case 0x13298cu: goto label_13298c;
        case 0x132990u: goto label_132990;
        case 0x132994u: goto label_132994;
        case 0x132998u: goto label_132998;
        case 0x13299cu: goto label_13299c;
        case 0x1329a0u: goto label_1329a0;
        case 0x1329a4u: goto label_1329a4;
        case 0x1329a8u: goto label_1329a8;
        case 0x1329acu: goto label_1329ac;
        case 0x1329b0u: goto label_1329b0;
        case 0x1329b4u: goto label_1329b4;
        case 0x1329b8u: goto label_1329b8;
        case 0x1329bcu: goto label_1329bc;
        case 0x1329c0u: goto label_1329c0;
        case 0x1329c4u: goto label_1329c4;
        case 0x1329c8u: goto label_1329c8;
        case 0x1329ccu: goto label_1329cc;
        case 0x1329d0u: goto label_1329d0;
        case 0x1329d4u: goto label_1329d4;
        case 0x1329d8u: goto label_1329d8;
        case 0x1329dcu: goto label_1329dc;
        case 0x1329e0u: goto label_1329e0;
        case 0x1329e4u: goto label_1329e4;
        case 0x1329e8u: goto label_1329e8;
        case 0x1329ecu: goto label_1329ec;
        case 0x1329f0u: goto label_1329f0;
        case 0x1329f4u: goto label_1329f4;
        case 0x1329f8u: goto label_1329f8;
        case 0x1329fcu: goto label_1329fc;
        case 0x132a00u: goto label_132a00;
        case 0x132a04u: goto label_132a04;
        case 0x132a08u: goto label_132a08;
        case 0x132a0cu: goto label_132a0c;
        case 0x132a10u: goto label_132a10;
        case 0x132a14u: goto label_132a14;
        case 0x132a18u: goto label_132a18;
        case 0x132a1cu: goto label_132a1c;
        case 0x132a20u: goto label_132a20;
        case 0x132a24u: goto label_132a24;
        case 0x132a28u: goto label_132a28;
        case 0x132a2cu: goto label_132a2c;
        case 0x132a30u: goto label_132a30;
        case 0x132a34u: goto label_132a34;
        case 0x132a38u: goto label_132a38;
        case 0x132a3cu: goto label_132a3c;
        case 0x132a40u: goto label_132a40;
        case 0x132a44u: goto label_132a44;
        case 0x132a48u: goto label_132a48;
        case 0x132a4cu: goto label_132a4c;
        case 0x132a50u: goto label_132a50;
        case 0x132a54u: goto label_132a54;
        case 0x132a58u: goto label_132a58;
        case 0x132a5cu: goto label_132a5c;
        case 0x132a60u: goto label_132a60;
        case 0x132a64u: goto label_132a64;
        case 0x132a68u: goto label_132a68;
        case 0x132a6cu: goto label_132a6c;
        case 0x132a70u: goto label_132a70;
        case 0x132a74u: goto label_132a74;
        case 0x132a78u: goto label_132a78;
        case 0x132a7cu: goto label_132a7c;
        case 0x132a80u: goto label_132a80;
        case 0x132a84u: goto label_132a84;
        case 0x132a88u: goto label_132a88;
        case 0x132a8cu: goto label_132a8c;
        case 0x132a90u: goto label_132a90;
        case 0x132a94u: goto label_132a94;
        case 0x132a98u: goto label_132a98;
        case 0x132a9cu: goto label_132a9c;
        case 0x132aa0u: goto label_132aa0;
        case 0x132aa4u: goto label_132aa4;
        case 0x132aa8u: goto label_132aa8;
        case 0x132aacu: goto label_132aac;
        case 0x132ab0u: goto label_132ab0;
        case 0x132ab4u: goto label_132ab4;
        case 0x132ab8u: goto label_132ab8;
        case 0x132abcu: goto label_132abc;
        case 0x132ac0u: goto label_132ac0;
        case 0x132ac4u: goto label_132ac4;
        case 0x132ac8u: goto label_132ac8;
        case 0x132accu: goto label_132acc;
        case 0x132ad0u: goto label_132ad0;
        case 0x132ad4u: goto label_132ad4;
        case 0x132ad8u: goto label_132ad8;
        case 0x132adcu: goto label_132adc;
        case 0x132ae0u: goto label_132ae0;
        case 0x132ae4u: goto label_132ae4;
        case 0x132ae8u: goto label_132ae8;
        case 0x132aecu: goto label_132aec;
        case 0x132af0u: goto label_132af0;
        case 0x132af4u: goto label_132af4;
        case 0x132af8u: goto label_132af8;
        case 0x132afcu: goto label_132afc;
        case 0x132b00u: goto label_132b00;
        case 0x132b04u: goto label_132b04;
        case 0x132b08u: goto label_132b08;
        case 0x132b0cu: goto label_132b0c;
        case 0x132b10u: goto label_132b10;
        case 0x132b14u: goto label_132b14;
        case 0x132b18u: goto label_132b18;
        case 0x132b1cu: goto label_132b1c;
        case 0x132b20u: goto label_132b20;
        case 0x132b24u: goto label_132b24;
        case 0x132b28u: goto label_132b28;
        case 0x132b2cu: goto label_132b2c;
        case 0x132b30u: goto label_132b30;
        case 0x132b34u: goto label_132b34;
        case 0x132b38u: goto label_132b38;
        case 0x132b3cu: goto label_132b3c;
        case 0x132b40u: goto label_132b40;
        case 0x132b44u: goto label_132b44;
        case 0x132b48u: goto label_132b48;
        case 0x132b4cu: goto label_132b4c;
        case 0x132b50u: goto label_132b50;
        case 0x132b54u: goto label_132b54;
        case 0x132b58u: goto label_132b58;
        case 0x132b5cu: goto label_132b5c;
        case 0x132b60u: goto label_132b60;
        case 0x132b64u: goto label_132b64;
        case 0x132b68u: goto label_132b68;
        case 0x132b6cu: goto label_132b6c;
        case 0x132b70u: goto label_132b70;
        case 0x132b74u: goto label_132b74;
        case 0x132b78u: goto label_132b78;
        case 0x132b7cu: goto label_132b7c;
        case 0x132b80u: goto label_132b80;
        case 0x132b84u: goto label_132b84;
        case 0x132b88u: goto label_132b88;
        case 0x132b8cu: goto label_132b8c;
        case 0x132b90u: goto label_132b90;
        case 0x132b94u: goto label_132b94;
        case 0x132b98u: goto label_132b98;
        case 0x132b9cu: goto label_132b9c;
        case 0x132ba0u: goto label_132ba0;
        case 0x132ba4u: goto label_132ba4;
        case 0x132ba8u: goto label_132ba8;
        case 0x132bacu: goto label_132bac;
        case 0x132bb0u: goto label_132bb0;
        case 0x132bb4u: goto label_132bb4;
        case 0x132bb8u: goto label_132bb8;
        case 0x132bbcu: goto label_132bbc;
        case 0x132bc0u: goto label_132bc0;
        case 0x132bc4u: goto label_132bc4;
        case 0x132bc8u: goto label_132bc8;
        case 0x132bccu: goto label_132bcc;
        case 0x132bd0u: goto label_132bd0;
        case 0x132bd4u: goto label_132bd4;
        case 0x132bd8u: goto label_132bd8;
        case 0x132bdcu: goto label_132bdc;
        case 0x132be0u: goto label_132be0;
        case 0x132be4u: goto label_132be4;
        case 0x132be8u: goto label_132be8;
        case 0x132becu: goto label_132bec;
        case 0x132bf0u: goto label_132bf0;
        case 0x132bf4u: goto label_132bf4;
        case 0x132bf8u: goto label_132bf8;
        case 0x132bfcu: goto label_132bfc;
        case 0x132c00u: goto label_132c00;
        case 0x132c04u: goto label_132c04;
        case 0x132c08u: goto label_132c08;
        case 0x132c0cu: goto label_132c0c;
        case 0x132c10u: goto label_132c10;
        case 0x132c14u: goto label_132c14;
        case 0x132c18u: goto label_132c18;
        case 0x132c1cu: goto label_132c1c;
        case 0x132c20u: goto label_132c20;
        case 0x132c24u: goto label_132c24;
        case 0x132c28u: goto label_132c28;
        case 0x132c2cu: goto label_132c2c;
        case 0x132c30u: goto label_132c30;
        case 0x132c34u: goto label_132c34;
        case 0x132c38u: goto label_132c38;
        case 0x132c3cu: goto label_132c3c;
        case 0x132c40u: goto label_132c40;
        case 0x132c44u: goto label_132c44;
        case 0x132c48u: goto label_132c48;
        case 0x132c4cu: goto label_132c4c;
        case 0x132c50u: goto label_132c50;
        case 0x132c54u: goto label_132c54;
        case 0x132c58u: goto label_132c58;
        case 0x132c5cu: goto label_132c5c;
        case 0x132c60u: goto label_132c60;
        case 0x132c64u: goto label_132c64;
        case 0x132c68u: goto label_132c68;
        case 0x132c6cu: goto label_132c6c;
        case 0x132c70u: goto label_132c70;
        case 0x132c74u: goto label_132c74;
        case 0x132c78u: goto label_132c78;
        case 0x132c7cu: goto label_132c7c;
        case 0x132c80u: goto label_132c80;
        case 0x132c84u: goto label_132c84;
        case 0x132c88u: goto label_132c88;
        case 0x132c8cu: goto label_132c8c;
        case 0x132c90u: goto label_132c90;
        case 0x132c94u: goto label_132c94;
        case 0x132c98u: goto label_132c98;
        case 0x132c9cu: goto label_132c9c;
        case 0x132ca0u: goto label_132ca0;
        case 0x132ca4u: goto label_132ca4;
        case 0x132ca8u: goto label_132ca8;
        case 0x132cacu: goto label_132cac;
        case 0x132cb0u: goto label_132cb0;
        case 0x132cb4u: goto label_132cb4;
        case 0x132cb8u: goto label_132cb8;
        case 0x132cbcu: goto label_132cbc;
        case 0x132cc0u: goto label_132cc0;
        case 0x132cc4u: goto label_132cc4;
        case 0x132cc8u: goto label_132cc8;
        case 0x132cccu: goto label_132ccc;
        case 0x132cd0u: goto label_132cd0;
        case 0x132cd4u: goto label_132cd4;
        case 0x132cd8u: goto label_132cd8;
        case 0x132cdcu: goto label_132cdc;
        case 0x132ce0u: goto label_132ce0;
        case 0x132ce4u: goto label_132ce4;
        case 0x132ce8u: goto label_132ce8;
        case 0x132cecu: goto label_132cec;
        case 0x132cf0u: goto label_132cf0;
        case 0x132cf4u: goto label_132cf4;
        case 0x132cf8u: goto label_132cf8;
        case 0x132cfcu: goto label_132cfc;
        case 0x132d00u: goto label_132d00;
        case 0x132d04u: goto label_132d04;
        case 0x132d08u: goto label_132d08;
        case 0x132d0cu: goto label_132d0c;
        case 0x132d10u: goto label_132d10;
        case 0x132d14u: goto label_132d14;
        case 0x132d18u: goto label_132d18;
        case 0x132d1cu: goto label_132d1c;
        case 0x132d20u: goto label_132d20;
        case 0x132d24u: goto label_132d24;
        case 0x132d28u: goto label_132d28;
        case 0x132d2cu: goto label_132d2c;
        case 0x132d30u: goto label_132d30;
        case 0x132d34u: goto label_132d34;
        case 0x132d38u: goto label_132d38;
        case 0x132d3cu: goto label_132d3c;
        case 0x132d40u: goto label_132d40;
        case 0x132d44u: goto label_132d44;
        case 0x132d48u: goto label_132d48;
        case 0x132d4cu: goto label_132d4c;
        case 0x132d50u: goto label_132d50;
        case 0x132d54u: goto label_132d54;
        case 0x132d58u: goto label_132d58;
        case 0x132d5cu: goto label_132d5c;
        case 0x132d60u: goto label_132d60;
        case 0x132d64u: goto label_132d64;
        case 0x132d68u: goto label_132d68;
        case 0x132d6cu: goto label_132d6c;
        case 0x132d70u: goto label_132d70;
        case 0x132d74u: goto label_132d74;
        case 0x132d78u: goto label_132d78;
        case 0x132d7cu: goto label_132d7c;
        case 0x132d80u: goto label_132d80;
        case 0x132d84u: goto label_132d84;
        default: break;
    }

    ctx->pc = 0x1326a0u;

label_1326a0:
    // 0x1326a0: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x1326a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
label_1326a4:
    // 0x1326a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1326a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1326a8:
    // 0x1326a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1326a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1326ac:
    // 0x1326ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1326acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1326b0:
    // 0x1326b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1326b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1326b4:
    // 0x1326b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1326b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1326b8:
    // 0x1326b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1326b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1326bc:
    // 0x1326bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1326bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1326c0:
    // 0x1326c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1326c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1326c4:
    // 0x1326c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1326c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1326c8:
    // 0x1326c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1326c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1326cc:
    // 0x1326cc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1326ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1326d0:
    // 0x1326d0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1326d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1326d4:
    // 0x1326d4: 0xafa600ac  sw          $a2, 0xAC($sp)
    ctx->pc = 0x1326d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
label_1326d8:
    // 0x1326d8: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1326d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1326dc:
    // 0x1326dc: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1326dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1326e0:
    // 0x1326e0: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1326e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1326e4:
    // 0x1326e4: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x1326e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1326e8:
    // 0x1326e8: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x1326e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1326ec:
    // 0x1326ec: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1326ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1326f0:
    // 0x1326f0: 0x26c50030  addiu       $a1, $s6, 0x30
    ctx->pc = 0x1326f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
label_1326f4:
    // 0x1326f4: 0xc041c60  jal         func_107180
label_1326f8:
    if (ctx->pc == 0x1326F8u) {
        ctx->pc = 0x1326FCu;
        goto label_1326fc;
    }
    ctx->pc = 0x1326F4u;
    SET_GPR_U32(ctx, 31, 0x1326FCu);
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1326FCu; }
        if (ctx->pc != 0x1326FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1326FCu; }
        if (ctx->pc != 0x1326FCu) { return; }
    }
    ctx->pc = 0x1326FCu;
label_1326fc:
    // 0x1326fc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1326fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_132700:
    // 0x132700: 0x26c50008  addiu       $a1, $s6, 0x8
    ctx->pc = 0x132700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_132704:
    // 0x132704: 0xc04c6d8  jal         func_131B60
label_132708:
    if (ctx->pc == 0x132708u) {
        ctx->pc = 0x13270Cu;
        goto label_13270c;
    }
    ctx->pc = 0x132704u;
    SET_GPR_U32(ctx, 31, 0x13270Cu);
    ctx->pc = 0x131B60u;
    if (runtime->hasFunction(0x131B60u)) {
        auto targetFn = runtime->lookupFunction(0x131B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13270Cu; }
        if (ctx->pc != 0x13270Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        conv_new_text__FPcPc_0x131b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13270Cu; }
        if (ctx->pc != 0x13270Cu) { return; }
    }
    ctx->pc = 0x13270Cu;
label_13270c:
    // 0x13270c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x13270cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_132710:
    // 0x132710: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x132710u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
label_132714:
    // 0x132714: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_132718:
    if (ctx->pc == 0x132718u) {
        ctx->pc = 0x13271Cu;
        goto label_13271c;
    }
    ctx->pc = 0x132714u;
    {
        const bool branch_taken_0x132714 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x132714) {
            ctx->pc = 0x132724u;
            goto label_132724;
        }
    }
    ctx->pc = 0x13271Cu;
label_13271c:
    // 0x13271c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x13271cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_132720:
    // 0x132720: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x132720u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_132724:
    // 0x132724: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x132724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_132728:
    // 0x132728: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x132728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13272c:
    // 0x13272c: 0xc04e748  jal         func_139D20
label_132730:
    if (ctx->pc == 0x132730u) {
        ctx->pc = 0x132734u;
        goto label_132734;
    }
    ctx->pc = 0x13272Cu;
    SET_GPR_U32(ctx, 31, 0x132734u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132734u; }
        if (ctx->pc != 0x132734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132734u; }
        if (ctx->pc != 0x132734u) { return; }
    }
    ctx->pc = 0x132734u;
label_132734:
    // 0x132734: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x132734u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132738:
    // 0x132738: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x132738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13273c:
    // 0x13273c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x13273cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_132740:
    // 0x132740: 0x24a52538  addiu       $a1, $a1, 0x2538
    ctx->pc = 0x132740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9528));
label_132744:
    // 0x132744: 0xc04e62c  jal         func_1398B0
label_132748:
    if (ctx->pc == 0x132748u) {
        ctx->pc = 0x13274Cu;
        goto label_13274c;
    }
    ctx->pc = 0x132744u;
    SET_GPR_U32(ctx, 31, 0x13274Cu);
    ctx->pc = 0x1398B0u;
    if (runtime->hasFunction(0x1398B0u)) {
        auto targetFn = runtime->lookupFunction(0x1398B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13274Cu; }
        if (ctx->pc != 0x13274Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MG_ADDRESS_CHECK__FPvPc_0x1398b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13274Cu; }
        if (ctx->pc != 0x13274Cu) { return; }
    }
    ctx->pc = 0x13274Cu;
label_13274c:
    // 0x13274c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_132750:
    if (ctx->pc == 0x132750u) {
        ctx->pc = 0x132754u;
        goto label_132754;
    }
    ctx->pc = 0x13274Cu;
    {
        const bool branch_taken_0x13274c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13274c) {
            ctx->pc = 0x132760u;
            goto label_132760;
        }
    }
    ctx->pc = 0x132754u;
label_132754:
    // 0x132754: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x132754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132758:
    // 0x132758: 0x1000017e  b           . + 4 + (0x17E << 2)
label_13275c:
    if (ctx->pc == 0x13275Cu) {
        ctx->pc = 0x132760u;
        goto label_132760;
    }
    ctx->pc = 0x132758u;
    {
        const bool branch_taken_0x132758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132758) {
            ctx->pc = 0x132D54u;
            goto label_132d54;
        }
    }
    ctx->pc = 0x132760u;
label_132760:
    // 0x132760: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x132760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_132764:
    // 0x132764: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x132764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_132768:
    // 0x132768: 0xc04a3dc  jal         func_128F70
label_13276c:
    if (ctx->pc == 0x13276Cu) {
        ctx->pc = 0x132770u;
        goto label_132770;
    }
    ctx->pc = 0x132768u;
    SET_GPR_U32(ctx, 31, 0x132770u);
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132770u; }
        if (ctx->pc != 0x132770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132770u; }
        if (ctx->pc != 0x132770u) { return; }
    }
    ctx->pc = 0x132770u;
label_132770:
    // 0x132770: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x132770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_132774:
    // 0x132774: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x132774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_132778:
    // 0x132778: 0xc04d964  jal         func_136590
label_13277c:
    if (ctx->pc == 0x13277Cu) {
        ctx->pc = 0x132780u;
        goto label_132780;
    }
    ctx->pc = 0x132778u;
    SET_GPR_U32(ctx, 31, 0x132780u);
    ctx->pc = 0x136590u;
    if (runtime->hasFunction(0x136590u)) {
        auto targetFn = runtime->lookupFunction(0x136590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132780u; }
        if (ctx->pc != 0x132780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetName__8mgCFrameFPc_0x136590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132780u; }
        if (ctx->pc != 0x132780u) { return; }
    }
    ctx->pc = 0x132780u;
label_132780:
    // 0x132780: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x132780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_132784:
    // 0x132784: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x132784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_132788:
    // 0x132788: 0xc04dd64  jal         func_137590
label_13278c:
    if (ctx->pc == 0x13278Cu) {
        ctx->pc = 0x132790u;
        goto label_132790;
    }
    ctx->pc = 0x132788u;
    SET_GPR_U32(ctx, 31, 0x132790u);
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132790u; }
        if (ctx->pc != 0x132790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132790u; }
        if (ctx->pc != 0x132790u) { return; }
    }
    ctx->pc = 0x132790u;
label_132790:
    // 0x132790: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x132790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_132794:
    // 0x132794: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x132794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_132798:
    // 0x132798: 0xc04dab8  jal         func_136AE0
label_13279c:
    if (ctx->pc == 0x13279Cu) {
        ctx->pc = 0x1327A0u;
        goto label_1327a0;
    }
    ctx->pc = 0x132798u;
    SET_GPR_U32(ctx, 31, 0x1327A0u);
    ctx->pc = 0x136AE0u;
    if (runtime->hasFunction(0x136AE0u)) {
        auto targetFn = runtime->lookupFunction(0x136AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1327A0u; }
        if (ctx->pc != 0x1327A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetParent__8mgCFrameFP8mgCFrame_0x136ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1327A0u; }
        if (ctx->pc != 0x1327A0u) { return; }
    }
    ctx->pc = 0x1327A0u;
label_1327a0:
    // 0x1327a0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1327a4:
    if (ctx->pc == 0x1327A4u) {
        ctx->pc = 0x1327A8u;
        goto label_1327a8;
    }
    ctx->pc = 0x1327A0u;
    {
        const bool branch_taken_0x1327a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1327a0) {
            ctx->pc = 0x1327CCu;
            goto label_1327cc;
        }
    }
    ctx->pc = 0x1327A8u;
label_1327a8:
    // 0x1327a8: 0x4163c  dsll32      $v0, $a0, 24
    ctx->pc = 0x1327a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 24));
label_1327ac:
    // 0x1327ac: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1327acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_1327b0:
    // 0x1327b0: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1327b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1327b4:
    // 0x1327b4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_1327b8:
    if (ctx->pc == 0x1327B8u) {
        ctx->pc = 0x1327BCu;
        goto label_1327bc;
    }
    ctx->pc = 0x1327B4u;
    {
        const bool branch_taken_0x1327b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1327b4) {
            ctx->pc = 0x1327C8u;
            goto label_1327c8;
        }
    }
    ctx->pc = 0x1327BCu;
label_1327bc:
    // 0x1327bc: 0x82a20001  lb          $v0, 0x1($s5)
    ctx->pc = 0x1327bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
label_1327c0:
    // 0x1327c0: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_1327c4:
    if (ctx->pc == 0x1327C4u) {
        ctx->pc = 0x1327C8u;
        goto label_1327c8;
    }
    ctx->pc = 0x1327C0u;
    {
        const bool branch_taken_0x1327c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1327c0) {
            ctx->pc = 0x1327DCu;
            goto label_1327dc;
        }
    }
    ctx->pc = 0x1327C8u;
label_1327c8:
    // 0x1327c8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1327c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1327cc:
    // 0x1327cc: 0x0  nop
    ctx->pc = 0x1327ccu;
    // NOP
label_1327d0:
    // 0x1327d0: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x1327d0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_1327d4:
    // 0x1327d4: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
label_1327d8:
    if (ctx->pc == 0x1327D8u) {
        ctx->pc = 0x1327DCu;
        goto label_1327dc;
    }
    ctx->pc = 0x1327D4u;
    {
        const bool branch_taken_0x1327d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1327d4) {
            ctx->pc = 0x1327A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1327a8;
        }
    }
    ctx->pc = 0x1327DCu;
label_1327dc:
    // 0x1327dc: 0x0  nop
    ctx->pc = 0x1327dcu;
    // NOP
label_1327e0:
    // 0x1327e0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_1327e4:
    if (ctx->pc == 0x1327E4u) {
        ctx->pc = 0x1327E8u;
        goto label_1327e8;
    }
    ctx->pc = 0x1327E0u;
    {
        const bool branch_taken_0x1327e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1327e0) {
            ctx->pc = 0x1327FCu;
            goto label_1327fc;
        }
    }
    ctx->pc = 0x1327E8u;
label_1327e8:
    // 0x1327e8: 0x8ec20028  lw          $v0, 0x28($s6)
    ctx->pc = 0x1327e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
label_1327ec:
    // 0x1327ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1327f0:
    if (ctx->pc == 0x1327F0u) {
        ctx->pc = 0x1327F4u;
        goto label_1327f4;
    }
    ctx->pc = 0x1327ECu;
    {
        const bool branch_taken_0x1327ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1327ec) {
            ctx->pc = 0x1327FCu;
            goto label_1327fc;
        }
    }
    ctx->pc = 0x1327F4u;
label_1327f4:
    // 0x1327f4: 0x16e00016  bnez        $s7, . + 4 + (0x16 << 2)
label_1327f8:
    if (ctx->pc == 0x1327F8u) {
        ctx->pc = 0x1327FCu;
        goto label_1327fc;
    }
    ctx->pc = 0x1327F4u;
    {
        const bool branch_taken_0x1327f4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x1327f4) {
            ctx->pc = 0x132850u;
            goto label_132850;
        }
    }
    ctx->pc = 0x1327FCu;
label_1327fc:
    // 0x1327fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1327fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_132800:
    // 0x132800: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x132800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_132804:
    // 0x132804: 0xc04e748  jal         func_139D20
label_132808:
    if (ctx->pc == 0x132808u) {
        ctx->pc = 0x13280Cu;
        goto label_13280c;
    }
    ctx->pc = 0x132804u;
    SET_GPR_U32(ctx, 31, 0x13280Cu);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13280Cu; }
        if (ctx->pc != 0x13280Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13280Cu; }
        if (ctx->pc != 0x13280Cu) { return; }
    }
    ctx->pc = 0x13280Cu;
label_13280c:
    // 0x13280c: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x13280cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_132810:
    // 0x132810: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x132810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132814:
    // 0x132814: 0xc04e638  jal         func_1398E0
label_132818:
    if (ctx->pc == 0x132818u) {
        ctx->pc = 0x13281Cu;
        goto label_13281c;
    }
    ctx->pc = 0x132814u;
    SET_GPR_U32(ctx, 31, 0x13281Cu);
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13281Cu; }
        if (ctx->pc != 0x13281Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13281Cu; }
        if (ctx->pc != 0x13281Cu) { return; }
    }
    ctx->pc = 0x13281Cu;
label_13281c:
    // 0x13281c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x13281cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132820:
    // 0x132820: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_132824:
    if (ctx->pc == 0x132824u) {
        ctx->pc = 0x132828u;
        goto label_132828;
    }
    ctx->pc = 0x132820u;
    {
        const bool branch_taken_0x132820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132820) {
            ctx->pc = 0x132838u;
            goto label_132838;
        }
    }
    ctx->pc = 0x132828u;
label_132828:
    // 0x132828: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x132828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13282c:
    // 0x13282c: 0xc04d6d8  jal         func_135B60
label_132830:
    if (ctx->pc == 0x132830u) {
        ctx->pc = 0x132834u;
        goto label_132834;
    }
    ctx->pc = 0x13282Cu;
    SET_GPR_U32(ctx, 31, 0x132834u);
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132834u; }
        if (ctx->pc != 0x132834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132834u; }
        if (ctx->pc != 0x132834u) { return; }
    }
    ctx->pc = 0x132834u;
label_132834:
    // 0x132834: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x132834u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132838:
    // 0x132838: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_13283c:
    if (ctx->pc == 0x13283Cu) {
        ctx->pc = 0x132840u;
        goto label_132840;
    }
    ctx->pc = 0x132838u;
    {
        const bool branch_taken_0x132838 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x132838) {
            ctx->pc = 0x13284Cu;
            goto label_13284c;
        }
    }
    ctx->pc = 0x132840u;
label_132840:
    // 0x132840: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x132840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_132844:
    // 0x132844: 0xc04d6b4  jal         func_135AD0
label_132848:
    if (ctx->pc == 0x132848u) {
        ctx->pc = 0x13284Cu;
        goto label_13284c;
    }
    ctx->pc = 0x132844u;
    SET_GPR_U32(ctx, 31, 0x13284Cu);
    ctx->pc = 0x135AD0u;
    if (runtime->hasFunction(0x135AD0u)) {
        auto targetFn = runtime->lookupFunction(0x135AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13284Cu; }
        if (ctx->pc != 0x13284Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12mgCFrameAttrFv_0x135ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13284Cu; }
        if (ctx->pc != 0x13284Cu) { return; }
    }
    ctx->pc = 0x13284Cu;
label_13284c:
    // 0x13284c: 0xae9500f4  sw          $s5, 0xF4($s4)
    ctx->pc = 0x13284cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 244), GPR_U32(ctx, 21));
label_132850:
    // 0x132850: 0x8ec20028  lw          $v0, 0x28($s6)
    ctx->pc = 0x132850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
label_132854:
    // 0x132854: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_132858:
    if (ctx->pc == 0x132858u) {
        ctx->pc = 0x13285Cu;
        goto label_13285c;
    }
    ctx->pc = 0x132854u;
    {
        const bool branch_taken_0x132854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132854) {
            ctx->pc = 0x132868u;
            goto label_132868;
        }
    }
    ctx->pc = 0x13285Cu;
label_13285c:
    // 0x13285c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13285cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132860:
    // 0x132860: 0x1000013c  b           . + 4 + (0x13C << 2)
label_132864:
    if (ctx->pc == 0x132864u) {
        ctx->pc = 0x132868u;
        goto label_132868;
    }
    ctx->pc = 0x132860u;
    {
        const bool branch_taken_0x132860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132860) {
            ctx->pc = 0x132D54u;
            goto label_132d54;
        }
    }
    ctx->pc = 0x132868u;
label_132868:
    // 0x132868: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x132868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13286c:
    // 0x13286c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x13286cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_132870:
    // 0x132870: 0xc04e748  jal         func_139D20
label_132874:
    if (ctx->pc == 0x132874u) {
        ctx->pc = 0x132878u;
        goto label_132878;
    }
    ctx->pc = 0x132870u;
    SET_GPR_U32(ctx, 31, 0x132878u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132878u; }
        if (ctx->pc != 0x132878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132878u; }
        if (ctx->pc != 0x132878u) { return; }
    }
    ctx->pc = 0x132878u;
label_132878:
    // 0x132878: 0xae8200f0  sw          $v0, 0xF0($s4)
    ctx->pc = 0x132878u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 240), GPR_U32(ctx, 2));
label_13287c:
    // 0x13287c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x13287cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_132880:
    // 0x132880: 0x2423821  addu        $a3, $s2, $v0
    ctx->pc = 0x132880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_132884:
    // 0x132884: 0x8e48000c  lw          $t0, 0xC($s2)
    ctx->pc = 0x132884u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_132888:
    // 0x132888: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x132888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_13288c:
    // 0x13288c: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x13288cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_132890:
    // 0x132890: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x132890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_132894:
    // 0x132894: 0xc04cc98  jal         func_133260
label_132898:
    if (ctx->pc == 0x132898u) {
        ctx->pc = 0x13289Cu;
        goto label_13289c;
    }
    ctx->pc = 0x132894u;
    SET_GPR_U32(ctx, 31, 0x13289Cu);
    ctx->pc = 0x133260u;
    if (runtime->hasFunction(0x133260u)) {
        auto targetFn = runtime->lookupFunction(0x133260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13289Cu; }
        if (ctx->pc != 0x13289Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCreateBBoxSphere__FPfPfPfPA4_fi_0x133260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13289Cu; }
        if (ctx->pc != 0x13289Cu) { return; }
    }
    ctx->pc = 0x13289Cu;
label_13289c:
    // 0x13289c: 0x16200019  bnez        $s1, . + 4 + (0x19 << 2)
label_1328a0:
    if (ctx->pc == 0x1328A0u) {
        ctx->pc = 0x1328A4u;
        goto label_1328a4;
    }
    ctx->pc = 0x13289Cu;
    {
        const bool branch_taken_0x13289c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x13289c) {
            ctx->pc = 0x132904u;
            goto label_132904;
        }
    }
    ctx->pc = 0x1328A4u;
label_1328a4:
    // 0x1328a4: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x1328a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_1328a8:
    // 0x1328a8: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x1328a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_1328ac:
    // 0x1328ac: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x1328acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_1328b0:
    // 0x1328b0: 0xc041c3e  jal         func_1070F8
label_1328b4:
    if (ctx->pc == 0x1328B4u) {
        ctx->pc = 0x1328B8u;
        goto label_1328b8;
    }
    ctx->pc = 0x1328B0u;
    SET_GPR_U32(ctx, 31, 0x1328B8u);
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1328B8u; }
        if (ctx->pc != 0x1328B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1328B8u; }
        if (ctx->pc != 0x1328B8u) { return; }
    }
    ctx->pc = 0x1328B8u;
label_1328b8:
    // 0x1328b8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1328b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1328bc:
    // 0x1328bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1328bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1328c0:
    // 0x1328c0: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x1328c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_1328c4:
    // 0x1328c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1328c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1328c8:
    // 0x1328c8: 0xc041c4a  jal         func_107128
label_1328cc:
    if (ctx->pc == 0x1328CCu) {
        ctx->pc = 0x1328D0u;
        goto label_1328d0;
    }
    ctx->pc = 0x1328C8u;
    SET_GPR_U32(ctx, 31, 0x1328D0u);
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1328D0u; }
        if (ctx->pc != 0x1328D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1328D0u; }
        if (ctx->pc != 0x1328D0u) { return; }
    }
    ctx->pc = 0x1328D0u;
label_1328d0:
    // 0x1328d0: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x1328d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_1328d4:
    // 0x1328d4: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x1328d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_1328d8:
    // 0x1328d8: 0xc04bcf4  jal         func_12F3D0
label_1328dc:
    if (ctx->pc == 0x1328DCu) {
        ctx->pc = 0x1328E0u;
        goto label_1328e0;
    }
    ctx->pc = 0x1328D8u;
    SET_GPR_U32(ctx, 31, 0x1328E0u);
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1328E0u; }
        if (ctx->pc != 0x1328E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1328E0u; }
        if (ctx->pc != 0x1328E0u) { return; }
    }
    ctx->pc = 0x1328E0u;
label_1328e0:
    // 0x1328e0: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x1328e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_1328e4:
    // 0x1328e4: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x1328e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_1328e8:
    // 0x1328e8: 0xc04bcfc  jal         func_12F3F0
label_1328ec:
    if (ctx->pc == 0x1328ECu) {
        ctx->pc = 0x1328F0u;
        goto label_1328f0;
    }
    ctx->pc = 0x1328E8u;
    SET_GPR_U32(ctx, 31, 0x1328F0u);
    ctx->pc = 0x12F3F0u;
    if (runtime->hasFunction(0x12F3F0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1328F0u; }
        if (ctx->pc != 0x1328F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSubVector__FPfPf_0x12f3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1328F0u; }
        if (ctx->pc != 0x1328F0u) { return; }
    }
    ctx->pc = 0x1328F0u;
label_1328f0:
    // 0x1328f0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1328f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1328f4:
    // 0x1328f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1328f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1328f8:
    // 0x1328f8: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x1328f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1328fc:
    // 0x1328fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1328fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_132900:
    // 0x132900: 0xe7a0021c  swc1        $f0, 0x21C($sp)
    ctx->pc = 0x132900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
label_132904:
    // 0x132904: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x132904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_132908:
    // 0x132908: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x132908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_13290c:
    // 0x13290c: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x13290cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_132910:
    // 0x132910: 0xc04d97c  jal         func_1365F0
label_132914:
    if (ctx->pc == 0x132914u) {
        ctx->pc = 0x132918u;
        goto label_132918;
    }
    ctx->pc = 0x132910u;
    SET_GPR_U32(ctx, 31, 0x132918u);
    ctx->pc = 0x1365F0u;
    if (runtime->hasFunction(0x1365F0u)) {
        auto targetFn = runtime->lookupFunction(0x1365F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132918u; }
        if (ctx->pc != 0x132918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBBox__8mgCFrameFPfPf_0x1365f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132918u; }
        if (ctx->pc != 0x132918u) { return; }
    }
    ctx->pc = 0x132918u;
label_132918:
    // 0x132918: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x132918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13291c:
    // 0x13291c: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x13291cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_132920:
    // 0x132920: 0xc7ac021c  lwc1        $f12, 0x21C($sp)
    ctx->pc = 0x132920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_132924:
    // 0x132924: 0xc04d9d8  jal         func_136760
label_132928:
    if (ctx->pc == 0x132928u) {
        ctx->pc = 0x13292Cu;
        goto label_13292c;
    }
    ctx->pc = 0x132924u;
    SET_GPR_U32(ctx, 31, 0x13292Cu);
    ctx->pc = 0x136760u;
    if (runtime->hasFunction(0x136760u)) {
        auto targetFn = runtime->lookupFunction(0x136760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13292Cu; }
        if (ctx->pc != 0x13292Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBSphere__8mgCFrameFPff_0x136760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13292Cu; }
        if (ctx->pc != 0x13292Cu) { return; }
    }
    ctx->pc = 0x13292Cu;
label_13292c:
    // 0x13292c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x13292cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_132930:
    // 0x132930: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
label_132934:
    if (ctx->pc == 0x132934u) {
        ctx->pc = 0x132938u;
        goto label_132938;
    }
    ctx->pc = 0x132930u;
    {
        const bool branch_taken_0x132930 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x132930) {
            ctx->pc = 0x132948u;
            goto label_132948;
        }
    }
    ctx->pc = 0x132938u;
label_132938:
    // 0x132938: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x132938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_13293c:
    // 0x13293c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_132940:
    if (ctx->pc == 0x132940u) {
        ctx->pc = 0x132944u;
        goto label_132944;
    }
    ctx->pc = 0x13293Cu;
    {
        const bool branch_taken_0x13293c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13293c) {
            ctx->pc = 0x132948u;
            goto label_132948;
        }
    }
    ctx->pc = 0x132944u;
label_132944:
    // 0x132944: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x132944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_132948:
    // 0x132948: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x132948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_13294c:
    // 0x13294c: 0x1222009d  beq         $s1, $v0, . + 4 + (0x9D << 2)
label_132950:
    if (ctx->pc == 0x132950u) {
        ctx->pc = 0x132954u;
        goto label_132954;
    }
    ctx->pc = 0x13294Cu;
    {
        const bool branch_taken_0x13294c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x13294c) {
            ctx->pc = 0x132BC4u;
            goto label_132bc4;
        }
    }
    ctx->pc = 0x132954u;
label_132954:
    // 0x132954: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x132954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_132958:
    // 0x132958: 0x1222007a  beq         $s1, $v0, . + 4 + (0x7A << 2)
label_13295c:
    if (ctx->pc == 0x13295Cu) {
        ctx->pc = 0x132960u;
        goto label_132960;
    }
    ctx->pc = 0x132958u;
    {
        const bool branch_taken_0x132958 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x132958) {
            ctx->pc = 0x132B44u;
            goto label_132b44;
        }
    }
    ctx->pc = 0x132960u;
label_132960:
    // 0x132960: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x132960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_132964:
    // 0x132964: 0x1222004a  beq         $s1, $v0, . + 4 + (0x4A << 2)
label_132968:
    if (ctx->pc == 0x132968u) {
        ctx->pc = 0x13296Cu;
        goto label_13296c;
    }
    ctx->pc = 0x132964u;
    {
        const bool branch_taken_0x132964 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x132964) {
            ctx->pc = 0x132A90u;
            goto label_132a90;
        }
    }
    ctx->pc = 0x13296Cu;
label_13296c:
    // 0x13296c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13296cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_132970:
    // 0x132970: 0x12220022  beq         $s1, $v0, . + 4 + (0x22 << 2)
label_132974:
    if (ctx->pc == 0x132974u) {
        ctx->pc = 0x132978u;
        goto label_132978;
    }
    ctx->pc = 0x132970u;
    {
        const bool branch_taken_0x132970 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x132970) {
            ctx->pc = 0x1329FCu;
            goto label_1329fc;
        }
    }
    ctx->pc = 0x132978u;
label_132978:
    // 0x132978: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_13297c:
    if (ctx->pc == 0x13297Cu) {
        ctx->pc = 0x132980u;
        goto label_132980;
    }
    ctx->pc = 0x132978u;
    {
        const bool branch_taken_0x132978 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x132978) {
            ctx->pc = 0x132988u;
            goto label_132988;
        }
    }
    ctx->pc = 0x132980u;
label_132980:
    // 0x132980: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_132984:
    if (ctx->pc == 0x132984u) {
        ctx->pc = 0x132988u;
        goto label_132988;
    }
    ctx->pc = 0x132980u;
    {
        const bool branch_taken_0x132980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132980) {
            ctx->pc = 0x132C48u;
            goto label_132c48;
        }
    }
    ctx->pc = 0x132988u;
label_132988:
    // 0x132988: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x132988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13298c:
    // 0x13298c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x13298cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_132990:
    // 0x132990: 0xc04e748  jal         func_139D20
label_132994:
    if (ctx->pc == 0x132994u) {
        ctx->pc = 0x132998u;
        goto label_132998;
    }
    ctx->pc = 0x132990u;
    SET_GPR_U32(ctx, 31, 0x132998u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132998u; }
        if (ctx->pc != 0x132998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132998u; }
        if (ctx->pc != 0x132998u) { return; }
    }
    ctx->pc = 0x132998u;
label_132998:
    // 0x132998: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x132998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_13299c:
    // 0x13299c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13299cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1329a0:
    // 0x1329a0: 0xc04e638  jal         func_1398E0
label_1329a4:
    if (ctx->pc == 0x1329A4u) {
        ctx->pc = 0x1329A8u;
        goto label_1329a8;
    }
    ctx->pc = 0x1329A0u;
    SET_GPR_U32(ctx, 31, 0x1329A8u);
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1329A8u; }
        if (ctx->pc != 0x1329A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1329A8u; }
        if (ctx->pc != 0x1329A8u) { return; }
    }
    ctx->pc = 0x1329A8u;
label_1329a8:
    // 0x1329a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1329a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1329ac:
    // 0x1329ac: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1329b0:
    if (ctx->pc == 0x1329B0u) {
        ctx->pc = 0x1329B4u;
        goto label_1329b4;
    }
    ctx->pc = 0x1329ACu;
    {
        const bool branch_taken_0x1329ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1329ac) {
            ctx->pc = 0x1329F4u;
            goto label_1329f4;
        }
    }
    ctx->pc = 0x1329B4u;
label_1329b4:
    // 0x1329b4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1329b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1329b8:
    // 0x1329b8: 0x24424f10  addiu       $v0, $v0, 0x4F10
    ctx->pc = 0x1329b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20240));
label_1329bc:
    // 0x1329bc: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1329bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1329c0:
    // 0x1329c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1329c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1329c4:
    // 0x1329c4: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x1329c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1329c8:
    // 0x1329c8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1329c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1329cc:
    // 0x1329cc: 0x320f809  jalr        $t9
label_1329d0:
    if (ctx->pc == 0x1329D0u) {
        ctx->pc = 0x1329D4u;
        goto label_1329d4;
    }
    ctx->pc = 0x1329CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1329D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1329D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1329D4u; }
            if (ctx->pc != 0x1329D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1329D4u;
label_1329d4:
    // 0x1329d4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1329d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1329d8:
    // 0x1329d8: 0x24425190  addiu       $v0, $v0, 0x5190
    ctx->pc = 0x1329d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20880));
label_1329dc:
    // 0x1329dc: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1329dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1329e0:
    // 0x1329e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1329e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1329e4:
    // 0x1329e4: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x1329e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1329e8:
    // 0x1329e8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1329e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1329ec:
    // 0x1329ec: 0x320f809  jalr        $t9
label_1329f0:
    if (ctx->pc == 0x1329F0u) {
        ctx->pc = 0x1329F4u;
        goto label_1329f4;
    }
    ctx->pc = 0x1329ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1329F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1329F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1329F4u; }
            if (ctx->pc != 0x1329F4u) { return; }
        }
        }
    }
    ctx->pc = 0x1329F4u;
label_1329f4:
    // 0x1329f4: 0x10000094  b           . + 4 + (0x94 << 2)
label_1329f8:
    if (ctx->pc == 0x1329F8u) {
        ctx->pc = 0x1329FCu;
        goto label_1329fc;
    }
    ctx->pc = 0x1329F4u;
    {
        const bool branch_taken_0x1329f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1329f4) {
            ctx->pc = 0x132C48u;
            goto label_132c48;
        }
    }
    ctx->pc = 0x1329FCu;
label_1329fc:
    // 0x1329fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1329fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_132a00:
    // 0x132a00: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x132a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_132a04:
    // 0x132a04: 0xc04e748  jal         func_139D20
label_132a08:
    if (ctx->pc == 0x132A08u) {
        ctx->pc = 0x132A0Cu;
        goto label_132a0c;
    }
    ctx->pc = 0x132A04u;
    SET_GPR_U32(ctx, 31, 0x132A0Cu);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132A0Cu; }
        if (ctx->pc != 0x132A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132A0Cu; }
        if (ctx->pc != 0x132A0Cu) { return; }
    }
    ctx->pc = 0x132A0Cu;
label_132a0c:
    // 0x132a0c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x132a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_132a10:
    // 0x132a10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x132a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132a14:
    // 0x132a14: 0xc04e638  jal         func_1398E0
label_132a18:
    if (ctx->pc == 0x132A18u) {
        ctx->pc = 0x132A1Cu;
        goto label_132a1c;
    }
    ctx->pc = 0x132A14u;
    SET_GPR_U32(ctx, 31, 0x132A1Cu);
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132A1Cu; }
        if (ctx->pc != 0x132A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132A1Cu; }
        if (ctx->pc != 0x132A1Cu) { return; }
    }
    ctx->pc = 0x132A1Cu;
label_132a1c:
    // 0x132a1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x132a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132a20:
    // 0x132a20: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_132a24:
    if (ctx->pc == 0x132A24u) {
        ctx->pc = 0x132A28u;
        goto label_132a28;
    }
    ctx->pc = 0x132A20u;
    {
        const bool branch_taken_0x132a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132a20) {
            ctx->pc = 0x132A88u;
            goto label_132a88;
        }
    }
    ctx->pc = 0x132A28u;
label_132a28:
    // 0x132a28: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x132a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_132a2c:
    // 0x132a2c: 0x24424f10  addiu       $v0, $v0, 0x4F10
    ctx->pc = 0x132a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20240));
label_132a30:
    // 0x132a30: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x132a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_132a34:
    // 0x132a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132a38:
    // 0x132a38: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x132a38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_132a3c:
    // 0x132a3c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x132a3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_132a40:
    // 0x132a40: 0x320f809  jalr        $t9
label_132a44:
    if (ctx->pc == 0x132A44u) {
        ctx->pc = 0x132A48u;
        goto label_132a48;
    }
    ctx->pc = 0x132A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x132A48u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x132A48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132A48u; }
            if (ctx->pc != 0x132A48u) { return; }
        }
        }
    }
    ctx->pc = 0x132A48u;
label_132a48:
    // 0x132a48: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x132a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_132a4c:
    // 0x132a4c: 0x24425190  addiu       $v0, $v0, 0x5190
    ctx->pc = 0x132a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20880));
label_132a50:
    // 0x132a50: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x132a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_132a54:
    // 0x132a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132a58:
    // 0x132a58: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x132a58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_132a5c:
    // 0x132a5c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x132a5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_132a60:
    // 0x132a60: 0x320f809  jalr        $t9
label_132a64:
    if (ctx->pc == 0x132A64u) {
        ctx->pc = 0x132A68u;
        goto label_132a68;
    }
    ctx->pc = 0x132A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x132A68u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x132A68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132A68u; }
            if (ctx->pc != 0x132A68u) { return; }
        }
        }
    }
    ctx->pc = 0x132A68u;
label_132a68:
    // 0x132a68: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x132a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_132a6c:
    // 0x132a6c: 0x24425140  addiu       $v0, $v0, 0x5140
    ctx->pc = 0x132a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20800));
label_132a70:
    // 0x132a70: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x132a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_132a74:
    // 0x132a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132a78:
    // 0x132a78: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x132a78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_132a7c:
    // 0x132a7c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x132a7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_132a80:
    // 0x132a80: 0x320f809  jalr        $t9
label_132a84:
    if (ctx->pc == 0x132A84u) {
        ctx->pc = 0x132A88u;
        goto label_132a88;
    }
    ctx->pc = 0x132A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x132A88u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x132A88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132A88u; }
            if (ctx->pc != 0x132A88u) { return; }
        }
        }
    }
    ctx->pc = 0x132A88u;
label_132a88:
    // 0x132a88: 0x1000006f  b           . + 4 + (0x6F << 2)
label_132a8c:
    if (ctx->pc == 0x132A8Cu) {
        ctx->pc = 0x132A90u;
        goto label_132a90;
    }
    ctx->pc = 0x132A88u;
    {
        const bool branch_taken_0x132a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132a88) {
            ctx->pc = 0x132C48u;
            goto label_132c48;
        }
    }
    ctx->pc = 0x132A90u;
label_132a90:
    // 0x132a90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x132a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_132a94:
    // 0x132a94: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x132a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_132a98:
    // 0x132a98: 0xc04e748  jal         func_139D20
label_132a9c:
    if (ctx->pc == 0x132A9Cu) {
        ctx->pc = 0x132AA0u;
        goto label_132aa0;
    }
    ctx->pc = 0x132A98u;
    SET_GPR_U32(ctx, 31, 0x132AA0u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132AA0u; }
        if (ctx->pc != 0x132AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132AA0u; }
        if (ctx->pc != 0x132AA0u) { return; }
    }
    ctx->pc = 0x132AA0u;
label_132aa0:
    // 0x132aa0: 0x24040110  addiu       $a0, $zero, 0x110
    ctx->pc = 0x132aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_132aa4:
    // 0x132aa4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x132aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132aa8:
    // 0x132aa8: 0xc04e638  jal         func_1398E0
label_132aac:
    if (ctx->pc == 0x132AACu) {
        ctx->pc = 0x132AB0u;
        goto label_132ab0;
    }
    ctx->pc = 0x132AA8u;
    SET_GPR_U32(ctx, 31, 0x132AB0u);
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132AB0u; }
        if (ctx->pc != 0x132AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132AB0u; }
        if (ctx->pc != 0x132AB0u) { return; }
    }
    ctx->pc = 0x132AB0u;
label_132ab0:
    // 0x132ab0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x132ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132ab4:
    // 0x132ab4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_132ab8:
    if (ctx->pc == 0x132AB8u) {
        ctx->pc = 0x132ABCu;
        goto label_132abc;
    }
    ctx->pc = 0x132AB4u;
    {
        const bool branch_taken_0x132ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132ab4) {
            ctx->pc = 0x132B3Cu;
            goto label_132b3c;
        }
    }
    ctx->pc = 0x132ABCu;
label_132abc:
    // 0x132abc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x132abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_132ac0:
    // 0x132ac0: 0x24424f10  addiu       $v0, $v0, 0x4F10
    ctx->pc = 0x132ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20240));
label_132ac4:
    // 0x132ac4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x132ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_132ac8:
    // 0x132ac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132acc:
    // 0x132acc: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x132accu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_132ad0:
    // 0x132ad0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x132ad0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_132ad4:
    // 0x132ad4: 0x320f809  jalr        $t9
label_132ad8:
    if (ctx->pc == 0x132AD8u) {
        ctx->pc = 0x132ADCu;
        goto label_132adc;
    }
    ctx->pc = 0x132AD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x132ADCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x132ADCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132ADCu; }
            if (ctx->pc != 0x132ADCu) { return; }
        }
        }
    }
    ctx->pc = 0x132ADCu;
label_132adc:
    // 0x132adc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x132adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_132ae0:
    // 0x132ae0: 0x24425190  addiu       $v0, $v0, 0x5190
    ctx->pc = 0x132ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20880));
label_132ae4:
    // 0x132ae4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x132ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_132ae8:
    // 0x132ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132aec:
    // 0x132aec: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x132aecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_132af0:
    // 0x132af0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x132af0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_132af4:
    // 0x132af4: 0x320f809  jalr        $t9
label_132af8:
    if (ctx->pc == 0x132AF8u) {
        ctx->pc = 0x132AFCu;
        goto label_132afc;
    }
    ctx->pc = 0x132AF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x132AFCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x132AFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132AFCu; }
            if (ctx->pc != 0x132AFCu) { return; }
        }
        }
    }
    ctx->pc = 0x132AFCu;
label_132afc:
    // 0x132afc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x132afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_132b00:
    // 0x132b00: 0x24425140  addiu       $v0, $v0, 0x5140
    ctx->pc = 0x132b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20800));
label_132b04:
    // 0x132b04: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x132b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_132b08:
    // 0x132b08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132b0c:
    // 0x132b0c: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x132b0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_132b10:
    // 0x132b10: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x132b10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_132b14:
    // 0x132b14: 0x320f809  jalr        $t9
label_132b18:
    if (ctx->pc == 0x132B18u) {
        ctx->pc = 0x132B1Cu;
        goto label_132b1c;
    }
    ctx->pc = 0x132B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x132B1Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x132B1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132B1Cu; }
            if (ctx->pc != 0x132B1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x132B1Cu;
label_132b1c:
    // 0x132b1c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x132b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_132b20:
    // 0x132b20: 0x24425ff0  addiu       $v0, $v0, 0x5FF0
    ctx->pc = 0x132b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24560));
label_132b24:
    // 0x132b24: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x132b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_132b28:
    // 0x132b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132b2c:
    // 0x132b2c: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x132b2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_132b30:
    // 0x132b30: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x132b30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_132b34:
    // 0x132b34: 0x320f809  jalr        $t9
label_132b38:
    if (ctx->pc == 0x132B38u) {
        ctx->pc = 0x132B3Cu;
        goto label_132b3c;
    }
    ctx->pc = 0x132B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x132B3Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x132B3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132B3Cu; }
            if (ctx->pc != 0x132B3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x132B3Cu;
label_132b3c:
    // 0x132b3c: 0x10000042  b           . + 4 + (0x42 << 2)
label_132b40:
    if (ctx->pc == 0x132B40u) {
        ctx->pc = 0x132B44u;
        goto label_132b44;
    }
    ctx->pc = 0x132B3Cu;
    {
        const bool branch_taken_0x132b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132b3c) {
            ctx->pc = 0x132C48u;
            goto label_132c48;
        }
    }
    ctx->pc = 0x132B44u;
label_132b44:
    // 0x132b44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x132b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_132b48:
    // 0x132b48: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x132b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_132b4c:
    // 0x132b4c: 0xc04e748  jal         func_139D20
label_132b50:
    if (ctx->pc == 0x132B50u) {
        ctx->pc = 0x132B54u;
        goto label_132b54;
    }
    ctx->pc = 0x132B4Cu;
    SET_GPR_U32(ctx, 31, 0x132B54u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132B54u; }
        if (ctx->pc != 0x132B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132B54u; }
        if (ctx->pc != 0x132B54u) { return; }
    }
    ctx->pc = 0x132B54u;
label_132b54:
    // 0x132b54: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x132b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_132b58:
    // 0x132b58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x132b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132b5c:
    // 0x132b5c: 0xc04e638  jal         func_1398E0
label_132b60:
    if (ctx->pc == 0x132B60u) {
        ctx->pc = 0x132B64u;
        goto label_132b64;
    }
    ctx->pc = 0x132B5Cu;
    SET_GPR_U32(ctx, 31, 0x132B64u);
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132B64u; }
        if (ctx->pc != 0x132B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132B64u; }
        if (ctx->pc != 0x132B64u) { return; }
    }
    ctx->pc = 0x132B64u;
label_132b64:
    // 0x132b64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x132b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132b68:
    // 0x132b68: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_132b6c:
    if (ctx->pc == 0x132B6Cu) {
        ctx->pc = 0x132B70u;
        goto label_132b70;
    }
    ctx->pc = 0x132B68u;
    {
        const bool branch_taken_0x132b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132b68) {
            ctx->pc = 0x132BBCu;
            goto label_132bbc;
        }
    }
    ctx->pc = 0x132B70u;
label_132b70:
    // 0x132b70: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x132b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_132b74:
    // 0x132b74: 0x24424f10  addiu       $v0, $v0, 0x4F10
    ctx->pc = 0x132b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20240));
label_132b78:
    // 0x132b78: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x132b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_132b7c:
    // 0x132b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132b80:
    // 0x132b80: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x132b80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_132b84:
    // 0x132b84: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x132b84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_132b88:
    // 0x132b88: 0x320f809  jalr        $t9
label_132b8c:
    if (ctx->pc == 0x132B8Cu) {
        ctx->pc = 0x132B90u;
        goto label_132b90;
    }
    ctx->pc = 0x132B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x132B90u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x132B90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132B90u; }
            if (ctx->pc != 0x132B90u) { return; }
        }
        }
    }
    ctx->pc = 0x132B90u;
label_132b90:
    // 0x132b90: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x132b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_132b94:
    // 0x132b94: 0x24425190  addiu       $v0, $v0, 0x5190
    ctx->pc = 0x132b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20880));
label_132b98:
    // 0x132b98: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x132b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_132b9c:
    // 0x132b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132ba0:
    // 0x132ba0: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x132ba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_132ba4:
    // 0x132ba4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x132ba4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_132ba8:
    // 0x132ba8: 0x320f809  jalr        $t9
label_132bac:
    if (ctx->pc == 0x132BACu) {
        ctx->pc = 0x132BB0u;
        goto label_132bb0;
    }
    ctx->pc = 0x132BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x132BB0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x132BB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132BB0u; }
            if (ctx->pc != 0x132BB0u) { return; }
        }
        }
    }
    ctx->pc = 0x132BB0u;
label_132bb0:
    // 0x132bb0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x132bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_132bb4:
    // 0x132bb4: 0x24425020  addiu       $v0, $v0, 0x5020
    ctx->pc = 0x132bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20512));
label_132bb8:
    // 0x132bb8: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x132bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_132bbc:
    // 0x132bbc: 0x10000022  b           . + 4 + (0x22 << 2)
label_132bc0:
    if (ctx->pc == 0x132BC0u) {
        ctx->pc = 0x132BC4u;
        goto label_132bc4;
    }
    ctx->pc = 0x132BBCu;
    {
        const bool branch_taken_0x132bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132bbc) {
            ctx->pc = 0x132C48u;
            goto label_132c48;
        }
    }
    ctx->pc = 0x132BC4u;
label_132bc4:
    // 0x132bc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x132bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_132bc8:
    // 0x132bc8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x132bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_132bcc:
    // 0x132bcc: 0xc04e748  jal         func_139D20
label_132bd0:
    if (ctx->pc == 0x132BD0u) {
        ctx->pc = 0x132BD4u;
        goto label_132bd4;
    }
    ctx->pc = 0x132BCCu;
    SET_GPR_U32(ctx, 31, 0x132BD4u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132BD4u; }
        if (ctx->pc != 0x132BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132BD4u; }
        if (ctx->pc != 0x132BD4u) { return; }
    }
    ctx->pc = 0x132BD4u;
label_132bd4:
    // 0x132bd4: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x132bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_132bd8:
    // 0x132bd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x132bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132bdc:
    // 0x132bdc: 0xc04e638  jal         func_1398E0
label_132be0:
    if (ctx->pc == 0x132BE0u) {
        ctx->pc = 0x132BE4u;
        goto label_132be4;
    }
    ctx->pc = 0x132BDCu;
    SET_GPR_U32(ctx, 31, 0x132BE4u);
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132BE4u; }
        if (ctx->pc != 0x132BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132BE4u; }
        if (ctx->pc != 0x132BE4u) { return; }
    }
    ctx->pc = 0x132BE4u;
label_132be4:
    // 0x132be4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x132be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132be8:
    // 0x132be8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_132bec:
    if (ctx->pc == 0x132BECu) {
        ctx->pc = 0x132BF0u;
        goto label_132bf0;
    }
    ctx->pc = 0x132BE8u;
    {
        const bool branch_taken_0x132be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132be8) {
            ctx->pc = 0x132C48u;
            goto label_132c48;
        }
    }
    ctx->pc = 0x132BF0u;
label_132bf0:
    // 0x132bf0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x132bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_132bf4:
    // 0x132bf4: 0x24424f10  addiu       $v0, $v0, 0x4F10
    ctx->pc = 0x132bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20240));
label_132bf8:
    // 0x132bf8: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x132bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_132bfc:
    // 0x132bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132c00:
    // 0x132c00: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x132c00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_132c04:
    // 0x132c04: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x132c04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_132c08:
    // 0x132c08: 0x320f809  jalr        $t9
label_132c0c:
    if (ctx->pc == 0x132C0Cu) {
        ctx->pc = 0x132C10u;
        goto label_132c10;
    }
    ctx->pc = 0x132C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x132C10u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x132C10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132C10u; }
            if (ctx->pc != 0x132C10u) { return; }
        }
        }
    }
    ctx->pc = 0x132C10u;
label_132c10:
    // 0x132c10: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x132c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_132c14:
    // 0x132c14: 0x24425190  addiu       $v0, $v0, 0x5190
    ctx->pc = 0x132c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20880));
label_132c18:
    // 0x132c18: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x132c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_132c1c:
    // 0x132c1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132c20:
    // 0x132c20: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x132c20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_132c24:
    // 0x132c24: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x132c24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_132c28:
    // 0x132c28: 0x320f809  jalr        $t9
label_132c2c:
    if (ctx->pc == 0x132C2Cu) {
        ctx->pc = 0x132C30u;
        goto label_132c30;
    }
    ctx->pc = 0x132C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x132C30u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x132C30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132C30u; }
            if (ctx->pc != 0x132C30u) { return; }
        }
        }
    }
    ctx->pc = 0x132C30u;
label_132c30:
    // 0x132c30: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x132c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_132c34:
    // 0x132c34: 0x24425020  addiu       $v0, $v0, 0x5020
    ctx->pc = 0x132c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20512));
label_132c38:
    // 0x132c38: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x132c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_132c3c:
    // 0x132c3c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x132c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_132c40:
    // 0x132c40: 0x24424ec0  addiu       $v0, $v0, 0x4EC0
    ctx->pc = 0x132c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20160));
label_132c44:
    // 0x132c44: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x132c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_132c48:
    // 0x132c48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x132c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_132c4c:
    // 0x132c4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x132c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_132c50:
    // 0x132c50: 0xc04e748  jal         func_139D20
label_132c54:
    if (ctx->pc == 0x132C54u) {
        ctx->pc = 0x132C58u;
        goto label_132c58;
    }
    ctx->pc = 0x132C50u;
    SET_GPR_U32(ctx, 31, 0x132C58u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132C58u; }
        if (ctx->pc != 0x132C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132C58u; }
        if (ctx->pc != 0x132C58u) { return; }
    }
    ctx->pc = 0x132C58u;
label_132c58:
    // 0x132c58: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_132c5c:
    if (ctx->pc == 0x132C5Cu) {
        ctx->pc = 0x132C60u;
        goto label_132c60;
    }
    ctx->pc = 0x132C58u;
    {
        const bool branch_taken_0x132c58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x132c58) {
            ctx->pc = 0x132C6Cu;
            goto label_132c6c;
        }
    }
    ctx->pc = 0x132C60u;
label_132c60:
    // 0x132c60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x132c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132c64:
    // 0x132c64: 0x1000003b  b           . + 4 + (0x3B << 2)
label_132c68:
    if (ctx->pc == 0x132C68u) {
        ctx->pc = 0x132C6Cu;
        goto label_132c6c;
    }
    ctx->pc = 0x132C64u;
    {
        const bool branch_taken_0x132c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132c64) {
            ctx->pc = 0x132D54u;
            goto label_132d54;
        }
    }
    ctx->pc = 0x132C6Cu;
label_132c6c:
    // 0x132c6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132c70:
    // 0x132c70: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x132c70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_132c74:
    // 0x132c74: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x132c74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_132c78:
    // 0x132c78: 0x320f809  jalr        $t9
label_132c7c:
    if (ctx->pc == 0x132C7Cu) {
        ctx->pc = 0x132C80u;
        goto label_132c80;
    }
    ctx->pc = 0x132C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x132C80u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x132C80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132C80u; }
            if (ctx->pc != 0x132C80u) { return; }
        }
        }
    }
    ctx->pc = 0x132C80u;
label_132c80:
    // 0x132c80: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x132c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_132c84:
    // 0x132c84: 0x16220024  bne         $s1, $v0, . + 4 + (0x24 << 2)
label_132c88:
    if (ctx->pc == 0x132C88u) {
        ctx->pc = 0x132C8Cu;
        goto label_132c8c;
    }
    ctx->pc = 0x132C84u;
    {
        const bool branch_taken_0x132c84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x132c84) {
            ctx->pc = 0x132D18u;
            goto label_132d18;
        }
    }
    ctx->pc = 0x132C8Cu;
label_132c8c:
    // 0x132c8c: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x132c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_132c90:
    // 0x132c90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x132c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132c94:
    // 0x132c94: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x132c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_132c98:
    // 0x132c98: 0xc049c86  jal         func_127218
label_132c9c:
    if (ctx->pc == 0x132C9Cu) {
        ctx->pc = 0x132CA0u;
        goto label_132ca0;
    }
    ctx->pc = 0x132C98u;
    SET_GPR_U32(ctx, 31, 0x132CA0u);
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132CA0u; }
        if (ctx->pc != 0x132CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132CA0u; }
        if (ctx->pc != 0x132CA0u) { return; }
    }
    ctx->pc = 0x132CA0u;
label_132ca0:
    // 0x132ca0: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x132ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_132ca4:
    // 0x132ca4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x132ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132ca8:
    // 0x132ca8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x132ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_132cac:
    // 0x132cac: 0xc049c86  jal         func_127218
label_132cb0:
    if (ctx->pc == 0x132CB0u) {
        ctx->pc = 0x132CB4u;
        goto label_132cb4;
    }
    ctx->pc = 0x132CACu;
    SET_GPR_U32(ctx, 31, 0x132CB4u);
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132CB4u; }
        if (ctx->pc != 0x132CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132CB4u; }
        if (ctx->pc != 0x132CB4u) { return; }
    }
    ctx->pc = 0x132CB4u;
label_132cb4:
    // 0x132cb4: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x132cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_132cb8:
    // 0x132cb8: 0xafa20230  sw          $v0, 0x230($sp)
    ctx->pc = 0x132cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
label_132cbc:
    // 0x132cbc: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x132cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_132cc0:
    // 0x132cc0: 0xafa20234  sw          $v0, 0x234($sp)
    ctx->pc = 0x132cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 2));
label_132cc4:
    // 0x132cc4: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x132cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_132cc8:
    // 0x132cc8: 0xafa20238  sw          $v0, 0x238($sp)
    ctx->pc = 0x132cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 2));
label_132ccc:
    // 0x132ccc: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x132cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_132cd0:
    // 0x132cd0: 0xafa2023c  sw          $v0, 0x23C($sp)
    ctx->pc = 0x132cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 2));
label_132cd4:
    // 0x132cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132cd8:
    // 0x132cd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x132cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_132cdc:
    // 0x132cdc: 0x27a60230  addiu       $a2, $sp, 0x230
    ctx->pc = 0x132cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_132ce0:
    // 0x132ce0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x132ce0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_132ce4:
    // 0x132ce4: 0x8fa800ac  lw          $t0, 0xAC($sp)
    ctx->pc = 0x132ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_132ce8:
    // 0x132ce8: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x132ce8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_132cec:
    // 0x132cec: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x132cecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_132cf0:
    // 0x132cf0: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x132cf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_132cf4:
    // 0x132cf4: 0x320f809  jalr        $t9
label_132cf8:
    if (ctx->pc == 0x132CF8u) {
        ctx->pc = 0x132CFCu;
        goto label_132cfc;
    }
    ctx->pc = 0x132CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x132CFCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x132CFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132CFCu; }
            if (ctx->pc != 0x132CFCu) { return; }
        }
        }
    }
    ctx->pc = 0x132CFCu;
label_132cfc:
    // 0x132cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132d00:
    // 0x132d00: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x132d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_132d04:
    // 0x132d04: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x132d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_132d08:
    // 0x132d08: 0xc0a2a20  jal         func_28A880
label_132d0c:
    if (ctx->pc == 0x132D0Cu) {
        ctx->pc = 0x132D10u;
        goto label_132d10;
    }
    ctx->pc = 0x132D08u;
    SET_GPR_U32(ctx, 31, 0x132D10u);
    ctx->pc = 0x28A880u;
    if (runtime->hasFunction(0x28A880u)) {
        auto targetFn = runtime->lookupFunction(0x28A880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132D10u; }
        if (ctx->pc != 0x132D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBaseBox__18mgCVisualMotionMDTFPfPf_0x28a880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132D10u; }
        if (ctx->pc != 0x132D10u) { return; }
    }
    ctx->pc = 0x132D10u;
label_132d10:
    // 0x132d10: 0x10000009  b           . + 4 + (0x9 << 2)
label_132d14:
    if (ctx->pc == 0x132D14u) {
        ctx->pc = 0x132D18u;
        goto label_132d18;
    }
    ctx->pc = 0x132D10u;
    {
        const bool branch_taken_0x132d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132d10) {
            ctx->pc = 0x132D38u;
            goto label_132d38;
        }
    }
    ctx->pc = 0x132D18u;
label_132d18:
    // 0x132d18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132d1c:
    // 0x132d1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x132d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_132d20:
    // 0x132d20: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x132d20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_132d24:
    // 0x132d24: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x132d24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_132d28:
    // 0x132d28: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x132d28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_132d2c:
    // 0x132d2c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x132d2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_132d30:
    // 0x132d30: 0x320f809  jalr        $t9
label_132d34:
    if (ctx->pc == 0x132D34u) {
        ctx->pc = 0x132D38u;
        goto label_132d38;
    }
    ctx->pc = 0x132D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x132D38u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x132D38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132D38u; }
            if (ctx->pc != 0x132D38u) { return; }
        }
        }
    }
    ctx->pc = 0x132D38u;
label_132d38:
    // 0x132d38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x132d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_132d3c:
    // 0x132d3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x132d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132d40:
    // 0x132d40: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x132d40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_132d44:
    // 0x132d44: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x132d44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_132d48:
    // 0x132d48: 0x320f809  jalr        $t9
label_132d4c:
    if (ctx->pc == 0x132D4Cu) {
        ctx->pc = 0x132D50u;
        goto label_132d50;
    }
    ctx->pc = 0x132D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x132D50u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x132D50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132D50u; }
            if (ctx->pc != 0x132D50u) { return; }
        }
        }
    }
    ctx->pc = 0x132D50u;
label_132d50:
    // 0x132d50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_132d54:
    // 0x132d54: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x132d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_132d58:
    // 0x132d58: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x132d58u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_132d5c:
    // 0x132d5c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x132d5cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_132d60:
    // 0x132d60: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x132d60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_132d64:
    // 0x132d64: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x132d64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_132d68:
    // 0x132d68: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x132d68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_132d6c:
    // 0x132d6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x132d6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_132d70:
    // 0x132d70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x132d70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_132d74:
    // 0x132d74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x132d74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_132d78:
    // 0x132d78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x132d78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_132d7c:
    // 0x132d7c: 0x27bd0250  addiu       $sp, $sp, 0x250
    ctx->pc = 0x132d7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_132d80:
    // 0x132d80: 0x3e00008  jr          $ra
label_132d84:
    if (ctx->pc == 0x132D84u) {
        ctx->pc = 0x132D88u;
        goto label_fallthrough_0x132d80;
    }
    ctx->pc = 0x132D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x132d80:
    ctx->pc = 0x132D88u;
}
