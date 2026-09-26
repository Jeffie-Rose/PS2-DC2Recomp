#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemDebugKey__Fv
// Address: 0x245840 - 0x246f0c
void MenuItemDebugKey__Fv_0x245840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemDebugKey__Fv_0x245840");
#endif

    switch (ctx->pc) {
        case 0x245840u: goto label_245840;
        case 0x245844u: goto label_245844;
        case 0x245848u: goto label_245848;
        case 0x24584cu: goto label_24584c;
        case 0x245850u: goto label_245850;
        case 0x245854u: goto label_245854;
        case 0x245858u: goto label_245858;
        case 0x24585cu: goto label_24585c;
        case 0x245860u: goto label_245860;
        case 0x245864u: goto label_245864;
        case 0x245868u: goto label_245868;
        case 0x24586cu: goto label_24586c;
        case 0x245870u: goto label_245870;
        case 0x245874u: goto label_245874;
        case 0x245878u: goto label_245878;
        case 0x24587cu: goto label_24587c;
        case 0x245880u: goto label_245880;
        case 0x245884u: goto label_245884;
        case 0x245888u: goto label_245888;
        case 0x24588cu: goto label_24588c;
        case 0x245890u: goto label_245890;
        case 0x245894u: goto label_245894;
        case 0x245898u: goto label_245898;
        case 0x24589cu: goto label_24589c;
        case 0x2458a0u: goto label_2458a0;
        case 0x2458a4u: goto label_2458a4;
        case 0x2458a8u: goto label_2458a8;
        case 0x2458acu: goto label_2458ac;
        case 0x2458b0u: goto label_2458b0;
        case 0x2458b4u: goto label_2458b4;
        case 0x2458b8u: goto label_2458b8;
        case 0x2458bcu: goto label_2458bc;
        case 0x2458c0u: goto label_2458c0;
        case 0x2458c4u: goto label_2458c4;
        case 0x2458c8u: goto label_2458c8;
        case 0x2458ccu: goto label_2458cc;
        case 0x2458d0u: goto label_2458d0;
        case 0x2458d4u: goto label_2458d4;
        case 0x2458d8u: goto label_2458d8;
        case 0x2458dcu: goto label_2458dc;
        case 0x2458e0u: goto label_2458e0;
        case 0x2458e4u: goto label_2458e4;
        case 0x2458e8u: goto label_2458e8;
        case 0x2458ecu: goto label_2458ec;
        case 0x2458f0u: goto label_2458f0;
        case 0x2458f4u: goto label_2458f4;
        case 0x2458f8u: goto label_2458f8;
        case 0x2458fcu: goto label_2458fc;
        case 0x245900u: goto label_245900;
        case 0x245904u: goto label_245904;
        case 0x245908u: goto label_245908;
        case 0x24590cu: goto label_24590c;
        case 0x245910u: goto label_245910;
        case 0x245914u: goto label_245914;
        case 0x245918u: goto label_245918;
        case 0x24591cu: goto label_24591c;
        case 0x245920u: goto label_245920;
        case 0x245924u: goto label_245924;
        case 0x245928u: goto label_245928;
        case 0x24592cu: goto label_24592c;
        case 0x245930u: goto label_245930;
        case 0x245934u: goto label_245934;
        case 0x245938u: goto label_245938;
        case 0x24593cu: goto label_24593c;
        case 0x245940u: goto label_245940;
        case 0x245944u: goto label_245944;
        case 0x245948u: goto label_245948;
        case 0x24594cu: goto label_24594c;
        case 0x245950u: goto label_245950;
        case 0x245954u: goto label_245954;
        case 0x245958u: goto label_245958;
        case 0x24595cu: goto label_24595c;
        case 0x245960u: goto label_245960;
        case 0x245964u: goto label_245964;
        case 0x245968u: goto label_245968;
        case 0x24596cu: goto label_24596c;
        case 0x245970u: goto label_245970;
        case 0x245974u: goto label_245974;
        case 0x245978u: goto label_245978;
        case 0x24597cu: goto label_24597c;
        case 0x245980u: goto label_245980;
        case 0x245984u: goto label_245984;
        case 0x245988u: goto label_245988;
        case 0x24598cu: goto label_24598c;
        case 0x245990u: goto label_245990;
        case 0x245994u: goto label_245994;
        case 0x245998u: goto label_245998;
        case 0x24599cu: goto label_24599c;
        case 0x2459a0u: goto label_2459a0;
        case 0x2459a4u: goto label_2459a4;
        case 0x2459a8u: goto label_2459a8;
        case 0x2459acu: goto label_2459ac;
        case 0x2459b0u: goto label_2459b0;
        case 0x2459b4u: goto label_2459b4;
        case 0x2459b8u: goto label_2459b8;
        case 0x2459bcu: goto label_2459bc;
        case 0x2459c0u: goto label_2459c0;
        case 0x2459c4u: goto label_2459c4;
        case 0x2459c8u: goto label_2459c8;
        case 0x2459ccu: goto label_2459cc;
        case 0x2459d0u: goto label_2459d0;
        case 0x2459d4u: goto label_2459d4;
        case 0x2459d8u: goto label_2459d8;
        case 0x2459dcu: goto label_2459dc;
        case 0x2459e0u: goto label_2459e0;
        case 0x2459e4u: goto label_2459e4;
        case 0x2459e8u: goto label_2459e8;
        case 0x2459ecu: goto label_2459ec;
        case 0x2459f0u: goto label_2459f0;
        case 0x2459f4u: goto label_2459f4;
        case 0x2459f8u: goto label_2459f8;
        case 0x2459fcu: goto label_2459fc;
        case 0x245a00u: goto label_245a00;
        case 0x245a04u: goto label_245a04;
        case 0x245a08u: goto label_245a08;
        case 0x245a0cu: goto label_245a0c;
        case 0x245a10u: goto label_245a10;
        case 0x245a14u: goto label_245a14;
        case 0x245a18u: goto label_245a18;
        case 0x245a1cu: goto label_245a1c;
        case 0x245a20u: goto label_245a20;
        case 0x245a24u: goto label_245a24;
        case 0x245a28u: goto label_245a28;
        case 0x245a2cu: goto label_245a2c;
        case 0x245a30u: goto label_245a30;
        case 0x245a34u: goto label_245a34;
        case 0x245a38u: goto label_245a38;
        case 0x245a3cu: goto label_245a3c;
        case 0x245a40u: goto label_245a40;
        case 0x245a44u: goto label_245a44;
        case 0x245a48u: goto label_245a48;
        case 0x245a4cu: goto label_245a4c;
        case 0x245a50u: goto label_245a50;
        case 0x245a54u: goto label_245a54;
        case 0x245a58u: goto label_245a58;
        case 0x245a5cu: goto label_245a5c;
        case 0x245a60u: goto label_245a60;
        case 0x245a64u: goto label_245a64;
        case 0x245a68u: goto label_245a68;
        case 0x245a6cu: goto label_245a6c;
        case 0x245a70u: goto label_245a70;
        case 0x245a74u: goto label_245a74;
        case 0x245a78u: goto label_245a78;
        case 0x245a7cu: goto label_245a7c;
        case 0x245a80u: goto label_245a80;
        case 0x245a84u: goto label_245a84;
        case 0x245a88u: goto label_245a88;
        case 0x245a8cu: goto label_245a8c;
        case 0x245a90u: goto label_245a90;
        case 0x245a94u: goto label_245a94;
        case 0x245a98u: goto label_245a98;
        case 0x245a9cu: goto label_245a9c;
        case 0x245aa0u: goto label_245aa0;
        case 0x245aa4u: goto label_245aa4;
        case 0x245aa8u: goto label_245aa8;
        case 0x245aacu: goto label_245aac;
        case 0x245ab0u: goto label_245ab0;
        case 0x245ab4u: goto label_245ab4;
        case 0x245ab8u: goto label_245ab8;
        case 0x245abcu: goto label_245abc;
        case 0x245ac0u: goto label_245ac0;
        case 0x245ac4u: goto label_245ac4;
        case 0x245ac8u: goto label_245ac8;
        case 0x245accu: goto label_245acc;
        case 0x245ad0u: goto label_245ad0;
        case 0x245ad4u: goto label_245ad4;
        case 0x245ad8u: goto label_245ad8;
        case 0x245adcu: goto label_245adc;
        case 0x245ae0u: goto label_245ae0;
        case 0x245ae4u: goto label_245ae4;
        case 0x245ae8u: goto label_245ae8;
        case 0x245aecu: goto label_245aec;
        case 0x245af0u: goto label_245af0;
        case 0x245af4u: goto label_245af4;
        case 0x245af8u: goto label_245af8;
        case 0x245afcu: goto label_245afc;
        case 0x245b00u: goto label_245b00;
        case 0x245b04u: goto label_245b04;
        case 0x245b08u: goto label_245b08;
        case 0x245b0cu: goto label_245b0c;
        case 0x245b10u: goto label_245b10;
        case 0x245b14u: goto label_245b14;
        case 0x245b18u: goto label_245b18;
        case 0x245b1cu: goto label_245b1c;
        case 0x245b20u: goto label_245b20;
        case 0x245b24u: goto label_245b24;
        case 0x245b28u: goto label_245b28;
        case 0x245b2cu: goto label_245b2c;
        case 0x245b30u: goto label_245b30;
        case 0x245b34u: goto label_245b34;
        case 0x245b38u: goto label_245b38;
        case 0x245b3cu: goto label_245b3c;
        case 0x245b40u: goto label_245b40;
        case 0x245b44u: goto label_245b44;
        case 0x245b48u: goto label_245b48;
        case 0x245b4cu: goto label_245b4c;
        case 0x245b50u: goto label_245b50;
        case 0x245b54u: goto label_245b54;
        case 0x245b58u: goto label_245b58;
        case 0x245b5cu: goto label_245b5c;
        case 0x245b60u: goto label_245b60;
        case 0x245b64u: goto label_245b64;
        case 0x245b68u: goto label_245b68;
        case 0x245b6cu: goto label_245b6c;
        case 0x245b70u: goto label_245b70;
        case 0x245b74u: goto label_245b74;
        case 0x245b78u: goto label_245b78;
        case 0x245b7cu: goto label_245b7c;
        case 0x245b80u: goto label_245b80;
        case 0x245b84u: goto label_245b84;
        case 0x245b88u: goto label_245b88;
        case 0x245b8cu: goto label_245b8c;
        case 0x245b90u: goto label_245b90;
        case 0x245b94u: goto label_245b94;
        case 0x245b98u: goto label_245b98;
        case 0x245b9cu: goto label_245b9c;
        case 0x245ba0u: goto label_245ba0;
        case 0x245ba4u: goto label_245ba4;
        case 0x245ba8u: goto label_245ba8;
        case 0x245bacu: goto label_245bac;
        case 0x245bb0u: goto label_245bb0;
        case 0x245bb4u: goto label_245bb4;
        case 0x245bb8u: goto label_245bb8;
        case 0x245bbcu: goto label_245bbc;
        case 0x245bc0u: goto label_245bc0;
        case 0x245bc4u: goto label_245bc4;
        case 0x245bc8u: goto label_245bc8;
        case 0x245bccu: goto label_245bcc;
        case 0x245bd0u: goto label_245bd0;
        case 0x245bd4u: goto label_245bd4;
        case 0x245bd8u: goto label_245bd8;
        case 0x245bdcu: goto label_245bdc;
        case 0x245be0u: goto label_245be0;
        case 0x245be4u: goto label_245be4;
        case 0x245be8u: goto label_245be8;
        case 0x245becu: goto label_245bec;
        case 0x245bf0u: goto label_245bf0;
        case 0x245bf4u: goto label_245bf4;
        case 0x245bf8u: goto label_245bf8;
        case 0x245bfcu: goto label_245bfc;
        case 0x245c00u: goto label_245c00;
        case 0x245c04u: goto label_245c04;
        case 0x245c08u: goto label_245c08;
        case 0x245c0cu: goto label_245c0c;
        case 0x245c10u: goto label_245c10;
        case 0x245c14u: goto label_245c14;
        case 0x245c18u: goto label_245c18;
        case 0x245c1cu: goto label_245c1c;
        case 0x245c20u: goto label_245c20;
        case 0x245c24u: goto label_245c24;
        case 0x245c28u: goto label_245c28;
        case 0x245c2cu: goto label_245c2c;
        case 0x245c30u: goto label_245c30;
        case 0x245c34u: goto label_245c34;
        case 0x245c38u: goto label_245c38;
        case 0x245c3cu: goto label_245c3c;
        case 0x245c40u: goto label_245c40;
        case 0x245c44u: goto label_245c44;
        case 0x245c48u: goto label_245c48;
        case 0x245c4cu: goto label_245c4c;
        case 0x245c50u: goto label_245c50;
        case 0x245c54u: goto label_245c54;
        case 0x245c58u: goto label_245c58;
        case 0x245c5cu: goto label_245c5c;
        case 0x245c60u: goto label_245c60;
        case 0x245c64u: goto label_245c64;
        case 0x245c68u: goto label_245c68;
        case 0x245c6cu: goto label_245c6c;
        case 0x245c70u: goto label_245c70;
        case 0x245c74u: goto label_245c74;
        case 0x245c78u: goto label_245c78;
        case 0x245c7cu: goto label_245c7c;
        case 0x245c80u: goto label_245c80;
        case 0x245c84u: goto label_245c84;
        case 0x245c88u: goto label_245c88;
        case 0x245c8cu: goto label_245c8c;
        case 0x245c90u: goto label_245c90;
        case 0x245c94u: goto label_245c94;
        case 0x245c98u: goto label_245c98;
        case 0x245c9cu: goto label_245c9c;
        case 0x245ca0u: goto label_245ca0;
        case 0x245ca4u: goto label_245ca4;
        case 0x245ca8u: goto label_245ca8;
        case 0x245cacu: goto label_245cac;
        case 0x245cb0u: goto label_245cb0;
        case 0x245cb4u: goto label_245cb4;
        case 0x245cb8u: goto label_245cb8;
        case 0x245cbcu: goto label_245cbc;
        case 0x245cc0u: goto label_245cc0;
        case 0x245cc4u: goto label_245cc4;
        case 0x245cc8u: goto label_245cc8;
        case 0x245cccu: goto label_245ccc;
        case 0x245cd0u: goto label_245cd0;
        case 0x245cd4u: goto label_245cd4;
        case 0x245cd8u: goto label_245cd8;
        case 0x245cdcu: goto label_245cdc;
        case 0x245ce0u: goto label_245ce0;
        case 0x245ce4u: goto label_245ce4;
        case 0x245ce8u: goto label_245ce8;
        case 0x245cecu: goto label_245cec;
        case 0x245cf0u: goto label_245cf0;
        case 0x245cf4u: goto label_245cf4;
        case 0x245cf8u: goto label_245cf8;
        case 0x245cfcu: goto label_245cfc;
        case 0x245d00u: goto label_245d00;
        case 0x245d04u: goto label_245d04;
        case 0x245d08u: goto label_245d08;
        case 0x245d0cu: goto label_245d0c;
        case 0x245d10u: goto label_245d10;
        case 0x245d14u: goto label_245d14;
        case 0x245d18u: goto label_245d18;
        case 0x245d1cu: goto label_245d1c;
        case 0x245d20u: goto label_245d20;
        case 0x245d24u: goto label_245d24;
        case 0x245d28u: goto label_245d28;
        case 0x245d2cu: goto label_245d2c;
        case 0x245d30u: goto label_245d30;
        case 0x245d34u: goto label_245d34;
        case 0x245d38u: goto label_245d38;
        case 0x245d3cu: goto label_245d3c;
        case 0x245d40u: goto label_245d40;
        case 0x245d44u: goto label_245d44;
        case 0x245d48u: goto label_245d48;
        case 0x245d4cu: goto label_245d4c;
        case 0x245d50u: goto label_245d50;
        case 0x245d54u: goto label_245d54;
        case 0x245d58u: goto label_245d58;
        case 0x245d5cu: goto label_245d5c;
        case 0x245d60u: goto label_245d60;
        case 0x245d64u: goto label_245d64;
        case 0x245d68u: goto label_245d68;
        case 0x245d6cu: goto label_245d6c;
        case 0x245d70u: goto label_245d70;
        case 0x245d74u: goto label_245d74;
        case 0x245d78u: goto label_245d78;
        case 0x245d7cu: goto label_245d7c;
        case 0x245d80u: goto label_245d80;
        case 0x245d84u: goto label_245d84;
        case 0x245d88u: goto label_245d88;
        case 0x245d8cu: goto label_245d8c;
        case 0x245d90u: goto label_245d90;
        case 0x245d94u: goto label_245d94;
        case 0x245d98u: goto label_245d98;
        case 0x245d9cu: goto label_245d9c;
        case 0x245da0u: goto label_245da0;
        case 0x245da4u: goto label_245da4;
        case 0x245da8u: goto label_245da8;
        case 0x245dacu: goto label_245dac;
        case 0x245db0u: goto label_245db0;
        case 0x245db4u: goto label_245db4;
        case 0x245db8u: goto label_245db8;
        case 0x245dbcu: goto label_245dbc;
        case 0x245dc0u: goto label_245dc0;
        case 0x245dc4u: goto label_245dc4;
        case 0x245dc8u: goto label_245dc8;
        case 0x245dccu: goto label_245dcc;
        case 0x245dd0u: goto label_245dd0;
        case 0x245dd4u: goto label_245dd4;
        case 0x245dd8u: goto label_245dd8;
        case 0x245ddcu: goto label_245ddc;
        case 0x245de0u: goto label_245de0;
        case 0x245de4u: goto label_245de4;
        case 0x245de8u: goto label_245de8;
        case 0x245decu: goto label_245dec;
        case 0x245df0u: goto label_245df0;
        case 0x245df4u: goto label_245df4;
        case 0x245df8u: goto label_245df8;
        case 0x245dfcu: goto label_245dfc;
        case 0x245e00u: goto label_245e00;
        case 0x245e04u: goto label_245e04;
        case 0x245e08u: goto label_245e08;
        case 0x245e0cu: goto label_245e0c;
        case 0x245e10u: goto label_245e10;
        case 0x245e14u: goto label_245e14;
        case 0x245e18u: goto label_245e18;
        case 0x245e1cu: goto label_245e1c;
        case 0x245e20u: goto label_245e20;
        case 0x245e24u: goto label_245e24;
        case 0x245e28u: goto label_245e28;
        case 0x245e2cu: goto label_245e2c;
        case 0x245e30u: goto label_245e30;
        case 0x245e34u: goto label_245e34;
        case 0x245e38u: goto label_245e38;
        case 0x245e3cu: goto label_245e3c;
        case 0x245e40u: goto label_245e40;
        case 0x245e44u: goto label_245e44;
        case 0x245e48u: goto label_245e48;
        case 0x245e4cu: goto label_245e4c;
        case 0x245e50u: goto label_245e50;
        case 0x245e54u: goto label_245e54;
        case 0x245e58u: goto label_245e58;
        case 0x245e5cu: goto label_245e5c;
        case 0x245e60u: goto label_245e60;
        case 0x245e64u: goto label_245e64;
        case 0x245e68u: goto label_245e68;
        case 0x245e6cu: goto label_245e6c;
        case 0x245e70u: goto label_245e70;
        case 0x245e74u: goto label_245e74;
        case 0x245e78u: goto label_245e78;
        case 0x245e7cu: goto label_245e7c;
        case 0x245e80u: goto label_245e80;
        case 0x245e84u: goto label_245e84;
        case 0x245e88u: goto label_245e88;
        case 0x245e8cu: goto label_245e8c;
        case 0x245e90u: goto label_245e90;
        case 0x245e94u: goto label_245e94;
        case 0x245e98u: goto label_245e98;
        case 0x245e9cu: goto label_245e9c;
        case 0x245ea0u: goto label_245ea0;
        case 0x245ea4u: goto label_245ea4;
        case 0x245ea8u: goto label_245ea8;
        case 0x245eacu: goto label_245eac;
        case 0x245eb0u: goto label_245eb0;
        case 0x245eb4u: goto label_245eb4;
        case 0x245eb8u: goto label_245eb8;
        case 0x245ebcu: goto label_245ebc;
        case 0x245ec0u: goto label_245ec0;
        case 0x245ec4u: goto label_245ec4;
        case 0x245ec8u: goto label_245ec8;
        case 0x245eccu: goto label_245ecc;
        case 0x245ed0u: goto label_245ed0;
        case 0x245ed4u: goto label_245ed4;
        case 0x245ed8u: goto label_245ed8;
        case 0x245edcu: goto label_245edc;
        case 0x245ee0u: goto label_245ee0;
        case 0x245ee4u: goto label_245ee4;
        case 0x245ee8u: goto label_245ee8;
        case 0x245eecu: goto label_245eec;
        case 0x245ef0u: goto label_245ef0;
        case 0x245ef4u: goto label_245ef4;
        case 0x245ef8u: goto label_245ef8;
        case 0x245efcu: goto label_245efc;
        case 0x245f00u: goto label_245f00;
        case 0x245f04u: goto label_245f04;
        case 0x245f08u: goto label_245f08;
        case 0x245f0cu: goto label_245f0c;
        case 0x245f10u: goto label_245f10;
        case 0x245f14u: goto label_245f14;
        case 0x245f18u: goto label_245f18;
        case 0x245f1cu: goto label_245f1c;
        case 0x245f20u: goto label_245f20;
        case 0x245f24u: goto label_245f24;
        case 0x245f28u: goto label_245f28;
        case 0x245f2cu: goto label_245f2c;
        case 0x245f30u: goto label_245f30;
        case 0x245f34u: goto label_245f34;
        case 0x245f38u: goto label_245f38;
        case 0x245f3cu: goto label_245f3c;
        case 0x245f40u: goto label_245f40;
        case 0x245f44u: goto label_245f44;
        case 0x245f48u: goto label_245f48;
        case 0x245f4cu: goto label_245f4c;
        case 0x245f50u: goto label_245f50;
        case 0x245f54u: goto label_245f54;
        case 0x245f58u: goto label_245f58;
        case 0x245f5cu: goto label_245f5c;
        case 0x245f60u: goto label_245f60;
        case 0x245f64u: goto label_245f64;
        case 0x245f68u: goto label_245f68;
        case 0x245f6cu: goto label_245f6c;
        case 0x245f70u: goto label_245f70;
        case 0x245f74u: goto label_245f74;
        case 0x245f78u: goto label_245f78;
        case 0x245f7cu: goto label_245f7c;
        case 0x245f80u: goto label_245f80;
        case 0x245f84u: goto label_245f84;
        case 0x245f88u: goto label_245f88;
        case 0x245f8cu: goto label_245f8c;
        case 0x245f90u: goto label_245f90;
        case 0x245f94u: goto label_245f94;
        case 0x245f98u: goto label_245f98;
        case 0x245f9cu: goto label_245f9c;
        case 0x245fa0u: goto label_245fa0;
        case 0x245fa4u: goto label_245fa4;
        case 0x245fa8u: goto label_245fa8;
        case 0x245facu: goto label_245fac;
        case 0x245fb0u: goto label_245fb0;
        case 0x245fb4u: goto label_245fb4;
        case 0x245fb8u: goto label_245fb8;
        case 0x245fbcu: goto label_245fbc;
        case 0x245fc0u: goto label_245fc0;
        case 0x245fc4u: goto label_245fc4;
        case 0x245fc8u: goto label_245fc8;
        case 0x245fccu: goto label_245fcc;
        case 0x245fd0u: goto label_245fd0;
        case 0x245fd4u: goto label_245fd4;
        case 0x245fd8u: goto label_245fd8;
        case 0x245fdcu: goto label_245fdc;
        case 0x245fe0u: goto label_245fe0;
        case 0x245fe4u: goto label_245fe4;
        case 0x245fe8u: goto label_245fe8;
        case 0x245fecu: goto label_245fec;
        case 0x245ff0u: goto label_245ff0;
        case 0x245ff4u: goto label_245ff4;
        case 0x245ff8u: goto label_245ff8;
        case 0x245ffcu: goto label_245ffc;
        case 0x246000u: goto label_246000;
        case 0x246004u: goto label_246004;
        case 0x246008u: goto label_246008;
        case 0x24600cu: goto label_24600c;
        case 0x246010u: goto label_246010;
        case 0x246014u: goto label_246014;
        case 0x246018u: goto label_246018;
        case 0x24601cu: goto label_24601c;
        case 0x246020u: goto label_246020;
        case 0x246024u: goto label_246024;
        case 0x246028u: goto label_246028;
        case 0x24602cu: goto label_24602c;
        case 0x246030u: goto label_246030;
        case 0x246034u: goto label_246034;
        case 0x246038u: goto label_246038;
        case 0x24603cu: goto label_24603c;
        case 0x246040u: goto label_246040;
        case 0x246044u: goto label_246044;
        case 0x246048u: goto label_246048;
        case 0x24604cu: goto label_24604c;
        case 0x246050u: goto label_246050;
        case 0x246054u: goto label_246054;
        case 0x246058u: goto label_246058;
        case 0x24605cu: goto label_24605c;
        case 0x246060u: goto label_246060;
        case 0x246064u: goto label_246064;
        case 0x246068u: goto label_246068;
        case 0x24606cu: goto label_24606c;
        case 0x246070u: goto label_246070;
        case 0x246074u: goto label_246074;
        case 0x246078u: goto label_246078;
        case 0x24607cu: goto label_24607c;
        case 0x246080u: goto label_246080;
        case 0x246084u: goto label_246084;
        case 0x246088u: goto label_246088;
        case 0x24608cu: goto label_24608c;
        case 0x246090u: goto label_246090;
        case 0x246094u: goto label_246094;
        case 0x246098u: goto label_246098;
        case 0x24609cu: goto label_24609c;
        case 0x2460a0u: goto label_2460a0;
        case 0x2460a4u: goto label_2460a4;
        case 0x2460a8u: goto label_2460a8;
        case 0x2460acu: goto label_2460ac;
        case 0x2460b0u: goto label_2460b0;
        case 0x2460b4u: goto label_2460b4;
        case 0x2460b8u: goto label_2460b8;
        case 0x2460bcu: goto label_2460bc;
        case 0x2460c0u: goto label_2460c0;
        case 0x2460c4u: goto label_2460c4;
        case 0x2460c8u: goto label_2460c8;
        case 0x2460ccu: goto label_2460cc;
        case 0x2460d0u: goto label_2460d0;
        case 0x2460d4u: goto label_2460d4;
        case 0x2460d8u: goto label_2460d8;
        case 0x2460dcu: goto label_2460dc;
        case 0x2460e0u: goto label_2460e0;
        case 0x2460e4u: goto label_2460e4;
        case 0x2460e8u: goto label_2460e8;
        case 0x2460ecu: goto label_2460ec;
        case 0x2460f0u: goto label_2460f0;
        case 0x2460f4u: goto label_2460f4;
        case 0x2460f8u: goto label_2460f8;
        case 0x2460fcu: goto label_2460fc;
        case 0x246100u: goto label_246100;
        case 0x246104u: goto label_246104;
        case 0x246108u: goto label_246108;
        case 0x24610cu: goto label_24610c;
        case 0x246110u: goto label_246110;
        case 0x246114u: goto label_246114;
        case 0x246118u: goto label_246118;
        case 0x24611cu: goto label_24611c;
        case 0x246120u: goto label_246120;
        case 0x246124u: goto label_246124;
        case 0x246128u: goto label_246128;
        case 0x24612cu: goto label_24612c;
        case 0x246130u: goto label_246130;
        case 0x246134u: goto label_246134;
        case 0x246138u: goto label_246138;
        case 0x24613cu: goto label_24613c;
        case 0x246140u: goto label_246140;
        case 0x246144u: goto label_246144;
        case 0x246148u: goto label_246148;
        case 0x24614cu: goto label_24614c;
        case 0x246150u: goto label_246150;
        case 0x246154u: goto label_246154;
        case 0x246158u: goto label_246158;
        case 0x24615cu: goto label_24615c;
        case 0x246160u: goto label_246160;
        case 0x246164u: goto label_246164;
        case 0x246168u: goto label_246168;
        case 0x24616cu: goto label_24616c;
        case 0x246170u: goto label_246170;
        case 0x246174u: goto label_246174;
        case 0x246178u: goto label_246178;
        case 0x24617cu: goto label_24617c;
        case 0x246180u: goto label_246180;
        case 0x246184u: goto label_246184;
        case 0x246188u: goto label_246188;
        case 0x24618cu: goto label_24618c;
        case 0x246190u: goto label_246190;
        case 0x246194u: goto label_246194;
        case 0x246198u: goto label_246198;
        case 0x24619cu: goto label_24619c;
        case 0x2461a0u: goto label_2461a0;
        case 0x2461a4u: goto label_2461a4;
        case 0x2461a8u: goto label_2461a8;
        case 0x2461acu: goto label_2461ac;
        case 0x2461b0u: goto label_2461b0;
        case 0x2461b4u: goto label_2461b4;
        case 0x2461b8u: goto label_2461b8;
        case 0x2461bcu: goto label_2461bc;
        case 0x2461c0u: goto label_2461c0;
        case 0x2461c4u: goto label_2461c4;
        case 0x2461c8u: goto label_2461c8;
        case 0x2461ccu: goto label_2461cc;
        case 0x2461d0u: goto label_2461d0;
        case 0x2461d4u: goto label_2461d4;
        case 0x2461d8u: goto label_2461d8;
        case 0x2461dcu: goto label_2461dc;
        case 0x2461e0u: goto label_2461e0;
        case 0x2461e4u: goto label_2461e4;
        case 0x2461e8u: goto label_2461e8;
        case 0x2461ecu: goto label_2461ec;
        case 0x2461f0u: goto label_2461f0;
        case 0x2461f4u: goto label_2461f4;
        case 0x2461f8u: goto label_2461f8;
        case 0x2461fcu: goto label_2461fc;
        case 0x246200u: goto label_246200;
        case 0x246204u: goto label_246204;
        case 0x246208u: goto label_246208;
        case 0x24620cu: goto label_24620c;
        case 0x246210u: goto label_246210;
        case 0x246214u: goto label_246214;
        case 0x246218u: goto label_246218;
        case 0x24621cu: goto label_24621c;
        case 0x246220u: goto label_246220;
        case 0x246224u: goto label_246224;
        case 0x246228u: goto label_246228;
        case 0x24622cu: goto label_24622c;
        case 0x246230u: goto label_246230;
        case 0x246234u: goto label_246234;
        case 0x246238u: goto label_246238;
        case 0x24623cu: goto label_24623c;
        case 0x246240u: goto label_246240;
        case 0x246244u: goto label_246244;
        case 0x246248u: goto label_246248;
        case 0x24624cu: goto label_24624c;
        case 0x246250u: goto label_246250;
        case 0x246254u: goto label_246254;
        case 0x246258u: goto label_246258;
        case 0x24625cu: goto label_24625c;
        case 0x246260u: goto label_246260;
        case 0x246264u: goto label_246264;
        case 0x246268u: goto label_246268;
        case 0x24626cu: goto label_24626c;
        case 0x246270u: goto label_246270;
        case 0x246274u: goto label_246274;
        case 0x246278u: goto label_246278;
        case 0x24627cu: goto label_24627c;
        case 0x246280u: goto label_246280;
        case 0x246284u: goto label_246284;
        case 0x246288u: goto label_246288;
        case 0x24628cu: goto label_24628c;
        case 0x246290u: goto label_246290;
        case 0x246294u: goto label_246294;
        case 0x246298u: goto label_246298;
        case 0x24629cu: goto label_24629c;
        case 0x2462a0u: goto label_2462a0;
        case 0x2462a4u: goto label_2462a4;
        case 0x2462a8u: goto label_2462a8;
        case 0x2462acu: goto label_2462ac;
        case 0x2462b0u: goto label_2462b0;
        case 0x2462b4u: goto label_2462b4;
        case 0x2462b8u: goto label_2462b8;
        case 0x2462bcu: goto label_2462bc;
        case 0x2462c0u: goto label_2462c0;
        case 0x2462c4u: goto label_2462c4;
        case 0x2462c8u: goto label_2462c8;
        case 0x2462ccu: goto label_2462cc;
        case 0x2462d0u: goto label_2462d0;
        case 0x2462d4u: goto label_2462d4;
        case 0x2462d8u: goto label_2462d8;
        case 0x2462dcu: goto label_2462dc;
        case 0x2462e0u: goto label_2462e0;
        case 0x2462e4u: goto label_2462e4;
        case 0x2462e8u: goto label_2462e8;
        case 0x2462ecu: goto label_2462ec;
        case 0x2462f0u: goto label_2462f0;
        case 0x2462f4u: goto label_2462f4;
        case 0x2462f8u: goto label_2462f8;
        case 0x2462fcu: goto label_2462fc;
        case 0x246300u: goto label_246300;
        case 0x246304u: goto label_246304;
        case 0x246308u: goto label_246308;
        case 0x24630cu: goto label_24630c;
        case 0x246310u: goto label_246310;
        case 0x246314u: goto label_246314;
        case 0x246318u: goto label_246318;
        case 0x24631cu: goto label_24631c;
        case 0x246320u: goto label_246320;
        case 0x246324u: goto label_246324;
        case 0x246328u: goto label_246328;
        case 0x24632cu: goto label_24632c;
        case 0x246330u: goto label_246330;
        case 0x246334u: goto label_246334;
        case 0x246338u: goto label_246338;
        case 0x24633cu: goto label_24633c;
        case 0x246340u: goto label_246340;
        case 0x246344u: goto label_246344;
        case 0x246348u: goto label_246348;
        case 0x24634cu: goto label_24634c;
        case 0x246350u: goto label_246350;
        case 0x246354u: goto label_246354;
        case 0x246358u: goto label_246358;
        case 0x24635cu: goto label_24635c;
        case 0x246360u: goto label_246360;
        case 0x246364u: goto label_246364;
        case 0x246368u: goto label_246368;
        case 0x24636cu: goto label_24636c;
        case 0x246370u: goto label_246370;
        case 0x246374u: goto label_246374;
        case 0x246378u: goto label_246378;
        case 0x24637cu: goto label_24637c;
        case 0x246380u: goto label_246380;
        case 0x246384u: goto label_246384;
        case 0x246388u: goto label_246388;
        case 0x24638cu: goto label_24638c;
        case 0x246390u: goto label_246390;
        case 0x246394u: goto label_246394;
        case 0x246398u: goto label_246398;
        case 0x24639cu: goto label_24639c;
        case 0x2463a0u: goto label_2463a0;
        case 0x2463a4u: goto label_2463a4;
        case 0x2463a8u: goto label_2463a8;
        case 0x2463acu: goto label_2463ac;
        case 0x2463b0u: goto label_2463b0;
        case 0x2463b4u: goto label_2463b4;
        case 0x2463b8u: goto label_2463b8;
        case 0x2463bcu: goto label_2463bc;
        case 0x2463c0u: goto label_2463c0;
        case 0x2463c4u: goto label_2463c4;
        case 0x2463c8u: goto label_2463c8;
        case 0x2463ccu: goto label_2463cc;
        case 0x2463d0u: goto label_2463d0;
        case 0x2463d4u: goto label_2463d4;
        case 0x2463d8u: goto label_2463d8;
        case 0x2463dcu: goto label_2463dc;
        case 0x2463e0u: goto label_2463e0;
        case 0x2463e4u: goto label_2463e4;
        case 0x2463e8u: goto label_2463e8;
        case 0x2463ecu: goto label_2463ec;
        case 0x2463f0u: goto label_2463f0;
        case 0x2463f4u: goto label_2463f4;
        case 0x2463f8u: goto label_2463f8;
        case 0x2463fcu: goto label_2463fc;
        case 0x246400u: goto label_246400;
        case 0x246404u: goto label_246404;
        case 0x246408u: goto label_246408;
        case 0x24640cu: goto label_24640c;
        case 0x246410u: goto label_246410;
        case 0x246414u: goto label_246414;
        case 0x246418u: goto label_246418;
        case 0x24641cu: goto label_24641c;
        case 0x246420u: goto label_246420;
        case 0x246424u: goto label_246424;
        case 0x246428u: goto label_246428;
        case 0x24642cu: goto label_24642c;
        case 0x246430u: goto label_246430;
        case 0x246434u: goto label_246434;
        case 0x246438u: goto label_246438;
        case 0x24643cu: goto label_24643c;
        case 0x246440u: goto label_246440;
        case 0x246444u: goto label_246444;
        case 0x246448u: goto label_246448;
        case 0x24644cu: goto label_24644c;
        case 0x246450u: goto label_246450;
        case 0x246454u: goto label_246454;
        case 0x246458u: goto label_246458;
        case 0x24645cu: goto label_24645c;
        case 0x246460u: goto label_246460;
        case 0x246464u: goto label_246464;
        case 0x246468u: goto label_246468;
        case 0x24646cu: goto label_24646c;
        case 0x246470u: goto label_246470;
        case 0x246474u: goto label_246474;
        case 0x246478u: goto label_246478;
        case 0x24647cu: goto label_24647c;
        case 0x246480u: goto label_246480;
        case 0x246484u: goto label_246484;
        case 0x246488u: goto label_246488;
        case 0x24648cu: goto label_24648c;
        case 0x246490u: goto label_246490;
        case 0x246494u: goto label_246494;
        case 0x246498u: goto label_246498;
        case 0x24649cu: goto label_24649c;
        case 0x2464a0u: goto label_2464a0;
        case 0x2464a4u: goto label_2464a4;
        case 0x2464a8u: goto label_2464a8;
        case 0x2464acu: goto label_2464ac;
        case 0x2464b0u: goto label_2464b0;
        case 0x2464b4u: goto label_2464b4;
        case 0x2464b8u: goto label_2464b8;
        case 0x2464bcu: goto label_2464bc;
        case 0x2464c0u: goto label_2464c0;
        case 0x2464c4u: goto label_2464c4;
        case 0x2464c8u: goto label_2464c8;
        case 0x2464ccu: goto label_2464cc;
        case 0x2464d0u: goto label_2464d0;
        case 0x2464d4u: goto label_2464d4;
        case 0x2464d8u: goto label_2464d8;
        case 0x2464dcu: goto label_2464dc;
        case 0x2464e0u: goto label_2464e0;
        case 0x2464e4u: goto label_2464e4;
        case 0x2464e8u: goto label_2464e8;
        case 0x2464ecu: goto label_2464ec;
        case 0x2464f0u: goto label_2464f0;
        case 0x2464f4u: goto label_2464f4;
        case 0x2464f8u: goto label_2464f8;
        case 0x2464fcu: goto label_2464fc;
        case 0x246500u: goto label_246500;
        case 0x246504u: goto label_246504;
        case 0x246508u: goto label_246508;
        case 0x24650cu: goto label_24650c;
        case 0x246510u: goto label_246510;
        case 0x246514u: goto label_246514;
        case 0x246518u: goto label_246518;
        case 0x24651cu: goto label_24651c;
        case 0x246520u: goto label_246520;
        case 0x246524u: goto label_246524;
        case 0x246528u: goto label_246528;
        case 0x24652cu: goto label_24652c;
        case 0x246530u: goto label_246530;
        case 0x246534u: goto label_246534;
        case 0x246538u: goto label_246538;
        case 0x24653cu: goto label_24653c;
        case 0x246540u: goto label_246540;
        case 0x246544u: goto label_246544;
        case 0x246548u: goto label_246548;
        case 0x24654cu: goto label_24654c;
        case 0x246550u: goto label_246550;
        case 0x246554u: goto label_246554;
        case 0x246558u: goto label_246558;
        case 0x24655cu: goto label_24655c;
        case 0x246560u: goto label_246560;
        case 0x246564u: goto label_246564;
        case 0x246568u: goto label_246568;
        case 0x24656cu: goto label_24656c;
        case 0x246570u: goto label_246570;
        case 0x246574u: goto label_246574;
        case 0x246578u: goto label_246578;
        case 0x24657cu: goto label_24657c;
        case 0x246580u: goto label_246580;
        case 0x246584u: goto label_246584;
        case 0x246588u: goto label_246588;
        case 0x24658cu: goto label_24658c;
        case 0x246590u: goto label_246590;
        case 0x246594u: goto label_246594;
        case 0x246598u: goto label_246598;
        case 0x24659cu: goto label_24659c;
        case 0x2465a0u: goto label_2465a0;
        case 0x2465a4u: goto label_2465a4;
        case 0x2465a8u: goto label_2465a8;
        case 0x2465acu: goto label_2465ac;
        case 0x2465b0u: goto label_2465b0;
        case 0x2465b4u: goto label_2465b4;
        case 0x2465b8u: goto label_2465b8;
        case 0x2465bcu: goto label_2465bc;
        case 0x2465c0u: goto label_2465c0;
        case 0x2465c4u: goto label_2465c4;
        case 0x2465c8u: goto label_2465c8;
        case 0x2465ccu: goto label_2465cc;
        case 0x2465d0u: goto label_2465d0;
        case 0x2465d4u: goto label_2465d4;
        case 0x2465d8u: goto label_2465d8;
        case 0x2465dcu: goto label_2465dc;
        case 0x2465e0u: goto label_2465e0;
        case 0x2465e4u: goto label_2465e4;
        case 0x2465e8u: goto label_2465e8;
        case 0x2465ecu: goto label_2465ec;
        case 0x2465f0u: goto label_2465f0;
        case 0x2465f4u: goto label_2465f4;
        case 0x2465f8u: goto label_2465f8;
        case 0x2465fcu: goto label_2465fc;
        case 0x246600u: goto label_246600;
        case 0x246604u: goto label_246604;
        case 0x246608u: goto label_246608;
        case 0x24660cu: goto label_24660c;
        case 0x246610u: goto label_246610;
        case 0x246614u: goto label_246614;
        case 0x246618u: goto label_246618;
        case 0x24661cu: goto label_24661c;
        case 0x246620u: goto label_246620;
        case 0x246624u: goto label_246624;
        case 0x246628u: goto label_246628;
        case 0x24662cu: goto label_24662c;
        case 0x246630u: goto label_246630;
        case 0x246634u: goto label_246634;
        case 0x246638u: goto label_246638;
        case 0x24663cu: goto label_24663c;
        case 0x246640u: goto label_246640;
        case 0x246644u: goto label_246644;
        case 0x246648u: goto label_246648;
        case 0x24664cu: goto label_24664c;
        case 0x246650u: goto label_246650;
        case 0x246654u: goto label_246654;
        case 0x246658u: goto label_246658;
        case 0x24665cu: goto label_24665c;
        case 0x246660u: goto label_246660;
        case 0x246664u: goto label_246664;
        case 0x246668u: goto label_246668;
        case 0x24666cu: goto label_24666c;
        case 0x246670u: goto label_246670;
        case 0x246674u: goto label_246674;
        case 0x246678u: goto label_246678;
        case 0x24667cu: goto label_24667c;
        case 0x246680u: goto label_246680;
        case 0x246684u: goto label_246684;
        case 0x246688u: goto label_246688;
        case 0x24668cu: goto label_24668c;
        case 0x246690u: goto label_246690;
        case 0x246694u: goto label_246694;
        case 0x246698u: goto label_246698;
        case 0x24669cu: goto label_24669c;
        case 0x2466a0u: goto label_2466a0;
        case 0x2466a4u: goto label_2466a4;
        case 0x2466a8u: goto label_2466a8;
        case 0x2466acu: goto label_2466ac;
        case 0x2466b0u: goto label_2466b0;
        case 0x2466b4u: goto label_2466b4;
        case 0x2466b8u: goto label_2466b8;
        case 0x2466bcu: goto label_2466bc;
        case 0x2466c0u: goto label_2466c0;
        case 0x2466c4u: goto label_2466c4;
        case 0x2466c8u: goto label_2466c8;
        case 0x2466ccu: goto label_2466cc;
        case 0x2466d0u: goto label_2466d0;
        case 0x2466d4u: goto label_2466d4;
        case 0x2466d8u: goto label_2466d8;
        case 0x2466dcu: goto label_2466dc;
        case 0x2466e0u: goto label_2466e0;
        case 0x2466e4u: goto label_2466e4;
        case 0x2466e8u: goto label_2466e8;
        case 0x2466ecu: goto label_2466ec;
        case 0x2466f0u: goto label_2466f0;
        case 0x2466f4u: goto label_2466f4;
        case 0x2466f8u: goto label_2466f8;
        case 0x2466fcu: goto label_2466fc;
        case 0x246700u: goto label_246700;
        case 0x246704u: goto label_246704;
        case 0x246708u: goto label_246708;
        case 0x24670cu: goto label_24670c;
        case 0x246710u: goto label_246710;
        case 0x246714u: goto label_246714;
        case 0x246718u: goto label_246718;
        case 0x24671cu: goto label_24671c;
        case 0x246720u: goto label_246720;
        case 0x246724u: goto label_246724;
        case 0x246728u: goto label_246728;
        case 0x24672cu: goto label_24672c;
        case 0x246730u: goto label_246730;
        case 0x246734u: goto label_246734;
        case 0x246738u: goto label_246738;
        case 0x24673cu: goto label_24673c;
        case 0x246740u: goto label_246740;
        case 0x246744u: goto label_246744;
        case 0x246748u: goto label_246748;
        case 0x24674cu: goto label_24674c;
        case 0x246750u: goto label_246750;
        case 0x246754u: goto label_246754;
        case 0x246758u: goto label_246758;
        case 0x24675cu: goto label_24675c;
        case 0x246760u: goto label_246760;
        case 0x246764u: goto label_246764;
        case 0x246768u: goto label_246768;
        case 0x24676cu: goto label_24676c;
        case 0x246770u: goto label_246770;
        case 0x246774u: goto label_246774;
        case 0x246778u: goto label_246778;
        case 0x24677cu: goto label_24677c;
        case 0x246780u: goto label_246780;
        case 0x246784u: goto label_246784;
        case 0x246788u: goto label_246788;
        case 0x24678cu: goto label_24678c;
        case 0x246790u: goto label_246790;
        case 0x246794u: goto label_246794;
        case 0x246798u: goto label_246798;
        case 0x24679cu: goto label_24679c;
        case 0x2467a0u: goto label_2467a0;
        case 0x2467a4u: goto label_2467a4;
        case 0x2467a8u: goto label_2467a8;
        case 0x2467acu: goto label_2467ac;
        case 0x2467b0u: goto label_2467b0;
        case 0x2467b4u: goto label_2467b4;
        case 0x2467b8u: goto label_2467b8;
        case 0x2467bcu: goto label_2467bc;
        case 0x2467c0u: goto label_2467c0;
        case 0x2467c4u: goto label_2467c4;
        case 0x2467c8u: goto label_2467c8;
        case 0x2467ccu: goto label_2467cc;
        case 0x2467d0u: goto label_2467d0;
        case 0x2467d4u: goto label_2467d4;
        case 0x2467d8u: goto label_2467d8;
        case 0x2467dcu: goto label_2467dc;
        case 0x2467e0u: goto label_2467e0;
        case 0x2467e4u: goto label_2467e4;
        case 0x2467e8u: goto label_2467e8;
        case 0x2467ecu: goto label_2467ec;
        case 0x2467f0u: goto label_2467f0;
        case 0x2467f4u: goto label_2467f4;
        case 0x2467f8u: goto label_2467f8;
        case 0x2467fcu: goto label_2467fc;
        case 0x246800u: goto label_246800;
        case 0x246804u: goto label_246804;
        case 0x246808u: goto label_246808;
        case 0x24680cu: goto label_24680c;
        case 0x246810u: goto label_246810;
        case 0x246814u: goto label_246814;
        case 0x246818u: goto label_246818;
        case 0x24681cu: goto label_24681c;
        case 0x246820u: goto label_246820;
        case 0x246824u: goto label_246824;
        case 0x246828u: goto label_246828;
        case 0x24682cu: goto label_24682c;
        case 0x246830u: goto label_246830;
        case 0x246834u: goto label_246834;
        case 0x246838u: goto label_246838;
        case 0x24683cu: goto label_24683c;
        case 0x246840u: goto label_246840;
        case 0x246844u: goto label_246844;
        case 0x246848u: goto label_246848;
        case 0x24684cu: goto label_24684c;
        case 0x246850u: goto label_246850;
        case 0x246854u: goto label_246854;
        case 0x246858u: goto label_246858;
        case 0x24685cu: goto label_24685c;
        case 0x246860u: goto label_246860;
        case 0x246864u: goto label_246864;
        case 0x246868u: goto label_246868;
        case 0x24686cu: goto label_24686c;
        case 0x246870u: goto label_246870;
        case 0x246874u: goto label_246874;
        case 0x246878u: goto label_246878;
        case 0x24687cu: goto label_24687c;
        case 0x246880u: goto label_246880;
        case 0x246884u: goto label_246884;
        case 0x246888u: goto label_246888;
        case 0x24688cu: goto label_24688c;
        case 0x246890u: goto label_246890;
        case 0x246894u: goto label_246894;
        case 0x246898u: goto label_246898;
        case 0x24689cu: goto label_24689c;
        case 0x2468a0u: goto label_2468a0;
        case 0x2468a4u: goto label_2468a4;
        case 0x2468a8u: goto label_2468a8;
        case 0x2468acu: goto label_2468ac;
        case 0x2468b0u: goto label_2468b0;
        case 0x2468b4u: goto label_2468b4;
        case 0x2468b8u: goto label_2468b8;
        case 0x2468bcu: goto label_2468bc;
        case 0x2468c0u: goto label_2468c0;
        case 0x2468c4u: goto label_2468c4;
        case 0x2468c8u: goto label_2468c8;
        case 0x2468ccu: goto label_2468cc;
        case 0x2468d0u: goto label_2468d0;
        case 0x2468d4u: goto label_2468d4;
        case 0x2468d8u: goto label_2468d8;
        case 0x2468dcu: goto label_2468dc;
        case 0x2468e0u: goto label_2468e0;
        case 0x2468e4u: goto label_2468e4;
        case 0x2468e8u: goto label_2468e8;
        case 0x2468ecu: goto label_2468ec;
        case 0x2468f0u: goto label_2468f0;
        case 0x2468f4u: goto label_2468f4;
        case 0x2468f8u: goto label_2468f8;
        case 0x2468fcu: goto label_2468fc;
        case 0x246900u: goto label_246900;
        case 0x246904u: goto label_246904;
        case 0x246908u: goto label_246908;
        case 0x24690cu: goto label_24690c;
        case 0x246910u: goto label_246910;
        case 0x246914u: goto label_246914;
        case 0x246918u: goto label_246918;
        case 0x24691cu: goto label_24691c;
        case 0x246920u: goto label_246920;
        case 0x246924u: goto label_246924;
        case 0x246928u: goto label_246928;
        case 0x24692cu: goto label_24692c;
        case 0x246930u: goto label_246930;
        case 0x246934u: goto label_246934;
        case 0x246938u: goto label_246938;
        case 0x24693cu: goto label_24693c;
        case 0x246940u: goto label_246940;
        case 0x246944u: goto label_246944;
        case 0x246948u: goto label_246948;
        case 0x24694cu: goto label_24694c;
        case 0x246950u: goto label_246950;
        case 0x246954u: goto label_246954;
        case 0x246958u: goto label_246958;
        case 0x24695cu: goto label_24695c;
        case 0x246960u: goto label_246960;
        case 0x246964u: goto label_246964;
        case 0x246968u: goto label_246968;
        case 0x24696cu: goto label_24696c;
        case 0x246970u: goto label_246970;
        case 0x246974u: goto label_246974;
        case 0x246978u: goto label_246978;
        case 0x24697cu: goto label_24697c;
        case 0x246980u: goto label_246980;
        case 0x246984u: goto label_246984;
        case 0x246988u: goto label_246988;
        case 0x24698cu: goto label_24698c;
        case 0x246990u: goto label_246990;
        case 0x246994u: goto label_246994;
        case 0x246998u: goto label_246998;
        case 0x24699cu: goto label_24699c;
        case 0x2469a0u: goto label_2469a0;
        case 0x2469a4u: goto label_2469a4;
        case 0x2469a8u: goto label_2469a8;
        case 0x2469acu: goto label_2469ac;
        case 0x2469b0u: goto label_2469b0;
        case 0x2469b4u: goto label_2469b4;
        case 0x2469b8u: goto label_2469b8;
        case 0x2469bcu: goto label_2469bc;
        case 0x2469c0u: goto label_2469c0;
        case 0x2469c4u: goto label_2469c4;
        case 0x2469c8u: goto label_2469c8;
        case 0x2469ccu: goto label_2469cc;
        case 0x2469d0u: goto label_2469d0;
        case 0x2469d4u: goto label_2469d4;
        case 0x2469d8u: goto label_2469d8;
        case 0x2469dcu: goto label_2469dc;
        case 0x2469e0u: goto label_2469e0;
        case 0x2469e4u: goto label_2469e4;
        case 0x2469e8u: goto label_2469e8;
        case 0x2469ecu: goto label_2469ec;
        case 0x2469f0u: goto label_2469f0;
        case 0x2469f4u: goto label_2469f4;
        case 0x2469f8u: goto label_2469f8;
        case 0x2469fcu: goto label_2469fc;
        case 0x246a00u: goto label_246a00;
        case 0x246a04u: goto label_246a04;
        case 0x246a08u: goto label_246a08;
        case 0x246a0cu: goto label_246a0c;
        case 0x246a10u: goto label_246a10;
        case 0x246a14u: goto label_246a14;
        case 0x246a18u: goto label_246a18;
        case 0x246a1cu: goto label_246a1c;
        case 0x246a20u: goto label_246a20;
        case 0x246a24u: goto label_246a24;
        case 0x246a28u: goto label_246a28;
        case 0x246a2cu: goto label_246a2c;
        case 0x246a30u: goto label_246a30;
        case 0x246a34u: goto label_246a34;
        case 0x246a38u: goto label_246a38;
        case 0x246a3cu: goto label_246a3c;
        case 0x246a40u: goto label_246a40;
        case 0x246a44u: goto label_246a44;
        case 0x246a48u: goto label_246a48;
        case 0x246a4cu: goto label_246a4c;
        case 0x246a50u: goto label_246a50;
        case 0x246a54u: goto label_246a54;
        case 0x246a58u: goto label_246a58;
        case 0x246a5cu: goto label_246a5c;
        case 0x246a60u: goto label_246a60;
        case 0x246a64u: goto label_246a64;
        case 0x246a68u: goto label_246a68;
        case 0x246a6cu: goto label_246a6c;
        case 0x246a70u: goto label_246a70;
        case 0x246a74u: goto label_246a74;
        case 0x246a78u: goto label_246a78;
        case 0x246a7cu: goto label_246a7c;
        case 0x246a80u: goto label_246a80;
        case 0x246a84u: goto label_246a84;
        case 0x246a88u: goto label_246a88;
        case 0x246a8cu: goto label_246a8c;
        case 0x246a90u: goto label_246a90;
        case 0x246a94u: goto label_246a94;
        case 0x246a98u: goto label_246a98;
        case 0x246a9cu: goto label_246a9c;
        case 0x246aa0u: goto label_246aa0;
        case 0x246aa4u: goto label_246aa4;
        case 0x246aa8u: goto label_246aa8;
        case 0x246aacu: goto label_246aac;
        case 0x246ab0u: goto label_246ab0;
        case 0x246ab4u: goto label_246ab4;
        case 0x246ab8u: goto label_246ab8;
        case 0x246abcu: goto label_246abc;
        case 0x246ac0u: goto label_246ac0;
        case 0x246ac4u: goto label_246ac4;
        case 0x246ac8u: goto label_246ac8;
        case 0x246accu: goto label_246acc;
        case 0x246ad0u: goto label_246ad0;
        case 0x246ad4u: goto label_246ad4;
        case 0x246ad8u: goto label_246ad8;
        case 0x246adcu: goto label_246adc;
        case 0x246ae0u: goto label_246ae0;
        case 0x246ae4u: goto label_246ae4;
        case 0x246ae8u: goto label_246ae8;
        case 0x246aecu: goto label_246aec;
        case 0x246af0u: goto label_246af0;
        case 0x246af4u: goto label_246af4;
        case 0x246af8u: goto label_246af8;
        case 0x246afcu: goto label_246afc;
        case 0x246b00u: goto label_246b00;
        case 0x246b04u: goto label_246b04;
        case 0x246b08u: goto label_246b08;
        case 0x246b0cu: goto label_246b0c;
        case 0x246b10u: goto label_246b10;
        case 0x246b14u: goto label_246b14;
        case 0x246b18u: goto label_246b18;
        case 0x246b1cu: goto label_246b1c;
        case 0x246b20u: goto label_246b20;
        case 0x246b24u: goto label_246b24;
        case 0x246b28u: goto label_246b28;
        case 0x246b2cu: goto label_246b2c;
        case 0x246b30u: goto label_246b30;
        case 0x246b34u: goto label_246b34;
        case 0x246b38u: goto label_246b38;
        case 0x246b3cu: goto label_246b3c;
        case 0x246b40u: goto label_246b40;
        case 0x246b44u: goto label_246b44;
        case 0x246b48u: goto label_246b48;
        case 0x246b4cu: goto label_246b4c;
        case 0x246b50u: goto label_246b50;
        case 0x246b54u: goto label_246b54;
        case 0x246b58u: goto label_246b58;
        case 0x246b5cu: goto label_246b5c;
        case 0x246b60u: goto label_246b60;
        case 0x246b64u: goto label_246b64;
        case 0x246b68u: goto label_246b68;
        case 0x246b6cu: goto label_246b6c;
        case 0x246b70u: goto label_246b70;
        case 0x246b74u: goto label_246b74;
        case 0x246b78u: goto label_246b78;
        case 0x246b7cu: goto label_246b7c;
        case 0x246b80u: goto label_246b80;
        case 0x246b84u: goto label_246b84;
        case 0x246b88u: goto label_246b88;
        case 0x246b8cu: goto label_246b8c;
        case 0x246b90u: goto label_246b90;
        case 0x246b94u: goto label_246b94;
        case 0x246b98u: goto label_246b98;
        case 0x246b9cu: goto label_246b9c;
        case 0x246ba0u: goto label_246ba0;
        case 0x246ba4u: goto label_246ba4;
        case 0x246ba8u: goto label_246ba8;
        case 0x246bacu: goto label_246bac;
        case 0x246bb0u: goto label_246bb0;
        case 0x246bb4u: goto label_246bb4;
        case 0x246bb8u: goto label_246bb8;
        case 0x246bbcu: goto label_246bbc;
        case 0x246bc0u: goto label_246bc0;
        case 0x246bc4u: goto label_246bc4;
        case 0x246bc8u: goto label_246bc8;
        case 0x246bccu: goto label_246bcc;
        case 0x246bd0u: goto label_246bd0;
        case 0x246bd4u: goto label_246bd4;
        case 0x246bd8u: goto label_246bd8;
        case 0x246bdcu: goto label_246bdc;
        case 0x246be0u: goto label_246be0;
        case 0x246be4u: goto label_246be4;
        case 0x246be8u: goto label_246be8;
        case 0x246becu: goto label_246bec;
        case 0x246bf0u: goto label_246bf0;
        case 0x246bf4u: goto label_246bf4;
        case 0x246bf8u: goto label_246bf8;
        case 0x246bfcu: goto label_246bfc;
        case 0x246c00u: goto label_246c00;
        case 0x246c04u: goto label_246c04;
        case 0x246c08u: goto label_246c08;
        case 0x246c0cu: goto label_246c0c;
        case 0x246c10u: goto label_246c10;
        case 0x246c14u: goto label_246c14;
        case 0x246c18u: goto label_246c18;
        case 0x246c1cu: goto label_246c1c;
        case 0x246c20u: goto label_246c20;
        case 0x246c24u: goto label_246c24;
        case 0x246c28u: goto label_246c28;
        case 0x246c2cu: goto label_246c2c;
        case 0x246c30u: goto label_246c30;
        case 0x246c34u: goto label_246c34;
        case 0x246c38u: goto label_246c38;
        case 0x246c3cu: goto label_246c3c;
        case 0x246c40u: goto label_246c40;
        case 0x246c44u: goto label_246c44;
        case 0x246c48u: goto label_246c48;
        case 0x246c4cu: goto label_246c4c;
        case 0x246c50u: goto label_246c50;
        case 0x246c54u: goto label_246c54;
        case 0x246c58u: goto label_246c58;
        case 0x246c5cu: goto label_246c5c;
        case 0x246c60u: goto label_246c60;
        case 0x246c64u: goto label_246c64;
        case 0x246c68u: goto label_246c68;
        case 0x246c6cu: goto label_246c6c;
        case 0x246c70u: goto label_246c70;
        case 0x246c74u: goto label_246c74;
        case 0x246c78u: goto label_246c78;
        case 0x246c7cu: goto label_246c7c;
        case 0x246c80u: goto label_246c80;
        case 0x246c84u: goto label_246c84;
        case 0x246c88u: goto label_246c88;
        case 0x246c8cu: goto label_246c8c;
        case 0x246c90u: goto label_246c90;
        case 0x246c94u: goto label_246c94;
        case 0x246c98u: goto label_246c98;
        case 0x246c9cu: goto label_246c9c;
        case 0x246ca0u: goto label_246ca0;
        case 0x246ca4u: goto label_246ca4;
        case 0x246ca8u: goto label_246ca8;
        case 0x246cacu: goto label_246cac;
        case 0x246cb0u: goto label_246cb0;
        case 0x246cb4u: goto label_246cb4;
        case 0x246cb8u: goto label_246cb8;
        case 0x246cbcu: goto label_246cbc;
        case 0x246cc0u: goto label_246cc0;
        case 0x246cc4u: goto label_246cc4;
        case 0x246cc8u: goto label_246cc8;
        case 0x246cccu: goto label_246ccc;
        case 0x246cd0u: goto label_246cd0;
        case 0x246cd4u: goto label_246cd4;
        case 0x246cd8u: goto label_246cd8;
        case 0x246cdcu: goto label_246cdc;
        case 0x246ce0u: goto label_246ce0;
        case 0x246ce4u: goto label_246ce4;
        case 0x246ce8u: goto label_246ce8;
        case 0x246cecu: goto label_246cec;
        case 0x246cf0u: goto label_246cf0;
        case 0x246cf4u: goto label_246cf4;
        case 0x246cf8u: goto label_246cf8;
        case 0x246cfcu: goto label_246cfc;
        case 0x246d00u: goto label_246d00;
        case 0x246d04u: goto label_246d04;
        case 0x246d08u: goto label_246d08;
        case 0x246d0cu: goto label_246d0c;
        case 0x246d10u: goto label_246d10;
        case 0x246d14u: goto label_246d14;
        case 0x246d18u: goto label_246d18;
        case 0x246d1cu: goto label_246d1c;
        case 0x246d20u: goto label_246d20;
        case 0x246d24u: goto label_246d24;
        case 0x246d28u: goto label_246d28;
        case 0x246d2cu: goto label_246d2c;
        case 0x246d30u: goto label_246d30;
        case 0x246d34u: goto label_246d34;
        case 0x246d38u: goto label_246d38;
        case 0x246d3cu: goto label_246d3c;
        case 0x246d40u: goto label_246d40;
        case 0x246d44u: goto label_246d44;
        case 0x246d48u: goto label_246d48;
        case 0x246d4cu: goto label_246d4c;
        case 0x246d50u: goto label_246d50;
        case 0x246d54u: goto label_246d54;
        case 0x246d58u: goto label_246d58;
        case 0x246d5cu: goto label_246d5c;
        case 0x246d60u: goto label_246d60;
        case 0x246d64u: goto label_246d64;
        case 0x246d68u: goto label_246d68;
        case 0x246d6cu: goto label_246d6c;
        case 0x246d70u: goto label_246d70;
        case 0x246d74u: goto label_246d74;
        case 0x246d78u: goto label_246d78;
        case 0x246d7cu: goto label_246d7c;
        case 0x246d80u: goto label_246d80;
        case 0x246d84u: goto label_246d84;
        case 0x246d88u: goto label_246d88;
        case 0x246d8cu: goto label_246d8c;
        case 0x246d90u: goto label_246d90;
        case 0x246d94u: goto label_246d94;
        case 0x246d98u: goto label_246d98;
        case 0x246d9cu: goto label_246d9c;
        case 0x246da0u: goto label_246da0;
        case 0x246da4u: goto label_246da4;
        case 0x246da8u: goto label_246da8;
        case 0x246dacu: goto label_246dac;
        case 0x246db0u: goto label_246db0;
        case 0x246db4u: goto label_246db4;
        case 0x246db8u: goto label_246db8;
        case 0x246dbcu: goto label_246dbc;
        case 0x246dc0u: goto label_246dc0;
        case 0x246dc4u: goto label_246dc4;
        case 0x246dc8u: goto label_246dc8;
        case 0x246dccu: goto label_246dcc;
        case 0x246dd0u: goto label_246dd0;
        case 0x246dd4u: goto label_246dd4;
        case 0x246dd8u: goto label_246dd8;
        case 0x246ddcu: goto label_246ddc;
        case 0x246de0u: goto label_246de0;
        case 0x246de4u: goto label_246de4;
        case 0x246de8u: goto label_246de8;
        case 0x246decu: goto label_246dec;
        case 0x246df0u: goto label_246df0;
        case 0x246df4u: goto label_246df4;
        case 0x246df8u: goto label_246df8;
        case 0x246dfcu: goto label_246dfc;
        case 0x246e00u: goto label_246e00;
        case 0x246e04u: goto label_246e04;
        case 0x246e08u: goto label_246e08;
        case 0x246e0cu: goto label_246e0c;
        case 0x246e10u: goto label_246e10;
        case 0x246e14u: goto label_246e14;
        case 0x246e18u: goto label_246e18;
        case 0x246e1cu: goto label_246e1c;
        case 0x246e20u: goto label_246e20;
        case 0x246e24u: goto label_246e24;
        case 0x246e28u: goto label_246e28;
        case 0x246e2cu: goto label_246e2c;
        case 0x246e30u: goto label_246e30;
        case 0x246e34u: goto label_246e34;
        case 0x246e38u: goto label_246e38;
        case 0x246e3cu: goto label_246e3c;
        case 0x246e40u: goto label_246e40;
        case 0x246e44u: goto label_246e44;
        case 0x246e48u: goto label_246e48;
        case 0x246e4cu: goto label_246e4c;
        case 0x246e50u: goto label_246e50;
        case 0x246e54u: goto label_246e54;
        case 0x246e58u: goto label_246e58;
        case 0x246e5cu: goto label_246e5c;
        case 0x246e60u: goto label_246e60;
        case 0x246e64u: goto label_246e64;
        case 0x246e68u: goto label_246e68;
        case 0x246e6cu: goto label_246e6c;
        case 0x246e70u: goto label_246e70;
        case 0x246e74u: goto label_246e74;
        case 0x246e78u: goto label_246e78;
        case 0x246e7cu: goto label_246e7c;
        case 0x246e80u: goto label_246e80;
        case 0x246e84u: goto label_246e84;
        case 0x246e88u: goto label_246e88;
        case 0x246e8cu: goto label_246e8c;
        case 0x246e90u: goto label_246e90;
        case 0x246e94u: goto label_246e94;
        case 0x246e98u: goto label_246e98;
        case 0x246e9cu: goto label_246e9c;
        case 0x246ea0u: goto label_246ea0;
        case 0x246ea4u: goto label_246ea4;
        case 0x246ea8u: goto label_246ea8;
        case 0x246eacu: goto label_246eac;
        case 0x246eb0u: goto label_246eb0;
        case 0x246eb4u: goto label_246eb4;
        case 0x246eb8u: goto label_246eb8;
        case 0x246ebcu: goto label_246ebc;
        case 0x246ec0u: goto label_246ec0;
        case 0x246ec4u: goto label_246ec4;
        case 0x246ec8u: goto label_246ec8;
        case 0x246eccu: goto label_246ecc;
        case 0x246ed0u: goto label_246ed0;
        case 0x246ed4u: goto label_246ed4;
        case 0x246ed8u: goto label_246ed8;
        case 0x246edcu: goto label_246edc;
        case 0x246ee0u: goto label_246ee0;
        case 0x246ee4u: goto label_246ee4;
        case 0x246ee8u: goto label_246ee8;
        case 0x246eecu: goto label_246eec;
        case 0x246ef0u: goto label_246ef0;
        case 0x246ef4u: goto label_246ef4;
        case 0x246ef8u: goto label_246ef8;
        case 0x246efcu: goto label_246efc;
        case 0x246f00u: goto label_246f00;
        case 0x246f04u: goto label_246f04;
        case 0x246f08u: goto label_246f08;
        default: break;
    }

    ctx->pc = 0x245840u;

