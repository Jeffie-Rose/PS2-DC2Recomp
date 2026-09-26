#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgLoopGyoRace__FP11SubGameInfo
// Address: 0x305ab0 - 0x3074e0
void sgLoopGyoRace__FP11SubGameInfo_0x305ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgLoopGyoRace__FP11SubGameInfo_0x305ab0");
#endif

    switch (ctx->pc) {
        case 0x305ab0u: goto label_305ab0;
        case 0x305ab4u: goto label_305ab4;
        case 0x305ab8u: goto label_305ab8;
        case 0x305abcu: goto label_305abc;
        case 0x305ac0u: goto label_305ac0;
        case 0x305ac4u: goto label_305ac4;
        case 0x305ac8u: goto label_305ac8;
        case 0x305accu: goto label_305acc;
        case 0x305ad0u: goto label_305ad0;
        case 0x305ad4u: goto label_305ad4;
        case 0x305ad8u: goto label_305ad8;
        case 0x305adcu: goto label_305adc;
        case 0x305ae0u: goto label_305ae0;
        case 0x305ae4u: goto label_305ae4;
        case 0x305ae8u: goto label_305ae8;
        case 0x305aecu: goto label_305aec;
        case 0x305af0u: goto label_305af0;
        case 0x305af4u: goto label_305af4;
        case 0x305af8u: goto label_305af8;
        case 0x305afcu: goto label_305afc;
        case 0x305b00u: goto label_305b00;
        case 0x305b04u: goto label_305b04;
        case 0x305b08u: goto label_305b08;
        case 0x305b0cu: goto label_305b0c;
        case 0x305b10u: goto label_305b10;
        case 0x305b14u: goto label_305b14;
        case 0x305b18u: goto label_305b18;
        case 0x305b1cu: goto label_305b1c;
        case 0x305b20u: goto label_305b20;
        case 0x305b24u: goto label_305b24;
        case 0x305b28u: goto label_305b28;
        case 0x305b2cu: goto label_305b2c;
        case 0x305b30u: goto label_305b30;
        case 0x305b34u: goto label_305b34;
        case 0x305b38u: goto label_305b38;
        case 0x305b3cu: goto label_305b3c;
        case 0x305b40u: goto label_305b40;
        case 0x305b44u: goto label_305b44;
        case 0x305b48u: goto label_305b48;
        case 0x305b4cu: goto label_305b4c;
        case 0x305b50u: goto label_305b50;
        case 0x305b54u: goto label_305b54;
        case 0x305b58u: goto label_305b58;
        case 0x305b5cu: goto label_305b5c;
        case 0x305b60u: goto label_305b60;
        case 0x305b64u: goto label_305b64;
        case 0x305b68u: goto label_305b68;
        case 0x305b6cu: goto label_305b6c;
        case 0x305b70u: goto label_305b70;
        case 0x305b74u: goto label_305b74;
        case 0x305b78u: goto label_305b78;
        case 0x305b7cu: goto label_305b7c;
        case 0x305b80u: goto label_305b80;
        case 0x305b84u: goto label_305b84;
        case 0x305b88u: goto label_305b88;
        case 0x305b8cu: goto label_305b8c;
        case 0x305b90u: goto label_305b90;
        case 0x305b94u: goto label_305b94;
        case 0x305b98u: goto label_305b98;
        case 0x305b9cu: goto label_305b9c;
        case 0x305ba0u: goto label_305ba0;
        case 0x305ba4u: goto label_305ba4;
        case 0x305ba8u: goto label_305ba8;
        case 0x305bacu: goto label_305bac;
        case 0x305bb0u: goto label_305bb0;
        case 0x305bb4u: goto label_305bb4;
        case 0x305bb8u: goto label_305bb8;
        case 0x305bbcu: goto label_305bbc;
        case 0x305bc0u: goto label_305bc0;
        case 0x305bc4u: goto label_305bc4;
        case 0x305bc8u: goto label_305bc8;
        case 0x305bccu: goto label_305bcc;
        case 0x305bd0u: goto label_305bd0;
        case 0x305bd4u: goto label_305bd4;
        case 0x305bd8u: goto label_305bd8;
        case 0x305bdcu: goto label_305bdc;
        case 0x305be0u: goto label_305be0;
        case 0x305be4u: goto label_305be4;
        case 0x305be8u: goto label_305be8;
        case 0x305becu: goto label_305bec;
        case 0x305bf0u: goto label_305bf0;
        case 0x305bf4u: goto label_305bf4;
        case 0x305bf8u: goto label_305bf8;
        case 0x305bfcu: goto label_305bfc;
        case 0x305c00u: goto label_305c00;
        case 0x305c04u: goto label_305c04;
        case 0x305c08u: goto label_305c08;
        case 0x305c0cu: goto label_305c0c;
        case 0x305c10u: goto label_305c10;
        case 0x305c14u: goto label_305c14;
        case 0x305c18u: goto label_305c18;
        case 0x305c1cu: goto label_305c1c;
        case 0x305c20u: goto label_305c20;
        case 0x305c24u: goto label_305c24;
        case 0x305c28u: goto label_305c28;
        case 0x305c2cu: goto label_305c2c;
        case 0x305c30u: goto label_305c30;
        case 0x305c34u: goto label_305c34;
        case 0x305c38u: goto label_305c38;
        case 0x305c3cu: goto label_305c3c;
        case 0x305c40u: goto label_305c40;
        case 0x305c44u: goto label_305c44;
        case 0x305c48u: goto label_305c48;
        case 0x305c4cu: goto label_305c4c;
        case 0x305c50u: goto label_305c50;
        case 0x305c54u: goto label_305c54;
        case 0x305c58u: goto label_305c58;
        case 0x305c5cu: goto label_305c5c;
        case 0x305c60u: goto label_305c60;
        case 0x305c64u: goto label_305c64;
        case 0x305c68u: goto label_305c68;
        case 0x305c6cu: goto label_305c6c;
        case 0x305c70u: goto label_305c70;
        case 0x305c74u: goto label_305c74;
        case 0x305c78u: goto label_305c78;
        case 0x305c7cu: goto label_305c7c;
        case 0x305c80u: goto label_305c80;
        case 0x305c84u: goto label_305c84;
        case 0x305c88u: goto label_305c88;
        case 0x305c8cu: goto label_305c8c;
        case 0x305c90u: goto label_305c90;
        case 0x305c94u: goto label_305c94;
        case 0x305c98u: goto label_305c98;
        case 0x305c9cu: goto label_305c9c;
        case 0x305ca0u: goto label_305ca0;
        case 0x305ca4u: goto label_305ca4;
        case 0x305ca8u: goto label_305ca8;
        case 0x305cacu: goto label_305cac;
        case 0x305cb0u: goto label_305cb0;
        case 0x305cb4u: goto label_305cb4;
        case 0x305cb8u: goto label_305cb8;
        case 0x305cbcu: goto label_305cbc;
        case 0x305cc0u: goto label_305cc0;
        case 0x305cc4u: goto label_305cc4;
        case 0x305cc8u: goto label_305cc8;
        case 0x305cccu: goto label_305ccc;
        case 0x305cd0u: goto label_305cd0;
        case 0x305cd4u: goto label_305cd4;
        case 0x305cd8u: goto label_305cd8;
        case 0x305cdcu: goto label_305cdc;
        case 0x305ce0u: goto label_305ce0;
        case 0x305ce4u: goto label_305ce4;
        case 0x305ce8u: goto label_305ce8;
        case 0x305cecu: goto label_305cec;
        case 0x305cf0u: goto label_305cf0;
        case 0x305cf4u: goto label_305cf4;
        case 0x305cf8u: goto label_305cf8;
        case 0x305cfcu: goto label_305cfc;
        case 0x305d00u: goto label_305d00;
        case 0x305d04u: goto label_305d04;
        case 0x305d08u: goto label_305d08;
        case 0x305d0cu: goto label_305d0c;
        case 0x305d10u: goto label_305d10;
        case 0x305d14u: goto label_305d14;
        case 0x305d18u: goto label_305d18;
        case 0x305d1cu: goto label_305d1c;
        case 0x305d20u: goto label_305d20;
        case 0x305d24u: goto label_305d24;
        case 0x305d28u: goto label_305d28;
        case 0x305d2cu: goto label_305d2c;
        case 0x305d30u: goto label_305d30;
        case 0x305d34u: goto label_305d34;
        case 0x305d38u: goto label_305d38;
        case 0x305d3cu: goto label_305d3c;
        case 0x305d40u: goto label_305d40;
        case 0x305d44u: goto label_305d44;
        case 0x305d48u: goto label_305d48;
        case 0x305d4cu: goto label_305d4c;
        case 0x305d50u: goto label_305d50;
        case 0x305d54u: goto label_305d54;
        case 0x305d58u: goto label_305d58;
        case 0x305d5cu: goto label_305d5c;
        case 0x305d60u: goto label_305d60;
        case 0x305d64u: goto label_305d64;
        case 0x305d68u: goto label_305d68;
        case 0x305d6cu: goto label_305d6c;
        case 0x305d70u: goto label_305d70;
        case 0x305d74u: goto label_305d74;
        case 0x305d78u: goto label_305d78;
        case 0x305d7cu: goto label_305d7c;
        case 0x305d80u: goto label_305d80;
        case 0x305d84u: goto label_305d84;
        case 0x305d88u: goto label_305d88;
        case 0x305d8cu: goto label_305d8c;
        case 0x305d90u: goto label_305d90;
        case 0x305d94u: goto label_305d94;
        case 0x305d98u: goto label_305d98;
        case 0x305d9cu: goto label_305d9c;
        case 0x305da0u: goto label_305da0;
        case 0x305da4u: goto label_305da4;
        case 0x305da8u: goto label_305da8;
        case 0x305dacu: goto label_305dac;
        case 0x305db0u: goto label_305db0;
        case 0x305db4u: goto label_305db4;
        case 0x305db8u: goto label_305db8;
        case 0x305dbcu: goto label_305dbc;
        case 0x305dc0u: goto label_305dc0;
        case 0x305dc4u: goto label_305dc4;
        case 0x305dc8u: goto label_305dc8;
        case 0x305dccu: goto label_305dcc;
        case 0x305dd0u: goto label_305dd0;
        case 0x305dd4u: goto label_305dd4;
        case 0x305dd8u: goto label_305dd8;
        case 0x305ddcu: goto label_305ddc;
        case 0x305de0u: goto label_305de0;
        case 0x305de4u: goto label_305de4;
        case 0x305de8u: goto label_305de8;
        case 0x305decu: goto label_305dec;
        case 0x305df0u: goto label_305df0;
        case 0x305df4u: goto label_305df4;
        case 0x305df8u: goto label_305df8;
        case 0x305dfcu: goto label_305dfc;
        case 0x305e00u: goto label_305e00;
        case 0x305e04u: goto label_305e04;
        case 0x305e08u: goto label_305e08;
        case 0x305e0cu: goto label_305e0c;
        case 0x305e10u: goto label_305e10;
        case 0x305e14u: goto label_305e14;
        case 0x305e18u: goto label_305e18;
        case 0x305e1cu: goto label_305e1c;
        case 0x305e20u: goto label_305e20;
        case 0x305e24u: goto label_305e24;
        case 0x305e28u: goto label_305e28;
        case 0x305e2cu: goto label_305e2c;
        case 0x305e30u: goto label_305e30;
        case 0x305e34u: goto label_305e34;
        case 0x305e38u: goto label_305e38;
        case 0x305e3cu: goto label_305e3c;
        case 0x305e40u: goto label_305e40;
        case 0x305e44u: goto label_305e44;
        case 0x305e48u: goto label_305e48;
        case 0x305e4cu: goto label_305e4c;
        case 0x305e50u: goto label_305e50;
        case 0x305e54u: goto label_305e54;
        case 0x305e58u: goto label_305e58;
        case 0x305e5cu: goto label_305e5c;
        case 0x305e60u: goto label_305e60;
        case 0x305e64u: goto label_305e64;
        case 0x305e68u: goto label_305e68;
        case 0x305e6cu: goto label_305e6c;
        case 0x305e70u: goto label_305e70;
        case 0x305e74u: goto label_305e74;
        case 0x305e78u: goto label_305e78;
        case 0x305e7cu: goto label_305e7c;
        case 0x305e80u: goto label_305e80;
        case 0x305e84u: goto label_305e84;
        case 0x305e88u: goto label_305e88;
        case 0x305e8cu: goto label_305e8c;
        case 0x305e90u: goto label_305e90;
        case 0x305e94u: goto label_305e94;
        case 0x305e98u: goto label_305e98;
        case 0x305e9cu: goto label_305e9c;
        case 0x305ea0u: goto label_305ea0;
        case 0x305ea4u: goto label_305ea4;
        case 0x305ea8u: goto label_305ea8;
        case 0x305eacu: goto label_305eac;
        case 0x305eb0u: goto label_305eb0;
        case 0x305eb4u: goto label_305eb4;
        case 0x305eb8u: goto label_305eb8;
        case 0x305ebcu: goto label_305ebc;
        case 0x305ec0u: goto label_305ec0;
        case 0x305ec4u: goto label_305ec4;
        case 0x305ec8u: goto label_305ec8;
        case 0x305eccu: goto label_305ecc;
        case 0x305ed0u: goto label_305ed0;
        case 0x305ed4u: goto label_305ed4;
        case 0x305ed8u: goto label_305ed8;
        case 0x305edcu: goto label_305edc;
        case 0x305ee0u: goto label_305ee0;
        case 0x305ee4u: goto label_305ee4;
        case 0x305ee8u: goto label_305ee8;
        case 0x305eecu: goto label_305eec;
        case 0x305ef0u: goto label_305ef0;
        case 0x305ef4u: goto label_305ef4;
        case 0x305ef8u: goto label_305ef8;
        case 0x305efcu: goto label_305efc;
        case 0x305f00u: goto label_305f00;
        case 0x305f04u: goto label_305f04;
        case 0x305f08u: goto label_305f08;
        case 0x305f0cu: goto label_305f0c;
        case 0x305f10u: goto label_305f10;
        case 0x305f14u: goto label_305f14;
        case 0x305f18u: goto label_305f18;
        case 0x305f1cu: goto label_305f1c;
        case 0x305f20u: goto label_305f20;
        case 0x305f24u: goto label_305f24;
        case 0x305f28u: goto label_305f28;
        case 0x305f2cu: goto label_305f2c;
        case 0x305f30u: goto label_305f30;
        case 0x305f34u: goto label_305f34;
        case 0x305f38u: goto label_305f38;
        case 0x305f3cu: goto label_305f3c;
        case 0x305f40u: goto label_305f40;
        case 0x305f44u: goto label_305f44;
        case 0x305f48u: goto label_305f48;
        case 0x305f4cu: goto label_305f4c;
        case 0x305f50u: goto label_305f50;
        case 0x305f54u: goto label_305f54;
        case 0x305f58u: goto label_305f58;
        case 0x305f5cu: goto label_305f5c;
        case 0x305f60u: goto label_305f60;
        case 0x305f64u: goto label_305f64;
        case 0x305f68u: goto label_305f68;
        case 0x305f6cu: goto label_305f6c;
        case 0x305f70u: goto label_305f70;
        case 0x305f74u: goto label_305f74;
        case 0x305f78u: goto label_305f78;
        case 0x305f7cu: goto label_305f7c;
        case 0x305f80u: goto label_305f80;
        case 0x305f84u: goto label_305f84;
        case 0x305f88u: goto label_305f88;
        case 0x305f8cu: goto label_305f8c;
        case 0x305f90u: goto label_305f90;
        case 0x305f94u: goto label_305f94;
        case 0x305f98u: goto label_305f98;
        case 0x305f9cu: goto label_305f9c;
        case 0x305fa0u: goto label_305fa0;
        case 0x305fa4u: goto label_305fa4;
        case 0x305fa8u: goto label_305fa8;
        case 0x305facu: goto label_305fac;
        case 0x305fb0u: goto label_305fb0;
        case 0x305fb4u: goto label_305fb4;
        case 0x305fb8u: goto label_305fb8;
        case 0x305fbcu: goto label_305fbc;
        case 0x305fc0u: goto label_305fc0;
        case 0x305fc4u: goto label_305fc4;
        case 0x305fc8u: goto label_305fc8;
        case 0x305fccu: goto label_305fcc;
        case 0x305fd0u: goto label_305fd0;
        case 0x305fd4u: goto label_305fd4;
        case 0x305fd8u: goto label_305fd8;
        case 0x305fdcu: goto label_305fdc;
        case 0x305fe0u: goto label_305fe0;
        case 0x305fe4u: goto label_305fe4;
        case 0x305fe8u: goto label_305fe8;
        case 0x305fecu: goto label_305fec;
        case 0x305ff0u: goto label_305ff0;
        case 0x305ff4u: goto label_305ff4;
        case 0x305ff8u: goto label_305ff8;
        case 0x305ffcu: goto label_305ffc;
        case 0x306000u: goto label_306000;
        case 0x306004u: goto label_306004;
        case 0x306008u: goto label_306008;
        case 0x30600cu: goto label_30600c;
        case 0x306010u: goto label_306010;
        case 0x306014u: goto label_306014;
        case 0x306018u: goto label_306018;
        case 0x30601cu: goto label_30601c;
        case 0x306020u: goto label_306020;
        case 0x306024u: goto label_306024;
        case 0x306028u: goto label_306028;
        case 0x30602cu: goto label_30602c;
        case 0x306030u: goto label_306030;
        case 0x306034u: goto label_306034;
        case 0x306038u: goto label_306038;
        case 0x30603cu: goto label_30603c;
        case 0x306040u: goto label_306040;
        case 0x306044u: goto label_306044;
        case 0x306048u: goto label_306048;
        case 0x30604cu: goto label_30604c;
        case 0x306050u: goto label_306050;
        case 0x306054u: goto label_306054;
        case 0x306058u: goto label_306058;
        case 0x30605cu: goto label_30605c;
        case 0x306060u: goto label_306060;
        case 0x306064u: goto label_306064;
        case 0x306068u: goto label_306068;
        case 0x30606cu: goto label_30606c;
        case 0x306070u: goto label_306070;
        case 0x306074u: goto label_306074;
        case 0x306078u: goto label_306078;
        case 0x30607cu: goto label_30607c;
        case 0x306080u: goto label_306080;
        case 0x306084u: goto label_306084;
        case 0x306088u: goto label_306088;
        case 0x30608cu: goto label_30608c;
        case 0x306090u: goto label_306090;
        case 0x306094u: goto label_306094;
        case 0x306098u: goto label_306098;
        case 0x30609cu: goto label_30609c;
        case 0x3060a0u: goto label_3060a0;
        case 0x3060a4u: goto label_3060a4;
        case 0x3060a8u: goto label_3060a8;
        case 0x3060acu: goto label_3060ac;
        case 0x3060b0u: goto label_3060b0;
        case 0x3060b4u: goto label_3060b4;
        case 0x3060b8u: goto label_3060b8;
        case 0x3060bcu: goto label_3060bc;
        case 0x3060c0u: goto label_3060c0;
        case 0x3060c4u: goto label_3060c4;
        case 0x3060c8u: goto label_3060c8;
        case 0x3060ccu: goto label_3060cc;
        case 0x3060d0u: goto label_3060d0;
        case 0x3060d4u: goto label_3060d4;
        case 0x3060d8u: goto label_3060d8;
        case 0x3060dcu: goto label_3060dc;
        case 0x3060e0u: goto label_3060e0;
        case 0x3060e4u: goto label_3060e4;
        case 0x3060e8u: goto label_3060e8;
        case 0x3060ecu: goto label_3060ec;
        case 0x3060f0u: goto label_3060f0;
        case 0x3060f4u: goto label_3060f4;
        case 0x3060f8u: goto label_3060f8;
        case 0x3060fcu: goto label_3060fc;
        case 0x306100u: goto label_306100;
        case 0x306104u: goto label_306104;
        case 0x306108u: goto label_306108;
        case 0x30610cu: goto label_30610c;
        case 0x306110u: goto label_306110;
        case 0x306114u: goto label_306114;
        case 0x306118u: goto label_306118;
        case 0x30611cu: goto label_30611c;
        case 0x306120u: goto label_306120;
        case 0x306124u: goto label_306124;
        case 0x306128u: goto label_306128;
        case 0x30612cu: goto label_30612c;
        case 0x306130u: goto label_306130;
        case 0x306134u: goto label_306134;
        case 0x306138u: goto label_306138;
        case 0x30613cu: goto label_30613c;
        case 0x306140u: goto label_306140;
        case 0x306144u: goto label_306144;
        case 0x306148u: goto label_306148;
        case 0x30614cu: goto label_30614c;
        case 0x306150u: goto label_306150;
        case 0x306154u: goto label_306154;
        case 0x306158u: goto label_306158;
        case 0x30615cu: goto label_30615c;
        case 0x306160u: goto label_306160;
        case 0x306164u: goto label_306164;
        case 0x306168u: goto label_306168;
        case 0x30616cu: goto label_30616c;
        case 0x306170u: goto label_306170;
        case 0x306174u: goto label_306174;
        case 0x306178u: goto label_306178;
        case 0x30617cu: goto label_30617c;
        case 0x306180u: goto label_306180;
        case 0x306184u: goto label_306184;
        case 0x306188u: goto label_306188;
        case 0x30618cu: goto label_30618c;
        case 0x306190u: goto label_306190;
        case 0x306194u: goto label_306194;
        case 0x306198u: goto label_306198;
        case 0x30619cu: goto label_30619c;
        case 0x3061a0u: goto label_3061a0;
        case 0x3061a4u: goto label_3061a4;
        case 0x3061a8u: goto label_3061a8;
        case 0x3061acu: goto label_3061ac;
        case 0x3061b0u: goto label_3061b0;
        case 0x3061b4u: goto label_3061b4;
        case 0x3061b8u: goto label_3061b8;
        case 0x3061bcu: goto label_3061bc;
        case 0x3061c0u: goto label_3061c0;
        case 0x3061c4u: goto label_3061c4;
        case 0x3061c8u: goto label_3061c8;
        case 0x3061ccu: goto label_3061cc;
        case 0x3061d0u: goto label_3061d0;
        case 0x3061d4u: goto label_3061d4;
        case 0x3061d8u: goto label_3061d8;
        case 0x3061dcu: goto label_3061dc;
        case 0x3061e0u: goto label_3061e0;
        case 0x3061e4u: goto label_3061e4;
        case 0x3061e8u: goto label_3061e8;
        case 0x3061ecu: goto label_3061ec;
        case 0x3061f0u: goto label_3061f0;
        case 0x3061f4u: goto label_3061f4;
        case 0x3061f8u: goto label_3061f8;
        case 0x3061fcu: goto label_3061fc;
        case 0x306200u: goto label_306200;
        case 0x306204u: goto label_306204;
        case 0x306208u: goto label_306208;
        case 0x30620cu: goto label_30620c;
        case 0x306210u: goto label_306210;
        case 0x306214u: goto label_306214;
        case 0x306218u: goto label_306218;
        case 0x30621cu: goto label_30621c;
        case 0x306220u: goto label_306220;
        case 0x306224u: goto label_306224;
        case 0x306228u: goto label_306228;
        case 0x30622cu: goto label_30622c;
        case 0x306230u: goto label_306230;
        case 0x306234u: goto label_306234;
        case 0x306238u: goto label_306238;
        case 0x30623cu: goto label_30623c;
        case 0x306240u: goto label_306240;
        case 0x306244u: goto label_306244;
        case 0x306248u: goto label_306248;
        case 0x30624cu: goto label_30624c;
        case 0x306250u: goto label_306250;
        case 0x306254u: goto label_306254;
        case 0x306258u: goto label_306258;
        case 0x30625cu: goto label_30625c;
        case 0x306260u: goto label_306260;
        case 0x306264u: goto label_306264;
        case 0x306268u: goto label_306268;
        case 0x30626cu: goto label_30626c;
        case 0x306270u: goto label_306270;
        case 0x306274u: goto label_306274;
        case 0x306278u: goto label_306278;
        case 0x30627cu: goto label_30627c;
        case 0x306280u: goto label_306280;
        case 0x306284u: goto label_306284;
        case 0x306288u: goto label_306288;
        case 0x30628cu: goto label_30628c;
        case 0x306290u: goto label_306290;
        case 0x306294u: goto label_306294;
        case 0x306298u: goto label_306298;
        case 0x30629cu: goto label_30629c;
        case 0x3062a0u: goto label_3062a0;
        case 0x3062a4u: goto label_3062a4;
        case 0x3062a8u: goto label_3062a8;
        case 0x3062acu: goto label_3062ac;
        case 0x3062b0u: goto label_3062b0;
        case 0x3062b4u: goto label_3062b4;
        case 0x3062b8u: goto label_3062b8;
        case 0x3062bcu: goto label_3062bc;
        case 0x3062c0u: goto label_3062c0;
        case 0x3062c4u: goto label_3062c4;
        case 0x3062c8u: goto label_3062c8;
        case 0x3062ccu: goto label_3062cc;
        case 0x3062d0u: goto label_3062d0;
        case 0x3062d4u: goto label_3062d4;
        case 0x3062d8u: goto label_3062d8;
        case 0x3062dcu: goto label_3062dc;
        case 0x3062e0u: goto label_3062e0;
        case 0x3062e4u: goto label_3062e4;
        case 0x3062e8u: goto label_3062e8;
        case 0x3062ecu: goto label_3062ec;
        case 0x3062f0u: goto label_3062f0;
        case 0x3062f4u: goto label_3062f4;
        case 0x3062f8u: goto label_3062f8;
        case 0x3062fcu: goto label_3062fc;
        case 0x306300u: goto label_306300;
        case 0x306304u: goto label_306304;
        case 0x306308u: goto label_306308;
        case 0x30630cu: goto label_30630c;
        case 0x306310u: goto label_306310;
        case 0x306314u: goto label_306314;
        case 0x306318u: goto label_306318;
        case 0x30631cu: goto label_30631c;
        case 0x306320u: goto label_306320;
        case 0x306324u: goto label_306324;
        case 0x306328u: goto label_306328;
        case 0x30632cu: goto label_30632c;
        case 0x306330u: goto label_306330;
        case 0x306334u: goto label_306334;
        case 0x306338u: goto label_306338;
        case 0x30633cu: goto label_30633c;
        case 0x306340u: goto label_306340;
        case 0x306344u: goto label_306344;
        case 0x306348u: goto label_306348;
        case 0x30634cu: goto label_30634c;
        case 0x306350u: goto label_306350;
        case 0x306354u: goto label_306354;
        case 0x306358u: goto label_306358;
        case 0x30635cu: goto label_30635c;
        case 0x306360u: goto label_306360;
        case 0x306364u: goto label_306364;
        case 0x306368u: goto label_306368;
        case 0x30636cu: goto label_30636c;
        case 0x306370u: goto label_306370;
        case 0x306374u: goto label_306374;
        case 0x306378u: goto label_306378;
        case 0x30637cu: goto label_30637c;
        case 0x306380u: goto label_306380;
        case 0x306384u: goto label_306384;
        case 0x306388u: goto label_306388;
        case 0x30638cu: goto label_30638c;
        case 0x306390u: goto label_306390;
        case 0x306394u: goto label_306394;
        case 0x306398u: goto label_306398;
        case 0x30639cu: goto label_30639c;
        case 0x3063a0u: goto label_3063a0;
        case 0x3063a4u: goto label_3063a4;
        case 0x3063a8u: goto label_3063a8;
        case 0x3063acu: goto label_3063ac;
        case 0x3063b0u: goto label_3063b0;
        case 0x3063b4u: goto label_3063b4;
        case 0x3063b8u: goto label_3063b8;
        case 0x3063bcu: goto label_3063bc;
        case 0x3063c0u: goto label_3063c0;
        case 0x3063c4u: goto label_3063c4;
        case 0x3063c8u: goto label_3063c8;
        case 0x3063ccu: goto label_3063cc;
        case 0x3063d0u: goto label_3063d0;
        case 0x3063d4u: goto label_3063d4;
        case 0x3063d8u: goto label_3063d8;
        case 0x3063dcu: goto label_3063dc;
        case 0x3063e0u: goto label_3063e0;
        case 0x3063e4u: goto label_3063e4;
        case 0x3063e8u: goto label_3063e8;
        case 0x3063ecu: goto label_3063ec;
        case 0x3063f0u: goto label_3063f0;
        case 0x3063f4u: goto label_3063f4;
        case 0x3063f8u: goto label_3063f8;
        case 0x3063fcu: goto label_3063fc;
        case 0x306400u: goto label_306400;
        case 0x306404u: goto label_306404;
        case 0x306408u: goto label_306408;
        case 0x30640cu: goto label_30640c;
        case 0x306410u: goto label_306410;
        case 0x306414u: goto label_306414;
        case 0x306418u: goto label_306418;
        case 0x30641cu: goto label_30641c;
        case 0x306420u: goto label_306420;
        case 0x306424u: goto label_306424;
        case 0x306428u: goto label_306428;
        case 0x30642cu: goto label_30642c;
        case 0x306430u: goto label_306430;
        case 0x306434u: goto label_306434;
        case 0x306438u: goto label_306438;
        case 0x30643cu: goto label_30643c;
        case 0x306440u: goto label_306440;
        case 0x306444u: goto label_306444;
        case 0x306448u: goto label_306448;
        case 0x30644cu: goto label_30644c;
        case 0x306450u: goto label_306450;
        case 0x306454u: goto label_306454;
        case 0x306458u: goto label_306458;
        case 0x30645cu: goto label_30645c;
        case 0x306460u: goto label_306460;
        case 0x306464u: goto label_306464;
        case 0x306468u: goto label_306468;
        case 0x30646cu: goto label_30646c;
        case 0x306470u: goto label_306470;
        case 0x306474u: goto label_306474;
        case 0x306478u: goto label_306478;
        case 0x30647cu: goto label_30647c;
        case 0x306480u: goto label_306480;
        case 0x306484u: goto label_306484;
        case 0x306488u: goto label_306488;
        case 0x30648cu: goto label_30648c;
        case 0x306490u: goto label_306490;
        case 0x306494u: goto label_306494;
        case 0x306498u: goto label_306498;
        case 0x30649cu: goto label_30649c;
        case 0x3064a0u: goto label_3064a0;
        case 0x3064a4u: goto label_3064a4;
        case 0x3064a8u: goto label_3064a8;
        case 0x3064acu: goto label_3064ac;
        case 0x3064b0u: goto label_3064b0;
        case 0x3064b4u: goto label_3064b4;
        case 0x3064b8u: goto label_3064b8;
        case 0x3064bcu: goto label_3064bc;
        case 0x3064c0u: goto label_3064c0;
        case 0x3064c4u: goto label_3064c4;
        case 0x3064c8u: goto label_3064c8;
        case 0x3064ccu: goto label_3064cc;
        case 0x3064d0u: goto label_3064d0;
        case 0x3064d4u: goto label_3064d4;
        case 0x3064d8u: goto label_3064d8;
        case 0x3064dcu: goto label_3064dc;
        case 0x3064e0u: goto label_3064e0;
        case 0x3064e4u: goto label_3064e4;
        case 0x3064e8u: goto label_3064e8;
        case 0x3064ecu: goto label_3064ec;
        case 0x3064f0u: goto label_3064f0;
        case 0x3064f4u: goto label_3064f4;
        case 0x3064f8u: goto label_3064f8;
        case 0x3064fcu: goto label_3064fc;
        case 0x306500u: goto label_306500;
        case 0x306504u: goto label_306504;
        case 0x306508u: goto label_306508;
        case 0x30650cu: goto label_30650c;
        case 0x306510u: goto label_306510;
        case 0x306514u: goto label_306514;
        case 0x306518u: goto label_306518;
        case 0x30651cu: goto label_30651c;
        case 0x306520u: goto label_306520;
        case 0x306524u: goto label_306524;
        case 0x306528u: goto label_306528;
        case 0x30652cu: goto label_30652c;
        case 0x306530u: goto label_306530;
        case 0x306534u: goto label_306534;
        case 0x306538u: goto label_306538;
        case 0x30653cu: goto label_30653c;
        case 0x306540u: goto label_306540;
        case 0x306544u: goto label_306544;
        case 0x306548u: goto label_306548;
        case 0x30654cu: goto label_30654c;
        case 0x306550u: goto label_306550;
        case 0x306554u: goto label_306554;
        case 0x306558u: goto label_306558;
        case 0x30655cu: goto label_30655c;
        case 0x306560u: goto label_306560;
        case 0x306564u: goto label_306564;
        case 0x306568u: goto label_306568;
        case 0x30656cu: goto label_30656c;
        case 0x306570u: goto label_306570;
        case 0x306574u: goto label_306574;
        case 0x306578u: goto label_306578;
        case 0x30657cu: goto label_30657c;
        case 0x306580u: goto label_306580;
        case 0x306584u: goto label_306584;
        case 0x306588u: goto label_306588;
        case 0x30658cu: goto label_30658c;
        case 0x306590u: goto label_306590;
        case 0x306594u: goto label_306594;
        case 0x306598u: goto label_306598;
        case 0x30659cu: goto label_30659c;
        case 0x3065a0u: goto label_3065a0;
        case 0x3065a4u: goto label_3065a4;
        case 0x3065a8u: goto label_3065a8;
        case 0x3065acu: goto label_3065ac;
        case 0x3065b0u: goto label_3065b0;
        case 0x3065b4u: goto label_3065b4;
        case 0x3065b8u: goto label_3065b8;
        case 0x3065bcu: goto label_3065bc;
        case 0x3065c0u: goto label_3065c0;
        case 0x3065c4u: goto label_3065c4;
        case 0x3065c8u: goto label_3065c8;
        case 0x3065ccu: goto label_3065cc;
        case 0x3065d0u: goto label_3065d0;
        case 0x3065d4u: goto label_3065d4;
        case 0x3065d8u: goto label_3065d8;
        case 0x3065dcu: goto label_3065dc;
        case 0x3065e0u: goto label_3065e0;
        case 0x3065e4u: goto label_3065e4;
        case 0x3065e8u: goto label_3065e8;
        case 0x3065ecu: goto label_3065ec;
        case 0x3065f0u: goto label_3065f0;
        case 0x3065f4u: goto label_3065f4;
        case 0x3065f8u: goto label_3065f8;
        case 0x3065fcu: goto label_3065fc;
        case 0x306600u: goto label_306600;
        case 0x306604u: goto label_306604;
        case 0x306608u: goto label_306608;
        case 0x30660cu: goto label_30660c;
        case 0x306610u: goto label_306610;
        case 0x306614u: goto label_306614;
        case 0x306618u: goto label_306618;
        case 0x30661cu: goto label_30661c;
        case 0x306620u: goto label_306620;
        case 0x306624u: goto label_306624;
        case 0x306628u: goto label_306628;
        case 0x30662cu: goto label_30662c;
        case 0x306630u: goto label_306630;
        case 0x306634u: goto label_306634;
        case 0x306638u: goto label_306638;
        case 0x30663cu: goto label_30663c;
        case 0x306640u: goto label_306640;
        case 0x306644u: goto label_306644;
        case 0x306648u: goto label_306648;
        case 0x30664cu: goto label_30664c;
        case 0x306650u: goto label_306650;
        case 0x306654u: goto label_306654;
        case 0x306658u: goto label_306658;
        case 0x30665cu: goto label_30665c;
        case 0x306660u: goto label_306660;
        case 0x306664u: goto label_306664;
        case 0x306668u: goto label_306668;
        case 0x30666cu: goto label_30666c;
        case 0x306670u: goto label_306670;
        case 0x306674u: goto label_306674;
        case 0x306678u: goto label_306678;
        case 0x30667cu: goto label_30667c;
        case 0x306680u: goto label_306680;
        case 0x306684u: goto label_306684;
        case 0x306688u: goto label_306688;
        case 0x30668cu: goto label_30668c;
        case 0x306690u: goto label_306690;
        case 0x306694u: goto label_306694;
        case 0x306698u: goto label_306698;
        case 0x30669cu: goto label_30669c;
        case 0x3066a0u: goto label_3066a0;
        case 0x3066a4u: goto label_3066a4;
        case 0x3066a8u: goto label_3066a8;
        case 0x3066acu: goto label_3066ac;
        case 0x3066b0u: goto label_3066b0;
        case 0x3066b4u: goto label_3066b4;
        case 0x3066b8u: goto label_3066b8;
        case 0x3066bcu: goto label_3066bc;
        case 0x3066c0u: goto label_3066c0;
        case 0x3066c4u: goto label_3066c4;
        case 0x3066c8u: goto label_3066c8;
        case 0x3066ccu: goto label_3066cc;
        case 0x3066d0u: goto label_3066d0;
        case 0x3066d4u: goto label_3066d4;
        case 0x3066d8u: goto label_3066d8;
        case 0x3066dcu: goto label_3066dc;
        case 0x3066e0u: goto label_3066e0;
        case 0x3066e4u: goto label_3066e4;
        case 0x3066e8u: goto label_3066e8;
        case 0x3066ecu: goto label_3066ec;
        case 0x3066f0u: goto label_3066f0;
        case 0x3066f4u: goto label_3066f4;
        case 0x3066f8u: goto label_3066f8;
        case 0x3066fcu: goto label_3066fc;
        case 0x306700u: goto label_306700;
        case 0x306704u: goto label_306704;
        case 0x306708u: goto label_306708;
        case 0x30670cu: goto label_30670c;
        case 0x306710u: goto label_306710;
        case 0x306714u: goto label_306714;
        case 0x306718u: goto label_306718;
        case 0x30671cu: goto label_30671c;
        case 0x306720u: goto label_306720;
        case 0x306724u: goto label_306724;
        case 0x306728u: goto label_306728;
        case 0x30672cu: goto label_30672c;
        case 0x306730u: goto label_306730;
        case 0x306734u: goto label_306734;
        case 0x306738u: goto label_306738;
        case 0x30673cu: goto label_30673c;
        case 0x306740u: goto label_306740;
        case 0x306744u: goto label_306744;
        case 0x306748u: goto label_306748;
        case 0x30674cu: goto label_30674c;
        case 0x306750u: goto label_306750;
        case 0x306754u: goto label_306754;
        case 0x306758u: goto label_306758;
        case 0x30675cu: goto label_30675c;
        case 0x306760u: goto label_306760;
        case 0x306764u: goto label_306764;
        case 0x306768u: goto label_306768;
        case 0x30676cu: goto label_30676c;
        case 0x306770u: goto label_306770;
        case 0x306774u: goto label_306774;
        case 0x306778u: goto label_306778;
        case 0x30677cu: goto label_30677c;
        case 0x306780u: goto label_306780;
        case 0x306784u: goto label_306784;
        case 0x306788u: goto label_306788;
        case 0x30678cu: goto label_30678c;
        case 0x306790u: goto label_306790;
        case 0x306794u: goto label_306794;
        case 0x306798u: goto label_306798;
        case 0x30679cu: goto label_30679c;
        case 0x3067a0u: goto label_3067a0;
        case 0x3067a4u: goto label_3067a4;
        case 0x3067a8u: goto label_3067a8;
        case 0x3067acu: goto label_3067ac;
        case 0x3067b0u: goto label_3067b0;
        case 0x3067b4u: goto label_3067b4;
        case 0x3067b8u: goto label_3067b8;
        case 0x3067bcu: goto label_3067bc;
        case 0x3067c0u: goto label_3067c0;
        case 0x3067c4u: goto label_3067c4;
        case 0x3067c8u: goto label_3067c8;
        case 0x3067ccu: goto label_3067cc;
        case 0x3067d0u: goto label_3067d0;
        case 0x3067d4u: goto label_3067d4;
        case 0x3067d8u: goto label_3067d8;
        case 0x3067dcu: goto label_3067dc;
        case 0x3067e0u: goto label_3067e0;
        case 0x3067e4u: goto label_3067e4;
        case 0x3067e8u: goto label_3067e8;
        case 0x3067ecu: goto label_3067ec;
        case 0x3067f0u: goto label_3067f0;
        case 0x3067f4u: goto label_3067f4;
        case 0x3067f8u: goto label_3067f8;
        case 0x3067fcu: goto label_3067fc;
        case 0x306800u: goto label_306800;
        case 0x306804u: goto label_306804;
        case 0x306808u: goto label_306808;
        case 0x30680cu: goto label_30680c;
        case 0x306810u: goto label_306810;
        case 0x306814u: goto label_306814;
        case 0x306818u: goto label_306818;
        case 0x30681cu: goto label_30681c;
        case 0x306820u: goto label_306820;
        case 0x306824u: goto label_306824;
        case 0x306828u: goto label_306828;
        case 0x30682cu: goto label_30682c;
        case 0x306830u: goto label_306830;
        case 0x306834u: goto label_306834;
        case 0x306838u: goto label_306838;
        case 0x30683cu: goto label_30683c;
        case 0x306840u: goto label_306840;
        case 0x306844u: goto label_306844;
        case 0x306848u: goto label_306848;
        case 0x30684cu: goto label_30684c;
        case 0x306850u: goto label_306850;
        case 0x306854u: goto label_306854;
        case 0x306858u: goto label_306858;
        case 0x30685cu: goto label_30685c;
        case 0x306860u: goto label_306860;
        case 0x306864u: goto label_306864;
        case 0x306868u: goto label_306868;
        case 0x30686cu: goto label_30686c;
        case 0x306870u: goto label_306870;
        case 0x306874u: goto label_306874;
        case 0x306878u: goto label_306878;
        case 0x30687cu: goto label_30687c;
        case 0x306880u: goto label_306880;
        case 0x306884u: goto label_306884;
        case 0x306888u: goto label_306888;
        case 0x30688cu: goto label_30688c;
        case 0x306890u: goto label_306890;
        case 0x306894u: goto label_306894;
        case 0x306898u: goto label_306898;
        case 0x30689cu: goto label_30689c;
        case 0x3068a0u: goto label_3068a0;
        case 0x3068a4u: goto label_3068a4;
        case 0x3068a8u: goto label_3068a8;
        case 0x3068acu: goto label_3068ac;
        case 0x3068b0u: goto label_3068b0;
        case 0x3068b4u: goto label_3068b4;
        case 0x3068b8u: goto label_3068b8;
        case 0x3068bcu: goto label_3068bc;
        case 0x3068c0u: goto label_3068c0;
        case 0x3068c4u: goto label_3068c4;
        case 0x3068c8u: goto label_3068c8;
        case 0x3068ccu: goto label_3068cc;
        case 0x3068d0u: goto label_3068d0;
        case 0x3068d4u: goto label_3068d4;
        case 0x3068d8u: goto label_3068d8;
        case 0x3068dcu: goto label_3068dc;
        case 0x3068e0u: goto label_3068e0;
        case 0x3068e4u: goto label_3068e4;
        case 0x3068e8u: goto label_3068e8;
        case 0x3068ecu: goto label_3068ec;
        case 0x3068f0u: goto label_3068f0;
        case 0x3068f4u: goto label_3068f4;
        case 0x3068f8u: goto label_3068f8;
        case 0x3068fcu: goto label_3068fc;
        case 0x306900u: goto label_306900;
        case 0x306904u: goto label_306904;
        case 0x306908u: goto label_306908;
        case 0x30690cu: goto label_30690c;
        case 0x306910u: goto label_306910;
        case 0x306914u: goto label_306914;
        case 0x306918u: goto label_306918;
        case 0x30691cu: goto label_30691c;
        case 0x306920u: goto label_306920;
        case 0x306924u: goto label_306924;
        case 0x306928u: goto label_306928;
        case 0x30692cu: goto label_30692c;
        case 0x306930u: goto label_306930;
        case 0x306934u: goto label_306934;
        case 0x306938u: goto label_306938;
        case 0x30693cu: goto label_30693c;
        case 0x306940u: goto label_306940;
        case 0x306944u: goto label_306944;
        case 0x306948u: goto label_306948;
        case 0x30694cu: goto label_30694c;
        case 0x306950u: goto label_306950;
        case 0x306954u: goto label_306954;
        case 0x306958u: goto label_306958;
        case 0x30695cu: goto label_30695c;
        case 0x306960u: goto label_306960;
        case 0x306964u: goto label_306964;
        case 0x306968u: goto label_306968;
        case 0x30696cu: goto label_30696c;
        case 0x306970u: goto label_306970;
        case 0x306974u: goto label_306974;
        case 0x306978u: goto label_306978;
        case 0x30697cu: goto label_30697c;
        case 0x306980u: goto label_306980;
        case 0x306984u: goto label_306984;
        case 0x306988u: goto label_306988;
        case 0x30698cu: goto label_30698c;
        case 0x306990u: goto label_306990;
        case 0x306994u: goto label_306994;
        case 0x306998u: goto label_306998;
        case 0x30699cu: goto label_30699c;
        case 0x3069a0u: goto label_3069a0;
        case 0x3069a4u: goto label_3069a4;
        case 0x3069a8u: goto label_3069a8;
        case 0x3069acu: goto label_3069ac;
        case 0x3069b0u: goto label_3069b0;
        case 0x3069b4u: goto label_3069b4;
        case 0x3069b8u: goto label_3069b8;
        case 0x3069bcu: goto label_3069bc;
        case 0x3069c0u: goto label_3069c0;
        case 0x3069c4u: goto label_3069c4;
        case 0x3069c8u: goto label_3069c8;
        case 0x3069ccu: goto label_3069cc;
        case 0x3069d0u: goto label_3069d0;
        case 0x3069d4u: goto label_3069d4;
        case 0x3069d8u: goto label_3069d8;
        case 0x3069dcu: goto label_3069dc;
        case 0x3069e0u: goto label_3069e0;
        case 0x3069e4u: goto label_3069e4;
        case 0x3069e8u: goto label_3069e8;
        case 0x3069ecu: goto label_3069ec;
        case 0x3069f0u: goto label_3069f0;
        case 0x3069f4u: goto label_3069f4;
        case 0x3069f8u: goto label_3069f8;
        case 0x3069fcu: goto label_3069fc;
        case 0x306a00u: goto label_306a00;
        case 0x306a04u: goto label_306a04;
        case 0x306a08u: goto label_306a08;
        case 0x306a0cu: goto label_306a0c;
        case 0x306a10u: goto label_306a10;
        case 0x306a14u: goto label_306a14;
        case 0x306a18u: goto label_306a18;
        case 0x306a1cu: goto label_306a1c;
        case 0x306a20u: goto label_306a20;
        case 0x306a24u: goto label_306a24;
        case 0x306a28u: goto label_306a28;
        case 0x306a2cu: goto label_306a2c;
        case 0x306a30u: goto label_306a30;
        case 0x306a34u: goto label_306a34;
        case 0x306a38u: goto label_306a38;
        case 0x306a3cu: goto label_306a3c;
        case 0x306a40u: goto label_306a40;
        case 0x306a44u: goto label_306a44;
        case 0x306a48u: goto label_306a48;
        case 0x306a4cu: goto label_306a4c;
        case 0x306a50u: goto label_306a50;
        case 0x306a54u: goto label_306a54;
        case 0x306a58u: goto label_306a58;
        case 0x306a5cu: goto label_306a5c;
        case 0x306a60u: goto label_306a60;
        case 0x306a64u: goto label_306a64;
        case 0x306a68u: goto label_306a68;
        case 0x306a6cu: goto label_306a6c;
        case 0x306a70u: goto label_306a70;
        case 0x306a74u: goto label_306a74;
        case 0x306a78u: goto label_306a78;
        case 0x306a7cu: goto label_306a7c;
        case 0x306a80u: goto label_306a80;
        case 0x306a84u: goto label_306a84;
        case 0x306a88u: goto label_306a88;
        case 0x306a8cu: goto label_306a8c;
        case 0x306a90u: goto label_306a90;
        case 0x306a94u: goto label_306a94;
        case 0x306a98u: goto label_306a98;
        case 0x306a9cu: goto label_306a9c;
        case 0x306aa0u: goto label_306aa0;
        case 0x306aa4u: goto label_306aa4;
        case 0x306aa8u: goto label_306aa8;
        case 0x306aacu: goto label_306aac;
        case 0x306ab0u: goto label_306ab0;
        case 0x306ab4u: goto label_306ab4;
        case 0x306ab8u: goto label_306ab8;
        case 0x306abcu: goto label_306abc;
        case 0x306ac0u: goto label_306ac0;
        case 0x306ac4u: goto label_306ac4;
        case 0x306ac8u: goto label_306ac8;
        case 0x306accu: goto label_306acc;
        case 0x306ad0u: goto label_306ad0;
        case 0x306ad4u: goto label_306ad4;
        case 0x306ad8u: goto label_306ad8;
        case 0x306adcu: goto label_306adc;
        case 0x306ae0u: goto label_306ae0;
        case 0x306ae4u: goto label_306ae4;
        case 0x306ae8u: goto label_306ae8;
        case 0x306aecu: goto label_306aec;
        case 0x306af0u: goto label_306af0;
        case 0x306af4u: goto label_306af4;
        case 0x306af8u: goto label_306af8;
        case 0x306afcu: goto label_306afc;
        case 0x306b00u: goto label_306b00;
        case 0x306b04u: goto label_306b04;
        case 0x306b08u: goto label_306b08;
        case 0x306b0cu: goto label_306b0c;
        case 0x306b10u: goto label_306b10;
        case 0x306b14u: goto label_306b14;
        case 0x306b18u: goto label_306b18;
        case 0x306b1cu: goto label_306b1c;
        case 0x306b20u: goto label_306b20;
        case 0x306b24u: goto label_306b24;
        case 0x306b28u: goto label_306b28;
        case 0x306b2cu: goto label_306b2c;
        case 0x306b30u: goto label_306b30;
        case 0x306b34u: goto label_306b34;
        case 0x306b38u: goto label_306b38;
        case 0x306b3cu: goto label_306b3c;
        case 0x306b40u: goto label_306b40;
        case 0x306b44u: goto label_306b44;
        case 0x306b48u: goto label_306b48;
        case 0x306b4cu: goto label_306b4c;
        case 0x306b50u: goto label_306b50;
        case 0x306b54u: goto label_306b54;
        case 0x306b58u: goto label_306b58;
        case 0x306b5cu: goto label_306b5c;
        case 0x306b60u: goto label_306b60;
        case 0x306b64u: goto label_306b64;
        case 0x306b68u: goto label_306b68;
        case 0x306b6cu: goto label_306b6c;
        case 0x306b70u: goto label_306b70;
        case 0x306b74u: goto label_306b74;
        case 0x306b78u: goto label_306b78;
        case 0x306b7cu: goto label_306b7c;
        case 0x306b80u: goto label_306b80;
        case 0x306b84u: goto label_306b84;
        case 0x306b88u: goto label_306b88;
        case 0x306b8cu: goto label_306b8c;
        case 0x306b90u: goto label_306b90;
        case 0x306b94u: goto label_306b94;
        case 0x306b98u: goto label_306b98;
        case 0x306b9cu: goto label_306b9c;
        case 0x306ba0u: goto label_306ba0;
        case 0x306ba4u: goto label_306ba4;
        case 0x306ba8u: goto label_306ba8;
        case 0x306bacu: goto label_306bac;
        case 0x306bb0u: goto label_306bb0;
        case 0x306bb4u: goto label_306bb4;
        case 0x306bb8u: goto label_306bb8;
        case 0x306bbcu: goto label_306bbc;
        case 0x306bc0u: goto label_306bc0;
        case 0x306bc4u: goto label_306bc4;
        case 0x306bc8u: goto label_306bc8;
        case 0x306bccu: goto label_306bcc;
        case 0x306bd0u: goto label_306bd0;
        case 0x306bd4u: goto label_306bd4;
        case 0x306bd8u: goto label_306bd8;
        case 0x306bdcu: goto label_306bdc;
        case 0x306be0u: goto label_306be0;
        case 0x306be4u: goto label_306be4;
        case 0x306be8u: goto label_306be8;
        case 0x306becu: goto label_306bec;
        case 0x306bf0u: goto label_306bf0;
        case 0x306bf4u: goto label_306bf4;
        case 0x306bf8u: goto label_306bf8;
        case 0x306bfcu: goto label_306bfc;
        case 0x306c00u: goto label_306c00;
        case 0x306c04u: goto label_306c04;
        case 0x306c08u: goto label_306c08;
        case 0x306c0cu: goto label_306c0c;
        case 0x306c10u: goto label_306c10;
        case 0x306c14u: goto label_306c14;
        case 0x306c18u: goto label_306c18;
        case 0x306c1cu: goto label_306c1c;
        case 0x306c20u: goto label_306c20;
        case 0x306c24u: goto label_306c24;
        case 0x306c28u: goto label_306c28;
        case 0x306c2cu: goto label_306c2c;
        case 0x306c30u: goto label_306c30;
        case 0x306c34u: goto label_306c34;
        case 0x306c38u: goto label_306c38;
        case 0x306c3cu: goto label_306c3c;
        case 0x306c40u: goto label_306c40;
        case 0x306c44u: goto label_306c44;
        case 0x306c48u: goto label_306c48;
        case 0x306c4cu: goto label_306c4c;
        case 0x306c50u: goto label_306c50;
        case 0x306c54u: goto label_306c54;
        case 0x306c58u: goto label_306c58;
        case 0x306c5cu: goto label_306c5c;
        case 0x306c60u: goto label_306c60;
        case 0x306c64u: goto label_306c64;
        case 0x306c68u: goto label_306c68;
        case 0x306c6cu: goto label_306c6c;
        case 0x306c70u: goto label_306c70;
        case 0x306c74u: goto label_306c74;
        case 0x306c78u: goto label_306c78;
        case 0x306c7cu: goto label_306c7c;
        case 0x306c80u: goto label_306c80;
        case 0x306c84u: goto label_306c84;
        case 0x306c88u: goto label_306c88;
        case 0x306c8cu: goto label_306c8c;
        case 0x306c90u: goto label_306c90;
        case 0x306c94u: goto label_306c94;
        case 0x306c98u: goto label_306c98;
        case 0x306c9cu: goto label_306c9c;
        case 0x306ca0u: goto label_306ca0;
        case 0x306ca4u: goto label_306ca4;
        case 0x306ca8u: goto label_306ca8;
        case 0x306cacu: goto label_306cac;
        case 0x306cb0u: goto label_306cb0;
        case 0x306cb4u: goto label_306cb4;
        case 0x306cb8u: goto label_306cb8;
        case 0x306cbcu: goto label_306cbc;
        case 0x306cc0u: goto label_306cc0;
        case 0x306cc4u: goto label_306cc4;
        case 0x306cc8u: goto label_306cc8;
        case 0x306cccu: goto label_306ccc;
        case 0x306cd0u: goto label_306cd0;
        case 0x306cd4u: goto label_306cd4;
        case 0x306cd8u: goto label_306cd8;
        case 0x306cdcu: goto label_306cdc;
        case 0x306ce0u: goto label_306ce0;
        case 0x306ce4u: goto label_306ce4;
        case 0x306ce8u: goto label_306ce8;
        case 0x306cecu: goto label_306cec;
        case 0x306cf0u: goto label_306cf0;
        case 0x306cf4u: goto label_306cf4;
        case 0x306cf8u: goto label_306cf8;
        case 0x306cfcu: goto label_306cfc;
        case 0x306d00u: goto label_306d00;
        case 0x306d04u: goto label_306d04;
        case 0x306d08u: goto label_306d08;
        case 0x306d0cu: goto label_306d0c;
        case 0x306d10u: goto label_306d10;
        case 0x306d14u: goto label_306d14;
        case 0x306d18u: goto label_306d18;
        case 0x306d1cu: goto label_306d1c;
        case 0x306d20u: goto label_306d20;
        case 0x306d24u: goto label_306d24;
        case 0x306d28u: goto label_306d28;
        case 0x306d2cu: goto label_306d2c;
        case 0x306d30u: goto label_306d30;
        case 0x306d34u: goto label_306d34;
        case 0x306d38u: goto label_306d38;
        case 0x306d3cu: goto label_306d3c;
        case 0x306d40u: goto label_306d40;
        case 0x306d44u: goto label_306d44;
        case 0x306d48u: goto label_306d48;
        case 0x306d4cu: goto label_306d4c;
        case 0x306d50u: goto label_306d50;
        case 0x306d54u: goto label_306d54;
        case 0x306d58u: goto label_306d58;
        case 0x306d5cu: goto label_306d5c;
        case 0x306d60u: goto label_306d60;
        case 0x306d64u: goto label_306d64;
        case 0x306d68u: goto label_306d68;
        case 0x306d6cu: goto label_306d6c;
        case 0x306d70u: goto label_306d70;
        case 0x306d74u: goto label_306d74;
        case 0x306d78u: goto label_306d78;
        case 0x306d7cu: goto label_306d7c;
        case 0x306d80u: goto label_306d80;
        case 0x306d84u: goto label_306d84;
        case 0x306d88u: goto label_306d88;
        case 0x306d8cu: goto label_306d8c;
        case 0x306d90u: goto label_306d90;
        case 0x306d94u: goto label_306d94;
        case 0x306d98u: goto label_306d98;
        case 0x306d9cu: goto label_306d9c;
        case 0x306da0u: goto label_306da0;
        case 0x306da4u: goto label_306da4;
        case 0x306da8u: goto label_306da8;
        case 0x306dacu: goto label_306dac;
        case 0x306db0u: goto label_306db0;
        case 0x306db4u: goto label_306db4;
        case 0x306db8u: goto label_306db8;
        case 0x306dbcu: goto label_306dbc;
        case 0x306dc0u: goto label_306dc0;
        case 0x306dc4u: goto label_306dc4;
        case 0x306dc8u: goto label_306dc8;
        case 0x306dccu: goto label_306dcc;
        case 0x306dd0u: goto label_306dd0;
        case 0x306dd4u: goto label_306dd4;
        case 0x306dd8u: goto label_306dd8;
        case 0x306ddcu: goto label_306ddc;
        case 0x306de0u: goto label_306de0;
        case 0x306de4u: goto label_306de4;
        case 0x306de8u: goto label_306de8;
        case 0x306decu: goto label_306dec;
        case 0x306df0u: goto label_306df0;
        case 0x306df4u: goto label_306df4;
        case 0x306df8u: goto label_306df8;
        case 0x306dfcu: goto label_306dfc;
        case 0x306e00u: goto label_306e00;
        case 0x306e04u: goto label_306e04;
        case 0x306e08u: goto label_306e08;
        case 0x306e0cu: goto label_306e0c;
        case 0x306e10u: goto label_306e10;
        case 0x306e14u: goto label_306e14;
        case 0x306e18u: goto label_306e18;
        case 0x306e1cu: goto label_306e1c;
        case 0x306e20u: goto label_306e20;
        case 0x306e24u: goto label_306e24;
        case 0x306e28u: goto label_306e28;
        case 0x306e2cu: goto label_306e2c;
        case 0x306e30u: goto label_306e30;
        case 0x306e34u: goto label_306e34;
        case 0x306e38u: goto label_306e38;
        case 0x306e3cu: goto label_306e3c;
        case 0x306e40u: goto label_306e40;
        case 0x306e44u: goto label_306e44;
        case 0x306e48u: goto label_306e48;
        case 0x306e4cu: goto label_306e4c;
        case 0x306e50u: goto label_306e50;
        case 0x306e54u: goto label_306e54;
        case 0x306e58u: goto label_306e58;
        case 0x306e5cu: goto label_306e5c;
        case 0x306e60u: goto label_306e60;
        case 0x306e64u: goto label_306e64;
        case 0x306e68u: goto label_306e68;
        case 0x306e6cu: goto label_306e6c;
        case 0x306e70u: goto label_306e70;
        case 0x306e74u: goto label_306e74;
        case 0x306e78u: goto label_306e78;
        case 0x306e7cu: goto label_306e7c;
        case 0x306e80u: goto label_306e80;
        case 0x306e84u: goto label_306e84;
        case 0x306e88u: goto label_306e88;
        case 0x306e8cu: goto label_306e8c;
        case 0x306e90u: goto label_306e90;
        case 0x306e94u: goto label_306e94;
        case 0x306e98u: goto label_306e98;
        case 0x306e9cu: goto label_306e9c;
        case 0x306ea0u: goto label_306ea0;
        case 0x306ea4u: goto label_306ea4;
        case 0x306ea8u: goto label_306ea8;
        case 0x306eacu: goto label_306eac;
        case 0x306eb0u: goto label_306eb0;
        case 0x306eb4u: goto label_306eb4;
        case 0x306eb8u: goto label_306eb8;
        case 0x306ebcu: goto label_306ebc;
        case 0x306ec0u: goto label_306ec0;
        case 0x306ec4u: goto label_306ec4;
        case 0x306ec8u: goto label_306ec8;
        case 0x306eccu: goto label_306ecc;
        case 0x306ed0u: goto label_306ed0;
        case 0x306ed4u: goto label_306ed4;
        case 0x306ed8u: goto label_306ed8;
        case 0x306edcu: goto label_306edc;
        case 0x306ee0u: goto label_306ee0;
        case 0x306ee4u: goto label_306ee4;
        case 0x306ee8u: goto label_306ee8;
        case 0x306eecu: goto label_306eec;
        case 0x306ef0u: goto label_306ef0;
        case 0x306ef4u: goto label_306ef4;
        case 0x306ef8u: goto label_306ef8;
        case 0x306efcu: goto label_306efc;
        case 0x306f00u: goto label_306f00;
        case 0x306f04u: goto label_306f04;
        case 0x306f08u: goto label_306f08;
        case 0x306f0cu: goto label_306f0c;
        case 0x306f10u: goto label_306f10;
        case 0x306f14u: goto label_306f14;
        case 0x306f18u: goto label_306f18;
        case 0x306f1cu: goto label_306f1c;
        case 0x306f20u: goto label_306f20;
        case 0x306f24u: goto label_306f24;
        case 0x306f28u: goto label_306f28;
        case 0x306f2cu: goto label_306f2c;
        case 0x306f30u: goto label_306f30;
        case 0x306f34u: goto label_306f34;
        case 0x306f38u: goto label_306f38;
        case 0x306f3cu: goto label_306f3c;
        case 0x306f40u: goto label_306f40;
        case 0x306f44u: goto label_306f44;
        case 0x306f48u: goto label_306f48;
        case 0x306f4cu: goto label_306f4c;
        case 0x306f50u: goto label_306f50;
        case 0x306f54u: goto label_306f54;
        case 0x306f58u: goto label_306f58;
        case 0x306f5cu: goto label_306f5c;
        case 0x306f60u: goto label_306f60;
        case 0x306f64u: goto label_306f64;
        case 0x306f68u: goto label_306f68;
        case 0x306f6cu: goto label_306f6c;
        case 0x306f70u: goto label_306f70;
        case 0x306f74u: goto label_306f74;
        case 0x306f78u: goto label_306f78;
        case 0x306f7cu: goto label_306f7c;
        case 0x306f80u: goto label_306f80;
        case 0x306f84u: goto label_306f84;
        case 0x306f88u: goto label_306f88;
        case 0x306f8cu: goto label_306f8c;
        case 0x306f90u: goto label_306f90;
        case 0x306f94u: goto label_306f94;
        case 0x306f98u: goto label_306f98;
        case 0x306f9cu: goto label_306f9c;
        case 0x306fa0u: goto label_306fa0;
        case 0x306fa4u: goto label_306fa4;
        case 0x306fa8u: goto label_306fa8;
        case 0x306facu: goto label_306fac;
        case 0x306fb0u: goto label_306fb0;
        case 0x306fb4u: goto label_306fb4;
        case 0x306fb8u: goto label_306fb8;
        case 0x306fbcu: goto label_306fbc;
        case 0x306fc0u: goto label_306fc0;
        case 0x306fc4u: goto label_306fc4;
        case 0x306fc8u: goto label_306fc8;
        case 0x306fccu: goto label_306fcc;
        case 0x306fd0u: goto label_306fd0;
        case 0x306fd4u: goto label_306fd4;
        case 0x306fd8u: goto label_306fd8;
        case 0x306fdcu: goto label_306fdc;
        case 0x306fe0u: goto label_306fe0;
        case 0x306fe4u: goto label_306fe4;
        case 0x306fe8u: goto label_306fe8;
        case 0x306fecu: goto label_306fec;
        case 0x306ff0u: goto label_306ff0;
        case 0x306ff4u: goto label_306ff4;
        case 0x306ff8u: goto label_306ff8;
        case 0x306ffcu: goto label_306ffc;
        case 0x307000u: goto label_307000;
        case 0x307004u: goto label_307004;
        case 0x307008u: goto label_307008;
        case 0x30700cu: goto label_30700c;
        case 0x307010u: goto label_307010;
        case 0x307014u: goto label_307014;
        case 0x307018u: goto label_307018;
        case 0x30701cu: goto label_30701c;
        case 0x307020u: goto label_307020;
        case 0x307024u: goto label_307024;
        case 0x307028u: goto label_307028;
        case 0x30702cu: goto label_30702c;
        case 0x307030u: goto label_307030;
        case 0x307034u: goto label_307034;
        case 0x307038u: goto label_307038;
        case 0x30703cu: goto label_30703c;
        case 0x307040u: goto label_307040;
        case 0x307044u: goto label_307044;
        case 0x307048u: goto label_307048;
        case 0x30704cu: goto label_30704c;
        case 0x307050u: goto label_307050;
        case 0x307054u: goto label_307054;
        case 0x307058u: goto label_307058;
        case 0x30705cu: goto label_30705c;
        case 0x307060u: goto label_307060;
        case 0x307064u: goto label_307064;
        case 0x307068u: goto label_307068;
        case 0x30706cu: goto label_30706c;
        case 0x307070u: goto label_307070;
        case 0x307074u: goto label_307074;
        case 0x307078u: goto label_307078;
        case 0x30707cu: goto label_30707c;
        case 0x307080u: goto label_307080;
        case 0x307084u: goto label_307084;
        case 0x307088u: goto label_307088;
        case 0x30708cu: goto label_30708c;
        case 0x307090u: goto label_307090;
        case 0x307094u: goto label_307094;
        case 0x307098u: goto label_307098;
        case 0x30709cu: goto label_30709c;
        case 0x3070a0u: goto label_3070a0;
        case 0x3070a4u: goto label_3070a4;
        case 0x3070a8u: goto label_3070a8;
        case 0x3070acu: goto label_3070ac;
        case 0x3070b0u: goto label_3070b0;
        case 0x3070b4u: goto label_3070b4;
        case 0x3070b8u: goto label_3070b8;
        case 0x3070bcu: goto label_3070bc;
        case 0x3070c0u: goto label_3070c0;
        case 0x3070c4u: goto label_3070c4;
        case 0x3070c8u: goto label_3070c8;
        case 0x3070ccu: goto label_3070cc;
        case 0x3070d0u: goto label_3070d0;
        case 0x3070d4u: goto label_3070d4;
        case 0x3070d8u: goto label_3070d8;
        case 0x3070dcu: goto label_3070dc;
        case 0x3070e0u: goto label_3070e0;
        case 0x3070e4u: goto label_3070e4;
        case 0x3070e8u: goto label_3070e8;
        case 0x3070ecu: goto label_3070ec;
        case 0x3070f0u: goto label_3070f0;
        case 0x3070f4u: goto label_3070f4;
        case 0x3070f8u: goto label_3070f8;
        case 0x3070fcu: goto label_3070fc;
        case 0x307100u: goto label_307100;
        case 0x307104u: goto label_307104;
        case 0x307108u: goto label_307108;
        case 0x30710cu: goto label_30710c;
        case 0x307110u: goto label_307110;
        case 0x307114u: goto label_307114;
        case 0x307118u: goto label_307118;
        case 0x30711cu: goto label_30711c;
        case 0x307120u: goto label_307120;
        case 0x307124u: goto label_307124;
        case 0x307128u: goto label_307128;
        case 0x30712cu: goto label_30712c;
        case 0x307130u: goto label_307130;
        case 0x307134u: goto label_307134;
        case 0x307138u: goto label_307138;
        case 0x30713cu: goto label_30713c;
        case 0x307140u: goto label_307140;
        case 0x307144u: goto label_307144;
        case 0x307148u: goto label_307148;
        case 0x30714cu: goto label_30714c;
        case 0x307150u: goto label_307150;
        case 0x307154u: goto label_307154;
        case 0x307158u: goto label_307158;
        case 0x30715cu: goto label_30715c;
        case 0x307160u: goto label_307160;
        case 0x307164u: goto label_307164;
        case 0x307168u: goto label_307168;
        case 0x30716cu: goto label_30716c;
        case 0x307170u: goto label_307170;
        case 0x307174u: goto label_307174;
        case 0x307178u: goto label_307178;
        case 0x30717cu: goto label_30717c;
        case 0x307180u: goto label_307180;
        case 0x307184u: goto label_307184;
        case 0x307188u: goto label_307188;
        case 0x30718cu: goto label_30718c;
        case 0x307190u: goto label_307190;
        case 0x307194u: goto label_307194;
        case 0x307198u: goto label_307198;
        case 0x30719cu: goto label_30719c;
        case 0x3071a0u: goto label_3071a0;
        case 0x3071a4u: goto label_3071a4;
        case 0x3071a8u: goto label_3071a8;
        case 0x3071acu: goto label_3071ac;
        case 0x3071b0u: goto label_3071b0;
        case 0x3071b4u: goto label_3071b4;
        case 0x3071b8u: goto label_3071b8;
        case 0x3071bcu: goto label_3071bc;
        case 0x3071c0u: goto label_3071c0;
        case 0x3071c4u: goto label_3071c4;
        case 0x3071c8u: goto label_3071c8;
        case 0x3071ccu: goto label_3071cc;
        case 0x3071d0u: goto label_3071d0;
        case 0x3071d4u: goto label_3071d4;
        case 0x3071d8u: goto label_3071d8;
        case 0x3071dcu: goto label_3071dc;
        case 0x3071e0u: goto label_3071e0;
        case 0x3071e4u: goto label_3071e4;
        case 0x3071e8u: goto label_3071e8;
        case 0x3071ecu: goto label_3071ec;
        case 0x3071f0u: goto label_3071f0;
        case 0x3071f4u: goto label_3071f4;
        case 0x3071f8u: goto label_3071f8;
        case 0x3071fcu: goto label_3071fc;
        case 0x307200u: goto label_307200;
        case 0x307204u: goto label_307204;
        case 0x307208u: goto label_307208;
        case 0x30720cu: goto label_30720c;
        case 0x307210u: goto label_307210;
        case 0x307214u: goto label_307214;
        case 0x307218u: goto label_307218;
        case 0x30721cu: goto label_30721c;
        case 0x307220u: goto label_307220;
        case 0x307224u: goto label_307224;
        case 0x307228u: goto label_307228;
        case 0x30722cu: goto label_30722c;
        case 0x307230u: goto label_307230;
        case 0x307234u: goto label_307234;
        case 0x307238u: goto label_307238;
        case 0x30723cu: goto label_30723c;
        case 0x307240u: goto label_307240;
        case 0x307244u: goto label_307244;
        case 0x307248u: goto label_307248;
        case 0x30724cu: goto label_30724c;
        case 0x307250u: goto label_307250;
        case 0x307254u: goto label_307254;
        case 0x307258u: goto label_307258;
        case 0x30725cu: goto label_30725c;
        case 0x307260u: goto label_307260;
        case 0x307264u: goto label_307264;
        case 0x307268u: goto label_307268;
        case 0x30726cu: goto label_30726c;
        case 0x307270u: goto label_307270;
        case 0x307274u: goto label_307274;
        case 0x307278u: goto label_307278;
        case 0x30727cu: goto label_30727c;
        case 0x307280u: goto label_307280;
        case 0x307284u: goto label_307284;
        case 0x307288u: goto label_307288;
        case 0x30728cu: goto label_30728c;
        case 0x307290u: goto label_307290;
        case 0x307294u: goto label_307294;
        case 0x307298u: goto label_307298;
        case 0x30729cu: goto label_30729c;
        case 0x3072a0u: goto label_3072a0;
        case 0x3072a4u: goto label_3072a4;
        case 0x3072a8u: goto label_3072a8;
        case 0x3072acu: goto label_3072ac;
        case 0x3072b0u: goto label_3072b0;
        case 0x3072b4u: goto label_3072b4;
        case 0x3072b8u: goto label_3072b8;
        case 0x3072bcu: goto label_3072bc;
        case 0x3072c0u: goto label_3072c0;
        case 0x3072c4u: goto label_3072c4;
        case 0x3072c8u: goto label_3072c8;
        case 0x3072ccu: goto label_3072cc;
        case 0x3072d0u: goto label_3072d0;
        case 0x3072d4u: goto label_3072d4;
        case 0x3072d8u: goto label_3072d8;
        case 0x3072dcu: goto label_3072dc;
        case 0x3072e0u: goto label_3072e0;
        case 0x3072e4u: goto label_3072e4;
        case 0x3072e8u: goto label_3072e8;
        case 0x3072ecu: goto label_3072ec;
        case 0x3072f0u: goto label_3072f0;
        case 0x3072f4u: goto label_3072f4;
        case 0x3072f8u: goto label_3072f8;
        case 0x3072fcu: goto label_3072fc;
        case 0x307300u: goto label_307300;
        case 0x307304u: goto label_307304;
        case 0x307308u: goto label_307308;
        case 0x30730cu: goto label_30730c;
        case 0x307310u: goto label_307310;
        case 0x307314u: goto label_307314;
        case 0x307318u: goto label_307318;
        case 0x30731cu: goto label_30731c;
        case 0x307320u: goto label_307320;
        case 0x307324u: goto label_307324;
        case 0x307328u: goto label_307328;
        case 0x30732cu: goto label_30732c;
        case 0x307330u: goto label_307330;
        case 0x307334u: goto label_307334;
        case 0x307338u: goto label_307338;
        case 0x30733cu: goto label_30733c;
        case 0x307340u: goto label_307340;
        case 0x307344u: goto label_307344;
        case 0x307348u: goto label_307348;
        case 0x30734cu: goto label_30734c;
        case 0x307350u: goto label_307350;
        case 0x307354u: goto label_307354;
        case 0x307358u: goto label_307358;
        case 0x30735cu: goto label_30735c;
        case 0x307360u: goto label_307360;
        case 0x307364u: goto label_307364;
        case 0x307368u: goto label_307368;
        case 0x30736cu: goto label_30736c;
        case 0x307370u: goto label_307370;
        case 0x307374u: goto label_307374;
        case 0x307378u: goto label_307378;
        case 0x30737cu: goto label_30737c;
        case 0x307380u: goto label_307380;
        case 0x307384u: goto label_307384;
        case 0x307388u: goto label_307388;
        case 0x30738cu: goto label_30738c;
        case 0x307390u: goto label_307390;
        case 0x307394u: goto label_307394;
        case 0x307398u: goto label_307398;
        case 0x30739cu: goto label_30739c;
        case 0x3073a0u: goto label_3073a0;
        case 0x3073a4u: goto label_3073a4;
        case 0x3073a8u: goto label_3073a8;
        case 0x3073acu: goto label_3073ac;
        case 0x3073b0u: goto label_3073b0;
        case 0x3073b4u: goto label_3073b4;
        case 0x3073b8u: goto label_3073b8;
        case 0x3073bcu: goto label_3073bc;
        case 0x3073c0u: goto label_3073c0;
        case 0x3073c4u: goto label_3073c4;
        case 0x3073c8u: goto label_3073c8;
        case 0x3073ccu: goto label_3073cc;
        case 0x3073d0u: goto label_3073d0;
        case 0x3073d4u: goto label_3073d4;
        case 0x3073d8u: goto label_3073d8;
        case 0x3073dcu: goto label_3073dc;
        case 0x3073e0u: goto label_3073e0;
        case 0x3073e4u: goto label_3073e4;
        case 0x3073e8u: goto label_3073e8;
        case 0x3073ecu: goto label_3073ec;
        case 0x3073f0u: goto label_3073f0;
        case 0x3073f4u: goto label_3073f4;
        case 0x3073f8u: goto label_3073f8;
        case 0x3073fcu: goto label_3073fc;
        case 0x307400u: goto label_307400;
        case 0x307404u: goto label_307404;
        case 0x307408u: goto label_307408;
        case 0x30740cu: goto label_30740c;
        case 0x307410u: goto label_307410;
        case 0x307414u: goto label_307414;
        case 0x307418u: goto label_307418;
        case 0x30741cu: goto label_30741c;
        case 0x307420u: goto label_307420;
        case 0x307424u: goto label_307424;
        case 0x307428u: goto label_307428;
        case 0x30742cu: goto label_30742c;
        case 0x307430u: goto label_307430;
        case 0x307434u: goto label_307434;
        case 0x307438u: goto label_307438;
        case 0x30743cu: goto label_30743c;
        case 0x307440u: goto label_307440;
        case 0x307444u: goto label_307444;
        case 0x307448u: goto label_307448;
        case 0x30744cu: goto label_30744c;
        case 0x307450u: goto label_307450;
        case 0x307454u: goto label_307454;
        case 0x307458u: goto label_307458;
        case 0x30745cu: goto label_30745c;
        case 0x307460u: goto label_307460;
        case 0x307464u: goto label_307464;
        case 0x307468u: goto label_307468;
        case 0x30746cu: goto label_30746c;
        case 0x307470u: goto label_307470;
        case 0x307474u: goto label_307474;
        case 0x307478u: goto label_307478;
        case 0x30747cu: goto label_30747c;
        case 0x307480u: goto label_307480;
        case 0x307484u: goto label_307484;
        case 0x307488u: goto label_307488;
        case 0x30748cu: goto label_30748c;
        case 0x307490u: goto label_307490;
        case 0x307494u: goto label_307494;
        case 0x307498u: goto label_307498;
        case 0x30749cu: goto label_30749c;
        case 0x3074a0u: goto label_3074a0;
        case 0x3074a4u: goto label_3074a4;
        case 0x3074a8u: goto label_3074a8;
        case 0x3074acu: goto label_3074ac;
        case 0x3074b0u: goto label_3074b0;
        case 0x3074b4u: goto label_3074b4;
        case 0x3074b8u: goto label_3074b8;
        case 0x3074bcu: goto label_3074bc;
        case 0x3074c0u: goto label_3074c0;
        case 0x3074c4u: goto label_3074c4;
        case 0x3074c8u: goto label_3074c8;
        case 0x3074ccu: goto label_3074cc;
        case 0x3074d0u: goto label_3074d0;
        case 0x3074d4u: goto label_3074d4;
        case 0x3074d8u: goto label_3074d8;
        case 0x3074dcu: goto label_3074dc;
        default: break;
    }

    ctx->pc = 0x305ab0u;

label_305ab0:
    // 0x305ab0: 0x27bdfc10  addiu       $sp, $sp, -0x3F0
    ctx->pc = 0x305ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966288));
label_305ab4:
    // 0x305ab4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x305ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_305ab8:
    // 0x305ab8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x305ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_305abc:
    // 0x305abc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x305abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_305ac0:
    // 0x305ac0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x305ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_305ac4:
    // 0x305ac4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x305ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_305ac8:
    // 0x305ac8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x305ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_305acc:
    // 0x305acc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x305accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_305ad0:
    // 0x305ad0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x305ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_305ad4:
    // 0x305ad4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x305ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_305ad8:
    // 0x305ad8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x305ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_305adc:
    // 0x305adc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x305adcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_305ae0:
    // 0x305ae0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x305ae0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_305ae4:
    // 0x305ae4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x305ae4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_305ae8:
    // 0x305ae8: 0x8f82a11c  lw          $v0, -0x5EE4($gp)
    ctx->pc = 0x305ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943004)));
label_305aec:
    // 0x305aec: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x305aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
label_305af0:
    // 0x305af0: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x305af0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_305af4:
    // 0x305af4: 0x102005e0  beqz        $at, . + 4 + (0x5E0 << 2)
label_305af8:
    if (ctx->pc == 0x305AF8u) {
        ctx->pc = 0x305AF8u;
            // 0x305af8: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x305AFCu;
        goto label_305afc;
    }
    ctx->pc = 0x305AF4u;
    {
        const bool branch_taken_0x305af4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x305AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305AF4u;
            // 0x305af8: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305af4) {
            ctx->pc = 0x307278u;
            goto label_307278;
        }
    }
    ctx->pc = 0x305AFCu;
label_305afc:
    // 0x305afc: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x305afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_305b00:
    // 0x305b00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x305b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_305b04:
    // 0x305b04: 0x24632440  addiu       $v1, $v1, 0x2440
    ctx->pc = 0x305b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9280));
label_305b08:
    // 0x305b08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x305b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_305b0c:
    // 0x305b0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x305b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_305b10:
    // 0x305b10: 0x400008  jr          $v0
label_305b14:
    if (ctx->pc == 0x305B14u) {
        ctx->pc = 0x305B18u;
        goto label_305b18;
    }
    ctx->pc = 0x305B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x305B18u: goto label_305b18;
            case 0x305D64u: goto label_305d64;
            case 0x305F68u: goto label_305f68;
            case 0x306AD8u: goto label_306ad8;
            case 0x307048u: goto label_307048;
            default: break;
        }
        return;
    }
    ctx->pc = 0x305B18u;
label_305b18:
    // 0x305b18: 0x3c024361  lui         $v0, 0x4361
    ctx->pc = 0x305b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17249 << 16));
label_305b1c:
    // 0x305b1c: 0x8f83a160  lw          $v1, -0x5EA0($gp)
    ctx->pc = 0x305b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943072)));
label_305b20:
    // 0x305b20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_305b24:
    // 0x305b24: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x305b24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_305b28:
    // 0x305b28: 0x2484a280  addiu       $a0, $a0, -0x5D80
    ctx->pc = 0x305b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
label_305b2c:
    // 0x305b2c: 0x3c024218  lui         $v0, 0x4218
    ctx->pc = 0x305b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16920 << 16));
label_305b30:
    // 0x305b30: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x305b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_305b34:
    // 0x305b34: 0x3c024328  lui         $v0, 0x4328
    ctx->pc = 0x305b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17192 << 16));
label_305b38:
    // 0x305b38: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x305b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_305b3c:
    // 0x305b3c: 0xc04c4f8  jal         func_1313E0
label_305b40:
    if (ctx->pc == 0x305B40u) {
        ctx->pc = 0x305B40u;
            // 0x305b40: 0xae032e54  sw          $v1, 0x2E54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11860), GPR_U32(ctx, 3));
        ctx->pc = 0x305B44u;
        goto label_305b44;
    }
    ctx->pc = 0x305B3Cu;
    SET_GPR_U32(ctx, 31, 0x305B44u);
    ctx->pc = 0x305B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305B3Cu;
            // 0x305b40: 0xae032e54  sw          $v1, 0x2E54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11860), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1313E0u;
    if (runtime->hasFunction(0x1313E0u)) {
        auto targetFn = runtime->lookupFunction(0x1313E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305B44u; }
        if (ctx->pc != 0x305B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFfff_0x1313e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305B44u; }
        if (ctx->pc != 0x305B44u) { return; }
    }
    ctx->pc = 0x305B44u;
label_305b44:
    // 0x305b44: 0x3c024361  lui         $v0, 0x4361
    ctx->pc = 0x305b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17249 << 16));
label_305b48:
    // 0x305b48: 0x3c034218  lui         $v1, 0x4218
    ctx->pc = 0x305b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16920 << 16));
label_305b4c:
    // 0x305b4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_305b50:
    // 0x305b50: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x305b50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_305b54:
    // 0x305b54: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x305b54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_305b58:
    // 0x305b58: 0x3c024328  lui         $v0, 0x4328
    ctx->pc = 0x305b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17192 << 16));
label_305b5c:
    // 0x305b5c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x305b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_305b60:
    // 0x305b60: 0xc04c508  jal         func_131420
label_305b64:
    if (ctx->pc == 0x305B64u) {
        ctx->pc = 0x305B64u;
            // 0x305b64: 0x2484a280  addiu       $a0, $a0, -0x5D80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
        ctx->pc = 0x305B68u;
        goto label_305b68;
    }
    ctx->pc = 0x305B60u;
    SET_GPR_U32(ctx, 31, 0x305B68u);
    ctx->pc = 0x305B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305B60u;
            // 0x305b64: 0x2484a280  addiu       $a0, $a0, -0x5D80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131420u;
    if (runtime->hasFunction(0x131420u)) {
        auto targetFn = runtime->lookupFunction(0x131420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305B68u; }
        if (ctx->pc != 0x305B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextPos__9mgCCameraFfff_0x131420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305B68u; }
        if (ctx->pc != 0x305B68u) { return; }
    }
    ctx->pc = 0x305B68u;
label_305b68:
    // 0x305b68: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x305b68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_305b6c:
    // 0x305b6c: 0x3c02435e  lui         $v0, 0x435E
    ctx->pc = 0x305b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17246 << 16));
label_305b70:
    // 0x305b70: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x305b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_305b74:
    // 0x305b74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_305b78:
    // 0x305b78: 0x2484a280  addiu       $a0, $a0, -0x5D80
    ctx->pc = 0x305b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
label_305b7c:
    // 0x305b7c: 0xc04c510  jal         func_131440
label_305b80:
    if (ctx->pc == 0x305B80u) {
        ctx->pc = 0x305B80u;
            // 0x305b80: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x305B84u;
        goto label_305b84;
    }
    ctx->pc = 0x305B7Cu;
    SET_GPR_U32(ctx, 31, 0x305B84u);
    ctx->pc = 0x305B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305B7Cu;
            // 0x305b80: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131440u;
    if (runtime->hasFunction(0x131440u)) {
        auto targetFn = runtime->lookupFunction(0x131440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305B84u; }
        if (ctx->pc != 0x305B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFfff_0x131440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305B84u; }
        if (ctx->pc != 0x305B84u) { return; }
    }
    ctx->pc = 0x305B84u;
label_305b84:
    // 0x305b84: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x305b84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_305b88:
    // 0x305b88: 0x3c02435e  lui         $v0, 0x435E
    ctx->pc = 0x305b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17246 << 16));
label_305b8c:
    // 0x305b8c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x305b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_305b90:
    // 0x305b90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_305b94:
    // 0x305b94: 0x2484a280  addiu       $a0, $a0, -0x5D80
    ctx->pc = 0x305b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
label_305b98:
    // 0x305b98: 0xc04c51c  jal         func_131470
label_305b9c:
    if (ctx->pc == 0x305B9Cu) {
        ctx->pc = 0x305B9Cu;
            // 0x305b9c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x305BA0u;
        goto label_305ba0;
    }
    ctx->pc = 0x305B98u;
    SET_GPR_U32(ctx, 31, 0x305BA0u);
    ctx->pc = 0x305B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305B98u;
            // 0x305b9c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131470u;
    if (runtime->hasFunction(0x131470u)) {
        auto targetFn = runtime->lookupFunction(0x131470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305BA0u; }
        if (ctx->pc != 0x305BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextRef__9mgCCameraFfff_0x131470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305BA0u; }
        if (ctx->pc != 0x305BA0u) { return; }
    }
    ctx->pc = 0x305BA0u;
label_305ba0:
    // 0x305ba0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x305ba0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_305ba4:
    // 0x305ba4: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x305ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_305ba8:
    // 0x305ba8: 0x2484a280  addiu       $a0, $a0, -0x5D80
    ctx->pc = 0x305ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
label_305bac:
    // 0x305bac: 0xc04c564  jal         func_131590
label_305bb0:
    if (ctx->pc == 0x305BB0u) {
        ctx->pc = 0x305BB0u;
            // 0x305bb0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x305BB4u;
        goto label_305bb4;
    }
    ctx->pc = 0x305BACu;
    SET_GPR_U32(ctx, 31, 0x305BB4u);
    ctx->pc = 0x305BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305BACu;
            // 0x305bb0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131590u;
    if (runtime->hasFunction(0x131590u)) {
        auto targetFn = runtime->lookupFunction(0x131590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305BB4u; }
        if (ctx->pc != 0x305BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpeed__9mgCCameraFff_0x131590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305BB4u; }
        if (ctx->pc != 0x305BB4u) { return; }
    }
    ctx->pc = 0x305BB4u;
label_305bb4:
    // 0x305bb4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x305bb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305bb8:
    // 0x305bb8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x305bb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305bbc:
    // 0x305bbc: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x305bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_305bc0:
    // 0x305bc0: 0x2442a2f0  addiu       $v0, $v0, -0x5D10
    ctx->pc = 0x305bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943472));
label_305bc4:
    // 0x305bc4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x305bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_305bc8:
    // 0x305bc8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x305bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_305bcc:
    // 0x305bcc: 0xc0a0ed8  jal         func_283B60
label_305bd0:
    if (ctx->pc == 0x305BD0u) {
        ctx->pc = 0x305BD0u;
            // 0x305bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305BD4u;
        goto label_305bd4;
    }
    ctx->pc = 0x305BCCu;
    SET_GPR_U32(ctx, 31, 0x305BD4u);
    ctx->pc = 0x305BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305BCCu;
            // 0x305bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305BD4u; }
        if (ctx->pc != 0x305BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305BD4u; }
        if (ctx->pc != 0x305BD4u) { return; }
    }
    ctx->pc = 0x305BD4u;
label_305bd4:
    // 0x305bd4: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x305bd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_305bd8:
    // 0x305bd8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x305bd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_305bdc:
    // 0x305bdc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x305bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_305be0:
    // 0x305be0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x305be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_305be4:
    // 0x305be4: 0x24a52370  addiu       $a1, $a1, 0x2370
    ctx->pc = 0x305be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9072));
label_305be8:
    // 0x305be8: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x305be8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_305bec:
    // 0x305bec: 0x320f809  jalr        $t9
label_305bf0:
    if (ctx->pc == 0x305BF0u) {
        ctx->pc = 0x305BF0u;
            // 0x305bf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305BF4u;
        goto label_305bf4;
    }
    ctx->pc = 0x305BECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x305BF4u);
        ctx->pc = 0x305BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305BECu;
            // 0x305bf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x305BF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x305BF4u; }
            if (ctx->pc != 0x305BF4u) { return; }
        }
        }
    }
    ctx->pc = 0x305BF4u;
label_305bf4:
    // 0x305bf4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x305bf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_305bf8:
    // 0x305bf8: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x305bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_305bfc:
    // 0x305bfc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x305bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_305c00:
    // 0x305c00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_305c04:
    // 0x305c04: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x305c04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_305c08:
    // 0x305c08: 0x320f809  jalr        $t9
label_305c0c:
    if (ctx->pc == 0x305C0Cu) {
        ctx->pc = 0x305C0Cu;
            // 0x305c0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305C10u;
        goto label_305c10;
    }
    ctx->pc = 0x305C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x305C10u);
        ctx->pc = 0x305C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305C08u;
            // 0x305c0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x305C10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x305C10u; }
            if (ctx->pc != 0x305C10u) { return; }
        }
        }
    }
    ctx->pc = 0x305C10u;
label_305c10:
    // 0x305c10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x305c10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_305c14:
    // 0x305c14: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x305c14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_305c18:
    // 0x305c18: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_305c1c:
    if (ctx->pc == 0x305C1Cu) {
        ctx->pc = 0x305C1Cu;
            // 0x305c1c: 0x2673002c  addiu       $s3, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->pc = 0x305C20u;
        goto label_305c20;
    }
    ctx->pc = 0x305C18u;
    {
        const bool branch_taken_0x305c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305C18u;
            // 0x305c1c: 0x2673002c  addiu       $s3, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305c18) {
            ctx->pc = 0x305BBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_305bbc;
        }
    }
    ctx->pc = 0x305C20u;
label_305c20:
    // 0x305c20: 0x8f82a118  lw          $v0, -0x5EE8($gp)
    ctx->pc = 0x305c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943000)));
label_305c24:
    // 0x305c24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x305c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_305c28:
    // 0x305c28: 0xaf82a118  sw          $v0, -0x5EE8($gp)
    ctx->pc = 0x305c28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943000), GPR_U32(ctx, 2));
label_305c2c:
    // 0x305c2c: 0x8f82a118  lw          $v0, -0x5EE8($gp)
    ctx->pc = 0x305c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943000)));
label_305c30:
    // 0x305c30: 0x1c400592  bgtz        $v0, . + 4 + (0x592 << 2)
label_305c34:
    if (ctx->pc == 0x305C34u) {
        ctx->pc = 0x305C34u;
            // 0x305c34: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305C38u;
        goto label_305c38;
    }
    ctx->pc = 0x305C30u;
    {
        const bool branch_taken_0x305c30 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x305C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305C30u;
            // 0x305c34: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305c30) {
            ctx->pc = 0x30727Cu;
            goto label_30727c;
        }
    }
    ctx->pc = 0x305C38u;
label_305c38:
    // 0x305c38: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x305c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
label_305c3c:
    // 0x305c3c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x305c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_305c40:
    // 0x305c40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x305c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_305c44:
    // 0x305c44: 0xaf83a118  sw          $v1, -0x5EE8($gp)
    ctx->pc = 0x305c44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943000), GPR_U32(ctx, 3));
label_305c48:
    // 0x305c48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x305c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305c4c:
    // 0x305c4c: 0xaf82a11c  sw          $v0, -0x5EE4($gp)
    ctx->pc = 0x305c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943004), GPR_U32(ctx, 2));
label_305c50:
    // 0x305c50: 0xc063818  jal         func_18E060
label_305c54:
    if (ctx->pc == 0x305C54u) {
        ctx->pc = 0x305C54u;
            // 0x305c54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305C58u;
        goto label_305c58;
    }
    ctx->pc = 0x305C50u;
    SET_GPR_U32(ctx, 31, 0x305C58u);
    ctx->pc = 0x305C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305C50u;
            // 0x305c54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305C58u; }
        if (ctx->pc != 0x305C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305C58u; }
        if (ctx->pc != 0x305C58u) { return; }
    }
    ctx->pc = 0x305C58u;
label_305c58:
    // 0x305c58: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x305c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
label_305c5c:
    // 0x305c5c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x305c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_305c60:
    // 0x305c60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305c64:
    // 0x305c64: 0xc063820  jal         func_18E080
label_305c68:
    if (ctx->pc == 0x305C68u) {
        ctx->pc = 0x305C68u;
            // 0x305c68: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305C6Cu;
        goto label_305c6c;
    }
    ctx->pc = 0x305C64u;
    SET_GPR_U32(ctx, 31, 0x305C6Cu);
    ctx->pc = 0x305C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305C64u;
            // 0x305c68: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E080u;
    if (runtime->hasFunction(0x18E080u)) {
        auto targetFn = runtime->lookupFunction(0x18E080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305C6Cu; }
        if (ctx->pc != 0x305C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayV__FUiiii_0x18e080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305C6Cu; }
        if (ctx->pc != 0x305C6Cu) { return; }
    }
    ctx->pc = 0x305C6Cu;
label_305c6c:
    // 0x305c6c: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x305c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
label_305c70:
    // 0x305c70: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x305c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_305c74:
    // 0x305c74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305c78:
    // 0x305c78: 0xc063820  jal         func_18E080
label_305c7c:
    if (ctx->pc == 0x305C7Cu) {
        ctx->pc = 0x305C7Cu;
            // 0x305c7c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305C80u;
        goto label_305c80;
    }
    ctx->pc = 0x305C78u;
    SET_GPR_U32(ctx, 31, 0x305C80u);
    ctx->pc = 0x305C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305C78u;
            // 0x305c7c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E080u;
    if (runtime->hasFunction(0x18E080u)) {
        auto targetFn = runtime->lookupFunction(0x18E080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305C80u; }
        if (ctx->pc != 0x305C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayV__FUiiii_0x18e080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305C80u; }
        if (ctx->pc != 0x305C80u) { return; }
    }
    ctx->pc = 0x305C80u;
label_305c80:
    // 0x305c80: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x305c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
label_305c84:
    // 0x305c84: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x305c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_305c88:
    // 0x305c88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305c8c:
    // 0x305c8c: 0xc063820  jal         func_18E080
label_305c90:
    if (ctx->pc == 0x305C90u) {
        ctx->pc = 0x305C90u;
            // 0x305c90: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305C94u;
        goto label_305c94;
    }
    ctx->pc = 0x305C8Cu;
    SET_GPR_U32(ctx, 31, 0x305C94u);
    ctx->pc = 0x305C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305C8Cu;
            // 0x305c90: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E080u;
    if (runtime->hasFunction(0x18E080u)) {
        auto targetFn = runtime->lookupFunction(0x18E080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305C94u; }
        if (ctx->pc != 0x305C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayV__FUiiii_0x18e080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305C94u; }
        if (ctx->pc != 0x305C94u) { return; }
    }
    ctx->pc = 0x305C94u;
label_305c94:
    // 0x305c94: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x305c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
label_305c98:
    // 0x305c98: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x305c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_305c9c:
    // 0x305c9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305ca0:
    // 0x305ca0: 0xc063820  jal         func_18E080
label_305ca4:
    if (ctx->pc == 0x305CA4u) {
        ctx->pc = 0x305CA4u;
            // 0x305ca4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305CA8u;
        goto label_305ca8;
    }
    ctx->pc = 0x305CA0u;
    SET_GPR_U32(ctx, 31, 0x305CA8u);
    ctx->pc = 0x305CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305CA0u;
            // 0x305ca4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E080u;
    if (runtime->hasFunction(0x18E080u)) {
        auto targetFn = runtime->lookupFunction(0x18E080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305CA8u; }
        if (ctx->pc != 0x305CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayV__FUiiii_0x18e080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305CA8u; }
        if (ctx->pc != 0x305CA8u) { return; }
    }
    ctx->pc = 0x305CA8u;
label_305ca8:
    // 0x305ca8: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x305ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
label_305cac:
    // 0x305cac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x305cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_305cb0:
    // 0x305cb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305cb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305cb4:
    // 0x305cb4: 0xc063820  jal         func_18E080
label_305cb8:
    if (ctx->pc == 0x305CB8u) {
        ctx->pc = 0x305CB8u;
            // 0x305cb8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305CBCu;
        goto label_305cbc;
    }
    ctx->pc = 0x305CB4u;
    SET_GPR_U32(ctx, 31, 0x305CBCu);
    ctx->pc = 0x305CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305CB4u;
            // 0x305cb8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E080u;
    if (runtime->hasFunction(0x18E080u)) {
        auto targetFn = runtime->lookupFunction(0x18E080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305CBCu; }
        if (ctx->pc != 0x305CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayV__FUiiii_0x18e080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305CBCu; }
        if (ctx->pc != 0x305CBCu) { return; }
    }
    ctx->pc = 0x305CBCu;
label_305cbc:
    // 0x305cbc: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x305cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
label_305cc0:
    // 0x305cc0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x305cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_305cc4:
    // 0x305cc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305cc8:
    // 0x305cc8: 0xc063820  jal         func_18E080
label_305ccc:
    if (ctx->pc == 0x305CCCu) {
        ctx->pc = 0x305CCCu;
            // 0x305ccc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305CD0u;
        goto label_305cd0;
    }
    ctx->pc = 0x305CC8u;
    SET_GPR_U32(ctx, 31, 0x305CD0u);
    ctx->pc = 0x305CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305CC8u;
            // 0x305ccc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E080u;
    if (runtime->hasFunction(0x18E080u)) {
        auto targetFn = runtime->lookupFunction(0x18E080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305CD0u; }
        if (ctx->pc != 0x305CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayV__FUiiii_0x18e080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305CD0u; }
        if (ctx->pc != 0x305CD0u) { return; }
    }
    ctx->pc = 0x305CD0u;
label_305cd0:
    // 0x305cd0: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x305cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
label_305cd4:
    // 0x305cd4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x305cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_305cd8:
    // 0x305cd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305cdc:
    // 0x305cdc: 0xc063820  jal         func_18E080
label_305ce0:
    if (ctx->pc == 0x305CE0u) {
        ctx->pc = 0x305CE0u;
            // 0x305ce0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305CE4u;
        goto label_305ce4;
    }
    ctx->pc = 0x305CDCu;
    SET_GPR_U32(ctx, 31, 0x305CE4u);
    ctx->pc = 0x305CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305CDCu;
            // 0x305ce0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E080u;
    if (runtime->hasFunction(0x18E080u)) {
        auto targetFn = runtime->lookupFunction(0x18E080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305CE4u; }
        if (ctx->pc != 0x305CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayV__FUiiii_0x18e080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305CE4u; }
        if (ctx->pc != 0x305CE4u) { return; }
    }
    ctx->pc = 0x305CE4u;
label_305ce4:
    // 0x305ce4: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x305ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
label_305ce8:
    // 0x305ce8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x305ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_305cec:
    // 0x305cec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305cf0:
    // 0x305cf0: 0xc063820  jal         func_18E080
label_305cf4:
    if (ctx->pc == 0x305CF4u) {
        ctx->pc = 0x305CF4u;
            // 0x305cf4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305CF8u;
        goto label_305cf8;
    }
    ctx->pc = 0x305CF0u;
    SET_GPR_U32(ctx, 31, 0x305CF8u);
    ctx->pc = 0x305CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305CF0u;
            // 0x305cf4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E080u;
    if (runtime->hasFunction(0x18E080u)) {
        auto targetFn = runtime->lookupFunction(0x18E080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305CF8u; }
        if (ctx->pc != 0x305CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayV__FUiiii_0x18e080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305CF8u; }
        if (ctx->pc != 0x305CF8u) { return; }
    }
    ctx->pc = 0x305CF8u;
label_305cf8:
    // 0x305cf8: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x305cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
label_305cfc:
    // 0x305cfc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x305cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_305d00:
    // 0x305d00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305d04:
    // 0x305d04: 0xc063820  jal         func_18E080
label_305d08:
    if (ctx->pc == 0x305D08u) {
        ctx->pc = 0x305D08u;
            // 0x305d08: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305D0Cu;
        goto label_305d0c;
    }
    ctx->pc = 0x305D04u;
    SET_GPR_U32(ctx, 31, 0x305D0Cu);
    ctx->pc = 0x305D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305D04u;
            // 0x305d08: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E080u;
    if (runtime->hasFunction(0x18E080u)) {
        auto targetFn = runtime->lookupFunction(0x18E080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D0Cu; }
        if (ctx->pc != 0x305D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayV__FUiiii_0x18e080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D0Cu; }
        if (ctx->pc != 0x305D0Cu) { return; }
    }
    ctx->pc = 0x305D0Cu;
label_305d0c:
    // 0x305d0c: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x305d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
label_305d10:
    // 0x305d10: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x305d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_305d14:
    // 0x305d14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305d14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305d18:
    // 0x305d18: 0xc063820  jal         func_18E080
label_305d1c:
    if (ctx->pc == 0x305D1Cu) {
        ctx->pc = 0x305D1Cu;
            // 0x305d1c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305D20u;
        goto label_305d20;
    }
    ctx->pc = 0x305D18u;
    SET_GPR_U32(ctx, 31, 0x305D20u);
    ctx->pc = 0x305D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305D18u;
            // 0x305d1c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E080u;
    if (runtime->hasFunction(0x18E080u)) {
        auto targetFn = runtime->lookupFunction(0x18E080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D20u; }
        if (ctx->pc != 0x305D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayV__FUiiii_0x18e080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D20u; }
        if (ctx->pc != 0x305D20u) { return; }
    }
    ctx->pc = 0x305D20u;
label_305d20:
    // 0x305d20: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x305d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
label_305d24:
    // 0x305d24: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x305d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_305d28:
    // 0x305d28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305d2c:
    // 0x305d2c: 0xc063820  jal         func_18E080
label_305d30:
    if (ctx->pc == 0x305D30u) {
        ctx->pc = 0x305D30u;
            // 0x305d30: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305D34u;
        goto label_305d34;
    }
    ctx->pc = 0x305D2Cu;
    SET_GPR_U32(ctx, 31, 0x305D34u);
    ctx->pc = 0x305D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305D2Cu;
            // 0x305d30: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E080u;
    if (runtime->hasFunction(0x18E080u)) {
        auto targetFn = runtime->lookupFunction(0x18E080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D34u; }
        if (ctx->pc != 0x305D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayV__FUiiii_0x18e080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D34u; }
        if (ctx->pc != 0x305D34u) { return; }
    }
    ctx->pc = 0x305D34u;
label_305d34:
    // 0x305d34: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x305d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
label_305d38:
    // 0x305d38: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x305d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_305d3c:
    // 0x305d3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305d3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305d40:
    // 0x305d40: 0xc063820  jal         func_18E080
label_305d44:
    if (ctx->pc == 0x305D44u) {
        ctx->pc = 0x305D44u;
            // 0x305d44: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305D48u;
        goto label_305d48;
    }
    ctx->pc = 0x305D40u;
    SET_GPR_U32(ctx, 31, 0x305D48u);
    ctx->pc = 0x305D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305D40u;
            // 0x305d44: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E080u;
    if (runtime->hasFunction(0x18E080u)) {
        auto targetFn = runtime->lookupFunction(0x18E080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D48u; }
        if (ctx->pc != 0x305D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayV__FUiiii_0x18e080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D48u; }
        if (ctx->pc != 0x305D48u) { return; }
    }
    ctx->pc = 0x305D48u;
label_305d48:
    // 0x305d48: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x305d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
label_305d4c:
    // 0x305d4c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x305d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_305d50:
    // 0x305d50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305d50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305d54:
    // 0x305d54: 0xc063820  jal         func_18E080
label_305d58:
    if (ctx->pc == 0x305D58u) {
        ctx->pc = 0x305D58u;
            // 0x305d58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305D5Cu;
        goto label_305d5c;
    }
    ctx->pc = 0x305D54u;
    SET_GPR_U32(ctx, 31, 0x305D5Cu);
    ctx->pc = 0x305D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305D54u;
            // 0x305d58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E080u;
    if (runtime->hasFunction(0x18E080u)) {
        auto targetFn = runtime->lookupFunction(0x18E080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D5Cu; }
        if (ctx->pc != 0x305D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayV__FUiiii_0x18e080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D5Cu; }
        if (ctx->pc != 0x305D5Cu) { return; }
    }
    ctx->pc = 0x305D5Cu;
label_305d5c:
    // 0x305d5c: 0x10000546  b           . + 4 + (0x546 << 2)
label_305d60:
    if (ctx->pc == 0x305D60u) {
        ctx->pc = 0x305D64u;
        goto label_305d64;
    }
    ctx->pc = 0x305D5Cu;
    {
        const bool branch_taken_0x305d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305d5c) {
            ctx->pc = 0x307278u;
            goto label_307278;
        }
    }
    ctx->pc = 0x305D64u;
label_305d64:
    // 0x305d64: 0x3c024361  lui         $v0, 0x4361
    ctx->pc = 0x305d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17249 << 16));
label_305d68:
    // 0x305d68: 0x8f83a160  lw          $v1, -0x5EA0($gp)
    ctx->pc = 0x305d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943072)));
label_305d6c:
    // 0x305d6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_305d70:
    // 0x305d70: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x305d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_305d74:
    // 0x305d74: 0x2484a280  addiu       $a0, $a0, -0x5D80
    ctx->pc = 0x305d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
label_305d78:
    // 0x305d78: 0x3c024218  lui         $v0, 0x4218
    ctx->pc = 0x305d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16920 << 16));
label_305d7c:
    // 0x305d7c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x305d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_305d80:
    // 0x305d80: 0x3c024328  lui         $v0, 0x4328
    ctx->pc = 0x305d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17192 << 16));
label_305d84:
    // 0x305d84: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x305d84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_305d88:
    // 0x305d88: 0xc04c4f8  jal         func_1313E0
label_305d8c:
    if (ctx->pc == 0x305D8Cu) {
        ctx->pc = 0x305D8Cu;
            // 0x305d8c: 0xae032e54  sw          $v1, 0x2E54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11860), GPR_U32(ctx, 3));
        ctx->pc = 0x305D90u;
        goto label_305d90;
    }
    ctx->pc = 0x305D88u;
    SET_GPR_U32(ctx, 31, 0x305D90u);
    ctx->pc = 0x305D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305D88u;
            // 0x305d8c: 0xae032e54  sw          $v1, 0x2E54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11860), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1313E0u;
    if (runtime->hasFunction(0x1313E0u)) {
        auto targetFn = runtime->lookupFunction(0x1313E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D90u; }
        if (ctx->pc != 0x305D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFfff_0x1313e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305D90u; }
        if (ctx->pc != 0x305D90u) { return; }
    }
    ctx->pc = 0x305D90u;
label_305d90:
    // 0x305d90: 0x3c024361  lui         $v0, 0x4361
    ctx->pc = 0x305d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17249 << 16));
label_305d94:
    // 0x305d94: 0x3c034218  lui         $v1, 0x4218
    ctx->pc = 0x305d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16920 << 16));
label_305d98:
    // 0x305d98: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_305d9c:
    // 0x305d9c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x305d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_305da0:
    // 0x305da0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x305da0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_305da4:
    // 0x305da4: 0x3c024328  lui         $v0, 0x4328
    ctx->pc = 0x305da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17192 << 16));
label_305da8:
    // 0x305da8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x305da8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_305dac:
    // 0x305dac: 0xc04c508  jal         func_131420
label_305db0:
    if (ctx->pc == 0x305DB0u) {
        ctx->pc = 0x305DB0u;
            // 0x305db0: 0x2484a280  addiu       $a0, $a0, -0x5D80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
        ctx->pc = 0x305DB4u;
        goto label_305db4;
    }
    ctx->pc = 0x305DACu;
    SET_GPR_U32(ctx, 31, 0x305DB4u);
    ctx->pc = 0x305DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305DACu;
            // 0x305db0: 0x2484a280  addiu       $a0, $a0, -0x5D80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131420u;
    if (runtime->hasFunction(0x131420u)) {
        auto targetFn = runtime->lookupFunction(0x131420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305DB4u; }
        if (ctx->pc != 0x305DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextPos__9mgCCameraFfff_0x131420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305DB4u; }
        if (ctx->pc != 0x305DB4u) { return; }
    }
    ctx->pc = 0x305DB4u;
label_305db4:
    // 0x305db4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x305db4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_305db8:
    // 0x305db8: 0x3c02435e  lui         $v0, 0x435E
    ctx->pc = 0x305db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17246 << 16));
label_305dbc:
    // 0x305dbc: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x305dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_305dc0:
    // 0x305dc0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_305dc4:
    // 0x305dc4: 0x2484a280  addiu       $a0, $a0, -0x5D80
    ctx->pc = 0x305dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
label_305dc8:
    // 0x305dc8: 0xc04c510  jal         func_131440
label_305dcc:
    if (ctx->pc == 0x305DCCu) {
        ctx->pc = 0x305DCCu;
            // 0x305dcc: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x305DD0u;
        goto label_305dd0;
    }
    ctx->pc = 0x305DC8u;
    SET_GPR_U32(ctx, 31, 0x305DD0u);
    ctx->pc = 0x305DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305DC8u;
            // 0x305dcc: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131440u;
    if (runtime->hasFunction(0x131440u)) {
        auto targetFn = runtime->lookupFunction(0x131440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305DD0u; }
        if (ctx->pc != 0x305DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFfff_0x131440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305DD0u; }
        if (ctx->pc != 0x305DD0u) { return; }
    }
    ctx->pc = 0x305DD0u;
label_305dd0:
    // 0x305dd0: 0x3c02435e  lui         $v0, 0x435E
    ctx->pc = 0x305dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17246 << 16));
label_305dd4:
    // 0x305dd4: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x305dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_305dd8:
    // 0x305dd8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x305dd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_305ddc:
    // 0x305ddc: 0x2484a280  addiu       $a0, $a0, -0x5D80
    ctx->pc = 0x305ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
label_305de0:
    // 0x305de0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305de0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_305de4:
    // 0x305de4: 0xc04c51c  jal         func_131470
label_305de8:
    if (ctx->pc == 0x305DE8u) {
        ctx->pc = 0x305DE8u;
            // 0x305de8: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x305DECu;
        goto label_305dec;
    }
    ctx->pc = 0x305DE4u;
    SET_GPR_U32(ctx, 31, 0x305DECu);
    ctx->pc = 0x305DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305DE4u;
            // 0x305de8: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131470u;
    if (runtime->hasFunction(0x131470u)) {
        auto targetFn = runtime->lookupFunction(0x131470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305DECu; }
        if (ctx->pc != 0x305DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextRef__9mgCCameraFfff_0x131470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305DECu; }
        if (ctx->pc != 0x305DECu) { return; }
    }
    ctx->pc = 0x305DECu;
label_305dec:
    // 0x305dec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x305decu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_305df0:
    // 0x305df0: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x305df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_305df4:
    // 0x305df4: 0x2484a280  addiu       $a0, $a0, -0x5D80
    ctx->pc = 0x305df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
label_305df8:
    // 0x305df8: 0xc04c564  jal         func_131590
label_305dfc:
    if (ctx->pc == 0x305DFCu) {
        ctx->pc = 0x305DFCu;
            // 0x305dfc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x305E00u;
        goto label_305e00;
    }
    ctx->pc = 0x305DF8u;
    SET_GPR_U32(ctx, 31, 0x305E00u);
    ctx->pc = 0x305DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305DF8u;
            // 0x305dfc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131590u;
    if (runtime->hasFunction(0x131590u)) {
        auto targetFn = runtime->lookupFunction(0x131590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E00u; }
        if (ctx->pc != 0x305E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpeed__9mgCCameraFff_0x131590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E00u; }
        if (ctx->pc != 0x305E00u) { return; }
    }
    ctx->pc = 0x305E00u;
label_305e00:
    // 0x305e00: 0x8e052e5c  lw          $a1, 0x2E5C($s0)
    ctx->pc = 0x305e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11868)));
label_305e04:
    // 0x305e04: 0xc0a0f58  jal         func_283D60
label_305e08:
    if (ctx->pc == 0x305E08u) {
        ctx->pc = 0x305E08u;
            // 0x305e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305E0Cu;
        goto label_305e0c;
    }
    ctx->pc = 0x305E04u;
    SET_GPR_U32(ctx, 31, 0x305E0Cu);
    ctx->pc = 0x305E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305E04u;
            // 0x305e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E0Cu; }
        if (ctx->pc != 0x305E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E0Cu; }
        if (ctx->pc != 0x305E0Cu) { return; }
    }
    ctx->pc = 0x305E0Cu;
label_305e0c:
    // 0x305e0c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x305e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_305e10:
    // 0x305e10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x305e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_305e14:
    // 0x305e14: 0xc057358  jal         func_15CD60
label_305e18:
    if (ctx->pc == 0x305E18u) {
        ctx->pc = 0x305E18u;
            // 0x305e18: 0x24a523a8  addiu       $a1, $a1, 0x23A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9128));
        ctx->pc = 0x305E1Cu;
        goto label_305e1c;
    }
    ctx->pc = 0x305E14u;
    SET_GPR_U32(ctx, 31, 0x305E1Cu);
    ctx->pc = 0x305E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305E14u;
            // 0x305e18: 0x24a523a8  addiu       $a1, $a1, 0x23A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CD60u;
    if (runtime->hasFunction(0x15CD60u)) {
        auto targetFn = runtime->lookupFunction(0x15CD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E1Cu; }
        if (ctx->pc != 0x305E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetParts__4CMapFPc_0x15cd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E1Cu; }
        if (ctx->pc != 0x305E1Cu) { return; }
    }
    ctx->pc = 0x305E1Cu;
label_305e1c:
    // 0x305e1c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x305e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_305e20:
    // 0x305e20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x305e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_305e24:
    // 0x305e24: 0xc059924  jal         func_166490
label_305e28:
    if (ctx->pc == 0x305E28u) {
        ctx->pc = 0x305E28u;
            // 0x305e28: 0x24a523b8  addiu       $a1, $a1, 0x23B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9144));
        ctx->pc = 0x305E2Cu;
        goto label_305e2c;
    }
    ctx->pc = 0x305E24u;
    SET_GPR_U32(ctx, 31, 0x305E2Cu);
    ctx->pc = 0x305E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305E24u;
            // 0x305e28: 0x24a523b8  addiu       $a1, $a1, 0x23B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166490u;
    if (runtime->hasFunction(0x166490u)) {
        auto targetFn = runtime->lookupFunction(0x166490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E2Cu; }
        if (ctx->pc != 0x305E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchPiece__9CMapPartsFPc_0x166490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E2Cu; }
        if (ctx->pc != 0x305E2Cu) { return; }
    }
    ctx->pc = 0x305E2Cu;
label_305e2c:
    // 0x305e2c: 0x8c530070  lw          $s3, 0x70($v0)
    ctx->pc = 0x305e2cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_305e30:
    // 0x305e30: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x305e30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_305e34:
    // 0x305e34: 0x24a523c8  addiu       $a1, $a1, 0x23C8
    ctx->pc = 0x305e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9160));
label_305e38:
    // 0x305e38: 0xc04ddb4  jal         func_1376D0
label_305e3c:
    if (ctx->pc == 0x305E3Cu) {
        ctx->pc = 0x305E3Cu;
            // 0x305e3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305E40u;
        goto label_305e40;
    }
    ctx->pc = 0x305E38u;
    SET_GPR_U32(ctx, 31, 0x305E40u);
    ctx->pc = 0x305E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305E38u;
            // 0x305e3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E40u; }
        if (ctx->pc != 0x305E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E40u; }
        if (ctx->pc != 0x305E40u) { return; }
    }
    ctx->pc = 0x305E40u;
label_305e40:
    // 0x305e40: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x305e40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_305e44:
    // 0x305e44: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x305e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_305e48:
    // 0x305e48: 0xc04de4c  jal         func_137930
label_305e4c:
    if (ctx->pc == 0x305E4Cu) {
        ctx->pc = 0x305E4Cu;
            // 0x305e4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305E50u;
        goto label_305e50;
    }
    ctx->pc = 0x305E48u;
    SET_GPR_U32(ctx, 31, 0x305E50u);
    ctx->pc = 0x305E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305E48u;
            // 0x305e4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137930u;
    if (runtime->hasFunction(0x137930u)) {
        auto targetFn = runtime->lookupFunction(0x137930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E50u; }
        if (ctx->pc != 0x305E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRotType__8mgCFrameFi_0x137930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E50u; }
        if (ctx->pc != 0x305E50u) { return; }
    }
    ctx->pc = 0x305E50u;
label_305e50:
    // 0x305e50: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x305e50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_305e54:
    // 0x305e54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x305e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_305e58:
    // 0x305e58: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x305e58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_305e5c:
    // 0x305e5c: 0x320f809  jalr        $t9
label_305e60:
    if (ctx->pc == 0x305E60u) {
        ctx->pc = 0x305E60u;
            // 0x305e60: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x305E64u;
        goto label_305e64;
    }
    ctx->pc = 0x305E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x305E64u);
        ctx->pc = 0x305E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305E5Cu;
            // 0x305e60: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x305E64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x305E64u; }
            if (ctx->pc != 0x305E64u) { return; }
        }
        }
    }
    ctx->pc = 0x305E64u;
label_305e64:
    // 0x305e64: 0x27b100c4  addiu       $s1, $sp, 0xC4
    ctx->pc = 0x305e64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_305e68:
    // 0x305e68: 0x3c023e56  lui         $v0, 0x3E56
    ctx->pc = 0x305e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15958 << 16));
label_305e6c:
    // 0x305e6c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x305e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_305e70:
    // 0x305e70: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x305e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_305e74:
    // 0x305e74: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x305e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_305e78:
    // 0x305e78: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x305e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_305e7c:
    // 0x305e7c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x305e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_305e80:
    // 0x305e80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x305e80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_305e84:
    // 0x305e84: 0x0  nop
    ctx->pc = 0x305e84u;
    // NOP
label_305e88:
    // 0x305e88: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x305e88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_305e8c:
    // 0x305e8c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x305e8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_305e90:
    // 0x305e90: 0x0  nop
    ctx->pc = 0x305e90u;
    // NOP
label_305e94:
    // 0x305e94: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_305e98:
    if (ctx->pc == 0x305E98u) {
        ctx->pc = 0x305E98u;
            // 0x305e98: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->pc = 0x305E9Cu;
        goto label_305e9c;
    }
    ctx->pc = 0x305E94u;
    {
        const bool branch_taken_0x305e94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x305E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305E94u;
            // 0x305e98: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x305e94) {
            ctx->pc = 0x305EA0u;
            goto label_305ea0;
        }
    }
    ctx->pc = 0x305E9Cu;
label_305e9c:
    // 0x305e9c: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x305e9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_305ea0:
    // 0x305ea0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x305ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_305ea4:
    // 0x305ea4: 0x27b200c8  addiu       $s2, $sp, 0xC8
    ctx->pc = 0x305ea4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_305ea8:
    // 0x305ea8: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x305ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_305eac:
    // 0x305eac: 0xc62d0000  lwc1        $f13, 0x0($s1)
    ctx->pc = 0x305eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_305eb0:
    // 0x305eb0: 0xc64e0000  lwc1        $f14, 0x0($s2)
    ctx->pc = 0x305eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_305eb4:
    // 0x305eb4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x305eb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_305eb8:
    // 0x305eb8: 0x320f809  jalr        $t9
label_305ebc:
    if (ctx->pc == 0x305EBCu) {
        ctx->pc = 0x305EBCu;
            // 0x305ebc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305EC0u;
        goto label_305ec0;
    }
    ctx->pc = 0x305EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x305EC0u);
        ctx->pc = 0x305EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305EB8u;
            // 0x305ebc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x305EC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x305EC0u; }
            if (ctx->pc != 0x305EC0u) { return; }
        }
        }
    }
    ctx->pc = 0x305EC0u;
label_305ec0:
    // 0x305ec0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x305ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_305ec4:
    // 0x305ec4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x305ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_305ec8:
    // 0x305ec8: 0xc04ddb4  jal         func_1376D0
label_305ecc:
    if (ctx->pc == 0x305ECCu) {
        ctx->pc = 0x305ECCu;
            // 0x305ecc: 0x24a523d0  addiu       $a1, $a1, 0x23D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9168));
        ctx->pc = 0x305ED0u;
        goto label_305ed0;
    }
    ctx->pc = 0x305EC8u;
    SET_GPR_U32(ctx, 31, 0x305ED0u);
    ctx->pc = 0x305ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305EC8u;
            // 0x305ecc: 0x24a523d0  addiu       $a1, $a1, 0x23D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305ED0u; }
        if (ctx->pc != 0x305ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305ED0u; }
        if (ctx->pc != 0x305ED0u) { return; }
    }
    ctx->pc = 0x305ED0u;
label_305ed0:
    // 0x305ed0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x305ed0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_305ed4:
    // 0x305ed4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x305ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_305ed8:
    // 0x305ed8: 0xc04de4c  jal         func_137930
label_305edc:
    if (ctx->pc == 0x305EDCu) {
        ctx->pc = 0x305EDCu;
            // 0x305edc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305EE0u;
        goto label_305ee0;
    }
    ctx->pc = 0x305ED8u;
    SET_GPR_U32(ctx, 31, 0x305EE0u);
    ctx->pc = 0x305EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305ED8u;
            // 0x305edc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137930u;
    if (runtime->hasFunction(0x137930u)) {
        auto targetFn = runtime->lookupFunction(0x137930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305EE0u; }
        if (ctx->pc != 0x305EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRotType__8mgCFrameFi_0x137930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305EE0u; }
        if (ctx->pc != 0x305EE0u) { return; }
    }
    ctx->pc = 0x305EE0u;
label_305ee0:
    // 0x305ee0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x305ee0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_305ee4:
    // 0x305ee4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x305ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_305ee8:
    // 0x305ee8: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x305ee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_305eec:
    // 0x305eec: 0x320f809  jalr        $t9
label_305ef0:
    if (ctx->pc == 0x305EF0u) {
        ctx->pc = 0x305EF0u;
            // 0x305ef0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x305EF4u;
        goto label_305ef4;
    }
    ctx->pc = 0x305EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x305EF4u);
        ctx->pc = 0x305EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305EECu;
            // 0x305ef0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x305EF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x305EF4u; }
            if (ctx->pc != 0x305EF4u) { return; }
        }
        }
    }
    ctx->pc = 0x305EF4u;
label_305ef4:
    // 0x305ef4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x305ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_305ef8:
    // 0x305ef8: 0x3c023e56  lui         $v0, 0x3E56
    ctx->pc = 0x305ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15958 << 16));
label_305efc:
    // 0x305efc: 0x34437750  ori         $v1, $v0, 0x7750
    ctx->pc = 0x305efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_305f00:
    // 0x305f00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x305f00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_305f04:
    // 0x305f04: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x305f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
label_305f08:
    // 0x305f08: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x305f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_305f0c:
    // 0x305f0c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x305f0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_305f10:
    // 0x305f10: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x305f10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_305f14:
    // 0x305f14: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x305f14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_305f18:
    // 0x305f18: 0x0  nop
    ctx->pc = 0x305f18u;
    // NOP
label_305f1c:
    // 0x305f1c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_305f20:
    if (ctx->pc == 0x305F20u) {
        ctx->pc = 0x305F20u;
            // 0x305f20: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->pc = 0x305F24u;
        goto label_305f24;
    }
    ctx->pc = 0x305F1Cu;
    {
        const bool branch_taken_0x305f1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x305F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305F1Cu;
            // 0x305f20: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x305f1c) {
            ctx->pc = 0x305F28u;
            goto label_305f28;
        }
    }
    ctx->pc = 0x305F24u;
label_305f24:
    // 0x305f24: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x305f24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_305f28:
    // 0x305f28: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x305f28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_305f2c:
    // 0x305f2c: 0xc62d0000  lwc1        $f13, 0x0($s1)
    ctx->pc = 0x305f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_305f30:
    // 0x305f30: 0xc64e0000  lwc1        $f14, 0x0($s2)
    ctx->pc = 0x305f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_305f34:
    // 0x305f34: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x305f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_305f38:
    // 0x305f38: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x305f38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_305f3c:
    // 0x305f3c: 0x320f809  jalr        $t9
label_305f40:
    if (ctx->pc == 0x305F40u) {
        ctx->pc = 0x305F40u;
            // 0x305f40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305F44u;
        goto label_305f44;
    }
    ctx->pc = 0x305F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x305F44u);
        ctx->pc = 0x305F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305F3Cu;
            // 0x305f40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x305F44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x305F44u; }
            if (ctx->pc != 0x305F44u) { return; }
        }
        }
    }
    ctx->pc = 0x305F44u;
label_305f44:
    // 0x305f44: 0x8f82a118  lw          $v0, -0x5EE8($gp)
    ctx->pc = 0x305f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943000)));
label_305f48:
    // 0x305f48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x305f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_305f4c:
    // 0x305f4c: 0xaf82a118  sw          $v0, -0x5EE8($gp)
    ctx->pc = 0x305f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943000), GPR_U32(ctx, 2));
label_305f50:
    // 0x305f50: 0x8f82a118  lw          $v0, -0x5EE8($gp)
    ctx->pc = 0x305f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943000)));
label_305f54:
    // 0x305f54: 0x1c4004c8  bgtz        $v0, . + 4 + (0x4C8 << 2)
label_305f58:
    if (ctx->pc == 0x305F58u) {
        ctx->pc = 0x305F58u;
            // 0x305f58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x305F5Cu;
        goto label_305f5c;
    }
    ctx->pc = 0x305F54u;
    {
        const bool branch_taken_0x305f54 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x305F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305F54u;
            // 0x305f58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305f54) {
            ctx->pc = 0x307278u;
            goto label_307278;
        }
    }
    ctx->pc = 0x305F5Cu;
label_305f5c:
    // 0x305f5c: 0xaf80a118  sw          $zero, -0x5EE8($gp)
    ctx->pc = 0x305f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943000), GPR_U32(ctx, 0));
label_305f60:
    // 0x305f60: 0x100004c5  b           . + 4 + (0x4C5 << 2)
label_305f64:
    if (ctx->pc == 0x305F64u) {
        ctx->pc = 0x305F64u;
            // 0x305f64: 0xaf82a11c  sw          $v0, -0x5EE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943004), GPR_U32(ctx, 2));
        ctx->pc = 0x305F68u;
        goto label_305f68;
    }
    ctx->pc = 0x305F60u;
    {
        const bool branch_taken_0x305f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305F60u;
            // 0x305f64: 0xaf82a11c  sw          $v0, -0x5EE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943004), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305f60) {
            ctx->pc = 0x307278u;
            goto label_307278;
        }
    }
    ctx->pc = 0x305F68u;
label_305f68:
    // 0x305f68: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x305f68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305f6c:
    // 0x305f6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x305f6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305f70:
    // 0x305f70: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x305f70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305f74:
    // 0x305f74: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x305f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_305f78:
    // 0x305f78: 0x2442a2f0  addiu       $v0, $v0, -0x5D10
    ctx->pc = 0x305f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943472));
label_305f7c:
    // 0x305f7c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x305f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_305f80:
    // 0x305f80: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x305f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_305f84:
    // 0x305f84: 0xc0a0ed8  jal         func_283B60
label_305f88:
    if (ctx->pc == 0x305F88u) {
        ctx->pc = 0x305F88u;
            // 0x305f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305F8Cu;
        goto label_305f8c;
    }
    ctx->pc = 0x305F84u;
    SET_GPR_U32(ctx, 31, 0x305F8Cu);
    ctx->pc = 0x305F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305F84u;
            // 0x305f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305F8Cu; }
        if (ctx->pc != 0x305F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305F8Cu; }
        if (ctx->pc != 0x305F8Cu) { return; }
    }
    ctx->pc = 0x305F8Cu;
label_305f8c:
    // 0x305f8c: 0xc78ca114  lwc1        $f12, -0x5EEC($gp)
    ctx->pc = 0x305f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_305f90:
    // 0x305f90: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x305f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_305f94:
    // 0x305f94: 0x2442a120  addiu       $v0, $v0, -0x5EE0
    ctx->pc = 0x305f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943008));
label_305f98:
    // 0x305f98: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x305f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_305f9c:
    // 0x305f9c: 0x24849f40  addiu       $a0, $a0, -0x60C0
    ctx->pc = 0x305f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942528));
label_305fa0:
    // 0x305fa0: 0x533021  addu        $a2, $v0, $s3
    ctx->pc = 0x305fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_305fa4:
    // 0x305fa4: 0xc0c768c  jal         func_31DA30
label_305fa8:
    if (ctx->pc == 0x305FA8u) {
        ctx->pc = 0x305FA8u;
            // 0x305fa8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x305FACu;
        goto label_305fac;
    }
    ctx->pc = 0x305FA4u;
    SET_GPR_U32(ctx, 31, 0x305FACu);
    ctx->pc = 0x305FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305FA4u;
            // 0x305fa8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31DA30u;
    if (runtime->hasFunction(0x31DA30u)) {
        auto targetFn = runtime->lookupFunction(0x31DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305FACu; }
        if (ctx->pc != 0x305FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        grGetFishProgress__FP11grRACE_INFOifP15grRACE_PROGRESS_0x31da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305FACu; }
        if (ctx->pc != 0x305FACu) { return; }
    }
    ctx->pc = 0x305FACu;
label_305fac:
    // 0x305fac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x305facu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_305fb0:
    // 0x305fb0: 0x2652002c  addiu       $s2, $s2, 0x2C
    ctx->pc = 0x305fb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
label_305fb4:
    // 0x305fb4: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x305fb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_305fb8:
    // 0x305fb8: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_305fbc:
    if (ctx->pc == 0x305FBCu) {
        ctx->pc = 0x305FBCu;
            // 0x305fbc: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->pc = 0x305FC0u;
        goto label_305fc0;
    }
    ctx->pc = 0x305FB8u;
    {
        const bool branch_taken_0x305fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305FB8u;
            // 0x305fbc: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305fb8) {
            ctx->pc = 0x305F74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_305f74;
        }
    }
    ctx->pc = 0x305FC0u;
label_305fc0:
    // 0x305fc0: 0xc780a114  lwc1        $f0, -0x5EEC($gp)
    ctx->pc = 0x305fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_305fc4:
    // 0x305fc4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x305fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_305fc8:
    // 0x305fc8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x305fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_305fcc:
    // 0x305fcc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x305fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305fd0:
    // 0x305fd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x305fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_305fd4:
    // 0x305fd4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x305fd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305fd8:
    // 0x305fd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x305fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_305fdc:
    // 0x305fdc: 0xe780a114  swc1        $f0, -0x5EEC($gp)
    ctx->pc = 0x305fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942996), bits); }
label_305fe0:
    // 0x305fe0: 0xc78ca114  lwc1        $f12, -0x5EEC($gp)
    ctx->pc = 0x305fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_305fe4:
    // 0x305fe4: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x305fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_305fe8:
    // 0x305fe8: 0x24849f40  addiu       $a0, $a0, -0x60C0
    ctx->pc = 0x305fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942528));
label_305fec:
    // 0x305fec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x305fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_305ff0:
    // 0x305ff0: 0xc0c768c  jal         func_31DA30
label_305ff4:
    if (ctx->pc == 0x305FF4u) {
        ctx->pc = 0x305FF4u;
            // 0x305ff4: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x305FF8u;
        goto label_305ff8;
    }
    ctx->pc = 0x305FF0u;
    SET_GPR_U32(ctx, 31, 0x305FF8u);
    ctx->pc = 0x305FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305FF0u;
            // 0x305ff4: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31DA30u;
    if (runtime->hasFunction(0x31DA30u)) {
        auto targetFn = runtime->lookupFunction(0x31DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305FF8u; }
        if (ctx->pc != 0x305FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        grGetFishProgress__FP11grRACE_INFOifP15grRACE_PROGRESS_0x31da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305FF8u; }
        if (ctx->pc != 0x305FF8u) { return; }
    }
    ctx->pc = 0x305FF8u;
label_305ff8:
    // 0x305ff8: 0x93a300dc  lbu         $v1, 0xDC($sp)
    ctx->pc = 0x305ff8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 220)));
label_305ffc:
    // 0x305ffc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x305ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_306000:
    // 0x306000: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
label_306004:
    if (ctx->pc == 0x306004u) {
        ctx->pc = 0x306004u;
            // 0x306004: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x306008u;
        goto label_306008;
    }
    ctx->pc = 0x306000u;
    {
        const bool branch_taken_0x306000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x306004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306000u;
            // 0x306004: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306000) {
            ctx->pc = 0x306098u;
            goto label_306098;
        }
    }
    ctx->pc = 0x306008u;
label_306008:
    // 0x306008: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x306008u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30600c:
    // 0x30600c: 0x0  nop
    ctx->pc = 0x30600cu;
    // NOP
label_306010:
    // 0x306010: 0x12710014  beq         $s3, $s1, . + 4 + (0x14 << 2)
label_306014:
    if (ctx->pc == 0x306014u) {
        ctx->pc = 0x306018u;
        goto label_306018;
    }
    ctx->pc = 0x306010u;
    {
        const bool branch_taken_0x306010 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 17));
        if (branch_taken_0x306010) {
            ctx->pc = 0x306064u;
            goto label_306064;
        }
    }
    ctx->pc = 0x306018u;
label_306018:
    // 0x306018: 0xc78ca114  lwc1        $f12, -0x5EEC($gp)
    ctx->pc = 0x306018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_30601c:
    // 0x30601c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30601cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_306020:
    // 0x306020: 0x24849f40  addiu       $a0, $a0, -0x60C0
    ctx->pc = 0x306020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942528));
label_306024:
    // 0x306024: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x306024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_306028:
    // 0x306028: 0xc0c768c  jal         func_31DA30
label_30602c:
    if (ctx->pc == 0x30602Cu) {
        ctx->pc = 0x30602Cu;
            // 0x30602c: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x306030u;
        goto label_306030;
    }
    ctx->pc = 0x306028u;
    SET_GPR_U32(ctx, 31, 0x306030u);
    ctx->pc = 0x30602Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306028u;
            // 0x30602c: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31DA30u;
    if (runtime->hasFunction(0x31DA30u)) {
        auto targetFn = runtime->lookupFunction(0x31DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306030u; }
        if (ctx->pc != 0x306030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        grGetFishProgress__FP11grRACE_INFOifP15grRACE_PROGRESS_0x31da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306030u; }
        if (ctx->pc != 0x306030u) { return; }
    }
    ctx->pc = 0x306030u;
label_306030:
    // 0x306030: 0x93a300fc  lbu         $v1, 0xFC($sp)
    ctx->pc = 0x306030u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 252)));
label_306034:
    // 0x306034: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x306034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_306038:
    // 0x306038: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_30603c:
    if (ctx->pc == 0x30603Cu) {
        ctx->pc = 0x306040u;
        goto label_306040;
    }
    ctx->pc = 0x306038u;
    {
        const bool branch_taken_0x306038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x306038) {
            ctx->pc = 0x306060u;
            goto label_306060;
        }
    }
    ctx->pc = 0x306040u;
label_306040:
    // 0x306040: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x306040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_306044:
    // 0x306044: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x306044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306048:
    // 0x306048: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x306048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30604c:
    // 0x30604c: 0x0  nop
    ctx->pc = 0x30604cu;
    // NOP
label_306050:
    // 0x306050: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_306054:
    if (ctx->pc == 0x306054u) {
        ctx->pc = 0x306058u;
        goto label_306058;
    }
    ctx->pc = 0x306050u;
    {
        const bool branch_taken_0x306050 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x306050) {
            ctx->pc = 0x306064u;
            goto label_306064;
        }
    }
    ctx->pc = 0x306058u;
label_306058:
    // 0x306058: 0x10000002  b           . + 4 + (0x2 << 2)
label_30605c:
    if (ctx->pc == 0x30605Cu) {
        ctx->pc = 0x30605Cu;
            // 0x30605c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x306060u;
        goto label_306060;
    }
    ctx->pc = 0x306058u;
    {
        const bool branch_taken_0x306058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30605Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306058u;
            // 0x30605c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306058) {
            ctx->pc = 0x306064u;
            goto label_306064;
        }
    }
    ctx->pc = 0x306060u;
label_306060:
    // 0x306060: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x306060u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_306064:
    // 0x306064: 0x0  nop
    ctx->pc = 0x306064u;
    // NOP
label_306068:
    // 0x306068: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x306068u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_30606c:
    // 0x30606c: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x30606cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
label_306070:
    // 0x306070: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_306074:
    if (ctx->pc == 0x306074u) {
        ctx->pc = 0x306074u;
            // 0x306074: 0x3c0201f6  lui         $v0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x306078u;
        goto label_306078;
    }
    ctx->pc = 0x306070u;
    {
        const bool branch_taken_0x306070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306070u;
            // 0x306074: 0x3c0201f6  lui         $v0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306070) {
            ctx->pc = 0x30600Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30600c;
        }
    }
    ctx->pc = 0x306078u;
label_306078:
    // 0x306078: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x306078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_30607c:
    // 0x30607c: 0x2442a2f0  addiu       $v0, $v0, -0x5D10
    ctx->pc = 0x30607cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943472));
label_306080:
    // 0x306080: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x306080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_306084:
    // 0x306084: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x306084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_306088:
    // 0x306088: 0xac92000c  sw          $s2, 0xC($a0)
    ctx->pc = 0x306088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 18));
label_30608c:
    // 0x30608c: 0x2442a1b0  addiu       $v0, $v0, -0x5E50
    ctx->pc = 0x30608cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943152));
label_306090:
    // 0x306090: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x306090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_306094:
    // 0x306094: 0xac51fffc  sw          $s1, -0x4($v0)
    ctx->pc = 0x306094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 17));
label_306098:
    // 0x306098: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x306098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_30609c:
    // 0x30609c: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x30609cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_3060a0:
    // 0x3060a0: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
label_3060a4:
    if (ctx->pc == 0x3060A4u) {
        ctx->pc = 0x3060A4u;
            // 0x3060a4: 0x2694002c  addiu       $s4, $s4, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
        ctx->pc = 0x3060A8u;
        goto label_3060a8;
    }
    ctx->pc = 0x3060A0u;
    {
        const bool branch_taken_0x3060a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3060A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3060A0u;
            // 0x3060a4: 0x2694002c  addiu       $s4, $s4, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3060a0) {
            ctx->pc = 0x305FE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_305fe0;
        }
    }
    ctx->pc = 0x3060A8u;
label_3060a8:
    // 0x3060a8: 0x8f828ad4  lw          $v0, -0x752C($gp)
    ctx->pc = 0x3060a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937300)));
label_3060ac:
    // 0x3060ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3060b0:
    if (ctx->pc == 0x3060B0u) {
        ctx->pc = 0x3060B0u;
            // 0x3060b0: 0x24160006  addiu       $s6, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x3060B4u;
        goto label_3060b4;
    }
    ctx->pc = 0x3060ACu;
    {
        const bool branch_taken_0x3060ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3060B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3060ACu;
            // 0x3060b0: 0x24160006  addiu       $s6, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3060ac) {
            ctx->pc = 0x3060C0u;
            goto label_3060c0;
        }
    }
    ctx->pc = 0x3060B4u;
label_3060b4:
    // 0x3060b4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3060b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_3060b8:
    // 0x3060b8: 0x8c22a1b0  lw          $v0, -0x5E50($at)
    ctx->pc = 0x3060b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943152)));
label_3060bc:
    // 0x3060bc: 0xaf82a134  sw          $v0, -0x5ECC($gp)
    ctx->pc = 0x3060bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943028), GPR_U32(ctx, 2));
label_3060c0:
    // 0x3060c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3060c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3060c4:
    // 0x3060c4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3060c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3060c8:
    // 0x3060c8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3060c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3060cc:
    // 0x3060cc: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3060ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_3060d0:
    // 0x3060d0: 0x2442a2f0  addiu       $v0, $v0, -0x5D10
    ctx->pc = 0x3060d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943472));
label_3060d4:
    // 0x3060d4: 0x559821  addu        $s3, $v0, $s5
    ctx->pc = 0x3060d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_3060d8:
    // 0x3060d8: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x3060d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3060dc:
    // 0x3060dc: 0xc0a0ed8  jal         func_283B60
label_3060e0:
    if (ctx->pc == 0x3060E0u) {
        ctx->pc = 0x3060E0u;
            // 0x3060e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3060E4u;
        goto label_3060e4;
    }
    ctx->pc = 0x3060DCu;
    SET_GPR_U32(ctx, 31, 0x3060E4u);
    ctx->pc = 0x3060E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3060DCu;
            // 0x3060e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3060E4u; }
        if (ctx->pc != 0x3060E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3060E4u; }
        if (ctx->pc != 0x3060E4u) { return; }
    }
    ctx->pc = 0x3060E4u;
label_3060e4:
    // 0x3060e4: 0xc78ca114  lwc1        $f12, -0x5EEC($gp)
    ctx->pc = 0x3060e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3060e8:
    // 0x3060e8: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3060e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_3060ec:
    // 0x3060ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3060ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3060f0:
    // 0x3060f0: 0x24849f40  addiu       $a0, $a0, -0x60C0
    ctx->pc = 0x3060f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942528));
label_3060f4:
    // 0x3060f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3060f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3060f8:
    // 0x3060f8: 0xc0c768c  jal         func_31DA30
label_3060fc:
    if (ctx->pc == 0x3060FCu) {
        ctx->pc = 0x3060FCu;
            // 0x3060fc: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x306100u;
        goto label_306100;
    }
    ctx->pc = 0x3060F8u;
    SET_GPR_U32(ctx, 31, 0x306100u);
    ctx->pc = 0x3060FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3060F8u;
            // 0x3060fc: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31DA30u;
    if (runtime->hasFunction(0x31DA30u)) {
        auto targetFn = runtime->lookupFunction(0x31DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306100u; }
        if (ctx->pc != 0x306100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        grGetFishProgress__FP11grRACE_INFOifP15grRACE_PROGRESS_0x31da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306100u; }
        if (ctx->pc != 0x306100u) { return; }
    }
    ctx->pc = 0x306100u;
label_306100:
    // 0x306100: 0x27be011c  addiu       $fp, $sp, 0x11C
    ctx->pc = 0x306100u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_306104:
    // 0x306104: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x306104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_306108:
    // 0x306108: 0x93c30000  lbu         $v1, 0x0($fp)
    ctx->pc = 0x306108u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
label_30610c:
    // 0x30610c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_306110:
    if (ctx->pc == 0x306110u) {
        ctx->pc = 0x306114u;
        goto label_306114;
    }
    ctx->pc = 0x30610Cu;
    {
        const bool branch_taken_0x30610c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30610c) {
            ctx->pc = 0x306118u;
            goto label_306118;
        }
    }
    ctx->pc = 0x306114u;
label_306114:
    // 0x306114: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x306114u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_306118:
    // 0x306118: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x306118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_30611c:
    // 0x30611c: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x30611cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306120:
    // 0x306120: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x306120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_306124:
    // 0x306124: 0x0  nop
    ctx->pc = 0x306124u;
    // NOP
label_306128:
    // 0x306128: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x306128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30612c:
    // 0x30612c: 0x0  nop
    ctx->pc = 0x30612cu;
    // NOP
label_306130:
    // 0x306130: 0x45010018  bc1t        . + 4 + (0x18 << 2)
label_306134:
    if (ctx->pc == 0x306134u) {
        ctx->pc = 0x306138u;
        goto label_306138;
    }
    ctx->pc = 0x306130u;
    {
        const bool branch_taken_0x306130 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x306130) {
            ctx->pc = 0x306194u;
            goto label_306194;
        }
    }
    ctx->pc = 0x306138u;
label_306138:
    // 0x306138: 0x0  nop
    ctx->pc = 0x306138u;
    // NOP
label_30613c:
    // 0x30613c: 0x0  nop
    ctx->pc = 0x30613cu;
    // NOP
label_306140:
    // 0x306140: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x306140u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_306144:
    // 0x306144: 0x0  nop
    ctx->pc = 0x306144u;
    // NOP
label_306148:
    // 0x306148: 0x0  nop
    ctx->pc = 0x306148u;
    // NOP
label_30614c:
    // 0x30614c: 0xc0a24b0  jal         func_2892C0
label_306150:
    if (ctx->pc == 0x306150u) {
        ctx->pc = 0x306154u;
        goto label_306154;
    }
    ctx->pc = 0x30614Cu;
    SET_GPR_U32(ctx, 31, 0x306154u);
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306154u; }
        if (ctx->pc != 0x306154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306154u; }
        if (ctx->pc != 0x306154u) { return; }
    }
    ctx->pc = 0x306154u;
label_306154:
    // 0x306154: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x306154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_306158:
    // 0x306158: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x306158u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_30615c:
    // 0x30615c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_306160:
    if (ctx->pc == 0x306160u) {
        ctx->pc = 0x306160u;
            // 0x306160: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x306164u;
        goto label_306164;
    }
    ctx->pc = 0x30615Cu;
    {
        const bool branch_taken_0x30615c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x306160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30615Cu;
            // 0x306160: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30615c) {
            ctx->pc = 0x306194u;
            goto label_306194;
        }
    }
    ctx->pc = 0x306164u;
label_306164:
    // 0x306164: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x306164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_306168:
    // 0x306168: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x306168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_30616c:
    // 0x30616c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x30616cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_306170:
    // 0x306170: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_306174:
    if (ctx->pc == 0x306174u) {
        ctx->pc = 0x306174u;
            // 0x306174: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x306178u;
        goto label_306178;
    }
    ctx->pc = 0x306170u;
    {
        const bool branch_taken_0x306170 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x306174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306170u;
            // 0x306174: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306170) {
            ctx->pc = 0x306180u;
            goto label_306180;
        }
    }
    ctx->pc = 0x306178u;
label_306178:
    // 0x306178: 0x10000006  b           . + 4 + (0x6 << 2)
label_30617c:
    if (ctx->pc == 0x30617Cu) {
        ctx->pc = 0x30617Cu;
            // 0x30617c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x306180u;
        goto label_306180;
    }
    ctx->pc = 0x306178u;
    {
        const bool branch_taken_0x306178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30617Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306178u;
            // 0x30617c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306178) {
            ctx->pc = 0x306194u;
            goto label_306194;
        }
    }
    ctx->pc = 0x306180u;
label_306180:
    // 0x306180: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x306180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306184:
    // 0x306184: 0xc064220  jal         func_190880
label_306188:
    if (ctx->pc == 0x306188u) {
        ctx->pc = 0x306188u;
            // 0x306188: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x30618Cu;
        goto label_30618c;
    }
    ctx->pc = 0x306184u;
    SET_GPR_U32(ctx, 31, 0x30618Cu);
    ctx->pc = 0x306188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306184u;
            // 0x306188: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30618Cu; }
        if (ctx->pc != 0x30618Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30618Cu; }
        if (ctx->pc != 0x30618Cu) { return; }
    }
    ctx->pc = 0x30618Cu;
label_30618c:
    // 0x30618c: 0xc780a114  lwc1        $f0, -0x5EEC($gp)
    ctx->pc = 0x30618cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306190:
    // 0x306190: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x306190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
label_306194:
    // 0x306194: 0x0  nop
    ctx->pc = 0x306194u;
    // NOP
label_306198:
    // 0x306198: 0xc064220  jal         func_190880
label_30619c:
    if (ctx->pc == 0x30619Cu) {
        ctx->pc = 0x3061A0u;
        goto label_3061a0;
    }
    ctx->pc = 0x306198u;
    SET_GPR_U32(ctx, 31, 0x3061A0u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3061A0u; }
        if (ctx->pc != 0x3061A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3061A0u; }
        if (ctx->pc != 0x3061A0u) { return; }
    }
    ctx->pc = 0x3061A0u;
label_3061a0:
    // 0x3061a0: 0x8f86a134  lw          $a2, -0x5ECC($gp)
    ctx->pc = 0x3061a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943028)));
label_3061a4:
    // 0x3061a4: 0x16260056  bne         $s1, $a2, . + 4 + (0x56 << 2)
label_3061a8:
    if (ctx->pc == 0x3061A8u) {
        ctx->pc = 0x3061ACu;
        goto label_3061ac;
    }
    ctx->pc = 0x3061A4u;
    {
        const bool branch_taken_0x3061a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 6));
        if (branch_taken_0x3061a4) {
            ctx->pc = 0x306300u;
            goto label_306300;
        }
    }
    ctx->pc = 0x3061ACu;
label_3061ac:
    // 0x3061ac: 0x93c30000  lbu         $v1, 0x0($fp)
    ctx->pc = 0x3061acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
label_3061b0:
    // 0x3061b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3061b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3061b4:
    // 0x3061b4: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
label_3061b8:
    if (ctx->pc == 0x3061B8u) {
        ctx->pc = 0x3061BCu;
        goto label_3061bc;
    }
    ctx->pc = 0x3061B4u;
    {
        const bool branch_taken_0x3061b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3061b4) {
            ctx->pc = 0x306214u;
            goto label_306214;
        }
    }
    ctx->pc = 0x3061BCu;
label_3061bc:
    // 0x3061bc: 0xc780a114  lwc1        $f0, -0x5EEC($gp)
    ctx->pc = 0x3061bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3061c0:
    // 0x3061c0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3061c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_3061c4:
    // 0x3061c4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3061c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3061c8:
    // 0x3061c8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3061c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3061cc:
    // 0x3061cc: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x3061ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3061d0:
    // 0x3061d0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3061d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3061d4:
    // 0x3061d4: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3061d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_3061d8:
    // 0x3061d8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3061d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3061dc:
    // 0x3061dc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3061dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3061e0:
    // 0x3061e0: 0x2442a2f0  addiu       $v0, $v0, -0x5D10
    ctx->pc = 0x3061e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943472));
label_3061e4:
    // 0x3061e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3061e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3061e8:
    // 0x3061e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3061e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3061ec:
    // 0x3061ec: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x3061ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
label_3061f0:
    // 0x3061f0: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x3061f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3061f4:
    // 0x3061f4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3061f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3061f8:
    // 0x3061f8: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x3061f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3061fc:
    // 0x3061fc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3061fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_306200:
    // 0x306200: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x306200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_306204:
    // 0x306204: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x306204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_306208:
    // 0x306208: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x306208u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_30620c:
    // 0x30620c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_306210:
    if (ctx->pc == 0x306210u) {
        ctx->pc = 0x306210u;
            // 0x306210: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->pc = 0x306214u;
        goto label_306214;
    }
    ctx->pc = 0x30620Cu;
    {
        const bool branch_taken_0x30620c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30620Cu;
            // 0x306210: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30620c) {
            ctx->pc = 0x306300u;
            goto label_306300;
        }
    }
    ctx->pc = 0x306214u;
label_306214:
    // 0x306214: 0x0  nop
    ctx->pc = 0x306214u;
    // NOP
label_306218:
    // 0x306218: 0x14620039  bne         $v1, $v0, . + 4 + (0x39 << 2)
label_30621c:
    if (ctx->pc == 0x30621Cu) {
        ctx->pc = 0x30621Cu;
            // 0x30621c: 0x3c0301f6  lui         $v1, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x306220u;
        goto label_306220;
    }
    ctx->pc = 0x306218u;
    {
        const bool branch_taken_0x306218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30621Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306218u;
            // 0x30621c: 0x3c0301f6  lui         $v1, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306218) {
            ctx->pc = 0x306300u;
            goto label_306300;
        }
    }
    ctx->pc = 0x306220u;
label_306220:
    // 0x306220: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x306220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_306224:
    // 0x306224: 0x24639f40  addiu       $v1, $v1, -0x60C0
    ctx->pc = 0x306224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942528));
label_306228:
    // 0x306228: 0x26770020  addiu       $s7, $s3, 0x20
    ctx->pc = 0x306228u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_30622c:
    // 0x30622c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x30622cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_306230:
    // 0x306230: 0xc46001c4  lwc1        $f0, 0x1C4($v1)
    ctx->pc = 0x306230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306234:
    // 0x306234: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x306234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_306238:
    // 0x306238: 0x3c024561  lui         $v0, 0x4561
    ctx->pc = 0x306238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17761 << 16));
label_30623c:
    // 0x30623c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x30623cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_306240:
    // 0x306240: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x306240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_306244:
    // 0x306244: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x306244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
label_306248:
    // 0x306248: 0xc6740024  lwc1        $f20, 0x24($s3)
    ctx->pc = 0x306248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_30624c:
    // 0x30624c: 0x4602a303  div.s       $f12, $f20, $f2
    ctx->pc = 0x30624cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[2]); }
label_306250:
    // 0x306250: 0x0  nop
    ctx->pc = 0x306250u;
    // NOP
label_306254:
    // 0x306254: 0x0  nop
    ctx->pc = 0x306254u;
    // NOP
label_306258:
    // 0x306258: 0xc0a248c  jal         func_289230
label_30625c:
    if (ctx->pc == 0x30625Cu) {
        ctx->pc = 0x306260u;
        goto label_306260;
    }
    ctx->pc = 0x306258u;
    SET_GPR_U32(ctx, 31, 0x306260u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306260u; }
        if (ctx->pc != 0x306260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306260u; }
        if (ctx->pc != 0x306260u) { return; }
    }
    ctx->pc = 0x306260u;
label_306260:
    // 0x306260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306264:
    // 0x306264: 0x3c064561  lui         $a2, 0x4561
    ctx->pc = 0x306264u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17761 << 16));
label_306268:
    // 0x306268: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x306268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_30626c:
    // 0x30626c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30626cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_306270:
    // 0x306270: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x306270u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_306274:
    // 0x306274: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x306274u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_306278:
    // 0x306278: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x306278u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_30627c:
    // 0x30627c: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x30627cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
label_306280:
    // 0x306280: 0x4602a303  div.s       $f12, $f20, $f2
    ctx->pc = 0x306280u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[2]); }
label_306284:
    // 0x306284: 0x0  nop
    ctx->pc = 0x306284u;
    // NOP
label_306288:
    // 0x306288: 0x0  nop
    ctx->pc = 0x306288u;
    // NOP
label_30628c:
    // 0x30628c: 0xc0a248c  jal         func_289230
label_306290:
    if (ctx->pc == 0x306290u) {
        ctx->pc = 0x306294u;
        goto label_306294;
    }
    ctx->pc = 0x30628Cu;
    SET_GPR_U32(ctx, 31, 0x306294u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306294u; }
        if (ctx->pc != 0x306294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306294u; }
        if (ctx->pc != 0x306294u) { return; }
    }
    ctx->pc = 0x306294u;
label_306294:
    // 0x306294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306298:
    // 0x306298: 0x3c064270  lui         $a2, 0x4270
    ctx->pc = 0x306298u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17008 << 16));
label_30629c:
    // 0x30629c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x30629cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_3062a0:
    // 0x3062a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3062a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3062a4:
    // 0x3062a4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x3062a4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3062a8:
    // 0x3062a8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3062a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3062ac:
    // 0x3062ac: 0x46000d82  mul.s       $f22, $f1, $f0
    ctx->pc = 0x3062acu;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3062b0:
    // 0x3062b0: 0x4616a001  sub.s       $f0, $f20, $f22
    ctx->pc = 0x3062b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
label_3062b4:
    // 0x3062b4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3062b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3062b8:
    // 0x3062b8: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x3062b8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_3062bc:
    // 0x3062bc: 0x0  nop
    ctx->pc = 0x3062bcu;
    // NOP
label_3062c0:
    // 0x3062c0: 0x0  nop
    ctx->pc = 0x3062c0u;
    // NOP
label_3062c4:
    // 0x3062c4: 0xc0a248c  jal         func_289230
label_3062c8:
    if (ctx->pc == 0x3062C8u) {
        ctx->pc = 0x3062CCu;
        goto label_3062cc;
    }
    ctx->pc = 0x3062C4u;
    SET_GPR_U32(ctx, 31, 0x3062CCu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3062CCu; }
        if (ctx->pc != 0x3062CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3062CCu; }
        if (ctx->pc != 0x3062CCu) { return; }
    }
    ctx->pc = 0x3062CCu;
label_3062cc:
    // 0x3062cc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3062ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3062d0:
    // 0x3062d0: 0x3c064270  lui         $a2, 0x4270
    ctx->pc = 0x3062d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17008 << 16));
label_3062d4:
    // 0x3062d4: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x3062d4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3062d8:
    // 0x3062d8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x3062d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_3062dc:
    // 0x3062dc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3062dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3062e0:
    // 0x3062e0: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x3062e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3062e4:
    // 0x3062e4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3062e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3062e8:
    // 0x3062e8: 0x4616a840  add.s       $f1, $f21, $f22
    ctx->pc = 0x3062e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
label_3062ec:
    // 0x3062ec: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x3062ecu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
label_3062f0:
    // 0x3062f0: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x3062f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3062f4:
    // 0x3062f4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x3062f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3062f8:
    // 0x3062f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3062f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3062fc:
    // 0x3062fc: 0xe6600028  swc1        $f0, 0x28($s3)
    ctx->pc = 0x3062fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
label_306300:
    // 0x306300: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x306300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_306304:
    // 0x306304: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x306304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_306308:
    // 0x306308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30630c:
    // 0x30630c: 0x0  nop
    ctx->pc = 0x30630cu;
    // NOP
label_306310:
    // 0x306310: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x306310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_306314:
    // 0x306314: 0x0  nop
    ctx->pc = 0x306314u;
    // NOP
label_306318:
    // 0x306318: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_30631c:
    if (ctx->pc == 0x30631Cu) {
        ctx->pc = 0x30631Cu;
            // 0x30631c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x306320u;
        goto label_306320;
    }
    ctx->pc = 0x306318u;
    {
        const bool branch_taken_0x306318 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30631Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306318u;
            // 0x30631c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x306318) {
            ctx->pc = 0x30636Cu;
            goto label_30636c;
        }
    }
    ctx->pc = 0x306320u;
label_306320:
    // 0x306320: 0xc0a24b0  jal         func_2892C0
label_306324:
    if (ctx->pc == 0x306324u) {
        ctx->pc = 0x306328u;
        goto label_306328;
    }
    ctx->pc = 0x306320u;
    SET_GPR_U32(ctx, 31, 0x306328u);
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306328u; }
        if (ctx->pc != 0x306328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306328u; }
        if (ctx->pc != 0x306328u) { return; }
    }
    ctx->pc = 0x306328u;
label_306328:
    // 0x306328: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x306328u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_30632c:
    // 0x30632c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_306330:
    if (ctx->pc == 0x306330u) {
        ctx->pc = 0x306330u;
            // 0x306330: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x306334u;
        goto label_306334;
    }
    ctx->pc = 0x30632Cu;
    {
        const bool branch_taken_0x30632c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x306330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30632Cu;
            // 0x306330: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30632c) {
            ctx->pc = 0x306340u;
            goto label_306340;
        }
    }
    ctx->pc = 0x306334u;
label_306334:
    // 0x306334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306338:
    // 0x306338: 0x10000007  b           . + 4 + (0x7 << 2)
label_30633c:
    if (ctx->pc == 0x30633Cu) {
        ctx->pc = 0x30633Cu;
            // 0x30633c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x306340u;
        goto label_306340;
    }
    ctx->pc = 0x306338u;
    {
        const bool branch_taken_0x306338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30633Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306338u;
            // 0x30633c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x306338) {
            ctx->pc = 0x306358u;
            goto label_306358;
        }
    }
    ctx->pc = 0x306340u;
label_306340:
    // 0x306340: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x306340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_306344:
    // 0x306344: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x306344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_306348:
    // 0x306348: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x306348u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30634c:
    // 0x30634c: 0x0  nop
    ctx->pc = 0x30634cu;
    // NOP
label_306350:
    // 0x306350: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x306350u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_306354:
    // 0x306354: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x306354u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_306358:
    // 0x306358: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x306358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_30635c:
    // 0x30635c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30635cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306360:
    // 0x306360: 0x0  nop
    ctx->pc = 0x306360u;
    // NOP
label_306364:
    // 0x306364: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x306364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_306368:
    // 0x306368: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x306368u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_30636c:
    // 0x30636c: 0x0  nop
    ctx->pc = 0x30636cu;
    // NOP
label_306370:
    // 0x306370: 0x27b70134  addiu       $s7, $sp, 0x134
    ctx->pc = 0x306370u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_306374:
    // 0x306374: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x306374u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_306378:
    // 0x306378: 0xc0a24f0  jal         func_2893C0
label_30637c:
    if (ctx->pc == 0x30637Cu) {
        ctx->pc = 0x30637Cu;
            // 0x30637c: 0xaee00000  sw          $zero, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x306380u;
        goto label_306380;
    }
    ctx->pc = 0x306378u;
    SET_GPR_U32(ctx, 31, 0x306380u);
    ctx->pc = 0x30637Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306378u;
            // 0x30637c: 0xaee00000  sw          $zero, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306380u; }
        if (ctx->pc != 0x306380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306380u; }
        if (ctx->pc != 0x306380u) { return; }
    }
    ctx->pc = 0x306380u;
label_306380:
    // 0x306380: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x306380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306384:
    // 0x306384: 0xc040058  jal         func_100160
label_306388:
    if (ctx->pc == 0x306388u) {
        ctx->pc = 0x306388u;
            // 0x306388: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30638Cu;
        goto label_30638c;
    }
    ctx->pc = 0x306384u;
    SET_GPR_U32(ctx, 31, 0x30638Cu);
    ctx->pc = 0x306388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306384u;
            // 0x306388: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100160u;
    if (runtime->hasFunction(0x100160u)) {
        auto targetFn = runtime->lookupFunction(0x100160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30638Cu; }
        if (ctx->pc != 0x30638Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x100160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30638Cu; }
        if (ctx->pc != 0x30638Cu) { return; }
    }
    ctx->pc = 0x30638Cu;
label_30638c:
    // 0x30638c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_306390:
    if (ctx->pc == 0x306390u) {
        ctx->pc = 0x306390u;
            // 0x306390: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x306394u;
        goto label_306394;
    }
    ctx->pc = 0x30638Cu;
    {
        const bool branch_taken_0x30638c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30638Cu;
            // 0x306390: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30638c) {
            ctx->pc = 0x3063E4u;
            goto label_3063e4;
        }
    }
    ctx->pc = 0x306394u;
label_306394:
    // 0x306394: 0xc0a24f0  jal         func_2893C0
label_306398:
    if (ctx->pc == 0x306398u) {
        ctx->pc = 0x30639Cu;
        goto label_30639c;
    }
    ctx->pc = 0x306394u;
    SET_GPR_U32(ctx, 31, 0x30639Cu);
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30639Cu; }
        if (ctx->pc != 0x30639Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30639Cu; }
        if (ctx->pc != 0x30639Cu) { return; }
    }
    ctx->pc = 0x30639Cu;
label_30639c:
    // 0x30639c: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x30639cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
label_3063a0:
    // 0x3063a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3063a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3063a4:
    // 0x3063a4: 0xc04003c  jal         func_1000F0
label_3063a8:
    if (ctx->pc == 0x3063A8u) {
        ctx->pc = 0x3063A8u;
            // 0x3063a8: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x3063ACu;
        goto label_3063ac;
    }
    ctx->pc = 0x3063A4u;
    SET_GPR_U32(ctx, 31, 0x3063ACu);
    ctx->pc = 0x3063A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3063A4u;
            // 0x3063a8: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1000F0u;
    if (runtime->hasFunction(0x1000F0u)) {
        auto targetFn = runtime->lookupFunction(0x1000F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3063ACu; }
        if (ctx->pc != 0x3063ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpflt_0x1000f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3063ACu; }
        if (ctx->pc != 0x3063ACu) { return; }
    }
    ctx->pc = 0x3063ACu;
label_3063ac:
    // 0x3063ac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3063b0:
    if (ctx->pc == 0x3063B0u) {
        ctx->pc = 0x3063B0u;
            // 0x3063b0: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->pc = 0x3063B4u;
        goto label_3063b4;
    }
    ctx->pc = 0x3063ACu;
    {
        const bool branch_taken_0x3063ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3063B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3063ACu;
            // 0x3063b0: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3063ac) {
            ctx->pc = 0x3063E4u;
            goto label_3063e4;
        }
    }
    ctx->pc = 0x3063B4u;
label_3063b4:
    // 0x3063b4: 0x3c03433e  lui         $v1, 0x433E
    ctx->pc = 0x3063b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17214 << 16));
label_3063b8:
    // 0x3063b8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3063b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3063bc:
    // 0x3063bc: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x3063bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3063c0:
    // 0x3063c0: 0x3c02c3ac  lui         $v0, 0xC3AC
    ctx->pc = 0x3063c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50092 << 16));
label_3063c4:
    // 0x3063c4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3063c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_3063c8:
    // 0x3063c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3063c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3063cc:
    // 0x3063cc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3063ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3063d0:
    // 0x3063d0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3063d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3063d4:
    // 0x3063d4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3063d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3063d8:
    // 0x3063d8: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x3063d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_3063dc:
    // 0x3063dc: 0x46011800  add.s       $f0, $f3, $f1
    ctx->pc = 0x3063dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_3063e0:
    // 0x3063e0: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x3063e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_3063e4:
    // 0x3063e4: 0x0  nop
    ctx->pc = 0x3063e4u;
    // NOP
label_3063e8:
    // 0x3063e8: 0xc0a24f0  jal         func_2893C0
label_3063ec:
    if (ctx->pc == 0x3063ECu) {
        ctx->pc = 0x3063ECu;
            // 0x3063ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3063F0u;
        goto label_3063f0;
    }
    ctx->pc = 0x3063E8u;
    SET_GPR_U32(ctx, 31, 0x3063F0u);
    ctx->pc = 0x3063ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3063E8u;
            // 0x3063ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3063F0u; }
        if (ctx->pc != 0x3063F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3063F0u; }
        if (ctx->pc != 0x3063F0u) { return; }
    }
    ctx->pc = 0x3063F0u;
label_3063f0:
    // 0x3063f0: 0x3c034008  lui         $v1, 0x4008
    ctx->pc = 0x3063f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16392 << 16));
label_3063f4:
    // 0x3063f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3063f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3063f8:
    // 0x3063f8: 0xc040058  jal         func_100160
label_3063fc:
    if (ctx->pc == 0x3063FCu) {
        ctx->pc = 0x3063FCu;
            // 0x3063fc: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x306400u;
        goto label_306400;
    }
    ctx->pc = 0x3063F8u;
    SET_GPR_U32(ctx, 31, 0x306400u);
    ctx->pc = 0x3063FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3063F8u;
            // 0x3063fc: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100160u;
    if (runtime->hasFunction(0x100160u)) {
        auto targetFn = runtime->lookupFunction(0x100160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306400u; }
        if (ctx->pc != 0x306400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x100160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306400u; }
        if (ctx->pc != 0x306400u) { return; }
    }
    ctx->pc = 0x306400u;
label_306400:
    // 0x306400: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_306404:
    if (ctx->pc == 0x306404u) {
        ctx->pc = 0x306404u;
            // 0x306404: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x306408u;
        goto label_306408;
    }
    ctx->pc = 0x306400u;
    {
        const bool branch_taken_0x306400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306400u;
            // 0x306404: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x306400) {
            ctx->pc = 0x306470u;
            goto label_306470;
        }
    }
    ctx->pc = 0x306408u;
label_306408:
    // 0x306408: 0xc0a24f0  jal         func_2893C0
label_30640c:
    if (ctx->pc == 0x30640Cu) {
        ctx->pc = 0x306410u;
        goto label_306410;
    }
    ctx->pc = 0x306408u;
    SET_GPR_U32(ctx, 31, 0x306410u);
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306410u; }
        if (ctx->pc != 0x306410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306410u; }
        if (ctx->pc != 0x306410u) { return; }
    }
    ctx->pc = 0x306410u;
label_306410:
    // 0x306410: 0x3c034010  lui         $v1, 0x4010
    ctx->pc = 0x306410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16400 << 16));
label_306414:
    // 0x306414: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x306414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306418:
    // 0x306418: 0xc04003c  jal         func_1000F0
label_30641c:
    if (ctx->pc == 0x30641Cu) {
        ctx->pc = 0x30641Cu;
            // 0x30641c: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x306420u;
        goto label_306420;
    }
    ctx->pc = 0x306418u;
    SET_GPR_U32(ctx, 31, 0x306420u);
    ctx->pc = 0x30641Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306418u;
            // 0x30641c: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1000F0u;
    if (runtime->hasFunction(0x1000F0u)) {
        auto targetFn = runtime->lookupFunction(0x1000F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306420u; }
        if (ctx->pc != 0x306420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpflt_0x1000f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306420u; }
        if (ctx->pc != 0x306420u) { return; }
    }
    ctx->pc = 0x306420u;
label_306420:
    // 0x306420: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_306424:
    if (ctx->pc == 0x306424u) {
        ctx->pc = 0x306424u;
            // 0x306424: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->pc = 0x306428u;
        goto label_306428;
    }
    ctx->pc = 0x306420u;
    {
        const bool branch_taken_0x306420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306420u;
            // 0x306424: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306420) {
            ctx->pc = 0x306470u;
            goto label_306470;
        }
    }
    ctx->pc = 0x306428u;
label_306428:
    // 0x306428: 0x3c03c33e  lui         $v1, 0xC33E
    ctx->pc = 0x306428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49982 << 16));
label_30642c:
    // 0x30642c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x30642cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_306430:
    // 0x306430: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x306430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_306434:
    // 0x306434: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x306434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_306438:
    // 0x306438: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x306438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30643c:
    // 0x30643c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x30643cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_306440:
    // 0x306440: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x306440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_306444:
    // 0x306444: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306448:
    // 0x306448: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x306448u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_30644c:
    // 0x30644c: 0x3c02c3ac  lui         $v0, 0xC3AC
    ctx->pc = 0x30644cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50092 << 16));
label_306450:
    // 0x306450: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x306450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_306454:
    // 0x306454: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x306454u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_306458:
    // 0x306458: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x306458u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_30645c:
    // 0x30645c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30645cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306460:
    // 0x306460: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x306460u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_306464:
    // 0x306464: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x306464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_306468:
    // 0x306468: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x306468u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_30646c:
    // 0x30646c: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x30646cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_306470:
    // 0x306470: 0xc0a24f0  jal         func_2893C0
label_306474:
    if (ctx->pc == 0x306474u) {
        ctx->pc = 0x306474u;
            // 0x306474: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x306478u;
        goto label_306478;
    }
    ctx->pc = 0x306470u;
    SET_GPR_U32(ctx, 31, 0x306478u);
    ctx->pc = 0x306474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306470u;
            // 0x306474: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306478u; }
        if (ctx->pc != 0x306478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306478u; }
        if (ctx->pc != 0x306478u) { return; }
    }
    ctx->pc = 0x306478u;
label_306478:
    // 0x306478: 0x3c034010  lui         $v1, 0x4010
    ctx->pc = 0x306478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16400 << 16));
label_30647c:
    // 0x30647c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30647cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306480:
    // 0x306480: 0xc040058  jal         func_100160
label_306484:
    if (ctx->pc == 0x306484u) {
        ctx->pc = 0x306484u;
            // 0x306484: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x306488u;
        goto label_306488;
    }
    ctx->pc = 0x306480u;
    SET_GPR_U32(ctx, 31, 0x306488u);
    ctx->pc = 0x306484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306480u;
            // 0x306484: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100160u;
    if (runtime->hasFunction(0x100160u)) {
        auto targetFn = runtime->lookupFunction(0x100160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306488u; }
        if (ctx->pc != 0x306488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x100160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306488u; }
        if (ctx->pc != 0x306488u) { return; }
    }
    ctx->pc = 0x306488u;
label_306488:
    // 0x306488: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_30648c:
    if (ctx->pc == 0x30648Cu) {
        ctx->pc = 0x30648Cu;
            // 0x30648c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x306490u;
        goto label_306490;
    }
    ctx->pc = 0x306488u;
    {
        const bool branch_taken_0x306488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30648Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306488u;
            // 0x30648c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x306488) {
            ctx->pc = 0x3064ECu;
            goto label_3064ec;
        }
    }
    ctx->pc = 0x306490u;
label_306490:
    // 0x306490: 0xc0a24f0  jal         func_2893C0
label_306494:
    if (ctx->pc == 0x306494u) {
        ctx->pc = 0x306498u;
        goto label_306498;
    }
    ctx->pc = 0x306490u;
    SET_GPR_U32(ctx, 31, 0x306498u);
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306498u; }
        if (ctx->pc != 0x306498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306498u; }
        if (ctx->pc != 0x306498u) { return; }
    }
    ctx->pc = 0x306498u;
label_306498:
    // 0x306498: 0x3c034014  lui         $v1, 0x4014
    ctx->pc = 0x306498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16404 << 16));
label_30649c:
    // 0x30649c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30649cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3064a0:
    // 0x3064a0: 0xc04003c  jal         func_1000F0
label_3064a4:
    if (ctx->pc == 0x3064A4u) {
        ctx->pc = 0x3064A4u;
            // 0x3064a4: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x3064A8u;
        goto label_3064a8;
    }
    ctx->pc = 0x3064A0u;
    SET_GPR_U32(ctx, 31, 0x3064A8u);
    ctx->pc = 0x3064A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3064A0u;
            // 0x3064a4: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1000F0u;
    if (runtime->hasFunction(0x1000F0u)) {
        auto targetFn = runtime->lookupFunction(0x1000F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3064A8u; }
        if (ctx->pc != 0x3064A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpflt_0x1000f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3064A8u; }
        if (ctx->pc != 0x3064A8u) { return; }
    }
    ctx->pc = 0x3064A8u;
label_3064a8:
    // 0x3064a8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3064ac:
    if (ctx->pc == 0x3064ACu) {
        ctx->pc = 0x3064ACu;
            // 0x3064ac: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->pc = 0x3064B0u;
        goto label_3064b0;
    }
    ctx->pc = 0x3064A8u;
    {
        const bool branch_taken_0x3064a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3064ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3064A8u;
            // 0x3064ac: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3064a8) {
            ctx->pc = 0x3064ECu;
            goto label_3064ec;
        }
    }
    ctx->pc = 0x3064B0u;
label_3064b0:
    // 0x3064b0: 0x3c03c33e  lui         $v1, 0xC33E
    ctx->pc = 0x3064b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49982 << 16));
label_3064b4:
    // 0x3064b4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3064b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3064b8:
    // 0x3064b8: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x3064b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3064bc:
    // 0x3064bc: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x3064bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3064c0:
    // 0x3064c0: 0x3c0243ac  lui         $v0, 0x43AC
    ctx->pc = 0x3064c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17324 << 16));
label_3064c4:
    // 0x3064c4: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x3064c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_3064c8:
    // 0x3064c8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3064c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_3064cc:
    // 0x3064cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3064ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3064d0:
    // 0x3064d0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3064d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3064d4:
    // 0x3064d4: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x3064d4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_3064d8:
    // 0x3064d8: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x3064d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_3064dc:
    // 0x3064dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3064dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3064e0:
    // 0x3064e0: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x3064e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_3064e4:
    // 0x3064e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3064e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3064e8:
    // 0x3064e8: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x3064e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_3064ec:
    // 0x3064ec: 0x0  nop
    ctx->pc = 0x3064ecu;
    // NOP
label_3064f0:
    // 0x3064f0: 0xc0a24f0  jal         func_2893C0
label_3064f4:
    if (ctx->pc == 0x3064F4u) {
        ctx->pc = 0x3064F4u;
            // 0x3064f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3064F8u;
        goto label_3064f8;
    }
    ctx->pc = 0x3064F0u;
    SET_GPR_U32(ctx, 31, 0x3064F8u);
    ctx->pc = 0x3064F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3064F0u;
            // 0x3064f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3064F8u; }
        if (ctx->pc != 0x3064F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3064F8u; }
        if (ctx->pc != 0x3064F8u) { return; }
    }
    ctx->pc = 0x3064F8u;
label_3064f8:
    // 0x3064f8: 0x3c03401c  lui         $v1, 0x401C
    ctx->pc = 0x3064f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16412 << 16));
label_3064fc:
    // 0x3064fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3064fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306500:
    // 0x306500: 0xc040058  jal         func_100160
label_306504:
    if (ctx->pc == 0x306504u) {
        ctx->pc = 0x306504u;
            // 0x306504: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x306508u;
        goto label_306508;
    }
    ctx->pc = 0x306500u;
    SET_GPR_U32(ctx, 31, 0x306508u);
    ctx->pc = 0x306504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306500u;
            // 0x306504: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100160u;
    if (runtime->hasFunction(0x100160u)) {
        auto targetFn = runtime->lookupFunction(0x100160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306508u; }
        if (ctx->pc != 0x306508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x100160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306508u; }
        if (ctx->pc != 0x306508u) { return; }
    }
    ctx->pc = 0x306508u;
label_306508:
    // 0x306508: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_30650c:
    if (ctx->pc == 0x30650Cu) {
        ctx->pc = 0x30650Cu;
            // 0x30650c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x306510u;
        goto label_306510;
    }
    ctx->pc = 0x306508u;
    {
        const bool branch_taken_0x306508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30650Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306508u;
            // 0x30650c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x306508) {
            ctx->pc = 0x306578u;
            goto label_306578;
        }
    }
    ctx->pc = 0x306510u;
label_306510:
    // 0x306510: 0xc0a24f0  jal         func_2893C0
label_306514:
    if (ctx->pc == 0x306514u) {
        ctx->pc = 0x306518u;
        goto label_306518;
    }
    ctx->pc = 0x306510u;
    SET_GPR_U32(ctx, 31, 0x306518u);
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306518u; }
        if (ctx->pc != 0x306518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306518u; }
        if (ctx->pc != 0x306518u) { return; }
    }
    ctx->pc = 0x306518u;
label_306518:
    // 0x306518: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x306518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
label_30651c:
    // 0x30651c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30651cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306520:
    // 0x306520: 0xc04003c  jal         func_1000F0
label_306524:
    if (ctx->pc == 0x306524u) {
        ctx->pc = 0x306524u;
            // 0x306524: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x306528u;
        goto label_306528;
    }
    ctx->pc = 0x306520u;
    SET_GPR_U32(ctx, 31, 0x306528u);
    ctx->pc = 0x306524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306520u;
            // 0x306524: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1000F0u;
    if (runtime->hasFunction(0x1000F0u)) {
        auto targetFn = runtime->lookupFunction(0x1000F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306528u; }
        if (ctx->pc != 0x306528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpflt_0x1000f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306528u; }
        if (ctx->pc != 0x306528u) { return; }
    }
    ctx->pc = 0x306528u;
label_306528:
    // 0x306528: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_30652c:
    if (ctx->pc == 0x30652Cu) {
        ctx->pc = 0x30652Cu;
            // 0x30652c: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->pc = 0x306530u;
        goto label_306530;
    }
    ctx->pc = 0x306528u;
    {
        const bool branch_taken_0x306528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30652Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306528u;
            // 0x30652c: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306528) {
            ctx->pc = 0x306578u;
            goto label_306578;
        }
    }
    ctx->pc = 0x306530u;
label_306530:
    // 0x306530: 0x3c03433e  lui         $v1, 0x433E
    ctx->pc = 0x306530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17214 << 16));
label_306534:
    // 0x306534: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x306534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_306538:
    // 0x306538: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x306538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30653c:
    // 0x30653c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30653cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_306540:
    // 0x306540: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x306540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_306544:
    // 0x306544: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x306544u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_306548:
    // 0x306548: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x306548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
label_30654c:
    // 0x30654c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30654cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306550:
    // 0x306550: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x306550u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_306554:
    // 0x306554: 0x3c0243ac  lui         $v0, 0x43AC
    ctx->pc = 0x306554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17324 << 16));
label_306558:
    // 0x306558: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x306558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_30655c:
    // 0x30655c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x30655cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_306560:
    // 0x306560: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x306560u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_306564:
    // 0x306564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306568:
    // 0x306568: 0x46022080  add.s       $f2, $f4, $f2
    ctx->pc = 0x306568u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_30656c:
    // 0x30656c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30656cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_306570:
    // 0x306570: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x306570u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_306574:
    // 0x306574: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x306574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_306578:
    // 0x306578: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x306578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_30657c:
    // 0x30657c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30657cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306580:
    // 0x306580: 0x0  nop
    ctx->pc = 0x306580u;
    // NOP
label_306584:
    // 0x306584: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x306584u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_306588:
    // 0x306588: 0x0  nop
    ctx->pc = 0x306588u;
    // NOP
label_30658c:
    // 0x30658c: 0x45010028  bc1t        . + 4 + (0x28 << 2)
label_306590:
    if (ctx->pc == 0x306590u) {
        ctx->pc = 0x306590u;
            // 0x306590: 0x3c024040  lui         $v0, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
        ctx->pc = 0x306594u;
        goto label_306594;
    }
    ctx->pc = 0x30658Cu;
    {
        const bool branch_taken_0x30658c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x306590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30658Cu;
            // 0x306590: 0x3c024040  lui         $v0, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30658c) {
            ctx->pc = 0x306630u;
            goto label_306630;
        }
    }
    ctx->pc = 0x306594u;
label_306594:
    // 0x306594: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306598:
    // 0x306598: 0x0  nop
    ctx->pc = 0x306598u;
    // NOP
label_30659c:
    // 0x30659c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x30659cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3065a0:
    // 0x3065a0: 0x0  nop
    ctx->pc = 0x3065a0u;
    // NOP
label_3065a4:
    // 0x3065a4: 0x45000022  bc1f        . + 4 + (0x22 << 2)
label_3065a8:
    if (ctx->pc == 0x3065A8u) {
        ctx->pc = 0x3065ACu;
        goto label_3065ac;
    }
    ctx->pc = 0x3065A4u;
    {
        const bool branch_taken_0x3065a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3065a4) {
            ctx->pc = 0x306630u;
            goto label_306630;
        }
    }
    ctx->pc = 0x3065ACu;
label_3065ac:
    // 0x3065ac: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x3065acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3065b0:
    // 0x3065b0: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x3065b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_3065b4:
    // 0x3065b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3065b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3065b8:
    // 0x3065b8: 0x3c03433e  lui         $v1, 0x433E
    ctx->pc = 0x3065b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17214 << 16));
label_3065bc:
    // 0x3065bc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3065bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3065c0:
    // 0x3065c0: 0x27b30138  addiu       $s3, $sp, 0x138
    ctx->pc = 0x3065c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_3065c4:
    // 0x3065c4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x3065c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_3065c8:
    // 0x3065c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3065c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3065cc:
    // 0x3065cc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3065ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3065d0:
    // 0x3065d0: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x3065d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_3065d4:
    // 0x3065d4: 0xc041c7a  jal         func_1071E8
label_3065d8:
    if (ctx->pc == 0x3065D8u) {
        ctx->pc = 0x3065D8u;
            // 0x3065d8: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x3065DCu;
        goto label_3065dc;
    }
    ctx->pc = 0x3065D4u;
    SET_GPR_U32(ctx, 31, 0x3065DCu);
    ctx->pc = 0x3065D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3065D4u;
            // 0x3065d8: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3065DCu; }
        if (ctx->pc != 0x3065DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3065DCu; }
        if (ctx->pc != 0x3065DCu) { return; }
    }
    ctx->pc = 0x3065DCu;
label_3065dc:
    // 0x3065dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3065dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3065e0:
    // 0x3065e0: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x3065e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_3065e4:
    // 0x3065e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3065e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3065e8:
    // 0x3065e8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3065e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_3065ec:
    // 0x3065ec: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x3065ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_3065f0:
    // 0x3065f0: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x3065f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_3065f4:
    // 0x3065f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3065f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3065f8:
    // 0x3065f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3065f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3065fc:
    // 0x3065fc: 0xc041cf6  jal         func_1073D8
label_306600:
    if (ctx->pc == 0x306600u) {
        ctx->pc = 0x306600u;
            // 0x306600: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x306604u;
        goto label_306604;
    }
    ctx->pc = 0x3065FCu;
    SET_GPR_U32(ctx, 31, 0x306604u);
    ctx->pc = 0x306600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3065FCu;
            // 0x306600: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306604u; }
        if (ctx->pc != 0x306604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306604u; }
        if (ctx->pc != 0x306604u) { return; }
    }
    ctx->pc = 0x306604u;
label_306604:
    // 0x306604: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x306604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_306608:
    // 0x306608: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x306608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_30660c:
    // 0x30660c: 0xc041bb0  jal         func_106EC0
label_306610:
    if (ctx->pc == 0x306610u) {
        ctx->pc = 0x306610u;
            // 0x306610: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306614u;
        goto label_306614;
    }
    ctx->pc = 0x30660Cu;
    SET_GPR_U32(ctx, 31, 0x306614u);
    ctx->pc = 0x306610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30660Cu;
            // 0x306610: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306614u; }
        if (ctx->pc != 0x306614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306614u; }
        if (ctx->pc != 0x306614u) { return; }
    }
    ctx->pc = 0x306614u;
label_306614:
    // 0x306614: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x306614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_306618:
    // 0x306618: 0x3c0243ac  lui         $v0, 0x43AC
    ctx->pc = 0x306618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17324 << 16));
label_30661c:
    // 0x30661c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x30661cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_306620:
    // 0x306620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306624:
    // 0x306624: 0x0  nop
    ctx->pc = 0x306624u;
    // NOP
label_306628:
    // 0x306628: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x306628u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_30662c:
    // 0x30662c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x30662cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_306630:
    // 0x306630: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x306630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_306634:
    // 0x306634: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306638:
    // 0x306638: 0x0  nop
    ctx->pc = 0x306638u;
    // NOP
label_30663c:
    // 0x30663c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x30663cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_306640:
    // 0x306640: 0x0  nop
    ctx->pc = 0x306640u;
    // NOP
label_306644:
    // 0x306644: 0x45010028  bc1t        . + 4 + (0x28 << 2)
label_306648:
    if (ctx->pc == 0x306648u) {
        ctx->pc = 0x306648u;
            // 0x306648: 0x3c0240e0  lui         $v0, 0x40E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
        ctx->pc = 0x30664Cu;
        goto label_30664c;
    }
    ctx->pc = 0x306644u;
    {
        const bool branch_taken_0x306644 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x306648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306644u;
            // 0x306648: 0x3c0240e0  lui         $v0, 0x40E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306644) {
            ctx->pc = 0x3066E8u;
            goto label_3066e8;
        }
    }
    ctx->pc = 0x30664Cu;
label_30664c:
    // 0x30664c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30664cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306650:
    // 0x306650: 0x0  nop
    ctx->pc = 0x306650u;
    // NOP
label_306654:
    // 0x306654: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x306654u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_306658:
    // 0x306658: 0x0  nop
    ctx->pc = 0x306658u;
    // NOP
label_30665c:
    // 0x30665c: 0x45000022  bc1f        . + 4 + (0x22 << 2)
label_306660:
    if (ctx->pc == 0x306660u) {
        ctx->pc = 0x306664u;
        goto label_306664;
    }
    ctx->pc = 0x30665Cu;
    {
        const bool branch_taken_0x30665c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30665c) {
            ctx->pc = 0x3066E8u;
            goto label_3066e8;
        }
    }
    ctx->pc = 0x306664u;
label_306664:
    // 0x306664: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x306664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306668:
    // 0x306668: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x306668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_30666c:
    // 0x30666c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30666cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_306670:
    // 0x306670: 0x3c03c33e  lui         $v1, 0xC33E
    ctx->pc = 0x306670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49982 << 16));
label_306674:
    // 0x306674: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x306674u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_306678:
    // 0x306678: 0x27b30138  addiu       $s3, $sp, 0x138
    ctx->pc = 0x306678u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_30667c:
    // 0x30667c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x30667cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_306680:
    // 0x306680: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x306680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_306684:
    // 0x306684: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x306684u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_306688:
    // 0x306688: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x306688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_30668c:
    // 0x30668c: 0xc041c7a  jal         func_1071E8
label_306690:
    if (ctx->pc == 0x306690u) {
        ctx->pc = 0x306690u;
            // 0x306690: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x306694u;
        goto label_306694;
    }
    ctx->pc = 0x30668Cu;
    SET_GPR_U32(ctx, 31, 0x306694u);
    ctx->pc = 0x306690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30668Cu;
            // 0x306690: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306694u; }
        if (ctx->pc != 0x306694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306694u; }
        if (ctx->pc != 0x306694u) { return; }
    }
    ctx->pc = 0x306694u;
label_306694:
    // 0x306694: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x306694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_306698:
    // 0x306698: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x306698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_30669c:
    // 0x30669c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30669cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3066a0:
    // 0x3066a0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3066a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_3066a4:
    // 0x3066a4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x3066a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_3066a8:
    // 0x3066a8: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x3066a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_3066ac:
    // 0x3066ac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3066acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3066b0:
    // 0x3066b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3066b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3066b4:
    // 0x3066b4: 0xc041cf6  jal         func_1073D8
label_3066b8:
    if (ctx->pc == 0x3066B8u) {
        ctx->pc = 0x3066B8u;
            // 0x3066b8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3066BCu;
        goto label_3066bc;
    }
    ctx->pc = 0x3066B4u;
    SET_GPR_U32(ctx, 31, 0x3066BCu);
    ctx->pc = 0x3066B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3066B4u;
            // 0x3066b8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3066BCu; }
        if (ctx->pc != 0x3066BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3066BCu; }
        if (ctx->pc != 0x3066BCu) { return; }
    }
    ctx->pc = 0x3066BCu;
label_3066bc:
    // 0x3066bc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3066bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_3066c0:
    // 0x3066c0: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x3066c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_3066c4:
    // 0x3066c4: 0xc041bb0  jal         func_106EC0
label_3066c8:
    if (ctx->pc == 0x3066C8u) {
        ctx->pc = 0x3066C8u;
            // 0x3066c8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3066CCu;
        goto label_3066cc;
    }
    ctx->pc = 0x3066C4u;
    SET_GPR_U32(ctx, 31, 0x3066CCu);
    ctx->pc = 0x3066C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3066C4u;
            // 0x3066c8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3066CCu; }
        if (ctx->pc != 0x3066CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3066CCu; }
        if (ctx->pc != 0x3066CCu) { return; }
    }
    ctx->pc = 0x3066CCu;
label_3066cc:
    // 0x3066cc: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x3066ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3066d0:
    // 0x3066d0: 0x3c0243ac  lui         $v0, 0x43AC
    ctx->pc = 0x3066d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17324 << 16));
label_3066d4:
    // 0x3066d4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3066d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_3066d8:
    // 0x3066d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3066d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3066dc:
    // 0x3066dc: 0x0  nop
    ctx->pc = 0x3066dcu;
    // NOP
label_3066e0:
    // 0x3066e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3066e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3066e4:
    // 0x3066e4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x3066e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_3066e8:
    // 0x3066e8: 0x3c02c170  lui         $v0, 0xC170
    ctx->pc = 0x3066e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49520 << 16));
label_3066ec:
    // 0x3066ec: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x3066ecu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_3066f0:
    // 0x3066f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3066f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3066f4:
    // 0x3066f4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3066f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3066f8:
    // 0x3066f8: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x3066f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_3066fc:
    // 0x3066fc: 0x320f809  jalr        $t9
label_306700:
    if (ctx->pc == 0x306700u) {
        ctx->pc = 0x306700u;
            // 0x306700: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x306704u;
        goto label_306704;
    }
    ctx->pc = 0x3066FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x306704u);
        ctx->pc = 0x306700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3066FCu;
            // 0x306700: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x306704u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x306704u; }
            if (ctx->pc != 0x306704u) { return; }
        }
        }
    }
    ctx->pc = 0x306704u;
label_306704:
    // 0x306704: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x306704u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_306708:
    // 0x306708: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30670c:
    // 0x30670c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x30670cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_306710:
    // 0x306710: 0x320f809  jalr        $t9
label_306714:
    if (ctx->pc == 0x306714u) {
        ctx->pc = 0x306714u;
            // 0x306714: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x306718u;
        goto label_306718;
    }
    ctx->pc = 0x306710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x306718u);
        ctx->pc = 0x306714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306710u;
            // 0x306714: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x306718u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x306718u; }
            if (ctx->pc != 0x306718u) { return; }
        }
        }
    }
    ctx->pc = 0x306718u;
label_306718:
    // 0x306718: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x306718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_30671c:
    // 0x30671c: 0x27a301d0  addiu       $v1, $sp, 0x1D0
    ctx->pc = 0x30671cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_306720:
    // 0x306720: 0x2442da70  addiu       $v0, $v0, -0x2590
    ctx->pc = 0x306720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957680));
label_306724:
    // 0x306724: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x306724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_306728:
    // 0x306728: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x306728u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_30672c:
    // 0x30672c: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x30672cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_306730:
    // 0x306730: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x306730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_306734:
    // 0x306734: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x306734u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_306738:
    // 0x306738: 0x8f87a144  lw          $a3, -0x5EBC($gp)
    ctx->pc = 0x306738u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943044)));
label_30673c:
    // 0x30673c: 0x8f82a158  lw          $v0, -0x5EA8($gp)
    ctx->pc = 0x30673cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943064)));
label_306740:
    // 0x306740: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x306740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_306744:
    // 0x306744: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x306744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_306748:
    // 0x306748: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x306748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_30674c:
    // 0x30674c: 0xc041c3e  jal         func_1070F8
label_306750:
    if (ctx->pc == 0x306750u) {
        ctx->pc = 0x306750u;
            // 0x306750: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x306754u;
        goto label_306754;
    }
    ctx->pc = 0x30674Cu;
    SET_GPR_U32(ctx, 31, 0x306754u);
    ctx->pc = 0x306750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30674Cu;
            // 0x306750: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306754u; }
        if (ctx->pc != 0x306754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306754u; }
        if (ctx->pc != 0x306754u) { return; }
    }
    ctx->pc = 0x306754u;
label_306754:
    // 0x306754: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x306754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_306758:
    // 0x306758: 0xc041be0  jal         func_106F80
label_30675c:
    if (ctx->pc == 0x30675Cu) {
        ctx->pc = 0x30675Cu;
            // 0x30675c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306760u;
        goto label_306760;
    }
    ctx->pc = 0x306758u;
    SET_GPR_U32(ctx, 31, 0x306760u);
    ctx->pc = 0x30675Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306758u;
            // 0x30675c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306760u; }
        if (ctx->pc != 0x306760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306760u; }
        if (ctx->pc != 0x306760u) { return; }
    }
    ctx->pc = 0x306760u;
label_306760:
    // 0x306760: 0xc7a101c0  lwc1        $f1, 0x1C0($sp)
    ctx->pc = 0x306760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_306764:
    // 0x306764: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x306764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_306768:
    // 0x306768: 0xc7a001c8  lwc1        $f0, 0x1C8($sp)
    ctx->pc = 0x306768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30676c:
    // 0x30676c: 0xe7a101d0  swc1        $f1, 0x1D0($sp)
    ctx->pc = 0x30676cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_306770:
    // 0x306770: 0xe7a001d8  swc1        $f0, 0x1D8($sp)
    ctx->pc = 0x306770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_306774:
    // 0x306774: 0x93c30000  lbu         $v1, 0x0($fp)
    ctx->pc = 0x306774u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
label_306778:
    // 0x306778: 0x14620028  bne         $v1, $v0, . + 4 + (0x28 << 2)
label_30677c:
    if (ctx->pc == 0x30677Cu) {
        ctx->pc = 0x30677Cu;
            // 0x30677c: 0x3c024316  lui         $v0, 0x4316 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
        ctx->pc = 0x306780u;
        goto label_306780;
    }
    ctx->pc = 0x306778u;
    {
        const bool branch_taken_0x306778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30677Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306778u;
            // 0x30677c: 0x3c024316  lui         $v0, 0x4316 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306778) {
            ctx->pc = 0x30681Cu;
            goto label_30681c;
        }
    }
    ctx->pc = 0x306780u;
label_306780:
    // 0x306780: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x306780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_306784:
    // 0x306784: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x306784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_306788:
    // 0x306788: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x306788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30678c:
    // 0x30678c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x30678cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_306790:
    // 0x306790: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x306790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_306794:
    // 0x306794: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x306794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_306798:
    // 0x306798: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x306798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_30679c:
    // 0x30679c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x30679cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3067a0:
    // 0x3067a0: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x3067a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3067a4:
    // 0x3067a4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3067a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3067a8:
    // 0x3067a8: 0x3c02bd4c  lui         $v0, 0xBD4C
    ctx->pc = 0x3067a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48460 << 16));
label_3067ac:
    // 0x3067ac: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3067acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3067b0:
    // 0x3067b0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x3067b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_3067b4:
    // 0x3067b4: 0xc07098c  jal         func_1C2630
label_3067b8:
    if (ctx->pc == 0x3067B8u) {
        ctx->pc = 0x3067B8u;
            // 0x3067b8: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x3067BCu;
        goto label_3067bc;
    }
    ctx->pc = 0x3067B4u;
    SET_GPR_U32(ctx, 31, 0x3067BCu);
    ctx->pc = 0x3067B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3067B4u;
            // 0x3067b8: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2630u;
    if (runtime->hasFunction(0x1C2630u)) {
        auto targetFn = runtime->lookupFunction(0x1C2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3067BCu; }
        if (ctx->pc != 0x3067BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SethitEffect__15CHitEffectImageFPfPfffffii_0x1c2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3067BCu; }
        if (ctx->pc != 0x3067BCu) { return; }
    }
    ctx->pc = 0x3067BCu;
label_3067bc:
    // 0x3067bc: 0xc04c3b8  jal         func_130EE0
label_3067c0:
    if (ctx->pc == 0x3067C0u) {
        ctx->pc = 0x3067C4u;
        goto label_3067c4;
    }
    ctx->pc = 0x3067BCu;
    SET_GPR_U32(ctx, 31, 0x3067C4u);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3067C4u; }
        if (ctx->pc != 0x3067C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3067C4u; }
        if (ctx->pc != 0x3067C4u) { return; }
    }
    ctx->pc = 0x3067C4u;
label_3067c4:
    // 0x3067c4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3067c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_3067c8:
    // 0x3067c8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x3067c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_3067cc:
    // 0x3067cc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3067ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3067d0:
    // 0x3067d0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3067d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3067d4:
    // 0x3067d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3067d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3067d8:
    // 0x3067d8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x3067d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_3067dc:
    // 0x3067dc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3067dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3067e0:
    // 0x3067e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3067e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3067e4:
    // 0x3067e4: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x3067e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_3067e8:
    // 0x3067e8: 0x24a523d8  addiu       $a1, $a1, 0x23D8
    ctx->pc = 0x3067e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9176));
label_3067ec:
    // 0x3067ec: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x3067ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_3067f0:
    // 0x3067f0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3067f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3067f4:
    // 0x3067f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3067f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3067f8:
    // 0x3067f8: 0x0  nop
    ctx->pc = 0x3067f8u;
    // NOP
label_3067fc:
    // 0x3067fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3067fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_306800:
    // 0x306800: 0xe6600040  swc1        $f0, 0x40($s3)
    ctx->pc = 0x306800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
label_306804:
    // 0x306804: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x306804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_306808:
    // 0x306808: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x306808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_30680c:
    // 0x30680c: 0x320f809  jalr        $t9
label_306810:
    if (ctx->pc == 0x306810u) {
        ctx->pc = 0x306810u;
            // 0x306810: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306814u;
        goto label_306814;
    }
    ctx->pc = 0x30680Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x306814u);
        ctx->pc = 0x306810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30680Cu;
            // 0x306810: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x306814u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x306814u; }
            if (ctx->pc != 0x306814u) { return; }
        }
        }
    }
    ctx->pc = 0x306814u;
label_306814:
    // 0x306814: 0x1000002e  b           . + 4 + (0x2E << 2)
label_306818:
    if (ctx->pc == 0x306818u) {
        ctx->pc = 0x30681Cu;
        goto label_30681c;
    }
    ctx->pc = 0x306814u;
    {
        const bool branch_taken_0x306814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306814) {
            ctx->pc = 0x3068D0u;
            goto label_3068d0;
        }
    }
    ctx->pc = 0x30681Cu;
label_30681c:
    // 0x30681c: 0x0  nop
    ctx->pc = 0x30681cu;
    // NOP
label_306820:
    // 0x306820: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x306820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_306824:
    // 0x306824: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x306824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_306828:
    // 0x306828: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x306828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_30682c:
    // 0x30682c: 0xc04c018  jal         func_130060
label_306830:
    if (ctx->pc == 0x306830u) {
        ctx->pc = 0x306830u;
            // 0x306830: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x306834u;
        goto label_306834;
    }
    ctx->pc = 0x30682Cu;
    SET_GPR_U32(ctx, 31, 0x306834u);
    ctx->pc = 0x306830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30682Cu;
            // 0x306830: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306834u; }
        if (ctx->pc != 0x306834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306834u; }
        if (ctx->pc != 0x306834u) { return; }
    }
    ctx->pc = 0x306834u;
label_306834:
    // 0x306834: 0xc0a248c  jal         func_289230
label_306838:
    if (ctx->pc == 0x306838u) {
        ctx->pc = 0x306838u;
            // 0x306838: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x30683Cu;
        goto label_30683c;
    }
    ctx->pc = 0x306834u;
    SET_GPR_U32(ctx, 31, 0x30683Cu);
    ctx->pc = 0x306838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306834u;
            // 0x306838: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30683Cu; }
        if (ctx->pc != 0x30683Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30683Cu; }
        if (ctx->pc != 0x30683Cu) { return; }
    }
    ctx->pc = 0x30683Cu;
label_30683c:
    // 0x30683c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x30683cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306840:
    // 0x306840: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x306840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_306844:
    // 0x306844: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x306844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_306848:
    // 0x306848: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x306848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30684c:
    // 0x30684c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x30684cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_306850:
    // 0x306850: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x306850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_306854:
    // 0x306854: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x306854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_306858:
    // 0x306858: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x306858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_30685c:
    // 0x30685c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x30685cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_306860:
    // 0x306860: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x306860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_306864:
    // 0x306864: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x306864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
label_306868:
    // 0x306868: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x306868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_30686c:
    // 0x30686c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x30686cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_306870:
    // 0x306870: 0xc07098c  jal         func_1C2630
label_306874:
    if (ctx->pc == 0x306874u) {
        ctx->pc = 0x306874u;
            // 0x306874: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x306878u;
        goto label_306878;
    }
    ctx->pc = 0x306870u;
    SET_GPR_U32(ctx, 31, 0x306878u);
    ctx->pc = 0x306874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306870u;
            // 0x306874: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2630u;
    if (runtime->hasFunction(0x1C2630u)) {
        auto targetFn = runtime->lookupFunction(0x1C2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306878u; }
        if (ctx->pc != 0x306878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SethitEffect__15CHitEffectImageFPfPfffffii_0x1c2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306878u; }
        if (ctx->pc != 0x306878u) { return; }
    }
    ctx->pc = 0x306878u;
label_306878:
    // 0x306878: 0xc04c3b8  jal         func_130EE0
label_30687c:
    if (ctx->pc == 0x30687Cu) {
        ctx->pc = 0x306880u;
        goto label_306880;
    }
    ctx->pc = 0x306878u;
    SET_GPR_U32(ctx, 31, 0x306880u);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306880u; }
        if (ctx->pc != 0x306880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306880u; }
        if (ctx->pc != 0x306880u) { return; }
    }
    ctx->pc = 0x306880u;
label_306880:
    // 0x306880: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x306880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_306884:
    // 0x306884: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x306884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_306888:
    // 0x306888: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x306888u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_30688c:
    // 0x30688c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x30688cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_306890:
    // 0x306890: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x306890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_306894:
    // 0x306894: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x306894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_306898:
    // 0x306898: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x306898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_30689c:
    // 0x30689c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30689cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3068a0:
    // 0x3068a0: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x3068a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_3068a4:
    // 0x3068a4: 0x24a52370  addiu       $a1, $a1, 0x2370
    ctx->pc = 0x3068a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9072));
label_3068a8:
    // 0x3068a8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x3068a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_3068ac:
    // 0x3068ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3068acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3068b0:
    // 0x3068b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3068b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3068b4:
    // 0x3068b4: 0x0  nop
    ctx->pc = 0x3068b4u;
    // NOP
label_3068b8:
    // 0x3068b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3068b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3068bc:
    // 0x3068bc: 0xe6600040  swc1        $f0, 0x40($s3)
    ctx->pc = 0x3068bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
label_3068c0:
    // 0x3068c0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3068c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3068c4:
    // 0x3068c4: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x3068c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_3068c8:
    // 0x3068c8: 0x320f809  jalr        $t9
label_3068cc:
    if (ctx->pc == 0x3068CCu) {
        ctx->pc = 0x3068CCu;
            // 0x3068cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3068D0u;
        goto label_3068d0;
    }
    ctx->pc = 0x3068C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3068D0u);
        ctx->pc = 0x3068CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3068C8u;
            // 0x3068cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3068D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3068D0u; }
            if (ctx->pc != 0x3068D0u) { return; }
        }
        }
    }
    ctx->pc = 0x3068D0u;
label_3068d0:
    // 0x3068d0: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x3068d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_3068d4:
    // 0x3068d4: 0x27a403c0  addiu       $a0, $sp, 0x3C0
    ctx->pc = 0x3068d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_3068d8:
    // 0x3068d8: 0x240501a9  addiu       $a1, $zero, 0x1A9
    ctx->pc = 0x3068d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 425));
label_3068dc:
    // 0x3068dc: 0x24060055  addiu       $a2, $zero, 0x55
    ctx->pc = 0x3068dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_3068e0:
    // 0x3068e0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3068e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3068e4:
    // 0x3068e4: 0xc04f8e4  jal         func_13E390
label_3068e8:
    if (ctx->pc == 0x3068E8u) {
        ctx->pc = 0x3068E8u;
            // 0x3068e8: 0xae600044  sw          $zero, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 0));
        ctx->pc = 0x3068ECu;
        goto label_3068ec;
    }
    ctx->pc = 0x3068E4u;
    SET_GPR_U32(ctx, 31, 0x3068ECu);
    ctx->pc = 0x3068E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3068E4u;
            // 0x3068e8: 0xae600044  sw          $zero, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3068ECu; }
        if (ctx->pc != 0x3068ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3068ECu; }
        if (ctx->pc != 0x3068ECu) { return; }
    }
    ctx->pc = 0x3068ECu;
label_3068ec:
    // 0x3068ec: 0x27a203c0  addiu       $v0, $sp, 0x3C0
    ctx->pc = 0x3068ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_3068f0:
    // 0x3068f0: 0x27a303d0  addiu       $v1, $sp, 0x3D0
    ctx->pc = 0x3068f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_3068f4:
    // 0x3068f4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3068f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3068f8:
    // 0x3068f8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3068f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_3068fc:
    // 0x3068fc: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x3068fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_306900:
    // 0x306900: 0xae620050  sw          $v0, 0x50($s3)
    ctx->pc = 0x306900u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 2));
label_306904:
    // 0x306904: 0x8fa203d4  lw          $v0, 0x3D4($sp)
    ctx->pc = 0x306904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 980)));
label_306908:
    // 0x306908: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x306908u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_30690c:
    // 0x30690c: 0x8fa203d8  lw          $v0, 0x3D8($sp)
    ctx->pc = 0x30690cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 984)));
label_306910:
    // 0x306910: 0xae620058  sw          $v0, 0x58($s3)
    ctx->pc = 0x306910u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 2));
label_306914:
    // 0x306914: 0x8fa203dc  lw          $v0, 0x3DC($sp)
    ctx->pc = 0x306914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 988)));
label_306918:
    // 0x306918: 0xae62005c  sw          $v0, 0x5C($s3)
    ctx->pc = 0x306918u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 2));
label_30691c:
    // 0x30691c: 0x8f82a144  lw          $v0, -0x5EBC($gp)
    ctx->pc = 0x30691cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943044)));
label_306920:
    // 0x306920: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_306924:
    // 0x306924: 0xaf82a144  sw          $v0, -0x5EBC($gp)
    ctx->pc = 0x306924u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943044), GPR_U32(ctx, 2));
label_306928:
    // 0x306928: 0x8f82a144  lw          $v0, -0x5EBC($gp)
    ctx->pc = 0x306928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943044)));
label_30692c:
    // 0x30692c: 0x28420060  slti        $v0, $v0, 0x60
    ctx->pc = 0x30692cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)96) ? 1 : 0);
label_306930:
    // 0x306930: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_306934:
    if (ctx->pc == 0x306934u) {
        ctx->pc = 0x306938u;
        goto label_306938;
    }
    ctx->pc = 0x306930u;
    {
        const bool branch_taken_0x306930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306930) {
            ctx->pc = 0x30693Cu;
            goto label_30693c;
        }
    }
    ctx->pc = 0x306938u;
label_306938:
    // 0x306938: 0xaf80a144  sw          $zero, -0x5EBC($gp)
    ctx->pc = 0x306938u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943044), GPR_U32(ctx, 0));
label_30693c:
    // 0x30693c: 0x0  nop
    ctx->pc = 0x30693cu;
    // NOP
label_306940:
    // 0x306940: 0x8e052e5c  lw          $a1, 0x2E5C($s0)
    ctx->pc = 0x306940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11868)));
label_306944:
    // 0x306944: 0xc0a0f58  jal         func_283D60
label_306948:
    if (ctx->pc == 0x306948u) {
        ctx->pc = 0x306948u;
            // 0x306948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30694Cu;
        goto label_30694c;
    }
    ctx->pc = 0x306944u;
    SET_GPR_U32(ctx, 31, 0x30694Cu);
    ctx->pc = 0x306948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306944u;
            // 0x306948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30694Cu; }
        if (ctx->pc != 0x30694Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30694Cu; }
        if (ctx->pc != 0x30694Cu) { return; }
    }
    ctx->pc = 0x30694Cu;
label_30694c:
    // 0x30694c: 0xc04c3b8  jal         func_130EE0
label_306950:
    if (ctx->pc == 0x306950u) {
        ctx->pc = 0x306950u;
            // 0x306950: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306954u;
        goto label_306954;
    }
    ctx->pc = 0x30694Cu;
    SET_GPR_U32(ctx, 31, 0x306954u);
    ctx->pc = 0x306950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30694Cu;
            // 0x306950: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306954u; }
        if (ctx->pc != 0x306954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306954u; }
        if (ctx->pc != 0x306954u) { return; }
    }
    ctx->pc = 0x306954u;
label_306954:
    // 0x306954: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x306954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_306958:
    // 0x306958: 0x8e620cf8  lw          $v0, 0xCF8($s3)
    ctx->pc = 0x306958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3320)));
label_30695c:
    // 0x30695c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x30695cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_306960:
    // 0x306960: 0xc7ac0130  lwc1        $f12, 0x130($sp)
    ctx->pc = 0x306960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_306964:
    // 0x306964: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x306964u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_306968:
    // 0x306968: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x306968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_30696c:
    // 0x30696c: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x30696cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_306970:
    // 0x306970: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x306970u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_306974:
    // 0x306974: 0xc7ad0138  lwc1        $f13, 0x138($sp)
    ctx->pc = 0x306974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_306978:
    // 0x306978: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x306978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_30697c:
    // 0x30697c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x30697cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_306980:
    // 0x306980: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x306980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_306984:
    // 0x306984: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x306984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306988:
    // 0x306988: 0xc06127c  jal         func_1849F0
label_30698c:
    if (ctx->pc == 0x30698Cu) {
        ctx->pc = 0x30698Cu;
            // 0x30698c: 0x46010382  mul.s       $f14, $f0, $f1 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x306990u;
        goto label_306990;
    }
    ctx->pc = 0x306988u;
    SET_GPR_U32(ctx, 31, 0x306990u);
    ctx->pc = 0x30698Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306988u;
            // 0x30698c: 0x46010382  mul.s       $f14, $f0, $f1 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306990u; }
        if (ctx->pc != 0x306990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shake__11CWaterFrameFfff_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306990u; }
        if (ctx->pc != 0x306990u) { return; }
    }
    ctx->pc = 0x306990u;
label_306990:
    // 0x306990: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x306990u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_306994:
    // 0x306994: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_306998:
    // 0x306998: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x306998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_30699c:
    // 0x30699c: 0x320f809  jalr        $t9
label_3069a0:
    if (ctx->pc == 0x3069A0u) {
        ctx->pc = 0x3069A0u;
            // 0x3069a0: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x3069A4u;
        goto label_3069a4;
    }
    ctx->pc = 0x30699Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3069A4u);
        ctx->pc = 0x3069A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30699Cu;
            // 0x3069a0: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3069A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3069A4u; }
            if (ctx->pc != 0x3069A4u) { return; }
        }
        }
    }
    ctx->pc = 0x3069A4u;
label_3069a4:
    // 0x3069a4: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x3069a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_3069a8:
    // 0x3069a8: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x3069a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_3069ac:
    // 0x3069ac: 0xc041c3e  jal         func_1070F8
label_3069b0:
    if (ctx->pc == 0x3069B0u) {
        ctx->pc = 0x3069B0u;
            // 0x3069b0: 0x27a601b0  addiu       $a2, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x3069B4u;
        goto label_3069b4;
    }
    ctx->pc = 0x3069ACu;
    SET_GPR_U32(ctx, 31, 0x3069B4u);
    ctx->pc = 0x3069B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3069ACu;
            // 0x3069b0: 0x27a601b0  addiu       $a2, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3069B4u; }
        if (ctx->pc != 0x3069B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3069B4u; }
        if (ctx->pc != 0x3069B4u) { return; }
    }
    ctx->pc = 0x3069B4u;
label_3069b4:
    // 0x3069b4: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x3069b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_3069b8:
    // 0x3069b8: 0xc041be0  jal         func_106F80
label_3069bc:
    if (ctx->pc == 0x3069BCu) {
        ctx->pc = 0x3069BCu;
            // 0x3069bc: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x3069C0u;
        goto label_3069c0;
    }
    ctx->pc = 0x3069B8u;
    SET_GPR_U32(ctx, 31, 0x3069C0u);
    ctx->pc = 0x3069BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3069B8u;
            // 0x3069bc: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3069C0u; }
        if (ctx->pc != 0x3069C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3069C0u; }
        if (ctx->pc != 0x3069C0u) { return; }
    }
    ctx->pc = 0x3069C0u;
label_3069c0:
    // 0x3069c0: 0xc7ad0198  lwc1        $f13, 0x198($sp)
    ctx->pc = 0x3069c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3069c4:
    // 0x3069c4: 0xc047c76  jal         func_11F1D8
label_3069c8:
    if (ctx->pc == 0x3069C8u) {
        ctx->pc = 0x3069C8u;
            // 0x3069c8: 0xc7ac0190  lwc1        $f12, 0x190($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x3069CCu;
        goto label_3069cc;
    }
    ctx->pc = 0x3069C4u;
    SET_GPR_U32(ctx, 31, 0x3069CCu);
    ctx->pc = 0x3069C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3069C4u;
            // 0x3069c8: 0xc7ac0190  lwc1        $f12, 0x190($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3069CCu; }
        if (ctx->pc != 0x3069CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3069CCu; }
        if (ctx->pc != 0x3069CCu) { return; }
    }
    ctx->pc = 0x3069CCu;
label_3069cc:
    // 0x3069cc: 0x27b301a4  addiu       $s3, $sp, 0x1A4
    ctx->pc = 0x3069ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
label_3069d0:
    // 0x3069d0: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x3069d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
label_3069d4:
    // 0x3069d4: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x3069d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3069d8:
    // 0x3069d8: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x3069d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_3069dc:
    // 0x3069dc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3069dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3069e0:
    // 0x3069e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3069e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3069e4:
    // 0x3069e4: 0xc04c2d8  jal         func_130B60
label_3069e8:
    if (ctx->pc == 0x3069E8u) {
        ctx->pc = 0x3069E8u;
            // 0x3069e8: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3069ECu;
        goto label_3069ec;
    }
    ctx->pc = 0x3069E4u;
    SET_GPR_U32(ctx, 31, 0x3069ECu);
    ctx->pc = 0x3069E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3069E4u;
            // 0x3069e8: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130B60u;
    if (runtime->hasFunction(0x130B60u)) {
        auto targetFn = runtime->lookupFunction(0x130B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3069ECu; }
        if (ctx->pc != 0x3069ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleInterpolate__Ffffi_0x130b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3069ECu; }
        if (ctx->pc != 0x3069ECu) { return; }
    }
    ctx->pc = 0x3069ECu;
label_3069ec:
    // 0x3069ec: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x3069ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_3069f0:
    // 0x3069f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3069f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3069f4:
    // 0x3069f4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3069f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3069f8:
    // 0x3069f8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3069f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3069fc:
    // 0x3069fc: 0x320f809  jalr        $t9
label_306a00:
    if (ctx->pc == 0x306A00u) {
        ctx->pc = 0x306A00u;
            // 0x306a00: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x306A04u;
        goto label_306a04;
    }
    ctx->pc = 0x3069FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x306A04u);
        ctx->pc = 0x306A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3069FCu;
            // 0x306a00: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x306A04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x306A04u; }
            if (ctx->pc != 0x306A04u) { return; }
        }
        }
    }
    ctx->pc = 0x306A04u;
label_306a04:
    // 0x306a04: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x306a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_306a08:
    // 0x306a08: 0xc04c018  jal         func_130060
label_306a0c:
    if (ctx->pc == 0x306A0Cu) {
        ctx->pc = 0x306A0Cu;
            // 0x306a0c: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x306A10u;
        goto label_306a10;
    }
    ctx->pc = 0x306A08u;
    SET_GPR_U32(ctx, 31, 0x306A10u);
    ctx->pc = 0x306A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306A08u;
            // 0x306a0c: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306A10u; }
        if (ctx->pc != 0x306A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306A10u; }
        if (ctx->pc != 0x306A10u) { return; }
    }
    ctx->pc = 0x306A10u;
label_306a10:
    // 0x306a10: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x306a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_306a14:
    // 0x306a14: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x306a14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_306a18:
    // 0x306a18: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x306a18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_306a1c:
    // 0x306a1c: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x306a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_306a20:
    // 0x306a20: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x306a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_306a24:
    // 0x306a24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_306a28:
    // 0x306a28: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x306a28u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_306a2c:
    // 0x306a2c: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x306a2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_306a30:
    // 0x306a30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x306a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_306a34:
    // 0x306a34: 0x320f809  jalr        $t9
label_306a38:
    if (ctx->pc == 0x306A38u) {
        ctx->pc = 0x306A38u;
            // 0x306a38: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x306A3Cu;
        goto label_306a3c;
    }
    ctx->pc = 0x306A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x306A3Cu);
        ctx->pc = 0x306A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306A34u;
            // 0x306a38: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x306A3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x306A3Cu; }
            if (ctx->pc != 0x306A3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x306A3Cu;
label_306a3c:
    // 0x306a3c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x306a3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_306a40:
    // 0x306a40: 0x26b5002c  addiu       $s5, $s5, 0x2C
    ctx->pc = 0x306a40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 44));
label_306a44:
    // 0x306a44: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x306a44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_306a48:
    // 0x306a48: 0x1440fda0  bnez        $v0, . + 4 + (-0x260 << 2)
label_306a4c:
    if (ctx->pc == 0x306A4Cu) {
        ctx->pc = 0x306A4Cu;
            // 0x306a4c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x306A50u;
        goto label_306a50;
    }
    ctx->pc = 0x306A48u;
    {
        const bool branch_taken_0x306a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306A48u;
            // 0x306a4c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306a48) {
            ctx->pc = 0x3060CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3060cc;
        }
    }
    ctx->pc = 0x306A50u;
label_306a50:
    // 0x306a50: 0x8f83a11c  lw          $v1, -0x5EE4($gp)
    ctx->pc = 0x306a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943004)));
label_306a54:
    // 0x306a54: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x306a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_306a58:
    // 0x306a58: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_306a5c:
    if (ctx->pc == 0x306A5Cu) {
        ctx->pc = 0x306A60u;
        goto label_306a60;
    }
    ctx->pc = 0x306A58u;
    {
        const bool branch_taken_0x306a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x306a58) {
            ctx->pc = 0x306AA4u;
            goto label_306aa4;
        }
    }
    ctx->pc = 0x306A60u;
label_306a60:
    // 0x306a60: 0x8f82a118  lw          $v0, -0x5EE8($gp)
    ctx->pc = 0x306a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943000)));
label_306a64:
    // 0x306a64: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x306a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_306a68:
    // 0x306a68: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x306a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_306a6c:
    // 0x306a6c: 0xaf82a118  sw          $v0, -0x5EE8($gp)
    ctx->pc = 0x306a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943000), GPR_U32(ctx, 2));
label_306a70:
    // 0x306a70: 0x8f82a118  lw          $v0, -0x5EE8($gp)
    ctx->pc = 0x306a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943000)));
label_306a74:
    // 0x306a74: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
label_306a78:
    if (ctx->pc == 0x306A78u) {
        ctx->pc = 0x306A7Cu;
        goto label_306a7c;
    }
    ctx->pc = 0x306A74u;
    {
        const bool branch_taken_0x306a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x306a74) {
            ctx->pc = 0x306A90u;
            goto label_306a90;
        }
    }
    ctx->pc = 0x306A7Cu;
label_306a7c:
    // 0x306a7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x306a7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_306a80:
    // 0x306a80: 0x26042c70  addiu       $a0, $s0, 0x2C70
    ctx->pc = 0x306a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11376));
label_306a84:
    // 0x306a84: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x306a84u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_306a88:
    // 0x306a88: 0xc05f610  jal         func_17D840
label_306a8c:
    if (ctx->pc == 0x306A8Cu) {
        ctx->pc = 0x306A8Cu;
            // 0x306a8c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x306A90u;
        goto label_306a90;
    }
    ctx->pc = 0x306A88u;
    SET_GPR_U32(ctx, 31, 0x306A90u);
    ctx->pc = 0x306A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306A88u;
            // 0x306a8c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306A90u; }
        if (ctx->pc != 0x306A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306A90u; }
        if (ctx->pc != 0x306A90u) { return; }
    }
    ctx->pc = 0x306A90u;
label_306a90:
    // 0x306a90: 0x8f82a118  lw          $v0, -0x5EE8($gp)
    ctx->pc = 0x306a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943000)));
label_306a94:
    // 0x306a94: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_306a98:
    if (ctx->pc == 0x306A98u) {
        ctx->pc = 0x306A98u;
            // 0x306a98: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x306A9Cu;
        goto label_306a9c;
    }
    ctx->pc = 0x306A94u;
    {
        const bool branch_taken_0x306a94 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x306A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306A94u;
            // 0x306a98: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306a94) {
            ctx->pc = 0x306AA4u;
            goto label_306aa4;
        }
    }
    ctx->pc = 0x306A9Cu;
label_306a9c:
    // 0x306a9c: 0x100001f6  b           . + 4 + (0x1F6 << 2)
label_306aa0:
    if (ctx->pc == 0x306AA0u) {
        ctx->pc = 0x306AA0u;
            // 0x306aa0: 0xaf82a11c  sw          $v0, -0x5EE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943004), GPR_U32(ctx, 2));
        ctx->pc = 0x306AA4u;
        goto label_306aa4;
    }
    ctx->pc = 0x306A9Cu;
    {
        const bool branch_taken_0x306a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306A9Cu;
            // 0x306aa0: 0xaf82a11c  sw          $v0, -0x5EE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943004), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306a9c) {
            ctx->pc = 0x307278u;
            goto label_307278;
        }
    }
    ctx->pc = 0x306AA4u;
label_306aa4:
    // 0x306aa4: 0x8f83a11c  lw          $v1, -0x5EE4($gp)
    ctx->pc = 0x306aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943004)));
label_306aa8:
    // 0x306aa8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x306aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_306aac:
    // 0x306aac: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_306ab0:
    if (ctx->pc == 0x306AB0u) {
        ctx->pc = 0x306AB4u;
        goto label_306ab4;
    }
    ctx->pc = 0x306AACu;
    {
        const bool branch_taken_0x306aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x306aac) {
            ctx->pc = 0x306AC8u;
            goto label_306ac8;
        }
    }
    ctx->pc = 0x306AB4u;
label_306ab4:
    // 0x306ab4: 0x16c00004  bnez        $s6, . + 4 + (0x4 << 2)
label_306ab8:
    if (ctx->pc == 0x306AB8u) {
        ctx->pc = 0x306AB8u;
            // 0x306ab8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x306ABCu;
        goto label_306abc;
    }
    ctx->pc = 0x306AB4u;
    {
        const bool branch_taken_0x306ab4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x306AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306AB4u;
            // 0x306ab8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306ab4) {
            ctx->pc = 0x306AC8u;
            goto label_306ac8;
        }
    }
    ctx->pc = 0x306ABCu;
label_306abc:
    // 0x306abc: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x306abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_306ac0:
    // 0x306ac0: 0xaf83a11c  sw          $v1, -0x5EE4($gp)
    ctx->pc = 0x306ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943004), GPR_U32(ctx, 3));
label_306ac4:
    // 0x306ac4: 0xaf82a118  sw          $v0, -0x5EE8($gp)
    ctx->pc = 0x306ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943000), GPR_U32(ctx, 2));
label_306ac8:
    // 0x306ac8: 0xc0c1d38  jal         func_3074E0
label_306acc:
    if (ctx->pc == 0x306ACCu) {
        ctx->pc = 0x306ACCu;
            // 0x306acc: 0x8fa400bc  lw          $a0, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->pc = 0x306AD0u;
        goto label_306ad0;
    }
    ctx->pc = 0x306AC8u;
    SET_GPR_U32(ctx, 31, 0x306AD0u);
    ctx->pc = 0x306ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306AC8u;
            // 0x306acc: 0x8fa400bc  lw          $a0, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3074E0u;
    if (runtime->hasFunction(0x3074E0u)) {
        auto targetFn = runtime->lookupFunction(0x3074E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306AD0u; }
        if (ctx->pc != 0x306AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AutoCam__FP11SubGameInfo_0x3074e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306AD0u; }
        if (ctx->pc != 0x306AD0u) { return; }
    }
    ctx->pc = 0x306AD0u;
label_306ad0:
    // 0x306ad0: 0x100001e9  b           . + 4 + (0x1E9 << 2)
label_306ad4:
    if (ctx->pc == 0x306AD4u) {
        ctx->pc = 0x306AD8u;
        goto label_306ad8;
    }
    ctx->pc = 0x306AD0u;
    {
        const bool branch_taken_0x306ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306ad0) {
            ctx->pc = 0x307278u;
            goto label_307278;
        }
    }
    ctx->pc = 0x306AD8u;
label_306ad8:
    // 0x306ad8: 0x3c024387  lui         $v0, 0x4387
    ctx->pc = 0x306ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17287 << 16));
label_306adc:
    // 0x306adc: 0x8f83a160  lw          $v1, -0x5EA0($gp)
    ctx->pc = 0x306adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943072)));
label_306ae0:
    // 0x306ae0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x306ae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_306ae4:
    // 0x306ae4: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x306ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_306ae8:
    // 0x306ae8: 0x2484a280  addiu       $a0, $a0, -0x5D80
    ctx->pc = 0x306ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
label_306aec:
    // 0x306aec: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x306aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
label_306af0:
    // 0x306af0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x306af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_306af4:
    // 0x306af4: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x306af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
label_306af8:
    // 0x306af8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x306af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_306afc:
    // 0x306afc: 0xc04c4f8  jal         func_1313E0
label_306b00:
    if (ctx->pc == 0x306B00u) {
        ctx->pc = 0x306B00u;
            // 0x306b00: 0xae032e54  sw          $v1, 0x2E54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11860), GPR_U32(ctx, 3));
        ctx->pc = 0x306B04u;
        goto label_306b04;
    }
    ctx->pc = 0x306AFCu;
    SET_GPR_U32(ctx, 31, 0x306B04u);
    ctx->pc = 0x306B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306AFCu;
            // 0x306b00: 0xae032e54  sw          $v1, 0x2E54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11860), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1313E0u;
    if (runtime->hasFunction(0x1313E0u)) {
        auto targetFn = runtime->lookupFunction(0x1313E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B04u; }
        if (ctx->pc != 0x306B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFfff_0x1313e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B04u; }
        if (ctx->pc != 0x306B04u) { return; }
    }
    ctx->pc = 0x306B04u;
label_306b04:
    // 0x306b04: 0x3c024387  lui         $v0, 0x4387
    ctx->pc = 0x306b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17287 << 16));
label_306b08:
    // 0x306b08: 0x3c03c220  lui         $v1, 0xC220
    ctx->pc = 0x306b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49696 << 16));
label_306b0c:
    // 0x306b0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x306b0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_306b10:
    // 0x306b10: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x306b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_306b14:
    // 0x306b14: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x306b14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_306b18:
    // 0x306b18: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x306b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
label_306b1c:
    // 0x306b1c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x306b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_306b20:
    // 0x306b20: 0xc04c508  jal         func_131420
label_306b24:
    if (ctx->pc == 0x306B24u) {
        ctx->pc = 0x306B24u;
            // 0x306b24: 0x2484a280  addiu       $a0, $a0, -0x5D80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
        ctx->pc = 0x306B28u;
        goto label_306b28;
    }
    ctx->pc = 0x306B20u;
    SET_GPR_U32(ctx, 31, 0x306B28u);
    ctx->pc = 0x306B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306B20u;
            // 0x306b24: 0x2484a280  addiu       $a0, $a0, -0x5D80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131420u;
    if (runtime->hasFunction(0x131420u)) {
        auto targetFn = runtime->lookupFunction(0x131420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B28u; }
        if (ctx->pc != 0x306B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextPos__9mgCCameraFfff_0x131420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B28u; }
        if (ctx->pc != 0x306B28u) { return; }
    }
    ctx->pc = 0x306B28u;
label_306b28:
    // 0x306b28: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x306b28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_306b2c:
    // 0x306b2c: 0x3c024340  lui         $v0, 0x4340
    ctx->pc = 0x306b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17216 << 16));
label_306b30:
    // 0x306b30: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x306b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_306b34:
    // 0x306b34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x306b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_306b38:
    // 0x306b38: 0x2484a280  addiu       $a0, $a0, -0x5D80
    ctx->pc = 0x306b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
label_306b3c:
    // 0x306b3c: 0xc04c510  jal         func_131440
label_306b40:
    if (ctx->pc == 0x306B40u) {
        ctx->pc = 0x306B40u;
            // 0x306b40: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x306B44u;
        goto label_306b44;
    }
    ctx->pc = 0x306B3Cu;
    SET_GPR_U32(ctx, 31, 0x306B44u);
    ctx->pc = 0x306B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306B3Cu;
            // 0x306b40: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131440u;
    if (runtime->hasFunction(0x131440u)) {
        auto targetFn = runtime->lookupFunction(0x131440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B44u; }
        if (ctx->pc != 0x306B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFfff_0x131440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B44u; }
        if (ctx->pc != 0x306B44u) { return; }
    }
    ctx->pc = 0x306B44u;
label_306b44:
    // 0x306b44: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x306b44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_306b48:
    // 0x306b48: 0x3c024340  lui         $v0, 0x4340
    ctx->pc = 0x306b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17216 << 16));
label_306b4c:
    // 0x306b4c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x306b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_306b50:
    // 0x306b50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x306b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_306b54:
    // 0x306b54: 0x2484a280  addiu       $a0, $a0, -0x5D80
    ctx->pc = 0x306b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
label_306b58:
    // 0x306b58: 0xc04c51c  jal         func_131470
label_306b5c:
    if (ctx->pc == 0x306B5Cu) {
        ctx->pc = 0x306B5Cu;
            // 0x306b5c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x306B60u;
        goto label_306b60;
    }
    ctx->pc = 0x306B58u;
    SET_GPR_U32(ctx, 31, 0x306B60u);
    ctx->pc = 0x306B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306B58u;
            // 0x306b5c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131470u;
    if (runtime->hasFunction(0x131470u)) {
        auto targetFn = runtime->lookupFunction(0x131470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B60u; }
        if (ctx->pc != 0x306B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextRef__9mgCCameraFfff_0x131470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B60u; }
        if (ctx->pc != 0x306B60u) { return; }
    }
    ctx->pc = 0x306B60u;
label_306b60:
    // 0x306b60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x306b60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_306b64:
    // 0x306b64: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x306b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_306b68:
    // 0x306b68: 0x2484a280  addiu       $a0, $a0, -0x5D80
    ctx->pc = 0x306b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
label_306b6c:
    // 0x306b6c: 0xc04c564  jal         func_131590
label_306b70:
    if (ctx->pc == 0x306B70u) {
        ctx->pc = 0x306B70u;
            // 0x306b70: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x306B74u;
        goto label_306b74;
    }
    ctx->pc = 0x306B6Cu;
    SET_GPR_U32(ctx, 31, 0x306B74u);
    ctx->pc = 0x306B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306B6Cu;
            // 0x306b70: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131590u;
    if (runtime->hasFunction(0x131590u)) {
        auto targetFn = runtime->lookupFunction(0x131590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B74u; }
        if (ctx->pc != 0x306B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpeed__9mgCCameraFff_0x131590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B74u; }
        if (ctx->pc != 0x306B74u) { return; }
    }
    ctx->pc = 0x306B74u;
label_306b74:
    // 0x306b74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x306b74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306b78:
    // 0x306b78: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x306b78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306b7c:
    // 0x306b7c: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x306b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_306b80:
    // 0x306b80: 0x2442a2f0  addiu       $v0, $v0, -0x5D10
    ctx->pc = 0x306b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943472));
label_306b84:
    // 0x306b84: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x306b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_306b88:
    // 0x306b88: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x306b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_306b8c:
    // 0x306b8c: 0xc0a0ed8  jal         func_283B60
label_306b90:
    if (ctx->pc == 0x306B90u) {
        ctx->pc = 0x306B90u;
            // 0x306b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306B94u;
        goto label_306b94;
    }
    ctx->pc = 0x306B8Cu;
    SET_GPR_U32(ctx, 31, 0x306B94u);
    ctx->pc = 0x306B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306B8Cu;
            // 0x306b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B94u; }
        if (ctx->pc != 0x306B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306B94u; }
        if (ctx->pc != 0x306B94u) { return; }
    }
    ctx->pc = 0x306B94u;
label_306b94:
    // 0x306b94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x306b94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306b98:
    // 0x306b98: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x306b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_306b9c:
    // 0x306b9c: 0x8c22a1b0  lw          $v0, -0x5E50($at)
    ctx->pc = 0x306b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943152)));
label_306ba0:
    // 0x306ba0: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x306ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_306ba4:
    // 0x306ba4: 0x24849f40  addiu       $a0, $a0, -0x60C0
    ctx->pc = 0x306ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942528));
label_306ba8:
    // 0x306ba8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x306ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_306bac:
    // 0x306bac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x306bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_306bb0:
    // 0x306bb0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x306bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_306bb4:
    // 0x306bb4: 0xc44c01c4  lwc1        $f12, 0x1C4($v0)
    ctx->pc = 0x306bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_306bb8:
    // 0x306bb8: 0xc0c768c  jal         func_31DA30
label_306bbc:
    if (ctx->pc == 0x306BBCu) {
        ctx->pc = 0x306BBCu;
            // 0x306bbc: 0x27a601e0  addiu       $a2, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x306BC0u;
        goto label_306bc0;
    }
    ctx->pc = 0x306BB8u;
    SET_GPR_U32(ctx, 31, 0x306BC0u);
    ctx->pc = 0x306BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306BB8u;
            // 0x306bbc: 0x27a601e0  addiu       $a2, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31DA30u;
    if (runtime->hasFunction(0x31DA30u)) {
        auto targetFn = runtime->lookupFunction(0x31DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306BC0u; }
        if (ctx->pc != 0x306BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        grGetFishProgress__FP11grRACE_INFOifP15grRACE_PROGRESS_0x31da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306BC0u; }
        if (ctx->pc != 0x306BC0u) { return; }
    }
    ctx->pc = 0x306BC0u;
label_306bc0:
    // 0x306bc0: 0xc7b401e0  lwc1        $f20, 0x1E0($sp)
    ctx->pc = 0x306bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_306bc4:
    // 0x306bc4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x306bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_306bc8:
    // 0x306bc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306bc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306bcc:
    // 0x306bcc: 0x0  nop
    ctx->pc = 0x306bccu;
    // NOP
label_306bd0:
    // 0x306bd0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x306bd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_306bd4:
    // 0x306bd4: 0x0  nop
    ctx->pc = 0x306bd4u;
    // NOP
label_306bd8:
    // 0x306bd8: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_306bdc:
    if (ctx->pc == 0x306BDCu) {
        ctx->pc = 0x306BDCu;
            // 0x306bdc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x306BE0u;
        goto label_306be0;
    }
    ctx->pc = 0x306BD8u;
    {
        const bool branch_taken_0x306bd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x306BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306BD8u;
            // 0x306bdc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x306bd8) {
            ctx->pc = 0x306C2Cu;
            goto label_306c2c;
        }
    }
    ctx->pc = 0x306BE0u;
label_306be0:
    // 0x306be0: 0xc0a24b0  jal         func_2892C0
label_306be4:
    if (ctx->pc == 0x306BE4u) {
        ctx->pc = 0x306BE8u;
        goto label_306be8;
    }
    ctx->pc = 0x306BE0u;
    SET_GPR_U32(ctx, 31, 0x306BE8u);
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306BE8u; }
        if (ctx->pc != 0x306BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306BE8u; }
        if (ctx->pc != 0x306BE8u) { return; }
    }
    ctx->pc = 0x306BE8u;
label_306be8:
    // 0x306be8: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x306be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_306bec:
    // 0x306bec: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_306bf0:
    if (ctx->pc == 0x306BF0u) {
        ctx->pc = 0x306BF0u;
            // 0x306bf0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x306BF4u;
        goto label_306bf4;
    }
    ctx->pc = 0x306BECu;
    {
        const bool branch_taken_0x306bec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x306BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306BECu;
            // 0x306bf0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306bec) {
            ctx->pc = 0x306C00u;
            goto label_306c00;
        }
    }
    ctx->pc = 0x306BF4u;
label_306bf4:
    // 0x306bf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306bf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306bf8:
    // 0x306bf8: 0x10000007  b           . + 4 + (0x7 << 2)
label_306bfc:
    if (ctx->pc == 0x306BFCu) {
        ctx->pc = 0x306BFCu;
            // 0x306bfc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x306C00u;
        goto label_306c00;
    }
    ctx->pc = 0x306BF8u;
    {
        const bool branch_taken_0x306bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306BF8u;
            // 0x306bfc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x306bf8) {
            ctx->pc = 0x306C18u;
            goto label_306c18;
        }
    }
    ctx->pc = 0x306C00u;
label_306c00:
    // 0x306c00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x306c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_306c04:
    // 0x306c04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x306c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_306c08:
    // 0x306c08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x306c08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306c0c:
    // 0x306c0c: 0x0  nop
    ctx->pc = 0x306c0cu;
    // NOP
label_306c10:
    // 0x306c10: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x306c10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_306c14:
    // 0x306c14: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x306c14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_306c18:
    // 0x306c18: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x306c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_306c1c:
    // 0x306c1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306c1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306c20:
    // 0x306c20: 0x0  nop
    ctx->pc = 0x306c20u;
    // NOP
label_306c24:
    // 0x306c24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x306c24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_306c28:
    // 0x306c28: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x306c28u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_306c2c:
    // 0x306c2c: 0x0  nop
    ctx->pc = 0x306c2cu;
    // NOP
label_306c30:
    // 0x306c30: 0x27b50204  addiu       $s5, $sp, 0x204
    ctx->pc = 0x306c30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
label_306c34:
    // 0x306c34: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x306c34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_306c38:
    // 0x306c38: 0xc0a24f0  jal         func_2893C0
label_306c3c:
    if (ctx->pc == 0x306C3Cu) {
        ctx->pc = 0x306C3Cu;
            // 0x306c3c: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x306C40u;
        goto label_306c40;
    }
    ctx->pc = 0x306C38u;
    SET_GPR_U32(ctx, 31, 0x306C40u);
    ctx->pc = 0x306C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306C38u;
            // 0x306c3c: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306C40u; }
        if (ctx->pc != 0x306C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306C40u; }
        if (ctx->pc != 0x306C40u) { return; }
    }
    ctx->pc = 0x306C40u;
label_306c40:
    // 0x306c40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x306c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306c44:
    // 0x306c44: 0xc040058  jal         func_100160
label_306c48:
    if (ctx->pc == 0x306C48u) {
        ctx->pc = 0x306C48u;
            // 0x306c48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306C4Cu;
        goto label_306c4c;
    }
    ctx->pc = 0x306C44u;
    SET_GPR_U32(ctx, 31, 0x306C4Cu);
    ctx->pc = 0x306C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306C44u;
            // 0x306c48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100160u;
    if (runtime->hasFunction(0x100160u)) {
        auto targetFn = runtime->lookupFunction(0x100160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306C4Cu; }
        if (ctx->pc != 0x306C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x100160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306C4Cu; }
        if (ctx->pc != 0x306C4Cu) { return; }
    }
    ctx->pc = 0x306C4Cu;
label_306c4c:
    // 0x306c4c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_306c50:
    if (ctx->pc == 0x306C50u) {
        ctx->pc = 0x306C50u;
            // 0x306c50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x306C54u;
        goto label_306c54;
    }
    ctx->pc = 0x306C4Cu;
    {
        const bool branch_taken_0x306c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306C4Cu;
            // 0x306c50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x306c4c) {
            ctx->pc = 0x306CA4u;
            goto label_306ca4;
        }
    }
    ctx->pc = 0x306C54u;
label_306c54:
    // 0x306c54: 0xc0a24f0  jal         func_2893C0
label_306c58:
    if (ctx->pc == 0x306C58u) {
        ctx->pc = 0x306C5Cu;
        goto label_306c5c;
    }
    ctx->pc = 0x306C54u;
    SET_GPR_U32(ctx, 31, 0x306C5Cu);
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306C5Cu; }
        if (ctx->pc != 0x306C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306C5Cu; }
        if (ctx->pc != 0x306C5Cu) { return; }
    }
    ctx->pc = 0x306C5Cu;
label_306c5c:
    // 0x306c5c: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x306c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
label_306c60:
    // 0x306c60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x306c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306c64:
    // 0x306c64: 0xc04003c  jal         func_1000F0
label_306c68:
    if (ctx->pc == 0x306C68u) {
        ctx->pc = 0x306C68u;
            // 0x306c68: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x306C6Cu;
        goto label_306c6c;
    }
    ctx->pc = 0x306C64u;
    SET_GPR_U32(ctx, 31, 0x306C6Cu);
    ctx->pc = 0x306C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306C64u;
            // 0x306c68: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1000F0u;
    if (runtime->hasFunction(0x1000F0u)) {
        auto targetFn = runtime->lookupFunction(0x1000F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306C6Cu; }
        if (ctx->pc != 0x306C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpflt_0x1000f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306C6Cu; }
        if (ctx->pc != 0x306C6Cu) { return; }
    }
    ctx->pc = 0x306C6Cu;
label_306c6c:
    // 0x306c6c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_306c70:
    if (ctx->pc == 0x306C70u) {
        ctx->pc = 0x306C70u;
            // 0x306c70: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->pc = 0x306C74u;
        goto label_306c74;
    }
    ctx->pc = 0x306C6Cu;
    {
        const bool branch_taken_0x306c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306C6Cu;
            // 0x306c70: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306c6c) {
            ctx->pc = 0x306CA4u;
            goto label_306ca4;
        }
    }
    ctx->pc = 0x306C74u;
label_306c74:
    // 0x306c74: 0x3c03433e  lui         $v1, 0x433E
    ctx->pc = 0x306c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17214 << 16));
label_306c78:
    // 0x306c78: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x306c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_306c7c:
    // 0x306c7c: 0xc7a101e8  lwc1        $f1, 0x1E8($sp)
    ctx->pc = 0x306c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_306c80:
    // 0x306c80: 0x3c02c3ac  lui         $v0, 0xC3AC
    ctx->pc = 0x306c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50092 << 16));
label_306c84:
    // 0x306c84: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x306c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_306c88:
    // 0x306c88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306c88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306c8c:
    // 0x306c8c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x306c8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_306c90:
    // 0x306c90: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x306c90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_306c94:
    // 0x306c94: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x306c94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_306c98:
    // 0x306c98: 0xe7a00208  swc1        $f0, 0x208($sp)
    ctx->pc = 0x306c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_306c9c:
    // 0x306c9c: 0x46011800  add.s       $f0, $f3, $f1
    ctx->pc = 0x306c9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_306ca0:
    // 0x306ca0: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x306ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_306ca4:
    // 0x306ca4: 0x0  nop
    ctx->pc = 0x306ca4u;
    // NOP
label_306ca8:
    // 0x306ca8: 0xc0a24f0  jal         func_2893C0
label_306cac:
    if (ctx->pc == 0x306CACu) {
        ctx->pc = 0x306CACu;
            // 0x306cac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x306CB0u;
        goto label_306cb0;
    }
    ctx->pc = 0x306CA8u;
    SET_GPR_U32(ctx, 31, 0x306CB0u);
    ctx->pc = 0x306CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306CA8u;
            // 0x306cac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306CB0u; }
        if (ctx->pc != 0x306CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306CB0u; }
        if (ctx->pc != 0x306CB0u) { return; }
    }
    ctx->pc = 0x306CB0u;
label_306cb0:
    // 0x306cb0: 0x3c034008  lui         $v1, 0x4008
    ctx->pc = 0x306cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16392 << 16));
label_306cb4:
    // 0x306cb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x306cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306cb8:
    // 0x306cb8: 0xc040058  jal         func_100160
label_306cbc:
    if (ctx->pc == 0x306CBCu) {
        ctx->pc = 0x306CBCu;
            // 0x306cbc: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x306CC0u;
        goto label_306cc0;
    }
    ctx->pc = 0x306CB8u;
    SET_GPR_U32(ctx, 31, 0x306CC0u);
    ctx->pc = 0x306CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306CB8u;
            // 0x306cbc: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100160u;
    if (runtime->hasFunction(0x100160u)) {
        auto targetFn = runtime->lookupFunction(0x100160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306CC0u; }
        if (ctx->pc != 0x306CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x100160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306CC0u; }
        if (ctx->pc != 0x306CC0u) { return; }
    }
    ctx->pc = 0x306CC0u;
label_306cc0:
    // 0x306cc0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_306cc4:
    if (ctx->pc == 0x306CC4u) {
        ctx->pc = 0x306CC4u;
            // 0x306cc4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x306CC8u;
        goto label_306cc8;
    }
    ctx->pc = 0x306CC0u;
    {
        const bool branch_taken_0x306cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306CC0u;
            // 0x306cc4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x306cc0) {
            ctx->pc = 0x306D30u;
            goto label_306d30;
        }
    }
    ctx->pc = 0x306CC8u;
label_306cc8:
    // 0x306cc8: 0xc0a24f0  jal         func_2893C0
label_306ccc:
    if (ctx->pc == 0x306CCCu) {
        ctx->pc = 0x306CD0u;
        goto label_306cd0;
    }
    ctx->pc = 0x306CC8u;
    SET_GPR_U32(ctx, 31, 0x306CD0u);
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306CD0u; }
        if (ctx->pc != 0x306CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306CD0u; }
        if (ctx->pc != 0x306CD0u) { return; }
    }
    ctx->pc = 0x306CD0u;
label_306cd0:
    // 0x306cd0: 0x3c034010  lui         $v1, 0x4010
    ctx->pc = 0x306cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16400 << 16));
label_306cd4:
    // 0x306cd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x306cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306cd8:
    // 0x306cd8: 0xc04003c  jal         func_1000F0
label_306cdc:
    if (ctx->pc == 0x306CDCu) {
        ctx->pc = 0x306CDCu;
            // 0x306cdc: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x306CE0u;
        goto label_306ce0;
    }
    ctx->pc = 0x306CD8u;
    SET_GPR_U32(ctx, 31, 0x306CE0u);
    ctx->pc = 0x306CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306CD8u;
            // 0x306cdc: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1000F0u;
    if (runtime->hasFunction(0x1000F0u)) {
        auto targetFn = runtime->lookupFunction(0x1000F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306CE0u; }
        if (ctx->pc != 0x306CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpflt_0x1000f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306CE0u; }
        if (ctx->pc != 0x306CE0u) { return; }
    }
    ctx->pc = 0x306CE0u;
label_306ce0:
    // 0x306ce0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_306ce4:
    if (ctx->pc == 0x306CE4u) {
        ctx->pc = 0x306CE4u;
            // 0x306ce4: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->pc = 0x306CE8u;
        goto label_306ce8;
    }
    ctx->pc = 0x306CE0u;
    {
        const bool branch_taken_0x306ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306CE0u;
            // 0x306ce4: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306ce0) {
            ctx->pc = 0x306D30u;
            goto label_306d30;
        }
    }
    ctx->pc = 0x306CE8u;
label_306ce8:
    // 0x306ce8: 0x3c03c33e  lui         $v1, 0xC33E
    ctx->pc = 0x306ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49982 << 16));
label_306cec:
    // 0x306cec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x306cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_306cf0:
    // 0x306cf0: 0xc7a201e8  lwc1        $f2, 0x1E8($sp)
    ctx->pc = 0x306cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_306cf4:
    // 0x306cf4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x306cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_306cf8:
    // 0x306cf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x306cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_306cfc:
    // 0x306cfc: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x306cfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_306d00:
    // 0x306d00: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x306d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_306d04:
    // 0x306d04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306d04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306d08:
    // 0x306d08: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x306d08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_306d0c:
    // 0x306d0c: 0x3c02c3ac  lui         $v0, 0xC3AC
    ctx->pc = 0x306d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50092 << 16));
label_306d10:
    // 0x306d10: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x306d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_306d14:
    // 0x306d14: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x306d14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_306d18:
    // 0x306d18: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x306d18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_306d1c:
    // 0x306d1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306d20:
    // 0x306d20: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x306d20u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_306d24:
    // 0x306d24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x306d24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_306d28:
    // 0x306d28: 0xe7a20200  swc1        $f2, 0x200($sp)
    ctx->pc = 0x306d28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_306d2c:
    // 0x306d2c: 0xe7a00208  swc1        $f0, 0x208($sp)
    ctx->pc = 0x306d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_306d30:
    // 0x306d30: 0xc0a24f0  jal         func_2893C0
label_306d34:
    if (ctx->pc == 0x306D34u) {
        ctx->pc = 0x306D34u;
            // 0x306d34: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x306D38u;
        goto label_306d38;
    }
    ctx->pc = 0x306D30u;
    SET_GPR_U32(ctx, 31, 0x306D38u);
    ctx->pc = 0x306D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306D30u;
            // 0x306d34: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306D38u; }
        if (ctx->pc != 0x306D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306D38u; }
        if (ctx->pc != 0x306D38u) { return; }
    }
    ctx->pc = 0x306D38u;
label_306d38:
    // 0x306d38: 0x3c034010  lui         $v1, 0x4010
    ctx->pc = 0x306d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16400 << 16));
label_306d3c:
    // 0x306d3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x306d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306d40:
    // 0x306d40: 0xc040058  jal         func_100160
label_306d44:
    if (ctx->pc == 0x306D44u) {
        ctx->pc = 0x306D44u;
            // 0x306d44: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x306D48u;
        goto label_306d48;
    }
    ctx->pc = 0x306D40u;
    SET_GPR_U32(ctx, 31, 0x306D48u);
    ctx->pc = 0x306D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306D40u;
            // 0x306d44: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100160u;
    if (runtime->hasFunction(0x100160u)) {
        auto targetFn = runtime->lookupFunction(0x100160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306D48u; }
        if (ctx->pc != 0x306D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x100160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306D48u; }
        if (ctx->pc != 0x306D48u) { return; }
    }
    ctx->pc = 0x306D48u;
label_306d48:
    // 0x306d48: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_306d4c:
    if (ctx->pc == 0x306D4Cu) {
        ctx->pc = 0x306D4Cu;
            // 0x306d4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x306D50u;
        goto label_306d50;
    }
    ctx->pc = 0x306D48u;
    {
        const bool branch_taken_0x306d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306D48u;
            // 0x306d4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x306d48) {
            ctx->pc = 0x306DACu;
            goto label_306dac;
        }
    }
    ctx->pc = 0x306D50u;
label_306d50:
    // 0x306d50: 0xc0a24f0  jal         func_2893C0
label_306d54:
    if (ctx->pc == 0x306D54u) {
        ctx->pc = 0x306D58u;
        goto label_306d58;
    }
    ctx->pc = 0x306D50u;
    SET_GPR_U32(ctx, 31, 0x306D58u);
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306D58u; }
        if (ctx->pc != 0x306D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306D58u; }
        if (ctx->pc != 0x306D58u) { return; }
    }
    ctx->pc = 0x306D58u;
label_306d58:
    // 0x306d58: 0x3c034014  lui         $v1, 0x4014
    ctx->pc = 0x306d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16404 << 16));
label_306d5c:
    // 0x306d5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x306d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306d60:
    // 0x306d60: 0xc04003c  jal         func_1000F0
label_306d64:
    if (ctx->pc == 0x306D64u) {
        ctx->pc = 0x306D64u;
            // 0x306d64: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x306D68u;
        goto label_306d68;
    }
    ctx->pc = 0x306D60u;
    SET_GPR_U32(ctx, 31, 0x306D68u);
    ctx->pc = 0x306D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306D60u;
            // 0x306d64: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1000F0u;
    if (runtime->hasFunction(0x1000F0u)) {
        auto targetFn = runtime->lookupFunction(0x1000F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306D68u; }
        if (ctx->pc != 0x306D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpflt_0x1000f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306D68u; }
        if (ctx->pc != 0x306D68u) { return; }
    }
    ctx->pc = 0x306D68u;
label_306d68:
    // 0x306d68: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_306d6c:
    if (ctx->pc == 0x306D6Cu) {
        ctx->pc = 0x306D6Cu;
            // 0x306d6c: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->pc = 0x306D70u;
        goto label_306d70;
    }
    ctx->pc = 0x306D68u;
    {
        const bool branch_taken_0x306d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306D68u;
            // 0x306d6c: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306d68) {
            ctx->pc = 0x306DACu;
            goto label_306dac;
        }
    }
    ctx->pc = 0x306D70u;
label_306d70:
    // 0x306d70: 0x3c03c33e  lui         $v1, 0xC33E
    ctx->pc = 0x306d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49982 << 16));
label_306d74:
    // 0x306d74: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x306d74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_306d78:
    // 0x306d78: 0xc7a201e8  lwc1        $f2, 0x1E8($sp)
    ctx->pc = 0x306d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_306d7c:
    // 0x306d7c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x306d7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_306d80:
    // 0x306d80: 0x3c0243ac  lui         $v0, 0x43AC
    ctx->pc = 0x306d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17324 << 16));
label_306d84:
    // 0x306d84: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x306d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_306d88:
    // 0x306d88: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x306d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_306d8c:
    // 0x306d8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306d90:
    // 0x306d90: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x306d90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_306d94:
    // 0x306d94: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x306d94u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_306d98:
    // 0x306d98: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x306d98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_306d9c:
    // 0x306d9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x306d9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_306da0:
    // 0x306da0: 0xe7a20200  swc1        $f2, 0x200($sp)
    ctx->pc = 0x306da0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_306da4:
    // 0x306da4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x306da4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_306da8:
    // 0x306da8: 0xe7a00208  swc1        $f0, 0x208($sp)
    ctx->pc = 0x306da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_306dac:
    // 0x306dac: 0x0  nop
    ctx->pc = 0x306dacu;
    // NOP
label_306db0:
    // 0x306db0: 0xc0a24f0  jal         func_2893C0
label_306db4:
    if (ctx->pc == 0x306DB4u) {
        ctx->pc = 0x306DB4u;
            // 0x306db4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x306DB8u;
        goto label_306db8;
    }
    ctx->pc = 0x306DB0u;
    SET_GPR_U32(ctx, 31, 0x306DB8u);
    ctx->pc = 0x306DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306DB0u;
            // 0x306db4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306DB8u; }
        if (ctx->pc != 0x306DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306DB8u; }
        if (ctx->pc != 0x306DB8u) { return; }
    }
    ctx->pc = 0x306DB8u;
label_306db8:
    // 0x306db8: 0x3c03401c  lui         $v1, 0x401C
    ctx->pc = 0x306db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16412 << 16));
label_306dbc:
    // 0x306dbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x306dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306dc0:
    // 0x306dc0: 0xc040058  jal         func_100160
label_306dc4:
    if (ctx->pc == 0x306DC4u) {
        ctx->pc = 0x306DC4u;
            // 0x306dc4: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x306DC8u;
        goto label_306dc8;
    }
    ctx->pc = 0x306DC0u;
    SET_GPR_U32(ctx, 31, 0x306DC8u);
    ctx->pc = 0x306DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306DC0u;
            // 0x306dc4: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100160u;
    if (runtime->hasFunction(0x100160u)) {
        auto targetFn = runtime->lookupFunction(0x100160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306DC8u; }
        if (ctx->pc != 0x306DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x100160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306DC8u; }
        if (ctx->pc != 0x306DC8u) { return; }
    }
    ctx->pc = 0x306DC8u;
label_306dc8:
    // 0x306dc8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_306dcc:
    if (ctx->pc == 0x306DCCu) {
        ctx->pc = 0x306DCCu;
            // 0x306dcc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x306DD0u;
        goto label_306dd0;
    }
    ctx->pc = 0x306DC8u;
    {
        const bool branch_taken_0x306dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306DC8u;
            // 0x306dcc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x306dc8) {
            ctx->pc = 0x306E38u;
            goto label_306e38;
        }
    }
    ctx->pc = 0x306DD0u;
label_306dd0:
    // 0x306dd0: 0xc0a24f0  jal         func_2893C0
label_306dd4:
    if (ctx->pc == 0x306DD4u) {
        ctx->pc = 0x306DD8u;
        goto label_306dd8;
    }
    ctx->pc = 0x306DD0u;
    SET_GPR_U32(ctx, 31, 0x306DD8u);
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306DD8u; }
        if (ctx->pc != 0x306DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306DD8u; }
        if (ctx->pc != 0x306DD8u) { return; }
    }
    ctx->pc = 0x306DD8u;
label_306dd8:
    // 0x306dd8: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x306dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
label_306ddc:
    // 0x306ddc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x306ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306de0:
    // 0x306de0: 0xc04003c  jal         func_1000F0
label_306de4:
    if (ctx->pc == 0x306DE4u) {
        ctx->pc = 0x306DE4u;
            // 0x306de4: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x306DE8u;
        goto label_306de8;
    }
    ctx->pc = 0x306DE0u;
    SET_GPR_U32(ctx, 31, 0x306DE8u);
    ctx->pc = 0x306DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306DE0u;
            // 0x306de4: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1000F0u;
    if (runtime->hasFunction(0x1000F0u)) {
        auto targetFn = runtime->lookupFunction(0x1000F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306DE8u; }
        if (ctx->pc != 0x306DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpflt_0x1000f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306DE8u; }
        if (ctx->pc != 0x306DE8u) { return; }
    }
    ctx->pc = 0x306DE8u;
label_306de8:
    // 0x306de8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_306dec:
    if (ctx->pc == 0x306DECu) {
        ctx->pc = 0x306DECu;
            // 0x306dec: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->pc = 0x306DF0u;
        goto label_306df0;
    }
    ctx->pc = 0x306DE8u;
    {
        const bool branch_taken_0x306de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306DE8u;
            // 0x306dec: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306de8) {
            ctx->pc = 0x306E38u;
            goto label_306e38;
        }
    }
    ctx->pc = 0x306DF0u;
label_306df0:
    // 0x306df0: 0x3c03433e  lui         $v1, 0x433E
    ctx->pc = 0x306df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17214 << 16));
label_306df4:
    // 0x306df4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x306df4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_306df8:
    // 0x306df8: 0xc7a201e8  lwc1        $f2, 0x1E8($sp)
    ctx->pc = 0x306df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_306dfc:
    // 0x306dfc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x306dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_306e00:
    // 0x306e00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x306e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_306e04:
    // 0x306e04: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x306e04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_306e08:
    // 0x306e08: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x306e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
label_306e0c:
    // 0x306e0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306e10:
    // 0x306e10: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x306e10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_306e14:
    // 0x306e14: 0x3c0243ac  lui         $v0, 0x43AC
    ctx->pc = 0x306e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17324 << 16));
label_306e18:
    // 0x306e18: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x306e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_306e1c:
    // 0x306e1c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x306e1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_306e20:
    // 0x306e20: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x306e20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_306e24:
    // 0x306e24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306e28:
    // 0x306e28: 0x46022080  add.s       $f2, $f4, $f2
    ctx->pc = 0x306e28u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_306e2c:
    // 0x306e2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x306e2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_306e30:
    // 0x306e30: 0xe7a20200  swc1        $f2, 0x200($sp)
    ctx->pc = 0x306e30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_306e34:
    // 0x306e34: 0xe7a00208  swc1        $f0, 0x208($sp)
    ctx->pc = 0x306e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_306e38:
    // 0x306e38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x306e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_306e3c:
    // 0x306e3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306e40:
    // 0x306e40: 0x0  nop
    ctx->pc = 0x306e40u;
    // NOP
label_306e44:
    // 0x306e44: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x306e44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_306e48:
    // 0x306e48: 0x0  nop
    ctx->pc = 0x306e48u;
    // NOP
label_306e4c:
    // 0x306e4c: 0x45010028  bc1t        . + 4 + (0x28 << 2)
label_306e50:
    if (ctx->pc == 0x306E50u) {
        ctx->pc = 0x306E50u;
            // 0x306e50: 0x3c024040  lui         $v0, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
        ctx->pc = 0x306E54u;
        goto label_306e54;
    }
    ctx->pc = 0x306E4Cu;
    {
        const bool branch_taken_0x306e4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x306E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306E4Cu;
            // 0x306e50: 0x3c024040  lui         $v0, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306e4c) {
            ctx->pc = 0x306EF0u;
            goto label_306ef0;
        }
    }
    ctx->pc = 0x306E54u;
label_306e54:
    // 0x306e54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306e58:
    // 0x306e58: 0x0  nop
    ctx->pc = 0x306e58u;
    // NOP
label_306e5c:
    // 0x306e5c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x306e5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_306e60:
    // 0x306e60: 0x0  nop
    ctx->pc = 0x306e60u;
    // NOP
label_306e64:
    // 0x306e64: 0x45000022  bc1f        . + 4 + (0x22 << 2)
label_306e68:
    if (ctx->pc == 0x306E68u) {
        ctx->pc = 0x306E6Cu;
        goto label_306e6c;
    }
    ctx->pc = 0x306E64u;
    {
        const bool branch_taken_0x306e64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x306e64) {
            ctx->pc = 0x306EF0u;
            goto label_306ef0;
        }
    }
    ctx->pc = 0x306E6Cu;
label_306e6c:
    // 0x306e6c: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x306e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306e70:
    // 0x306e70: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x306e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_306e74:
    // 0x306e74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x306e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_306e78:
    // 0x306e78: 0x3c03433e  lui         $v1, 0x433E
    ctx->pc = 0x306e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17214 << 16));
label_306e7c:
    // 0x306e7c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x306e7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_306e80:
    // 0x306e80: 0x27b40208  addiu       $s4, $sp, 0x208
    ctx->pc = 0x306e80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
label_306e84:
    // 0x306e84: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x306e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_306e88:
    // 0x306e88: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x306e88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_306e8c:
    // 0x306e8c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x306e8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_306e90:
    // 0x306e90: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x306e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_306e94:
    // 0x306e94: 0xc041c7a  jal         func_1071E8
label_306e98:
    if (ctx->pc == 0x306E98u) {
        ctx->pc = 0x306E98u;
            // 0x306e98: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x306E9Cu;
        goto label_306e9c;
    }
    ctx->pc = 0x306E94u;
    SET_GPR_U32(ctx, 31, 0x306E9Cu);
    ctx->pc = 0x306E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306E94u;
            // 0x306e98: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306E9Cu; }
        if (ctx->pc != 0x306E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306E9Cu; }
        if (ctx->pc != 0x306E9Cu) { return; }
    }
    ctx->pc = 0x306E9Cu;
label_306e9c:
    // 0x306e9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x306e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_306ea0:
    // 0x306ea0: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x306ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_306ea4:
    // 0x306ea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306ea8:
    // 0x306ea8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x306ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_306eac:
    // 0x306eac: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x306eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_306eb0:
    // 0x306eb0: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x306eb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_306eb4:
    // 0x306eb4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x306eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_306eb8:
    // 0x306eb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x306eb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_306ebc:
    // 0x306ebc: 0xc041cf6  jal         func_1073D8
label_306ec0:
    if (ctx->pc == 0x306EC0u) {
        ctx->pc = 0x306EC0u;
            // 0x306ec0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x306EC4u;
        goto label_306ec4;
    }
    ctx->pc = 0x306EBCu;
    SET_GPR_U32(ctx, 31, 0x306EC4u);
    ctx->pc = 0x306EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306EBCu;
            // 0x306ec0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306EC4u; }
        if (ctx->pc != 0x306EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306EC4u; }
        if (ctx->pc != 0x306EC4u) { return; }
    }
    ctx->pc = 0x306EC4u;
label_306ec4:
    // 0x306ec4: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x306ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_306ec8:
    // 0x306ec8: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x306ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_306ecc:
    // 0x306ecc: 0xc041bb0  jal         func_106EC0
label_306ed0:
    if (ctx->pc == 0x306ED0u) {
        ctx->pc = 0x306ED0u;
            // 0x306ed0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306ED4u;
        goto label_306ed4;
    }
    ctx->pc = 0x306ECCu;
    SET_GPR_U32(ctx, 31, 0x306ED4u);
    ctx->pc = 0x306ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306ECCu;
            // 0x306ed0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306ED4u; }
        if (ctx->pc != 0x306ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306ED4u; }
        if (ctx->pc != 0x306ED4u) { return; }
    }
    ctx->pc = 0x306ED4u;
label_306ed4:
    // 0x306ed4: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x306ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_306ed8:
    // 0x306ed8: 0x3c0243ac  lui         $v0, 0x43AC
    ctx->pc = 0x306ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17324 << 16));
label_306edc:
    // 0x306edc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x306edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_306ee0:
    // 0x306ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306ee4:
    // 0x306ee4: 0x0  nop
    ctx->pc = 0x306ee4u;
    // NOP
label_306ee8:
    // 0x306ee8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x306ee8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_306eec:
    // 0x306eec: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x306eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_306ef0:
    // 0x306ef0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x306ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_306ef4:
    // 0x306ef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306ef8:
    // 0x306ef8: 0x0  nop
    ctx->pc = 0x306ef8u;
    // NOP
label_306efc:
    // 0x306efc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x306efcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_306f00:
    // 0x306f00: 0x0  nop
    ctx->pc = 0x306f00u;
    // NOP
label_306f04:
    // 0x306f04: 0x45010028  bc1t        . + 4 + (0x28 << 2)
label_306f08:
    if (ctx->pc == 0x306F08u) {
        ctx->pc = 0x306F08u;
            // 0x306f08: 0x3c0240e0  lui         $v0, 0x40E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
        ctx->pc = 0x306F0Cu;
        goto label_306f0c;
    }
    ctx->pc = 0x306F04u;
    {
        const bool branch_taken_0x306f04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x306F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306F04u;
            // 0x306f08: 0x3c0240e0  lui         $v0, 0x40E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306f04) {
            ctx->pc = 0x306FA8u;
            goto label_306fa8;
        }
    }
    ctx->pc = 0x306F0Cu;
label_306f0c:
    // 0x306f0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306f0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306f10:
    // 0x306f10: 0x0  nop
    ctx->pc = 0x306f10u;
    // NOP
label_306f14:
    // 0x306f14: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x306f14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_306f18:
    // 0x306f18: 0x0  nop
    ctx->pc = 0x306f18u;
    // NOP
label_306f1c:
    // 0x306f1c: 0x45000022  bc1f        . + 4 + (0x22 << 2)
label_306f20:
    if (ctx->pc == 0x306F20u) {
        ctx->pc = 0x306F24u;
        goto label_306f24;
    }
    ctx->pc = 0x306F1Cu;
    {
        const bool branch_taken_0x306f1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x306f1c) {
            ctx->pc = 0x306FA8u;
            goto label_306fa8;
        }
    }
    ctx->pc = 0x306F24u;
label_306f24:
    // 0x306f24: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x306f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306f28:
    // 0x306f28: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x306f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_306f2c:
    // 0x306f2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x306f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_306f30:
    // 0x306f30: 0x3c03c33e  lui         $v1, 0xC33E
    ctx->pc = 0x306f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49982 << 16));
label_306f34:
    // 0x306f34: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x306f34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_306f38:
    // 0x306f38: 0x27b40208  addiu       $s4, $sp, 0x208
    ctx->pc = 0x306f38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
label_306f3c:
    // 0x306f3c: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x306f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_306f40:
    // 0x306f40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x306f40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_306f44:
    // 0x306f44: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x306f44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_306f48:
    // 0x306f48: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x306f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_306f4c:
    // 0x306f4c: 0xc041c7a  jal         func_1071E8
label_306f50:
    if (ctx->pc == 0x306F50u) {
        ctx->pc = 0x306F50u;
            // 0x306f50: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x306F54u;
        goto label_306f54;
    }
    ctx->pc = 0x306F4Cu;
    SET_GPR_U32(ctx, 31, 0x306F54u);
    ctx->pc = 0x306F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306F4Cu;
            // 0x306f50: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306F54u; }
        if (ctx->pc != 0x306F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306F54u; }
        if (ctx->pc != 0x306F54u) { return; }
    }
    ctx->pc = 0x306F54u;
label_306f54:
    // 0x306f54: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x306f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_306f58:
    // 0x306f58: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x306f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_306f5c:
    // 0x306f5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306f60:
    // 0x306f60: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x306f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_306f64:
    // 0x306f64: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x306f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_306f68:
    // 0x306f68: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x306f68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_306f6c:
    // 0x306f6c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x306f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_306f70:
    // 0x306f70: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x306f70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_306f74:
    // 0x306f74: 0xc041cf6  jal         func_1073D8
label_306f78:
    if (ctx->pc == 0x306F78u) {
        ctx->pc = 0x306F78u;
            // 0x306f78: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x306F7Cu;
        goto label_306f7c;
    }
    ctx->pc = 0x306F74u;
    SET_GPR_U32(ctx, 31, 0x306F7Cu);
    ctx->pc = 0x306F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306F74u;
            // 0x306f78: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306F7Cu; }
        if (ctx->pc != 0x306F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306F7Cu; }
        if (ctx->pc != 0x306F7Cu) { return; }
    }
    ctx->pc = 0x306F7Cu;
label_306f7c:
    // 0x306f7c: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x306f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_306f80:
    // 0x306f80: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x306f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_306f84:
    // 0x306f84: 0xc041bb0  jal         func_106EC0
label_306f88:
    if (ctx->pc == 0x306F88u) {
        ctx->pc = 0x306F88u;
            // 0x306f88: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306F8Cu;
        goto label_306f8c;
    }
    ctx->pc = 0x306F84u;
    SET_GPR_U32(ctx, 31, 0x306F8Cu);
    ctx->pc = 0x306F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x306F84u;
            // 0x306f88: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306F8Cu; }
        if (ctx->pc != 0x306F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306F8Cu; }
        if (ctx->pc != 0x306F8Cu) { return; }
    }
    ctx->pc = 0x306F8Cu;
label_306f8c:
    // 0x306f8c: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x306f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_306f90:
    // 0x306f90: 0x3c0243ac  lui         $v0, 0x43AC
    ctx->pc = 0x306f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17324 << 16));
label_306f94:
    // 0x306f94: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x306f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_306f98:
    // 0x306f98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306f9c:
    // 0x306f9c: 0x0  nop
    ctx->pc = 0x306f9cu;
    // NOP
label_306fa0:
    // 0x306fa0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x306fa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_306fa4:
    // 0x306fa4: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x306fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_306fa8:
    // 0x306fa8: 0x3c02c170  lui         $v0, 0xC170
    ctx->pc = 0x306fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49520 << 16));
label_306fac:
    // 0x306fac: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x306facu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_306fb0:
    // 0x306fb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_306fb4:
    // 0x306fb4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x306fb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_306fb8:
    // 0x306fb8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x306fb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_306fbc:
    // 0x306fbc: 0x320f809  jalr        $t9
label_306fc0:
    if (ctx->pc == 0x306FC0u) {
        ctx->pc = 0x306FC0u;
            // 0x306fc0: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x306FC4u;
        goto label_306fc4;
    }
    ctx->pc = 0x306FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x306FC4u);
        ctx->pc = 0x306FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306FBCu;
            // 0x306fc0: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x306FC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x306FC4u; }
            if (ctx->pc != 0x306FC4u) { return; }
        }
        }
    }
    ctx->pc = 0x306FC4u;
label_306fc4:
    // 0x306fc4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x306fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_306fc8:
    // 0x306fc8: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x306fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_306fcc:
    // 0x306fcc: 0x2442da80  addiu       $v0, $v0, -0x2580
    ctx->pc = 0x306fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957696));
label_306fd0:
    // 0x306fd0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x306fd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_306fd4:
    // 0x306fd4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x306fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_306fd8:
    // 0x306fd8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x306fd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_306fdc:
    // 0x306fdc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x306fdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_306fe0:
    // 0x306fe0: 0x320f809  jalr        $t9
label_306fe4:
    if (ctx->pc == 0x306FE4u) {
        ctx->pc = 0x306FE4u;
            // 0x306fe4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x306FE8u;
        goto label_306fe8;
    }
    ctx->pc = 0x306FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x306FE8u);
        ctx->pc = 0x306FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306FE0u;
            // 0x306fe4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x306FE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x306FE8u; }
            if (ctx->pc != 0x306FE8u) { return; }
        }
        }
    }
    ctx->pc = 0x306FE8u;
label_306fe8:
    // 0x306fe8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x306fe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_306fec:
    // 0x306fec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_306ff0:
    // 0x306ff0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x306ff0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_306ff4:
    // 0x306ff4: 0x320f809  jalr        $t9
label_306ff8:
    if (ctx->pc == 0x306FF8u) {
        ctx->pc = 0x306FF8u;
            // 0x306ff8: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x306FFCu;
        goto label_306ffc;
    }
    ctx->pc = 0x306FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x306FFCu);
        ctx->pc = 0x306FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306FF4u;
            // 0x306ff8: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x306FFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x306FFCu; }
            if (ctx->pc != 0x306FFCu) { return; }
        }
        }
    }
    ctx->pc = 0x306FFCu;
label_306ffc:
    // 0x306ffc: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x306ffcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_307000:
    // 0x307000: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x307000u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_307004:
    // 0x307004: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x307004u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_307008:
    // 0x307008: 0x320f809  jalr        $t9
label_30700c:
    if (ctx->pc == 0x30700Cu) {
        ctx->pc = 0x30700Cu;
            // 0x30700c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x307010u;
        goto label_307010;
    }
    ctx->pc = 0x307008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x307010u);
        ctx->pc = 0x30700Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307008u;
            // 0x30700c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x307010u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x307010u; }
            if (ctx->pc != 0x307010u) { return; }
        }
        }
    }
    ctx->pc = 0x307010u;
label_307010:
    // 0x307010: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x307010u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_307014:
    // 0x307014: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x307014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_307018:
    // 0x307018: 0x1440fed8  bnez        $v0, . + 4 + (-0x128 << 2)
label_30701c:
    if (ctx->pc == 0x30701Cu) {
        ctx->pc = 0x30701Cu;
            // 0x30701c: 0x2673002c  addiu       $s3, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->pc = 0x307020u;
        goto label_307020;
    }
    ctx->pc = 0x307018u;
    {
        const bool branch_taken_0x307018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30701Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307018u;
            // 0x30701c: 0x2673002c  addiu       $s3, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307018) {
            ctx->pc = 0x306B7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_306b7c;
        }
    }
    ctx->pc = 0x307020u;
label_307020:
    // 0x307020: 0x8f82a118  lw          $v0, -0x5EE8($gp)
    ctx->pc = 0x307020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943000)));
label_307024:
    // 0x307024: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x307024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_307028:
    // 0x307028: 0xaf82a118  sw          $v0, -0x5EE8($gp)
    ctx->pc = 0x307028u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943000), GPR_U32(ctx, 2));
label_30702c:
    // 0x30702c: 0x8f82a118  lw          $v0, -0x5EE8($gp)
    ctx->pc = 0x30702cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943000)));
label_307030:
    // 0x307030: 0x1c400091  bgtz        $v0, . + 4 + (0x91 << 2)
label_307034:
    if (ctx->pc == 0x307034u) {
        ctx->pc = 0x307034u;
            // 0x307034: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x307038u;
        goto label_307038;
    }
    ctx->pc = 0x307030u;
    {
        const bool branch_taken_0x307030 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x307034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307030u;
            // 0x307034: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307030) {
            ctx->pc = 0x307278u;
            goto label_307278;
        }
    }
    ctx->pc = 0x307038u;
label_307038:
    // 0x307038: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x307038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_30703c:
    // 0x30703c: 0xaf83a11c  sw          $v1, -0x5EE4($gp)
    ctx->pc = 0x30703cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943004), GPR_U32(ctx, 3));
label_307040:
    // 0x307040: 0x1000008d  b           . + 4 + (0x8D << 2)
label_307044:
    if (ctx->pc == 0x307044u) {
        ctx->pc = 0x307044u;
            // 0x307044: 0xaf82a118  sw          $v0, -0x5EE8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943000), GPR_U32(ctx, 2));
        ctx->pc = 0x307048u;
        goto label_307048;
    }
    ctx->pc = 0x307040u;
    {
        const bool branch_taken_0x307040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307040u;
            // 0x307044: 0xaf82a118  sw          $v0, -0x5EE8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943000), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307040) {
            ctx->pc = 0x307278u;
            goto label_307278;
        }
    }
    ctx->pc = 0x307048u;
label_307048:
    // 0x307048: 0x8f84a160  lw          $a0, -0x5EA0($gp)
    ctx->pc = 0x307048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943072)));
label_30704c:
    // 0x30704c: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x30704cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_307050:
    // 0x307050: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x307050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_307054:
    // 0x307054: 0x2442a0ec  addiu       $v0, $v0, -0x5F14
    ctx->pc = 0x307054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942956));
label_307058:
    // 0x307058: 0xae042e54  sw          $a0, 0x2E54($s0)
    ctx->pc = 0x307058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11860), GPR_U32(ctx, 4));
label_30705c:
    // 0x30705c: 0xaf83a11c  sw          $v1, -0x5EE4($gp)
    ctx->pc = 0x30705cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943004), GPR_U32(ctx, 3));
label_307060:
    // 0x307060: 0x8f83a134  lw          $v1, -0x5ECC($gp)
    ctx->pc = 0x307060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943028)));
label_307064:
    // 0x307064: 0xaf80a118  sw          $zero, -0x5EE8($gp)
    ctx->pc = 0x307064u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943000), GPR_U32(ctx, 0));
label_307068:
    // 0x307068: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x307068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30706c:
    // 0x30706c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30706cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_307070:
    // 0x307070: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x307070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_307074:
    // 0x307074: 0xc086610  jal         func_219840
label_307078:
    if (ctx->pc == 0x307078u) {
        ctx->pc = 0x307078u;
            // 0x307078: 0x2444ffff  addiu       $a0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x30707Cu;
        goto label_30707c;
    }
    ctx->pc = 0x307074u;
    SET_GPR_U32(ctx, 31, 0x30707Cu);
    ctx->pc = 0x307078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307074u;
            // 0x307078: 0x2444ffff  addiu       $a0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219840u;
    if (runtime->hasFunction(0x219840u)) {
        auto targetFn = runtime->lookupFunction(0x219840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30707Cu; }
        if (ctx->pc != 0x30707Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetGyoRaceRanking__Fi_0x219840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30707Cu; }
        if (ctx->pc != 0x30707Cu) { return; }
    }
    ctx->pc = 0x30707Cu;
label_30707c:
    // 0x30707c: 0x3c1e0038  lui         $fp, 0x38
    ctx->pc = 0x30707cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)56 << 16));
label_307080:
    // 0x307080: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x307080u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307084:
    // 0x307084: 0x27de1ef0  addiu       $fp, $fp, 0x1EF0
    ctx->pc = 0x307084u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 7920));
label_307088:
    // 0x307088: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x307088u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30708c:
    // 0x30708c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x30708cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307090:
    // 0x307090: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x307090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_307094:
    // 0x307094: 0x2442a2f0  addiu       $v0, $v0, -0x5D10
    ctx->pc = 0x307094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943472));
label_307098:
    // 0x307098: 0x52a821  addu        $s5, $v0, $s2
    ctx->pc = 0x307098u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_30709c:
    // 0x30709c: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x30709cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3070a0:
    // 0x3070a0: 0xc0a0ed8  jal         func_283B60
label_3070a4:
    if (ctx->pc == 0x3070A4u) {
        ctx->pc = 0x3070A4u;
            // 0x3070a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3070A8u;
        goto label_3070a8;
    }
    ctx->pc = 0x3070A0u;
    SET_GPR_U32(ctx, 31, 0x3070A8u);
    ctx->pc = 0x3070A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3070A0u;
            // 0x3070a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3070A8u; }
        if (ctx->pc != 0x3070A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3070A8u; }
        if (ctx->pc != 0x3070A8u) { return; }
    }
    ctx->pc = 0x3070A8u;
label_3070a8:
    // 0x3070a8: 0x8c4502e4  lw          $a1, 0x2E4($v0)
    ctx->pc = 0x3070a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 740)));
label_3070ac:
    // 0x3070ac: 0xc04b950  jal         func_12E540
label_3070b0:
    if (ctx->pc == 0x3070B0u) {
        ctx->pc = 0x3070B0u;
            // 0x3070b0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3070B4u;
        goto label_3070b4;
    }
    ctx->pc = 0x3070ACu;
    SET_GPR_U32(ctx, 31, 0x3070B4u);
    ctx->pc = 0x3070B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3070ACu;
            // 0x3070b0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3070B4u; }
        if (ctx->pc != 0x3070B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3070B4u; }
        if (ctx->pc != 0x3070B4u) { return; }
    }
    ctx->pc = 0x3070B4u;
label_3070b4:
    // 0x3070b4: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x3070b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
label_3070b8:
    // 0x3070b8: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3070b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_3070bc:
    // 0x3070bc: 0x24639f40  addiu       $v1, $v1, -0x60C0
    ctx->pc = 0x3070bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942528));
label_3070c0:
    // 0x3070c0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x3070c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_3070c4:
    // 0x3070c4: 0x73a021  addu        $s4, $v1, $s3
    ctx->pc = 0x3070c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_3070c8:
    // 0x3070c8: 0x24429e60  addiu       $v0, $v0, -0x61A0
    ctx->pc = 0x3070c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942304));
label_3070cc:
    // 0x3070cc: 0x8e8301ac  lw          $v1, 0x1AC($s4)
    ctx->pc = 0x3070ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 428)));
label_3070d0:
    // 0x3070d0: 0x24a523f0  addiu       $a1, $a1, 0x23F0
    ctx->pc = 0x3070d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9200));
label_3070d4:
    // 0x3070d4: 0x269601ac  addiu       $s6, $s4, 0x1AC
    ctx->pc = 0x3070d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 428));
label_3070d8:
    // 0x3070d8: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x3070d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3070dc:
    // 0x3070dc: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3070dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_3070e0:
    // 0x3070e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3070e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3070e4:
    // 0x3070e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3070e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3070e8:
    // 0x3070e8: 0xc04a3dc  jal         func_128F70
label_3070ec:
    if (ctx->pc == 0x3070ECu) {
        ctx->pc = 0x3070ECu;
            // 0x3070ec: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3070F0u;
        goto label_3070f0;
    }
    ctx->pc = 0x3070E8u;
    SET_GPR_U32(ctx, 31, 0x3070F0u);
    ctx->pc = 0x3070ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3070E8u;
            // 0x3070ec: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3070F0u; }
        if (ctx->pc != 0x3070F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3070F0u; }
        if (ctx->pc != 0x3070F0u) { return; }
    }
    ctx->pc = 0x3070F0u;
label_3070f0:
    // 0x3070f0: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3070f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_3070f4:
    // 0x3070f4: 0x2442a1f0  addiu       $v0, $v0, -0x5E10
    ctx->pc = 0x3070f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943216));
label_3070f8:
    // 0x3070f8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3070f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_3070fc:
    // 0x3070fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3070fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_307100:
    // 0x307100: 0x24570010  addiu       $s7, $v0, 0x10
    ctx->pc = 0x307100u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_307104:
    // 0x307104: 0xc04a422  jal         func_129088
label_307108:
    if (ctx->pc == 0x307108u) {
        ctx->pc = 0x307108u;
            // 0x307108: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30710Cu;
        goto label_30710c;
    }
    ctx->pc = 0x307104u;
    SET_GPR_U32(ctx, 31, 0x30710Cu);
    ctx->pc = 0x307108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307104u;
            // 0x307108: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30710Cu; }
        if (ctx->pc != 0x30710Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30710Cu; }
        if (ctx->pc != 0x30710Cu) { return; }
    }
    ctx->pc = 0x30710Cu;
label_30710c:
    // 0x30710c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x30710cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_307110:
    // 0x307110: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x307110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307114:
    // 0x307114: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x307114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_307118:
    // 0x307118: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x307118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_30711c:
    // 0x30711c: 0x24429e60  addiu       $v0, $v0, -0x61A0
    ctx->pc = 0x30711cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942304));
label_307120:
    // 0x307120: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x307120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_307124:
    // 0x307124: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x307124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_307128:
    // 0x307128: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x307128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_30712c:
    // 0x30712c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30712cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_307130:
    // 0x307130: 0xc04a54a  jal         func_129528
label_307134:
    if (ctx->pc == 0x307134u) {
        ctx->pc = 0x307134u;
            // 0x307134: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x307138u;
        goto label_307138;
    }
    ctx->pc = 0x307130u;
    SET_GPR_U32(ctx, 31, 0x307138u);
    ctx->pc = 0x307134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307130u;
            // 0x307134: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129528u;
    if (runtime->hasFunction(0x129528u)) {
        auto targetFn = runtime->lookupFunction(0x129528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307138u; }
        if (ctx->pc != 0x307138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x129528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307138u; }
        if (ctx->pc != 0x307138u) { return; }
    }
    ctx->pc = 0x307138u;
label_307138:
    // 0x307138: 0xc68001c4  lwc1        $f0, 0x1C4($s4)
    ctx->pc = 0x307138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30713c:
    // 0x30713c: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x30713cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_307140:
    // 0x307140: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x307140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_307144:
    // 0x307144: 0x26250003  addiu       $a1, $s1, 0x3
    ctx->pc = 0x307144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
label_307148:
    // 0x307148: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x307148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30714c:
    // 0x30714c: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x30714cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_307150:
    // 0x307150: 0x24429e60  addiu       $v0, $v0, -0x61A0
    ctx->pc = 0x307150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942304));
label_307154:
    // 0x307154: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x307154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_307158:
    // 0x307158: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x307158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_30715c:
    // 0x30715c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30715cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_307160:
    // 0x307160: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x307160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_307164:
    // 0x307164: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x307164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_307168:
    // 0x307168: 0xe460fff4  swc1        $f0, -0xC($v1)
    ctx->pc = 0x307168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), bits); }
label_30716c:
    // 0x30716c: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x30716cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_307170:
    // 0x307170: 0xac62fff8  sw          $v0, -0x8($v1)
    ctx->pc = 0x307170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), GPR_U32(ctx, 2));
label_307174:
    // 0x307174: 0x8f82a168  lw          $v0, -0x5E98($gp)
    ctx->pc = 0x307174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943080)));
label_307178:
    // 0x307178: 0xac62fffc  sw          $v0, -0x4($v1)
    ctx->pc = 0x307178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 2));
label_30717c:
    // 0x30717c: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x30717cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
label_307180:
    // 0x307180: 0xc063a0c  jal         func_18E830
label_307184:
    if (ctx->pc == 0x307184u) {
        ctx->pc = 0x307184u;
            // 0x307184: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x307188u;
        goto label_307188;
    }
    ctx->pc = 0x307180u;
    SET_GPR_U32(ctx, 31, 0x307188u);
    ctx->pc = 0x307184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307180u;
            // 0x307184: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E830u;
    if (runtime->hasFunction(0x18E830u)) {
        auto targetFn = runtime->lookupFunction(0x18E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307188u; }
        if (ctx->pc != 0x307188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeStop__FUiii_0x18e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307188u; }
        if (ctx->pc != 0x307188u) { return; }
    }
    ctx->pc = 0x307188u;
label_307188:
    // 0x307188: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x307188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
label_30718c:
    // 0x30718c: 0x26250009  addiu       $a1, $s1, 0x9
    ctx->pc = 0x30718cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
label_307190:
    // 0x307190: 0xc063a0c  jal         func_18E830
label_307194:
    if (ctx->pc == 0x307194u) {
        ctx->pc = 0x307194u;
            // 0x307194: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x307198u;
        goto label_307198;
    }
    ctx->pc = 0x307190u;
    SET_GPR_U32(ctx, 31, 0x307198u);
    ctx->pc = 0x307194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307190u;
            // 0x307194: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E830u;
    if (runtime->hasFunction(0x18E830u)) {
        auto targetFn = runtime->lookupFunction(0x18E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307198u; }
        if (ctx->pc != 0x307198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeStop__FUiii_0x18e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307198u; }
        if (ctx->pc != 0x307198u) { return; }
    }
    ctx->pc = 0x307198u;
label_307198:
    // 0x307198: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x307198u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_30719c:
    // 0x30719c: 0x2652002c  addiu       $s2, $s2, 0x2C
    ctx->pc = 0x30719cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
label_3071a0:
    // 0x3071a0: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x3071a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_3071a4:
    // 0x3071a4: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
label_3071a8:
    if (ctx->pc == 0x3071A8u) {
        ctx->pc = 0x3071A8u;
            // 0x3071a8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3071ACu;
        goto label_3071ac;
    }
    ctx->pc = 0x3071A4u;
    {
        const bool branch_taken_0x3071a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3071A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3071A4u;
            // 0x3071a8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3071a4) {
            ctx->pc = 0x307090u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_307090;
        }
    }
    ctx->pc = 0x3071ACu;
label_3071ac:
    // 0x3071ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3071acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3071b0:
    // 0x3071b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3071b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3071b4:
    // 0x3071b4: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3071b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_3071b8:
    // 0x3071b8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x3071b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_3071bc:
    // 0x3071bc: 0x24429e60  addiu       $v0, $v0, -0x61A0
    ctx->pc = 0x3071bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942304));
label_3071c0:
    // 0x3071c0: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x3071c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3071c4:
    // 0x3071c4: 0x523021  addu        $a2, $v0, $s2
    ctx->pc = 0x3071c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3071c8:
    // 0x3071c8: 0xc04a0d2  jal         func_128348
label_3071cc:
    if (ctx->pc == 0x3071CCu) {
        ctx->pc = 0x3071CCu;
            // 0x3071cc: 0x24842410  addiu       $a0, $a0, 0x2410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9232));
        ctx->pc = 0x3071D0u;
        goto label_3071d0;
    }
    ctx->pc = 0x3071C8u;
    SET_GPR_U32(ctx, 31, 0x3071D0u);
    ctx->pc = 0x3071CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3071C8u;
            // 0x3071cc: 0x24842410  addiu       $a0, $a0, 0x2410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3071D0u; }
        if (ctx->pc != 0x3071D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3071D0u; }
        if (ctx->pc != 0x3071D0u) { return; }
    }
    ctx->pc = 0x3071D0u;
label_3071d0:
    // 0x3071d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3071d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3071d4:
    // 0x3071d4: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x3071d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_3071d8:
    // 0x3071d8: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3071dc:
    if (ctx->pc == 0x3071DCu) {
        ctx->pc = 0x3071DCu;
            // 0x3071dc: 0x26520024  addiu       $s2, $s2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
        ctx->pc = 0x3071E0u;
        goto label_3071e0;
    }
    ctx->pc = 0x3071D8u;
    {
        const bool branch_taken_0x3071d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3071DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3071D8u;
            // 0x3071dc: 0x26520024  addiu       $s2, $s2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3071d8) {
            ctx->pc = 0x3071B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3071b4;
        }
    }
    ctx->pc = 0x3071E0u;
label_3071e0:
    // 0x3071e0: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x3071e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
label_3071e4:
    // 0x3071e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3071e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3071e8:
    // 0x3071e8: 0xc063a0c  jal         func_18E830
label_3071ec:
    if (ctx->pc == 0x3071ECu) {
        ctx->pc = 0x3071ECu;
            // 0x3071ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3071F0u;
        goto label_3071f0;
    }
    ctx->pc = 0x3071E8u;
    SET_GPR_U32(ctx, 31, 0x3071F0u);
    ctx->pc = 0x3071ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3071E8u;
            // 0x3071ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E830u;
    if (runtime->hasFunction(0x18E830u)) {
        auto targetFn = runtime->lookupFunction(0x18E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3071F0u; }
        if (ctx->pc != 0x3071F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeStop__FUiii_0x18e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3071F0u; }
        if (ctx->pc != 0x3071F0u) { return; }
    }
    ctx->pc = 0x3071F0u;
label_3071f0:
    // 0x3071f0: 0x8f85a178  lw          $a1, -0x5E88($gp)
    ctx->pc = 0x3071f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943096)));
label_3071f4:
    // 0x3071f4: 0xc04b950  jal         func_12E540
label_3071f8:
    if (ctx->pc == 0x3071F8u) {
        ctx->pc = 0x3071F8u;
            // 0x3071f8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3071FCu;
        goto label_3071fc;
    }
    ctx->pc = 0x3071F4u;
    SET_GPR_U32(ctx, 31, 0x3071FCu);
    ctx->pc = 0x3071F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3071F4u;
            // 0x3071f8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3071FCu; }
        if (ctx->pc != 0x3071FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3071FCu; }
        if (ctx->pc != 0x3071FCu) { return; }
    }
    ctx->pc = 0x3071FCu;
label_3071fc:
    // 0x3071fc: 0x8f85a17c  lw          $a1, -0x5E84($gp)
    ctx->pc = 0x3071fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943100)));
label_307200:
    // 0x307200: 0xc04b950  jal         func_12E540
label_307204:
    if (ctx->pc == 0x307204u) {
        ctx->pc = 0x307204u;
            // 0x307204: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x307208u;
        goto label_307208;
    }
    ctx->pc = 0x307200u;
    SET_GPR_U32(ctx, 31, 0x307208u);
    ctx->pc = 0x307204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307200u;
            // 0x307204: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307208u; }
        if (ctx->pc != 0x307208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307208u; }
        if (ctx->pc != 0x307208u) { return; }
    }
    ctx->pc = 0x307208u;
label_307208:
    // 0x307208: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x307208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_30720c:
    // 0x30720c: 0xc050dec  jal         func_1437B0
label_307210:
    if (ctx->pc == 0x307210u) {
        ctx->pc = 0x307210u;
            // 0x307210: 0x2484a210  addiu       $a0, $a0, -0x5DF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943248));
        ctx->pc = 0x307214u;
        goto label_307214;
    }
    ctx->pc = 0x30720Cu;
    SET_GPR_U32(ctx, 31, 0x307214u);
    ctx->pc = 0x307210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30720Cu;
            // 0x307210: 0x2484a210  addiu       $a0, $a0, -0x5DF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307214u; }
        if (ctx->pc != 0x307214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307214u; }
        if (ctx->pc != 0x307214u) { return; }
    }
    ctx->pc = 0x307214u;
label_307214:
    // 0x307214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_307218:
    // 0x307218: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x307218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30721c:
    // 0x30721c: 0xc0a11b4  jal         func_2846D0
label_307220:
    if (ctx->pc == 0x307220u) {
        ctx->pc = 0x307220u;
            // 0x307220: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x307224u;
        goto label_307224;
    }
    ctx->pc = 0x30721Cu;
    SET_GPR_U32(ctx, 31, 0x307224u);
    ctx->pc = 0x307220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30721Cu;
            // 0x307220: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307224u; }
        if (ctx->pc != 0x307224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307224u; }
        if (ctx->pc != 0x307224u) { return; }
    }
    ctx->pc = 0x307224u;
label_307224:
    // 0x307224: 0x8e022e58  lw          $v0, 0x2E58($s0)
    ctx->pc = 0x307224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11864)));
label_307228:
    // 0x307228: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x307228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_30722c:
    // 0x30722c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30722cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307230:
    // 0x307230: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x307230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_307234:
    // 0x307234: 0xc049c86  jal         func_127218
label_307238:
    if (ctx->pc == 0x307238u) {
        ctx->pc = 0x307238u;
            // 0x307238: 0xae022e54  sw          $v0, 0x2E54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11860), GPR_U32(ctx, 2));
        ctx->pc = 0x30723Cu;
        goto label_30723c;
    }
    ctx->pc = 0x307234u;
    SET_GPR_U32(ctx, 31, 0x30723Cu);
    ctx->pc = 0x307238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307234u;
            // 0x307238: 0xae022e54  sw          $v0, 0x2E54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11860), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30723Cu; }
        if (ctx->pc != 0x30723Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30723Cu; }
        if (ctx->pc != 0x30723Cu) { return; }
    }
    ctx->pc = 0x30723Cu;
label_30723c:
    // 0x30723c: 0x8f828ad4  lw          $v0, -0x752C($gp)
    ctx->pc = 0x30723cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937300)));
label_307240:
    // 0x307240: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_307244:
    if (ctx->pc == 0x307244u) {
        ctx->pc = 0x307244u;
            // 0x307244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x307248u;
        goto label_307248;
    }
    ctx->pc = 0x307240u;
    {
        const bool branch_taken_0x307240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307240u;
            // 0x307244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307240) {
            ctx->pc = 0x307260u;
            goto label_307260;
        }
    }
    ctx->pc = 0x307248u;
label_307248:
    // 0x307248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30724c:
    // 0x30724c: 0x24050160  addiu       $a1, $zero, 0x160
    ctx->pc = 0x30724cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_307250:
    // 0x307250: 0xc0b1f3c  jal         func_2C7CF0
label_307254:
    if (ctx->pc == 0x307254u) {
        ctx->pc = 0x307254u;
            // 0x307254: 0x27a60260  addiu       $a2, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->pc = 0x307258u;
        goto label_307258;
    }
    ctx->pc = 0x307250u;
    SET_GPR_U32(ctx, 31, 0x307258u);
    ctx->pc = 0x307254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307250u;
            // 0x307254: 0x27a60260  addiu       $a2, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7CF0u;
    if (runtime->hasFunction(0x2C7CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2C7CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307258u; }
        if (ctx->pc != 0x307258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunEvent__6CSceneFiP15CSceneEventData_0x2c7cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307258u; }
        if (ctx->pc != 0x307258u) { return; }
    }
    ctx->pc = 0x307258u;
label_307258:
    // 0x307258: 0x10000005  b           . + 4 + (0x5 << 2)
label_30725c:
    if (ctx->pc == 0x30725Cu) {
        ctx->pc = 0x30725Cu;
            // 0x30725c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x307260u;
        goto label_307260;
    }
    ctx->pc = 0x307258u;
    {
        const bool branch_taken_0x307258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30725Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307258u;
            // 0x30725c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307258) {
            ctx->pc = 0x307270u;
            goto label_307270;
        }
    }
    ctx->pc = 0x307260u;
label_307260:
    // 0x307260: 0x2405015e  addiu       $a1, $zero, 0x15E
    ctx->pc = 0x307260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
label_307264:
    // 0x307264: 0xc0b1f3c  jal         func_2C7CF0
label_307268:
    if (ctx->pc == 0x307268u) {
        ctx->pc = 0x307268u;
            // 0x307268: 0x27a60260  addiu       $a2, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->pc = 0x30726Cu;
        goto label_30726c;
    }
    ctx->pc = 0x307264u;
    SET_GPR_U32(ctx, 31, 0x30726Cu);
    ctx->pc = 0x307268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307264u;
            // 0x307268: 0x27a60260  addiu       $a2, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7CF0u;
    if (runtime->hasFunction(0x2C7CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2C7CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30726Cu; }
        if (ctx->pc != 0x30726Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunEvent__6CSceneFiP15CSceneEventData_0x2c7cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30726Cu; }
        if (ctx->pc != 0x30726Cu) { return; }
    }
    ctx->pc = 0x30726Cu;
label_30726c:
    // 0x30726c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30726cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_307270:
    // 0x307270: 0x1000008d  b           . + 4 + (0x8D << 2)
label_307274:
    if (ctx->pc == 0x307274u) {
        ctx->pc = 0x307274u;
            // 0x307274: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x307278u;
        goto label_307278;
    }
    ctx->pc = 0x307270u;
    {
        const bool branch_taken_0x307270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307270u;
            // 0x307274: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307270) {
            ctx->pc = 0x3074A8u;
            goto label_3074a8;
        }
    }
    ctx->pc = 0x307278u;
label_307278:
    // 0x307278: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x307278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30727c:
    // 0x30727c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30727cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307280:
    // 0x307280: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x307280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_307284:
    // 0x307284: 0x2442a2f0  addiu       $v0, $v0, -0x5D10
    ctx->pc = 0x307284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943472));
label_307288:
    // 0x307288: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x307288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_30728c:
    // 0x30728c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x30728cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_307290:
    // 0x307290: 0xc0a0ed8  jal         func_283B60
label_307294:
    if (ctx->pc == 0x307294u) {
        ctx->pc = 0x307294u;
            // 0x307294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x307298u;
        goto label_307298;
    }
    ctx->pc = 0x307290u;
    SET_GPR_U32(ctx, 31, 0x307298u);
    ctx->pc = 0x307294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307290u;
            // 0x307294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307298u; }
        if (ctx->pc != 0x307298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307298u; }
        if (ctx->pc != 0x307298u) { return; }
    }
    ctx->pc = 0x307298u;
label_307298:
    // 0x307298: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x307298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30729c:
    // 0x30729c: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x30729cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_3072a0:
    // 0x3072a0: 0x320f809  jalr        $t9
label_3072a4:
    if (ctx->pc == 0x3072A4u) {
        ctx->pc = 0x3072A4u;
            // 0x3072a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3072A8u;
        goto label_3072a8;
    }
    ctx->pc = 0x3072A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3072A8u);
        ctx->pc = 0x3072A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3072A0u;
            // 0x3072a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3072A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3072A8u; }
            if (ctx->pc != 0x3072A8u) { return; }
        }
        }
    }
    ctx->pc = 0x3072A8u;
label_3072a8:
    // 0x3072a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3072a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3072ac:
    // 0x3072ac: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x3072acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_3072b0:
    // 0x3072b0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_3072b4:
    if (ctx->pc == 0x3072B4u) {
        ctx->pc = 0x3072B4u;
            // 0x3072b4: 0x2652002c  addiu       $s2, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->pc = 0x3072B8u;
        goto label_3072b8;
    }
    ctx->pc = 0x3072B0u;
    {
        const bool branch_taken_0x3072b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3072B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3072B0u;
            // 0x3072b4: 0x2652002c  addiu       $s2, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3072b0) {
            ctx->pc = 0x307280u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_307280;
        }
    }
    ctx->pc = 0x3072B8u;
label_3072b8:
    // 0x3072b8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x3072b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_3072bc:
    // 0x3072bc: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3072bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_3072c0:
    // 0x3072c0: 0x2442da90  addiu       $v0, $v0, -0x2570
    ctx->pc = 0x3072c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957712));
label_3072c4:
    // 0x3072c4: 0x27a70330  addiu       $a3, $sp, 0x330
    ctx->pc = 0x3072c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
label_3072c8:
    // 0x3072c8: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x3072c8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3072cc:
    // 0x3072cc: 0x27a30380  addiu       $v1, $sp, 0x380
    ctx->pc = 0x3072ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_3072d0:
    // 0x3072d0: 0x2484a280  addiu       $a0, $a0, -0x5D80
    ctx->pc = 0x3072d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
label_3072d4:
    // 0x3072d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3072d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3072d8:
    // 0x3072d8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x3072d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_3072dc:
    // 0x3072dc: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x3072dcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
label_3072e0:
    // 0x3072e0: 0x2442daa0  addiu       $v0, $v0, -0x2560
    ctx->pc = 0x3072e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957728));
label_3072e4:
    // 0x3072e4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3072e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3072e8:
    // 0x3072e8: 0xc04c444  jal         func_131110
label_3072ec:
    if (ctx->pc == 0x3072ECu) {
        ctx->pc = 0x3072ECu;
            // 0x3072ec: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x3072F0u;
        goto label_3072f0;
    }
    ctx->pc = 0x3072E8u;
    SET_GPR_U32(ctx, 31, 0x3072F0u);
    ctx->pc = 0x3072ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3072E8u;
            // 0x3072ec: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131110u;
    if (runtime->hasFunction(0x131110u)) {
        auto targetFn = runtime->lookupFunction(0x131110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3072F0u; }
        if (ctx->pc != 0x3072F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__9mgCCameraFi_0x131110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3072F0u; }
        if (ctx->pc != 0x3072F0u) { return; }
    }
    ctx->pc = 0x3072F0u;
label_3072f0:
    // 0x3072f0: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3072f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_3072f4:
    // 0x3072f4: 0x27a50340  addiu       $a1, $sp, 0x340
    ctx->pc = 0x3072f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_3072f8:
    // 0x3072f8: 0xc04c534  jal         func_1314D0
label_3072fc:
    if (ctx->pc == 0x3072FCu) {
        ctx->pc = 0x3072FCu;
            // 0x3072fc: 0x2484a280  addiu       $a0, $a0, -0x5D80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
        ctx->pc = 0x307300u;
        goto label_307300;
    }
    ctx->pc = 0x3072F8u;
    SET_GPR_U32(ctx, 31, 0x307300u);
    ctx->pc = 0x3072FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3072F8u;
            // 0x3072fc: 0x2484a280  addiu       $a0, $a0, -0x5D80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1314D0u;
    if (runtime->hasFunction(0x1314D0u)) {
        auto targetFn = runtime->lookupFunction(0x1314D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307300u; }
        if (ctx->pc != 0x307300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCameraMatrix__9mgCCameraFPA4_f_0x1314d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307300u; }
        if (ctx->pc != 0x307300u) { return; }
    }
    ctx->pc = 0x307300u;
label_307300:
    // 0x307300: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x307300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_307304:
    // 0x307304: 0x27a50380  addiu       $a1, $sp, 0x380
    ctx->pc = 0x307304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_307308:
    // 0x307308: 0xc04c574  jal         func_1315D0
label_30730c:
    if (ctx->pc == 0x30730Cu) {
        ctx->pc = 0x30730Cu;
            // 0x30730c: 0x2484a280  addiu       $a0, $a0, -0x5D80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
        ctx->pc = 0x307310u;
        goto label_307310;
    }
    ctx->pc = 0x307308u;
    SET_GPR_U32(ctx, 31, 0x307310u);
    ctx->pc = 0x30730Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307308u;
            // 0x30730c: 0x2484a280  addiu       $a0, $a0, -0x5D80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307310u; }
        if (ctx->pc != 0x307310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307310u; }
        if (ctx->pc != 0x307310u) { return; }
    }
    ctx->pc = 0x307310u;
label_307310:
    // 0x307310: 0xc7a00384  lwc1        $f0, 0x384($sp)
    ctx->pc = 0x307310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_307314:
    // 0x307314: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x307314u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_307318:
    // 0x307318: 0x0  nop
    ctx->pc = 0x307318u;
    // NOP
label_30731c:
    // 0x30731c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x30731cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_307320:
    // 0x307320: 0x0  nop
    ctx->pc = 0x307320u;
    // NOP
label_307324:
    // 0x307324: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_307328:
    if (ctx->pc == 0x307328u) {
        ctx->pc = 0x307328u;
            // 0x307328: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x30732Cu;
        goto label_30732c;
    }
    ctx->pc = 0x307324u;
    {
        const bool branch_taken_0x307324 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x307328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307324u;
            // 0x307328: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307324) {
            ctx->pc = 0x307340u;
            goto label_307340;
        }
    }
    ctx->pc = 0x30732Cu;
label_30732c:
    // 0x30732c: 0xc050dec  jal         func_1437B0
label_307330:
    if (ctx->pc == 0x307330u) {
        ctx->pc = 0x307330u;
            // 0x307330: 0x27a40330  addiu       $a0, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->pc = 0x307334u;
        goto label_307334;
    }
    ctx->pc = 0x30732Cu;
    SET_GPR_U32(ctx, 31, 0x307334u);
    ctx->pc = 0x307330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30732Cu;
            // 0x307330: 0x27a40330  addiu       $a0, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307334u; }
        if (ctx->pc != 0x307334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307334u; }
        if (ctx->pc != 0x307334u) { return; }
    }
    ctx->pc = 0x307334u;
label_307334:
    // 0x307334: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x307334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_307338:
    // 0x307338: 0x10000004  b           . + 4 + (0x4 << 2)
label_30733c:
    if (ctx->pc == 0x30733Cu) {
        ctx->pc = 0x30733Cu;
            // 0x30733c: 0xa382a138  sb          $v0, -0x5EC8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294943032), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x307340u;
        goto label_307340;
    }
    ctx->pc = 0x307338u;
    {
        const bool branch_taken_0x307338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30733Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307338u;
            // 0x30733c: 0xa382a138  sb          $v0, -0x5EC8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294943032), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307338) {
            ctx->pc = 0x30734Cu;
            goto label_30734c;
        }
    }
    ctx->pc = 0x307340u;
label_307340:
    // 0x307340: 0xc050dec  jal         func_1437B0
label_307344:
    if (ctx->pc == 0x307344u) {
        ctx->pc = 0x307344u;
            // 0x307344: 0x2484a210  addiu       $a0, $a0, -0x5DF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943248));
        ctx->pc = 0x307348u;
        goto label_307348;
    }
    ctx->pc = 0x307340u;
    SET_GPR_U32(ctx, 31, 0x307348u);
    ctx->pc = 0x307344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307340u;
            // 0x307344: 0x2484a210  addiu       $a0, $a0, -0x5DF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307348u; }
        if (ctx->pc != 0x307348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307348u; }
        if (ctx->pc != 0x307348u) { return; }
    }
    ctx->pc = 0x307348u;
label_307348:
    // 0x307348: 0xa380a138  sb          $zero, -0x5EC8($gp)
    ctx->pc = 0x307348u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943032), (uint8_t)GPR_U32(ctx, 0));
label_30734c:
    // 0x30734c: 0x27a40340  addiu       $a0, $sp, 0x340
    ctx->pc = 0x30734cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_307350:
    // 0x307350: 0xc050e28  jal         func_1438A0
label_307354:
    if (ctx->pc == 0x307354u) {
        ctx->pc = 0x307354u;
            // 0x307354: 0x27a50380  addiu       $a1, $sp, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
        ctx->pc = 0x307358u;
        goto label_307358;
    }
    ctx->pc = 0x307350u;
    SET_GPR_U32(ctx, 31, 0x307358u);
    ctx->pc = 0x307354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307350u;
            // 0x307354: 0x27a50380  addiu       $a1, $sp, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438A0u;
    if (runtime->hasFunction(0x1438A0u)) {
        auto targetFn = runtime->lookupFunction(0x1438A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307358u; }
        if (ctx->pc != 0x307358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetViewMatrix__FPA4_fPf_0x1438a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307358u; }
        if (ctx->pc != 0x307358u) { return; }
    }
    ctx->pc = 0x307358u;
label_307358:
    // 0x307358: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x307358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30735c:
    // 0x30735c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30735cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307360:
    // 0x307360: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x307360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_307364:
    // 0x307364: 0x2442a2f0  addiu       $v0, $v0, -0x5D10
    ctx->pc = 0x307364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943472));
label_307368:
    // 0x307368: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x307368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_30736c:
    // 0x30736c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x30736cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_307370:
    // 0x307370: 0xc0a0ed8  jal         func_283B60
label_307374:
    if (ctx->pc == 0x307374u) {
        ctx->pc = 0x307374u;
            // 0x307374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x307378u;
        goto label_307378;
    }
    ctx->pc = 0x307370u;
    SET_GPR_U32(ctx, 31, 0x307378u);
    ctx->pc = 0x307374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307370u;
            // 0x307374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307378u; }
        if (ctx->pc != 0x307378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307378u; }
        if (ctx->pc != 0x307378u) { return; }
    }
    ctx->pc = 0x307378u;
label_307378:
    // 0x307378: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x307378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_30737c:
    // 0x30737c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x30737cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307380:
    // 0x307380: 0x2484a280  addiu       $a0, $a0, -0x5D80
    ctx->pc = 0x307380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
label_307384:
    // 0x307384: 0xc04c574  jal         func_1315D0
label_307388:
    if (ctx->pc == 0x307388u) {
        ctx->pc = 0x307388u;
            // 0x307388: 0x27a503a0  addiu       $a1, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->pc = 0x30738Cu;
        goto label_30738c;
    }
    ctx->pc = 0x307384u;
    SET_GPR_U32(ctx, 31, 0x30738Cu);
    ctx->pc = 0x307388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307384u;
            // 0x307388: 0x27a503a0  addiu       $a1, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30738Cu; }
        if (ctx->pc != 0x30738Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30738Cu; }
        if (ctx->pc != 0x30738Cu) { return; }
    }
    ctx->pc = 0x30738Cu;
label_30738c:
    // 0x30738c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30738cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_307390:
    // 0x307390: 0x27a503b0  addiu       $a1, $sp, 0x3B0
    ctx->pc = 0x307390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_307394:
    // 0x307394: 0xc04c578  jal         func_1315E0
label_307398:
    if (ctx->pc == 0x307398u) {
        ctx->pc = 0x307398u;
            // 0x307398: 0x2484a280  addiu       $a0, $a0, -0x5D80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
        ctx->pc = 0x30739Cu;
        goto label_30739c;
    }
    ctx->pc = 0x307394u;
    SET_GPR_U32(ctx, 31, 0x30739Cu);
    ctx->pc = 0x307398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307394u;
            // 0x307398: 0x2484a280  addiu       $a0, $a0, -0x5D80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315E0u;
    if (runtime->hasFunction(0x1315E0u)) {
        auto targetFn = runtime->lookupFunction(0x1315E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30739Cu; }
        if (ctx->pc != 0x30739Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRef__9mgCCameraFPf_0x1315e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30739Cu; }
        if (ctx->pc != 0x30739Cu) { return; }
    }
    ctx->pc = 0x30739Cu;
label_30739c:
    // 0x30739c: 0x27a403b0  addiu       $a0, $sp, 0x3B0
    ctx->pc = 0x30739cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_3073a0:
    // 0x3073a0: 0x27a603a0  addiu       $a2, $sp, 0x3A0
    ctx->pc = 0x3073a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_3073a4:
    // 0x3073a4: 0xc041c3e  jal         func_1070F8
label_3073a8:
    if (ctx->pc == 0x3073A8u) {
        ctx->pc = 0x3073A8u;
            // 0x3073a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3073ACu;
        goto label_3073ac;
    }
    ctx->pc = 0x3073A4u;
    SET_GPR_U32(ctx, 31, 0x3073ACu);
    ctx->pc = 0x3073A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3073A4u;
            // 0x3073a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3073ACu; }
        if (ctx->pc != 0x3073ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3073ACu; }
        if (ctx->pc != 0x3073ACu) { return; }
    }
    ctx->pc = 0x3073ACu;
label_3073ac:
    // 0x3073ac: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x3073acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_3073b0:
    // 0x3073b0: 0xc063bb0  jal         func_18EEC0
label_3073b4:
    if (ctx->pc == 0x3073B4u) {
        ctx->pc = 0x3073B4u;
            // 0x3073b4: 0x27a503b0  addiu       $a1, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->pc = 0x3073B8u;
        goto label_3073b8;
    }
    ctx->pc = 0x3073B0u;
    SET_GPR_U32(ctx, 31, 0x3073B8u);
    ctx->pc = 0x3073B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3073B0u;
            // 0x3073b4: 0x27a503b0  addiu       $a1, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18EEC0u;
    if (runtime->hasFunction(0x18EEC0u)) {
        auto targetFn = runtime->lookupFunction(0x18EEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3073B8u; }
        if (ctx->pc != 0x3073B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetMicPos__FPfPf_0x18eec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3073B8u; }
        if (ctx->pc != 0x3073B8u) { return; }
    }
    ctx->pc = 0x3073B8u;
label_3073b8:
    // 0x3073b8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3073b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3073bc:
    // 0x3073bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3073bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3073c0:
    // 0x3073c0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3073c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3073c4:
    // 0x3073c4: 0x320f809  jalr        $t9
label_3073c8:
    if (ctx->pc == 0x3073C8u) {
        ctx->pc = 0x3073C8u;
            // 0x3073c8: 0x27a50390  addiu       $a1, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->pc = 0x3073CCu;
        goto label_3073cc;
    }
    ctx->pc = 0x3073C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3073CCu);
        ctx->pc = 0x3073C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3073C4u;
            // 0x3073c8: 0x27a50390  addiu       $a1, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3073CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3073CCu; }
            if (ctx->pc != 0x3073CCu) { return; }
        }
        }
    }
    ctx->pc = 0x3073CCu;
label_3073cc:
    // 0x3073cc: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x3073ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_3073d0:
    // 0x3073d0: 0x3c0244c8  lui         $v0, 0x44C8
    ctx->pc = 0x3073d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17608 << 16));
label_3073d4:
    // 0x3073d4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3073d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3073d8:
    // 0x3073d8: 0x27a403e8  addiu       $a0, $sp, 0x3E8
    ctx->pc = 0x3073d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1000));
label_3073dc:
    // 0x3073dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3073dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3073e0:
    // 0x3073e0: 0x27a503ec  addiu       $a1, $sp, 0x3EC
    ctx->pc = 0x3073e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1004));
label_3073e4:
    // 0x3073e4: 0xc063bbc  jal         func_18EEF0
label_3073e8:
    if (ctx->pc == 0x3073E8u) {
        ctx->pc = 0x3073E8u;
            // 0x3073e8: 0x27a60390  addiu       $a2, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->pc = 0x3073ECu;
        goto label_3073ec;
    }
    ctx->pc = 0x3073E4u;
    SET_GPR_U32(ctx, 31, 0x3073ECu);
    ctx->pc = 0x3073E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3073E4u;
            // 0x3073e8: 0x27a60390  addiu       $a2, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18EEF0u;
    if (runtime->hasFunction(0x18EEF0u)) {
        auto targetFn = runtime->lookupFunction(0x18EEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3073ECu; }
        if (ctx->pc != 0x3073ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetVolPan__FPfPfPfff_0x18eef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3073ECu; }
        if (ctx->pc != 0x3073ECu) { return; }
    }
    ctx->pc = 0x3073ECu;
label_3073ec:
    // 0x3073ec: 0xc7a103a4  lwc1        $f1, 0x3A4($sp)
    ctx->pc = 0x3073ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3073f0:
    // 0x3073f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3073f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3073f4:
    // 0x3073f4: 0x0  nop
    ctx->pc = 0x3073f4u;
    // NOP
label_3073f8:
    // 0x3073f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3073f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3073fc:
    // 0x3073fc: 0x0  nop
    ctx->pc = 0x3073fcu;
    // NOP
label_307400:
    // 0x307400: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_307404:
    if (ctx->pc == 0x307404u) {
        ctx->pc = 0x307408u;
        goto label_307408;
    }
    ctx->pc = 0x307400u;
    {
        const bool branch_taken_0x307400 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x307400) {
            ctx->pc = 0x30744Cu;
            goto label_30744c;
        }
    }
    ctx->pc = 0x307408u;
label_307408:
    // 0x307408: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x307408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
label_30740c:
    // 0x30740c: 0xc7ac03e8  lwc1        $f12, 0x3E8($sp)
    ctx->pc = 0x30740cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_307410:
    // 0x307410: 0x26250009  addiu       $a1, $s1, 0x9
    ctx->pc = 0x307410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
label_307414:
    // 0x307414: 0xc063b38  jal         func_18ECE0
label_307418:
    if (ctx->pc == 0x307418u) {
        ctx->pc = 0x307418u;
            // 0x307418: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30741Cu;
        goto label_30741c;
    }
    ctx->pc = 0x307414u;
    SET_GPR_U32(ctx, 31, 0x30741Cu);
    ctx->pc = 0x307418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307414u;
            // 0x307418: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ECE0u;
    if (runtime->hasFunction(0x18ECE0u)) {
        auto targetFn = runtime->lookupFunction(0x18ECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30741Cu; }
        if (ctx->pc != 0x30741Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSeVolf__FUiifi_0x18ece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30741Cu; }
        if (ctx->pc != 0x30741Cu) { return; }
    }
    ctx->pc = 0x30741Cu;
label_30741c:
    // 0x30741c: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x30741cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
label_307420:
    // 0x307420: 0xc7ac03ec  lwc1        $f12, 0x3EC($sp)
    ctx->pc = 0x307420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_307424:
    // 0x307424: 0x26250009  addiu       $a1, $s1, 0x9
    ctx->pc = 0x307424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
label_307428:
    // 0x307428: 0xc063b58  jal         func_18ED60
label_30742c:
    if (ctx->pc == 0x30742Cu) {
        ctx->pc = 0x30742Cu;
            // 0x30742c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x307430u;
        goto label_307430;
    }
    ctx->pc = 0x307428u;
    SET_GPR_U32(ctx, 31, 0x307430u);
    ctx->pc = 0x30742Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307428u;
            // 0x30742c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ED60u;
    if (runtime->hasFunction(0x18ED60u)) {
        auto targetFn = runtime->lookupFunction(0x18ED60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307430u; }
        if (ctx->pc != 0x307430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSePanf__FUiifi_0x18ed60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307430u; }
        if (ctx->pc != 0x307430u) { return; }
    }
    ctx->pc = 0x307430u;
label_307430:
    // 0x307430: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x307430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
label_307434:
    // 0x307434: 0x26250003  addiu       $a1, $s1, 0x3
    ctx->pc = 0x307434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
label_307438:
    // 0x307438: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x307438u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30743c:
    // 0x30743c: 0xc063b38  jal         func_18ECE0
label_307440:
    if (ctx->pc == 0x307440u) {
        ctx->pc = 0x307440u;
            // 0x307440: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x307444u;
        goto label_307444;
    }
    ctx->pc = 0x30743Cu;
    SET_GPR_U32(ctx, 31, 0x307444u);
    ctx->pc = 0x307440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30743Cu;
            // 0x307440: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ECE0u;
    if (runtime->hasFunction(0x18ECE0u)) {
        auto targetFn = runtime->lookupFunction(0x18ECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307444u; }
        if (ctx->pc != 0x307444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSeVolf__FUiifi_0x18ece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307444u; }
        if (ctx->pc != 0x307444u) { return; }
    }
    ctx->pc = 0x307444u;
label_307444:
    // 0x307444: 0x10000011  b           . + 4 + (0x11 << 2)
label_307448:
    if (ctx->pc == 0x307448u) {
        ctx->pc = 0x30744Cu;
        goto label_30744c;
    }
    ctx->pc = 0x307444u;
    {
        const bool branch_taken_0x307444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307444) {
            ctx->pc = 0x30748Cu;
            goto label_30748c;
        }
    }
    ctx->pc = 0x30744Cu;
label_30744c:
    // 0x30744c: 0x0  nop
    ctx->pc = 0x30744cu;
    // NOP
label_307450:
    // 0x307450: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x307450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
label_307454:
    // 0x307454: 0xc7ac03e8  lwc1        $f12, 0x3E8($sp)
    ctx->pc = 0x307454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_307458:
    // 0x307458: 0x26250003  addiu       $a1, $s1, 0x3
    ctx->pc = 0x307458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
label_30745c:
    // 0x30745c: 0xc063b38  jal         func_18ECE0
label_307460:
    if (ctx->pc == 0x307460u) {
        ctx->pc = 0x307460u;
            // 0x307460: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x307464u;
        goto label_307464;
    }
    ctx->pc = 0x30745Cu;
    SET_GPR_U32(ctx, 31, 0x307464u);
    ctx->pc = 0x307460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30745Cu;
            // 0x307460: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ECE0u;
    if (runtime->hasFunction(0x18ECE0u)) {
        auto targetFn = runtime->lookupFunction(0x18ECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307464u; }
        if (ctx->pc != 0x307464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSeVolf__FUiifi_0x18ece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307464u; }
        if (ctx->pc != 0x307464u) { return; }
    }
    ctx->pc = 0x307464u;
label_307464:
    // 0x307464: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x307464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
label_307468:
    // 0x307468: 0xc7ac03ec  lwc1        $f12, 0x3EC($sp)
    ctx->pc = 0x307468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_30746c:
    // 0x30746c: 0x26250003  addiu       $a1, $s1, 0x3
    ctx->pc = 0x30746cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
label_307470:
    // 0x307470: 0xc063b58  jal         func_18ED60
label_307474:
    if (ctx->pc == 0x307474u) {
        ctx->pc = 0x307474u;
            // 0x307474: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x307478u;
        goto label_307478;
    }
    ctx->pc = 0x307470u;
    SET_GPR_U32(ctx, 31, 0x307478u);
    ctx->pc = 0x307474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307470u;
            // 0x307474: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ED60u;
    if (runtime->hasFunction(0x18ED60u)) {
        auto targetFn = runtime->lookupFunction(0x18ED60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307478u; }
        if (ctx->pc != 0x307478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSePanf__FUiifi_0x18ed60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307478u; }
        if (ctx->pc != 0x307478u) { return; }
    }
    ctx->pc = 0x307478u;
label_307478:
    // 0x307478: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x307478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
label_30747c:
    // 0x30747c: 0x26250009  addiu       $a1, $s1, 0x9
    ctx->pc = 0x30747cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
label_307480:
    // 0x307480: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x307480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_307484:
    // 0x307484: 0xc063b38  jal         func_18ECE0
label_307488:
    if (ctx->pc == 0x307488u) {
        ctx->pc = 0x307488u;
            // 0x307488: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30748Cu;
        goto label_30748c;
    }
    ctx->pc = 0x307484u;
    SET_GPR_U32(ctx, 31, 0x30748Cu);
    ctx->pc = 0x307488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307484u;
            // 0x307488: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ECE0u;
    if (runtime->hasFunction(0x18ECE0u)) {
        auto targetFn = runtime->lookupFunction(0x18ECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30748Cu; }
        if (ctx->pc != 0x30748Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSeVolf__FUiifi_0x18ece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30748Cu; }
        if (ctx->pc != 0x30748Cu) { return; }
    }
    ctx->pc = 0x30748Cu;
label_30748c:
    // 0x30748c: 0x0  nop
    ctx->pc = 0x30748cu;
    // NOP
label_307490:
    // 0x307490: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x307490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_307494:
    // 0x307494: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x307494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_307498:
    // 0x307498: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
label_30749c:
    if (ctx->pc == 0x30749Cu) {
        ctx->pc = 0x30749Cu;
            // 0x30749c: 0x2652002c  addiu       $s2, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->pc = 0x3074A0u;
        goto label_3074a0;
    }
    ctx->pc = 0x307498u;
    {
        const bool branch_taken_0x307498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30749Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307498u;
            // 0x30749c: 0x2652002c  addiu       $s2, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307498) {
            ctx->pc = 0x307360u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_307360;
        }
    }
    ctx->pc = 0x3074A0u;
label_3074a0:
    // 0x3074a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3074a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3074a4:
    // 0x3074a4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3074a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3074a8:
    // 0x3074a8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3074a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3074ac:
    // 0x3074ac: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3074acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3074b0:
    // 0x3074b0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3074b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3074b4:
    // 0x3074b4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3074b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3074b8:
    // 0x3074b8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3074b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3074bc:
    // 0x3074bc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3074bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3074c0:
    // 0x3074c0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3074c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3074c4:
    // 0x3074c4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3074c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3074c8:
    // 0x3074c8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3074c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3074cc:
    // 0x3074cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3074ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3074d0:
    // 0x3074d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3074d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3074d4:
    // 0x3074d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3074d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3074d8:
    // 0x3074d8: 0x3e00008  jr          $ra
label_3074dc:
    if (ctx->pc == 0x3074DCu) {
        ctx->pc = 0x3074DCu;
            // 0x3074dc: 0x27bd03f0  addiu       $sp, $sp, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
        ctx->pc = 0x3074E0u;
        goto label_fallthrough_0x3074d8;
    }
    ctx->pc = 0x3074D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3074DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3074D8u;
            // 0x3074dc: 0x27bd03f0  addiu       $sp, $sp, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3074d8:
    ctx->pc = 0x3074E0u;
}