label_245840:
    // 0x245840: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x245840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_245844:
    // 0x245844: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x245844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_245848:
    // 0x245848: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x245848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_24584c:
    // 0x24584c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x24584cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_245850:
    // 0x245850: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x245850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_245854:
    // 0x245854: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x245854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_245858:
    // 0x245858: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x245858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_24585c:
    // 0x24585c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x24585cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_245860:
    // 0x245860: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x245860u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_245864:
    // 0x245864: 0xc08f8c8  jal         func_23E320
label_245868:
    if (ctx->pc == 0x245868u) {
        ctx->pc = 0x245868u;
            // 0x245868: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->pc = 0x24586Cu;
        goto label_24586c;
    }
    ctx->pc = 0x245864u;
    SET_GPR_U32(ctx, 31, 0x24586Cu);
    ctx->pc = 0x245868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245864u;
            // 0x245868: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24586Cu; }
        if (ctx->pc != 0x24586Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPushButton__12CMenuKeyFuncFv_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24586Cu; }
        if (ctx->pc != 0x24586Cu) { return; }
    }
    ctx->pc = 0x24586Cu;
label_24586c:
    // 0x24586c: 0x8f8595c0  lw          $a1, -0x6A40($gp)
    ctx->pc = 0x24586cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_245870:
    // 0x245870: 0x84a30014  lh          $v1, 0x14($a1)
    ctx->pc = 0x245870u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
label_245874:
    // 0x245874: 0x8cb1017c  lw          $s1, 0x17C($a1)
    ctx->pc = 0x245874u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 380)));
label_245878:
    // 0x245878: 0x2c61000c  sltiu       $at, $v1, 0xC
    ctx->pc = 0x245878u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_24587c:
    // 0x24587c: 0x10200544  beqz        $at, . + 4 + (0x544 << 2)
label_245880:
    if (ctx->pc == 0x245880u) {
        ctx->pc = 0x245880u;
            // 0x245880: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245884u;
        goto label_245884;
    }
    ctx->pc = 0x24587Cu;
    {
        const bool branch_taken_0x24587c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x245880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24587Cu;
            // 0x245880: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24587c) {
            ctx->pc = 0x246D90u;
            goto label_246d90;
        }
    }
    ctx->pc = 0x245884u;
label_245884:
    // 0x245884: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x245884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_245888:
    // 0x245888: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x245888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24588c:
    // 0x24588c: 0x2484b2a0  addiu       $a0, $a0, -0x4D60
    ctx->pc = 0x24588cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947488));
label_245890:
    // 0x245890: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x245890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_245894:
    // 0x245894: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x245894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_245898:
    // 0x245898: 0x600008  jr          $v1
label_24589c:
    if (ctx->pc == 0x24589Cu) {
        ctx->pc = 0x2458A0u;
        goto label_2458a0;
    }
    ctx->pc = 0x245898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2458A0u: goto label_2458a0;
            case 0x246454u: goto label_246454;
            case 0x2466BCu: goto label_2466bc;
            case 0x246964u: goto label_246964;
            case 0x246B5Cu: goto label_246b5c;
            case 0x246C00u: goto label_246c00;
            case 0x246C6Cu: goto label_246c6c;
            case 0x246D90u: goto label_246d90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2458A0u;
label_2458a0:
    // 0x2458a0: 0x838496cc  lb          $a0, -0x6934($gp)
    ctx->pc = 0x2458a0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940364)));
label_2458a4:
    // 0x2458a4: 0x148001eb  bnez        $a0, . + 4 + (0x1EB << 2)
label_2458a8:
    if (ctx->pc == 0x2458A8u) {
        ctx->pc = 0x2458A8u;
            // 0x2458a8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2458ACu;
        goto label_2458ac;
    }
    ctx->pc = 0x2458A4u;
    {
        const bool branch_taken_0x2458a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2458A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2458A4u;
            // 0x2458a8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2458a4) {
            ctx->pc = 0x246054u;
            goto label_246054;
        }
    }
    ctx->pc = 0x2458ACu;
label_2458ac:
    // 0x2458ac: 0xc08f80c  jal         func_23E030
label_2458b0:
    if (ctx->pc == 0x2458B0u) {
        ctx->pc = 0x2458B0u;
            // 0x2458b0: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->pc = 0x2458B4u;
        goto label_2458b4;
    }
    ctx->pc = 0x2458ACu;
    SET_GPR_U32(ctx, 31, 0x2458B4u);
    ctx->pc = 0x2458B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2458ACu;
            // 0x2458b0: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E030u;
    if (runtime->hasFunction(0x23E030u)) {
        auto targetFn = runtime->lookupFunction(0x23E030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2458B4u; }
        if (ctx->pc != 0x2458B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSelectKey__12CMenuKeyFuncFv_0x23e030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2458B4u; }
        if (ctx->pc != 0x2458B4u) { return; }
    }
    ctx->pc = 0x2458B4u;
label_2458b4:
    // 0x2458b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2458b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2458b8:
    // 0x2458b8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2458b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_2458bc:
    // 0x2458bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2458c0:
    if (ctx->pc == 0x2458C0u) {
        ctx->pc = 0x2458C0u;
            // 0x2458c0: 0x32420010  andi        $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
        ctx->pc = 0x2458C4u;
        goto label_2458c4;
    }
    ctx->pc = 0x2458BCu;
    {
        const bool branch_taken_0x2458bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2458C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2458BCu;
            // 0x2458c0: 0x32420010  andi        $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2458bc) {
            ctx->pc = 0x2458D8u;
            goto label_2458d8;
        }
    }
    ctx->pc = 0x2458C4u;
label_2458c4:
    // 0x2458c4: 0x8f8395c0  lw          $v1, -0x6A40($gp)
    ctx->pc = 0x2458c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_2458c8:
    // 0x2458c8: 0x846202fe  lh          $v0, 0x2FE($v1)
    ctx->pc = 0x2458c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
label_2458cc:
    // 0x2458cc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2458ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_2458d0:
    // 0x2458d0: 0xa46202fe  sh          $v0, 0x2FE($v1)
    ctx->pc = 0x2458d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 766), (uint16_t)GPR_U32(ctx, 2));
label_2458d4:
    // 0x2458d4: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x2458d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
label_2458d8:
    // 0x2458d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2458dc:
    if (ctx->pc == 0x2458DCu) {
        ctx->pc = 0x2458DCu;
            // 0x2458dc: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x2458E0u;
        goto label_2458e0;
    }
    ctx->pc = 0x2458D8u;
    {
        const bool branch_taken_0x2458d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2458DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2458D8u;
            // 0x2458dc: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2458d8) {
            ctx->pc = 0x2458F4u;
            goto label_2458f4;
        }
    }
    ctx->pc = 0x2458E0u;
label_2458e0:
    // 0x2458e0: 0x8f8395c0  lw          $v1, -0x6A40($gp)
    ctx->pc = 0x2458e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_2458e4:
    // 0x2458e4: 0x846202fe  lh          $v0, 0x2FE($v1)
    ctx->pc = 0x2458e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
label_2458e8:
    // 0x2458e8: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x2458e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_2458ec:
    // 0x2458ec: 0xa46202fe  sh          $v0, 0x2FE($v1)
    ctx->pc = 0x2458ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 766), (uint16_t)GPR_U32(ctx, 2));
label_2458f0:
    // 0x2458f0: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x2458f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_2458f4:
    // 0x2458f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2458f8:
    if (ctx->pc == 0x2458F8u) {
        ctx->pc = 0x2458F8u;
            // 0x2458f8: 0x32420002  andi        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x2458FCu;
        goto label_2458fc;
    }
    ctx->pc = 0x2458F4u;
    {
        const bool branch_taken_0x2458f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2458F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2458F4u;
            // 0x2458f8: 0x32420002  andi        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2458f4) {
            ctx->pc = 0x245910u;
            goto label_245910;
        }
    }
    ctx->pc = 0x2458FCu;
label_2458fc:
    // 0x2458fc: 0x8f8395c0  lw          $v1, -0x6A40($gp)
    ctx->pc = 0x2458fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_245900:
    // 0x245900: 0x846202fe  lh          $v0, 0x2FE($v1)
    ctx->pc = 0x245900u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
label_245904:
    // 0x245904: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x245904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_245908:
    // 0x245908: 0xa46202fe  sh          $v0, 0x2FE($v1)
    ctx->pc = 0x245908u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 766), (uint16_t)GPR_U32(ctx, 2));
label_24590c:
    // 0x24590c: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x24590cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_245910:
    // 0x245910: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_245914:
    if (ctx->pc == 0x245914u) {
        ctx->pc = 0x245914u;
            // 0x245914: 0x32420008  andi        $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x245918u;
        goto label_245918;
    }
    ctx->pc = 0x245910u;
    {
        const bool branch_taken_0x245910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245910u;
            // 0x245914: 0x32420008  andi        $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x245910) {
            ctx->pc = 0x24592Cu;
            goto label_24592c;
        }
    }
    ctx->pc = 0x245918u;
label_245918:
    // 0x245918: 0x8f8395c0  lw          $v1, -0x6A40($gp)
    ctx->pc = 0x245918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_24591c:
    // 0x24591c: 0x846202fe  lh          $v0, 0x2FE($v1)
    ctx->pc = 0x24591cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
label_245920:
    // 0x245920: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x245920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_245924:
    // 0x245924: 0xa46202fe  sh          $v0, 0x2FE($v1)
    ctx->pc = 0x245924u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 766), (uint16_t)GPR_U32(ctx, 2));
label_245928:
    // 0x245928: 0x32420008  andi        $v0, $s2, 0x8
    ctx->pc = 0x245928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
label_24592c:
    // 0x24592c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_245930:
    if (ctx->pc == 0x245930u) {
        ctx->pc = 0x245930u;
            // 0x245930: 0x32420004  andi        $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x245934u;
        goto label_245934;
    }
    ctx->pc = 0x24592Cu;
    {
        const bool branch_taken_0x24592c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24592Cu;
            // 0x245930: 0x32420004  andi        $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24592c) {
            ctx->pc = 0x245948u;
            goto label_245948;
        }
    }
    ctx->pc = 0x245934u;
label_245934:
    // 0x245934: 0x8f8395c0  lw          $v1, -0x6A40($gp)
    ctx->pc = 0x245934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_245938:
    // 0x245938: 0x846202fe  lh          $v0, 0x2FE($v1)
    ctx->pc = 0x245938u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
label_24593c:
    // 0x24593c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24593cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_245940:
    // 0x245940: 0xa46202fe  sh          $v0, 0x2FE($v1)
    ctx->pc = 0x245940u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 766), (uint16_t)GPR_U32(ctx, 2));
label_245944:
    // 0x245944: 0x32420004  andi        $v0, $s2, 0x4
    ctx->pc = 0x245944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
label_245948:
    // 0x245948: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_24594c:
    if (ctx->pc == 0x24594Cu) {
        ctx->pc = 0x245950u;
        goto label_245950;
    }
    ctx->pc = 0x245948u;
    {
        const bool branch_taken_0x245948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245948) {
            ctx->pc = 0x245960u;
            goto label_245960;
        }
    }
    ctx->pc = 0x245950u;
label_245950:
    // 0x245950: 0x8f8395c0  lw          $v1, -0x6A40($gp)
    ctx->pc = 0x245950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_245954:
    // 0x245954: 0x846202fe  lh          $v0, 0x2FE($v1)
    ctx->pc = 0x245954u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
label_245958:
    // 0x245958: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x245958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_24595c:
    // 0x24595c: 0xa46202fe  sh          $v0, 0x2FE($v1)
    ctx->pc = 0x24595cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 766), (uint16_t)GPR_U32(ctx, 2));
label_245960:
    // 0x245960: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x245960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_245964:
    // 0x245964: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x245964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_245968:
    // 0x245968: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x245968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_24596c:
    // 0x24596c: 0xc052cf0  jal         func_14B3C0
label_245970:
    if (ctx->pc == 0x245970u) {
        ctx->pc = 0x245970u;
            // 0x245970: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x245974u;
        goto label_245974;
    }
    ctx->pc = 0x24596Cu;
    SET_GPR_U32(ctx, 31, 0x245974u);
    ctx->pc = 0x245970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24596Cu;
            // 0x245970: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245974u; }
        if (ctx->pc != 0x245974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245974u; }
        if (ctx->pc != 0x245974u) { return; }
    }
    ctx->pc = 0x245974u;
label_245974:
    // 0x245974: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_245978:
    if (ctx->pc == 0x245978u) {
        ctx->pc = 0x245978u;
            // 0x245978: 0x32420080  andi        $v0, $s2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)128);
        ctx->pc = 0x24597Cu;
        goto label_24597c;
    }
    ctx->pc = 0x245974u;
    {
        const bool branch_taken_0x245974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245974u;
            // 0x245978: 0x32420080  andi        $v0, $s2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x245974) {
            ctx->pc = 0x245984u;
            goto label_245984;
        }
    }
    ctx->pc = 0x24597Cu;
label_24597c:
    // 0x24597c: 0x24130005  addiu       $s3, $zero, 0x5
    ctx->pc = 0x24597cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_245980:
    // 0x245980: 0x32420080  andi        $v0, $s2, 0x80
    ctx->pc = 0x245980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)128);
label_245984:
    // 0x245984: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_245988:
    if (ctx->pc == 0x245988u) {
        ctx->pc = 0x245988u;
            // 0x245988: 0x32420040  andi        $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->pc = 0x24598Cu;
        goto label_24598c;
    }
    ctx->pc = 0x245984u;
    {
        const bool branch_taken_0x245984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245984u;
            // 0x245988: 0x32420040  andi        $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x245984) {
            ctx->pc = 0x2459A4u;
            goto label_2459a4;
        }
    }
    ctx->pc = 0x24598Cu;
label_24598c:
    // 0x24598c: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x24598cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_245990:
    // 0x245990: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x245990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_245994:
    // 0x245994: 0x90820300  lbu         $v0, 0x300($a0)
    ctx->pc = 0x245994u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 768)));
label_245998:
    // 0x245998: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x245998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24599c:
    // 0x24599c: 0xa0820300  sb          $v0, 0x300($a0)
    ctx->pc = 0x24599cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 768), (uint8_t)GPR_U32(ctx, 2));
label_2459a0:
    // 0x2459a0: 0x32420040  andi        $v0, $s2, 0x40
    ctx->pc = 0x2459a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
label_2459a4:
    // 0x2459a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2459a8:
    if (ctx->pc == 0x2459A8u) {
        ctx->pc = 0x2459ACu;
        goto label_2459ac;
    }
    ctx->pc = 0x2459A4u;
    {
        const bool branch_taken_0x2459a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2459a4) {
            ctx->pc = 0x2459C0u;
            goto label_2459c0;
        }
    }
    ctx->pc = 0x2459ACu;
label_2459ac:
    // 0x2459ac: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x2459acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_2459b0:
    // 0x2459b0: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x2459b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_2459b4:
    // 0x2459b4: 0x90830300  lbu         $v1, 0x300($a0)
    ctx->pc = 0x2459b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 768)));
label_2459b8:
    // 0x2459b8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2459b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2459bc:
    // 0x2459bc: 0xa0820300  sb          $v0, 0x300($a0)
    ctx->pc = 0x2459bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 768), (uint8_t)GPR_U32(ctx, 2));
label_2459c0:
    // 0x2459c0: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x2459c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_2459c4:
    // 0x2459c4: 0x24430300  addiu       $v1, $v0, 0x300
    ctx->pc = 0x2459c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
label_2459c8:
    // 0x2459c8: 0x90420300  lbu         $v0, 0x300($v0)
    ctx->pc = 0x2459c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 768)));
label_2459cc:
    // 0x2459cc: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_2459d0:
    if (ctx->pc == 0x2459D0u) {
        ctx->pc = 0x2459D4u;
        goto label_2459d4;
    }
    ctx->pc = 0x2459CCu;
    {
        const bool branch_taken_0x2459cc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2459cc) {
            ctx->pc = 0x2459DCu;
            goto label_2459dc;
        }
    }
    ctx->pc = 0x2459D4u;
label_2459d4:
    // 0x2459d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2459d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2459d8:
    // 0x2459d8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2459d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_2459dc:
    // 0x2459dc: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x2459dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_2459e0:
    // 0x2459e0: 0x24430300  addiu       $v1, $v0, 0x300
    ctx->pc = 0x2459e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
label_2459e4:
    // 0x2459e4: 0x90420300  lbu         $v0, 0x300($v0)
    ctx->pc = 0x2459e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 768)));
label_2459e8:
    // 0x2459e8: 0x28410065  slti        $at, $v0, 0x65
    ctx->pc = 0x2459e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
label_2459ec:
    // 0x2459ec: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2459f0:
    if (ctx->pc == 0x2459F0u) {
        ctx->pc = 0x2459F4u;
        goto label_2459f4;
    }
    ctx->pc = 0x2459ECu;
    {
        const bool branch_taken_0x2459ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2459ec) {
            ctx->pc = 0x2459FCu;
            goto label_2459fc;
        }
    }
    ctx->pc = 0x2459F4u;
label_2459f4:
    // 0x2459f4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2459f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2459f8:
    // 0x2459f8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2459f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_2459fc:
    // 0x2459fc: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x2459fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_245a00:
    // 0x245a00: 0x244302fe  addiu       $v1, $v0, 0x2FE
    ctx->pc = 0x245a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 766));
label_245a04:
    // 0x245a04: 0x844202fe  lh          $v0, 0x2FE($v0)
    ctx->pc = 0x245a04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
label_245a08:
    // 0x245a08: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_245a0c:
    if (ctx->pc == 0x245A0Cu) {
        ctx->pc = 0x245A10u;
        goto label_245a10;
    }
    ctx->pc = 0x245A08u;
    {
        const bool branch_taken_0x245a08 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x245a08) {
            ctx->pc = 0x245A18u;
            goto label_245a18;
        }
    }
    ctx->pc = 0x245A10u;
label_245a10:
    // 0x245a10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x245a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_245a14:
    // 0x245a14: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x245a14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_245a18:
    // 0x245a18: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x245a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_245a1c:
    // 0x245a1c: 0xc06517c  jal         func_1945F0
label_245a20:
    if (ctx->pc == 0x245A20u) {
        ctx->pc = 0x245A20u;
            // 0x245a20: 0x845202fe  lh          $s2, 0x2FE($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
        ctx->pc = 0x245A24u;
        goto label_245a24;
    }
    ctx->pc = 0x245A1Cu;
    SET_GPR_U32(ctx, 31, 0x245A24u);
    ctx->pc = 0x245A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245A1Cu;
            // 0x245a20: 0x845202fe  lh          $s2, 0x2FE($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1945F0u;
    if (runtime->hasFunction(0x1945F0u)) {
        auto targetFn = runtime->lookupFunction(0x1945F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245A24u; }
        if (ctx->pc != 0x245A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGameDataPt__Fv_0x1945f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245A24u; }
        if (ctx->pc != 0x245A24u) { return; }
    }
    ctx->pc = 0x245A24u;
label_245a24:
    // 0x245a24: 0x94420020  lhu         $v0, 0x20($v0)
    ctx->pc = 0x245a24u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_245a28:
    // 0x245a28: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x245a28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_245a2c:
    // 0x245a2c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_245a30:
    if (ctx->pc == 0x245A30u) {
        ctx->pc = 0x245A34u;
        goto label_245a34;
    }
    ctx->pc = 0x245A2Cu;
    {
        const bool branch_taken_0x245a2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x245a2c) {
            ctx->pc = 0x245A48u;
            goto label_245a48;
        }
    }
    ctx->pc = 0x245A34u;
label_245a34:
    // 0x245a34: 0xc06517c  jal         func_1945F0
label_245a38:
    if (ctx->pc == 0x245A38u) {
        ctx->pc = 0x245A3Cu;
        goto label_245a3c;
    }
    ctx->pc = 0x245A34u;
    SET_GPR_U32(ctx, 31, 0x245A3Cu);
    ctx->pc = 0x1945F0u;
    if (runtime->hasFunction(0x1945F0u)) {
        auto targetFn = runtime->lookupFunction(0x1945F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245A3Cu; }
        if (ctx->pc != 0x245A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGameDataPt__Fv_0x1945f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245A3Cu; }
        if (ctx->pc != 0x245A3Cu) { return; }
    }
    ctx->pc = 0x245A3Cu;
label_245a3c:
    // 0x245a3c: 0x94430020  lhu         $v1, 0x20($v0)
    ctx->pc = 0x245a3cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_245a40:
    // 0x245a40: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x245a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_245a44:
    // 0x245a44: 0xa44302fe  sh          $v1, 0x2FE($v0)
    ctx->pc = 0x245a44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 766), (uint16_t)GPR_U32(ctx, 3));
label_245a48:
    // 0x245a48: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x245a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_245a4c:
    // 0x245a4c: 0xc065708  jal         func_195C20
label_245a50:
    if (ctx->pc == 0x245A50u) {
        ctx->pc = 0x245A50u;
            // 0x245a50: 0x844402fe  lh          $a0, 0x2FE($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
        ctx->pc = 0x245A54u;
        goto label_245a54;
    }
    ctx->pc = 0x245A4Cu;
    SET_GPR_U32(ctx, 31, 0x245A54u);
    ctx->pc = 0x245A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245A4Cu;
            // 0x245a50: 0x844402fe  lh          $a0, 0x2FE($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C20u;
    if (runtime->hasFunction(0x195C20u)) {
        auto targetFn = runtime->lookupFunction(0x195C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245A54u; }
        if (ctx->pc != 0x245A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonItemData__Fi_0x195c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245A54u; }
        if (ctx->pc != 0x245A54u) { return; }
    }
    ctx->pc = 0x245A54u;
label_245a54:
    // 0x245a54: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x245a54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_245a58:
    // 0x245a58: 0xaf82967c  sw          $v0, -0x6984($gp)
    ctx->pc = 0x245a58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940284), GPR_U32(ctx, 2));
label_245a5c:
    // 0x245a5c: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x245a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_245a60:
    // 0x245a60: 0xc052d0c  jal         func_14B430
label_245a64:
    if (ctx->pc == 0x245A64u) {
        ctx->pc = 0x245A64u;
            // 0x245a64: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x245A68u;
        goto label_245a68;
    }
    ctx->pc = 0x245A60u;
    SET_GPR_U32(ctx, 31, 0x245A68u);
    ctx->pc = 0x245A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245A60u;
            // 0x245a64: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245A68u; }
        if (ctx->pc != 0x245A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245A68u; }
        if (ctx->pc != 0x245A68u) { return; }
    }
    ctx->pc = 0x245A68u;
label_245a68:
    // 0x245a68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_245a6c:
    if (ctx->pc == 0x245A6Cu) {
        ctx->pc = 0x245A6Cu;
            // 0x245a6c: 0x32030001  andi        $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x245A70u;
        goto label_245a70;
    }
    ctx->pc = 0x245A68u;
    {
        const bool branch_taken_0x245a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245A68u;
            // 0x245a6c: 0x32030001  andi        $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x245a68) {
            ctx->pc = 0x245A90u;
            goto label_245a90;
        }
    }
    ctx->pc = 0x245A70u;
label_245a70:
    // 0x245a70: 0xc094274  jal         func_2509D0
label_245a74:
    if (ctx->pc == 0x245A74u) {
        ctx->pc = 0x245A74u;
            // 0x245a74: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x245A78u;
        goto label_245a78;
    }
    ctx->pc = 0x245A70u;
    SET_GPR_U32(ctx, 31, 0x245A78u);
    ctx->pc = 0x245A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245A70u;
            // 0x245a74: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245A78u; }
        if (ctx->pc != 0x245A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245A78u; }
        if (ctx->pc != 0x245A78u) { return; }
    }
    ctx->pc = 0x245A78u;
label_245a78:
    // 0x245a78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x245a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245a7c:
    // 0x245a7c: 0xc0686e0  jal         func_1A1B80
label_245a80:
    if (ctx->pc == 0x245A80u) {
        ctx->pc = 0x245A80u;
            // 0x245a80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245A84u;
        goto label_245a84;
    }
    ctx->pc = 0x245A7Cu;
    SET_GPR_U32(ctx, 31, 0x245A84u);
    ctx->pc = 0x245A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245A7Cu;
            // 0x245a80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B80u;
    if (runtime->hasFunction(0x1A1B80u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245A84u; }
        if (ctx->pc != 0x245A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DebugGetItem__FP16CUserDataManageri_0x1a1b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245A84u; }
        if (ctx->pc != 0x245A84u) { return; }
    }
    ctx->pc = 0x245A84u;
label_245a84:
    // 0x245a84: 0xc08fc00  jal         func_23F000
label_245a88:
    if (ctx->pc == 0x245A88u) {
        ctx->pc = 0x245A8Cu;
        goto label_245a8c;
    }
    ctx->pc = 0x245A84u;
    SET_GPR_U32(ctx, 31, 0x245A8Cu);
    ctx->pc = 0x23F000u;
    if (runtime->hasFunction(0x23F000u)) {
        auto targetFn = runtime->lookupFunction(0x23F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245A8Cu; }
        if (ctx->pc != 0x245A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEnableHaveItemNum__Fv_0x23f000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245A8Cu; }
        if (ctx->pc != 0x245A8Cu) { return; }
    }
    ctx->pc = 0x245A8Cu;
label_245a8c:
    // 0x245a8c: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x245a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_245a90:
    // 0x245a90: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
label_245a94:
    if (ctx->pc == 0x245A94u) {
        ctx->pc = 0x245A94u;
            // 0x245a94: 0x32030080  andi        $v1, $s0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
        ctx->pc = 0x245A98u;
        goto label_245a98;
    }
    ctx->pc = 0x245A90u;
    {
        const bool branch_taken_0x245a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x245A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245A90u;
            // 0x245a94: 0x32030080  andi        $v1, $s0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x245a90) {
            ctx->pc = 0x245B90u;
            goto label_245b90;
        }
    }
    ctx->pc = 0x245A98u;
label_245a98:
    // 0x245a98: 0x8f83967c  lw          $v1, -0x6984($gp)
    ctx->pc = 0x245a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940284)));
label_245a9c:
    // 0x245a9c: 0x106004bc  beqz        $v1, . + 4 + (0x4BC << 2)
label_245aa0:
    if (ctx->pc == 0x245AA0u) {
        ctx->pc = 0x245AA4u;
        goto label_245aa4;
    }
    ctx->pc = 0x245A9Cu;
    {
        const bool branch_taken_0x245a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x245a9c) {
            ctx->pc = 0x246D90u;
            goto label_246d90;
        }
    }
    ctx->pc = 0x245AA4u;
label_245aa4:
    // 0x245aa4: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x245aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_245aa8:
    // 0x245aa8: 0x844502fe  lh          $a1, 0x2FE($v0)
    ctx->pc = 0x245aa8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
label_245aac:
    // 0x245aac: 0x90460300  lbu         $a2, 0x300($v0)
    ctx->pc = 0x245aacu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 768)));
label_245ab0:
    // 0x245ab0: 0xc067830  jal         func_19E0C0
label_245ab4:
    if (ctx->pc == 0x245AB4u) {
        ctx->pc = 0x245AB4u;
            // 0x245ab4: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->pc = 0x245AB8u;
        goto label_245ab8;
    }
    ctx->pc = 0x245AB0u;
    SET_GPR_U32(ctx, 31, 0x245AB8u);
    ctx->pc = 0x245AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245AB0u;
            // 0x245ab4: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E0C0u;
    if (runtime->hasFunction(0x19E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x19E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245AB8u; }
        if (ctx->pc != 0x245AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemNotOver__16CUserDataManagerFii_0x19e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245AB8u; }
        if (ctx->pc != 0x245AB8u) { return; }
    }
    ctx->pc = 0x245AB8u;
label_245ab8:
    // 0x245ab8: 0xc0684ec  jal         func_1A13B0
label_245abc:
    if (ctx->pc == 0x245ABCu) {
        ctx->pc = 0x245AC0u;
        goto label_245ac0;
    }
    ctx->pc = 0x245AB8u;
    SET_GPR_U32(ctx, 31, 0x245AC0u);
    ctx->pc = 0x1A13B0u;
    if (runtime->hasFunction(0x1A13B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A13B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245AC0u; }
        if (ctx->pc != 0x245AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckItemOver__Fv_0x1a13b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245AC0u; }
        if (ctx->pc != 0x245AC0u) { return; }
    }
    ctx->pc = 0x245AC0u;
label_245ac0:
    // 0x245ac0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_245ac4:
    if (ctx->pc == 0x245AC4u) {
        ctx->pc = 0x245AC8u;
        goto label_245ac8;
    }
    ctx->pc = 0x245AC0u;
    {
        const bool branch_taken_0x245ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245ac0) {
            ctx->pc = 0x245AF8u;
            goto label_245af8;
        }
    }
    ctx->pc = 0x245AC8u;
label_245ac8:
    // 0x245ac8: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x245ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_245acc:
    // 0x245acc: 0x84430050  lh          $v1, 0x50($v0)
    ctx->pc = 0x245accu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_245ad0:
    // 0x245ad0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_245ad4:
    if (ctx->pc == 0x245AD4u) {
        ctx->pc = 0x245AD4u;
            // 0x245ad4: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->pc = 0x245AD8u;
        goto label_245ad8;
    }
    ctx->pc = 0x245AD0u;
    {
        const bool branch_taken_0x245ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x245AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245AD0u;
            // 0x245ad4: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245ad0) {
            ctx->pc = 0x245AE4u;
            goto label_245ae4;
        }
    }
    ctx->pc = 0x245AD8u;
label_245ad8:
    // 0x245ad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x245ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_245adc:
    // 0x245adc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_245ae0:
    if (ctx->pc == 0x245AE0u) {
        ctx->pc = 0x245AE4u;
        goto label_245ae4;
    }
    ctx->pc = 0x245ADCu;
    {
        const bool branch_taken_0x245adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x245adc) {
            ctx->pc = 0x245AF8u;
            goto label_245af8;
        }
    }
    ctx->pc = 0x245AE4u;
label_245ae4:
    // 0x245ae4: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x245ae4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_245ae8:
    // 0x245ae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x245ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_245aec:
    // 0x245aec: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x245aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_245af0:
    // 0x245af0: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x245af0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_245af4:
    // 0x245af4: 0xa38294f0  sb          $v0, -0x6B10($gp)
    ctx->pc = 0x245af4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939888), (uint8_t)GPR_U32(ctx, 2));
label_245af8:
    // 0x245af8: 0xc08ca8c  jal         func_232A30
label_245afc:
    if (ctx->pc == 0x245AFCu) {
        ctx->pc = 0x245B00u;
        goto label_245b00;
    }
    ctx->pc = 0x245AF8u;
    SET_GPR_U32(ctx, 31, 0x245B00u);
    ctx->pc = 0x232A30u;
    if (runtime->hasFunction(0x232A30u)) {
        auto targetFn = runtime->lookupFunction(0x232A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245B00u; }
        if (ctx->pc != 0x245B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTrushMenu__Fv_0x232a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245B00u; }
        if (ctx->pc != 0x245B00u) { return; }
    }
    ctx->pc = 0x245B00u;
label_245b00:
    // 0x245b00: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_245b04:
    if (ctx->pc == 0x245B04u) {
        ctx->pc = 0x245B08u;
        goto label_245b08;
    }
    ctx->pc = 0x245B00u;
    {
        const bool branch_taken_0x245b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245b00) {
            ctx->pc = 0x245B4Cu;
            goto label_245b4c;
        }
    }
    ctx->pc = 0x245B08u;
label_245b08:
    // 0x245b08: 0xc068644  jal         func_1A1910
label_245b0c:
    if (ctx->pc == 0x245B0Cu) {
        ctx->pc = 0x245B0Cu;
            // 0x245b0c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x245B10u;
        goto label_245b10;
    }
    ctx->pc = 0x245B08u;
    SET_GPR_U32(ctx, 31, 0x245B10u);
    ctx->pc = 0x245B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245B08u;
            // 0x245b0c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245B10u; }
        if (ctx->pc != 0x245B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245B10u; }
        if (ctx->pc != 0x245B10u) { return; }
    }
    ctx->pc = 0x245B10u;
label_245b10:
    // 0x245b10: 0xa782835c  sh          $v0, -0x7CA4($gp)
    ctx->pc = 0x245b10u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935388), (uint16_t)GPR_U32(ctx, 2));
label_245b14:
    // 0x245b14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x245b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245b18:
    // 0x245b18: 0x8783835c  lh          $v1, -0x7CA4($gp)
    ctx->pc = 0x245b18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935388)));
label_245b1c:
    // 0x245b1c: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x245b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_245b20:
    // 0x245b20: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x245b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_245b24:
    // 0x245b24: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x245b24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_245b28:
    // 0x245b28: 0x0  nop
    ctx->pc = 0x245b28u;
    // NOP
label_245b2c:
    // 0x245b2c: 0x0  nop
    ctx->pc = 0x245b2cu;
    // NOP
label_245b30:
    // 0x245b30: 0x1010  mfhi        $v0
    ctx->pc = 0x245b30u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_245b34:
    // 0x245b34: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x245b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_245b38:
    // 0x245b38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x245b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_245b3c:
    // 0x245b3c: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x245b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
label_245b40:
    // 0x245b40: 0xc068644  jal         func_1A1910
label_245b44:
    if (ctx->pc == 0x245B44u) {
        ctx->pc = 0x245B44u;
            // 0x245b44: 0xa7829588  sh          $v0, -0x6A78($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294940040), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x245B48u;
        goto label_245b48;
    }
    ctx->pc = 0x245B40u;
    SET_GPR_U32(ctx, 31, 0x245B48u);
    ctx->pc = 0x245B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245B40u;
            // 0x245b44: 0xa7829588  sh          $v0, -0x6A78($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294940040), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245B48u; }
        if (ctx->pc != 0x245B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245B48u; }
        if (ctx->pc != 0x245B48u) { return; }
    }
    ctx->pc = 0x245B48u;
label_245b48:
    // 0x245b48: 0xa782958c  sh          $v0, -0x6A74($gp)
    ctx->pc = 0x245b48u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940044), (uint16_t)GPR_U32(ctx, 2));
label_245b4c:
    // 0x245b4c: 0x8783835c  lh          $v1, -0x7CA4($gp)
    ctx->pc = 0x245b4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935388)));
label_245b50:
    // 0x245b50: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x245b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_245b54:
    // 0x245b54: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x245b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_245b58:
    // 0x245b58: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x245b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_245b5c:
    // 0x245b5c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x245b5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_245b60:
    // 0x245b60: 0xa4230d56  sh          $v1, 0xD56($at)
    ctx->pc = 0x245b60u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 3414), (uint16_t)GPR_U32(ctx, 3));
label_245b64:
    // 0x245b64: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x245b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_245b68:
    // 0x245b68: 0x1010  mfhi        $v0
    ctx->pc = 0x245b68u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_245b6c:
    // 0x245b6c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x245b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_245b70:
    // 0x245b70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x245b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_245b74:
    // 0x245b74: 0xa7828360  sh          $v0, -0x7CA0($gp)
    ctx->pc = 0x245b74u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935392), (uint16_t)GPR_U32(ctx, 2));
label_245b78:
    // 0x245b78: 0x83828360  lb          $v0, -0x7CA0($gp)
    ctx->pc = 0x245b78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935392)));
label_245b7c:
    // 0x245b7c: 0xc08fc00  jal         func_23F000
label_245b80:
    if (ctx->pc == 0x245B80u) {
        ctx->pc = 0x245B80u;
            // 0x245b80: 0xa0220d5a  sb          $v0, 0xD5A($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 3418), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x245B84u;
        goto label_245b84;
    }
    ctx->pc = 0x245B7Cu;
    SET_GPR_U32(ctx, 31, 0x245B84u);
    ctx->pc = 0x245B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245B7Cu;
            // 0x245b80: 0xa0220d5a  sb          $v0, 0xD5A($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 3418), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F000u;
    if (runtime->hasFunction(0x23F000u)) {
        auto targetFn = runtime->lookupFunction(0x23F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245B84u; }
        if (ctx->pc != 0x245B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEnableHaveItemNum__Fv_0x23f000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245B84u; }
        if (ctx->pc != 0x245B84u) { return; }
    }
    ctx->pc = 0x245B84u;
label_245b84:
    // 0x245b84: 0x10000483  b           . + 4 + (0x483 << 2)
label_245b88:
    if (ctx->pc == 0x245B88u) {
        ctx->pc = 0x245B88u;
            // 0x245b88: 0x8f8495c0  lw          $a0, -0x6A40($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
        ctx->pc = 0x245B8Cu;
        goto label_245b8c;
    }
    ctx->pc = 0x245B84u;
    {
        const bool branch_taken_0x245b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245B84u;
            // 0x245b88: 0x8f8495c0  lw          $a0, -0x6A40($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b84) {
            ctx->pc = 0x246D94u;
            goto label_246d94;
        }
    }
    ctx->pc = 0x245B8Cu;
label_245b8c:
    // 0x245b8c: 0x32030080  andi        $v1, $s0, 0x80
    ctx->pc = 0x245b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
label_245b90:
    // 0x245b90: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_245b94:
    if (ctx->pc == 0x245B94u) {
        ctx->pc = 0x245B94u;
            // 0x245b94: 0x32030008  andi        $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x245B98u;
        goto label_245b98;
    }
    ctx->pc = 0x245B90u;
    {
        const bool branch_taken_0x245b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x245B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245B90u;
            // 0x245b94: 0x32030008  andi        $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b90) {
            ctx->pc = 0x245BC0u;
            goto label_245bc0;
        }
    }
    ctx->pc = 0x245B98u;
label_245b98:
    // 0x245b98: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x245b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
label_245b9c:
    // 0x245b9c: 0xc065550  jal         func_195540
label_245ba0:
    if (ctx->pc == 0x245BA0u) {
        ctx->pc = 0x245BA0u;
            // 0x245ba0: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->pc = 0x245BA4u;
        goto label_245ba4;
    }
    ctx->pc = 0x245B9Cu;
    SET_GPR_U32(ctx, 31, 0x245BA4u);
    ctx->pc = 0x245BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245B9Cu;
            // 0x245ba0: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195540u;
    if (runtime->hasFunction(0x195540u)) {
        auto targetFn = runtime->lookupFunction(0x195540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245BA4u; }
        if (ctx->pc != 0x245BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadData__9CGameDataFv_0x195540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245BA4u; }
        if (ctx->pc != 0x245BA4u) { return; }
    }
    ctx->pc = 0x245BA4u;
label_245ba4:
    // 0x245ba4: 0x8f858ad0  lw          $a1, -0x7530($gp)
    ctx->pc = 0x245ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_245ba8:
    // 0x245ba8: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x245ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
label_245bac:
    // 0x245bac: 0xc06558c  jal         func_195630
label_245bb0:
    if (ctx->pc == 0x245BB0u) {
        ctx->pc = 0x245BB0u;
            // 0x245bb0: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->pc = 0x245BB4u;
        goto label_245bb4;
    }
    ctx->pc = 0x245BACu;
    SET_GPR_U32(ctx, 31, 0x245BB4u);
    ctx->pc = 0x245BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245BACu;
            // 0x245bb0: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195630u;
    if (runtime->hasFunction(0x195630u)) {
        auto targetFn = runtime->lookupFunction(0x195630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245BB4u; }
        if (ctx->pc != 0x245BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadItemSystemMes__9CGameDataFi_0x195630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245BB4u; }
        if (ctx->pc != 0x245BB4u) { return; }
    }
    ctx->pc = 0x245BB4u;
label_245bb4:
    // 0x245bb4: 0x10000476  b           . + 4 + (0x476 << 2)
label_245bb8:
    if (ctx->pc == 0x245BB8u) {
        ctx->pc = 0x245BBCu;
        goto label_245bbc;
    }
    ctx->pc = 0x245BB4u;
    {
        const bool branch_taken_0x245bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245bb4) {
            ctx->pc = 0x246D90u;
            goto label_246d90;
        }
    }
    ctx->pc = 0x245BBCu;
label_245bbc:
    // 0x245bbc: 0x32030008  andi        $v1, $s0, 0x8
    ctx->pc = 0x245bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_245bc0:
    // 0x245bc0: 0x10600473  beqz        $v1, . + 4 + (0x473 << 2)
label_245bc4:
    if (ctx->pc == 0x245BC4u) {
        ctx->pc = 0x245BC8u;
        goto label_245bc8;
    }
    ctx->pc = 0x245BC0u;
    {
        const bool branch_taken_0x245bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x245bc0) {
            ctx->pc = 0x246D90u;
            goto label_246d90;
        }
    }
    ctx->pc = 0x245BC8u;
label_245bc8:
    // 0x245bc8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x245bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_245bcc:
    // 0x245bcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x245bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_245bd0:
    // 0x245bd0: 0xac20e304  sw          $zero, -0x1CFC($at)
    ctx->pc = 0x245bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959876), GPR_U32(ctx, 0));
label_245bd4:
    // 0x245bd4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x245bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_245bd8:
    // 0x245bd8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x245bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_245bdc:
    // 0x245bdc: 0xa38296cc  sb          $v0, -0x6934($gp)
    ctx->pc = 0x245bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940364), (uint8_t)GPR_U32(ctx, 2));
label_245be0:
    // 0x245be0: 0x2484e2e0  addiu       $a0, $a0, -0x1D20
    ctx->pc = 0x245be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959840));
label_245be4:
    // 0x245be4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x245be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_245be8:
    // 0x245be8: 0xac20e2fc  sw          $zero, -0x1D04($at)
    ctx->pc = 0x245be8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959868), GPR_U32(ctx, 0));
label_245bec:
    // 0x245bec: 0xaf8096f0  sw          $zero, -0x6910($gp)
    ctx->pc = 0x245becu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940400), GPR_U32(ctx, 0));
label_245bf0:
    // 0x245bf0: 0xc04e748  jal         func_139D20
label_245bf4:
    if (ctx->pc == 0x245BF4u) {
        ctx->pc = 0x245BF4u;
            // 0x245bf4: 0xaf8096ec  sw          $zero, -0x6914($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940396), GPR_U32(ctx, 0));
        ctx->pc = 0x245BF8u;
        goto label_245bf8;
    }
    ctx->pc = 0x245BF0u;
    SET_GPR_U32(ctx, 31, 0x245BF8u);
    ctx->pc = 0x245BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245BF0u;
            // 0x245bf4: 0xaf8096ec  sw          $zero, -0x6914($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940396), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245BF8u; }
        if (ctx->pc != 0x245BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245BF8u; }
        if (ctx->pc != 0x245BF8u) { return; }
    }
    ctx->pc = 0x245BF8u;
label_245bf8:
    // 0x245bf8: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x245bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_245bfc:
    // 0x245bfc: 0xc04e638  jal         func_1398E0
label_245c00:
    if (ctx->pc == 0x245C00u) {
        ctx->pc = 0x245C00u;
            // 0x245c00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245C04u;
        goto label_245c04;
    }
    ctx->pc = 0x245BFCu;
    SET_GPR_U32(ctx, 31, 0x245C04u);
    ctx->pc = 0x245C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245BFCu;
            // 0x245c00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245C04u; }
        if (ctx->pc != 0x245C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245C04u; }
        if (ctx->pc != 0x245C04u) { return; }
    }
    ctx->pc = 0x245C04u;
label_245c04:
    // 0x245c04: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_245c08:
    if (ctx->pc == 0x245C08u) {
        ctx->pc = 0x245C0Cu;
        goto label_245c0c;
    }
    ctx->pc = 0x245C04u;
    {
        const bool branch_taken_0x245c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245c04) {
            ctx->pc = 0x245C30u;
            goto label_245c30;
        }
    }
    ctx->pc = 0x245C0Cu;
label_245c0c:
    // 0x245c0c: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x245c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_245c10:
    // 0x245c10: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x245c10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_245c14:
    // 0x245c14: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x245c14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_245c18:
    // 0x245c18: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x245c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_245c1c:
    // 0x245c1c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x245c1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_245c20:
    // 0x245c20: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x245c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_245c24:
    // 0x245c24: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x245c24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_245c28:
    // 0x245c28: 0xc04c6a4  jal         func_131A90
label_245c2c:
    if (ctx->pc == 0x245C2Cu) {
        ctx->pc = 0x245C2Cu;
            // 0x245c2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245C30u;
        goto label_245c30;
    }
    ctx->pc = 0x245C28u;
    SET_GPR_U32(ctx, 31, 0x245C30u);
    ctx->pc = 0x245C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245C28u;
            // 0x245c2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A90u;
    if (runtime->hasFunction(0x131A90u)) {
        auto targetFn = runtime->lookupFunction(0x131A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245C30u; }
        if (ctx->pc != 0x245C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__15mgCCameraFollowFffff_0x131a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245C30u; }
        if (ctx->pc != 0x245C30u) { return; }
    }
    ctx->pc = 0x245C30u;
label_245c30:
    // 0x245c30: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x245c30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_245c34:
    // 0x245c34: 0xaf8296f0  sw          $v0, -0x6910($gp)
    ctx->pc = 0x245c34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940400), GPR_U32(ctx, 2));
label_245c38:
    // 0x245c38: 0x2484e2e0  addiu       $a0, $a0, -0x1D20
    ctx->pc = 0x245c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959840));
label_245c3c:
    // 0x245c3c: 0xc04e748  jal         func_139D20
label_245c40:
    if (ctx->pc == 0x245C40u) {
        ctx->pc = 0x245C40u;
            // 0x245c40: 0x24050105  addiu       $a1, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->pc = 0x245C44u;
        goto label_245c44;
    }
    ctx->pc = 0x245C3Cu;
    SET_GPR_U32(ctx, 31, 0x245C44u);
    ctx->pc = 0x245C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245C3Cu;
            // 0x245c40: 0x24050105  addiu       $a1, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245C44u; }
        if (ctx->pc != 0x245C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245C44u; }
        if (ctx->pc != 0x245C44u) { return; }
    }
    ctx->pc = 0x245C44u;
label_245c44:
    // 0x245c44: 0x24041030  addiu       $a0, $zero, 0x1030
    ctx->pc = 0x245c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4144));
label_245c48:
    // 0x245c48: 0xc04e638  jal         func_1398E0
label_245c4c:
    if (ctx->pc == 0x245C4Cu) {
        ctx->pc = 0x245C4Cu;
            // 0x245c4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245C50u;
        goto label_245c50;
    }
    ctx->pc = 0x245C48u;
    SET_GPR_U32(ctx, 31, 0x245C50u);
    ctx->pc = 0x245C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245C48u;
            // 0x245c4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245C50u; }
        if (ctx->pc != 0x245C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245C50u; }
        if (ctx->pc != 0x245C50u) { return; }
    }
    ctx->pc = 0x245C50u;
label_245c50:
    // 0x245c50: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_245c54:
    if (ctx->pc == 0x245C54u) {
        ctx->pc = 0x245C54u;
            // 0x245c54: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245C58u;
        goto label_245c58;
    }
    ctx->pc = 0x245C50u;
    {
        const bool branch_taken_0x245c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245C50u;
            // 0x245c54: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245c50) {
            ctx->pc = 0x245CF8u;
            goto label_245cf8;
        }
    }
    ctx->pc = 0x245C58u;
label_245c58:
    // 0x245c58: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x245c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_245c5c:
    // 0x245c5c: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x245c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_245c60:
    // 0x245c60: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x245c60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_245c64:
    // 0x245c64: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x245c64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_245c68:
    // 0x245c68: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x245c68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_245c6c:
    // 0x245c6c: 0x320f809  jalr        $t9
label_245c70:
    if (ctx->pc == 0x245C70u) {
        ctx->pc = 0x245C70u;
            // 0x245c70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245C74u;
        goto label_245c74;
    }
    ctx->pc = 0x245C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x245C74u);
        ctx->pc = 0x245C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245C6Cu;
            // 0x245c70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x245C74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x245C74u; }
            if (ctx->pc != 0x245C74u) { return; }
        }
        }
    }
    ctx->pc = 0x245C74u;
label_245c74:
    // 0x245c74: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x245c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_245c78:
    // 0x245c78: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x245c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_245c7c:
    // 0x245c7c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x245c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_245c80:
    // 0x245c80: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x245c80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_245c84:
    // 0x245c84: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x245c84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_245c88:
    // 0x245c88: 0x320f809  jalr        $t9
label_245c8c:
    if (ctx->pc == 0x245C8Cu) {
        ctx->pc = 0x245C8Cu;
            // 0x245c8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245C90u;
        goto label_245c90;
    }
    ctx->pc = 0x245C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x245C90u);
        ctx->pc = 0x245C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245C88u;
            // 0x245c8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x245C90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x245C90u; }
            if (ctx->pc != 0x245C90u) { return; }
        }
        }
    }
    ctx->pc = 0x245C90u;
label_245c90:
    // 0x245c90: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x245c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_245c94:
    // 0x245c94: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x245c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_245c98:
    // 0x245c98: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x245c98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_245c9c:
    // 0x245c9c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x245c9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_245ca0:
    // 0x245ca0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x245ca0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_245ca4:
    // 0x245ca4: 0x320f809  jalr        $t9
label_245ca8:
    if (ctx->pc == 0x245CA8u) {
        ctx->pc = 0x245CA8u;
            // 0x245ca8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245CACu;
        goto label_245cac;
    }
    ctx->pc = 0x245CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x245CACu);
        ctx->pc = 0x245CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245CA4u;
            // 0x245ca8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x245CACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x245CACu; }
            if (ctx->pc != 0x245CACu) { return; }
        }
        }
    }
    ctx->pc = 0x245CACu;
label_245cac:
    // 0x245cac: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x245cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_245cb0:
    // 0x245cb0: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x245cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_245cb4:
    // 0x245cb4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x245cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_245cb8:
    // 0x245cb8: 0xae40035c  sw          $zero, 0x35C($s2)
    ctx->pc = 0x245cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 860), GPR_U32(ctx, 0));
label_245cbc:
    // 0x245cbc: 0xae400364  sw          $zero, 0x364($s2)
    ctx->pc = 0x245cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 868), GPR_U32(ctx, 0));
label_245cc0:
    // 0x245cc0: 0xae400360  sw          $zero, 0x360($s2)
    ctx->pc = 0x245cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 864), GPR_U32(ctx, 0));
label_245cc4:
    // 0x245cc4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x245cc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_245cc8:
    // 0x245cc8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x245cc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_245ccc:
    // 0x245ccc: 0x320f809  jalr        $t9
label_245cd0:
    if (ctx->pc == 0x245CD0u) {
        ctx->pc = 0x245CD0u;
            // 0x245cd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245CD4u;
        goto label_245cd4;
    }
    ctx->pc = 0x245CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x245CD4u);
        ctx->pc = 0x245CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245CCCu;
            // 0x245cd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x245CD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x245CD4u; }
            if (ctx->pc != 0x245CD4u) { return; }
        }
        }
    }
    ctx->pc = 0x245CD4u;
label_245cd4:
    // 0x245cd4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x245cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_245cd8:
    // 0x245cd8: 0x264406bc  addiu       $a0, $s2, 0x6BC
    ctx->pc = 0x245cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1724));
label_245cdc:
    // 0x245cdc: 0x244256f0  addiu       $v0, $v0, 0x56F0
    ctx->pc = 0x245cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22256));
label_245ce0:
    // 0x245ce0: 0xc061b34  jal         func_186CD0
label_245ce4:
    if (ctx->pc == 0x245CE4u) {
        ctx->pc = 0x245CE4u;
            // 0x245ce4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x245CE8u;
        goto label_245ce8;
    }
    ctx->pc = 0x245CE0u;
    SET_GPR_U32(ctx, 31, 0x245CE8u);
    ctx->pc = 0x245CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245CE0u;
            // 0x245ce4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186CD0u;
    if (runtime->hasFunction(0x186CD0u)) {
        auto targetFn = runtime->lookupFunction(0x186CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245CE8u; }
        if (ctx->pc != 0x245CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CRunScriptFv_0x186cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245CE8u; }
        if (ctx->pc != 0x245CE8u) { return; }
    }
    ctx->pc = 0x245CE8u;
label_245ce8:
    // 0x245ce8: 0x26440910  addiu       $a0, $s2, 0x910
    ctx->pc = 0x245ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2320));
label_245cec:
    // 0x245cec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x245cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245cf0:
    // 0x245cf0: 0xc049c86  jal         func_127218
label_245cf4:
    if (ctx->pc == 0x245CF4u) {
        ctx->pc = 0x245CF4u;
            // 0x245cf4: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x245CF8u;
        goto label_245cf8;
    }
    ctx->pc = 0x245CF0u;
    SET_GPR_U32(ctx, 31, 0x245CF8u);
    ctx->pc = 0x245CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245CF0u;
            // 0x245cf4: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245CF8u; }
        if (ctx->pc != 0x245CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245CF8u; }
        if (ctx->pc != 0x245CF8u) { return; }
    }
    ctx->pc = 0x245CF8u;
label_245cf8:
    // 0x245cf8: 0xaf9296ec  sw          $s2, -0x6914($gp)
    ctx->pc = 0x245cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940396), GPR_U32(ctx, 18));
label_245cfc:
    // 0x245cfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x245cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_245d00:
    // 0x245d00: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x245d00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_245d04:
    // 0x245d04: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x245d04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_245d08:
    // 0x245d08: 0x320f809  jalr        $t9
label_245d0c:
    if (ctx->pc == 0x245D0Cu) {
        ctx->pc = 0x245D0Cu;
            // 0x245d0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245D10u;
        goto label_245d10;
    }
    ctx->pc = 0x245D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x245D10u);
        ctx->pc = 0x245D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245D08u;
            // 0x245d0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x245D10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x245D10u; }
            if (ctx->pc != 0x245D10u) { return; }
        }
        }
    }
    ctx->pc = 0x245D10u;
label_245d10:
    // 0x245d10: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x245d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_245d14:
    // 0x245d14: 0xc04e780  jal         func_139E00
label_245d18:
    if (ctx->pc == 0x245D18u) {
        ctx->pc = 0x245D18u;
            // 0x245d18: 0x2484e2e0  addiu       $a0, $a0, -0x1D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959840));
        ctx->pc = 0x245D1Cu;
        goto label_245d1c;
    }
    ctx->pc = 0x245D14u;
    SET_GPR_U32(ctx, 31, 0x245D1Cu);
    ctx->pc = 0x245D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245D14u;
            // 0x245d18: 0x2484e2e0  addiu       $a0, $a0, -0x1D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245D1Cu; }
        if (ctx->pc != 0x245D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245D1Cu; }
        if (ctx->pc != 0x245D1Cu) { return; }
    }
    ctx->pc = 0x245D1Cu;
label_245d1c:
    // 0x245d1c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x245d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_245d20:
    // 0x245d20: 0x8f82967c  lw          $v0, -0x6984($gp)
    ctx->pc = 0x245d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940284)));
label_245d24:
    // 0x245d24: 0x8c24e304  lw          $a0, -0x1CFC($at)
    ctx->pc = 0x245d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959876)));
label_245d28:
    // 0x245d28: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x245d28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245d2c:
    // 0x245d2c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x245d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_245d30:
    // 0x245d30: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x245d30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_245d34:
    // 0x245d34: 0x8c23e300  lw          $v1, -0x1D00($at)
    ctx->pc = 0x245d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959872)));
label_245d38:
    // 0x245d38: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_245d3c:
    if (ctx->pc == 0x245D3Cu) {
        ctx->pc = 0x245D3Cu;
            // 0x245d3c: 0x649821  addu        $s3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x245D40u;
        goto label_245d40;
    }
    ctx->pc = 0x245D38u;
    {
        const bool branch_taken_0x245d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245D38u;
            // 0x245d3c: 0x649821  addu        $s3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d38) {
            ctx->pc = 0x245E90u;
            goto label_245e90;
        }
    }
    ctx->pc = 0x245D40u;
label_245d40:
    // 0x245d40: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x245d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_245d44:
    // 0x245d44: 0x844402fe  lh          $a0, 0x2FE($v0)
    ctx->pc = 0x245d44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
label_245d48:
    // 0x245d48: 0xc065750  jal         func_195D40
label_245d4c:
    if (ctx->pc == 0x245D4Cu) {
        ctx->pc = 0x245D4Cu;
            // 0x245d4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245D50u;
        goto label_245d50;
    }
    ctx->pc = 0x245D48u;
    SET_GPR_U32(ctx, 31, 0x245D50u);
    ctx->pc = 0x245D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245D48u;
            // 0x245d4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195D40u;
    if (runtime->hasFunction(0x195D40u)) {
        auto targetFn = runtime->lookupFunction(0x195D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245D50u; }
        if (ctx->pc != 0x245D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFilePath__Fii_0x195d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245D50u; }
        if (ctx->pc != 0x245D50u) { return; }
    }
    ctx->pc = 0x245D50u;
label_245d50:
    // 0x245d50: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_245d54:
    if (ctx->pc == 0x245D54u) {
        ctx->pc = 0x245D58u;
        goto label_245d58;
    }
    ctx->pc = 0x245D50u;
    {
        const bool branch_taken_0x245d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245d50) {
            ctx->pc = 0x245E90u;
            goto label_245e90;
        }
    }
    ctx->pc = 0x245D58u;
label_245d58:
    // 0x245d58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x245d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245d5c:
    // 0x245d5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x245d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_245d60:
    // 0x245d60: 0x27a600bc  addiu       $a2, $sp, 0xBC
    ctx->pc = 0x245d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_245d64:
    // 0x245d64: 0xc0524dc  jal         func_149370
label_245d68:
    if (ctx->pc == 0x245D68u) {
        ctx->pc = 0x245D68u;
            // 0x245d68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245D6Cu;
        goto label_245d6c;
    }
    ctx->pc = 0x245D64u;
    SET_GPR_U32(ctx, 31, 0x245D6Cu);
    ctx->pc = 0x245D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245D64u;
            // 0x245d68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245D6Cu; }
        if (ctx->pc != 0x245D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245D6Cu; }
        if (ctx->pc != 0x245D6Cu) { return; }
    }
    ctx->pc = 0x245D6Cu;
label_245d6c:
    // 0x245d6c: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_245d70:
    if (ctx->pc == 0x245D70u) {
        ctx->pc = 0x245D74u;
        goto label_245d74;
    }
    ctx->pc = 0x245D6Cu;
    {
        const bool branch_taken_0x245d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245d6c) {
            ctx->pc = 0x245E90u;
            goto label_245e90;
        }
    }
    ctx->pc = 0x245D74u;
label_245d74:
    // 0x245d74: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x245d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_245d78:
    // 0x245d78: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_245d7c:
    if (ctx->pc == 0x245D7Cu) {
        ctx->pc = 0x245D7Cu;
            // 0x245d7c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x245D80u;
        goto label_245d80;
    }
    ctx->pc = 0x245D78u;
    {
        const bool branch_taken_0x245d78 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x245D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245D78u;
            // 0x245d7c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d78) {
            ctx->pc = 0x245D88u;
            goto label_245d88;
        }
    }
    ctx->pc = 0x245D80u;
label_245d80:
    // 0x245d80: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x245d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_245d84:
    // 0x245d84: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x245d84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_245d88:
    // 0x245d88: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x245d88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_245d8c:
    // 0x245d8c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x245d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_245d90:
    // 0x245d90: 0xc04e748  jal         func_139D20
label_245d94:
    if (ctx->pc == 0x245D94u) {
        ctx->pc = 0x245D94u;
            // 0x245d94: 0x2484e2e0  addiu       $a0, $a0, -0x1D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959840));
        ctx->pc = 0x245D98u;
        goto label_245d98;
    }
    ctx->pc = 0x245D90u;
    SET_GPR_U32(ctx, 31, 0x245D98u);
    ctx->pc = 0x245D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245D90u;
            // 0x245d94: 0x2484e2e0  addiu       $a0, $a0, -0x1D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245D98u; }
        if (ctx->pc != 0x245D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245D98u; }
        if (ctx->pc != 0x245D98u) { return; }
    }
    ctx->pc = 0x245D98u;
label_245d98:
    // 0x245d98: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x245d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_245d9c:
    // 0x245d9c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x245d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_245da0:
    // 0x245da0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x245da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_245da4:
    // 0x245da4: 0x8c32e304  lw          $s2, -0x1CFC($at)
    ctx->pc = 0x245da4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959876)));
label_245da8:
    // 0x245da8: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x245da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_245dac:
    // 0x245dac: 0xc04b950  jal         func_12E540
label_245db0:
    if (ctx->pc == 0x245DB0u) {
        ctx->pc = 0x245DB0u;
            // 0x245db0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->pc = 0x245DB4u;
        goto label_245db4;
    }
    ctx->pc = 0x245DACu;
    SET_GPR_U32(ctx, 31, 0x245DB4u);
    ctx->pc = 0x245DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245DACu;
            // 0x245db0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245DB4u; }
        if (ctx->pc != 0x245DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245DB4u; }
        if (ctx->pc != 0x245DB4u) { return; }
    }
    ctx->pc = 0x245DB4u;
label_245db4:
    // 0x245db4: 0x8f8496ec  lw          $a0, -0x6914($gp)
    ctx->pc = 0x245db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940396)));
label_245db8:
    // 0x245db8: 0x3c0701ed  lui         $a3, 0x1ED
    ctx->pc = 0x245db8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)493 << 16));
label_245dbc:
    // 0x245dbc: 0x24e7e2e0  addiu       $a3, $a3, -0x1D20
    ctx->pc = 0x245dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959840));
label_245dc0:
    // 0x245dc0: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x245dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_245dc4:
    // 0x245dc4: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x245dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_245dc8:
    // 0x245dc8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x245dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_245dcc:
    // 0x245dcc: 0x24c6af78  addiu       $a2, $a2, -0x5088
    ctx->pc = 0x245dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946680));
label_245dd0:
    // 0x245dd0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x245dd0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245dd4:
    // 0x245dd4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x245dd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_245dd8:
    // 0x245dd8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x245dd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_245ddc:
    // 0x245ddc: 0x8c4a0028  lw          $t2, 0x28($v0)
    ctx->pc = 0x245ddcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_245de0:
    // 0x245de0: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x245de0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_245de4:
    // 0x245de4: 0x320f809  jalr        $t9
label_245de8:
    if (ctx->pc == 0x245DE8u) {
        ctx->pc = 0x245DE8u;
            // 0x245de8: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245DECu;
        goto label_245dec;
    }
    ctx->pc = 0x245DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x245DECu);
        ctx->pc = 0x245DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245DE4u;
            // 0x245de8: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x245DECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x245DECu; }
            if (ctx->pc != 0x245DECu) { return; }
        }
        }
    }
    ctx->pc = 0x245DECu;
label_245dec:
    // 0x245dec: 0x8f8496ec  lw          $a0, -0x6914($gp)
    ctx->pc = 0x245decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940396)));
label_245df0:
    // 0x245df0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x245df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_245df4:
    // 0x245df4: 0x0  nop
    ctx->pc = 0x245df4u;
    // NOP
label_245df8:
    // 0x245df8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x245df8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_245dfc:
    // 0x245dfc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x245dfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_245e00:
    // 0x245e00: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x245e00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_245e04:
    // 0x245e04: 0x320f809  jalr        $t9
label_245e08:
    if (ctx->pc == 0x245E08u) {
        ctx->pc = 0x245E08u;
            // 0x245e08: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x245E0Cu;
        goto label_245e0c;
    }
    ctx->pc = 0x245E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x245E0Cu);
        ctx->pc = 0x245E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245E04u;
            // 0x245e08: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x245E0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x245E0Cu; }
            if (ctx->pc != 0x245E0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x245E0Cu;
label_245e0c:
    // 0x245e0c: 0x8f8496ec  lw          $a0, -0x6914($gp)
    ctx->pc = 0x245e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940396)));
label_245e10:
    // 0x245e10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x245e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_245e14:
    // 0x245e14: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x245e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_245e18:
    // 0x245e18: 0x0  nop
    ctx->pc = 0x245e18u;
    // NOP
label_245e1c:
    // 0x245e1c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x245e1cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_245e20:
    // 0x245e20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x245e20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_245e24:
    // 0x245e24: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x245e24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_245e28:
    // 0x245e28: 0x320f809  jalr        $t9
label_245e2c:
    if (ctx->pc == 0x245E2Cu) {
        ctx->pc = 0x245E2Cu;
            // 0x245e2c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x245E30u;
        goto label_245e30;
    }
    ctx->pc = 0x245E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x245E30u);
        ctx->pc = 0x245E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245E28u;
            // 0x245e2c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x245E30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x245E30u; }
            if (ctx->pc != 0x245E30u) { return; }
        }
        }
    }
    ctx->pc = 0x245E30u;
label_245e30:
    // 0x245e30: 0x8f8496f0  lw          $a0, -0x6910($gp)
    ctx->pc = 0x245e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940400)));
label_245e34:
    // 0x245e34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x245e34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_245e38:
    // 0x245e38: 0x0  nop
    ctx->pc = 0x245e38u;
    // NOP
label_245e3c:
    // 0x245e3c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x245e3cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_245e40:
    // 0x245e40: 0xc04c510  jal         func_131440
label_245e44:
    if (ctx->pc == 0x245E44u) {
        ctx->pc = 0x245E44u;
            // 0x245e44: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x245E48u;
        goto label_245e48;
    }
    ctx->pc = 0x245E40u;
    SET_GPR_U32(ctx, 31, 0x245E48u);
    ctx->pc = 0x245E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245E40u;
            // 0x245e44: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131440u;
    if (runtime->hasFunction(0x131440u)) {
        auto targetFn = runtime->lookupFunction(0x131440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245E48u; }
        if (ctx->pc != 0x245E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFfff_0x131440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245E48u; }
        if (ctx->pc != 0x245E48u) { return; }
    }
    ctx->pc = 0x245E48u;
label_245e48:
    // 0x245e48: 0x8f8496f0  lw          $a0, -0x6910($gp)
    ctx->pc = 0x245e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940400)));
label_245e4c:
    // 0x245e4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x245e4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_245e50:
    // 0x245e50: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x245e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_245e54:
    // 0x245e54: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x245e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_245e58:
    // 0x245e58: 0xc04c4f8  jal         func_1313E0
label_245e5c:
    if (ctx->pc == 0x245E5Cu) {
        ctx->pc = 0x245E5Cu;
            // 0x245e5c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x245E60u;
        goto label_245e60;
    }
    ctx->pc = 0x245E58u;
    SET_GPR_U32(ctx, 31, 0x245E60u);
    ctx->pc = 0x245E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245E58u;
            // 0x245e5c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1313E0u;
    if (runtime->hasFunction(0x1313E0u)) {
        auto targetFn = runtime->lookupFunction(0x1313E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245E60u; }
        if (ctx->pc != 0x245E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFfff_0x1313e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245E60u; }
        if (ctx->pc != 0x245E60u) { return; }
    }
    ctx->pc = 0x245E60u;
label_245e60:
    // 0x245e60: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x245e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_245e64:
    // 0x245e64: 0x8c22e304  lw          $v0, -0x1CFC($at)
    ctx->pc = 0x245e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959876)));
label_245e68:
    // 0x245e68: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x245e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_245e6c:
    // 0x245e6c: 0xaf8296e8  sw          $v0, -0x6918($gp)
    ctx->pc = 0x245e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940392), GPR_U32(ctx, 2));
label_245e70:
    // 0x245e70: 0x8f8296e8  lw          $v0, -0x6918($gp)
    ctx->pc = 0x245e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940392)));
label_245e74:
    // 0x245e74: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x245e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_245e78:
    // 0x245e78: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_245e7c:
    if (ctx->pc == 0x245E7Cu) {
        ctx->pc = 0x245E7Cu;
            // 0x245e7c: 0x31283  sra         $v0, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 10));
        ctx->pc = 0x245E80u;
        goto label_245e80;
    }
    ctx->pc = 0x245E78u;
    {
        const bool branch_taken_0x245e78 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x245E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245E78u;
            // 0x245e7c: 0x31283  sra         $v0, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e78) {
            ctx->pc = 0x245E88u;
            goto label_245e88;
        }
    }
    ctx->pc = 0x245E80u;
label_245e80:
    // 0x245e80: 0x246203ff  addiu       $v0, $v1, 0x3FF
    ctx->pc = 0x245e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
label_245e84:
    // 0x245e84: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x245e84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
label_245e88:
    // 0x245e88: 0xaf8296e8  sw          $v0, -0x6918($gp)
    ctx->pc = 0x245e88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940392), GPR_U32(ctx, 2));
label_245e8c:
    // 0x245e8c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x245e8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_245e90:
    // 0x245e90: 0x16400058  bnez        $s2, . + 4 + (0x58 << 2)
label_245e94:
    if (ctx->pc == 0x245E94u) {
        ctx->pc = 0x245E98u;
        goto label_245e98;
    }
    ctx->pc = 0x245E90u;
    {
        const bool branch_taken_0x245e90 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x245e90) {
            ctx->pc = 0x245FF4u;
            goto label_245ff4;
        }
    }
    ctx->pc = 0x245E98u;
label_245e98:
    // 0x245e98: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x245e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_245e9c:
    // 0x245e9c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x245e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_245ea0:
    // 0x245ea0: 0x8c23e304  lw          $v1, -0x1CFC($at)
    ctx->pc = 0x245ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959876)));
label_245ea4:
    // 0x245ea4: 0x248410a8  addiu       $a0, $a0, 0x10A8
    ctx->pc = 0x245ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4264));
label_245ea8:
    // 0x245ea8: 0x27a600bc  addiu       $a2, $sp, 0xBC
    ctx->pc = 0x245ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_245eac:
    // 0x245eac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x245eacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245eb0:
    // 0x245eb0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x245eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_245eb4:
    // 0x245eb4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x245eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_245eb8:
    // 0x245eb8: 0x8c22e300  lw          $v0, -0x1D00($at)
    ctx->pc = 0x245eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959872)));
label_245ebc:
    // 0x245ebc: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x245ebcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_245ec0:
    // 0x245ec0: 0xc0524dc  jal         func_149370
label_245ec4:
    if (ctx->pc == 0x245EC4u) {
        ctx->pc = 0x245EC4u;
            // 0x245ec4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245EC8u;
        goto label_245ec8;
    }
    ctx->pc = 0x245EC0u;
    SET_GPR_U32(ctx, 31, 0x245EC8u);
    ctx->pc = 0x245EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245EC0u;
            // 0x245ec4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245EC8u; }
        if (ctx->pc != 0x245EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245EC8u; }
        if (ctx->pc != 0x245EC8u) { return; }
    }
    ctx->pc = 0x245EC8u;
label_245ec8:
    // 0x245ec8: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x245ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_245ecc:
    // 0x245ecc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_245ed0:
    if (ctx->pc == 0x245ED0u) {
        ctx->pc = 0x245ED0u;
            // 0x245ed0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x245ED4u;
        goto label_245ed4;
    }
    ctx->pc = 0x245ECCu;
    {
        const bool branch_taken_0x245ecc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x245ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245ECCu;
            // 0x245ed0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245ecc) {
            ctx->pc = 0x245EDCu;
            goto label_245edc;
        }
    }
    ctx->pc = 0x245ED4u;
label_245ed4:
    // 0x245ed4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x245ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_245ed8:
    // 0x245ed8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x245ed8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_245edc:
    // 0x245edc: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x245edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_245ee0:
    // 0x245ee0: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x245ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_245ee4:
    // 0x245ee4: 0xc04e748  jal         func_139D20
label_245ee8:
    if (ctx->pc == 0x245EE8u) {
        ctx->pc = 0x245EE8u;
            // 0x245ee8: 0x2484e2e0  addiu       $a0, $a0, -0x1D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959840));
        ctx->pc = 0x245EECu;
        goto label_245eec;
    }
    ctx->pc = 0x245EE4u;
    SET_GPR_U32(ctx, 31, 0x245EECu);
    ctx->pc = 0x245EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245EE4u;
            // 0x245ee8: 0x2484e2e0  addiu       $a0, $a0, -0x1D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245EECu; }
        if (ctx->pc != 0x245EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245EECu; }
        if (ctx->pc != 0x245EECu) { return; }
    }
    ctx->pc = 0x245EECu;
label_245eec:
    // 0x245eec: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x245eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_245ef0:
    // 0x245ef0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x245ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_245ef4:
    // 0x245ef4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x245ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_245ef8:
    // 0x245ef8: 0x8c33e304  lw          $s3, -0x1CFC($at)
    ctx->pc = 0x245ef8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959876)));
label_245efc:
    // 0x245efc: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x245efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_245f00:
    // 0x245f00: 0xc04b950  jal         func_12E540
label_245f04:
    if (ctx->pc == 0x245F04u) {
        ctx->pc = 0x245F04u;
            // 0x245f04: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->pc = 0x245F08u;
        goto label_245f08;
    }
    ctx->pc = 0x245F00u;
    SET_GPR_U32(ctx, 31, 0x245F08u);
    ctx->pc = 0x245F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245F00u;
            // 0x245f04: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245F08u; }
        if (ctx->pc != 0x245F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245F08u; }
        if (ctx->pc != 0x245F08u) { return; }
    }
    ctx->pc = 0x245F08u;
label_245f08:
    // 0x245f08: 0x8f8496ec  lw          $a0, -0x6914($gp)
    ctx->pc = 0x245f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940396)));
label_245f0c:
    // 0x245f0c: 0x3c0701ed  lui         $a3, 0x1ED
    ctx->pc = 0x245f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)493 << 16));
label_245f10:
    // 0x245f10: 0x24e7e2e0  addiu       $a3, $a3, -0x1D20
    ctx->pc = 0x245f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959840));
label_245f14:
    // 0x245f14: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x245f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_245f18:
    // 0x245f18: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x245f18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_245f1c:
    // 0x245f1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x245f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_245f20:
    // 0x245f20: 0x24c6af78  addiu       $a2, $a2, -0x5088
    ctx->pc = 0x245f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946680));
label_245f24:
    // 0x245f24: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x245f24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245f28:
    // 0x245f28: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x245f28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_245f2c:
    // 0x245f2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x245f2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_245f30:
    // 0x245f30: 0x8c4a0028  lw          $t2, 0x28($v0)
    ctx->pc = 0x245f30u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_245f34:
    // 0x245f34: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x245f34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_245f38:
    // 0x245f38: 0x320f809  jalr        $t9
label_245f3c:
    if (ctx->pc == 0x245F3Cu) {
        ctx->pc = 0x245F3Cu;
            // 0x245f3c: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245F40u;
        goto label_245f40;
    }
    ctx->pc = 0x245F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x245F40u);
        ctx->pc = 0x245F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245F38u;
            // 0x245f3c: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x245F40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x245F40u; }
            if (ctx->pc != 0x245F40u) { return; }
        }
        }
    }
    ctx->pc = 0x245F40u;
label_245f40:
    // 0x245f40: 0x8f8496ec  lw          $a0, -0x6914($gp)
    ctx->pc = 0x245f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940396)));
label_245f44:
    // 0x245f44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x245f44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_245f48:
    // 0x245f48: 0x0  nop
    ctx->pc = 0x245f48u;
    // NOP
label_245f4c:
    // 0x245f4c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x245f4cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_245f50:
    // 0x245f50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x245f50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_245f54:
    // 0x245f54: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x245f54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_245f58:
    // 0x245f58: 0x320f809  jalr        $t9
label_245f5c:
    if (ctx->pc == 0x245F5Cu) {
        ctx->pc = 0x245F5Cu;
            // 0x245f5c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x245F60u;
        goto label_245f60;
    }
    ctx->pc = 0x245F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x245F60u);
        ctx->pc = 0x245F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245F58u;
            // 0x245f5c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x245F60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x245F60u; }
            if (ctx->pc != 0x245F60u) { return; }
        }
        }
    }
    ctx->pc = 0x245F60u;
label_245f60:
    // 0x245f60: 0x8f8496ec  lw          $a0, -0x6914($gp)
    ctx->pc = 0x245f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940396)));
label_245f64:
    // 0x245f64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x245f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_245f68:
    // 0x245f68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x245f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_245f6c:
    // 0x245f6c: 0x0  nop
    ctx->pc = 0x245f6cu;
    // NOP
label_245f70:
    // 0x245f70: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x245f70u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_245f74:
    // 0x245f74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x245f74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_245f78:
    // 0x245f78: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x245f78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_245f7c:
    // 0x245f7c: 0x320f809  jalr        $t9
label_245f80:
    if (ctx->pc == 0x245F80u) {
        ctx->pc = 0x245F80u;
            // 0x245f80: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x245F84u;
        goto label_245f84;
    }
    ctx->pc = 0x245F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x245F84u);
        ctx->pc = 0x245F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245F7Cu;
            // 0x245f80: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x245F84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x245F84u; }
            if (ctx->pc != 0x245F84u) { return; }
        }
        }
    }
    ctx->pc = 0x245F84u;
label_245f84:
    // 0x245f84: 0x8f8496ec  lw          $a0, -0x6914($gp)
    ctx->pc = 0x245f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940396)));
label_245f88:
    // 0x245f88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x245f88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_245f8c:
    // 0x245f8c: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x245f8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_245f90:
    // 0x245f90: 0x320f809  jalr        $t9
label_245f94:
    if (ctx->pc == 0x245F94u) {
        ctx->pc = 0x245F98u;
        goto label_245f98;
    }
    ctx->pc = 0x245F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x245F98u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x245F98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x245F98u; }
            if (ctx->pc != 0x245F98u) { return; }
        }
        }
    }
    ctx->pc = 0x245F98u;
label_245f98:
    // 0x245f98: 0x8f8496f0  lw          $a0, -0x6910($gp)
    ctx->pc = 0x245f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940400)));
label_245f9c:
    // 0x245f9c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x245f9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_245fa0:
    // 0x245fa0: 0x0  nop
    ctx->pc = 0x245fa0u;
    // NOP
label_245fa4:
    // 0x245fa4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x245fa4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_245fa8:
    // 0x245fa8: 0xc04c510  jal         func_131440
label_245fac:
    if (ctx->pc == 0x245FACu) {
        ctx->pc = 0x245FACu;
            // 0x245fac: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x245FB0u;
        goto label_245fb0;
    }
    ctx->pc = 0x245FA8u;
    SET_GPR_U32(ctx, 31, 0x245FB0u);
    ctx->pc = 0x245FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245FA8u;
            // 0x245fac: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131440u;
    if (runtime->hasFunction(0x131440u)) {
        auto targetFn = runtime->lookupFunction(0x131440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245FB0u; }
        if (ctx->pc != 0x245FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFfff_0x131440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245FB0u; }
        if (ctx->pc != 0x245FB0u) { return; }
    }
    ctx->pc = 0x245FB0u;
label_245fb0:
    // 0x245fb0: 0x8f8496f0  lw          $a0, -0x6910($gp)
    ctx->pc = 0x245fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940400)));
label_245fb4:
    // 0x245fb4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x245fb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_245fb8:
    // 0x245fb8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x245fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_245fbc:
    // 0x245fbc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x245fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_245fc0:
    // 0x245fc0: 0xc04c4f8  jal         func_1313E0
label_245fc4:
    if (ctx->pc == 0x245FC4u) {
        ctx->pc = 0x245FC4u;
            // 0x245fc4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x245FC8u;
        goto label_245fc8;
    }
    ctx->pc = 0x245FC0u;
    SET_GPR_U32(ctx, 31, 0x245FC8u);
    ctx->pc = 0x245FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245FC0u;
            // 0x245fc4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1313E0u;
    if (runtime->hasFunction(0x1313E0u)) {
        auto targetFn = runtime->lookupFunction(0x1313E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245FC8u; }
        if (ctx->pc != 0x245FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFfff_0x1313e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245FC8u; }
        if (ctx->pc != 0x245FC8u) { return; }
    }
    ctx->pc = 0x245FC8u;
label_245fc8:
    // 0x245fc8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x245fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_245fcc:
    // 0x245fcc: 0x8c22e304  lw          $v0, -0x1CFC($at)
    ctx->pc = 0x245fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959876)));
label_245fd0:
    // 0x245fd0: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x245fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_245fd4:
    // 0x245fd4: 0xaf8296e8  sw          $v0, -0x6918($gp)
    ctx->pc = 0x245fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940392), GPR_U32(ctx, 2));
label_245fd8:
    // 0x245fd8: 0x8f8296e8  lw          $v0, -0x6918($gp)
    ctx->pc = 0x245fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940392)));
label_245fdc:
    // 0x245fdc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x245fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_245fe0:
    // 0x245fe0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_245fe4:
    if (ctx->pc == 0x245FE4u) {
        ctx->pc = 0x245FE4u;
            // 0x245fe4: 0x31283  sra         $v0, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 10));
        ctx->pc = 0x245FE8u;
        goto label_245fe8;
    }
    ctx->pc = 0x245FE0u;
    {
        const bool branch_taken_0x245fe0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x245FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245FE0u;
            // 0x245fe4: 0x31283  sra         $v0, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245fe0) {
            ctx->pc = 0x245FF0u;
            goto label_245ff0;
        }
    }
    ctx->pc = 0x245FE8u;
label_245fe8:
    // 0x245fe8: 0x246203ff  addiu       $v0, $v1, 0x3FF
    ctx->pc = 0x245fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
label_245fec:
    // 0x245fec: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x245fecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
label_245ff0:
    // 0x245ff0: 0xaf8296e8  sw          $v0, -0x6918($gp)
    ctx->pc = 0x245ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940392), GPR_U32(ctx, 2));
label_245ff4:
    // 0x245ff4: 0x838283bc  lb          $v0, -0x7C44($gp)
    ctx->pc = 0x245ff4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935484)));
label_245ff8:
    // 0x245ff8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_245ffc:
    if (ctx->pc == 0x245FFCu) {
        ctx->pc = 0x246000u;
        goto label_246000;
    }
    ctx->pc = 0x245FF8u;
    {
        const bool branch_taken_0x245ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245ff8) {
            ctx->pc = 0x24603Cu;
            goto label_24603c;
        }
    }
    ctx->pc = 0x246000u;
label_246000:
    // 0x246000: 0x8f8296ec  lw          $v0, -0x6914($gp)
    ctx->pc = 0x246000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940396)));
label_246004:
    // 0x246004: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_246008:
    if (ctx->pc == 0x246008u) {
        ctx->pc = 0x24600Cu;
        goto label_24600c;
    }
    ctx->pc = 0x246004u;
    {
        const bool branch_taken_0x246004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246004) {
            ctx->pc = 0x24603Cu;
            goto label_24603c;
        }
    }
    ctx->pc = 0x24600Cu;
label_24600c:
    // 0x24600c: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x24600cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_246010:
    // 0x246010: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x246010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
label_246014:
    // 0x246014: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x246014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_246018:
    // 0x246018: 0xc0941f4  jal         func_2507D0
label_24601c:
    if (ctx->pc == 0x24601Cu) {
        ctx->pc = 0x246020u;
        goto label_246020;
    }
    ctx->pc = 0x246018u;
    SET_GPR_U32(ctx, 31, 0x246020u);
    ctx->pc = 0x2507D0u;
    if (runtime->hasFunction(0x2507D0u)) {
        auto targetFn = runtime->lookupFunction(0x2507D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246020u; }
        if (ctx->pc != 0x246020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuAdjustPolygonScale__FP8mgCFramef_0x2507d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246020u; }
        if (ctx->pc != 0x246020u) { return; }
    }
    ctx->pc = 0x246020u;
label_246020:
    // 0x246020: 0x8f8496ec  lw          $a0, -0x6914($gp)
    ctx->pc = 0x246020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940396)));
label_246024:
    // 0x246024: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x246024u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_246028:
    // 0x246028: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x246028u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_24602c:
    // 0x24602c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24602cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_246030:
    // 0x246030: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x246030u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_246034:
    // 0x246034: 0x320f809  jalr        $t9
label_246038:
    if (ctx->pc == 0x246038u) {
        ctx->pc = 0x246038u;
            // 0x246038: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x24603Cu;
        goto label_24603c;
    }
    ctx->pc = 0x246034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24603Cu);
        ctx->pc = 0x246038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246034u;
            // 0x246038: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24603Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24603Cu; }
            if (ctx->pc != 0x24603Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24603Cu;
label_24603c:
    // 0x24603c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x24603cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_246040:
    // 0x246040: 0xc052d48  jal         func_14B520
label_246044:
    if (ctx->pc == 0x246044u) {
        ctx->pc = 0x246044u;
            // 0x246044: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x246048u;
        goto label_246048;
    }
    ctx->pc = 0x246040u;
    SET_GPR_U32(ctx, 31, 0x246048u);
    ctx->pc = 0x246044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246040u;
            // 0x246044: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B520u;
    if (runtime->hasFunction(0x14B520u)) {
        auto targetFn = runtime->lookupFunction(0x14B520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246048u; }
        if (ctx->pc != 0x246048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuModeOff__8CGamePadFv_0x14b520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246048u; }
        if (ctx->pc != 0x246048u) { return; }
    }
    ctx->pc = 0x246048u;
label_246048:
    // 0x246048: 0x10000351  b           . + 4 + (0x351 << 2)
label_24604c:
    if (ctx->pc == 0x24604Cu) {
        ctx->pc = 0x246050u;
        goto label_246050;
    }
    ctx->pc = 0x246048u;
    {
        const bool branch_taken_0x246048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246048) {
            ctx->pc = 0x246D90u;
            goto label_246d90;
        }
    }
    ctx->pc = 0x246050u;
label_246050:
    // 0x246050: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x246050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246054:
    // 0x246054: 0x1483034e  bne         $a0, $v1, . + 4 + (0x34E << 2)
label_246058:
    if (ctx->pc == 0x246058u) {
        ctx->pc = 0x24605Cu;
        goto label_24605c;
    }
    ctx->pc = 0x246054u;
    {
        const bool branch_taken_0x246054 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x246054) {
            ctx->pc = 0x246D90u;
            goto label_246d90;
        }
    }
    ctx->pc = 0x24605Cu;
label_24605c:
    // 0x24605c: 0x8f8496ec  lw          $a0, -0x6914($gp)
    ctx->pc = 0x24605cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940396)));
label_246060:
    // 0x246060: 0x108000b2  beqz        $a0, . + 4 + (0xB2 << 2)
label_246064:
    if (ctx->pc == 0x246064u) {
        ctx->pc = 0x246068u;
        goto label_246068;
    }
    ctx->pc = 0x246060u;
    {
        const bool branch_taken_0x246060 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x246060) {
            ctx->pc = 0x24632Cu;
            goto label_24632c;
        }
    }
    ctx->pc = 0x246068u;
label_246068:
    // 0x246068: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x246068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24606c:
    // 0x24606c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x24606cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_246070:
    // 0x246070: 0x320f809  jalr        $t9
label_246074:
    if (ctx->pc == 0x246074u) {
        ctx->pc = 0x246074u;
            // 0x246074: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x246078u;
        goto label_246078;
    }
    ctx->pc = 0x246070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x246078u);
        ctx->pc = 0x246074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246070u;
            // 0x246074: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x246078u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x246078u; }
            if (ctx->pc != 0x246078u) { return; }
        }
        }
    }
    ctx->pc = 0x246078u;
label_246078:
    // 0x246078: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x246078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_24607c:
    // 0x24607c: 0xc052cc0  jal         func_14B300
label_246080:
    if (ctx->pc == 0x246080u) {
        ctx->pc = 0x246080u;
            // 0x246080: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x246084u;
        goto label_246084;
    }
    ctx->pc = 0x24607Cu;
    SET_GPR_U32(ctx, 31, 0x246084u);
    ctx->pc = 0x246080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24607Cu;
            // 0x246080: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B300u;
    if (runtime->hasFunction(0x14B300u)) {
        auto targetFn = runtime->lookupFunction(0x14B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246084u; }
        if (ctx->pc != 0x246084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLXf__8CGamePadFv_0x14b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246084u; }
        if (ctx->pc != 0x246084u) { return; }
    }
    ctx->pc = 0x246084u;
label_246084:
    // 0x246084: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x246084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_246088:
    // 0x246088: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x246088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_24608c:
    // 0x24608c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24608cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_246090:
    // 0x246090: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x246090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_246094:
    // 0x246094: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x246094u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_246098:
    // 0x246098: 0x0  nop
    ctx->pc = 0x246098u;
    // NOP
label_24609c:
    // 0x24609c: 0x0  nop
    ctx->pc = 0x24609cu;
    // NOP
label_2460a0:
    // 0x2460a0: 0xc052cd0  jal         func_14B340
label_2460a4:
    if (ctx->pc == 0x2460A4u) {
        ctx->pc = 0x2460A8u;
        goto label_2460a8;
    }
    ctx->pc = 0x2460A0u;
    SET_GPR_U32(ctx, 31, 0x2460A8u);
    ctx->pc = 0x14B340u;
    if (runtime->hasFunction(0x14B340u)) {
        auto targetFn = runtime->lookupFunction(0x14B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2460A8u; }
        if (ctx->pc != 0x2460A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLYf__8CGamePadFv_0x14b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2460A8u; }
        if (ctx->pc != 0x2460A8u) { return; }
    }
    ctx->pc = 0x2460A8u;
label_2460a8:
    // 0x2460a8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2460a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2460ac:
    // 0x2460ac: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2460acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2460b0:
    // 0x2460b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2460b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2460b4:
    // 0x2460b4: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x2460b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_2460b8:
    // 0x2460b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2460b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2460bc:
    // 0x2460bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2460bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2460c0:
    // 0x2460c0: 0x46010543  div.s       $f21, $f0, $f1
    ctx->pc = 0x2460c0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_2460c4:
    // 0x2460c4: 0x0  nop
    ctx->pc = 0x2460c4u;
    // NOP
label_2460c8:
    // 0x2460c8: 0x0  nop
    ctx->pc = 0x2460c8u;
    // NOP
label_2460cc:
    // 0x2460cc: 0xc052cf0  jal         func_14B3C0
label_2460d0:
    if (ctx->pc == 0x2460D0u) {
        ctx->pc = 0x2460D4u;
        goto label_2460d4;
    }
    ctx->pc = 0x2460CCu;
    SET_GPR_U32(ctx, 31, 0x2460D4u);
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2460D4u; }
        if (ctx->pc != 0x2460D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2460D4u; }
        if (ctx->pc != 0x2460D4u) { return; }
    }
    ctx->pc = 0x2460D4u;
label_2460d4:
    // 0x2460d4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2460d8:
    if (ctx->pc == 0x2460D8u) {
        ctx->pc = 0x2460DCu;
        goto label_2460dc;
    }
    ctx->pc = 0x2460D4u;
    {
        const bool branch_taken_0x2460d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2460d4) {
            ctx->pc = 0x2460E0u;
            goto label_2460e0;
        }
    }
    ctx->pc = 0x2460DCu;
label_2460dc:
    // 0x2460dc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2460dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2460e0:
    // 0x2460e0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_2460e4:
    if (ctx->pc == 0x2460E4u) {
        ctx->pc = 0x2460E8u;
        goto label_2460e8;
    }
    ctx->pc = 0x2460E0u;
    {
        const bool branch_taken_0x2460e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2460e0) {
            ctx->pc = 0x2460F8u;
            goto label_2460f8;
        }
    }
    ctx->pc = 0x2460E8u;
label_2460e8:
    // 0x2460e8: 0xc04c678  jal         func_1319E0
label_2460ec:
    if (ctx->pc == 0x2460ECu) {
        ctx->pc = 0x2460ECu;
            // 0x2460ec: 0x8f8496f0  lw          $a0, -0x6910($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940400)));
        ctx->pc = 0x2460F0u;
        goto label_2460f0;
    }
    ctx->pc = 0x2460E8u;
    SET_GPR_U32(ctx, 31, 0x2460F0u);
    ctx->pc = 0x2460ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2460E8u;
            // 0x2460ec: 0x8f8496f0  lw          $a0, -0x6910($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940400)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319E0u;
    if (runtime->hasFunction(0x1319E0u)) {
        auto targetFn = runtime->lookupFunction(0x1319E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2460F0u; }
        if (ctx->pc != 0x2460F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAngle__15mgCCameraFollowFv_0x1319e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2460F0u; }
        if (ctx->pc != 0x2460F0u) { return; }
    }
    ctx->pc = 0x2460F0u;
label_2460f0:
    // 0x2460f0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2460f4:
    if (ctx->pc == 0x2460F4u) {
        ctx->pc = 0x2460F4u;
            // 0x2460f4: 0xc7a10070  lwc1        $f1, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x2460F8u;
        goto label_2460f8;
    }
    ctx->pc = 0x2460F0u;
    {
        const bool branch_taken_0x2460f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2460F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2460F0u;
            // 0x2460f4: 0xc7a10070  lwc1        $f1, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2460f0) {
            ctx->pc = 0x246114u;
            goto label_246114;
        }
    }
    ctx->pc = 0x2460F8u;
label_2460f8:
    // 0x2460f8: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2460f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2460fc:
    // 0x2460fc: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2460fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_246100:
    // 0x246100: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x246100u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_246104:
    // 0x246104: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x246104u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_246108:
    // 0x246108: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x246108u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_24610c:
    // 0x24610c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x24610cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_246110:
    // 0x246110: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x246110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_246114:
    // 0x246114: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x246114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_246118:
    // 0x246118: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x246118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_24611c:
    // 0x24611c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24611cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_246120:
    // 0x246120: 0x0  nop
    ctx->pc = 0x246120u;
    // NOP
label_246124:
    // 0x246124: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x246124u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_246128:
    // 0x246128: 0x0  nop
    ctx->pc = 0x246128u;
    // NOP
label_24612c:
    // 0x24612c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_246130:
    if (ctx->pc == 0x246130u) {
        ctx->pc = 0x246130u;
            // 0x246130: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->pc = 0x246134u;
        goto label_246134;
    }
    ctx->pc = 0x24612Cu;
    {
        const bool branch_taken_0x24612c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x246130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24612Cu;
            // 0x246130: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24612c) {
            ctx->pc = 0x246154u;
            goto label_246154;
        }
    }
    ctx->pc = 0x246134u;
label_246134:
    // 0x246134: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x246134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_246138:
    // 0x246138: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x246138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_24613c:
    // 0x24613c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24613cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_246140:
    // 0x246140: 0x0  nop
    ctx->pc = 0x246140u;
    // NOP
label_246144:
    // 0x246144: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x246144u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_246148:
    // 0x246148: 0x1000000f  b           . + 4 + (0xF << 2)
label_24614c:
    if (ctx->pc == 0x24614Cu) {
        ctx->pc = 0x24614Cu;
            // 0x24614c: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->pc = 0x246150u;
        goto label_246150;
    }
    ctx->pc = 0x246148u;
    {
        const bool branch_taken_0x246148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24614Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246148u;
            // 0x24614c: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x246148) {
            ctx->pc = 0x246188u;
            goto label_246188;
        }
    }
    ctx->pc = 0x246150u;
label_246150:
    // 0x246150: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x246150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_246154:
    // 0x246154: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x246154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_246158:
    // 0x246158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24615c:
    // 0x24615c: 0x0  nop
    ctx->pc = 0x24615cu;
    // NOP
label_246160:
    // 0x246160: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x246160u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_246164:
    // 0x246164: 0x0  nop
    ctx->pc = 0x246164u;
    // NOP
label_246168:
    // 0x246168: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_24616c:
    if (ctx->pc == 0x24616Cu) {
        ctx->pc = 0x24616Cu;
            // 0x24616c: 0x27a30074  addiu       $v1, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->pc = 0x246170u;
        goto label_246170;
    }
    ctx->pc = 0x246168u;
    {
        const bool branch_taken_0x246168 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24616Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246168u;
            // 0x24616c: 0x27a30074  addiu       $v1, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246168) {
            ctx->pc = 0x24618Cu;
            goto label_24618c;
        }
    }
    ctx->pc = 0x246170u;
label_246170:
    // 0x246170: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x246170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_246174:
    // 0x246174: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x246174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_246178:
    // 0x246178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24617c:
    // 0x24617c: 0x0  nop
    ctx->pc = 0x24617cu;
    // NOP
label_246180:
    // 0x246180: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x246180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_246184:
    // 0x246184: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x246184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_246188:
    // 0x246188: 0x27a30074  addiu       $v1, $sp, 0x74
    ctx->pc = 0x246188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_24618c:
    // 0x24618c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x24618cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_246190:
    // 0x246190: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x246190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_246194:
    // 0x246194: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x246194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_246198:
    // 0x246198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24619c:
    // 0x24619c: 0x0  nop
    ctx->pc = 0x24619cu;
    // NOP
label_2461a0:
    // 0x2461a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2461a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2461a4:
    // 0x2461a4: 0x0  nop
    ctx->pc = 0x2461a4u;
    // NOP
label_2461a8:
    // 0x2461a8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_2461ac:
    if (ctx->pc == 0x2461ACu) {
        ctx->pc = 0x2461ACu;
            // 0x2461ac: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->pc = 0x2461B0u;
        goto label_2461b0;
    }
    ctx->pc = 0x2461A8u;
    {
        const bool branch_taken_0x2461a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2461ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2461A8u;
            // 0x2461ac: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2461a8) {
            ctx->pc = 0x2461D0u;
            goto label_2461d0;
        }
    }
    ctx->pc = 0x2461B0u;
label_2461b0:
    // 0x2461b0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x2461b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_2461b4:
    // 0x2461b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2461b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2461b8:
    // 0x2461b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2461b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2461bc:
    // 0x2461bc: 0x0  nop
    ctx->pc = 0x2461bcu;
    // NOP
label_2461c0:
    // 0x2461c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2461c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2461c4:
    // 0x2461c4: 0x1000000f  b           . + 4 + (0xF << 2)
label_2461c8:
    if (ctx->pc == 0x2461C8u) {
        ctx->pc = 0x2461C8u;
            // 0x2461c8: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x2461CCu;
        goto label_2461cc;
    }
    ctx->pc = 0x2461C4u;
    {
        const bool branch_taken_0x2461c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2461C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2461C4u;
            // 0x2461c8: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2461c4) {
            ctx->pc = 0x246204u;
            goto label_246204;
        }
    }
    ctx->pc = 0x2461CCu;
label_2461cc:
    // 0x2461cc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x2461ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_2461d0:
    // 0x2461d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2461d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2461d4:
    // 0x2461d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2461d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2461d8:
    // 0x2461d8: 0x0  nop
    ctx->pc = 0x2461d8u;
    // NOP
label_2461dc:
    // 0x2461dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2461dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2461e0:
    // 0x2461e0: 0x0  nop
    ctx->pc = 0x2461e0u;
    // NOP
label_2461e4:
    // 0x2461e4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_2461e8:
    if (ctx->pc == 0x2461E8u) {
        ctx->pc = 0x2461ECu;
        goto label_2461ec;
    }
    ctx->pc = 0x2461E4u;
    {
        const bool branch_taken_0x2461e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2461e4) {
            ctx->pc = 0x246204u;
            goto label_246204;
        }
    }
    ctx->pc = 0x2461ECu;
label_2461ec:
    // 0x2461ec: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x2461ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_2461f0:
    // 0x2461f0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2461f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2461f4:
    // 0x2461f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2461f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2461f8:
    // 0x2461f8: 0x0  nop
    ctx->pc = 0x2461f8u;
    // NOP
label_2461fc:
    // 0x2461fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2461fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_246200:
    // 0x246200: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x246200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_246204:
    // 0x246204: 0x27a30078  addiu       $v1, $sp, 0x78
    ctx->pc = 0x246204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_246208:
    // 0x246208: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x246208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_24620c:
    // 0x24620c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x24620cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_246210:
    // 0x246210: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x246210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_246214:
    // 0x246214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_246218:
    // 0x246218: 0x0  nop
    ctx->pc = 0x246218u;
    // NOP
label_24621c:
    // 0x24621c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24621cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_246220:
    // 0x246220: 0x0  nop
    ctx->pc = 0x246220u;
    // NOP
label_246224:
    // 0x246224: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_246228:
    if (ctx->pc == 0x246228u) {
        ctx->pc = 0x246228u;
            // 0x246228: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->pc = 0x24622Cu;
        goto label_24622c;
    }
    ctx->pc = 0x246224u;
    {
        const bool branch_taken_0x246224 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x246228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246224u;
            // 0x246228: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246224) {
            ctx->pc = 0x24624Cu;
            goto label_24624c;
        }
    }
    ctx->pc = 0x24622Cu;
label_24622c:
    // 0x24622c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x24622cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_246230:
    // 0x246230: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x246230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_246234:
    // 0x246234: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_246238:
    // 0x246238: 0x0  nop
    ctx->pc = 0x246238u;
    // NOP
label_24623c:
    // 0x24623c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24623cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_246240:
    // 0x246240: 0x1000000f  b           . + 4 + (0xF << 2)
label_246244:
    if (ctx->pc == 0x246244u) {
        ctx->pc = 0x246244u;
            // 0x246244: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x246248u;
        goto label_246248;
    }
    ctx->pc = 0x246240u;
    {
        const bool branch_taken_0x246240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246240u;
            // 0x246244: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x246240) {
            ctx->pc = 0x246280u;
            goto label_246280;
        }
    }
    ctx->pc = 0x246248u;
label_246248:
    // 0x246248: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x246248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_24624c:
    // 0x24624c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x24624cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_246250:
    // 0x246250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_246254:
    // 0x246254: 0x0  nop
    ctx->pc = 0x246254u;
    // NOP
label_246258:
    // 0x246258: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x246258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24625c:
    // 0x24625c: 0x0  nop
    ctx->pc = 0x24625cu;
    // NOP
label_246260:
    // 0x246260: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_246264:
    if (ctx->pc == 0x246264u) {
        ctx->pc = 0x246268u;
        goto label_246268;
    }
    ctx->pc = 0x246260u;
    {
        const bool branch_taken_0x246260 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x246260) {
            ctx->pc = 0x246280u;
            goto label_246280;
        }
    }
    ctx->pc = 0x246268u;
label_246268:
    // 0x246268: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x246268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_24626c:
    // 0x24626c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x24626cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_246270:
    // 0x246270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_246274:
    // 0x246274: 0x0  nop
    ctx->pc = 0x246274u;
    // NOP
label_246278:
    // 0x246278: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x246278u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_24627c:
    // 0x24627c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x24627cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_246280:
    // 0x246280: 0x8f8496ec  lw          $a0, -0x6914($gp)
    ctx->pc = 0x246280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940396)));
label_246284:
    // 0x246284: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x246284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_246288:
    // 0x246288: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x246288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_24628c:
    // 0x24628c: 0x320f809  jalr        $t9
label_246290:
    if (ctx->pc == 0x246290u) {
        ctx->pc = 0x246290u;
            // 0x246290: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x246294u;
        goto label_246294;
    }
    ctx->pc = 0x24628Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x246294u);
        ctx->pc = 0x246290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24628Cu;
            // 0x246290: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x246294u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x246294u; }
            if (ctx->pc != 0x246294u) { return; }
        }
        }
    }
    ctx->pc = 0x246294u;
label_246294:
    // 0x246294: 0x8f8496ec  lw          $a0, -0x6914($gp)
    ctx->pc = 0x246294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940396)));
label_246298:
    // 0x246298: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x246298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24629c:
    // 0x24629c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x24629cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2462a0:
    // 0x2462a0: 0x320f809  jalr        $t9
label_2462a4:
    if (ctx->pc == 0x2462A4u) {
        ctx->pc = 0x2462A4u;
            // 0x2462a4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2462A8u;
        goto label_2462a8;
    }
    ctx->pc = 0x2462A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2462A8u);
        ctx->pc = 0x2462A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2462A0u;
            // 0x2462a4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2462A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2462A8u; }
            if (ctx->pc != 0x2462A8u) { return; }
        }
        }
    }
    ctx->pc = 0x2462A8u;
label_2462a8:
    // 0x2462a8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2462a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2462ac:
    // 0x2462ac: 0xc052cb0  jal         func_14B2C0
label_2462b0:
    if (ctx->pc == 0x2462B0u) {
        ctx->pc = 0x2462B0u;
            // 0x2462b0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x2462B4u;
        goto label_2462b4;
    }
    ctx->pc = 0x2462ACu;
    SET_GPR_U32(ctx, 31, 0x2462B4u);
    ctx->pc = 0x2462B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2462ACu;
            // 0x2462b0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B2C0u;
    if (runtime->hasFunction(0x14B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2462B4u; }
        if (ctx->pc != 0x2462B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRYf__8CGamePadFv_0x14b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2462B4u; }
        if (ctx->pc != 0x2462B4u) { return; }
    }
    ctx->pc = 0x2462B4u;
label_2462b4:
    // 0x2462b4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2462b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2462b8:
    // 0x2462b8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2462b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2462bc:
    // 0x2462bc: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2462bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2462c0:
    // 0x2462c0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2462c0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_2462c4:
    // 0x2462c4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2462c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_2462c8:
    // 0x2462c8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2462c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2462cc:
    // 0x2462cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2462ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2462d0:
    // 0x2462d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2462d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2462d4:
    // 0x2462d4: 0x0  nop
    ctx->pc = 0x2462d4u;
    // NOP
label_2462d8:
    // 0x2462d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2462d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2462dc:
    // 0x2462dc: 0x0  nop
    ctx->pc = 0x2462dcu;
    // NOP
label_2462e0:
    // 0x2462e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2462e4:
    if (ctx->pc == 0x2462E4u) {
        ctx->pc = 0x2462E4u;
            // 0x2462e4: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->pc = 0x2462E8u;
        goto label_2462e8;
    }
    ctx->pc = 0x2462E0u;
    {
        const bool branch_taken_0x2462e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2462E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2462E0u;
            // 0x2462e4: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2462e0) {
            ctx->pc = 0x2462ECu;
            goto label_2462ec;
        }
    }
    ctx->pc = 0x2462E8u;
label_2462e8:
    // 0x2462e8: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x2462e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2462ec:
    // 0x2462ec: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2462ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2462f0:
    // 0x2462f0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2462f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2462f4:
    // 0x2462f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2462f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2462f8:
    // 0x2462f8: 0x0  nop
    ctx->pc = 0x2462f8u;
    // NOP
label_2462fc:
    // 0x2462fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2462fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_246300:
    // 0x246300: 0x0  nop
    ctx->pc = 0x246300u;
    // NOP
label_246304:
    // 0x246304: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_246308:
    if (ctx->pc == 0x246308u) {
        ctx->pc = 0x24630Cu;
        goto label_24630c;
    }
    ctx->pc = 0x246304u;
    {
        const bool branch_taken_0x246304 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x246304) {
            ctx->pc = 0x246310u;
            goto label_246310;
        }
    }
    ctx->pc = 0x24630Cu;
label_24630c:
    // 0x24630c: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x24630cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_246310:
    // 0x246310: 0x8f8496ec  lw          $a0, -0x6914($gp)
    ctx->pc = 0x246310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940396)));
label_246314:
    // 0x246314: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x246314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_246318:
    // 0x246318: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x246318u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24631c:
    // 0x24631c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x24631cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_246320:
    // 0x246320: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x246320u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_246324:
    // 0x246324: 0x320f809  jalr        $t9
label_246328:
    if (ctx->pc == 0x246328u) {
        ctx->pc = 0x246328u;
            // 0x246328: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x24632Cu;
        goto label_24632c;
    }
    ctx->pc = 0x246324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24632Cu);
        ctx->pc = 0x246328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246324u;
            // 0x246328: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24632Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24632Cu; }
            if (ctx->pc != 0x24632Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24632Cu;
label_24632c:
    // 0x24632c: 0x8f8496f0  lw          $a0, -0x6910($gp)
    ctx->pc = 0x24632cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940400)));
label_246330:
    // 0x246330: 0x8c990060  lw          $t9, 0x60($a0)
    ctx->pc = 0x246330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_246334:
    // 0x246334: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x246334u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_246338:
    // 0x246338: 0x320f809  jalr        $t9
label_24633c:
    if (ctx->pc == 0x24633Cu) {
        ctx->pc = 0x24633Cu;
            // 0x24633c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x246340u;
        goto label_246340;
    }
    ctx->pc = 0x246338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x246340u);
        ctx->pc = 0x24633Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246338u;
            // 0x24633c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x246340u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x246340u; }
            if (ctx->pc != 0x246340u) { return; }
        }
        }
    }
    ctx->pc = 0x246340u;
label_246340:
    // 0x246340: 0x32030004  andi        $v1, $s0, 0x4
    ctx->pc = 0x246340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_246344:
    // 0x246344: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_246348:
    if (ctx->pc == 0x246348u) {
        ctx->pc = 0x246348u;
            // 0x246348: 0x32030008  andi        $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x24634Cu;
        goto label_24634c;
    }
    ctx->pc = 0x246344u;
    {
        const bool branch_taken_0x246344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246344u;
            // 0x246348: 0x32030008  andi        $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246344) {
            ctx->pc = 0x24639Cu;
            goto label_24639c;
        }
    }
    ctx->pc = 0x24634Cu;
label_24634c:
    // 0x24634c: 0x8f8496ec  lw          $a0, -0x6914($gp)
    ctx->pc = 0x24634cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940396)));
label_246350:
    // 0x246350: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x246350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_246354:
    // 0x246354: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x246354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_246358:
    // 0x246358: 0x0  nop
    ctx->pc = 0x246358u;
    // NOP
label_24635c:
    // 0x24635c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x24635cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_246360:
    // 0x246360: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x246360u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_246364:
    // 0x246364: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x246364u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_246368:
    // 0x246368: 0x320f809  jalr        $t9
label_24636c:
    if (ctx->pc == 0x24636Cu) {
        ctx->pc = 0x24636Cu;
            // 0x24636c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x246370u;
        goto label_246370;
    }
    ctx->pc = 0x246368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x246370u);
        ctx->pc = 0x24636Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246368u;
            // 0x24636c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x246370u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x246370u; }
            if (ctx->pc != 0x246370u) { return; }
        }
        }
    }
    ctx->pc = 0x246370u;
label_246370:
    // 0x246370: 0x8f8496ec  lw          $a0, -0x6914($gp)
    ctx->pc = 0x246370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940396)));
label_246374:
    // 0x246374: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x246374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_246378:
    // 0x246378: 0x0  nop
    ctx->pc = 0x246378u;
    // NOP
label_24637c:
    // 0x24637c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x24637cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_246380:
    // 0x246380: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x246380u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_246384:
    // 0x246384: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x246384u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_246388:
    // 0x246388: 0x320f809  jalr        $t9
label_24638c:
    if (ctx->pc == 0x24638Cu) {
        ctx->pc = 0x24638Cu;
            // 0x24638c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x246390u;
        goto label_246390;
    }
    ctx->pc = 0x246388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x246390u);
        ctx->pc = 0x24638Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246388u;
            // 0x24638c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x246390u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x246390u; }
            if (ctx->pc != 0x246390u) { return; }
        }
        }
    }
    ctx->pc = 0x246390u;
label_246390:
    // 0x246390: 0x1000027f  b           . + 4 + (0x27F << 2)
label_246394:
    if (ctx->pc == 0x246394u) {
        ctx->pc = 0x246394u;
            // 0x246394: 0xa38083bc  sb          $zero, -0x7C44($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935484), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x246398u;
        goto label_246398;
    }
    ctx->pc = 0x246390u;
    {
        const bool branch_taken_0x246390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246390u;
            // 0x246394: 0xa38083bc  sb          $zero, -0x7C44($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935484), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246390) {
            ctx->pc = 0x246D90u;
            goto label_246d90;
        }
    }
    ctx->pc = 0x246398u;
label_246398:
    // 0x246398: 0x32030008  andi        $v1, $s0, 0x8
    ctx->pc = 0x246398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_24639c:
    // 0x24639c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_2463a0:
    if (ctx->pc == 0x2463A0u) {
        ctx->pc = 0x2463A0u;
            // 0x2463a0: 0x32030002  andi        $v1, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x2463A4u;
        goto label_2463a4;
    }
    ctx->pc = 0x24639Cu;
    {
        const bool branch_taken_0x24639c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2463A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24639Cu;
            // 0x2463a0: 0x32030002  andi        $v1, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24639c) {
            ctx->pc = 0x246428u;
            goto label_246428;
        }
    }
    ctx->pc = 0x2463A4u;
label_2463a4:
    // 0x2463a4: 0x8f8496ec  lw          $a0, -0x6914($gp)
    ctx->pc = 0x2463a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940396)));
label_2463a8:
    // 0x2463a8: 0x10800279  beqz        $a0, . + 4 + (0x279 << 2)
label_2463ac:
    if (ctx->pc == 0x2463ACu) {
        ctx->pc = 0x2463B0u;
        goto label_2463b0;
    }
    ctx->pc = 0x2463A8u;
    {
        const bool branch_taken_0x2463a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2463a8) {
            ctx->pc = 0x246D90u;
            goto label_246d90;
        }
    }
    ctx->pc = 0x2463B0u;
label_2463b0:
    // 0x2463b0: 0x838283bc  lb          $v0, -0x7C44($gp)
    ctx->pc = 0x2463b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935484)));
label_2463b4:
    // 0x2463b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2463b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2463b8:
    // 0x2463b8: 0xa38283bc  sb          $v0, -0x7C44($gp)
    ctx->pc = 0x2463b8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935484), (uint8_t)GPR_U32(ctx, 2));
label_2463bc:
    // 0x2463bc: 0x838283bc  lb          $v0, -0x7C44($gp)
    ctx->pc = 0x2463bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935484)));
label_2463c0:
    // 0x2463c0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2463c4:
    if (ctx->pc == 0x2463C4u) {
        ctx->pc = 0x2463C8u;
        goto label_2463c8;
    }
    ctx->pc = 0x2463C0u;
    {
        const bool branch_taken_0x2463c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2463c0) {
            ctx->pc = 0x2463FCu;
            goto label_2463fc;
        }
    }
    ctx->pc = 0x2463C8u;
label_2463c8:
    // 0x2463c8: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x2463c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
label_2463cc:
    // 0x2463cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2463ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2463d0:
    // 0x2463d0: 0xc0941f4  jal         func_2507D0
label_2463d4:
    if (ctx->pc == 0x2463D4u) {
        ctx->pc = 0x2463D4u;
            // 0x2463d4: 0x8c840070  lw          $a0, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->pc = 0x2463D8u;
        goto label_2463d8;
    }
    ctx->pc = 0x2463D0u;
    SET_GPR_U32(ctx, 31, 0x2463D8u);
    ctx->pc = 0x2463D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2463D0u;
            // 0x2463d4: 0x8c840070  lw          $a0, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2507D0u;
    if (runtime->hasFunction(0x2507D0u)) {
        auto targetFn = runtime->lookupFunction(0x2507D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2463D8u; }
        if (ctx->pc != 0x2463D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuAdjustPolygonScale__FP8mgCFramef_0x2507d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2463D8u; }
        if (ctx->pc != 0x2463D8u) { return; }
    }
    ctx->pc = 0x2463D8u;
label_2463d8:
    // 0x2463d8: 0x8f8496ec  lw          $a0, -0x6914($gp)
    ctx->pc = 0x2463d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940396)));
label_2463dc:
    // 0x2463dc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2463dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2463e0:
    // 0x2463e0: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2463e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_2463e4:
    // 0x2463e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2463e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2463e8:
    // 0x2463e8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2463e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2463ec:
    // 0x2463ec: 0x320f809  jalr        $t9
label_2463f0:
    if (ctx->pc == 0x2463F0u) {
        ctx->pc = 0x2463F0u;
            // 0x2463f0: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2463F4u;
        goto label_2463f4;
    }
    ctx->pc = 0x2463ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2463F4u);
        ctx->pc = 0x2463F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2463ECu;
            // 0x2463f0: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2463F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2463F4u; }
            if (ctx->pc != 0x2463F4u) { return; }
        }
        }
    }
    ctx->pc = 0x2463F4u;
label_2463f4:
    // 0x2463f4: 0x10000266  b           . + 4 + (0x266 << 2)
label_2463f8:
    if (ctx->pc == 0x2463F8u) {
        ctx->pc = 0x2463FCu;
        goto label_2463fc;
    }
    ctx->pc = 0x2463F4u;
    {
        const bool branch_taken_0x2463f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2463f4) {
            ctx->pc = 0x246D90u;
            goto label_246d90;
        }
    }
    ctx->pc = 0x2463FCu;
label_2463fc:
    // 0x2463fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2463fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_246400:
    // 0x246400: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x246400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_246404:
    // 0x246404: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x246404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_246408:
    // 0x246408: 0x0  nop
    ctx->pc = 0x246408u;
    // NOP
label_24640c:
    // 0x24640c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x24640cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_246410:
    // 0x246410: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x246410u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_246414:
    // 0x246414: 0x320f809  jalr        $t9
label_246418:
    if (ctx->pc == 0x246418u) {
        ctx->pc = 0x246418u;
            // 0x246418: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x24641Cu;
        goto label_24641c;
    }
    ctx->pc = 0x246414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24641Cu);
        ctx->pc = 0x246418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246414u;
            // 0x246418: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24641Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24641Cu; }
            if (ctx->pc != 0x24641Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24641Cu;
label_24641c:
    // 0x24641c: 0x1000025c  b           . + 4 + (0x25C << 2)
label_246420:
    if (ctx->pc == 0x246420u) {
        ctx->pc = 0x246424u;
        goto label_246424;
    }
    ctx->pc = 0x24641Cu;
    {
        const bool branch_taken_0x24641c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24641c) {
            ctx->pc = 0x246D90u;
            goto label_246d90;
        }
    }
    ctx->pc = 0x246424u;
label_246424:
    // 0x246424: 0x32030002  andi        $v1, $s0, 0x2
    ctx->pc = 0x246424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_246428:
    // 0x246428: 0x10600259  beqz        $v1, . + 4 + (0x259 << 2)
label_24642c:
    if (ctx->pc == 0x24642Cu) {
        ctx->pc = 0x246430u;
        goto label_246430;
    }
    ctx->pc = 0x246428u;
    {
        const bool branch_taken_0x246428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246428) {
            ctx->pc = 0x246D90u;
            goto label_246d90;
        }
    }
    ctx->pc = 0x246430u;
label_246430:
    // 0x246430: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x246430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_246434:
    // 0x246434: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x246434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_246438:
    // 0x246438: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x246438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_24643c:
    // 0x24643c: 0xa38096cc  sb          $zero, -0x6934($gp)
    ctx->pc = 0x24643cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940364), (uint8_t)GPR_U32(ctx, 0));
label_246440:
    // 0x246440: 0xaf8096ec  sw          $zero, -0x6914($gp)
    ctx->pc = 0x246440u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940396), GPR_U32(ctx, 0));
label_246444:
    // 0x246444: 0xc052d44  jal         func_14B510
label_246448:
    if (ctx->pc == 0x246448u) {
        ctx->pc = 0x246448u;
            // 0x246448: 0xaf8096f0  sw          $zero, -0x6910($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940400), GPR_U32(ctx, 0));
        ctx->pc = 0x24644Cu;
        goto label_24644c;
    }
    ctx->pc = 0x246444u;
    SET_GPR_U32(ctx, 31, 0x24644Cu);
    ctx->pc = 0x246448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246444u;
            // 0x246448: 0xaf8096f0  sw          $zero, -0x6910($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B510u;
    if (runtime->hasFunction(0x14B510u)) {
        auto targetFn = runtime->lookupFunction(0x14B510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24644Cu; }
        if (ctx->pc != 0x24644Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuModeOn__8CGamePadFi_0x14b510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24644Cu; }
        if (ctx->pc != 0x24644Cu) { return; }
    }
    ctx->pc = 0x24644Cu;
label_24644c:
    // 0x24644c: 0x10000250  b           . + 4 + (0x250 << 2)
label_246450:
    if (ctx->pc == 0x246450u) {
        ctx->pc = 0x246454u;
        goto label_246454;
    }
    ctx->pc = 0x24644Cu;
    {
        const bool branch_taken_0x24644c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24644c) {
            ctx->pc = 0x246D90u;
            goto label_246d90;
        }
    }
    ctx->pc = 0x246454u;
label_246454:
    // 0x246454: 0x84a30114  lh          $v1, 0x114($a1)
    ctx->pc = 0x246454u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 276)));
label_246458:
    // 0x246458: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x246458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
label_24645c:
    // 0x24645c: 0x2442d8c0  addiu       $v0, $v0, -0x2740
    ctx->pc = 0x24645cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957248));
label_246460:
    // 0x246460: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x246460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_246464:
    // 0x246464: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x246464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_246468:
    // 0x246468: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x246468u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24646c:
    // 0x24646c: 0x1220004a  beqz        $s1, . + 4 + (0x4A << 2)
label_246470:
    if (ctx->pc == 0x246470u) {
        ctx->pc = 0x246474u;
        goto label_246474;
    }
    ctx->pc = 0x24646Cu;
    {
        const bool branch_taken_0x24646c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x24646c) {
            ctx->pc = 0x246598u;
            goto label_246598;
        }
    }
    ctx->pc = 0x246474u;
label_246474:
    // 0x246474: 0xdf8296f8  ld          $v0, -0x6908($gp)
    ctx->pc = 0x246474u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294940408)));
label_246478:
    // 0x246478: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x246478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_24647c:
    // 0x24647c: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x24647cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_246480:
    // 0x246480: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x246480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_246484:
    // 0x246484: 0xc08f8d8  jal         func_23E360
label_246488:
    if (ctx->pc == 0x246488u) {
        ctx->pc = 0x246488u;
            // 0x246488: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24648Cu;
        goto label_24648c;
    }
    ctx->pc = 0x246484u;
    SET_GPR_U32(ctx, 31, 0x24648Cu);
    ctx->pc = 0x246488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246484u;
            // 0x246488: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E360u;
    if (runtime->hasFunction(0x23E360u)) {
        auto targetFn = runtime->lookupFunction(0x23E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24648Cu; }
        if (ctx->pc != 0x24648Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckAnalogKey__12CMenuKeyFuncFiPf_0x23e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24648Cu; }
        if (ctx->pc != 0x24648Cu) { return; }
    }
    ctx->pc = 0x24648Cu;
label_24648c:
    // 0x24648c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x24648cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_246490:
    // 0x246490: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x246490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246494:
    // 0x246494: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x246494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_246498:
    // 0x246498: 0xc052cf0  jal         func_14B3C0
label_24649c:
    if (ctx->pc == 0x24649Cu) {
        ctx->pc = 0x24649Cu;
            // 0x24649c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2464A0u;
        goto label_2464a0;
    }
    ctx->pc = 0x246498u;
    SET_GPR_U32(ctx, 31, 0x2464A0u);
    ctx->pc = 0x24649Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246498u;
            // 0x24649c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2464A0u; }
        if (ctx->pc != 0x2464A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2464A0u; }
        if (ctx->pc != 0x2464A0u) { return; }
    }
    ctx->pc = 0x2464A0u;
label_2464a0:
    // 0x2464a0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2464a4:
    if (ctx->pc == 0x2464A4u) {
        ctx->pc = 0x2464A8u;
        goto label_2464a8;
    }
    ctx->pc = 0x2464A0u;
    {
        const bool branch_taken_0x2464a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2464a0) {
            ctx->pc = 0x2464ACu;
            goto label_2464ac;
        }
    }
    ctx->pc = 0x2464A8u;
label_2464a8:
    // 0x2464a8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2464a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2464ac:
    // 0x2464ac: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_2464b0:
    if (ctx->pc == 0x2464B0u) {
        ctx->pc = 0x2464B0u;
            // 0x2464b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2464B4u;
        goto label_2464b4;
    }
    ctx->pc = 0x2464ACu;
    {
        const bool branch_taken_0x2464ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2464B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2464ACu;
            // 0x2464b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2464ac) {
            ctx->pc = 0x2464D8u;
            goto label_2464d8;
        }
    }
    ctx->pc = 0x2464B4u;
label_2464b4:
    // 0x2464b4: 0xc6340004  lwc1        $f20, 0x4($s1)
    ctx->pc = 0x2464b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2464b8:
    // 0x2464b8: 0xc0a248c  jal         func_289230
label_2464bc:
    if (ctx->pc == 0x2464BCu) {
        ctx->pc = 0x2464BCu;
            // 0x2464bc: 0xc7ac0088  lwc1        $f12, 0x88($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2464C0u;
        goto label_2464c0;
    }
    ctx->pc = 0x2464B8u;
    SET_GPR_U32(ctx, 31, 0x2464C0u);
    ctx->pc = 0x2464BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2464B8u;
            // 0x2464bc: 0xc7ac0088  lwc1        $f12, 0x88($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2464C0u; }
        if (ctx->pc != 0x2464C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2464C0u; }
        if (ctx->pc != 0x2464C0u) { return; }
    }
    ctx->pc = 0x2464C0u;
label_2464c0:
    // 0x2464c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2464c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2464c4:
    // 0x2464c4: 0x0  nop
    ctx->pc = 0x2464c4u;
    // NOP
label_2464c8:
    // 0x2464c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2464c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2464cc:
    // 0x2464cc: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2464ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2464d0:
    // 0x2464d0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2464d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2464d4:
    // 0x2464d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2464d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2464d8:
    // 0x2464d8: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
label_2464dc:
    if (ctx->pc == 0x2464DCu) {
        ctx->pc = 0x2464E0u;
        goto label_2464e0;
    }
    ctx->pc = 0x2464D8u;
    {
        const bool branch_taken_0x2464d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2464d8) {
            ctx->pc = 0x246500u;
            goto label_246500;
        }
    }
    ctx->pc = 0x2464E0u;
label_2464e0:
    // 0x2464e0: 0xc6340000  lwc1        $f20, 0x0($s1)
    ctx->pc = 0x2464e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2464e4:
    // 0x2464e4: 0xc0a248c  jal         func_289230
label_2464e8:
    if (ctx->pc == 0x2464E8u) {
        ctx->pc = 0x2464E8u;
            // 0x2464e8: 0xc7ac0088  lwc1        $f12, 0x88($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2464ECu;
        goto label_2464ec;
    }
    ctx->pc = 0x2464E4u;
    SET_GPR_U32(ctx, 31, 0x2464ECu);
    ctx->pc = 0x2464E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2464E4u;
            // 0x2464e8: 0xc7ac0088  lwc1        $f12, 0x88($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2464ECu; }
        if (ctx->pc != 0x2464ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2464ECu; }
        if (ctx->pc != 0x2464ECu) { return; }
    }
    ctx->pc = 0x2464ECu;
label_2464ec:
    // 0x2464ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2464ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2464f0:
    // 0x2464f0: 0x0  nop
    ctx->pc = 0x2464f0u;
    // NOP
label_2464f4:
    // 0x2464f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2464f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2464f8:
    // 0x2464f8: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2464f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2464fc:
    // 0x2464fc: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2464fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_246500:
    // 0x246500: 0xc0945c8  jal         func_251720
label_246504:
    if (ctx->pc == 0x246504u) {
        ctx->pc = 0x246504u;
            // 0x246504: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x246508u;
        goto label_246508;
    }
    ctx->pc = 0x246500u;
    SET_GPR_U32(ctx, 31, 0x246508u);
    ctx->pc = 0x246504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246500u;
            // 0x246504: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x251720u;
    if (runtime->hasFunction(0x251720u)) {
        auto targetFn = runtime->lookupFunction(0x251720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246508u; }
        if (ctx->pc != 0x246508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDispVolumeForFloat__Ff_0x251720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246508u; }
        if (ctx->pc != 0x246508u) { return; }
    }
    ctx->pc = 0x246508u;
label_246508:
    // 0x246508: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24650c:
    // 0x24650c: 0x0  nop
    ctx->pc = 0x24650cu;
    // NOP
label_246510:
    // 0x246510: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x246510u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_246514:
    // 0x246514: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x246514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_246518:
    // 0x246518: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x246518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24651c:
    // 0x24651c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x24651cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_246520:
    // 0x246520: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x246520u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_246524:
    // 0x246524: 0x0  nop
    ctx->pc = 0x246524u;
    // NOP
label_246528:
    // 0x246528: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_24652c:
    if (ctx->pc == 0x24652Cu) {
        ctx->pc = 0x246530u;
        goto label_246530;
    }
    ctx->pc = 0x246528u;
    {
        const bool branch_taken_0x246528 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x246528) {
            ctx->pc = 0x246534u;
            goto label_246534;
        }
    }
    ctx->pc = 0x246530u;
label_246530:
    // 0x246530: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x246530u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_246534:
    // 0x246534: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x246534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_246538:
    // 0x246538: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x246538u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24653c:
    // 0x24653c: 0x0  nop
    ctx->pc = 0x24653cu;
    // NOP
label_246540:
    // 0x246540: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x246540u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_246544:
    // 0x246544: 0x0  nop
    ctx->pc = 0x246544u;
    // NOP
label_246548:
    // 0x246548: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_24654c:
    if (ctx->pc == 0x24654Cu) {
        ctx->pc = 0x246550u;
        goto label_246550;
    }
    ctx->pc = 0x246548u;
    {
        const bool branch_taken_0x246548 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x246548) {
            ctx->pc = 0x246554u;
            goto label_246554;
        }
    }
    ctx->pc = 0x246550u;
label_246550:
    // 0x246550: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x246550u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_246554:
    // 0x246554: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x246554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_246558:
    // 0x246558: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x246558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_24655c:
    // 0x24655c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24655cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_246560:
    // 0x246560: 0x0  nop
    ctx->pc = 0x246560u;
    // NOP
label_246564:
    // 0x246564: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x246564u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_246568:
    // 0x246568: 0x0  nop
    ctx->pc = 0x246568u;
    // NOP
label_24656c:
    // 0x24656c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_246570:
    if (ctx->pc == 0x246570u) {
        ctx->pc = 0x246574u;
        goto label_246574;
    }
    ctx->pc = 0x24656Cu;
    {
        const bool branch_taken_0x24656c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24656c) {
            ctx->pc = 0x246578u;
            goto label_246578;
        }
    }
    ctx->pc = 0x246574u;
label_246574:
    // 0x246574: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x246574u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_246578:
    // 0x246578: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x246578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24657c:
    // 0x24657c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24657cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_246580:
    // 0x246580: 0x0  nop
    ctx->pc = 0x246580u;
    // NOP
label_246584:
    // 0x246584: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x246584u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_246588:
    // 0x246588: 0x0  nop
    ctx->pc = 0x246588u;
    // NOP
label_24658c:
    // 0x24658c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_246590:
    if (ctx->pc == 0x246590u) {
        ctx->pc = 0x246594u;
        goto label_246594;
    }
    ctx->pc = 0x24658Cu;
    {
        const bool branch_taken_0x24658c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24658c) {
            ctx->pc = 0x246598u;
            goto label_246598;
        }
    }
    ctx->pc = 0x246594u;
label_246594:
    // 0x246594: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x246594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_246598:
    // 0x246598: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x246598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_24659c:
    // 0x24659c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x24659cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2465a0:
    // 0x2465a0: 0xc052cf0  jal         func_14B3C0
label_2465a4:
    if (ctx->pc == 0x2465A4u) {
        ctx->pc = 0x2465A4u;
            // 0x2465a4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x2465A8u;
        goto label_2465a8;
    }
    ctx->pc = 0x2465A0u;
    SET_GPR_U32(ctx, 31, 0x2465A8u);
    ctx->pc = 0x2465A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2465A0u;
            // 0x2465a4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2465A8u; }
        if (ctx->pc != 0x2465A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2465A8u; }
        if (ctx->pc != 0x2465A8u) { return; }
    }
    ctx->pc = 0x2465A8u;
label_2465a8:
    // 0x2465a8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2465ac:
    if (ctx->pc == 0x2465ACu) {
        ctx->pc = 0x2465B0u;
        goto label_2465b0;
    }
    ctx->pc = 0x2465A8u;
    {
        const bool branch_taken_0x2465a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2465a8) {
            ctx->pc = 0x2465D8u;
            goto label_2465d8;
        }
    }
    ctx->pc = 0x2465B0u;
label_2465b0:
    // 0x2465b0: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x2465b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_2465b4:
    // 0x2465b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2465b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2465b8:
    // 0x2465b8: 0xa623000a  sh          $v1, 0xA($s1)
    ctx->pc = 0x2465b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 3));
label_2465bc:
    // 0x2465bc: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x2465bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_2465c0:
    // 0x2465c0: 0x28610081  slti        $at, $v1, 0x81
    ctx->pc = 0x2465c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)129) ? 1 : 0);
label_2465c4:
    // 0x2465c4: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
label_2465c8:
    if (ctx->pc == 0x2465C8u) {
        ctx->pc = 0x2465C8u;
            // 0x2465c8: 0x32030004  andi        $v1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x2465CCu;
        goto label_2465cc;
    }
    ctx->pc = 0x2465C4u;
    {
        const bool branch_taken_0x2465c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2465C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2465C4u;
            // 0x2465c8: 0x32030004  andi        $v1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2465c4) {
            ctx->pc = 0x24660Cu;
            goto label_24660c;
        }
    }
    ctx->pc = 0x2465CCu;
label_2465cc:
    // 0x2465cc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2465ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2465d0:
    // 0x2465d0: 0x1000000d  b           . + 4 + (0xD << 2)
label_2465d4:
    if (ctx->pc == 0x2465D4u) {
        ctx->pc = 0x2465D4u;
            // 0x2465d4: 0xa623000a  sh          $v1, 0xA($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2465D8u;
        goto label_2465d8;
    }
    ctx->pc = 0x2465D0u;
    {
        const bool branch_taken_0x2465d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2465D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2465D0u;
            // 0x2465d4: 0xa623000a  sh          $v1, 0xA($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2465d0) {
            ctx->pc = 0x246608u;
            goto label_246608;
        }
    }
    ctx->pc = 0x2465D8u;
label_2465d8:
    // 0x2465d8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2465d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2465dc:
    // 0x2465dc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2465dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2465e0:
    // 0x2465e0: 0xc052cf0  jal         func_14B3C0
label_2465e4:
    if (ctx->pc == 0x2465E4u) {
        ctx->pc = 0x2465E4u;
            // 0x2465e4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x2465E8u;
        goto label_2465e8;
    }
    ctx->pc = 0x2465E0u;
    SET_GPR_U32(ctx, 31, 0x2465E8u);
    ctx->pc = 0x2465E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2465E0u;
            // 0x2465e4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2465E8u; }
        if (ctx->pc != 0x2465E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2465E8u; }
        if (ctx->pc != 0x2465E8u) { return; }
    }
    ctx->pc = 0x2465E8u;
label_2465e8:
    // 0x2465e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2465ec:
    if (ctx->pc == 0x2465ECu) {
        ctx->pc = 0x2465F0u;
        goto label_2465f0;
    }
    ctx->pc = 0x2465E8u;
    {
        const bool branch_taken_0x2465e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2465e8) {
            ctx->pc = 0x246608u;
            goto label_246608;
        }
    }
    ctx->pc = 0x2465F0u;
label_2465f0:
    // 0x2465f0: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x2465f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_2465f4:
    // 0x2465f4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2465f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2465f8:
    // 0x2465f8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2465fc:
    if (ctx->pc == 0x2465FCu) {
        ctx->pc = 0x246600u;
        goto label_246600;
    }
    ctx->pc = 0x2465F8u;
    {
        const bool branch_taken_0x2465f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2465f8) {
            ctx->pc = 0x246608u;
            goto label_246608;
        }
    }
    ctx->pc = 0x246600u;
label_246600:
    // 0x246600: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x246600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_246604:
    // 0x246604: 0xa623000a  sh          $v1, 0xA($s1)
    ctx->pc = 0x246604u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 3));
label_246608:
    // 0x246608: 0x32030004  andi        $v1, $s0, 0x4
    ctx->pc = 0x246608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_24660c:
    // 0x24660c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_246610:
    if (ctx->pc == 0x246610u) {
        ctx->pc = 0x246610u;
            // 0x246610: 0x32030008  andi        $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x246614u;
        goto label_246614;
    }
    ctx->pc = 0x24660Cu;
    {
        const bool branch_taken_0x24660c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24660Cu;
            // 0x246610: 0x32030008  andi        $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24660c) {
            ctx->pc = 0x246648u;
            goto label_246648;
        }
    }
    ctx->pc = 0x246614u;
label_246614:
    // 0x246614: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x246614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_246618:
    // 0x246618: 0xc067abc  jal         func_19EAF0
label_24661c:
    if (ctx->pc == 0x24661Cu) {
        ctx->pc = 0x24661Cu;
            // 0x24661c: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->pc = 0x246620u;
        goto label_246620;
    }
    ctx->pc = 0x246618u;
    SET_GPR_U32(ctx, 31, 0x246620u);
    ctx->pc = 0x24661Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246618u;
            // 0x24661c: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EAF0u;
    if (runtime->hasFunction(0x19EAF0u)) {
        auto targetFn = runtime->lookupFunction(0x19EAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246620u; }
        if (ctx->pc != 0x246620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMoney__16CUserDataManagerFi_0x19eaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246620u; }
        if (ctx->pc != 0x246620u) { return; }
    }
    ctx->pc = 0x246620u;
label_246620:
    // 0x246620: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x246620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_246624:
    // 0x246624: 0xc067abc  jal         func_19EAF0
label_246628:
    if (ctx->pc == 0x246628u) {
        ctx->pc = 0x246628u;
            // 0x246628: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24662Cu;
        goto label_24662c;
    }
    ctx->pc = 0x246624u;
    SET_GPR_U32(ctx, 31, 0x24662Cu);
    ctx->pc = 0x246628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246624u;
            // 0x246628: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EAF0u;
    if (runtime->hasFunction(0x19EAF0u)) {
        auto targetFn = runtime->lookupFunction(0x19EAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24662Cu; }
        if (ctx->pc != 0x24662Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMoney__16CUserDataManagerFi_0x19eaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24662Cu; }
        if (ctx->pc != 0x24662Cu) { return; }
    }
    ctx->pc = 0x24662Cu;
label_24662c:
    // 0x24662c: 0x8f8395c0  lw          $v1, -0x6A40($gp)
    ctx->pc = 0x24662cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_246630:
    // 0x246630: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x246630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_246634:
    // 0x246634: 0x24a5abe0  addiu       $a1, $a1, -0x5420
    ctx->pc = 0x246634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945760));
label_246638:
    // 0x246638: 0x8c6401a4  lw          $a0, 0x1A4($v1)
    ctx->pc = 0x246638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 420)));
label_24663c:
    // 0x24663c: 0xc089728  jal         func_225CA0
label_246640:
    if (ctx->pc == 0x246640u) {
        ctx->pc = 0x246640u;
            // 0x246640: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x246644u;
        goto label_246644;
    }
    ctx->pc = 0x24663Cu;
    SET_GPR_U32(ctx, 31, 0x246644u);
    ctx->pc = 0x246640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24663Cu;
            // 0x246640: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246644u; }
        if (ctx->pc != 0x246644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246644u; }
        if (ctx->pc != 0x246644u) { return; }
    }
    ctx->pc = 0x246644u;
label_246644:
    // 0x246644: 0x32030008  andi        $v1, $s0, 0x8
    ctx->pc = 0x246644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_246648:
    // 0x246648: 0x10600226  beqz        $v1, . + 4 + (0x226 << 2)
label_24664c:
    if (ctx->pc == 0x24664Cu) {
        ctx->pc = 0x246650u;
        goto label_246650;
    }
    ctx->pc = 0x246648u;
    {
        const bool branch_taken_0x246648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246648) {
            ctx->pc = 0x246EE4u;
            goto label_246ee4;
        }
    }
    ctx->pc = 0x246650u;
label_246650:
    // 0x246650: 0x83829704  lb          $v0, -0x68FC($gp)
    ctx->pc = 0x246650u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940420)));
label_246654:
    // 0x246654: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_246658:
    if (ctx->pc == 0x246658u) {
        ctx->pc = 0x24665Cu;
        goto label_24665c;
    }
    ctx->pc = 0x246654u;
    {
        const bool branch_taken_0x246654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246654) {
            ctx->pc = 0x246668u;
            goto label_246668;
        }
    }
    ctx->pc = 0x24665Cu;
label_24665c:
    // 0x24665c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24665cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246660:
    // 0x246660: 0xaf809700  sw          $zero, -0x6900($gp)
    ctx->pc = 0x246660u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940416), GPR_U32(ctx, 0));
label_246664:
    // 0x246664: 0xa3829704  sb          $v0, -0x68FC($gp)
    ctx->pc = 0x246664u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940420), (uint8_t)GPR_U32(ctx, 2));
label_246668:
    // 0x246668: 0x8f839700  lw          $v1, -0x6900($gp)
    ctx->pc = 0x246668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940416)));
label_24666c:
    // 0x24666c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24666cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_246670:
    // 0x246670: 0x8f8595c0  lw          $a1, -0x6A40($gp)
    ctx->pc = 0x246670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_246674:
    // 0x246674: 0x244210c0  addiu       $v0, $v0, 0x10C0
    ctx->pc = 0x246674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4288));
label_246678:
    // 0x246678: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x246678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_24667c:
    // 0x24667c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24667cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_246680:
    // 0x246680: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x246680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_246684:
    // 0x246684: 0x84a50114  lh          $a1, 0x114($a1)
    ctx->pc = 0x246684u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 276)));
label_246688:
    // 0x246688: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x246688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24668c:
    // 0x24668c: 0xc067064  jal         func_19C190
label_246690:
    if (ctx->pc == 0x246690u) {
        ctx->pc = 0x246690u;
            // 0x246690: 0x24070078  addiu       $a3, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x246694u;
        goto label_246694;
    }
    ctx->pc = 0x24668Cu;
    SET_GPR_U32(ctx, 31, 0x246694u);
    ctx->pc = 0x246690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24668Cu;
            // 0x246690: 0x24070078  addiu       $a3, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C190u;
    if (runtime->hasFunction(0x19C190u)) {
        auto targetFn = runtime->lookupFunction(0x19C190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246694u; }
        if (ctx->pc != 0x246694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaStatusAttirbuteVol__16CUserDataManagerFiUii_0x19c190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246694u; }
        if (ctx->pc != 0x246694u) { return; }
    }
    ctx->pc = 0x246694u;
label_246694:
    // 0x246694: 0x8f839700  lw          $v1, -0x6900($gp)
    ctx->pc = 0x246694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940416)));
label_246698:
    // 0x246698: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x246698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_24669c:
    // 0x24669c: 0xaf839700  sw          $v1, -0x6900($gp)
    ctx->pc = 0x24669cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940416), GPR_U32(ctx, 3));
label_2466a0:
    // 0x2466a0: 0x8f839700  lw          $v1, -0x6900($gp)
    ctx->pc = 0x2466a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940416)));
label_2466a4:
    // 0x2466a4: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x2466a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
label_2466a8:
    // 0x2466a8: 0x1420020e  bnez        $at, . + 4 + (0x20E << 2)
label_2466ac:
    if (ctx->pc == 0x2466ACu) {
        ctx->pc = 0x2466B0u;
        goto label_2466b0;
    }
    ctx->pc = 0x2466A8u;
    {
        const bool branch_taken_0x2466a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2466a8) {
            ctx->pc = 0x246EE4u;
            goto label_246ee4;
        }
    }
    ctx->pc = 0x2466B0u;
label_2466b0:
    // 0x2466b0: 0xaf809700  sw          $zero, -0x6900($gp)
    ctx->pc = 0x2466b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940416), GPR_U32(ctx, 0));
label_2466b4:
    // 0x2466b4: 0x1000020c  b           . + 4 + (0x20C << 2)
label_2466b8:
    if (ctx->pc == 0x2466B8u) {
        ctx->pc = 0x2466B8u;
            // 0x2466b8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x2466BCu;
        goto label_2466bc;
    }
    ctx->pc = 0x2466B4u;
    {
        const bool branch_taken_0x2466b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2466B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2466B4u;
            // 0x2466b8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2466b4) {
            ctx->pc = 0x246EE8u;
            goto label_246ee8;
        }
    }
    ctx->pc = 0x2466BCu;
label_2466bc:
    // 0x2466bc: 0x122001b4  beqz        $s1, . + 4 + (0x1B4 << 2)
label_2466c0:
    if (ctx->pc == 0x2466C0u) {
        ctx->pc = 0x2466C4u;
        goto label_2466c4;
    }
    ctx->pc = 0x2466BCu;
    {
        const bool branch_taken_0x2466bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2466bc) {
            ctx->pc = 0x246D90u;
            goto label_246d90;
        }
    }
    ctx->pc = 0x2466C4u;
label_2466c4:
    // 0x2466c4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2466c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2466c8:
    // 0x2466c8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2466c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2466cc:
    // 0x2466cc: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x2466ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_2466d0:
    // 0x2466d0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2466d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2466d4:
    // 0x2466d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2466d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2466d8:
    // 0x2466d8: 0xc052cf0  jal         func_14B3C0
label_2466dc:
    if (ctx->pc == 0x2466DCu) {
        ctx->pc = 0x2466DCu;
            // 0x2466dc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2466E0u;
        goto label_2466e0;
    }
    ctx->pc = 0x2466D8u;
    SET_GPR_U32(ctx, 31, 0x2466E0u);
    ctx->pc = 0x2466DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2466D8u;
            // 0x2466dc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2466E0u; }
        if (ctx->pc != 0x2466E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2466E0u; }
        if (ctx->pc != 0x2466E0u) { return; }
    }
    ctx->pc = 0x2466E0u;
label_2466e0:
    // 0x2466e0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2466e4:
    if (ctx->pc == 0x2466E4u) {
        ctx->pc = 0x2466E8u;
        goto label_2466e8;
    }
    ctx->pc = 0x2466E0u;
    {
        const bool branch_taken_0x2466e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2466e0) {
            ctx->pc = 0x2466ECu;
            goto label_2466ec;
        }
    }
    ctx->pc = 0x2466E8u;
label_2466e8:
    // 0x2466e8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2466e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2466ec:
    // 0x2466ec: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2466ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_2466f0:
    // 0x2466f0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2466f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2466f4:
    // 0x2466f4: 0xc052cf0  jal         func_14B3C0
label_2466f8:
    if (ctx->pc == 0x2466F8u) {
        ctx->pc = 0x2466F8u;
            // 0x2466f8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x2466FCu;
        goto label_2466fc;
    }
    ctx->pc = 0x2466F4u;
    SET_GPR_U32(ctx, 31, 0x2466FCu);
    ctx->pc = 0x2466F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2466F4u;
            // 0x2466f8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2466FCu; }
        if (ctx->pc != 0x2466FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2466FCu; }
        if (ctx->pc != 0x2466FCu) { return; }
    }
    ctx->pc = 0x2466FCu;
label_2466fc:
    // 0x2466fc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_246700:
    if (ctx->pc == 0x246700u) {
        ctx->pc = 0x246704u;
        goto label_246704;
    }
    ctx->pc = 0x2466FCu;
    {
        const bool branch_taken_0x2466fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2466fc) {
            ctx->pc = 0x246708u;
            goto label_246708;
        }
    }
    ctx->pc = 0x246704u;
label_246704:
    // 0x246704: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x246704u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246708:
    // 0x246708: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x246708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_24670c:
    // 0x24670c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x24670cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_246710:
    // 0x246710: 0xc052cf0  jal         func_14B3C0
label_246714:
    if (ctx->pc == 0x246714u) {
        ctx->pc = 0x246714u;
            // 0x246714: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x246718u;
        goto label_246718;
    }
    ctx->pc = 0x246710u;
    SET_GPR_U32(ctx, 31, 0x246718u);
    ctx->pc = 0x246714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246710u;
            // 0x246714: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246718u; }
        if (ctx->pc != 0x246718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246718u; }
        if (ctx->pc != 0x246718u) { return; }
    }
    ctx->pc = 0x246718u;
label_246718:
    // 0x246718: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_24671c:
    if (ctx->pc == 0x24671Cu) {
        ctx->pc = 0x246720u;
        goto label_246720;
    }
    ctx->pc = 0x246718u;
    {
        const bool branch_taken_0x246718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246718) {
            ctx->pc = 0x246724u;
            goto label_246724;
        }
    }
    ctx->pc = 0x246720u;
label_246720:
    // 0x246720: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x246720u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246724:
    // 0x246724: 0xdf829708  ld          $v0, -0x68F8($gp)
    ctx->pc = 0x246724u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294940424)));
label_246728:
    // 0x246728: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x246728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_24672c:
    // 0x24672c: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x24672cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_246730:
    // 0x246730: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x246730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_246734:
    // 0x246734: 0xc08f8d8  jal         func_23E360
label_246738:
    if (ctx->pc == 0x246738u) {
        ctx->pc = 0x246738u;
            // 0x246738: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24673Cu;
        goto label_24673c;
    }
    ctx->pc = 0x246734u;
    SET_GPR_U32(ctx, 31, 0x24673Cu);
    ctx->pc = 0x246738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246734u;
            // 0x246738: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E360u;
    if (runtime->hasFunction(0x23E360u)) {
        auto targetFn = runtime->lookupFunction(0x23E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24673Cu; }
        if (ctx->pc != 0x24673Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckAnalogKey__12CMenuKeyFuncFiPf_0x23e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24673Cu; }
        if (ctx->pc != 0x24673Cu) { return; }
    }
    ctx->pc = 0x24673Cu;
label_24673c:
    // 0x24673c: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x24673cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_246740:
    // 0x246740: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x246740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_246744:
    // 0x246744: 0x148301e7  bne         $a0, $v1, . + 4 + (0x1E7 << 2)
label_246748:
    if (ctx->pc == 0x246748u) {
        ctx->pc = 0x24674Cu;
        goto label_24674c;
    }
    ctx->pc = 0x246744u;
    {
        const bool branch_taken_0x246744 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x246744) {
            ctx->pc = 0x246EE4u;
            goto label_246ee4;
        }
    }
    ctx->pc = 0x24674Cu;
label_24674c:
    // 0x24674c: 0x12600034  beqz        $s3, . + 4 + (0x34 << 2)
label_246750:
    if (ctx->pc == 0x246750u) {
        ctx->pc = 0x246754u;
        goto label_246754;
    }
    ctx->pc = 0x24674Cu;
    {
        const bool branch_taken_0x24674c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x24674c) {
            ctx->pc = 0x246820u;
            goto label_246820;
        }
    }
    ctx->pc = 0x246754u;
label_246754:
    // 0x246754: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
label_246758:
    if (ctx->pc == 0x246758u) {
        ctx->pc = 0x246758u;
            // 0x246758: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x24675Cu;
        goto label_24675c;
    }
    ctx->pc = 0x246754u;
    {
        const bool branch_taken_0x246754 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x246758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246754u;
            // 0x246758: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246754) {
            ctx->pc = 0x246770u;
            goto label_246770;
        }
    }
    ctx->pc = 0x24675Cu;
label_24675c:
    // 0x24675c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x24675cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_246760:
    // 0x246760: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x246760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_246764:
    // 0x246764: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x246764u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_246768:
    // 0x246768: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x246768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_24676c:
    // 0x24676c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24676cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246770:
    // 0x246770: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
label_246774:
    if (ctx->pc == 0x246774u) {
        ctx->pc = 0x246778u;
        goto label_246778;
    }
    ctx->pc = 0x246770u;
    {
        const bool branch_taken_0x246770 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x246770) {
            ctx->pc = 0x246788u;
            goto label_246788;
        }
    }
    ctx->pc = 0x246778u;
label_246778:
    // 0x246778: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x246778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24677c:
    // 0x24677c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x24677cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_246780:
    // 0x246780: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x246780u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_246784:
    // 0x246784: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x246784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_246788:
    // 0x246788: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x246788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24678c:
    // 0x24678c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24678cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_246790:
    // 0x246790: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x246790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_246794:
    // 0x246794: 0x0  nop
    ctx->pc = 0x246794u;
    // NOP
label_246798:
    // 0x246798: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x246798u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24679c:
    // 0x24679c: 0x0  nop
    ctx->pc = 0x24679cu;
    // NOP
label_2467a0:
    // 0x2467a0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2467a4:
    if (ctx->pc == 0x2467A4u) {
        ctx->pc = 0x2467A8u;
        goto label_2467a8;
    }
    ctx->pc = 0x2467A0u;
    {
        const bool branch_taken_0x2467a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2467a0) {
            ctx->pc = 0x2467ACu;
            goto label_2467ac;
        }
    }
    ctx->pc = 0x2467A8u;
label_2467a8:
    // 0x2467a8: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x2467a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_2467ac:
    // 0x2467ac: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2467acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2467b0:
    // 0x2467b0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2467b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_2467b4:
    // 0x2467b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2467b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2467b8:
    // 0x2467b8: 0x0  nop
    ctx->pc = 0x2467b8u;
    // NOP
label_2467bc:
    // 0x2467bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2467bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2467c0:
    // 0x2467c0: 0x0  nop
    ctx->pc = 0x2467c0u;
    // NOP
label_2467c4:
    // 0x2467c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2467c8:
    if (ctx->pc == 0x2467C8u) {
        ctx->pc = 0x2467CCu;
        goto label_2467cc;
    }
    ctx->pc = 0x2467C4u;
    {
        const bool branch_taken_0x2467c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2467c4) {
            ctx->pc = 0x2467D0u;
            goto label_2467d0;
        }
    }
    ctx->pc = 0x2467CCu;
label_2467cc:
    // 0x2467cc: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x2467ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_2467d0:
    // 0x2467d0: 0xc0945c8  jal         func_251720
label_2467d4:
    if (ctx->pc == 0x2467D4u) {
        ctx->pc = 0x2467D4u;
            // 0x2467d4: 0xc62c0010  lwc1        $f12, 0x10($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2467D8u;
        goto label_2467d8;
    }
    ctx->pc = 0x2467D0u;
    SET_GPR_U32(ctx, 31, 0x2467D8u);
    ctx->pc = 0x2467D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2467D0u;
            // 0x2467d4: 0xc62c0010  lwc1        $f12, 0x10($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x251720u;
    if (runtime->hasFunction(0x251720u)) {
        auto targetFn = runtime->lookupFunction(0x251720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2467D8u; }
        if (ctx->pc != 0x2467D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDispVolumeForFloat__Ff_0x251720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2467D8u; }
        if (ctx->pc != 0x2467D8u) { return; }
    }
    ctx->pc = 0x2467D8u;
label_2467d8:
    // 0x2467d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2467d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2467dc:
    // 0x2467dc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2467dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2467e0:
    // 0x2467e0: 0x0  nop
    ctx->pc = 0x2467e0u;
    // NOP
label_2467e4:
    // 0x2467e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2467e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2467e8:
    // 0x2467e8: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2467e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_2467ec:
    // 0x2467ec: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2467ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2467f0:
    // 0x2467f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2467f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2467f4:
    // 0x2467f4: 0x0  nop
    ctx->pc = 0x2467f4u;
    // NOP
label_2467f8:
    // 0x2467f8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2467fc:
    if (ctx->pc == 0x2467FCu) {
        ctx->pc = 0x246800u;
        goto label_246800;
    }
    ctx->pc = 0x2467F8u;
    {
        const bool branch_taken_0x2467f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2467f8) {
            ctx->pc = 0x246804u;
            goto label_246804;
        }
    }
    ctx->pc = 0x246800u;
label_246800:
    // 0x246800: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x246800u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_246804:
    // 0x246804: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x246804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_246808:
    // 0x246808: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x246808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24680c:
    // 0x24680c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24680cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_246810:
    // 0x246810: 0x0  nop
    ctx->pc = 0x246810u;
    // NOP
label_246814:
    // 0x246814: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_246818:
    if (ctx->pc == 0x246818u) {
        ctx->pc = 0x24681Cu;
        goto label_24681c;
    }
    ctx->pc = 0x246814u;
    {
        const bool branch_taken_0x246814 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x246814) {
            ctx->pc = 0x246820u;
            goto label_246820;
        }
    }
    ctx->pc = 0x24681Cu;
label_24681c:
    // 0x24681c: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x24681cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_246820:
    // 0x246820: 0x12800036  beqz        $s4, . + 4 + (0x36 << 2)
label_246824:
    if (ctx->pc == 0x246824u) {
        ctx->pc = 0x246824u;
            // 0x246824: 0x32030001  andi        $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x246828u;
        goto label_246828;
    }
    ctx->pc = 0x246820u;
    {
        const bool branch_taken_0x246820 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x246824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246820u;
            // 0x246824: 0x32030001  andi        $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246820) {
            ctx->pc = 0x2468FCu;
            goto label_2468fc;
        }
    }
    ctx->pc = 0x246828u;
label_246828:
    // 0x246828: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
label_24682c:
    if (ctx->pc == 0x24682Cu) {
        ctx->pc = 0x24682Cu;
            // 0x24682c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x246830u;
        goto label_246830;
    }
    ctx->pc = 0x246828u;
    {
        const bool branch_taken_0x246828 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x24682Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246828u;
            // 0x24682c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246828) {
            ctx->pc = 0x246844u;
            goto label_246844;
        }
    }
    ctx->pc = 0x246830u;
label_246830:
    // 0x246830: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x246830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_246834:
    // 0x246834: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x246834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_246838:
    // 0x246838: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x246838u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_24683c:
    // 0x24683c: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x24683cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_246840:
    // 0x246840: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x246840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246844:
    // 0x246844: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
label_246848:
    if (ctx->pc == 0x246848u) {
        ctx->pc = 0x24684Cu;
        goto label_24684c;
    }
    ctx->pc = 0x246844u;
    {
        const bool branch_taken_0x246844 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x246844) {
            ctx->pc = 0x24685Cu;
            goto label_24685c;
        }
    }
    ctx->pc = 0x24684Cu;
label_24684c:
    // 0x24684c: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x24684cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_246850:
    // 0x246850: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x246850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_246854:
    // 0x246854: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x246854u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_246858:
    // 0x246858: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x246858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_24685c:
    // 0x24685c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x24685cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_246860:
    // 0x246860: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x246860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_246864:
    // 0x246864: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x246864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_246868:
    // 0x246868: 0x0  nop
    ctx->pc = 0x246868u;
    // NOP
label_24686c:
    // 0x24686c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24686cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_246870:
    // 0x246870: 0x0  nop
    ctx->pc = 0x246870u;
    // NOP
label_246874:
    // 0x246874: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_246878:
    if (ctx->pc == 0x246878u) {
        ctx->pc = 0x24687Cu;
        goto label_24687c;
    }
    ctx->pc = 0x246874u;
    {
        const bool branch_taken_0x246874 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x246874) {
            ctx->pc = 0x246880u;
            goto label_246880;
        }
    }
    ctx->pc = 0x24687Cu;
label_24687c:
    // 0x24687c: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x24687cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_246880:
    // 0x246880: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x246880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_246884:
    // 0x246884: 0x3c0247c3  lui         $v0, 0x47C3
    ctx->pc = 0x246884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18371 << 16));
label_246888:
    // 0x246888: 0x34424f80  ori         $v0, $v0, 0x4F80
    ctx->pc = 0x246888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20352);
label_24688c:
    // 0x24688c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24688cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_246890:
    // 0x246890: 0x0  nop
    ctx->pc = 0x246890u;
    // NOP
label_246894:
    // 0x246894: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x246894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_246898:
    // 0x246898: 0x0  nop
    ctx->pc = 0x246898u;
    // NOP
label_24689c:
    // 0x24689c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2468a0:
    if (ctx->pc == 0x2468A0u) {
        ctx->pc = 0x2468A4u;
        goto label_2468a4;
    }
    ctx->pc = 0x24689Cu;
    {
        const bool branch_taken_0x24689c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24689c) {
            ctx->pc = 0x2468A8u;
            goto label_2468a8;
        }
    }
    ctx->pc = 0x2468A4u;
label_2468a4:
    // 0x2468a4: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x2468a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_2468a8:
    // 0x2468a8: 0xc0945c8  jal         func_251720
label_2468ac:
    if (ctx->pc == 0x2468ACu) {
        ctx->pc = 0x2468ACu;
            // 0x2468ac: 0xc62c0018  lwc1        $f12, 0x18($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2468B0u;
        goto label_2468b0;
    }
    ctx->pc = 0x2468A8u;
    SET_GPR_U32(ctx, 31, 0x2468B0u);
    ctx->pc = 0x2468ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2468A8u;
            // 0x2468ac: 0xc62c0018  lwc1        $f12, 0x18($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x251720u;
    if (runtime->hasFunction(0x251720u)) {
        auto targetFn = runtime->lookupFunction(0x251720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2468B0u; }
        if (ctx->pc != 0x2468B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDispVolumeForFloat__Ff_0x251720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2468B0u; }
        if (ctx->pc != 0x2468B0u) { return; }
    }
    ctx->pc = 0x2468B0u;
label_2468b0:
    // 0x2468b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2468b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2468b4:
    // 0x2468b4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2468b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2468b8:
    // 0x2468b8: 0x0  nop
    ctx->pc = 0x2468b8u;
    // NOP
label_2468bc:
    // 0x2468bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2468bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2468c0:
    // 0x2468c0: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x2468c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_2468c4:
    // 0x2468c4: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2468c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2468c8:
    // 0x2468c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2468c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2468cc:
    // 0x2468cc: 0x0  nop
    ctx->pc = 0x2468ccu;
    // NOP
label_2468d0:
    // 0x2468d0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2468d4:
    if (ctx->pc == 0x2468D4u) {
        ctx->pc = 0x2468D8u;
        goto label_2468d8;
    }
    ctx->pc = 0x2468D0u;
    {
        const bool branch_taken_0x2468d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2468d0) {
            ctx->pc = 0x2468DCu;
            goto label_2468dc;
        }
    }
    ctx->pc = 0x2468D8u;
label_2468d8:
    // 0x2468d8: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x2468d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_2468dc:
    // 0x2468dc: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x2468dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2468e0:
    // 0x2468e0: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2468e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2468e4:
    // 0x2468e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2468e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2468e8:
    // 0x2468e8: 0x0  nop
    ctx->pc = 0x2468e8u;
    // NOP
label_2468ec:
    // 0x2468ec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2468f0:
    if (ctx->pc == 0x2468F0u) {
        ctx->pc = 0x2468F4u;
        goto label_2468f4;
    }
    ctx->pc = 0x2468ECu;
    {
        const bool branch_taken_0x2468ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2468ec) {
            ctx->pc = 0x2468F8u;
            goto label_2468f8;
        }
    }
    ctx->pc = 0x2468F4u;
label_2468f4:
    // 0x2468f4: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x2468f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_2468f8:
    // 0x2468f8: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x2468f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_2468fc:
    // 0x2468fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_246900:
    if (ctx->pc == 0x246900u) {
        ctx->pc = 0x246900u;
            // 0x246900: 0x32030002  andi        $v1, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x246904u;
        goto label_246904;
    }
    ctx->pc = 0x2468FCu;
    {
        const bool branch_taken_0x2468fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2468FCu;
            // 0x246900: 0x32030002  andi        $v1, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2468fc) {
            ctx->pc = 0x246914u;
            goto label_246914;
        }
    }
    ctx->pc = 0x246904u;
label_246904:
    // 0x246904: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x246904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_246908:
    // 0x246908: 0xc065f78  jal         func_197DE0
label_24690c:
    if (ctx->pc == 0x24690Cu) {
        ctx->pc = 0x24690Cu;
            // 0x24690c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x246910u;
        goto label_246910;
    }
    ctx->pc = 0x246908u;
    SET_GPR_U32(ctx, 31, 0x246910u);
    ctx->pc = 0x24690Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246908u;
            // 0x24690c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197DE0u;
    if (runtime->hasFunction(0x197DE0u)) {
        auto targetFn = runtime->lookupFunction(0x197DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246910u; }
        if (ctx->pc != 0x246910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFusionPoint__13CGameDataUsedFi_0x197de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246910u; }
        if (ctx->pc != 0x246910u) { return; }
    }
    ctx->pc = 0x246910u;
label_246910:
    // 0x246910: 0x32030002  andi        $v1, $s0, 0x2
    ctx->pc = 0x246910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_246914:
    // 0x246914: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_246918:
    if (ctx->pc == 0x246918u) {
        ctx->pc = 0x246918u;
            // 0x246918: 0x32030008  andi        $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x24691Cu;
        goto label_24691c;
    }
    ctx->pc = 0x246914u;
    {
        const bool branch_taken_0x246914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246914u;
            // 0x246918: 0x32030008  andi        $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246914) {
            ctx->pc = 0x24692Cu;
            goto label_24692c;
        }
    }
    ctx->pc = 0x24691Cu;
label_24691c:
    // 0x24691c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24691cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_246920:
    // 0x246920: 0xc065f78  jal         func_197DE0
label_246924:
    if (ctx->pc == 0x246924u) {
        ctx->pc = 0x246924u;
            // 0x246924: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x246928u;
        goto label_246928;
    }
    ctx->pc = 0x246920u;
    SET_GPR_U32(ctx, 31, 0x246928u);
    ctx->pc = 0x246924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246920u;
            // 0x246924: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197DE0u;
    if (runtime->hasFunction(0x197DE0u)) {
        auto targetFn = runtime->lookupFunction(0x197DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246928u; }
        if (ctx->pc != 0x246928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFusionPoint__13CGameDataUsedFi_0x197de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246928u; }
        if (ctx->pc != 0x246928u) { return; }
    }
    ctx->pc = 0x246928u;
label_246928:
    // 0x246928: 0x32030008  andi        $v1, $s0, 0x8
    ctx->pc = 0x246928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_24692c:
    // 0x24692c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_246930:
    if (ctx->pc == 0x246930u) {
        ctx->pc = 0x246930u;
            // 0x246930: 0x32030004  andi        $v1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x246934u;
        goto label_246934;
    }
    ctx->pc = 0x24692Cu;
    {
        const bool branch_taken_0x24692c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24692Cu;
            // 0x246930: 0x32030004  andi        $v1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24692c) {
            ctx->pc = 0x246944u;
            goto label_246944;
        }
    }
    ctx->pc = 0x246934u;
label_246934:
    // 0x246934: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x246934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_246938:
    // 0x246938: 0xc065f78  jal         func_197DE0
label_24693c:
    if (ctx->pc == 0x24693Cu) {
        ctx->pc = 0x24693Cu;
            // 0x24693c: 0x240501f4  addiu       $a1, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->pc = 0x246940u;
        goto label_246940;
    }
    ctx->pc = 0x246938u;
    SET_GPR_U32(ctx, 31, 0x246940u);
    ctx->pc = 0x24693Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246938u;
            // 0x24693c: 0x240501f4  addiu       $a1, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197DE0u;
    if (runtime->hasFunction(0x197DE0u)) {
        auto targetFn = runtime->lookupFunction(0x197DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246940u; }
        if (ctx->pc != 0x246940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFusionPoint__13CGameDataUsedFi_0x197de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246940u; }
        if (ctx->pc != 0x246940u) { return; }
    }
    ctx->pc = 0x246940u;
label_246940:
    // 0x246940: 0x32030004  andi        $v1, $s0, 0x4
    ctx->pc = 0x246940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_246944:
    // 0x246944: 0x10600167  beqz        $v1, . + 4 + (0x167 << 2)
label_246948:
    if (ctx->pc == 0x246948u) {
        ctx->pc = 0x24694Cu;
        goto label_24694c;
    }
    ctx->pc = 0x246944u;
    {
        const bool branch_taken_0x246944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246944) {
            ctx->pc = 0x246EE4u;
            goto label_246ee4;
        }
    }
    ctx->pc = 0x24694Cu;
label_24694c:
    // 0x24694c: 0xc066188  jal         func_198620
label_246950:
    if (ctx->pc == 0x246950u) {
        ctx->pc = 0x246950u;
            // 0x246950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x246954u;
        goto label_246954;
    }
    ctx->pc = 0x24694Cu;
    SET_GPR_U32(ctx, 31, 0x246954u);
    ctx->pc = 0x246950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24694Cu;
            // 0x246950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198620u;
    if (runtime->hasFunction(0x198620u)) {
        auto targetFn = runtime->lookupFunction(0x198620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246954u; }
        if (ctx->pc != 0x246954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LevelUp__13CGameDataUsedFv_0x198620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246954u; }
        if (ctx->pc != 0x246954u) { return; }
    }
    ctx->pc = 0x246954u;
label_246954:
    // 0x246954: 0xc094274  jal         func_2509D0
label_246958:
    if (ctx->pc == 0x246958u) {
        ctx->pc = 0x246958u;
            // 0x246958: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x24695Cu;
        goto label_24695c;
    }
    ctx->pc = 0x246954u;
    SET_GPR_U32(ctx, 31, 0x24695Cu);
    ctx->pc = 0x246958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246954u;
            // 0x246958: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24695Cu; }
        if (ctx->pc != 0x24695Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24695Cu; }
        if (ctx->pc != 0x24695Cu) { return; }
    }
    ctx->pc = 0x24695Cu;
label_24695c:
    // 0x24695c: 0x10000161  b           . + 4 + (0x161 << 2)
label_246960:
    if (ctx->pc == 0x246960u) {
        ctx->pc = 0x246964u;
        goto label_246964;
    }
    ctx->pc = 0x24695Cu;
    {
        const bool branch_taken_0x24695c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24695c) {
            ctx->pc = 0x246EE4u;
            goto label_246ee4;
        }
    }
    ctx->pc = 0x246964u;
label_246964:
    // 0x246964: 0x1220010a  beqz        $s1, . + 4 + (0x10A << 2)
label_246968:
    if (ctx->pc == 0x246968u) {
        ctx->pc = 0x24696Cu;
        goto label_24696c;
    }
    ctx->pc = 0x246964u;
    {
        const bool branch_taken_0x246964 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x246964) {
            ctx->pc = 0x246D90u;
            goto label_246d90;
        }
    }
    ctx->pc = 0x24696Cu;
label_24696c:
    // 0x24696c: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x24696cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_246970:
    // 0x246970: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x246970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_246974:
    // 0x246974: 0x1483003c  bne         $a0, $v1, . + 4 + (0x3C << 2)
label_246978:
    if (ctx->pc == 0x246978u) {
        ctx->pc = 0x24697Cu;
        goto label_24697c;
    }
    ctx->pc = 0x246974u;
    {
        const bool branch_taken_0x246974 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x246974) {
            ctx->pc = 0x246A68u;
            goto label_246a68;
        }
    }
    ctx->pc = 0x24697Cu;
label_24697c:
    // 0x24697c: 0xc065710  jal         func_195C40
label_246980:
    if (ctx->pc == 0x246980u) {
        ctx->pc = 0x246980u;
            // 0x246980: 0x86240002  lh          $a0, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->pc = 0x246984u;
        goto label_246984;
    }
    ctx->pc = 0x24697Cu;
    SET_GPR_U32(ctx, 31, 0x246984u);
    ctx->pc = 0x246980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24697Cu;
            // 0x246980: 0x86240002  lh          $a0, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C40u;
    if (runtime->hasFunction(0x195C40u)) {
        auto targetFn = runtime->lookupFunction(0x195C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246984u; }
        if (ctx->pc != 0x246984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWeaponInfoData__Fi_0x195c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246984u; }
        if (ctx->pc != 0x246984u) { return; }
    }
    ctx->pc = 0x246984u;
label_246984:
    // 0x246984: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x246984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_246988:
    // 0x246988: 0xc08f80c  jal         func_23E030
label_24698c:
    if (ctx->pc == 0x24698Cu) {
        ctx->pc = 0x24698Cu;
            // 0x24698c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x246990u;
        goto label_246990;
    }
    ctx->pc = 0x246988u;
    SET_GPR_U32(ctx, 31, 0x246990u);
    ctx->pc = 0x24698Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246988u;
            // 0x24698c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E030u;
    if (runtime->hasFunction(0x23E030u)) {
        auto targetFn = runtime->lookupFunction(0x23E030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246990u; }
        if (ctx->pc != 0x246990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSelectKey__12CMenuKeyFuncFv_0x23e030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246990u; }
        if (ctx->pc != 0x246990u) { return; }
    }
    ctx->pc = 0x246990u;
label_246990:
    // 0x246990: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x246990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_246994:
    // 0x246994: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x246994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_246998:
    // 0x246998: 0xdf829710  ld          $v0, -0x68F0($gp)
    ctx->pc = 0x246998u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294940432)));
label_24699c:
    // 0x24699c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24699cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2469a0:
    // 0x2469a0: 0x8c930070  lw          $s3, 0x70($a0)
    ctx->pc = 0x2469a0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2469a4:
    // 0x2469a4: 0xc08f8d8  jal         func_23E360
label_2469a8:
    if (ctx->pc == 0x2469A8u) {
        ctx->pc = 0x2469A8u;
            // 0x2469a8: 0xfcc20000  sd          $v0, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
        ctx->pc = 0x2469ACu;
        goto label_2469ac;
    }
    ctx->pc = 0x2469A4u;
    SET_GPR_U32(ctx, 31, 0x2469ACu);
    ctx->pc = 0x2469A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2469A4u;
            // 0x2469a8: 0xfcc20000  sd          $v0, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E360u;
    if (runtime->hasFunction(0x23E360u)) {
        auto targetFn = runtime->lookupFunction(0x23E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2469ACu; }
        if (ctx->pc != 0x2469ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckAnalogKey__12CMenuKeyFuncFiPf_0x23e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2469ACu; }
        if (ctx->pc != 0x2469ACu) { return; }
    }
    ctx->pc = 0x2469ACu;
label_2469ac:
    // 0x2469ac: 0x2a610002  slti        $at, $s3, 0x2
    ctx->pc = 0x2469acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_2469b0:
    // 0x2469b0: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_2469b4:
    if (ctx->pc == 0x2469B4u) {
        ctx->pc = 0x2469B8u;
        goto label_2469b8;
    }
    ctx->pc = 0x2469B0u;
    {
        const bool branch_taken_0x2469b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2469b0) {
            ctx->pc = 0x246A10u;
            goto label_246a10;
        }
    }
    ctx->pc = 0x2469B8u;
label_2469b8:
    // 0x2469b8: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x2469b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2469bc:
    // 0x2469bc: 0x13a040  sll         $s4, $s3, 1
    ctx->pc = 0x2469bcu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_2469c0:
    // 0x2469c0: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x2469c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_2469c4:
    // 0x2469c4: 0xc0a248c  jal         func_289230
label_2469c8:
    if (ctx->pc == 0x2469C8u) {
        ctx->pc = 0x2469C8u;
            // 0x2469c8: 0x24530022  addiu       $s3, $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 34));
        ctx->pc = 0x2469CCu;
        goto label_2469cc;
    }
    ctx->pc = 0x2469C4u;
    SET_GPR_U32(ctx, 31, 0x2469CCu);
    ctx->pc = 0x2469C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2469C4u;
            // 0x2469c8: 0x24530022  addiu       $s3, $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 34));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2469CCu; }
        if (ctx->pc != 0x2469CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2469CCu; }
        if (ctx->pc != 0x2469CCu) { return; }
    }
    ctx->pc = 0x2469CCu;
label_2469cc:
    // 0x2469cc: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x2469ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_2469d0:
    // 0x2469d0: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x2469d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_2469d4:
    // 0x2469d4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2469d4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_2469d8:
    // 0x2469d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2469d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2469dc:
    // 0x2469dc: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x2469dcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
label_2469e0:
    // 0x2469e0: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x2469e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_2469e4:
    // 0x2469e4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_2469e8:
    if (ctx->pc == 0x2469E8u) {
        ctx->pc = 0x2469E8u;
            // 0x2469e8: 0x2922021  addu        $a0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->pc = 0x2469ECu;
        goto label_2469ec;
    }
    ctx->pc = 0x2469E4u;
    {
        const bool branch_taken_0x2469e4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2469E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2469E4u;
            // 0x2469e8: 0x2922021  addu        $a0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2469e4) {
            ctx->pc = 0x2469F4u;
            goto label_2469f4;
        }
    }
    ctx->pc = 0x2469ECu;
label_2469ec:
    // 0x2469ec: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x2469ecu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
label_2469f0:
    // 0x2469f0: 0x2922021  addu        $a0, $s4, $s2
    ctx->pc = 0x2469f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_2469f4:
    // 0x2469f4: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x2469f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_2469f8:
    // 0x2469f8: 0x84840008  lh          $a0, 0x8($a0)
    ctx->pc = 0x2469f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
label_2469fc:
    // 0x2469fc: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2469fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_246a00:
    // 0x246a00: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_246a04:
    if (ctx->pc == 0x246A04u) {
        ctx->pc = 0x246A08u;
        goto label_246a08;
    }
    ctx->pc = 0x246A00u;
    {
        const bool branch_taken_0x246a00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246a00) {
            ctx->pc = 0x246A68u;
            goto label_246a68;
        }
    }
    ctx->pc = 0x246A08u;
label_246a08:
    // 0x246a08: 0x10000017  b           . + 4 + (0x17 << 2)
label_246a0c:
    if (ctx->pc == 0x246A0Cu) {
        ctx->pc = 0x246A0Cu;
            // 0x246a0c: 0xa6640000  sh          $a0, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x246A10u;
        goto label_246a10;
    }
    ctx->pc = 0x246A08u;
    {
        const bool branch_taken_0x246a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246A08u;
            // 0x246a0c: 0xa6640000  sh          $a0, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a08) {
            ctx->pc = 0x246A68u;
            goto label_246a68;
        }
    }
    ctx->pc = 0x246A10u;
label_246a10:
    // 0x246a10: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x246a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_246a14:
    // 0x246a14: 0x2662fffe  addiu       $v0, $s3, -0x2
    ctx->pc = 0x246a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
label_246a18:
    // 0x246a18: 0x2a040  sll         $s4, $v0, 1
    ctx->pc = 0x246a18u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_246a1c:
    // 0x246a1c: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x246a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_246a20:
    // 0x246a20: 0xc0a248c  jal         func_289230
label_246a24:
    if (ctx->pc == 0x246A24u) {
        ctx->pc = 0x246A24u;
            // 0x246a24: 0x24530026  addiu       $s3, $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 38));
        ctx->pc = 0x246A28u;
        goto label_246a28;
    }
    ctx->pc = 0x246A20u;
    SET_GPR_U32(ctx, 31, 0x246A28u);
    ctx->pc = 0x246A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246A20u;
            // 0x246a24: 0x24530026  addiu       $s3, $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246A28u; }
        if (ctx->pc != 0x246A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246A28u; }
        if (ctx->pc != 0x246A28u) { return; }
    }
    ctx->pc = 0x246A28u;
label_246a28:
    // 0x246a28: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x246a28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_246a2c:
    // 0x246a2c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x246a2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_246a30:
    // 0x246a30: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246a30u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246a34:
    // 0x246a34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x246a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_246a38:
    // 0x246a38: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x246a38u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
label_246a3c:
    // 0x246a3c: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x246a3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_246a40:
    // 0x246a40: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_246a44:
    if (ctx->pc == 0x246A44u) {
        ctx->pc = 0x246A44u;
            // 0x246a44: 0x2922021  addu        $a0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->pc = 0x246A48u;
        goto label_246a48;
    }
    ctx->pc = 0x246A40u;
    {
        const bool branch_taken_0x246a40 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x246A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246A40u;
            // 0x246a44: 0x2922021  addu        $a0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a40) {
            ctx->pc = 0x246A50u;
            goto label_246a50;
        }
    }
    ctx->pc = 0x246A48u;
label_246a48:
    // 0x246a48: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x246a48u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
label_246a4c:
    // 0x246a4c: 0x2922021  addu        $a0, $s4, $s2
    ctx->pc = 0x246a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_246a50:
    // 0x246a50: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x246a50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_246a54:
    // 0x246a54: 0x8484001c  lh          $a0, 0x1C($a0)
    ctx->pc = 0x246a54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
label_246a58:
    // 0x246a58: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x246a58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_246a5c:
    // 0x246a5c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_246a60:
    if (ctx->pc == 0x246A60u) {
        ctx->pc = 0x246A64u;
        goto label_246a64;
    }
    ctx->pc = 0x246A5Cu;
    {
        const bool branch_taken_0x246a5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246a5c) {
            ctx->pc = 0x246A68u;
            goto label_246a68;
        }
    }
    ctx->pc = 0x246A64u;
label_246a64:
    // 0x246a64: 0xa6640000  sh          $a0, 0x0($s3)
    ctx->pc = 0x246a64u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 4));
label_246a68:
    // 0x246a68: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x246a68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_246a6c:
    // 0x246a6c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x246a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_246a70:
    // 0x246a70: 0x148300c7  bne         $a0, $v1, . + 4 + (0xC7 << 2)
label_246a74:
    if (ctx->pc == 0x246A74u) {
        ctx->pc = 0x246A78u;
        goto label_246a78;
    }
    ctx->pc = 0x246A70u;
    {
        const bool branch_taken_0x246a70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x246a70) {
            ctx->pc = 0x246D90u;
            goto label_246d90;
        }
    }
    ctx->pc = 0x246A78u;
label_246a78:
    // 0x246a78: 0xc08f80c  jal         func_23E030
label_246a7c:
    if (ctx->pc == 0x246A7Cu) {
        ctx->pc = 0x246A7Cu;
            // 0x246a7c: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->pc = 0x246A80u;
        goto label_246a80;
    }
    ctx->pc = 0x246A78u;
    SET_GPR_U32(ctx, 31, 0x246A80u);
    ctx->pc = 0x246A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246A78u;
            // 0x246a7c: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E030u;
    if (runtime->hasFunction(0x23E030u)) {
        auto targetFn = runtime->lookupFunction(0x23E030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246A80u; }
        if (ctx->pc != 0x246A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSelectKey__12CMenuKeyFuncFv_0x23e030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246A80u; }
        if (ctx->pc != 0x246A80u) { return; }
    }
    ctx->pc = 0x246A80u;
label_246a80:
    // 0x246a80: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x246a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_246a84:
    // 0x246a84: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x246a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_246a88:
    // 0x246a88: 0xdf829718  ld          $v0, -0x68E8($gp)
    ctx->pc = 0x246a88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294940440)));
label_246a8c:
    // 0x246a8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x246a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246a90:
    // 0x246a90: 0x8c920070  lw          $s2, 0x70($a0)
    ctx->pc = 0x246a90u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_246a94:
    // 0x246a94: 0xc08f8d8  jal         func_23E360
label_246a98:
    if (ctx->pc == 0x246A98u) {
        ctx->pc = 0x246A98u;
            // 0x246a98: 0xfcc20000  sd          $v0, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
        ctx->pc = 0x246A9Cu;
        goto label_246a9c;
    }
    ctx->pc = 0x246A94u;
    SET_GPR_U32(ctx, 31, 0x246A9Cu);
    ctx->pc = 0x246A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246A94u;
            // 0x246a98: 0xfcc20000  sd          $v0, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E360u;
    if (runtime->hasFunction(0x23E360u)) {
        auto targetFn = runtime->lookupFunction(0x23E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246A9Cu; }
        if (ctx->pc != 0x246A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckAnalogKey__12CMenuKeyFuncFiPf_0x23e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246A9Cu; }
        if (ctx->pc != 0x246A9Cu) { return; }
    }
    ctx->pc = 0x246A9Cu;
label_246a9c:
    // 0x246a9c: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x246a9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_246aa0:
    // 0x246aa0: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_246aa4:
    if (ctx->pc == 0x246AA4u) {
        ctx->pc = 0x246AA8u;
        goto label_246aa8;
    }
    ctx->pc = 0x246AA0u;
    {
        const bool branch_taken_0x246aa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246aa0) {
            ctx->pc = 0x246B04u;
            goto label_246b04;
        }
    }
    ctx->pc = 0x246AA8u;
label_246aa8:
    // 0x246aa8: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x246aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_246aac:
    // 0x246aac: 0x129840  sll         $s3, $s2, 1
    ctx->pc = 0x246aacu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_246ab0:
    // 0x246ab0: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x246ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_246ab4:
    // 0x246ab4: 0xc0a248c  jal         func_289230
label_246ab8:
    if (ctx->pc == 0x246AB8u) {
        ctx->pc = 0x246AB8u;
            // 0x246ab8: 0x24520020  addiu       $s2, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = 0x246ABCu;
        goto label_246abc;
    }
    ctx->pc = 0x246AB4u;
    SET_GPR_U32(ctx, 31, 0x246ABCu);
    ctx->pc = 0x246AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246AB4u;
            // 0x246ab8: 0x24520020  addiu       $s2, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246ABCu; }
        if (ctx->pc != 0x246ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246ABCu; }
        if (ctx->pc != 0x246ABCu) { return; }
    }
    ctx->pc = 0x246ABCu;
label_246abc:
    // 0x246abc: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x246abcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_246ac0:
    // 0x246ac0: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x246ac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_246ac4:
    // 0x246ac4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246ac4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246ac8:
    // 0x246ac8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x246ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_246acc:
    // 0x246acc: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x246accu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
label_246ad0:
    // 0x246ad0: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x246ad0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_246ad4:
    // 0x246ad4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_246ad8:
    if (ctx->pc == 0x246AD8u) {
        ctx->pc = 0x246AD8u;
            // 0x246ad8: 0x2711821  addu        $v1, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->pc = 0x246ADCu;
        goto label_246adc;
    }
    ctx->pc = 0x246AD4u;
    {
        const bool branch_taken_0x246ad4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x246AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246AD4u;
            // 0x246ad8: 0x2711821  addu        $v1, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ad4) {
            ctx->pc = 0x246AE4u;
            goto label_246ae4;
        }
    }
    ctx->pc = 0x246ADCu;
label_246adc:
    // 0x246adc: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x246adcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
label_246ae0:
    // 0x246ae0: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x246ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_246ae4:
    // 0x246ae4: 0x24640022  addiu       $a0, $v1, 0x22
    ctx->pc = 0x246ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 34));
label_246ae8:
    // 0x246ae8: 0x84630022  lh          $v1, 0x22($v1)
    ctx->pc = 0x246ae8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 34)));
label_246aec:
    // 0x246aec: 0x28610100  slti        $at, $v1, 0x100
    ctx->pc = 0x246aecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_246af0:
    // 0x246af0: 0x142000a7  bnez        $at, . + 4 + (0xA7 << 2)
label_246af4:
    if (ctx->pc == 0x246AF4u) {
        ctx->pc = 0x246AF8u;
        goto label_246af8;
    }
    ctx->pc = 0x246AF0u;
    {
        const bool branch_taken_0x246af0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x246af0) {
            ctx->pc = 0x246D90u;
            goto label_246d90;
        }
    }
    ctx->pc = 0x246AF8u;
label_246af8:
    // 0x246af8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x246af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_246afc:
    // 0x246afc: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_246b00:
    if (ctx->pc == 0x246B00u) {
        ctx->pc = 0x246B00u;
            // 0x246b00: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x246B04u;
        goto label_246b04;
    }
    ctx->pc = 0x246AFCu;
    {
        const bool branch_taken_0x246afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246AFCu;
            // 0x246b00: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246afc) {
            ctx->pc = 0x246D90u;
            goto label_246d90;
        }
    }
    ctx->pc = 0x246B04u;
label_246b04:
    // 0x246b04: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x246b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_246b08:
    // 0x246b08: 0x2642fffe  addiu       $v0, $s2, -0x2
    ctx->pc = 0x246b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
label_246b0c:
    // 0x246b0c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x246b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_246b10:
    // 0x246b10: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x246b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_246b14:
    // 0x246b14: 0xc0a248c  jal         func_289230
label_246b18:
    if (ctx->pc == 0x246B18u) {
        ctx->pc = 0x246B18u;
            // 0x246b18: 0x24520024  addiu       $s2, $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
        ctx->pc = 0x246B1Cu;
        goto label_246b1c;
    }
    ctx->pc = 0x246B14u;
    SET_GPR_U32(ctx, 31, 0x246B1Cu);
    ctx->pc = 0x246B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246B14u;
            // 0x246b18: 0x24520024  addiu       $s2, $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246B1Cu; }
        if (ctx->pc != 0x246B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246B1Cu; }
        if (ctx->pc != 0x246B1Cu) { return; }
    }
    ctx->pc = 0x246B1Cu;
label_246b1c:
    // 0x246b1c: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x246b1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_246b20:
    // 0x246b20: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x246b20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_246b24:
    // 0x246b24: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246b24u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246b28:
    // 0x246b28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x246b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_246b2c:
    // 0x246b2c: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x246b2cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
label_246b30:
    // 0x246b30: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x246b30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_246b34:
    // 0x246b34: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
label_246b38:
    if (ctx->pc == 0x246B38u) {
        ctx->pc = 0x246B3Cu;
        goto label_246b3c;
    }
    ctx->pc = 0x246B34u;
    {
        const bool branch_taken_0x246b34 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x246b34) {
            ctx->pc = 0x246B40u;
            goto label_246b40;
        }
    }
    ctx->pc = 0x246B3Cu;
label_246b3c:
    // 0x246b3c: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x246b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
label_246b40:
    // 0x246b40: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x246b40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_246b44:
    // 0x246b44: 0x28610100  slti        $at, $v1, 0x100
    ctx->pc = 0x246b44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_246b48:
    // 0x246b48: 0x14200091  bnez        $at, . + 4 + (0x91 << 2)
label_246b4c:
    if (ctx->pc == 0x246B4Cu) {
        ctx->pc = 0x246B50u;
        goto label_246b50;
    }
    ctx->pc = 0x246B48u;
    {
        const bool branch_taken_0x246b48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x246b48) {
            ctx->pc = 0x246D90u;
            goto label_246d90;
        }
    }
    ctx->pc = 0x246B50u;
label_246b50:
    // 0x246b50: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x246b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_246b54:
    // 0x246b54: 0x1000008e  b           . + 4 + (0x8E << 2)
label_246b58:
    if (ctx->pc == 0x246B58u) {
        ctx->pc = 0x246B58u;
            // 0x246b58: 0xa6430000  sh          $v1, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x246B5Cu;
        goto label_246b5c;
    }
    ctx->pc = 0x246B54u;
    {
        const bool branch_taken_0x246b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246B54u;
            // 0x246b58: 0xa6430000  sh          $v1, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246b54) {
            ctx->pc = 0x246D90u;
            goto label_246d90;
        }
    }
    ctx->pc = 0x246B5Cu;
label_246b5c:
    // 0x246b5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x246b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_246b60:
    // 0x246b60: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x246b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_246b64:
    // 0x246b64: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x246b64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_246b68:
    // 0x246b68: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x246b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_246b6c:
    // 0x246b6c: 0xc052cf0  jal         func_14B3C0
label_246b70:
    if (ctx->pc == 0x246B70u) {
        ctx->pc = 0x246B70u;
            // 0x246b70: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x246B74u;
        goto label_246b74;
    }
    ctx->pc = 0x246B6Cu;
    SET_GPR_U32(ctx, 31, 0x246B74u);
    ctx->pc = 0x246B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246B6Cu;
            // 0x246b70: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246B74u; }
        if (ctx->pc != 0x246B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246B74u; }
        if (ctx->pc != 0x246B74u) { return; }
    }
    ctx->pc = 0x246B74u;
label_246b74:
    // 0x246b74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_246b78:
    if (ctx->pc == 0x246B78u) {
        ctx->pc = 0x246B7Cu;
        goto label_246b7c;
    }
    ctx->pc = 0x246B74u;
    {
        const bool branch_taken_0x246b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246b74) {
            ctx->pc = 0x246B84u;
            goto label_246b84;
        }
    }
    ctx->pc = 0x246B7Cu;
label_246b7c:
    // 0x246b7c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x246b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_246b80:
    // 0x246b80: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x246b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_246b84:
    // 0x246b84: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x246b84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_246b88:
    // 0x246b88: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x246b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_246b8c:
    // 0x246b8c: 0xc052cf0  jal         func_14B3C0
label_246b90:
    if (ctx->pc == 0x246B90u) {
        ctx->pc = 0x246B90u;
            // 0x246b90: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x246B94u;
        goto label_246b94;
    }
    ctx->pc = 0x246B8Cu;
    SET_GPR_U32(ctx, 31, 0x246B94u);
    ctx->pc = 0x246B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246B8Cu;
            // 0x246b90: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246B94u; }
        if (ctx->pc != 0x246B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246B94u; }
        if (ctx->pc != 0x246B94u) { return; }
    }
    ctx->pc = 0x246B94u;
label_246b94:
    // 0x246b94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_246b98:
    if (ctx->pc == 0x246B98u) {
        ctx->pc = 0x246B9Cu;
        goto label_246b9c;
    }
    ctx->pc = 0x246B94u;
    {
        const bool branch_taken_0x246b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246b94) {
            ctx->pc = 0x246BA8u;
            goto label_246ba8;
        }
    }
    ctx->pc = 0x246B9Cu;
label_246b9c:
    // 0x246b9c: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x246b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_246ba0:
    // 0x246ba0: 0xc067140  jal         func_19C500
label_246ba4:
    if (ctx->pc == 0x246BA4u) {
        ctx->pc = 0x246BA4u;
            // 0x246ba4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x246BA8u;
        goto label_246ba8;
    }
    ctx->pc = 0x246BA0u;
    SET_GPR_U32(ctx, 31, 0x246BA8u);
    ctx->pc = 0x246BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246BA0u;
            // 0x246ba4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C500u;
    if (runtime->hasFunction(0x19C500u)) {
        auto targetFn = runtime->lookupFunction(0x19C500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246BA8u; }
        if (ctx->pc != 0x246BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddRoboAbs__16CUserDataManagerFf_0x19c500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246BA8u; }
        if (ctx->pc != 0x246BA8u) { return; }
    }
    ctx->pc = 0x246BA8u;
label_246ba8:
    // 0x246ba8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x246ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_246bac:
    // 0x246bac: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x246bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_246bb0:
    // 0x246bb0: 0xc052cf0  jal         func_14B3C0
label_246bb4:
    if (ctx->pc == 0x246BB4u) {
        ctx->pc = 0x246BB4u;
            // 0x246bb4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x246BB8u;
        goto label_246bb8;
    }
    ctx->pc = 0x246BB0u;
    SET_GPR_U32(ctx, 31, 0x246BB8u);
    ctx->pc = 0x246BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246BB0u;
            // 0x246bb4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246BB8u; }
        if (ctx->pc != 0x246BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246BB8u; }
        if (ctx->pc != 0x246BB8u) { return; }
    }
    ctx->pc = 0x246BB8u;
label_246bb8:
    // 0x246bb8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_246bbc:
    if (ctx->pc == 0x246BBCu) {
        ctx->pc = 0x246BC0u;
        goto label_246bc0;
    }
    ctx->pc = 0x246BB8u;
    {
        const bool branch_taken_0x246bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246bb8) {
            ctx->pc = 0x246BCCu;
            goto label_246bcc;
        }
    }
    ctx->pc = 0x246BC0u;
label_246bc0:
    // 0x246bc0: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x246bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_246bc4:
    // 0x246bc4: 0xc067140  jal         func_19C500
label_246bc8:
    if (ctx->pc == 0x246BC8u) {
        ctx->pc = 0x246BC8u;
            // 0x246bc8: 0x4600a307  neg.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[20]);
        ctx->pc = 0x246BCCu;
        goto label_246bcc;
    }
    ctx->pc = 0x246BC4u;
    SET_GPR_U32(ctx, 31, 0x246BCCu);
    ctx->pc = 0x246BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246BC4u;
            // 0x246bc8: 0x4600a307  neg.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C500u;
    if (runtime->hasFunction(0x19C500u)) {
        auto targetFn = runtime->lookupFunction(0x19C500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246BCCu; }
        if (ctx->pc != 0x246BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddRoboAbs__16CUserDataManagerFf_0x19c500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246BCCu; }
        if (ctx->pc != 0x246BCCu) { return; }
    }
    ctx->pc = 0x246BCCu;
label_246bcc:
    // 0x246bcc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x246bccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_246bd0:
    // 0x246bd0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x246bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_246bd4:
    // 0x246bd4: 0xc052d0c  jal         func_14B430
label_246bd8:
    if (ctx->pc == 0x246BD8u) {
        ctx->pc = 0x246BD8u;
            // 0x246bd8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x246BDCu;
        goto label_246bdc;
    }
    ctx->pc = 0x246BD4u;
    SET_GPR_U32(ctx, 31, 0x246BDCu);
    ctx->pc = 0x246BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246BD4u;
            // 0x246bd8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246BDCu; }
        if (ctx->pc != 0x246BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246BDCu; }
        if (ctx->pc != 0x246BDCu) { return; }
    }
    ctx->pc = 0x246BDCu;
label_246bdc:
    // 0x246bdc: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
label_246be0:
    if (ctx->pc == 0x246BE0u) {
        ctx->pc = 0x246BE4u;
        goto label_246be4;
    }
    ctx->pc = 0x246BDCu;
    {
        const bool branch_taken_0x246bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246bdc) {
            ctx->pc = 0x246EE4u;
            goto label_246ee4;
        }
    }
    ctx->pc = 0x246BE4u;
label_246be4:
    // 0x246be4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x246be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_246be8:
    // 0x246be8: 0x8c24d8c8  lw          $a0, -0x2738($at)
    ctx->pc = 0x246be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
label_246bec:
    // 0x246bec: 0x8083001c  lb          $v1, 0x1C($a0)
    ctx->pc = 0x246becu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
label_246bf0:
    // 0x246bf0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x246bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_246bf4:
    // 0x246bf4: 0xa083001c  sb          $v1, 0x1C($a0)
    ctx->pc = 0x246bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 3));
label_246bf8:
    // 0x246bf8: 0x100000ba  b           . + 4 + (0xBA << 2)
label_246bfc:
    if (ctx->pc == 0x246BFCu) {
        ctx->pc = 0x246C00u;
        goto label_246c00;
    }
    ctx->pc = 0x246BF8u;
    {
        const bool branch_taken_0x246bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246bf8) {
            ctx->pc = 0x246EE4u;
            goto label_246ee4;
        }
    }
    ctx->pc = 0x246C00u;
label_246c00:
    // 0x246c00: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x246c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_246c04:
    // 0x246c04: 0x27a600a8  addiu       $a2, $sp, 0xA8
    ctx->pc = 0x246c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_246c08:
    // 0x246c08: 0xdf829720  ld          $v0, -0x68E0($gp)
    ctx->pc = 0x246c08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294940448)));
label_246c0c:
    // 0x246c0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x246c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246c10:
    // 0x246c10: 0x8c920070  lw          $s2, 0x70($a0)
    ctx->pc = 0x246c10u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_246c14:
    // 0x246c14: 0xc08f8d8  jal         func_23E360
label_246c18:
    if (ctx->pc == 0x246C18u) {
        ctx->pc = 0x246C18u;
            // 0x246c18: 0xfcc20000  sd          $v0, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
        ctx->pc = 0x246C1Cu;
        goto label_246c1c;
    }
    ctx->pc = 0x246C14u;
    SET_GPR_U32(ctx, 31, 0x246C1Cu);
    ctx->pc = 0x246C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246C14u;
            // 0x246c18: 0xfcc20000  sd          $v0, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E360u;
    if (runtime->hasFunction(0x23E360u)) {
        auto targetFn = runtime->lookupFunction(0x23E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246C1Cu; }
        if (ctx->pc != 0x246C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckAnalogKey__12CMenuKeyFuncFiPf_0x23e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246C1Cu; }
        if (ctx->pc != 0x246C1Cu) { return; }
    }
    ctx->pc = 0x246C1Cu;
label_246c1c:
    // 0x246c1c: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
label_246c20:
    if (ctx->pc == 0x246C20u) {
        ctx->pc = 0x246C20u;
            // 0x246c20: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x246C24u;
        goto label_246c24;
    }
    ctx->pc = 0x246C1Cu;
    {
        const bool branch_taken_0x246c1c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x246C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246C1Cu;
            // 0x246c20: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c1c) {
            ctx->pc = 0x246C40u;
            goto label_246c40;
        }
    }
    ctx->pc = 0x246C24u;
label_246c24:
    // 0x246c24: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x246c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_246c28:
    // 0x246c28: 0xc7ac00a8  lwc1        $f12, 0xA8($sp)
    ctx->pc = 0x246c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_246c2c:
    // 0x246c2c: 0xc066a0c  jal         func_19A830
label_246c30:
    if (ctx->pc == 0x246C30u) {
        ctx->pc = 0x246C30u;
            // 0x246c30: 0x8c24d8c8  lw          $a0, -0x2738($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
        ctx->pc = 0x246C34u;
        goto label_246c34;
    }
    ctx->pc = 0x246C2Cu;
    SET_GPR_U32(ctx, 31, 0x246C34u);
    ctx->pc = 0x246C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246C2Cu;
            // 0x246c30: 0x8c24d8c8  lw          $a0, -0x2738($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A830u;
    if (runtime->hasFunction(0x19A830u)) {
        auto targetFn = runtime->lookupFunction(0x19A830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246C34u; }
        if (ctx->pc != 0x246C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPoint__9ROBO_DATAFf_0x19a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246C34u; }
        if (ctx->pc != 0x246C34u) { return; }
    }
    ctx->pc = 0x246C34u;
label_246c34:
    // 0x246c34: 0x10000056  b           . + 4 + (0x56 << 2)
label_246c38:
    if (ctx->pc == 0x246C38u) {
        ctx->pc = 0x246C3Cu;
        goto label_246c3c;
    }
    ctx->pc = 0x246C34u;
    {
        const bool branch_taken_0x246c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246c34) {
            ctx->pc = 0x246D90u;
            goto label_246d90;
        }
    }
    ctx->pc = 0x246C3Cu;
label_246c3c:
    // 0x246c3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x246c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246c40:
    // 0x246c40: 0x16430053  bne         $s2, $v1, . + 4 + (0x53 << 2)
label_246c44:
    if (ctx->pc == 0x246C44u) {
        ctx->pc = 0x246C48u;
        goto label_246c48;
    }
    ctx->pc = 0x246C40u;
    {
        const bool branch_taken_0x246c40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x246c40) {
            ctx->pc = 0x246D90u;
            goto label_246d90;
        }
    }
    ctx->pc = 0x246C48u;
label_246c48:
    // 0x246c48: 0xc0a248c  jal         func_289230
label_246c4c:
    if (ctx->pc == 0x246C4Cu) {
        ctx->pc = 0x246C4Cu;
            // 0x246c4c: 0xc7ac00a8  lwc1        $f12, 0xA8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x246C50u;
        goto label_246c50;
    }
    ctx->pc = 0x246C48u;
    SET_GPR_U32(ctx, 31, 0x246C50u);
    ctx->pc = 0x246C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246C48u;
            // 0x246c4c: 0xc7ac00a8  lwc1        $f12, 0xA8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246C50u; }
        if (ctx->pc != 0x246C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246C50u; }
        if (ctx->pc != 0x246C50u) { return; }
    }
    ctx->pc = 0x246C50u;
label_246c50:
    // 0x246c50: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x246c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_246c54:
    // 0x246c54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x246c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_246c58:
    // 0x246c58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x246c58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246c5c:
    // 0x246c5c: 0xc066df0  jal         func_19B7C0
label_246c60:
    if (ctx->pc == 0x246C60u) {
        ctx->pc = 0x246C60u;
            // 0x246c60: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x246C64u;
        goto label_246c64;
    }
    ctx->pc = 0x246C5Cu;
    SET_GPR_U32(ctx, 31, 0x246C64u);
    ctx->pc = 0x246C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246C5Cu;
            // 0x246c60: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B7C0u;
    if (runtime->hasFunction(0x19B7C0u)) {
        auto targetFn = runtime->lookupFunction(0x19B7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246C64u; }
        if (ctx->pc != 0x246C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddWhp__16CUserDataManagerFiii_0x19b7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246C64u; }
        if (ctx->pc != 0x246C64u) { return; }
    }
    ctx->pc = 0x246C64u;
label_246c64:
    // 0x246c64: 0x1000004a  b           . + 4 + (0x4A << 2)
label_246c68:
    if (ctx->pc == 0x246C68u) {
        ctx->pc = 0x246C6Cu;
        goto label_246c6c;
    }
    ctx->pc = 0x246C64u;
    {
        const bool branch_taken_0x246c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246c64) {
            ctx->pc = 0x246D90u;
            goto label_246d90;
        }
    }
    ctx->pc = 0x246C6Cu;
label_246c6c:
    // 0x246c6c: 0xc0664ac  jal         func_1992B0
label_246c70:
    if (ctx->pc == 0x246C70u) {
        ctx->pc = 0x246C70u;
            // 0x246c70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x246C74u;
        goto label_246c74;
    }
    ctx->pc = 0x246C6Cu;
    SET_GPR_U32(ctx, 31, 0x246C74u);
    ctx->pc = 0x246C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246C6Cu;
            // 0x246c70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1992B0u;
    if (runtime->hasFunction(0x1992B0u)) {
        auto targetFn = runtime->lookupFunction(0x1992B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246C74u; }
        if (ctx->pc != 0x246C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFishingRod__13CGameDataUsedFv_0x1992b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246C74u; }
        if (ctx->pc != 0x246C74u) { return; }
    }
    ctx->pc = 0x246C74u;
label_246c74:
    // 0x246c74: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_246c78:
    if (ctx->pc == 0x246C78u) {
        ctx->pc = 0x246C7Cu;
        goto label_246c7c;
    }
    ctx->pc = 0x246C74u;
    {
        const bool branch_taken_0x246c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246c74) {
            ctx->pc = 0x246D90u;
            goto label_246d90;
        }
    }
    ctx->pc = 0x246C7Cu;
label_246c7c:
    // 0x246c7c: 0xc065710  jal         func_195C40
label_246c80:
    if (ctx->pc == 0x246C80u) {
        ctx->pc = 0x246C80u;
            // 0x246c80: 0x86240002  lh          $a0, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->pc = 0x246C84u;
        goto label_246c84;
    }
    ctx->pc = 0x246C7Cu;
    SET_GPR_U32(ctx, 31, 0x246C84u);
    ctx->pc = 0x246C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246C7Cu;
            // 0x246c80: 0x86240002  lh          $a0, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C40u;
    if (runtime->hasFunction(0x195C40u)) {
        auto targetFn = runtime->lookupFunction(0x195C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246C84u; }
        if (ctx->pc != 0x246C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWeaponInfoData__Fi_0x195c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246C84u; }
        if (ctx->pc != 0x246C84u) { return; }
    }
    ctx->pc = 0x246C84u;
label_246c84:
    // 0x246c84: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x246c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_246c88:
    // 0x246c88: 0xc08f80c  jal         func_23E030
label_246c8c:
    if (ctx->pc == 0x246C8Cu) {
        ctx->pc = 0x246C8Cu;
            // 0x246c8c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x246C90u;
        goto label_246c90;
    }
    ctx->pc = 0x246C88u;
    SET_GPR_U32(ctx, 31, 0x246C90u);
    ctx->pc = 0x246C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246C88u;
            // 0x246c8c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E030u;
    if (runtime->hasFunction(0x23E030u)) {
        auto targetFn = runtime->lookupFunction(0x23E030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246C90u; }
        if (ctx->pc != 0x246C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSelectKey__12CMenuKeyFuncFv_0x23e030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246C90u; }
        if (ctx->pc != 0x246C90u) { return; }
    }
    ctx->pc = 0x246C90u;
label_246c90:
    // 0x246c90: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x246c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_246c94:
    // 0x246c94: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x246c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_246c98:
    // 0x246c98: 0xdf829728  ld          $v0, -0x68D8($gp)
    ctx->pc = 0x246c98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294940456)));
label_246c9c:
    // 0x246c9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x246c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246ca0:
    // 0x246ca0: 0x8c930070  lw          $s3, 0x70($a0)
    ctx->pc = 0x246ca0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_246ca4:
    // 0x246ca4: 0xc08f8d8  jal         func_23E360
label_246ca8:
    if (ctx->pc == 0x246CA8u) {
        ctx->pc = 0x246CA8u;
            // 0x246ca8: 0xfcc20000  sd          $v0, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
        ctx->pc = 0x246CACu;
        goto label_246cac;
    }
    ctx->pc = 0x246CA4u;
    SET_GPR_U32(ctx, 31, 0x246CACu);
    ctx->pc = 0x246CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246CA4u;
            // 0x246ca8: 0xfcc20000  sd          $v0, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E360u;
    if (runtime->hasFunction(0x23E360u)) {
        auto targetFn = runtime->lookupFunction(0x23E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246CACu; }
        if (ctx->pc != 0x246CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckAnalogKey__12CMenuKeyFuncFiPf_0x23e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246CACu; }
        if (ctx->pc != 0x246CACu) { return; }
    }
    ctx->pc = 0x246CACu;
label_246cac:
    // 0x246cac: 0xc7ac00b0  lwc1        $f12, 0xB0($sp)
    ctx->pc = 0x246cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_246cb0:
    // 0x246cb0: 0x13a040  sll         $s4, $s3, 1
    ctx->pc = 0x246cb0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_246cb4:
    // 0x246cb4: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x246cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_246cb8:
    // 0x246cb8: 0xc0a248c  jal         func_289230
label_246cbc:
    if (ctx->pc == 0x246CBCu) {
        ctx->pc = 0x246CBCu;
            // 0x246cbc: 0x24530026  addiu       $s3, $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 38));
        ctx->pc = 0x246CC0u;
        goto label_246cc0;
    }
    ctx->pc = 0x246CB8u;
    SET_GPR_U32(ctx, 31, 0x246CC0u);
    ctx->pc = 0x246CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246CB8u;
            // 0x246cbc: 0x24530026  addiu       $s3, $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246CC0u; }
        if (ctx->pc != 0x246CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246CC0u; }
        if (ctx->pc != 0x246CC0u) { return; }
    }
    ctx->pc = 0x246CC0u;
label_246cc0:
    // 0x246cc0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x246cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_246cc4:
    // 0x246cc4: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x246cc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_246cc8:
    // 0x246cc8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x246cc8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_246ccc:
    // 0x246ccc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x246cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_246cd0:
    // 0x246cd0: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x246cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
label_246cd4:
    // 0x246cd4: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x246cd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_246cd8:
    // 0x246cd8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_246cdc:
    if (ctx->pc == 0x246CDCu) {
        ctx->pc = 0x246CDCu;
            // 0x246cdc: 0x2921821  addu        $v1, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->pc = 0x246CE0u;
        goto label_246ce0;
    }
    ctx->pc = 0x246CD8u;
    {
        const bool branch_taken_0x246cd8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x246CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246CD8u;
            // 0x246cdc: 0x2921821  addu        $v1, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246cd8) {
            ctx->pc = 0x246CE8u;
            goto label_246ce8;
        }
    }
    ctx->pc = 0x246CE0u;
label_246ce0:
    // 0x246ce0: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x246ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
label_246ce4:
    // 0x246ce4: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x246ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_246ce8:
    // 0x246ce8: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x246ce8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_246cec:
    // 0x246cec: 0x8463001c  lh          $v1, 0x1C($v1)
    ctx->pc = 0x246cecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
label_246cf0:
    // 0x246cf0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x246cf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_246cf4:
    // 0x246cf4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_246cf8:
    if (ctx->pc == 0x246CF8u) {
        ctx->pc = 0x246CFCu;
        goto label_246cfc;
    }
    ctx->pc = 0x246CF4u;
    {
        const bool branch_taken_0x246cf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246cf4) {
            ctx->pc = 0x246D00u;
            goto label_246d00;
        }
    }
    ctx->pc = 0x246CFCu;
label_246cfc:
    // 0x246cfc: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x246cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
label_246d00:
    // 0x246d00: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x246d00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_246d04:
    // 0x246d04: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x246d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_246d08:
    // 0x246d08: 0xc052cf0  jal         func_14B3C0
label_246d0c:
    if (ctx->pc == 0x246D0Cu) {
        ctx->pc = 0x246D0Cu;
            // 0x246d0c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x246D10u;
        goto label_246d10;
    }
    ctx->pc = 0x246D08u;
    SET_GPR_U32(ctx, 31, 0x246D10u);
    ctx->pc = 0x246D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246D08u;
            // 0x246d0c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246D10u; }
        if (ctx->pc != 0x246D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246D10u; }
        if (ctx->pc != 0x246D10u) { return; }
    }
    ctx->pc = 0x246D10u;
label_246d10:
    // 0x246d10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_246d14:
    if (ctx->pc == 0x246D14u) {
        ctx->pc = 0x246D18u;
        goto label_246d18;
    }
    ctx->pc = 0x246D10u;
    {
        const bool branch_taken_0x246d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246d10) {
            ctx->pc = 0x246D24u;
            goto label_246d24;
        }
    }
    ctx->pc = 0x246D18u;
label_246d18:
    // 0x246d18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x246d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_246d1c:
    // 0x246d1c: 0xc065f78  jal         func_197DE0
label_246d20:
    if (ctx->pc == 0x246D20u) {
        ctx->pc = 0x246D20u;
            // 0x246d20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x246D24u;
        goto label_246d24;
    }
    ctx->pc = 0x246D1Cu;
    SET_GPR_U32(ctx, 31, 0x246D24u);
    ctx->pc = 0x246D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246D1Cu;
            // 0x246d20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197DE0u;
    if (runtime->hasFunction(0x197DE0u)) {
        auto targetFn = runtime->lookupFunction(0x197DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246D24u; }
        if (ctx->pc != 0x246D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFusionPoint__13CGameDataUsedFi_0x197de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246D24u; }
        if (ctx->pc != 0x246D24u) { return; }
    }
    ctx->pc = 0x246D24u;
label_246d24:
    // 0x246d24: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x246d24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_246d28:
    // 0x246d28: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x246d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_246d2c:
    // 0x246d2c: 0xc052cf0  jal         func_14B3C0
label_246d30:
    if (ctx->pc == 0x246D30u) {
        ctx->pc = 0x246D30u;
            // 0x246d30: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x246D34u;
        goto label_246d34;
    }
    ctx->pc = 0x246D2Cu;
    SET_GPR_U32(ctx, 31, 0x246D34u);
    ctx->pc = 0x246D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246D2Cu;
            // 0x246d30: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246D34u; }
        if (ctx->pc != 0x246D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246D34u; }
        if (ctx->pc != 0x246D34u) { return; }
    }
    ctx->pc = 0x246D34u;
label_246d34:
    // 0x246d34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_246d38:
    if (ctx->pc == 0x246D38u) {
        ctx->pc = 0x246D3Cu;
        goto label_246d3c;
    }
    ctx->pc = 0x246D34u;
    {
        const bool branch_taken_0x246d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246d34) {
            ctx->pc = 0x246D48u;
            goto label_246d48;
        }
    }
    ctx->pc = 0x246D3Cu;
label_246d3c:
    // 0x246d3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x246d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_246d40:
    // 0x246d40: 0xc065f78  jal         func_197DE0
label_246d44:
    if (ctx->pc == 0x246D44u) {
        ctx->pc = 0x246D44u;
            // 0x246d44: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x246D48u;
        goto label_246d48;
    }
    ctx->pc = 0x246D40u;
    SET_GPR_U32(ctx, 31, 0x246D48u);
    ctx->pc = 0x246D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246D40u;
            // 0x246d44: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197DE0u;
    if (runtime->hasFunction(0x197DE0u)) {
        auto targetFn = runtime->lookupFunction(0x197DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246D48u; }
        if (ctx->pc != 0x246D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFusionPoint__13CGameDataUsedFi_0x197de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246D48u; }
        if (ctx->pc != 0x246D48u) { return; }
    }
    ctx->pc = 0x246D48u;
label_246d48:
    // 0x246d48: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x246d48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_246d4c:
    // 0x246d4c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x246d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_246d50:
    // 0x246d50: 0xc052cf0  jal         func_14B3C0
label_246d54:
    if (ctx->pc == 0x246D54u) {
        ctx->pc = 0x246D54u;
            // 0x246d54: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x246D58u;
        goto label_246d58;
    }
    ctx->pc = 0x246D50u;
    SET_GPR_U32(ctx, 31, 0x246D58u);
    ctx->pc = 0x246D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246D50u;
            // 0x246d54: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246D58u; }
        if (ctx->pc != 0x246D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246D58u; }
        if (ctx->pc != 0x246D58u) { return; }
    }
    ctx->pc = 0x246D58u;
label_246d58:
    // 0x246d58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_246d5c:
    if (ctx->pc == 0x246D5Cu) {
        ctx->pc = 0x246D60u;
        goto label_246d60;
    }
    ctx->pc = 0x246D58u;
    {
        const bool branch_taken_0x246d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246d58) {
            ctx->pc = 0x246D6Cu;
            goto label_246d6c;
        }
    }
    ctx->pc = 0x246D60u;
label_246d60:
    // 0x246d60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x246d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_246d64:
    // 0x246d64: 0xc065f78  jal         func_197DE0
label_246d68:
    if (ctx->pc == 0x246D68u) {
        ctx->pc = 0x246D68u;
            // 0x246d68: 0x2405fe0c  addiu       $a1, $zero, -0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966796));
        ctx->pc = 0x246D6Cu;
        goto label_246d6c;
    }
    ctx->pc = 0x246D64u;
    SET_GPR_U32(ctx, 31, 0x246D6Cu);
    ctx->pc = 0x246D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246D64u;
            // 0x246d68: 0x2405fe0c  addiu       $a1, $zero, -0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966796));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197DE0u;
    if (runtime->hasFunction(0x197DE0u)) {
        auto targetFn = runtime->lookupFunction(0x197DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246D6Cu; }
        if (ctx->pc != 0x246D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFusionPoint__13CGameDataUsedFi_0x197de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246D6Cu; }
        if (ctx->pc != 0x246D6Cu) { return; }
    }
    ctx->pc = 0x246D6Cu;
label_246d6c:
    // 0x246d6c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x246d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_246d70:
    // 0x246d70: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x246d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_246d74:
    // 0x246d74: 0xc052cf0  jal         func_14B3C0
label_246d78:
    if (ctx->pc == 0x246D78u) {
        ctx->pc = 0x246D78u;
            // 0x246d78: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x246D7Cu;
        goto label_246d7c;
    }
    ctx->pc = 0x246D74u;
    SET_GPR_U32(ctx, 31, 0x246D7Cu);
    ctx->pc = 0x246D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246D74u;
            // 0x246d78: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246D7Cu; }
        if (ctx->pc != 0x246D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246D7Cu; }
        if (ctx->pc != 0x246D7Cu) { return; }
    }
    ctx->pc = 0x246D7Cu;
label_246d7c:
    // 0x246d7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_246d80:
    if (ctx->pc == 0x246D80u) {
        ctx->pc = 0x246D84u;
        goto label_246d84;
    }
    ctx->pc = 0x246D7Cu;
    {
        const bool branch_taken_0x246d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246d7c) {
            ctx->pc = 0x246D90u;
            goto label_246d90;
        }
    }
    ctx->pc = 0x246D84u;
label_246d84:
    // 0x246d84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x246d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_246d88:
    // 0x246d88: 0xc065f78  jal         func_197DE0
label_246d8c:
    if (ctx->pc == 0x246D8Cu) {
        ctx->pc = 0x246D8Cu;
            // 0x246d8c: 0x240501f4  addiu       $a1, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->pc = 0x246D90u;
        goto label_246d90;
    }
    ctx->pc = 0x246D88u;
    SET_GPR_U32(ctx, 31, 0x246D90u);
    ctx->pc = 0x246D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246D88u;
            // 0x246d8c: 0x240501f4  addiu       $a1, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197DE0u;
    if (runtime->hasFunction(0x197DE0u)) {
        auto targetFn = runtime->lookupFunction(0x197DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246D90u; }
        if (ctx->pc != 0x246D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFusionPoint__13CGameDataUsedFi_0x197de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246D90u; }
        if (ctx->pc != 0x246D90u) { return; }
    }
    ctx->pc = 0x246D90u;
label_246d90:
    // 0x246d90: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x246d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_246d94:
    // 0x246d94: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x246d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_246d98:
    // 0x246d98: 0x84840014  lh          $a0, 0x14($a0)
    ctx->pc = 0x246d98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
label_246d9c:
    // 0x246d9c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_246da0:
    if (ctx->pc == 0x246DA0u) {
        ctx->pc = 0x246DA4u;
        goto label_246da4;
    }
    ctx->pc = 0x246D9Cu;
    {
        const bool branch_taken_0x246d9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x246d9c) {
            ctx->pc = 0x246DACu;
            goto label_246dac;
        }
    }
    ctx->pc = 0x246DA4u;
label_246da4:
    // 0x246da4: 0x1000004f  b           . + 4 + (0x4F << 2)
label_246da8:
    if (ctx->pc == 0x246DA8u) {
        ctx->pc = 0x246DACu;
        goto label_246dac;
    }
    ctx->pc = 0x246DA4u;
    {
        const bool branch_taken_0x246da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246da4) {
            ctx->pc = 0x246EE4u;
            goto label_246ee4;
        }
    }
    ctx->pc = 0x246DACu;
label_246dac:
    // 0x246dac: 0x1220004d  beqz        $s1, . + 4 + (0x4D << 2)
label_246db0:
    if (ctx->pc == 0x246DB0u) {
        ctx->pc = 0x246DB4u;
        goto label_246db4;
    }
    ctx->pc = 0x246DACu;
    {
        const bool branch_taken_0x246dac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x246dac) {
            ctx->pc = 0x246EE4u;
            goto label_246ee4;
        }
    }
    ctx->pc = 0x246DB4u;
label_246db4:
    // 0x246db4: 0xc065710  jal         func_195C40
label_246db8:
    if (ctx->pc == 0x246DB8u) {
        ctx->pc = 0x246DB8u;
            // 0x246db8: 0x86240002  lh          $a0, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->pc = 0x246DBCu;
        goto label_246dbc;
    }
    ctx->pc = 0x246DB4u;
    SET_GPR_U32(ctx, 31, 0x246DBCu);
    ctx->pc = 0x246DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246DB4u;
            // 0x246db8: 0x86240002  lh          $a0, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C40u;
    if (runtime->hasFunction(0x195C40u)) {
        auto targetFn = runtime->lookupFunction(0x195C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246DBCu; }
        if (ctx->pc != 0x246DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWeaponInfoData__Fi_0x195c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246DBCu; }
        if (ctx->pc != 0x246DBCu) { return; }
    }
    ctx->pc = 0x246DBCu;
label_246dbc:
    // 0x246dbc: 0x32030004  andi        $v1, $s0, 0x4
    ctx->pc = 0x246dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_246dc0:
    // 0x246dc0: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_246dc4:
    if (ctx->pc == 0x246DC4u) {
        ctx->pc = 0x246DC4u;
            // 0x246dc4: 0x32030008  andi        $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x246DC8u;
        goto label_246dc8;
    }
    ctx->pc = 0x246DC0u;
    {
        const bool branch_taken_0x246dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246DC0u;
            // 0x246dc4: 0x32030008  andi        $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246dc0) {
            ctx->pc = 0x246E1Cu;
            goto label_246e1c;
        }
    }
    ctx->pc = 0x246DC8u;
label_246dc8:
    // 0x246dc8: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x246dc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_246dcc:
    // 0x246dcc: 0xa6230022  sh          $v1, 0x22($s1)
    ctx->pc = 0x246dccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 3));
label_246dd0:
    // 0x246dd0: 0x8443000a  lh          $v1, 0xA($v0)
    ctx->pc = 0x246dd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_246dd4:
    // 0x246dd4: 0xa6230024  sh          $v1, 0x24($s1)
    ctx->pc = 0x246dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 3));
label_246dd8:
    // 0x246dd8: 0x8443001c  lh          $v1, 0x1C($v0)
    ctx->pc = 0x246dd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
label_246ddc:
    // 0x246ddc: 0xa6230026  sh          $v1, 0x26($s1)
    ctx->pc = 0x246ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 3));
label_246de0:
    // 0x246de0: 0x8443001e  lh          $v1, 0x1E($v0)
    ctx->pc = 0x246de0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 30)));
label_246de4:
    // 0x246de4: 0xa6230028  sh          $v1, 0x28($s1)
    ctx->pc = 0x246de4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 3));
label_246de8:
    // 0x246de8: 0x84430020  lh          $v1, 0x20($v0)
    ctx->pc = 0x246de8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_246dec:
    // 0x246dec: 0xa623002a  sh          $v1, 0x2A($s1)
    ctx->pc = 0x246decu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 3));
label_246df0:
    // 0x246df0: 0x84430022  lh          $v1, 0x22($v0)
    ctx->pc = 0x246df0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 34)));
label_246df4:
    // 0x246df4: 0xa623002c  sh          $v1, 0x2C($s1)
    ctx->pc = 0x246df4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 3));
label_246df8:
    // 0x246df8: 0x84430024  lh          $v1, 0x24($v0)
    ctx->pc = 0x246df8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
label_246dfc:
    // 0x246dfc: 0xa623002e  sh          $v1, 0x2E($s1)
    ctx->pc = 0x246dfcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 3));
label_246e00:
    // 0x246e00: 0x84430026  lh          $v1, 0x26($v0)
    ctx->pc = 0x246e00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 38)));
label_246e04:
    // 0x246e04: 0xa6230030  sh          $v1, 0x30($s1)
    ctx->pc = 0x246e04u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 3));
label_246e08:
    // 0x246e08: 0x84430028  lh          $v1, 0x28($v0)
    ctx->pc = 0x246e08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_246e0c:
    // 0x246e0c: 0xa6230032  sh          $v1, 0x32($s1)
    ctx->pc = 0x246e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 3));
label_246e10:
    // 0x246e10: 0x8443002a  lh          $v1, 0x2A($v0)
    ctx->pc = 0x246e10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
label_246e14:
    // 0x246e14: 0xa6230034  sh          $v1, 0x34($s1)
    ctx->pc = 0x246e14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 3));
label_246e18:
    // 0x246e18: 0x32030008  andi        $v1, $s0, 0x8
    ctx->pc = 0x246e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_246e1c:
    // 0x246e1c: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_246e20:
    if (ctx->pc == 0x246E20u) {
        ctx->pc = 0x246E24u;
        goto label_246e24;
    }
    ctx->pc = 0x246E1Cu;
    {
        const bool branch_taken_0x246e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246e1c) {
            ctx->pc = 0x246E74u;
            goto label_246e74;
        }
    }
    ctx->pc = 0x246E24u;
label_246e24:
    // 0x246e24: 0x84430004  lh          $v1, 0x4($v0)
    ctx->pc = 0x246e24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_246e28:
    // 0x246e28: 0xa6230022  sh          $v1, 0x22($s1)
    ctx->pc = 0x246e28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 3));
label_246e2c:
    // 0x246e2c: 0x84430006  lh          $v1, 0x6($v0)
    ctx->pc = 0x246e2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_246e30:
    // 0x246e30: 0xa6230024  sh          $v1, 0x24($s1)
    ctx->pc = 0x246e30u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 3));
label_246e34:
    // 0x246e34: 0x8443000c  lh          $v1, 0xC($v0)
    ctx->pc = 0x246e34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_246e38:
    // 0x246e38: 0xa6230026  sh          $v1, 0x26($s1)
    ctx->pc = 0x246e38u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 3));
label_246e3c:
    // 0x246e3c: 0x8443000e  lh          $v1, 0xE($v0)
    ctx->pc = 0x246e3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_246e40:
    // 0x246e40: 0xa6230028  sh          $v1, 0x28($s1)
    ctx->pc = 0x246e40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 3));
label_246e44:
    // 0x246e44: 0x84430010  lh          $v1, 0x10($v0)
    ctx->pc = 0x246e44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_246e48:
    // 0x246e48: 0xa623002a  sh          $v1, 0x2A($s1)
    ctx->pc = 0x246e48u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 3));
label_246e4c:
    // 0x246e4c: 0x84430012  lh          $v1, 0x12($v0)
    ctx->pc = 0x246e4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
label_246e50:
    // 0x246e50: 0xa623002c  sh          $v1, 0x2C($s1)
    ctx->pc = 0x246e50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 3));
label_246e54:
    // 0x246e54: 0x84430014  lh          $v1, 0x14($v0)
    ctx->pc = 0x246e54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
label_246e58:
    // 0x246e58: 0xa623002e  sh          $v1, 0x2E($s1)
    ctx->pc = 0x246e58u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 3));
label_246e5c:
    // 0x246e5c: 0x84430016  lh          $v1, 0x16($v0)
    ctx->pc = 0x246e5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
label_246e60:
    // 0x246e60: 0xa6230030  sh          $v1, 0x30($s1)
    ctx->pc = 0x246e60u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 3));
label_246e64:
    // 0x246e64: 0x84430018  lh          $v1, 0x18($v0)
    ctx->pc = 0x246e64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_246e68:
    // 0x246e68: 0xa6230032  sh          $v1, 0x32($s1)
    ctx->pc = 0x246e68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 3));
label_246e6c:
    // 0x246e6c: 0x8442001a  lh          $v0, 0x1A($v0)
    ctx->pc = 0x246e6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
label_246e70:
    // 0x246e70: 0xa6220034  sh          $v0, 0x34($s1)
    ctx->pc = 0x246e70u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 2));
label_246e74:
    // 0x246e74: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x246e74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_246e78:
    // 0x246e78: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x246e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_246e7c:
    // 0x246e7c: 0xc052d0c  jal         func_14B430
label_246e80:
    if (ctx->pc == 0x246E80u) {
        ctx->pc = 0x246E80u;
            // 0x246e80: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x246E84u;
        goto label_246e84;
    }
    ctx->pc = 0x246E7Cu;
    SET_GPR_U32(ctx, 31, 0x246E84u);
    ctx->pc = 0x246E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246E7Cu;
            // 0x246e80: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246E84u; }
        if (ctx->pc != 0x246E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246E84u; }
        if (ctx->pc != 0x246E84u) { return; }
    }
    ctx->pc = 0x246E84u;
label_246e84:
    // 0x246e84: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_246e88:
    if (ctx->pc == 0x246E88u) {
        ctx->pc = 0x246E8Cu;
        goto label_246e8c;
    }
    ctx->pc = 0x246E84u;
    {
        const bool branch_taken_0x246e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246e84) {
            ctx->pc = 0x246EE4u;
            goto label_246ee4;
        }
    }
    ctx->pc = 0x246E8Cu;
label_246e8c:
    // 0x246e8c: 0x83829734  lb          $v0, -0x68CC($gp)
    ctx->pc = 0x246e8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940468)));
label_246e90:
    // 0x246e90: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_246e94:
    if (ctx->pc == 0x246E94u) {
        ctx->pc = 0x246E98u;
        goto label_246e98;
    }
    ctx->pc = 0x246E90u;
    {
        const bool branch_taken_0x246e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246e90) {
            ctx->pc = 0x246EA4u;
            goto label_246ea4;
        }
    }
    ctx->pc = 0x246E98u;
label_246e98:
    // 0x246e98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x246e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246e9c:
    // 0x246e9c: 0xaf809730  sw          $zero, -0x68D0($gp)
    ctx->pc = 0x246e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940464), GPR_U32(ctx, 0));
label_246ea0:
    // 0x246ea0: 0xa3829734  sb          $v0, -0x68CC($gp)
    ctx->pc = 0x246ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940468), (uint8_t)GPR_U32(ctx, 2));
label_246ea4:
    // 0x246ea4: 0x8f829730  lw          $v0, -0x68D0($gp)
    ctx->pc = 0x246ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
label_246ea8:
    // 0x246ea8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x246ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246eac:
    // 0x246eac: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x246eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_246eb0:
    // 0x246eb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x246eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246eb4:
    // 0x246eb4: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x246eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_246eb8:
    // 0x246eb8: 0xc068400  jal         func_1A1000
label_246ebc:
    if (ctx->pc == 0x246EBCu) {
        ctx->pc = 0x246EBCu;
            // 0x246ebc: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->pc = 0x246EC0u;
        goto label_246ec0;
    }
    ctx->pc = 0x246EB8u;
    SET_GPR_U32(ctx, 31, 0x246EC0u);
    ctx->pc = 0x246EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246EB8u;
            // 0x246ebc: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1000u;
    if (runtime->hasFunction(0x1A1000u)) {
        auto targetFn = runtime->lookupFunction(0x1A1000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246EC0u; }
        if (ctx->pc != 0x246EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckWeaponAttribute__FUiUi_0x1a1000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246EC0u; }
        if (ctx->pc != 0x246EC0u) { return; }
    }
    ctx->pc = 0x246EC0u;
label_246ec0:
    // 0x246ec0: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x246ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
label_246ec4:
    // 0x246ec4: 0x8f839730  lw          $v1, -0x68D0($gp)
    ctx->pc = 0x246ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
label_246ec8:
    // 0x246ec8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x246ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_246ecc:
    // 0x246ecc: 0xaf839730  sw          $v1, -0x68D0($gp)
    ctx->pc = 0x246eccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940464), GPR_U32(ctx, 3));
label_246ed0:
    // 0x246ed0: 0x8f839730  lw          $v1, -0x68D0($gp)
    ctx->pc = 0x246ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
label_246ed4:
    // 0x246ed4: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x246ed4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
label_246ed8:
    // 0x246ed8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_246edc:
    if (ctx->pc == 0x246EDCu) {
        ctx->pc = 0x246EE0u;
        goto label_246ee0;
    }
    ctx->pc = 0x246ED8u;
    {
        const bool branch_taken_0x246ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x246ed8) {
            ctx->pc = 0x246EE4u;
            goto label_246ee4;
        }
    }
    ctx->pc = 0x246EE0u;
label_246ee0:
    // 0x246ee0: 0xaf809730  sw          $zero, -0x68D0($gp)
    ctx->pc = 0x246ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940464), GPR_U32(ctx, 0));
label_246ee4:
    // 0x246ee4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x246ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_246ee8:
    // 0x246ee8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x246ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_246eec:
    // 0x246eec: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x246eecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_246ef0:
    // 0x246ef0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x246ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_246ef4:
    // 0x246ef4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x246ef4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_246ef8:
    // 0x246ef8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x246ef8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_246efc:
    // 0x246efc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x246efcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_246f00:
    // 0x246f00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x246f00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_246f04:
    // 0x246f04: 0x3e00008  jr          $ra
label_246f08:
    if (ctx->pc == 0x246F08u) {
        ctx->pc = 0x246F08u;
            // 0x246f08: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x246F0Cu;
        goto label_fallthrough_0x246f04;
    }
    ctx->pc = 0x246F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246F04u;
            // 0x246f08: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x246f04:
    ctx->pc = 0x246F0Cu;
}
